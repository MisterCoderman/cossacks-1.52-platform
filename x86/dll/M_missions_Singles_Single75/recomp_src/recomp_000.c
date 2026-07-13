#include "recomp.h"

/* FUN_10001000 @ 0x11c91000 (20 bytes, 6 insns) */
void f_11c91000(void) {
  FTRACE(0x11c91000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c91004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c91005 jne 0x11c9100c */
  if (!C.zf) goto L_11c9100c;
  /* 11c91007 call 0x11c91320 */
  push32(0x11c9100cu); f_11c91320();
L_11c9100c:;
  /* 11c9100c mov eax, 1 */
  EAX = (0x1u);
  /* 11c91011 ret 0xc */
  ESPCHK(0x11c91000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x11c91020 (72 bytes, 27 insns) */
void f_11c91020(void) {
  FTRACE(0x11c91020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91020 push esi */
  push32((uint32_t)(ESI));
  /* 11c91021 mov esi, dword ptr [0x11c97174] */
  ESI = (r32((uint32_t)(0x11c97174)));
  /* 11c91027 push 0x11c9b068 */
  push32((uint32_t)(0x11c9b068u));
  /* 11c9102c call esi */
  call_ind((uint32_t)(ESI), 0x11c9102eu);
  /* 11c9102e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91033 jne 0x11c9103c */
  if (!C.zf) goto L_11c9103c;
  /* 11c91035 mov eax, 0x11c9b068 */
  EAX = (0x11c9b068u);
  /* 11c9103a pop esi */
  ESI = (pop32());
  /* 11c9103b ret  */
  ESPCHK(0x11c91020u, _esp0);
  ESP += 4; return;
L_11c9103c:;
  /* 11c9103c push 0x11c9b158 */
  push32((uint32_t)(0x11c9b158u));
  /* 11c91041 call esi */
  call_ind((uint32_t)(ESI), 0x11c91043u);
  /* 11c91043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91048 jne 0x11c91051 */
  if (!C.zf) goto L_11c91051;
  /* 11c9104a mov eax, 0x11c9b158 */
  EAX = (0x11c9b158u);
  /* 11c9104f pop esi */
  ESI = (pop32());
  /* 11c91050 ret  */
  ESPCHK(0x11c91020u, _esp0);
  ESP += 4; return;
L_11c91051:;
  /* 11c91051 push 0x11c9b150 */
  push32((uint32_t)(0x11c9b150u));
  /* 11c91056 call esi */
  call_ind((uint32_t)(ESI), 0x11c91058u);
  /* 11c91058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9105b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c9105d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9105f pop esi */
  ESI = (pop32());
  /* 11c91060 not eax */
  EAX = (~(EAX));
  /* 11c91062 and eax, 0x11c9b150 */
  { uint32_t _r=(EAX)&(0x11c9b150u); EAX = (_r); fl_logic(_r,32); }
  /* 11c91067 ret  */
  ESPCHK(0x11c91020u, _esp0);
  ESP += 4; return;
}

/* FUN_10001070 @ 0x11c91070 (72 bytes, 27 insns) */
void f_11c91070(void) {
  FTRACE(0x11c91070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91070 push esi */
  push32((uint32_t)(ESI));
  /* 11c91071 mov esi, dword ptr [0x11c97174] */
  ESI = (r32((uint32_t)(0x11c97174)));
  /* 11c91077 push 0x11c9b070 */
  push32((uint32_t)(0x11c9b070u));
  /* 11c9107c call esi */
  call_ind((uint32_t)(ESI), 0x11c9107eu);
  /* 11c9107e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91083 jne 0x11c9108c */
  if (!C.zf) goto L_11c9108c;
  /* 11c91085 mov eax, 0x11c9b070 */
  EAX = (0x11c9b070u);
  /* 11c9108a pop esi */
  ESI = (pop32());
  /* 11c9108b ret  */
  ESPCHK(0x11c91070u, _esp0);
  ESP += 4; return;
L_11c9108c:;
  /* 11c9108c push 0x11c9b210 */
  push32((uint32_t)(0x11c9b210u));
  /* 11c91091 call esi */
  call_ind((uint32_t)(ESI), 0x11c91093u);
  /* 11c91093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91098 jne 0x11c910a1 */
  if (!C.zf) goto L_11c910a1;
  /* 11c9109a mov eax, 0x11c9b210 */
  EAX = (0x11c9b210u);
  /* 11c9109f pop esi */
  ESI = (pop32());
  /* 11c910a0 ret  */
  ESPCHK(0x11c91070u, _esp0);
  ESP += 4; return;
L_11c910a1:;
  /* 11c910a1 push 0x11c9b220 */
  push32((uint32_t)(0x11c9b220u));
  /* 11c910a6 call esi */
  call_ind((uint32_t)(ESI), 0x11c910a8u);
  /* 11c910a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c910ab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c910ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c910af pop esi */
  ESI = (pop32());
  /* 11c910b0 not eax */
  EAX = (~(EAX));
  /* 11c910b2 and eax, 0x11c9b220 */
  { uint32_t _r=(EAX)&(0x11c9b220u); EAX = (_r); fl_logic(_r,32); }
  /* 11c910b7 ret  */
  ESPCHK(0x11c91070u, _esp0);
  ESP += 4; return;
}

/* FUN_100010c0 @ 0x11c910c0 (28 bytes, 11 insns) */
void f_11c910c0(void) {
  FTRACE(0x11c910c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c910c0 push esi */
  push32((uint32_t)(ESI));
  /* 11c910c1 mov esi, ecx */
  ESI = (ECX);
  /* 11c910c3 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c910c6 push eax */
  push32((uint32_t)(EAX));
  /* 11c910c7 call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c910cdu);
  /* 11c910cd mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c910d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c910d4 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c910d6 mov eax, esi */
  EAX = (ESI);
  /* 11c910d8 pop esi */
  ESI = (pop32());
  /* 11c910d9 ret 4 */
  ESPCHK(0x11c910c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100010e0 @ 0x11c910e0 (31 bytes, 13 insns) */
void f_11c910e0(void) {
  FTRACE(0x11c910e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c910e0 push esi */
  push32((uint32_t)(ESI));
  /* 11c910e1 mov esi, ecx */
  ESI = (ECX);
  /* 11c910e3 cmp dword ptr [esi + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c910e7 je 0x11c910fd */
  if (C.zf) goto L_11c910fd;
  /* 11c910e9 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c910ec push eax */
  push32((uint32_t)(EAX));
  /* 11c910ed call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c910f3u);
  /* 11c910f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c910f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c910f8 jne 0x11c910fd */
  if (!C.zf) goto L_11c910fd;
  /* 11c910fa mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_11c910fd:;
  /* 11c910fd pop esi */
  ESI = (pop32());
  /* 11c910fe ret  */
  ESPCHK(0x11c910e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001100 @ 0x11c91100 (49 bytes, 16 insns) */
void f_11c91100(void) {
  FTRACE(0x11c91100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91100 push esi */
  push32((uint32_t)(ESI));
  /* 11c91101 mov esi, ecx */
  ESI = (ECX);
  /* 11c91103 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c91106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91108 jne 0x11c9112d */
  if (!C.zf) goto L_11c9112d;
  /* 11c9110a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c9110e lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c91111 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11c91116 push eax */
  push32((uint32_t)(EAX));
  /* 11c91117 push 0x11c9b148 */
  push32((uint32_t)(0x11c9b148u));
  /* 11c9111c push ecx */
  push32((uint32_t)(ECX));
  /* 11c9111d call dword ptr [0x11c9716c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9716c))), 0x11c91123u);
  /* 11c91123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91126 mov dword ptr [esi + 0xc], 1 */
  w32((uint32_t)(ESI + 0xc), (0x1u));
L_11c9112d:;
  /* 11c9112d pop esi */
  ESI = (pop32());
  /* 11c9112e ret 4 */
  ESPCHK(0x11c91100u, _esp0);
  ESP += 8; return;
}

/* FUN_10001140 @ 0x11c91140 (74 bytes, 28 insns) */
void f_11c91140(void) {
  FTRACE(0x11c91140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91140 push esi */
  push32((uint32_t)(ESI));
  /* 11c91141 mov esi, ecx */
  ESI = (ECX);
  /* 11c91143 push edi */
  push32((uint32_t)(EDI));
  /* 11c91144 cmp dword ptr [esi + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c91148 jne 0x11c91185 */
  if (!C.zf) goto L_11c91185;
  /* 11c9114a mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c9114e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11c91151 push edi */
  push32((uint32_t)(EDI));
  /* 11c91152 push eax */
  push32((uint32_t)(EAX));
  /* 11c91153 call dword ptr [0x11c97160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97160))), 0x11c91159u);
  /* 11c91159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9115c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9115e je 0x11c91185 */
  if (C.zf) goto L_11c91185;
  /* 11c91160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91162 push edi */
  push32((uint32_t)(EDI));
  /* 11c91163 call dword ptr [0x11c97164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97164))), 0x11c91169u);
  /* 11c91169 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c9116d mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c9116f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91173 push ecx */
  push32((uint32_t)(ECX));
  /* 11c91174 push edx */
  push32((uint32_t)(EDX));
  /* 11c91175 call dword ptr [0x11c97168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97168))), 0x11c9117bu);
  /* 11c9117b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9117e mov dword ptr [esi + 0xc], 2 */
  w32((uint32_t)(ESI + 0xc), (0x2u));
L_11c91185:;
  /* 11c91185 pop edi */
  EDI = (pop32());
  /* 11c91186 pop esi */
  ESI = (pop32());
  /* 11c91187 ret 8 */
  ESPCHK(0x11c91140u, _esp0);
  ESP += 12; return;
}

/* FUN_10001190 @ 0x11c91190 (72 bytes, 27 insns) */
void f_11c91190(void) {
  FTRACE(0x11c91190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91190 push esi */
  push32((uint32_t)(ESI));
  /* 11c91191 mov esi, ecx */
  ESI = (ECX);
  /* 11c91193 push edi */
  push32((uint32_t)(EDI));
  /* 11c91194 cmp dword ptr [esi + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c91198 jne 0x11c911d3 */
  if (!C.zf) goto L_11c911d3;
  /* 11c9119a mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c9119e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11c911a1 push edi */
  push32((uint32_t)(EDI));
  /* 11c911a2 push eax */
  push32((uint32_t)(EAX));
  /* 11c911a3 call dword ptr [0x11c97160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97160))), 0x11c911a9u);
  /* 11c911a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c911ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c911ae je 0x11c911d3 */
  if (C.zf) goto L_11c911d3;
  /* 11c911b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c911b2 push edi */
  push32((uint32_t)(EDI));
  /* 11c911b3 call dword ptr [0x11c97164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97164))), 0x11c911b9u);
  /* 11c911b9 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c911bd mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c911bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c911c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11c911c2 push edx */
  push32((uint32_t)(EDX));
  /* 11c911c3 call dword ptr [0x11c9715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9715c))), 0x11c911c9u);
  /* 11c911c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c911cc mov dword ptr [esi + 0xc], 3 */
  w32((uint32_t)(ESI + 0xc), (0x3u));
L_11c911d3:;
  /* 11c911d3 pop edi */
  EDI = (pop32());
  /* 11c911d4 pop esi */
  ESI = (pop32());
  /* 11c911d5 ret 8 */
  ESPCHK(0x11c91190u, _esp0);
  ESP += 12; return;
}

/* FUN_100011e0 @ 0x11c911e0 (56 bytes, 22 insns) */
void f_11c911e0(void) {
  FTRACE(0x11c911e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c911e0 push esi */
  push32((uint32_t)(ESI));
  /* 11c911e1 push edi */
  push32((uint32_t)(EDI));
  /* 11c911e2 mov esi, ecx */
  ESI = (ECX);
  /* 11c911e4 call 0x11c910e0 */
  push32(0x11c911e9u); f_11c910e0();
  /* 11c911e9 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c911ed mov ecx, esi */
  ECX = (ESI);
  /* 11c911ef push eax */
  push32((uint32_t)(EAX));
  /* 11c911f0 call 0x11c91100 */
  push32(0x11c911f5u); f_11c91100();
  /* 11c911f5 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11c911f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c911fd push edi */
  push32((uint32_t)(EDI));
  /* 11c911fe push ecx */
  push32((uint32_t)(ECX));
  /* 11c911ff mov ecx, esi */
  ECX = (ESI);
  /* 11c91201 call 0x11c91140 */
  push32(0x11c91206u); f_11c91140();
  /* 11c91206 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c9120a mov ecx, esi */
  ECX = (ESI);
  /* 11c9120c push edx */
  push32((uint32_t)(EDX));
  /* 11c9120d push edi */
  push32((uint32_t)(EDI));
  /* 11c9120e call 0x11c91190 */
  push32(0x11c91213u); f_11c91190();
  /* 11c91213 pop edi */
  EDI = (pop32());
  /* 11c91214 pop esi */
  ESI = (pop32());
  /* 11c91215 ret 0x10 */
  ESPCHK(0x11c911e0u, _esp0);
  ESP += 20; return;
}

/* OnInit @ 0x11c91320 (1310 bytes, 347 insns) */
void f_11c91320(void) {
  FTRACE(0x11c91320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91320 push ebx */
  push32((uint32_t)(EBX));
  /* 11c91321 push ebp */
  push32((uint32_t)(EBP));
  /* 11c91322 push esi */
  push32((uint32_t)(ESI));
  /* 11c91323 mov esi, dword ptr [0x11c97140] */
  ESI = (r32((uint32_t)(0x11c97140)));
  /* 11c91329 push edi */
  push32((uint32_t)(EDI));
  /* 11c9132a push 0x11c98420 */
  push32((uint32_t)(0x11c98420u));
  /* 11c9132f push 0x11c9ae88 */
  push32((uint32_t)(0x11c9ae88u));
  /* 11c91334 call esi */
  call_ind((uint32_t)(ESI), 0x11c91336u);
  /* 11c91336 push 0x11c98418 */
  push32((uint32_t)(0x11c98418u));
  /* 11c9133b push 0x11c9ae90 */
  push32((uint32_t)(0x11c9ae90u));
  /* 11c91340 call esi */
  call_ind((uint32_t)(ESI), 0x11c91342u);
  /* 11c91342 push 0x11c98410 */
  push32((uint32_t)(0x11c98410u));
  /* 11c91347 push 0x11c9ae98 */
  push32((uint32_t)(0x11c9ae98u));
  /* 11c9134c call esi */
  call_ind((uint32_t)(ESI), 0x11c9134eu);
  /* 11c9134e push 0x11c98404 */
  push32((uint32_t)(0x11c98404u));
  /* 11c91353 push 0x11c9afc8 */
  push32((uint32_t)(0x11c9afc8u));
  /* 11c91358 call esi */
  call_ind((uint32_t)(ESI), 0x11c9135au);
  /* 11c9135a push 0x11c983fc */
  push32((uint32_t)(0x11c983fcu));
  /* 11c9135f push 0x11c9b208 */
  push32((uint32_t)(0x11c9b208u));
  /* 11c91364 call esi */
  call_ind((uint32_t)(ESI), 0x11c91366u);
  /* 11c91366 mov ebp, dword ptr [0x11c97144] */
  EBP = (r32((uint32_t)(0x11c97144)));
  /* 11c9136c push 0x11c983ec */
  push32((uint32_t)(0x11c983ecu));
  /* 11c91371 push 0x11c9b138 */
  push32((uint32_t)(0x11c9b138u));
  /* 11c91376 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91378u);
  /* 11c91378 push 0x11c983d8 */
  push32((uint32_t)(0x11c983d8u));
  /* 11c9137d push 0x11c9b008 */
  push32((uint32_t)(0x11c9b008u));
  /* 11c91382 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91384u);
  /* 11c91384 push 0x11c983cc */
  push32((uint32_t)(0x11c983ccu));
  /* 11c91389 push 0x11c9b130 */
  push32((uint32_t)(0x11c9b130u));
  /* 11c9138e call ebp */
  call_ind((uint32_t)(EBP), 0x11c91390u);
  /* 11c91390 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91393 push 0x11c983bc */
  push32((uint32_t)(0x11c983bcu));
  /* 11c91398 push 0x11c9b018 */
  push32((uint32_t)(0x11c9b018u));
  /* 11c9139d call ebp */
  call_ind((uint32_t)(EBP), 0x11c9139fu);
  /* 11c9139f push 0x11c983b0 */
  push32((uint32_t)(0x11c983b0u));
  /* 11c913a4 push 0x11c9b190 */
  push32((uint32_t)(0x11c9b190u));
  /* 11c913a9 call ebp */
  call_ind((uint32_t)(EBP), 0x11c913abu);
  /* 11c913ab push 0x11c983a0 */
  push32((uint32_t)(0x11c983a0u));
  /* 11c913b0 push 0x11c9b0f0 */
  push32((uint32_t)(0x11c9b0f0u));
  /* 11c913b5 call esi */
  call_ind((uint32_t)(ESI), 0x11c913b7u);
  /* 11c913b7 push 0x11c98398 */
  push32((uint32_t)(0x11c98398u));
  /* 11c913bc push 0x11c9aed8 */
  push32((uint32_t)(0x11c9aed8u));
  /* 11c913c1 call esi */
  call_ind((uint32_t)(ESI), 0x11c913c3u);
  /* 11c913c3 push 0x11c9838c */
  push32((uint32_t)(0x11c9838cu));
  /* 11c913c8 push 0x11c9af38 */
  push32((uint32_t)(0x11c9af38u));
  /* 11c913cd call ebp */
  call_ind((uint32_t)(EBP), 0x11c913cfu);
  /* 11c913cf push 0x11c98384 */
  push32((uint32_t)(0x11c98384u));
  /* 11c913d4 push 0x11c9b1a0 */
  push32((uint32_t)(0x11c9b1a0u));
  /* 11c913d9 call esi */
  call_ind((uint32_t)(ESI), 0x11c913dbu);
  /* 11c913db push 0x11c9837c */
  push32((uint32_t)(0x11c9837cu));
  /* 11c913e0 push 0x11c9aef8 */
  push32((uint32_t)(0x11c9aef8u));
  /* 11c913e5 call esi */
  call_ind((uint32_t)(ESI), 0x11c913e7u);
  /* 11c913e7 push 0x11c98374 */
  push32((uint32_t)(0x11c98374u));
  /* 11c913ec push 0x11c9afe0 */
  push32((uint32_t)(0x11c9afe0u));
  /* 11c913f1 call esi */
  call_ind((uint32_t)(ESI), 0x11c913f3u);
  /* 11c913f3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c913f6 push 0x11c9836c */
  push32((uint32_t)(0x11c9836cu));
  /* 11c913fb push 0x11c9b1b0 */
  push32((uint32_t)(0x11c9b1b0u));
  /* 11c91400 call esi */
  call_ind((uint32_t)(ESI), 0x11c91402u);
  /* 11c91402 push 0x11c98364 */
  push32((uint32_t)(0x11c98364u));
  /* 11c91407 push 0x11c9af00 */
  push32((uint32_t)(0x11c9af00u));
  /* 11c9140c call esi */
  call_ind((uint32_t)(ESI), 0x11c9140eu);
  /* 11c9140e push 0x11c9835c */
  push32((uint32_t)(0x11c9835cu));
  /* 11c91413 push 0x11c9b118 */
  push32((uint32_t)(0x11c9b118u));
  /* 11c91418 call esi */
  call_ind((uint32_t)(ESI), 0x11c9141au);
  /* 11c9141a push 0x11c98354 */
  push32((uint32_t)(0x11c98354u));
  /* 11c9141f push 0x11c9b1a8 */
  push32((uint32_t)(0x11c9b1a8u));
  /* 11c91424 call esi */
  call_ind((uint32_t)(ESI), 0x11c91426u);
  /* 11c91426 push 0x11c9834c */
  push32((uint32_t)(0x11c9834cu));
  /* 11c9142b push 0x11c9aee8 */
  push32((uint32_t)(0x11c9aee8u));
  /* 11c91430 call esi */
  call_ind((uint32_t)(ESI), 0x11c91432u);
  /* 11c91432 push 0x11c98344 */
  push32((uint32_t)(0x11c98344u));
  /* 11c91437 push 0x11c9b188 */
  push32((uint32_t)(0x11c9b188u));
  /* 11c9143c call esi */
  call_ind((uint32_t)(ESI), 0x11c9143eu);
  /* 11c9143e push 0x11c9833c */
  push32((uint32_t)(0x11c9833cu));
  /* 11c91443 push 0x11c9b1d0 */
  push32((uint32_t)(0x11c9b1d0u));
  /* 11c91448 call esi */
  call_ind((uint32_t)(ESI), 0x11c9144au);
  /* 11c9144a push 0x11c98334 */
  push32((uint32_t)(0x11c98334u));
  /* 11c9144f push 0x11c9aef0 */
  push32((uint32_t)(0x11c9aef0u));
  /* 11c91454 call esi */
  call_ind((uint32_t)(ESI), 0x11c91456u);
  /* 11c91456 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91459 push 0x11c9832c */
  push32((uint32_t)(0x11c9832cu));
  /* 11c9145e push 0x11c9b1c0 */
  push32((uint32_t)(0x11c9b1c0u));
  /* 11c91463 call esi */
  call_ind((uint32_t)(ESI), 0x11c91465u);
  /* 11c91465 push 0x11c98324 */
  push32((uint32_t)(0x11c98324u));
  /* 11c9146a push 0x11c9af28 */
  push32((uint32_t)(0x11c9af28u));
  /* 11c9146f call esi */
  call_ind((uint32_t)(ESI), 0x11c91471u);
  /* 11c91471 push 0x11c9831c */
  push32((uint32_t)(0x11c9831cu));
  /* 11c91476 push 0x11c9b1e8 */
  push32((uint32_t)(0x11c9b1e8u));
  /* 11c9147b call esi */
  call_ind((uint32_t)(ESI), 0x11c9147du);
  /* 11c9147d push 0x11c98314 */
  push32((uint32_t)(0x11c98314u));
  /* 11c91482 push 0x11c9af30 */
  push32((uint32_t)(0x11c9af30u));
  /* 11c91487 call esi */
  call_ind((uint32_t)(ESI), 0x11c91489u);
  /* 11c91489 push 0x11c9830c */
  push32((uint32_t)(0x11c9830cu));
  /* 11c9148e push 0x11c9b1d8 */
  push32((uint32_t)(0x11c9b1d8u));
  /* 11c91493 call esi */
  call_ind((uint32_t)(ESI), 0x11c91495u);
  /* 11c91495 push 0x11c98304 */
  push32((uint32_t)(0x11c98304u));
  /* 11c9149a push 0x11c9af20 */
  push32((uint32_t)(0x11c9af20u));
  /* 11c9149f call esi */
  call_ind((uint32_t)(ESI), 0x11c914a1u);
  /* 11c914a1 push 0x11c982fc */
  push32((uint32_t)(0x11c982fcu));
  /* 11c914a6 push 0x11c9b1f8 */
  push32((uint32_t)(0x11c9b1f8u));
  /* 11c914ab call esi */
  call_ind((uint32_t)(ESI), 0x11c914adu);
  /* 11c914ad push 0x11c982f4 */
  push32((uint32_t)(0x11c982f4u));
  /* 11c914b2 push 0x11c9b1f0 */
  push32((uint32_t)(0x11c9b1f0u));
  /* 11c914b7 call esi */
  call_ind((uint32_t)(ESI), 0x11c914b9u);
  /* 11c914b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c914bc push 0x11c982ec */
  push32((uint32_t)(0x11c982ecu));
  /* 11c914c1 push 0x11c9b1c8 */
  push32((uint32_t)(0x11c9b1c8u));
  /* 11c914c6 call esi */
  call_ind((uint32_t)(ESI), 0x11c914c8u);
  /* 11c914c8 push 0x11c982e4 */
  push32((uint32_t)(0x11c982e4u));
  /* 11c914cd push 0x11c9b1b8 */
  push32((uint32_t)(0x11c9b1b8u));
  /* 11c914d2 call esi */
  call_ind((uint32_t)(ESI), 0x11c914d4u);
  /* 11c914d4 push 0x11c982dc */
  push32((uint32_t)(0x11c982dcu));
  /* 11c914d9 push 0x11c9b1e0 */
  push32((uint32_t)(0x11c9b1e0u));
  /* 11c914de call esi */
  call_ind((uint32_t)(ESI), 0x11c914e0u);
  /* 11c914e0 mov edi, dword ptr [0x11c97148] */
  EDI = (r32((uint32_t)(0x11c97148)));
  /* 11c914e6 push 0x11c982d4 */
  push32((uint32_t)(0x11c982d4u));
  /* 11c914eb push 0x11c9afa8 */
  push32((uint32_t)(0x11c9afa8u));
  /* 11c914f0 call edi */
  call_ind((uint32_t)(EDI), 0x11c914f2u);
  /* 11c914f2 mov ebx, dword ptr [0x11c9714c] */
  EBX = (r32((uint32_t)(0x11c9714c)));
  /* 11c914f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c914fa push 0x11c9af68 */
  push32((uint32_t)(0x11c9af68u));
  /* 11c914ff call ebx */
  call_ind((uint32_t)(EBX), 0x11c91501u);
  /* 11c91501 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91503 push 0x11c9af58 */
  push32((uint32_t)(0x11c9af58u));
  /* 11c91508 call ebx */
  call_ind((uint32_t)(EBX), 0x11c9150au);
  /* 11c9150a push 0x11c982c8 */
  push32((uint32_t)(0x11c982c8u));
  /* 11c9150f push 0x11c9b108 */
  push32((uint32_t)(0x11c9b108u));
  /* 11c91514 call esi */
  call_ind((uint32_t)(ESI), 0x11c91516u);
  /* 11c91516 push 0x11c982bc */
  push32((uint32_t)(0x11c982bcu));
  /* 11c9151b push 0x11c9aee0 */
  push32((uint32_t)(0x11c9aee0u));
  /* 11c91520 call esi */
  call_ind((uint32_t)(ESI), 0x11c91522u);
  /* 11c91522 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91525 push 0x11c982b4 */
  push32((uint32_t)(0x11c982b4u));
  /* 11c9152a push 0x11c9b128 */
  push32((uint32_t)(0x11c9b128u));
  /* 11c9152f call esi */
  call_ind((uint32_t)(ESI), 0x11c91531u);
  /* 11c91531 push 0x11c982ac */
  push32((uint32_t)(0x11c982acu));
  /* 11c91536 push 0x11c9b0c0 */
  push32((uint32_t)(0x11c9b0c0u));
  /* 11c9153b call edi */
  call_ind((uint32_t)(EDI), 0x11c9153du);
  /* 11c9153d push 0x11c982a0 */
  push32((uint32_t)(0x11c982a0u));
  /* 11c91542 push 0x11c9afa0 */
  push32((uint32_t)(0x11c9afa0u));
  /* 11c91547 call edi */
  call_ind((uint32_t)(EDI), 0x11c91549u);
  /* 11c91549 push 0x11c98294 */
  push32((uint32_t)(0x11c98294u));
  /* 11c9154e push 0x11c9b0c8 */
  push32((uint32_t)(0x11c9b0c8u));
  /* 11c91553 call edi */
  call_ind((uint32_t)(EDI), 0x11c91555u);
  /* 11c91555 push 0x11c98288 */
  push32((uint32_t)(0x11c98288u));
  /* 11c9155a push 0x11c9b110 */
  push32((uint32_t)(0x11c9b110u));
  /* 11c9155f call edi */
  call_ind((uint32_t)(EDI), 0x11c91561u);
  /* 11c91561 push 0x11c9827c */
  push32((uint32_t)(0x11c9827cu));
  /* 11c91566 push 0x11c9b160 */
  push32((uint32_t)(0x11c9b160u));
  /* 11c9156b call edi */
  call_ind((uint32_t)(EDI), 0x11c9156du);
  /* 11c9156d push 0x11c98270 */
  push32((uint32_t)(0x11c98270u));
  /* 11c91572 push 0x11c9af90 */
  push32((uint32_t)(0x11c9af90u));
  /* 11c91577 call edi */
  call_ind((uint32_t)(EDI), 0x11c91579u);
  /* 11c91579 push 0x11c98264 */
  push32((uint32_t)(0x11c98264u));
  /* 11c9157e push 0x11c9b180 */
  push32((uint32_t)(0x11c9b180u));
  /* 11c91583 call edi */
  call_ind((uint32_t)(EDI), 0x11c91585u);
  /* 11c91585 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91588 push 0x11c98258 */
  push32((uint32_t)(0x11c98258u));
  /* 11c9158d push 0x11c9b198 */
  push32((uint32_t)(0x11c9b198u));
  /* 11c91592 call edi */
  call_ind((uint32_t)(EDI), 0x11c91594u);
  /* 11c91594 push 0x11c98248 */
  push32((uint32_t)(0x11c98248u));
  /* 11c91599 push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c9159e call ebp */
  call_ind((uint32_t)(EBP), 0x11c915a0u);
  /* 11c915a0 push 0x11c98238 */
  push32((uint32_t)(0x11c98238u));
  /* 11c915a5 push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c915aa call ebp */
  call_ind((uint32_t)(EBP), 0x11c915acu);
  /* 11c915ac push 0x11c9b218 */
  push32((uint32_t)(0x11c9b218u));
  /* 11c915b1 call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915b7u);
  /* 11c915b7 push 0x11c9b200 */
  push32((uint32_t)(0x11c9b200u));
  /* 11c915bc call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915c2u);
  /* 11c915c2 push 0x11c9b070 */
  push32((uint32_t)(0x11c9b070u));
  /* 11c915c7 call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915cdu);
  /* 11c915cd push 0x11c9b068 */
  push32((uint32_t)(0x11c9b068u));
  /* 11c915d2 call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915d8u);
  /* 11c915d8 push 0x11c9b210 */
  push32((uint32_t)(0x11c9b210u));
  /* 11c915dd call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915e3u);
  /* 11c915e3 push 0x11c9b158 */
  push32((uint32_t)(0x11c9b158u));
  /* 11c915e8 call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915eeu);
  /* 11c915ee push 0x11c9b220 */
  push32((uint32_t)(0x11c9b220u));
  /* 11c915f3 call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c915f9u);
  /* 11c915f9 push 0x11c9b150 */
  push32((uint32_t)(0x11c9b150u));
  /* 11c915fe call dword ptr [0x11c97170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97170))), 0x11c91604u);
  /* 11c91604 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91606 push 0x11c9b218 */
  push32((uint32_t)(0x11c9b218u));
  /* 11c9160b call ebx */
  call_ind((uint32_t)(EBX), 0x11c9160du);
  /* 11c9160d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91610 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91612 push 0x11c9b200 */
  push32((uint32_t)(0x11c9b200u));
  /* 11c91617 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91619u);
  /* 11c91619 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c9161b push 0x11c9b070 */
  push32((uint32_t)(0x11c9b070u));
  /* 11c91620 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91622u);
  /* 11c91622 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91624 push 0x11c9b068 */
  push32((uint32_t)(0x11c9b068u));
  /* 11c91629 call ebx */
  call_ind((uint32_t)(EBX), 0x11c9162bu);
  /* 11c9162b push 8 */
  push32((uint32_t)(0x8u));
  /* 11c9162d push 0x11c9b010 */
  push32((uint32_t)(0x11c9b010u));
  /* 11c91632 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91634u);
  /* 11c91634 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91636 push 0x11c9b210 */
  push32((uint32_t)(0x11c9b210u));
  /* 11c9163b call ebx */
  call_ind((uint32_t)(EBX), 0x11c9163du);
  /* 11c9163d push 8 */
  push32((uint32_t)(0x8u));
  /* 11c9163f push 0x11c9b158 */
  push32((uint32_t)(0x11c9b158u));
  /* 11c91644 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91646u);
  /* 11c91646 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91648 push 0x11c9afd0 */
  push32((uint32_t)(0x11c9afd0u));
  /* 11c9164d call ebx */
  call_ind((uint32_t)(EBX), 0x11c9164fu);
  /* 11c9164f push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91651 push 0x11c9b220 */
  push32((uint32_t)(0x11c9b220u));
  /* 11c91656 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91658u);
  /* 11c91658 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9165b push 8 */
  push32((uint32_t)(0x8u));
  /* 11c9165d push 0x11c9b150 */
  push32((uint32_t)(0x11c9b150u));
  /* 11c91662 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91664u);
  /* 11c91664 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c91666 push 0x11c9afd8 */
  push32((uint32_t)(0x11c9afd8u));
  /* 11c9166b call ebx */
  call_ind((uint32_t)(EBX), 0x11c9166du);
  /* 11c9166d push 0x11c9822c */
  push32((uint32_t)(0x11c9822cu));
  /* 11c91672 push 0x11c9afb0 */
  push32((uint32_t)(0x11c9afb0u));
  /* 11c91677 call edi */
  call_ind((uint32_t)(EDI), 0x11c91679u);
  /* 11c91679 push 0x11c98220 */
  push32((uint32_t)(0x11c98220u));
  /* 11c9167e push 0x11c9afb8 */
  push32((uint32_t)(0x11c9afb8u));
  /* 11c91683 call edi */
  call_ind((uint32_t)(EDI), 0x11c91685u);
  /* 11c91685 push 0x11c98214 */
  push32((uint32_t)(0x11c98214u));
  /* 11c9168a push 0x11c9afc0 */
  push32((uint32_t)(0x11c9afc0u));
  /* 11c9168f call edi */
  call_ind((uint32_t)(EDI), 0x11c91691u);
  /* 11c91691 push 0x11c98208 */
  push32((uint32_t)(0x11c98208u));
  /* 11c91696 push 0x11c9b140 */
  push32((uint32_t)(0x11c9b140u));
  /* 11c9169b call esi */
  call_ind((uint32_t)(ESI), 0x11c9169du);
  /* 11c9169d push 0x11c981fc */
  push32((uint32_t)(0x11c981fcu));
  /* 11c916a2 push 0x11c9b0f8 */
  push32((uint32_t)(0x11c9b0f8u));
  /* 11c916a7 call esi */
  call_ind((uint32_t)(ESI), 0x11c916a9u);
  /* 11c916a9 push 0x11c981f0 */
  push32((uint32_t)(0x11c981f0u));
  /* 11c916ae push 0x11c9b100 */
  push32((uint32_t)(0x11c9b100u));
  /* 11c916b3 call esi */
  call_ind((uint32_t)(ESI), 0x11c916b5u);
  /* 11c916b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c916b8 push 0x11c981e4 */
  push32((uint32_t)(0x11c981e4u));
  /* 11c916bd push 0x11c9af50 */
  push32((uint32_t)(0x11c9af50u));
  /* 11c916c2 call esi */
  call_ind((uint32_t)(ESI), 0x11c916c4u);
  /* 11c916c4 push 0x11c981d8 */
  push32((uint32_t)(0x11c981d8u));
  /* 11c916c9 push 0x11c9b170 */
  push32((uint32_t)(0x11c9b170u));
  /* 11c916ce call esi */
  call_ind((uint32_t)(ESI), 0x11c916d0u);
  /* 11c916d0 push 0x11c981cc */
  push32((uint32_t)(0x11c981ccu));
  /* 11c916d5 push 0x11c9b168 */
  push32((uint32_t)(0x11c9b168u));
  /* 11c916da call esi */
  call_ind((uint32_t)(ESI), 0x11c916dcu);
  /* 11c916dc push 0x11c981c0 */
  push32((uint32_t)(0x11c981c0u));
  /* 11c916e1 push 0x11c9aea0 */
  push32((uint32_t)(0x11c9aea0u));
  /* 11c916e6 call esi */
  call_ind((uint32_t)(ESI), 0x11c916e8u);
  /* 11c916e8 push 0x11c981b0 */
  push32((uint32_t)(0x11c981b0u));
  /* 11c916ed push 0x11c9af60 */
  push32((uint32_t)(0x11c9af60u));
  /* 11c916f2 call esi */
  call_ind((uint32_t)(ESI), 0x11c916f4u);
  /* 11c916f4 push 0x11c981a0 */
  push32((uint32_t)(0x11c981a0u));
  /* 11c916f9 push 0x11c9b020 */
  push32((uint32_t)(0x11c9b020u));
  /* 11c916fe call edi */
  call_ind((uint32_t)(EDI), 0x11c91700u);
  /* 11c91700 push 0x11c98190 */
  push32((uint32_t)(0x11c98190u));
  /* 11c91705 push 0x11c9b098 */
  push32((uint32_t)(0x11c9b098u));
  /* 11c9170a call esi */
  call_ind((uint32_t)(ESI), 0x11c9170cu);
  /* 11c9170c push 0x11c98180 */
  push32((uint32_t)(0x11c98180u));
  /* 11c91711 push 0x11c9af18 */
  push32((uint32_t)(0x11c9af18u));
  /* 11c91716 call edi */
  call_ind((uint32_t)(EDI), 0x11c91718u);
  /* 11c91718 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9171b push 0x11c98174 */
  push32((uint32_t)(0x11c98174u));
  /* 11c91720 push 0x11c9af48 */
  push32((uint32_t)(0x11c9af48u));
  /* 11c91725 call esi */
  call_ind((uint32_t)(ESI), 0x11c91727u);
  /* 11c91727 push 0x11c98160 */
  push32((uint32_t)(0x11c98160u));
  /* 11c9172c push 0x11c9af10 */
  push32((uint32_t)(0x11c9af10u));
  /* 11c91731 call edi */
  call_ind((uint32_t)(EDI), 0x11c91733u);
  /* 11c91733 push 0x11c98150 */
  push32((uint32_t)(0x11c98150u));
  /* 11c91738 push 0x11c9b060 */
  push32((uint32_t)(0x11c9b060u));
  /* 11c9173d call edi */
  call_ind((uint32_t)(EDI), 0x11c9173fu);
  /* 11c9173f push 0x11c98140 */
  push32((uint32_t)(0x11c98140u));
  /* 11c91744 push 0x11c9b040 */
  push32((uint32_t)(0x11c9b040u));
  /* 11c91749 call edi */
  call_ind((uint32_t)(EDI), 0x11c9174bu);
  /* 11c9174b push 0x11c98134 */
  push32((uint32_t)(0x11c98134u));
  /* 11c91750 push 0x11c9af40 */
  push32((uint32_t)(0x11c9af40u));
  /* 11c91755 call esi */
  call_ind((uint32_t)(ESI), 0x11c91757u);
  /* 11c91757 push 0x11c98120 */
  push32((uint32_t)(0x11c98120u));
  /* 11c9175c push 0x11c9af08 */
  push32((uint32_t)(0x11c9af08u));
  /* 11c91761 call edi */
  call_ind((uint32_t)(EDI), 0x11c91763u);
  /* 11c91763 push 0x11c98110 */
  push32((uint32_t)(0x11c98110u));
  /* 11c91768 push 0x11c9b028 */
  push32((uint32_t)(0x11c9b028u));
  /* 11c9176d call edi */
  call_ind((uint32_t)(EDI), 0x11c9176fu);
  /* 11c9176f push 0x11c98100 */
  push32((uint32_t)(0x11c98100u));
  /* 11c91774 push 0x11c9b048 */
  push32((uint32_t)(0x11c9b048u));
  /* 11c91779 call edi */
  call_ind((uint32_t)(EDI), 0x11c9177bu);
  /* 11c9177b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9177e push 0x11c980f0 */
  push32((uint32_t)(0x11c980f0u));
  /* 11c91783 push 0x11c9af80 */
  push32((uint32_t)(0x11c9af80u));
  /* 11c91788 call esi */
  call_ind((uint32_t)(ESI), 0x11c9178au);
  /* 11c9178a push 0x11c980dc */
  push32((uint32_t)(0x11c980dcu));
  /* 11c9178f push 0x11c9af70 */
  push32((uint32_t)(0x11c9af70u));
  /* 11c91794 call edi */
  call_ind((uint32_t)(EDI), 0x11c91796u);
  /* 11c91796 push 0x11c980cc */
  push32((uint32_t)(0x11c980ccu));
  /* 11c9179b push 0x11c9b0e8 */
  push32((uint32_t)(0x11c9b0e8u));
  /* 11c917a0 call edi */
  call_ind((uint32_t)(EDI), 0x11c917a2u);
  /* 11c917a2 push 0x11c980bc */
  push32((uint32_t)(0x11c980bcu));
  /* 11c917a7 push 0x11c9b0d8 */
  push32((uint32_t)(0x11c9b0d8u));
  /* 11c917ac call edi */
  call_ind((uint32_t)(EDI), 0x11c917aeu);
  /* 11c917ae push 0x11c980ac */
  push32((uint32_t)(0x11c980acu));
  /* 11c917b3 push 0x11c9af88 */
  push32((uint32_t)(0x11c9af88u));
  /* 11c917b8 call esi */
  call_ind((uint32_t)(ESI), 0x11c917bau);
  /* 11c917ba push 0x11c98098 */
  push32((uint32_t)(0x11c98098u));
  /* 11c917bf push 0x11c9af78 */
  push32((uint32_t)(0x11c9af78u));
  /* 11c917c4 call edi */
  call_ind((uint32_t)(EDI), 0x11c917c6u);
  /* 11c917c6 push 0x11c98088 */
  push32((uint32_t)(0x11c98088u));
  /* 11c917cb push 0x11c9b0d0 */
  push32((uint32_t)(0x11c9b0d0u));
  /* 11c917d0 call edi */
  call_ind((uint32_t)(EDI), 0x11c917d2u);
  /* 11c917d2 push 0x11c98078 */
  push32((uint32_t)(0x11c98078u));
  /* 11c917d7 push 0x11c9b0e0 */
  push32((uint32_t)(0x11c9b0e0u));
  /* 11c917dc call edi */
  call_ind((uint32_t)(EDI), 0x11c917deu);
  /* 11c917de add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c917e1 push 0x11c9806c */
  push32((uint32_t)(0x11c9806cu));
  /* 11c917e6 push 0x11c9b148 */
  push32((uint32_t)(0x11c9b148u));
  /* 11c917eb call ebp */
  call_ind((uint32_t)(EBP), 0x11c917edu);
  /* 11c917ed push 0x11c98058 */
  push32((uint32_t)(0x11c98058u));
  /* 11c917f2 push 0x11c9af98 */
  push32((uint32_t)(0x11c9af98u));
  /* 11c917f7 call esi */
  call_ind((uint32_t)(ESI), 0x11c917f9u);
  /* 11c917f9 mov esi, dword ptr [0x11c97150] */
  ESI = (r32((uint32_t)(0x11c97150)));
  /* 11c917ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11c91801 call esi */
  call_ind((uint32_t)(ESI), 0x11c91803u);
  /* 11c91803 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11c91805 call esi */
  call_ind((uint32_t)(ESI), 0x11c91807u);
  /* 11c91807 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11c91809 call esi */
  call_ind((uint32_t)(ESI), 0x11c9180bu);
  /* 11c9180b push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11c9180d call esi */
  call_ind((uint32_t)(ESI), 0x11c9180fu);
  /* 11c9180f mov esi, dword ptr [0x11c97154] */
  ESI = (r32((uint32_t)(0x11c97154)));
  /* 11c91815 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11c91817 call esi */
  call_ind((uint32_t)(ESI), 0x11c91819u);
  /* 11c91819 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11c9181b call esi */
  call_ind((uint32_t)(ESI), 0x11c9181du);
  /* 11c9181d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11c9181f call esi */
  call_ind((uint32_t)(ESI), 0x11c91821u);
  /* 11c91821 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11c91823 call esi */
  call_ind((uint32_t)(ESI), 0x11c91825u);
  /* 11c91825 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11c91827 call esi */
  call_ind((uint32_t)(ESI), 0x11c91829u);
  /* 11c91829 push 0x11c98050 */
  push32((uint32_t)(0x11c98050u));
  /* 11c9182e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91830 call dword ptr [0x11c97158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97158))), 0x11c91836u);
  /* 11c91836 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91839 pop edi */
  EDI = (pop32());
  /* 11c9183a pop esi */
  ESI = (pop32());
  /* 11c9183b pop ebp */
  EBP = (pop32());
  /* 11c9183c pop ebx */
  EBX = (pop32());
  /* 11c9183d ret  */
  ESPCHK(0x11c91320u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11c91840 (2325 bytes, 652 insns) */
void f_11c91840(void) {
  FTRACE(0x11c91840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c91840 push ebx */
  push32((uint32_t)(EBX));
  /* 11c91841 push ebp */
  push32((uint32_t)(EBP));
  /* 11c91842 push esi */
  push32((uint32_t)(ESI));
  /* 11c91843 push edi */
  push32((uint32_t)(EDI));
  /* 11c91844 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91846 call dword ptr [0x11c970dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970dc))), 0x11c9184cu);
  /* 11c9184c mov ebp, dword ptr [0x11c970e0] */
  EBP = (r32((uint32_t)(0x11c970e0)));
  /* 11c91852 mov edi, dword ptr [0x11c970e4] */
  EDI = (r32((uint32_t)(0x11c970e4)));
  /* 11c91858 mov esi, dword ptr [0x11c970e8] */
  ESI = (r32((uint32_t)(0x11c970e8)));
  /* 11c9185e mov ebx, dword ptr [0x11c97164] */
  EBX = (r32((uint32_t)(0x11c97164)));
  /* 11c91864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91867 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91869 je 0x11c91a00 */
  if (C.zf) goto L_11c91a00;
  /* 11c9186f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91871 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91873 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91875u);
  /* 11c91875 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91877 push 0x11c9b138 */
  push32((uint32_t)(0x11c9b138u));
  /* 11c9187c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9187e call edi */
  call_ind((uint32_t)(EDI), 0x11c91880u);
  /* 11c91880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91882 push 0x11c9b008 */
  push32((uint32_t)(0x11c9b008u));
  /* 11c91887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91889 call edi */
  call_ind((uint32_t)(EDI), 0x11c9188bu);
  /* 11c9188b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9188d push 0x11c9b130 */
  push32((uint32_t)(0x11c9b130u));
  /* 11c91892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91894 call edi */
  call_ind((uint32_t)(EDI), 0x11c91896u);
  /* 11c91896 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91898 push 0x11c9b018 */
  push32((uint32_t)(0x11c9b018u));
  /* 11c9189d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9189f call edi */
  call_ind((uint32_t)(EDI), 0x11c918a1u);
  /* 11c918a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c918a3 push 0x11c9b190 */
  push32((uint32_t)(0x11c9b190u));
  /* 11c918a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c918aa call edi */
  call_ind((uint32_t)(EDI), 0x11c918acu);
  /* 11c918ac add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c918af push 0x11c98470 */
  push32((uint32_t)(0x11c98470u));
  /* 11c918b4 call dword ptr [0x11c970ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970ec))), 0x11c918bau);
  /* 11c918ba push 0x11c9aea8 */
  push32((uint32_t)(0x11c9aea8u));
  /* 11c918bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c918c1 push 0x11c9afc8 */
  push32((uint32_t)(0x11c9afc8u));
  /* 11c918c6 call dword ptr [0x11c970f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f0))), 0x11c918ccu);
  /* 11c918cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c918ce call esi */
  call_ind((uint32_t)(ESI), 0x11c918d0u);
  /* 11c918d0 lea ecx, [eax + eax*8] */
  ECX = ((uint32_t)(EAX + EAX*8));
  /* 11c918d3 push 0x11c9aea8 */
  push32((uint32_t)(0x11c9aea8u));
  /* 11c918d8 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11c918db lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 11c918de lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c918e1 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c918e4 lea eax, [edx*4 + 0xc8] */
  EAX = ((uint32_t)(EDX*4 + 0xc8));
  /* 11c918eb mov word ptr [0x11c9aeac], ax */
  w16((uint32_t)(0x11c9aeac), (AX));
  /* 11c918f1 call dword ptr [0x11c970f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f4))), 0x11c918f7u);
  /* 11c918f7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11c918f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c918fb call dword ptr [0x11c970f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f8))), 0x11c91901u);
  /* 11c91901 push 0x11c98468 */
  push32((uint32_t)(0x11c98468u));
  /* 11c91906 push 0x11c982bc */
  push32((uint32_t)(0x11c982bcu));
  /* 11c9190b call dword ptr [0x11c970fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970fc))), 0x11c91911u);
  /* 11c91911 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91913 push 0x11c9b108 */
  push32((uint32_t)(0x11c9b108u));
  /* 11c91918 call ebx */
  call_ind((uint32_t)(EBX), 0x11c9191au);
  /* 11c9191a push 2 */
  push32((uint32_t)(0x2u));
  /* 11c9191c call dword ptr [0x11c97100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97100))), 0x11c91922u);
  /* 11c91922 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c91924 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91926 call dword ptr [0x11c970f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f8))), 0x11c9192cu);
  /* 11c9192c push 0x11c9af50 */
  push32((uint32_t)(0x11c9af50u));
  /* 11c91931 call dword ptr [0x11c97104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97104))), 0x11c91937u);
  /* 11c91937 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9193a push 0x11c9b170 */
  push32((uint32_t)(0x11c9b170u));
  /* 11c9193f call dword ptr [0x11c97104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97104))), 0x11c91945u);
  /* 11c91945 push 0x11c9b168 */
  push32((uint32_t)(0x11c9b168u));
  /* 11c9194a call dword ptr [0x11c97104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97104))), 0x11c91950u);
  /* 11c91950 push 0x11c9b140 */
  push32((uint32_t)(0x11c9b140u));
  /* 11c91955 call dword ptr [0x11c97108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97108))), 0x11c9195bu);
  /* 11c9195b push 0x11c9b0f8 */
  push32((uint32_t)(0x11c9b0f8u));
  /* 11c91960 call dword ptr [0x11c97108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97108))), 0x11c91966u);
  /* 11c91966 push 0x11c9b100 */
  push32((uint32_t)(0x11c9b100u));
  /* 11c9196b call dword ptr [0x11c97108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97108))), 0x11c91971u);
  /* 11c91971 push 0x11c9aea0 */
  push32((uint32_t)(0x11c9aea0u));
  /* 11c91976 call dword ptr [0x11c9710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9710c))), 0x11c9197cu);
  /* 11c9197c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9197e push 0x11c9af60 */
  push32((uint32_t)(0x11c9af60u));
  /* 11c91983 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91985u);
  /* 11c91985 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11c91987 push 0x11c9b020 */
  push32((uint32_t)(0x11c9b020u));
  /* 11c9198c push 2 */
  push32((uint32_t)(0x2u));
  /* 11c9198e call dword ptr [0x11c9715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9715c))), 0x11c91994u);
  /* 11c91994 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91996 call dword ptr [0x11c97110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97110))), 0x11c9199cu);
  /* 11c9199c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9199e push 0x11c9b098 */
  push32((uint32_t)(0x11c9b098u));
  /* 11c919a3 call ebx */
  call_ind((uint32_t)(EBX), 0x11c919a5u);
  /* 11c919a5 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c919a7 push 0x11c9af18 */
  push32((uint32_t)(0x11c9af18u));
  /* 11c919ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11c919ae call dword ptr [0x11c9715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9715c))), 0x11c919b4u);
  /* 11c919b4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c919b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c919b9 call dword ptr [0x11c97110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97110))), 0x11c919bfu);
  /* 11c919bf push 0x11c98460 */
  push32((uint32_t)(0x11c98460u));
  /* 11c919c4 push 0x11c98174 */
  push32((uint32_t)(0x11c98174u));
  /* 11c919c9 call dword ptr [0x11c970fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970fc))), 0x11c919cfu);
  /* 11c919cf push 0x11c98458 */
  push32((uint32_t)(0x11c98458u));
  /* 11c919d4 push 0x11c98174 */
  push32((uint32_t)(0x11c98174u));
  /* 11c919d9 call dword ptr [0x11c970fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970fc))), 0x11c919dfu);
  /* 11c919df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c919e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c919e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c919e6 call esi */
  call_ind((uint32_t)(ESI), 0x11c919e8u);
  /* 11c919e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c919eb lea ecx, [eax*8 + 0x11c9ae88] */
  ECX = ((uint32_t)(EAX*8 + 0x11c9ae88));
  /* 11c919f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11c919f3 call ebx */
  call_ind((uint32_t)(EBX), 0x11c919f5u);
  /* 11c919f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c919f7 call dword ptr [0x11c97114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97114))), 0x11c919fdu);
  /* 11c919fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c91a00:;
  /* 11c91a00 push 0x11c9afc8 */
  push32((uint32_t)(0x11c9afc8u));
  /* 11c91a05 call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c91a0bu);
  /* 11c91a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91a10 je 0x11c91a73 */
  if (C.zf) goto L_11c91a73;
  /* 11c91a12 push 0x11c9b208 */
  push32((uint32_t)(0x11c9b208u));
  /* 11c91a17 call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c91a1du);
  /* 11c91a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91a22 je 0x11c91a73 */
  if (C.zf) goto L_11c91a73;
  /* 11c91a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91a26 call dword ptr [0x11c97118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97118))), 0x11c91a2cu);
  /* 11c91a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91a31 je 0x11c91a73 */
  if (C.zf) goto L_11c91a73;
  /* 11c91a33 push 0x11c9aea8 */
  push32((uint32_t)(0x11c9aea8u));
  /* 11c91a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91a3a push 0x11c9afc8 */
  push32((uint32_t)(0x11c9afc8u));
  /* 11c91a3f call dword ptr [0x11c970f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f0))), 0x11c91a45u);
  /* 11c91a45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91a48 cmp word ptr [0x11c9aeac], 0xffc8 */
  { uint32_t _a=(r16((uint32_t)(0x11c9aeac))),_b=(0xffc8u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c91a51 jae 0x11c91a73 */
  if (!C.cf) goto L_11c91a73;
  /* 11c91a53 add word ptr [0x11c9aeac], 0x14 */
  { uint32_t _a=(r16((uint32_t)(0x11c9aeac))),_b=(0x14u),_r=_a+_b; w16((uint32_t)(0x11c9aeac), (_r)); fl_add(_a,_b,_r,16); }
  /* 11c91a5b push 0x11c9aea8 */
  push32((uint32_t)(0x11c9aea8u));
  /* 11c91a60 call dword ptr [0x11c970f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f4))), 0x11c91a66u);
  /* 11c91a66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c91a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91a6a call dword ptr [0x11c970f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f8))), 0x11c91a70u);
  /* 11c91a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c91a73:;
  /* 11c91a73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91a75 call dword ptr [0x11c970dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970dc))), 0x11c91a7bu);
  /* 11c91a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91a7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91a80 je 0x11c91bd3 */
  if (C.zf) goto L_11c91bd3;
  /* 11c91a86 push 0x11c9b0f0 */
  push32((uint32_t)(0x11c9b0f0u));
  /* 11c91a8b call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c91a91u);
  /* 11c91a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91a96 jne 0x11c91bd3 */
  if (!C.zf) goto L_11c91bd3;
  /* 11c91a9c push eax */
  push32((uint32_t)(EAX));
  /* 11c91a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91a9f call ebp */
  call_ind((uint32_t)(EBP), 0x11c91aa1u);
  /* 11c91aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91aa3 push 0x11c9b138 */
  push32((uint32_t)(0x11c9b138u));
  /* 11c91aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91aaa call edi */
  call_ind((uint32_t)(EDI), 0x11c91aacu);
  /* 11c91aac push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91aae push 0x11c9b008 */
  push32((uint32_t)(0x11c9b008u));
  /* 11c91ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ab5 call edi */
  call_ind((uint32_t)(EDI), 0x11c91ab7u);
  /* 11c91ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91ab9 push 0x11c9b130 */
  push32((uint32_t)(0x11c9b130u));
  /* 11c91abe push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ac0 call edi */
  call_ind((uint32_t)(EDI), 0x11c91ac2u);
  /* 11c91ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ac4 push 0x11c9af38 */
  push32((uint32_t)(0x11c9af38u));
  /* 11c91ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91acb call edi */
  call_ind((uint32_t)(EDI), 0x11c91acdu);
  /* 11c91acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91acf push 0x11c9aed8 */
  push32((uint32_t)(0x11c9aed8u));
  /* 11c91ad4 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91ad6u);
  /* 11c91ad6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91adb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91add call dword ptr [0x11c9711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9711c))), 0x11c91ae3u);
  /* 11c91ae3 push 0x11c9844c */
  push32((uint32_t)(0x11c9844cu));
  /* 11c91ae8 call dword ptr [0x11c970ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970ec))), 0x11c91aeeu);
  /* 11c91aee push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91af0 call esi */
  call_ind((uint32_t)(ESI), 0x11c91af2u);
  /* 11c91af2 mov ecx, 8 */
  ECX = (0x8u);
  /* 11c91af7 mov ebx, dword ptr [0x11c97120] */
  EBX = (r32((uint32_t)(0x11c97120)));
  /* 11c91afd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91aff lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b02 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b05 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c91b08 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11c91b0b push edx */
  push32((uint32_t)(EDX));
  /* 11c91b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b10 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91b12u);
  /* 11c91b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b14 call esi */
  call_ind((uint32_t)(ESI), 0x11c91b16u);
  /* 11c91b16 mov ecx, 8 */
  ECX = (0x8u);
  /* 11c91b1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91b1d lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b20 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b23 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c91b26 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11c91b29 push eax */
  push32((uint32_t)(EAX));
  /* 11c91b2a push 3 */
  push32((uint32_t)(0x3u));
  /* 11c91b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b2e call ebx */
  call_ind((uint32_t)(EBX), 0x11c91b30u);
  /* 11c91b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b32 call esi */
  call_ind((uint32_t)(ESI), 0x11c91b34u);
  /* 11c91b34 mov ecx, 8 */
  ECX = (0x8u);
  /* 11c91b39 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91b3b lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b3e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b41 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c91b44 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11c91b47 push ecx */
  push32((uint32_t)(ECX));
  /* 11c91b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b4c call ebx */
  call_ind((uint32_t)(EBX), 0x11c91b4eu);
  /* 11c91b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b50 call esi */
  call_ind((uint32_t)(ESI), 0x11c91b52u);
  /* 11c91b52 mov ecx, 8 */
  ECX = (0x8u);
  /* 11c91b57 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91b5a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91b5c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b5f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b62 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c91b65 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11c91b68 push edx */
  push32((uint32_t)(EDX));
  /* 11c91b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b6d call ebx */
  call_ind((uint32_t)(EBX), 0x11c91b6fu);
  /* 11c91b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b71 call esi */
  call_ind((uint32_t)(ESI), 0x11c91b73u);
  /* 11c91b73 mov ecx, 8 */
  ECX = (0x8u);
  /* 11c91b78 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91b7a lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b7d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c91b83 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11c91b86 push eax */
  push32((uint32_t)(EAX));
  /* 11c91b87 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c91b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b8b call ebx */
  call_ind((uint32_t)(EBX), 0x11c91b8du);
  /* 11c91b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91b8f call esi */
  call_ind((uint32_t)(ESI), 0x11c91b91u);
  /* 11c91b91 mov ecx, 8 */
  ECX = (0x8u);
  /* 11c91b96 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91b98 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b9b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91b9e lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c91ba1 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11c91ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c91ba5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c91ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ba9 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91babu);
  /* 11c91bab push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91bad push 4 */
  push32((uint32_t)(0x4u));
  /* 11c91baf call ebp */
  call_ind((uint32_t)(EBP), 0x11c91bb1u);
  /* 11c91bb1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11c91bb3 call dword ptr [0x11c97154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97154))), 0x11c91bb9u);
  /* 11c91bb9 mov ebx, dword ptr [0x11c97150] */
  EBX = (r32((uint32_t)(0x11c97150)));
  /* 11c91bbf push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11c91bc1 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91bc3u);
  /* 11c91bc3 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11c91bc5 call ebx */
  call_ind((uint32_t)(EBX), 0x11c91bc7u);
  /* 11c91bc7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91bca push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11c91bcc call ebx */
  call_ind((uint32_t)(EBX), 0x11c91bceu);
  /* 11c91bce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91bd1 jmp 0x11c91bd9 */
  goto L_11c91bd9;
L_11c91bd3:;
  /* 11c91bd3 mov ebx, dword ptr [0x11c97150] */
  EBX = (r32((uint32_t)(0x11c97150)));
L_11c91bd9:;
  /* 11c91bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91bdb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91bdd push 0x11c9b1a0 */
  push32((uint32_t)(0x11c9b1a0u));
  /* 11c91be2 call 0x11c92160 */
  push32(0x11c91be7u); f_11c92160();
  /* 11c91be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91be9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91beb push 0x11c9aef8 */
  push32((uint32_t)(0x11c9aef8u));
  /* 11c91bf0 call 0x11c92160 */
  push32(0x11c91bf5u); f_11c92160();
  /* 11c91bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91bf9 push 0x11c9afe0 */
  push32((uint32_t)(0x11c9afe0u));
  /* 11c91bfe call 0x11c92160 */
  push32(0x11c91c03u); f_11c92160();
  /* 11c91c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c07 push 0x11c9b1b0 */
  push32((uint32_t)(0x11c9b1b0u));
  /* 11c91c0c call 0x11c92160 */
  push32(0x11c91c11u); f_11c92160();
  /* 11c91c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c15 push 0x11c9af00 */
  push32((uint32_t)(0x11c9af00u));
  /* 11c91c1a call 0x11c92160 */
  push32(0x11c91c1fu); f_11c92160();
  /* 11c91c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c21 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c23 push 0x11c9b118 */
  push32((uint32_t)(0x11c9b118u));
  /* 11c91c28 call 0x11c92160 */
  push32(0x11c91c2du); f_11c92160();
  /* 11c91c2d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c34 push 0x11c9b1a8 */
  push32((uint32_t)(0x11c9b1a8u));
  /* 11c91c39 call 0x11c92160 */
  push32(0x11c91c3eu); f_11c92160();
  /* 11c91c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c42 push 0x11c9aee8 */
  push32((uint32_t)(0x11c9aee8u));
  /* 11c91c47 call 0x11c92160 */
  push32(0x11c91c4cu); f_11c92160();
  /* 11c91c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c50 push 0x11c9b188 */
  push32((uint32_t)(0x11c9b188u));
  /* 11c91c55 call 0x11c92160 */
  push32(0x11c91c5au); f_11c92160();
  /* 11c91c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c5e push 0x11c9b1d0 */
  push32((uint32_t)(0x11c9b1d0u));
  /* 11c91c63 call 0x11c92160 */
  push32(0x11c91c68u); f_11c92160();
  /* 11c91c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c6c push 0x11c9aef0 */
  push32((uint32_t)(0x11c9aef0u));
  /* 11c91c71 call 0x11c92160 */
  push32(0x11c91c76u); f_11c92160();
  /* 11c91c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c7a push 0x11c9b1c0 */
  push32((uint32_t)(0x11c9b1c0u));
  /* 11c91c7f call 0x11c92160 */
  push32(0x11c91c84u); f_11c92160();
  /* 11c91c84 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c8b push 0x11c9af28 */
  push32((uint32_t)(0x11c9af28u));
  /* 11c91c90 call 0x11c92160 */
  push32(0x11c91c95u); f_11c92160();
  /* 11c91c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91c99 push 0x11c9b1e8 */
  push32((uint32_t)(0x11c9b1e8u));
  /* 11c91c9e call 0x11c92160 */
  push32(0x11c91ca3u); f_11c92160();
  /* 11c91ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91ca7 push 0x11c9af30 */
  push32((uint32_t)(0x11c9af30u));
  /* 11c91cac call 0x11c92160 */
  push32(0x11c91cb1u); f_11c92160();
  /* 11c91cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91cb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91cb5 push 0x11c9b1d8 */
  push32((uint32_t)(0x11c9b1d8u));
  /* 11c91cba call 0x11c92160 */
  push32(0x11c91cbfu); f_11c92160();
  /* 11c91cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91cc3 push 0x11c9af20 */
  push32((uint32_t)(0x11c9af20u));
  /* 11c91cc8 call 0x11c92160 */
  push32(0x11c91ccdu); f_11c92160();
  /* 11c91ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ccf push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91cd1 push 0x11c9b1f8 */
  push32((uint32_t)(0x11c9b1f8u));
  /* 11c91cd6 call 0x11c92160 */
  push32(0x11c91cdbu); f_11c92160();
  /* 11c91cdb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91cde push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ce0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91ce2 push 0x11c9b1f0 */
  push32((uint32_t)(0x11c9b1f0u));
  /* 11c91ce7 call 0x11c92160 */
  push32(0x11c91cecu); f_11c92160();
  /* 11c91cec push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91cee push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91cf0 push 0x11c9b1c8 */
  push32((uint32_t)(0x11c9b1c8u));
  /* 11c91cf5 call 0x11c92160 */
  push32(0x11c91cfau); f_11c92160();
  /* 11c91cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91cfe push 0x11c9b1b8 */
  push32((uint32_t)(0x11c9b1b8u));
  /* 11c91d03 call 0x11c92160 */
  push32(0x11c91d08u); f_11c92160();
  /* 11c91d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91d0c push 0x11c9b1e0 */
  push32((uint32_t)(0x11c9b1e0u));
  /* 11c91d11 call 0x11c92160 */
  push32(0x11c91d16u); f_11c92160();
  /* 11c91d16 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c91d18 call dword ptr [0x11c970dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970dc))), 0x11c91d1eu);
  /* 11c91d1e add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91d21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91d23 jne 0x11c91fac */
  if (!C.zf) goto L_11c91fac;
  /* 11c91d29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91d2b call dword ptr [0x11c97118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97118))), 0x11c91d31u);
  /* 11c91d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91d34 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91d36 je 0x11c91dcb */
  if (C.zf) goto L_11c91dcb;
  /* 11c91d3c push 0x11c9b068 */
  push32((uint32_t)(0x11c9b068u));
  /* 11c91d41 call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c91d47u);
  /* 11c91d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91d4c je 0x11c91d72 */
  if (C.zf) goto L_11c91d72;
  /* 11c91d4e push 0x11c9b158 */
  push32((uint32_t)(0x11c9b158u));
  /* 11c91d53 call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c91d59u);
  /* 11c91d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91d5e je 0x11c91d72 */
  if (C.zf) goto L_11c91d72;
  /* 11c91d60 push 0x11c9b150 */
  push32((uint32_t)(0x11c9b150u));
  /* 11c91d65 call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c91d6bu);
  /* 11c91d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91d6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91d70 jne 0x11c91dcb */
  if (!C.zf) goto L_11c91dcb;
L_11c91d72:;
  /* 11c91d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91d74 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c91d76 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91d78u);
  /* 11c91d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91d7a call esi */
  call_ind((uint32_t)(ESI), 0x11c91d7cu);
  /* 11c91d7c mov ecx, 0xa */
  ECX = (0xau);
  /* 11c91d81 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c91d83 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11c91d86 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c91d89 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c91d8c shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11c91d8f push edx */
  push32((uint32_t)(EDX));
  /* 11c91d90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91d92 call dword ptr [0x11c970f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970f8))), 0x11c91d98u);
  /* 11c91d98 push 0x11c9b218 */
  push32((uint32_t)(0x11c9b218u));
  /* 11c91d9d push 0x11c9aee0 */
  push32((uint32_t)(0x11c9aee0u));
  /* 11c91da2 push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c91da7 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c91da9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91dab call 0x11c921e0 */
  push32(0x11c91db0u); f_11c921e0();
  /* 11c91db0 push 0x11c9b200 */
  push32((uint32_t)(0x11c9b200u));
  /* 11c91db5 push 0x11c9b128 */
  push32((uint32_t)(0x11c9b128u));
  /* 11c91dba push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91dbf push 0xa */
  push32((uint32_t)(0xau));
  /* 11c91dc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91dc3 call 0x11c921e0 */
  push32(0x11c91dc8u); f_11c921e0();
  /* 11c91dc8 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c91dcb:;
  /* 11c91dcb push 0x11c9afa0 */
  push32((uint32_t)(0x11c9afa0u));
  /* 11c91dd0 push 0x11c9b0c0 */
  push32((uint32_t)(0x11c9b0c0u));
  /* 11c91dd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91dd7 push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c91ddc call 0x11c92240 */
  push32(0x11c91de1u); f_11c92240();
  /* 11c91de1 push 0x11c9af90 */
  push32((uint32_t)(0x11c9af90u));
  /* 11c91de6 push 0x11c9b0c8 */
  push32((uint32_t)(0x11c9b0c8u));
  /* 11c91deb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91ded push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91df2 call 0x11c92240 */
  push32(0x11c91df7u); f_11c92240();
  /* 11c91df7 push 0x11c9b160 */
  push32((uint32_t)(0x11c9b160u));
  /* 11c91dfc push 0x11c9b110 */
  push32((uint32_t)(0x11c9b110u));
  /* 11c91e01 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e03 push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91e08 call 0x11c92240 */
  push32(0x11c91e0du); f_11c92240();
  /* 11c91e0d push 0x11c9af90 */
  push32((uint32_t)(0x11c9af90u));
  /* 11c91e12 push 0x11c9b160 */
  push32((uint32_t)(0x11c9b160u));
  /* 11c91e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e19 push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91e1e call 0x11c92240 */
  push32(0x11c91e23u); f_11c92240();
  /* 11c91e23 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91e26 push 0x11c9b180 */
  push32((uint32_t)(0x11c9b180u));
  /* 11c91e2b push 0x11c9af90 */
  push32((uint32_t)(0x11c9af90u));
  /* 11c91e30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e32 push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91e37 call 0x11c92240 */
  push32(0x11c91e3cu); f_11c92240();
  /* 11c91e3c push 0x11c9b198 */
  push32((uint32_t)(0x11c9b198u));
  /* 11c91e41 push 0x11c9b180 */
  push32((uint32_t)(0x11c9b180u));
  /* 11c91e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e48 push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91e4d call 0x11c92240 */
  push32(0x11c91e52u); f_11c92240();
  /* 11c91e52 push 0x11c9b180 */
  push32((uint32_t)(0x11c9b180u));
  /* 11c91e57 push 0x11c9afa0 */
  push32((uint32_t)(0x11c9afa0u));
  /* 11c91e5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e5e push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c91e63 call 0x11c92240 */
  push32(0x11c91e68u); f_11c92240();
  /* 11c91e68 push 0x11c9b198 */
  push32((uint32_t)(0x11c9b198u));
  /* 11c91e6d push 0x11c9b180 */
  push32((uint32_t)(0x11c9b180u));
  /* 11c91e72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e74 push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c91e79 call 0x11c92240 */
  push32(0x11c91e7eu); f_11c92240();
  /* 11c91e7e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91e81 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c91e83 call dword ptr [0x11c970dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970dc))), 0x11c91e89u);
  /* 11c91e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91e8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91e8e je 0x11c91f6d */
  if (C.zf) goto L_11c91f6d;
  /* 11c91e94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91e96 push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c91e9b push 0x11c9b198 */
  push32((uint32_t)(0x11c9b198u));
  /* 11c91ea0 call dword ptr [0x11c97124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97124))), 0x11c91ea6u);
  /* 11c91ea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91ea9 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c91eac jl 0x11c91f6d */
  if ((C.sf!=C.of)) goto L_11c91f6d;
  /* 11c91eb2 call 0x11c91020 */
  push32(0x11c91eb7u); f_11c91020();
  /* 11c91eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91eb9 je 0x11c91f6d */
  if (C.zf) goto L_11c91f6d;
  /* 11c91ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ec1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c91ec3 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91ec5u);
  /* 11c91ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ec7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91ec9 push 0x11c9b120 */
  push32((uint32_t)(0x11c9b120u));
  /* 11c91ece push 0x11c9b198 */
  push32((uint32_t)(0x11c9b198u));
  /* 11c91ed3 call dword ptr [0x11c97128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97128))), 0x11c91ed9u);
  /* 11c91ed9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91edc push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91ede call 0x11c91020 */
  push32(0x11c91ee3u); f_11c91020();
  /* 11c91ee3 push eax */
  push32((uint32_t)(EAX));
  /* 11c91ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91ee6 call dword ptr [0x11c9712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9712c))), 0x11c91eecu);
  /* 11c91eec mov esi, dword ptr [0x11c97130] */
  ESI = (r32((uint32_t)(0x11c97130)));
  /* 11c91ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91ef4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11c91ef9 push 0x11c9afb0 */
  push32((uint32_t)(0x11c9afb0u));
  /* 11c91efe push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f00 call esi */
  call_ind((uint32_t)(ESI), 0x11c91f02u);
  /* 11c91f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f04 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11c91f09 push 0x11c9afb8 */
  push32((uint32_t)(0x11c9afb8u));
  /* 11c91f0e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f10 call esi */
  call_ind((uint32_t)(ESI), 0x11c91f12u);
  /* 11c91f12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f14 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11c91f19 push 0x11c9afc0 */
  push32((uint32_t)(0x11c9afc0u));
  /* 11c91f1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f20 call esi */
  call_ind((uint32_t)(ESI), 0x11c91f22u);
  /* 11c91f22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f24 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11c91f29 push 0x11c9afa8 */
  push32((uint32_t)(0x11c9afa8u));
  /* 11c91f2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f30 call esi */
  call_ind((uint32_t)(ESI), 0x11c91f32u);
  /* 11c91f32 mov esi, dword ptr [0x11c97110] */
  ESI = (r32((uint32_t)(0x11c97110)));
  /* 11c91f38 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91f3b push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f3d call esi */
  call_ind((uint32_t)(ESI), 0x11c91f3fu);
  /* 11c91f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91f41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f43 push 0x11c9b178 */
  push32((uint32_t)(0x11c9b178u));
  /* 11c91f48 push 0x11c9b198 */
  push32((uint32_t)(0x11c9b198u));
  /* 11c91f4d call dword ptr [0x11c97128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97128))), 0x11c91f53u);
  /* 11c91f53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91f58 call 0x11c91070 */
  push32(0x11c91f5du); f_11c91070();
  /* 11c91f5d push eax */
  push32((uint32_t)(EAX));
  /* 11c91f5e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f60 call dword ptr [0x11c9712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9712c))), 0x11c91f66u);
  /* 11c91f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c91f68 call esi */
  call_ind((uint32_t)(ESI), 0x11c91f6au);
  /* 11c91f6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c91f6d:;
  /* 11c91f6d push 0x11c9b010 */
  push32((uint32_t)(0x11c9b010u));
  /* 11c91f72 push 0x11c9b068 */
  push32((uint32_t)(0x11c9b068u));
  /* 11c91f77 push 0x11c9b070 */
  push32((uint32_t)(0x11c9b070u));
  /* 11c91f7c call 0x11c92290 */
  push32(0x11c91f81u); f_11c92290();
  /* 11c91f81 push 0x11c9afd0 */
  push32((uint32_t)(0x11c9afd0u));
  /* 11c91f86 push 0x11c9b158 */
  push32((uint32_t)(0x11c9b158u));
  /* 11c91f8b push 0x11c9b210 */
  push32((uint32_t)(0x11c9b210u));
  /* 11c91f90 call 0x11c92290 */
  push32(0x11c91f95u); f_11c92290();
  /* 11c91f95 push 0x11c9afd8 */
  push32((uint32_t)(0x11c9afd8u));
  /* 11c91f9a push 0x11c9b150 */
  push32((uint32_t)(0x11c9b150u));
  /* 11c91f9f push 0x11c9b220 */
  push32((uint32_t)(0x11c9b220u));
  /* 11c91fa4 call 0x11c92290 */
  push32(0x11c91fa9u); f_11c92290();
  /* 11c91fa9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c91fac:;
  /* 11c91fac push 5 */
  push32((uint32_t)(0x5u));
  /* 11c91fae call dword ptr [0x11c970dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970dc))), 0x11c91fb4u);
  /* 11c91fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91fb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c91fb9 je 0x11c92016 */
  if (C.zf) goto L_11c92016;
  /* 11c91fbb mov esi, dword ptr [0x11c97174] */
  ESI = (r32((uint32_t)(0x11c97174)));
  /* 11c91fc1 push 0x11c9aee0 */
  push32((uint32_t)(0x11c9aee0u));
  /* 11c91fc6 call esi */
  call_ind((uint32_t)(ESI), 0x11c91fc8u);
  /* 11c91fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91fcd jne 0x11c9201c */
  if (!C.zf) goto L_11c9201c;
  /* 11c91fcf push 0x11c9b128 */
  push32((uint32_t)(0x11c9b128u));
  /* 11c91fd4 call esi */
  call_ind((uint32_t)(ESI), 0x11c91fd6u);
  /* 11c91fd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c91fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c91fdb jne 0x11c9201c */
  if (!C.zf) goto L_11c9201c;
  /* 11c91fdd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91fdf push 4 */
  push32((uint32_t)(0x4u));
  /* 11c91fe1 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91fe3u);
  /* 11c91fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91fe5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c91fe7 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91fe9u);
  /* 11c91fe9 mov ebp, dword ptr [0x11c970ec] */
  EBP = (r32((uint32_t)(0x11c970ec)));
  /* 11c91fef push 0x11c98440 */
  push32((uint32_t)(0x11c98440u));
  /* 11c91ff4 call ebp */
  call_ind((uint32_t)(EBP), 0x11c91ff6u);
  /* 11c91ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c91ff8 push 0x11c9af38 */
  push32((uint32_t)(0x11c9af38u));
  /* 11c91ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c91fff call edi */
  call_ind((uint32_t)(EDI), 0x11c92001u);
  /* 11c92001 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11c92003 call dword ptr [0x11c97154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97154))), 0x11c92009u);
  /* 11c92009 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11c9200b call ebx */
  call_ind((uint32_t)(EBX), 0x11c9200du);
  /* 11c9200d push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11c9200f call ebx */
  call_ind((uint32_t)(EBX), 0x11c92011u);
  /* 11c92011 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92014 jmp 0x11c92022 */
  goto L_11c92022;
L_11c92016:;
  /* 11c92016 mov esi, dword ptr [0x11c97174] */
  ESI = (r32((uint32_t)(0x11c97174)));
L_11c9201c:;
  /* 11c9201c mov ebp, dword ptr [0x11c970ec] */
  EBP = (r32((uint32_t)(0x11c970ec)));
L_11c92022:;
  /* 11c92022 push 0x11c9b040 */
  push32((uint32_t)(0x11c9b040u));
  /* 11c92027 push 0x11c9b060 */
  push32((uint32_t)(0x11c9b060u));
  /* 11c9202c push 0x11c9af10 */
  push32((uint32_t)(0x11c9af10u));
  /* 11c92031 push 0x11c9af48 */
  push32((uint32_t)(0x11c9af48u));
  /* 11c92036 mov ecx, 0x11c9afe8 */
  ECX = (0x11c9afe8u);
  /* 11c9203b call 0x11c911e0 */
  push32(0x11c92040u); f_11c911e0();
  /* 11c92040 push 0x11c9b060 */
  push32((uint32_t)(0x11c9b060u));
  /* 11c92045 push 0x11c9b040 */
  push32((uint32_t)(0x11c9b040u));
  /* 11c9204a push 0x11c9af10 */
  push32((uint32_t)(0x11c9af10u));
  /* 11c9204f push 0x11c9af48 */
  push32((uint32_t)(0x11c9af48u));
  /* 11c92054 mov ecx, 0x11c9aff8 */
  ECX = (0x11c9aff8u);
  /* 11c92059 call 0x11c911e0 */
  push32(0x11c9205eu); f_11c911e0();
  /* 11c9205e push 0x11c9b048 */
  push32((uint32_t)(0x11c9b048u));
  /* 11c92063 push 0x11c9b028 */
  push32((uint32_t)(0x11c9b028u));
  /* 11c92068 push 0x11c9af08 */
  push32((uint32_t)(0x11c9af08u));
  /* 11c9206d push 0x11c9af40 */
  push32((uint32_t)(0x11c9af40u));
  /* 11c92072 mov ecx, 0x11c9b078 */
  ECX = (0x11c9b078u);
  /* 11c92077 call 0x11c911e0 */
  push32(0x11c9207cu); f_11c911e0();
  /* 11c9207c push 0x11c9b028 */
  push32((uint32_t)(0x11c9b028u));
  /* 11c92081 push 0x11c9b048 */
  push32((uint32_t)(0x11c9b048u));
  /* 11c92086 push 0x11c9af08 */
  push32((uint32_t)(0x11c9af08u));
  /* 11c9208b push 0x11c9af40 */
  push32((uint32_t)(0x11c9af40u));
  /* 11c92090 mov ecx, 0x11c9b088 */
  ECX = (0x11c9b088u);
  /* 11c92095 call 0x11c911e0 */
  push32(0x11c9209au); f_11c911e0();
  /* 11c9209a push 0x11c9b0d8 */
  push32((uint32_t)(0x11c9b0d8u));
  /* 11c9209f push 0x11c9b0e8 */
  push32((uint32_t)(0x11c9b0e8u));
  /* 11c920a4 push 0x11c9af70 */
  push32((uint32_t)(0x11c9af70u));
  /* 11c920a9 push 0x11c9af80 */
  push32((uint32_t)(0x11c9af80u));
  /* 11c920ae mov ecx, 0x11c9b0a0 */
  ECX = (0x11c9b0a0u);
  /* 11c920b3 call 0x11c911e0 */
  push32(0x11c920b8u); f_11c911e0();
  /* 11c920b8 push 0x11c9b0e8 */
  push32((uint32_t)(0x11c9b0e8u));
  /* 11c920bd push 0x11c9b0d8 */
  push32((uint32_t)(0x11c9b0d8u));
  /* 11c920c2 push 0x11c9af70 */
  push32((uint32_t)(0x11c9af70u));
  /* 11c920c7 push 0x11c9af80 */
  push32((uint32_t)(0x11c9af80u));
  /* 11c920cc mov ecx, 0x11c9b0b0 */
  ECX = (0x11c9b0b0u);
  /* 11c920d1 call 0x11c911e0 */
  push32(0x11c920d6u); f_11c911e0();
  /* 11c920d6 push 0x11c9b0e0 */
  push32((uint32_t)(0x11c9b0e0u));
  /* 11c920db push 0x11c9b0d0 */
  push32((uint32_t)(0x11c9b0d0u));
  /* 11c920e0 push 0x11c9af78 */
  push32((uint32_t)(0x11c9af78u));
  /* 11c920e5 push 0x11c9af88 */
  push32((uint32_t)(0x11c9af88u));
  /* 11c920ea mov ecx, 0x11c9b030 */
  ECX = (0x11c9b030u);
  /* 11c920ef call 0x11c911e0 */
  push32(0x11c920f4u); f_11c911e0();
  /* 11c920f4 push 0x11c9b0d0 */
  push32((uint32_t)(0x11c9b0d0u));
  /* 11c920f9 push 0x11c9b0e0 */
  push32((uint32_t)(0x11c9b0e0u));
  /* 11c920fe push 0x11c9af78 */
  push32((uint32_t)(0x11c9af78u));
  /* 11c92103 push 0x11c9af88 */
  push32((uint32_t)(0x11c9af88u));
  /* 11c92108 mov ecx, 0x11c9b050 */
  ECX = (0x11c9b050u);
  /* 11c9210d call 0x11c911e0 */
  push32(0x11c92112u); f_11c911e0();
  /* 11c92112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92114 call dword ptr [0x11c97134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97134))), 0x11c9211au);
  /* 11c9211a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9211d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c9211f je 0x11c92131 */
  if (C.zf) goto L_11c92131;
  /* 11c92121 push 0x11c98434 */
  push32((uint32_t)(0x11c98434u));
  /* 11c92126 call ebp */
  call_ind((uint32_t)(EBP), 0x11c92128u);
  /* 11c92128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9212b call dword ptr [0x11c97138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97138))), 0x11c92131u);
L_11c92131:;
  /* 11c92131 push 0x11c9af98 */
  push32((uint32_t)(0x11c9af98u));
  /* 11c92136 call esi */
  call_ind((uint32_t)(ESI), 0x11c92138u);
  /* 11c92138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9213b cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9213e jg 0x11c92150 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c92150;
  /* 11c92140 push 0x11c98428 */
  push32((uint32_t)(0x11c98428u));
  /* 11c92145 call ebp */
  call_ind((uint32_t)(EBP), 0x11c92147u);
  /* 11c92147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9214a call dword ptr [0x11c9713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9713c))), 0x11c92150u);
L_11c92150:;
  /* 11c92150 pop edi */
  EDI = (pop32());
  /* 11c92151 pop esi */
  ESI = (pop32());
  /* 11c92152 pop ebp */
  EBP = (pop32());
  /* 11c92153 pop ebx */
  EBX = (pop32());
  /* 11c92154 ret  */
  ESPCHK(0x11c91840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002160 @ 0x11c92160 (118 bytes, 42 insns) */
void f_11c92160(void) {
  FTRACE(0x11c92160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92160 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92161 push esi */
  push32((uint32_t)(ESI));
  /* 11c92162 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c92166 push edi */
  push32((uint32_t)(EDI));
  /* 11c92167 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c9216b push esi */
  push32((uint32_t)(ESI));
  /* 11c9216c push edi */
  push32((uint32_t)(EDI));
  /* 11c9216d call dword ptr [0x11c970cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970cc))), 0x11c92173u);
  /* 11c92173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92178 je 0x11c921d2 */
  if (C.zf) goto L_11c921d2;
  /* 11c9217a push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11c9217f push edi */
  push32((uint32_t)(EDI));
  /* 11c92180 push 0x11c9afa8 */
  push32((uint32_t)(0x11c9afa8u));
  /* 11c92185 push 0x11c9af68 */
  push32((uint32_t)(0x11c9af68u));
  /* 11c9218a call dword ptr [0x11c970d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970d0))), 0x11c92190u);
  /* 11c92190 mov ebx, dword ptr [0x11c970d4] */
  EBX = (r32((uint32_t)(0x11c970d4)));
  /* 11c92196 push esi */
  push32((uint32_t)(ESI));
  /* 11c92197 push 0x11c9af68 */
  push32((uint32_t)(0x11c9af68u));
  /* 11c9219c call ebx */
  call_ind((uint32_t)(EBX), 0x11c9219eu);
  /* 11c9219e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c921a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c921a3 jne 0x11c921d2 */
  if (!C.zf) goto L_11c921d2;
  /* 11c921a5 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c921a9 push eax */
  push32((uint32_t)(EAX));
  /* 11c921aa push 0x11c9af68 */
  push32((uint32_t)(0x11c9af68u));
  /* 11c921af call ebx */
  call_ind((uint32_t)(EBX), 0x11c921b1u);
  /* 11c921b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c921b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c921b6 je 0x11c921d2 */
  if (C.zf) goto L_11c921d2;
  /* 11c921b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c921ba push edi */
  push32((uint32_t)(EDI));
  /* 11c921bb call dword ptr [0x11c97164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97164))), 0x11c921c1u);
  /* 11c921c1 push esi */
  push32((uint32_t)(ESI));
  /* 11c921c2 call dword ptr [0x11c970d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970d8))), 0x11c921c8u);
  /* 11c921c8 push esi */
  push32((uint32_t)(ESI));
  /* 11c921c9 call dword ptr [0x11c97110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97110))), 0x11c921cfu);
  /* 11c921cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c921d2:;
  /* 11c921d2 pop edi */
  EDI = (pop32());
  /* 11c921d3 pop esi */
  ESI = (pop32());
  /* 11c921d4 pop ebx */
  EBX = (pop32());
  /* 11c921d5 ret  */
  ESPCHK(0x11c92160u, _esp0);
  ESP += 4; return;
}

/* FUN_100021e0 @ 0x11c921e0 (94 bytes, 38 insns) */
void f_11c921e0(void) {
  FTRACE(0x11c921e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c921e0 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 11c921e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c921e6 je 0x11c9223d */
  if (C.zf) goto L_11c9223d;
  /* 11c921e8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c921ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c921ee jle 0x11c9223d */
  if ((C.zf||C.sf!=C.of)) goto L_11c9223d;
  /* 11c921f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c921f1 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c921f5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c921f6 mov ebp, dword ptr [0x11c9716c] */
  EBP = (r32((uint32_t)(0x11c9716c)));
  /* 11c921fc push esi */
  push32((uint32_t)(ESI));
  /* 11c921fd mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 11c92201 push edi */
  push32((uint32_t)(EDI));
  /* 11c92202 mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11c92206 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
L_11c9220a:;
  /* 11c9220a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9220c call dword ptr [0x11c970e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970e8))), 0x11c92212u);
  /* 11c92212 mov ecx, 5 */
  ECX = (0x5u);
  /* 11c92217 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c92219 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11c9221c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c9221f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c92222 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c92225 push eax */
  push32((uint32_t)(EAX));
  /* 11c92226 push esi */
  push32((uint32_t)(ESI));
  /* 11c92227 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92228 push edi */
  push32((uint32_t)(EDI));
  /* 11c92229 call ebp */
  call_ind((uint32_t)(EBP), 0x11c9222bu);
  /* 11c9222b mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 11c9222f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92232 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c92233 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11c92237 jne 0x11c9220a */
  if (!C.zf) goto L_11c9220a;
  /* 11c92239 pop edi */
  EDI = (pop32());
  /* 11c9223a pop esi */
  ESI = (pop32());
  /* 11c9223b pop ebp */
  EBP = (pop32());
  /* 11c9223c pop ebx */
  EBX = (pop32());
L_11c9223d:;
  /* 11c9223d ret  */
  ESPCHK(0x11c921e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002240 @ 0x11c92240 (72 bytes, 31 insns) */
void f_11c92240(void) {
  FTRACE(0x11c92240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92240 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92241 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c92245 push esi */
  push32((uint32_t)(ESI));
  /* 11c92246 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c9224a push edi */
  push32((uint32_t)(EDI));
  /* 11c9224b mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c9224f push esi */
  push32((uint32_t)(ESI));
  /* 11c92250 push edi */
  push32((uint32_t)(EDI));
  /* 11c92251 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92252 call dword ptr [0x11c97124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97124))), 0x11c92258u);
  /* 11c92258 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9225b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9225d je 0x11c92284 */
  if (C.zf) goto L_11c92284;
  /* 11c9225f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92261 push esi */
  push32((uint32_t)(ESI));
  /* 11c92262 push edi */
  push32((uint32_t)(EDI));
  /* 11c92263 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92264 call dword ptr [0x11c97128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97128))), 0x11c9226au);
  /* 11c9226a mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11c9226e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92270 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92272 push eax */
  push32((uint32_t)(EAX));
  /* 11c92273 push esi */
  push32((uint32_t)(ESI));
  /* 11c92274 call dword ptr [0x11c97130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97130))), 0x11c9227au);
  /* 11c9227a push esi */
  push32((uint32_t)(ESI));
  /* 11c9227b call dword ptr [0x11c97110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97110))), 0x11c92281u);
  /* 11c92281 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c92284:;
  /* 11c92284 pop edi */
  EDI = (pop32());
  /* 11c92285 pop esi */
  ESI = (pop32());
  /* 11c92286 pop ebx */
  EBX = (pop32());
  /* 11c92287 ret  */
  ESPCHK(0x11c92240u, _esp0);
  ESP += 4; return;
}

/* FUN_10002290 @ 0x11c92290 (113 bytes, 41 insns) */
void f_11c92290(void) {
  FTRACE(0x11c92290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92290 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c92294 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92295 push esi */
  push32((uint32_t)(ESI));
  /* 11c92296 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11c9229a push edi */
  push32((uint32_t)(EDI));
  /* 11c9229b push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11c922a0 push eax */
  push32((uint32_t)(EAX));
  /* 11c922a1 push 0x11c9afa8 */
  push32((uint32_t)(0x11c9afa8u));
  /* 11c922a6 push esi */
  push32((uint32_t)(ESI));
  /* 11c922a7 call dword ptr [0x11c970d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970d0))), 0x11c922adu);
  /* 11c922ad mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11c922b1 push edi */
  push32((uint32_t)(EDI));
  /* 11c922b2 push esi */
  push32((uint32_t)(ESI));
  /* 11c922b3 call dword ptr [0x11c97160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97160))), 0x11c922b9u);
  /* 11c922b9 push edi */
  push32((uint32_t)(EDI));
  /* 11c922ba mov ebx, eax */
  EBX = (EAX);
  /* 11c922bc call dword ptr [0x11c97174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97174))), 0x11c922c2u);
  /* 11c922c2 mov ecx, eax */
  ECX = (EAX);
  /* 11c922c4 mov eax, 0x55555556 */
  EAX = (0x55555556u);
  /* 11c922c9 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 11c922cb mov ecx, edx */
  ECX = (EDX);
  /* 11c922cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c922d0 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11c922d3 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c922d5 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c922d7 jge 0x11c922fd */
  if ((C.sf==C.of)) goto L_11c922fd;
  /* 11c922d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c922db push edi */
  push32((uint32_t)(EDI));
  /* 11c922dc call dword ptr [0x11c97164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97164))), 0x11c922e2u);
  /* 11c922e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c922e4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11c922e9 push esi */
  push32((uint32_t)(ESI));
  /* 11c922ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11c922ec call dword ptr [0x11c97130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97130))), 0x11c922f2u);
  /* 11c922f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c922f4 call dword ptr [0x11c97110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97110))), 0x11c922fau);
  /* 11c922fa add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c922fd:;
  /* 11c922fd pop edi */
  EDI = (pop32());
  /* 11c922fe pop esi */
  ESI = (pop32());
  /* 11c922ff pop ebx */
  EBX = (pop32());
  /* 11c92300 ret  */
  ESPCHK(0x11c92290u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x11c92310 (217 bytes, 57 insns) */
void f_11c92310(void) {
  FTRACE(0x11c92310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92310 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c92314 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92317 jne 0x11c923a5 */
  if (!C.zf) goto L_11c923a5;
  /* 11c9231d call dword ptr [0x11c97078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97078))), 0x11c92323u);
  /* 11c92323 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c92325 mov dword ptr [0x11c9b244], eax */
  w32((uint32_t)(0x11c9b244), (EAX));
  /* 11c9232a call 0x11c92f20 */
  push32(0x11c9232fu); f_11c92f20();
  /* 11c9232f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92331 pop ecx */
  ECX = (pop32());
  /* 11c92332 je 0x11c92370 */
  if (C.zf) goto L_11c92370;
  /* 11c92334 mov eax, dword ptr [0x11c9b244] */
  EAX = (r32((uint32_t)(0x11c9b244)));
  /* 11c92339 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c9233b mov cl, byte ptr [0x11c9b245] */
  CL = (r8((uint32_t)(0x11c9b245)));
  /* 11c92341 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c92346 shr dword ptr [0x11c9b244], 0x10 */
  w32((uint32_t)(0x11c9b244), (sh_shr((uint32_t)(r32((uint32_t)(0x11c9b244))), (0x10u)&0x1f, 32)));
  /* 11c9234d mov dword ptr [0x11c9b24c], eax */
  w32((uint32_t)(0x11c9b24c), (EAX));
  /* 11c92352 mov dword ptr [0x11c9b250], ecx */
  w32((uint32_t)(0x11c9b250), (ECX));
  /* 11c92358 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c9235b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9235d mov dword ptr [0x11c9b248], eax */
  w32((uint32_t)(0x11c9b248), (EAX));
  /* 11c92362 call 0x11c925d7 */
  push32(0x11c92367u); f_11c925d7();
  /* 11c92367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92369 jne 0x11c92374 */
  if (!C.zf) goto L_11c92374;
  /* 11c9236b call 0x11c92f7d */
  push32(0x11c92370u); f_11c92f7d();
L_11c92370:;
  /* 11c92370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c92372 jmp 0x11c923e6 */
  goto L_11c923e6;
L_11c92374:;
  /* 11c92374 call dword ptr [0x11c97074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97074))), 0x11c9237au);
  /* 11c9237a mov dword ptr [0x11c9b8f8], eax */
  w32((uint32_t)(0x11c9b8f8), (EAX));
  /* 11c9237f call 0x11c92c79 */
  push32(0x11c92384u); f_11c92c79();
  /* 11c92384 mov dword ptr [0x11c9b230], eax */
  w32((uint32_t)(0x11c9b230), (EAX));
  /* 11c92389 call 0x11c92763 */
  push32(0x11c9238eu); f_11c92763();
  /* 11c9238e call 0x11c92a2c */
  push32(0x11c92393u); f_11c92a2c();
  /* 11c92393 call 0x11c92973 */
  push32(0x11c92398u); f_11c92973();
  /* 11c92398 call 0x11c924b9 */
  push32(0x11c9239du); f_11c924b9();
  /* 11c9239d inc dword ptr [0x11c9b22c] */
  { uint32_t _r=(r32((uint32_t)(0x11c9b22c)))+1; w32((uint32_t)(0x11c9b22c), (_r)); fl_inc(_r,32); }
  /* 11c923a3 jmp 0x11c923e3 */
  goto L_11c923e3;
L_11c923a5:;
  /* 11c923a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c923a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c923a9 jne 0x11c923d7 */
  if (!C.zf) goto L_11c923d7;
  /* 11c923ab cmp dword ptr [0x11c9b22c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b22c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c923b1 jle 0x11c92370 */
  if ((C.zf||C.sf!=C.of)) goto L_11c92370;
  /* 11c923b3 dec dword ptr [0x11c9b22c] */
  { uint32_t _r=(r32((uint32_t)(0x11c9b22c)))-1; w32((uint32_t)(0x11c9b22c), (_r)); fl_dec(_r,32); }
  /* 11c923b9 cmp dword ptr [0x11c9b27c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b27c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c923bf jne 0x11c923c6 */
  if (!C.zf) goto L_11c923c6;
  /* 11c923c1 call 0x11c924f7 */
  push32(0x11c923c6u); f_11c924f7();
L_11c923c6:;
  /* 11c923c6 call 0x11c9291f */
  push32(0x11c923cbu); f_11c9291f();
  /* 11c923cb call 0x11c9262b */
  push32(0x11c923d0u); f_11c9262b();
  /* 11c923d0 call 0x11c92f7d */
  push32(0x11c923d5u); f_11c92f7d();
  /* 11c923d5 jmp 0x11c923e3 */
  goto L_11c923e3;
L_11c923d7:;
  /* 11c923d7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c923da jne 0x11c923e3 */
  if (!C.zf) goto L_11c923e3;
  /* 11c923dc push ecx */
  push32((uint32_t)(ECX));
  /* 11c923dd call 0x11c926c3 */
  push32(0x11c923e2u); f_11c926c3();
  /* 11c923e2 pop ecx */
  ECX = (pop32());
L_11c923e3:;
  /* 11c923e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c923e5 pop eax */
  EAX = (pop32());
L_11c923e6:;
  /* 11c923e6 ret 0xc */
  ESPCHK(0x11c92310u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11c923e9 (157 bytes, 73 insns) */
void f_11c923e9(void) {
  FTRACE(0x11c923e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c923e9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c923ea mov ebp, esp */
  EBP = (ESP);
  /* 11c923ec push ebx */
  push32((uint32_t)(EBX));
  /* 11c923ed mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c923f0 push esi */
  push32((uint32_t)(ESI));
  /* 11c923f1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c923f4 push edi */
  push32((uint32_t)(EDI));
  /* 11c923f5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c923f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c923fa jne 0x11c92405 */
  if (!C.zf) goto L_11c92405;
  /* 11c923fc cmp dword ptr [0x11c9b22c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92403 jmp 0x11c9242b */
  goto L_11c9242b;
L_11c92405:;
  /* 11c92405 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92408 je 0x11c9240f */
  if (C.zf) goto L_11c9240f;
  /* 11c9240a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9240d jne 0x11c92431 */
  if (!C.zf) goto L_11c92431;
L_11c9240f:;
  /* 11c9240f mov eax, dword ptr [0x11c9b8fc] */
  EAX = (r32((uint32_t)(0x11c9b8fc)));
  /* 11c92414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92416 je 0x11c92421 */
  if (C.zf) goto L_11c92421;
  /* 11c92418 push edi */
  push32((uint32_t)(EDI));
  /* 11c92419 push esi */
  push32((uint32_t)(ESI));
  /* 11c9241a push ebx */
  push32((uint32_t)(EBX));
  /* 11c9241b call eax */
  call_ind((uint32_t)(EAX), 0x11c9241du);
  /* 11c9241d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9241f je 0x11c9242d */
  if (C.zf) goto L_11c9242d;
L_11c92421:;
  /* 11c92421 push edi */
  push32((uint32_t)(EDI));
  /* 11c92422 push esi */
  push32((uint32_t)(ESI));
  /* 11c92423 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92424 call 0x11c92310 */
  push32(0x11c92429u); f_11c92310();
  /* 11c92429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11c9242b:;
  /* 11c9242b jne 0x11c92431 */
  if (!C.zf) goto L_11c92431;
L_11c9242d:;
  /* 11c9242d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9242f jmp 0x11c9247f */
  goto L_11c9247f;
L_11c92431:;
  /* 11c92431 push edi */
  push32((uint32_t)(EDI));
  /* 11c92432 push esi */
  push32((uint32_t)(ESI));
  /* 11c92433 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92434 call 0x11c91000 */
  push32(0x11c92439u); f_11c91000();
  /* 11c92439 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9243c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c9243f jne 0x11c9244d */
  if (!C.zf) goto L_11c9244d;
  /* 11c92441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92443 jne 0x11c9247c */
  if (!C.zf) goto L_11c9247c;
  /* 11c92445 push edi */
  push32((uint32_t)(EDI));
  /* 11c92446 push eax */
  push32((uint32_t)(EAX));
  /* 11c92447 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92448 call 0x11c92310 */
  push32(0x11c9244du); f_11c92310();
L_11c9244d:;
  /* 11c9244d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c9244f je 0x11c92456 */
  if (C.zf) goto L_11c92456;
  /* 11c92451 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92454 jne 0x11c9247c */
  if (!C.zf) goto L_11c9247c;
L_11c92456:;
  /* 11c92456 push edi */
  push32((uint32_t)(EDI));
  /* 11c92457 push esi */
  push32((uint32_t)(ESI));
  /* 11c92458 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92459 call 0x11c92310 */
  push32(0x11c9245eu); f_11c92310();
  /* 11c9245e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92460 jne 0x11c92465 */
  if (!C.zf) goto L_11c92465;
  /* 11c92462 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11c92465:;
  /* 11c92465 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92469 je 0x11c9247c */
  if (C.zf) goto L_11c9247c;
  /* 11c9246b mov eax, dword ptr [0x11c9b8fc] */
  EAX = (r32((uint32_t)(0x11c9b8fc)));
  /* 11c92470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92472 je 0x11c9247c */
  if (C.zf) goto L_11c9247c;
  /* 11c92474 push edi */
  push32((uint32_t)(EDI));
  /* 11c92475 push esi */
  push32((uint32_t)(ESI));
  /* 11c92476 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92477 call eax */
  call_ind((uint32_t)(EAX), 0x11c92479u);
  /* 11c92479 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11c9247c:;
  /* 11c9247c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11c9247f:;
  /* 11c9247f pop edi */
  EDI = (pop32());
  /* 11c92480 pop esi */
  ESI = (pop32());
  /* 11c92481 pop ebx */
  EBX = (pop32());
  /* 11c92482 pop ebp */
  EBP = (pop32());
  /* 11c92483 ret 0xc */
  ESPCHK(0x11c923e9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11c92486 (48 bytes, 15 insns) */
void f_11c92486(void) {
  FTRACE(0x11c92486u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92486 mov eax, dword ptr [0x11c9b238] */
  EAX = (r32((uint32_t)(0x11c9b238)));
  /* 11c9248b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9248e je 0x11c9249d */
  if (C.zf) goto L_11c9249d;
  /* 11c92490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92492 jne 0x11c924a2 */
  if (!C.zf) goto L_11c924a2;
  /* 11c92494 cmp dword ptr [0x11c9b23c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b23c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9249b jne 0x11c924a2 */
  if (!C.zf) goto L_11c924a2;
L_11c9249d:;
  /* 11c9249d call 0x11c93025 */
  push32(0x11c924a2u); f_11c93025();
L_11c924a2:;
  /* 11c924a2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c924a6 call 0x11c9305e */
  push32(0x11c924abu); f_11c9305e();
  /* 11c924ab push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c924b0 call dword ptr [0x11c9847c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9847c))), 0x11c924b6u);
  /* 11c924b6 pop ecx */
  ECX = (pop32());
  /* 11c924b7 pop ecx */
  ECX = (pop32());
  /* 11c924b8 ret  */
  ESPCHK(0x11c92486u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b9 @ 0x11c924b9 (45 bytes, 12 insns) */
void f_11c924b9(void) {
  FTRACE(0x11c924b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c924b9 mov eax, dword ptr [0x11c9b8f4] */
  EAX = (r32((uint32_t)(0x11c9b8f4)));
  /* 11c924be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c924c0 je 0x11c924c4 */
  if (C.zf) goto L_11c924c4;
  /* 11c924c2 call eax */
  call_ind((uint32_t)(EAX), 0x11c924c4u);
L_11c924c4:;
  /* 11c924c4 push 0x11c98030 */
  push32((uint32_t)(0x11c98030u));
  /* 11c924c9 push 0x11c98028 */
  push32((uint32_t)(0x11c98028u));
  /* 11c924ce call 0x11c925bd */
  push32(0x11c924d3u); f_11c925bd();
  /* 11c924d3 push 0x11c98024 */
  push32((uint32_t)(0x11c98024u));
  /* 11c924d8 push 0x11c98000 */
  push32((uint32_t)(0x11c98000u));
  /* 11c924dd call 0x11c925bd */
  push32(0x11c924e2u); f_11c925bd();
  /* 11c924e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c924e5 ret  */
  ESPCHK(0x11c924b9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11c924e6 (17 bytes, 6 insns) */
void f_11c924e6(void) {
  FTRACE(0x11c924e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c924e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c924e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c924ea push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c924ee call 0x11c92506 */
  push32(0x11c924f3u); f_11c92506();
  /* 11c924f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c924f6 ret  */
  ESPCHK(0x11c924e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100024f7 @ 0x11c924f7 (15 bytes, 6 insns) */
void f_11c924f7(void) {
  FTRACE(0x11c924f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c924f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c924f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c924fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c924fd call 0x11c92506 */
  push32(0x11c92502u); f_11c92506();
  /* 11c92502 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92505 ret  */
  ESPCHK(0x11c924f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002506 @ 0x11c92506 (163 bytes, 53 insns) */
void f_11c92506(void) {
  FTRACE(0x11c92506u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92506 push edi */
  push32((uint32_t)(EDI));
  /* 11c92507 call 0x11c925ab */
  push32(0x11c9250cu); f_11c925ab();
  /* 11c9250c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9250e pop edi */
  EDI = (pop32());
  /* 11c9250f cmp dword ptr [0x11c9b280], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c9b280))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92515 jne 0x11c92528 */
  if (!C.zf) goto L_11c92528;
  /* 11c92517 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c9251b call dword ptr [0x11c97084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97084))), 0x11c92521u);
  /* 11c92521 push eax */
  push32((uint32_t)(EAX));
  /* 11c92522 call dword ptr [0x11c97080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97080))), 0x11c92528u);
L_11c92528:;
  /* 11c92528 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9252d push ebx */
  push32((uint32_t)(EBX));
  /* 11c9252e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c92532 mov dword ptr [0x11c9b27c], edi */
  w32((uint32_t)(0x11c9b27c), (EDI));
  /* 11c92538 mov byte ptr [0x11c9b278], bl */
  w8((uint32_t)(0x11c9b278), (BL));
  /* 11c9253e jne 0x11c9257c */
  if (!C.zf) goto L_11c9257c;
  /* 11c92540 mov eax, dword ptr [0x11c9b8f0] */
  EAX = (r32((uint32_t)(0x11c9b8f0)));
  /* 11c92545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92547 je 0x11c9256b */
  if (C.zf) goto L_11c9256b;
  /* 11c92549 mov ecx, dword ptr [0x11c9b8ec] */
  ECX = (r32((uint32_t)(0x11c9b8ec)));
  /* 11c9254f push esi */
  push32((uint32_t)(ESI));
  /* 11c92550 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11c92553 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92555 jb 0x11c9256a */
  if (C.cf) goto L_11c9256a;
L_11c92557:;
  /* 11c92557 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c92559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9255b je 0x11c9255f */
  if (C.zf) goto L_11c9255f;
  /* 11c9255d call eax */
  call_ind((uint32_t)(EAX), 0x11c9255fu);
L_11c9255f:;
  /* 11c9255f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c92562 cmp esi, dword ptr [0x11c9b8f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c9b8f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92568 jae 0x11c92557 */
  if (!C.cf) goto L_11c92557;
L_11c9256a:;
  /* 11c9256a pop esi */
  ESI = (pop32());
L_11c9256b:;
  /* 11c9256b push 0x11c98038 */
  push32((uint32_t)(0x11c98038u));
  /* 11c92570 push 0x11c98034 */
  push32((uint32_t)(0x11c98034u));
  /* 11c92575 call 0x11c925bd */
  push32(0x11c9257au); f_11c925bd();
  /* 11c9257a pop ecx */
  ECX = (pop32());
  /* 11c9257b pop ecx */
  ECX = (pop32());
L_11c9257c:;
  /* 11c9257c push 0x11c98040 */
  push32((uint32_t)(0x11c98040u));
  /* 11c92581 push 0x11c9803c */
  push32((uint32_t)(0x11c9803cu));
  /* 11c92586 call 0x11c925bd */
  push32(0x11c9258bu); f_11c925bd();
  /* 11c9258b pop ecx */
  ECX = (pop32());
  /* 11c9258c pop ecx */
  ECX = (pop32());
  /* 11c9258d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c9258f pop ebx */
  EBX = (pop32());
  /* 11c92590 je 0x11c92599 */
  if (C.zf) goto L_11c92599;
  /* 11c92592 call 0x11c925b4 */
  push32(0x11c92597u); f_11c925b4();
  /* 11c92597 pop edi */
  EDI = (pop32());
  /* 11c92598 ret  */
  ESPCHK(0x11c92506u, _esp0);
  ESP += 4; return;
L_11c92599:;
  /* 11c92599 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c9259d mov dword ptr [0x11c9b280], edi */
  w32((uint32_t)(0x11c9b280), (EDI));
  /* 11c925a3 call dword ptr [0x11c9707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9707c))), 0x11c925a9u);
  /* 11c925a9 pop edi */
  EDI = (pop32());
  /* 11c925aa ret  */
  ESPCHK(0x11c92506u, _esp0);
  ESP += 4; return;
}

/* FUN_100025ab @ 0x11c925ab (9 bytes, 4 insns) */
void f_11c925ab(void) {
  FTRACE(0x11c925abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c925ab push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c925ad call 0x11c93246 */
  push32(0x11c925b2u); f_11c93246();
  /* 11c925b2 pop ecx */
  ECX = (pop32());
  /* 11c925b3 ret  */
  ESPCHK(0x11c925abu, _esp0);
  ESP += 4; return;
}

/* FUN_100025b4 @ 0x11c925b4 (9 bytes, 4 insns) */
void f_11c925b4(void) {
  FTRACE(0x11c925b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c925b4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c925b6 call 0x11c932a7 */
  push32(0x11c925bbu); f_11c932a7();
  /* 11c925bb pop ecx */
  ECX = (pop32());
  /* 11c925bc ret  */
  ESPCHK(0x11c925b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100025bd @ 0x11c925bd (26 bytes, 12 insns) */
void f_11c925bd(void) {
  FTRACE(0x11c925bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c925bd push esi */
  push32((uint32_t)(ESI));
  /* 11c925be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11c925c2:;
  /* 11c925c2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c925c6 jae 0x11c925d5 */
  if (!C.cf) goto L_11c925d5;
  /* 11c925c8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c925ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c925cc je 0x11c925d0 */
  if (C.zf) goto L_11c925d0;
  /* 11c925ce call eax */
  call_ind((uint32_t)(EAX), 0x11c925d0u);
L_11c925d0:;
  /* 11c925d0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c925d3 jmp 0x11c925c2 */
  goto L_11c925c2;
L_11c925d5:;
  /* 11c925d5 pop esi */
  ESI = (pop32());
  /* 11c925d6 ret  */
  ESPCHK(0x11c925bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100025d7 @ 0x11c925d7 (84 bytes, 32 insns) */
void f_11c925d7(void) {
  FTRACE(0x11c925d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c925d7 push esi */
  push32((uint32_t)(ESI));
  /* 11c925d8 call 0x11c931b1 */
  push32(0x11c925ddu); f_11c931b1();
  /* 11c925dd call dword ptr [0x11c97090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97090))), 0x11c925e3u);
  /* 11c925e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c925e6 mov dword ptr [0x11c98480], eax */
  w32((uint32_t)(0x11c98480), (EAX));
  /* 11c925eb je 0x11c92627 */
  if (C.zf) goto L_11c92627;
  /* 11c925ed push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c925ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11c925f1 call 0x11c932bc */
  push32(0x11c925f6u); f_11c932bc();
  /* 11c925f6 mov esi, eax */
  ESI = (EAX);
  /* 11c925f8 pop ecx */
  ECX = (pop32());
  /* 11c925f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c925fb pop ecx */
  ECX = (pop32());
  /* 11c925fc je 0x11c92627 */
  if (C.zf) goto L_11c92627;
  /* 11c925fe push esi */
  push32((uint32_t)(ESI));
  /* 11c925ff push dword ptr [0x11c98480] */
  push32((uint32_t)(r32((uint32_t)(0x11c98480))));
  /* 11c92605 call dword ptr [0x11c9708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9708c))), 0x11c9260bu);
  /* 11c9260b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9260d je 0x11c92627 */
  if (C.zf) goto L_11c92627;
  /* 11c9260f push esi */
  push32((uint32_t)(ESI));
  /* 11c92610 call 0x11c92649 */
  push32(0x11c92615u); f_11c92649();
  /* 11c92615 pop ecx */
  ECX = (pop32());
  /* 11c92616 call dword ptr [0x11c97088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97088))), 0x11c9261cu);
  /* 11c9261c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c92620 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c92622 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c92624 pop eax */
  EAX = (pop32());
  /* 11c92625 pop esi */
  ESI = (pop32());
  /* 11c92626 ret  */
  ESPCHK(0x11c925d7u, _esp0);
  ESP += 4; return;
L_11c92627:;
  /* 11c92627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c92629 pop esi */
  ESI = (pop32());
  /* 11c9262a ret  */
  ESPCHK(0x11c925d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000262b @ 0x11c9262b (30 bytes, 8 insns) */
void f_11c9262b(void) {
  FTRACE(0x11c9262bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9262b call 0x11c931da */
  push32(0x11c92630u); f_11c931da();
  /* 11c92630 mov eax, dword ptr [0x11c98480] */
  EAX = (r32((uint32_t)(0x11c98480)));
  /* 11c92635 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92638 je 0x11c92648 */
  if (C.zf) goto L_11c92648;
  /* 11c9263a push eax */
  push32((uint32_t)(EAX));
  /* 11c9263b call dword ptr [0x11c97094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97094))), 0x11c92641u);
  /* 11c92641 or dword ptr [0x11c98480], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c98480)))|(0xffffffffu); w32((uint32_t)(0x11c98480), (_r)); fl_logic(_r,32); }
L_11c92648:;
  /* 11c92648 ret  */
  ESPCHK(0x11c9262bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002649 @ 0x11c92649 (19 bytes, 4 insns) */
void f_11c92649(void) {
  FTRACE(0x11c92649u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92649 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c9264d mov dword ptr [eax + 0x50], 0x11c98600 */
  w32((uint32_t)(EAX + 0x50), (0x11c98600u));
  /* 11c92654 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11c9265b ret  */
  ESPCHK(0x11c92649u, _esp0);
  ESP += 4; return;
}

/* FUN_1000265c @ 0x11c9265c (103 bytes, 38 insns) */
void f_11c9265c(void) {
  FTRACE(0x11c9265cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9265c push esi */
  push32((uint32_t)(ESI));
  /* 11c9265d push edi */
  push32((uint32_t)(EDI));
  /* 11c9265e call dword ptr [0x11c97000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97000))), 0x11c92664u);
  /* 11c92664 push dword ptr [0x11c98480] */
  push32((uint32_t)(r32((uint32_t)(0x11c98480))));
  /* 11c9266a mov edi, eax */
  EDI = (EAX);
  /* 11c9266c call dword ptr [0x11c97004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97004))), 0x11c92672u);
  /* 11c92672 mov esi, eax */
  ESI = (EAX);
  /* 11c92674 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92676 jne 0x11c926b7 */
  if (!C.zf) goto L_11c926b7;
  /* 11c92678 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c9267a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9267c call 0x11c932bc */
  push32(0x11c92681u); f_11c932bc();
  /* 11c92681 mov esi, eax */
  ESI = (EAX);
  /* 11c92683 pop ecx */
  ECX = (pop32());
  /* 11c92684 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92686 pop ecx */
  ECX = (pop32());
  /* 11c92687 je 0x11c926af */
  if (C.zf) goto L_11c926af;
  /* 11c92689 push esi */
  push32((uint32_t)(ESI));
  /* 11c9268a push dword ptr [0x11c98480] */
  push32((uint32_t)(r32((uint32_t)(0x11c98480))));
  /* 11c92690 call dword ptr [0x11c9708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9708c))), 0x11c92696u);
  /* 11c92696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92698 je 0x11c926af */
  if (C.zf) goto L_11c926af;
  /* 11c9269a push esi */
  push32((uint32_t)(ESI));
  /* 11c9269b call 0x11c92649 */
  push32(0x11c926a0u); f_11c92649();
  /* 11c926a0 pop ecx */
  ECX = (pop32());
  /* 11c926a1 call dword ptr [0x11c97088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97088))), 0x11c926a7u);
  /* 11c926a7 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c926ab mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c926ad jmp 0x11c926b7 */
  goto L_11c926b7;
L_11c926af:;
  /* 11c926af push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c926b1 call 0x11c92486 */
  push32(0x11c926b6u); f_11c92486();
  /* 11c926b6 pop ecx */
  ECX = (pop32());
L_11c926b7:;
  /* 11c926b7 push edi */
  push32((uint32_t)(EDI));
  /* 11c926b8 call dword ptr [0x11c97098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97098))), 0x11c926beu);
  /* 11c926be mov eax, esi */
  EAX = (ESI);
  /* 11c926c0 pop edi */
  EDI = (pop32());
  /* 11c926c1 pop esi */
  ESI = (pop32());
  /* 11c926c2 ret  */
  ESPCHK(0x11c9265cu, _esp0);
  ESP += 4; return;
}

/* FUN_100026c3 @ 0x11c926c3 (160 bytes, 62 insns) */
void f_11c926c3(void) {
  FTRACE(0x11c926c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c926c3 mov eax, dword ptr [0x11c98480] */
  EAX = (r32((uint32_t)(0x11c98480)));
  /* 11c926c8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c926cb je 0x11c92762 */
  if (C.zf) goto L_11c92762;
  /* 11c926d1 push esi */
  push32((uint32_t)(ESI));
  /* 11c926d2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c926d6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c926d8 jne 0x11c926e7 */
  if (!C.zf) goto L_11c926e7;
  /* 11c926da push eax */
  push32((uint32_t)(EAX));
  /* 11c926db call dword ptr [0x11c97004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97004))), 0x11c926e1u);
  /* 11c926e1 mov esi, eax */
  ESI = (EAX);
  /* 11c926e3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c926e5 je 0x11c92753 */
  if (C.zf) goto L_11c92753;
L_11c926e7:;
  /* 11c926e7 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c926ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c926ec je 0x11c926f5 */
  if (C.zf) goto L_11c926f5;
  /* 11c926ee push eax */
  push32((uint32_t)(EAX));
  /* 11c926ef call 0x11c933f9 */
  push32(0x11c926f4u); f_11c933f9();
  /* 11c926f4 pop ecx */
  ECX = (pop32());
L_11c926f5:;
  /* 11c926f5 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c926f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c926fa je 0x11c92703 */
  if (C.zf) goto L_11c92703;
  /* 11c926fc push eax */
  push32((uint32_t)(EAX));
  /* 11c926fd call 0x11c933f9 */
  push32(0x11c92702u); f_11c933f9();
  /* 11c92702 pop ecx */
  ECX = (pop32());
L_11c92703:;
  /* 11c92703 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11c92706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92708 je 0x11c92711 */
  if (C.zf) goto L_11c92711;
  /* 11c9270a push eax */
  push32((uint32_t)(EAX));
  /* 11c9270b call 0x11c933f9 */
  push32(0x11c92710u); f_11c933f9();
  /* 11c92710 pop ecx */
  ECX = (pop32());
L_11c92711:;
  /* 11c92711 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11c92714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92716 je 0x11c9271f */
  if (C.zf) goto L_11c9271f;
  /* 11c92718 push eax */
  push32((uint32_t)(EAX));
  /* 11c92719 call 0x11c933f9 */
  push32(0x11c9271eu); f_11c933f9();
  /* 11c9271e pop ecx */
  ECX = (pop32());
L_11c9271f:;
  /* 11c9271f mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11c92722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92724 je 0x11c9272d */
  if (C.zf) goto L_11c9272d;
  /* 11c92726 push eax */
  push32((uint32_t)(EAX));
  /* 11c92727 call 0x11c933f9 */
  push32(0x11c9272cu); f_11c933f9();
  /* 11c9272c pop ecx */
  ECX = (pop32());
L_11c9272d:;
  /* 11c9272d mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11c92730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92732 je 0x11c9273b */
  if (C.zf) goto L_11c9273b;
  /* 11c92734 push eax */
  push32((uint32_t)(EAX));
  /* 11c92735 call 0x11c933f9 */
  push32(0x11c9273au); f_11c933f9();
  /* 11c9273a pop ecx */
  ECX = (pop32());
L_11c9273b:;
  /* 11c9273b mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c9273e cmp eax, 0x11c98600 */
  { uint32_t _a=(EAX),_b=(0x11c98600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92743 je 0x11c9274c */
  if (C.zf) goto L_11c9274c;
  /* 11c92745 push eax */
  push32((uint32_t)(EAX));
  /* 11c92746 call 0x11c933f9 */
  push32(0x11c9274bu); f_11c933f9();
  /* 11c9274b pop ecx */
  ECX = (pop32());
L_11c9274c:;
  /* 11c9274c push esi */
  push32((uint32_t)(ESI));
  /* 11c9274d call 0x11c933f9 */
  push32(0x11c92752u); f_11c933f9();
  /* 11c92752 pop ecx */
  ECX = (pop32());
L_11c92753:;
  /* 11c92753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92755 push dword ptr [0x11c98480] */
  push32((uint32_t)(r32((uint32_t)(0x11c98480))));
  /* 11c9275b call dword ptr [0x11c9708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9708c))), 0x11c92761u);
  /* 11c92761 pop esi */
  ESI = (pop32());
L_11c92762:;
  /* 11c92762 ret  */
  ESPCHK(0x11c926c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002763 @ 0x11c92763 (444 bytes, 150 insns) */
void f_11c92763(void) {
  FTRACE(0x11c92763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92763 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92764 mov ebp, esp */
  EBP = (ESP);
  /* 11c92766 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c92769 push ebx */
  push32((uint32_t)(EBX));
  /* 11c9276a push esi */
  push32((uint32_t)(ESI));
  /* 11c9276b push edi */
  push32((uint32_t)(EDI));
  /* 11c9276c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c92771 call 0x11c934e2 */
  push32(0x11c92776u); f_11c934e2();
  /* 11c92776 mov esi, eax */
  ESI = (EAX);
  /* 11c92778 pop ecx */
  ECX = (pop32());
  /* 11c92779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c9277b jne 0x11c92785 */
  if (!C.zf) goto L_11c92785;
  /* 11c9277d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c9277f call 0x11c92486 */
  push32(0x11c92784u); f_11c92486();
  /* 11c92784 pop ecx */
  ECX = (pop32());
L_11c92785:;
  /* 11c92785 mov dword ptr [0x11c9b7e0], esi */
  w32((uint32_t)(0x11c9b7e0), (ESI));
  /* 11c9278b mov dword ptr [0x11c9b8e0], 0x20 */
  w32((uint32_t)(0x11c9b8e0), (0x20u));
  /* 11c92795 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11c9279b:;
  /* 11c9279b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9279d jae 0x11c927bd */
  if (!C.cf) goto L_11c927bd;
  /* 11c9279f and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c927a3 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c927a6 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c927aa mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11c927ae mov eax, dword ptr [0x11c9b7e0] */
  EAX = (r32((uint32_t)(0x11c9b7e0)));
  /* 11c927b3 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c927b6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c927bb jmp 0x11c9279b */
  goto L_11c9279b;
L_11c927bd:;
  /* 11c927bd lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11c927c0 push eax */
  push32((uint32_t)(EAX));
  /* 11c927c1 call dword ptr [0x11c970b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970b0))), 0x11c927c7u);
  /* 11c927c7 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c927cc je 0x11c928a3 */
  if (C.zf) goto L_11c928a3;
  /* 11c927d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c927d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c927d7 je 0x11c928a3 */
  if (C.zf) goto L_11c928a3;
  /* 11c927dd mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11c927df lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11c927e2 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11c927e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c927e8 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11c927ed cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c927ef jl 0x11c927f3 */
  if ((C.sf!=C.of)) goto L_11c927f3;
  /* 11c927f1 mov edi, eax */
  EDI = (EAX);
L_11c927f3:;
  /* 11c927f3 cmp dword ptr [0x11c9b8e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c9b8e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c927f9 jge 0x11c92851 */
  if ((C.sf==C.of)) goto L_11c92851;
  /* 11c927fb mov esi, 0x11c9b7e4 */
  ESI = (0x11c9b7e4u);
L_11c92800:;
  /* 11c92800 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c92805 call 0x11c934e2 */
  push32(0x11c9280au); f_11c934e2();
  /* 11c9280a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9280c pop ecx */
  ECX = (pop32());
  /* 11c9280d je 0x11c9284b */
  if (C.zf) goto L_11c9284b;
  /* 11c9280f add dword ptr [0x11c9b8e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b8e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11c9b8e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c92816 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c92818 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11c9281e:;
  /* 11c9281e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92820 jae 0x11c9283e */
  if (!C.cf) goto L_11c9283e;
  /* 11c92822 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c92826 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c92829 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c9282d mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11c92831 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c92833 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92836 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9283c jmp 0x11c9281e */
  goto L_11c9281e;
L_11c9283e:;
  /* 11c9283e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92841 cmp dword ptr [0x11c9b8e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c9b8e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92847 jl 0x11c92800 */
  if ((C.sf!=C.of)) goto L_11c92800;
  /* 11c92849 jmp 0x11c92851 */
  goto L_11c92851;
L_11c9284b:;
  /* 11c9284b mov edi, dword ptr [0x11c9b8e0] */
  EDI = (r32((uint32_t)(0x11c9b8e0)));
L_11c92851:;
  /* 11c92851 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c92853 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c92855 jle 0x11c928a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11c928a3;
L_11c92857:;
  /* 11c92857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c9285a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c9285c cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9285f je 0x11c92899 */
  if (C.zf) goto L_11c92899;
  /* 11c92861 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11c92863 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c92865 je 0x11c92899 */
  if (C.zf) goto L_11c92899;
  /* 11c92867 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c92869 jne 0x11c92876 */
  if (!C.zf) goto L_11c92876;
  /* 11c9286b push ecx */
  push32((uint32_t)(ECX));
  /* 11c9286c call dword ptr [0x11c970ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970ac))), 0x11c92872u);
  /* 11c92872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92874 je 0x11c92899 */
  if (C.zf) goto L_11c92899;
L_11c92876:;
  /* 11c92876 mov ecx, esi */
  ECX = (ESI);
  /* 11c92878 mov eax, esi */
  EAX = (ESI);
  /* 11c9287a sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c9287d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c92880 mov ecx, dword ptr [ecx*4 + 0x11c9b7e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c9b7e0)));
  /* 11c92887 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c9288a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11c9288d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c92890 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c92892 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c92894 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11c92896 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11c92899:;
  /* 11c92899 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c9289d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c9289e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c9289f cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c928a1 jl 0x11c92857 */
  if ((C.sf!=C.of)) goto L_11c92857;
L_11c928a3:;
  /* 11c928a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c928a5:;
  /* 11c928a5 mov ecx, dword ptr [0x11c9b7e0] */
  ECX = (r32((uint32_t)(0x11c9b7e0)));
  /* 11c928ab lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11c928ae cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c928b2 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c928b5 jne 0x11c92904 */
  if (!C.zf) goto L_11c92904;
  /* 11c928b7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c928b9 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11c928bd jne 0x11c928c4 */
  if (!C.zf) goto L_11c928c4;
  /* 11c928bf push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11c928c1 pop eax */
  EAX = (pop32());
  /* 11c928c2 jmp 0x11c928ce */
  goto L_11c928ce;
L_11c928c4:;
  /* 11c928c4 mov eax, ebx */
  EAX = (EBX);
  /* 11c928c6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c928c7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c928c9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c928cb add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c928ce:;
  /* 11c928ce push eax */
  push32((uint32_t)(EAX));
  /* 11c928cf call dword ptr [0x11c970a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970a8))), 0x11c928d5u);
  /* 11c928d5 mov edi, eax */
  EDI = (EAX);
  /* 11c928d7 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c928da je 0x11c928f3 */
  if (C.zf) goto L_11c928f3;
  /* 11c928dc push edi */
  push32((uint32_t)(EDI));
  /* 11c928dd call dword ptr [0x11c970ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970ac))), 0x11c928e3u);
  /* 11c928e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c928e5 je 0x11c928f3 */
  if (C.zf) goto L_11c928f3;
  /* 11c928e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c928ec mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c928ee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c928f1 jne 0x11c928f9 */
  if (!C.zf) goto L_11c928f9;
L_11c928f3:;
  /* 11c928f3 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c928f7 jmp 0x11c92908 */
  goto L_11c92908;
L_11c928f9:;
  /* 11c928f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c928fc jne 0x11c92908 */
  if (!C.zf) goto L_11c92908;
  /* 11c928fe or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c92902 jmp 0x11c92908 */
  goto L_11c92908;
L_11c92904:;
  /* 11c92904 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11c92908:;
  /* 11c92908 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c92909 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9290c jl 0x11c928a5 */
  if ((C.sf!=C.of)) goto L_11c928a5;
  /* 11c9290e push dword ptr [0x11c9b8e0] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b8e0))));
  /* 11c92914 call dword ptr [0x11c970a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970a4))), 0x11c9291au);
  /* 11c9291a pop edi */
  EDI = (pop32());
  /* 11c9291b pop esi */
  ESI = (pop32());
  /* 11c9291c pop ebx */
  EBX = (pop32());
  /* 11c9291d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c9291e ret  */
  ESPCHK(0x11c92763u, _esp0);
  ESP += 4; return;
}

/* FUN_1000291f @ 0x11c9291f (84 bytes, 33 insns) */
void f_11c9291f(void) {
  FTRACE(0x11c9291fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9291f push ebx */
  push32((uint32_t)(EBX));
  /* 11c92920 push esi */
  push32((uint32_t)(ESI));
  /* 11c92921 push edi */
  push32((uint32_t)(EDI));
  /* 11c92922 mov esi, 0x11c9b7e0 */
  ESI = (0x11c9b7e0u);
L_11c92927:;
  /* 11c92927 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c92929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9292b je 0x11c92964 */
  if (C.zf) goto L_11c92964;
  /* 11c9292d mov edi, eax */
  EDI = (EAX);
  /* 11c9292f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92934 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92936 jae 0x11c92959 */
  if (!C.cf) goto L_11c92959;
  /* 11c92938 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11c9293b:;
  /* 11c9293b cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9293f je 0x11c92948 */
  if (C.zf) goto L_11c92948;
  /* 11c92941 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92942 call dword ptr [0x11c970b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970b4))), 0x11c92948u);
L_11c92948:;
  /* 11c92948 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c9294a add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9294d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92952 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92955 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92957 jb 0x11c9293b */
  if (C.cf) goto L_11c9293b;
L_11c92959:;
  /* 11c92959 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c9295b call 0x11c933f9 */
  push32(0x11c92960u); f_11c933f9();
  /* 11c92960 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c92963 pop ecx */
  ECX = (pop32());
L_11c92964:;
  /* 11c92964 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92967 cmp esi, 0x11c9b8e0 */
  { uint32_t _a=(ESI),_b=(0x11c9b8e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9296d jl 0x11c92927 */
  if ((C.sf!=C.of)) goto L_11c92927;
  /* 11c9296f pop edi */
  EDI = (pop32());
  /* 11c92970 pop esi */
  ESI = (pop32());
  /* 11c92971 pop ebx */
  EBX = (pop32());
  /* 11c92972 ret  */
  ESPCHK(0x11c9291fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002973 @ 0x11c92973 (185 bytes, 71 insns) */
void f_11c92973(void) {
  FTRACE(0x11c92973u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92973 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92974 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c92976 cmp dword ptr [0x11c9b8e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b8e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9297c push esi */
  push32((uint32_t)(ESI));
  /* 11c9297d push edi */
  push32((uint32_t)(EDI));
  /* 11c9297e jne 0x11c92985 */
  if (!C.zf) goto L_11c92985;
  /* 11c92980 call 0x11c93b63 */
  push32(0x11c92985u); f_11c93b63();
L_11c92985:;
  /* 11c92985 mov esi, dword ptr [0x11c9b230] */
  ESI = (r32((uint32_t)(0x11c9b230)));
  /* 11c9298b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c9298d:;
  /* 11c9298d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c9298f cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92991 je 0x11c929a5 */
  if (C.zf) goto L_11c929a5;
  /* 11c92993 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92995 je 0x11c92998 */
  if (C.zf) goto L_11c92998;
  /* 11c92997 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c92998:;
  /* 11c92998 push esi */
  push32((uint32_t)(ESI));
  /* 11c92999 call 0x11c93710 */
  push32(0x11c9299eu); f_11c93710();
  /* 11c9299e pop ecx */
  ECX = (pop32());
  /* 11c9299f lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11c929a3 jmp 0x11c9298d */
  goto L_11c9298d;
L_11c929a5:;
  /* 11c929a5 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11c929ac push eax */
  push32((uint32_t)(EAX));
  /* 11c929ad call 0x11c934e2 */
  push32(0x11c929b2u); f_11c934e2();
  /* 11c929b2 mov esi, eax */
  ESI = (EAX);
  /* 11c929b4 pop ecx */
  ECX = (pop32());
  /* 11c929b5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c929b7 mov dword ptr [0x11c9b260], esi */
  w32((uint32_t)(0x11c9b260), (ESI));
  /* 11c929bd jne 0x11c929c7 */
  if (!C.zf) goto L_11c929c7;
  /* 11c929bf push 9 */
  push32((uint32_t)(0x9u));
  /* 11c929c1 call 0x11c92486 */
  push32(0x11c929c6u); f_11c92486();
  /* 11c929c6 pop ecx */
  ECX = (pop32());
L_11c929c7:;
  /* 11c929c7 mov edi, dword ptr [0x11c9b230] */
  EDI = (r32((uint32_t)(0x11c9b230)));
  /* 11c929cd cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c929cf je 0x11c92a0a */
  if (C.zf) goto L_11c92a0a;
  /* 11c929d1 push ebp */
  push32((uint32_t)(EBP));
L_11c929d2:;
  /* 11c929d2 push edi */
  push32((uint32_t)(EDI));
  /* 11c929d3 call 0x11c93710 */
  push32(0x11c929d8u); f_11c93710();
  /* 11c929d8 mov ebp, eax */
  EBP = (EAX);
  /* 11c929da pop ecx */
  ECX = (pop32());
  /* 11c929db inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c929dc cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c929df je 0x11c92a03 */
  if (C.zf) goto L_11c92a03;
  /* 11c929e1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c929e2 call 0x11c934e2 */
  push32(0x11c929e7u); f_11c934e2();
  /* 11c929e7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c929e9 pop ecx */
  ECX = (pop32());
  /* 11c929ea mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c929ec jne 0x11c929f6 */
  if (!C.zf) goto L_11c929f6;
  /* 11c929ee push 9 */
  push32((uint32_t)(0x9u));
  /* 11c929f0 call 0x11c92486 */
  push32(0x11c929f5u); f_11c92486();
  /* 11c929f5 pop ecx */
  ECX = (pop32());
L_11c929f6:;
  /* 11c929f6 push edi */
  push32((uint32_t)(EDI));
  /* 11c929f7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c929f9 call 0x11c93620 */
  push32(0x11c929feu); f_11c93620();
  /* 11c929fe pop ecx */
  ECX = (pop32());
  /* 11c929ff add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92a02 pop ecx */
  ECX = (pop32());
L_11c92a03:;
  /* 11c92a03 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92a05 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92a07 jne 0x11c929d2 */
  if (!C.zf) goto L_11c929d2;
  /* 11c92a09 pop ebp */
  EBP = (pop32());
L_11c92a0a:;
  /* 11c92a0a push dword ptr [0x11c9b230] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b230))));
  /* 11c92a10 call 0x11c933f9 */
  push32(0x11c92a15u); f_11c933f9();
  /* 11c92a15 pop ecx */
  ECX = (pop32());
  /* 11c92a16 mov dword ptr [0x11c9b230], ebx */
  w32((uint32_t)(0x11c9b230), (EBX));
  /* 11c92a1c mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11c92a1e pop edi */
  EDI = (pop32());
  /* 11c92a1f pop esi */
  ESI = (pop32());
  /* 11c92a20 mov dword ptr [0x11c9b8e4], 1 */
  w32((uint32_t)(0x11c9b8e4), (0x1u));
  /* 11c92a2a pop ebx */
  EBX = (pop32());
  /* 11c92a2b ret  */
  ESPCHK(0x11c92973u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a2c @ 0x11c92a2c (153 bytes, 62 insns) */
void f_11c92a2c(void) {
  FTRACE(0x11c92a2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92a2c push ebp */
  push32((uint32_t)(EBP));
  /* 11c92a2d mov ebp, esp */
  EBP = (ESP);
  /* 11c92a2f push ecx */
  push32((uint32_t)(ECX));
  /* 11c92a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11c92a31 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92a32 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c92a34 cmp dword ptr [0x11c9b8e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b8e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92a3a push esi */
  push32((uint32_t)(ESI));
  /* 11c92a3b push edi */
  push32((uint32_t)(EDI));
  /* 11c92a3c jne 0x11c92a43 */
  if (!C.zf) goto L_11c92a43;
  /* 11c92a3e call 0x11c93b63 */
  push32(0x11c92a43u); f_11c93b63();
L_11c92a43:;
  /* 11c92a43 mov esi, 0x11c9b284 */
  ESI = (0x11c9b284u);
  /* 11c92a48 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c92a4d push esi */
  push32((uint32_t)(ESI));
  /* 11c92a4e push ebx */
  push32((uint32_t)(EBX));
  /* 11c92a4f call dword ptr [0x11c970b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970b8))), 0x11c92a55u);
  /* 11c92a55 mov eax, dword ptr [0x11c9b8f8] */
  EAX = (r32((uint32_t)(0x11c9b8f8)));
  /* 11c92a5a mov dword ptr [0x11c9b270], esi */
  w32((uint32_t)(0x11c9b270), (ESI));
  /* 11c92a60 mov edi, esi */
  EDI = (ESI);
  /* 11c92a62 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92a64 je 0x11c92a68 */
  if (C.zf) goto L_11c92a68;
  /* 11c92a66 mov edi, eax */
  EDI = (EAX);
L_11c92a68:;
  /* 11c92a68 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c92a6b push eax */
  push32((uint32_t)(EAX));
  /* 11c92a6c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c92a6f push eax */
  push32((uint32_t)(EAX));
  /* 11c92a70 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92a71 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92a72 push edi */
  push32((uint32_t)(EDI));
  /* 11c92a73 call 0x11c92ac5 */
  push32(0x11c92a78u); f_11c92ac5();
  /* 11c92a78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c92a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c92a7e lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11c92a81 push eax */
  push32((uint32_t)(EAX));
  /* 11c92a82 call 0x11c934e2 */
  push32(0x11c92a87u); f_11c934e2();
  /* 11c92a87 mov esi, eax */
  ESI = (EAX);
  /* 11c92a89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92a8c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92a8e jne 0x11c92a98 */
  if (!C.zf) goto L_11c92a98;
  /* 11c92a90 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c92a92 call 0x11c92486 */
  push32(0x11c92a97u); f_11c92486();
  /* 11c92a97 pop ecx */
  ECX = (pop32());
L_11c92a98:;
  /* 11c92a98 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c92a9b push eax */
  push32((uint32_t)(EAX));
  /* 11c92a9c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c92a9f push eax */
  push32((uint32_t)(EAX));
  /* 11c92aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c92aa3 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11c92aa6 push eax */
  push32((uint32_t)(EAX));
  /* 11c92aa7 push esi */
  push32((uint32_t)(ESI));
  /* 11c92aa8 push edi */
  push32((uint32_t)(EDI));
  /* 11c92aa9 call 0x11c92ac5 */
  push32(0x11c92aaeu); f_11c92ac5();
  /* 11c92aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c92ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92ab4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c92ab5 mov dword ptr [0x11c9b258], esi */
  w32((uint32_t)(0x11c9b258), (ESI));
  /* 11c92abb pop edi */
  EDI = (pop32());
  /* 11c92abc pop esi */
  ESI = (pop32());
  /* 11c92abd mov dword ptr [0x11c9b254], eax */
  w32((uint32_t)(0x11c9b254), (EAX));
  /* 11c92ac2 pop ebx */
  EBX = (pop32());
  /* 11c92ac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c92ac4 ret  */
  ESPCHK(0x11c92a2cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac5 @ 0x11c92ac5 (436 bytes, 187 insns) */
void f_11c92ac5(void) {
  FTRACE(0x11c92ac5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92ac5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92ac6 mov ebp, esp */
  EBP = (ESP);
  /* 11c92ac8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c92acb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c92ace push ebx */
  push32((uint32_t)(EBX));
  /* 11c92acf push esi */
  push32((uint32_t)(ESI));
  /* 11c92ad0 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c92ad3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c92ad6 push edi */
  push32((uint32_t)(EDI));
  /* 11c92ad7 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c92ada mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11c92ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c92ae3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c92ae5 je 0x11c92aef */
  if (C.zf) goto L_11c92aef;
  /* 11c92ae7 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c92ae9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92aec mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c92aef:;
  /* 11c92aef cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92af2 jne 0x11c92b38 */
  if (!C.zf) goto L_11c92b38;
L_11c92af4:;
  /* 11c92af4 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c92af7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92af8 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92afb je 0x11c92b26 */
  if (C.zf) goto L_11c92b26;
  /* 11c92afd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c92aff je 0x11c92b26 */
  if (C.zf) goto L_11c92b26;
  /* 11c92b01 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c92b04 test byte ptr [edx + 0x11c9b6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c9b6c1)))&(0x4u); fl_logic(_r,8); }
  /* 11c92b0b je 0x11c92b19 */
  if (C.zf) goto L_11c92b19;
  /* 11c92b0d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92b0f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92b11 je 0x11c92b19 */
  if (C.zf) goto L_11c92b19;
  /* 11c92b13 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92b15 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c92b17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c92b18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c92b19:;
  /* 11c92b19 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92b1b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92b1d je 0x11c92af4 */
  if (C.zf) goto L_11c92af4;
  /* 11c92b1f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92b21 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c92b23 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c92b24 jmp 0x11c92af4 */
  goto L_11c92af4;
L_11c92b26:;
  /* 11c92b26 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92b28 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92b2a je 0x11c92b30 */
  if (C.zf) goto L_11c92b30;
  /* 11c92b2c and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c92b2f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c92b30:;
  /* 11c92b30 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b33 jne 0x11c92b7b */
  if (!C.zf) goto L_11c92b7b;
  /* 11c92b35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92b36 jmp 0x11c92b7b */
  goto L_11c92b7b;
L_11c92b38:;
  /* 11c92b38 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92b3a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92b3c je 0x11c92b43 */
  if (C.zf) goto L_11c92b43;
  /* 11c92b3e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92b40 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c92b42 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c92b43:;
  /* 11c92b43 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92b45 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92b46 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c92b49 test byte ptr [ebx + 0x11c9b6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c9b6c1)))&(0x4u); fl_logic(_r,8); }
  /* 11c92b50 je 0x11c92b5e */
  if (C.zf) goto L_11c92b5e;
  /* 11c92b52 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92b54 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92b56 je 0x11c92b5d */
  if (C.zf) goto L_11c92b5d;
  /* 11c92b58 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c92b5a mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11c92b5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c92b5d:;
  /* 11c92b5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c92b5e:;
  /* 11c92b5e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b61 je 0x11c92b6c */
  if (C.zf) goto L_11c92b6c;
  /* 11c92b63 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c92b65 je 0x11c92b70 */
  if (C.zf) goto L_11c92b70;
  /* 11c92b67 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b6a jne 0x11c92b38 */
  if (!C.zf) goto L_11c92b38;
L_11c92b6c:;
  /* 11c92b6c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c92b6e jne 0x11c92b73 */
  if (!C.zf) goto L_11c92b73;
L_11c92b70:;
  /* 11c92b70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c92b71 jmp 0x11c92b7b */
  goto L_11c92b7b;
L_11c92b73:;
  /* 11c92b73 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92b75 je 0x11c92b7b */
  if (C.zf) goto L_11c92b7b;
  /* 11c92b77 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11c92b7b:;
  /* 11c92b7b and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11c92b7f:;
  /* 11c92b7f cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b82 je 0x11c92c68 */
  if (C.zf) goto L_11c92c68;
L_11c92b88:;
  /* 11c92b88 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92b8a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b8d je 0x11c92b94 */
  if (C.zf) goto L_11c92b94;
  /* 11c92b8f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b92 jne 0x11c92b97 */
  if (!C.zf) goto L_11c92b97;
L_11c92b94:;
  /* 11c92b94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92b95 jmp 0x11c92b88 */
  goto L_11c92b88;
L_11c92b97:;
  /* 11c92b97 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92b9a je 0x11c92c68 */
  if (C.zf) goto L_11c92c68;
  /* 11c92ba0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c92ba2 je 0x11c92bac */
  if (C.zf) goto L_11c92bac;
  /* 11c92ba4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c92ba6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92ba9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c92bac:;
  /* 11c92bac mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c92baf inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11c92bb1:;
  /* 11c92bb1 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11c92bb8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c92bba:;
  /* 11c92bba cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92bbd jne 0x11c92bc3 */
  if (!C.zf) goto L_11c92bc3;
  /* 11c92bbf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92bc0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c92bc1 jmp 0x11c92bba */
  goto L_11c92bba;
L_11c92bc3:;
  /* 11c92bc3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92bc6 jne 0x11c92bf4 */
  if (!C.zf) goto L_11c92bf4;
  /* 11c92bc8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c92bcb jne 0x11c92bf2 */
  if (!C.zf) goto L_11c92bf2;
  /* 11c92bcd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c92bcf cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92bd2 je 0x11c92be1 */
  if (C.zf) goto L_11c92be1;
  /* 11c92bd4 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92bd8 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11c92bdb jne 0x11c92be1 */
  if (!C.zf) goto L_11c92be1;
  /* 11c92bdd mov eax, edx */
  EAX = (EDX);
  /* 11c92bdf jmp 0x11c92be4 */
  goto L_11c92be4;
L_11c92be1:;
  /* 11c92be1 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11c92be4:;
  /* 11c92be4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c92be7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c92be9 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92bec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11c92bef mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11c92bf2:;
  /* 11c92bf2 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11c92bf4:;
  /* 11c92bf4 mov edx, ebx */
  EDX = (EBX);
  /* 11c92bf6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c92bf7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c92bf9 je 0x11c92c09 */
  if (C.zf) goto L_11c92c09;
  /* 11c92bfb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c92bfc:;
  /* 11c92bfc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92bfe je 0x11c92c04 */
  if (C.zf) goto L_11c92c04;
  /* 11c92c00 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11c92c03 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c92c04:;
  /* 11c92c04 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92c06 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c92c07 jne 0x11c92bfc */
  if (!C.zf) goto L_11c92bfc;
L_11c92c09:;
  /* 11c92c09 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92c0b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c92c0d je 0x11c92c59 */
  if (C.zf) goto L_11c92c59;
  /* 11c92c0f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92c13 jne 0x11c92c1f */
  if (!C.zf) goto L_11c92c1f;
  /* 11c92c15 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92c18 je 0x11c92c59 */
  if (C.zf) goto L_11c92c59;
  /* 11c92c1a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92c1d je 0x11c92c59 */
  if (C.zf) goto L_11c92c59;
L_11c92c1f:;
  /* 11c92c1f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92c23 je 0x11c92c53 */
  if (C.zf) goto L_11c92c53;
  /* 11c92c25 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92c27 je 0x11c92c42 */
  if (C.zf) goto L_11c92c42;
  /* 11c92c29 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c92c2c test byte ptr [ebx + 0x11c9b6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c9b6c1)))&(0x4u); fl_logic(_r,8); }
  /* 11c92c33 je 0x11c92c3b */
  if (C.zf) goto L_11c92c3b;
  /* 11c92c35 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c92c37 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c92c38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92c39 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c92c3b:;
  /* 11c92c3b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c92c3d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c92c3f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c92c40 jmp 0x11c92c51 */
  goto L_11c92c51;
L_11c92c42:;
  /* 11c92c42 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c92c45 test byte ptr [edx + 0x11c9b6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c9b6c1)))&(0x4u); fl_logic(_r,8); }
  /* 11c92c4c je 0x11c92c51 */
  if (C.zf) goto L_11c92c51;
  /* 11c92c4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92c4f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c92c51:;
  /* 11c92c51 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c92c53:;
  /* 11c92c53 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92c54 jmp 0x11c92bb1 */
  goto L_11c92bb1;
L_11c92c59:;
  /* 11c92c59 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c92c5b je 0x11c92c61 */
  if (C.zf) goto L_11c92c61;
  /* 11c92c5d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c92c60 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c92c61:;
  /* 11c92c61 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c92c63 jmp 0x11c92b7f */
  goto L_11c92b7f;
L_11c92c68:;
  /* 11c92c68 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c92c6a je 0x11c92c6f */
  if (C.zf) goto L_11c92c6f;
  /* 11c92c6c and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c92c6f:;
  /* 11c92c6f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c92c72 pop edi */
  EDI = (pop32());
  /* 11c92c73 pop esi */
  ESI = (pop32());
  /* 11c92c74 pop ebx */
  EBX = (pop32());
  /* 11c92c75 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11c92c77 pop ebp */
  EBP = (pop32());
  /* 11c92c78 ret  */
  ESPCHK(0x11c92ac5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c79 @ 0x11c92c79 (306 bytes, 132 insns) */
void f_11c92c79(void) {
  FTRACE(0x11c92c79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92c79 push ecx */
  push32((uint32_t)(ECX));
  /* 11c92c7a push ecx */
  push32((uint32_t)(ECX));
  /* 11c92c7b mov eax, dword ptr [0x11c9b388] */
  EAX = (r32((uint32_t)(0x11c9b388)));
  /* 11c92c80 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92c81 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92c82 mov ebp, dword ptr [0x11c970a0] */
  EBP = (r32((uint32_t)(0x11c970a0)));
  /* 11c92c88 push esi */
  push32((uint32_t)(ESI));
  /* 11c92c89 push edi */
  push32((uint32_t)(EDI));
  /* 11c92c8a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c92c8c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c92c8e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c92c90 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92c92 jne 0x11c92cc7 */
  if (!C.zf) goto L_11c92cc7;
  /* 11c92c94 call ebp */
  call_ind((uint32_t)(EBP), 0x11c92c96u);
  /* 11c92c96 mov esi, eax */
  ESI = (EAX);
  /* 11c92c98 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92c9a je 0x11c92ca8 */
  if (C.zf) goto L_11c92ca8;
  /* 11c92c9c mov dword ptr [0x11c9b388], 1 */
  w32((uint32_t)(0x11c9b388), (0x1u));
  /* 11c92ca6 jmp 0x11c92cd0 */
  goto L_11c92cd0;
L_11c92ca8:;
  /* 11c92ca8 call dword ptr [0x11c9709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9709c))), 0x11c92caeu);
  /* 11c92cae mov edi, eax */
  EDI = (EAX);
  /* 11c92cb0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92cb2 je 0x11c92da2 */
  if (C.zf) goto L_11c92da2;
  /* 11c92cb8 mov dword ptr [0x11c9b388], 2 */
  w32((uint32_t)(0x11c9b388), (0x2u));
  /* 11c92cc2 jmp 0x11c92d56 */
  goto L_11c92d56;
L_11c92cc7:;
  /* 11c92cc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92cca jne 0x11c92d51 */
  if (!C.zf) goto L_11c92d51;
L_11c92cd0:;
  /* 11c92cd0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92cd2 jne 0x11c92ce0 */
  if (!C.zf) goto L_11c92ce0;
  /* 11c92cd4 call ebp */
  call_ind((uint32_t)(EBP), 0x11c92cd6u);
  /* 11c92cd6 mov esi, eax */
  ESI = (EAX);
  /* 11c92cd8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92cda je 0x11c92da2 */
  if (C.zf) goto L_11c92da2;
L_11c92ce0:;
  /* 11c92ce0 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c92ce3 mov eax, esi */
  EAX = (ESI);
  /* 11c92ce5 je 0x11c92cf5 */
  if (C.zf) goto L_11c92cf5;
L_11c92ce7:;
  /* 11c92ce7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92ce8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92ce9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c92cec jne 0x11c92ce7 */
  if (!C.zf) goto L_11c92ce7;
  /* 11c92cee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92cef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92cf0 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c92cf3 jne 0x11c92ce7 */
  if (!C.zf) goto L_11c92ce7;
L_11c92cf5:;
  /* 11c92cf5 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c92cf7 mov edi, dword ptr [0x11c970c4] */
  EDI = (r32((uint32_t)(0x11c970c4)));
  /* 11c92cfd sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c92cff push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d00 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92d02 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d03 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d04 push eax */
  push32((uint32_t)(EAX));
  /* 11c92d05 push esi */
  push32((uint32_t)(ESI));
  /* 11c92d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d07 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d08 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11c92d0c call edi */
  call_ind((uint32_t)(EDI), 0x11c92d0eu);
  /* 11c92d0e mov ebp, eax */
  EBP = (EAX);
  /* 11c92d10 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92d12 je 0x11c92d46 */
  if (C.zf) goto L_11c92d46;
  /* 11c92d14 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92d15 call 0x11c934e2 */
  push32(0x11c92d1au); f_11c934e2();
  /* 11c92d1a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92d1c pop ecx */
  ECX = (pop32());
  /* 11c92d1d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c92d21 je 0x11c92d46 */
  if (C.zf) goto L_11c92d46;
  /* 11c92d23 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d24 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d25 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92d26 push eax */
  push32((uint32_t)(EAX));
  /* 11c92d27 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11c92d2b push esi */
  push32((uint32_t)(ESI));
  /* 11c92d2c push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d2d push ebx */
  push32((uint32_t)(EBX));
  /* 11c92d2e call edi */
  call_ind((uint32_t)(EDI), 0x11c92d30u);
  /* 11c92d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92d32 jne 0x11c92d42 */
  if (!C.zf) goto L_11c92d42;
  /* 11c92d34 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c92d38 call 0x11c933f9 */
  push32(0x11c92d3du); f_11c933f9();
  /* 11c92d3d pop ecx */
  ECX = (pop32());
  /* 11c92d3e mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11c92d42:;
  /* 11c92d42 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11c92d46:;
  /* 11c92d46 push esi */
  push32((uint32_t)(ESI));
  /* 11c92d47 call dword ptr [0x11c970c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970c0))), 0x11c92d4du);
  /* 11c92d4d mov eax, ebx */
  EAX = (EBX);
  /* 11c92d4f jmp 0x11c92da4 */
  goto L_11c92da4;
L_11c92d51:;
  /* 11c92d51 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92d54 jne 0x11c92da2 */
  if (!C.zf) goto L_11c92da2;
L_11c92d56:;
  /* 11c92d56 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92d58 jne 0x11c92d66 */
  if (!C.zf) goto L_11c92d66;
  /* 11c92d5a call dword ptr [0x11c9709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9709c))), 0x11c92d60u);
  /* 11c92d60 mov edi, eax */
  EDI = (EAX);
  /* 11c92d62 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92d64 je 0x11c92da2 */
  if (C.zf) goto L_11c92da2;
L_11c92d66:;
  /* 11c92d66 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92d68 mov eax, edi */
  EAX = (EDI);
  /* 11c92d6a je 0x11c92d76 */
  if (C.zf) goto L_11c92d76;
L_11c92d6c:;
  /* 11c92d6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92d6d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92d6f jne 0x11c92d6c */
  if (!C.zf) goto L_11c92d6c;
  /* 11c92d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92d72 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92d74 jne 0x11c92d6c */
  if (!C.zf) goto L_11c92d6c;
L_11c92d76:;
  /* 11c92d76 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c92d78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92d79 mov ebp, eax */
  EBP = (EAX);
  /* 11c92d7b push ebp */
  push32((uint32_t)(EBP));
  /* 11c92d7c call 0x11c934e2 */
  push32(0x11c92d81u); f_11c934e2();
  /* 11c92d81 mov esi, eax */
  ESI = (EAX);
  /* 11c92d83 pop ecx */
  ECX = (pop32());
  /* 11c92d84 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92d86 jne 0x11c92d8c */
  if (!C.zf) goto L_11c92d8c;
  /* 11c92d88 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c92d8a jmp 0x11c92d97 */
  goto L_11c92d97;
L_11c92d8c:;
  /* 11c92d8c push ebp */
  push32((uint32_t)(EBP));
  /* 11c92d8d push edi */
  push32((uint32_t)(EDI));
  /* 11c92d8e push esi */
  push32((uint32_t)(ESI));
  /* 11c92d8f call 0x11c93b80 */
  push32(0x11c92d94u); f_11c93b80();
  /* 11c92d94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c92d97:;
  /* 11c92d97 push edi */
  push32((uint32_t)(EDI));
  /* 11c92d98 call dword ptr [0x11c970bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970bc))), 0x11c92d9eu);
  /* 11c92d9e mov eax, esi */
  EAX = (ESI);
  /* 11c92da0 jmp 0x11c92da4 */
  goto L_11c92da4;
L_11c92da2:;
  /* 11c92da2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c92da4:;
  /* 11c92da4 pop edi */
  EDI = (pop32());
  /* 11c92da5 pop esi */
  ESI = (pop32());
  /* 11c92da6 pop ebp */
  EBP = (pop32());
  /* 11c92da7 pop ebx */
  EBX = (pop32());
  /* 11c92da8 pop ecx */
  ECX = (pop32());
  /* 11c92da9 pop ecx */
  ECX = (pop32());
  /* 11c92daa ret  */
  ESPCHK(0x11c92c79u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dab @ 0x11c92dab (45 bytes, 17 insns) */
void f_11c92dab(void) {
  FTRACE(0x11c92dabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92dab push esi */
  push32((uint32_t)(ESI));
  /* 11c92dac mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c92db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92db2 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c92db5 call dword ptr [0x11c97070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97070))), 0x11c92dbbu);
  /* 11c92dbb cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c92dc0 jne 0x11c92dd6 */
  if (!C.zf) goto L_11c92dd6;
  /* 11c92dc2 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11c92dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c92dc7 je 0x11c92dd6 */
  if (C.zf) goto L_11c92dd6;
  /* 11c92dc9 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92dcb mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11c92dce mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11c92dd0 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11c92dd3 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11c92dd6:;
  /* 11c92dd6 pop esi */
  ESI = (pop32());
  /* 11c92dd7 ret  */
  ESPCHK(0x11c92dabu, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd8 @ 0x11c92dd8 (328 bytes, 115 insns) */
void f_11c92dd8(void) {
  FTRACE(0x11c92dd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92dd8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92dd9 mov ebp, esp */
  EBP = (ESP);
  /* 11c92ddb mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11c92de0 call 0x11c94270 */
  push32(0x11c92de5u); f_11c94270();
  /* 11c92de5 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11c92deb push ebx */
  push32((uint32_t)(EBX));
  /* 11c92dec push eax */
  push32((uint32_t)(EAX));
  /* 11c92ded mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11c92df7 call dword ptr [0x11c97068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97068))), 0x11c92dfdu);
  /* 11c92dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92dff je 0x11c92e1b */
  if (C.zf) goto L_11c92e1b;
  /* 11c92e01 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92e08 jne 0x11c92e1b */
  if (!C.zf) goto L_11c92e1b;
  /* 11c92e0a cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92e11 jb 0x11c92e1b */
  if (C.cf) goto L_11c92e1b;
  /* 11c92e13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c92e15 pop eax */
  EAX = (pop32());
  /* 11c92e16 jmp 0x11c92f1d */
  goto L_11c92f1d;
L_11c92e1b:;
  /* 11c92e1b lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c92e21 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11c92e26 push eax */
  push32((uint32_t)(EAX));
  /* 11c92e27 push 0x11c97198 */
  push32((uint32_t)(0x11c97198u));
  /* 11c92e2c call dword ptr [0x11c9706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9706c))), 0x11c92e32u);
  /* 11c92e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92e34 je 0x11c92f0a */
  if (C.zf) goto L_11c92f0a;
  /* 11c92e3a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c92e3c lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11c92e42 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92e48 je 0x11c92e5d */
  if (C.zf) goto L_11c92e5d;
L_11c92e4a:;
  /* 11c92e4a mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c92e4c cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92e4e jl 0x11c92e58 */
  if ((C.sf!=C.of)) goto L_11c92e58;
  /* 11c92e50 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92e52 jg 0x11c92e58 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c92e58;
  /* 11c92e54 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c92e56 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11c92e58:;
  /* 11c92e58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c92e59 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92e5b jne 0x11c92e4a */
  if (!C.zf) goto L_11c92e4a;
L_11c92e5d:;
  /* 11c92e5d lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c92e63 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11c92e65 push eax */
  push32((uint32_t)(EAX));
  /* 11c92e66 push 0x11c97180 */
  push32((uint32_t)(0x11c97180u));
  /* 11c92e6b call 0x11c94230 */
  push32(0x11c92e70u); f_11c94230();
  /* 11c92e70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92e73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92e75 jne 0x11c92e7f */
  if (!C.zf) goto L_11c92e7f;
  /* 11c92e77 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c92e7d jmp 0x11c92ec8 */
  goto L_11c92ec8;
L_11c92e7f:;
  /* 11c92e7f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11c92e85 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c92e8a push eax */
  push32((uint32_t)(EAX));
  /* 11c92e8b push ebx */
  push32((uint32_t)(EBX));
  /* 11c92e8c call dword ptr [0x11c970b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970b8))), 0x11c92e92u);
  /* 11c92e92 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92e98 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11c92e9e je 0x11c92eb3 */
  if (C.zf) goto L_11c92eb3;
L_11c92ea0:;
  /* 11c92ea0 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c92ea2 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92ea4 jl 0x11c92eae */
  if ((C.sf!=C.of)) goto L_11c92eae;
  /* 11c92ea6 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92ea8 jg 0x11c92eae */
  if ((!C.zf&&C.sf==C.of)) goto L_11c92eae;
  /* 11c92eaa sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c92eac mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11c92eae:;
  /* 11c92eae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c92eaf cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92eb1 jne 0x11c92ea0 */
  if (!C.zf) goto L_11c92ea0;
L_11c92eb3:;
  /* 11c92eb3 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11c92eb9 push eax */
  push32((uint32_t)(EAX));
  /* 11c92eba lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c92ec0 push eax */
  push32((uint32_t)(EAX));
  /* 11c92ec1 call 0x11c941b0 */
  push32(0x11c92ec6u); f_11c941b0();
  /* 11c92ec6 pop ecx */
  ECX = (pop32());
  /* 11c92ec7 pop ecx */
  ECX = (pop32());
L_11c92ec8:;
  /* 11c92ec8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92eca je 0x11c92f0a */
  if (C.zf) goto L_11c92f0a;
  /* 11c92ecc push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11c92ece push eax */
  push32((uint32_t)(EAX));
  /* 11c92ecf call 0x11c940f0 */
  push32(0x11c92ed4u); f_11c940f0();
  /* 11c92ed4 pop ecx */
  ECX = (pop32());
  /* 11c92ed5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92ed7 pop ecx */
  ECX = (pop32());
  /* 11c92ed8 je 0x11c92f0a */
  if (C.zf) goto L_11c92f0a;
  /* 11c92eda inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c92edb mov ecx, eax */
  ECX = (EAX);
  /* 11c92edd cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92edf je 0x11c92eef */
  if (C.zf) goto L_11c92eef;
L_11c92ee1:;
  /* 11c92ee1 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92ee4 jne 0x11c92eea */
  if (!C.zf) goto L_11c92eea;
  /* 11c92ee6 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11c92ee8 jmp 0x11c92eeb */
  goto L_11c92eeb;
L_11c92eea:;
  /* 11c92eea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11c92eeb:;
  /* 11c92eeb cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92eed jne 0x11c92ee1 */
  if (!C.zf) goto L_11c92ee1;
L_11c92eef:;
  /* 11c92eef push 0xa */
  push32((uint32_t)(0xau));
  /* 11c92ef1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11c92ef3 call 0x11c93eb5 */
  push32(0x11c92ef8u); f_11c93eb5();
  /* 11c92ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92efb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92efe je 0x11c92f1d */
  if (C.zf) goto L_11c92f1d;
  /* 11c92f00 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f03 je 0x11c92f1d */
  if (C.zf) goto L_11c92f1d;
  /* 11c92f05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f08 je 0x11c92f1d */
  if (C.zf) goto L_11c92f1d;
L_11c92f0a:;
  /* 11c92f0a lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c92f0d push eax */
  push32((uint32_t)(EAX));
  /* 11c92f0e call 0x11c92dab */
  push32(0x11c92f13u); f_11c92dab();
  /* 11c92f13 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c92f17 pop ecx */
  ECX = (pop32());
  /* 11c92f18 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c92f1a add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c92f1d:;
  /* 11c92f1d pop ebx */
  EBX = (pop32());
  /* 11c92f1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c92f1f ret  */
  ESPCHK(0x11c92dd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f20 @ 0x11c92f20 (93 bytes, 30 insns) */
void f_11c92f20(void) {
  FTRACE(0x11c92f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c92f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92f24 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f28 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c92f2d sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c92f30 push eax */
  push32((uint32_t)(EAX));
  /* 11c92f31 call dword ptr [0x11c97060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97060))), 0x11c92f37u);
  /* 11c92f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92f39 mov dword ptr [0x11c9b7c8], eax */
  w32((uint32_t)(0x11c9b7c8), (EAX));
  /* 11c92f3e je 0x11c92f76 */
  if (C.zf) goto L_11c92f76;
  /* 11c92f40 call 0x11c92dd8 */
  push32(0x11c92f45u); f_11c92dd8();
  /* 11c92f45 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f48 mov dword ptr [0x11c9b7cc], eax */
  w32((uint32_t)(0x11c9b7cc), (EAX));
  /* 11c92f4d jne 0x11c92f5c */
  if (!C.zf) goto L_11c92f5c;
  /* 11c92f4f push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11c92f54 call 0x11c9429f */
  push32(0x11c92f59u); f_11c9429f();
  /* 11c92f59 pop ecx */
  ECX = (pop32());
  /* 11c92f5a jmp 0x11c92f66 */
  goto L_11c92f66;
L_11c92f5c:;
  /* 11c92f5c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f5f jne 0x11c92f79 */
  if (!C.zf) goto L_11c92f79;
  /* 11c92f61 call 0x11c94af0 */
  push32(0x11c92f66u); f_11c94af0();
L_11c92f66:;
  /* 11c92f66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c92f68 jne 0x11c92f79 */
  if (!C.zf) goto L_11c92f79;
  /* 11c92f6a push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c92f70 call dword ptr [0x11c97064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97064))), 0x11c92f76u);
L_11c92f76:;
  /* 11c92f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c92f78 ret  */
  ESPCHK(0x11c92f20u, _esp0);
  ESP += 4; return;
L_11c92f79:;
  /* 11c92f79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c92f7b pop eax */
  EAX = (pop32());
  /* 11c92f7c ret  */
  ESPCHK(0x11c92f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f7d @ 0x11c92f7d (168 bytes, 56 insns) */
void f_11c92f7d(void) {
  FTRACE(0x11c92f7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c92f7d mov eax, dword ptr [0x11c9b7cc] */
  EAX = (r32((uint32_t)(0x11c9b7cc)));
  /* 11c92f82 push esi */
  push32((uint32_t)(ESI));
  /* 11c92f83 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f86 push edi */
  push32((uint32_t)(EDI));
  /* 11c92f87 jne 0x11c92fef */
  if (!C.zf) goto L_11c92fef;
  /* 11c92f89 push ebx */
  push32((uint32_t)(EBX));
  /* 11c92f8a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c92f8c cmp dword ptr [0x11c9b598], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b598))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92f92 push ebp */
  push32((uint32_t)(EBP));
  /* 11c92f93 mov ebp, dword ptr [0x11c97058] */
  EBP = (r32((uint32_t)(0x11c97058)));
  /* 11c92f99 jle 0x11c92fdb */
  if ((C.zf||C.sf!=C.of)) goto L_11c92fdb;
  /* 11c92f9b mov eax, dword ptr [0x11c9b59c] */
  EAX = (r32((uint32_t)(0x11c9b59c)));
  /* 11c92fa0 mov edi, dword ptr [0x11c9705c] */
  EDI = (r32((uint32_t)(0x11c9705c)));
  /* 11c92fa6 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11c92fa9:;
  /* 11c92fa9 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c92fae push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c92fb3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c92fb5 call edi */
  call_ind((uint32_t)(EDI), 0x11c92fb7u);
  /* 11c92fb7 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c92fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92fbe push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c92fc0 call edi */
  call_ind((uint32_t)(EDI), 0x11c92fc2u);
  /* 11c92fc2 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11c92fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92fc7 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c92fcd call ebp */
  call_ind((uint32_t)(EBP), 0x11c92fcfu);
  /* 11c92fcf add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c92fd2 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c92fd3 cmp ebx, dword ptr [0x11c9b598] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c9b598))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92fd9 jl 0x11c92fa9 */
  if ((C.sf!=C.of)) goto L_11c92fa9;
L_11c92fdb:;
  /* 11c92fdb push dword ptr [0x11c9b59c] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b59c))));
  /* 11c92fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c92fe3 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c92fe9 call ebp */
  call_ind((uint32_t)(EBP), 0x11c92febu);
  /* 11c92feb pop ebp */
  EBP = (pop32());
  /* 11c92fec pop ebx */
  EBX = (pop32());
  /* 11c92fed jmp 0x11c93016 */
  goto L_11c93016;
L_11c92fef:;
  /* 11c92fef cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c92ff2 jne 0x11c93016 */
  if (!C.zf) goto L_11c93016;
  /* 11c92ff4 mov edi, 0x11c98790 */
  EDI = (0x11c98790u);
  /* 11c92ff9 mov esi, edi */
  ESI = (EDI);
L_11c92ffb:;
  /* 11c92ffb mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c92ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93000 je 0x11c93010 */
  if (C.zf) goto L_11c93010;
  /* 11c93002 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c93007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93009 push eax */
  push32((uint32_t)(EAX));
  /* 11c9300a call dword ptr [0x11c9705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9705c))), 0x11c93010u);
L_11c93010:;
  /* 11c93010 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11c93012 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93014 jne 0x11c92ffb */
  if (!C.zf) goto L_11c92ffb;
L_11c93016:;
  /* 11c93016 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c9301c call dword ptr [0x11c97064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97064))), 0x11c93022u);
  /* 11c93022 pop edi */
  EDI = (pop32());
  /* 11c93023 pop esi */
  ESI = (pop32());
  /* 11c93024 ret  */
  ESPCHK(0x11c92f7du, _esp0);
  ESP += 4; return;
}

/* FUN_10003025 @ 0x11c93025 (57 bytes, 18 insns) */
void f_11c93025(void) {
  FTRACE(0x11c93025u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93025 mov eax, dword ptr [0x11c9b238] */
  EAX = (r32((uint32_t)(0x11c9b238)));
  /* 11c9302a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9302d je 0x11c9303c */
  if (C.zf) goto L_11c9303c;
  /* 11c9302f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93031 jne 0x11c9305d */
  if (!C.zf) goto L_11c9305d;
  /* 11c93033 cmp dword ptr [0x11c9b23c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b23c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9303a jne 0x11c9305d */
  if (!C.zf) goto L_11c9305d;
L_11c9303c:;
  /* 11c9303c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11c93041 call 0x11c9305e */
  push32(0x11c93046u); f_11c9305e();
  /* 11c93046 mov eax, dword ptr [0x11c9b38c] */
  EAX = (r32((uint32_t)(0x11c9b38c)));
  /* 11c9304b pop ecx */
  ECX = (pop32());
  /* 11c9304c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9304e je 0x11c93052 */
  if (C.zf) goto L_11c93052;
  /* 11c93050 call eax */
  call_ind((uint32_t)(EAX), 0x11c93052u);
L_11c93052:;
  /* 11c93052 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c93057 call 0x11c9305e */
  push32(0x11c9305cu); f_11c9305e();
  /* 11c9305c pop ecx */
  ECX = (pop32());
L_11c9305d:;
  /* 11c9305d ret  */
  ESPCHK(0x11c93025u, _esp0);
  ESP += 4; return;
}

/* FUN_1000305e @ 0x11c9305e (339 bytes, 100 insns) */
void f_11c9305e(void) {
  FTRACE(0x11c9305eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9305e push ebp */
  push32((uint32_t)(EBP));
  /* 11c9305f mov ebp, esp */
  EBP = (ESP);
  /* 11c93061 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9306a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c9306c mov eax, 0x11c984b0 */
  EAX = (0x11c984b0u);
L_11c93071:;
  /* 11c93071 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93073 je 0x11c93080 */
  if (C.zf) goto L_11c93080;
  /* 11c93075 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93078 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c93079 cmp eax, 0x11c98540 */
  { uint32_t _a=(EAX),_b=(0x11c98540u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9307e jl 0x11c93071 */
  if ((C.sf!=C.of)) goto L_11c93071;
L_11c93080:;
  /* 11c93080 push esi */
  push32((uint32_t)(ESI));
  /* 11c93081 mov esi, ecx */
  ESI = (ECX);
  /* 11c93083 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c93086 cmp edx, dword ptr [esi + 0x11c984b0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11c984b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9308c jne 0x11c931ae */
  if (!C.zf) goto L_11c931ae;
  /* 11c93092 mov eax, dword ptr [0x11c9b238] */
  EAX = (r32((uint32_t)(0x11c9b238)));
  /* 11c93097 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9309a je 0x11c93188 */
  if (C.zf) goto L_11c93188;
  /* 11c930a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c930a2 jne 0x11c930b1 */
  if (!C.zf) goto L_11c930b1;
  /* 11c930a4 cmp dword ptr [0x11c9b23c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b23c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c930ab je 0x11c93188 */
  if (C.zf) goto L_11c93188;
L_11c930b1:;
  /* 11c930b1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c930b7 je 0x11c931ae */
  if (C.zf) goto L_11c931ae;
  /* 11c930bd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c930c3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c930c8 push eax */
  push32((uint32_t)(EAX));
  /* 11c930c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c930cb call dword ptr [0x11c970b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970b8))), 0x11c930d1u);
  /* 11c930d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c930d3 jne 0x11c930e8 */
  if (!C.zf) goto L_11c930e8;
  /* 11c930d5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c930db push 0x11c97488 */
  push32((uint32_t)(0x11c97488u));
  /* 11c930e0 push eax */
  push32((uint32_t)(EAX));
  /* 11c930e1 call 0x11c93620 */
  push32(0x11c930e6u); f_11c93620();
  /* 11c930e6 pop ecx */
  ECX = (pop32());
  /* 11c930e7 pop ecx */
  ECX = (pop32());
L_11c930e8:;
  /* 11c930e8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c930ee push edi */
  push32((uint32_t)(EDI));
  /* 11c930ef push eax */
  push32((uint32_t)(EAX));
  /* 11c930f0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11c930f6 call 0x11c93710 */
  push32(0x11c930fbu); f_11c93710();
  /* 11c930fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c930fc pop ecx */
  ECX = (pop32());
  /* 11c930fd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93100 jbe 0x11c9312b */
  if ((C.cf||C.zf)) goto L_11c9312b;
  /* 11c93102 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c93108 push eax */
  push32((uint32_t)(EAX));
  /* 11c93109 call 0x11c93710 */
  push32(0x11c9310eu); f_11c93710();
  /* 11c9310e mov edi, eax */
  EDI = (EAX);
  /* 11c93110 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c93116 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93119 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c9311b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9311d push 0x11c97484 */
  push32((uint32_t)(0x11c97484u));
  /* 11c93122 push edi */
  push32((uint32_t)(EDI));
  /* 11c93123 call 0x11c951a0 */
  push32(0x11c93128u); f_11c951a0();
  /* 11c93128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c9312b:;
  /* 11c9312b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c93131 push 0x11c97468 */
  push32((uint32_t)(0x11c97468u));
  /* 11c93136 push eax */
  push32((uint32_t)(EAX));
  /* 11c93137 call 0x11c93620 */
  push32(0x11c9313cu); f_11c93620();
  /* 11c9313c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c93142 push edi */
  push32((uint32_t)(EDI));
  /* 11c93143 push eax */
  push32((uint32_t)(EAX));
  /* 11c93144 call 0x11c93630 */
  push32(0x11c93149u); f_11c93630();
  /* 11c93149 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c9314f push 0x11c97464 */
  push32((uint32_t)(0x11c97464u));
  /* 11c93154 push eax */
  push32((uint32_t)(EAX));
  /* 11c93155 call 0x11c93630 */
  push32(0x11c9315au); f_11c93630();
  /* 11c9315a push dword ptr [esi + 0x11c984b4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11c984b4))));
  /* 11c93160 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c93166 push eax */
  push32((uint32_t)(EAX));
  /* 11c93167 call 0x11c93630 */
  push32(0x11c9316cu); f_11c93630();
  /* 11c9316c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11c93171 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c93177 push 0x11c9743c */
  push32((uint32_t)(0x11c9743cu));
  /* 11c9317c push eax */
  push32((uint32_t)(EAX));
  /* 11c9317d call 0x11c95114 */
  push32(0x11c93182u); f_11c95114();
  /* 11c93182 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93185 pop edi */
  EDI = (pop32());
  /* 11c93186 jmp 0x11c931ae */
  goto L_11c931ae;
L_11c93188:;
  /* 11c93188 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c9318b lea esi, [esi + 0x11c984b4] */
  ESI = ((uint32_t)(ESI + 0x11c984b4));
  /* 11c93191 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93193 push eax */
  push32((uint32_t)(EAX));
  /* 11c93194 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c93196 call 0x11c93710 */
  push32(0x11c9319bu); f_11c93710();
  /* 11c9319b pop ecx */
  ECX = (pop32());
  /* 11c9319c push eax */
  push32((uint32_t)(EAX));
  /* 11c9319d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c9319f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11c931a1 call dword ptr [0x11c970a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970a8))), 0x11c931a7u);
  /* 11c931a7 push eax */
  push32((uint32_t)(EAX));
  /* 11c931a8 call dword ptr [0x11c97054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97054))), 0x11c931aeu);
L_11c931ae:;
  /* 11c931ae pop esi */
  ESI = (pop32());
  /* 11c931af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c931b0 ret  */
  ESPCHK(0x11c9305eu, _esp0);
  ESP += 4; return;
}

/* FUN_100031b1 @ 0x11c931b1 (41 bytes, 12 insns) */
void f_11c931b1(void) {
  FTRACE(0x11c931b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c931b1 push esi */
  push32((uint32_t)(ESI));
  /* 11c931b2 mov esi, dword ptr [0x11c97050] */
  ESI = (r32((uint32_t)(0x11c97050)));
  /* 11c931b8 push dword ptr [0x11c98584] */
  push32((uint32_t)(r32((uint32_t)(0x11c98584))));
  /* 11c931be call esi */
  call_ind((uint32_t)(ESI), 0x11c931c0u);
  /* 11c931c0 push dword ptr [0x11c98574] */
  push32((uint32_t)(r32((uint32_t)(0x11c98574))));
  /* 11c931c6 call esi */
  call_ind((uint32_t)(ESI), 0x11c931c8u);
  /* 11c931c8 push dword ptr [0x11c98564] */
  push32((uint32_t)(r32((uint32_t)(0x11c98564))));
  /* 11c931ce call esi */
  call_ind((uint32_t)(ESI), 0x11c931d0u);
  /* 11c931d0 push dword ptr [0x11c98544] */
  push32((uint32_t)(r32((uint32_t)(0x11c98544))));
  /* 11c931d6 call esi */
  call_ind((uint32_t)(ESI), 0x11c931d8u);
  /* 11c931d8 pop esi */
  ESI = (pop32());
  /* 11c931d9 ret  */
  ESPCHK(0x11c931b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100031da @ 0x11c931da (108 bytes, 34 insns) */
void f_11c931da(void) {
  FTRACE(0x11c931dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c931da push esi */
  push32((uint32_t)(ESI));
  /* 11c931db push edi */
  push32((uint32_t)(EDI));
  /* 11c931dc mov edi, dword ptr [0x11c970b4] */
  EDI = (r32((uint32_t)(0x11c970b4)));
  /* 11c931e2 mov esi, 0x11c98540 */
  ESI = (0x11c98540u);
L_11c931e7:;
  /* 11c931e7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c931e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c931eb je 0x11c93218 */
  if (C.zf) goto L_11c93218;
  /* 11c931ed cmp esi, 0x11c98584 */
  { uint32_t _a=(ESI),_b=(0x11c98584u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c931f3 je 0x11c93218 */
  if (C.zf) goto L_11c93218;
  /* 11c931f5 cmp esi, 0x11c98574 */
  { uint32_t _a=(ESI),_b=(0x11c98574u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c931fb je 0x11c93218 */
  if (C.zf) goto L_11c93218;
  /* 11c931fd cmp esi, 0x11c98564 */
  { uint32_t _a=(ESI),_b=(0x11c98564u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93203 je 0x11c93218 */
  if (C.zf) goto L_11c93218;
  /* 11c93205 cmp esi, 0x11c98544 */
  { uint32_t _a=(ESI),_b=(0x11c98544u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9320b je 0x11c93218 */
  if (C.zf) goto L_11c93218;
  /* 11c9320d push eax */
  push32((uint32_t)(EAX));
  /* 11c9320e call edi */
  call_ind((uint32_t)(EDI), 0x11c93210u);
  /* 11c93210 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c93212 call 0x11c933f9 */
  push32(0x11c93217u); f_11c933f9();
  /* 11c93217 pop ecx */
  ECX = (pop32());
L_11c93218:;
  /* 11c93218 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9321b cmp esi, 0x11c98600 */
  { uint32_t _a=(ESI),_b=(0x11c98600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93221 jl 0x11c931e7 */
  if ((C.sf!=C.of)) goto L_11c931e7;
  /* 11c93223 push dword ptr [0x11c98564] */
  push32((uint32_t)(r32((uint32_t)(0x11c98564))));
  /* 11c93229 call edi */
  call_ind((uint32_t)(EDI), 0x11c9322bu);
  /* 11c9322b push dword ptr [0x11c98574] */
  push32((uint32_t)(r32((uint32_t)(0x11c98574))));
  /* 11c93231 call edi */
  call_ind((uint32_t)(EDI), 0x11c93233u);
  /* 11c93233 push dword ptr [0x11c98584] */
  push32((uint32_t)(r32((uint32_t)(0x11c98584))));
  /* 11c93239 call edi */
  call_ind((uint32_t)(EDI), 0x11c9323bu);
  /* 11c9323b push dword ptr [0x11c98544] */
  push32((uint32_t)(r32((uint32_t)(0x11c98544))));
  /* 11c93241 call edi */
  call_ind((uint32_t)(EDI), 0x11c93243u);
  /* 11c93243 pop edi */
  EDI = (pop32());
  /* 11c93244 pop esi */
  ESI = (pop32());
  /* 11c93245 ret  */
  ESPCHK(0x11c931dau, _esp0);
  ESP += 4; return;
}

/* FUN_10003246 @ 0x11c93246 (97 bytes, 37 insns) */
void f_11c93246(void) {
  FTRACE(0x11c93246u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93246 push ebp */
  push32((uint32_t)(EBP));
  /* 11c93247 mov ebp, esp */
  EBP = (ESP);
  /* 11c93249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9324c push esi */
  push32((uint32_t)(ESI));
  /* 11c9324d cmp dword ptr [eax*4 + 0x11c98540], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11c98540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93255 lea esi, [eax*4 + 0x11c98540] */
  ESI = ((uint32_t)(EAX*4 + 0x11c98540));
  /* 11c9325c jne 0x11c9329c */
  if (!C.zf) goto L_11c9329c;
  /* 11c9325e push edi */
  push32((uint32_t)(EDI));
  /* 11c9325f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11c93261 call 0x11c934e2 */
  push32(0x11c93266u); f_11c934e2();
  /* 11c93266 mov edi, eax */
  EDI = (EAX);
  /* 11c93268 pop ecx */
  ECX = (pop32());
  /* 11c93269 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c9326b jne 0x11c93275 */
  if (!C.zf) goto L_11c93275;
  /* 11c9326d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c9326f call 0x11c92486 */
  push32(0x11c93274u); f_11c92486();
  /* 11c93274 pop ecx */
  ECX = (pop32());
L_11c93275:;
  /* 11c93275 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c93277 call 0x11c93246 */
  push32(0x11c9327cu); f_11c93246();
  /* 11c9327c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9327f pop ecx */
  ECX = (pop32());
  /* 11c93280 push edi */
  push32((uint32_t)(EDI));
  /* 11c93281 jne 0x11c9328d */
  if (!C.zf) goto L_11c9328d;
  /* 11c93283 call dword ptr [0x11c97050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97050))), 0x11c93289u);
  /* 11c93289 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c9328b jmp 0x11c93293 */
  goto L_11c93293;
L_11c9328d:;
  /* 11c9328d call 0x11c933f9 */
  push32(0x11c93292u); f_11c933f9();
  /* 11c93292 pop ecx */
  ECX = (pop32());
L_11c93293:;
  /* 11c93293 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c93295 call 0x11c932a7 */
  push32(0x11c9329au); f_11c932a7();
  /* 11c9329a pop ecx */
  ECX = (pop32());
  /* 11c9329b pop edi */
  EDI = (pop32());
L_11c9329c:;
  /* 11c9329c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c9329e call dword ptr [0x11c9704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9704c))), 0x11c932a4u);
  /* 11c932a4 pop esi */
  ESI = (pop32());
  /* 11c932a5 pop ebp */
  EBP = (pop32());
  /* 11c932a6 ret  */
  ESPCHK(0x11c93246u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a7 @ 0x11c932a7 (21 bytes, 7 insns) */
void f_11c932a7(void) {
  FTRACE(0x11c932a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c932a7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c932a8 mov ebp, esp */
  EBP = (ESP);
  /* 11c932aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c932ad push dword ptr [eax*4 + 0x11c98540] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11c98540))));
  /* 11c932b4 call dword ptr [0x11c97048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97048))), 0x11c932bau);
  /* 11c932ba pop ebp */
  EBP = (pop32());
  /* 11c932bb ret  */
  ESPCHK(0x11c932a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100032bc @ 0x11c932bc (289 bytes, 98 insns) */
void f_11c932bc(void) {
  FTRACE(0x11c932bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c932bc push ebp */
  push32((uint32_t)(EBP));
  /* 11c932bd mov ebp, esp */
  EBP = (ESP);
  /* 11c932bf push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c932c1 push 0x11c974a0 */
  push32((uint32_t)(0x11c974a0u));
  /* 11c932c6 push 0x11c95410 */
  push32((uint32_t)(0x11c95410u));
  /* 11c932cb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c932d1 push eax */
  push32((uint32_t)(EAX));
  /* 11c932d2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c932d9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c932dc push ebx */
  push32((uint32_t)(EBX));
  /* 11c932dd push esi */
  push32((uint32_t)(ESI));
  /* 11c932de push edi */
  push32((uint32_t)(EDI));
  /* 11c932df mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c932e2 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c932e6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c932e9 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c932ec cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c932ef ja 0x11c93305 */
  if ((!C.cf&&!C.zf)) goto L_11c93305;
  /* 11c932f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c932f3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c932f5 jne 0x11c932fa */
  if (!C.zf) goto L_11c932fa;
  /* 11c932f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c932f9 pop esi */
  ESI = (pop32());
L_11c932fa:;
  /* 11c932fa add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c932fd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c93300 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c93303 jmp 0x11c93307 */
  goto L_11c93307;
L_11c93305:;
  /* 11c93305 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c93307:;
  /* 11c93307 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c9330a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9330d ja 0x11c933bb */
  if ((!C.cf&&!C.zf)) goto L_11c933bb;
  /* 11c93313 mov eax, dword ptr [0x11c9b7cc] */
  EAX = (r32((uint32_t)(0x11c9b7cc)));
  /* 11c93318 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9331b jne 0x11c9335e */
  if (!C.zf) goto L_11c9335e;
  /* 11c9331d mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c93320 cmp edi, dword ptr [0x11c9b5a0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11c9b5a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93326 ja 0x11c933a4 */
  if ((!C.cf&&!C.zf)) goto L_11c933a4;
  /* 11c93328 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c9332a call 0x11c93246 */
  push32(0x11c9332fu); f_11c93246();
  /* 11c9332f pop ecx */
  ECX = (pop32());
  /* 11c93330 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c93333 push edi */
  push32((uint32_t)(EDI));
  /* 11c93334 call 0x11c9463b */
  push32(0x11c93339u); f_11c9463b();
  /* 11c93339 pop ecx */
  ECX = (pop32());
  /* 11c9333a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c9333d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c93341 call 0x11c93355 */
  push32(0x11c93346u); f_11c93355();
  /* 11c93346 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93349 je 0x11c933a9 */
  if (C.zf) goto L_11c933a9;
  /* 11c9334b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c9334e jmp 0x11c93398 */
  goto L_11c93398;
  /* 11c93350 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c93352 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c93355 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93357 call 0x11c932a7 */
  push32(0x11c9335cu); f_11c932a7();
  /* 11c9335c pop ecx */
  ECX = (pop32());
  /* 11c9335d ret  */
  ESPCHK(0x11c932bcu, _esp0);
  ESP += 4; return;
L_11c9335e:;
  /* 11c9335e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93361 jne 0x11c933a4 */
  if (!C.zf) goto L_11c933a4;
  /* 11c93363 cmp esi, dword ptr [0x11c9a7b4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c9a7b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93369 ja 0x11c933a4 */
  if ((!C.cf&&!C.zf)) goto L_11c933a4;
  /* 11c9336b push 9 */
  push32((uint32_t)(0x9u));
  /* 11c9336d call 0x11c93246 */
  push32(0x11c93372u); f_11c93246();
  /* 11c93372 pop ecx */
  ECX = (pop32());
  /* 11c93373 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c9337a mov eax, esi */
  EAX = (ESI);
  /* 11c9337c shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c9337f push eax */
  push32((uint32_t)(EAX));
  /* 11c93380 call 0x11c94de8 */
  push32(0x11c93385u); f_11c94de8();
  /* 11c93385 pop ecx */
  ECX = (pop32());
  /* 11c93386 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c93389 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c9338d call 0x11c933de */
  push32(0x11c93392u); f_11c933de();
  /* 11c93392 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93395 je 0x11c933a9 */
  if (C.zf) goto L_11c933a9;
  /* 11c93397 push esi */
  push32((uint32_t)(ESI));
L_11c93398:;
  /* 11c93398 push ebx */
  push32((uint32_t)(EBX));
  /* 11c93399 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c9339c call 0x11c952c0 */
  push32(0x11c933a1u); f_11c952c0();
  /* 11c933a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c933a4:;
  /* 11c933a4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c933a7 jne 0x11c933e7 */
  if (!C.zf) { jmp_ind(0x11c933e7u); return; }
L_11c933a9:;
  /* 11c933a9 push esi */
  push32((uint32_t)(ESI));
  /* 11c933aa push 8 */
  push32((uint32_t)(0x8u));
  /* 11c933ac push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c933b2 call dword ptr [0x11c97044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97044))), 0x11c933b8u);
  /* 11c933b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11c933bb:;
  /* 11c933bb cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c933be jne 0x11c933e7 */
  if (!C.zf) { jmp_ind(0x11c933e7u); return; }
  /* 11c933c0 cmp dword ptr [0x11c9b408], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b408))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c933c6 je 0x11c933e7 */
  if (C.zf) { jmp_ind(0x11c933e7u); return; }
  /* 11c933c8 push esi */
  push32((uint32_t)(ESI));
  /* 11c933c9 call 0x11c9529e */
  push32(0x11c933ceu); f_11c9529e();
  /* 11c933ce pop ecx */
  ECX = (pop32());
  /* 11c933cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c933d1 jne 0x11c93307 */
  if (!C.zf) goto L_11c93307;
  /* 11c933d7 jmp 0x11c933ea */
  jmp_ind(0x11c933eau); return;
  /* 11c933d9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10003355 @ 0x11c93355 (9 bytes, 4 insns) */
void f_11c93355(void) {
  FTRACE(0x11c93355u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93355 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93357 call 0x11c932a7 */
  push32(0x11c9335cu); f_11c932a7();
  /* 11c9335c pop ecx */
  ECX = (pop32());
  /* 11c9335d ret  */
  ESPCHK(0x11c93355u, _esp0);
  ESP += 4; return;
}

/* FUN_100033de @ 0x11c933de (9 bytes, 4 insns) */
void f_11c933de(void) {
  FTRACE(0x11c933deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c933de push 9 */
  push32((uint32_t)(0x9u));
  /* 11c933e0 call 0x11c932a7 */
  push32(0x11c933e5u); f_11c932a7();
  /* 11c933e5 pop ecx */
  ECX = (pop32());
  /* 11c933e6 ret  */
  ESPCHK(0x11c933deu, _esp0);
  ESP += 4; return;
}

/* FUN_100033f9 @ 0x11c933f9 (215 bytes, 76 insns) */
void f_11c933f9(void) {
  FTRACE(0x11c933f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c933f9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c933fa mov ebp, esp */
  EBP = (ESP);
  /* 11c933fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c933fe push 0x11c974b8 */
  push32((uint32_t)(0x11c974b8u));
  /* 11c93403 push 0x11c95410 */
  push32((uint32_t)(0x11c95410u));
  /* 11c93408 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c9340e push eax */
  push32((uint32_t)(EAX));
  /* 11c9340f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c93416 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93419 push ebx */
  push32((uint32_t)(EBX));
  /* 11c9341a push esi */
  push32((uint32_t)(ESI));
  /* 11c9341b push edi */
  push32((uint32_t)(EDI));
  /* 11c9341c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9341f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c93421 je 0x11c934d3 */
  if (C.zf) { jmp_ind(0x11c934d3u); return; }
  /* 11c93427 mov eax, dword ptr [0x11c9b7cc] */
  EAX = (r32((uint32_t)(0x11c9b7cc)));
  /* 11c9342c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9342f jne 0x11c9346c */
  if (!C.zf) goto L_11c9346c;
  /* 11c93431 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93433 call 0x11c93246 */
  push32(0x11c93438u); f_11c93246();
  /* 11c93438 pop ecx */
  ECX = (pop32());
  /* 11c93439 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c9343d push esi */
  push32((uint32_t)(ESI));
  /* 11c9343e call 0x11c942e7 */
  push32(0x11c93443u); f_11c942e7();
  /* 11c93443 pop ecx */
  ECX = (pop32());
  /* 11c93444 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c93447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93449 je 0x11c93454 */
  if (C.zf) goto L_11c93454;
  /* 11c9344b push esi */
  push32((uint32_t)(ESI));
  /* 11c9344c push eax */
  push32((uint32_t)(EAX));
  /* 11c9344d call 0x11c94312 */
  push32(0x11c93452u); f_11c94312();
  /* 11c93452 pop ecx */
  ECX = (pop32());
  /* 11c93453 pop ecx */
  ECX = (pop32());
L_11c93454:;
  /* 11c93454 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c93458 call 0x11c93463 */
  push32(0x11c9345du); f_11c93463();
  /* 11c9345d cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93461 jmp 0x11c934b4 */
  goto L_11c934b4;
  /* 11c93463 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93465 call 0x11c932a7 */
  push32(0x11c9346au); f_11c932a7();
  /* 11c9346a pop ecx */
  ECX = (pop32());
  /* 11c9346b ret  */
  ESPCHK(0x11c933f9u, _esp0);
  ESP += 4; return;
L_11c9346c:;
  /* 11c9346c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9346f jne 0x11c934c4 */
  if (!C.zf) goto L_11c934c4;
  /* 11c93471 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93473 call 0x11c93246 */
  push32(0x11c93478u); f_11c93246();
  /* 11c93478 pop ecx */
  ECX = (pop32());
  /* 11c93479 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c93480 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c93483 push eax */
  push32((uint32_t)(EAX));
  /* 11c93484 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c93487 push eax */
  push32((uint32_t)(EAX));
  /* 11c93488 push esi */
  push32((uint32_t)(ESI));
  /* 11c93489 call 0x11c94d4c */
  push32(0x11c9348eu); f_11c94d4c();
  /* 11c9348e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93491 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c93494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93496 je 0x11c934a7 */
  if (C.zf) goto L_11c934a7;
  /* 11c93498 push eax */
  push32((uint32_t)(EAX));
  /* 11c93499 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c9349c push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11c9349f call 0x11c94da3 */
  push32(0x11c934a4u); f_11c94da3();
  /* 11c934a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c934a7:;
  /* 11c934a7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c934ab call 0x11c934bb */
  push32(0x11c934b0u); f_11c934bb();
  /* 11c934b0 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c934b4:;
  /* 11c934b4 jne 0x11c934d3 */
  if (!C.zf) { jmp_ind(0x11c934d3u); return; }
  /* 11c934b6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c934b9 jmp 0x11c934c5 */
  goto L_11c934c5;
  /* 11c934bb push 9 */
  push32((uint32_t)(0x9u));
  /* 11c934bd call 0x11c932a7 */
  push32(0x11c934c2u); f_11c932a7();
  /* 11c934c2 pop ecx */
  ECX = (pop32());
  /* 11c934c3 ret  */
  ESPCHK(0x11c933f9u, _esp0);
  ESP += 4; return;
L_11c934c4:;
  /* 11c934c4 push esi */
  push32((uint32_t)(ESI));
L_11c934c5:;
  /* 11c934c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c934c7 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c934cf pop eax */
  EAX = (pop32());
}

/* FUN_10003463 @ 0x11c93463 (9 bytes, 4 insns) */
void f_11c93463(void) {
  FTRACE(0x11c93463u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93463 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93465 call 0x11c932a7 */
  push32(0x11c9346au); f_11c932a7();
  /* 11c9346a pop ecx */
  ECX = (pop32());
  /* 11c9346b ret  */
  ESPCHK(0x11c93463u, _esp0);
  ESP += 4; return;
}

/* FUN_100034bb @ 0x11c934bb (9 bytes, 4 insns) */
void f_11c934bb(void) {
  FTRACE(0x11c934bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c934bb push 9 */
  push32((uint32_t)(0x9u));
  /* 11c934bd call 0x11c932a7 */
  push32(0x11c934c2u); f_11c932a7();
  /* 11c934c2 pop ecx */
  ECX = (pop32());
  /* 11c934c3 ret  */
  ESPCHK(0x11c934bbu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11c934e2 (18 bytes, 6 insns) */
void f_11c934e2(void) {
  FTRACE(0x11c934e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c934e2 push dword ptr [0x11c9b408] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b408))));
  /* 11c934e8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c934ec call 0x11c934f4 */
  push32(0x11c934f1u); f_11c934f4();
  /* 11c934f1 pop ecx */
  ECX = (pop32());
  /* 11c934f2 pop ecx */
  ECX = (pop32());
  /* 11c934f3 ret  */
  ESPCHK(0x11c934e2u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11c934f4 (44 bytes, 16 insns) */
void f_11c934f4(void) {
  FTRACE(0x11c934f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c934f4 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c934f9 ja 0x11c9351d */
  if ((!C.cf&&!C.zf)) goto L_11c9351d;
L_11c934fb:;
  /* 11c934fb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c934ff call 0x11c93520 */
  push32(0x11c93504u); f_11c93520();
  /* 11c93504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93506 pop ecx */
  ECX = (pop32());
  /* 11c93507 jne 0x11c9351f */
  if (!C.zf) goto L_11c9351f;
  /* 11c93509 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9350d je 0x11c9351f */
  if (C.zf) goto L_11c9351f;
  /* 11c9350f push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c93513 call 0x11c9529e */
  push32(0x11c93518u); f_11c9529e();
  /* 11c93518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9351a pop ecx */
  ECX = (pop32());
  /* 11c9351b jne 0x11c934fb */
  if (!C.zf) goto L_11c934fb;
L_11c9351d:;
  /* 11c9351d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c9351f:;
  /* 11c9351f ret  */
  ESPCHK(0x11c934f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x11c93520 (231 bytes, 81 insns) */
void f_11c93520(void) {
  FTRACE(0x11c93520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93520 push ebp */
  push32((uint32_t)(EBP));
  /* 11c93521 mov ebp, esp */
  EBP = (ESP);
  /* 11c93523 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c93525 push 0x11c974d0 */
  push32((uint32_t)(0x11c974d0u));
  /* 11c9352a push 0x11c95410 */
  push32((uint32_t)(0x11c95410u));
  /* 11c9352f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c93535 push eax */
  push32((uint32_t)(EAX));
  /* 11c93536 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c9353d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93540 push ebx */
  push32((uint32_t)(EBX));
  /* 11c93541 push esi */
  push32((uint32_t)(ESI));
  /* 11c93542 push edi */
  push32((uint32_t)(EDI));
  /* 11c93543 mov eax, dword ptr [0x11c9b7cc] */
  EAX = (r32((uint32_t)(0x11c9b7cc)));
  /* 11c93548 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9354b jne 0x11c93590 */
  if (!C.zf) goto L_11c93590;
  /* 11c9354d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93550 cmp esi, dword ptr [0x11c9b5a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c9b5a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93556 ja 0x11c935ef */
  if ((!C.cf&&!C.zf)) goto L_11c935ef;
  /* 11c9355c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c9355e call 0x11c93246 */
  push32(0x11c93563u); f_11c93246();
  /* 11c93563 pop ecx */
  ECX = (pop32());
  /* 11c93564 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c93568 push esi */
  push32((uint32_t)(ESI));
  /* 11c93569 call 0x11c9463b */
  push32(0x11c9356eu); f_11c9463b();
  /* 11c9356e pop ecx */
  ECX = (pop32());
  /* 11c9356f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c93572 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c93576 call 0x11c93587 */
  push32(0x11c9357bu); f_11c93587();
  /* 11c9357b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c9357e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93580 je 0x11c935ef */
  if (C.zf) goto L_11c935ef;
  /* 11c93582 jmp 0x11c9360d */
  jmp_ind(0x11c9360du); return;
  /* 11c93587 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93589 call 0x11c932a7 */
  push32(0x11c9358eu); f_11c932a7();
  /* 11c9358e pop ecx */
  ECX = (pop32());
  /* 11c9358f ret  */
  ESPCHK(0x11c93520u, _esp0);
  ESP += 4; return;
L_11c93590:;
  /* 11c93590 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93593 jne 0x11c935ef */
  if (!C.zf) goto L_11c935ef;
  /* 11c93595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9359a je 0x11c935a4 */
  if (C.zf) goto L_11c935a4;
  /* 11c9359c lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11c9359f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c935a2 jmp 0x11c935a7 */
  goto L_11c935a7;
L_11c935a4:;
  /* 11c935a4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c935a6 pop esi */
  ESI = (pop32());
L_11c935a7:;
  /* 11c935a7 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11c935aa cmp esi, dword ptr [0x11c9a7b4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c9a7b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c935b0 ja 0x11c935e0 */
  if ((!C.cf&&!C.zf)) goto L_11c935e0;
  /* 11c935b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c935b4 call 0x11c93246 */
  push32(0x11c935b9u); f_11c93246();
  /* 11c935b9 pop ecx */
  ECX = (pop32());
  /* 11c935ba mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c935c1 mov eax, esi */
  EAX = (ESI);
  /* 11c935c3 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c935c6 push eax */
  push32((uint32_t)(EAX));
  /* 11c935c7 call 0x11c94de8 */
  push32(0x11c935ccu); f_11c94de8();
  /* 11c935cc pop ecx */
  ECX = (pop32());
  /* 11c935cd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c935d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c935d4 call 0x11c935e6 */
  push32(0x11c935d9u); f_11c935e6();
  /* 11c935d9 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c935dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c935de jne 0x11c9360d */
  if (!C.zf) { jmp_ind(0x11c9360du); return; }
L_11c935e0:;
  /* 11c935e0 push esi */
  push32((uint32_t)(ESI));
  /* 11c935e1 jmp 0x11c935ff */
  goto L_11c935ff;
  /* 11c935e3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c935e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c935e8 call 0x11c932a7 */
  push32(0x11c935edu); f_11c932a7();
  /* 11c935ed pop ecx */
  ECX = (pop32());
  /* 11c935ee ret  */
  ESPCHK(0x11c93520u, _esp0);
  ESP += 4; return;
L_11c935ef:;
  /* 11c935ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c935f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c935f4 jne 0x11c935f9 */
  if (!C.zf) goto L_11c935f9;
  /* 11c935f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c935f8 pop eax */
  EAX = (pop32());
L_11c935f9:;
  /* 11c935f9 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c935fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11c935fe push eax */
  push32((uint32_t)(EAX));
L_11c935ff:;
  /* 11c935ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93601 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
}

/* FUN_10003587 @ 0x11c93587 (9 bytes, 4 insns) */
void f_11c93587(void) {
  FTRACE(0x11c93587u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93587 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c93589 call 0x11c932a7 */
  push32(0x11c9358eu); f_11c932a7();
  /* 11c9358e pop ecx */
  ECX = (pop32());
  /* 11c9358f ret  */
  ESPCHK(0x11c93587u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e6 @ 0x11c935e6 (9 bytes, 4 insns) */
void f_11c935e6(void) {
  FTRACE(0x11c935e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c935e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c935e8 call 0x11c932a7 */
  push32(0x11c935edu); f_11c932a7();
  /* 11c935ed pop ecx */
  ECX = (pop32());
  /* 11c935ee ret  */
  ESPCHK(0x11c935e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003620 @ 0x11c93620 (7 bytes, 3 insns) */
void f_11c93620(void) {
  FTRACE(0x11c93620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93620 push edi */
  push32((uint32_t)(EDI));
  /* 11c93621 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c93625 jmp 0x11c93691 */
  jmp_ind(0x11c93691u); return;
}

/* FUN_10003630 @ 0x11c93630 (224 bytes, 84 insns) */
void f_11c93630(void) {
  FTRACE(0x11c93630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93630 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c93634 push edi */
  push32((uint32_t)(EDI));
  /* 11c93635 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c9363b je 0x11c9364c */
  if (C.zf) goto L_11c9364c;
L_11c9363d:;
  /* 11c9363d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c9363f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c93640 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c93642 je 0x11c9367f */
  if (C.zf) goto L_11c9367f;
  /* 11c93644 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c9364a jne 0x11c9363d */
  if (!C.zf) goto L_11c9363d;
L_11c9364c:;
  /* 11c9364c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c9364e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c93653 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93655 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c93658 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9365a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9365d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c93662 je 0x11c9364c */
  if (C.zf) goto L_11c9364c;
  /* 11c93664 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c93667 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c93669 je 0x11c9368e */
  if (C.zf) goto L_11c9368e;
  /* 11c9366b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c9366d je 0x11c93689 */
  if (C.zf) goto L_11c93689;
  /* 11c9366f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c93674 je 0x11c93684 */
  if (C.zf) goto L_11c93684;
  /* 11c93676 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c9367b je 0x11c9367f */
  if (C.zf) goto L_11c9367f;
  /* 11c9367d jmp 0x11c9364c */
  goto L_11c9364c;
L_11c9367f:;
  /* 11c9367f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11c93682 jmp 0x11c93691 */
  goto L_11c93691;
L_11c93684:;
  /* 11c93684 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11c93687 jmp 0x11c93691 */
  goto L_11c93691;
L_11c93689:;
  /* 11c93689 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11c9368c jmp 0x11c93691 */
  goto L_11c93691;
L_11c9368e:;
  /* 11c9368e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11c93691:;
  /* 11c93691 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c93695 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c9369b je 0x11c936b6 */
  if (C.zf) goto L_11c936b6;
L_11c9369d:;
  /* 11c9369d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c9369f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c936a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c936a2 je 0x11c93708 */
  if (C.zf) goto L_11c93708;
  /* 11c936a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c936a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c936a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c936ad jne 0x11c9369d */
  if (!C.zf) goto L_11c9369d;
  /* 11c936af jmp 0x11c936b6 */
  goto L_11c936b6;
L_11c936b1:;
  /* 11c936b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c936b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c936b6:;
  /* 11c936b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c936bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c936bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c936bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c936c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c936c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11c936c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c936c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c936ce je 0x11c936b1 */
  if (C.zf) goto L_11c936b1;
  /* 11c936d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c936d2 je 0x11c93708 */
  if (C.zf) goto L_11c93708;
  /* 11c936d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c936d6 je 0x11c936ff */
  if (C.zf) goto L_11c936ff;
  /* 11c936d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c936de je 0x11c936f2 */
  if (C.zf) goto L_11c936f2;
  /* 11c936e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c936e6 je 0x11c936ea */
  if (C.zf) goto L_11c936ea;
  /* 11c936e8 jmp 0x11c936b1 */
  goto L_11c936b1;
L_11c936ea:;
  /* 11c936ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c936ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c936f0 pop edi */
  EDI = (pop32());
  /* 11c936f1 ret  */
  ESPCHK(0x11c93630u, _esp0);
  ESP += 4; return;
L_11c936f2:;
  /* 11c936f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c936f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c936f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11c936fd pop edi */
  EDI = (pop32());
  /* 11c936fe ret  */
  ESPCHK(0x11c93630u, _esp0);
  ESP += 4; return;
L_11c936ff:;
  /* 11c936ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c93702 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c93706 pop edi */
  EDI = (pop32());
  /* 11c93707 ret  */
  ESPCHK(0x11c93630u, _esp0);
  ESP += 4; return;
L_11c93708:;
  /* 11c93708 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c9370a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c9370e pop edi */
  EDI = (pop32());
  /* 11c9370f ret  */
  ESPCHK(0x11c93630u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11c93710 (123 bytes, 44 insns) */
void f_11c93710(void) {
  FTRACE(0x11c93710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93710 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c93714 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c9371a je 0x11c93730 */
  if (C.zf) goto L_11c93730;
L_11c9371c:;
  /* 11c9371c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c9371e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c9371f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c93721 je 0x11c93763 */
  if (C.zf) goto L_11c93763;
  /* 11c93723 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c93729 jne 0x11c9371c */
  if (!C.zf) goto L_11c9371c;
  /* 11c9372b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c93730:;
  /* 11c93730 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c93732 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c93737 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93739 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c9373c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9373e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93741 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c93746 je 0x11c93730 */
  if (C.zf) goto L_11c93730;
  /* 11c93748 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c9374b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c9374d je 0x11c93781 */
  if (C.zf) goto L_11c93781;
  /* 11c9374f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c93751 je 0x11c93777 */
  if (C.zf) goto L_11c93777;
  /* 11c93753 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c93758 je 0x11c9376d */
  if (C.zf) goto L_11c9376d;
  /* 11c9375a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c9375f je 0x11c93763 */
  if (C.zf) goto L_11c93763;
  /* 11c93761 jmp 0x11c93730 */
  goto L_11c93730;
L_11c93763:;
  /* 11c93763 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11c93766 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c9376a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9376c ret  */
  ESPCHK(0x11c93710u, _esp0);
  ESP += 4; return;
L_11c9376d:;
  /* 11c9376d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11c93770 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c93774 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93776 ret  */
  ESPCHK(0x11c93710u, _esp0);
  ESP += 4; return;
L_11c93777:;
  /* 11c93777 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11c9377a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c9377e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93780 ret  */
  ESPCHK(0x11c93710u, _esp0);
  ESP += 4; return;
L_11c93781:;
  /* 11c93781 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11c93784 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c93788 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9378a ret  */
  ESPCHK(0x11c93710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000378b @ 0x11c9378b (429 bytes, 143 insns) */
void f_11c9378b(void) {
  FTRACE(0x11c9378bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9378b push ebp */
  push32((uint32_t)(EBP));
  /* 11c9378c mov ebp, esp */
  EBP = (ESP);
  /* 11c9378e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93791 push ebx */
  push32((uint32_t)(EBX));
  /* 11c93792 push esi */
  push32((uint32_t)(ESI));
  /* 11c93793 push edi */
  push32((uint32_t)(EDI));
  /* 11c93794 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c93796 call 0x11c93246 */
  push32(0x11c9379bu); f_11c93246();
  /* 11c9379b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c9379e call 0x11c93938 */
  push32(0x11c937a3u); f_11c93938();
  /* 11c937a3 mov ebx, eax */
  EBX = (EAX);
  /* 11c937a5 pop ecx */
  ECX = (pop32());
  /* 11c937a6 cmp ebx, dword ptr [0x11c9b5a4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c9b5a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c937ac pop ecx */
  ECX = (pop32());
  /* 11c937ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c937b0 jne 0x11c937b9 */
  if (!C.zf) goto L_11c937b9;
L_11c937b2:;
  /* 11c937b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c937b4 jmp 0x11c93929 */
  goto L_11c93929;
L_11c937b9:;
  /* 11c937b9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c937bb je 0x11c93917 */
  if (C.zf) goto L_11c93917;
  /* 11c937c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c937c3 mov eax, 0x11c98698 */
  EAX = (0x11c98698u);
L_11c937c8:;
  /* 11c937c8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c937ca je 0x11c93840 */
  if (C.zf) goto L_11c93840;
  /* 11c937cc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c937cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c937d0 cmp eax, 0x11c98788 */
  { uint32_t _a=(EAX),_b=(0x11c98788u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c937d5 jl 0x11c937c8 */
  if ((C.sf!=C.of)) goto L_11c937c8;
  /* 11c937d7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c937da push eax */
  push32((uint32_t)(EAX));
  /* 11c937db push ebx */
  push32((uint32_t)(EBX));
  /* 11c937dc call dword ptr [0x11c97040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97040))), 0x11c937e2u);
  /* 11c937e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c937e4 pop esi */
  ESI = (pop32());
  /* 11c937e5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c937e7 jne 0x11c9390e */
  if (!C.zf) goto L_11c9390e;
  /* 11c937ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c937ef and dword ptr [0x11c9b7c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c9b7c4)))&(0x0u); w32((uint32_t)(0x11c9b7c4), (_r)); fl_logic(_r,32); }
  /* 11c937f6 pop ecx */
  ECX = (pop32());
  /* 11c937f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c937f9 mov edi, 0x11c9b6c0 */
  EDI = (0x11c9b6c0u);
  /* 11c937fe cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93801 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c93803 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c93804 mov dword ptr [0x11c9b5a4], ebx */
  w32((uint32_t)(0x11c9b5a4), (EBX));
  /* 11c9380a jbe 0x11c938fb */
  if ((C.cf||C.zf)) goto L_11c938fb;
  /* 11c93810 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93814 je 0x11c938d6 */
  if (C.zf) goto L_11c938d6;
  /* 11c9381a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11c9381d:;
  /* 11c9381d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c9381f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c93821 je 0x11c938d6 */
  if (C.zf) goto L_11c938d6;
  /* 11c93827 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11c9382b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11c9382e:;
  /* 11c9382e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93830 ja 0x11c938ca */
  if ((!C.cf&&!C.zf)) goto L_11c938ca;
  /* 11c93836 or byte ptr [eax + 0x11c9b6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(0x4u); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c9383d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c9383e jmp 0x11c9382e */
  goto L_11c9382e;
L_11c93840:;
  /* 11c93840 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c93844 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c93846 pop ecx */
  ECX = (pop32());
  /* 11c93847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c93849 mov edi, 0x11c9b6c0 */
  EDI = (0x11c9b6c0u);
  /* 11c9384e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11c93851 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c93853 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c93856 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c93857 lea ebx, [esi + 0x11c986a8] */
  EBX = ((uint32_t)(ESI + 0x11c986a8));
L_11c9385d:;
  /* 11c9385d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93860 mov ecx, ebx */
  ECX = (EBX);
  /* 11c93862 je 0x11c93890 */
  if (C.zf) goto L_11c93890;
L_11c93864:;
  /* 11c93864 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11c93867 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c93869 je 0x11c93890 */
  if (C.zf) goto L_11c93890;
  /* 11c9386b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c9386e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11c93871 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93873 ja 0x11c93889 */
  if ((!C.cf&&!C.zf)) goto L_11c93889;
  /* 11c93875 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c93878 mov dl, byte ptr [edx + 0x11c98690] */
  DL = (r8((uint32_t)(EDX + 0x11c98690)));
L_11c9387e:;
  /* 11c9387e or byte ptr [eax + 0x11c9b6c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(DL); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c93884 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c93885 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93887 jbe 0x11c9387e */
  if ((C.cf||C.zf)) goto L_11c9387e;
L_11c93889:;
  /* 11c93889 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c9388a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c9388b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9388e jne 0x11c93864 */
  if (!C.zf) goto L_11c93864;
L_11c93890:;
  /* 11c93890 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c93893 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93896 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9389a jb 0x11c9385d */
  if (C.cf) goto L_11c9385d;
  /* 11c9389c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9389f mov dword ptr [0x11c9b5bc], 1 */
  w32((uint32_t)(0x11c9b5bc), (0x1u));
  /* 11c938a9 push eax */
  push32((uint32_t)(EAX));
  /* 11c938aa mov dword ptr [0x11c9b5a4], eax */
  w32((uint32_t)(0x11c9b5a4), (EAX));
  /* 11c938af call 0x11c93982 */
  push32(0x11c938b4u); f_11c93982();
  /* 11c938b4 lea esi, [esi + 0x11c9869c] */
  ESI = ((uint32_t)(ESI + 0x11c9869c));
  /* 11c938ba mov edi, 0x11c9b5b0 */
  EDI = (0x11c9b5b0u);
  /* 11c938bf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c938c0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c938c1 pop ecx */
  ECX = (pop32());
  /* 11c938c2 mov dword ptr [0x11c9b7c4], eax */
  w32((uint32_t)(0x11c9b7c4), (EAX));
  /* 11c938c7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c938c8 jmp 0x11c9391c */
  goto L_11c9391c;
L_11c938ca:;
  /* 11c938ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c938cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c938cc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c938d0 jne 0x11c9381d */
  if (!C.zf) goto L_11c9381d;
L_11c938d6:;
  /* 11c938d6 mov eax, esi */
  EAX = (ESI);
L_11c938d8:;
  /* 11c938d8 or byte ptr [eax + 0x11c9b6c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(0x8u); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c938df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c938e0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c938e5 jb 0x11c938d8 */
  if (C.cf) goto L_11c938d8;
  /* 11c938e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c938e8 call 0x11c93982 */
  push32(0x11c938edu); f_11c93982();
  /* 11c938ed pop ecx */
  ECX = (pop32());
  /* 11c938ee mov dword ptr [0x11c9b7c4], eax */
  w32((uint32_t)(0x11c9b7c4), (EAX));
  /* 11c938f3 mov dword ptr [0x11c9b5bc], esi */
  w32((uint32_t)(0x11c9b5bc), (ESI));
  /* 11c938f9 jmp 0x11c93902 */
  goto L_11c93902;
L_11c938fb:;
  /* 11c938fb and dword ptr [0x11c9b5bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c9b5bc)))&(0x0u); w32((uint32_t)(0x11c9b5bc), (_r)); fl_logic(_r,32); }
L_11c93902:;
  /* 11c93902 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c93904 mov edi, 0x11c9b5b0 */
  EDI = (0x11c9b5b0u);
  /* 11c93909 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c9390a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c9390b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c9390c jmp 0x11c9391c */
  goto L_11c9391c;
L_11c9390e:;
  /* 11c9390e cmp dword ptr [0x11c9b3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93915 je 0x11c93926 */
  if (C.zf) goto L_11c93926;
L_11c93917:;
  /* 11c93917 call 0x11c939b5 */
  push32(0x11c9391cu); f_11c939b5();
L_11c9391c:;
  /* 11c9391c call 0x11c939de */
  push32(0x11c93921u); f_11c939de();
  /* 11c93921 jmp 0x11c937b2 */
  goto L_11c937b2;
L_11c93926:;
  /* 11c93926 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11c93929:;
  /* 11c93929 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c9392b call 0x11c932a7 */
  push32(0x11c93930u); f_11c932a7();
  /* 11c93930 pop ecx */
  ECX = (pop32());
  /* 11c93931 mov eax, esi */
  EAX = (ESI);
  /* 11c93933 pop edi */
  EDI = (pop32());
  /* 11c93934 pop esi */
  ESI = (pop32());
  /* 11c93935 pop ebx */
  EBX = (pop32());
  /* 11c93936 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93937 ret  */
  ESPCHK(0x11c9378bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003938 @ 0x11c93938 (74 bytes, 15 insns) */
void f_11c93938(void) {
  FTRACE(0x11c93938u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93938 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c9393c and dword ptr [0x11c9b3f0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c9b3f0)))&(0x0u); w32((uint32_t)(0x11c9b3f0), (_r)); fl_logic(_r,32); }
  /* 11c93943 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93946 jne 0x11c93958 */
  if (!C.zf) goto L_11c93958;
  /* 11c93948 mov dword ptr [0x11c9b3f0], 1 */
  w32((uint32_t)(0x11c9b3f0), (0x1u));
  /* 11c93952 jmp dword ptr [0x11c97038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c97038)))); return;
L_11c93958:;
  /* 11c93958 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9395b jne 0x11c9396d */
  if (!C.zf) goto L_11c9396d;
  /* 11c9395d mov dword ptr [0x11c9b3f0], 1 */
  w32((uint32_t)(0x11c9b3f0), (0x1u));
  /* 11c93967 jmp dword ptr [0x11c9703c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c9703c)))); return;
L_11c9396d:;
  /* 11c9396d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93970 jne 0x11c93981 */
  if (!C.zf) goto L_11c93981;
  /* 11c93972 mov eax, dword ptr [0x11c9b424] */
  EAX = (r32((uint32_t)(0x11c9b424)));
  /* 11c93977 mov dword ptr [0x11c9b3f0], 1 */
  w32((uint32_t)(0x11c9b3f0), (0x1u));
L_11c93981:;
  /* 11c93981 ret  */
  ESPCHK(0x11c93938u, _esp0);
  ESP += 4; return;
}

/* FUN_10003982 @ 0x11c93982 (51 bytes, 19 insns) */
void f_11c93982(void) {
  FTRACE(0x11c93982u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93982 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c93986 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9398b je 0x11c939af */
  if (C.zf) goto L_11c939af;
  /* 11c9398d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93990 je 0x11c939a9 */
  if (C.zf) goto L_11c939a9;
  /* 11c93992 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93995 je 0x11c939a3 */
  if (C.zf) goto L_11c939a3;
  /* 11c93997 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c93998 je 0x11c9399d */
  if (C.zf) goto L_11c9399d;
  /* 11c9399a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9399c ret  */
  ESPCHK(0x11c93982u, _esp0);
  ESP += 4; return;
L_11c9399d:;
  /* 11c9399d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11c939a2 ret  */
  ESPCHK(0x11c93982u, _esp0);
  ESP += 4; return;
L_11c939a3:;
  /* 11c939a3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11c939a8 ret  */
  ESPCHK(0x11c93982u, _esp0);
  ESP += 4; return;
L_11c939a9:;
  /* 11c939a9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11c939ae ret  */
  ESPCHK(0x11c93982u, _esp0);
  ESP += 4; return;
L_11c939af:;
  /* 11c939af mov eax, 0x411 */
  EAX = (0x411u);
  /* 11c939b4 ret  */
  ESPCHK(0x11c93982u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b5 @ 0x11c939b5 (41 bytes, 17 insns) */
void f_11c939b5(void) {
  FTRACE(0x11c939b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c939b5 push edi */
  push32((uint32_t)(EDI));
  /* 11c939b6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c939b8 pop ecx */
  ECX = (pop32());
  /* 11c939b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c939bb mov edi, 0x11c9b6c0 */
  EDI = (0x11c9b6c0u);
  /* 11c939c0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c939c2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c939c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c939c5 mov edi, 0x11c9b5b0 */
  EDI = (0x11c9b5b0u);
  /* 11c939ca mov dword ptr [0x11c9b5a4], eax */
  w32((uint32_t)(0x11c9b5a4), (EAX));
  /* 11c939cf mov dword ptr [0x11c9b5bc], eax */
  w32((uint32_t)(0x11c9b5bc), (EAX));
  /* 11c939d4 mov dword ptr [0x11c9b7c4], eax */
  w32((uint32_t)(0x11c9b7c4), (EAX));
  /* 11c939d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c939da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c939db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c939dc pop edi */
  EDI = (pop32());
  /* 11c939dd ret  */
  ESPCHK(0x11c939b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100039de @ 0x11c939de (389 bytes, 124 insns) */
void f_11c939de(void) {
  FTRACE(0x11c939deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c939de push ebp */
  push32((uint32_t)(EBP));
  /* 11c939df mov ebp, esp */
  EBP = (ESP);
  /* 11c939e1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c939e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11c939ea push esi */
  push32((uint32_t)(ESI));
  /* 11c939eb push eax */
  push32((uint32_t)(EAX));
  /* 11c939ec push dword ptr [0x11c9b5a4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b5a4))));
  /* 11c939f2 call dword ptr [0x11c97040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97040))), 0x11c939f8u);
  /* 11c939f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c939fb jne 0x11c93b17 */
  if (!C.zf) goto L_11c93b17;
  /* 11c93a01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c93a03 mov esi, 0x100 */
  ESI = (0x100u);
L_11c93a08:;
  /* 11c93a08 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11c93a0f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c93a10 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93a12 jb 0x11c93a08 */
  if (C.cf) goto L_11c93a08;
  /* 11c93a14 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11c93a17 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11c93a1e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c93a20 je 0x11c93a59 */
  if (C.zf) goto L_11c93a59;
  /* 11c93a22 push ebx */
  push32((uint32_t)(EBX));
  /* 11c93a23 push edi */
  push32((uint32_t)(EDI));
  /* 11c93a24 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11c93a27:;
  /* 11c93a27 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11c93a2a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c93a2d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93a2f ja 0x11c93a4e */
  if ((!C.cf&&!C.zf)) goto L_11c93a4e;
  /* 11c93a31 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93a33 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11c93a3a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c93a3b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11c93a40 mov ebx, ecx */
  EBX = (ECX);
  /* 11c93a42 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93a45 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c93a47 mov ecx, ebx */
  ECX = (EBX);
  /* 11c93a49 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c93a4c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11c93a4e:;
  /* 11c93a4e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c93a4f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c93a50 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11c93a53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c93a55 jne 0x11c93a27 */
  if (!C.zf) goto L_11c93a27;
  /* 11c93a57 pop edi */
  EDI = (pop32());
  /* 11c93a58 pop ebx */
  EBX = (pop32());
L_11c93a59:;
  /* 11c93a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93a5b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11c93a61 push dword ptr [0x11c9b7c4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c4))));
  /* 11c93a67 push dword ptr [0x11c9b5a4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b5a4))));
  /* 11c93a6d push eax */
  push32((uint32_t)(EAX));
  /* 11c93a6e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c93a74 push esi */
  push32((uint32_t)(ESI));
  /* 11c93a75 push eax */
  push32((uint32_t)(EAX));
  /* 11c93a76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c93a78 call 0x11c95737 */
  push32(0x11c93a7du); f_11c95737();
  /* 11c93a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93a7f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11c93a85 push dword ptr [0x11c9b5a4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b5a4))));
  /* 11c93a8b push esi */
  push32((uint32_t)(ESI));
  /* 11c93a8c push eax */
  push32((uint32_t)(EAX));
  /* 11c93a8d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c93a93 push esi */
  push32((uint32_t)(ESI));
  /* 11c93a94 push eax */
  push32((uint32_t)(EAX));
  /* 11c93a95 push esi */
  push32((uint32_t)(ESI));
  /* 11c93a96 push dword ptr [0x11c9b7c4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c4))));
  /* 11c93a9c call 0x11c954e8 */
  push32(0x11c93aa1u); f_11c954e8();
  /* 11c93aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93aa3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11c93aa9 push dword ptr [0x11c9b5a4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b5a4))));
  /* 11c93aaf push esi */
  push32((uint32_t)(ESI));
  /* 11c93ab0 push eax */
  push32((uint32_t)(EAX));
  /* 11c93ab1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c93ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11c93ab8 push eax */
  push32((uint32_t)(EAX));
  /* 11c93ab9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c93abe push dword ptr [0x11c9b7c4] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c4))));
  /* 11c93ac4 call 0x11c954e8 */
  push32(0x11c93ac9u); f_11c954e8();
  /* 11c93ac9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c93ace lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11c93ad4:;
  /* 11c93ad4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11c93ad7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c93ada je 0x11c93af2 */
  if (C.zf) goto L_11c93af2;
  /* 11c93adc or byte ptr [eax + 0x11c9b6c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(0x10u); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c93ae3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11c93aea:;
  /* 11c93aea mov byte ptr [eax + 0x11c9b5c0], dl */
  w8((uint32_t)(EAX + 0x11c9b5c0), (DL));
  /* 11c93af0 jmp 0x11c93b0e */
  goto L_11c93b0e;
L_11c93af2:;
  /* 11c93af2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11c93af5 je 0x11c93b07 */
  if (C.zf) goto L_11c93b07;
  /* 11c93af7 or byte ptr [eax + 0x11c9b6c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(0x20u); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c93afe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11c93b05 jmp 0x11c93aea */
  goto L_11c93aea;
L_11c93b07:;
  /* 11c93b07 and byte ptr [eax + 0x11c9b5c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b5c0)))&(0x0u); w8((uint32_t)(EAX + 0x11c9b5c0), (_r)); fl_logic(_r,8); }
L_11c93b0e:;
  /* 11c93b0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c93b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c93b10 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c93b11 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b13 jb 0x11c93ad4 */
  if (C.cf) goto L_11c93ad4;
  /* 11c93b15 jmp 0x11c93b60 */
  goto L_11c93b60;
L_11c93b17:;
  /* 11c93b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c93b19 mov esi, 0x100 */
  ESI = (0x100u);
L_11c93b1e:;
  /* 11c93b1e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b21 jb 0x11c93b3c */
  if (C.cf) goto L_11c93b3c;
  /* 11c93b23 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b26 ja 0x11c93b3c */
  if ((!C.cf&&!C.zf)) goto L_11c93b3c;
  /* 11c93b28 or byte ptr [eax + 0x11c9b6c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(0x10u); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c93b2f mov cl, al */
  CL = (AL);
  /* 11c93b31 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11c93b34:;
  /* 11c93b34 mov byte ptr [eax + 0x11c9b5c0], cl */
  w8((uint32_t)(EAX + 0x11c9b5c0), (CL));
  /* 11c93b3a jmp 0x11c93b5b */
  goto L_11c93b5b;
L_11c93b3c:;
  /* 11c93b3c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b3f jb 0x11c93b54 */
  if (C.cf) goto L_11c93b54;
  /* 11c93b41 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b44 ja 0x11c93b54 */
  if ((!C.cf&&!C.zf)) goto L_11c93b54;
  /* 11c93b46 or byte ptr [eax + 0x11c9b6c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b6c1)))|(0x20u); w8((uint32_t)(EAX + 0x11c9b6c1), (_r)); fl_logic(_r,8); }
  /* 11c93b4d mov cl, al */
  CL = (AL);
  /* 11c93b4f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c93b52 jmp 0x11c93b34 */
  goto L_11c93b34;
L_11c93b54:;
  /* 11c93b54 and byte ptr [eax + 0x11c9b5c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c9b5c0)))&(0x0u); w8((uint32_t)(EAX + 0x11c9b5c0), (_r)); fl_logic(_r,8); }
L_11c93b5b:;
  /* 11c93b5b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c93b5c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b5e jb 0x11c93b1e */
  if (C.cf) goto L_11c93b1e;
L_11c93b60:;
  /* 11c93b60 pop esi */
  ESI = (pop32());
  /* 11c93b61 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93b62 ret  */
  ESPCHK(0x11c939deu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b63 @ 0x11c93b63 (28 bytes, 7 insns) */
void f_11c93b63(void) {
  FTRACE(0x11c93b63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93b63 cmp dword ptr [0x11c9b8e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b8e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b6a jne 0x11c93b7e */
  if (!C.zf) goto L_11c93b7e;
  /* 11c93b6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11c93b6e call 0x11c9378b */
  push32(0x11c93b73u); f_11c9378b();
  /* 11c93b73 pop ecx */
  ECX = (pop32());
  /* 11c93b74 mov dword ptr [0x11c9b8e8], 1 */
  w32((uint32_t)(0x11c9b8e8), (0x1u));
L_11c93b7e:;
  /* 11c93b7e ret  */
  ESPCHK(0x11c93b63u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b80 @ 0x11c93b80 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11c93b80(void) {
  FTRACE(0x11c93b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11c93b81 mov ebp, esp */
  EBP = (ESP);
  /* 11c93b83 push edi */
  push32((uint32_t)(EDI));
  /* 11c93b84 push esi */
  push32((uint32_t)(ESI));
  /* 11c93b85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c93b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c93b8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93b8e mov eax, ecx */
  EAX = (ECX);
  /* 11c93b90 mov edx, ecx */
  EDX = (ECX);
  /* 11c93b92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93b94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b96 jbe 0x11c93ba0 */
  if ((C.cf||C.zf)) goto L_11c93ba0;
  /* 11c93b98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93b9a jb 0x11c93d18 */
  if (C.cf) goto L_11c93d18;
L_11c93ba0:;
  /* 11c93ba0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c93ba6 jne 0x11c93bbc */
  if (!C.zf) goto L_11c93bbc;
  /* 11c93ba8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93bab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c93bae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93bb1 jb 0x11c93bdc */
  if (C.cf) goto L_11c93bdc;
  /* 11c93bb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93bb5 jmp dword ptr [edx*4 + 0x11c93cc8] */
  switch (EDX) {
    case 0: goto L_11c93cd8;
    case 1: goto L_11c93ce0;
    case 2: goto L_11c93cec;
    case 3: goto L_11c93d00;
    default: x86_unimpl("switch@0x11c93bb5 out of table"); return;
  }
L_11c93bbc:;
  /* 11c93bbc mov eax, edi */
  EAX = (EDI);
  /* 11c93bbe mov edx, 3 */
  EDX = (0x3u);
  /* 11c93bc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93bc6 jb 0x11c93bd4 */
  if (C.cf) goto L_11c93bd4;
  /* 11c93bc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c93bcb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93bcd jmp dword ptr [eax*4 + 0x11c93be0] */
  switch (EAX) {
    case 1: goto L_11c93bf0;
    case 2: goto L_11c93c1c;
    case 3: goto L_11c93c40;
    default: x86_unimpl("switch@0x11c93bcd out of table"); return;
  }
L_11c93bd4:;
  /* 11c93bd4 jmp dword ptr [ecx*4 + 0x11c93cd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c93cd8)))); return;
  /* 11c93bdb nop  */
  /* nop */
L_11c93bdc:;
  /* 11c93bdc jmp dword ptr [ecx*4 + 0x11c93c5c] */
  switch (ECX) {
    case 0: goto L_11c93cbf;
    case 1: goto L_11c93cac;
    case 2: goto L_11c93ca4;
    case 3: goto L_11c93c9c;
    case 4: goto L_11c93c94;
    case 5: goto L_11c93c8c;
    case 6: goto L_11c93c84;
    case 7: goto L_11c93c7c;
    default: x86_unimpl("switch@0x11c93bdc out of table"); return;
  }
  /* 11c93be3 nop  */
  /* nop */
L_11c93bf0:;
  /* 11c93bf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93bf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93bf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c93bf6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93bf9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c93bfc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c93bff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93c02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c93c05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93c08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93c0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93c0e jb 0x11c93bdc */
  if (C.cf) goto L_11c93bdc;
  /* 11c93c10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93c12 jmp dword ptr [edx*4 + 0x11c93cc8] */
  switch (EDX) {
    case 0: goto L_11c93cd8;
    case 1: goto L_11c93ce0;
    case 2: goto L_11c93cec;
    case 3: goto L_11c93d00;
    default: x86_unimpl("switch@0x11c93c12 out of table"); return;
  }
  /* 11c93c19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c93c1c:;
  /* 11c93c1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93c1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93c20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c93c22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93c25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93c28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c93c2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93c2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93c31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93c34 jb 0x11c93bdc */
  if (C.cf) goto L_11c93bdc;
  /* 11c93c36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93c38 jmp dword ptr [edx*4 + 0x11c93cc8] */
  switch (EDX) {
    case 0: goto L_11c93cd8;
    case 1: goto L_11c93ce0;
    case 2: goto L_11c93cec;
    case 3: goto L_11c93d00;
    default: x86_unimpl("switch@0x11c93c38 out of table"); return;
  }
  /* 11c93c3f nop  */
  /* nop */
L_11c93c40:;
  /* 11c93c40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93c42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93c44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c93c46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c93c47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93c4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c93c4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93c4e jb 0x11c93bdc */
  if (C.cf) goto L_11c93bdc;
  /* 11c93c50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93c52 jmp dword ptr [edx*4 + 0x11c93cc8] */
  switch (EDX) {
    case 0: goto L_11c93cd8;
    case 1: goto L_11c93ce0;
    case 2: goto L_11c93cec;
    case 3: goto L_11c93d00;
    default: x86_unimpl("switch@0x11c93c52 out of table"); return;
  }
  /* 11c93c59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c93c7c:;
  /* 11c93c7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c93c80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c93c84:;
  /* 11c93c84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c93c88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c93c8c:;
  /* 11c93c8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c93c90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c93c94:;
  /* 11c93c94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c93c98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c93c9c:;
  /* 11c93c9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c93ca0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c93ca4:;
  /* 11c93ca4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c93ca8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c93cac:;
  /* 11c93cac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c93cb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c93cb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c93cbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93cbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c93cbf:;
  /* 11c93cbf jmp dword ptr [edx*4 + 0x11c93cc8] */
  switch (EDX) {
    case 0: goto L_11c93cd8;
    case 1: goto L_11c93ce0;
    case 2: goto L_11c93cec;
    case 3: goto L_11c93d00;
    default: x86_unimpl("switch@0x11c93cbf out of table"); return;
  }
  /* 11c93cc6 mov edi, edi */
  EDI = (EDI);
L_11c93cd8:;
  /* 11c93cd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93cdb pop esi */
  ESI = (pop32());
  /* 11c93cdc pop edi */
  EDI = (pop32());
  /* 11c93cdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93cde ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93cdf nop  */
  /* nop */
L_11c93ce0:;
  /* 11c93ce0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93ce2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c93ce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93ce7 pop esi */
  ESI = (pop32());
  /* 11c93ce8 pop edi */
  EDI = (pop32());
  /* 11c93ce9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93cea ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93ceb nop  */
  /* nop */
L_11c93cec:;
  /* 11c93cec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93cee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c93cf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93cf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c93cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93cf9 pop esi */
  ESI = (pop32());
  /* 11c93cfa pop edi */
  EDI = (pop32());
  /* 11c93cfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93cfc ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93cfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c93d00:;
  /* 11c93d00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93d02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c93d04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93d07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c93d0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c93d0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c93d10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93d13 pop esi */
  ESI = (pop32());
  /* 11c93d14 pop edi */
  EDI = (pop32());
  /* 11c93d15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93d16 ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93d17 nop  */
  /* nop */
L_11c93d18:;
  /* 11c93d18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c93d1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c93d20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c93d26 jne 0x11c93d4c */
  if (!C.zf) goto L_11c93d4c;
  /* 11c93d28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93d2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c93d2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93d31 jb 0x11c93d40 */
  if (C.cf) goto L_11c93d40;
  /* 11c93d33 std  */
  C.df=1;
  /* 11c93d34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93d36 cld  */
  C.df=0;
  /* 11c93d37 jmp dword ptr [edx*4 + 0x11c93e60] */
  switch (EDX) {
    case 0: goto L_11c93e70;
    case 1: goto L_11c93e78;
    case 2: goto L_11c93e88;
    case 3: goto L_11c93e9c;
    default: x86_unimpl("switch@0x11c93d37 out of table"); return;
  }
  /* 11c93d3e mov edi, edi */
  EDI = (EDI);
L_11c93d40:;
  /* 11c93d40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c93d42 jmp dword ptr [ecx*4 + 0x11c93e10] */
  switch (ECX) {
    case 0: goto L_11c93e57;
    default: x86_unimpl("switch@0x11c93d42 out of table"); return;
  }
  /* 11c93d49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c93d4c:;
  /* 11c93d4c mov eax, edi */
  EAX = (EDI);
  /* 11c93d4e mov edx, 3 */
  EDX = (0x3u);
  /* 11c93d53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93d56 jb 0x11c93d64 */
  if (C.cf) goto L_11c93d64;
  /* 11c93d58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c93d5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93d5d jmp dword ptr [eax*4 + 0x11c93d68] */
  switch (EAX) {
    case 1: goto L_11c93d78;
    case 2: goto L_11c93d98;
    case 3: goto L_11c93dc0;
    default: x86_unimpl("switch@0x11c93d5d out of table"); return;
  }
L_11c93d64:;
  /* 11c93d64 jmp dword ptr [ecx*4 + 0x11c93e60] */
  switch (ECX) {
    case 0: goto L_11c93e70;
    case 1: goto L_11c93e78;
    case 2: goto L_11c93e88;
    case 3: goto L_11c93e9c;
    default: x86_unimpl("switch@0x11c93d64 out of table"); return;
  }
  /* 11c93d6b nop  */
  /* nop */
L_11c93d78:;
  /* 11c93d78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c93d7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93d7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c93d80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c93d81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93d84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c93d85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93d88 jb 0x11c93d40 */
  if (C.cf) goto L_11c93d40;
  /* 11c93d8a std  */
  C.df=1;
  /* 11c93d8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93d8d cld  */
  C.df=0;
  /* 11c93d8e jmp dword ptr [edx*4 + 0x11c93e60] */
  switch (EDX) {
    case 0: goto L_11c93e70;
    case 1: goto L_11c93e78;
    case 2: goto L_11c93e88;
    case 3: goto L_11c93e9c;
    default: x86_unimpl("switch@0x11c93d8e out of table"); return;
  }
  /* 11c93d95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c93d98:;
  /* 11c93d98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c93d9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93d9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c93da0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c93da3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93da6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c93da9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93dac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93daf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93db2 jb 0x11c93d40 */
  if (C.cf) goto L_11c93d40;
  /* 11c93db4 std  */
  C.df=1;
  /* 11c93db5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93db7 cld  */
  C.df=0;
  /* 11c93db8 jmp dword ptr [edx*4 + 0x11c93e60] */
  switch (EDX) {
    case 0: goto L_11c93e70;
    case 1: goto L_11c93e78;
    case 2: goto L_11c93e88;
    case 3: goto L_11c93e9c;
    default: x86_unimpl("switch@0x11c93db8 out of table"); return;
  }
  /* 11c93dbf nop  */
  /* nop */
L_11c93dc0:;
  /* 11c93dc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c93dc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93dc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c93dc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c93dcb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c93dce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93dd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c93dd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c93dd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93dda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93ddd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93de0 jb 0x11c93d40 */
  if (C.cf) goto L_11c93d40;
  /* 11c93de6 std  */
  C.df=1;
  /* 11c93de7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c93de9 cld  */
  C.df=0;
  /* 11c93dea jmp dword ptr [edx*4 + 0x11c93e60] */
  switch (EDX) {
    case 0: goto L_11c93e70;
    case 1: goto L_11c93e78;
    case 2: goto L_11c93e88;
    case 3: goto L_11c93e9c;
    default: x86_unimpl("switch@0x11c93dea out of table"); return;
  }
  /* 11c93df1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c93df4 adc al, 0x3e */
  { uint32_t _a=(AL),_b=(0x3eu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c93df6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93df7 adc dword ptr [esi + edi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c93dfa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93dfb adc dword ptr [esi + edi], esp */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c93dfe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93dff adc dword ptr [esi + edi], ebp */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c93e02 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93e03 adc dword ptr [esi + edi], esi */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c93e06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93e07 adc dword ptr [esi + edi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c93e0a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93e0b adc dword ptr [esi + edi - 0x37], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + -0x37))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + -0x37), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c93e14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c93e18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c93e1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c93e20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c93e24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c93e28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c93e2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c93e30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c93e34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c93e38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c93e3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c93e40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c93e44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c93e48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c93e4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c93e53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93e55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c93e57:;
  /* 11c93e57 jmp dword ptr [edx*4 + 0x11c93e60] */
  switch (EDX) {
    case 0: goto L_11c93e70;
    case 1: goto L_11c93e78;
    case 2: goto L_11c93e88;
    case 3: goto L_11c93e9c;
    default: x86_unimpl("switch@0x11c93e57 out of table"); return;
  }
  /* 11c93e5e mov edi, edi */
  EDI = (EDI);
L_11c93e70:;
  /* 11c93e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93e73 pop esi */
  ESI = (pop32());
  /* 11c93e74 pop edi */
  EDI = (pop32());
  /* 11c93e75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93e76 ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93e77 nop  */
  /* nop */
L_11c93e78:;
  /* 11c93e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c93e7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c93e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93e81 pop esi */
  ESI = (pop32());
  /* 11c93e82 pop edi */
  EDI = (pop32());
  /* 11c93e83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93e84 ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93e85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c93e88:;
  /* 11c93e88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c93e8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c93e8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c93e91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c93e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93e97 pop esi */
  ESI = (pop32());
  /* 11c93e98 pop edi */
  EDI = (pop32());
  /* 11c93e99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93e9a ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
  /* 11c93e9b nop  */
  /* nop */
L_11c93e9c:;
  /* 11c93e9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c93e9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c93ea2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c93ea5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c93ea8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93eab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c93eae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93eb1 pop esi */
  ESI = (pop32());
  /* 11c93eb2 pop edi */
  EDI = (pop32());
  /* 11c93eb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c93eb4 ret  */
  ESPCHK(0x11c93b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb5 @ 0x11c93eb5 (23 bytes, 7 insns) */
void f_11c93eb5(void) {
  FTRACE(0x11c93eb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c93eb7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c93ebb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c93ebf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c93ec3 call 0x11c93ecc */
  push32(0x11c93ec8u); f_11c93ecc();
  /* 11c93ec8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c93ecb ret  */
  ESPCHK(0x11c93eb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ecc @ 0x11c93ecc (517 bytes, 195 insns) */
void f_11c93ecc(void) {
  FTRACE(0x11c93eccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c93ecc push ebp */
  push32((uint32_t)(EBP));
  /* 11c93ecd mov ebp, esp */
  EBP = (ESP);
  /* 11c93ecf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93ed2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c93ed3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c93ed7 push esi */
  push32((uint32_t)(ESI));
  /* 11c93ed8 push edi */
  push32((uint32_t)(EDI));
  /* 11c93ed9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c93edc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c93ede lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11c93ee1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c93ee4:;
  /* 11c93ee4 cmp dword ptr [0x11c9ab44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9ab44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93eeb jle 0x11c93efc */
  if ((C.zf||C.sf!=C.of)) goto L_11c93efc;
  /* 11c93eed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c93ef0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c93ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11c93ef3 call 0x11c959c4 */
  push32(0x11c93ef8u); f_11c959c4();
  /* 11c93ef8 pop ecx */
  ECX = (pop32());
  /* 11c93ef9 pop ecx */
  ECX = (pop32());
  /* 11c93efa jmp 0x11c93f0b */
  goto L_11c93f0b;
L_11c93efc:;
  /* 11c93efc mov ecx, dword ptr [0x11c9a938] */
  ECX = (r32((uint32_t)(0x11c9a938)));
  /* 11c93f02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c93f05 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c93f08 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11c93f0b:;
  /* 11c93f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93f0d je 0x11c93f14 */
  if (C.zf) goto L_11c93f14;
  /* 11c93f0f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11c93f11 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c93f12 jmp 0x11c93ee4 */
  goto L_11c93ee4;
L_11c93f14:;
  /* 11c93f14 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f17 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c93f1a jne 0x11c93f22 */
  if (!C.zf) goto L_11c93f22;
  /* 11c93f1c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c93f20 jmp 0x11c93f27 */
  goto L_11c93f27;
L_11c93f22:;
  /* 11c93f22 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f25 jne 0x11c93f2d */
  if (!C.zf) goto L_11c93f2d;
L_11c93f27:;
  /* 11c93f27 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11c93f29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c93f2a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c93f2d:;
  /* 11c93f2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c93f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93f32 jl 0x11c940c1 */
  if ((C.sf!=C.of)) goto L_11c940c1;
  /* 11c93f38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93f3b je 0x11c940c1 */
  if (C.zf) goto L_11c940c1;
  /* 11c93f41 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93f44 jg 0x11c940c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c940c1;
  /* 11c93f4a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c93f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93f4e pop ecx */
  ECX = (pop32());
  /* 11c93f4f jne 0x11c93f75 */
  if (!C.zf) goto L_11c93f75;
  /* 11c93f51 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f54 je 0x11c93f5f */
  if (C.zf) goto L_11c93f5f;
  /* 11c93f56 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11c93f5d jmp 0x11c93f91 */
  goto L_11c93f91;
L_11c93f5f:;
  /* 11c93f5f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93f61 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f63 je 0x11c93f72 */
  if (C.zf) goto L_11c93f72;
  /* 11c93f65 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f67 je 0x11c93f72 */
  if (C.zf) goto L_11c93f72;
  /* 11c93f69 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11c93f70 jmp 0x11c93f91 */
  goto L_11c93f91;
L_11c93f72:;
  /* 11c93f72 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11c93f75:;
  /* 11c93f75 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93f78 jne 0x11c93f91 */
  if (!C.zf) goto L_11c93f91;
  /* 11c93f7a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f7d jne 0x11c93f91 */
  if (!C.zf) goto L_11c93f91;
  /* 11c93f7f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c93f81 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f83 je 0x11c93f89 */
  if (C.zf) goto L_11c93f89;
  /* 11c93f85 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c93f87 jne 0x11c93f91 */
  if (!C.zf) goto L_11c93f91;
L_11c93f89:;
  /* 11c93f89 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c93f8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c93f8d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c93f8e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c93f91:;
  /* 11c93f91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c93f94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c93f96 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c93f99 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11c93f9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11c93fa1:;
  /* 11c93fa1 cmp dword ptr [0x11c9ab44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9ab44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93fa8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11c93fab jle 0x11c93fb9 */
  if ((C.zf||C.sf!=C.of)) goto L_11c93fb9;
  /* 11c93fad push 4 */
  push32((uint32_t)(0x4u));
  /* 11c93faf push esi */
  push32((uint32_t)(ESI));
  /* 11c93fb0 call 0x11c959c4 */
  push32(0x11c93fb5u); f_11c959c4();
  /* 11c93fb5 pop ecx */
  ECX = (pop32());
  /* 11c93fb6 pop ecx */
  ECX = (pop32());
  /* 11c93fb7 jmp 0x11c93fc4 */
  goto L_11c93fc4;
L_11c93fb9:;
  /* 11c93fb9 mov eax, dword ptr [0x11c9a938] */
  EAX = (r32((uint32_t)(0x11c9a938)));
  /* 11c93fbe mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11c93fc1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c93fc4:;
  /* 11c93fc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93fc6 je 0x11c93fd0 */
  if (C.zf) goto L_11c93fd0;
  /* 11c93fc8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c93fcb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c93fce jmp 0x11c94002 */
  goto L_11c94002;
L_11c93fd0:;
  /* 11c93fd0 cmp dword ptr [0x11c9ab44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9ab44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c93fd7 jle 0x11c93fe4 */
  if ((C.zf||C.sf!=C.of)) goto L_11c93fe4;
  /* 11c93fd9 push edi */
  push32((uint32_t)(EDI));
  /* 11c93fda push esi */
  push32((uint32_t)(ESI));
  /* 11c93fdb call 0x11c959c4 */
  push32(0x11c93fe0u); f_11c959c4();
  /* 11c93fe0 pop ecx */
  ECX = (pop32());
  /* 11c93fe1 pop ecx */
  ECX = (pop32());
  /* 11c93fe2 jmp 0x11c93fef */
  goto L_11c93fef;
L_11c93fe4:;
  /* 11c93fe4 mov eax, dword ptr [0x11c9a938] */
  EAX = (r32((uint32_t)(0x11c9a938)));
  /* 11c93fe9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11c93fed and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11c93fef:;
  /* 11c93fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c93ff1 je 0x11c9403d */
  if (C.zf) goto L_11c9403d;
  /* 11c93ff3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c93ff6 push eax */
  push32((uint32_t)(EAX));
  /* 11c93ff7 call 0x11c95889 */
  push32(0x11c93ffcu); f_11c95889();
  /* 11c93ffc pop ecx */
  ECX = (pop32());
  /* 11c93ffd mov ecx, eax */
  ECX = (EAX);
  /* 11c93fff sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11c94002:;
  /* 11c94002 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94005 jae 0x11c9403d */
  if (!C.cf) goto L_11c9403d;
  /* 11c94007 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11c9400a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c9400e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94011 jb 0x11c94027 */
  if (C.cf) goto L_11c94027;
  /* 11c94013 jne 0x11c94021 */
  if (!C.zf) goto L_11c94021;
  /* 11c94015 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c94018 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c9401a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c9401d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9401f jbe 0x11c94027 */
  if ((C.cf||C.zf)) goto L_11c94027;
L_11c94021:;
  /* 11c94021 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c94025 jmp 0x11c94030 */
  goto L_11c94030;
L_11c94027:;
  /* 11c94027 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c9402b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9402d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11c94030:;
  /* 11c94030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c94033 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c94036 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c94038 jmp 0x11c93fa1 */
  goto L_11c93fa1;
L_11c9403d:;
  /* 11c9403d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c94040 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c94043 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c94046 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c94048 jne 0x11c9405a */
  if (!C.zf) goto L_11c9405a;
  /* 11c9404a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c9404c je 0x11c94054 */
  if (C.zf) goto L_11c94054;
  /* 11c9404e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94051 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c94054:;
  /* 11c94054 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c94058 jmp 0x11c940a5 */
  goto L_11c940a5;
L_11c9405a:;
  /* 11c9405a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11c9405c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11c94061 jne 0x11c9407e */
  if (!C.zf) goto L_11c9407e;
  /* 11c94063 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c94065 jne 0x11c940a5 */
  if (!C.zf) goto L_11c940a5;
  /* 11c94067 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11c9406a je 0x11c94075 */
  if (C.zf) goto L_11c94075;
  /* 11c9406c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94073 ja 0x11c9407e */
  if ((!C.cf&&!C.zf)) goto L_11c9407e;
L_11c94075:;
  /* 11c94075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94077 jne 0x11c940a5 */
  if (!C.zf) goto L_11c940a5;
  /* 11c94079 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9407c jbe 0x11c940a5 */
  if ((C.cf||C.zf)) goto L_11c940a5;
L_11c9407e:;
  /* 11c9407e call 0x11c95880 */
  push32(0x11c94083u); f_11c95880();
  /* 11c94083 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11c94087 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11c9408d je 0x11c94095 */
  if (C.zf) goto L_11c94095;
  /* 11c9408f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c94093 jmp 0x11c940a5 */
  goto L_11c940a5;
L_11c94095:;
  /* 11c94095 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c94098 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11c9409a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11c9409c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9409e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c940a0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c940a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c940a5:;
  /* 11c940a5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c940a7 je 0x11c940ae */
  if (C.zf) goto L_11c940ae;
  /* 11c940a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c940ac mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11c940ae:;
  /* 11c940ae test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11c940b2 je 0x11c940bc */
  if (C.zf) goto L_11c940bc;
  /* 11c940b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c940b7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c940b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c940bc:;
  /* 11c940bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c940bf jmp 0x11c940cc */
  goto L_11c940cc;
L_11c940c1:;
  /* 11c940c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c940c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c940c6 je 0x11c940ca */
  if (C.zf) goto L_11c940ca;
  /* 11c940c8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11c940ca:;
  /* 11c940ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c940cc:;
  /* 11c940cc pop edi */
  EDI = (pop32());
  /* 11c940cd pop esi */
  ESI = (pop32());
  /* 11c940ce pop ebx */
  EBX = (pop32());
  /* 11c940cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c940d0 ret  */
  ESPCHK(0x11c93eccu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11c940f0 (193 bytes, 90 insns) */
void f_11c940f0(void) {
  FTRACE(0x11c940f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c940f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c940f2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c940f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c940f7 mov ebx, eax */
  EBX = (EAX);
  /* 11c940f9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c940fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c94100 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c94106 je 0x11c9411b */
  if (C.zf) goto L_11c9411b;
L_11c94108:;
  /* 11c94108 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11c9410a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c9410b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9410d je 0x11c940e0 */
  if (C.zf) { jmp_ind(0x11c940e0u); return; }
  /* 11c9410f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c94111 je 0x11c94164 */
  if (C.zf) goto L_11c94164;
  /* 11c94113 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c94119 jne 0x11c94108 */
  if (!C.zf) goto L_11c94108;
L_11c9411b:;
  /* 11c9411b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11c9411d push edi */
  push32((uint32_t)(EDI));
  /* 11c9411e mov eax, ebx */
  EAX = (EBX);
  /* 11c94120 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11c94123 push esi */
  push32((uint32_t)(ESI));
  /* 11c94124 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11c94126:;
  /* 11c94126 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c94128 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11c9412d mov eax, ecx */
  EAX = (ECX);
  /* 11c9412f mov esi, edi */
  ESI = (EDI);
  /* 11c94131 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11c94133 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94135 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94137 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11c9413a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c9413d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c9413f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c94141 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94144 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11c9414a jne 0x11c94168 */
  if (!C.zf) goto L_11c94168;
  /* 11c9414c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11c94151 je 0x11c94126 */
  if (C.zf) goto L_11c94126;
  /* 11c94153 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11c94158 jne 0x11c94162 */
  if (!C.zf) goto L_11c94162;
  /* 11c9415a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11c94160 jne 0x11c94126 */
  if (!C.zf) goto L_11c94126;
L_11c94162:;
  /* 11c94162 pop esi */
  ESI = (pop32());
  /* 11c94163 pop edi */
  EDI = (pop32());
L_11c94164:;
  /* 11c94164 pop ebx */
  EBX = (pop32());
  /* 11c94165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c94167 ret  */
  ESPCHK(0x11c940f0u, _esp0);
  ESP += 4; return;
L_11c94168:;
  /* 11c94168 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11c9416b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9416d je 0x11c941a5 */
  if (C.zf) goto L_11c941a5;
  /* 11c9416f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c94171 je 0x11c94162 */
  if (C.zf) goto L_11c94162;
  /* 11c94173 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94175 je 0x11c9419e */
  if (C.zf) goto L_11c9419e;
  /* 11c94177 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c94179 je 0x11c94162 */
  if (C.zf) goto L_11c94162;
  /* 11c9417b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c9417e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94180 je 0x11c94197 */
  if (C.zf) goto L_11c94197;
  /* 11c94182 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c94184 je 0x11c94162 */
  if (C.zf) goto L_11c94162;
  /* 11c94186 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94188 je 0x11c94190 */
  if (C.zf) goto L_11c94190;
  /* 11c9418a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c9418c je 0x11c94162 */
  if (C.zf) goto L_11c94162;
  /* 11c9418e jmp 0x11c94126 */
  goto L_11c94126;
L_11c94190:;
  /* 11c94190 pop esi */
  ESI = (pop32());
  /* 11c94191 pop edi */
  EDI = (pop32());
  /* 11c94192 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11c94195 pop ebx */
  EBX = (pop32());
  /* 11c94196 ret  */
  ESPCHK(0x11c940f0u, _esp0);
  ESP += 4; return;
L_11c94197:;
  /* 11c94197 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11c9419a pop esi */
  ESI = (pop32());
  /* 11c9419b pop edi */
  EDI = (pop32());
  /* 11c9419c pop ebx */
  EBX = (pop32());
  /* 11c9419d ret  */
  ESPCHK(0x11c940f0u, _esp0);
  ESP += 4; return;
L_11c9419e:;
  /* 11c9419e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11c941a1 pop esi */
  ESI = (pop32());
  /* 11c941a2 pop edi */
  EDI = (pop32());
  /* 11c941a3 pop ebx */
  EBX = (pop32());
  /* 11c941a4 ret  */
  ESPCHK(0x11c940f0u, _esp0);
  ESP += 4; return;
L_11c941a5:;
  /* 11c941a5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11c941a8 pop esi */
  ESI = (pop32());
  /* 11c941a9 pop edi */
  EDI = (pop32());
  /* 11c941aa pop ebx */
  EBX = (pop32());
  /* 11c941ab ret  */
  ESPCHK(0x11c940f0u, _esp0);
  ESP += 4; return;
  /* 11c941ac int3  */
  x86_unimpl("int3 @ 0x11c941ac");
  /* 11c941ad int3  */
  x86_unimpl("int3 @ 0x11c941ad");
  /* 11c941ae int3  */
  x86_unimpl("int3 @ 0x11c941ae");
  /* 11c941af int3  */
  x86_unimpl("int3 @ 0x11c941af");
}

/* _strstr @ 0x11c941b0 (128 bytes, 66 insns) */
void f_11c941b0(void) {
  FTRACE(0x11c941b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c941b0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c941b4 push edi */
  push32((uint32_t)(EDI));
  /* 11c941b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c941b6 push esi */
  push32((uint32_t)(ESI));
  /* 11c941b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c941b9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c941bd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c941bf je 0x11c9422a */
  if (C.zf) goto L_11c9422a;
  /* 11c941c1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11c941c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c941c6 je 0x11c94217 */
  if (C.zf) goto L_11c94217;
L_11c941c8:;
  /* 11c941c8 mov esi, edi */
  ESI = (EDI);
  /* 11c941ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c941ce mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c941d0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c941d1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c941d3 je 0x11c941ea */
  if (C.zf) goto L_11c941ea;
  /* 11c941d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c941d7 je 0x11c941e4 */
  if (C.zf) goto L_11c941e4;
L_11c941d9:;
  /* 11c941d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c941db inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c941dc:;
  /* 11c941dc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c941de je 0x11c941ea */
  if (C.zf) goto L_11c941ea;
  /* 11c941e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c941e2 jne 0x11c941d9 */
  if (!C.zf) goto L_11c941d9;
L_11c941e4:;
  /* 11c941e4 pop esi */
  ESI = (pop32());
  /* 11c941e5 pop ebx */
  EBX = (pop32());
  /* 11c941e6 pop edi */
  EDI = (pop32());
  /* 11c941e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c941e9 ret  */
  ESPCHK(0x11c941b0u, _esp0);
  ESP += 4; return;
L_11c941ea:;
  /* 11c941ea mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c941ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c941ed cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c941ef jne 0x11c941dc */
  if (!C.zf) goto L_11c941dc;
  /* 11c941f1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11c941f4:;
  /* 11c941f4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11c941f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c941f9 je 0x11c94223 */
  if (C.zf) goto L_11c94223;
  /* 11c941fb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c941fd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94200 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94202 jne 0x11c941c8 */
  if (!C.zf) goto L_11c941c8;
  /* 11c94204 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11c94207 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c94209 je 0x11c94223 */
  if (C.zf) goto L_11c94223;
  /* 11c9420b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11c9420e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94211 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94213 je 0x11c941f4 */
  if (C.zf) goto L_11c941f4;
  /* 11c94215 jmp 0x11c941c8 */
  goto L_11c941c8;
L_11c94217:;
  /* 11c94217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c94219 pop esi */
  ESI = (pop32());
  /* 11c9421a pop ebx */
  EBX = (pop32());
  /* 11c9421b pop edi */
  EDI = (pop32());
  /* 11c9421c mov al, dl */
  AL = (DL);
  /* 11c9421e jmp 0x11c940f6 */
  jmp_ind(0x11c940f6u); return;
L_11c94223:;
  /* 11c94223 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11c94226 pop esi */
  ESI = (pop32());
  /* 11c94227 pop ebx */
  EBX = (pop32());
  /* 11c94228 pop edi */
  EDI = (pop32());
  /* 11c94229 ret  */
  ESPCHK(0x11c941b0u, _esp0);
  ESP += 4; return;
L_11c9422a:;
  /* 11c9422a mov eax, edi */
  EAX = (EDI);
  /* 11c9422c pop esi */
  ESI = (pop32());
  /* 11c9422d pop ebx */
  EBX = (pop32());
  /* 11c9422e pop edi */
  EDI = (pop32());
  /* 11c9422f ret  */
  ESPCHK(0x11c941b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11c94230 (56 bytes, 31 insns) */
void f_11c94230(void) {
  FTRACE(0x11c94230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94230 push ebp */
  push32((uint32_t)(EBP));
  /* 11c94231 mov ebp, esp */
  EBP = (ESP);
  /* 11c94233 push edi */
  push32((uint32_t)(EDI));
  /* 11c94234 push esi */
  push32((uint32_t)(ESI));
  /* 11c94235 push ebx */
  push32((uint32_t)(EBX));
  /* 11c94236 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c94239 jecxz 0x11c94261 */
  x86_unimpl("jecxz @ 0x11c94239");
  /* 11c9423b mov ebx, ecx */
  EBX = (ECX);
  /* 11c9423d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94240 mov esi, edi */
  ESI = (EDI);
  /* 11c94242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c94244 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11c94246 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c94248 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9424a mov edi, esi */
  EDI = (ESI);
  /* 11c9424c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c9424f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11c94251 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11c94254 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c94256 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94259 ja 0x11c9425f */
  if ((!C.cf&&!C.zf)) goto L_11c9425f;
  /* 11c9425b je 0x11c94261 */
  if (C.zf) goto L_11c94261;
  /* 11c9425d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c9425e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11c9425f:;
  /* 11c9425f not ecx */
  ECX = (~(ECX));
L_11c94261:;
  /* 11c94261 mov eax, ecx */
  EAX = (ECX);
  /* 11c94263 pop ebx */
  EBX = (pop32());
  /* 11c94264 pop esi */
  ESI = (pop32());
  /* 11c94265 pop edi */
  EDI = (pop32());
  /* 11c94266 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c94267 ret  */
  ESPCHK(0x11c94230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x11c94270 (47 bytes, 17 insns) */
void f_11c94270(void) {
  FTRACE(0x11c94270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94270 push ecx */
  push32((uint32_t)(ECX));
  /* 11c94271 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94276 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11c9427a jb 0x11c94290 */
  if (C.cf) goto L_11c94290;
L_11c9427c:;
  /* 11c9427c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94282 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94287 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c94289 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9428e jae 0x11c9427c */
  if (!C.cf) goto L_11c9427c;
L_11c94290:;
  /* 11c94290 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94292 mov eax, esp */
  EAX = (ESP);
  /* 11c94294 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c94296 mov esp, ecx */
  ESP = (ECX);
  /* 11c94298 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c9429a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c9429d push eax */
  push32((uint32_t)(EAX));
  /* 11c9429e ret  */
  ESPCHK(0x11c94270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000429f @ 0x11c9429f (72 bytes, 17 insns) */
void f_11c9429f(void) {
  FTRACE(0x11c9429fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9429f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11c942a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c942a6 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c942ac call dword ptr [0x11c97044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97044))), 0x11c942b2u);
  /* 11c942b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c942b4 mov dword ptr [0x11c9b59c], eax */
  w32((uint32_t)(0x11c9b59c), (EAX));
  /* 11c942b9 jne 0x11c942bc */
  if (!C.zf) goto L_11c942bc;
  /* 11c942bb ret  */
  ESPCHK(0x11c9429fu, _esp0);
  ESP += 4; return;
L_11c942bc:;
  /* 11c942bc mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c942c0 and dword ptr [0x11c9b594], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c9b594)))&(0x0u); w32((uint32_t)(0x11c9b594), (_r)); fl_logic(_r,32); }
  /* 11c942c7 and dword ptr [0x11c9b598], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c9b598)))&(0x0u); w32((uint32_t)(0x11c9b598), (_r)); fl_logic(_r,32); }
  /* 11c942ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11c942d0 mov dword ptr [0x11c9b590], eax */
  w32((uint32_t)(0x11c9b590), (EAX));
  /* 11c942d5 mov dword ptr [0x11c9b5a0], ecx */
  w32((uint32_t)(0x11c9b5a0), (ECX));
  /* 11c942db mov dword ptr [0x11c9b588], 0x10 */
  w32((uint32_t)(0x11c9b588), (0x10u));
  /* 11c942e5 pop eax */
  EAX = (pop32());
  /* 11c942e6 ret  */
  ESPCHK(0x11c9429fu, _esp0);
  ESP += 4; return;
}

/* FUN_100042e7 @ 0x11c942e7 (43 bytes, 14 insns) */
void f_11c942e7(void) {
  FTRACE(0x11c942e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c942e7 mov eax, dword ptr [0x11c9b598] */
  EAX = (r32((uint32_t)(0x11c9b598)));
  /* 11c942ec lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c942ef mov eax, dword ptr [0x11c9b59c] */
  EAX = (r32((uint32_t)(0x11c9b59c)));
  /* 11c942f4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11c942f7:;
  /* 11c942f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c942f9 jae 0x11c9430f */
  if (!C.cf) goto L_11c9430f;
  /* 11c942fb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c942ff sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94302 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94308 jb 0x11c94311 */
  if (C.cf) goto L_11c94311;
  /* 11c9430a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9430d jmp 0x11c942f7 */
  goto L_11c942f7;
L_11c9430f:;
  /* 11c9430f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c94311:;
  /* 11c94311 ret  */
  ESPCHK(0x11c942e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004312 @ 0x11c94312 (809 bytes, 265 insns) */
void f_11c94312(void) {
  FTRACE(0x11c94312u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94312 push ebp */
  push32((uint32_t)(EBP));
  /* 11c94313 mov ebp, esp */
  EBP = (ESP);
  /* 11c94315 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9431b push ebx */
  push32((uint32_t)(EBX));
  /* 11c9431c push esi */
  push32((uint32_t)(ESI));
  /* 11c9431d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c94320 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11c94323 push edi */
  push32((uint32_t)(EDI));
  /* 11c94324 mov edi, esi */
  EDI = (ESI);
  /* 11c94326 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94329 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9432c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c9432f mov ecx, edi */
  ECX = (EDI);
  /* 11c94331 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c94337 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c9433e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c94341 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c94343 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c94344 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11c94347 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c9434a jne 0x11c94636 */
  if (!C.zf) goto L_11c94636;
  /* 11c94350 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11c94353 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11c94356 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11c94359 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11c9435c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11c9435f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c94362 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c94365 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11c94368 jne 0x11c943e8 */
  if (!C.zf) goto L_11c943e8;
  /* 11c9436a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c9436d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c9436e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94371 jbe 0x11c94376 */
  if ((C.cf||C.zf)) goto L_11c94376;
  /* 11c94373 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c94375 pop edx */
  EDX = (pop32());
L_11c94376:;
  /* 11c94376 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c94379 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9437c jne 0x11c943ca */
  if (!C.zf) goto L_11c943ca;
  /* 11c9437e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94381 jae 0x11c943a1 */
  if (!C.cf) goto L_11c943a1;
  /* 11c94383 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c94388 mov ecx, edx */
  ECX = (EDX);
  /* 11c9438a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c9438c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11c94390 not ebx */
  EBX = (~(EBX));
  /* 11c94392 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c94396 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c94398 jne 0x11c943c2 */
  if (!C.zf) goto L_11c943c2;
  /* 11c9439a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9439d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c9439f jmp 0x11c943c2 */
  goto L_11c943c2;
L_11c943a1:;
  /* 11c943a1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c943a4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c943a9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c943ab lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11c943af not ebx */
  EBX = (~(EBX));
  /* 11c943b1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c943b8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c943ba jne 0x11c943c2 */
  if (!C.zf) goto L_11c943c2;
  /* 11c943bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c943bf and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c943c2:;
  /* 11c943c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c943c5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c943c8 jmp 0x11c943cd */
  goto L_11c943cd;
L_11c943ca:;
  /* 11c943ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11c943cd:;
  /* 11c943cd mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11c943d0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c943d3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c943d6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11c943d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c943dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c943df mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c943e2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c943e5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11c943e8:;
  /* 11c943e8 mov edx, ecx */
  EDX = (ECX);
  /* 11c943ea sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c943ed dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c943ee cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c943f1 jbe 0x11c943f6 */
  if ((C.cf||C.zf)) goto L_11c943f6;
  /* 11c943f3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c943f5 pop edx */
  EDX = (pop32());
L_11c943f6:;
  /* 11c943f6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c943f9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11c943fc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11c943ff jne 0x11c94499 */
  if (!C.zf) goto L_11c94499;
  /* 11c94405 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94408 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c9440b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11c9440e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c94410 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c94413 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c94414 pop esi */
  ESI = (pop32());
  /* 11c94415 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94417 jbe 0x11c9441b */
  if ((C.cf||C.zf)) goto L_11c9441b;
  /* 11c94419 mov ebx, esi */
  EBX = (ESI);
L_11c9441b:;
  /* 11c9441b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9441e mov edx, ecx */
  EDX = (ECX);
  /* 11c94420 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c94423 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c94426 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c94427 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94429 jbe 0x11c9442d */
  if ((C.cf||C.zf)) goto L_11c9442d;
  /* 11c9442b mov edx, esi */
  EDX = (ESI);
L_11c9442d:;
  /* 11c9442d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9442f je 0x11c94494 */
  if (C.zf) goto L_11c94494;
  /* 11c94431 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c94434 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c94437 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9443a jne 0x11c9447c */
  if (!C.zf) goto L_11c9447c;
  /* 11c9443c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9443f jae 0x11c9445d */
  if (!C.cf) goto L_11c9445d;
  /* 11c94441 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c94446 mov ecx, ebx */
  ECX = (EBX);
  /* 11c94448 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c9444a not esi */
  ESI = (~(ESI));
  /* 11c9444c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c94450 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11c94454 jne 0x11c9447c */
  if (!C.zf) goto L_11c9447c;
  /* 11c94456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94459 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c9445b jmp 0x11c9447c */
  goto L_11c9447c;
L_11c9445d:;
  /* 11c9445d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11c94460 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c94465 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c94467 not esi */
  ESI = (~(ESI));
  /* 11c94469 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c94470 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11c94474 jne 0x11c9447c */
  if (!C.zf) goto L_11c9447c;
  /* 11c94476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94479 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c9447c:;
  /* 11c9447c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c9447f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11c94482 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c94485 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11c94488 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c9448b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c9448e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c94491 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11c94494:;
  /* 11c94494 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c94497 jmp 0x11c9449c */
  goto L_11c9449c;
L_11c94499:;
  /* 11c94499 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c9449c:;
  /* 11c9449c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c944a0 jne 0x11c944aa */
  if (!C.zf) goto L_11c944aa;
  /* 11c944a2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c944a4 je 0x11c9452b */
  if (C.zf) goto L_11c9452b;
L_11c944aa:;
  /* 11c944aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c944ad mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11c944b1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11c944b4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11c944b7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11c944ba mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c944bd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c944c0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11c944c3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c944c6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c944c9 jne 0x11c9452b */
  if (!C.zf) goto L_11c9452b;
  /* 11c944cb mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11c944cf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c944d2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11c944d5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c944d7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11c944db jae 0x11c94502 */
  if (!C.cf) goto L_11c94502;
  /* 11c944dd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c944e1 jne 0x11c944f1 */
  if (!C.zf) goto L_11c944f1;
  /* 11c944e3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c944e8 mov ecx, edx */
  ECX = (EDX);
  /* 11c944ea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c944ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c944ef or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c944f1:;
  /* 11c944f1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c944f6 mov ecx, edx */
  ECX = (EDX);
  /* 11c944f8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c944fa lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11c944fe or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c94500 jmp 0x11c9452b */
  goto L_11c9452b;
L_11c94502:;
  /* 11c94502 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c94506 jne 0x11c94518 */
  if (!C.zf) goto L_11c94518;
  /* 11c94508 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c9450b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c94510 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c94512 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94515 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c94518:;
  /* 11c94518 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c9451b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c94520 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c94522 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11c94529 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c9452b:;
  /* 11c9452b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c9452e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c94530 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11c94534 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c94537 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11c94539 jne 0x11c94636 */
  if (!C.zf) goto L_11c94636;
  /* 11c9453f mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c94544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94546 je 0x11c94628 */
  if (C.zf) goto L_11c94628;
  /* 11c9454c mov ecx, dword ptr [0x11c9b58c] */
  ECX = (r32((uint32_t)(0x11c9b58c)));
  /* 11c94552 mov esi, dword ptr [0x11c9705c] */
  ESI = (r32((uint32_t)(0x11c9705c)));
  /* 11c94558 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11c9455b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9455e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11c94563 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c94568 push ebx */
  push32((uint32_t)(EBX));
  /* 11c94569 push ecx */
  push32((uint32_t)(ECX));
  /* 11c9456a call esi */
  call_ind((uint32_t)(ESI), 0x11c9456cu);
  /* 11c9456c mov ecx, dword ptr [0x11c9b58c] */
  ECX = (r32((uint32_t)(0x11c9b58c)));
  /* 11c94572 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c94577 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c9457c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c9457e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c94581 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c94586 mov ecx, dword ptr [0x11c9b58c] */
  ECX = (r32((uint32_t)(0x11c9b58c)));
  /* 11c9458c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c9458f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c94597 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c9459c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c9459f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11c945a2 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c945a7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c945aa cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c945ae jne 0x11c945b9 */
  if (!C.zf) goto L_11c945b9;
  /* 11c945b0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c945b4 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
L_11c945b9:;
  /* 11c945b9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c945bd jne 0x11c94628 */
  if (!C.zf) goto L_11c94628;
  /* 11c945bf push ebx */
  push32((uint32_t)(EBX));
  /* 11c945c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c945c2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c945c5 call esi */
  call_ind((uint32_t)(ESI), 0x11c945c7u);
  /* 11c945c7 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c945cc push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c945cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c945d1 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c945d7 call dword ptr [0x11c97058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97058))), 0x11c945ddu);
  /* 11c945dd mov eax, dword ptr [0x11c9b598] */
  EAX = (r32((uint32_t)(0x11c9b598)));
  /* 11c945e2 mov edx, dword ptr [0x11c9b59c] */
  EDX = (r32((uint32_t)(0x11c9b59c)));
  /* 11c945e8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c945eb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c945ee mov ecx, eax */
  ECX = (EAX);
  /* 11c945f0 mov eax, dword ptr [0x11c9b594] */
  EAX = (r32((uint32_t)(0x11c9b594)));
  /* 11c945f5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c945f7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11c945fb push ecx */
  push32((uint32_t)(ECX));
  /* 11c945fc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11c945ff push ecx */
  push32((uint32_t)(ECX));
  /* 11c94600 push eax */
  push32((uint32_t)(EAX));
  /* 11c94601 call 0x11c95a40 */
  push32(0x11c94606u); f_11c95a40();
  /* 11c94606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94609 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9460c dec dword ptr [0x11c9b598] */
  { uint32_t _r=(r32((uint32_t)(0x11c9b598)))-1; w32((uint32_t)(0x11c9b598), (_r)); fl_dec(_r,32); }
  /* 11c94612 cmp eax, dword ptr [0x11c9b594] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c9b594))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94618 jbe 0x11c9461e */
  if ((C.cf||C.zf)) goto L_11c9461e;
  /* 11c9461a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11c9461e:;
  /* 11c9461e mov eax, dword ptr [0x11c9b59c] */
  EAX = (r32((uint32_t)(0x11c9b59c)));
  /* 11c94623 mov dword ptr [0x11c9b590], eax */
  w32((uint32_t)(0x11c9b590), (EAX));
L_11c94628:;
  /* 11c94628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c9462b mov dword ptr [0x11c9b58c], edi */
  w32((uint32_t)(0x11c9b58c), (EDI));
  /* 11c94631 mov dword ptr [0x11c9b594], eax */
  w32((uint32_t)(0x11c9b594), (EAX));
L_11c94636:;
  /* 11c94636 pop edi */
  EDI = (pop32());
  /* 11c94637 pop esi */
  ESI = (pop32());
  /* 11c94638 pop ebx */
  EBX = (pop32());
  /* 11c94639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c9463a ret  */
  ESPCHK(0x11c94312u, _esp0);
  ESP += 4; return;
}

/* FUN_1000463b @ 0x11c9463b (777 bytes, 275 insns) */
void f_11c9463b(void) {
  FTRACE(0x11c9463bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9463b push ebp */
  push32((uint32_t)(EBP));
  /* 11c9463c mov ebp, esp */
  EBP = (ESP);
  /* 11c9463e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94641 mov eax, dword ptr [0x11c9b598] */
  EAX = (r32((uint32_t)(0x11c9b598)));
  /* 11c94646 mov edx, dword ptr [0x11c9b59c] */
  EDX = (r32((uint32_t)(0x11c9b59c)));
  /* 11c9464c push ebx */
  push32((uint32_t)(EBX));
  /* 11c9464d push esi */
  push32((uint32_t)(ESI));
  /* 11c9464e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c94651 push edi */
  push32((uint32_t)(EDI));
  /* 11c94652 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11c94655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94658 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c9465b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11c9465e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11c94661 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c94664 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c94667 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c94668 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9466b jge 0x11c9467b */
  if ((C.sf==C.of)) goto L_11c9467b;
  /* 11c9466d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c94670 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c94672 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c94676 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c94679 jmp 0x11c9468b */
  goto L_11c9468b;
L_11c9467b:;
  /* 11c9467b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9467e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c94681 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c94683 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c94685 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c94688 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c9468b:;
  /* 11c9468b mov eax, dword ptr [0x11c9b590] */
  EAX = (r32((uint32_t)(0x11c9b590)));
  /* 11c94690 mov ebx, eax */
  EBX = (EAX);
  /* 11c94692 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94694 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c94697 jae 0x11c946b2 */
  if (!C.cf) goto L_11c946b2;
L_11c94699:;
  /* 11c94699 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c9469c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c9469e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c946a1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c946a3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c946a5 jne 0x11c946b2 */
  if (!C.zf) goto L_11c946b2;
  /* 11c946a7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c946aa cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c946b0 jb 0x11c94699 */
  if (C.cf) goto L_11c94699;
L_11c946b2:;
  /* 11c946b2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946b5 jne 0x11c94730 */
  if (!C.zf) goto L_11c94730;
  /* 11c946b7 mov ebx, edx */
  EBX = (EDX);
L_11c946b9:;
  /* 11c946b9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946bb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c946be jae 0x11c946d5 */
  if (!C.cf) goto L_11c946d5;
  /* 11c946c0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c946c3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c946c5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c946c8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c946ca or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c946cc jne 0x11c946d3 */
  if (!C.zf) goto L_11c946d3;
  /* 11c946ce add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c946d1 jmp 0x11c946b9 */
  goto L_11c946b9;
L_11c946d3:;
  /* 11c946d3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c946d5:;
  /* 11c946d5 jne 0x11c94730 */
  if (!C.zf) goto L_11c94730;
L_11c946d7:;
  /* 11c946d7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946da jae 0x11c946ed */
  if (!C.cf) goto L_11c946ed;
  /* 11c946dc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946e0 jne 0x11c946ea */
  if (!C.zf) goto L_11c946ea;
  /* 11c946e2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c946e5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c946e8 jmp 0x11c946d7 */
  goto L_11c946d7;
L_11c946ea:;
  /* 11c946ea cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c946ed:;
  /* 11c946ed jne 0x11c94715 */
  if (!C.zf) goto L_11c94715;
  /* 11c946ef mov ebx, edx */
  EBX = (EDX);
L_11c946f1:;
  /* 11c946f1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946f3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c946f6 jae 0x11c94705 */
  if (!C.cf) goto L_11c94705;
  /* 11c946f8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c946fc jne 0x11c94703 */
  if (!C.zf) goto L_11c94703;
  /* 11c946fe add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94701 jmp 0x11c946f1 */
  goto L_11c946f1;
L_11c94703:;
  /* 11c94703 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c94705:;
  /* 11c94705 jne 0x11c94715 */
  if (!C.zf) goto L_11c94715;
  /* 11c94707 call 0x11c94944 */
  push32(0x11c9470cu); f_11c94944();
  /* 11c9470c mov ebx, eax */
  EBX = (EAX);
  /* 11c9470e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c94710 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c94713 je 0x11c94729 */
  if (C.zf) goto L_11c94729;
L_11c94715:;
  /* 11c94715 push ebx */
  push32((uint32_t)(EBX));
  /* 11c94716 call 0x11c949f5 */
  push32(0x11c9471bu); f_11c949f5();
  /* 11c9471b pop ecx */
  ECX = (pop32());
  /* 11c9471c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c9471f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c94721 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c94724 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94727 jne 0x11c94730 */
  if (!C.zf) goto L_11c94730;
L_11c94729:;
  /* 11c94729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9472b jmp 0x11c9493f */
  goto L_11c9493f;
L_11c94730:;
  /* 11c94730 mov dword ptr [0x11c9b590], ebx */
  w32((uint32_t)(0x11c9b590), (EBX));
  /* 11c94736 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c94739 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c9473b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9473e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11c94741 je 0x11c94757 */
  if (C.zf) goto L_11c94757;
  /* 11c94743 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c9474a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c9474e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c94751 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c94753 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c94755 jne 0x11c9478e */
  if (!C.zf) goto L_11c9478e;
L_11c94757:;
  /* 11c94757 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11c9475d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11c94760 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c94763 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11c94766 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c9476a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11c9476d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11c9476f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c94772 jne 0x11c9478b */
  if (!C.zf) goto L_11c9478b;
L_11c94774:;
  /* 11c94774 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11c9477a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c9477d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c94780 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94783 mov edi, esi */
  EDI = (ESI);
  /* 11c94785 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11c94787 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11c94789 je 0x11c94774 */
  if (C.zf) goto L_11c94774;
L_11c9478b:;
  /* 11c9478b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11c9478e:;
  /* 11c9478e mov ecx, edx */
  ECX = (EDX);
  /* 11c94790 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c94792 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c94798 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c9479f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c947a2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c947a6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c947a8 jne 0x11c947b7 */
  if (!C.zf) goto L_11c947b7;
  /* 11c947aa mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c947b1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c947b3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c947b6 pop edi */
  EDI = (pop32());
L_11c947b7:;
  /* 11c947b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c947b9 jl 0x11c947c0 */
  if ((C.sf!=C.of)) goto L_11c947c0;
  /* 11c947bb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c947bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c947be jmp 0x11c947b7 */
  goto L_11c947b7;
L_11c947c0:;
  /* 11c947c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c947c3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11c947c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c947c9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c947cc mov esi, ecx */
  ESI = (ECX);
  /* 11c947ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c947d1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c947d4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c947d5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c947d8 jle 0x11c947dd */
  if ((C.zf||C.sf!=C.of)) goto L_11c947dd;
  /* 11c947da push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c947dc pop esi */
  ESI = (pop32());
L_11c947dd:;
  /* 11c947dd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c947df je 0x11c948f2 */
  if (C.zf) goto L_11c948f2;
  /* 11c947e5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c947e8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c947eb jne 0x11c9484e */
  if (!C.zf) goto L_11c9484e;
  /* 11c947ed cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c947f0 jge 0x11c9481d */
  if ((C.sf==C.of)) goto L_11c9481d;
  /* 11c947f2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c947f7 mov ecx, edi */
  ECX = (EDI);
  /* 11c947f9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c947fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c947fe lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c94802 not ebx */
  EBX = (~(EBX));
  /* 11c94804 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c94807 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11c9480b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11c9480f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c94811 jne 0x11c9484b */
  if (!C.zf) goto L_11c9484b;
  /* 11c94813 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94816 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c94819 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11c9481b jmp 0x11c9484e */
  goto L_11c9484e;
L_11c9481d:;
  /* 11c9481d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c94820 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c94825 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c94827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c9482a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c9482e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c94835 not ebx */
  EBX = (~(EBX));
  /* 11c94837 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c94839 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c9483b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c9483e jne 0x11c9484b */
  if (!C.zf) goto L_11c9484b;
  /* 11c94840 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94843 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c94846 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c94849 jmp 0x11c9484e */
  goto L_11c9484e;
L_11c9484b:;
  /* 11c9484b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c9484e:;
  /* 11c9484e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c94851 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11c94854 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94858 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11c9485b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c9485e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11c94861 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c94864 je 0x11c948fe */
  if (C.zf) goto L_11c948fe;
  /* 11c9486a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c9486d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11c94871 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11c94874 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11c94877 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11c9487a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c9487d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c94880 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11c94883 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c94886 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94889 jne 0x11c948ef */
  if (!C.zf) goto L_11c948ef;
  /* 11c9488b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11c9488f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94892 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11c94895 jge 0x11c948c0 */
  if ((C.sf==C.of)) goto L_11c948c0;
  /* 11c94897 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c94899 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9489d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c948a1 jne 0x11c948ae */
  if (!C.zf) goto L_11c948ae;
  /* 11c948a3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c948a8 mov ecx, esi */
  ECX = (ESI);
  /* 11c948aa shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c948ac or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11c948ae:;
  /* 11c948ae mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c948b3 mov ecx, esi */
  ECX = (ESI);
  /* 11c948b5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c948b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c948ba or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c948be jmp 0x11c948ef */
  goto L_11c948ef;
L_11c948c0:;
  /* 11c948c0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c948c2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c948c6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c948ca jne 0x11c948d9 */
  if (!C.zf) goto L_11c948d9;
  /* 11c948cc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c948cf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c948d4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c948d6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11c948d9:;
  /* 11c948d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c948dc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c948e3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c948e6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c948eb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c948ed or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c948ef:;
  /* 11c948ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c948f2:;
  /* 11c948f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c948f4 je 0x11c94901 */
  if (C.zf) goto L_11c94901;
  /* 11c948f6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c948f8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11c948fc jmp 0x11c94901 */
  goto L_11c94901;
L_11c948fe:;
  /* 11c948fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c94901:;
  /* 11c94901 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11c94904 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94906 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11c94909 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c9490b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11c9490f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c94912 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c94914 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c94916 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11c94919 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c9491b jne 0x11c94937 */
  if (!C.zf) goto L_11c94937;
  /* 11c9491d cmp ebx, dword ptr [0x11c9b594] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c9b594))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94923 jne 0x11c94937 */
  if (!C.zf) goto L_11c94937;
  /* 11c94925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c94928 cmp ecx, dword ptr [0x11c9b58c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c9b58c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9492e jne 0x11c94937 */
  if (!C.zf) goto L_11c94937;
  /* 11c94930 and dword ptr [0x11c9b594], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c9b594)))&(0x0u); w32((uint32_t)(0x11c9b594), (_r)); fl_logic(_r,32); }
L_11c94937:;
  /* 11c94937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c9493a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c9493c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11c9493f:;
  /* 11c9493f pop edi */
  EDI = (pop32());
  /* 11c94940 pop esi */
  ESI = (pop32());
  /* 11c94941 pop ebx */
  EBX = (pop32());
  /* 11c94942 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c94943 ret  */
  ESPCHK(0x11c9463bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004944 @ 0x11c94944 (177 bytes, 53 insns) */
void f_11c94944(void) {
  FTRACE(0x11c94944u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94944 mov eax, dword ptr [0x11c9b598] */
  EAX = (r32((uint32_t)(0x11c9b598)));
  /* 11c94949 mov ecx, dword ptr [0x11c9b588] */
  ECX = (r32((uint32_t)(0x11c9b588)));
  /* 11c9494f push esi */
  push32((uint32_t)(ESI));
  /* 11c94950 push edi */
  push32((uint32_t)(EDI));
  /* 11c94951 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c94953 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94955 jne 0x11c94987 */
  if (!C.zf) goto L_11c94987;
  /* 11c94957 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11c9495b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c9495e push eax */
  push32((uint32_t)(EAX));
  /* 11c9495f push dword ptr [0x11c9b59c] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b59c))));
  /* 11c94965 push edi */
  push32((uint32_t)(EDI));
  /* 11c94966 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c9496c call dword ptr [0x11c97030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97030))), 0x11c94972u);
  /* 11c94972 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94974 je 0x11c949d7 */
  if (C.zf) goto L_11c949d7;
  /* 11c94976 add dword ptr [0x11c9b588], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b588))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11c9b588), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c9497d mov dword ptr [0x11c9b59c], eax */
  w32((uint32_t)(0x11c9b59c), (EAX));
  /* 11c94982 mov eax, dword ptr [0x11c9b598] */
  EAX = (r32((uint32_t)(0x11c9b598)));
L_11c94987:;
  /* 11c94987 mov ecx, dword ptr [0x11c9b59c] */
  ECX = (r32((uint32_t)(0x11c9b59c)));
  /* 11c9498d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11c94992 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c94994 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c94997 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c9499d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c949a0 call dword ptr [0x11c97044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97044))), 0x11c949a6u);
  /* 11c949a6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c949a8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c949ab je 0x11c949d7 */
  if (C.zf) goto L_11c949d7;
  /* 11c949ad push 4 */
  push32((uint32_t)(0x4u));
  /* 11c949af push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c949b4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c949b9 push edi */
  push32((uint32_t)(EDI));
  /* 11c949ba call dword ptr [0x11c97034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97034))), 0x11c949c0u);
  /* 11c949c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c949c2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c949c5 jne 0x11c949db */
  if (!C.zf) goto L_11c949db;
  /* 11c949c7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c949ca push edi */
  push32((uint32_t)(EDI));
  /* 11c949cb push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c949d1 call dword ptr [0x11c97058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97058))), 0x11c949d7u);
L_11c949d7:;
  /* 11c949d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c949d9 jmp 0x11c949f2 */
  goto L_11c949f2;
L_11c949db:;
  /* 11c949db or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c949df mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c949e1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11c949e4 inc dword ptr [0x11c9b598] */
  { uint32_t _r=(r32((uint32_t)(0x11c9b598)))+1; w32((uint32_t)(0x11c9b598), (_r)); fl_inc(_r,32); }
  /* 11c949ea mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c949ed or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c949f0 mov eax, esi */
  EAX = (ESI);
L_11c949f2:;
  /* 11c949f2 pop edi */
  EDI = (pop32());
  /* 11c949f3 pop esi */
  ESI = (pop32());
  /* 11c949f4 ret  */
  ESPCHK(0x11c94944u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f5 @ 0x11c949f5 (251 bytes, 85 insns) */
void f_11c949f5(void) {
  FTRACE(0x11c949f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c949f5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c949f6 mov ebp, esp */
  EBP = (ESP);
  /* 11c949f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c949f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c949fc push ebx */
  push32((uint32_t)(EBX));
  /* 11c949fd push esi */
  push32((uint32_t)(ESI));
  /* 11c949fe push edi */
  push32((uint32_t)(EDI));
  /* 11c949ff mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11c94a02 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c94a05 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c94a07:;
  /* 11c94a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94a09 jl 0x11c94a10 */
  if ((C.sf!=C.of)) goto L_11c94a10;
  /* 11c94a0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c94a0d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c94a0e jmp 0x11c94a07 */
  goto L_11c94a07;
L_11c94a10:;
  /* 11c94a10 mov eax, ebx */
  EAX = (EBX);
  /* 11c94a12 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c94a14 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c94a1a pop edx */
  EDX = (pop32());
  /* 11c94a1b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11c94a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c94a25:;
  /* 11c94a25 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11c94a28 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11c94a2b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94a2e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c94a2f jne 0x11c94a25 */
  if (!C.zf) goto L_11c94a25;
  /* 11c94a31 mov edi, ebx */
  EDI = (EBX);
  /* 11c94a33 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c94a35 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c94a38 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94a3b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c94a40 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c94a45 push edi */
  push32((uint32_t)(EDI));
  /* 11c94a46 call dword ptr [0x11c97034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97034))), 0x11c94a4cu);
  /* 11c94a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94a4e jne 0x11c94a58 */
  if (!C.zf) goto L_11c94a58;
  /* 11c94a50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c94a53 jmp 0x11c94aeb */
  goto L_11c94aeb;
L_11c94a58:;
  /* 11c94a58 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11c94a5e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94a60 ja 0x11c94a9e */
  if ((!C.cf&&!C.zf)) goto L_11c94a9e;
  /* 11c94a62 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11c94a65:;
  /* 11c94a65 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c94a69 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11c94a70 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11c94a76 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11c94a7d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c94a7f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11c94a85 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c94a88 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11c94a92 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94a97 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11c94a9a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94a9c jbe 0x11c94a65 */
  if ((C.cf||C.zf)) goto L_11c94a65;
L_11c94a9e:;
  /* 11c94a9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c94aa1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11c94aa4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94aa9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c94aab pop edi */
  EDI = (pop32());
  /* 11c94aac mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c94aaf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11c94ab2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11c94ab5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11c94ab8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c94abb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c94ac0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11c94ac7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11c94aca mov cl, al */
  CL = (AL);
  /* 11c94acc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c94ace test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c94ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94ad3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11c94ad6 jne 0x11c94adb */
  if (!C.zf) goto L_11c94adb;
  /* 11c94ad8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11c94adb:;
  /* 11c94adb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c94ae0 mov ecx, ebx */
  ECX = (EBX);
  /* 11c94ae2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c94ae4 not edx */
  EDX = (~(EDX));
  /* 11c94ae6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c94ae9 mov eax, ebx */
  EAX = (EBX);
L_11c94aeb:;
  /* 11c94aeb pop edi */
  EDI = (pop32());
  /* 11c94aec pop esi */
  ESI = (pop32());
  /* 11c94aed pop ebx */
  EBX = (pop32());
  /* 11c94aee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c94aef ret  */
  ESPCHK(0x11c949f5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x11c94af0 (324 bytes, 102 insns) */
void f_11c94af0(void) {
  FTRACE(0x11c94af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94af0 cmp dword ptr [0x11c987a0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11c987a0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94af7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c94af8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c94af9 push esi */
  push32((uint32_t)(ESI));
  /* 11c94afa push edi */
  push32((uint32_t)(EDI));
  /* 11c94afb jne 0x11c94b04 */
  if (!C.zf) goto L_11c94b04;
  /* 11c94afd mov esi, 0x11c98790 */
  ESI = (0x11c98790u);
  /* 11c94b02 jmp 0x11c94b21 */
  goto L_11c94b21;
L_11c94b04:;
  /* 11c94b04 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11c94b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94b0b push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c94b11 call dword ptr [0x11c97044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97044))), 0x11c94b17u);
  /* 11c94b17 mov esi, eax */
  ESI = (EAX);
  /* 11c94b19 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c94b1b je 0x11c94c2d */
  if (C.zf) goto L_11c94c2d;
L_11c94b21:;
  /* 11c94b21 mov ebp, dword ptr [0x11c97034] */
  EBP = (r32((uint32_t)(0x11c97034)));
  /* 11c94b27 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c94b29 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c94b2e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11c94b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94b35 call ebp */
  call_ind((uint32_t)(EBP), 0x11c94b37u);
  /* 11c94b37 mov edi, eax */
  EDI = (EAX);
  /* 11c94b39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c94b3b je 0x11c94c16 */
  if (C.zf) goto L_11c94c16;
  /* 11c94b41 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c94b43 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11c94b48 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c94b4d push ebx */
  push32((uint32_t)(EBX));
  /* 11c94b4e push edi */
  push32((uint32_t)(EDI));
  /* 11c94b4f call ebp */
  call_ind((uint32_t)(EBP), 0x11c94b51u);
  /* 11c94b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94b53 je 0x11c94c08 */
  if (C.zf) goto L_11c94c08;
  /* 11c94b59 mov eax, 0x11c98790 */
  EAX = (0x11c98790u);
  /* 11c94b5e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94b60 jne 0x11c94b80 */
  if (!C.zf) goto L_11c94b80;
  /* 11c94b62 cmp dword ptr [0x11c98790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c98790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94b69 jne 0x11c94b70 */
  if (!C.zf) goto L_11c94b70;
  /* 11c94b6b mov dword ptr [0x11c98790], eax */
  w32((uint32_t)(0x11c98790), (EAX));
L_11c94b70:;
  /* 11c94b70 cmp dword ptr [0x11c98794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c98794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94b77 jne 0x11c94b95 */
  if (!C.zf) goto L_11c94b95;
  /* 11c94b79 mov dword ptr [0x11c98794], eax */
  w32((uint32_t)(0x11c98794), (EAX));
  /* 11c94b7e jmp 0x11c94b95 */
  goto L_11c94b95;
L_11c94b80:;
  /* 11c94b80 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c94b82 mov eax, dword ptr [0x11c98794] */
  EAX = (r32((uint32_t)(0x11c98794)));
  /* 11c94b87 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c94b8a mov dword ptr [0x11c98794], esi */
  w32((uint32_t)(0x11c98794), (ESI));
  /* 11c94b90 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c94b93 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11c94b95:;
  /* 11c94b95 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11c94b9b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11c94ba1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c94ba4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11c94ba7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11c94baa mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11c94bad mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c94bb0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11c94bb2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11c94bb7:;
  /* 11c94bb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c94bb9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94bbc setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11c94bbf dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c94bc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c94bc2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c94bc3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c94bc4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11c94bc6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c94bc9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94bcc cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94bd2 jl 0x11c94bb7 */
  if ((C.sf!=C.of)) goto L_11c94bb7;
  /* 11c94bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c94bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94bd7 push edi */
  push32((uint32_t)(EDI));
  /* 11c94bd8 call 0x11c952c0 */
  push32(0x11c94bddu); f_11c952c0();
  /* 11c94bdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c94be0:;
  /* 11c94be0 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c94be3 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94be5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94be7 jae 0x11c94c04 */
  if (!C.cf) goto L_11c94c04;
  /* 11c94be9 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11c94bf0 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11c94bf3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c94bf5 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11c94bfc add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94c02 jmp 0x11c94be0 */
  goto L_11c94be0;
L_11c94c04:;
  /* 11c94c04 mov eax, esi */
  EAX = (ESI);
  /* 11c94c06 jmp 0x11c94c2f */
  goto L_11c94c2f;
L_11c94c08:;
  /* 11c94c08 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c94c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94c0f push edi */
  push32((uint32_t)(EDI));
  /* 11c94c10 call dword ptr [0x11c9705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9705c))), 0x11c94c16u);
L_11c94c16:;
  /* 11c94c16 cmp esi, 0x11c98790 */
  { uint32_t _a=(ESI),_b=(0x11c98790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94c1c je 0x11c94c2d */
  if (C.zf) goto L_11c94c2d;
  /* 11c94c1e push esi */
  push32((uint32_t)(ESI));
  /* 11c94c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94c21 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c94c27 call dword ptr [0x11c97058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97058))), 0x11c94c2du);
L_11c94c2d:;
  /* 11c94c2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c94c2f:;
  /* 11c94c2f pop edi */
  EDI = (pop32());
  /* 11c94c30 pop esi */
  ESI = (pop32());
  /* 11c94c31 pop ebp */
  EBP = (pop32());
  /* 11c94c32 pop ebx */
  EBX = (pop32());
  /* 11c94c33 ret  */
  ESPCHK(0x11c94af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c34 @ 0x11c94c34 (86 bytes, 27 insns) */
void f_11c94c34(void) {
  FTRACE(0x11c94c34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94c34 push esi */
  push32((uint32_t)(ESI));
  /* 11c94c35 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c94c39 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c94c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94c40 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c94c43 call dword ptr [0x11c9705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9705c))), 0x11c94c49u);
  /* 11c94c49 cmp dword ptr [0x11c9a7b0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c9a7b0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94c4f jne 0x11c94c59 */
  if (!C.zf) goto L_11c94c59;
  /* 11c94c51 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c94c54 mov dword ptr [0x11c9a7b0], eax */
  w32((uint32_t)(0x11c9a7b0), (EAX));
L_11c94c59:;
  /* 11c94c59 cmp esi, 0x11c98790 */
  { uint32_t _a=(ESI),_b=(0x11c98790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94c5f je 0x11c94c81 */
  if (C.zf) goto L_11c94c81;
  /* 11c94c61 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c94c64 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c94c66 push esi */
  push32((uint32_t)(ESI));
  /* 11c94c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94c69 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c94c6b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c94c6d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c94c70 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c94c73 push dword ptr [0x11c9b7c8] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b7c8))));
  /* 11c94c79 call dword ptr [0x11c97058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97058))), 0x11c94c7fu);
  /* 11c94c7f pop esi */
  ESI = (pop32());
  /* 11c94c80 ret  */
  ESPCHK(0x11c94c34u, _esp0);
  ESP += 4; return;
L_11c94c81:;
  /* 11c94c81 or dword ptr [0x11c987a0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c987a0)))|(0xffffffffu); w32((uint32_t)(0x11c987a0), (_r)); fl_logic(_r,32); }
  /* 11c94c88 pop esi */
  ESI = (pop32());
  /* 11c94c89 ret  */
  ESPCHK(0x11c94c34u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c8a @ 0x11c94c8a (194 bytes, 66 insns) */
void f_11c94c8a(void) {
  FTRACE(0x11c94c8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94c8a push ebp */
  push32((uint32_t)(EBP));
  /* 11c94c8b mov ebp, esp */
  EBP = (ESP);
  /* 11c94c8d push ecx */
  push32((uint32_t)(ECX));
  /* 11c94c8e push ebx */
  push32((uint32_t)(EBX));
  /* 11c94c8f push esi */
  push32((uint32_t)(ESI));
  /* 11c94c90 mov esi, dword ptr [0x11c98794] */
  ESI = (r32((uint32_t)(0x11c98794)));
  /* 11c94c96 push edi */
  push32((uint32_t)(EDI));
L_11c94c97:;
  /* 11c94c97 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94c9b je 0x11c94d35 */
  if (C.zf) goto L_11c94d35;
  /* 11c94ca1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c94ca5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11c94cab mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11c94cb0:;
  /* 11c94cb0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94cb6 jne 0x11c94cf1 */
  if (!C.zf) goto L_11c94cf1;
  /* 11c94cb8 mov eax, ebx */
  EAX = (EBX);
  /* 11c94cba push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c94cbf add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94cc2 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c94cc7 push eax */
  push32((uint32_t)(EAX));
  /* 11c94cc8 call dword ptr [0x11c9705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9705c))), 0x11c94cceu);
  /* 11c94cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94cd0 je 0x11c94cf1 */
  if (C.zf) goto L_11c94cf1;
  /* 11c94cd2 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11c94cd5 dec dword ptr [0x11c9b3f4] */
  { uint32_t _r=(r32((uint32_t)(0x11c9b3f4)))-1; w32((uint32_t)(0x11c9b3f4), (_r)); fl_dec(_r,32); }
  /* 11c94cdb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c94cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94ce0 je 0x11c94ce6 */
  if (C.zf) goto L_11c94ce6;
  /* 11c94ce2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94ce4 jbe 0x11c94ce9 */
  if ((C.cf||C.zf)) goto L_11c94ce9;
L_11c94ce6:;
  /* 11c94ce6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11c94ce9:;
  /* 11c94ce9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c94cec dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11c94cef je 0x11c94cfe */
  if (C.zf) goto L_11c94cfe;
L_11c94cf1:;
  /* 11c94cf1 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94cf7 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94cfa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c94cfc jge 0x11c94cb0 */
  if ((C.sf==C.of)) goto L_11c94cb0;
L_11c94cfe:;
  /* 11c94cfe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d02 mov ecx, esi */
  ECX = (ESI);
  /* 11c94d04 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c94d07 je 0x11c94d35 */
  if (C.zf) goto L_11c94d35;
  /* 11c94d09 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d0d jne 0x11c94d35 */
  if (!C.zf) goto L_11c94d35;
  /* 11c94d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c94d11 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11c94d14 pop edx */
  EDX = (pop32());
L_11c94d15:;
  /* 11c94d15 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d18 jne 0x11c94d26 */
  if (!C.zf) goto L_11c94d26;
  /* 11c94d1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c94d1b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94d1e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d24 jl 0x11c94d15 */
  if ((C.sf!=C.of)) goto L_11c94d15;
L_11c94d26:;
  /* 11c94d26 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d2c jne 0x11c94d35 */
  if (!C.zf) goto L_11c94d35;
  /* 11c94d2e push ecx */
  push32((uint32_t)(ECX));
  /* 11c94d2f call 0x11c94c34 */
  push32(0x11c94d34u); f_11c94c34();
  /* 11c94d34 pop ecx */
  ECX = (pop32());
L_11c94d35:;
  /* 11c94d35 cmp esi, dword ptr [0x11c98794] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c98794))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d3b je 0x11c94d47 */
  if (C.zf) goto L_11c94d47;
  /* 11c94d3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d41 jg 0x11c94c97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c94c97;
L_11c94d47:;
  /* 11c94d47 pop edi */
  EDI = (pop32());
  /* 11c94d48 pop esi */
  ESI = (pop32());
  /* 11c94d49 pop ebx */
  EBX = (pop32());
  /* 11c94d4a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c94d4b ret  */
  ESPCHK(0x11c94c8au, _esp0);
  ESP += 4; return;
}

/* FUN_10004d4c @ 0x11c94d4c (87 bytes, 34 insns) */
void f_11c94d4c(void) {
  FTRACE(0x11c94d4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94d4c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c94d50 mov edx, 0x11c98790 */
  EDX = (0x11c98790u);
  /* 11c94d55 push esi */
  push32((uint32_t)(ESI));
  /* 11c94d56 mov ecx, edx */
  ECX = (EDX);
L_11c94d58:;
  /* 11c94d58 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d5b jbe 0x11c94d62 */
  if ((C.cf||C.zf)) goto L_11c94d62;
  /* 11c94d5d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d60 jb 0x11c94d6a */
  if (C.cf) goto L_11c94d6a;
L_11c94d62:;
  /* 11c94d62 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c94d64 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d66 je 0x11c94d9f */
  if (C.zf) goto L_11c94d9f;
  /* 11c94d68 jmp 0x11c94d58 */
  goto L_11c94d58;
L_11c94d6a:;
  /* 11c94d6a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11c94d6c jne 0x11c94d9f */
  if (!C.zf) goto L_11c94d9f;
  /* 11c94d6e mov esi, eax */
  ESI = (EAX);
  /* 11c94d70 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11c94d75 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c94d7b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94d7d jb 0x11c94d9f */
  if (C.cf) goto L_11c94d9f;
  /* 11c94d7f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c94d83 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c94d85 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c94d89 mov ecx, eax */
  ECX = (EAX);
  /* 11c94d8b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11c94d90 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94d92 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c94d94 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94d96 pop esi */
  ESI = (pop32());
  /* 11c94d97 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c94d9a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11c94d9e ret  */
  ESPCHK(0x11c94d4cu, _esp0);
  ESP += 4; return;
L_11c94d9f:;
  /* 11c94d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c94da1 pop esi */
  ESI = (pop32());
  /* 11c94da2 ret  */
  ESPCHK(0x11c94d4cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004da3 @ 0x11c94da3 (69 bytes, 19 insns) */
void f_11c94da3(void) {
  FTRACE(0x11c94da3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94da3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c94da7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c94dab sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94dae sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11c94db1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11c94db5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c94db9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c94dbc add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c94dbe and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11c94dc1 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94dc7 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11c94dce jne 0x11c94de7 */
  if (!C.zf) goto L_11c94de7;
  /* 11c94dd0 inc dword ptr [0x11c9b3f4] */
  { uint32_t _r=(r32((uint32_t)(0x11c9b3f4)))+1; w32((uint32_t)(0x11c9b3f4), (_r)); fl_inc(_r,32); }
  /* 11c94dd6 cmp dword ptr [0x11c9b3f4], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b3f4))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94ddd jne 0x11c94de7 */
  if (!C.zf) goto L_11c94de7;
  /* 11c94ddf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c94de1 call 0x11c94c8a */
  push32(0x11c94de6u); f_11c94c8a();
  /* 11c94de6 pop ecx */
  ECX = (pop32());
L_11c94de7:;
  /* 11c94de7 ret  */
  ESPCHK(0x11c94da3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de8 @ 0x11c94de8 (520 bytes, 180 insns) */
void f_11c94de8(void) {
  FTRACE(0x11c94de8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94de8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c94de9 mov ebp, esp */
  EBP = (ESP);
  /* 11c94deb push ecx */
  push32((uint32_t)(ECX));
  /* 11c94dec push ecx */
  push32((uint32_t)(ECX));
  /* 11c94ded push ebx */
  push32((uint32_t)(EBX));
  /* 11c94dee push esi */
  push32((uint32_t)(ESI));
  /* 11c94def mov esi, dword ptr [0x11c9a7b0] */
  ESI = (r32((uint32_t)(0x11c9a7b0)));
  /* 11c94df5 push edi */
  push32((uint32_t)(EDI));
L_11c94df6:;
  /* 11c94df6 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c94df9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94dfc je 0x11c94ea1 */
  if (C.zf) goto L_11c94ea1;
  /* 11c94e02 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11c94e05 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11c94e0b mov eax, edi */
  EAX = (EDI);
  /* 11c94e0d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94e0f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94e12 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11c94e15 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c94e18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94e1a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c94e1f jae 0x11c94e5b */
  if (!C.cf) goto L_11c94e5b;
L_11c94e21:;
  /* 11c94e21 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11c94e23 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94e26 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e28 jl 0x11c94e44 */
  if ((C.sf!=C.of)) goto L_11c94e44;
  /* 11c94e2a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e2d jbe 0x11c94e44 */
  if ((C.cf||C.zf)) goto L_11c94e44;
  /* 11c94e2f push ebx */
  push32((uint32_t)(EBX));
  /* 11c94e30 push ecx */
  push32((uint32_t)(ECX));
  /* 11c94e31 push eax */
  push32((uint32_t)(EAX));
  /* 11c94e32 call 0x11c94ff0 */
  push32(0x11c94e37u); f_11c94ff0();
  /* 11c94e37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94e3c jne 0x11c94eb3 */
  if (!C.zf) goto L_11c94eb3;
  /* 11c94e3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c94e41 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11c94e44:;
  /* 11c94e44 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94e47 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11c94e4d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94e52 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c94e57 jb 0x11c94e21 */
  if (C.cf) goto L_11c94e21;
  /* 11c94e59 jmp 0x11c94e5e */
  goto L_11c94e5e;
L_11c94e5b:;
  /* 11c94e5b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c94e5e:;
  /* 11c94e5e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c94e61 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c94e64 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11c94e67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c94e6a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c94e6f jae 0x11c94ea4 */
  if (!C.cf) goto L_11c94ea4;
L_11c94e71:;
  /* 11c94e71 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c94e73 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e75 jl 0x11c94e90 */
  if ((C.sf!=C.of)) goto L_11c94e90;
  /* 11c94e77 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e7a jbe 0x11c94e90 */
  if ((C.cf||C.zf)) goto L_11c94e90;
  /* 11c94e7c push ebx */
  push32((uint32_t)(EBX));
  /* 11c94e7d push eax */
  push32((uint32_t)(EAX));
  /* 11c94e7e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c94e81 call 0x11c94ff0 */
  push32(0x11c94e86u); f_11c94ff0();
  /* 11c94e86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94e8b jne 0x11c94eb3 */
  if (!C.zf) goto L_11c94eb3;
  /* 11c94e8d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11c94e90:;
  /* 11c94e90 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c94e97 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94e9a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94e9d jb 0x11c94e71 */
  if (C.cf) goto L_11c94e71;
  /* 11c94e9f jmp 0x11c94ea4 */
  goto L_11c94ea4;
L_11c94ea1:;
  /* 11c94ea1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c94ea4:;
  /* 11c94ea4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11c94ea6 cmp esi, dword ptr [0x11c9a7b0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c9a7b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94eac je 0x11c94ec3 */
  if (C.zf) goto L_11c94ec3;
  /* 11c94eae jmp 0x11c94df6 */
  goto L_11c94df6;
L_11c94eb3:;
  /* 11c94eb3 mov dword ptr [0x11c9a7b0], esi */
  w32((uint32_t)(0x11c9a7b0), (ESI));
  /* 11c94eb9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c94ebb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11c94ebe jmp 0x11c94feb */
  goto L_11c94feb;
L_11c94ec3:;
  /* 11c94ec3 mov eax, 0x11c98790 */
  EAX = (0x11c98790u);
  /* 11c94ec8 mov edi, eax */
  EDI = (EAX);
L_11c94eca:;
  /* 11c94eca cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94ece je 0x11c94ed6 */
  if (C.zf) goto L_11c94ed6;
  /* 11c94ed0 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94ed4 jne 0x11c94ee2 */
  if (!C.zf) goto L_11c94ee2;
L_11c94ed6:;
  /* 11c94ed6 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11c94ed8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94eda je 0x11c94fb7 */
  if (C.zf) goto L_11c94fb7;
  /* 11c94ee0 jmp 0x11c94eca */
  goto L_11c94eca;
L_11c94ee2:;
  /* 11c94ee2 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11c94ee5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c94ee9 mov esi, ebx */
  ESI = (EBX);
  /* 11c94eeb mov eax, ebx */
  EAX = (EBX);
  /* 11c94eed sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94eef sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94ef2 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c94ef5 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11c94ef8 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94efb cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94efe jne 0x11c94f11 */
  if (!C.zf) goto L_11c94f11;
L_11c94f00:;
  /* 11c94f00 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94f04 jge 0x11c94f11 */
  if ((C.sf==C.of)) goto L_11c94f11;
  /* 11c94f06 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94f09 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c94f0c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94f0f je 0x11c94f00 */
  if (C.zf) goto L_11c94f00;
L_11c94f11:;
  /* 11c94f11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c94f14 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c94f16 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c94f19 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c94f1e push eax */
  push32((uint32_t)(EAX));
  /* 11c94f1f push esi */
  push32((uint32_t)(ESI));
  /* 11c94f20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c94f23 call dword ptr [0x11c97034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97034))), 0x11c94f29u);
  /* 11c94f29 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94f2b jne 0x11c94fe9 */
  if (!C.zf) goto L_11c94fe9;
  /* 11c94f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c94f33 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11c94f36 push esi */
  push32((uint32_t)(ESI));
  /* 11c94f37 call 0x11c952c0 */
  push32(0x11c94f3cu); f_11c952c0();
  /* 11c94f3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c94f3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94f42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c94f44 mov ecx, ebx */
  ECX = (EBX);
  /* 11c94f46 jle 0x11c94f78 */
  if ((C.zf||C.sf!=C.of)) goto L_11c94f78;
  /* 11c94f48 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c94f4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11c94f4e:;
  /* 11c94f4e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11c94f55 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11c94f58 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11c94f5b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11c94f60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11c94f62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c94f64 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11c94f6b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94f70 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94f73 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c94f76 jne 0x11c94f4e */
  if (!C.zf) goto L_11c94f4e;
L_11c94f78:;
  /* 11c94f78 mov dword ptr [0x11c9a7b0], edi */
  w32((uint32_t)(0x11c9a7b0), (EDI));
  /* 11c94f7e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11c94f84:;
  /* 11c94f84 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94f86 jae 0x11c94f94 */
  if (!C.cf) goto L_11c94f94;
  /* 11c94f88 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c94f8b je 0x11c94f92 */
  if (C.zf) goto L_11c94f92;
  /* 11c94f8d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c94f90 jmp 0x11c94f84 */
  goto L_11c94f84;
L_11c94f92:;
  /* 11c94f92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c94f94:;
  /* 11c94f94 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94f96 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11c94f98 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11c94f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94f9e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11c94fa1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11c94fa4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c94fa6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c94fa9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11c94fad lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11c94fb3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c94fb5 jmp 0x11c94feb */
  goto L_11c94feb;
L_11c94fb7:;
  /* 11c94fb7 call 0x11c94af0 */
  push32(0x11c94fbcu); f_11c94af0();
  /* 11c94fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c94fbe je 0x11c94fe9 */
  if (C.zf) goto L_11c94fe9;
  /* 11c94fc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c94fc3 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11c94fc6 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11c94fca mov dword ptr [0x11c9a7b0], eax */
  w32((uint32_t)(0x11c9a7b0), (EAX));
  /* 11c94fcf mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c94fd1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11c94fd6 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c94fd8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c94fdb movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11c94fde sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c94fe1 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11c94fe7 jmp 0x11c94feb */
  goto L_11c94feb;
L_11c94fe9:;
  /* 11c94fe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c94feb:;
  /* 11c94feb pop edi */
  EDI = (pop32());
  /* 11c94fec pop esi */
  ESI = (pop32());
  /* 11c94fed pop ebx */
  EBX = (pop32());
  /* 11c94fee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c94fef ret  */
  ESPCHK(0x11c94de8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ff0 @ 0x11c94ff0 (292 bytes, 125 insns) */
void f_11c94ff0(void) {
  FTRACE(0x11c94ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c94ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c94ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11c94ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c94ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c94ff7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c94ffa push ebx */
  push32((uint32_t)(EBX));
  /* 11c94ffb push esi */
  push32((uint32_t)(ESI));
  /* 11c94ffc mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c94fff push edi */
  push32((uint32_t)(EDI));
  /* 11c95000 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11c95002 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11c95008 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9500a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c9500d mov eax, edi */
  EAX = (EDI);
  /* 11c9500f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c95012 jb 0x11c95035 */
  if (C.cf) goto L_11c95035;
  /* 11c95014 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11c95017 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c95019 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9501b jae 0x11c95024 */
  if (!C.cf) goto L_11c95024;
  /* 11c9501d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c9501f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c95022 jmp 0x11c9502d */
  goto L_11c9502d;
L_11c95024:;
  /* 11c95024 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c95028 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11c9502b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c9502d:;
  /* 11c9502d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11c95030 jmp 0x11c95103 */
  goto L_11c95103;
L_11c95035:;
  /* 11c95035 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95037 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9503a je 0x11c9503e */
  if (C.zf) goto L_11c9503e;
  /* 11c9503c mov eax, esi */
  EAX = (ESI);
L_11c9503e:;
  /* 11c9503e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11c95041 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95043 jae 0x11c95088 */
  if (!C.cf) goto L_11c95088;
L_11c95045:;
  /* 11c95045 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c95047 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11c95049 jne 0x11c9507b */
  if (!C.zf) goto L_11c9507b;
  /* 11c9504b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9504d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11c95050 pop esi */
  ESI = (pop32());
L_11c95051:;
  /* 11c95051 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95054 jne 0x11c9505a */
  if (!C.zf) goto L_11c9505a;
  /* 11c95056 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c95057 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95058 jmp 0x11c95051 */
  goto L_11c95051;
L_11c9505a:;
  /* 11c9505a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9505c jae 0x11c950ac */
  if (!C.cf) goto L_11c950ac;
  /* 11c9505e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95061 jne 0x11c95068 */
  if (!C.zf) goto L_11c95068;
  /* 11c95063 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c95066 jmp 0x11c95074 */
  goto L_11c95074;
L_11c95068:;
  /* 11c95068 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c9506b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9506e jb 0x11c9510d */
  if (C.cf) goto L_11c9510d;
L_11c95074:;
  /* 11c95074 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c95077 mov eax, ebx */
  EAX = (EBX);
  /* 11c95079 jmp 0x11c95080 */
  goto L_11c95080;
L_11c9507b:;
  /* 11c9507b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11c9507e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c95080:;
  /* 11c95080 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11c95083 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95086 jb 0x11c95045 */
  if (C.cf) goto L_11c95045;
L_11c95088:;
  /* 11c95088 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11c9508b:;
  /* 11c9508b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9508d jae 0x11c9510d */
  if (!C.cf) goto L_11c9510d;
  /* 11c9508f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11c95092 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95095 jae 0x11c9510d */
  if (!C.cf) goto L_11c9510d;
  /* 11c95097 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95099 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c9509b jne 0x11c950dd */
  if (!C.zf) goto L_11c950dd;
  /* 11c9509d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9509f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11c950a2 pop eax */
  EAX = (pop32());
L_11c950a3:;
  /* 11c950a3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c950a6 jne 0x11c950cd */
  if (!C.zf) goto L_11c950cd;
  /* 11c950a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c950a9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c950aa jmp 0x11c950a3 */
  goto L_11c950a3;
L_11c950ac:;
  /* 11c950ac lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11c950af cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c950b2 jae 0x11c950bd */
  if (!C.cf) goto L_11c950bd;
  /* 11c950b4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c950b6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11c950b8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c950bb jmp 0x11c950c6 */
  goto L_11c950c6;
L_11c950bd:;
  /* 11c950bd and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c950c1 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11c950c4 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11c950c6:;
  /* 11c950c6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c950c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c950cb jmp 0x11c95103 */
  goto L_11c95103;
L_11c950cd:;
  /* 11c950cd cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c950cf jae 0x11c950e4 */
  if (!C.cf) goto L_11c950e4;
  /* 11c950d1 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c950d4 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c950d7 jb 0x11c9510d */
  if (C.cf) goto L_11c9510d;
  /* 11c950d9 mov esi, ebx */
  ESI = (EBX);
  /* 11c950db jmp 0x11c9508b */
  goto L_11c9508b;
L_11c950dd:;
  /* 11c950dd movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c950e0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c950e2 jmp 0x11c9508b */
  goto L_11c9508b;
L_11c950e4:;
  /* 11c950e4 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11c950e7 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c950ea jae 0x11c950f5 */
  if (!C.cf) goto L_11c950f5;
  /* 11c950ec sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c950ee mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11c950f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c950f3 jmp 0x11c950fe */
  goto L_11c950fe;
L_11c950f5:;
  /* 11c950f5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c950f9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11c950fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c950fe:;
  /* 11c950fe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c95100 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11c95103:;
  /* 11c95103 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c95106 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c95109 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9510b jmp 0x11c9510f */
  goto L_11c9510f;
L_11c9510d:;
  /* 11c9510d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c9510f:;
  /* 11c9510f pop edi */
  EDI = (pop32());
  /* 11c95110 pop esi */
  ESI = (pop32());
  /* 11c95111 pop ebx */
  EBX = (pop32());
  /* 11c95112 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95113 ret  */
  ESPCHK(0x11c94ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005114 @ 0x11c95114 (137 bytes, 50 insns) */
void f_11c95114(void) {
  FTRACE(0x11c95114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95114 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95115 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c95117 cmp dword ptr [0x11c9b3f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b3f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9511d push esi */
  push32((uint32_t)(ESI));
  /* 11c9511e push edi */
  push32((uint32_t)(EDI));
  /* 11c9511f jne 0x11c95163 */
  if (!C.zf) goto L_11c95163;
  /* 11c95121 push 0x11c97518 */
  push32((uint32_t)(0x11c97518u));
  /* 11c95126 call dword ptr [0x11c97028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97028))), 0x11c9512cu);
  /* 11c9512c mov edi, eax */
  EDI = (EAX);
  /* 11c9512e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95130 je 0x11c95199 */
  if (C.zf) goto L_11c95199;
  /* 11c95132 mov esi, dword ptr [0x11c9702c] */
  ESI = (r32((uint32_t)(0x11c9702c)));
  /* 11c95138 push 0x11c9750c */
  push32((uint32_t)(0x11c9750cu));
  /* 11c9513d push edi */
  push32((uint32_t)(EDI));
  /* 11c9513e call esi */
  call_ind((uint32_t)(ESI), 0x11c95140u);
  /* 11c95140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95142 mov dword ptr [0x11c9b3f8], eax */
  w32((uint32_t)(0x11c9b3f8), (EAX));
  /* 11c95147 je 0x11c95199 */
  if (C.zf) goto L_11c95199;
  /* 11c95149 push 0x11c974fc */
  push32((uint32_t)(0x11c974fcu));
  /* 11c9514e push edi */
  push32((uint32_t)(EDI));
  /* 11c9514f call esi */
  call_ind((uint32_t)(ESI), 0x11c95151u);
  /* 11c95151 push 0x11c974e8 */
  push32((uint32_t)(0x11c974e8u));
  /* 11c95156 push edi */
  push32((uint32_t)(EDI));
  /* 11c95157 mov dword ptr [0x11c9b3fc], eax */
  w32((uint32_t)(0x11c9b3fc), (EAX));
  /* 11c9515c call esi */
  call_ind((uint32_t)(ESI), 0x11c9515eu);
  /* 11c9515e mov dword ptr [0x11c9b400], eax */
  w32((uint32_t)(0x11c9b400), (EAX));
L_11c95163:;
  /* 11c95163 mov eax, dword ptr [0x11c9b3fc] */
  EAX = (r32((uint32_t)(0x11c9b3fc)));
  /* 11c95168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9516a je 0x11c95182 */
  if (C.zf) goto L_11c95182;
  /* 11c9516c call eax */
  call_ind((uint32_t)(EAX), 0x11c9516eu);
  /* 11c9516e mov ebx, eax */
  EBX = (EAX);
  /* 11c95170 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c95172 je 0x11c95182 */
  if (C.zf) goto L_11c95182;
  /* 11c95174 mov eax, dword ptr [0x11c9b400] */
  EAX = (r32((uint32_t)(0x11c9b400)));
  /* 11c95179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9517b je 0x11c95182 */
  if (C.zf) goto L_11c95182;
  /* 11c9517d push ebx */
  push32((uint32_t)(EBX));
  /* 11c9517e call eax */
  call_ind((uint32_t)(EAX), 0x11c95180u);
  /* 11c95180 mov ebx, eax */
  EBX = (EAX);
L_11c95182:;
  /* 11c95182 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c95186 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c9518a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c9518e push ebx */
  push32((uint32_t)(EBX));
  /* 11c9518f call dword ptr [0x11c9b3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9b3f8))), 0x11c95195u);
L_11c95195:;
  /* 11c95195 pop edi */
  EDI = (pop32());
  /* 11c95196 pop esi */
  ESI = (pop32());
  /* 11c95197 pop ebx */
  EBX = (pop32());
  /* 11c95198 ret  */
  ESPCHK(0x11c95114u, _esp0);
  ESP += 4; return;
L_11c95199:;
  /* 11c95199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9519b jmp 0x11c95195 */
  goto L_11c95195;
}

/* _strncpy @ 0x11c951a0 (254 bytes, 109 insns) */
void f_11c951a0(void) {
  FTRACE(0x11c951a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c951a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c951a4 push edi */
  push32((uint32_t)(EDI));
  /* 11c951a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c951a7 je 0x11c95223 */
  if (C.zf) goto L_11c95223;
  /* 11c951a9 push esi */
  push32((uint32_t)(ESI));
  /* 11c951aa push ebx */
  push32((uint32_t)(EBX));
  /* 11c951ab mov ebx, ecx */
  EBX = (ECX);
  /* 11c951ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11c951b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c951b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c951bb jne 0x11c951c4 */
  if (!C.zf) goto L_11c951c4;
  /* 11c951bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c951c0 jne 0x11c95231 */
  if (!C.zf) goto L_11c95231;
  /* 11c951c2 jmp 0x11c951e5 */
  goto L_11c951e5;
L_11c951c4:;
  /* 11c951c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c951c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c951c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c951c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c951ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c951cb je 0x11c951f2 */
  if (C.zf) goto L_11c951f2;
  /* 11c951cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c951cf je 0x11c951fa */
  if (C.zf) goto L_11c951fa;
  /* 11c951d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c951d7 jne 0x11c951c4 */
  if (!C.zf) goto L_11c951c4;
  /* 11c951d9 mov ebx, ecx */
  EBX = (ECX);
  /* 11c951db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c951de jne 0x11c95231 */
  if (!C.zf) goto L_11c95231;
L_11c951e0:;
  /* 11c951e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c951e3 je 0x11c951f2 */
  if (C.zf) goto L_11c951f2;
L_11c951e5:;
  /* 11c951e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c951e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c951e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c951ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c951eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c951ed je 0x11c9521e */
  if (C.zf) goto L_11c9521e;
  /* 11c951ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c951f0 jne 0x11c951e5 */
  if (!C.zf) goto L_11c951e5;
L_11c951f2:;
  /* 11c951f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c951f6 pop ebx */
  EBX = (pop32());
  /* 11c951f7 pop esi */
  ESI = (pop32());
  /* 11c951f8 pop edi */
  EDI = (pop32());
  /* 11c951f9 ret  */
  ESPCHK(0x11c951a0u, _esp0);
  ESP += 4; return;
L_11c951fa:;
  /* 11c951fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c95200 je 0x11c95214 */
  if (C.zf) goto L_11c95214;
L_11c95202:;
  /* 11c95202 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95204 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c95205 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c95206 je 0x11c95296 */
  if (C.zf) goto L_11c95296;
  /* 11c9520c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c95212 jne 0x11c95202 */
  if (!C.zf) goto L_11c95202;
L_11c95214:;
  /* 11c95214 mov ebx, ecx */
  EBX = (ECX);
  /* 11c95216 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95219 jne 0x11c95287 */
  if (!C.zf) goto L_11c95287;
L_11c9521b:;
  /* 11c9521b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c9521d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c9521e:;
  /* 11c9521e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c9521f jne 0x11c9521b */
  if (!C.zf) goto L_11c9521b;
  /* 11c95221 pop ebx */
  EBX = (pop32());
  /* 11c95222 pop esi */
  ESI = (pop32());
L_11c95223:;
  /* 11c95223 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c95227 pop edi */
  EDI = (pop32());
  /* 11c95228 ret  */
  ESPCHK(0x11c951a0u, _esp0);
  ESP += 4; return;
L_11c95229:;
  /* 11c95229 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c9522b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9522e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c9522f je 0x11c951e0 */
  if (C.zf) goto L_11c951e0;
L_11c95231:;
  /* 11c95231 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c95236 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c95238 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9523a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c9523d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c9523f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c95241 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95244 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c95249 je 0x11c95229 */
  if (C.zf) goto L_11c95229;
  /* 11c9524b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c9524d je 0x11c9527b */
  if (C.zf) goto L_11c9527b;
  /* 11c9524f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c95251 je 0x11c95271 */
  if (C.zf) goto L_11c95271;
  /* 11c95253 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c95259 je 0x11c95267 */
  if (C.zf) goto L_11c95267;
  /* 11c9525b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c95261 jne 0x11c95229 */
  if (!C.zf) goto L_11c95229;
  /* 11c95263 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c95265 jmp 0x11c9527f */
  goto L_11c9527f;
L_11c95267:;
  /* 11c95267 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c9526d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c9526f jmp 0x11c9527f */
  goto L_11c9527f;
L_11c95271:;
  /* 11c95271 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c95277 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c95279 jmp 0x11c9527f */
  goto L_11c9527f;
L_11c9527b:;
  /* 11c9527b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c9527d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11c9527f:;
  /* 11c9527f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95282 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c95284 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c95285 je 0x11c95291 */
  if (C.zf) goto L_11c95291;
L_11c95287:;
  /* 11c95287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c95289:;
  /* 11c95289 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c9528b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9528e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c9528f jne 0x11c95289 */
  if (!C.zf) goto L_11c95289;
L_11c95291:;
  /* 11c95291 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c95294 jne 0x11c9521b */
  if (!C.zf) goto L_11c9521b;
L_11c95296:;
  /* 11c95296 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c9529a pop ebx */
  EBX = (pop32());
  /* 11c9529b pop esi */
  ESI = (pop32());
  /* 11c9529c pop edi */
  EDI = (pop32());
  /* 11c9529d ret  */
  ESPCHK(0x11c951a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000529e @ 0x11c9529e (27 bytes, 13 insns) */
void f_11c9529e(void) {
  FTRACE(0x11c9529eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9529e mov eax, dword ptr [0x11c9b404] */
  EAX = (r32((uint32_t)(0x11c9b404)));
  /* 11c952a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c952a5 je 0x11c952b6 */
  if (C.zf) goto L_11c952b6;
  /* 11c952a7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c952ab call eax */
  call_ind((uint32_t)(EAX), 0x11c952adu);
  /* 11c952ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c952af pop ecx */
  ECX = (pop32());
  /* 11c952b0 je 0x11c952b6 */
  if (C.zf) goto L_11c952b6;
  /* 11c952b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c952b4 pop eax */
  EAX = (pop32());
  /* 11c952b5 ret  */
  ESPCHK(0x11c9529eu, _esp0);
  ESP += 4; return;
L_11c952b6:;
  /* 11c952b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c952b8 ret  */
  ESPCHK(0x11c9529eu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11c952c0 (88 bytes, 40 insns) */
void f_11c952c0(void) {
  FTRACE(0x11c952c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c952c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c952c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c952c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c952ca je 0x11c95313 */
  if (C.zf) goto L_11c95313;
  /* 11c952cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c952ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c952d2 push edi */
  push32((uint32_t)(EDI));
  /* 11c952d3 mov edi, ecx */
  EDI = (ECX);
  /* 11c952d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c952d8 jb 0x11c95307 */
  if (C.cf) goto L_11c95307;
  /* 11c952da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c952dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c952df je 0x11c952e9 */
  if (C.zf) goto L_11c952e9;
  /* 11c952e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11c952e3:;
  /* 11c952e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c952e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c952e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c952e7 jne 0x11c952e3 */
  if (!C.zf) goto L_11c952e3;
L_11c952e9:;
  /* 11c952e9 mov ecx, eax */
  ECX = (EAX);
  /* 11c952eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c952ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c952f0 mov ecx, eax */
  ECX = (EAX);
  /* 11c952f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c952f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c952f7 mov ecx, edx */
  ECX = (EDX);
  /* 11c952f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c952fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c952ff je 0x11c95307 */
  if (C.zf) goto L_11c95307;
  /* 11c95301 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c95303 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c95305 je 0x11c9530d */
  if (C.zf) goto L_11c9530d;
L_11c95307:;
  /* 11c95307 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95309 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c9530a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c9530b jne 0x11c95307 */
  if (!C.zf) goto L_11c95307;
L_11c9530d:;
  /* 11c9530d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c95311 pop edi */
  EDI = (pop32());
  /* 11c95312 ret  */
  ESPCHK(0x11c952c0u, _esp0);
  ESP += 4; return;
L_11c95313:;
  /* 11c95313 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c95317 ret  */
  ESPCHK(0x11c952c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11c95318 (32 bytes, 18 insns) */
void f_11c95318(void) {
  FTRACE(0x11c95318u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95318 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95319 mov ebp, esp */
  EBP = (ESP);
  /* 11c9531b push ebx */
  push32((uint32_t)(EBX));
  /* 11c9531c push esi */
  push32((uint32_t)(ESI));
  /* 11c9531d push edi */
  push32((uint32_t)(EDI));
  /* 11c9531e push ebp */
  push32((uint32_t)(EBP));
  /* 11c9531f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c95321 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c95323 push 0x11c95330 */
  push32((uint32_t)(0x11c95330u));
  /* 11c95328 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c9532b call 0x11c96254 */
  push32(0x11c95330u); f_11c96254();
  /* 11c95330 pop ebp */
  EBP = (pop32());
  /* 11c95331 pop edi */
  EDI = (pop32());
  /* 11c95332 pop esi */
  ESI = (pop32());
  /* 11c95333 pop ebx */
  EBX = (pop32());
  /* 11c95334 mov esp, ebp */
  ESP = (EBP);
  /* 11c95336 pop ebp */
  EBP = (pop32());
  /* 11c95337 ret  */
  ESPCHK(0x11c95318u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11c9535a (104 bytes, 33 insns) */
void f_11c9535a(void) {
  FTRACE(0x11c9535au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9535a push ebx */
  push32((uint32_t)(EBX));
  /* 11c9535b push esi */
  push32((uint32_t)(ESI));
  /* 11c9535c push edi */
  push32((uint32_t)(EDI));
  /* 11c9535d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c95361 push eax */
  push32((uint32_t)(EAX));
  /* 11c95362 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11c95364 push 0x11c95338 */
  push32((uint32_t)(0x11c95338u));
  /* 11c95369 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11c95370 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11c95377:;
  /* 11c95377 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c9537b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c9537e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11c95381 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95384 je 0x11c953b4 */
  if (C.zf) goto L_11c953b4;
  /* 11c95386 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9538a je 0x11c953b4 */
  if (C.zf) goto L_11c953b4;
  /* 11c9538c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11c9538f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11c95392 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11c95396 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11c95399 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9539e jne 0x11c953b2 */
  if (!C.zf) goto L_11c953b2;
  /* 11c953a0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11c953a5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11c953a9 call 0x11c953ee */
  push32(0x11c953aeu); f_11c953ee();
  /* 11c953ae call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11c953b2u);
L_11c953b2:;
  /* 11c953b2 jmp 0x11c95377 */
  goto L_11c95377;
L_11c953b4:;
  /* 11c953b4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11c953bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c953be pop edi */
  EDI = (pop32());
  /* 11c953bf pop esi */
  ESI = (pop32());
  /* 11c953c0 pop ebx */
  EBX = (pop32());
  /* 11c953c1 ret  */
  ESPCHK(0x11c9535au, _esp0);
  ESP += 4; return;
}

/* FUN_100053ee @ 0x11c953ee (24 bytes, 10 insns) */
void f_11c953ee(void) {
  FTRACE(0x11c953eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c953ee push ebx */
  push32((uint32_t)(EBX));
  /* 11c953ef push ecx */
  push32((uint32_t)(ECX));
  /* 11c953f0 mov ebx, 0x11c9a7c0 */
  EBX = (0x11c9a7c0u);
  /* 11c953f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c953f8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c953fb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11c953fe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11c95401 pop ecx */
  ECX = (pop32());
  /* 11c95402 pop ebx */
  EBX = (pop32());
  /* 11c95403 ret 4 */
  ESPCHK(0x11c953eeu, _esp0);
  ESP += 8; return;
}

/* FUN_100054cd @ 0x11c954cd (27 bytes, 11 insns) */
void f_11c954cd(void) {
  FTRACE(0x11c954cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c954cd push ebp */
  push32((uint32_t)(EBP));
  /* 11c954ce mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c954d2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11c954d4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c954d7 push eax */
  push32((uint32_t)(EAX));
  /* 11c954d8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11c954db push eax */
  push32((uint32_t)(EAX));
  /* 11c954dc call 0x11c9535a */
  push32(0x11c954e1u); f_11c9535a();
  /* 11c954e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c954e4 pop ebp */
  EBP = (pop32());
  /* 11c954e5 ret 4 */
  ESPCHK(0x11c954cdu, _esp0);
  ESP += 8; return;
}

/* FUN_100054e8 @ 0x11c954e8 (511 bytes, 193 insns) */
void f_11c954e8(void) {
  FTRACE(0x11c954e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c954e8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c954e9 mov ebp, esp */
  EBP = (ESP);
  /* 11c954eb push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c954ed push 0x11c97530 */
  push32((uint32_t)(0x11c97530u));
  /* 11c954f2 push 0x11c95410 */
  push32((uint32_t)(0x11c95410u));
  /* 11c954f7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c954fd push eax */
  push32((uint32_t)(EAX));
  /* 11c954fe mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c95505 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95508 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95509 push esi */
  push32((uint32_t)(ESI));
  /* 11c9550a push edi */
  push32((uint32_t)(EDI));
  /* 11c9550b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c9550e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c95510 cmp dword ptr [0x11c9b42c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c9b42c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95516 jne 0x11c9555e */
  if (!C.zf) goto L_11c9555e;
  /* 11c95518 push edi */
  push32((uint32_t)(EDI));
  /* 11c95519 push edi */
  push32((uint32_t)(EDI));
  /* 11c9551a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9551c pop ebx */
  EBX = (pop32());
  /* 11c9551d push ebx */
  push32((uint32_t)(EBX));
  /* 11c9551e push 0x11c97528 */
  push32((uint32_t)(0x11c97528u));
  /* 11c95523 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11c95528 push esi */
  push32((uint32_t)(ESI));
  /* 11c95529 push edi */
  push32((uint32_t)(EDI));
  /* 11c9552a call dword ptr [0x11c97018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97018))), 0x11c95530u);
  /* 11c95530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95532 je 0x11c9553c */
  if (C.zf) goto L_11c9553c;
  /* 11c95534 mov dword ptr [0x11c9b42c], ebx */
  w32((uint32_t)(0x11c9b42c), (EBX));
  /* 11c9553a jmp 0x11c9555e */
  goto L_11c9555e;
L_11c9553c:;
  /* 11c9553c push edi */
  push32((uint32_t)(EDI));
  /* 11c9553d push edi */
  push32((uint32_t)(EDI));
  /* 11c9553e push ebx */
  push32((uint32_t)(EBX));
  /* 11c9553f push 0x11c97524 */
  push32((uint32_t)(0x11c97524u));
  /* 11c95544 push esi */
  push32((uint32_t)(ESI));
  /* 11c95545 push edi */
  push32((uint32_t)(EDI));
  /* 11c95546 call dword ptr [0x11c9701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9701c))), 0x11c9554cu);
  /* 11c9554c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9554e je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c95554 mov dword ptr [0x11c9b42c], 2 */
  w32((uint32_t)(0x11c9b42c), (0x2u));
L_11c9555e:;
  /* 11c9555e cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95561 jle 0x11c95573 */
  if ((C.zf||C.sf!=C.of)) goto L_11c95573;
  /* 11c95563 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c95566 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c95569 call 0x11c9570c */
  push32(0x11c9556eu); f_11c9570c();
  /* 11c9556e pop ecx */
  ECX = (pop32());
  /* 11c9556f pop ecx */
  ECX = (pop32());
  /* 11c95570 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11c95573:;
  /* 11c95573 mov eax, dword ptr [0x11c9b42c] */
  EAX = (r32((uint32_t)(0x11c9b42c)));
  /* 11c95578 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9557b jne 0x11c9559a */
  if (!C.zf) goto L_11c9559a;
  /* 11c9557d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c95580 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c95583 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c95586 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c95589 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c9558c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c9558f call dword ptr [0x11c9701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c9701c))), 0x11c95595u);
  /* 11c95595 jmp 0x11c95678 */
  goto L_11c95678;
L_11c9559a:;
  /* 11c9559a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9559d jne 0x11c95676 */
  if (!C.zf) goto L_11c95676;
  /* 11c955a3 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c955a6 jne 0x11c955b0 */
  if (!C.zf) goto L_11c955b0;
  /* 11c955a8 mov eax, dword ptr [0x11c9b424] */
  EAX = (r32((uint32_t)(0x11c9b424)));
  /* 11c955ad mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11c955b0:;
  /* 11c955b0 push edi */
  push32((uint32_t)(EDI));
  /* 11c955b1 push edi */
  push32((uint32_t)(EDI));
  /* 11c955b2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c955b5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c955b8 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c955bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c955bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c955bf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c955c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c955c3 push eax */
  push32((uint32_t)(EAX));
  /* 11c955c4 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c955c7 call dword ptr [0x11c97020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97020))), 0x11c955cdu);
  /* 11c955cd mov ebx, eax */
  EBX = (EAX);
  /* 11c955cf mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11c955d2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c955d4 je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c955da mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c955dd lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11c955e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c955e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c955e5 call 0x11c94270 */
  push32(0x11c955eau); f_11c94270();
  /* 11c955ea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c955ed mov eax, esp */
  EAX = (ESP);
  /* 11c955ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c955f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c955f6 jmp 0x11c9560b */
  goto L_11c9560b;
  /* 11c955f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c955fa pop eax */
  EAX = (pop32());
  /* 11c955fb ret  */
  ESPCHK(0x11c954e8u, _esp0);
  ESP += 4; return;
  /* 11c955fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c955ff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c95601 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c95604 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c95608 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11c9560b:;
  /* 11c9560b cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9560e je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c95610 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95611 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c95614 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c95617 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c9561a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9561c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c9561f call dword ptr [0x11c97020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97020))), 0x11c95625u);
  /* 11c95625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95627 je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c95629 push edi */
  push32((uint32_t)(EDI));
  /* 11c9562a push edi */
  push32((uint32_t)(EDI));
  /* 11c9562b push ebx */
  push32((uint32_t)(EBX));
  /* 11c9562c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c9562f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c95632 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c95635 call dword ptr [0x11c97018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97018))), 0x11c9563bu);
  /* 11c9563b mov esi, eax */
  ESI = (EAX);
  /* 11c9563d mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11c95640 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95642 je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c95644 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11c95648 je 0x11c9568a */
  if (C.zf) goto L_11c9568a;
  /* 11c9564a cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9564d je 0x11c95705 */
  if (C.zf) goto L_11c95705;
  /* 11c95653 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95656 jg 0x11c95676 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c95676;
  /* 11c95658 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c9565b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c9565e push ebx */
  push32((uint32_t)(EBX));
  /* 11c9565f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c95662 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c95665 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c95668 call dword ptr [0x11c97018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97018))), 0x11c9566eu);
  /* 11c9566e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95670 jne 0x11c95705 */
  if (!C.zf) goto L_11c95705;
L_11c95676:;
  /* 11c95676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c95678:;
  /* 11c95678 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11c9567b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c9567e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c95685 pop edi */
  EDI = (pop32());
  /* 11c95686 pop esi */
  ESI = (pop32());
  /* 11c95687 pop ebx */
  EBX = (pop32());
  /* 11c95688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95689 ret  */
  ESPCHK(0x11c954e8u, _esp0);
  ESP += 4; return;
L_11c9568a:;
  /* 11c9568a mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c95691 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11c95694 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95697 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c95699 call 0x11c94270 */
  push32(0x11c9569eu); f_11c94270();
  /* 11c9569e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c956a1 mov ebx, esp */
  EBX = (ESP);
  /* 11c956a3 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c956a6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c956aa jmp 0x11c956be */
  goto L_11c956be;
  /* 11c956ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11c956ae pop eax */
  EAX = (pop32());
  /* 11c956af ret  */
  ESPCHK(0x11c954e8u, _esp0);
  ESP += 4; return;
  /* 11c956b0 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c956b3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c956b5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c956b7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c956bb mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11c956be:;
  /* 11c956be cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c956c0 je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c956c2 push esi */
  push32((uint32_t)(ESI));
  /* 11c956c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c956c4 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c956c7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c956ca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c956cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c956d0 call dword ptr [0x11c97018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97018))), 0x11c956d6u);
  /* 11c956d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c956d8 je 0x11c95676 */
  if (C.zf) goto L_11c95676;
  /* 11c956da cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c956dd push edi */
  push32((uint32_t)(EDI));
  /* 11c956de push edi */
  push32((uint32_t)(EDI));
  /* 11c956df jne 0x11c956e5 */
  if (!C.zf) goto L_11c956e5;
  /* 11c956e1 push edi */
  push32((uint32_t)(EDI));
  /* 11c956e2 push edi */
  push32((uint32_t)(EDI));
  /* 11c956e3 jmp 0x11c956eb */
  goto L_11c956eb;
L_11c956e5:;
  /* 11c956e5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c956e8 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11c956eb:;
  /* 11c956eb push esi */
  push32((uint32_t)(ESI));
  /* 11c956ec push ebx */
  push32((uint32_t)(EBX));
  /* 11c956ed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11c956f2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c956f5 call dword ptr [0x11c970c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c970c4))), 0x11c956fbu);
  /* 11c956fb mov esi, eax */
  ESI = (EAX);
  /* 11c956fd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c956ff je 0x11c95676 */
  if (C.zf) goto L_11c95676;
L_11c95705:;
  /* 11c95705 mov eax, esi */
  EAX = (ESI);
  /* 11c95707 jmp 0x11c95678 */
  goto L_11c95678;
}

/* FUN_1000570c @ 0x11c9570c (43 bytes, 20 insns) */
void f_11c9570c(void) {
  FTRACE(0x11c9570cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c9570c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c95710 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c95714 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c95716 push esi */
  push32((uint32_t)(ESI));
  /* 11c95717 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11c9571a je 0x11c95729 */
  if (C.zf) goto L_11c95729;
L_11c9571c:;
  /* 11c9571c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9571f je 0x11c95729 */
  if (C.zf) goto L_11c95729;
  /* 11c95721 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c95722 mov esi, ecx */
  ESI = (ECX);
  /* 11c95724 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c95725 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c95727 jne 0x11c9571c */
  if (!C.zf) goto L_11c9571c;
L_11c95729:;
  /* 11c95729 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c9572c pop esi */
  ESI = (pop32());
  /* 11c9572d jne 0x11c95734 */
  if (!C.zf) goto L_11c95734;
  /* 11c9572f sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95733 ret  */
  ESPCHK(0x11c9570cu, _esp0);
  ESP += 4; return;
L_11c95734:;
  /* 11c95734 mov eax, edx */
  EAX = (EDX);
  /* 11c95736 ret  */
  ESPCHK(0x11c9570cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005737 @ 0x11c95737 (318 bytes, 123 insns) */
void f_11c95737(void) {
  FTRACE(0x11c95737u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95737 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95738 mov ebp, esp */
  EBP = (ESP);
  /* 11c9573a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c9573c push 0x11c97548 */
  push32((uint32_t)(0x11c97548u));
  /* 11c95741 push 0x11c95410 */
  push32((uint32_t)(0x11c95410u));
  /* 11c95746 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c9574c push eax */
  push32((uint32_t)(EAX));
  /* 11c9574d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c95754 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95757 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95758 push esi */
  push32((uint32_t)(ESI));
  /* 11c95759 push edi */
  push32((uint32_t)(EDI));
  /* 11c9575a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c9575d mov eax, dword ptr [0x11c9b430] */
  EAX = (r32((uint32_t)(0x11c9b430)));
  /* 11c95762 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c95764 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95766 jne 0x11c957a6 */
  if (!C.zf) goto L_11c957a6;
  /* 11c95768 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c9576b push eax */
  push32((uint32_t)(EAX));
  /* 11c9576c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9576e pop esi */
  ESI = (pop32());
  /* 11c9576f push esi */
  push32((uint32_t)(ESI));
  /* 11c95770 push 0x11c97528 */
  push32((uint32_t)(0x11c97528u));
  /* 11c95775 push esi */
  push32((uint32_t)(ESI));
  /* 11c95776 call dword ptr [0x11c97010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97010))), 0x11c9577cu);
  /* 11c9577c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c9577e je 0x11c95784 */
  if (C.zf) goto L_11c95784;
  /* 11c95780 mov eax, esi */
  EAX = (ESI);
  /* 11c95782 jmp 0x11c957a1 */
  goto L_11c957a1;
L_11c95784:;
  /* 11c95784 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c95787 push eax */
  push32((uint32_t)(EAX));
  /* 11c95788 push esi */
  push32((uint32_t)(ESI));
  /* 11c95789 push 0x11c97524 */
  push32((uint32_t)(0x11c97524u));
  /* 11c9578e push esi */
  push32((uint32_t)(ESI));
  /* 11c9578f push ebx */
  push32((uint32_t)(EBX));
  /* 11c95790 call dword ptr [0x11c97014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97014))), 0x11c95796u);
  /* 11c95796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95798 je 0x11c9586c */
  if (C.zf) goto L_11c9586c;
  /* 11c9579e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c957a0 pop eax */
  EAX = (pop32());
L_11c957a1:;
  /* 11c957a1 mov dword ptr [0x11c9b430], eax */
  w32((uint32_t)(0x11c9b430), (EAX));
L_11c957a6:;
  /* 11c957a6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c957a9 jne 0x11c957cf */
  if (!C.zf) goto L_11c957cf;
  /* 11c957ab mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c957ae cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c957b0 jne 0x11c957b7 */
  if (!C.zf) goto L_11c957b7;
  /* 11c957b2 mov eax, dword ptr [0x11c9b414] */
  EAX = (r32((uint32_t)(0x11c9b414)));
L_11c957b7:;
  /* 11c957b7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c957ba push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c957bd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c957c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c957c3 push eax */
  push32((uint32_t)(EAX));
  /* 11c957c4 call dword ptr [0x11c97014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97014))), 0x11c957cau);
  /* 11c957ca jmp 0x11c9586e */
  goto L_11c9586e;
L_11c957cf:;
  /* 11c957cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c957d2 jne 0x11c9586c */
  if (!C.zf) goto L_11c9586c;
  /* 11c957d8 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c957db jne 0x11c957e5 */
  if (!C.zf) goto L_11c957e5;
  /* 11c957dd mov eax, dword ptr [0x11c9b424] */
  EAX = (r32((uint32_t)(0x11c9b424)));
  /* 11c957e2 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11c957e5:;
  /* 11c957e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c957e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c957e7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c957ea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c957ed mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11c957f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c957f2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c957f4 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c957f7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c957f8 push eax */
  push32((uint32_t)(EAX));
  /* 11c957f9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c957fc call dword ptr [0x11c97020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97020))), 0x11c95802u);
  /* 11c95802 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c95805 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95807 je 0x11c9586c */
  if (C.zf) goto L_11c9586c;
  /* 11c95809 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c9580c lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11c9580f mov eax, edi */
  EAX = (EDI);
  /* 11c95811 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95814 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c95816 call 0x11c94270 */
  push32(0x11c9581bu); f_11c94270();
  /* 11c9581b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c9581e mov esi, esp */
  ESI = (ESP);
  /* 11c95820 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11c95823 push edi */
  push32((uint32_t)(EDI));
  /* 11c95824 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95825 push esi */
  push32((uint32_t)(ESI));
  /* 11c95826 call 0x11c952c0 */
  push32(0x11c9582bu); f_11c952c0();
  /* 11c9582b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9582e jmp 0x11c9583b */
  goto L_11c9583b;
  /* 11c95830 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c95832 pop eax */
  EAX = (pop32());
  /* 11c95833 ret  */
  ESPCHK(0x11c95737u, _esp0);
  ESP += 4; return;
  /* 11c95834 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c95837 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c95839 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c9583b:;
  /* 11c9583b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c9583f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95841 je 0x11c9586c */
  if (C.zf) goto L_11c9586c;
  /* 11c95843 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c95846 push esi */
  push32((uint32_t)(ESI));
  /* 11c95847 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c9584a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c9584d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9584f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c95852 call dword ptr [0x11c97020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97020))), 0x11c95858u);
  /* 11c95858 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9585a je 0x11c9586c */
  if (C.zf) goto L_11c9586c;
  /* 11c9585c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c9585f push eax */
  push32((uint32_t)(EAX));
  /* 11c95860 push esi */
  push32((uint32_t)(ESI));
  /* 11c95861 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c95864 call dword ptr [0x11c97010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97010))), 0x11c9586au);
  /* 11c9586a jmp 0x11c9586e */
  goto L_11c9586e;
L_11c9586c:;
  /* 11c9586c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c9586e:;
  /* 11c9586e lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11c95871 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c95874 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c9587b pop edi */
  EDI = (pop32());
  /* 11c9587c pop esi */
  ESI = (pop32());
  /* 11c9587d pop ebx */
  EBX = (pop32());
  /* 11c9587e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c9587f ret  */
  ESPCHK(0x11c95737u, _esp0);
  ESP += 4; return;
}

/* FUN_10005880 @ 0x11c95880 (9 bytes, 3 insns) */
void f_11c95880(void) {
  FTRACE(0x11c95880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95880 call 0x11c9265c */
  push32(0x11c95885u); f_11c9265c();
  /* 11c95885 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95888 ret  */
  ESPCHK(0x11c95880u, _esp0);
  ESP += 4; return;
}

/* FUN_10005889 @ 0x11c95889 (111 bytes, 44 insns) */
void f_11c95889(void) {
  FTRACE(0x11c95889u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95889 push ebx */
  push32((uint32_t)(EBX));
  /* 11c9588a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c9588c cmp dword ptr [0x11c9b414], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b414))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95892 jne 0x11c958a7 */
  if (!C.zf) goto L_11c958a7;
  /* 11c95894 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c95898 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9589b jl 0x11c958f6 */
  if ((C.sf!=C.of)) goto L_11c958f6;
  /* 11c9589d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c958a0 jg 0x11c958f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c958f6;
  /* 11c958a2 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c958a5 pop ebx */
  EBX = (pop32());
  /* 11c958a6 ret  */
  ESPCHK(0x11c95889u, _esp0);
  ESP += 4; return;
L_11c958a7:;
  /* 11c958a7 push esi */
  push32((uint32_t)(ESI));
  /* 11c958a8 mov esi, 0x11c9b584 */
  ESI = (0x11c9b584u);
  /* 11c958ad push edi */
  push32((uint32_t)(EDI));
  /* 11c958ae push esi */
  push32((uint32_t)(ESI));
  /* 11c958af call dword ptr [0x11c97008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c97008))), 0x11c958b5u);
  /* 11c958b5 cmp dword ptr [0x11c9b580], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c9b580))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c958bb mov edi, dword ptr [0x11c9700c] */
  EDI = (r32((uint32_t)(0x11c9700c)));
  /* 11c958c1 je 0x11c958d1 */
  if (C.zf) goto L_11c958d1;
  /* 11c958c3 push esi */
  push32((uint32_t)(ESI));
  /* 11c958c4 call edi */
  call_ind((uint32_t)(EDI), 0x11c958c6u);
  /* 11c958c6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c958c8 call 0x11c93246 */
  push32(0x11c958cdu); f_11c93246();
  /* 11c958cd pop ecx */
  ECX = (pop32());
  /* 11c958ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11c958d0 pop ebx */
  EBX = (pop32());
L_11c958d1:;
  /* 11c958d1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c958d5 call 0x11c958f8 */
  push32(0x11c958dau); f_11c958f8();
  /* 11c958da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c958dc pop ecx */
  ECX = (pop32());
  /* 11c958dd mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c958e1 je 0x11c958ed */
  if (C.zf) goto L_11c958ed;
  /* 11c958e3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c958e5 call 0x11c932a7 */
  push32(0x11c958eau); f_11c932a7();
  /* 11c958ea pop ecx */
  ECX = (pop32());
  /* 11c958eb jmp 0x11c958f0 */
  goto L_11c958f0;
L_11c958ed:;
  /* 11c958ed push esi */
  push32((uint32_t)(ESI));
  /* 11c958ee call edi */
  call_ind((uint32_t)(EDI), 0x11c958f0u);
L_11c958f0:;
  /* 11c958f0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c958f4 pop edi */
  EDI = (pop32());
  /* 11c958f5 pop esi */
  ESI = (pop32());
L_11c958f6:;
  /* 11c958f6 pop ebx */
  EBX = (pop32());
  /* 11c958f7 ret  */
  ESPCHK(0x11c95889u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f8 @ 0x11c958f8 (204 bytes, 71 insns) */
void f_11c958f8(void) {
  FTRACE(0x11c958f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c958f8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c958f9 mov ebp, esp */
  EBP = (ESP);
  /* 11c958fb push ecx */
  push32((uint32_t)(ECX));
  /* 11c958fc cmp dword ptr [0x11c9b414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95903 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95904 jne 0x11c95923 */
  if (!C.zf) goto L_11c95923;
  /* 11c95906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95909 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9590c jl 0x11c959c1 */
  if ((C.sf!=C.of)) goto L_11c959c1;
  /* 11c95912 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95915 jg 0x11c959c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c959c1;
  /* 11c9591b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c9591e jmp 0x11c959c1 */
  goto L_11c959c1;
L_11c95923:;
  /* 11c95923 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95926 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9592c jge 0x11c95956 */
  if ((C.sf==C.of)) goto L_11c95956;
  /* 11c9592e cmp dword ptr [0x11c9ab44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c9ab44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95935 jle 0x11c95943 */
  if ((C.zf||C.sf!=C.of)) goto L_11c95943;
  /* 11c95937 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c95939 push ebx */
  push32((uint32_t)(EBX));
  /* 11c9593a call 0x11c959c4 */
  push32(0x11c9593fu); f_11c959c4();
  /* 11c9593f pop ecx */
  ECX = (pop32());
  /* 11c95940 pop ecx */
  ECX = (pop32());
  /* 11c95941 jmp 0x11c9594e */
  goto L_11c9594e;
L_11c95943:;
  /* 11c95943 mov eax, dword ptr [0x11c9a938] */
  EAX = (r32((uint32_t)(0x11c9a938)));
  /* 11c95948 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11c9594b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11c9594e:;
  /* 11c9594e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95950 jne 0x11c95956 */
  if (!C.zf) goto L_11c95956;
L_11c95952:;
  /* 11c95952 mov eax, ebx */
  EAX = (EBX);
  /* 11c95954 jmp 0x11c959c1 */
  goto L_11c959c1;
L_11c95956:;
  /* 11c95956 mov edx, dword ptr [0x11c9a938] */
  EDX = (r32((uint32_t)(0x11c9a938)));
  /* 11c9595c mov eax, ebx */
  EAX = (EBX);
  /* 11c9595e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c95961 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11c95964 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c95969 je 0x11c95979 */
  if (C.zf) goto L_11c95979;
  /* 11c9596b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11c9596f mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11c95972 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11c95975 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c95977 jmp 0x11c95982 */
  goto L_11c95982;
L_11c95979:;
  /* 11c95979 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11c9597d mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11c95980 push 1 */
  push32((uint32_t)(0x1u));
L_11c95982:;
  /* 11c95982 pop eax */
  EAX = (pop32());
  /* 11c95983 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11c95986 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c95988 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c9598a push 3 */
  push32((uint32_t)(0x3u));
  /* 11c9598c push ecx */
  push32((uint32_t)(ECX));
  /* 11c9598d push eax */
  push32((uint32_t)(EAX));
  /* 11c9598e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c95991 push eax */
  push32((uint32_t)(EAX));
  /* 11c95992 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c95997 push dword ptr [0x11c9b414] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b414))));
  /* 11c9599d call 0x11c954e8 */
  push32(0x11c959a2u); f_11c954e8();
  /* 11c959a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c959a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c959a7 je 0x11c95952 */
  if (C.zf) goto L_11c95952;
  /* 11c959a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c959ac jne 0x11c959b4 */
  if (!C.zf) goto L_11c959b4;
  /* 11c959ae movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c959b2 jmp 0x11c959c1 */
  goto L_11c959c1;
L_11c959b4:;
  /* 11c959b4 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11c959b8 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c959bc shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c959bf or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11c959c1:;
  /* 11c959c1 pop ebx */
  EBX = (pop32());
  /* 11c959c2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c959c3 ret  */
  ESPCHK(0x11c958f8u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c4 @ 0x11c959c4 (117 bytes, 46 insns) */
void f_11c959c4(void) {
  FTRACE(0x11c959c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c959c4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c959c5 mov ebp, esp */
  EBP = (ESP);
  /* 11c959c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c959c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c959cb lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c959ce cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c959d4 ja 0x11c959e2 */
  if ((!C.cf&&!C.zf)) goto L_11c959e2;
  /* 11c959d6 mov ecx, dword ptr [0x11c9a938] */
  ECX = (r32((uint32_t)(0x11c9a938)));
  /* 11c959dc movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11c959e0 jmp 0x11c95a34 */
  goto L_11c95a34;
L_11c959e2:;
  /* 11c959e2 mov ecx, eax */
  ECX = (EAX);
  /* 11c959e4 push esi */
  push32((uint32_t)(ESI));
  /* 11c959e5 mov esi, dword ptr [0x11c9a938] */
  ESI = (r32((uint32_t)(0x11c9a938)));
  /* 11c959eb sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11c959ee movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11c959f1 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c959f6 pop esi */
  ESI = (pop32());
  /* 11c959f7 je 0x11c95a07 */
  if (C.zf) goto L_11c95a07;
  /* 11c959f9 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11c959fd mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11c95a00 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11c95a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c95a05 jmp 0x11c95a10 */
  goto L_11c95a10;
L_11c95a07:;
  /* 11c95a07 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11c95a0b mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11c95a0e push 1 */
  push32((uint32_t)(0x1u));
L_11c95a10:;
  /* 11c95a10 pop eax */
  EAX = (pop32());
  /* 11c95a11 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11c95a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c95a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c95a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c95a1a push ecx */
  push32((uint32_t)(ECX));
  /* 11c95a1b push eax */
  push32((uint32_t)(EAX));
  /* 11c95a1c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c95a1f push eax */
  push32((uint32_t)(EAX));
  /* 11c95a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c95a22 call 0x11c95737 */
  push32(0x11c95a27u); f_11c95737();
  /* 11c95a27 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c95a2c jne 0x11c95a30 */
  if (!C.zf) goto L_11c95a30;
  /* 11c95a2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95a2f ret  */
  ESPCHK(0x11c959c4u, _esp0);
  ESP += 4; return;
L_11c95a30:;
  /* 11c95a30 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11c95a34:;
  /* 11c95a34 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c95a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95a38 ret  */
  ESPCHK(0x11c959c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a40 @ 0x11c95a40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_11c95a40(void) {
  FTRACE(0x11c95a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95a41 mov ebp, esp */
  EBP = (ESP);
  /* 11c95a43 push edi */
  push32((uint32_t)(EDI));
  /* 11c95a44 push esi */
  push32((uint32_t)(ESI));
  /* 11c95a45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c95a48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c95a4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95a4e mov eax, ecx */
  EAX = (ECX);
  /* 11c95a50 mov edx, ecx */
  EDX = (ECX);
  /* 11c95a52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95a54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95a56 jbe 0x11c95a60 */
  if ((C.cf||C.zf)) goto L_11c95a60;
  /* 11c95a58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95a5a jb 0x11c95bd8 */
  if (C.cf) goto L_11c95bd8;
L_11c95a60:;
  /* 11c95a60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c95a66 jne 0x11c95a7c */
  if (!C.zf) goto L_11c95a7c;
  /* 11c95a68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95a6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c95a6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95a71 jb 0x11c95a9c */
  if (C.cf) goto L_11c95a9c;
  /* 11c95a73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95a75 jmp dword ptr [edx*4 + 0x11c95b88] */
  switch (EDX) {
    case 0: goto L_11c95b98;
    case 1: goto L_11c95ba0;
    case 2: goto L_11c95bac;
    case 3: goto L_11c95bc0;
    default: x86_unimpl("switch@0x11c95a75 out of table"); return;
  }
L_11c95a7c:;
  /* 11c95a7c mov eax, edi */
  EAX = (EDI);
  /* 11c95a7e mov edx, 3 */
  EDX = (0x3u);
  /* 11c95a83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95a86 jb 0x11c95a94 */
  if (C.cf) goto L_11c95a94;
  /* 11c95a88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c95a8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95a8d jmp dword ptr [eax*4 + 0x11c95aa0] */
  switch (EAX) {
    case 1: goto L_11c95ab0;
    case 2: goto L_11c95adc;
    case 3: goto L_11c95b00;
    default: x86_unimpl("switch@0x11c95a8d out of table"); return;
  }
L_11c95a94:;
  /* 11c95a94 jmp dword ptr [ecx*4 + 0x11c95b98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c95b98)))); return;
  /* 11c95a9b nop  */
  /* nop */
L_11c95a9c:;
  /* 11c95a9c jmp dword ptr [ecx*4 + 0x11c95b1c] */
  switch (ECX) {
    case 0: goto L_11c95b7f;
    case 1: goto L_11c95b6c;
    case 2: goto L_11c95b64;
    case 3: goto L_11c95b5c;
    case 4: goto L_11c95b54;
    case 5: goto L_11c95b4c;
    case 6: goto L_11c95b44;
    case 7: goto L_11c95b3c;
    default: x86_unimpl("switch@0x11c95a9c out of table"); return;
  }
  /* 11c95aa3 nop  */
  /* nop */
L_11c95ab0:;
  /* 11c95ab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c95ab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95ab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95ab6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c95ab9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c95abc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c95abf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95ac2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c95ac5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95ac8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95acb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95ace jb 0x11c95a9c */
  if (C.cf) goto L_11c95a9c;
  /* 11c95ad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95ad2 jmp dword ptr [edx*4 + 0x11c95b88] */
  switch (EDX) {
    case 0: goto L_11c95b98;
    case 1: goto L_11c95ba0;
    case 2: goto L_11c95bac;
    case 3: goto L_11c95bc0;
    default: x86_unimpl("switch@0x11c95ad2 out of table"); return;
  }
  /* 11c95ad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95adc:;
  /* 11c95adc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c95ade mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95ae0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95ae2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c95ae5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95ae8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c95aeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95aee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95af1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95af4 jb 0x11c95a9c */
  if (C.cf) goto L_11c95a9c;
  /* 11c95af6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95af8 jmp dword ptr [edx*4 + 0x11c95b88] */
  switch (EDX) {
    case 0: goto L_11c95b98;
    case 1: goto L_11c95ba0;
    case 2: goto L_11c95bac;
    case 3: goto L_11c95bc0;
    default: x86_unimpl("switch@0x11c95af8 out of table"); return;
  }
  /* 11c95aff nop  */
  /* nop */
L_11c95b00:;
  /* 11c95b00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c95b02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95b04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95b06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95b07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95b0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c95b0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95b0e jb 0x11c95a9c */
  if (C.cf) goto L_11c95a9c;
  /* 11c95b10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95b12 jmp dword ptr [edx*4 + 0x11c95b88] */
  switch (EDX) {
    case 0: goto L_11c95b98;
    case 1: goto L_11c95ba0;
    case 2: goto L_11c95bac;
    case 3: goto L_11c95bc0;
    default: x86_unimpl("switch@0x11c95b12 out of table"); return;
  }
  /* 11c95b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95b3c:;
  /* 11c95b3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c95b40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c95b44:;
  /* 11c95b44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c95b48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c95b4c:;
  /* 11c95b4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c95b50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c95b54:;
  /* 11c95b54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c95b58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c95b5c:;
  /* 11c95b5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c95b60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c95b64:;
  /* 11c95b64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c95b68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c95b6c:;
  /* 11c95b6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c95b70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c95b74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c95b7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95b7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c95b7f:;
  /* 11c95b7f jmp dword ptr [edx*4 + 0x11c95b88] */
  switch (EDX) {
    case 0: goto L_11c95b98;
    case 1: goto L_11c95ba0;
    case 2: goto L_11c95bac;
    case 3: goto L_11c95bc0;
    default: x86_unimpl("switch@0x11c95b7f out of table"); return;
  }
  /* 11c95b86 mov edi, edi */
  EDI = (EDI);
L_11c95b98:;
  /* 11c95b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95b9b pop esi */
  ESI = (pop32());
  /* 11c95b9c pop edi */
  EDI = (pop32());
  /* 11c95b9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95b9e ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95b9f nop  */
  /* nop */
L_11c95ba0:;
  /* 11c95ba0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95ba2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95ba7 pop esi */
  ESI = (pop32());
  /* 11c95ba8 pop edi */
  EDI = (pop32());
  /* 11c95ba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95baa ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95bab nop  */
  /* nop */
L_11c95bac:;
  /* 11c95bac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95bae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95bb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c95bb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c95bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95bb9 pop esi */
  ESI = (pop32());
  /* 11c95bba pop edi */
  EDI = (pop32());
  /* 11c95bbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95bbc ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95bbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95bc0:;
  /* 11c95bc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95bc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c95bc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c95bc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c95bca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c95bcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c95bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95bd3 pop esi */
  ESI = (pop32());
  /* 11c95bd4 pop edi */
  EDI = (pop32());
  /* 11c95bd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95bd6 ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95bd7 nop  */
  /* nop */
L_11c95bd8:;
  /* 11c95bd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c95bdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c95be0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c95be6 jne 0x11c95c0c */
  if (!C.zf) goto L_11c95c0c;
  /* 11c95be8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95beb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c95bee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95bf1 jb 0x11c95c00 */
  if (C.cf) goto L_11c95c00;
  /* 11c95bf3 std  */
  C.df=1;
  /* 11c95bf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95bf6 cld  */
  C.df=0;
  /* 11c95bf7 jmp dword ptr [edx*4 + 0x11c95d20] */
  switch (EDX) {
    case 0: goto L_11c95d30;
    case 1: goto L_11c95d38;
    case 2: goto L_11c95d48;
    case 3: goto L_11c95d5c;
    default: x86_unimpl("switch@0x11c95bf7 out of table"); return;
  }
  /* 11c95bfe mov edi, edi */
  EDI = (EDI);
L_11c95c00:;
  /* 11c95c00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c95c02 jmp dword ptr [ecx*4 + 0x11c95cd0] */
  switch (ECX) {
    case 0: goto L_11c95d17;
    default: x86_unimpl("switch@0x11c95c02 out of table"); return;
  }
  /* 11c95c09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95c0c:;
  /* 11c95c0c mov eax, edi */
  EAX = (EDI);
  /* 11c95c0e mov edx, 3 */
  EDX = (0x3u);
  /* 11c95c13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95c16 jb 0x11c95c24 */
  if (C.cf) goto L_11c95c24;
  /* 11c95c18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c95c1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95c1d jmp dword ptr [eax*4 + 0x11c95c28] */
  switch (EAX) {
    case 1: goto L_11c95c38;
    case 2: goto L_11c95c58;
    case 3: goto L_11c95c80;
    default: x86_unimpl("switch@0x11c95c1d out of table"); return;
  }
L_11c95c24:;
  /* 11c95c24 jmp dword ptr [ecx*4 + 0x11c95d20] */
  switch (ECX) {
    case 0: goto L_11c95d30;
    case 1: goto L_11c95d38;
    case 2: goto L_11c95d48;
    case 3: goto L_11c95d5c;
    default: x86_unimpl("switch@0x11c95c24 out of table"); return;
  }
  /* 11c95c2b nop  */
  /* nop */
L_11c95c38:;
  /* 11c95c38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c95c3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c95c3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c95c40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c95c41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95c44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c95c45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95c48 jb 0x11c95c00 */
  if (C.cf) goto L_11c95c00;
  /* 11c95c4a std  */
  C.df=1;
  /* 11c95c4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95c4d cld  */
  C.df=0;
  /* 11c95c4e jmp dword ptr [edx*4 + 0x11c95d20] */
  switch (EDX) {
    case 0: goto L_11c95d30;
    case 1: goto L_11c95d38;
    case 2: goto L_11c95d48;
    case 3: goto L_11c95d5c;
    default: x86_unimpl("switch@0x11c95c4e out of table"); return;
  }
  /* 11c95c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95c58:;
  /* 11c95c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c95c5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c95c5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c95c60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c95c63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95c66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c95c69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95c6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95c6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95c72 jb 0x11c95c00 */
  if (C.cf) goto L_11c95c00;
  /* 11c95c74 std  */
  C.df=1;
  /* 11c95c75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95c77 cld  */
  C.df=0;
  /* 11c95c78 jmp dword ptr [edx*4 + 0x11c95d20] */
  switch (EDX) {
    case 0: goto L_11c95d30;
    case 1: goto L_11c95d38;
    case 2: goto L_11c95d48;
    case 3: goto L_11c95d5c;
    default: x86_unimpl("switch@0x11c95c78 out of table"); return;
  }
  /* 11c95c7f nop  */
  /* nop */
L_11c95c80:;
  /* 11c95c80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c95c83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c95c85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c95c88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c95c8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c95c8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c95c91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c95c94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c95c97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95c9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95c9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95ca0 jb 0x11c95c00 */
  if (C.cf) goto L_11c95c00;
  /* 11c95ca6 std  */
  C.df=1;
  /* 11c95ca7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c95ca9 cld  */
  C.df=0;
  /* 11c95caa jmp dword ptr [edx*4 + 0x11c95d20] */
  switch (EDX) {
    case 0: goto L_11c95d30;
    case 1: goto L_11c95d38;
    case 2: goto L_11c95d48;
    case 3: goto L_11c95d5c;
    default: x86_unimpl("switch@0x11c95caa out of table"); return;
  }
  /* 11c95cb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c95cb4 aam 0x5c */
  x86_unimpl("aam @ 0x11c95cb4");
  /* 11c95cb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95cb7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95cb9 pop esp */
  ESP = (pop32());
  /* 11c95cba leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95cbb adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95cbd pop esp */
  ESP = (pop32());
  /* 11c95cbe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95cbf adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95cc1 pop esp */
  ESP = (pop32());
  /* 11c95cc2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95cc3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95cc5 pop esp */
  ESP = (pop32());
  /* 11c95cc6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95cc7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95cc9 pop esp */
  ESP = (pop32());
  /* 11c95cca leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95ccc add al, 0x5d */
  { uint32_t _a=(AL),_b=(0x5du),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c95cce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95cd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c95cd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c95cdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c95ce0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c95ce4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c95ce8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c95cec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c95cf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c95cf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c95cf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c95cfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c95d00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c95d04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c95d08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c95d0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c95d13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95d15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c95d17:;
  /* 11c95d17 jmp dword ptr [edx*4 + 0x11c95d20] */
  switch (EDX) {
    case 0: goto L_11c95d30;
    case 1: goto L_11c95d38;
    case 2: goto L_11c95d48;
    case 3: goto L_11c95d5c;
    default: x86_unimpl("switch@0x11c95d17 out of table"); return;
  }
  /* 11c95d1e mov edi, edi */
  EDI = (EDI);
L_11c95d30:;
  /* 11c95d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95d33 pop esi */
  ESI = (pop32());
  /* 11c95d34 pop edi */
  EDI = (pop32());
  /* 11c95d35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95d36 ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95d37 nop  */
  /* nop */
L_11c95d38:;
  /* 11c95d38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c95d3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c95d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95d41 pop esi */
  ESI = (pop32());
  /* 11c95d42 pop edi */
  EDI = (pop32());
  /* 11c95d43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95d44 ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95d45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95d48:;
  /* 11c95d48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c95d4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c95d4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c95d51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c95d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95d57 pop esi */
  ESI = (pop32());
  /* 11c95d58 pop edi */
  EDI = (pop32());
  /* 11c95d59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95d5a ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
  /* 11c95d5b nop  */
  /* nop */
L_11c95d5c:;
  /* 11c95d5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c95d5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c95d62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c95d65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c95d68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c95d6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c95d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95d71 pop esi */
  ESI = (pop32());
  /* 11c95d72 pop edi */
  EDI = (pop32());
  /* 11c95d73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95d74 ret  */
  ESPCHK(0x11c95a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x11c95e10 (62 bytes, 35 insns) */
void f_11c95e10(void) {
  FTRACE(0x11c95e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95e11 mov ebp, esp */
  EBP = (ESP);
  /* 11c95e13 push esi */
  push32((uint32_t)(ESI));
  /* 11c95e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c95e16 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e17 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e18 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e19 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e1a push eax */
  push32((uint32_t)(EAX));
  /* 11c95e1b push eax */
  push32((uint32_t)(EAX));
  /* 11c95e1c push eax */
  push32((uint32_t)(EAX));
  /* 11c95e1d push eax */
  push32((uint32_t)(EAX));
  /* 11c95e1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c95e21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95e24:;
  /* 11c95e24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c95e26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95e28 je 0x11c95e31 */
  if (C.zf) goto L_11c95e31;
  /* 11c95e2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c95e2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11c95e2b");
  /* 11c95e2f jmp 0x11c95e24 */
  goto L_11c95e24;
L_11c95e31:;
  /* 11c95e31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95e34 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11c95e37 nop  */
  /* nop */
L_11c95e38:;
  /* 11c95e38 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c95e39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95e3b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95e3d je 0x11c95e46 */
  if (C.zf) goto L_11c95e46;
  /* 11c95e3f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95e40 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11c95e40");
  /* 11c95e44 jae 0x11c95e38 */
  if (!C.cf) goto L_11c95e38;
L_11c95e46:;
  /* 11c95e46 mov eax, ecx */
  EAX = (ECX);
  /* 11c95e48 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95e4b pop esi */
  ESI = (pop32());
  /* 11c95e4c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95e4d ret  */
  ESPCHK(0x11c95e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x11c95e50 (58 bytes, 32 insns) */
void f_11c95e50(void) {
  FTRACE(0x11c95e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95e51 mov ebp, esp */
  EBP = (ESP);
  /* 11c95e53 push esi */
  push32((uint32_t)(ESI));
  /* 11c95e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c95e56 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e57 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e58 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e59 push eax */
  push32((uint32_t)(EAX));
  /* 11c95e5a push eax */
  push32((uint32_t)(EAX));
  /* 11c95e5b push eax */
  push32((uint32_t)(EAX));
  /* 11c95e5c push eax */
  push32((uint32_t)(EAX));
  /* 11c95e5d push eax */
  push32((uint32_t)(EAX));
  /* 11c95e5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c95e61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95e64:;
  /* 11c95e64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c95e66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95e68 je 0x11c95e71 */
  if (C.zf) goto L_11c95e71;
  /* 11c95e6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c95e6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11c95e6b");
  /* 11c95e6f jmp 0x11c95e64 */
  goto L_11c95e64;
L_11c95e71:;
  /* 11c95e71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11c95e74:;
  /* 11c95e74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95e76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95e78 je 0x11c95e84 */
  if (C.zf) goto L_11c95e84;
  /* 11c95e7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95e7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11c95e7b");
  /* 11c95e7f jae 0x11c95e74 */
  if (!C.cf) goto L_11c95e74;
  /* 11c95e81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11c95e84:;
  /* 11c95e84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95e87 pop esi */
  ESI = (pop32());
  /* 11c95e88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95e89 ret  */
  ESPCHK(0x11c95e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x11c95e90 (208 bytes, 85 insns) */
void f_11c95e90(void) {
  FTRACE(0x11c95e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95e91 mov ebp, esp */
  EBP = (ESP);
  /* 11c95e93 push edi */
  push32((uint32_t)(EDI));
  /* 11c95e94 push esi */
  push32((uint32_t)(ESI));
  /* 11c95e95 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95e96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c95e99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95e9c lea eax, [0x11c9b40c] */
  EAX = ((uint32_t)(0x11c9b40c));
  /* 11c95ea2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95ea6 jne 0x11c95ee3 */
  if (!C.zf) goto L_11c95ee3;
  /* 11c95ea8 mov al, 0xff */
  AL = (0xffu);
  /* 11c95eaa mov edi, edi */
  EDI = (EDI);
L_11c95eac:;
  /* 11c95eac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95eae je 0x11c95ede */
  if (C.zf) goto L_11c95ede;
  /* 11c95eb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95eb2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95eb3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11c95eb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c95eb6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95eb8 je 0x11c95eac */
  if (C.zf) goto L_11c95eac;
  /* 11c95eba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c95ebc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95ebe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c95ec0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11c95ec3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c95ec5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c95ec7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11c95ec9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c95ecb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95ecd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c95ecf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11c95ed2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c95ed4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c95ed6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95ed8 je 0x11c95eac */
  if (C.zf) goto L_11c95eac;
  /* 11c95eda sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c95edc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11c95ede:;
  /* 11c95ede movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11c95ee1 jmp 0x11c95f5b */
  goto L_11c95f5b;
L_11c95ee3:;
  /* 11c95ee3 lock inc dword ptr [0x11c9b584] */
  x86_unimpl("lock inc @ 0x11c95ee3");
  /* 11c95eea cmp dword ptr [0x11c9b580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95ef1 jg 0x11c95ef7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c95ef7;
  /* 11c95ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c95ef5 jmp 0x11c95f0c */
  goto L_11c95f0c;
L_11c95ef7:;
  /* 11c95ef7 lock dec dword ptr [0x11c9b584] */
  x86_unimpl("lock dec @ 0x11c95ef7");
  /* 11c95efe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c95f00 call 0x11c93246 */
  push32(0x11c95f05u); f_11c93246();
  /* 11c95f05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11c95f0c:;
  /* 11c95f0c mov eax, 0xff */
  EAX = (0xffu);
  /* 11c95f11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c95f13 nop  */
  /* nop */
L_11c95f14:;
  /* 11c95f14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95f16 je 0x11c95f3f */
  if (C.zf) goto L_11c95f3f;
  /* 11c95f18 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c95f1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95f1b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c95f1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c95f1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95f20 je 0x11c95f14 */
  if (C.zf) goto L_11c95f14;
  /* 11c95f22 push eax */
  push32((uint32_t)(EAX));
  /* 11c95f23 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95f24 call 0x11c96155 */
  push32(0x11c95f29u); f_11c96155();
  /* 11c95f29 mov ebx, eax */
  EBX = (EAX);
  /* 11c95f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95f2e call 0x11c96155 */
  push32(0x11c95f33u); f_11c96155();
  /* 11c95f33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c95f36 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95f38 je 0x11c95f14 */
  if (C.zf) goto L_11c95f14;
  /* 11c95f3a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c95f3c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c95f3f:;
  /* 11c95f3f mov ebx, eax */
  EBX = (EAX);
  /* 11c95f41 pop eax */
  EAX = (pop32());
  /* 11c95f42 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c95f44 jne 0x11c95f4f */
  if (!C.zf) goto L_11c95f4f;
  /* 11c95f46 lock dec dword ptr [0x11c9b584] */
  x86_unimpl("lock dec @ 0x11c95f46");
  /* 11c95f4d jmp 0x11c95f59 */
  goto L_11c95f59;
L_11c95f4f:;
  /* 11c95f4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c95f51 call 0x11c932a7 */
  push32(0x11c95f56u); f_11c932a7();
  /* 11c95f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c95f59:;
  /* 11c95f59 mov eax, ebx */
  EAX = (EBX);
L_11c95f5b:;
  /* 11c95f5b pop ebx */
  EBX = (pop32());
  /* 11c95f5c pop esi */
  ESI = (pop32());
  /* 11c95f5d pop edi */
  EDI = (pop32());
  /* 11c95f5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c95f5f ret  */
  ESPCHK(0x11c95e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f60 @ 0x11c95f60 (257 bytes, 103 insns) */
void f_11c95f60(void) {
  FTRACE(0x11c95f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c95f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11c95f61 mov ebp, esp */
  EBP = (ESP);
  /* 11c95f63 push edi */
  push32((uint32_t)(EDI));
  /* 11c95f64 push esi */
  push32((uint32_t)(ESI));
  /* 11c95f65 push ebx */
  push32((uint32_t)(EBX));
  /* 11c95f66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c95f69 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c95f6b je 0x11c9605a */
  if (C.zf) goto L_11c9605a;
  /* 11c95f71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c95f74 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c95f77 lea eax, [0x11c9b40c] */
  EAX = ((uint32_t)(0x11c9b40c));
  /* 11c95f7d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95f81 jne 0x11c95fd1 */
  if (!C.zf) goto L_11c95fd1;
  /* 11c95f83 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11c95f85 mov bl, 0x5a */
  BL = (0x5au);
  /* 11c95f87 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11c95f89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c95f8c:;
  /* 11c95f8c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11c95f8e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c95f90 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c95f92 je 0x11c95fb5 */
  if (C.zf) goto L_11c95fb5;
  /* 11c95f94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c95f96 je 0x11c95fb5 */
  if (C.zf) goto L_11c95fb5;
  /* 11c95f98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c95f99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c95f9a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95f9c jb 0x11c95fa4 */
  if (C.cf) goto L_11c95fa4;
  /* 11c95f9e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95fa0 ja 0x11c95fa4 */
  if ((!C.cf&&!C.zf)) goto L_11c95fa4;
  /* 11c95fa2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11c95fa4:;
  /* 11c95fa4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95fa6 jb 0x11c95fae */
  if (C.cf) goto L_11c95fae;
  /* 11c95fa8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95faa ja 0x11c95fae */
  if ((!C.cf&&!C.zf)) goto L_11c95fae;
  /* 11c95fac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11c95fae:;
  /* 11c95fae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95fb0 jne 0x11c95fbf */
  if (!C.zf) goto L_11c95fbf;
  /* 11c95fb2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c95fb3 jne 0x11c95f8c */
  if (!C.zf) goto L_11c95f8c;
L_11c95fb5:;
  /* 11c95fb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c95fb7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c95fb9 je 0x11c9605a */
  if (C.zf) goto L_11c9605a;
L_11c95fbf:;
  /* 11c95fbf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11c95fc4 jb 0x11c9605a */
  if (C.cf) goto L_11c9605a;
  /* 11c95fca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c95fcc jmp 0x11c9605a */
  goto L_11c9605a;
L_11c95fd1:;
  /* 11c95fd1 lock inc dword ptr [0x11c9b584] */
  x86_unimpl("lock inc @ 0x11c95fd1");
  /* 11c95fd8 cmp dword ptr [0x11c9b580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c95fdf jg 0x11c95fe5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c95fe5;
  /* 11c95fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c95fe3 jmp 0x11c95ffe */
  goto L_11c95ffe;
L_11c95fe5:;
  /* 11c95fe5 lock dec dword ptr [0x11c9b584] */
  x86_unimpl("lock dec @ 0x11c95fe5");
  /* 11c95fec mov ebx, ecx */
  EBX = (ECX);
  /* 11c95fee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c95ff0 call 0x11c93246 */
  push32(0x11c95ff5u); f_11c93246();
  /* 11c95ff5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11c95ffc mov ecx, ebx */
  ECX = (EBX);
L_11c95ffe:;
  /* 11c95ffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c96000 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c96002 mov edi, edi */
  EDI = (EDI);
L_11c96004:;
  /* 11c96004 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c96006 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c96008 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c9600a je 0x11c9602f */
  if (C.zf) goto L_11c9602f;
  /* 11c9600c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c9600e je 0x11c9602f */
  if (C.zf) goto L_11c9602f;
  /* 11c96010 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c96011 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c96012 push ecx */
  push32((uint32_t)(ECX));
  /* 11c96013 push eax */
  push32((uint32_t)(EAX));
  /* 11c96014 push ebx */
  push32((uint32_t)(EBX));
  /* 11c96015 call 0x11c96155 */
  push32(0x11c9601au); f_11c96155();
  /* 11c9601a mov ebx, eax */
  EBX = (EAX);
  /* 11c9601c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9601f call 0x11c96155 */
  push32(0x11c96024u); f_11c96155();
  /* 11c96024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c96027 pop ecx */
  ECX = (pop32());
  /* 11c96028 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9602a jne 0x11c96035 */
  if (!C.zf) goto L_11c96035;
  /* 11c9602c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c9602d jne 0x11c96004 */
  if (!C.zf) goto L_11c96004;
L_11c9602f:;
  /* 11c9602f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c96031 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c96033 je 0x11c9603e */
  if (C.zf) goto L_11c9603e;
L_11c96035:;
  /* 11c96035 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11c9603a jb 0x11c9603e */
  if (C.cf) goto L_11c9603e;
  /* 11c9603c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11c9603e:;
  /* 11c9603e pop eax */
  EAX = (pop32());
  /* 11c9603f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c96041 jne 0x11c9604c */
  if (!C.zf) goto L_11c9604c;
  /* 11c96043 lock dec dword ptr [0x11c9b584] */
  x86_unimpl("lock dec @ 0x11c96043");
  /* 11c9604a jmp 0x11c9605a */
  goto L_11c9605a;
L_11c9604c:;
  /* 11c9604c mov ebx, ecx */
  EBX = (ECX);
  /* 11c9604e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c96050 call 0x11c932a7 */
  push32(0x11c96055u); f_11c932a7();
  /* 11c96055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c96058 mov ecx, ebx */
  ECX = (EBX);
L_11c9605a:;
  /* 11c9605a mov eax, ecx */
  EAX = (ECX);
  /* 11c9605c pop ebx */
  EBX = (pop32());
  /* 11c9605d pop esi */
  ESI = (pop32());
  /* 11c9605e pop edi */
  EDI = (pop32());
  /* 11c9605f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c96060 ret  */
  ESPCHK(0x11c95f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006155 @ 0x11c96155 (203 bytes, 78 insns) */
void f_11c96155(void) {
  FTRACE(0x11c96155u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c96155 push ebp */
  push32((uint32_t)(EBP));
  /* 11c96156 mov ebp, esp */
  EBP = (ESP);
  /* 11c96158 push ecx */
  push32((uint32_t)(ECX));
  /* 11c96159 cmp dword ptr [0x11c9b414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c9b414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c96160 push ebx */
  push32((uint32_t)(EBX));
  /* 11c96161 push esi */
  push32((uint32_t)(ESI));
  /* 11c96162 push edi */
  push32((uint32_t)(EDI));
  /* 11c96163 jne 0x11c96182 */
  if (!C.zf) goto L_11c96182;
  /* 11c96165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c96168 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9616b jl 0x11c9621b */
  if ((C.sf!=C.of)) goto L_11c9621b;
  /* 11c96171 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c96174 jg 0x11c9621b */
  if ((!C.zf&&C.sf==C.of)) goto L_11c9621b;
  /* 11c9617a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c9617d jmp 0x11c9621b */
  goto L_11c9621b;
L_11c96182:;
  /* 11c96182 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c96185 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11c9618a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c9618c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c9618e pop esi */
  ESI = (pop32());
  /* 11c9618f jge 0x11c961b6 */
  if ((C.sf==C.of)) goto L_11c961b6;
  /* 11c96191 cmp dword ptr [0x11c9ab44], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c9ab44))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c96197 jle 0x11c961a4 */
  if ((C.zf||C.sf!=C.of)) goto L_11c961a4;
  /* 11c96199 push esi */
  push32((uint32_t)(ESI));
  /* 11c9619a push ebx */
  push32((uint32_t)(EBX));
  /* 11c9619b call 0x11c959c4 */
  push32(0x11c961a0u); f_11c959c4();
  /* 11c961a0 pop ecx */
  ECX = (pop32());
  /* 11c961a1 pop ecx */
  ECX = (pop32());
  /* 11c961a2 jmp 0x11c961ae */
  goto L_11c961ae;
L_11c961a4:;
  /* 11c961a4 mov eax, dword ptr [0x11c9a938] */
  EAX = (r32((uint32_t)(0x11c9a938)));
  /* 11c961a9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11c961ac and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c961ae:;
  /* 11c961ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c961b0 jne 0x11c961b6 */
  if (!C.zf) goto L_11c961b6;
L_11c961b2:;
  /* 11c961b2 mov eax, ebx */
  EAX = (EBX);
  /* 11c961b4 jmp 0x11c9621b */
  goto L_11c9621b;
L_11c961b6:;
  /* 11c961b6 mov edx, dword ptr [0x11c9a938] */
  EDX = (r32((uint32_t)(0x11c9a938)));
  /* 11c961bc mov eax, ebx */
  EAX = (EBX);
  /* 11c961be sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c961c1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11c961c4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c961c9 je 0x11c961da */
  if (C.zf) goto L_11c961da;
  /* 11c961cb and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11c961cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11c961d1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11c961d4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11c961d7 pop eax */
  EAX = (pop32());
  /* 11c961d8 jmp 0x11c961e3 */
  goto L_11c961e3;
L_11c961da:;
  /* 11c961da and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11c961de mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11c961e1 mov eax, esi */
  EAX = (ESI);
L_11c961e3:;
  /* 11c961e3 push esi */
  push32((uint32_t)(ESI));
  /* 11c961e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c961e6 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11c961e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c961eb push ecx */
  push32((uint32_t)(ECX));
  /* 11c961ec push eax */
  push32((uint32_t)(EAX));
  /* 11c961ed lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c961f0 push eax */
  push32((uint32_t)(EAX));
  /* 11c961f1 push edi */
  push32((uint32_t)(EDI));
  /* 11c961f2 push dword ptr [0x11c9b414] */
  push32((uint32_t)(r32((uint32_t)(0x11c9b414))));
  /* 11c961f8 call 0x11c954e8 */
  push32(0x11c961fdu); f_11c954e8();
  /* 11c961fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c96200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c96202 je 0x11c961b2 */
  if (C.zf) goto L_11c961b2;
  /* 11c96204 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c96206 jne 0x11c9620e */
  if (!C.zf) goto L_11c9620e;
  /* 11c96208 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c9620c jmp 0x11c9621b */
  goto L_11c9621b;
L_11c9620e:;
  /* 11c9620e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11c96212 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c96216 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c96219 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11c9621b:;
  /* 11c9621b pop edi */
  EDI = (pop32());
  /* 11c9621c pop esi */
  ESI = (pop32());
  /* 11c9621d pop ebx */
  EBX = (pop32());
  /* 11c9621e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c9621f ret  */
  ESPCHK(0x11c96155u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11c96254 (6 bytes, 1 insns) */
void f_11c96254(void) {
  FTRACE(0x11c96254u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c96254 jmp dword ptr [0x11c97024] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c97024)))); return;
}

