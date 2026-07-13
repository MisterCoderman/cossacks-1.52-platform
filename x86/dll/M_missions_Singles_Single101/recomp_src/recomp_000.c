#include "recomp.h"

/* FUN_10001000 @ 0x10f21000 (35 bytes, 13 insns) */
void f_10f21000(void) {
  FTRACE(0x10f21000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21000 push esi */
  push32((uint32_t)(ESI));
  /* 10f21001 mov esi, ecx */
  ESI = (ECX);
  /* 10f21003 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f21005 push esi */
  push32((uint32_t)(ESI));
  /* 10f21006 mov dword ptr [esi], 0x10f2d1e8 */
  w32((uint32_t)(ESI), (0x10f2d1e8u));
  /* 10f2100c call dword ptr [0x10f2d1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d8))), 0x10f21012u);
  /* 10f21012 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 10f21015 push eax */
  push32((uint32_t)(EAX));
  /* 10f21016 call dword ptr [0x10f2d1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1dc))), 0x10f2101cu);
  /* 10f2101c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2101f mov eax, esi */
  EAX = (ESI);
  /* 10f21021 pop esi */
  ESI = (pop32());
  /* 10f21022 ret  */
  ESPCHK(0x10f21000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001030 @ 0x10f21030 (30 bytes, 11 insns) */
void f_10f21030(void) {
  FTRACE(0x10f21030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21030 push esi */
  push32((uint32_t)(ESI));
  /* 10f21031 mov esi, ecx */
  ESI = (ECX);
  /* 10f21033 call 0x10f21050 */
  push32(0x10f21038u); f_10f21050();
  /* 10f21038 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 10f2103d je 0x10f21048 */
  if (C.zf) goto L_10f21048;
  /* 10f2103f push esi */
  push32((uint32_t)(ESI));
  /* 10f21040 call 0x10f23ae0 */
  push32(0x10f21045u); f_10f23ae0();
  /* 10f21045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f21048:;
  /* 10f21048 mov eax, esi */
  EAX = (ESI);
  /* 10f2104a pop esi */
  ESI = (pop32());
  /* 10f2104b ret 4 */
  ESPCHK(0x10f21030u, _esp0);
  ESP += 8; return;
}

/* FUN_10001050 @ 0x10f21050 (7 bytes, 2 insns) */
void f_10f21050(void) {
  FTRACE(0x10f21050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21050 mov dword ptr [ecx], 0x10f2d1e8 */
  w32((uint32_t)(ECX), (0x10f2d1e8u));
  /* 10f21056 ret  */
  ESPCHK(0x10f21050u, _esp0);
  ESP += 4; return;
}

/* FUN_10001060 @ 0x10f21060 (32 bytes, 11 insns) */
void f_10f21060(void) {
  FTRACE(0x10f21060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21060 push esi */
  push32((uint32_t)(ESI));
  /* 10f21061 mov esi, ecx */
  ESI = (ECX);
  /* 10f21063 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f21065 push esi */
  push32((uint32_t)(ESI));
  /* 10f21066 mov dword ptr [esi], 0x10f2d1ec */
  w32((uint32_t)(ESI), (0x10f2d1ecu));
  /* 10f2106c call dword ptr [0x10f2d1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d8))), 0x10f21072u);
  /* 10f21072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21075 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 10f2107c mov eax, esi */
  EAX = (ESI);
  /* 10f2107e pop esi */
  ESI = (pop32());
  /* 10f2107f ret  */
  ESPCHK(0x10f21060u, _esp0);
  ESP += 4; return;
}

/* FUN_10001080 @ 0x10f21080 (30 bytes, 11 insns) */
void f_10f21080(void) {
  FTRACE(0x10f21080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21080 push esi */
  push32((uint32_t)(ESI));
  /* 10f21081 mov esi, ecx */
  ESI = (ECX);
  /* 10f21083 call 0x10f210a0 */
  push32(0x10f21088u); f_10f210a0();
  /* 10f21088 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 10f2108d je 0x10f21098 */
  if (C.zf) goto L_10f21098;
  /* 10f2108f push esi */
  push32((uint32_t)(ESI));
  /* 10f21090 call 0x10f23ae0 */
  push32(0x10f21095u); f_10f23ae0();
  /* 10f21095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f21098:;
  /* 10f21098 mov eax, esi */
  EAX = (ESI);
  /* 10f2109a pop esi */
  ESI = (pop32());
  /* 10f2109b ret 4 */
  ESPCHK(0x10f21080u, _esp0);
  ESP += 8; return;
}

/* FUN_100010a0 @ 0x10f210a0 (7 bytes, 2 insns) */
void f_10f210a0(void) {
  FTRACE(0x10f210a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f210a0 mov dword ptr [ecx], 0x10f2d1ec */
  w32((uint32_t)(ECX), (0x10f2d1ecu));
  /* 10f210a6 ret  */
  ESPCHK(0x10f210a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100010b0 @ 0x10f210b0 (157 bytes, 61 insns) */
void f_10f210b0(void) {
  FTRACE(0x10f210b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f210b0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f210b3 push esi */
  push32((uint32_t)(ESI));
  /* 10f210b4 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f210b8 push edi */
  push32((uint32_t)(EDI));
  /* 10f210b9 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 10f210bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f210bf jne 0x10f210d5 */
  if (!C.zf) goto L_10f210d5;
  /* 10f210c1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f210c3 jne 0x10f210d5 */
  if (!C.zf) goto L_10f210d5;
  /* 10f210c5 mov eax, 0xc0 */
  EAX = (0xc0u);
  /* 10f210ca pop edi */
  EDI = (pop32());
  /* 10f210cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f210d0 pop esi */
  ESI = (pop32());
  /* 10f210d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f210d4 ret  */
  ESPCHK(0x10f210b0u, _esp0);
  ESP += 4; return;
L_10f210d5:;
  /* 10f210d5 mov eax, esi */
  EAX = (ESI);
  /* 10f210d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f210d8 mov ecx, eax */
  ECX = (EAX);
  /* 10f210da mov eax, edi */
  EAX = (EDI);
  /* 10f210dc xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f210de sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f210e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f210e1 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f210e3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f210e5 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f210e7 jle 0x10f21107 */
  if ((C.zf||C.sf!=C.of)) goto L_10f21107;
  /* 10f210e9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f210ec push ecx */
  push32((uint32_t)(ECX));
  /* 10f210ed push eax */
  push32((uint32_t)(EAX));
  /* 10f210ee call 0x10f23b63 */
  push32(0x10f210f3u); f_10f23b63();
  /* 10f210f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f210f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f210f8 mov cl, byte ptr [eax*2 + 0x10f325e8] */
  CL = (r8((uint32_t)(EAX*2 + 0x10f325e8)));
  /* 10f210ff mov dword ptr [esp + 0xc], edx */
  w32((uint32_t)(ESP + 0xc), (EDX));
  /* 10f21103 mov eax, ecx */
  EAX = (ECX);
  /* 10f21105 jmp 0x10f21128 */
  goto L_10f21128;
L_10f21107:;
  /* 10f21107 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f2110a push eax */
  push32((uint32_t)(EAX));
  /* 10f2110b push ecx */
  push32((uint32_t)(ECX));
  /* 10f2110c call 0x10f23b63 */
  push32(0x10f21111u); f_10f23b63();
  /* 10f21111 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 10f21115 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f21117 mov dl, byte ptr [eax*2 + 0x10f325e8] */
  DL = (r8((uint32_t)(EAX*2 + 0x10f325e8)));
  /* 10f2111e mov eax, 0x40 */
  EAX = (0x40u);
  /* 10f21123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21126 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f21128:;
  /* 10f21128 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2112a jge 0x10f21135 */
  if ((C.sf==C.of)) goto L_10f21135;
  /* 10f2112c mov ecx, 0x80 */
  ECX = (0x80u);
  /* 10f21131 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21133 mov eax, ecx */
  EAX = (ECX);
L_10f21135:;
  /* 10f21135 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f21137 jge 0x10f21142 */
  if ((C.sf==C.of)) goto L_10f21142;
  /* 10f21139 mov edx, 0x100 */
  EDX = (0x100u);
  /* 10f2113e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21140 mov eax, edx */
  EAX = (EDX);
L_10f21142:;
  /* 10f21142 pop edi */
  EDI = (pop32());
  /* 10f21143 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f21148 pop esi */
  ESI = (pop32());
  /* 10f21149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2114c ret  */
  ESPCHK(0x10f210b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001150 @ 0x10f21150 (44 bytes, 21 insns) */
void f_10f21150(void) {
  FTRACE(0x10f21150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21150 push edi */
  push32((uint32_t)(EDI));
  /* 10f21151 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f21155 push edi */
  push32((uint32_t)(EDI));
  /* 10f21156 call dword ptr [0x10f2d1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c8))), 0x10f2115cu);
  /* 10f2115c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2115f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f21161 jle 0x10f2117a */
  if ((C.zf||C.sf!=C.of)) goto L_10f2117a;
  /* 10f21163 push ebx */
  push32((uint32_t)(EBX));
  /* 10f21164 mov ebx, dword ptr [0x10f2d1cc] */
  EBX = (r32((uint32_t)(0x10f2d1cc)));
  /* 10f2116a push esi */
  push32((uint32_t)(ESI));
  /* 10f2116b mov esi, eax */
  ESI = (EAX);
L_10f2116d:;
  /* 10f2116d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2116f push edi */
  push32((uint32_t)(EDI));
  /* 10f21170 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21172u);
  /* 10f21172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21175 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f21176 jne 0x10f2116d */
  if (!C.zf) goto L_10f2116d;
  /* 10f21178 pop esi */
  ESI = (pop32());
  /* 10f21179 pop ebx */
  EBX = (pop32());
L_10f2117a:;
  /* 10f2117a pop edi */
  EDI = (pop32());
  /* 10f2117b ret  */
  ESPCHK(0x10f21150u, _esp0);
  ESP += 4; return;
}

/* FUN_10001180 @ 0x10f21180 (126 bytes, 44 insns) */
void f_10f21180(void) {
  FTRACE(0x10f21180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21180 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21183 push esi */
  push32((uint32_t)(ESI));
  /* 10f21184 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
  /* 10f21188 push edi */
  push32((uint32_t)(EDI));
  /* 10f21189 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f2118b lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10f2118f push esi */
  push32((uint32_t)(ESI));
  /* 10f21190 push eax */
  push32((uint32_t)(EAX));
  /* 10f21191 call dword ptr [0x10f2d1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1b8))), 0x10f21197u);
  /* 10f21197 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 10f2119b lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 10f2119f lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 10f211a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f211a4 push edx */
  push32((uint32_t)(EDX));
  /* 10f211a5 push edi */
  push32((uint32_t)(EDI));
  /* 10f211a6 call dword ptr [0x10f2d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1bc))), 0x10f211acu);
  /* 10f211ac mov eax, dword ptr [esp + 0x26] */
  EAX = (r32((uint32_t)(ESP + 0x26)));
  /* 10f211b0 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 10f211b4 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 10f211b8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f211bd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f211bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10f211c3 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f211c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f211ca sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f211cc push eax */
  push32((uint32_t)(EAX));
  /* 10f211cd call 0x10f210b0 */
  push32(0x10f211d2u); f_10f210b0();
  /* 10f211d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f211d4 push esi */
  push32((uint32_t)(ESI));
  /* 10f211d5 mov byte ptr [esp + 0x48], al */
  w8((uint32_t)(ESP + 0x48), (AL));
  /* 10f211d9 call dword ptr [0x10f2d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c0))), 0x10f211dfu);
  /* 10f211df mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 10f211e3 mov edx, dword ptr [esp + 0x48] */
  EDX = (r32((uint32_t)(ESP + 0x48)));
  /* 10f211e7 mov eax, dword ptr [esp + 0x40] */
  EAX = (r32((uint32_t)(ESP + 0x40)));
  /* 10f211eb push ecx */
  push32((uint32_t)(ECX));
  /* 10f211ec push edx */
  push32((uint32_t)(EDX));
  /* 10f211ed push edi */
  push32((uint32_t)(EDI));
  /* 10f211ee push eax */
  push32((uint32_t)(EAX));
  /* 10f211ef call dword ptr [0x10f2d1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c4))), 0x10f211f5u);
  /* 10f211f5 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f211f8 pop edi */
  EDI = (pop32());
  /* 10f211f9 pop esi */
  ESI = (pop32());
  /* 10f211fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f211fd ret  */
  ESPCHK(0x10f21180u, _esp0);
  ESP += 4; return;
}

/* FUN_10001350 @ 0x10f21350 (10 bytes, 2 insns) */
void f_10f21350(void) {
  FTRACE(0x10f21350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21350 mov ecx, 0x10f42760 */
  ECX = (0x10f42760u);
  /* 10f21355 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_10001360 @ 0x10f21360 (12 bytes, 4 insns) */
void f_10f21360(void) {
  FTRACE(0x10f21360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21360 push 0x10f21370 */
  push32((uint32_t)(0x10f21370u));
  /* 10f21365 call 0x10f23c06 */
  push32(0x10f2136au); f_10f23c06();
  /* 10f2136a pop ecx */
  ECX = (pop32());
  /* 10f2136b ret  */
  ESPCHK(0x10f21360u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x10f21390 (10 bytes, 2 insns) */
void f_10f21390(void) {
  FTRACE(0x10f21390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21390 mov ecx, 0x10f42778 */
  ECX = (0x10f42778u);
  /* 10f21395 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_100013a0 @ 0x10f213a0 (12 bytes, 4 insns) */
void f_10f213a0(void) {
  FTRACE(0x10f213a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f213a0 push 0x10f213b0 */
  push32((uint32_t)(0x10f213b0u));
  /* 10f213a5 call 0x10f23c06 */
  push32(0x10f213aau); f_10f23c06();
  /* 10f213aa pop ecx */
  ECX = (pop32());
  /* 10f213ab ret  */
  ESPCHK(0x10f213a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100013d0 @ 0x10f213d0 (10 bytes, 2 insns) */
void f_10f213d0(void) {
  FTRACE(0x10f213d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f213d0 mov ecx, 0x10f42790 */
  ECX = (0x10f42790u);
  /* 10f213d5 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_100013e0 @ 0x10f213e0 (12 bytes, 4 insns) */
void f_10f213e0(void) {
  FTRACE(0x10f213e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f213e0 push 0x10f213f0 */
  push32((uint32_t)(0x10f213f0u));
  /* 10f213e5 call 0x10f23c06 */
  push32(0x10f213eau); f_10f23c06();
  /* 10f213ea pop ecx */
  ECX = (pop32());
  /* 10f213eb ret  */
  ESPCHK(0x10f213e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001410 @ 0x10f21410 (10 bytes, 2 insns) */
void f_10f21410(void) {
  FTRACE(0x10f21410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21410 mov ecx, 0x10f42818 */
  ECX = (0x10f42818u);
  /* 10f21415 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_10001420 @ 0x10f21420 (12 bytes, 4 insns) */
void f_10f21420(void) {
  FTRACE(0x10f21420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21420 push 0x10f21430 */
  push32((uint32_t)(0x10f21430u));
  /* 10f21425 call 0x10f23c06 */
  push32(0x10f2142au); f_10f23c06();
  /* 10f2142a pop ecx */
  ECX = (pop32());
  /* 10f2142b ret  */
  ESPCHK(0x10f21420u, _esp0);
  ESP += 4; return;
}

/* FUN_10001450 @ 0x10f21450 (10 bytes, 2 insns) */
void f_10f21450(void) {
  FTRACE(0x10f21450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21450 mov ecx, 0x10f42830 */
  ECX = (0x10f42830u);
  /* 10f21455 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_10001460 @ 0x10f21460 (12 bytes, 4 insns) */
void f_10f21460(void) {
  FTRACE(0x10f21460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21460 push 0x10f21470 */
  push32((uint32_t)(0x10f21470u));
  /* 10f21465 call 0x10f23c06 */
  push32(0x10f2146au); f_10f23c06();
  /* 10f2146a pop ecx */
  ECX = (pop32());
  /* 10f2146b ret  */
  ESPCHK(0x10f21460u, _esp0);
  ESP += 4; return;
}

/* FUN_10001490 @ 0x10f21490 (10 bytes, 2 insns) */
void f_10f21490(void) {
  FTRACE(0x10f21490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21490 mov ecx, 0x10f42848 */
  ECX = (0x10f42848u);
  /* 10f21495 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_100014a0 @ 0x10f214a0 (12 bytes, 4 insns) */
void f_10f214a0(void) {
  FTRACE(0x10f214a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f214a0 push 0x10f214b0 */
  push32((uint32_t)(0x10f214b0u));
  /* 10f214a5 call 0x10f23c06 */
  push32(0x10f214aau); f_10f23c06();
  /* 10f214aa pop ecx */
  ECX = (pop32());
  /* 10f214ab ret  */
  ESPCHK(0x10f214a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014c0 @ 0x10f214c0 (64 bytes, 18 insns) */
void f_10f214c0(void) {
  FTRACE(0x10f214c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f214c0 push esi */
  push32((uint32_t)(ESI));
  /* 10f214c1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f214c5 cmp dword ptr [esi*8 + 0x10f32c84], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI*8 + 0x10f32c84))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f214d0 je 0x10f214e3 */
  if (C.zf) goto L_10f214e3;
  /* 10f214d2 lea eax, [esi*8 + 0x10f32c80] */
  EAX = ((uint32_t)(ESI*8 + 0x10f32c80));
  /* 10f214d9 push eax */
  push32((uint32_t)(EAX));
  /* 10f214da call dword ptr [0x10f2d1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1dc))), 0x10f214e0u);
  /* 10f214e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f214e3:;
  /* 10f214e3 lea ecx, [esi*8 + 0x10f32c80] */
  ECX = ((uint32_t)(ESI*8 + 0x10f32c80));
  /* 10f214ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10f214ec push ecx */
  push32((uint32_t)(ECX));
  /* 10f214ed push esi */
  push32((uint32_t)(ESI));
  /* 10f214ee call dword ptr [0x10f2d1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1ac))), 0x10f214f4u);
  /* 10f214f4 push esi */
  push32((uint32_t)(ESI));
  /* 10f214f5 call dword ptr [0x10f2d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1b0))), 0x10f214fbu);
  /* 10f214fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f214fe pop esi */
  ESI = (pop32());
  /* 10f214ff ret  */
  ESPCHK(0x10f214c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x10f21510 (10 bytes, 2 insns) */
void f_10f21510(void) {
  FTRACE(0x10f21510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21510 mov ecx, 0x10f427b8 */
  ECX = (0x10f427b8u);
  /* 10f21515 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_10001520 @ 0x10f21520 (12 bytes, 4 insns) */
void f_10f21520(void) {
  FTRACE(0x10f21520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21520 push 0x10f21530 */
  push32((uint32_t)(0x10f21530u));
  /* 10f21525 call 0x10f23c06 */
  push32(0x10f2152au); f_10f23c06();
  /* 10f2152a pop ecx */
  ECX = (pop32());
  /* 10f2152b ret  */
  ESPCHK(0x10f21520u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x10f21540 (33 bytes, 11 insns) */
void f_10f21540(void) {
  FTRACE(0x10f21540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21540 push esi */
  push32((uint32_t)(ESI));
  /* 10f21541 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f21545 push esi */
  push32((uint32_t)(ESI));
  /* 10f21546 call dword ptr [0x10f2d1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1b0))), 0x10f2154cu);
  /* 10f2154c lea eax, [esi*8 + 0x10f32c80] */
  EAX = ((uint32_t)(ESI*8 + 0x10f32c80));
  /* 10f21553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21555 push eax */
  push32((uint32_t)(EAX));
  /* 10f21556 call dword ptr [0x10f2d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c0))), 0x10f2155cu);
  /* 10f2155c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2155f pop esi */
  ESI = (pop32());
  /* 10f21560 ret  */
  ESPCHK(0x10f21540u, _esp0);
  ESP += 4; return;
}

/* FUN_10001580 @ 0x10f21580 (10 bytes, 2 insns) */
void f_10f21580(void) {
  FTRACE(0x10f21580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21580 mov ecx, 0x10f427d0 */
  ECX = (0x10f427d0u);
  /* 10f21585 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_10001590 @ 0x10f21590 (12 bytes, 4 insns) */
void f_10f21590(void) {
  FTRACE(0x10f21590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21590 push 0x10f215a0 */
  push32((uint32_t)(0x10f215a0u));
  /* 10f21595 call 0x10f23c06 */
  push32(0x10f2159au); f_10f23c06();
  /* 10f2159a pop ecx */
  ECX = (pop32());
  /* 10f2159b ret  */
  ESPCHK(0x10f21590u, _esp0);
  ESP += 4; return;
}

/* FUN_100015c0 @ 0x10f215c0 (10 bytes, 2 insns) */
void f_10f215c0(void) {
  FTRACE(0x10f215c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f215c0 mov ecx, 0x10f427f0 */
  ECX = (0x10f427f0u);
  /* 10f215c5 jmp 0x10f21000 */
  f_10f21000(); return;
}

/* FUN_100015d0 @ 0x10f215d0 (12 bytes, 4 insns) */
void f_10f215d0(void) {
  FTRACE(0x10f215d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f215d0 push 0x10f215e0 */
  push32((uint32_t)(0x10f215e0u));
  /* 10f215d5 call 0x10f23c06 */
  push32(0x10f215dau); f_10f23c06();
  /* 10f215da pop ecx */
  ECX = (pop32());
  /* 10f215db ret  */
  ESPCHK(0x10f215d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001600 @ 0x10f21600 (10 bytes, 2 insns) */
void f_10f21600(void) {
  FTRACE(0x10f21600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21600 mov ecx, 0x10f42758 */
  ECX = (0x10f42758u);
  /* 10f21605 jmp 0x10f21060 */
  f_10f21060(); return;
}

/* FUN_10001610 @ 0x10f21610 (12 bytes, 4 insns) */
void f_10f21610(void) {
  FTRACE(0x10f21610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21610 push 0x10f21620 */
  push32((uint32_t)(0x10f21620u));
  /* 10f21615 call 0x10f23c06 */
  push32(0x10f2161au); f_10f23c06();
  /* 10f2161a pop ecx */
  ECX = (pop32());
  /* 10f2161b ret  */
  ESPCHK(0x10f21610u, _esp0);
  ESP += 4; return;
}

/* FUN_10001640 @ 0x10f21640 (10 bytes, 2 insns) */
void f_10f21640(void) {
  FTRACE(0x10f21640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21640 mov ecx, 0x10f43c38 */
  ECX = (0x10f43c38u);
  /* 10f21645 jmp 0x10f21060 */
  f_10f21060(); return;
}

/* FUN_10001650 @ 0x10f21650 (12 bytes, 4 insns) */
void f_10f21650(void) {
  FTRACE(0x10f21650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21650 push 0x10f21660 */
  push32((uint32_t)(0x10f21660u));
  /* 10f21655 call 0x10f23c06 */
  push32(0x10f2165au); f_10f23c06();
  /* 10f2165a pop ecx */
  ECX = (pop32());
  /* 10f2165b ret  */
  ESPCHK(0x10f21650u, _esp0);
  ESP += 4; return;
}

/* FUN_100016a0 @ 0x10f216a0 (10 bytes, 2 insns) */
void f_10f216a0(void) {
  FTRACE(0x10f216a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f216a0 mov ecx, 0x10f42ca0 */
  ECX = (0x10f42ca0u);
  /* 10f216a5 jmp 0x10f21060 */
  f_10f21060(); return;
}

/* FUN_100016b0 @ 0x10f216b0 (12 bytes, 4 insns) */
void f_10f216b0(void) {
  FTRACE(0x10f216b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f216b0 push 0x10f216c0 */
  push32((uint32_t)(0x10f216c0u));
  /* 10f216b5 call 0x10f23c06 */
  push32(0x10f216bau); f_10f23c06();
  /* 10f216ba pop ecx */
  ECX = (pop32());
  /* 10f216bb ret  */
  ESPCHK(0x10f216b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100016e0 @ 0x10f216e0 (10 bytes, 2 insns) */
void f_10f216e0(void) {
  FTRACE(0x10f216e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f216e0 mov ecx, 0x10f43c30 */
  ECX = (0x10f43c30u);
  /* 10f216e5 jmp 0x10f21060 */
  f_10f21060(); return;
}

/* FUN_100016f0 @ 0x10f216f0 (12 bytes, 4 insns) */
void f_10f216f0(void) {
  FTRACE(0x10f216f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f216f0 push 0x10f21700 */
  push32((uint32_t)(0x10f21700u));
  /* 10f216f5 call 0x10f23c06 */
  push32(0x10f216fau); f_10f23c06();
  /* 10f216fa pop ecx */
  ECX = (pop32());
  /* 10f216fb ret  */
  ESPCHK(0x10f216f0u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x10f21710 (1963 bytes, 491 insns) */
void f_10f21710(void) {
  FTRACE(0x10f21710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21710 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21713 push ebx */
  push32((uint32_t)(EBX));
  /* 10f21714 push ebp */
  push32((uint32_t)(EBP));
  /* 10f21715 push esi */
  push32((uint32_t)(ESI));
  /* 10f21716 push edi */
  push32((uint32_t)(EDI));
  /* 10f21717 mov edi, dword ptr [0x10f2d18c] */
  EDI = (r32((uint32_t)(0x10f2d18c)));
  /* 10f2171d push 0x10f2f508 */
  push32((uint32_t)(0x10f2f508u));
  /* 10f21722 push 0x10f427a8 */
  push32((uint32_t)(0x10f427a8u));
  /* 10f21727 call edi */
  call_ind((uint32_t)(EDI), 0x10f21729u);
  /* 10f21729 push 0x10f2f4fc */
  push32((uint32_t)(0x10f2f4fcu));
  /* 10f2172e push 0x10f43c18 */
  push32((uint32_t)(0x10f43c18u));
  /* 10f21733 call edi */
  call_ind((uint32_t)(EDI), 0x10f21735u);
  /* 10f21735 push 0x10f2f4f0 */
  push32((uint32_t)(0x10f2f4f0u));
  /* 10f2173a push 0x10f43c80 */
  push32((uint32_t)(0x10f43c80u));
  /* 10f2173f call edi */
  call_ind((uint32_t)(EDI), 0x10f21741u);
  /* 10f21741 push 0x10f2f4e4 */
  push32((uint32_t)(0x10f2f4e4u));
  /* 10f21746 push 0x10f32fc8 */
  push32((uint32_t)(0x10f32fc8u));
  /* 10f2174b call edi */
  call_ind((uint32_t)(EDI), 0x10f2174du);
  /* 10f2174d push 0x10f2f4d8 */
  push32((uint32_t)(0x10f2f4d8u));
  /* 10f21752 push 0x10f32fe0 */
  push32((uint32_t)(0x10f32fe0u));
  /* 10f21757 call edi */
  call_ind((uint32_t)(EDI), 0x10f21759u);
  /* 10f21759 mov ebx, dword ptr [0x10f2d190] */
  EBX = (r32((uint32_t)(0x10f2d190)));
  /* 10f2175f push 0x10f2f4cc */
  push32((uint32_t)(0x10f2f4ccu));
  /* 10f21764 push 0x10f43c58 */
  push32((uint32_t)(0x10f43c58u));
  /* 10f21769 call ebx */
  call_ind((uint32_t)(EBX), 0x10f2176bu);
  /* 10f2176b push 0x10f2f4c0 */
  push32((uint32_t)(0x10f2f4c0u));
  /* 10f21770 push 0x10f43c50 */
  push32((uint32_t)(0x10f43c50u));
  /* 10f21775 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21777u);
  /* 10f21777 push 0x10f2f4b4 */
  push32((uint32_t)(0x10f2f4b4u));
  /* 10f2177c push 0x10f32d18 */
  push32((uint32_t)(0x10f32d18u));
  /* 10f21781 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21783u);
  /* 10f21783 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21786 push 0x10f2f4a8 */
  push32((uint32_t)(0x10f2f4a8u));
  /* 10f2178b push 0x10f32fb8 */
  push32((uint32_t)(0x10f32fb8u));
  /* 10f21790 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21792u);
  /* 10f21792 push 0x10f2f49c */
  push32((uint32_t)(0x10f2f49cu));
  /* 10f21797 push 0x10f32fd8 */
  push32((uint32_t)(0x10f32fd8u));
  /* 10f2179c call ebx */
  call_ind((uint32_t)(EBX), 0x10f2179eu);
  /* 10f2179e mov ebp, dword ptr [0x10f2d1dc] */
  EBP = (r32((uint32_t)(0x10f2d1dc)));
  /* 10f217a4 push 0x10f43ca8 */
  push32((uint32_t)(0x10f43ca8u));
  /* 10f217a9 call ebp */
  call_ind((uint32_t)(EBP), 0x10f217abu);
  /* 10f217ab mov esi, dword ptr [0x10f2d194] */
  ESI = (r32((uint32_t)(0x10f2d194)));
  /* 10f217b1 push 0x10f2f494 */
  push32((uint32_t)(0x10f2f494u));
  /* 10f217b6 push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f217bb call esi */
  call_ind((uint32_t)(ESI), 0x10f217bdu);
  /* 10f217bd push 0x10f2f48c */
  push32((uint32_t)(0x10f2f48cu));
  /* 10f217c2 push 0x10f43c98 */
  push32((uint32_t)(0x10f43c98u));
  /* 10f217c7 call esi */
  call_ind((uint32_t)(ESI), 0x10f217c9u);
  /* 10f217c9 push 0x10f43c00 */
  push32((uint32_t)(0x10f43c00u));
  /* 10f217ce call ebp */
  call_ind((uint32_t)(EBP), 0x10f217d0u);
  /* 10f217d0 push 0x10f2f478 */
  push32((uint32_t)(0x10f2f478u));
  /* 10f217d5 push 0x10f43c88 */
  push32((uint32_t)(0x10f43c88u));
  /* 10f217da call ebx */
  call_ind((uint32_t)(EBX), 0x10f217dcu);
  /* 10f217dc push 0x10f2f46c */
  push32((uint32_t)(0x10f2f46cu));
  /* 10f217e1 push 0x10f43bd8 */
  push32((uint32_t)(0x10f43bd8u));
  /* 10f217e6 call edi */
  call_ind((uint32_t)(EDI), 0x10f217e8u);
  /* 10f217e8 push 0x10f2f460 */
  push32((uint32_t)(0x10f2f460u));
  /* 10f217ed push 0x10f43c70 */
  push32((uint32_t)(0x10f43c70u));
  /* 10f217f2 call esi */
  call_ind((uint32_t)(ESI), 0x10f217f4u);
  /* 10f217f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f217f7 push 0x10f2f454 */
  push32((uint32_t)(0x10f2f454u));
  /* 10f217fc push 0x10f43c78 */
  push32((uint32_t)(0x10f43c78u));
  /* 10f21801 call esi */
  call_ind((uint32_t)(ESI), 0x10f21803u);
  /* 10f21803 push 0x10f2f448 */
  push32((uint32_t)(0x10f2f448u));
  /* 10f21808 push 0x10f32ce0 */
  push32((uint32_t)(0x10f32ce0u));
  /* 10f2180d call esi */
  call_ind((uint32_t)(ESI), 0x10f2180fu);
  /* 10f2180f push 0x10f2f43c */
  push32((uint32_t)(0x10f2f43cu));
  /* 10f21814 push 0x10f43c28 */
  push32((uint32_t)(0x10f43c28u));
  /* 10f21819 call esi */
  call_ind((uint32_t)(ESI), 0x10f2181bu);
  /* 10f2181b push 0x10f427e8 */
  push32((uint32_t)(0x10f427e8u));
  /* 10f21820 call ebp */
  call_ind((uint32_t)(EBP), 0x10f21822u);
  /* 10f21822 push 0x10f2f42c */
  push32((uint32_t)(0x10f2f42cu));
  /* 10f21827 push 0x10f43c90 */
  push32((uint32_t)(0x10f43c90u));
  /* 10f2182c call esi */
  call_ind((uint32_t)(ESI), 0x10f2182eu);
  /* 10f2182e push 8 */
  push32((uint32_t)(0x8u));
  /* 10f21830 push 0x10f427e8 */
  push32((uint32_t)(0x10f427e8u));
  /* 10f21835 call dword ptr [0x10f2d1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d8))), 0x10f2183bu);
  /* 10f2183b push 0x10f2f41c */
  push32((uint32_t)(0x10f2f41cu));
  /* 10f21840 push 0x10f32fd0 */
  push32((uint32_t)(0x10f32fd0u));
  /* 10f21845 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21847u);
  /* 10f21847 push 0x10f2f414 */
  push32((uint32_t)(0x10f2f414u));
  /* 10f2184c push 0x10f43bf0 */
  push32((uint32_t)(0x10f43bf0u));
  /* 10f21851 call esi */
  call_ind((uint32_t)(ESI), 0x10f21853u);
  /* 10f21853 push 0x10f2f40c */
  push32((uint32_t)(0x10f2f40cu));
  /* 10f21858 push 0x10f43bf8 */
  push32((uint32_t)(0x10f43bf8u));
  /* 10f2185d call esi */
  call_ind((uint32_t)(ESI), 0x10f2185fu);
  /* 10f2185f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21862 push 0x10f2f404 */
  push32((uint32_t)(0x10f2f404u));
  /* 10f21867 push 0x10f43be0 */
  push32((uint32_t)(0x10f43be0u));
  /* 10f2186c call esi */
  call_ind((uint32_t)(ESI), 0x10f2186eu);
  /* 10f2186e push 0x10f2f3fc */
  push32((uint32_t)(0x10f2f3fcu));
  /* 10f21873 push 0x10f43be8 */
  push32((uint32_t)(0x10f43be8u));
  /* 10f21878 call esi */
  call_ind((uint32_t)(ESI), 0x10f2187au);
  /* 10f2187a push 0x10f2f3f0 */
  push32((uint32_t)(0x10f2f3f0u));
  /* 10f2187f push 0x10f32cd0 */
  push32((uint32_t)(0x10f32cd0u));
  /* 10f21884 call edi */
  call_ind((uint32_t)(EDI), 0x10f21886u);
  /* 10f21886 push 0x10f2f3e4 */
  push32((uint32_t)(0x10f2f3e4u));
  /* 10f2188b push 0x10f32bf8 */
  push32((uint32_t)(0x10f32bf8u));
  /* 10f21890 call edi */
  call_ind((uint32_t)(EDI), 0x10f21892u);
  /* 10f21892 push 0x10f2f3d8 */
  push32((uint32_t)(0x10f2f3d8u));
  /* 10f21897 push 0x10f43c60 */
  push32((uint32_t)(0x10f43c60u));
  /* 10f2189c call edi */
  call_ind((uint32_t)(EDI), 0x10f2189eu);
  /* 10f2189e push 0x10f2f3cc */
  push32((uint32_t)(0x10f2f3ccu));
  /* 10f218a3 push 0x10f43c20 */
  push32((uint32_t)(0x10f43c20u));
  /* 10f218a8 call esi */
  call_ind((uint32_t)(ESI), 0x10f218aau);
  /* 10f218aa push 0x10f2f3c0 */
  push32((uint32_t)(0x10f2f3c0u));
  /* 10f218af push 0x10f43c08 */
  push32((uint32_t)(0x10f43c08u));
  /* 10f218b4 call esi */
  call_ind((uint32_t)(ESI), 0x10f218b6u);
  /* 10f218b6 push 0x10f2f3b4 */
  push32((uint32_t)(0x10f2f3b4u));
  /* 10f218bb push 0x10f32cc8 */
  push32((uint32_t)(0x10f32cc8u));
  /* 10f218c0 call esi */
  call_ind((uint32_t)(ESI), 0x10f218c2u);
  /* 10f218c2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f218c5 push 0x10f2f3a8 */
  push32((uint32_t)(0x10f2f3a8u));
  /* 10f218ca push 0x10f32d08 */
  push32((uint32_t)(0x10f32d08u));
  /* 10f218cf call esi */
  call_ind((uint32_t)(ESI), 0x10f218d1u);
  /* 10f218d1 push 0x10f2f39c */
  push32((uint32_t)(0x10f2f39cu));
  /* 10f218d6 push 0x10f32d00 */
  push32((uint32_t)(0x10f32d00u));
  /* 10f218db call esi */
  call_ind((uint32_t)(ESI), 0x10f218ddu);
  /* 10f218dd push 0x10f2f390 */
  push32((uint32_t)(0x10f2f390u));
  /* 10f218e2 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f218e7 call edi */
  call_ind((uint32_t)(EDI), 0x10f218e9u);
  /* 10f218e9 push 0x10f2f384 */
  push32((uint32_t)(0x10f2f384u));
  /* 10f218ee push 0x10f42810 */
  push32((uint32_t)(0x10f42810u));
  /* 10f218f3 call esi */
  call_ind((uint32_t)(ESI), 0x10f218f5u);
  /* 10f218f5 push 0x10f2f37c */
  push32((uint32_t)(0x10f2f37cu));
  /* 10f218fa push 0x10f43c10 */
  push32((uint32_t)(0x10f43c10u));
  /* 10f218ff call edi */
  call_ind((uint32_t)(EDI), 0x10f21901u);
  /* 10f21901 push 0x10f2f370 */
  push32((uint32_t)(0x10f2f370u));
  /* 10f21906 push 0x10f32cc0 */
  push32((uint32_t)(0x10f32cc0u));
  /* 10f2190b call esi */
  call_ind((uint32_t)(ESI), 0x10f2190du);
  /* 10f2190d push 0x10f2f364 */
  push32((uint32_t)(0x10f2f364u));
  /* 10f21912 push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f21917 call edi */
  call_ind((uint32_t)(EDI), 0x10f21919u);
  /* 10f21919 push 0x10f2f358 */
  push32((uint32_t)(0x10f2f358u));
  /* 10f2191e push 0x10f43c40 */
  push32((uint32_t)(0x10f43c40u));
  /* 10f21923 call esi */
  call_ind((uint32_t)(ESI), 0x10f21925u);
  /* 10f21925 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21928 push 0x10f2f350 */
  push32((uint32_t)(0x10f2f350u));
  /* 10f2192d push 0x10f43cb0 */
  push32((uint32_t)(0x10f43cb0u));
  /* 10f21932 call edi */
  call_ind((uint32_t)(EDI), 0x10f21934u);
  /* 10f21934 push 0x10f2f344 */
  push32((uint32_t)(0x10f2f344u));
  /* 10f21939 push 0x10f32fc0 */
  push32((uint32_t)(0x10f32fc0u));
  /* 10f2193e call esi */
  call_ind((uint32_t)(ESI), 0x10f21940u);
  /* 10f21940 mov eax, dword ptr [0x10f43c68] */
  EAX = (r32((uint32_t)(0x10f43c68)));
  /* 10f21945 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21948 mov ecx, 0x10f42ca8 */
  ECX = (0x10f42ca8u);
  /* 10f2194d push eax */
  push32((uint32_t)(EAX));
  /* 10f2194e push eax */
  push32((uint32_t)(EAX));
  /* 10f2194f call 0x10f23aa0 */
  push32(0x10f21954u); f_10f23aa0();
  /* 10f21954 push 0x10f2f338 */
  push32((uint32_t)(0x10f2f338u));
  /* 10f21959 push 0x10f2f32c */
  push32((uint32_t)(0x10f2f32cu));
  /* 10f2195e push 0x10f2f324 */
  push32((uint32_t)(0x10f2f324u));
  /* 10f21963 push 0x10f2f31c */
  push32((uint32_t)(0x10f2f31cu));
  /* 10f21968 mov ecx, 0x10f43a86 */
  ECX = (0x10f43a86u);
  /* 10f2196d call 0x10f23650 */
  push32(0x10f21972u); f_10f23650();
  /* 10f21972 push 0x10f2f310 */
  push32((uint32_t)(0x10f2f310u));
  /* 10f21977 push 0x10f42c20 */
  push32((uint32_t)(0x10f42c20u));
  /* 10f2197c call ebx */
  call_ind((uint32_t)(EBX), 0x10f2197eu);
  /* 10f2197e mov eax, dword ptr [0x10f32cfa] */
  EAX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21986 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f21988 push 0x10f2f324 */
  push32((uint32_t)(0x10f2f324u));
  /* 10f2198d push 0x10f2f304 */
  push32((uint32_t)(0x10f2f304u));
  /* 10f21992 push eax */
  push32((uint32_t)(EAX));
  /* 10f21993 mov ecx, 0x10f32fe8 */
  ECX = (0x10f32fe8u);
  /* 10f21998 call 0x10f23300 */
  push32(0x10f2199du); f_10f23300();
  /* 10f2199d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f219a2 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f219a7 push 0x10f2f2f8 */
  push32((uint32_t)(0x10f2f2f8u));
  /* 10f219ac mov ecx, 0x10f32fe8 */
  ECX = (0x10f32fe8u);
  /* 10f219b1 call 0x10f233c0 */
  push32(0x10f219b6u); f_10f233c0();
  /* 10f219b6 push 0x10f2f2f0 */
  push32((uint32_t)(0x10f2f2f0u));
  /* 10f219bb push 0x10f2f304 */
  push32((uint32_t)(0x10f2f304u));
  /* 10f219c0 call dword ptr [0x10f2d198] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d198))), 0x10f219c6u);
  /* 10f219c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f219c9 mov ecx, 0x10f32fe8 */
  ECX = (0x10f32fe8u);
  /* 10f219ce push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10f219d0 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10f219d5 push 0x10f2f2e4 */
  push32((uint32_t)(0x10f2f2e4u));
  /* 10f219da call 0x10f233f0 */
  push32(0x10f219dfu); f_10f233f0();
  /* 10f219df push 0xa */
  push32((uint32_t)(0xau));
  /* 10f219e1 mov ecx, 0x10f32fe8 */
  ECX = (0x10f32fe8u);
  /* 10f219e6 call 0x10f233b0 */
  push32(0x10f219ebu); f_10f233b0();
  /* 10f219eb mov ecx, dword ptr [0x10f32cfa] */
  ECX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f219f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f219f3 push 0x10f2f2d8 */
  push32((uint32_t)(0x10f2f2d8u));
  /* 10f219f8 push 0x10f2f2cc */
  push32((uint32_t)(0x10f2f2ccu));
  /* 10f219fd push ecx */
  push32((uint32_t)(ECX));
  /* 10f219fe mov ecx, 0x10f42860 */
  ECX = (0x10f42860u);
  /* 10f21a03 call 0x10f23300 */
  push32(0x10f21a08u); f_10f23300();
  /* 10f21a08 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21a0d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f21a12 push 0x10f2f2c0 */
  push32((uint32_t)(0x10f2f2c0u));
  /* 10f21a17 mov ecx, 0x10f42860 */
  ECX = (0x10f42860u);
  /* 10f21a1c call 0x10f233c0 */
  push32(0x10f21a21u); f_10f233c0();
  /* 10f21a21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21a23 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f21a28 push 0x10f2f2b4 */
  push32((uint32_t)(0x10f2f2b4u));
  /* 10f21a2d mov ecx, 0x10f42860 */
  ECX = (0x10f42860u);
  /* 10f21a32 call 0x10f233f0 */
  push32(0x10f21a37u); f_10f233f0();
  /* 10f21a37 mov edx, dword ptr [0x10f32cfa] */
  EDX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21a3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21a3f push 0x10f2f2a8 */
  push32((uint32_t)(0x10f2f2a8u));
  /* 10f21a44 push 0x10f2f29c */
  push32((uint32_t)(0x10f2f29cu));
  /* 10f21a49 push edx */
  push32((uint32_t)(EDX));
  /* 10f21a4a mov ecx, 0x10f428d8 */
  ECX = (0x10f428d8u);
  /* 10f21a4f call 0x10f23300 */
  push32(0x10f21a54u); f_10f23300();
  /* 10f21a54 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21a59 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f21a5e push 0x10f2f2c0 */
  push32((uint32_t)(0x10f2f2c0u));
  /* 10f21a63 mov ecx, 0x10f428d8 */
  ECX = (0x10f428d8u);
  /* 10f21a68 call 0x10f233c0 */
  push32(0x10f21a6du); f_10f233c0();
  /* 10f21a6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21a6f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f21a74 push 0x10f2f2b4 */
  push32((uint32_t)(0x10f2f2b4u));
  /* 10f21a79 mov ecx, 0x10f428d8 */
  ECX = (0x10f428d8u);
  /* 10f21a7e call 0x10f233f0 */
  push32(0x10f21a83u); f_10f233f0();
  /* 10f21a83 mov eax, dword ptr [0x10f32cfa] */
  EAX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21a88 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21a8a push 0x10f2f290 */
  push32((uint32_t)(0x10f2f290u));
  /* 10f21a8f push 0x10f2f284 */
  push32((uint32_t)(0x10f2f284u));
  /* 10f21a94 push eax */
  push32((uint32_t)(EAX));
  /* 10f21a95 mov ecx, 0x10f42950 */
  ECX = (0x10f42950u);
  /* 10f21a9a call 0x10f23300 */
  push32(0x10f21a9fu); f_10f23300();
  /* 10f21a9f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21aa4 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 10f21aa9 push 0x10f2f2f8 */
  push32((uint32_t)(0x10f2f2f8u));
  /* 10f21aae mov ecx, 0x10f42950 */
  ECX = (0x10f42950u);
  /* 10f21ab3 call 0x10f233c0 */
  push32(0x10f21ab8u); f_10f233c0();
  /* 10f21ab8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21aba push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 10f21abf push 0x10f2f278 */
  push32((uint32_t)(0x10f2f278u));
  /* 10f21ac4 mov ecx, 0x10f42950 */
  ECX = (0x10f42950u);
  /* 10f21ac9 call 0x10f233f0 */
  push32(0x10f21aceu); f_10f233f0();
  /* 10f21ace push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21ad0 call dword ptr [0x10f2d19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d19c))), 0x10f21ad6u);
  /* 10f21ad6 mov ecx, 4 */
  ECX = (0x4u);
  /* 10f21adb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21ade sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21ae0 mov ebp, ecx */
  EBP = (ECX);
  /* 10f21ae2 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 10f21ae5 lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 10f21ae8 lea esi, [esi + esi*4] */
  ESI = ((uint32_t)(ESI + ESI*4));
  /* 10f21aeb shl esi, 1 */
  ESI = (sh_shl((uint32_t)(ESI), (0x1u)&0x1f, 32));
  /* 10f21aed mov edi, ecx */
  EDI = (ECX);
  /* 10f21aef lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10f21af2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21af4 push 0x10f2f268 */
  push32((uint32_t)(0x10f2f268u));
  /* 10f21af9 lea ebx, [ecx + ecx*8] */
  EBX = ((uint32_t)(ECX + ECX*8));
  /* 10f21afc mov ecx, dword ptr [0x10f32cfa] */
  ECX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21b02 push 0x10f2f25c */
  push32((uint32_t)(0x10f2f25cu));
  /* 10f21b07 push ecx */
  push32((uint32_t)(ECX));
  /* 10f21b08 lea ebx, [ebx + ebx*4] */
  EBX = ((uint32_t)(EBX + EBX*4));
  /* 10f21b0b mov ecx, 0x10f33060 */
  ECX = (0x10f33060u);
  /* 10f21b10 imul ebp, ebp, 0x190 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x190u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f21b16 imul edi, edi, 0x320 */
  { int64_t _p=(int64_t)(int32_t)(EDI)*(int64_t)(int32_t)(0x320u); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f21b1c shl ebx, 2 */
  EBX = (sh_shl((uint32_t)(EBX), (0x2u)&0x1f, 32));
  /* 10f21b1f call 0x10f23300 */
  push32(0x10f21b24u); f_10f23300();
  /* 10f21b24 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21b29 push esi */
  push32((uint32_t)(ESI));
  /* 10f21b2a push 0x10f2f248 */
  push32((uint32_t)(0x10f2f248u));
  /* 10f21b2f mov ecx, 0x10f33060 */
  ECX = (0x10f33060u);
  /* 10f21b34 call 0x10f233c0 */
  push32(0x10f21b39u); f_10f233c0();
  /* 10f21b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21b3b push ebp */
  push32((uint32_t)(EBP));
  /* 10f21b3c push 0x10f2f234 */
  push32((uint32_t)(0x10f2f234u));
  /* 10f21b41 mov ecx, 0x10f33060 */
  ECX = (0x10f33060u);
  /* 10f21b46 call 0x10f233f0 */
  push32(0x10f21b4bu); f_10f233f0();
  /* 10f21b4b mov edx, dword ptr [0x10f32cfa] */
  EDX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21b51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21b53 push 0x10f2f224 */
  push32((uint32_t)(0x10f2f224u));
  /* 10f21b58 push 0x10f2f218 */
  push32((uint32_t)(0x10f2f218u));
  /* 10f21b5d push edx */
  push32((uint32_t)(EDX));
  /* 10f21b5e mov ecx, 0x10f330d8 */
  ECX = (0x10f330d8u);
  /* 10f21b63 call 0x10f23300 */
  push32(0x10f21b68u); f_10f23300();
  /* 10f21b68 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21b6d push esi */
  push32((uint32_t)(ESI));
  /* 10f21b6e push 0x10f2f248 */
  push32((uint32_t)(0x10f2f248u));
  /* 10f21b73 mov ecx, 0x10f330d8 */
  ECX = (0x10f330d8u);
  /* 10f21b78 call 0x10f233c0 */
  push32(0x10f21b7du); f_10f233c0();
  /* 10f21b7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21b7f push ebp */
  push32((uint32_t)(EBP));
  /* 10f21b80 push 0x10f2f234 */
  push32((uint32_t)(0x10f2f234u));
  /* 10f21b85 mov ecx, 0x10f330d8 */
  ECX = (0x10f330d8u);
  /* 10f21b8a call 0x10f233f0 */
  push32(0x10f21b8fu); f_10f233f0();
  /* 10f21b8f mov eax, dword ptr [0x10f32cfa] */
  EAX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21b94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21b96 push 0x10f2f208 */
  push32((uint32_t)(0x10f2f208u));
  /* 10f21b9b push 0x10f2f1fc */
  push32((uint32_t)(0x10f2f1fcu));
  /* 10f21ba0 push eax */
  push32((uint32_t)(EAX));
  /* 10f21ba1 mov ecx, 0x10f33150 */
  ECX = (0x10f33150u);
  /* 10f21ba6 call 0x10f23300 */
  push32(0x10f21babu); f_10f23300();
  /* 10f21bab push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21bb0 push esi */
  push32((uint32_t)(ESI));
  /* 10f21bb1 push 0x10f2f248 */
  push32((uint32_t)(0x10f2f248u));
  /* 10f21bb6 mov ecx, 0x10f33150 */
  ECX = (0x10f33150u);
  /* 10f21bbb call 0x10f233c0 */
  push32(0x10f21bc0u); f_10f233c0();
  /* 10f21bc0 lea eax, [ebp - 0x19] */
  EAX = ((uint32_t)(EBP + -0x19));
  /* 10f21bc3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10f21bc6 push 0x10f2f1e4 */
  push32((uint32_t)(0x10f2f1e4u));
  /* 10f21bcb mov ecx, 0x10f33150 */
  ECX = (0x10f33150u);
  /* 10f21bd0 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10f21bd4 call 0x10f233f0 */
  push32(0x10f21bd9u); f_10f233f0();
  /* 10f21bd9 mov ecx, dword ptr [0x10f32cfa] */
  ECX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21bdf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21be1 push 0x10f2f1d8 */
  push32((uint32_t)(0x10f2f1d8u));
  /* 10f21be6 push 0x10f2f1cc */
  push32((uint32_t)(0x10f2f1ccu));
  /* 10f21beb push ecx */
  push32((uint32_t)(ECX));
  /* 10f21bec mov ecx, 0x10f331c8 */
  ECX = (0x10f331c8u);
  /* 10f21bf1 call 0x10f23300 */
  push32(0x10f21bf6u); f_10f23300();
  /* 10f21bf6 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21bfb push esi */
  push32((uint32_t)(ESI));
  /* 10f21bfc push 0x10f2f1b8 */
  push32((uint32_t)(0x10f2f1b8u));
  /* 10f21c01 mov ecx, 0x10f331c8 */
  ECX = (0x10f331c8u);
  /* 10f21c06 call 0x10f233c0 */
  push32(0x10f21c0bu); f_10f233c0();
  /* 10f21c0b mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f21c0f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21c11 push edx */
  push32((uint32_t)(EDX));
  /* 10f21c12 push 0x10f2f1e4 */
  push32((uint32_t)(0x10f2f1e4u));
  /* 10f21c17 mov ecx, 0x10f331c8 */
  ECX = (0x10f331c8u);
  /* 10f21c1c call 0x10f233f0 */
  push32(0x10f21c21u); f_10f233f0();
  /* 10f21c21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21c23 push 0x10f2f1ac */
  push32((uint32_t)(0x10f2f1acu));
  /* 10f21c28 push 0x10f2f1a0 */
  push32((uint32_t)(0x10f2f1a0u));
  /* 10f21c2d mov eax, dword ptr [0x10f32cfa] */
  EAX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21c32 mov ecx, 0x10f33240 */
  ECX = (0x10f33240u);
  /* 10f21c37 push eax */
  push32((uint32_t)(EAX));
  /* 10f21c38 call 0x10f23300 */
  push32(0x10f21c3du); f_10f23300();
  /* 10f21c3d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21c42 push esi */
  push32((uint32_t)(ESI));
  /* 10f21c43 push 0x10f2f1b8 */
  push32((uint32_t)(0x10f2f1b8u));
  /* 10f21c48 mov ecx, 0x10f33240 */
  ECX = (0x10f33240u);
  /* 10f21c4d call 0x10f233c0 */
  push32(0x10f21c52u); f_10f233c0();
  /* 10f21c52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21c54 push ebp */
  push32((uint32_t)(EBP));
  /* 10f21c55 push 0x10f2f1e4 */
  push32((uint32_t)(0x10f2f1e4u));
  /* 10f21c5a mov ecx, 0x10f33240 */
  ECX = (0x10f33240u);
  /* 10f21c5f call 0x10f233f0 */
  push32(0x10f21c64u); f_10f233f0();
  /* 10f21c64 mov ecx, dword ptr [0x10f32cfa] */
  ECX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21c6c push 0x10f2f194 */
  push32((uint32_t)(0x10f2f194u));
  /* 10f21c71 push 0x10f2f188 */
  push32((uint32_t)(0x10f2f188u));
  /* 10f21c76 push ecx */
  push32((uint32_t)(ECX));
  /* 10f21c77 mov ecx, 0x10f332b8 */
  ECX = (0x10f332b8u);
  /* 10f21c7c call 0x10f23300 */
  push32(0x10f21c81u); f_10f23300();
  /* 10f21c81 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21c86 push esi */
  push32((uint32_t)(ESI));
  /* 10f21c87 push 0x10f2f1b8 */
  push32((uint32_t)(0x10f2f1b8u));
  /* 10f21c8c mov ecx, 0x10f332b8 */
  ECX = (0x10f332b8u);
  /* 10f21c91 call 0x10f233c0 */
  push32(0x10f21c96u); f_10f233c0();
  /* 10f21c96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21c98 push ebp */
  push32((uint32_t)(EBP));
  /* 10f21c99 push 0x10f2f1e4 */
  push32((uint32_t)(0x10f2f1e4u));
  /* 10f21c9e mov ecx, 0x10f332b8 */
  ECX = (0x10f332b8u);
  /* 10f21ca3 call 0x10f233f0 */
  push32(0x10f21ca8u); f_10f233f0();
  /* 10f21ca8 mov edx, dword ptr [0x10f32cfa] */
  EDX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21cae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21cb0 push 0x10f2f178 */
  push32((uint32_t)(0x10f2f178u));
  /* 10f21cb5 push 0x10f2f16c */
  push32((uint32_t)(0x10f2f16cu));
  /* 10f21cba push edx */
  push32((uint32_t)(EDX));
  /* 10f21cbb mov ecx, 0x10f429c8 */
  ECX = (0x10f429c8u);
  /* 10f21cc0 call 0x10f23300 */
  push32(0x10f21cc5u); f_10f23300();
  /* 10f21cc5 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21cca push edi */
  push32((uint32_t)(EDI));
  /* 10f21ccb push 0x10f2f15c */
  push32((uint32_t)(0x10f2f15cu));
  /* 10f21cd0 mov ecx, 0x10f429c8 */
  ECX = (0x10f429c8u);
  /* 10f21cd5 call 0x10f233c0 */
  push32(0x10f21cdau); f_10f233c0();
  /* 10f21cda push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21cdc push ebx */
  push32((uint32_t)(EBX));
  /* 10f21cdd push 0x10f2f150 */
  push32((uint32_t)(0x10f2f150u));
  /* 10f21ce2 mov ecx, 0x10f429c8 */
  ECX = (0x10f429c8u);
  /* 10f21ce7 call 0x10f233f0 */
  push32(0x10f21cecu); f_10f233f0();
  /* 10f21cec mov eax, dword ptr [0x10f32cfa] */
  EAX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21cf1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21cf3 push 0x10f2f140 */
  push32((uint32_t)(0x10f2f140u));
  /* 10f21cf8 push 0x10f2f134 */
  push32((uint32_t)(0x10f2f134u));
  /* 10f21cfd push eax */
  push32((uint32_t)(EAX));
  /* 10f21cfe mov ecx, 0x10f42a40 */
  ECX = (0x10f42a40u);
  /* 10f21d03 call 0x10f23300 */
  push32(0x10f21d08u); f_10f23300();
  /* 10f21d08 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21d0d push edi */
  push32((uint32_t)(EDI));
  /* 10f21d0e push 0x10f2f15c */
  push32((uint32_t)(0x10f2f15cu));
  /* 10f21d13 mov ecx, 0x10f42a40 */
  ECX = (0x10f42a40u);
  /* 10f21d18 call 0x10f233c0 */
  push32(0x10f21d1du); f_10f233c0();
  /* 10f21d1d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21d1f push ebx */
  push32((uint32_t)(EBX));
  /* 10f21d20 push 0x10f2f150 */
  push32((uint32_t)(0x10f2f150u));
  /* 10f21d25 mov ecx, 0x10f42a40 */
  ECX = (0x10f42a40u);
  /* 10f21d2a call 0x10f233f0 */
  push32(0x10f21d2fu); f_10f233f0();
  /* 10f21d2f mov ecx, dword ptr [0x10f32cfa] */
  ECX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21d35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21d37 push 0x10f2f124 */
  push32((uint32_t)(0x10f2f124u));
  /* 10f21d3c push 0x10f2f118 */
  push32((uint32_t)(0x10f2f118u));
  /* 10f21d41 push ecx */
  push32((uint32_t)(ECX));
  /* 10f21d42 mov ecx, 0x10f42ab8 */
  ECX = (0x10f42ab8u);
  /* 10f21d47 call 0x10f23300 */
  push32(0x10f21d4cu); f_10f23300();
  /* 10f21d4c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21d51 push edi */
  push32((uint32_t)(EDI));
  /* 10f21d52 push 0x10f2f108 */
  push32((uint32_t)(0x10f2f108u));
  /* 10f21d57 mov ecx, 0x10f42ab8 */
  ECX = (0x10f42ab8u);
  /* 10f21d5c call 0x10f233c0 */
  push32(0x10f21d61u); f_10f233c0();
  /* 10f21d61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21d63 push ebx */
  push32((uint32_t)(EBX));
  /* 10f21d64 push 0x10f2f0fc */
  push32((uint32_t)(0x10f2f0fcu));
  /* 10f21d69 mov ecx, 0x10f42ab8 */
  ECX = (0x10f42ab8u);
  /* 10f21d6e call 0x10f233f0 */
  push32(0x10f21d73u); f_10f233f0();
  /* 10f21d73 mov edx, dword ptr [0x10f32cfa] */
  EDX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21d7b push 0x10f2f1d8 */
  push32((uint32_t)(0x10f2f1d8u));
  /* 10f21d80 push 0x10f2f0f0 */
  push32((uint32_t)(0x10f2f0f0u));
  /* 10f21d85 push edx */
  push32((uint32_t)(EDX));
  /* 10f21d86 mov ecx, 0x10f42b30 */
  ECX = (0x10f42b30u);
  /* 10f21d8b call 0x10f23300 */
  push32(0x10f21d90u); f_10f23300();
  /* 10f21d90 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21d95 push edi */
  push32((uint32_t)(EDI));
  /* 10f21d96 push 0x10f2f108 */
  push32((uint32_t)(0x10f2f108u));
  /* 10f21d9b mov ecx, 0x10f42b30 */
  ECX = (0x10f42b30u);
  /* 10f21da0 call 0x10f233c0 */
  push32(0x10f21da5u); f_10f233c0();
  /* 10f21da5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21da7 push ebx */
  push32((uint32_t)(EBX));
  /* 10f21da8 push 0x10f2f0fc */
  push32((uint32_t)(0x10f2f0fcu));
  /* 10f21dad mov ecx, 0x10f42b30 */
  ECX = (0x10f42b30u);
  /* 10f21db2 call 0x10f233f0 */
  push32(0x10f21db7u); f_10f233f0();
  /* 10f21db7 mov eax, dword ptr [0x10f32cfa] */
  EAX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21dbc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21dbe push 0x10f2f1ac */
  push32((uint32_t)(0x10f2f1acu));
  /* 10f21dc3 push 0x10f2f0e4 */
  push32((uint32_t)(0x10f2f0e4u));
  /* 10f21dc8 push eax */
  push32((uint32_t)(EAX));
  /* 10f21dc9 mov ecx, 0x10f42ba8 */
  ECX = (0x10f42ba8u);
  /* 10f21dce call 0x10f23300 */
  push32(0x10f21dd3u); f_10f23300();
  /* 10f21dd3 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10f21dd9 push 0x10f2f108 */
  push32((uint32_t)(0x10f2f108u));
  /* 10f21dde mov ecx, 0x10f42ba8 */
  ECX = (0x10f42ba8u);
  /* 10f21de3 call 0x10f233c0 */
  push32(0x10f21de8u); f_10f233c0();
  /* 10f21de8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21dea push ebx */
  push32((uint32_t)(EBX));
  /* 10f21deb push 0x10f2f0fc */
  push32((uint32_t)(0x10f2f0fcu));
  /* 10f21df0 mov ecx, 0x10f42ba8 */
  ECX = (0x10f42ba8u);
  /* 10f21df5 call 0x10f233f0 */
  push32(0x10f21dfau); f_10f233f0();
  /* 10f21dfa mov ecx, dword ptr [0x10f32cfa] */
  ECX = (r32((uint32_t)(0x10f32cfa)));
  /* 10f21e00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21e02 push 0x10f2f194 */
  push32((uint32_t)(0x10f2f194u));
  /* 10f21e07 push 0x10f2f0d8 */
  push32((uint32_t)(0x10f2f0d8u));
  /* 10f21e0c push ecx */
  push32((uint32_t)(ECX));
  /* 10f21e0d mov ecx, 0x10f42c28 */
  ECX = (0x10f42c28u);
  /* 10f21e12 call 0x10f23300 */
  push32(0x10f21e17u); f_10f23300();
  /* 10f21e17 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f21e1c push edi */
  push32((uint32_t)(EDI));
  /* 10f21e1d push 0x10f2f108 */
  push32((uint32_t)(0x10f2f108u));
  /* 10f21e22 mov ecx, 0x10f42c28 */
  ECX = (0x10f42c28u);
  /* 10f21e27 call 0x10f233c0 */
  push32(0x10f21e2cu); f_10f233c0();
  /* 10f21e2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f21e2e push ebx */
  push32((uint32_t)(EBX));
  /* 10f21e2f push 0x10f2f0fc */
  push32((uint32_t)(0x10f2f0fcu));
  /* 10f21e34 mov ecx, 0x10f42c28 */
  ECX = (0x10f42c28u);
  /* 10f21e39 call 0x10f233f0 */
  push32(0x10f21e3eu); f_10f233f0();
  /* 10f21e3e push 0x10f32c00 */
  push32((uint32_t)(0x10f32c00u));
  /* 10f21e43 mov ecx, 0x10f32ce8 */
  ECX = (0x10f32ce8u);
  /* 10f21e48 call 0x10f22fb0 */
  push32(0x10f21e4du); f_10f22fb0();
  /* 10f21e4d push 0x10f32c00 */
  push32((uint32_t)(0x10f32c00u));
  /* 10f21e52 mov ecx, 0x10f32cf1 */
  ECX = (0x10f32cf1u);
  /* 10f21e57 call 0x10f22fb0 */
  push32(0x10f21e5cu); f_10f22fb0();
  /* 10f21e5c push 0x10f32cfa */
  push32((uint32_t)(0x10f32cfau));
  /* 10f21e61 mov ecx, 0x10f32c09 */
  ECX = (0x10f32c09u);
  /* 10f21e66 call 0x10f22fb0 */
  push32(0x10f21e6bu); f_10f22fb0();
  /* 10f21e6b push 0x10f32cfa */
  push32((uint32_t)(0x10f32cfau));
  /* 10f21e70 mov ecx, 0x10f32c12 */
  ECX = (0x10f32c12u);
  /* 10f21e75 call 0x10f22fb0 */
  push32(0x10f21e7au); f_10f22fb0();
  /* 10f21e7a push 0x10f32cfa */
  push32((uint32_t)(0x10f32cfau));
  /* 10f21e7f mov ecx, 0x10f43c68 */
  ECX = (0x10f43c68u);
  /* 10f21e84 call 0x10f22fb0 */
  push32(0x10f21e89u); f_10f22fb0();
  /* 10f21e89 lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 10f21e8d push 0x10f2f0d0 */
  push32((uint32_t)(0x10f2f0d0u));
  /* 10f21e92 push edx */
  push32((uint32_t)(EDX));
  /* 10f21e93 call dword ptr [0x10f2d1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a0))), 0x10f21e99u);
  /* 10f21e99 lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 10f21e9d push eax */
  push32((uint32_t)(EAX));
  /* 10f21e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21ea0 call dword ptr [0x10f2d1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a4))), 0x10f21ea6u);
  /* 10f21ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21ea8 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f21eaa call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f21eb0u);
  /* 10f21eb0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21eb3 pop edi */
  EDI = (pop32());
  /* 10f21eb4 pop esi */
  ESI = (pop32());
  /* 10f21eb5 pop ebp */
  EBP = (pop32());
  /* 10f21eb6 pop ebx */
  EBX = (pop32());
  /* 10f21eb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21eba ret  */
  ESPCHK(0x10f21710u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10f21ec0 (4038 bytes, 1159 insns) */
void f_10f21ec0(void) {
  FTRACE(0x10f21ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f21ec0 sub esp, 0x68 */
  { uint32_t _a=(ESP),_b=(0x68u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21ec3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f21ec4 push ebp */
  push32((uint32_t)(EBP));
  /* 10f21ec5 push esi */
  push32((uint32_t)(ESI));
  /* 10f21ec6 push edi */
  push32((uint32_t)(EDI));
  /* 10f21ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21ec9 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f21ecfu);
  /* 10f21ecf mov edi, dword ptr [0x10f2d1b0] */
  EDI = (r32((uint32_t)(0x10f2d1b0)));
  /* 10f21ed5 mov ebp, dword ptr [0x10f2d1c0] */
  EBP = (r32((uint32_t)(0x10f2d1c0)));
  /* 10f21edb mov esi, dword ptr [0x10f2d1b4] */
  ESI = (r32((uint32_t)(0x10f2d1b4)));
  /* 10f21ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21ee4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f21ee6 je 0x10f221af */
  if (C.zf) goto L_10f221af;
  /* 10f21eec push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21eee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21ef0 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f21ef6u);
  /* 10f21ef6 push 0x10f2f550 */
  push32((uint32_t)(0x10f2f550u));
  /* 10f21efb call dword ptr [0x10f2d114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d114))), 0x10f21f01u);
  /* 10f21f01 mov ebx, dword ptr [0x10f2d118] */
  EBX = (r32((uint32_t)(0x10f2d118)));
  /* 10f21f07 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10f21f09 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f0bu);
  /* 10f21f0b push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10f21f0d call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f0fu);
  /* 10f21f0f mov ebx, dword ptr [0x10f2d19c] */
  EBX = (r32((uint32_t)(0x10f2d19c)));
  /* 10f21f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21f17 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f19u);
  /* 10f21f19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21f1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f21f1f jle 0x10f21f2c */
  if ((C.zf||C.sf!=C.of)) goto L_10f21f2c;
  /* 10f21f21 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10f21f23 call dword ptr [0x10f2d118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d118))), 0x10f21f29u);
  /* 10f21f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f21f2c:;
  /* 10f21f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21f2e call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f30u);
  /* 10f21f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21f32 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f34u);
  /* 10f21f34 mov ecx, 5 */
  ECX = (0x5u);
  /* 10f21f39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21f3c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21f3e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10f21f41 mov ecx, 0x10f32c00 */
  ECX = (0x10f32c00u);
  /* 10f21f46 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f49 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f4c shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f21f4f push eax */
  push32((uint32_t)(EAX));
  /* 10f21f50 call 0x10f22f60 */
  push32(0x10f21f55u); f_10f22f60();
  /* 10f21f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21f57 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f59u);
  /* 10f21f59 mov ecx, 8 */
  ECX = (0x8u);
  /* 10f21f5e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21f60 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 10f21f63 mov cl, byte ptr [0x10f32c00] */
  CL = (r8((uint32_t)(0x10f32c00)));
  /* 10f21f69 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f6c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f6f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f72 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10f21f75 push eax */
  push32((uint32_t)(EAX));
  /* 10f21f76 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f21f78 push ecx */
  push32((uint32_t)(ECX));
  /* 10f21f79 call dword ptr [0x10f2d11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d11c))), 0x10f21f7fu);
  /* 10f21f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21f81 call ebx */
  call_ind((uint32_t)(EBX), 0x10f21f83u);
  /* 10f21f83 mov ecx, 8 */
  ECX = (0x8u);
  /* 10f21f88 mov dl, byte ptr [0x10f32c00] */
  DL = (r8((uint32_t)(0x10f32c00)));
  /* 10f21f8e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f21f90 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 10f21f93 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f96 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f99 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f21f9c shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10f21f9f push eax */
  push32((uint32_t)(EAX));
  /* 10f21fa0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f21fa2 push edx */
  push32((uint32_t)(EDX));
  /* 10f21fa3 call dword ptr [0x10f2d11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d11c))), 0x10f21fa9u);
  /* 10f21fa9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f21fac mov ecx, 0x10f32c09 */
  ECX = (0x10f32c09u);
  /* 10f21fb1 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10f21fb6 call 0x10f22f60 */
  push32(0x10f21fbbu); f_10f22f60();
  /* 10f21fbb push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10f21fc0 mov ecx, 0x10f32c12 */
  ECX = (0x10f32c12u);
  /* 10f21fc5 call 0x10f22f60 */
  push32(0x10f21fcau); f_10f22f60();
  /* 10f21fca mov al, byte ptr [0x10f32c09] */
  AL = (r8((uint32_t)(0x10f32c09)));
  /* 10f21fcf push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f21fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21fd7 push 0x10f2f544 */
  push32((uint32_t)(0x10f2f544u));
  /* 10f21fdc push eax */
  push32((uint32_t)(EAX));
  /* 10f21fdd call dword ptr [0x10f2d120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d120))), 0x10f21fe3u);
  /* 10f21fe3 mov cl, byte ptr [0x10f32c12] */
  CL = (r8((uint32_t)(0x10f32c12)));
  /* 10f21fe9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f21feb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21fed push 0 */
  push32((uint32_t)(0x0u));
  /* 10f21fef push 3 */
  push32((uint32_t)(0x3u));
  /* 10f21ff1 push 0x10f2f544 */
  push32((uint32_t)(0x10f2f544u));
  /* 10f21ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f21ff7 call dword ptr [0x10f2d120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d120))), 0x10f21ffdu);
  /* 10f21ffd mov dl, byte ptr [0x10f32cfa] */
  DL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22003 push edx */
  push32((uint32_t)(EDX));
  /* 10f22004 call edi */
  call_ind((uint32_t)(EDI), 0x10f22006u);
  /* 10f22006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22008 push 0x10f43bd8 */
  push32((uint32_t)(0x10f43bd8u));
  /* 10f2200d call ebp */
  call_ind((uint32_t)(EBP), 0x10f2200fu);
  /* 10f2200f add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22014 call 0x10f23c47 */
  push32(0x10f22019u); f_10f23c47();
  /* 10f22019 push eax */
  push32((uint32_t)(EAX));
  /* 10f2201a mov al, byte ptr [0x10f32cfa] */
  AL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f2201f push 0x10f43c70 */
  push32((uint32_t)(0x10f43c70u));
  /* 10f22024 push eax */
  push32((uint32_t)(EAX));
  /* 10f22025 call esi */
  call_ind((uint32_t)(ESI), 0x10f22027u);
  /* 10f22027 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2202a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2202c call 0x10f23c47 */
  push32(0x10f22031u); f_10f23c47();
  /* 10f22031 mov cl, byte ptr [0x10f32cfa] */
  CL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22037 push eax */
  push32((uint32_t)(EAX));
  /* 10f22038 push 0x10f43c78 */
  push32((uint32_t)(0x10f43c78u));
  /* 10f2203d push ecx */
  push32((uint32_t)(ECX));
  /* 10f2203e call esi */
  call_ind((uint32_t)(ESI), 0x10f22040u);
  /* 10f22040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22042 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22044u);
  /* 10f22044 mov dl, byte ptr [0x10f32cfa] */
  DL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f2204a mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10f2204e mov byte ptr [esp + 0x24], dl */
  w8((uint32_t)(ESP + 0x24), (DL));
  /* 10f22052 mov ebx, dword ptr [esp + 0x24] */
  EBX = (r32((uint32_t)(ESP + 0x24)));
  /* 10f22056 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22057 call edi */
  call_ind((uint32_t)(EDI), 0x10f22059u);
  /* 10f22059 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2205b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2205c push 0x10f32d18 */
  push32((uint32_t)(0x10f32d18u));
  /* 10f22061 call dword ptr [0x10f2d124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d124))), 0x10f22067u);
  /* 10f22067 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22069 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2206a push 0x10f32fb8 */
  push32((uint32_t)(0x10f32fb8u));
  /* 10f2206f call dword ptr [0x10f2d124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d124))), 0x10f22075u);
  /* 10f22075 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22077 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22078 push 0x10f32fd8 */
  push32((uint32_t)(0x10f32fd8u));
  /* 10f2207d call dword ptr [0x10f2d124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d124))), 0x10f22083u);
  /* 10f22083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22085 push 0x10f43ca8 */
  push32((uint32_t)(0x10f43ca8u));
  /* 10f2208a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2208b call dword ptr [0x10f2d1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1ac))), 0x10f22091u);
  /* 10f22091 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22094 push 0x10f43ca8 */
  push32((uint32_t)(0x10f43ca8u));
  /* 10f22099 call dword ptr [0x10f2d1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c8))), 0x10f2209fu);
  /* 10f2209f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f220a2 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10f220a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f220a8 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 10f220b0 jle 0x10f22119 */
  if ((C.zf||C.sf!=C.of)) goto L_10f22119;
L_10f220b2:;
  /* 10f220b2 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f220b6 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10f220ba push eax */
  push32((uint32_t)(EAX));
  /* 10f220bb push ecx */
  push32((uint32_t)(ECX));
  /* 10f220bc push 0x10f43ca8 */
  push32((uint32_t)(0x10f43ca8u));
  /* 10f220c1 call dword ptr [0x10f2d1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d4))), 0x10f220c7u);
  /* 10f220c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f220ca cmp word ptr [esp + 0x20], 0xffff */
  { uint32_t _a=(r16((uint32_t)(ESP + 0x20))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f220d1 je 0x10f22108 */
  if (C.zf) goto L_10f22108;
  /* 10f220d3 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f220d7 mov ecx, dword ptr [esp + 0x26] */
  ECX = (r32((uint32_t)(ESP + 0x26)));
  /* 10f220db and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f220e1 lea eax, [edx + 1] */
  EAX = ((uint32_t)(EDX + 0x1));
  /* 10f220e4 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f220e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f220e8 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f220eb add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f220ed lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10f220f1 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10f220f4 push edx */
  push32((uint32_t)(EDX));
  /* 10f220f5 mov word ptr [esp + 0x28], ax */
  w16((uint32_t)(ESP + 0x28), (AX));
  /* 10f220fa mov word ptr [esp + 0x2a], ax */
  w16((uint32_t)(ESP + 0x2a), (AX));
  /* 10f220ff call dword ptr [0x10f2d128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d128))), 0x10f22105u);
  /* 10f22105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22108:;
  /* 10f22108 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f2210c mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f22110 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f22111 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22113 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10f22117 jl 0x10f220b2 */
  if ((C.sf!=C.of)) goto L_10f220b2;
L_10f22119:;
  /* 10f22119 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f2211d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2211f jne 0x10f2215d */
  if (!C.zf) goto L_10f2215d;
  /* 10f22121 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22122 call edi */
  call_ind((uint32_t)(EDI), 0x10f22124u);
  /* 10f22124 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22126 push 0x10f43bd8 */
  push32((uint32_t)(0x10f43bd8u));
  /* 10f2212b call ebp */
  call_ind((uint32_t)(EBP), 0x10f2212du);
  /* 10f2212d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2212e call dword ptr [0x10f2d12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d12c))), 0x10f22134u);
  /* 10f22134 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22135 call edi */
  call_ind((uint32_t)(EDI), 0x10f22137u);
  /* 10f22137 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22139 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2213a push 0x10f43c58 */
  push32((uint32_t)(0x10f43c58u));
  /* 10f2213f call dword ptr [0x10f2d124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d124))), 0x10f22145u);
  /* 10f22145 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22147 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22148 push 0x10f43c50 */
  push32((uint32_t)(0x10f43c50u));
  /* 10f2214d call dword ptr [0x10f2d124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d124))), 0x10f22153u);
  /* 10f22153 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22154 call dword ptr [0x10f2d12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d12c))), 0x10f2215au);
  /* 10f2215a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2215d:;
  /* 10f2215d call dword ptr [0x10f2d130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d130))), 0x10f22163u);
  /* 10f22163 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f22167 add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2216c mov dword ptr [0x10f42ca4], eax */
  w32((uint32_t)(0x10f42ca4), (EAX));
  /* 10f22171 mov eax, 0xd */
  EAX = (0xdu);
  /* 10f22176 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f22178 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f2217b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f2217e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f22181 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f22184 push eax */
  push32((uint32_t)(EAX));
  /* 10f22185 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22187 call dword ptr [0x10f2d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d134))), 0x10f2218du);
  /* 10f2218d mov eax, 7 */
  EAX = (0x7u);
  /* 10f22192 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f22194 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f22197 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f2219a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f2219d lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10f221a0 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10f221a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f221a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f221a6 call dword ptr [0x10f2d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d134))), 0x10f221acu);
  /* 10f221ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f221af:;
  /* 10f221af push 0 */
  push32((uint32_t)(0x0u));
  /* 10f221b1 push 0x10f43c88 */
  push32((uint32_t)(0x10f43c88u));
  /* 10f221b6 call dword ptr [0x10f2d138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d138))), 0x10f221bcu);
  /* 10f221bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f221bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f221c1 je 0x10f221ec */
  if (C.zf) goto L_10f221ec;
  /* 10f221c3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f221c5 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f221cbu);
  /* 10f221cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f221ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f221d0 je 0x10f221ec */
  if (C.zf) goto L_10f221ec;
  /* 10f221d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f221d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f221d6 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f221dcu);
  /* 10f221dc push 0x8ca0 */
  push32((uint32_t)(0x8ca0u));
  /* 10f221e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f221e3 call dword ptr [0x10f2d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d134))), 0x10f221e9u);
  /* 10f221e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f221ec:;
  /* 10f221ec mov ebx, dword ptr [0x10f2d130] */
  EBX = (r32((uint32_t)(0x10f2d130)));
  /* 10f221f2 call ebx */
  call_ind((uint32_t)(EBX), 0x10f221f4u);
  /* 10f221f4 cmp eax, dword ptr [0x10f43c34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f43c34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f221fa jle 0x10f2230e */
  if ((C.zf||C.sf!=C.of)) goto L_10f2230e;
  /* 10f22200 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22202u);
  /* 10f22202 add eax, 0x190 */
  { uint32_t _a=(EAX),_b=(0x190u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22207 push 0x10f32bf8 */
  push32((uint32_t)(0x10f32bf8u));
  /* 10f2220c mov dword ptr [0x10f43c34], eax */
  w32((uint32_t)(0x10f43c34), (EAX));
  /* 10f22211 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f22217u);
  /* 10f22217 mov ebx, dword ptr [0x10f2d1b8] */
  EBX = (r32((uint32_t)(0x10f2d1b8)));
  /* 10f2221d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f22222 je 0x10f22246 */
  if (C.zf) goto L_10f22246;
  /* 10f22224 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f22226 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 10f2222a push 0x10f32bf8 */
  push32((uint32_t)(0x10f32bf8u));
  /* 10f2222f push edx */
  push32((uint32_t)(EDX));
  /* 10f22230 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22232u);
  /* 10f22232 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22234 lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 10f22238 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2223a push eax */
  push32((uint32_t)(EAX));
  /* 10f2223b call dword ptr [0x10f2d140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d140))), 0x10f22241u);
  /* 10f22241 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22244 jmp 0x10f22251 */
  goto L_10f22251;
L_10f22246:;
  /* 10f22246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22248 call dword ptr [0x10f2d144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d144))), 0x10f2224eu);
  /* 10f2224e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22251:;
  /* 10f22251 push 0x10f32cd0 */
  push32((uint32_t)(0x10f32cd0u));
  /* 10f22256 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f2225cu);
  /* 10f2225c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2225f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f22261 je 0x10f22285 */
  if (C.zf) goto L_10f22285;
  /* 10f22263 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f22265 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 10f22269 push 0x10f32cd0 */
  push32((uint32_t)(0x10f32cd0u));
  /* 10f2226e push ecx */
  push32((uint32_t)(ECX));
  /* 10f2226f call ebx */
  call_ind((uint32_t)(EBX), 0x10f22271u);
  /* 10f22271 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22273 lea edx, [esp + 0x28] */
  EDX = ((uint32_t)(ESP + 0x28));
  /* 10f22277 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22279 push edx */
  push32((uint32_t)(EDX));
  /* 10f2227a call dword ptr [0x10f2d140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d140))), 0x10f22280u);
  /* 10f22280 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22283 jmp 0x10f22290 */
  goto L_10f22290;
L_10f22285:;
  /* 10f22285 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22287 call dword ptr [0x10f2d144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d144))), 0x10f2228du);
  /* 10f2228d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22290:;
  /* 10f22290 push 0x10f43cb0 */
  push32((uint32_t)(0x10f43cb0u));
  /* 10f22295 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f2229bu);
  /* 10f2229b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2229e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f222a0 je 0x10f222c4 */
  if (C.zf) goto L_10f222c4;
  /* 10f222a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f222a4 lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 10f222a8 push 0x10f43cb0 */
  push32((uint32_t)(0x10f43cb0u));
  /* 10f222ad push eax */
  push32((uint32_t)(EAX));
  /* 10f222ae call ebx */
  call_ind((uint32_t)(EBX), 0x10f222b0u);
  /* 10f222b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f222b2 lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 10f222b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f222b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f222b9 call dword ptr [0x10f2d140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d140))), 0x10f222bfu);
  /* 10f222bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f222c2 jmp 0x10f222cf */
  goto L_10f222cf;
L_10f222c4:;
  /* 10f222c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f222c6 call dword ptr [0x10f2d144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d144))), 0x10f222ccu);
  /* 10f222cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f222cf:;
  /* 10f222cf push 0x10f43c10 */
  push32((uint32_t)(0x10f43c10u));
  /* 10f222d4 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f222dau);
  /* 10f222da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f222dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f222df je 0x10f22303 */
  if (C.zf) goto L_10f22303;
  /* 10f222e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f222e3 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 10f222e7 push 0x10f43c10 */
  push32((uint32_t)(0x10f43c10u));
  /* 10f222ec push edx */
  push32((uint32_t)(EDX));
  /* 10f222ed call ebx */
  call_ind((uint32_t)(EBX), 0x10f222efu);
  /* 10f222ef push 3 */
  push32((uint32_t)(0x3u));
  /* 10f222f1 lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 10f222f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f222f7 push eax */
  push32((uint32_t)(EAX));
  /* 10f222f8 call dword ptr [0x10f2d140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d140))), 0x10f222feu);
  /* 10f222fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22301 jmp 0x10f2230e */
  goto L_10f2230e;
L_10f22303:;
  /* 10f22303 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f22305 call dword ptr [0x10f2d144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d144))), 0x10f2230bu);
  /* 10f2230b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2230e:;
  /* 10f2230e mov ebx, dword ptr [0x10f2d148] */
  EBX = (r32((uint32_t)(0x10f2d148)));
  /* 10f22314 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22316 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22318u);
  /* 10f22318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2231b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2231d je 0x10f22324 */
  if (C.zf) goto L_10f22324;
  /* 10f2231f call 0x10f23130 */
  push32(0x10f22324u); f_10f23130();
L_10f22324:;
  /* 10f22324 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22326 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22328u);
  /* 10f22328 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2232b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2232d je 0x10f223ed */
  if (C.zf) goto L_10f223ed;
  /* 10f22333 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22335 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f2233bu);
  /* 10f2233b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2233e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22340 je 0x10f223ed */
  if (C.zf) goto L_10f223ed;
  /* 10f22346 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f2234c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2234d call edi */
  call_ind((uint32_t)(EDI), 0x10f2234fu);
  /* 10f2234f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22351 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f22356 call ebp */
  call_ind((uint32_t)(EBP), 0x10f22358u);
  /* 10f22358 mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f2235e mov ebx, dword ptr [0x10f2d1c4] */
  EBX = (r32((uint32_t)(0x10f2d1c4)));
  /* 10f22364 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22366 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22368 push 0x10f42810 */
  push32((uint32_t)(0x10f42810u));
  /* 10f2236d push edx */
  push32((uint32_t)(EDX));
  /* 10f2236e call ebx */
  call_ind((uint32_t)(EBX), 0x10f22370u);
  /* 10f22370 mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22375 push eax */
  push32((uint32_t)(EAX));
  /* 10f22376 call edi */
  call_ind((uint32_t)(EDI), 0x10f22378u);
  /* 10f22378 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2237a push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f2237f call ebp */
  call_ind((uint32_t)(EBP), 0x10f22381u);
  /* 10f22381 mov cl, byte ptr [0x10f32cf1] */
  CL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22387 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22389 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2238b push 0x10f43c40 */
  push32((uint32_t)(0x10f43c40u));
  /* 10f22390 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22391 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22393u);
  /* 10f22393 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f22398 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f2239eu);
  /* 10f2239e add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f223a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f223a3 je 0x10f223b9 */
  if (C.zf) goto L_10f223b9;
  /* 10f223a5 mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f223ab push edx */
  push32((uint32_t)(EDX));
  /* 10f223ac call dword ptr [0x10f2d14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d14c))), 0x10f223b2u);
  /* 10f223b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f223b5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f223b7 je 0x10f223f3 */
  if (C.zf) goto L_10f223f3;
L_10f223b9:;
  /* 10f223b9 push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f223be call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f223c4u);
  /* 10f223c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f223c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f223c9 je 0x10f223de */
  if (C.zf) goto L_10f223de;
  /* 10f223cb mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f223d0 push eax */
  push32((uint32_t)(EAX));
  /* 10f223d1 call dword ptr [0x10f2d14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d14c))), 0x10f223d7u);
  /* 10f223d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f223da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f223dc je 0x10f223f3 */
  if (C.zf) goto L_10f223f3;
L_10f223de:;
  /* 10f223de push 0 */
  push32((uint32_t)(0x0u));
  /* 10f223e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f223e2 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f223e8u);
  /* 10f223e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f223eb jmp 0x10f223f3 */
  goto L_10f223f3;
L_10f223ed:;
  /* 10f223ed mov ebx, dword ptr [0x10f2d1c4] */
  EBX = (r32((uint32_t)(0x10f2d1c4)));
L_10f223f3:;
  /* 10f223f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f223f5 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f223fbu);
  /* 10f223fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f223fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22400 je 0x10f2246b */
  if (C.zf) goto L_10f2246b;
  /* 10f22402 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f22404 call dword ptr [0x10f2d148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d148))), 0x10f2240au);
  /* 10f2240a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2240d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2240f je 0x10f2246b */
  if (C.zf) goto L_10f2246b;
  /* 10f22411 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22413 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f22415 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f2241bu);
  /* 10f2241b mov cl, byte ptr [0x10f32cfa] */
  CL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22421 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22422 call edi */
  call_ind((uint32_t)(EDI), 0x10f22424u);
  /* 10f22424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22426 push 0x10f427e8 */
  push32((uint32_t)(0x10f427e8u));
  /* 10f2242b call ebp */
  call_ind((uint32_t)(EBP), 0x10f2242du);
  /* 10f2242d mov dl, byte ptr [0x10f32cfa] */
  DL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22433 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22435 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f2243a push 0x10f32d08 */
  push32((uint32_t)(0x10f32d08u));
  /* 10f2243f push edx */
  push32((uint32_t)(EDX));
  /* 10f22440 call esi */
  call_ind((uint32_t)(ESI), 0x10f22442u);
  /* 10f22442 mov al, byte ptr [0x10f32cfa] */
  AL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22447 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22449 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f2244e push 0x10f43c90 */
  push32((uint32_t)(0x10f43c90u));
  /* 10f22453 push eax */
  push32((uint32_t)(EAX));
  /* 10f22454 call esi */
  call_ind((uint32_t)(ESI), 0x10f22456u);
  /* 10f22456 mov cl, byte ptr [0x10f32cfa] */
  CL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f2245c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2245e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f22460 push 0x10f43c98 */
  push32((uint32_t)(0x10f43c98u));
  /* 10f22465 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22466 call esi */
  call_ind((uint32_t)(ESI), 0x10f22468u);
  /* 10f22468 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2246b:;
  /* 10f2246b push 7 */
  push32((uint32_t)(0x7u));
  /* 10f2246d call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f22473u);
  /* 10f22473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22476 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22478 je 0x10f22567 */
  if (C.zf) goto L_10f22567;
  /* 10f2247e push 6 */
  push32((uint32_t)(0x6u));
  /* 10f22480 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f22486u);
  /* 10f22486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22489 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2248b je 0x10f22567 */
  if (C.zf) goto L_10f22567;
  /* 10f22491 push 0x10f43c60 */
  push32((uint32_t)(0x10f43c60u));
  /* 10f22496 call dword ptr [0x10f2d1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c8))), 0x10f2249cu);
  /* 10f2249c mov ebx, eax */
  EBX = (EAX);
  /* 10f2249e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f224a1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f224a3 jne 0x10f224b3 */
  if (!C.zf) goto L_10f224b3;
  /* 10f224a5 push eax */
  push32((uint32_t)(EAX));
  /* 10f224a6 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f224a8 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f224aeu);
  /* 10f224ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f224b1 jmp 0x10f2252f */
  goto L_10f2252f;
L_10f224b3:;
  /* 10f224b3 jle 0x10f2252f */
  if ((C.zf||C.sf!=C.of)) goto L_10f2252f;
L_10f224b5:;
  /* 10f224b5 lea edx, [esp + 0x4c] */
  EDX = ((uint32_t)(ESP + 0x4c));
  /* 10f224b9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f224ba push edx */
  push32((uint32_t)(EDX));
  /* 10f224bb push ebx */
  push32((uint32_t)(EBX));
  /* 10f224bc push 0x10f43c60 */
  push32((uint32_t)(0x10f43c60u));
  /* 10f224c1 call dword ptr [0x10f2d1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d4))), 0x10f224c7u);
  /* 10f224c7 mov eax, dword ptr [esp + 0x58] */
  EAX = (r32((uint32_t)(ESP + 0x58)));
  /* 10f224cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f224ce cmp ax, 0xffff */
  { uint32_t _a=(AX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f224d2 jne 0x10f224e5 */
  if (!C.zf) goto L_10f224e5;
  /* 10f224d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f224d5 push 0x10f43c60 */
  push32((uint32_t)(0x10f43c60u));
  /* 10f224da call dword ptr [0x10f2d1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1cc))), 0x10f224e0u);
  /* 10f224e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f224e3 jmp 0x10f2252b */
  goto L_10f2252b;
L_10f224e5:;
  /* 10f224e5 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10f224e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f224eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f224f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f224f1 push eax */
  push32((uint32_t)(EAX));
  /* 10f224f2 call dword ptr [0x10f2d150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d150))), 0x10f224f8u);
  /* 10f224f8 mov eax, dword ptr [esp + 0x48] */
  EAX = (r32((uint32_t)(ESP + 0x48)));
  /* 10f224fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f224ff cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22502 jne 0x10f2252b */
  if (!C.zf) goto L_10f2252b;
  /* 10f22504 mov edx, dword ptr [esp + 0x4c] */
  EDX = (r32((uint32_t)(ESP + 0x4c)));
  /* 10f22508 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f2250e push edx */
  push32((uint32_t)(EDX));
  /* 10f2250f push 0x10f43c00 */
  push32((uint32_t)(0x10f43c00u));
  /* 10f22514 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22516 call dword ptr [0x10f2d154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d154))), 0x10f2251cu);
  /* 10f2251c push ebx */
  push32((uint32_t)(EBX));
  /* 10f2251d push 0x10f43c60 */
  push32((uint32_t)(0x10f43c60u));
  /* 10f22522 call dword ptr [0x10f2d1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1cc))), 0x10f22528u);
  /* 10f22528 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2252b:;
  /* 10f2252b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f2252d jg 0x10f224b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f224b5;
L_10f2252f:;
  /* 10f2252f mov al, byte ptr [0x10f32cfa] */
  AL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22534 push eax */
  push32((uint32_t)(EAX));
  /* 10f22535 call edi */
  call_ind((uint32_t)(EDI), 0x10f22537u);
  /* 10f22537 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22539 push 0x10f43c00 */
  push32((uint32_t)(0x10f43c00u));
  /* 10f2253e call ebp */
  call_ind((uint32_t)(EBP), 0x10f22540u);
  /* 10f22540 mov cl, byte ptr [0x10f32c12] */
  CL = (r8((uint32_t)(0x10f32c12)));
  /* 10f22546 mov dl, byte ptr [0x10f32cfa] */
  DL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f2254c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2254d push edx */
  push32((uint32_t)(EDX));
  /* 10f2254e call dword ptr [0x10f2d158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d158))), 0x10f22554u);
  /* 10f22554 push 0x10f43c00 */
  push32((uint32_t)(0x10f43c00u));
  /* 10f22559 call 0x10f21150 */
  push32(0x10f2255eu); f_10f21150();
  /* 10f2255e mov ebx, dword ptr [0x10f2d1c4] */
  EBX = (r32((uint32_t)(0x10f2d1c4)));
  /* 10f22564 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22567:;
  /* 10f22567 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22569 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f2256fu);
  /* 10f2256f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22572 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22574 je 0x10f22793 */
  if (C.zf) goto L_10f22793;
  /* 10f2257a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2257c call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f22582u);
  /* 10f22582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22587 jne 0x10f22793 */
  if (!C.zf) goto L_10f22793;
  /* 10f2258d mov al, byte ptr [0x10f32ce8] */
  AL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22592 push eax */
  push32((uint32_t)(EAX));
  /* 10f22593 call edi */
  call_ind((uint32_t)(EDI), 0x10f22595u);
  /* 10f22595 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22597 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f2259c call ebp */
  call_ind((uint32_t)(EBP), 0x10f2259eu);
  /* 10f2259e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f225a0 push 0x10f43c10 */
  push32((uint32_t)(0x10f43c10u));
  /* 10f225a5 call ebp */
  call_ind((uint32_t)(EBP), 0x10f225a7u);
  /* 10f225a7 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f225ad push ecx */
  push32((uint32_t)(ECX));
  /* 10f225ae call dword ptr [0x10f2d15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d15c))), 0x10f225b4u);
  /* 10f225b4 mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f225ba push edx */
  push32((uint32_t)(EDX));
  /* 10f225bb call edi */
  call_ind((uint32_t)(EDI), 0x10f225bdu);
  /* 10f225bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10f225bf push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f225c4 call ebp */
  call_ind((uint32_t)(EBP), 0x10f225c6u);
  /* 10f225c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f225c8 push 0x10f43cb0 */
  push32((uint32_t)(0x10f43cb0u));
  /* 10f225cd call ebp */
  call_ind((uint32_t)(EBP), 0x10f225cfu);
  /* 10f225cf mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f225d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f225d5 call dword ptr [0x10f2d15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d15c))), 0x10f225dbu);
  /* 10f225db push 0x10f43c10 */
  push32((uint32_t)(0x10f43c10u));
  /* 10f225e0 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f225e6u);
  /* 10f225e6 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f225ec mov dword ptr [esp + 0x4c], eax */
  w32((uint32_t)(ESP + 0x4c), (EAX));
  /* 10f225f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f225f1 call dword ptr [0x10f2d160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d160))), 0x10f225f7u);
  /* 10f225f7 mov ecx, dword ptr [esp + 0x50] */
  ECX = (r32((uint32_t)(ESP + 0x50)));
  /* 10f225fb add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f225fe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22600 jne 0x10f22793 */
  if (!C.zf) goto L_10f22793;
  /* 10f22606 push 0x10f43cb0 */
  push32((uint32_t)(0x10f43cb0u));
  /* 10f2260b call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f22611u);
  /* 10f22611 mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22617 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10f2261b push edx */
  push32((uint32_t)(EDX));
  /* 10f2261c call dword ptr [0x10f2d160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d160))), 0x10f22622u);
  /* 10f22622 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10f22626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22629 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2262b jne 0x10f22793 */
  if (!C.zf) goto L_10f22793;
  /* 10f22631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22633 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22635 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f2263bu);
  /* 10f2263b mov al, byte ptr [0x10f32ce8] */
  AL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22640 push eax */
  push32((uint32_t)(EAX));
  /* 10f22641 call edi */
  call_ind((uint32_t)(EDI), 0x10f22643u);
  /* 10f22643 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22645 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f2264a call ebp */
  call_ind((uint32_t)(EBP), 0x10f2264cu);
  /* 10f2264c mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22654 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22656 push 0x10f32cc0 */
  push32((uint32_t)(0x10f32cc0u));
  /* 10f2265b push ecx */
  push32((uint32_t)(ECX));
  /* 10f2265c call ebx */
  call_ind((uint32_t)(EBX), 0x10f2265eu);
  /* 10f2265e mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22664 push edx */
  push32((uint32_t)(EDX));
  /* 10f22665 call edi */
  call_ind((uint32_t)(EDI), 0x10f22667u);
  /* 10f22667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22669 push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f2266e call ebp */
  call_ind((uint32_t)(EBP), 0x10f22670u);
  /* 10f22670 mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22679 push 0x10f32fc0 */
  push32((uint32_t)(0x10f32fc0u));
  /* 10f2267e push eax */
  push32((uint32_t)(EAX));
  /* 10f2267f call ebx */
  call_ind((uint32_t)(EBX), 0x10f22681u);
  /* 10f22681 mov ebx, dword ptr [0x10f2d134] */
  EBX = (r32((uint32_t)(0x10f2d134)));
  /* 10f22687 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2268a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10f2268f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22691 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22693u);
  /* 10f22693 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22695 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f22697 call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f2269du);
  /* 10f2269d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10f226a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f226a4 call ebx */
  call_ind((uint32_t)(EBX), 0x10f226a6u);
  /* 10f226a6 push 0x10f2f538 */
  push32((uint32_t)(0x10f2f538u));
  /* 10f226ab call dword ptr [0x10f2d114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d114))), 0x10f226b1u);
  /* 10f226b1 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10f226b3 call dword ptr [0x10f2d118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d118))), 0x10f226b9u);
  /* 10f226b9 mov ebx, dword ptr [0x10f2d164] */
  EBX = (r32((uint32_t)(0x10f2d164)));
  /* 10f226bf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10f226c1 call ebx */
  call_ind((uint32_t)(EBX), 0x10f226c3u);
  /* 10f226c3 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10f226c5 call ebx */
  call_ind((uint32_t)(EBX), 0x10f226c7u);
  /* 10f226c7 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f226cd push ecx */
  push32((uint32_t)(ECX));
  /* 10f226ce call edi */
  call_ind((uint32_t)(EDI), 0x10f226d0u);
  /* 10f226d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f226d2 push 0x10f32cd0 */
  push32((uint32_t)(0x10f32cd0u));
  /* 10f226d7 call ebp */
  call_ind((uint32_t)(EBP), 0x10f226d9u);
  /* 10f226d9 mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f226df push 0 */
  push32((uint32_t)(0x0u));
  /* 10f226e1 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f226e6 push 0x10f43c20 */
  push32((uint32_t)(0x10f43c20u));
  /* 10f226eb push edx */
  push32((uint32_t)(EDX));
  /* 10f226ec call esi */
  call_ind((uint32_t)(ESI), 0x10f226eeu);
  /* 10f226ee mov al, byte ptr [0x10f32ce8] */
  AL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f226f3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f226f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f226f8 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f226fd push 0x10f32cc8 */
  push32((uint32_t)(0x10f32cc8u));
  /* 10f22702 push eax */
  push32((uint32_t)(EAX));
  /* 10f22703 call esi */
  call_ind((uint32_t)(ESI), 0x10f22705u);
  /* 10f22705 mov cl, byte ptr [0x10f32cf1] */
  CL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f2270b push ecx */
  push32((uint32_t)(ECX));
  /* 10f2270c call edi */
  call_ind((uint32_t)(EDI), 0x10f2270eu);
  /* 10f2270e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22710 push 0x10f32bf8 */
  push32((uint32_t)(0x10f32bf8u));
  /* 10f22715 call ebp */
  call_ind((uint32_t)(EBP), 0x10f22717u);
  /* 10f22717 mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f2271d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2271f push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f22724 push 0x10f43c08 */
  push32((uint32_t)(0x10f43c08u));
  /* 10f22729 push edx */
  push32((uint32_t)(EDX));
  /* 10f2272a call esi */
  call_ind((uint32_t)(ESI), 0x10f2272cu);
  /* 10f2272c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2272e push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f22733 push 0x10f32cc8 */
  push32((uint32_t)(0x10f32cc8u));
  /* 10f22738 mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f2273d push eax */
  push32((uint32_t)(EAX));
  /* 10f2273e call esi */
  call_ind((uint32_t)(ESI), 0x10f22740u);
  /* 10f22740 mov cl, byte ptr [0x10f32cfa] */
  CL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22746 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22747 call edi */
  call_ind((uint32_t)(EDI), 0x10f22749u);
  /* 10f22749 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2274c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2274e push 0x10f43c60 */
  push32((uint32_t)(0x10f43c60u));
  /* 10f22753 call ebp */
  call_ind((uint32_t)(EBP), 0x10f22755u);
  /* 10f22755 mov dl, byte ptr [0x10f32cfa] */
  DL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f2275b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2275d push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f22762 push 0x10f32d08 */
  push32((uint32_t)(0x10f32d08u));
  /* 10f22767 push edx */
  push32((uint32_t)(EDX));
  /* 10f22768 call esi */
  call_ind((uint32_t)(ESI), 0x10f2276au);
  /* 10f2276a mov al, byte ptr [0x10f32cfa] */
  AL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f2276f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22771 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10f22776 push 0x10f32d00 */
  push32((uint32_t)(0x10f32d00u));
  /* 10f2277b push eax */
  push32((uint32_t)(EAX));
  /* 10f2277c call esi */
  call_ind((uint32_t)(ESI), 0x10f2277eu);
  /* 10f2277e mov cl, byte ptr [0x10f32cfa] */
  CL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f22784 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22786 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f22788 push 0x10f43c98 */
  push32((uint32_t)(0x10f43c98u));
  /* 10f2278d push ecx */
  push32((uint32_t)(ECX));
  /* 10f2278e call esi */
  call_ind((uint32_t)(ESI), 0x10f22790u);
  /* 10f22790 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22793:;
  /* 10f22793 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22795 call dword ptr [0x10f2d148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d148))), 0x10f2279bu);
  /* 10f2279b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2279e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f227a0 je 0x10f22805 */
  if (C.zf) goto L_10f22805;
  /* 10f227a2 mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f227a8 mov ebx, dword ptr [0x10f2d14c] */
  EBX = (r32((uint32_t)(0x10f2d14c)));
  /* 10f227ae push edx */
  push32((uint32_t)(EDX));
  /* 10f227af call ebx */
  call_ind((uint32_t)(EBX), 0x10f227b1u);
  /* 10f227b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f227b4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f227b6 je 0x10f22805 */
  if (C.zf) goto L_10f22805;
  /* 10f227b8 mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f227bd push eax */
  push32((uint32_t)(EAX));
  /* 10f227be call ebx */
  call_ind((uint32_t)(EBX), 0x10f227c0u);
  /* 10f227c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f227c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f227c5 je 0x10f22805 */
  if (C.zf) goto L_10f22805;
  /* 10f227c7 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f227cd push ecx */
  push32((uint32_t)(ECX));
  /* 10f227ce call edi */
  call_ind((uint32_t)(EDI), 0x10f227d0u);
  /* 10f227d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f227d2 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f227d7 call ebp */
  call_ind((uint32_t)(EBP), 0x10f227d9u);
  /* 10f227d9 mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f227df mov ebx, dword ptr [0x10f2d168] */
  EBX = (r32((uint32_t)(0x10f2d168)));
  /* 10f227e5 push edx */
  push32((uint32_t)(EDX));
  /* 10f227e6 call ebx */
  call_ind((uint32_t)(EBX), 0x10f227e8u);
  /* 10f227e8 mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f227ed push eax */
  push32((uint32_t)(EAX));
  /* 10f227ee call edi */
  call_ind((uint32_t)(EDI), 0x10f227f0u);
  /* 10f227f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f227f2 push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f227f7 call ebp */
  call_ind((uint32_t)(EBP), 0x10f227f9u);
  /* 10f227f9 mov cl, byte ptr [0x10f32cf1] */
  CL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f227ff push ecx */
  push32((uint32_t)(ECX));
  /* 10f22800 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22802u);
  /* 10f22802 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22805:;
  /* 10f22805 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22807 call dword ptr [0x10f2d148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d148))), 0x10f2280du);
  /* 10f2280d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22810 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22812 je 0x10f22a2c */
  if (C.zf) goto L_10f22a2c;
  /* 10f22818 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f2281a call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f22820u);
  /* 10f22820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22823 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22825 je 0x10f22a2c */
  if (C.zf) goto L_10f22a2c;
  /* 10f2282b mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22831 push edx */
  push32((uint32_t)(EDX));
  /* 10f22832 call edi */
  call_ind((uint32_t)(EDI), 0x10f22834u);
  /* 10f22834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22836 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f2283b call ebp */
  call_ind((uint32_t)(EBP), 0x10f2283du);
  /* 10f2283d mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22842 push eax */
  push32((uint32_t)(EAX));
  /* 10f22843 call edi */
  call_ind((uint32_t)(EDI), 0x10f22845u);
  /* 10f22845 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22847 push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f2284c call ebp */
  call_ind((uint32_t)(EBP), 0x10f2284eu);
  /* 10f2284e mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22854 mov ebx, dword ptr [0x10f2d160] */
  EBX = (r32((uint32_t)(0x10f2d160)));
  /* 10f2285a push ecx */
  push32((uint32_t)(ECX));
  /* 10f2285b call ebx */
  call_ind((uint32_t)(EBX), 0x10f2285du);
  /* 10f2285d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f22862 jne 0x10f22a2c */
  if (!C.zf) goto L_10f22a2c;
  /* 10f22868 mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f2286e push edx */
  push32((uint32_t)(EDX));
  /* 10f2286f call ebx */
  call_ind((uint32_t)(EBX), 0x10f22871u);
  /* 10f22871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f22876 jne 0x10f22a2c */
  if (!C.zf) goto L_10f22a2c;
  /* 10f2287c push 8 */
  push32((uint32_t)(0x8u));
  /* 10f2287e call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f22884u);
  /* 10f22884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22887 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22889 je 0x10f228a3 */
  if (C.zf) goto L_10f228a3;
  /* 10f2288b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2288d push 8 */
  push32((uint32_t)(0x8u));
  /* 10f2288f call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f22895u);
  /* 10f22895 push 0x10f2f528 */
  push32((uint32_t)(0x10f2f528u));
  /* 10f2289a call dword ptr [0x10f2d114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d114))), 0x10f228a0u);
  /* 10f228a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f228a3:;
  /* 10f228a3 mov al, byte ptr [0x10f32ce8] */
  AL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f228a8 push eax */
  push32((uint32_t)(EAX));
  /* 10f228a9 call edi */
  call_ind((uint32_t)(EDI), 0x10f228abu);
  /* 10f228ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10f228ad push 0x10f427a8 */
  push32((uint32_t)(0x10f427a8u));
  /* 10f228b2 call ebp */
  call_ind((uint32_t)(EBP), 0x10f228b4u);
  /* 10f228b4 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f228ba mov ebx, dword ptr [0x10f2d16c] */
  EBX = (r32((uint32_t)(0x10f2d16c)));
  /* 10f228c0 push 0x10f32fc8 */
  push32((uint32_t)(0x10f32fc8u));
  /* 10f228c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f228c6 call ebx */
  call_ind((uint32_t)(EBX), 0x10f228c8u);
  /* 10f228c8 mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f228ce push edx */
  push32((uint32_t)(EDX));
  /* 10f228cf call edi */
  call_ind((uint32_t)(EDI), 0x10f228d1u);
  /* 10f228d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f228d3 push 0x10f43c18 */
  push32((uint32_t)(0x10f43c18u));
  /* 10f228d8 call ebp */
  call_ind((uint32_t)(EBP), 0x10f228dau);
  /* 10f228da mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f228df push 0x10f32fe0 */
  push32((uint32_t)(0x10f32fe0u));
  /* 10f228e4 push eax */
  push32((uint32_t)(EAX));
  /* 10f228e5 call ebx */
  call_ind((uint32_t)(EBX), 0x10f228e7u);
  /* 10f228e7 mov cl, byte ptr [0x10f32cf1] */
  CL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f228ed push ecx */
  push32((uint32_t)(ECX));
  /* 10f228ee call edi */
  call_ind((uint32_t)(EDI), 0x10f228f0u);
  /* 10f228f0 mov ebx, dword ptr [0x10f2d13c] */
  EBX = (r32((uint32_t)(0x10f2d13c)));
  /* 10f228f6 push 0x10f32fe0 */
  push32((uint32_t)(0x10f32fe0u));
  /* 10f228fb call ebx */
  call_ind((uint32_t)(EBX), 0x10f228fdu);
  /* 10f228fd push 0x10f32fc8 */
  push32((uint32_t)(0x10f32fc8u));
  /* 10f22902 mov dword ptr [esp + 0x4c], eax */
  w32((uint32_t)(ESP + 0x4c), (EAX));
  /* 10f22906 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22908u);
  /* 10f22908 mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 10f2290c add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2290f add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22911 jne 0x10f22a2c */
  if (!C.zf) goto L_10f22a2c;
  /* 10f22917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22919 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f2291b call dword ptr [0x10f2d1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1a8))), 0x10f22921u);
  /* 10f22921 push 0x10f42808 */
  push32((uint32_t)(0x10f42808u));
  /* 10f22926 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22928u);
  /* 10f22928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2292b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2292d je 0x10f229a6 */
  if (C.zf) goto L_10f229a6;
  /* 10f2292f mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22935 push edx */
  push32((uint32_t)(EDX));
  /* 10f22936 call edi */
  call_ind((uint32_t)(EDI), 0x10f22938u);
  /* 10f22938 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2293a push 0x10f43c10 */
  push32((uint32_t)(0x10f43c10u));
  /* 10f2293f call ebp */
  call_ind((uint32_t)(EBP), 0x10f22941u);
  /* 10f22941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22944 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22946 call 0x10f23c47 */
  push32(0x10f2294bu); f_10f23c47();
  /* 10f2294b push eax */
  push32((uint32_t)(EAX));
  /* 10f2294c mov al, byte ptr [0x10f32ce8] */
  AL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22951 push 0x10f43bf0 */
  push32((uint32_t)(0x10f43bf0u));
  /* 10f22956 push eax */
  push32((uint32_t)(EAX));
  /* 10f22957 call esi */
  call_ind((uint32_t)(ESI), 0x10f22959u);
  /* 10f22959 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2295c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2295e call 0x10f23c47 */
  push32(0x10f22963u); f_10f23c47();
  /* 10f22963 mov cl, byte ptr [0x10f32ce8] */
  CL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22969 push eax */
  push32((uint32_t)(EAX));
  /* 10f2296a push 0x10f43bf8 */
  push32((uint32_t)(0x10f43bf8u));
  /* 10f2296f push ecx */
  push32((uint32_t)(ECX));
  /* 10f22970 call esi */
  call_ind((uint32_t)(ESI), 0x10f22972u);
  /* 10f22972 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22975 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22977 call 0x10f23c47 */
  push32(0x10f2297cu); f_10f23c47();
  /* 10f2297c mov dl, byte ptr [0x10f32ce8] */
  DL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f22982 push eax */
  push32((uint32_t)(EAX));
  /* 10f22983 push 0x10f43be0 */
  push32((uint32_t)(0x10f43be0u));
  /* 10f22988 push edx */
  push32((uint32_t)(EDX));
  /* 10f22989 call esi */
  call_ind((uint32_t)(ESI), 0x10f2298bu);
  /* 10f2298b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2298e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22990 call 0x10f23c47 */
  push32(0x10f22995u); f_10f23c47();
  /* 10f22995 push eax */
  push32((uint32_t)(EAX));
  /* 10f22996 mov al, byte ptr [0x10f32ce8] */
  AL = (r8((uint32_t)(0x10f32ce8)));
  /* 10f2299b push 0x10f43be8 */
  push32((uint32_t)(0x10f43be8u));
  /* 10f229a0 push eax */
  push32((uint32_t)(EAX));
  /* 10f229a1 call esi */
  call_ind((uint32_t)(ESI), 0x10f229a3u);
  /* 10f229a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f229a6:;
  /* 10f229a6 push 0x10f32cd8 */
  push32((uint32_t)(0x10f32cd8u));
  /* 10f229ab call ebx */
  call_ind((uint32_t)(EBX), 0x10f229adu);
  /* 10f229ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f229b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f229b2 je 0x10f22a2c */
  if (C.zf) goto L_10f22a2c;
  /* 10f229b4 mov cl, byte ptr [0x10f32cf1] */
  CL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f229ba push ecx */
  push32((uint32_t)(ECX));
  /* 10f229bb call edi */
  call_ind((uint32_t)(EDI), 0x10f229bdu);
  /* 10f229bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f229bf push 0x10f43cb0 */
  push32((uint32_t)(0x10f43cb0u));
  /* 10f229c4 call ebp */
  call_ind((uint32_t)(EBP), 0x10f229c6u);
  /* 10f229c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f229c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f229cb call 0x10f23c47 */
  push32(0x10f229d0u); f_10f23c47();
  /* 10f229d0 mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f229d6 push eax */
  push32((uint32_t)(EAX));
  /* 10f229d7 push 0x10f43bf0 */
  push32((uint32_t)(0x10f43bf0u));
  /* 10f229dc push edx */
  push32((uint32_t)(EDX));
  /* 10f229dd call esi */
  call_ind((uint32_t)(ESI), 0x10f229dfu);
  /* 10f229df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f229e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f229e4 call 0x10f23c47 */
  push32(0x10f229e9u); f_10f23c47();
  /* 10f229e9 push eax */
  push32((uint32_t)(EAX));
  /* 10f229ea mov al, byte ptr [0x10f32cf1] */
  AL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f229ef push 0x10f43bf8 */
  push32((uint32_t)(0x10f43bf8u));
  /* 10f229f4 push eax */
  push32((uint32_t)(EAX));
  /* 10f229f5 call esi */
  call_ind((uint32_t)(ESI), 0x10f229f7u);
  /* 10f229f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f229fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10f229fc call 0x10f23c47 */
  push32(0x10f22a01u); f_10f23c47();
  /* 10f22a01 mov cl, byte ptr [0x10f32cf1] */
  CL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22a07 push eax */
  push32((uint32_t)(EAX));
  /* 10f22a08 push 0x10f43be0 */
  push32((uint32_t)(0x10f43be0u));
  /* 10f22a0d push ecx */
  push32((uint32_t)(ECX));
  /* 10f22a0e call esi */
  call_ind((uint32_t)(ESI), 0x10f22a10u);
  /* 10f22a10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22a15 call 0x10f23c47 */
  push32(0x10f22a1au); f_10f23c47();
  /* 10f22a1a mov dl, byte ptr [0x10f32cf1] */
  DL = (r8((uint32_t)(0x10f32cf1)));
  /* 10f22a20 push eax */
  push32((uint32_t)(EAX));
  /* 10f22a21 push 0x10f43be8 */
  push32((uint32_t)(0x10f43be8u));
  /* 10f22a26 push edx */
  push32((uint32_t)(EDX));
  /* 10f22a27 call esi */
  call_ind((uint32_t)(ESI), 0x10f22a29u);
  /* 10f22a29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22a2c:;
  /* 10f22a2c mov ecx, 0x10f42860 */
  ECX = (0x10f42860u);
  /* 10f22a31 call 0x10f23440 */
  push32(0x10f22a36u); f_10f23440();
  /* 10f22a36 mov ecx, 0x10f428d8 */
  ECX = (0x10f428d8u);
  /* 10f22a3b call 0x10f23440 */
  push32(0x10f22a40u); f_10f23440();
  /* 10f22a40 mov ecx, 0x10f42950 */
  ECX = (0x10f42950u);
  /* 10f22a45 call 0x10f23440 */
  push32(0x10f22a4au); f_10f23440();
  /* 10f22a4a mov ecx, 0x10f33060 */
  ECX = (0x10f33060u);
  /* 10f22a4f call 0x10f23440 */
  push32(0x10f22a54u); f_10f23440();
  /* 10f22a54 mov ecx, 0x10f330d8 */
  ECX = (0x10f330d8u);
  /* 10f22a59 call 0x10f23440 */
  push32(0x10f22a5eu); f_10f23440();
  /* 10f22a5e mov ecx, 0x10f33150 */
  ECX = (0x10f33150u);
  /* 10f22a63 call 0x10f23440 */
  push32(0x10f22a68u); f_10f23440();
  /* 10f22a68 mov ecx, 0x10f331c8 */
  ECX = (0x10f331c8u);
  /* 10f22a6d call 0x10f23440 */
  push32(0x10f22a72u); f_10f23440();
  /* 10f22a72 mov ecx, 0x10f33240 */
  ECX = (0x10f33240u);
  /* 10f22a77 call 0x10f23440 */
  push32(0x10f22a7cu); f_10f23440();
  /* 10f22a7c mov ecx, 0x10f332b8 */
  ECX = (0x10f332b8u);
  /* 10f22a81 call 0x10f23440 */
  push32(0x10f22a86u); f_10f23440();
  /* 10f22a86 mov ecx, 0x10f429c8 */
  ECX = (0x10f429c8u);
  /* 10f22a8b call 0x10f23440 */
  push32(0x10f22a90u); f_10f23440();
  /* 10f22a90 mov ecx, 0x10f42a40 */
  ECX = (0x10f42a40u);
  /* 10f22a95 call 0x10f23440 */
  push32(0x10f22a9au); f_10f23440();
  /* 10f22a9a mov ecx, 0x10f42ab8 */
  ECX = (0x10f42ab8u);
  /* 10f22a9f call 0x10f23440 */
  push32(0x10f22aa4u); f_10f23440();
  /* 10f22aa4 mov ecx, 0x10f42b30 */
  ECX = (0x10f42b30u);
  /* 10f22aa9 call 0x10f23440 */
  push32(0x10f22aaeu); f_10f23440();
  /* 10f22aae mov ecx, 0x10f42ba8 */
  ECX = (0x10f42ba8u);
  /* 10f22ab3 call 0x10f23440 */
  push32(0x10f22ab8u); f_10f23440();
  /* 10f22ab8 mov ecx, 0x10f42c28 */
  ECX = (0x10f42c28u);
  /* 10f22abd call 0x10f23440 */
  push32(0x10f22ac2u); f_10f23440();
  /* 10f22ac2 mov edi, dword ptr [0x10f2d130] */
  EDI = (r32((uint32_t)(0x10f2d130)));
  /* 10f22ac8 call edi */
  call_ind((uint32_t)(EDI), 0x10f22acau);
  /* 10f22aca cmp eax, dword ptr [0x10f4275c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f4275c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22ad0 jle 0x10f22b5a */
  if ((C.zf||C.sf!=C.of)) goto L_10f22b5a;
  /* 10f22ad6 call edi */
  call_ind((uint32_t)(EDI), 0x10f22ad8u);
  /* 10f22ad8 mov esi, dword ptr [0x10f2d170] */
  ESI = (r32((uint32_t)(0x10f2d170)));
  /* 10f22ade add eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22ae3 push 0x10f42764 */
  push32((uint32_t)(0x10f42764u));
  /* 10f22ae8 push 0x10f42874 */
  push32((uint32_t)(0x10f42874u));
  /* 10f22aed mov dword ptr [0x10f4275c], eax */
  w32((uint32_t)(0x10f4275c), (EAX));
  /* 10f22af2 call esi */
  call_ind((uint32_t)(ESI), 0x10f22af4u);
  /* 10f22af4 push 0x10f4277c */
  push32((uint32_t)(0x10f4277cu));
  /* 10f22af9 push 0x10f428ec */
  push32((uint32_t)(0x10f428ecu));
  /* 10f22afe call esi */
  call_ind((uint32_t)(ESI), 0x10f22b00u);
  /* 10f22b00 push 0x10f42794 */
  push32((uint32_t)(0x10f42794u));
  /* 10f22b05 push 0x10f42964 */
  push32((uint32_t)(0x10f42964u));
  /* 10f22b0a call esi */
  call_ind((uint32_t)(ESI), 0x10f22b0cu);
  /* 10f22b0c push 0x10f4281c */
  push32((uint32_t)(0x10f4281cu));
  /* 10f22b11 push 0x10f33074 */
  push32((uint32_t)(0x10f33074u));
  /* 10f22b16 call esi */
  call_ind((uint32_t)(ESI), 0x10f22b18u);
  /* 10f22b18 push 0x10f42834 */
  push32((uint32_t)(0x10f42834u));
  /* 10f22b1d push 0x10f330ec */
  push32((uint32_t)(0x10f330ecu));
  /* 10f22b22 call esi */
  call_ind((uint32_t)(ESI), 0x10f22b24u);
  /* 10f22b24 push 0x10f4284c */
  push32((uint32_t)(0x10f4284cu));
  /* 10f22b29 push 0x10f33164 */
  push32((uint32_t)(0x10f33164u));
  /* 10f22b2e call esi */
  call_ind((uint32_t)(ESI), 0x10f22b30u);
  /* 10f22b30 push 0x10f427bc */
  push32((uint32_t)(0x10f427bcu));
  /* 10f22b35 push 0x10f429dc */
  push32((uint32_t)(0x10f429dcu));
  /* 10f22b3a call esi */
  call_ind((uint32_t)(ESI), 0x10f22b3cu);
  /* 10f22b3c push 0x10f427d4 */
  push32((uint32_t)(0x10f427d4u));
  /* 10f22b41 push 0x10f42a54 */
  push32((uint32_t)(0x10f42a54u));
  /* 10f22b46 call esi */
  call_ind((uint32_t)(ESI), 0x10f22b48u);
  /* 10f22b48 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22b4b push 0x10f427f4 */
  push32((uint32_t)(0x10f427f4u));
  /* 10f22b50 push 0x10f42acc */
  push32((uint32_t)(0x10f42accu));
  /* 10f22b55 call esi */
  call_ind((uint32_t)(ESI), 0x10f22b57u);
  /* 10f22b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22b5a:;
  /* 10f22b5a call edi */
  call_ind((uint32_t)(EDI), 0x10f22b5cu);
  /* 10f22b5c cmp eax, dword ptr [0x10f43c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f43c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22b62 jle 0x10f22d47 */
  if ((C.zf||C.sf!=C.of)) goto L_10f22d47;
  /* 10f22b68 call edi */
  call_ind((uint32_t)(EDI), 0x10f22b6au);
  /* 10f22b6a add eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22b6f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f22b74 mov dword ptr [0x10f43c3c], eax */
  w32((uint32_t)(0x10f43c3c), (EAX));
  /* 10f22b79 mov eax, dword ptr [0x10f32c00] */
  EAX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22b7e push 0x10f42760 */
  push32((uint32_t)(0x10f42760u));
  /* 10f22b83 push eax */
  push32((uint32_t)(EAX));
  /* 10f22b84 push 0x10f42860 */
  push32((uint32_t)(0x10f42860u));
  /* 10f22b89 call 0x10f23600 */
  push32(0x10f22b8eu); f_10f23600();
  /* 10f22b8e mov ecx, dword ptr [0x10f32c00] */
  ECX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22b94 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f22b99 push 0x10f42778 */
  push32((uint32_t)(0x10f42778u));
  /* 10f22b9e push ecx */
  push32((uint32_t)(ECX));
  /* 10f22b9f push 0x10f428d8 */
  push32((uint32_t)(0x10f428d8u));
  /* 10f22ba4 call 0x10f23600 */
  push32(0x10f22ba9u); f_10f23600();
  /* 10f22ba9 mov edx, dword ptr [0x10f32c00] */
  EDX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22baf push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f22bb4 push 0x10f42790 */
  push32((uint32_t)(0x10f42790u));
  /* 10f22bb9 push edx */
  push32((uint32_t)(EDX));
  /* 10f22bba push 0x10f42950 */
  push32((uint32_t)(0x10f42950u));
  /* 10f22bbf call 0x10f23600 */
  push32(0x10f22bc4u); f_10f23600();
  /* 10f22bc4 mov eax, dword ptr [0x10f32c00] */
  EAX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22bc9 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f22bce push 0x10f42818 */
  push32((uint32_t)(0x10f42818u));
  /* 10f22bd3 push eax */
  push32((uint32_t)(EAX));
  /* 10f22bd4 push 0x10f33060 */
  push32((uint32_t)(0x10f33060u));
  /* 10f22bd9 call 0x10f23600 */
  push32(0x10f22bdeu); f_10f23600();
  /* 10f22bde mov ecx, dword ptr [0x10f32c00] */
  ECX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22be4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22be7 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f22bec push 0x10f42830 */
  push32((uint32_t)(0x10f42830u));
  /* 10f22bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22bf2 push 0x10f330d8 */
  push32((uint32_t)(0x10f330d8u));
  /* 10f22bf7 call 0x10f23600 */
  push32(0x10f22bfcu); f_10f23600();
  /* 10f22bfc mov edx, dword ptr [0x10f32c00] */
  EDX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22c02 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f22c07 push 0x10f42848 */
  push32((uint32_t)(0x10f42848u));
  /* 10f22c0c push edx */
  push32((uint32_t)(EDX));
  /* 10f22c0d push 0x10f33150 */
  push32((uint32_t)(0x10f33150u));
  /* 10f22c12 call 0x10f23600 */
  push32(0x10f22c17u); f_10f23600();
  /* 10f22c17 mov eax, dword ptr [0x10f32c00] */
  EAX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22c1c push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f22c21 push 0x10f427b8 */
  push32((uint32_t)(0x10f427b8u));
  /* 10f22c26 push eax */
  push32((uint32_t)(EAX));
  /* 10f22c27 push 0x10f429c8 */
  push32((uint32_t)(0x10f429c8u));
  /* 10f22c2c call 0x10f23600 */
  push32(0x10f22c31u); f_10f23600();
  /* 10f22c31 mov ecx, dword ptr [0x10f32c00] */
  ECX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22c37 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f22c3c push 0x10f427d0 */
  push32((uint32_t)(0x10f427d0u));
  /* 10f22c41 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22c42 push 0x10f42a40 */
  push32((uint32_t)(0x10f42a40u));
  /* 10f22c47 call 0x10f23600 */
  push32(0x10f22c4cu); f_10f23600();
  /* 10f22c4c mov edx, dword ptr [0x10f32c00] */
  EDX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22c52 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22c55 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f22c5a push 0x10f427f0 */
  push32((uint32_t)(0x10f427f0u));
  /* 10f22c5f push edx */
  push32((uint32_t)(EDX));
  /* 10f22c60 push 0x10f42ab8 */
  push32((uint32_t)(0x10f42ab8u));
  /* 10f22c65 call 0x10f23600 */
  push32(0x10f22c6au); f_10f23600();
  /* 10f22c6a mov eax, dword ptr [0x10f331c8] */
  EAX = (r32((uint32_t)(0x10f331c8)));
  /* 10f22c6f mov ecx, dword ptr [0x10f32c00] */
  ECX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22c75 push 0x10f331d4 */
  push32((uint32_t)(0x10f331d4u));
  /* 10f22c7a push eax */
  push32((uint32_t)(EAX));
  /* 10f22c7b push 0x10f331dc */
  push32((uint32_t)(0x10f331dcu));
  /* 10f22c80 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22c81 push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f22c86 call 0x10f23530 */
  push32(0x10f22c8bu); f_10f23530();
  /* 10f22c8b mov edx, dword ptr [0x10f33240] */
  EDX = (r32((uint32_t)(0x10f33240)));
  /* 10f22c91 mov eax, dword ptr [0x10f32c00] */
  EAX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22c96 push 0x10f3324c */
  push32((uint32_t)(0x10f3324cu));
  /* 10f22c9b push edx */
  push32((uint32_t)(EDX));
  /* 10f22c9c push 0x10f33254 */
  push32((uint32_t)(0x10f33254u));
  /* 10f22ca1 push eax */
  push32((uint32_t)(EAX));
  /* 10f22ca2 push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f22ca7 call 0x10f23530 */
  push32(0x10f22cacu); f_10f23530();
  /* 10f22cac mov ecx, dword ptr [0x10f332b8] */
  ECX = (r32((uint32_t)(0x10f332b8)));
  /* 10f22cb2 mov edx, dword ptr [0x10f32c00] */
  EDX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22cb8 push 0x10f332c4 */
  push32((uint32_t)(0x10f332c4u));
  /* 10f22cbd push ecx */
  push32((uint32_t)(ECX));
  /* 10f22cbe push 0x10f332cc */
  push32((uint32_t)(0x10f332ccu));
  /* 10f22cc3 push edx */
  push32((uint32_t)(EDX));
  /* 10f22cc4 push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f22cc9 call 0x10f23530 */
  push32(0x10f22cceu); f_10f23530();
  /* 10f22cce mov eax, dword ptr [0x10f42b30] */
  EAX = (r32((uint32_t)(0x10f42b30)));
  /* 10f22cd3 mov ecx, dword ptr [0x10f32c00] */
  ECX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22cd9 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22cdc push 0x10f42b3c */
  push32((uint32_t)(0x10f42b3cu));
  /* 10f22ce1 push eax */
  push32((uint32_t)(EAX));
  /* 10f22ce2 push 0x10f42b44 */
  push32((uint32_t)(0x10f42b44u));
  /* 10f22ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22ce8 push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f22ced call 0x10f23530 */
  push32(0x10f22cf2u); f_10f23530();
  /* 10f22cf2 mov edx, dword ptr [0x10f42ba8] */
  EDX = (r32((uint32_t)(0x10f42ba8)));
  /* 10f22cf8 mov eax, dword ptr [0x10f32c00] */
  EAX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22cfd push 0x10f42bb4 */
  push32((uint32_t)(0x10f42bb4u));
  /* 10f22d02 push edx */
  push32((uint32_t)(EDX));
  /* 10f22d03 push 0x10f42bbc */
  push32((uint32_t)(0x10f42bbcu));
  /* 10f22d08 push eax */
  push32((uint32_t)(EAX));
  /* 10f22d09 push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f22d0e call 0x10f23530 */
  push32(0x10f22d13u); f_10f23530();
  /* 10f22d13 mov ecx, dword ptr [0x10f42c28] */
  ECX = (r32((uint32_t)(0x10f42c28)));
  /* 10f22d19 mov edx, dword ptr [0x10f32c00] */
  EDX = (r32((uint32_t)(0x10f32c00)));
  /* 10f22d1f push 0x10f42c34 */
  push32((uint32_t)(0x10f42c34u));
  /* 10f22d24 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22d25 push 0x10f42c3c */
  push32((uint32_t)(0x10f42c3cu));
  /* 10f22d2a push edx */
  push32((uint32_t)(EDX));
  /* 10f22d2b push 0x10f43ca0 */
  push32((uint32_t)(0x10f43ca0u));
  /* 10f22d30 call 0x10f23530 */
  push32(0x10f22d35u); f_10f23530();
  /* 10f22d35 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22d38 mov ecx, 0x10f42ca8 */
  ECX = (0x10f42ca8u);
  /* 10f22d3d push 0x10f23010 */
  push32((uint32_t)(0x10f23010u));
  /* 10f22d42 call 0x10f23800 */
  push32(0x10f22d47u); f_10f23800();
L_10f22d47:;
  /* 10f22d47 mov ecx, 0x10f32fe8 */
  ECX = (0x10f32fe8u);
  /* 10f22d4c call 0x10f23420 */
  push32(0x10f22d51u); f_10f23420();
  /* 10f22d51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22d53 je 0x10f22e21 */
  if (C.zf) goto L_10f22e21;
  /* 10f22d59 call edi */
  call_ind((uint32_t)(EDI), 0x10f22d5bu);
  /* 10f22d5b cmp eax, dword ptr [0x10f42ca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f42ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22d61 jle 0x10f22e17 */
  if ((C.zf||C.sf!=C.of)) goto L_10f22e17;
  /* 10f22d67 mov ecx, 0x10f42ca8 */
  ECX = (0x10f42ca8u);
  /* 10f22d6c call 0x10f236e0 */
  push32(0x10f22d71u); f_10f236e0();
  /* 10f22d71 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f22d74 jge 0x10f22e17 */
  if ((C.sf==C.of)) goto L_10f22e17;
  /* 10f22d7a mov al, byte ptr [0x10f43c68] */
  AL = (r8((uint32_t)(0x10f43c68)));
  /* 10f22d7f push eax */
  push32((uint32_t)(EAX));
  /* 10f22d80 push 0x10f43a8e */
  push32((uint32_t)(0x10f43a8eu));
  /* 10f22d85 call dword ptr [0x10f2d174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d174))), 0x10f22d8bu);
  /* 10f22d8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f22d90 jne 0x10f22e17 */
  if (!C.zf) goto L_10f22e17;
  /* 10f22d96 call edi */
  call_ind((uint32_t)(EDI), 0x10f22d98u);
  /* 10f22d98 add eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22d9d mov dword ptr [0x10f42ca4], eax */
  w32((uint32_t)(0x10f42ca4), (EAX));
  /* 10f22da2 call 0x10f23c47 */
  push32(0x10f22da7u); f_10f23c47();
  /* 10f22da7 mov cl, byte ptr [0x10f43c68] */
  CL = (r8((uint32_t)(0x10f43c68)));
  /* 10f22dad push eax */
  push32((uint32_t)(EAX));
  /* 10f22dae push 0x10f43a8e */
  push32((uint32_t)(0x10f43a8eu));
  /* 10f22db3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22db4 push 0x10f42c20 */
  push32((uint32_t)(0x10f42c20u));
  /* 10f22db9 push 0x10f32d10 */
  push32((uint32_t)(0x10f32d10u));
  /* 10f22dbe push 0x10f43c48 */
  push32((uint32_t)(0x10f43c48u));
  /* 10f22dc3 call dword ptr [0x10f2d178] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d178))), 0x10f22dc9u);
  /* 10f22dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22dcb push 0x10f43c48 */
  push32((uint32_t)(0x10f43c48u));
  /* 10f22dd0 call ebp */
  call_ind((uint32_t)(EBP), 0x10f22dd2u);
  /* 10f22dd2 mov edx, dword ptr [0x10f43c68] */
  EDX = (r32((uint32_t)(0x10f43c68)));
  /* 10f22dd8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22ddb mov ecx, 0x10f42ca8 */
  ECX = (0x10f42ca8u);
  /* 10f22de0 push 0x10f32ffc */
  push32((uint32_t)(0x10f32ffcu));
  /* 10f22de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22de9 push edx */
  push32((uint32_t)(EDX));
  /* 10f22dea call 0x10f23730 */
  push32(0x10f22defu); f_10f23730();
  /* 10f22def mov al, byte ptr [0x10f32c09] */
  AL = (r8((uint32_t)(0x10f32c09)));
  /* 10f22df4 mov esi, dword ptr [0x10f2d17c] */
  ESI = (r32((uint32_t)(0x10f2d17c)));
  /* 10f22dfa push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 10f22dff push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22e01 push eax */
  push32((uint32_t)(EAX));
  /* 10f22e02 call esi */
  call_ind((uint32_t)(ESI), 0x10f22e04u);
  /* 10f22e04 mov cl, byte ptr [0x10f32c12] */
  CL = (r8((uint32_t)(0x10f32c12)));
  /* 10f22e0a push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 10f22e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22e11 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22e12 call esi */
  call_ind((uint32_t)(ESI), 0x10f22e14u);
  /* 10f22e14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22e17:;
  /* 10f22e17 mov ecx, 0x10f32fe8 */
  ECX = (0x10f32fe8u);
  /* 10f22e1c call 0x10f23440 */
  push32(0x10f22e21u); f_10f23440();
L_10f22e21:;
  /* 10f22e21 mov dl, byte ptr [0x10f32c09] */
  DL = (r8((uint32_t)(0x10f32c09)));
  /* 10f22e27 mov esi, dword ptr [0x10f2d180] */
  ESI = (r32((uint32_t)(0x10f2d180)));
  /* 10f22e2d push edx */
  push32((uint32_t)(EDX));
  /* 10f22e2e call esi */
  call_ind((uint32_t)(ESI), 0x10f22e30u);
  /* 10f22e30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22e33 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22e35 je 0x10f22e5a */
  if (C.zf) goto L_10f22e5a;
  /* 10f22e37 mov al, byte ptr [0x10f32c12] */
  AL = (r8((uint32_t)(0x10f32c12)));
  /* 10f22e3c push eax */
  push32((uint32_t)(EAX));
  /* 10f22e3d call esi */
  call_ind((uint32_t)(ESI), 0x10f22e3fu);
  /* 10f22e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22e42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22e44 je 0x10f22e5a */
  if (C.zf) goto L_10f22e5a;
  /* 10f22e46 push 0x10f2f51c */
  push32((uint32_t)(0x10f2f51cu));
  /* 10f22e4b call dword ptr [0x10f2d114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d114))), 0x10f22e51u);
  /* 10f22e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22e54 call dword ptr [0x10f2d184] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d184))), 0x10f22e5au);
L_10f22e5a:;
  /* 10f22e5a mov cl, byte ptr [0x10f32c00] */
  CL = (r8((uint32_t)(0x10f32c00)));
  /* 10f22e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22e61 call esi */
  call_ind((uint32_t)(ESI), 0x10f22e63u);
  /* 10f22e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22e66 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f22e68 pop edi */
  EDI = (pop32());
  /* 10f22e69 pop esi */
  ESI = (pop32());
  /* 10f22e6a pop ebp */
  EBP = (pop32());
  /* 10f22e6b pop ebx */
  EBX = (pop32());
  /* 10f22e6c je 0x10f22e82 */
  if (C.zf) goto L_10f22e82;
  /* 10f22e6e push 0x10f2f514 */
  push32((uint32_t)(0x10f2f514u));
  /* 10f22e73 call dword ptr [0x10f2d114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d114))), 0x10f22e79u);
  /* 10f22e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22e7c call dword ptr [0x10f2d188] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d188))), 0x10f22e82u);
L_10f22e82:;
  /* 10f22e82 add esp, 0x68 */
  { uint32_t _a=(ESP),_b=(0x68u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22e85 ret  */
  ESPCHK(0x10f21ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea0 @ 0x10f22ea0 (13 bytes, 4 insns) */
void f_10f22ea0(void) {
  FTRACE(0x10f22ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22ea0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22ea2 mov ecx, 0x10f32c18 */
  ECX = (0x10f32c18u);
  /* 10f22ea7 call 0x10f2a684 */
  push32(0x10f22eacu); f_10f2a684();
  /* 10f22eac ret  */
  ESPCHK(0x10f22ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eb0 @ 0x10f22eb0 (12 bytes, 4 insns) */
void f_10f22eb0(void) {
  FTRACE(0x10f22eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22eb0 push 0x10f22ec0 */
  push32((uint32_t)(0x10f22ec0u));
  /* 10f22eb5 call 0x10f23c06 */
  push32(0x10f22ebau); f_10f23c06();
  /* 10f22eba pop ecx */
  ECX = (pop32());
  /* 10f22ebb ret  */
  ESPCHK(0x10f22eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f00 @ 0x10f22f00 (22 bytes, 9 insns) */
void f_10f22f00(void) {
  FTRACE(0x10f22f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22f00 push esi */
  push32((uint32_t)(ESI));
  /* 10f22f01 mov esi, ecx */
  ESI = (ECX);
  /* 10f22f03 push 0x10f2f558 */
  push32((uint32_t)(0x10f2f558u));
  /* 10f22f08 push esi */
  push32((uint32_t)(ESI));
  /* 10f22f09 call dword ptr [0x10f2d10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d10c))), 0x10f22f0fu);
  /* 10f22f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22f12 mov eax, esi */
  EAX = (ESI);
  /* 10f22f14 pop esi */
  ESI = (pop32());
  /* 10f22f15 ret  */
  ESPCHK(0x10f22f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f20 @ 0x10f22f20 (53 bytes, 21 insns) */
void f_10f22f20(void) {
  FTRACE(0x10f22f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22f20 push esi */
  push32((uint32_t)(ESI));
  /* 10f22f21 mov esi, ecx */
  ESI = (ECX);
  /* 10f22f23 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f22f25 push esi */
  push32((uint32_t)(ESI));
  /* 10f22f26 call dword ptr [0x10f2d1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d8))), 0x10f22f2cu);
  /* 10f22f2c mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f22f30 mov al, 1 */
  AL = (0x1u);
  /* 10f22f32 shl al, cl */
  AL = (sh_shl((uint32_t)(AL), (CL)&0x1f, 8));
  /* 10f22f34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22f37 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10f22f39 mov byte ptr [esi + 4], al */
  w8((uint32_t)(ESI + 0x4), (AL));
  /* 10f22f3c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f22f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f22f42 je 0x10f22f4f */
  if (C.zf) goto L_10f22f4f;
  /* 10f22f44 push eax */
  push32((uint32_t)(EAX));
  /* 10f22f45 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22f46 call dword ptr [0x10f2d108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d108))), 0x10f22f4cu);
  /* 10f22f4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f22f4f:;
  /* 10f22f4f mov eax, esi */
  EAX = (ESI);
  /* 10f22f51 pop esi */
  ESI = (pop32());
  /* 10f22f52 ret 8 */
  ESPCHK(0x10f22f20u, _esp0);
  ESP += 12; return;
}

/* FUN_10002f60 @ 0x10f22f60 (72 bytes, 41 insns) */
void f_10f22f60(void) {
  FTRACE(0x10f22f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22f60 push ebx */
  push32((uint32_t)(EBX));
  /* 10f22f61 mov ebx, dword ptr [0x10f2d11c] */
  EBX = (r32((uint32_t)(0x10f2d11c)));
  /* 10f22f67 push esi */
  push32((uint32_t)(ESI));
  /* 10f22f68 push edi */
  push32((uint32_t)(EDI));
  /* 10f22f69 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f22f6d mov esi, ecx */
  ESI = (ECX);
  /* 10f22f6f push edi */
  push32((uint32_t)(EDI));
  /* 10f22f70 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f22f72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f22f74 push eax */
  push32((uint32_t)(EAX));
  /* 10f22f75 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22f77u);
  /* 10f22f77 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10f22f79 push edi */
  push32((uint32_t)(EDI));
  /* 10f22f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f22f7c push ecx */
  push32((uint32_t)(ECX));
  /* 10f22f7d call ebx */
  call_ind((uint32_t)(EBX), 0x10f22f7fu);
  /* 10f22f7f mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 10f22f81 push edi */
  push32((uint32_t)(EDI));
  /* 10f22f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f22f84 push edx */
  push32((uint32_t)(EDX));
  /* 10f22f85 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22f87u);
  /* 10f22f87 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f22f89 push edi */
  push32((uint32_t)(EDI));
  /* 10f22f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f22f8c push eax */
  push32((uint32_t)(EAX));
  /* 10f22f8d call ebx */
  call_ind((uint32_t)(EBX), 0x10f22f8fu);
  /* 10f22f8f mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10f22f91 push edi */
  push32((uint32_t)(EDI));
  /* 10f22f92 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f22f94 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22f95 call ebx */
  call_ind((uint32_t)(EBX), 0x10f22f97u);
  /* 10f22f97 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 10f22f99 push edi */
  push32((uint32_t)(EDI));
  /* 10f22f9a push 5 */
  push32((uint32_t)(0x5u));
  /* 10f22f9c push edx */
  push32((uint32_t)(EDX));
  /* 10f22f9d call ebx */
  call_ind((uint32_t)(EBX), 0x10f22f9fu);
  /* 10f22f9f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22fa2 pop edi */
  EDI = (pop32());
  /* 10f22fa3 pop esi */
  ESI = (pop32());
  /* 10f22fa4 pop ebx */
  EBX = (pop32());
  /* 10f22fa5 ret 4 */
  ESPCHK(0x10f22f60u, _esp0);
  ESP += 8; return;
}

/* FUN_10002fb0 @ 0x10f22fb0 (36 bytes, 14 insns) */
void f_10f22fb0(void) {
  FTRACE(0x10f22fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22fb0 mov eax, ecx */
  EAX = (ECX);
  /* 10f22fb2 mov dl, 1 */
  DL = (0x1u);
  /* 10f22fb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f22fb8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10f22fba shl dl, cl */
  DL = (sh_shl((uint32_t)(DL), (CL)&0x1f, 8));
  /* 10f22fbc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f22fbf or cl, dl */
  { uint32_t _r=(CL)|(DL); CL = (_r); fl_logic(_r,8); }
  /* 10f22fc1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f22fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f22fc4 push edx */
  push32((uint32_t)(EDX));
  /* 10f22fc5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f22fc8 call dword ptr [0x10f2d104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d104))), 0x10f22fceu);
  /* 10f22fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f22fd1 ret 4 */
  ESPCHK(0x10f22fb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002fe0 @ 0x10f22fe0 (13 bytes, 3 insns) */
void f_10f22fe0(void) {
  FTRACE(0x10f22fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22fe0 mov eax, ecx */
  EAX = (ECX);
  /* 10f22fe2 mov dword ptr [eax + 0x320], 0 */
  w32((uint32_t)(EAX + 0x320), (0x0u));
  /* 10f22fec ret  */
  ESPCHK(0x10f22fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ff0 @ 0x10f22ff0 (20 bytes, 6 insns) */
void f_10f22ff0(void) {
  FTRACE(0x10f22ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f22ff0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f22ff4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f22ff5 jne 0x10f22ffc */
  if (!C.zf) goto L_10f22ffc;
  /* 10f22ff7 call 0x10f21710 */
  push32(0x10f22ffcu); f_10f21710();
L_10f22ffc:;
  /* 10f22ffc mov eax, 1 */
  EAX = (0x1u);
  /* 10f23001 ret 0xc */
  ESPCHK(0x10f22ff0u, _esp0);
  ESP += 16; return;
}

/* FUN_10003130 @ 0x10f23130 (148 bytes, 36 insns) */
void f_10f23130(void) {
  FTRACE(0x10f23130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23130 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f23132 call dword ptr [0x10f2d110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d110))), 0x10f23138u);
  /* 10f23138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2313b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2313d je 0x10f231c3 */
  if (C.zf) goto L_10f231c3;
  /* 10f23143 call 0x10f23c47 */
  push32(0x10f23148u); f_10f23c47();
  /* 10f23148 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2314d cmp eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23152 jle 0x10f231c3 */
  if ((C.zf||C.sf!=C.of)) goto L_10f231c3;
  /* 10f23154 mov al, byte ptr [0x10f32cfa] */
  AL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f23159 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f2315e push 0x10f32ce0 */
  push32((uint32_t)(0x10f32ce0u));
  /* 10f23163 push eax */
  push32((uint32_t)(EAX));
  /* 10f23164 push 0x10f32fd0 */
  push32((uint32_t)(0x10f32fd0u));
  /* 10f23169 push 0x10f32d10 */
  push32((uint32_t)(0x10f32d10u));
  /* 10f2316e push 0x10f479a8 */
  push32((uint32_t)(0x10f479a8u));
  /* 10f23173 call dword ptr [0x10f2d178] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d178))), 0x10f23179u);
  /* 10f23179 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2317b push 0x10f479a8 */
  push32((uint32_t)(0x10f479a8u));
  /* 10f23180 call dword ptr [0x10f2d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c0))), 0x10f23186u);
  /* 10f23186 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23189 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2318b call 0x10f23c47 */
  push32(0x10f23190u); f_10f23c47();
  /* 10f23190 mov cl, byte ptr [0x10f32cfa] */
  CL = (r8((uint32_t)(0x10f32cfa)));
  /* 10f23196 push eax */
  push32((uint32_t)(EAX));
  /* 10f23197 push 0x10f43c28 */
  push32((uint32_t)(0x10f43c28u));
  /* 10f2319c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2319d call dword ptr [0x10f2d1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c4))), 0x10f231a3u);
  /* 10f231a3 push 0x10f427e8 */
  push32((uint32_t)(0x10f427e8u));
  /* 10f231a8 push 0x10f479a8 */
  push32((uint32_t)(0x10f479a8u));
  /* 10f231ad call dword ptr [0x10f2d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d170))), 0x10f231b3u);
  /* 10f231b3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10f231b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f231ba call dword ptr [0x10f2d134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d134))), 0x10f231c0u);
  /* 10f231c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f231c3:;
  /* 10f231c3 ret  */
  ESPCHK(0x10f23130u, _esp0);
  ESP += 4; return;
}

/* FUN_10003200 @ 0x10f23200 (40 bytes, 16 insns) */
void f_10f23200(void) {
  FTRACE(0x10f23200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23200 push esi */
  push32((uint32_t)(ESI));
  /* 10f23201 mov esi, ecx */
  ESI = (ECX);
  /* 10f23203 push edi */
  push32((uint32_t)(EDI));
  /* 10f23204 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 10f23207 mov dword ptr [esi], 0 */
  w32((uint32_t)(ESI), (0x0u));
  /* 10f2320d push eax */
  push32((uint32_t)(EAX));
  /* 10f2320e call dword ptr [0x10f2d1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1dc))), 0x10f23214u);
  /* 10f23214 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 10f23217 mov ecx, 6 */
  ECX = (0x6u);
  /* 10f2321c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2321e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23221 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f23223 mov eax, esi */
  EAX = (ESI);
  /* 10f23225 pop edi */
  EDI = (pop32());
  /* 10f23226 pop esi */
  ESI = (pop32());
  /* 10f23227 ret  */
  ESPCHK(0x10f23200u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10f23230 (16 bytes, 7 insns) */
void f_10f23230(void) {
  FTRACE(0x10f23230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23230 push esi */
  push32((uint32_t)(ESI));
  /* 10f23231 mov esi, ecx */
  ESI = (ECX);
  /* 10f23233 call 0x10f23200 */
  push32(0x10f23238u); f_10f23200();
  /* 10f23238 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 10f2323c mov eax, esi */
  EAX = (ESI);
  /* 10f2323e pop esi */
  ESI = (pop32());
  /* 10f2323f ret  */
  ESPCHK(0x10f23230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003240 @ 0x10f23240 (126 bytes, 34 insns) */
void f_10f23240(void) {
  FTRACE(0x10f23240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23240 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23241 push esi */
  push32((uint32_t)(ESI));
  /* 10f23242 push edi */
  push32((uint32_t)(EDI));
  /* 10f23243 mov esi, ecx */
  ESI = (ECX);
  /* 10f23245 call 0x10f23230 */
  push32(0x10f2324au); f_10f23230();
  /* 10f2324a lea edi, [esi + 0x3d] */
  EDI = ((uint32_t)(ESI + 0x3d));
  /* 10f2324d mov ecx, edi */
  ECX = (EDI);
  /* 10f2324f call 0x10f23200 */
  push32(0x10f23254u); f_10f23200();
  /* 10f23254 lea ecx, [edi + 0x6c] */
  ECX = ((uint32_t)(EDI + 0x6c));
  /* 10f23257 call 0x10f232e0 */
  push32(0x10f2325cu); f_10f232e0();
  /* 10f2325c lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
  /* 10f23262 mov ebx, 0x64 */
  EBX = (0x64u);
L_10f23267:;
  /* 10f23267 mov ecx, edi */
  ECX = (EDI);
  /* 10f23269 call 0x10f23200 */
  push32(0x10f2326eu); f_10f23200();
  /* 10f2326e add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23271 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f23272 jne 0x10f23267 */
  if (!C.zf) goto L_10f23267;
  /* 10f23274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f23276 mov dword ptr [esi + 0x185a], 5 */
  w32((uint32_t)(ESI + 0x185a), (0x5u));
  /* 10f23280 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 10f23286 mov byte ptr [esi + 0x184d], al */
  w8((uint32_t)(ESI + 0x184d), (AL));
  /* 10f2328c mov dword ptr [esi + 0x184e], eax */
  w32((uint32_t)(ESI + 0x184e), (EAX));
  /* 10f23292 mov dword ptr [esi + 0x1852], eax */
  w32((uint32_t)(ESI + 0x1852), (EAX));
  /* 10f23298 mov dword ptr [esi + 0x1856], eax */
  w32((uint32_t)(ESI + 0x1856), (EAX));
  /* 10f2329e lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 10f232a4 push eax */
  push32((uint32_t)(EAX));
  /* 10f232a5 mov dword ptr [esi + 0x185e], 0xa */
  w32((uint32_t)(ESI + 0x185e), (0xau));
  /* 10f232af call dword ptr [0x10f2d1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1dc))), 0x10f232b5u);
  /* 10f232b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f232b8 mov eax, esi */
  EAX = (ESI);
  /* 10f232ba pop edi */
  EDI = (pop32());
  /* 10f232bb pop esi */
  ESI = (pop32());
  /* 10f232bc pop ebx */
  EBX = (pop32());
  /* 10f232bd ret  */
  ESPCHK(0x10f23240u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c0 @ 0x10f232c0 (20 bytes, 8 insns) */
void f_10f232c0(void) {
  FTRACE(0x10f232c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f232c0 push esi */
  push32((uint32_t)(ESI));
  /* 10f232c1 mov esi, ecx */
  ESI = (ECX);
  /* 10f232c3 call 0x10f23230 */
  push32(0x10f232c8u); f_10f23230();
  /* 10f232c8 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 10f232cc mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 10f232d0 mov eax, esi */
  EAX = (ESI);
  /* 10f232d2 pop esi */
  ESI = (pop32());
  /* 10f232d3 ret  */
  ESPCHK(0x10f232c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x10f232e0 (25 bytes, 8 insns) */
void f_10f232e0(void) {
  FTRACE(0x10f232e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f232e0 push esi */
  push32((uint32_t)(ESI));
  /* 10f232e1 mov esi, ecx */
  ESI = (ECX);
  /* 10f232e3 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 10f232e6 call 0x10f22fe0 */
  push32(0x10f232ebu); f_10f22fe0();
  /* 10f232eb mov dword ptr [esi + 0x334], 0 */
  w32((uint32_t)(ESI + 0x334), (0x0u));
  /* 10f232f5 mov eax, esi */
  EAX = (ESI);
  /* 10f232f7 pop esi */
  ESI = (pop32());
  /* 10f232f8 ret  */
  ESPCHK(0x10f232e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x10f23300 (162 bytes, 58 insns) */
void f_10f23300(void) {
  FTRACE(0x10f23300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23300 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23301 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23302 push esi */
  push32((uint32_t)(ESI));
  /* 10f23303 push edi */
  push32((uint32_t)(EDI));
  /* 10f23304 mov esi, ecx */
  ESI = (ECX);
  /* 10f23306 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f23308 push esi */
  push32((uint32_t)(ESI));
  /* 10f23309 call dword ptr [0x10f2d1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d8))), 0x10f2330fu);
  /* 10f2330f mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10f23313 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10f23317 lea ebx, [esi + 4] */
  EBX = ((uint32_t)(ESI + 0x4));
  /* 10f2331a push ecx */
  push32((uint32_t)(ECX));
  /* 10f2331b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2331c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f2331e call dword ptr [0x10f2d18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d18c))), 0x10f23324u);
  /* 10f23324 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10f23328 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 10f2332a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2332d cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2332f je 0x10f23347 */
  if (C.zf) goto L_10f23347;
  /* 10f23331 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 10f23334 push eax */
  push32((uint32_t)(EAX));
  /* 10f23335 push edi */
  push32((uint32_t)(EDI));
  /* 10f23336 call dword ptr [0x10f2d194] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d194))), 0x10f2333cu);
  /* 10f2333c push edi */
  push32((uint32_t)(EDI));
  /* 10f2333d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2333e call dword ptr [0x10f2d0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0fc))), 0x10f23344u);
  /* 10f23344 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f23347:;
  /* 10f23347 mov edi, dword ptr [0x10f2d1dc] */
  EDI = (r32((uint32_t)(0x10f2d1dc)));
  /* 10f2334d lea edx, [esi + 0x14] */
  EDX = ((uint32_t)(ESI + 0x14));
  /* 10f23350 push edx */
  push32((uint32_t)(EDX));
  /* 10f23351 call edi */
  call_ind((uint32_t)(EDI), 0x10f23353u);
  /* 10f23353 lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 10f23356 push eax */
  push32((uint32_t)(EAX));
  /* 10f23357 call edi */
  call_ind((uint32_t)(EDI), 0x10f23359u);
  /* 10f23359 lea ecx, [esi + 0x6c] */
  ECX = ((uint32_t)(ESI + 0x6c));
  /* 10f2335c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2335d call edi */
  call_ind((uint32_t)(EDI), 0x10f2335fu);
  /* 10f2335f mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10f23363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23366 mov eax, 1 */
  EAX = (0x1u);
  /* 10f2336b mov dword ptr [esi + 0x30], ebp */
  w32((uint32_t)(ESI + 0x30), (EBP));
  /* 10f2336e mov dword ptr [esi + 0x34], ebp */
  w32((uint32_t)(ESI + 0x34), (EBP));
  /* 10f23371 mov dword ptr [esi + 0x38], 0x3c */
  w32((uint32_t)(ESI + 0x38), (0x3cu));
  /* 10f23378 mov dword ptr [esi + 0x44], ebp */
  w32((uint32_t)(ESI + 0x44), (EBP));
  /* 10f2337b mov dword ptr [esi + 0x48], ebp */
  w32((uint32_t)(ESI + 0x48), (EBP));
  /* 10f2337e mov dword ptr [esi + 0x4c], 0x78 */
  w32((uint32_t)(ESI + 0x4c), (0x78u));
  /* 10f23385 mov dword ptr [esi + 0x54], ebp */
  w32((uint32_t)(ESI + 0x54), (EBP));
  /* 10f23388 mov dword ptr [esi + 0x50], eax */
  w32((uint32_t)(ESI + 0x50), (EAX));
  /* 10f2338b mov dword ptr [esi + 0x58], 0xa */
  w32((uint32_t)(ESI + 0x58), (0xau));
  /* 10f23392 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 10f23395 mov dword ptr [esi + 0x60], ebp */
  w32((uint32_t)(ESI + 0x60), (EBP));
  /* 10f23398 mov dword ptr [esi + 0x24], edx */
  w32((uint32_t)(ESI + 0x24), (EDX));
  /* 10f2339b pop edi */
  EDI = (pop32());
  /* 10f2339c pop esi */
  ESI = (pop32());
  /* 10f2339d pop ebp */
  EBP = (pop32());
  /* 10f2339e pop ebx */
  EBX = (pop32());
  /* 10f2339f ret 0x10 */
  ESPCHK(0x10f23300u, _esp0);
  ESP += 20; return;
}

/* FUN_100033b0 @ 0x10f233b0 (10 bytes, 3 insns) */
void f_10f233b0(void) {
  FTRACE(0x10f233b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f233b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f233b4 mov dword ptr [ecx + 0x50], eax */
  w32((uint32_t)(ECX + 0x50), (EAX));
  /* 10f233b7 ret 4 */
  ESPCHK(0x10f233b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100033c0 @ 0x10f233c0 (39 bytes, 14 insns) */
void f_10f233c0(void) {
  FTRACE(0x10f233c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f233c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f233c4 push esi */
  push32((uint32_t)(ESI));
  /* 10f233c5 mov esi, ecx */
  ESI = (ECX);
  /* 10f233c7 push eax */
  push32((uint32_t)(EAX));
  /* 10f233c8 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 10f233cb push ecx */
  push32((uint32_t)(ECX));
  /* 10f233cc call dword ptr [0x10f2d190] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d190))), 0x10f233d2u);
  /* 10f233d2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f233d6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f233da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f233dd mov dword ptr [esi + 0x30], edx */
  w32((uint32_t)(ESI + 0x30), (EDX));
  /* 10f233e0 mov dword ptr [esi + 0x34], eax */
  w32((uint32_t)(ESI + 0x34), (EAX));
  /* 10f233e3 pop esi */
  ESI = (pop32());
  /* 10f233e4 ret 0xc */
  ESPCHK(0x10f233c0u, _esp0);
  ESP += 16; return;
}

/* FUN_100033f0 @ 0x10f233f0 (39 bytes, 14 insns) */
void f_10f233f0(void) {
  FTRACE(0x10f233f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f233f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f233f4 push esi */
  push32((uint32_t)(ESI));
  /* 10f233f5 mov esi, ecx */
  ESI = (ECX);
  /* 10f233f7 push eax */
  push32((uint32_t)(EAX));
  /* 10f233f8 lea ecx, [esi + 0x3c] */
  ECX = ((uint32_t)(ESI + 0x3c));
  /* 10f233fb push ecx */
  push32((uint32_t)(ECX));
  /* 10f233fc call dword ptr [0x10f2d190] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d190))), 0x10f23402u);
  /* 10f23402 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f23406 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f2340a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2340d mov dword ptr [esi + 0x44], edx */
  w32((uint32_t)(ESI + 0x44), (EDX));
  /* 10f23410 mov dword ptr [esi + 0x48], eax */
  w32((uint32_t)(ESI + 0x48), (EAX));
  /* 10f23413 pop esi */
  ESI = (pop32());
  /* 10f23414 ret 0xc */
  ESPCHK(0x10f233f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10003420 @ 0x10f23420 (20 bytes, 8 insns) */
void f_10f23420(void) {
  FTRACE(0x10f23420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23420 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23423 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23424 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f2342au);
  /* 10f2342a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2342d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2342f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23431 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f23433 ret  */
  ESPCHK(0x10f23420u, _esp0);
  ESP += 4; return;
}

/* FUN_10003440 @ 0x10f23440 (229 bytes, 92 insns) */
void f_10f23440(void) {
  FTRACE(0x10f23440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23440 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23441 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23442 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23443 mov ebp, dword ptr [0x10f2d13c] */
  EBP = (r32((uint32_t)(0x10f2d13c)));
  /* 10f23449 push esi */
  push32((uint32_t)(ESI));
  /* 10f2344a mov esi, ecx */
  ESI = (ECX);
  /* 10f2344c push edi */
  push32((uint32_t)(EDI));
  /* 10f2344d lea ebx, [esi + 0x1c] */
  EBX = ((uint32_t)(ESI + 0x1c));
  /* 10f23450 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23451 call ebp */
  call_ind((uint32_t)(EBP), 0x10f23453u);
  /* 10f23453 lea edi, [esi + 0x14] */
  EDI = ((uint32_t)(ESI + 0x14));
  /* 10f23456 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 10f2345a push edi */
  push32((uint32_t)(EDI));
  /* 10f2345b call ebp */
  call_ind((uint32_t)(EBP), 0x10f2345du);
  /* 10f2345d mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f23461 mov ecx, dword ptr [esi + 0x24] */
  ECX = (r32((uint32_t)(ESI + 0x24)));
  /* 10f23464 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23469 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2346b jle 0x10f23476 */
  if ((C.zf||C.sf!=C.of)) goto L_10f23476;
  /* 10f2346d pop edi */
  EDI = (pop32());
  /* 10f2346e pop esi */
  ESI = (pop32());
  /* 10f2346f pop ebp */
  EBP = (pop32());
  /* 10f23470 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f23473 pop ebx */
  EBX = (pop32());
  /* 10f23474 pop ecx */
  ECX = (pop32());
  /* 10f23475 ret  */
  ESPCHK(0x10f23440u, _esp0);
  ESP += 4; return;
L_10f23476:;
  /* 10f23476 mov ecx, esi */
  ECX = (ESI);
  /* 10f23478 call 0x10f23420 */
  push32(0x10f2347du); f_10f23420();
  /* 10f2347d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2347f je 0x10f2351d */
  if (C.zf) goto L_10f2351d;
  /* 10f23485 lea ebp, [esi + 4] */
  EBP = ((uint32_t)(ESI + 0x4));
  /* 10f23488 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23489 call dword ptr [0x10f2d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0f8))), 0x10f2348fu);
  /* 10f2348f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23492 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f23494 je 0x10f2351d */
  if (C.zf) goto L_10f2351d;
  /* 10f2349a mov eax, dword ptr [esi + 0x54] */
  EAX = (r32((uint32_t)(ESI + 0x54)));
  /* 10f2349d mov ecx, dword ptr [esi + 0x50] */
  ECX = (r32((uint32_t)(ESI + 0x50)));
  /* 10f234a0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f234a2 jl 0x10f234af */
  if ((C.sf!=C.of)) goto L_10f234af;
  /* 10f234a4 mov edi, ebx */
  EDI = (EBX);
  /* 10f234a6 mov dword ptr [esi + 0x54], 0 */
  w32((uint32_t)(ESI + 0x54), (0x0u));
  /* 10f234ad jmp 0x10f234b3 */
  goto L_10f234b3;
L_10f234af:;
  /* 10f234af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f234b0 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
L_10f234b3:;
  /* 10f234b3 mov ebx, dword ptr [0x10f2d130] */
  EBX = (r32((uint32_t)(0x10f2d130)));
  /* 10f234b9 call ebx */
  call_ind((uint32_t)(EBX), 0x10f234bbu);
  /* 10f234bb cmp eax, dword ptr [esi + 0x60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f234be jle 0x10f2351d */
  if ((C.zf||C.sf!=C.of)) goto L_10f2351d;
  /* 10f234c0 call ebx */
  call_ind((uint32_t)(EBX), 0x10f234c2u);
  /* 10f234c2 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
  /* 10f234c5 call 0x10f23c47 */
  push32(0x10f234cau); f_10f23c47();
  /* 10f234ca mov ecx, dword ptr [esi + 0x34] */
  ECX = (r32((uint32_t)(ESI + 0x34)));
  /* 10f234cd mov ebx, dword ptr [0x10f2d100] */
  EBX = (r32((uint32_t)(0x10f2d100)));
  /* 10f234d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f234d8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f234da jl 0x10f234f4 */
  if ((C.sf!=C.of)) goto L_10f234f4;
  /* 10f234dc push 3 */
  push32((uint32_t)(0x3u));
  /* 10f234de lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 10f234e1 push edi */
  push32((uint32_t)(EDI));
  /* 10f234e2 push eax */
  push32((uint32_t)(EAX));
  /* 10f234e3 push ebp */
  push32((uint32_t)(EBP));
  /* 10f234e4 call ebx */
  call_ind((uint32_t)(EBX), 0x10f234e6u);
  /* 10f234e6 mov ecx, dword ptr [esi + 0x30] */
  ECX = (r32((uint32_t)(ESI + 0x30)));
  /* 10f234e9 mov eax, dword ptr [esi + 0x60] */
  EAX = (r32((uint32_t)(ESI + 0x60)));
  /* 10f234ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f234ef add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f234f1 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
L_10f234f4:;
  /* 10f234f4 call 0x10f23c47 */
  push32(0x10f234f9u); f_10f23c47();
  /* 10f234f9 mov ecx, dword ptr [esi + 0x48] */
  ECX = (r32((uint32_t)(ESI + 0x48)));
  /* 10f234fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f23501 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23503 jl 0x10f2351d */
  if ((C.sf!=C.of)) goto L_10f2351d;
  /* 10f23505 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f23507 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 10f2350a push edi */
  push32((uint32_t)(EDI));
  /* 10f2350b push edx */
  push32((uint32_t)(EDX));
  /* 10f2350c push ebp */
  push32((uint32_t)(EBP));
  /* 10f2350d call ebx */
  call_ind((uint32_t)(EBX), 0x10f2350fu);
  /* 10f2350f mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10f23512 mov ecx, dword ptr [esi + 0x60] */
  ECX = (r32((uint32_t)(ESI + 0x60)));
  /* 10f23515 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23518 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2351a mov dword ptr [esi + 0x60], ecx */
  w32((uint32_t)(ESI + 0x60), (ECX));
L_10f2351d:;
  /* 10f2351d pop edi */
  EDI = (pop32());
  /* 10f2351e pop esi */
  ESI = (pop32());
  /* 10f2351f pop ebp */
  EBP = (pop32());
  /* 10f23520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f23522 pop ebx */
  EBX = (pop32());
  /* 10f23523 pop ecx */
  ECX = (pop32());
  /* 10f23524 ret  */
  ESPCHK(0x10f23440u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x10f23530 (196 bytes, 68 insns) */
void f_10f23530(void) {
  FTRACE(0x10f23530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23530 push edi */
  push32((uint32_t)(EDI));
  /* 10f23531 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f23535 mov eax, 0x554e4954 */
  EAX = (0x554e4954u);
  /* 10f2353a cmp dword ptr [edi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2353d jne 0x10f235f2 */
  if (!C.zf) goto L_10f235f2;
  /* 10f23543 cmp dword ptr [0x10f427b4], eax */
  { uint32_t _a=(r32((uint32_t)(0x10f427b4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23549 je 0x10f23559 */
  if (C.zf) goto L_10f23559;
  /* 10f2354b push 0x10f427b0 */
  push32((uint32_t)(0x10f427b0u));
  /* 10f23550 call dword ptr [0x10f2d1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1dc))), 0x10f23556u);
  /* 10f23556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f23559:;
  /* 10f23559 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2355a push esi */
  push32((uint32_t)(ESI));
  /* 10f2355b mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10f2355f push esi */
  push32((uint32_t)(ESI));
  /* 10f23560 call 0x10f214c0 */
  push32(0x10f23565u); f_10f214c0();
  /* 10f23565 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f23569 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2356b push esi */
  push32((uint32_t)(ESI));
  /* 10f2356c push eax */
  push32((uint32_t)(EAX));
  /* 10f2356d call dword ptr [0x10f2d0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0f4))), 0x10f23573u);
  /* 10f23573 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f23575 push 0x10f427b0 */
  push32((uint32_t)(0x10f427b0u));
  /* 10f2357a push esi */
  push32((uint32_t)(ESI));
  /* 10f2357b call dword ptr [0x10f2d1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1ac))), 0x10f23581u);
  /* 10f23581 push esi */
  push32((uint32_t)(ESI));
  /* 10f23582 call 0x10f21540 */
  push32(0x10f23587u); f_10f21540();
  /* 10f23587 mov esi, dword ptr [esp + 0x3c] */
  ESI = (r32((uint32_t)(ESP + 0x3c)));
  /* 10f2358b push esi */
  push32((uint32_t)(ESI));
  /* 10f2358c call 0x10f214c0 */
  push32(0x10f23591u); f_10f214c0();
  /* 10f23591 push 0x10f427b0 */
  push32((uint32_t)(0x10f427b0u));
  /* 10f23596 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f2359cu);
  /* 10f2359c add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2359f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f235a1 je 0x10f235c8 */
  if (C.zf) goto L_10f235c8;
  /* 10f235a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f235a5 push edi */
  push32((uint32_t)(EDI));
  /* 10f235a6 call dword ptr [0x10f2d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c0))), 0x10f235acu);
  /* 10f235ac push 0x10f427b0 */
  push32((uint32_t)(0x10f427b0u));
  /* 10f235b1 push esi */
  push32((uint32_t)(ESI));
  /* 10f235b2 call dword ptr [0x10f2d16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d16c))), 0x10f235b8u);
  /* 10f235b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f235bb push esi */
  push32((uint32_t)(ESI));
  /* 10f235bc call 0x10f21540 */
  push32(0x10f235c1u); f_10f21540();
  /* 10f235c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f235c4 pop esi */
  ESI = (pop32());
  /* 10f235c5 pop ebx */
  EBX = (pop32());
  /* 10f235c6 pop edi */
  EDI = (pop32());
  /* 10f235c7 ret  */
  ESPCHK(0x10f23530u, _esp0);
  ESP += 4; return;
L_10f235c8:;
  /* 10f235c8 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 10f235cc push edi */
  push32((uint32_t)(EDI));
  /* 10f235cd push ebx */
  push32((uint32_t)(EBX));
  /* 10f235ce call dword ptr [0x10f2d1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d0))), 0x10f235d4u);
  /* 10f235d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f235d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f235d9 jne 0x10f235e7 */
  if (!C.zf) goto L_10f235e7;
  /* 10f235db push eax */
  push32((uint32_t)(EAX));
  /* 10f235dc push ebx */
  push32((uint32_t)(EBX));
  /* 10f235dd push edi */
  push32((uint32_t)(EDI));
  /* 10f235de push esi */
  push32((uint32_t)(ESI));
  /* 10f235df call 0x10f21180 */
  push32(0x10f235e4u); f_10f21180();
  /* 10f235e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f235e7:;
  /* 10f235e7 push esi */
  push32((uint32_t)(ESI));
  /* 10f235e8 call 0x10f21540 */
  push32(0x10f235edu); f_10f21540();
  /* 10f235ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f235f0 pop esi */
  ESI = (pop32());
  /* 10f235f1 pop ebx */
  EBX = (pop32());
L_10f235f2:;
  /* 10f235f2 pop edi */
  EDI = (pop32());
  /* 10f235f3 ret  */
  ESPCHK(0x10f23530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x10f23600 (66 bytes, 26 insns) */
void f_10f23600(void) {
  FTRACE(0x10f23600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23600 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f23604 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23607 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10f2360b push esi */
  push32((uint32_t)(ESI));
  /* 10f2360c mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f23610 push eax */
  push32((uint32_t)(EAX));
  /* 10f23611 lea ecx, [esi + 4] */
  ECX = ((uint32_t)(ESI + 0x4));
  /* 10f23614 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23615 push edx */
  push32((uint32_t)(EDX));
  /* 10f23616 call dword ptr [0x10f2d1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1b8))), 0x10f2361cu);
  /* 10f2361c mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 10f23620 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10f23622 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 10f23625 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23628 push eax */
  push32((uint32_t)(EAX));
  /* 10f23629 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10f2362d push ecx */
  push32((uint32_t)(ECX));
  /* 10f2362e push edx */
  push32((uint32_t)(EDX));
  /* 10f2362f lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 10f23633 push eax */
  push32((uint32_t)(EAX));
  /* 10f23634 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23635 call 0x10f23530 */
  push32(0x10f2363au); f_10f23530();
  /* 10f2363a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2363d pop esi */
  ESI = (pop32());
  /* 10f2363e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23641 ret  */
  ESPCHK(0x10f23600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x10f23650 (59 bytes, 27 insns) */
void f_10f23650(void) {
  FTRACE(0x10f23650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23650 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f23654 push esi */
  push32((uint32_t)(ESI));
  /* 10f23655 push edi */
  push32((uint32_t)(EDI));
  /* 10f23656 mov edi, dword ptr [0x10f2d194] */
  EDI = (r32((uint32_t)(0x10f2d194)));
  /* 10f2365c mov esi, ecx */
  ESI = (ECX);
  /* 10f2365e push eax */
  push32((uint32_t)(EAX));
  /* 10f2365f push esi */
  push32((uint32_t)(ESI));
  /* 10f23660 call edi */
  call_ind((uint32_t)(EDI), 0x10f23662u);
  /* 10f23662 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f23666 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 10f23669 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2366a push edx */
  push32((uint32_t)(EDX));
  /* 10f2366b call edi */
  call_ind((uint32_t)(EDI), 0x10f2366du);
  /* 10f2366d mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10f23671 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 10f23674 push eax */
  push32((uint32_t)(EAX));
  /* 10f23675 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23676 call edi */
  call_ind((uint32_t)(EDI), 0x10f23678u);
  /* 10f23678 mov edx, dword ptr [esp + 0x30] */
  EDX = (r32((uint32_t)(ESP + 0x30)));
  /* 10f2367c add esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2367f push edx */
  push32((uint32_t)(EDX));
  /* 10f23680 push esi */
  push32((uint32_t)(ESI));
  /* 10f23681 call edi */
  call_ind((uint32_t)(EDI), 0x10f23683u);
  /* 10f23683 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23686 pop edi */
  EDI = (pop32());
  /* 10f23687 pop esi */
  ESI = (pop32());
  /* 10f23688 ret 0x10 */
  ESPCHK(0x10f23650u, _esp0);
  ESP += 20; return;
}

/* FUN_10003690 @ 0x10f23690 (71 bytes, 24 insns) */
void f_10f23690(void) {
  FTRACE(0x10f23690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23690 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23691 push esi */
  push32((uint32_t)(ESI));
  /* 10f23692 push edi */
  push32((uint32_t)(EDI));
  /* 10f23693 mov edi, ecx */
  EDI = (ECX);
  /* 10f23695 mov esi, edi */
  ESI = (EDI);
  /* 10f23697 mov ebx, 0x32 */
  EBX = (0x32u);
L_10f2369c:;
  /* 10f2369c mov ecx, esi */
  ECX = (ESI);
  /* 10f2369e call 0x10f23230 */
  push32(0x10f236a3u); f_10f23230();
  /* 10f236a3 add esi, 0x47 */
  { uint32_t _a=(ESI),_b=(0x47u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f236a6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f236a7 jne 0x10f2369c */
  if (!C.zf) goto L_10f2369c;
  /* 10f236a9 push 0xf29 */
  push32((uint32_t)(0xf29u));
  /* 10f236ae push edi */
  push32((uint32_t)(EDI));
  /* 10f236af call dword ptr [0x10f2d1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d8))), 0x10f236b5u);
  /* 10f236b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f236b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f236ba mov word ptr [edi + 0xf1e], ax */
  w16((uint32_t)(EDI + 0xf1e), (AX));
  /* 10f236c1 mov dword ptr [edi + 0xf20], eax */
  w32((uint32_t)(EDI + 0xf20), (EAX));
  /* 10f236c7 mov dword ptr [edi + 0xf24], 6 */
  w32((uint32_t)(EDI + 0xf24), (0x6u));
  /* 10f236d1 mov eax, edi */
  EAX = (EDI);
  /* 10f236d3 pop edi */
  EDI = (pop32());
  /* 10f236d4 pop esi */
  ESI = (pop32());
  /* 10f236d5 pop ebx */
  EBX = (pop32());
  /* 10f236d6 ret  */
  ESPCHK(0x10f23690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x10f236e0 (67 bytes, 33 insns) */
void f_10f236e0(void) {
  FTRACE(0x10f236e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f236e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f236e1 push esi */
  push32((uint32_t)(ESI));
  /* 10f236e2 push edi */
  push32((uint32_t)(EDI));
  /* 10f236e3 mov edi, ecx */
  EDI = (ECX);
  /* 10f236e5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f236e7 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 10f236e9 cmp word ptr [edi + 0xf1e], si */
  { uint32_t _a=(r16((uint32_t)(EDI + 0xf1e))),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f236f0 jbe 0x10f2371d */
  if ((C.cf||C.zf)) goto L_10f2371d;
  /* 10f236f2 push ebx */
  push32((uint32_t)(EBX));
  /* 10f236f3 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10f236f6:;
  /* 10f236f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f236f7 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f236fdu);
  /* 10f236fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23702 je 0x10f23705 */
  if (C.zf) goto L_10f23705;
  /* 10f23704 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
L_10f23705:;
  /* 10f23705 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f23707 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f23708 mov ax, word ptr [edi + 0xf1e] */
  AX = (r16((uint32_t)(EDI + 0xf1e)));
  /* 10f2370f add ebx, 0x47 */
  { uint32_t _a=(EBX),_b=(0x47u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23712 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23714 jl 0x10f236f6 */
  if ((C.sf!=C.of)) goto L_10f236f6;
  /* 10f23716 pop ebx */
  EBX = (pop32());
  /* 10f23717 pop edi */
  EDI = (pop32());
  /* 10f23718 mov eax, ebp */
  EAX = (EBP);
  /* 10f2371a pop esi */
  ESI = (pop32());
  /* 10f2371b pop ebp */
  EBP = (pop32());
  /* 10f2371c ret  */
  ESPCHK(0x10f236e0u, _esp0);
  ESP += 4; return;
L_10f2371d:;
  /* 10f2371d pop edi */
  EDI = (pop32());
  /* 10f2371e mov eax, ebp */
  EAX = (EBP);
  /* 10f23720 pop esi */
  ESI = (pop32());
  /* 10f23721 pop ebp */
  EBP = (pop32());
  /* 10f23722 ret  */
  ESPCHK(0x10f236e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003730 @ 0x10f23730 (200 bytes, 70 insns) */
void f_10f23730(void) {
  FTRACE(0x10f23730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23730 mov dx, word ptr [ecx + 0xf1e] */
  DX = (r16((uint32_t)(ECX + 0xf1e)));
  /* 10f23737 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2373a cmp dx, 0x32 */
  { uint32_t _a=(DX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2373e jb 0x10f23748 */
  if (C.cf) goto L_10f23748;
  /* 10f23740 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f23742 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23745 ret 0x10 */
  ESPCHK(0x10f23730u, _esp0);
  ESP += 20; return;
L_10f23748:;
  /* 10f23748 mov eax, edx */
  EAX = (EDX);
  /* 10f2374a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2374b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f23750 push esi */
  push32((uint32_t)(ESI));
  /* 10f23751 push edi */
  push32((uint32_t)(EDI));
  /* 10f23752 mov edi, dword ptr [esp + 0x3c] */
  EDI = (r32((uint32_t)(ESP + 0x3c)));
  /* 10f23756 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10f23759 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10f2375c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2375e mov eax, dword ptr [esp + 0x40] */
  EAX = (r32((uint32_t)(ESP + 0x40)));
  /* 10f23762 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23764 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f23765 mov word ptr [ecx + 0xf1e], dx */
  w16((uint32_t)(ECX + 0xf1e), (DX));
  /* 10f2376c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2376f mov dword ptr [esi + 0x35], eax */
  w32((uint32_t)(ESI + 0x35), (EAX));
  /* 10f23772 jne 0x10f23781 */
  if (!C.zf) goto L_10f23781;
  /* 10f23774 mov eax, dword ptr [ecx + 0xf20] */
  EAX = (r32((uint32_t)(ECX + 0xf20)));
  /* 10f2377a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2377c je 0x10f23798 */
  if (C.zf) goto L_10f23798;
  /* 10f2377e push eax */
  push32((uint32_t)(EAX));
  /* 10f2377f jmp 0x10f2378e */
  goto L_10f2378e;
L_10f23781:;
  /* 10f23781 mov eax, dword ptr [ecx + 0xf24] */
  EAX = (r32((uint32_t)(ECX + 0xf24)));
  /* 10f23787 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23789 je 0x10f23798 */
  if (C.zf) goto L_10f23798;
  /* 10f2378b mov cl, al */
  CL = (AL);
  /* 10f2378d push ecx */
  push32((uint32_t)(ECX));
L_10f2378e:;
  /* 10f2378e push edi */
  push32((uint32_t)(EDI));
  /* 10f2378f call dword ptr [0x10f2d158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d158))), 0x10f23795u);
  /* 10f23795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f23798:;
  /* 10f23798 lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 10f2379b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2379d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2379e push edi */
  push32((uint32_t)(EDI));
  /* 10f2379f call dword ptr [0x10f2d1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1ac))), 0x10f237a5u);
  /* 10f237a5 mov eax, dword ptr [esi + 0x43] */
  EAX = (r32((uint32_t)(ESI + 0x43)));
  /* 10f237a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f237ab cmp eax, 0x554e4954 */
  { uint32_t _a=(EAX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f237b0 mov dword ptr [esi + 0x3b], 0 */
  w32((uint32_t)(ESI + 0x3b), (0x0u));
  /* 10f237b7 je 0x10f237c6 */
  if (C.zf) goto L_10f237c6;
  /* 10f237b9 lea edx, [esi + 0x3f] */
  EDX = ((uint32_t)(ESI + 0x3f));
  /* 10f237bc push edx */
  push32((uint32_t)(EDX));
  /* 10f237bd call dword ptr [0x10f2d1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1dc))), 0x10f237c3u);
  /* 10f237c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f237c6:;
  /* 10f237c6 mov eax, dword ptr [esp + 0x48] */
  EAX = (r32((uint32_t)(ESP + 0x48)));
  /* 10f237ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f237cc je 0x10f237dc */
  if (C.zf) goto L_10f237dc;
  /* 10f237ce add esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f237d1 push esi */
  push32((uint32_t)(ESI));
  /* 10f237d2 push eax */
  push32((uint32_t)(EAX));
  /* 10f237d3 call dword ptr [0x10f2d170] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d170))), 0x10f237d9u);
  /* 10f237d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f237dc:;
  /* 10f237dc lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 10f237e0 push eax */
  push32((uint32_t)(EAX));
  /* 10f237e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f237e3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f237e4 call dword ptr [0x10f2d1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d4))), 0x10f237eau);
  /* 10f237ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f237ed mov al, 1 */
  AL = (0x1u);
  /* 10f237ef pop edi */
  EDI = (pop32());
  /* 10f237f0 pop esi */
  ESI = (pop32());
  /* 10f237f1 pop ebx */
  EBX = (pop32());
  /* 10f237f2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f237f5 ret 0x10 */
  ESPCHK(0x10f23730u, _esp0);
  ESP += 20; return;
}

/* FUN_10003800 @ 0x10f23800 (651 bytes, 193 insns) [1 switch table(s)] */
void f_10f23800(void) {
  FTRACE(0x10f23800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23800 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23803 push edi */
  push32((uint32_t)(EDI));
  /* 10f23804 mov edi, ecx */
  EDI = (ECX);
  /* 10f23806 mov dword ptr [esp + 4], 0 */
  w32((uint32_t)(ESP + 0x4), (0x0u));
  /* 10f2380e cmp word ptr [edi + 0xf1e], 0 */
  { uint32_t _a=(r16((uint32_t)(EDI + 0xf1e))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f23816 jbe 0x10f23a84 */
  if ((C.cf||C.zf)) goto L_10f23a84;
  /* 10f2381c push ebx */
  push32((uint32_t)(EBX));
  /* 10f2381d mov ebx, dword ptr [0x10f2d130] */
  EBX = (r32((uint32_t)(0x10f2d130)));
  /* 10f23823 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23824 push esi */
  push32((uint32_t)(ESI));
  /* 10f23825 lea esi, [edi + 0xc] */
  ESI = ((uint32_t)(EDI + 0xc));
L_10f23828:;
  /* 10f23828 push esi */
  push32((uint32_t)(ESI));
  /* 10f23829 call dword ptr [0x10f2d13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d13c))), 0x10f2382fu);
  /* 10f2382f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23834 je 0x10f23a64 */
  if (C.zf) goto L_10f23a64;
  /* 10f2383a mov eax, dword ptr [edi + 0xf20] */
  EAX = (r32((uint32_t)(EDI + 0xf20)));
  /* 10f23840 push eax */
  push32((uint32_t)(EAX));
  /* 10f23841 call 0x10f214c0 */
  push32(0x10f23846u); f_10f214c0();
  /* 10f23846 mov ecx, dword ptr [edi + 0xf24] */
  ECX = (r32((uint32_t)(EDI + 0xf24)));
  /* 10f2384c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2384d call 0x10f214c0 */
  push32(0x10f23852u); f_10f214c0();
  /* 10f23852 mov ebp, dword ptr [0x10f2d1b8] */
  EBP = (r32((uint32_t)(0x10f2d1b8)));
  /* 10f23858 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10f2385d lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10f23861 push esi */
  push32((uint32_t)(ESI));
  /* 10f23862 push edx */
  push32((uint32_t)(EDX));
  /* 10f23863 call ebp */
  call_ind((uint32_t)(EBP), 0x10f23865u);
  /* 10f23865 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f2386a lea eax, [esp + 0x34] */
  EAX = ((uint32_t)(ESP + 0x34));
  /* 10f2386e push esi */
  push32((uint32_t)(ESI));
  /* 10f2386f push eax */
  push32((uint32_t)(EAX));
  /* 10f23870 call ebp */
  call_ind((uint32_t)(EBP), 0x10f23872u);
  /* 10f23872 mov eax, dword ptr [esi + 0x29] */
  EAX = (r32((uint32_t)(ESI + 0x29)));
  /* 10f23875 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23878 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2387b ja 0x10f23a49 */
  if ((!C.cf&&!C.zf)) goto L_10f23a49;
  /* 10f23881 jmp dword ptr [eax*4 + 0x10f23a8c] */
  switch (EAX) {
    case 0: goto L_10f23888;
    case 1: goto L_10f23914;
    case 2: goto L_10f2397d;
    case 3: goto L_10f239fa;
    default: x86_unimpl("switch@0x10f23881 out of table"); return;
  }
L_10f23888:;
  /* 10f23888 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2388a push esi */
  push32((uint32_t)(ESI));
  /* 10f2388b mov cl, byte ptr [esi + 0x2d] */
  CL = (r8((uint32_t)(ESI + 0x2d)));
  /* 10f2388e shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f23891 lea ebp, [ecx + edi + 0xdee] */
  EBP = ((uint32_t)(ECX + EDI*1 + 0xdee));
  /* 10f23898 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23899 call dword ptr [0x10f2d1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d0))), 0x10f2389fu);
  /* 10f2389f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f238a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f238a4 je 0x10f238e2 */
  if (C.zf) goto L_10f238e2;
  /* 10f238a6 mov dword ptr [esi + 0x29], 1 */
  w32((uint32_t)(ESI + 0x29), (0x1u));
  /* 10f238ad call ebx */
  call_ind((uint32_t)(EBX), 0x10f238afu);
  /* 10f238af lea edx, [esp + 0x2c] */
  EDX = ((uint32_t)(ESP + 0x2c));
  /* 10f238b3 add eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f238b8 push edx */
  push32((uint32_t)(EDX));
  /* 10f238b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f238bb push esi */
  push32((uint32_t)(ESI));
  /* 10f238bc mov dword ptr [esi + 0x2f], eax */
  w32((uint32_t)(ESI + 0x2f), (EAX));
  /* 10f238bf call dword ptr [0x10f2d1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d4))), 0x10f238c5u);
  /* 10f238c5 lea eax, [esp + 0x38] */
  EAX = ((uint32_t)(ESP + 0x38));
  /* 10f238c9 mov dword ptr [esp + 0x4c], 0x3c00 */
  w32((uint32_t)(ESP + 0x4c), (0x3c00u));
  /* 10f238d1 push eax */
  push32((uint32_t)(EAX));
  /* 10f238d2 mov dword ptr [esp + 0x54], 0 */
  w32((uint32_t)(ESP + 0x54), (0x0u));
  /* 10f238da call dword ptr [0x10f2d128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d128))), 0x10f238e0u);
  /* 10f238e0 jmp 0x10f238f2 */
  goto L_10f238f2;
L_10f238e2:;
  /* 10f238e2 mov cl, byte ptr [edi + 0xf24] */
  CL = (r8((uint32_t)(EDI + 0xf24)));
  /* 10f238e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f238ea push ebp */
  push32((uint32_t)(EBP));
  /* 10f238eb push esi */
  push32((uint32_t)(ESI));
  /* 10f238ec push ecx */
  push32((uint32_t)(ECX));
  /* 10f238ed call 0x10f21180 */
  push32(0x10f238f2u); f_10f21180();
L_10f238f2:;
  /* 10f238f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f238f5 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 10f238f9 lea eax, [esi + 0x33] */
  EAX = ((uint32_t)(ESI + 0x33));
  /* 10f238fc lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 10f23900 push edx */
  push32((uint32_t)(EDX));
  /* 10f23901 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f23903 push eax */
  push32((uint32_t)(EAX));
  /* 10f23904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f23906 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23907 call 0x10f23530 */
  push32(0x10f2390cu); f_10f23530();
  /* 10f2390c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2390f jmp 0x10f23a49 */
  goto L_10f23a49;
L_10f23914:;
  /* 10f23914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f23916 mov dl, byte ptr [esi + 0x2d] */
  DL = (r8((uint32_t)(ESI + 0x2d)));
  /* 10f23919 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f2391c lea ebp, [edx + edi + 0xdf6] */
  EBP = ((uint32_t)(EDX + EDI*1 + 0xdf6));
  /* 10f23923 call ebx */
  call_ind((uint32_t)(EBX), 0x10f23925u);
  /* 10f23925 cmp eax, dword ptr [esi + 0x2f] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23928 jle 0x10f23a49 */
  if ((C.zf||C.sf!=C.of)) goto L_10f23a49;
  /* 10f2392e lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 10f23932 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 10f23936 push eax */
  push32((uint32_t)(EAX));
  /* 10f23937 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23938 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23939 mov dword ptr [esi + 0x29], 2 */
  w32((uint32_t)(ESI + 0x29), (0x2u));
  /* 10f23940 call dword ptr [0x10f2d1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1bc))), 0x10f23946u);
  /* 10f23946 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10f2394a push edx */
  push32((uint32_t)(EDX));
  /* 10f2394b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2394d push esi */
  push32((uint32_t)(ESI));
  /* 10f2394e call dword ptr [0x10f2d1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d4))), 0x10f23954u);
  /* 10f23954 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10f23958 mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 10f2395c lea edx, [esp + 0x70] */
  EDX = ((uint32_t)(ESP + 0x70));
  /* 10f23960 mov dword ptr [esp + 0x84], eax */
  w32((uint32_t)(ESP + 0x84), (EAX));
  /* 10f23967 push edx */
  push32((uint32_t)(EDX));
  /* 10f23968 mov dword ptr [esp + 0x8c], ecx */
  w32((uint32_t)(ESP + 0x8c), (ECX));
  /* 10f2396f call dword ptr [0x10f2d128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d128))), 0x10f23975u);
  /* 10f23975 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23978 jmp 0x10f23a49 */
  goto L_10f23a49;
L_10f2397d:;
  /* 10f2397d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2397f push esi */
  push32((uint32_t)(ESI));
  /* 10f23980 mov al, byte ptr [esi + 0x2d] */
  AL = (r8((uint32_t)(ESI + 0x2d)));
  /* 10f23983 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f23986 lea ebp, [eax + edi + 0xde6] */
  EBP = ((uint32_t)(EAX + EDI*1 + 0xde6));
  /* 10f2398d push ebp */
  push32((uint32_t)(EBP));
  /* 10f2398e call dword ptr [0x10f2d1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1d0))), 0x10f23994u);
  /* 10f23994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23999 je 0x10f239cb */
  if (C.zf) goto L_10f239cb;
  /* 10f2399b mov dword ptr [esi + 0x29], 3 */
  w32((uint32_t)(ESI + 0x29), (0x3u));
  /* 10f239a2 call ebx */
  call_ind((uint32_t)(EBX), 0x10f239a4u);
  /* 10f239a4 add eax, 0x190 */
  { uint32_t _a=(EAX),_b=(0x190u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f239a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f239ab push esi */
  push32((uint32_t)(ESI));
  /* 10f239ac mov dword ptr [esi + 0x2f], eax */
  w32((uint32_t)(ESI + 0x2f), (EAX));
  /* 10f239af call dword ptr [0x10f2d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c0))), 0x10f239b5u);
  /* 10f239b5 mov cl, byte ptr [edi + 0xf20] */
  CL = (r8((uint32_t)(EDI + 0xf20)));
  /* 10f239bb mov dl, byte ptr [edi + 0xf24] */
  DL = (r8((uint32_t)(EDI + 0xf24)));
  /* 10f239c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f239c2 push edx */
  push32((uint32_t)(EDX));
  /* 10f239c3 call dword ptr [0x10f2d158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d158))), 0x10f239c9u);
  /* 10f239c9 jmp 0x10f239db */
  goto L_10f239db;
L_10f239cb:;
  /* 10f239cb mov al, byte ptr [edi + 0xf24] */
  AL = (r8((uint32_t)(EDI + 0xf24)));
  /* 10f239d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f239d3 push ebp */
  push32((uint32_t)(EBP));
  /* 10f239d4 push esi */
  push32((uint32_t)(ESI));
  /* 10f239d5 push eax */
  push32((uint32_t)(EAX));
  /* 10f239d6 call 0x10f21180 */
  push32(0x10f239dbu); f_10f21180();
L_10f239db:;
  /* 10f239db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f239de lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 10f239e2 lea edx, [esi + 0x33] */
  EDX = ((uint32_t)(ESI + 0x33));
  /* 10f239e5 lea eax, [esp + 0x24] */
  EAX = ((uint32_t)(ESP + 0x24));
  /* 10f239e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f239ea push 5 */
  push32((uint32_t)(0x5u));
  /* 10f239ec push edx */
  push32((uint32_t)(EDX));
  /* 10f239ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10f239ef push eax */
  push32((uint32_t)(EAX));
  /* 10f239f0 call 0x10f23530 */
  push32(0x10f239f5u); f_10f23530();
  /* 10f239f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f239f8 jmp 0x10f23a49 */
  goto L_10f23a49;
L_10f239fa:;
  /* 10f239fa call ebx */
  call_ind((uint32_t)(EBX), 0x10f239fcu);
  /* 10f239fc cmp eax, dword ptr [esi + 0x2f] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f239ff jle 0x10f23a49 */
  if ((C.zf||C.sf!=C.of)) goto L_10f23a49;
  /* 10f23a01 mov cl, byte ptr [esp + 0x10] */
  CL = (r8((uint32_t)(ESP + 0x10)));
  /* 10f23a05 mov byte ptr [edi + 0xf28], cl */
  w8((uint32_t)(EDI + 0xf28), (CL));
  /* 10f23a0b call dword ptr [esp + 0x88] */
  call_ind((uint32_t)(r32((uint32_t)(ESP + 0x88))), 0x10f23a12u);
  /* 10f23a12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f23a14 je 0x10f23a3f */
  if (C.zf) goto L_10f23a3f;
  /* 10f23a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f23a18 push esi */
  push32((uint32_t)(ESI));
  /* 10f23a19 mov dword ptr [esi + 0x29], 0 */
  w32((uint32_t)(ESI + 0x29), (0x0u));
  /* 10f23a20 call dword ptr [0x10f2d1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d1c0))), 0x10f23a26u);
  /* 10f23a26 mov dl, byte ptr [edi + 0xf24] */
  DL = (r8((uint32_t)(EDI + 0xf24)));
  /* 10f23a2c mov al, byte ptr [edi + 0xf20] */
  AL = (r8((uint32_t)(EDI + 0xf20)));
  /* 10f23a32 push edx */
  push32((uint32_t)(EDX));
  /* 10f23a33 push eax */
  push32((uint32_t)(EAX));
  /* 10f23a34 call dword ptr [0x10f2d158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d158))), 0x10f23a3au);
  /* 10f23a3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23a3d jmp 0x10f23a49 */
  goto L_10f23a49;
L_10f23a3f:;
  /* 10f23a3f call ebx */
  call_ind((uint32_t)(EBX), 0x10f23a41u);
  /* 10f23a41 add eax, 0x190 */
  { uint32_t _a=(EAX),_b=(0x190u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23a46 mov dword ptr [esi + 0x2f], eax */
  w32((uint32_t)(ESI + 0x2f), (EAX));
L_10f23a49:;
  /* 10f23a49 mov ecx, dword ptr [edi + 0xf20] */
  ECX = (r32((uint32_t)(EDI + 0xf20)));
  /* 10f23a4f push ecx */
  push32((uint32_t)(ECX));
  /* 10f23a50 call 0x10f21540 */
  push32(0x10f23a55u); f_10f21540();
  /* 10f23a55 mov edx, dword ptr [edi + 0xf24] */
  EDX = (r32((uint32_t)(EDI + 0xf24)));
  /* 10f23a5b push edx */
  push32((uint32_t)(EDX));
  /* 10f23a5c call 0x10f21540 */
  push32(0x10f23a61u); f_10f21540();
  /* 10f23a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f23a64:;
  /* 10f23a64 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f23a68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f23a6a mov cx, word ptr [edi + 0xf1e] */
  CX = (r16((uint32_t)(EDI + 0xf1e)));
  /* 10f23a71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f23a72 add esi, 0x47 */
  { uint32_t _a=(ESI),_b=(0x47u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23a75 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23a77 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10f23a7b jl 0x10f23828 */
  if ((C.sf!=C.of)) goto L_10f23828;
  /* 10f23a81 pop esi */
  ESI = (pop32());
  /* 10f23a82 pop ebp */
  EBP = (pop32());
  /* 10f23a83 pop ebx */
  EBX = (pop32());
L_10f23a84:;
  /* 10f23a84 pop edi */
  EDI = (pop32());
  /* 10f23a85 add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23a88 ret 4 */
  ESPCHK(0x10f23800u, _esp0);
  ESP += 8; return;
}

/* FUN_10003aa0 @ 0x10f23aa0 (23 bytes, 5 insns) */
void f_10f23aa0(void) {
  FTRACE(0x10f23aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23aa0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f23aa4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f23aa8 mov dword ptr [ecx + 0xf20], eax */
  w32((uint32_t)(ECX + 0xf20), (EAX));
  /* 10f23aae mov dword ptr [ecx + 0xf24], edx */
  w32((uint32_t)(ECX + 0xf24), (EDX));
  /* 10f23ab4 ret 8 */
  ESPCHK(0x10f23aa0u, _esp0);
  ESP += 12; return;
}

/* FUN_10003ac0 @ 0x10f23ac0 (19 bytes, 7 insns) */
void f_10f23ac0(void) {
  FTRACE(0x10f23ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23ac0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f23ac2 mov dl, byte ptr [ecx + 0xf28] */
  DL = (r8((uint32_t)(ECX + 0xf28)));
  /* 10f23ac8 lea eax, [edx + edx*8] */
  EAX = ((uint32_t)(EDX + EDX*8));
  /* 10f23acb shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10f23ace sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23ad0 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23ad2 ret  */
  ESPCHK(0x10f23ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x10f23ae0 (11 bytes, 4 insns) */
void f_10f23ae0(void) {
  FTRACE(0x10f23ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23ae0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f23ae4 call 0x10f23e12 */
  push32(0x10f23ae9u); f_10f23e12();
  /* 10f23ae9 pop ecx */
  ECX = (pop32());
  /* 10f23aea ret  */
  ESPCHK(0x10f23ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aeb @ 0x10f23aeb (23 bytes, 6 insns) */
void f_10f23aeb(void) {
  FTRACE(0x10f23aebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23aeb call 0x10f23b03 */
  push32(0x10f23af0u); f_10f23b03();
  /* 10f23af0 call 0x10f23f4b */
  push32(0x10f23af5u); f_10f23f4b();
  /* 10f23af5 mov dword ptr [0x10f479b8], eax */
  w32((uint32_t)(0x10f479b8), (EAX));
  /* 10f23afa call 0x10f23efb */
  push32(0x10f23affu); f_10f23efb();
  /* 10f23aff fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10f23b01 ret  */
  ESPCHK(0x10f23aebu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b03 @ 0x10f23b03 (56 bytes, 8 insns) */
void f_10f23b03(void) {
  FTRACE(0x10f23b03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23b03 mov eax, 0x10f24324 */
  EAX = (0x10f24324u);
  /* 10f23b08 mov dword ptr [0x10f2f57c], 0x10f23fce */
  w32((uint32_t)(0x10f2f57c), (0x10f23fceu));
  /* 10f23b12 mov dword ptr [0x10f2f578], eax */
  w32((uint32_t)(0x10f2f578), (EAX));
  /* 10f23b17 mov dword ptr [0x10f2f580], 0x10f24034 */
  w32((uint32_t)(0x10f2f580), (0x10f24034u));
  /* 10f23b21 mov dword ptr [0x10f2f584], 0x10f23f74 */
  w32((uint32_t)(0x10f2f584), (0x10f23f74u));
  /* 10f23b2b mov dword ptr [0x10f2f588], 0x10f2401c */
  w32((uint32_t)(0x10f2f588), (0x10f2401cu));
  /* 10f23b35 mov dword ptr [0x10f2f58c], eax */
  w32((uint32_t)(0x10f2f58c), (EAX));
  /* 10f23b3a ret  */
  ESPCHK(0x10f23b03u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10f23b3c (39 bytes, 16 insns) */
void f_10f23b3c(void) {
  FTRACE(0x10f23b3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23b3c push ebp */
  push32((uint32_t)(EBP));
  /* 10f23b3d mov ebp, esp */
  EBP = (ESP);
  /* 10f23b3f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23b42 wait  */
  /* wait (no observable integer/reg state) */
  /* 10f23b43 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10f23b46 wait  */
  /* wait (no observable integer/reg state) */
  /* 10f23b47 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10f23b4b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10f23b4e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10f23b52 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10f23b55 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10f23b58 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10f23b5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f23b5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f23b61 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f23b62 ret  */
  ESPCHK(0x10f23b3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b63 @ 0x10f23b63 (37 bytes, 18 insns) */
void f_10f23b63(void) {
  FTRACE(0x10f23b63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23b63 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23b64 mov ebp, esp */
  EBP = (ESP);
  /* 10f23b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f23b69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f23b6a idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f23b6d mov ecx, eax */
  ECX = (EAX);
  /* 10f23b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f23b72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f23b73 idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f23b76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23b7a jge 0x10f23b84 */
  if ((C.sf==C.of)) goto L_10f23b84;
  /* 10f23b7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f23b7e jle 0x10f23b84 */
  if ((C.zf||C.sf!=C.of)) goto L_10f23b84;
  /* 10f23b80 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f23b81 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f23b84:;
  /* 10f23b84 mov eax, ecx */
  EAX = (ECX);
  /* 10f23b86 pop ebp */
  EBP = (pop32());
  /* 10f23b87 ret  */
  ESPCHK(0x10f23b63u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b88 @ 0x10f23b88 (126 bytes, 37 insns) */
void f_10f23b88(void) {
  FTRACE(0x10f23b88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23b88 push esi */
  push32((uint32_t)(ESI));
  /* 10f23b89 call 0x10f2448c */
  push32(0x10f23b8eu); f_10f2448c();
  /* 10f23b8e push dword ptr [0x10f49110] */
  push32((uint32_t)(r32((uint32_t)(0x10f49110))));
  /* 10f23b94 call 0x10f247e7 */
  push32(0x10f23b99u); f_10f247e7();
  /* 10f23b99 mov edx, dword ptr [0x10f49110] */
  EDX = (r32((uint32_t)(0x10f49110)));
  /* 10f23b9f pop ecx */
  ECX = (pop32());
  /* 10f23ba0 mov ecx, dword ptr [0x10f4910c] */
  ECX = (r32((uint32_t)(0x10f4910c)));
  /* 10f23ba6 mov esi, ecx */
  ESI = (ECX);
  /* 10f23ba8 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23baa add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23bad cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23baf jae 0x10f23bee */
  if (!C.cf) goto L_10f23bee;
  /* 10f23bb1 push edx */
  push32((uint32_t)(EDX));
  /* 10f23bb2 call 0x10f247e7 */
  push32(0x10f23bb7u); f_10f247e7();
  /* 10f23bb7 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23bba push eax */
  push32((uint32_t)(EAX));
  /* 10f23bbb push dword ptr [0x10f49110] */
  push32((uint32_t)(r32((uint32_t)(0x10f49110))));
  /* 10f23bc1 call 0x10f244b8 */
  push32(0x10f23bc6u); f_10f244b8();
  /* 10f23bc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23bcb jne 0x10f23bd1 */
  if (!C.zf) goto L_10f23bd1;
  /* 10f23bcd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f23bcf jmp 0x10f23bfd */
  goto L_10f23bfd;
L_10f23bd1:;
  /* 10f23bd1 mov ecx, dword ptr [0x10f4910c] */
  ECX = (r32((uint32_t)(0x10f4910c)));
  /* 10f23bd7 sub ecx, dword ptr [0x10f49110] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f49110))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23bdd mov dword ptr [0x10f49110], eax */
  w32((uint32_t)(0x10f49110), (EAX));
  /* 10f23be2 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f23be5 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
  /* 10f23be8 mov dword ptr [0x10f4910c], ecx */
  w32((uint32_t)(0x10f4910c), (ECX));
L_10f23bee:;
  /* 10f23bee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f23bf2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f23bf4 add dword ptr [0x10f4910c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10f4910c))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(0x10f4910c), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f23bfb mov esi, eax */
  ESI = (EAX);
L_10f23bfd:;
  /* 10f23bfd call 0x10f24495 */
  push32(0x10f23c02u); f_10f24495();
  /* 10f23c02 mov eax, esi */
  EAX = (ESI);
  /* 10f23c04 pop esi */
  ESI = (pop32());
  /* 10f23c05 ret  */
  ESPCHK(0x10f23b88u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c06 @ 0x10f23c06 (18 bytes, 8 insns) */
void f_10f23c06(void) {
  FTRACE(0x10f23c06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23c06 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f23c0a call 0x10f23b88 */
  push32(0x10f23c0fu); f_10f23b88();
  /* 10f23c0f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f23c11 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23c13 pop ecx */
  ECX = (pop32());
  /* 10f23c14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f23c16 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f23c17 ret  */
  ESPCHK(0x10f23c06u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x10f23c47 (34 bytes, 9 insns) */
void f_10f23c47(void) {
  FTRACE(0x10f23c47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23c47 call 0x10f24a94 */
  push32(0x10f23c4cu); f_10f24a94();
  /* 10f23c4c mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f23c4f imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f23c55 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23c5b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10f23c5e mov eax, ecx */
  EAX = (ECX);
  /* 10f23c60 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f23c63 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f23c68 ret  */
  ESPCHK(0x10f23c47u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c69 @ 0x10f23c69 (217 bytes, 57 insns) */
void f_10f23c69(void) {
  FTRACE(0x10f23c69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23c69 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f23c6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23c70 jne 0x10f23cfe */
  if (!C.zf) goto L_10f23cfe;
  /* 10f23c76 call dword ptr [0x10f2d0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0c4))), 0x10f23c7cu);
  /* 10f23c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f23c7e mov dword ptr [0x10f479d4], eax */
  w32((uint32_t)(0x10f479d4), (EAX));
  /* 10f23c83 call 0x10f25358 */
  push32(0x10f23c88u); f_10f25358();
  /* 10f23c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23c8a pop ecx */
  ECX = (pop32());
  /* 10f23c8b je 0x10f23cc9 */
  if (C.zf) goto L_10f23cc9;
  /* 10f23c8d mov eax, dword ptr [0x10f479d4] */
  EAX = (r32((uint32_t)(0x10f479d4)));
  /* 10f23c92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f23c94 mov cl, byte ptr [0x10f479d5] */
  CL = (r8((uint32_t)(0x10f479d5)));
  /* 10f23c9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f23c9f shr dword ptr [0x10f479d4], 0x10 */
  w32((uint32_t)(0x10f479d4), (sh_shr((uint32_t)(r32((uint32_t)(0x10f479d4))), (0x10u)&0x1f, 32)));
  /* 10f23ca6 mov dword ptr [0x10f479dc], eax */
  w32((uint32_t)(0x10f479dc), (EAX));
  /* 10f23cab mov dword ptr [0x10f479e0], ecx */
  w32((uint32_t)(0x10f479e0), (ECX));
  /* 10f23cb1 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f23cb4 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23cb6 mov dword ptr [0x10f479d8], eax */
  w32((uint32_t)(0x10f479d8), (EAX));
  /* 10f23cbb call 0x10f24a0f */
  push32(0x10f23cc0u); f_10f24a0f();
  /* 10f23cc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23cc2 jne 0x10f23ccd */
  if (!C.zf) goto L_10f23ccd;
  /* 10f23cc4 call 0x10f253b5 */
  push32(0x10f23cc9u); f_10f253b5();
L_10f23cc9:;
  /* 10f23cc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f23ccb jmp 0x10f23d3f */
  goto L_10f23d3f;
L_10f23ccd:;
  /* 10f23ccd call dword ptr [0x10f2d0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0c0))), 0x10f23cd3u);
  /* 10f23cd3 mov dword ptr [0x10f49114], eax */
  w32((uint32_t)(0x10f49114), (EAX));
  /* 10f23cd8 call 0x10f250b1 */
  push32(0x10f23cddu); f_10f250b1();
  /* 10f23cdd mov dword ptr [0x10f479c0], eax */
  w32((uint32_t)(0x10f479c0), (EAX));
  /* 10f23ce2 call 0x10f24b9b */
  push32(0x10f23ce7u); f_10f24b9b();
  /* 10f23ce7 call 0x10f24e64 */
  push32(0x10f23cecu); f_10f24e64();
  /* 10f23cec call 0x10f24dab */
  push32(0x10f23cf1u); f_10f24dab();
  /* 10f23cf1 call 0x10f2439a */
  push32(0x10f23cf6u); f_10f2439a();
  /* 10f23cf6 inc dword ptr [0x10f479bc] */
  { uint32_t _r=(r32((uint32_t)(0x10f479bc)))+1; w32((uint32_t)(0x10f479bc), (_r)); fl_inc(_r,32); }
  /* 10f23cfc jmp 0x10f23d3c */
  goto L_10f23d3c;
L_10f23cfe:;
  /* 10f23cfe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f23d00 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d02 jne 0x10f23d30 */
  if (!C.zf) goto L_10f23d30;
  /* 10f23d04 cmp dword ptr [0x10f479bc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10f479bc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d0a jle 0x10f23cc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10f23cc9;
  /* 10f23d0c dec dword ptr [0x10f479bc] */
  { uint32_t _r=(r32((uint32_t)(0x10f479bc)))-1; w32((uint32_t)(0x10f479bc), (_r)); fl_dec(_r,32); }
  /* 10f23d12 cmp dword ptr [0x10f47a0c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10f47a0c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d18 jne 0x10f23d1f */
  if (!C.zf) goto L_10f23d1f;
  /* 10f23d1a call 0x10f243d8 */
  push32(0x10f23d1fu); f_10f243d8();
L_10f23d1f:;
  /* 10f23d1f call 0x10f24d57 */
  push32(0x10f23d24u); f_10f24d57();
  /* 10f23d24 call 0x10f24a63 */
  push32(0x10f23d29u); f_10f24a63();
  /* 10f23d29 call 0x10f253b5 */
  push32(0x10f23d2eu); f_10f253b5();
  /* 10f23d2e jmp 0x10f23d3c */
  goto L_10f23d3c;
L_10f23d30:;
  /* 10f23d30 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d33 jne 0x10f23d3c */
  if (!C.zf) goto L_10f23d3c;
  /* 10f23d35 push ecx */
  push32((uint32_t)(ECX));
  /* 10f23d36 call 0x10f24afb */
  push32(0x10f23d3bu); f_10f24afb();
  /* 10f23d3b pop ecx */
  ECX = (pop32());
L_10f23d3c:;
  /* 10f23d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f23d3e pop eax */
  EAX = (pop32());
L_10f23d3f:;
  /* 10f23d3f ret 0xc */
  ESPCHK(0x10f23c69u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10f23d42 (157 bytes, 73 insns) */
void f_10f23d42(void) {
  FTRACE(0x10f23d42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23d42 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23d43 mov ebp, esp */
  EBP = (ESP);
  /* 10f23d45 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23d46 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f23d49 push esi */
  push32((uint32_t)(ESI));
  /* 10f23d4a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f23d4d push edi */
  push32((uint32_t)(EDI));
  /* 10f23d4e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f23d51 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f23d53 jne 0x10f23d5e */
  if (!C.zf) goto L_10f23d5e;
  /* 10f23d55 cmp dword ptr [0x10f479bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f479bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d5c jmp 0x10f23d84 */
  goto L_10f23d84;
L_10f23d5e:;
  /* 10f23d5e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d61 je 0x10f23d68 */
  if (C.zf) goto L_10f23d68;
  /* 10f23d63 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d66 jne 0x10f23d8a */
  if (!C.zf) goto L_10f23d8a;
L_10f23d68:;
  /* 10f23d68 mov eax, dword ptr [0x10f49118] */
  EAX = (r32((uint32_t)(0x10f49118)));
  /* 10f23d6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23d6f je 0x10f23d7a */
  if (C.zf) goto L_10f23d7a;
  /* 10f23d71 push edi */
  push32((uint32_t)(EDI));
  /* 10f23d72 push esi */
  push32((uint32_t)(ESI));
  /* 10f23d73 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23d74 call eax */
  call_ind((uint32_t)(EAX), 0x10f23d76u);
  /* 10f23d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23d78 je 0x10f23d86 */
  if (C.zf) goto L_10f23d86;
L_10f23d7a:;
  /* 10f23d7a push edi */
  push32((uint32_t)(EDI));
  /* 10f23d7b push esi */
  push32((uint32_t)(ESI));
  /* 10f23d7c push ebx */
  push32((uint32_t)(EBX));
  /* 10f23d7d call 0x10f23c69 */
  push32(0x10f23d82u); f_10f23c69();
  /* 10f23d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10f23d84:;
  /* 10f23d84 jne 0x10f23d8a */
  if (!C.zf) goto L_10f23d8a;
L_10f23d86:;
  /* 10f23d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f23d88 jmp 0x10f23dd8 */
  goto L_10f23dd8;
L_10f23d8a:;
  /* 10f23d8a push edi */
  push32((uint32_t)(EDI));
  /* 10f23d8b push esi */
  push32((uint32_t)(ESI));
  /* 10f23d8c push ebx */
  push32((uint32_t)(EBX));
  /* 10f23d8d call 0x10f22ff0 */
  push32(0x10f23d92u); f_10f22ff0();
  /* 10f23d92 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23d95 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f23d98 jne 0x10f23da6 */
  if (!C.zf) goto L_10f23da6;
  /* 10f23d9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23d9c jne 0x10f23dd5 */
  if (!C.zf) goto L_10f23dd5;
  /* 10f23d9e push edi */
  push32((uint32_t)(EDI));
  /* 10f23d9f push eax */
  push32((uint32_t)(EAX));
  /* 10f23da0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23da1 call 0x10f23c69 */
  push32(0x10f23da6u); f_10f23c69();
L_10f23da6:;
  /* 10f23da6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f23da8 je 0x10f23daf */
  if (C.zf) goto L_10f23daf;
  /* 10f23daa cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23dad jne 0x10f23dd5 */
  if (!C.zf) goto L_10f23dd5;
L_10f23daf:;
  /* 10f23daf push edi */
  push32((uint32_t)(EDI));
  /* 10f23db0 push esi */
  push32((uint32_t)(ESI));
  /* 10f23db1 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23db2 call 0x10f23c69 */
  push32(0x10f23db7u); f_10f23c69();
  /* 10f23db7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23db9 jne 0x10f23dbe */
  if (!C.zf) goto L_10f23dbe;
  /* 10f23dbb and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10f23dbe:;
  /* 10f23dbe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23dc2 je 0x10f23dd5 */
  if (C.zf) goto L_10f23dd5;
  /* 10f23dc4 mov eax, dword ptr [0x10f49118] */
  EAX = (r32((uint32_t)(0x10f49118)));
  /* 10f23dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23dcb je 0x10f23dd5 */
  if (C.zf) goto L_10f23dd5;
  /* 10f23dcd push edi */
  push32((uint32_t)(EDI));
  /* 10f23dce push esi */
  push32((uint32_t)(ESI));
  /* 10f23dcf push ebx */
  push32((uint32_t)(EBX));
  /* 10f23dd0 call eax */
  call_ind((uint32_t)(EAX), 0x10f23dd2u);
  /* 10f23dd2 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10f23dd5:;
  /* 10f23dd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10f23dd8:;
  /* 10f23dd8 pop edi */
  EDI = (pop32());
  /* 10f23dd9 pop esi */
  ESI = (pop32());
  /* 10f23dda pop ebx */
  EBX = (pop32());
  /* 10f23ddb pop ebp */
  EBP = (pop32());
  /* 10f23ddc ret 0xc */
  ESPCHK(0x10f23d42u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10f23ddf (48 bytes, 15 insns) */
void f_10f23ddf(void) {
  FTRACE(0x10f23ddfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23ddf mov eax, dword ptr [0x10f479c8] */
  EAX = (r32((uint32_t)(0x10f479c8)));
  /* 10f23de4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23de7 je 0x10f23df6 */
  if (C.zf) goto L_10f23df6;
  /* 10f23de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23deb jne 0x10f23dfb */
  if (!C.zf) goto L_10f23dfb;
  /* 10f23ded cmp dword ptr [0x10f479cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f479cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23df4 jne 0x10f23dfb */
  if (!C.zf) goto L_10f23dfb;
L_10f23df6:;
  /* 10f23df6 call 0x10f2545d */
  push32(0x10f23dfbu); f_10f2545d();
L_10f23dfb:;
  /* 10f23dfb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f23dff call 0x10f25496 */
  push32(0x10f23e04u); f_10f25496();
  /* 10f23e04 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f23e09 call dword ptr [0x10f2f574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2f574))), 0x10f23e0fu);
  /* 10f23e0f pop ecx */
  ECX = (pop32());
  /* 10f23e10 pop ecx */
  ECX = (pop32());
  /* 10f23e11 ret  */
  ESPCHK(0x10f23ddfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e12 @ 0x10f23e12 (215 bytes, 75 insns) */
void f_10f23e12(void) {
  FTRACE(0x10f23e12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23e12 push ebp */
  push32((uint32_t)(EBP));
  /* 10f23e13 mov ebp, esp */
  EBP = (ESP);
  /* 10f23e15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f23e17 push 0x10f2d1f0 */
  push32((uint32_t)(0x10f2d1f0u));
  /* 10f23e1c push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f23e21 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f23e27 push eax */
  push32((uint32_t)(EAX));
  /* 10f23e28 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f23e2f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23e32 push ebx */
  push32((uint32_t)(EBX));
  /* 10f23e33 push esi */
  push32((uint32_t)(ESI));
  /* 10f23e34 push edi */
  push32((uint32_t)(EDI));
  /* 10f23e35 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f23e38 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f23e3a je 0x10f23eec */
  if (C.zf) { jmp_ind(0x10f23eecu); return; }
  /* 10f23e40 mov eax, dword ptr [0x10f48fe4] */
  EAX = (r32((uint32_t)(0x10f48fe4)));
  /* 10f23e45 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23e48 jne 0x10f23e85 */
  if (!C.zf) goto L_10f23e85;
  /* 10f23e4a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f23e4c call 0x10f26892 */
  push32(0x10f23e51u); f_10f26892();
  /* 10f23e51 pop ecx */
  ECX = (pop32());
  /* 10f23e52 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f23e56 push esi */
  push32((uint32_t)(ESI));
  /* 10f23e57 call 0x10f25631 */
  push32(0x10f23e5cu); f_10f25631();
  /* 10f23e5c pop ecx */
  ECX = (pop32());
  /* 10f23e5d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f23e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23e62 je 0x10f23e6d */
  if (C.zf) goto L_10f23e6d;
  /* 10f23e64 push esi */
  push32((uint32_t)(ESI));
  /* 10f23e65 push eax */
  push32((uint32_t)(EAX));
  /* 10f23e66 call 0x10f2565c */
  push32(0x10f23e6bu); f_10f2565c();
  /* 10f23e6b pop ecx */
  ECX = (pop32());
  /* 10f23e6c pop ecx */
  ECX = (pop32());
L_10f23e6d:;
  /* 10f23e6d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f23e71 call 0x10f23e7c */
  push32(0x10f23e76u); f_10f23e7c();
  /* 10f23e76 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23e7a jmp 0x10f23ecd */
  goto L_10f23ecd;
  /* 10f23e7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f23e7e call 0x10f268f3 */
  push32(0x10f23e83u); f_10f268f3();
  /* 10f23e83 pop ecx */
  ECX = (pop32());
  /* 10f23e84 ret  */
  ESPCHK(0x10f23e12u, _esp0);
  ESP += 4; return;
L_10f23e85:;
  /* 10f23e85 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23e88 jne 0x10f23edd */
  if (!C.zf) goto L_10f23edd;
  /* 10f23e8a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f23e8c call 0x10f26892 */
  push32(0x10f23e91u); f_10f26892();
  /* 10f23e91 pop ecx */
  ECX = (pop32());
  /* 10f23e92 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f23e99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f23e9c push eax */
  push32((uint32_t)(EAX));
  /* 10f23e9d lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10f23ea0 push eax */
  push32((uint32_t)(EAX));
  /* 10f23ea1 push esi */
  push32((uint32_t)(ESI));
  /* 10f23ea2 call 0x10f2638c */
  push32(0x10f23ea7u); f_10f2638c();
  /* 10f23ea7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f23eaa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f23ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23eaf je 0x10f23ec0 */
  if (C.zf) goto L_10f23ec0;
  /* 10f23eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10f23eb2 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10f23eb5 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 10f23eb8 call 0x10f263e3 */
  push32(0x10f23ebdu); f_10f263e3();
  /* 10f23ebd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f23ec0:;
  /* 10f23ec0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f23ec4 call 0x10f23ed4 */
  push32(0x10f23ec9u); f_10f23ed4();
  /* 10f23ec9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f23ecd:;
  /* 10f23ecd jne 0x10f23eec */
  if (!C.zf) { jmp_ind(0x10f23eecu); return; }
  /* 10f23ecf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f23ed2 jmp 0x10f23ede */
  goto L_10f23ede;
  /* 10f23ed4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f23ed6 call 0x10f268f3 */
  push32(0x10f23edbu); f_10f268f3();
  /* 10f23edb pop ecx */
  ECX = (pop32());
  /* 10f23edc ret  */
  ESPCHK(0x10f23e12u, _esp0);
  ESP += 4; return;
L_10f23edd:;
  /* 10f23edd push esi */
  push32((uint32_t)(ESI));
L_10f23ede:;
  /* 10f23ede push 0 */
  push32((uint32_t)(0x0u));
  /* 10f23ee0 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
}

/* FUN_10003e7c @ 0x10f23e7c (9 bytes, 4 insns) */
void f_10f23e7c(void) {
  FTRACE(0x10f23e7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23e7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f23e7e call 0x10f268f3 */
  push32(0x10f23e83u); f_10f268f3();
  /* 10f23e83 pop ecx */
  ECX = (pop32());
  /* 10f23e84 ret  */
  ESPCHK(0x10f23e7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ed4 @ 0x10f23ed4 (9 bytes, 4 insns) */
void f_10f23ed4(void) {
  FTRACE(0x10f23ed4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23ed4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f23ed6 call 0x10f268f3 */
  push32(0x10f23edbu); f_10f268f3();
  /* 10f23edb pop ecx */
  ECX = (pop32());
  /* 10f23edc ret  */
  ESPCHK(0x10f23ed4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003efb @ 0x10f23efb (18 bytes, 6 insns) */
void f_10f23efb(void) {
  FTRACE(0x10f23efbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23efb push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10f23f00 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10f23f05 call 0x10f26b0d */
  push32(0x10f23f0au); f_10f26b0d();
  /* 10f23f0a pop ecx */
  ECX = (pop32());
  /* 10f23f0b pop ecx */
  ECX = (pop32());
  /* 10f23f0c ret  */
  ESPCHK(0x10f23efbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f0d @ 0x10f23f0d (62 bytes, 24 insns) */
void f_10f23f0d(void) {
  FTRACE(0x10f23f0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23f0d push ebp */
  push32((uint32_t)(EBP));
  /* 10f23f0e mov ebp, esp */
  EBP = (ESP);
  /* 10f23f10 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f23f13 fld qword ptr [0x10f2d218] */
  fpu_push(rf64((uint32_t)(0x10f2d218)));
  /* 10f23f19 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10f23f1c fld qword ptr [0x10f2d210] */
  fpu_push(rf64((uint32_t)(0x10f2d210)));
  /* 10f23f22 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10f23f25 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10f23f28 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10f23f2b fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10f23f2e fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10f23f31 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10f23f34 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10f23f37 fcomp qword ptr [0x10f2d208] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f2d208)));
  (void)fpu_pop();
  /* 10f23f3d fnstsw ax */
  AX = fpu_status();
  /* 10f23f3f sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10f23f40 jbe 0x10f23f47 */
  if ((C.cf||C.zf)) goto L_10f23f47;
  /* 10f23f42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f23f44 pop eax */
  EAX = (pop32());
  /* 10f23f45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f23f46 ret  */
  ESPCHK(0x10f23f0du, _esp0);
  ESP += 4; return;
L_10f23f47:;
  /* 10f23f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f23f49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f23f4a ret  */
  ESPCHK(0x10f23f0du, _esp0);
  ESP += 4; return;
}

/* FUN_10003f4b @ 0x10f23f4b (41 bytes, 13 insns) */
void f_10f23f4b(void) {
  FTRACE(0x10f23f4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23f4b push 0x10f2d23c */
  push32((uint32_t)(0x10f2d23cu));
  /* 10f23f50 call dword ptr [0x10f2d0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0d0))), 0x10f23f56u);
  /* 10f23f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23f58 je 0x10f23f6f */
  if (C.zf) goto L_10f23f6f;
  /* 10f23f5a push 0x10f2d220 */
  push32((uint32_t)(0x10f2d220u));
  /* 10f23f5f push eax */
  push32((uint32_t)(EAX));
  /* 10f23f60 call dword ptr [0x10f2d0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0cc))), 0x10f23f66u);
  /* 10f23f66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23f68 je 0x10f23f6f */
  if (C.zf) goto L_10f23f6f;
  /* 10f23f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f23f6c call eax */
  call_ind((uint32_t)(EAX), 0x10f23f6eu);
  /* 10f23f6e ret  */
  ESPCHK(0x10f23f4bu, _esp0);
  ESP += 4; return;
L_10f23f6f:;
  /* 10f23f6f jmp 0x10f23f0d */
  f_10f23f0d(); return;
}

/* FUN_10003f74 @ 0x10f23f74 (90 bytes, 37 insns) */
void f_10f23f74(void) {
  FTRACE(0x10f23f74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f23f74 push esi */
  push32((uint32_t)(ESI));
  /* 10f23f75 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f23f79 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10f23f7c push eax */
  push32((uint32_t)(EAX));
  /* 10f23f7d call 0x10f26cb3 */
  push32(0x10f23f82u); f_10f26cb3();
  /* 10f23f82 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23f85 pop ecx */
  ECX = (pop32());
  /* 10f23f86 je 0x10f23fb4 */
  if (C.zf) goto L_10f23fb4;
L_10f23f88:;
  /* 10f23f88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f23f89 cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f23f90 jle 0x10f23fa1 */
  if ((C.zf||C.sf!=C.of)) goto L_10f23fa1;
  /* 10f23f92 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10f23f95 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f23f97 push eax */
  push32((uint32_t)(EAX));
  /* 10f23f98 call 0x10f26c3e */
  push32(0x10f23f9du); f_10f26c3e();
  /* 10f23f9d pop ecx */
  ECX = (pop32());
  /* 10f23f9e pop ecx */
  ECX = (pop32());
  /* 10f23f9f jmp 0x10f23fb0 */
  goto L_10f23fb0;
L_10f23fa1:;
  /* 10f23fa1 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10f23fa4 mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f23faa mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f23fad and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10f23fb0:;
  /* 10f23fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f23fb2 jne 0x10f23f88 */
  if (!C.zf) goto L_10f23f88;
L_10f23fb4:;
  /* 10f23fb4 mov cl, byte ptr [0x10f31754] */
  CL = (r8((uint32_t)(0x10f31754)));
  /* 10f23fba mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f23fbc mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10f23fbe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f23fbf:;
  /* 10f23fbf mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10f23fc1 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10f23fc3 mov al, cl */
  AL = (CL);
  /* 10f23fc5 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10f23fc7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f23fc8 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10f23fca jne 0x10f23fbf */
  if (!C.zf) goto L_10f23fbf;
  /* 10f23fcc pop esi */
  ESI = (pop32());
  /* 10f23fcd ret  */
  ESPCHK(0x10f23f74u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10f24034 (62 bytes, 29 insns) */
void f_10f24034(void) {
  FTRACE(0x10f24034u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24034 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24035 mov ebp, esp */
  EBP = (ESP);
  /* 10f24037 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24038 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24039 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2403d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f24040 je 0x10f2405d */
  if (C.zf) goto L_10f2405d;
  /* 10f24042 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f24045 push eax */
  push32((uint32_t)(EAX));
  /* 10f24046 call 0x10f2717f */
  push32(0x10f2404bu); f_10f2717f();
  /* 10f2404b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2404e pop ecx */
  ECX = (pop32());
  /* 10f2404f pop ecx */
  ECX = (pop32());
  /* 10f24050 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f24053 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f24055 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f24058 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f2405b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2405c ret  */
  ESPCHK(0x10f24034u, _esp0);
  ESP += 4; return;
L_10f2405d:;
  /* 10f2405d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f24060 push eax */
  push32((uint32_t)(EAX));
  /* 10f24061 call 0x10f271ac */
  push32(0x10f24066u); f_10f271ac();
  /* 10f24066 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f24069 pop ecx */
  ECX = (pop32());
  /* 10f2406a pop ecx */
  ECX = (pop32());
  /* 10f2406b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2406e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f24070 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f24071 ret  */
  ESPCHK(0x10f24034u, _esp0);
  ESP += 4; return;
}

/* FUN_10004072 @ 0x10f24072 (97 bytes, 42 insns) */
void f_10f24072(void) {
  FTRACE(0x10f24072u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24072 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24073 mov ebp, esp */
  EBP = (ESP);
  /* 10f24075 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24078 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10f2407b push esi */
  push32((uint32_t)(ESI));
  /* 10f2407c push eax */
  push32((uint32_t)(EAX));
  /* 10f2407d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f24080 push eax */
  push32((uint32_t)(EAX));
  /* 10f24081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f24084 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24085 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24086 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10f24088 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10f2408b call 0x10f27250 */
  push32(0x10f24090u); f_10f27250();
  /* 10f24090 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f24093 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f24096 push eax */
  push32((uint32_t)(EAX));
  /* 10f24097 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2409a lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10f2409d push eax */
  push32((uint32_t)(EAX));
  /* 10f2409e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f240a0 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f240a4 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f240a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f240a9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f240ab setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10f240ae add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f240b0 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f240b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f240b3 call 0x10f271d9 */
  push32(0x10f240b8u); f_10f271d9();
  /* 10f240b8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f240bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f240bd push eax */
  push32((uint32_t)(EAX));
  /* 10f240be push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f240c1 push esi */
  push32((uint32_t)(ESI));
  /* 10f240c2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f240c5 call 0x10f240d3 */
  push32(0x10f240cau); f_10f240d3();
  /* 10f240ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f240cd add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f240d0 pop esi */
  ESI = (pop32());
  /* 10f240d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f240d2 ret  */
  ESPCHK(0x10f24072u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d3 @ 0x10f240d3 (194 bytes, 91 insns) */
void f_10f240d3(void) {
  FTRACE(0x10f240d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f240d3 push ebp */
  push32((uint32_t)(EBP));
  /* 10f240d4 mov ebp, esp */
  EBP = (ESP);
  /* 10f240d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f240d7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f240d9 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f240dc push esi */
  push32((uint32_t)(ESI));
  /* 10f240dd mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10f240e0 push edi */
  push32((uint32_t)(EDI));
  /* 10f240e1 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f240e4 je 0x10f24101 */
  if (C.zf) goto L_10f24101;
  /* 10f240e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f240e8 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f240eb setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10f240ee push eax */
  push32((uint32_t)(EAX));
  /* 10f240ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f240f1 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f240f4 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f240f7 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f240f9 push eax */
  push32((uint32_t)(EAX));
  /* 10f240fa call 0x10f24375 */
  push32(0x10f240ffu); f_10f24375();
  /* 10f240ff pop ecx */
  ECX = (pop32());
  /* 10f24100 pop ecx */
  ECX = (pop32());
L_10f24101:;
  /* 10f24101 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24104 mov eax, edi */
  EAX = (EDI);
  /* 10f24106 jne 0x10f2410e */
  if (!C.zf) goto L_10f2410e;
  /* 10f24108 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10f2410b lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10f2410e:;
  /* 10f2410e cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24111 jle 0x10f24125 */
  if ((C.zf||C.sf!=C.of)) goto L_10f24125;
  /* 10f24113 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f24116 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10f24119 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f2411b mov eax, ecx */
  EAX = (ECX);
  /* 10f2411d mov cl, byte ptr [0x10f31754] */
  CL = (r8((uint32_t)(0x10f31754)));
  /* 10f24123 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10f24125:;
  /* 10f24125 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f24127 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2412a push 0x10f2d250 */
  push32((uint32_t)(0x10f2d250u));
  /* 10f2412f sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10f24132 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24134 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24137 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24138 call 0x10f27370 */
  push32(0x10f2413du); f_10f27370();
  /* 10f2413d cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24140 pop ecx */
  ECX = (pop32());
  /* 10f24141 pop ecx */
  ECX = (pop32());
  /* 10f24142 mov ecx, eax */
  ECX = (EAX);
  /* 10f24144 je 0x10f24149 */
  if (C.zf) goto L_10f24149;
  /* 10f24146 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10f24149:;
  /* 10f24149 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10f2414c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f2414d cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24150 je 0x10f2418e */
  if (C.zf) goto L_10f2418e;
  /* 10f24152 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f24155 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f24156 jns 0x10f2415d */
  if (!C.sf) goto L_10f2415d;
  /* 10f24158 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2415a mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10f2415d:;
  /* 10f2415d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f2415e cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24161 jl 0x10f24174 */
  if ((C.sf!=C.of)) goto L_10f24174;
  /* 10f24163 mov eax, ebx */
  EAX = (EBX);
  /* 10f24165 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f24167 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f24168 pop esi */
  ESI = (pop32());
  /* 10f24169 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f2416b add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f2416d mov eax, ebx */
  EAX = (EBX);
  /* 10f2416f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f24170 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f24172 mov ebx, edx */
  EBX = (EDX);
L_10f24174:;
  /* 10f24174 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f24175 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24178 jl 0x10f2418b */
  if ((C.sf!=C.of)) goto L_10f2418b;
  /* 10f2417a mov eax, ebx */
  EAX = (EBX);
  /* 10f2417c push 0xa */
  push32((uint32_t)(0xau));
  /* 10f2417e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f2417f pop esi */
  ESI = (pop32());
  /* 10f24180 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f24182 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f24184 mov eax, ebx */
  EAX = (EBX);
  /* 10f24186 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f24187 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f24189 mov ebx, edx */
  EBX = (EDX);
L_10f2418b:;
  /* 10f2418b add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10f2418e:;
  /* 10f2418e mov eax, edi */
  EAX = (EDI);
  /* 10f24190 pop edi */
  EDI = (pop32());
  /* 10f24191 pop esi */
  ESI = (pop32());
  /* 10f24192 pop ebx */
  EBX = (pop32());
  /* 10f24193 pop ebp */
  EBP = (pop32());
  /* 10f24194 ret  */
  ESPCHK(0x10f240d3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004195 @ 0x10f24195 (85 bytes, 37 insns) */
void f_10f24195(void) {
  FTRACE(0x10f24195u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24195 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24196 mov ebp, esp */
  EBP = (ESP);
  /* 10f24198 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2419b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10f2419e push esi */
  push32((uint32_t)(ESI));
  /* 10f2419f push eax */
  push32((uint32_t)(EAX));
  /* 10f241a0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f241a3 push eax */
  push32((uint32_t)(EAX));
  /* 10f241a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f241a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f241a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f241a9 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10f241ab fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10f241ae call 0x10f27250 */
  push32(0x10f241b3u); f_10f27250();
  /* 10f241b3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f241b6 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f241b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f241ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f241bd add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f241bf push eax */
  push32((uint32_t)(EAX));
  /* 10f241c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f241c2 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f241c6 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f241c9 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f241cc push eax */
  push32((uint32_t)(EAX));
  /* 10f241cd call 0x10f271d9 */
  push32(0x10f241d2u); f_10f271d9();
  /* 10f241d2 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f241d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f241d7 push eax */
  push32((uint32_t)(EAX));
  /* 10f241d8 push esi */
  push32((uint32_t)(ESI));
  /* 10f241d9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f241dc call 0x10f241ea */
  push32(0x10f241e1u); f_10f241ea();
  /* 10f241e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f241e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f241e7 pop esi */
  ESI = (pop32());
  /* 10f241e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f241e9 ret  */
  ESPCHK(0x10f24195u, _esp0);
  ESP += 4; return;
}

/* FUN_100041ea @ 0x10f241ea (167 bytes, 73 insns) */
void f_10f241ea(void) {
  FTRACE(0x10f241eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f241ea push ebp */
  push32((uint32_t)(EBP));
  /* 10f241eb mov ebp, esp */
  EBP = (ESP);
  /* 10f241ed push ebx */
  push32((uint32_t)(EBX));
  /* 10f241ee push esi */
  push32((uint32_t)(ESI));
  /* 10f241ef mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f241f2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f241f5 push edi */
  push32((uint32_t)(EDI));
  /* 10f241f6 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f241f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f241fa cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f241fe je 0x10f2421a */
  if (C.zf) goto L_10f2421a;
  /* 10f24200 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24203 jne 0x10f2421a */
  if (!C.zf) goto L_10f2421a;
  /* 10f24205 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f24207 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2420a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10f2420d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2420f add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24211 mov eax, ecx */
  EAX = (ECX);
  /* 10f24213 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10f24216 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10f2421a:;
  /* 10f2421a cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2421d mov edi, ebx */
  EDI = (EBX);
  /* 10f2421f jne 0x10f24227 */
  if (!C.zf) goto L_10f24227;
  /* 10f24221 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10f24224 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10f24227:;
  /* 10f24227 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2422a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2422c jg 0x10f2423e */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2423e;
  /* 10f2422e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f24230 push edi */
  push32((uint32_t)(EDI));
  /* 10f24231 call 0x10f24375 */
  push32(0x10f24236u); f_10f24375();
  /* 10f24236 pop ecx */
  ECX = (pop32());
  /* 10f24237 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10f2423a pop ecx */
  ECX = (pop32());
  /* 10f2423b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2423c jmp 0x10f24240 */
  goto L_10f24240;
L_10f2423e:;
  /* 10f2423e add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f24240:;
  /* 10f24240 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24244 jle 0x10f2428a */
  if ((C.zf||C.sf!=C.of)) goto L_10f2428a;
  /* 10f24246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f24248 push edi */
  push32((uint32_t)(EDI));
  /* 10f24249 call 0x10f24375 */
  push32(0x10f2424eu); f_10f24375();
  /* 10f2424e mov al, byte ptr [0x10f31754] */
  AL = (r8((uint32_t)(0x10f31754)));
  /* 10f24253 pop ecx */
  ECX = (pop32());
  /* 10f24254 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f24256 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10f24259 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2425a pop ecx */
  ECX = (pop32());
  /* 10f2425b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2425d jge 0x10f2428a */
  if ((C.sf==C.of)) goto L_10f2428a;
  /* 10f2425f cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24263 je 0x10f24269 */
  if (C.zf) goto L_10f24269;
  /* 10f24265 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10f24267 jmp 0x10f24270 */
  goto L_10f24270;
L_10f24269:;
  /* 10f24269 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2426b cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2426e jl 0x10f24273 */
  if ((C.sf!=C.of)) goto L_10f24273;
L_10f24270:;
  /* 10f24270 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10f24273:;
  /* 10f24273 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f24276 push edi */
  push32((uint32_t)(EDI));
  /* 10f24277 call 0x10f24375 */
  push32(0x10f2427cu); f_10f24375();
  /* 10f2427c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2427f push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f24281 push edi */
  push32((uint32_t)(EDI));
  /* 10f24282 call 0x10f27460 */
  push32(0x10f24287u); f_10f27460();
  /* 10f24287 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2428a:;
  /* 10f2428a pop edi */
  EDI = (pop32());
  /* 10f2428b mov eax, ebx */
  EAX = (EBX);
  /* 10f2428d pop esi */
  ESI = (pop32());
  /* 10f2428e pop ebx */
  EBX = (pop32());
  /* 10f2428f pop ebp */
  EBP = (pop32());
  /* 10f24290 ret  */
  ESPCHK(0x10f241eau, _esp0);
  ESP += 4; return;
}

/* FUN_10004291 @ 0x10f24291 (147 bytes, 66 insns) */
void f_10f24291(void) {
  FTRACE(0x10f24291u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24291 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24292 mov ebp, esp */
  EBP = (ESP);
  /* 10f24294 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24297 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24298 push esi */
  push32((uint32_t)(ESI));
  /* 10f24299 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10f2429c push edi */
  push32((uint32_t)(EDI));
  /* 10f2429d push eax */
  push32((uint32_t)(EAX));
  /* 10f2429e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f242a1 push eax */
  push32((uint32_t)(EAX));
  /* 10f242a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f242a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f242a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f242a7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10f242a9 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10f242ac call 0x10f27250 */
  push32(0x10f242b1u); f_10f27250();
  /* 10f242b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f242b4 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f242b7 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10f242ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f242bc cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f242c0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f242c3 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f242c6 mov edi, eax */
  EDI = (EAX);
  /* 10f242c8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f242cb push eax */
  push32((uint32_t)(EAX));
  /* 10f242cc push ebx */
  push32((uint32_t)(EBX));
  /* 10f242cd push edi */
  push32((uint32_t)(EDI));
  /* 10f242ce call 0x10f271d9 */
  push32(0x10f242d3u); f_10f271d9();
  /* 10f242d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f242d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f242d9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f242da cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f242dc setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10f242df cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f242e2 jl 0x10f2430a */
  if ((C.sf!=C.of)) goto L_10f2430a;
  /* 10f242e4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f242e6 jge 0x10f2430a */
  if ((C.sf==C.of)) goto L_10f2430a;
  /* 10f242e8 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10f242ea je 0x10f242f6 */
  if (C.zf) goto L_10f242f6;
L_10f242ec:;
  /* 10f242ec mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10f242ee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f242ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f242f1 jne 0x10f242ec */
  if (!C.zf) goto L_10f242ec;
  /* 10f242f3 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10f242f6:;
  /* 10f242f6 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f242f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f242fb push eax */
  push32((uint32_t)(EAX));
  /* 10f242fc push ebx */
  push32((uint32_t)(EBX));
  /* 10f242fd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f24300 call 0x10f241ea */
  push32(0x10f24305u); f_10f241ea();
  /* 10f24305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24308 jmp 0x10f2431f */
  goto L_10f2431f;
L_10f2430a:;
  /* 10f2430a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f2430d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2430f push eax */
  push32((uint32_t)(EAX));
  /* 10f24310 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f24313 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24314 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f24317 call 0x10f240d3 */
  push32(0x10f2431cu); f_10f240d3();
  /* 10f2431c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2431f:;
  /* 10f2431f pop edi */
  EDI = (pop32());
  /* 10f24320 pop esi */
  ESI = (pop32());
  /* 10f24321 pop ebx */
  EBX = (pop32());
  /* 10f24322 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f24323 ret  */
  ESPCHK(0x10f24291u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10f24324 (81 bytes, 29 insns) */
void f_10f24324(void) {
  FTRACE(0x10f24324u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24324 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24325 mov ebp, esp */
  EBP = (ESP);
  /* 10f24327 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2432b je 0x10f2435f */
  if (C.zf) goto L_10f2435f;
  /* 10f2432d cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24331 je 0x10f2435f */
  if (C.zf) goto L_10f2435f;
  /* 10f24333 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24337 jne 0x10f2434c */
  if (!C.zf) goto L_10f2434c;
  /* 10f24339 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2433c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2433f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f24342 call 0x10f24195 */
  push32(0x10f24347u); f_10f24195();
  /* 10f24347 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2434a pop ebp */
  EBP = (pop32());
  /* 10f2434b ret  */
  ESPCHK(0x10f24324u, _esp0);
  ESP += 4; return;
L_10f2434c:;
  /* 10f2434c push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2434f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f24352 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f24355 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f24358 call 0x10f24291 */
  push32(0x10f2435du); f_10f24291();
  /* 10f2435d jmp 0x10f24370 */
  goto L_10f24370;
L_10f2435f:;
  /* 10f2435f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f24362 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f24365 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f24368 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2436b call 0x10f24072 */
  push32(0x10f24370u); f_10f24072();
L_10f24370:;
  /* 10f24370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24373 pop ebp */
  EBP = (pop32());
  /* 10f24374 ret  */
  ESPCHK(0x10f24324u, _esp0);
  ESP += 4; return;
}

/* FUN_10004375 @ 0x10f24375 (37 bytes, 18 insns) */
void f_10f24375(void) {
  FTRACE(0x10f24375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24375 push edi */
  push32((uint32_t)(EDI));
  /* 10f24376 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10f2437a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f2437c je 0x10f24398 */
  if (C.zf) goto L_10f24398;
  /* 10f2437e push esi */
  push32((uint32_t)(ESI));
  /* 10f2437f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10f24383 push esi */
  push32((uint32_t)(ESI));
  /* 10f24384 call 0x10f27800 */
  push32(0x10f24389u); f_10f27800();
  /* 10f24389 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2438a push eax */
  push32((uint32_t)(EAX));
  /* 10f2438b push esi */
  push32((uint32_t)(ESI));
  /* 10f2438c add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2438e push esi */
  push32((uint32_t)(ESI));
  /* 10f2438f call 0x10f274c0 */
  push32(0x10f24394u); f_10f274c0();
  /* 10f24394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24397 pop esi */
  ESI = (pop32());
L_10f24398:;
  /* 10f24398 pop edi */
  EDI = (pop32());
  /* 10f24399 ret  */
  ESPCHK(0x10f24375u, _esp0);
  ESP += 4; return;
}

/* FUN_1000439a @ 0x10f2439a (45 bytes, 12 insns) */
void f_10f2439a(void) {
  FTRACE(0x10f2439au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2439a mov eax, dword ptr [0x10f2f568] */
  EAX = (r32((uint32_t)(0x10f2f568)));
  /* 10f2439f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f243a1 je 0x10f243a5 */
  if (C.zf) goto L_10f243a5;
  /* 10f243a3 call eax */
  call_ind((uint32_t)(EAX), 0x10f243a5u);
L_10f243a5:;
  /* 10f243a5 push 0x10f2f084 */
  push32((uint32_t)(0x10f2f084u));
  /* 10f243aa push 0x10f2f070 */
  push32((uint32_t)(0x10f2f070u));
  /* 10f243af call 0x10f2449e */
  push32(0x10f243b4u); f_10f2449e();
  /* 10f243b4 push 0x10f2f06c */
  push32((uint32_t)(0x10f2f06cu));
  /* 10f243b9 push 0x10f2f000 */
  push32((uint32_t)(0x10f2f000u));
  /* 10f243be call 0x10f2449e */
  push32(0x10f243c3u); f_10f2449e();
  /* 10f243c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f243c6 ret  */
  ESPCHK(0x10f2439au, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10f243c7 (17 bytes, 6 insns) */
void f_10f243c7(void) {
  FTRACE(0x10f243c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f243c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f243c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f243cb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f243cf call 0x10f243e7 */
  push32(0x10f243d4u); f_10f243e7();
  /* 10f243d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f243d7 ret  */
  ESPCHK(0x10f243c7u, _esp0);
  ESP += 4; return;
}

/* FUN_100043d8 @ 0x10f243d8 (15 bytes, 6 insns) */
void f_10f243d8(void) {
  FTRACE(0x10f243d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f243d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f243da push 0 */
  push32((uint32_t)(0x0u));
  /* 10f243dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f243de call 0x10f243e7 */
  push32(0x10f243e3u); f_10f243e7();
  /* 10f243e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f243e6 ret  */
  ESPCHK(0x10f243d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e7 @ 0x10f243e7 (163 bytes, 53 insns) */
void f_10f243e7(void) {
  FTRACE(0x10f243e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f243e7 push edi */
  push32((uint32_t)(EDI));
  /* 10f243e8 call 0x10f2448c */
  push32(0x10f243edu); f_10f2448c();
  /* 10f243ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10f243ef pop edi */
  EDI = (pop32());
  /* 10f243f0 cmp dword ptr [0x10f47a10], edi */
  { uint32_t _a=(r32((uint32_t)(0x10f47a10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f243f6 jne 0x10f24409 */
  if (!C.zf) goto L_10f24409;
  /* 10f243f8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f243fc call dword ptr [0x10f2d0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0dc))), 0x10f24402u);
  /* 10f24402 push eax */
  push32((uint32_t)(EAX));
  /* 10f24403 call dword ptr [0x10f2d000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d000))), 0x10f24409u);
L_10f24409:;
  /* 10f24409 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2440e push ebx */
  push32((uint32_t)(EBX));
  /* 10f2440f mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f24413 mov dword ptr [0x10f47a0c], edi */
  w32((uint32_t)(0x10f47a0c), (EDI));
  /* 10f24419 mov byte ptr [0x10f47a08], bl */
  w8((uint32_t)(0x10f47a08), (BL));
  /* 10f2441f jne 0x10f2445d */
  if (!C.zf) goto L_10f2445d;
  /* 10f24421 mov eax, dword ptr [0x10f49110] */
  EAX = (r32((uint32_t)(0x10f49110)));
  /* 10f24426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24428 je 0x10f2444c */
  if (C.zf) goto L_10f2444c;
  /* 10f2442a mov ecx, dword ptr [0x10f4910c] */
  ECX = (r32((uint32_t)(0x10f4910c)));
  /* 10f24430 push esi */
  push32((uint32_t)(ESI));
  /* 10f24431 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10f24434 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24436 jb 0x10f2444b */
  if (C.cf) goto L_10f2444b;
L_10f24438:;
  /* 10f24438 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2443a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2443c je 0x10f24440 */
  if (C.zf) goto L_10f24440;
  /* 10f2443e call eax */
  call_ind((uint32_t)(EAX), 0x10f24440u);
L_10f24440:;
  /* 10f24440 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24443 cmp esi, dword ptr [0x10f49110] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f49110))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24449 jae 0x10f24438 */
  if (!C.cf) goto L_10f24438;
L_10f2444b:;
  /* 10f2444b pop esi */
  ESI = (pop32());
L_10f2444c:;
  /* 10f2444c push 0x10f2f090 */
  push32((uint32_t)(0x10f2f090u));
  /* 10f24451 push 0x10f2f088 */
  push32((uint32_t)(0x10f2f088u));
  /* 10f24456 call 0x10f2449e */
  push32(0x10f2445bu); f_10f2449e();
  /* 10f2445b pop ecx */
  ECX = (pop32());
  /* 10f2445c pop ecx */
  ECX = (pop32());
L_10f2445d:;
  /* 10f2445d push 0x10f2f09c */
  push32((uint32_t)(0x10f2f09cu));
  /* 10f24462 push 0x10f2f094 */
  push32((uint32_t)(0x10f2f094u));
  /* 10f24467 call 0x10f2449e */
  push32(0x10f2446cu); f_10f2449e();
  /* 10f2446c pop ecx */
  ECX = (pop32());
  /* 10f2446d pop ecx */
  ECX = (pop32());
  /* 10f2446e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f24470 pop ebx */
  EBX = (pop32());
  /* 10f24471 je 0x10f2447a */
  if (C.zf) goto L_10f2447a;
  /* 10f24473 call 0x10f24495 */
  push32(0x10f24478u); f_10f24495();
  /* 10f24478 pop edi */
  EDI = (pop32());
  /* 10f24479 ret  */
  ESPCHK(0x10f243e7u, _esp0);
  ESP += 4; return;
L_10f2447a:;
  /* 10f2447a push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f2447e mov dword ptr [0x10f47a10], edi */
  w32((uint32_t)(0x10f47a10), (EDI));
  /* 10f24484 call dword ptr [0x10f2d004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d004))), 0x10f2448au);
  /* 10f2448a pop edi */
  EDI = (pop32());
  /* 10f2448b ret  */
  ESPCHK(0x10f243e7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000448c @ 0x10f2448c (9 bytes, 4 insns) */
void f_10f2448c(void) {
  FTRACE(0x10f2448cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2448c push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f2448e call 0x10f26892 */
  push32(0x10f24493u); f_10f26892();
  /* 10f24493 pop ecx */
  ECX = (pop32());
  /* 10f24494 ret  */
  ESPCHK(0x10f2448cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004495 @ 0x10f24495 (9 bytes, 4 insns) */
void f_10f24495(void) {
  FTRACE(0x10f24495u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24495 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f24497 call 0x10f268f3 */
  push32(0x10f2449cu); f_10f268f3();
  /* 10f2449c pop ecx */
  ECX = (pop32());
  /* 10f2449d ret  */
  ESPCHK(0x10f24495u, _esp0);
  ESP += 4; return;
}

/* FUN_1000449e @ 0x10f2449e (26 bytes, 12 insns) */
void f_10f2449e(void) {
  FTRACE(0x10f2449eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2449e push esi */
  push32((uint32_t)(ESI));
  /* 10f2449f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10f244a3:;
  /* 10f244a3 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f244a7 jae 0x10f244b6 */
  if (!C.cf) goto L_10f244b6;
  /* 10f244a9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f244ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f244ad je 0x10f244b1 */
  if (C.zf) goto L_10f244b1;
  /* 10f244af call eax */
  call_ind((uint32_t)(EAX), 0x10f244b1u);
L_10f244b1:;
  /* 10f244b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f244b4 jmp 0x10f244a3 */
  goto L_10f244a3;
L_10f244b6:;
  /* 10f244b6 pop esi */
  ESI = (pop32());
  /* 10f244b7 ret  */
  ESPCHK(0x10f2449eu, _esp0);
  ESP += 4; return;
}

/* FUN_100044b8 @ 0x10f244b8 (781 bytes, 277 insns) */
void f_10f244b8(void) {
  FTRACE(0x10f244b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f244b8 push ebp */
  push32((uint32_t)(EBP));
  /* 10f244b9 mov ebp, esp */
  EBP = (ESP);
  /* 10f244bb push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f244bd push 0x10f2d258 */
  push32((uint32_t)(0x10f2d258u));
  /* 10f244c2 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f244c7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f244cd push eax */
  push32((uint32_t)(EAX));
  /* 10f244ce mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f244d5 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f244d8 push ebx */
  push32((uint32_t)(EBX));
  /* 10f244d9 push esi */
  push32((uint32_t)(ESI));
  /* 10f244da push edi */
  push32((uint32_t)(EDI));
  /* 10f244db mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f244de xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f244e0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f244e2 jne 0x10f244f2 */
  if (!C.zf) goto L_10f244f2;
  /* 10f244e4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f244e7 call 0x10f248d5 */
  push32(0x10f244ecu); f_10f248d5();
  /* 10f244ec pop ecx */
  ECX = (pop32());
  /* 10f244ed jmp 0x10f247d8 */
  jmp_ind(0x10f247d8u); return;
L_10f244f2:;
  /* 10f244f2 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f244f5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f244f7 jne 0x10f24505 */
  if (!C.zf) goto L_10f24505;
  /* 10f244f9 push ebx */
  push32((uint32_t)(EBX));
  /* 10f244fa call 0x10f23e12 */
  push32(0x10f244ffu); f_10f23e12();
  /* 10f244ff pop ecx */
  ECX = (pop32());
  /* 10f24500 jmp 0x10f247d6 */
  jmp_ind(0x10f247d6u); return;
L_10f24505:;
  /* 10f24505 mov eax, dword ptr [0x10f48fe4] */
  EAX = (r32((uint32_t)(0x10f48fe4)));
  /* 10f2450a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2450d jne 0x10f2464c */
  if (!C.zf) goto L_10f2464c;
L_10f24513:;
  /* 10f24513 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10f24516 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24519 ja 0x10f24610 */
  if ((!C.cf&&!C.zf)) goto L_10f24610;
  /* 10f2451f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24521 call 0x10f26892 */
  push32(0x10f24526u); f_10f26892();
  /* 10f24526 pop ecx */
  ECX = (pop32());
  /* 10f24527 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10f2452a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2452b call 0x10f25631 */
  push32(0x10f24530u); f_10f25631();
  /* 10f24530 pop ecx */
  ECX = (pop32());
  /* 10f24531 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f24534 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24536 je 0x10f245e0 */
  if (C.zf) goto L_10f245e0;
  /* 10f2453c cmp esi, dword ptr [0x10f48fdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f48fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24542 ja 0x10f24590 */
  if ((!C.cf&&!C.zf)) goto L_10f24590;
  /* 10f24544 push esi */
  push32((uint32_t)(ESI));
  /* 10f24545 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24546 push eax */
  push32((uint32_t)(EAX));
  /* 10f24547 call 0x10f25e3a */
  push32(0x10f2454cu); f_10f25e3a();
  /* 10f2454c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2454f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24551 je 0x10f24558 */
  if (C.zf) goto L_10f24558;
  /* 10f24553 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 10f24556 jmp 0x10f24590 */
  goto L_10f24590;
L_10f24558:;
  /* 10f24558 push esi */
  push32((uint32_t)(ESI));
  /* 10f24559 call 0x10f25985 */
  push32(0x10f2455eu); f_10f25985();
  /* 10f2455e pop ecx */
  ECX = (pop32());
  /* 10f2455f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f24562 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24564 je 0x10f24590 */
  if (C.zf) goto L_10f24590;
  /* 10f24566 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 10f24569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2456a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f2456d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2456f jb 0x10f24573 */
  if (C.cf) goto L_10f24573;
  /* 10f24571 mov eax, esi */
  EAX = (ESI);
L_10f24573:;
  /* 10f24573 push eax */
  push32((uint32_t)(EAX));
  /* 10f24574 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24575 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f24578 call 0x10f278a0 */
  push32(0x10f2457du); f_10f278a0();
  /* 10f2457d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2457e call 0x10f25631 */
  push32(0x10f24583u); f_10f25631();
  /* 10f24583 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f24586 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24587 push eax */
  push32((uint32_t)(EAX));
  /* 10f24588 call 0x10f2565c */
  push32(0x10f2458du); f_10f2565c();
  /* 10f2458d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f24590:;
  /* 10f24590 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24593 jne 0x10f245e0 */
  if (!C.zf) goto L_10f245e0;
  /* 10f24595 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24597 jne 0x10f2459f */
  if (!C.zf) goto L_10f2459f;
  /* 10f24599 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2459b pop esi */
  ESI = (pop32());
  /* 10f2459c mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10f2459f:;
  /* 10f2459f add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f245a2 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f245a5 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10f245a8 push esi */
  push32((uint32_t)(ESI));
  /* 10f245a9 push edi */
  push32((uint32_t)(EDI));
  /* 10f245aa push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f245b0 call dword ptr [0x10f2d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e4))), 0x10f245b6u);
  /* 10f245b6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f245b9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f245bb je 0x10f245e0 */
  if (C.zf) goto L_10f245e0;
  /* 10f245bd mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 10f245c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f245c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f245c4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f245c6 jb 0x10f245ca */
  if (C.cf) goto L_10f245ca;
  /* 10f245c8 mov eax, esi */
  EAX = (ESI);
L_10f245ca:;
  /* 10f245ca push eax */
  push32((uint32_t)(EAX));
  /* 10f245cb push ebx */
  push32((uint32_t)(EBX));
  /* 10f245cc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f245cf call 0x10f278a0 */
  push32(0x10f245d4u); f_10f278a0();
  /* 10f245d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f245d5 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 10f245d8 call 0x10f2565c */
  push32(0x10f245ddu); f_10f2565c();
  /* 10f245dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f245e0:;
  /* 10f245e0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f245e4 call 0x10f24643 */
  push32(0x10f245e9u); f_10f24643();
  /* 10f245e9 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f245ec jne 0x10f24610 */
  if (!C.zf) goto L_10f24610;
  /* 10f245ee cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f245f0 jne 0x10f245f5 */
  if (!C.zf) goto L_10f245f5;
  /* 10f245f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f245f4 pop esi */
  ESI = (pop32());
L_10f245f5:;
  /* 10f245f5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f245f8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f245fb mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10f245fe push esi */
  push32((uint32_t)(ESI));
  /* 10f245ff push ebx */
  push32((uint32_t)(EBX));
  /* 10f24600 push edi */
  push32((uint32_t)(EDI));
  /* 10f24601 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f24607 call dword ptr [0x10f2d0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e0))), 0x10f2460du);
  /* 10f2460d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f24610:;
  /* 10f24610 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f24613 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24615 jne 0x10f247d8 */
  if (!C.zf) { jmp_ind(0x10f247d8u); return; }
  /* 10f2461b cmp dword ptr [0x10f47b8c], edi */
  { uint32_t _a=(r32((uint32_t)(0x10f47b8c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24621 je 0x10f247d8 */
  if (C.zf) { jmp_ind(0x10f247d8u); return; }
  /* 10f24627 push esi */
  push32((uint32_t)(ESI));
  /* 10f24628 call 0x10f27884 */
  push32(0x10f2462du); f_10f27884();
  /* 10f2462d pop ecx */
  ECX = (pop32());
  /* 10f2462e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24630 jne 0x10f24513 */
  if (!C.zf) goto L_10f24513;
  /* 10f24636 jmp 0x10f247d6 */
  jmp_ind(0x10f247d6u); return;
  /* 10f2463b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2463e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f24641 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f24643 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24645 call 0x10f268f3 */
  push32(0x10f2464au); f_10f268f3();
  /* 10f2464a pop ecx */
  ECX = (pop32());
  /* 10f2464b ret  */
  ESPCHK(0x10f244b8u, _esp0);
  ESP += 4; return;
L_10f2464c:;
  /* 10f2464c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2464f jne 0x10f2479c */
  if (!C.zf) goto L_10f2479c;
  /* 10f24655 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24658 ja 0x10f2466c */
  if ((!C.cf&&!C.zf)) goto L_10f2466c;
  /* 10f2465a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2465c jbe 0x10f24666 */
  if ((C.cf||C.zf)) goto L_10f24666;
  /* 10f2465e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24661 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f24664 jmp 0x10f24669 */
  goto L_10f24669;
L_10f24666:;
  /* 10f24666 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f24668 pop esi */
  ESI = (pop32());
L_10f24669:;
  /* 10f24669 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10f2466c:;
  /* 10f2466c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10f2466f cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24672 ja 0x10f2476b */
  if ((!C.cf&&!C.zf)) goto L_10f2476b;
  /* 10f24678 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f2467a call 0x10f26892 */
  push32(0x10f2467fu); f_10f26892();
  /* 10f2467f pop ecx */
  ECX = (pop32());
  /* 10f24680 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f24687 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 10f2468a push eax */
  push32((uint32_t)(EAX));
  /* 10f2468b lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10f2468e push eax */
  push32((uint32_t)(EAX));
  /* 10f2468f push ebx */
  push32((uint32_t)(EBX));
  /* 10f24690 call 0x10f2638c */
  push32(0x10f24695u); f_10f2638c();
  /* 10f24695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24698 mov edi, eax */
  EDI = (EAX);
  /* 10f2469a mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 10f2469d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f2469f je 0x10f2474f */
  if (C.zf) goto L_10f2474f;
  /* 10f246a5 cmp esi, dword ptr [0x10f3167c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f3167c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f246ab jae 0x10f24709 */
  if (!C.cf) goto L_10f24709;
  /* 10f246ad mov ebx, esi */
  EBX = (ESI);
  /* 10f246af shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 10f246b2 push ebx */
  push32((uint32_t)(EBX));
  /* 10f246b3 push edi */
  push32((uint32_t)(EDI));
  /* 10f246b4 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 10f246b7 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 10f246ba call 0x10f26754 */
  push32(0x10f246bfu); f_10f26754();
  /* 10f246bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f246c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f246c4 je 0x10f246ce */
  if (C.zf) goto L_10f246ce;
  /* 10f246c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f246c9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f246cc jmp 0x10f24706 */
  goto L_10f24706;
L_10f246ce:;
  /* 10f246ce push ebx */
  push32((uint32_t)(EBX));
  /* 10f246cf call 0x10f26428 */
  push32(0x10f246d4u); f_10f26428();
  /* 10f246d4 pop ecx */
  ECX = (pop32());
  /* 10f246d5 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f246d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f246da je 0x10f24706 */
  if (C.zf) goto L_10f24706;
  /* 10f246dc movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 10f246df shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f246e2 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 10f246e5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f246e7 jb 0x10f246eb */
  if (C.cf) goto L_10f246eb;
  /* 10f246e9 mov eax, esi */
  EAX = (ESI);
L_10f246eb:;
  /* 10f246eb push eax */
  push32((uint32_t)(EAX));
  /* 10f246ec push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f246ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f246f2 call 0x10f278a0 */
  push32(0x10f246f7u); f_10f278a0();
  /* 10f246f7 push edi */
  push32((uint32_t)(EDI));
  /* 10f246f8 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 10f246fb push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 10f246fe call 0x10f263e3 */
  push32(0x10f24703u); f_10f263e3();
  /* 10f24703 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f24706:;
  /* 10f24706 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10f24709:;
  /* 10f24709 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2470d jne 0x10f24762 */
  if (!C.zf) goto L_10f24762;
  /* 10f2470f push esi */
  push32((uint32_t)(ESI));
  /* 10f24710 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f24712 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f24718 call dword ptr [0x10f2d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e4))), 0x10f2471eu);
  /* 10f2471e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f24721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24723 je 0x10f24762 */
  if (C.zf) goto L_10f24762;
  /* 10f24725 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 10f24728 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f2472b mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 10f2472e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24730 jb 0x10f24734 */
  if (C.cf) goto L_10f24734;
  /* 10f24732 mov eax, esi */
  EAX = (ESI);
L_10f24734:;
  /* 10f24734 push eax */
  push32((uint32_t)(EAX));
  /* 10f24735 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24736 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f24739 call 0x10f278a0 */
  push32(0x10f2473eu); f_10f278a0();
  /* 10f2473e push edi */
  push32((uint32_t)(EDI));
  /* 10f2473f push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 10f24742 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 10f24745 call 0x10f263e3 */
  push32(0x10f2474au); f_10f263e3();
  /* 10f2474a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2474d jmp 0x10f24762 */
  goto L_10f24762;
L_10f2474f:;
  /* 10f2474f push esi */
  push32((uint32_t)(ESI));
  /* 10f24750 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24751 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f24753 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f24759 call dword ptr [0x10f2d0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e0))), 0x10f2475fu);
  /* 10f2475f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f24762:;
  /* 10f24762 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f24766 call 0x10f24791 */
  push32(0x10f2476bu); f_10f24791();
L_10f2476b:;
  /* 10f2476b mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f2476e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24770 jne 0x10f247d8 */
  if (!C.zf) { jmp_ind(0x10f247d8u); return; }
  /* 10f24772 cmp dword ptr [0x10f47b8c], edi */
  { uint32_t _a=(r32((uint32_t)(0x10f47b8c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24778 je 0x10f247d8 */
  if (C.zf) { jmp_ind(0x10f247d8u); return; }
  /* 10f2477a push esi */
  push32((uint32_t)(ESI));
  /* 10f2477b call 0x10f27884 */
  push32(0x10f24780u); f_10f27884();
  /* 10f24780 pop ecx */
  ECX = (pop32());
  /* 10f24781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24783 jne 0x10f2466c */
  if (!C.zf) goto L_10f2466c;
  /* 10f24789 jmp 0x10f247d6 */
  jmp_ind(0x10f247d6u); return;
  /* 10f2478b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2478e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f24791 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24793 call 0x10f268f3 */
  push32(0x10f24798u); f_10f268f3();
  /* 10f24798 pop ecx */
  ECX = (pop32());
  /* 10f24799 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f2479b ret  */
  ESPCHK(0x10f244b8u, _esp0);
  ESP += 4; return;
L_10f2479c:;
  /* 10f2479c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2479e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f247a1 ja 0x10f247bf */
  if ((!C.cf&&!C.zf)) goto L_10f247bf;
  /* 10f247a3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f247a5 jne 0x10f247aa */
  if (!C.zf) goto L_10f247aa;
  /* 10f247a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f247a9 pop esi */
  ESI = (pop32());
L_10f247aa:;
  /* 10f247aa add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f247ad and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f247b0 push esi */
  push32((uint32_t)(ESI));
  /* 10f247b1 push ebx */
  push32((uint32_t)(EBX));
  /* 10f247b2 push edi */
  push32((uint32_t)(EDI));
  /* 10f247b3 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f247b9 call dword ptr [0x10f2d0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e0))), 0x10f247bfu);
L_10f247bf:;
  /* 10f247bf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f247c1 jne 0x10f247d8 */
  if (!C.zf) { jmp_ind(0x10f247d8u); return; }
}

/* FUN_10004643 @ 0x10f24643 (9 bytes, 4 insns) */
void f_10f24643(void) {
  FTRACE(0x10f24643u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24643 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24645 call 0x10f268f3 */
  push32(0x10f2464au); f_10f268f3();
  /* 10f2464a pop ecx */
  ECX = (pop32());
  /* 10f2464b ret  */
  ESPCHK(0x10f24643u, _esp0);
  ESP += 4; return;
}

/* FUN_10004791 @ 0x10f24791 (11 bytes, 5 insns) */
void f_10f24791(void) {
  FTRACE(0x10f24791u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24791 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24793 call 0x10f268f3 */
  push32(0x10f24798u); f_10f268f3();
  /* 10f24798 pop ecx */
  ECX = (pop32());
  /* 10f24799 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f2479b ret  */
  ESPCHK(0x10f24791u, _esp0);
  ESP += 4; return;
}

/* FUN_100047e7 @ 0x10f247e7 (214 bytes, 72 insns) */
void f_10f247e7(void) {
  FTRACE(0x10f247e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f247e7 push ebp */
  push32((uint32_t)(EBP));
  /* 10f247e8 mov ebp, esp */
  EBP = (ESP);
  /* 10f247ea push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f247ec push 0x10f2d270 */
  push32((uint32_t)(0x10f2d270u));
  /* 10f247f1 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f247f6 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f247fc push eax */
  push32((uint32_t)(EAX));
  /* 10f247fd mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f24804 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24807 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24808 push esi */
  push32((uint32_t)(ESI));
  /* 10f24809 push edi */
  push32((uint32_t)(EDI));
  /* 10f2480a mov eax, dword ptr [0x10f48fe4] */
  EAX = (r32((uint32_t)(0x10f48fe4)));
  /* 10f2480f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24812 jne 0x10f2485a */
  if (!C.zf) goto L_10f2485a;
  /* 10f24814 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24816 call 0x10f26892 */
  push32(0x10f2481bu); f_10f26892();
  /* 10f2481b pop ecx */
  ECX = (pop32());
  /* 10f2481c and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f24820 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f24823 push esi */
  push32((uint32_t)(ESI));
  /* 10f24824 call 0x10f25631 */
  push32(0x10f24829u); f_10f25631();
  /* 10f24829 pop ecx */
  ECX = (pop32());
  /* 10f2482a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f2482d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2482f je 0x10f2483c */
  if (C.zf) goto L_10f2483c;
  /* 10f24831 mov esi, dword ptr [esi - 4] */
  ESI = (r32((uint32_t)(ESI + -0x4)));
  /* 10f24834 sub esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24837 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 10f2483a jmp 0x10f2483f */
  goto L_10f2483f;
L_10f2483c:;
  /* 10f2483c mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_10f2483f:;
  /* 10f2483f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f24843 call 0x10f24851 */
  push32(0x10f24848u); f_10f24851();
  /* 10f24848 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2484c jmp 0x10f248a3 */
  goto L_10f248a3;
  /* 10f2484e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10f24851 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24853 call 0x10f268f3 */
  push32(0x10f24858u); f_10f268f3();
  /* 10f24858 pop ecx */
  ECX = (pop32());
  /* 10f24859 ret  */
  ESPCHK(0x10f247e7u, _esp0);
  ESP += 4; return;
L_10f2485a:;
  /* 10f2485a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2485d jne 0x10f248a5 */
  if (!C.zf) goto L_10f248a5;
  /* 10f2485f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24861 call 0x10f26892 */
  push32(0x10f24866u); f_10f26892();
  /* 10f24866 pop ecx */
  ECX = (pop32());
  /* 10f24867 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f2486e lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10f24871 push eax */
  push32((uint32_t)(EAX));
  /* 10f24872 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 10f24875 push eax */
  push32((uint32_t)(EAX));
  /* 10f24876 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f24879 call 0x10f2638c */
  push32(0x10f2487eu); f_10f2638c();
  /* 10f2487e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24881 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f24884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24886 je 0x10f24893 */
  if (C.zf) goto L_10f24893;
  /* 10f24888 movzx esi, byte ptr [eax] */
  ESI = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10f2488b shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10f2488e mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 10f24891 jmp 0x10f24896 */
  goto L_10f24896;
L_10f24893:;
  /* 10f24893 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_10f24896:;
  /* 10f24896 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2489a call 0x10f248cc */
  push32(0x10f2489fu); f_10f248cc();
  /* 10f2489f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f248a3:;
  /* 10f248a3 jne 0x10f248b8 */
  if (!C.zf) goto L_10f248b8;
L_10f248a5:;
  /* 10f248a5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f248a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f248aa push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f248b0 call dword ptr [0x10f2d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e8))), 0x10f248b6u);
  /* 10f248b6 mov esi, eax */
  ESI = (EAX);
L_10f248b8:;
  /* 10f248b8 mov eax, esi */
  EAX = (ESI);
  /* 10f248ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
}

/* FUN_10004851 @ 0x10f24851 (9 bytes, 4 insns) */
void f_10f24851(void) {
  FTRACE(0x10f24851u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24851 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24853 call 0x10f268f3 */
  push32(0x10f24858u); f_10f268f3();
  /* 10f24858 pop ecx */
  ECX = (pop32());
  /* 10f24859 ret  */
  ESPCHK(0x10f24851u, _esp0);
  ESP += 4; return;
}

/* FUN_100048cc @ 0x10f248cc (9 bytes, 4 insns) */
void f_10f248cc(void) {
  FTRACE(0x10f248ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f248cc push 9 */
  push32((uint32_t)(0x9u));
  /* 10f248ce call 0x10f268f3 */
  push32(0x10f248d3u); f_10f268f3();
  /* 10f248d3 pop ecx */
  ECX = (pop32());
  /* 10f248d4 ret  */
  ESPCHK(0x10f248ccu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10f248d5 (18 bytes, 6 insns) */
void f_10f248d5(void) {
  FTRACE(0x10f248d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f248d5 push dword ptr [0x10f47b8c] */
  push32((uint32_t)(r32((uint32_t)(0x10f47b8c))));
  /* 10f248db push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f248df call 0x10f248e7 */
  push32(0x10f248e4u); f_10f248e7();
  /* 10f248e4 pop ecx */
  ECX = (pop32());
  /* 10f248e5 pop ecx */
  ECX = (pop32());
  /* 10f248e6 ret  */
  ESPCHK(0x10f248d5u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10f248e7 (44 bytes, 16 insns) */
void f_10f248e7(void) {
  FTRACE(0x10f248e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f248e7 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f248ec ja 0x10f24910 */
  if ((!C.cf&&!C.zf)) goto L_10f24910;
L_10f248ee:;
  /* 10f248ee push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f248f2 call 0x10f24913 */
  push32(0x10f248f7u); f_10f24913();
  /* 10f248f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f248f9 pop ecx */
  ECX = (pop32());
  /* 10f248fa jne 0x10f24912 */
  if (!C.zf) goto L_10f24912;
  /* 10f248fc cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24900 je 0x10f24912 */
  if (C.zf) goto L_10f24912;
  /* 10f24902 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f24906 call 0x10f27884 */
  push32(0x10f2490bu); f_10f27884();
  /* 10f2490b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2490d pop ecx */
  ECX = (pop32());
  /* 10f2490e jne 0x10f248ee */
  if (!C.zf) goto L_10f248ee;
L_10f24910:;
  /* 10f24910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f24912:;
  /* 10f24912 ret  */
  ESPCHK(0x10f248e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004913 @ 0x10f24913 (231 bytes, 81 insns) */
void f_10f24913(void) {
  FTRACE(0x10f24913u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24913 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24914 mov ebp, esp */
  EBP = (ESP);
  /* 10f24916 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f24918 push 0x10f2d288 */
  push32((uint32_t)(0x10f2d288u));
  /* 10f2491d push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f24922 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f24928 push eax */
  push32((uint32_t)(EAX));
  /* 10f24929 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f24930 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24933 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24934 push esi */
  push32((uint32_t)(ESI));
  /* 10f24935 push edi */
  push32((uint32_t)(EDI));
  /* 10f24936 mov eax, dword ptr [0x10f48fe4] */
  EAX = (r32((uint32_t)(0x10f48fe4)));
  /* 10f2493b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2493e jne 0x10f24983 */
  if (!C.zf) goto L_10f24983;
  /* 10f24940 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f24943 cmp esi, dword ptr [0x10f48fdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f48fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24949 ja 0x10f249e2 */
  if ((!C.cf&&!C.zf)) goto L_10f249e2;
  /* 10f2494f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24951 call 0x10f26892 */
  push32(0x10f24956u); f_10f26892();
  /* 10f24956 pop ecx */
  ECX = (pop32());
  /* 10f24957 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2495b push esi */
  push32((uint32_t)(ESI));
  /* 10f2495c call 0x10f25985 */
  push32(0x10f24961u); f_10f25985();
  /* 10f24961 pop ecx */
  ECX = (pop32());
  /* 10f24962 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f24965 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f24969 call 0x10f2497a */
  push32(0x10f2496eu); f_10f2497a();
  /* 10f2496e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f24971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24973 je 0x10f249e2 */
  if (C.zf) goto L_10f249e2;
  /* 10f24975 jmp 0x10f24a00 */
  jmp_ind(0x10f24a00u); return;
  /* 10f2497a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f2497c call 0x10f268f3 */
  push32(0x10f24981u); f_10f268f3();
  /* 10f24981 pop ecx */
  ECX = (pop32());
  /* 10f24982 ret  */
  ESPCHK(0x10f24913u, _esp0);
  ESP += 4; return;
L_10f24983:;
  /* 10f24983 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24986 jne 0x10f249e2 */
  if (!C.zf) goto L_10f249e2;
  /* 10f24988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2498b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2498d je 0x10f24997 */
  if (C.zf) goto L_10f24997;
  /* 10f2498f lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 10f24992 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f24995 jmp 0x10f2499a */
  goto L_10f2499a;
L_10f24997:;
  /* 10f24997 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f24999 pop esi */
  ESI = (pop32());
L_10f2499a:;
  /* 10f2499a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 10f2499d cmp esi, dword ptr [0x10f3167c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f3167c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f249a3 ja 0x10f249d3 */
  if ((!C.cf&&!C.zf)) goto L_10f249d3;
  /* 10f249a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f249a7 call 0x10f26892 */
  push32(0x10f249acu); f_10f26892();
  /* 10f249ac pop ecx */
  ECX = (pop32());
  /* 10f249ad mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f249b4 mov eax, esi */
  EAX = (ESI);
  /* 10f249b6 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f249b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f249ba call 0x10f26428 */
  push32(0x10f249bfu); f_10f26428();
  /* 10f249bf pop ecx */
  ECX = (pop32());
  /* 10f249c0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f249c3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f249c7 call 0x10f249d9 */
  push32(0x10f249ccu); f_10f249d9();
  /* 10f249cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f249cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f249d1 jne 0x10f24a00 */
  if (!C.zf) { jmp_ind(0x10f24a00u); return; }
L_10f249d3:;
  /* 10f249d3 push esi */
  push32((uint32_t)(ESI));
  /* 10f249d4 jmp 0x10f249f2 */
  goto L_10f249f2;
  /* 10f249d6 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f249d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f249db call 0x10f268f3 */
  push32(0x10f249e0u); f_10f268f3();
  /* 10f249e0 pop ecx */
  ECX = (pop32());
  /* 10f249e1 ret  */
  ESPCHK(0x10f24913u, _esp0);
  ESP += 4; return;
L_10f249e2:;
  /* 10f249e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f249e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f249e7 jne 0x10f249ec */
  if (!C.zf) goto L_10f249ec;
  /* 10f249e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f249eb pop eax */
  EAX = (pop32());
L_10f249ec:;
  /* 10f249ec add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f249ef and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10f249f1 push eax */
  push32((uint32_t)(EAX));
L_10f249f2:;
  /* 10f249f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f249f4 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
}

/* FUN_1000497a @ 0x10f2497a (9 bytes, 4 insns) */
void f_10f2497a(void) {
  FTRACE(0x10f2497au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2497a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f2497c call 0x10f268f3 */
  push32(0x10f24981u); f_10f268f3();
  /* 10f24981 pop ecx */
  ECX = (pop32());
  /* 10f24982 ret  */
  ESPCHK(0x10f2497au, _esp0);
  ESP += 4; return;
}

/* FUN_100049d9 @ 0x10f249d9 (9 bytes, 4 insns) */
void f_10f249d9(void) {
  FTRACE(0x10f249d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f249d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f249db call 0x10f268f3 */
  push32(0x10f249e0u); f_10f268f3();
  /* 10f249e0 pop ecx */
  ECX = (pop32());
  /* 10f249e1 ret  */
  ESPCHK(0x10f249d9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a0f @ 0x10f24a0f (84 bytes, 32 insns) */
void f_10f24a0f(void) {
  FTRACE(0x10f24a0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24a0f push esi */
  push32((uint32_t)(ESI));
  /* 10f24a10 call 0x10f267fd */
  push32(0x10f24a15u); f_10f267fd();
  /* 10f24a15 call dword ptr [0x10f2d0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0d8))), 0x10f24a1bu);
  /* 10f24a1b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24a1e mov dword ptr [0x10f2f590], eax */
  w32((uint32_t)(0x10f2f590), (EAX));
  /* 10f24a23 je 0x10f24a5f */
  if (C.zf) goto L_10f24a5f;
  /* 10f24a25 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f24a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f24a29 call 0x10f27bd5 */
  push32(0x10f24a2eu); f_10f27bd5();
  /* 10f24a2e mov esi, eax */
  ESI = (EAX);
  /* 10f24a30 pop ecx */
  ECX = (pop32());
  /* 10f24a31 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24a33 pop ecx */
  ECX = (pop32());
  /* 10f24a34 je 0x10f24a5f */
  if (C.zf) goto L_10f24a5f;
  /* 10f24a36 push esi */
  push32((uint32_t)(ESI));
  /* 10f24a37 push dword ptr [0x10f2f590] */
  push32((uint32_t)(r32((uint32_t)(0x10f2f590))));
  /* 10f24a3d call dword ptr [0x10f2d0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0d4))), 0x10f24a43u);
  /* 10f24a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24a45 je 0x10f24a5f */
  if (C.zf) goto L_10f24a5f;
  /* 10f24a47 push esi */
  push32((uint32_t)(ESI));
  /* 10f24a48 call 0x10f24a81 */
  push32(0x10f24a4du); f_10f24a81();
  /* 10f24a4d pop ecx */
  ECX = (pop32());
  /* 10f24a4e call dword ptr [0x10f2d0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0ec))), 0x10f24a54u);
  /* 10f24a54 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f24a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f24a5a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f24a5c pop eax */
  EAX = (pop32());
  /* 10f24a5d pop esi */
  ESI = (pop32());
  /* 10f24a5e ret  */
  ESPCHK(0x10f24a0fu, _esp0);
  ESP += 4; return;
L_10f24a5f:;
  /* 10f24a5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f24a61 pop esi */
  ESI = (pop32());
  /* 10f24a62 ret  */
  ESPCHK(0x10f24a0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a63 @ 0x10f24a63 (30 bytes, 8 insns) */
void f_10f24a63(void) {
  FTRACE(0x10f24a63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24a63 call 0x10f26826 */
  push32(0x10f24a68u); f_10f26826();
  /* 10f24a68 mov eax, dword ptr [0x10f2f590] */
  EAX = (r32((uint32_t)(0x10f2f590)));
  /* 10f24a6d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24a70 je 0x10f24a80 */
  if (C.zf) goto L_10f24a80;
  /* 10f24a72 push eax */
  push32((uint32_t)(EAX));
  /* 10f24a73 call dword ptr [0x10f2d0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0bc))), 0x10f24a79u);
  /* 10f24a79 or dword ptr [0x10f2f590], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10f2f590)))|(0xffffffffu); w32((uint32_t)(0x10f2f590), (_r)); fl_logic(_r,32); }
L_10f24a80:;
  /* 10f24a80 ret  */
  ESPCHK(0x10f24a63u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a81 @ 0x10f24a81 (19 bytes, 4 insns) */
void f_10f24a81(void) {
  FTRACE(0x10f24a81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24a81 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f24a85 mov dword ptr [eax + 0x50], 0x10f319a0 */
  w32((uint32_t)(EAX + 0x50), (0x10f319a0u));
  /* 10f24a8c mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10f24a93 ret  */
  ESPCHK(0x10f24a81u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a94 @ 0x10f24a94 (103 bytes, 38 insns) */
void f_10f24a94(void) {
  FTRACE(0x10f24a94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24a94 push esi */
  push32((uint32_t)(ESI));
  /* 10f24a95 push edi */
  push32((uint32_t)(EDI));
  /* 10f24a96 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f24a9cu);
  /* 10f24a9c push dword ptr [0x10f2f590] */
  push32((uint32_t)(r32((uint32_t)(0x10f2f590))));
  /* 10f24aa2 mov edi, eax */
  EDI = (EAX);
  /* 10f24aa4 call dword ptr [0x10f2d0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b4))), 0x10f24aaau);
  /* 10f24aaa mov esi, eax */
  ESI = (EAX);
  /* 10f24aac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24aae jne 0x10f24aef */
  if (!C.zf) goto L_10f24aef;
  /* 10f24ab0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f24ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f24ab4 call 0x10f27bd5 */
  push32(0x10f24ab9u); f_10f27bd5();
  /* 10f24ab9 mov esi, eax */
  ESI = (EAX);
  /* 10f24abb pop ecx */
  ECX = (pop32());
  /* 10f24abc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24abe pop ecx */
  ECX = (pop32());
  /* 10f24abf je 0x10f24ae7 */
  if (C.zf) goto L_10f24ae7;
  /* 10f24ac1 push esi */
  push32((uint32_t)(ESI));
  /* 10f24ac2 push dword ptr [0x10f2f590] */
  push32((uint32_t)(r32((uint32_t)(0x10f2f590))));
  /* 10f24ac8 call dword ptr [0x10f2d0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0d4))), 0x10f24aceu);
  /* 10f24ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24ad0 je 0x10f24ae7 */
  if (C.zf) goto L_10f24ae7;
  /* 10f24ad2 push esi */
  push32((uint32_t)(ESI));
  /* 10f24ad3 call 0x10f24a81 */
  push32(0x10f24ad8u); f_10f24a81();
  /* 10f24ad8 pop ecx */
  ECX = (pop32());
  /* 10f24ad9 call dword ptr [0x10f2d0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0ec))), 0x10f24adfu);
  /* 10f24adf or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f24ae3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f24ae5 jmp 0x10f24aef */
  goto L_10f24aef;
L_10f24ae7:;
  /* 10f24ae7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f24ae9 call 0x10f23ddf */
  push32(0x10f24aeeu); f_10f23ddf();
  /* 10f24aee pop ecx */
  ECX = (pop32());
L_10f24aef:;
  /* 10f24aef push edi */
  push32((uint32_t)(EDI));
  /* 10f24af0 call dword ptr [0x10f2d0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b8))), 0x10f24af6u);
  /* 10f24af6 mov eax, esi */
  EAX = (ESI);
  /* 10f24af8 pop edi */
  EDI = (pop32());
  /* 10f24af9 pop esi */
  ESI = (pop32());
  /* 10f24afa ret  */
  ESPCHK(0x10f24a94u, _esp0);
  ESP += 4; return;
}

/* FUN_10004afb @ 0x10f24afb (160 bytes, 62 insns) */
void f_10f24afb(void) {
  FTRACE(0x10f24afbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24afb mov eax, dword ptr [0x10f2f590] */
  EAX = (r32((uint32_t)(0x10f2f590)));
  /* 10f24b00 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24b03 je 0x10f24b9a */
  if (C.zf) goto L_10f24b9a;
  /* 10f24b09 push esi */
  push32((uint32_t)(ESI));
  /* 10f24b0a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f24b0e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24b10 jne 0x10f24b1f */
  if (!C.zf) goto L_10f24b1f;
  /* 10f24b12 push eax */
  push32((uint32_t)(EAX));
  /* 10f24b13 call dword ptr [0x10f2d0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b4))), 0x10f24b19u);
  /* 10f24b19 mov esi, eax */
  ESI = (EAX);
  /* 10f24b1b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24b1d je 0x10f24b8b */
  if (C.zf) goto L_10f24b8b;
L_10f24b1f:;
  /* 10f24b1f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10f24b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24b24 je 0x10f24b2d */
  if (C.zf) goto L_10f24b2d;
  /* 10f24b26 push eax */
  push32((uint32_t)(EAX));
  /* 10f24b27 call 0x10f23e12 */
  push32(0x10f24b2cu); f_10f23e12();
  /* 10f24b2c pop ecx */
  ECX = (pop32());
L_10f24b2d:;
  /* 10f24b2d mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10f24b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24b32 je 0x10f24b3b */
  if (C.zf) goto L_10f24b3b;
  /* 10f24b34 push eax */
  push32((uint32_t)(EAX));
  /* 10f24b35 call 0x10f23e12 */
  push32(0x10f24b3au); f_10f23e12();
  /* 10f24b3a pop ecx */
  ECX = (pop32());
L_10f24b3b:;
  /* 10f24b3b mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10f24b3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24b40 je 0x10f24b49 */
  if (C.zf) goto L_10f24b49;
  /* 10f24b42 push eax */
  push32((uint32_t)(EAX));
  /* 10f24b43 call 0x10f23e12 */
  push32(0x10f24b48u); f_10f23e12();
  /* 10f24b48 pop ecx */
  ECX = (pop32());
L_10f24b49:;
  /* 10f24b49 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10f24b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24b4e je 0x10f24b57 */
  if (C.zf) goto L_10f24b57;
  /* 10f24b50 push eax */
  push32((uint32_t)(EAX));
  /* 10f24b51 call 0x10f23e12 */
  push32(0x10f24b56u); f_10f23e12();
  /* 10f24b56 pop ecx */
  ECX = (pop32());
L_10f24b57:;
  /* 10f24b57 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10f24b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24b5c je 0x10f24b65 */
  if (C.zf) goto L_10f24b65;
  /* 10f24b5e push eax */
  push32((uint32_t)(EAX));
  /* 10f24b5f call 0x10f23e12 */
  push32(0x10f24b64u); f_10f23e12();
  /* 10f24b64 pop ecx */
  ECX = (pop32());
L_10f24b65:;
  /* 10f24b65 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10f24b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24b6a je 0x10f24b73 */
  if (C.zf) goto L_10f24b73;
  /* 10f24b6c push eax */
  push32((uint32_t)(EAX));
  /* 10f24b6d call 0x10f23e12 */
  push32(0x10f24b72u); f_10f23e12();
  /* 10f24b72 pop ecx */
  ECX = (pop32());
L_10f24b73:;
  /* 10f24b73 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10f24b76 cmp eax, 0x10f319a0 */
  { uint32_t _a=(EAX),_b=(0x10f319a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24b7b je 0x10f24b84 */
  if (C.zf) goto L_10f24b84;
  /* 10f24b7d push eax */
  push32((uint32_t)(EAX));
  /* 10f24b7e call 0x10f23e12 */
  push32(0x10f24b83u); f_10f23e12();
  /* 10f24b83 pop ecx */
  ECX = (pop32());
L_10f24b84:;
  /* 10f24b84 push esi */
  push32((uint32_t)(ESI));
  /* 10f24b85 call 0x10f23e12 */
  push32(0x10f24b8au); f_10f23e12();
  /* 10f24b8a pop ecx */
  ECX = (pop32());
L_10f24b8b:;
  /* 10f24b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f24b8d push dword ptr [0x10f2f590] */
  push32((uint32_t)(r32((uint32_t)(0x10f2f590))));
  /* 10f24b93 call dword ptr [0x10f2d0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0d4))), 0x10f24b99u);
  /* 10f24b99 pop esi */
  ESI = (pop32());
L_10f24b9a:;
  /* 10f24b9a ret  */
  ESPCHK(0x10f24afbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b9b @ 0x10f24b9b (444 bytes, 150 insns) */
void f_10f24b9b(void) {
  FTRACE(0x10f24b9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24b9b push ebp */
  push32((uint32_t)(EBP));
  /* 10f24b9c mov ebp, esp */
  EBP = (ESP);
  /* 10f24b9e sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24ba1 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24ba2 push esi */
  push32((uint32_t)(ESI));
  /* 10f24ba3 push edi */
  push32((uint32_t)(EDI));
  /* 10f24ba4 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f24ba9 call 0x10f248d5 */
  push32(0x10f24baeu); f_10f248d5();
  /* 10f24bae mov esi, eax */
  ESI = (EAX);
  /* 10f24bb0 pop ecx */
  ECX = (pop32());
  /* 10f24bb1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24bb3 jne 0x10f24bbd */
  if (!C.zf) goto L_10f24bbd;
  /* 10f24bb5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f24bb7 call 0x10f23ddf */
  push32(0x10f24bbcu); f_10f23ddf();
  /* 10f24bbc pop ecx */
  ECX = (pop32());
L_10f24bbd:;
  /* 10f24bbd mov dword ptr [0x10f49000], esi */
  w32((uint32_t)(0x10f49000), (ESI));
  /* 10f24bc3 mov dword ptr [0x10f49100], 0x20 */
  w32((uint32_t)(0x10f49100), (0x20u));
  /* 10f24bcd lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10f24bd3:;
  /* 10f24bd3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24bd5 jae 0x10f24bf5 */
  if (!C.cf) goto L_10f24bf5;
  /* 10f24bd7 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10f24bdb or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10f24bde and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10f24be2 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10f24be6 mov eax, dword ptr [0x10f49000] */
  EAX = (r32((uint32_t)(0x10f49000)));
  /* 10f24beb add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24bee add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24bf3 jmp 0x10f24bd3 */
  goto L_10f24bd3;
L_10f24bf5:;
  /* 10f24bf5 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10f24bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10f24bf9 call dword ptr [0x10f2d0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0a0))), 0x10f24bffu);
  /* 10f24bff cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f24c04 je 0x10f24cdb */
  if (C.zf) goto L_10f24cdb;
  /* 10f24c0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f24c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24c0f je 0x10f24cdb */
  if (C.zf) goto L_10f24cdb;
  /* 10f24c15 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10f24c17 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10f24c1a lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10f24c1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f24c20 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10f24c25 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24c27 jl 0x10f24c2b */
  if ((C.sf!=C.of)) goto L_10f24c2b;
  /* 10f24c29 mov edi, eax */
  EDI = (EAX);
L_10f24c2b:;
  /* 10f24c2b cmp dword ptr [0x10f49100], edi */
  { uint32_t _a=(r32((uint32_t)(0x10f49100))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24c31 jge 0x10f24c89 */
  if ((C.sf==C.of)) goto L_10f24c89;
  /* 10f24c33 mov esi, 0x10f49004 */
  ESI = (0x10f49004u);
L_10f24c38:;
  /* 10f24c38 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f24c3d call 0x10f248d5 */
  push32(0x10f24c42u); f_10f248d5();
  /* 10f24c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24c44 pop ecx */
  ECX = (pop32());
  /* 10f24c45 je 0x10f24c83 */
  if (C.zf) goto L_10f24c83;
  /* 10f24c47 add dword ptr [0x10f49100], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10f49100))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10f49100), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f24c4e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f24c50 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10f24c56:;
  /* 10f24c56 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24c58 jae 0x10f24c76 */
  if (!C.cf) goto L_10f24c76;
  /* 10f24c5a and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10f24c5e or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f24c61 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10f24c65 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10f24c69 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10f24c6b add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24c6e add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24c74 jmp 0x10f24c56 */
  goto L_10f24c56;
L_10f24c76:;
  /* 10f24c76 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24c79 cmp dword ptr [0x10f49100], edi */
  { uint32_t _a=(r32((uint32_t)(0x10f49100))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24c7f jl 0x10f24c38 */
  if ((C.sf!=C.of)) goto L_10f24c38;
  /* 10f24c81 jmp 0x10f24c89 */
  goto L_10f24c89;
L_10f24c83:;
  /* 10f24c83 mov edi, dword ptr [0x10f49100] */
  EDI = (r32((uint32_t)(0x10f49100)));
L_10f24c89:;
  /* 10f24c89 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f24c8b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f24c8d jle 0x10f24cdb */
  if ((C.zf||C.sf!=C.of)) goto L_10f24cdb;
L_10f24c8f:;
  /* 10f24c8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f24c92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f24c94 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24c97 je 0x10f24cd1 */
  if (C.zf) goto L_10f24cd1;
  /* 10f24c99 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10f24c9b test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10f24c9d je 0x10f24cd1 */
  if (C.zf) goto L_10f24cd1;
  /* 10f24c9f test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10f24ca1 jne 0x10f24cae */
  if (!C.zf) goto L_10f24cae;
  /* 10f24ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24ca4 call dword ptr [0x10f2d0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0a4))), 0x10f24caau);
  /* 10f24caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24cac je 0x10f24cd1 */
  if (C.zf) goto L_10f24cd1;
L_10f24cae:;
  /* 10f24cae mov ecx, esi */
  ECX = (ESI);
  /* 10f24cb0 mov eax, esi */
  EAX = (ESI);
  /* 10f24cb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f24cb5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f24cb8 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f24cbf lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f24cc2 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10f24cc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f24cc8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10f24cca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f24ccc mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10f24cce mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10f24cd1:;
  /* 10f24cd1 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f24cd5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f24cd6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f24cd7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24cd9 jl 0x10f24c8f */
  if ((C.sf!=C.of)) goto L_10f24c8f;
L_10f24cdb:;
  /* 10f24cdb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10f24cdd:;
  /* 10f24cdd mov ecx, dword ptr [0x10f49000] */
  ECX = (r32((uint32_t)(0x10f49000)));
  /* 10f24ce3 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10f24ce6 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24cea lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10f24ced jne 0x10f24d3c */
  if (!C.zf) goto L_10f24d3c;
  /* 10f24cef test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f24cf1 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10f24cf5 jne 0x10f24cfc */
  if (!C.zf) goto L_10f24cfc;
  /* 10f24cf7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10f24cf9 pop eax */
  EAX = (pop32());
  /* 10f24cfa jmp 0x10f24d06 */
  goto L_10f24d06;
L_10f24cfc:;
  /* 10f24cfc mov eax, ebx */
  EAX = (EBX);
  /* 10f24cfe dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f24cff neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f24d01 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f24d03 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f24d06:;
  /* 10f24d06 push eax */
  push32((uint32_t)(EAX));
  /* 10f24d07 call dword ptr [0x10f2d0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0a8))), 0x10f24d0du);
  /* 10f24d0d mov edi, eax */
  EDI = (EAX);
  /* 10f24d0f cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d12 je 0x10f24d2b */
  if (C.zf) goto L_10f24d2b;
  /* 10f24d14 push edi */
  push32((uint32_t)(EDI));
  /* 10f24d15 call dword ptr [0x10f2d0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0a4))), 0x10f24d1bu);
  /* 10f24d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24d1d je 0x10f24d2b */
  if (C.zf) goto L_10f24d2b;
  /* 10f24d1f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f24d24 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10f24d26 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d29 jne 0x10f24d31 */
  if (!C.zf) goto L_10f24d31;
L_10f24d2b:;
  /* 10f24d2b or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10f24d2f jmp 0x10f24d40 */
  goto L_10f24d40;
L_10f24d31:;
  /* 10f24d31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d34 jne 0x10f24d40 */
  if (!C.zf) goto L_10f24d40;
  /* 10f24d36 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10f24d3a jmp 0x10f24d40 */
  goto L_10f24d40;
L_10f24d3c:;
  /* 10f24d3c or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10f24d40:;
  /* 10f24d40 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f24d41 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d44 jl 0x10f24cdd */
  if ((C.sf!=C.of)) goto L_10f24cdd;
  /* 10f24d46 push dword ptr [0x10f49100] */
  push32((uint32_t)(r32((uint32_t)(0x10f49100))));
  /* 10f24d4c call dword ptr [0x10f2d0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0ac))), 0x10f24d52u);
  /* 10f24d52 pop edi */
  EDI = (pop32());
  /* 10f24d53 pop esi */
  ESI = (pop32());
  /* 10f24d54 pop ebx */
  EBX = (pop32());
  /* 10f24d55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f24d56 ret  */
  ESPCHK(0x10f24b9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d57 @ 0x10f24d57 (84 bytes, 33 insns) */
void f_10f24d57(void) {
  FTRACE(0x10f24d57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24d57 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24d58 push esi */
  push32((uint32_t)(ESI));
  /* 10f24d59 push edi */
  push32((uint32_t)(EDI));
  /* 10f24d5a mov esi, 0x10f49000 */
  ESI = (0x10f49000u);
L_10f24d5f:;
  /* 10f24d5f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f24d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f24d63 je 0x10f24d9c */
  if (C.zf) goto L_10f24d9c;
  /* 10f24d65 mov edi, eax */
  EDI = (EAX);
  /* 10f24d67 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24d6c cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d6e jae 0x10f24d91 */
  if (!C.cf) goto L_10f24d91;
  /* 10f24d70 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10f24d73:;
  /* 10f24d73 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d77 je 0x10f24d80 */
  if (C.zf) goto L_10f24d80;
  /* 10f24d79 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24d7a call dword ptr [0x10f2d09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d09c))), 0x10f24d80u);
L_10f24d80:;
  /* 10f24d80 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f24d82 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24d85 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24d8a add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24d8d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24d8f jb 0x10f24d73 */
  if (C.cf) goto L_10f24d73;
L_10f24d91:;
  /* 10f24d91 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f24d93 call 0x10f23e12 */
  push32(0x10f24d98u); f_10f23e12();
  /* 10f24d98 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10f24d9b pop ecx */
  ECX = (pop32());
L_10f24d9c:;
  /* 10f24d9c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24d9f cmp esi, 0x10f49100 */
  { uint32_t _a=(ESI),_b=(0x10f49100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24da5 jl 0x10f24d5f */
  if ((C.sf!=C.of)) goto L_10f24d5f;
  /* 10f24da7 pop edi */
  EDI = (pop32());
  /* 10f24da8 pop esi */
  ESI = (pop32());
  /* 10f24da9 pop ebx */
  EBX = (pop32());
  /* 10f24daa ret  */
  ESPCHK(0x10f24d57u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dab @ 0x10f24dab (185 bytes, 71 insns) */
void f_10f24dab(void) {
  FTRACE(0x10f24dabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24dab push ebx */
  push32((uint32_t)(EBX));
  /* 10f24dac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f24dae cmp dword ptr [0x10f49108], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f49108))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24db4 push esi */
  push32((uint32_t)(ESI));
  /* 10f24db5 push edi */
  push32((uint32_t)(EDI));
  /* 10f24db6 jne 0x10f24dbd */
  if (!C.zf) goto L_10f24dbd;
  /* 10f24db8 call 0x10f285fd */
  push32(0x10f24dbdu); f_10f285fd();
L_10f24dbd:;
  /* 10f24dbd mov esi, dword ptr [0x10f479c0] */
  ESI = (r32((uint32_t)(0x10f479c0)));
  /* 10f24dc3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10f24dc5:;
  /* 10f24dc5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f24dc7 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24dc9 je 0x10f24ddd */
  if (C.zf) goto L_10f24ddd;
  /* 10f24dcb cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24dcd je 0x10f24dd0 */
  if (C.zf) goto L_10f24dd0;
  /* 10f24dcf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10f24dd0:;
  /* 10f24dd0 push esi */
  push32((uint32_t)(ESI));
  /* 10f24dd1 call 0x10f27800 */
  push32(0x10f24dd6u); f_10f27800();
  /* 10f24dd6 pop ecx */
  ECX = (pop32());
  /* 10f24dd7 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10f24ddb jmp 0x10f24dc5 */
  goto L_10f24dc5;
L_10f24ddd:;
  /* 10f24ddd lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10f24de4 push eax */
  push32((uint32_t)(EAX));
  /* 10f24de5 call 0x10f248d5 */
  push32(0x10f24deau); f_10f248d5();
  /* 10f24dea mov esi, eax */
  ESI = (EAX);
  /* 10f24dec pop ecx */
  ECX = (pop32());
  /* 10f24ded cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24def mov dword ptr [0x10f479f0], esi */
  w32((uint32_t)(0x10f479f0), (ESI));
  /* 10f24df5 jne 0x10f24dff */
  if (!C.zf) goto L_10f24dff;
  /* 10f24df7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24df9 call 0x10f23ddf */
  push32(0x10f24dfeu); f_10f23ddf();
  /* 10f24dfe pop ecx */
  ECX = (pop32());
L_10f24dff:;
  /* 10f24dff mov edi, dword ptr [0x10f479c0] */
  EDI = (r32((uint32_t)(0x10f479c0)));
  /* 10f24e05 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24e07 je 0x10f24e42 */
  if (C.zf) goto L_10f24e42;
  /* 10f24e09 push ebp */
  push32((uint32_t)(EBP));
L_10f24e0a:;
  /* 10f24e0a push edi */
  push32((uint32_t)(EDI));
  /* 10f24e0b call 0x10f27800 */
  push32(0x10f24e10u); f_10f27800();
  /* 10f24e10 mov ebp, eax */
  EBP = (EAX);
  /* 10f24e12 pop ecx */
  ECX = (pop32());
  /* 10f24e13 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10f24e14 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24e17 je 0x10f24e3b */
  if (C.zf) goto L_10f24e3b;
  /* 10f24e19 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24e1a call 0x10f248d5 */
  push32(0x10f24e1fu); f_10f248d5();
  /* 10f24e1f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24e21 pop ecx */
  ECX = (pop32());
  /* 10f24e22 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f24e24 jne 0x10f24e2e */
  if (!C.zf) goto L_10f24e2e;
  /* 10f24e26 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f24e28 call 0x10f23ddf */
  push32(0x10f24e2du); f_10f23ddf();
  /* 10f24e2d pop ecx */
  ECX = (pop32());
L_10f24e2e:;
  /* 10f24e2e push edi */
  push32((uint32_t)(EDI));
  /* 10f24e2f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f24e31 call 0x10f27370 */
  push32(0x10f24e36u); f_10f27370();
  /* 10f24e36 pop ecx */
  ECX = (pop32());
  /* 10f24e37 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24e3a pop ecx */
  ECX = (pop32());
L_10f24e3b:;
  /* 10f24e3b add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24e3d cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24e3f jne 0x10f24e0a */
  if (!C.zf) goto L_10f24e0a;
  /* 10f24e41 pop ebp */
  EBP = (pop32());
L_10f24e42:;
  /* 10f24e42 push dword ptr [0x10f479c0] */
  push32((uint32_t)(r32((uint32_t)(0x10f479c0))));
  /* 10f24e48 call 0x10f23e12 */
  push32(0x10f24e4du); f_10f23e12();
  /* 10f24e4d pop ecx */
  ECX = (pop32());
  /* 10f24e4e mov dword ptr [0x10f479c0], ebx */
  w32((uint32_t)(0x10f479c0), (EBX));
  /* 10f24e54 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10f24e56 pop edi */
  EDI = (pop32());
  /* 10f24e57 pop esi */
  ESI = (pop32());
  /* 10f24e58 mov dword ptr [0x10f49104], 1 */
  w32((uint32_t)(0x10f49104), (0x1u));
  /* 10f24e62 pop ebx */
  EBX = (pop32());
  /* 10f24e63 ret  */
  ESPCHK(0x10f24dabu, _esp0);
  ESP += 4; return;
}

