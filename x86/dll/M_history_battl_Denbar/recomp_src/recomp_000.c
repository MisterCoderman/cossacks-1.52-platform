#include "recomp.h"

/* thunk_FUN_10001440 @ 0x12d31005 (5 bytes, 1 insns) */
void f_12d31005(void) {
  FTRACE(0x12d31005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31005 jmp 0x12d31440 */
  f_12d31440(); return;
}

/* OnInit @ 0x12d3100a (5 bytes, 1 insns) */
void f_12d3100a(void) {
  FTRACE(0x12d3100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3100a jmp 0x12d31350 */
  f_12d31350(); return;
}

/* thunk_FUN_10001050 @ 0x12d3100f (5 bytes, 1 insns) */
void f_12d3100f(void) {
  FTRACE(0x12d3100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3100f jmp 0x12d31050 */
  f_12d31050(); return;
}

/* thunk_FUN_10001180 @ 0x12d31014 (5 bytes, 1 insns) */
void f_12d31014(void) {
  FTRACE(0x12d31014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31014 jmp 0x12d31180 */
  f_12d31180(); return;
}

/* ProcessScenary @ 0x12d31019 (5 bytes, 1 insns) */
void f_12d31019(void) {
  FTRACE(0x12d31019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31019 jmp 0x12d31390 */
  f_12d31390(); return;
}

/* thunk_FUN_100010b0 @ 0x12d3101e (5 bytes, 1 insns) */
void f_12d3101e(void) {
  FTRACE(0x12d3101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3101e jmp 0x12d310b0 */
  f_12d310b0(); return;
}

/* thunk_FUN_10001220 @ 0x12d31023 (5 bytes, 1 insns) */
void f_12d31023(void) {
  FTRACE(0x12d31023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31023 jmp 0x12d31220 */
  f_12d31220(); return;
}

/* FUN_10001050 @ 0x12d31050 (67 bytes, 26 insns) */
void f_12d31050(void) {
  FTRACE(0x12d31050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31050 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31051 mov ebp, esp */
  EBP = (ESP);
  /* 12d31053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d31056 push ebx */
  push32((uint32_t)(EBX));
  /* 12d31057 push esi */
  push32((uint32_t)(ESI));
  /* 12d31058 push edi */
  push32((uint32_t)(EDI));
  /* 12d31059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12d3105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12d31061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d31066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d31068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31072 je 0x12d31076 */
  if (C.zf) goto L_12d31076;
  /* 12d31074 jmp 0x12d3107b */
  goto L_12d3107b;
L_12d31076:;
  /* 12d31076 call 0x12d3100a */
  push32(0x12d3107bu); f_12d3100a();
L_12d3107b:;
  /* 12d3107b mov eax, 1 */
  EAX = (0x1u);
  /* 12d31080 pop edi */
  EDI = (pop32());
  /* 12d31081 pop esi */
  ESI = (pop32());
  /* 12d31082 pop ebx */
  EBX = (pop32());
  /* 12d31083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31088 call 0x12d314c0 */
  push32(0x12d3108du); f_12d314c0();
  /* 12d3108d mov esp, ebp */
  ESP = (EBP);
  /* 12d3108f pop ebp */
  EBP = (pop32());
  /* 12d31090 ret 0xc */
  ESPCHK(0x12d31050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x12d310b0 (160 bytes, 56 insns) */
void f_12d310b0(void) {
  FTRACE(0x12d310b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d310b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d310b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d310b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d310b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d310b7 push esi */
  push32((uint32_t)(ESI));
  /* 12d310b8 push edi */
  push32((uint32_t)(EDI));
  /* 12d310b9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12d310bc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12d310c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d310c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d310c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d310cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d310d6 jmp 0x12d310e1 */
  goto L_12d310e1;
L_12d310d8:;
  /* 12d310d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d310db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d310de mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d310e1:;
  /* 12d310e1 cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d310e5 jge 0x12d3113c */
  if ((C.sf==C.of)) goto L_12d3113c;
  /* 12d310e7 mov esi, esp */
  ESI = (ESP);
  /* 12d310e9 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d310ec push ecx */
  push32((uint32_t)(ECX));
  /* 12d310ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d310f0 lea eax, [edx*8 + 0x12d4e400] */
  EAX = ((uint32_t)(EDX*8 + 0x12d4e400));
  /* 12d310f7 push eax */
  push32((uint32_t)(EAX));
  /* 12d310f8 call dword ptr [0x12d503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d503b0))), 0x12d310feu);
  /* 12d310fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31101 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31103 call 0x12d314c0 */
  push32(0x12d31108u); f_12d314c0();
  /* 12d31108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3110a jle 0x12d3113a */
  if ((C.zf||C.sf!=C.of)) goto L_12d3113a;
  /* 12d3110c mov esi, esp */
  ESI = (ESP);
  /* 12d3110e mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d31111 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31112 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d31115 lea eax, [edx*8 + 0x12d4e400] */
  EAX = ((uint32_t)(EDX*8 + 0x12d4e400));
  /* 12d3111c push eax */
  push32((uint32_t)(EAX));
  /* 12d3111d call dword ptr [0x12d503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d503b0))), 0x12d31123u);
  /* 12d31123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31126 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31128 call 0x12d314c0 */
  push32(0x12d3112du); f_12d314c0();
  /* 12d3112d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3112f jne 0x12d3113a */
  if (!C.zf) goto L_12d3113a;
  /* 12d31131 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31134 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31137 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3113a:;
  /* 12d3113a jmp 0x12d310d8 */
  goto L_12d310d8;
L_12d3113c:;
  /* 12d3113c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3113f pop edi */
  EDI = (pop32());
  /* 12d31140 pop esi */
  ESI = (pop32());
  /* 12d31141 pop ebx */
  EBX = (pop32());
  /* 12d31142 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31145 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31147 call 0x12d314c0 */
  push32(0x12d3114cu); f_12d314c0();
  /* 12d3114c mov esp, ebp */
  ESP = (EBP);
  /* 12d3114e pop ebp */
  EBP = (pop32());
  /* 12d3114f ret  */
  ESPCHK(0x12d310b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001180 @ 0x12d31180 (127 bytes, 45 insns) */
void f_12d31180(void) {
  FTRACE(0x12d31180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31180 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31181 mov ebp, esp */
  EBP = (ESP);
  /* 12d31183 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d31186 push ebx */
  push32((uint32_t)(EBX));
  /* 12d31187 push esi */
  push32((uint32_t)(ESI));
  /* 12d31188 push edi */
  push32((uint32_t)(EDI));
  /* 12d31189 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12d3118c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12d31191 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d31196 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d31198 mov esi, esp */
  ESI = (ESP);
  /* 12d3119a call dword ptr [0x12d503a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d503a0))), 0x12d311a0u);
  /* 12d311a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d311a2 call 0x12d314c0 */
  push32(0x12d311a7u); f_12d314c0();
  /* 12d311a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d311aa mov esi, esp */
  ESI = (ESP);
  /* 12d311ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d311af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d311b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d311b5 push edx */
  push32((uint32_t)(EDX));
  /* 12d311b6 call dword ptr [0x12d503a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d503a4))), 0x12d311bcu);
  /* 12d311bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d311bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d311c1 call 0x12d314c0 */
  push32(0x12d311c6u); f_12d314c0();
  /* 12d311c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d311c9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d311cc jne 0x12d311df */
  if (!C.zf) goto L_12d311df;
  /* 12d311ce mov esi, esp */
  ESI = (ESP);
  /* 12d311d0 call dword ptr [0x12d503a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d503a8))), 0x12d311d6u);
  /* 12d311d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d311d8 call 0x12d314c0 */
  push32(0x12d311ddu); f_12d314c0();
  /* 12d311dd jmp 0x12d311ee */
  goto L_12d311ee;
L_12d311df:;
  /* 12d311df mov esi, esp */
  ESI = (ESP);
  /* 12d311e1 call dword ptr [0x12d503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d503ac))), 0x12d311e7u);
  /* 12d311e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d311e9 call 0x12d314c0 */
  push32(0x12d311eeu); f_12d314c0();
L_12d311ee:;
  /* 12d311ee pop edi */
  EDI = (pop32());
  /* 12d311ef pop esi */
  ESI = (pop32());
  /* 12d311f0 pop ebx */
  EBX = (pop32());
  /* 12d311f1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d311f4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d311f6 call 0x12d314c0 */
  push32(0x12d311fbu); f_12d314c0();
  /* 12d311fb mov esp, ebp */
  ESP = (EBP);
  /* 12d311fd pop ebp */
  EBP = (pop32());
  /* 12d311fe ret  */
  ESPCHK(0x12d31180u, _esp0);
  ESP += 4; return;
}

/* FUN_10001220 @ 0x12d31220 (237 bytes, 68 insns) */
void f_12d31220(void) {
  FTRACE(0x12d31220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31220 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31221 mov ebp, esp */
  EBP = (ESP);
  /* 12d31223 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d31226 push ebx */
  push32((uint32_t)(EBX));
  /* 12d31227 push esi */
  push32((uint32_t)(ESI));
  /* 12d31228 push edi */
  push32((uint32_t)(EDI));
  /* 12d31229 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d3122c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d31231 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d31236 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d31238 mov esi, esp */
  ESI = (ESP);
  /* 12d3123a push 0x12d49084 */
  push32((uint32_t)(0x12d49084u));
  /* 12d3123f push 0x12d4e428 */
  push32((uint32_t)(0x12d4e428u));
  /* 12d31244 call dword ptr [0x12d50398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50398))), 0x12d3124au);
  /* 12d3124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3124f call 0x12d314c0 */
  push32(0x12d31254u); f_12d314c0();
  /* 12d31254 mov esi, esp */
  ESI = (ESP);
  /* 12d31256 push 0x12d4907c */
  push32((uint32_t)(0x12d4907cu));
  /* 12d3125b push 0x12d4e430 */
  push32((uint32_t)(0x12d4e430u));
  /* 12d31260 call dword ptr [0x12d50398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50398))), 0x12d31266u);
  /* 12d31266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3126b call 0x12d314c0 */
  push32(0x12d31270u); f_12d314c0();
  /* 12d31270 mov esi, esp */
  ESI = (ESP);
  /* 12d31272 push 0x12d49074 */
  push32((uint32_t)(0x12d49074u));
  /* 12d31277 push 0x12d4e400 */
  push32((uint32_t)(0x12d4e400u));
  /* 12d3127c call dword ptr [0x12d5039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5039c))), 0x12d31282u);
  /* 12d31282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31287 call 0x12d314c0 */
  push32(0x12d3128cu); f_12d314c0();
  /* 12d3128c mov esi, esp */
  ESI = (ESP);
  /* 12d3128e push 0x12d4906c */
  push32((uint32_t)(0x12d4906cu));
  /* 12d31293 push 0x12d4e408 */
  push32((uint32_t)(0x12d4e408u));
  /* 12d31298 call dword ptr [0x12d5039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5039c))), 0x12d3129eu);
  /* 12d3129e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d312a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d312a3 call 0x12d314c0 */
  push32(0x12d312a8u); f_12d314c0();
  /* 12d312a8 mov esi, esp */
  ESI = (ESP);
  /* 12d312aa push 0x12d49064 */
  push32((uint32_t)(0x12d49064u));
  /* 12d312af push 0x12d4e410 */
  push32((uint32_t)(0x12d4e410u));
  /* 12d312b4 call dword ptr [0x12d5039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5039c))), 0x12d312bau);
  /* 12d312ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d312bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d312bf call 0x12d314c0 */
  push32(0x12d312c4u); f_12d314c0();
  /* 12d312c4 mov esi, esp */
  ESI = (ESP);
  /* 12d312c6 push 0x12d4905c */
  push32((uint32_t)(0x12d4905cu));
  /* 12d312cb push 0x12d4e418 */
  push32((uint32_t)(0x12d4e418u));
  /* 12d312d0 call dword ptr [0x12d5039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5039c))), 0x12d312d6u);
  /* 12d312d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d312d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d312db call 0x12d314c0 */
  push32(0x12d312e0u); f_12d314c0();
  /* 12d312e0 mov esi, esp */
  ESI = (ESP);
  /* 12d312e2 push 0x12d49054 */
  push32((uint32_t)(0x12d49054u));
  /* 12d312e7 push 0x12d4e420 */
  push32((uint32_t)(0x12d4e420u));
  /* 12d312ec call dword ptr [0x12d5039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5039c))), 0x12d312f2u);
  /* 12d312f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d312f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d312f7 call 0x12d314c0 */
  push32(0x12d312fcu); f_12d314c0();
  /* 12d312fc pop edi */
  EDI = (pop32());
  /* 12d312fd pop esi */
  ESI = (pop32());
  /* 12d312fe pop ebx */
  EBX = (pop32());
  /* 12d312ff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31302 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31304 call 0x12d314c0 */
  push32(0x12d31309u); f_12d314c0();
  /* 12d31309 mov esp, ebp */
  ESP = (EBP);
  /* 12d3130b pop ebp */
  EBP = (pop32());
  /* 12d3130c ret  */
  ESPCHK(0x12d31220u, _esp0);
  ESP += 4; return;
}

/* FUN_10001350 @ 0x12d31350 (46 bytes, 20 insns) */
void f_12d31350(void) {
  FTRACE(0x12d31350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31350 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31351 mov ebp, esp */
  EBP = (ESP);
  /* 12d31353 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d31356 push ebx */
  push32((uint32_t)(EBX));
  /* 12d31357 push esi */
  push32((uint32_t)(ESI));
  /* 12d31358 push edi */
  push32((uint32_t)(EDI));
  /* 12d31359 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d3135c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d31361 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d31366 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d31368 call 0x12d31023 */
  push32(0x12d3136du); f_12d31023();
  /* 12d3136d pop edi */
  EDI = (pop32());
  /* 12d3136e pop esi */
  ESI = (pop32());
  /* 12d3136f pop ebx */
  EBX = (pop32());
  /* 12d31370 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31373 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31375 call 0x12d314c0 */
  push32(0x12d3137au); f_12d314c0();
  /* 12d3137a mov esp, ebp */
  ESP = (EBP);
  /* 12d3137c pop ebp */
  EBP = (pop32());
  /* 12d3137d ret  */
  ESPCHK(0x12d31350u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x12d31390 (139 bytes, 47 insns) */
void f_12d31390(void) {
  FTRACE(0x12d31390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31390 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31391 mov ebp, esp */
  EBP = (ESP);
  /* 12d31393 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d31396 push ebx */
  push32((uint32_t)(EBX));
  /* 12d31397 push esi */
  push32((uint32_t)(ESI));
  /* 12d31398 push edi */
  push32((uint32_t)(EDI));
  /* 12d31399 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d3139c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d313a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d313a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d313a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d313aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d313ac call 0x12d3101e */
  push32(0x12d313b1u); f_12d3101e();
  /* 12d313b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d313b4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d313b7 jle 0x12d313c8 */
  if ((C.zf||C.sf!=C.of)) goto L_12d313c8;
  /* 12d313b9 push 0x12d4ca40 */
  push32((uint32_t)(0x12d4ca40u));
  /* 12d313be push 0 */
  push32((uint32_t)(0x0u));
  /* 12d313c0 call 0x12d31014 */
  push32(0x12d313c5u); f_12d31014();
  /* 12d313c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d313c8:;
  /* 12d313c8 push 0x12d4e428 */
  push32((uint32_t)(0x12d4e428u));
  /* 12d313cd call 0x12d31005 */
  push32(0x12d313d2u); f_12d31005();
  /* 12d313d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d313d5 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d313d8 jge 0x12d313e9 */
  if ((C.sf==C.of)) goto L_12d313e9;
  /* 12d313da push 0x12d4ca30 */
  push32((uint32_t)(0x12d4ca30u));
  /* 12d313df push 1 */
  push32((uint32_t)(0x1u));
  /* 12d313e1 call 0x12d31014 */
  push32(0x12d313e6u); f_12d31014();
  /* 12d313e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d313e9:;
  /* 12d313e9 push 0x12d4e430 */
  push32((uint32_t)(0x12d4e430u));
  /* 12d313ee call 0x12d31005 */
  push32(0x12d313f3u); f_12d31005();
  /* 12d313f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d313f6 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d313f9 jge 0x12d3140a */
  if ((C.sf==C.of)) goto L_12d3140a;
  /* 12d313fb push 0x12d4ca38 */
  push32((uint32_t)(0x12d4ca38u));
  /* 12d31400 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31402 call 0x12d31014 */
  push32(0x12d31407u); f_12d31014();
  /* 12d31407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3140a:;
  /* 12d3140a pop edi */
  EDI = (pop32());
  /* 12d3140b pop esi */
  ESI = (pop32());
  /* 12d3140c pop ebx */
  EBX = (pop32());
  /* 12d3140d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31410 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31412 call 0x12d314c0 */
  push32(0x12d31417u); f_12d314c0();
  /* 12d31417 mov esp, ebp */
  ESP = (EBP);
  /* 12d31419 pop ebp */
  EBP = (pop32());
  /* 12d3141a ret  */
  ESPCHK(0x12d31390u, _esp0);
  ESP += 4; return;
}

/* FUN_10001440 @ 0x12d31440 (63 bytes, 26 insns) */
void f_12d31440(void) {
  FTRACE(0x12d31440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31440 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31441 mov ebp, esp */
  EBP = (ESP);
  /* 12d31443 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d31446 push ebx */
  push32((uint32_t)(EBX));
  /* 12d31447 push esi */
  push32((uint32_t)(ESI));
  /* 12d31448 push edi */
  push32((uint32_t)(EDI));
  /* 12d31449 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d3144c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d31451 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d31456 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d31458 mov esi, esp */
  ESI = (ESP);
  /* 12d3145a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3145d push eax */
  push32((uint32_t)(EAX));
  /* 12d3145e call dword ptr [0x12d50394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50394))), 0x12d31464u);
  /* 12d31464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31467 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31469 call 0x12d314c0 */
  push32(0x12d3146eu); f_12d314c0();
  /* 12d3146e pop edi */
  EDI = (pop32());
  /* 12d3146f pop esi */
  ESI = (pop32());
  /* 12d31470 pop ebx */
  EBX = (pop32());
  /* 12d31471 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31474 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31476 call 0x12d314c0 */
  push32(0x12d3147bu); f_12d314c0();
  /* 12d3147b mov esp, ebp */
  ESP = (EBP);
  /* 12d3147d pop ebp */
  EBP = (pop32());
  /* 12d3147e ret  */
  ESPCHK(0x12d31440u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12d314c0 (56 bytes, 28 insns) */
void f_12d314c0(void) {
  FTRACE(0x12d314c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d314c0 jne 0x12d314c3 */
  if (!C.zf) goto L_12d314c3;
  /* 12d314c2 ret  */
  ESPCHK(0x12d314c0u, _esp0);
  ESP += 4; return;
L_12d314c3:;
  /* 12d314c3 push ebp */
  push32((uint32_t)(EBP));
  /* 12d314c4 mov ebp, esp */
  EBP = (ESP);
  /* 12d314c6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d314c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d314ca push edx */
  push32((uint32_t)(EDX));
  /* 12d314cb push ebx */
  push32((uint32_t)(EBX));
  /* 12d314cc push esi */
  push32((uint32_t)(ESI));
  /* 12d314cd push edi */
  push32((uint32_t)(EDI));
  /* 12d314ce push 0x12d490a0 */
  push32((uint32_t)(0x12d490a0u));
  /* 12d314d3 push 0x12d4909c */
  push32((uint32_t)(0x12d4909cu));
  /* 12d314d8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12d314da push 0x12d4908c */
  push32((uint32_t)(0x12d4908cu));
  /* 12d314df push 1 */
  push32((uint32_t)(0x1u));
  /* 12d314e1 call 0x12d31890 */
  push32(0x12d314e6u); f_12d31890();
  /* 12d314e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d314e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d314ec jne 0x12d314ef */
  if (!C.zf) goto L_12d314ef;
  /* 12d314ee int3  */
  x86_unimpl("int3 @ 0x12d314ee");
L_12d314ef:;
  /* 12d314ef pop edi */
  EDI = (pop32());
  /* 12d314f0 pop esi */
  ESI = (pop32());
  /* 12d314f1 pop ebx */
  EBX = (pop32());
  /* 12d314f2 pop edx */
  EDX = (pop32());
  /* 12d314f3 pop eax */
  EAX = (pop32());
  /* 12d314f4 mov esp, ebp */
  ESP = (EBP);
  /* 12d314f6 pop ebp */
  EBP = (pop32());
  /* 12d314f7 ret  */
  ESPCHK(0x12d314c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001500 @ 0x12d31500 (313 bytes, 78 insns) */
void f_12d31500(void) {
  FTRACE(0x12d31500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31500 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31501 mov ebp, esp */
  EBP = (ESP);
  /* 12d31503 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31507 jne 0x12d315c7 */
  if (!C.zf) goto L_12d315c7;
  /* 12d3150d call dword ptr [0x12d50234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50234))), 0x12d31513u);
  /* 12d31513 mov dword ptr [0x12d4e464], eax */
  w32((uint32_t)(0x12d4e464), (EAX));
  /* 12d31518 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3151a call 0x12d34fc0 */
  push32(0x12d3151fu); f_12d34fc0();
  /* 12d3151f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31524 jne 0x12d3152d */
  if (!C.zf) goto L_12d3152d;
  /* 12d31526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d31528 jmp 0x12d31635 */
  goto L_12d31635;
L_12d3152d:;
  /* 12d3152d mov eax, dword ptr [0x12d4e464] */
  EAX = (r32((uint32_t)(0x12d4e464)));
  /* 12d31532 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d31535 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3153a mov dword ptr [0x12d4e470], eax */
  w32((uint32_t)(0x12d4e470), (EAX));
  /* 12d3153f mov ecx, dword ptr [0x12d4e464] */
  ECX = (r32((uint32_t)(0x12d4e464)));
  /* 12d31545 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3154b mov dword ptr [0x12d4e46c], ecx */
  w32((uint32_t)(0x12d4e46c), (ECX));
  /* 12d31551 mov edx, dword ptr [0x12d4e46c] */
  EDX = (r32((uint32_t)(0x12d4e46c)));
  /* 12d31557 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d3155a add edx, dword ptr [0x12d4e470] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4e470))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31560 mov dword ptr [0x12d4e468], edx */
  w32((uint32_t)(0x12d4e468), (EDX));
  /* 12d31566 mov eax, dword ptr [0x12d4e464] */
  EAX = (r32((uint32_t)(0x12d4e464)));
  /* 12d3156b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d3156e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d31573 mov dword ptr [0x12d4e464], eax */
  w32((uint32_t)(0x12d4e464), (EAX));
  /* 12d31578 call 0x12d32130 */
  push32(0x12d3157du); f_12d32130();
  /* 12d3157d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3157f jne 0x12d3158d */
  if (!C.zf) goto L_12d3158d;
  /* 12d31581 call 0x12d35010 */
  push32(0x12d31586u); f_12d35010();
  /* 12d31586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d31588 jmp 0x12d31635 */
  goto L_12d31635;
L_12d3158d:;
  /* 12d3158d call dword ptr [0x12d50230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50230))), 0x12d31593u);
  /* 12d31593 mov dword ptr [0x12d4ffac], eax */
  w32((uint32_t)(0x12d4ffac), (EAX));
  /* 12d31598 call 0x12d34da0 */
  push32(0x12d3159du); f_12d34da0();
  /* 12d3159d mov dword ptr [0x12d4e44c], eax */
  w32((uint32_t)(0x12d4e44c), (EAX));
  /* 12d315a2 call 0x12d323e0 */
  push32(0x12d315a7u); f_12d323e0();
  /* 12d315a7 call 0x12d34890 */
  push32(0x12d315acu); f_12d34890();
  /* 12d315ac call 0x12d34740 */
  push32(0x12d315b1u); f_12d34740();
  /* 12d315b1 call 0x12d31f30 */
  push32(0x12d315b6u); f_12d31f30();
  /* 12d315b6 mov ecx, dword ptr [0x12d4e448] */
  ECX = (r32((uint32_t)(0x12d4e448)));
  /* 12d315bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d315bf mov dword ptr [0x12d4e448], ecx */
  w32((uint32_t)(0x12d4e448), (ECX));
  /* 12d315c5 jmp 0x12d31630 */
  goto L_12d31630;
L_12d315c7:;
  /* 12d315c7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d315cb jne 0x12d31620 */
  if (!C.zf) goto L_12d31620;
  /* 12d315cd cmp dword ptr [0x12d4e448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d315d4 jle 0x12d3161a */
  if ((C.zf||C.sf!=C.of)) goto L_12d3161a;
  /* 12d315d6 mov edx, dword ptr [0x12d4e448] */
  EDX = (r32((uint32_t)(0x12d4e448)));
  /* 12d315dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d315df mov dword ptr [0x12d4e448], edx */
  w32((uint32_t)(0x12d4e448), (EDX));
  /* 12d315e5 cmp dword ptr [0x12d4e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d315ec jne 0x12d315f3 */
  if (!C.zf) goto L_12d315f3;
  /* 12d315ee call 0x12d31fb0 */
  push32(0x12d315f3u); f_12d31fb0();
L_12d315f3:;
  /* 12d315f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d315f5 call 0x12d33ce0 */
  push32(0x12d315fau); f_12d33ce0();
  /* 12d315fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d315fd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d31600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31602 je 0x12d31609 */
  if (C.zf) goto L_12d31609;
  /* 12d31604 call 0x12d345f0 */
  push32(0x12d31609u); f_12d345f0();
L_12d31609:;
  /* 12d31609 call 0x12d32710 */
  push32(0x12d3160eu); f_12d32710();
  /* 12d3160e call 0x12d321c0 */
  push32(0x12d31613u); f_12d321c0();
  /* 12d31613 call 0x12d35010 */
  push32(0x12d31618u); f_12d35010();
  /* 12d31618 jmp 0x12d3161e */
  goto L_12d3161e;
L_12d3161a:;
  /* 12d3161a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3161c jmp 0x12d31635 */
  goto L_12d31635;
L_12d3161e:;
  /* 12d3161e jmp 0x12d31630 */
  goto L_12d31630;
L_12d31620:;
  /* 12d31620 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31624 jne 0x12d31630 */
  if (!C.zf) goto L_12d31630;
  /* 12d31626 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31628 call 0x12d322b0 */
  push32(0x12d3162du); f_12d322b0();
  /* 12d3162d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31630:;
  /* 12d31630 mov eax, 1 */
  EAX = (0x1u);
L_12d31635:;
  /* 12d31635 pop ebp */
  EBP = (pop32());
  /* 12d31636 ret 0xc */
  ESPCHK(0x12d31500u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12d31640 (243 bytes, 86 insns) */
void f_12d31640(void) {
  FTRACE(0x12d31640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31640 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31641 mov ebp, esp */
  EBP = (ESP);
  /* 12d31643 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31644 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d3164b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3164f jne 0x12d31661 */
  if (!C.zf) goto L_12d31661;
  /* 12d31651 cmp dword ptr [0x12d4e448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31658 jne 0x12d31661 */
  if (!C.zf) goto L_12d31661;
  /* 12d3165a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3165c jmp 0x12d3172d */
  goto L_12d3172d;
L_12d31661:;
  /* 12d31661 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31665 je 0x12d3166d */
  if (C.zf) goto L_12d3166d;
  /* 12d31667 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3166b jne 0x12d316af */
  if (!C.zf) goto L_12d316af;
L_12d3166d:;
  /* 12d3166d cmp dword ptr [0x12d4ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31674 je 0x12d3168b */
  if (C.zf) goto L_12d3168b;
  /* 12d31676 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31679 push eax */
  push32((uint32_t)(EAX));
  /* 12d3167a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3167d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3167e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31681 push edx */
  push32((uint32_t)(EDX));
  /* 12d31682 call dword ptr [0x12d4ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ffbc))), 0x12d31688u);
  /* 12d31688 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3168b:;
  /* 12d3168b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3168f je 0x12d316a5 */
  if (C.zf) goto L_12d316a5;
  /* 12d31691 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31694 push eax */
  push32((uint32_t)(EAX));
  /* 12d31695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d31698 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3169c push edx */
  push32((uint32_t)(EDX));
  /* 12d3169d call 0x12d31500 */
  push32(0x12d316a2u); f_12d31500();
  /* 12d316a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d316a5:;
  /* 12d316a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d316a9 jne 0x12d316af */
  if (!C.zf) goto L_12d316af;
  /* 12d316ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d316ad jmp 0x12d3172d */
  goto L_12d3172d;
L_12d316af:;
  /* 12d316af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d316b2 push eax */
  push32((uint32_t)(EAX));
  /* 12d316b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d316b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d316b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d316ba push edx */
  push32((uint32_t)(EDX));
  /* 12d316bb call 0x12d3100f */
  push32(0x12d316c0u); f_12d3100f();
  /* 12d316c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d316c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d316c7 jne 0x12d316de */
  if (!C.zf) goto L_12d316de;
  /* 12d316c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d316cd jne 0x12d316de */
  if (!C.zf) goto L_12d316de;
  /* 12d316cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d316d2 push eax */
  push32((uint32_t)(EAX));
  /* 12d316d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d316d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d316d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d316d9 call 0x12d31500 */
  push32(0x12d316deu); f_12d31500();
L_12d316de:;
  /* 12d316de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d316e2 je 0x12d316ea */
  if (C.zf) goto L_12d316ea;
  /* 12d316e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d316e8 jne 0x12d3172a */
  if (!C.zf) goto L_12d3172a;
L_12d316ea:;
  /* 12d316ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d316ed push edx */
  push32((uint32_t)(EDX));
  /* 12d316ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d316f1 push eax */
  push32((uint32_t)(EAX));
  /* 12d316f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d316f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d316f6 call 0x12d31500 */
  push32(0x12d316fbu); f_12d31500();
  /* 12d316fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d316fd jne 0x12d31706 */
  if (!C.zf) goto L_12d31706;
  /* 12d316ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d31706:;
  /* 12d31706 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3170a je 0x12d3172a */
  if (C.zf) goto L_12d3172a;
  /* 12d3170c cmp dword ptr [0x12d4ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31713 je 0x12d3172a */
  if (C.zf) goto L_12d3172a;
  /* 12d31715 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31718 push edx */
  push32((uint32_t)(EDX));
  /* 12d31719 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3171c push eax */
  push32((uint32_t)(EAX));
  /* 12d3171d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31720 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31721 call dword ptr [0x12d4ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ffbc))), 0x12d31727u);
  /* 12d31727 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3172a:;
  /* 12d3172a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3172d:;
  /* 12d3172d mov esp, ebp */
  ESP = (EBP);
  /* 12d3172f pop ebp */
  EBP = (pop32());
  /* 12d31730 ret 0xc */
  ESPCHK(0x12d31640u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12d31740 (58 bytes, 18 insns) */
void f_12d31740(void) {
  FTRACE(0x12d31740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31740 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31741 mov ebp, esp */
  EBP = (ESP);
  /* 12d31743 cmp dword ptr [0x12d4e454], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e454))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3174a je 0x12d3175e */
  if (C.zf) goto L_12d3175e;
  /* 12d3174c cmp dword ptr [0x12d4e454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31753 jne 0x12d31763 */
  if (!C.zf) goto L_12d31763;
  /* 12d31755 cmp dword ptr [0x12d4e458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3175c jne 0x12d31763 */
  if (!C.zf) goto L_12d31763;
L_12d3175e:;
  /* 12d3175e call 0x12d350b0 */
  push32(0x12d31763u); f_12d350b0();
L_12d31763:;
  /* 12d31763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31766 push eax */
  push32((uint32_t)(EAX));
  /* 12d31767 call 0x12d35100 */
  push32(0x12d3176cu); f_12d35100();
  /* 12d3176c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3176f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d31774 call dword ptr [0x12d4ca4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ca4c))), 0x12d3177au);
  /* 12d3177a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3177d pop ebp */
  EBP = (pop32());
  /* 12d3177e ret  */
  ESPCHK(0x12d31740u, _esp0);
  ESP += 4; return;
}

/* FUN_10001780 @ 0x12d31780 (11 bytes, 5 insns) */
void f_12d31780(void) {
  FTRACE(0x12d31780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31781 mov ebp, esp */
  EBP = (ESP);
  /* 12d31783 call dword ptr [0x12d50238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50238))), 0x12d31789u);
  /* 12d31789 pop ebp */
  EBP = (pop32());
  /* 12d3178a ret  */
  ESPCHK(0x12d31780u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x12d31790 (87 bytes, 30 insns) */
void f_12d31790(void) {
  FTRACE(0x12d31790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31790 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31791 mov ebp, esp */
  EBP = (ESP);
  /* 12d31793 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31794 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31798 jl 0x12d317a0 */
  if ((C.sf!=C.of)) goto L_12d317a0;
  /* 12d3179a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3179e jl 0x12d317a5 */
  if ((C.sf!=C.of)) goto L_12d317a5;
L_12d317a0:;
  /* 12d317a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d317a3 jmp 0x12d317e3 */
  goto L_12d317e3;
L_12d317a5:;
  /* 12d317a5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d317a9 jne 0x12d317b7 */
  if (!C.zf) goto L_12d317b7;
  /* 12d317ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d317ae mov eax, dword ptr [eax*4 + 0x12d4ca54] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d4ca54)));
  /* 12d317b5 jmp 0x12d317e3 */
  goto L_12d317e3;
L_12d317b7:;
  /* 12d317b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d317ba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d317bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d317bf je 0x12d317c6 */
  if (C.zf) goto L_12d317c6;
  /* 12d317c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d317c4 jmp 0x12d317e3 */
  goto L_12d317e3;
L_12d317c6:;
  /* 12d317c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d317c9 mov eax, dword ptr [edx*4 + 0x12d4ca54] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4ca54)));
  /* 12d317d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d317d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d317d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d317d9 mov dword ptr [ecx*4 + 0x12d4ca54], edx */
  w32((uint32_t)(ECX*4 + 0x12d4ca54), (EDX));
  /* 12d317e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d317e3:;
  /* 12d317e3 mov esp, ebp */
  ESP = (EBP);
  /* 12d317e5 pop ebp */
  EBP = (pop32());
  /* 12d317e6 ret  */
  ESPCHK(0x12d31790u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12d317f0 (126 bytes, 38 insns) */
void f_12d317f0(void) {
  FTRACE(0x12d317f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d317f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d317f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d317f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d317f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d317f8 jl 0x12d31800 */
  if ((C.sf!=C.of)) goto L_12d31800;
  /* 12d317fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d317fe jl 0x12d31807 */
  if ((C.sf!=C.of)) goto L_12d31807;
L_12d31800:;
  /* 12d31800 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12d31805 jmp 0x12d3186a */
  goto L_12d3186a;
L_12d31807:;
  /* 12d31807 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3180b jne 0x12d31819 */
  if (!C.zf) goto L_12d31819;
  /* 12d3180d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31810 mov eax, dword ptr [eax*4 + 0x12d4ca60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d4ca60)));
  /* 12d31817 jmp 0x12d3186a */
  goto L_12d3186a;
L_12d31819:;
  /* 12d31819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3181c mov edx, dword ptr [ecx*4 + 0x12d4ca60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4ca60)));
  /* 12d31823 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d31826 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3182a jne 0x12d31840 */
  if (!C.zf) goto L_12d31840;
  /* 12d3182c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d3182e call dword ptr [0x12d5023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5023c))), 0x12d31834u);
  /* 12d31834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31837 mov dword ptr [ecx*4 + 0x12d4ca60], eax */
  w32((uint32_t)(ECX*4 + 0x12d4ca60), (EAX));
  /* 12d3183e jmp 0x12d31867 */
  goto L_12d31867;
L_12d31840:;
  /* 12d31840 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31844 jne 0x12d3185a */
  if (!C.zf) goto L_12d3185a;
  /* 12d31846 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d31848 call dword ptr [0x12d5023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5023c))), 0x12d3184eu);
  /* 12d3184e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31851 mov dword ptr [edx*4 + 0x12d4ca60], eax */
  w32((uint32_t)(EDX*4 + 0x12d4ca60), (EAX));
  /* 12d31858 jmp 0x12d31867 */
  goto L_12d31867;
L_12d3185a:;
  /* 12d3185a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3185d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d31860 mov dword ptr [eax*4 + 0x12d4ca60], ecx */
  w32((uint32_t)(EAX*4 + 0x12d4ca60), (ECX));
L_12d31867:;
  /* 12d31867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3186a:;
  /* 12d3186a mov esp, ebp */
  ESP = (EBP);
  /* 12d3186c pop ebp */
  EBP = (pop32());
  /* 12d3186d ret  */
  ESPCHK(0x12d317f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x12d31870 (28 bytes, 11 insns) */
void f_12d31870(void) {
  FTRACE(0x12d31870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31870 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31871 mov ebp, esp */
  EBP = (ESP);
  /* 12d31873 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31874 mov eax, dword ptr [0x12d4ffa0] */
  EAX = (r32((uint32_t)(0x12d4ffa0)));
  /* 12d31879 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3187c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3187f mov dword ptr [0x12d4ffa0], ecx */
  w32((uint32_t)(0x12d4ffa0), (ECX));
  /* 12d31885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31888 mov esp, ebp */
  ESP = (EBP);
  /* 12d3188a pop ebp */
  EBP = (pop32());
  /* 12d3188b ret  */
  ESPCHK(0x12d31870u, _esp0);
  ESP += 4; return;
}

/* FUN_10001890 @ 0x12d31890 (912 bytes, 248 insns) */
void f_12d31890(void) {
  FTRACE(0x12d31890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31890 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31891 mov ebp, esp */
  EBP = (ESP);
  /* 12d31893 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12d31898 call 0x12d35970 */
  push32(0x12d3189du); f_12d35970();
  /* 12d3189d push edi */
  push32((uint32_t)(EDI));
  /* 12d3189e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12d318a5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d318aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d318ac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12d318b2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d318b4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d318b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d318b7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12d318be mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d318c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d318c5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12d318cb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d318cd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d318cf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d318d0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12d318d7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d318dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d318de lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12d318e4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d318e6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d318e8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d318e9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12d318ec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12d318f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d318f6 jl 0x12d318fe */
  if ((C.sf!=C.of)) goto L_12d318fe;
  /* 12d318f8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d318fc jl 0x12d31906 */
  if ((C.sf!=C.of)) goto L_12d31906;
L_12d318fe:;
  /* 12d318fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d31901 jmp 0x12d31c1b */
  goto L_12d31c1b;
L_12d31906:;
  /* 12d31906 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3190a jne 0x12d319b0 */
  if (!C.zf) goto L_12d319b0;
  /* 12d31910 push 0x12d4ca50 */
  push32((uint32_t)(0x12d4ca50u));
  /* 12d31915 call dword ptr [0x12d50254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50254))), 0x12d3191bu);
  /* 12d3191b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3191d jle 0x12d319b0 */
  if ((C.zf||C.sf!=C.of)) goto L_12d319b0;
  /* 12d31923 cmp dword ptr [0x12d4e45c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e45c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3192a jne 0x12d3196e */
  if (!C.zf) goto L_12d3196e;
  /* 12d3192c push 0x12d49248 */
  push32((uint32_t)(0x12d49248u));
  /* 12d31931 call dword ptr [0x12d50250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50250))), 0x12d31937u);
  /* 12d31937 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12d3193d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31944 je 0x12d31966 */
  if (C.zf) goto L_12d31966;
  /* 12d31946 push 0x12d4923c */
  push32((uint32_t)(0x12d4923cu));
  /* 12d3194b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12d31951 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31952 call dword ptr [0x12d5024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5024c))), 0x12d31958u);
  /* 12d31958 mov dword ptr [0x12d4e45c], eax */
  w32((uint32_t)(0x12d4e45c), (EAX));
  /* 12d3195d cmp dword ptr [0x12d4e45c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e45c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31964 jne 0x12d3196e */
  if (!C.zf) goto L_12d3196e;
L_12d31966:;
  /* 12d31966 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d31969 jmp 0x12d31c1b */
  goto L_12d31c1b;
L_12d3196e:;
  /* 12d3196e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31971 push edx */
  push32((uint32_t)(EDX));
  /* 12d31972 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d31975 push eax */
  push32((uint32_t)(EAX));
  /* 12d31976 push 0x12d49208 */
  push32((uint32_t)(0x12d49208u));
  /* 12d3197b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12d31981 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31982 call dword ptr [0x12d4e45c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e45c))), 0x12d31988u);
  /* 12d31988 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3198b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d31991 push edx */
  push32((uint32_t)(EDX));
  /* 12d31992 call dword ptr [0x12d50248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50248))), 0x12d31998u);
  /* 12d31998 push 0x12d4ca50 */
  push32((uint32_t)(0x12d4ca50u));
  /* 12d3199d call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d319a3u);
  /* 12d319a3 call 0x12d31780 */
  push32(0x12d319a8u); f_12d31780();
  /* 12d319a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d319ab jmp 0x12d31c1b */
  goto L_12d31c1b;
L_12d319b0:;
  /* 12d319b0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d319b4 je 0x12d319ed */
  if (C.zf) goto L_12d319ed;
  /* 12d319b6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12d319bc push eax */
  push32((uint32_t)(EAX));
  /* 12d319bd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d319c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d319c1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12d319c6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12d319cc push edx */
  push32((uint32_t)(EDX));
  /* 12d319cd call 0x12d35870 */
  push32(0x12d319d2u); f_12d35870();
  /* 12d319d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d319d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d319d7 jge 0x12d319ed */
  if ((C.sf==C.of)) goto L_12d319ed;
  /* 12d319d9 push 0x12d491dc */
  push32((uint32_t)(0x12d491dcu));
  /* 12d319de lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12d319e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d319e5 call 0x12d35780 */
  push32(0x12d319eau); f_12d35780();
  /* 12d319ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d319ed:;
  /* 12d319ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d319f1 jne 0x12d31a25 */
  if (!C.zf) goto L_12d31a25;
  /* 12d319f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d319f7 je 0x12d31a05 */
  if (C.zf) goto L_12d31a05;
  /* 12d319f9 mov dword ptr [ebp - 0x3028], 0x12d491c8 */
  w32((uint32_t)(EBP + -0x3028), (0x12d491c8u));
  /* 12d31a03 jmp 0x12d31a0f */
  goto L_12d31a0f;
L_12d31a05:;
  /* 12d31a05 mov dword ptr [ebp - 0x3028], 0x12d491b4 */
  w32((uint32_t)(EBP + -0x3028), (0x12d491b4u));
L_12d31a0f:;
  /* 12d31a0f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12d31a15 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31a16 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d31a1c push edx */
  push32((uint32_t)(EDX));
  /* 12d31a1d call 0x12d35780 */
  push32(0x12d31a22u); f_12d35780();
  /* 12d31a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31a25:;
  /* 12d31a25 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12d31a2b push eax */
  push32((uint32_t)(EAX));
  /* 12d31a2c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12d31a32 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31a33 call 0x12d35790 */
  push32(0x12d31a38u); f_12d35790();
  /* 12d31a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31a3b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31a3f jne 0x12d31a7a */
  if (!C.zf) goto L_12d31a7a;
  /* 12d31a41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31a44 mov eax, dword ptr [edx*4 + 0x12d4ca54] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4ca54)));
  /* 12d31a4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d31a4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31a50 je 0x12d31a66 */
  if (C.zf) goto L_12d31a66;
  /* 12d31a52 push 0x12d491b0 */
  push32((uint32_t)(0x12d491b0u));
  /* 12d31a57 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12d31a5d push ecx */
  push32((uint32_t)(ECX));
  /* 12d31a5e call 0x12d35790 */
  push32(0x12d31a63u); f_12d35790();
  /* 12d31a63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31a66:;
  /* 12d31a66 push 0x12d491ac */
  push32((uint32_t)(0x12d491acu));
  /* 12d31a6b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d31a71 push edx */
  push32((uint32_t)(EDX));
  /* 12d31a72 call 0x12d35790 */
  push32(0x12d31a77u); f_12d35790();
  /* 12d31a77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31a7a:;
  /* 12d31a7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31a7e je 0x12d31ac2 */
  if (C.zf) goto L_12d31ac2;
  /* 12d31a80 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12d31a86 push eax */
  push32((uint32_t)(EAX));
  /* 12d31a87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31a8a push ecx */
  push32((uint32_t)(ECX));
  /* 12d31a8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d31a8e push edx */
  push32((uint32_t)(EDX));
  /* 12d31a8f push 0x12d491a0 */
  push32((uint32_t)(0x12d491a0u));
  /* 12d31a94 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d31a99 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d31a9f push eax */
  push32((uint32_t)(EAX));
  /* 12d31aa0 call 0x12d35680 */
  push32(0x12d31aa5u); f_12d35680();
  /* 12d31aa5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31aaa jge 0x12d31ac0 */
  if ((C.sf==C.of)) goto L_12d31ac0;
  /* 12d31aac push 0x12d491dc */
  push32((uint32_t)(0x12d491dcu));
  /* 12d31ab1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12d31ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31ab8 call 0x12d35780 */
  push32(0x12d31abdu); f_12d35780();
  /* 12d31abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31ac0:;
  /* 12d31ac0 jmp 0x12d31ad8 */
  goto L_12d31ad8;
L_12d31ac2:;
  /* 12d31ac2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d31ac8 push edx */
  push32((uint32_t)(EDX));
  /* 12d31ac9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d31acf push eax */
  push32((uint32_t)(EAX));
  /* 12d31ad0 call 0x12d35780 */
  push32(0x12d31ad5u); f_12d35780();
  /* 12d31ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31ad8:;
  /* 12d31ad8 cmp dword ptr [0x12d4ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31adf je 0x12d31b1c */
  if (C.zf) goto L_12d31b1c;
  /* 12d31ae1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12d31ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31ae8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d31aee push edx */
  push32((uint32_t)(EDX));
  /* 12d31aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31af2 push eax */
  push32((uint32_t)(EAX));
  /* 12d31af3 call dword ptr [0x12d4ffa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ffa0))), 0x12d31af9u);
  /* 12d31af9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31afe je 0x12d31b1c */
  if (C.zf) goto L_12d31b1c;
  /* 12d31b00 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31b04 jne 0x12d31b11 */
  if (!C.zf) goto L_12d31b11;
  /* 12d31b06 push 0x12d4ca50 */
  push32((uint32_t)(0x12d4ca50u));
  /* 12d31b0b call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d31b11u);
L_12d31b11:;
  /* 12d31b11 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12d31b17 jmp 0x12d31c1b */
  goto L_12d31c1b;
L_12d31b1c:;
  /* 12d31b1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31b1f mov edx, dword ptr [ecx*4 + 0x12d4ca54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4ca54)));
  /* 12d31b26 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d31b29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d31b2b je 0x12d31b6b */
  if (C.zf) goto L_12d31b6b;
  /* 12d31b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31b30 cmp dword ptr [eax*4 + 0x12d4ca60], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12d4ca60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31b38 je 0x12d31b6b */
  if (C.zf) goto L_12d31b6b;
  /* 12d31b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31b3c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12d31b42 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31b43 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d31b49 push edx */
  push32((uint32_t)(EDX));
  /* 12d31b4a call 0x12d35600 */
  push32(0x12d31b4fu); f_12d35600();
  /* 12d31b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31b52 push eax */
  push32((uint32_t)(EAX));
  /* 12d31b53 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d31b59 push eax */
  push32((uint32_t)(EAX));
  /* 12d31b5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31b5d mov edx, dword ptr [ecx*4 + 0x12d4ca60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4ca60)));
  /* 12d31b64 push edx */
  push32((uint32_t)(EDX));
  /* 12d31b65 call dword ptr [0x12d50240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50240))), 0x12d31b6bu);
L_12d31b6b:;
  /* 12d31b6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31b6e mov ecx, dword ptr [eax*4 + 0x12d4ca54] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4ca54)));
  /* 12d31b75 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d31b78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d31b7a je 0x12d31b89 */
  if (C.zf) goto L_12d31b89;
  /* 12d31b7c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d31b82 push edx */
  push32((uint32_t)(EDX));
  /* 12d31b83 call dword ptr [0x12d50248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50248))), 0x12d31b89u);
L_12d31b89:;
  /* 12d31b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31b8c mov ecx, dword ptr [eax*4 + 0x12d4ca54] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4ca54)));
  /* 12d31b93 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d31b96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d31b98 je 0x12d31c08 */
  if (C.zf) goto L_12d31c08;
  /* 12d31b9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31b9e je 0x12d31bbd */
  if (C.zf) goto L_12d31bbd;
  /* 12d31ba0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d31ba2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12d31ba8 push edx */
  push32((uint32_t)(EDX));
  /* 12d31ba9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31bac push eax */
  push32((uint32_t)(EAX));
  /* 12d31bad call 0x12d35310 */
  push32(0x12d31bb2u); f_12d35310();
  /* 12d31bb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31bb5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12d31bbb jmp 0x12d31bc7 */
  goto L_12d31bc7;
L_12d31bbd:;
  /* 12d31bbd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12d31bc7:;
  /* 12d31bc7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12d31bcd push ecx */
  push32((uint32_t)(ECX));
  /* 12d31bce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d31bd1 push edx */
  push32((uint32_t)(EDX));
  /* 12d31bd2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12d31bd8 push eax */
  push32((uint32_t)(EAX));
  /* 12d31bd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d31bdc push ecx */
  push32((uint32_t)(ECX));
  /* 12d31bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31be0 push edx */
  push32((uint32_t)(EDX));
  /* 12d31be1 call 0x12d31c20 */
  push32(0x12d31be6u); f_12d31c20();
  /* 12d31be6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31be9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12d31bef cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31bf3 jne 0x12d31c00 */
  if (!C.zf) goto L_12d31c00;
  /* 12d31bf5 push 0x12d4ca50 */
  push32((uint32_t)(0x12d4ca50u));
  /* 12d31bfa call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d31c00u);
L_12d31c00:;
  /* 12d31c00 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12d31c06 jmp 0x12d31c1b */
  goto L_12d31c1b;
L_12d31c08:;
  /* 12d31c08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31c0c jne 0x12d31c19 */
  if (!C.zf) goto L_12d31c19;
  /* 12d31c0e push 0x12d4ca50 */
  push32((uint32_t)(0x12d4ca50u));
  /* 12d31c13 call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d31c19u);
L_12d31c19:;
  /* 12d31c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d31c1b:;
  /* 12d31c1b pop edi */
  EDI = (pop32());
  /* 12d31c1c mov esp, ebp */
  ESP = (EBP);
  /* 12d31c1e pop ebp */
  EBP = (pop32());
  /* 12d31c1f ret  */
  ESPCHK(0x12d31890u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c20 @ 0x12d31c20 (780 bytes, 197 insns) */
void f_12d31c20(void) {
  FTRACE(0x12d31c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31c21 mov ebp, esp */
  EBP = (ESP);
  /* 12d31c23 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12d31c28 call 0x12d35970 */
  push32(0x12d31c2du); f_12d35970();
L_12d31c2d:;
  /* 12d31c2d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31c31 jne 0x12d31c58 */
  if (!C.zf) goto L_12d31c58;
  /* 12d31c33 push 0x12d49398 */
  push32((uint32_t)(0x12d49398u));
  /* 12d31c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31c3a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12d31c3f push 0x12d4938c */
  push32((uint32_t)(0x12d4938cu));
  /* 12d31c44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d31c46 call 0x12d31890 */
  push32(0x12d31c4bu); f_12d31890();
  /* 12d31c4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31c4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31c51 jne 0x12d31c58 */
  if (!C.zf) goto L_12d31c58;
  /* 12d31c53 call 0x12d31780 */
  push32(0x12d31c58u); f_12d31780();
L_12d31c58:;
  /* 12d31c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d31c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31c5c jne 0x12d31c2d */
  if (!C.zf) goto L_12d31c2d;
  /* 12d31c5e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d31c63 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12d31c69 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31c6c call dword ptr [0x12d50258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50258))), 0x12d31c72u);
  /* 12d31c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31c74 jne 0x12d31c8a */
  if (!C.zf) goto L_12d31c8a;
  /* 12d31c76 push 0x12d49374 */
  push32((uint32_t)(0x12d49374u));
  /* 12d31c7b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12d31c81 push edx */
  push32((uint32_t)(EDX));
  /* 12d31c82 call 0x12d35780 */
  push32(0x12d31c87u); f_12d35780();
  /* 12d31c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31c8a:;
  /* 12d31c8a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12d31c90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d31c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31c96 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31c97 call 0x12d35600 */
  push32(0x12d31c9cu); f_12d35600();
  /* 12d31c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31c9f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31ca2 jbe 0x12d31ccd */
  if ((C.cf||C.zf)) goto L_12d31ccd;
  /* 12d31ca4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31ca7 push edx */
  push32((uint32_t)(EDX));
  /* 12d31ca8 call 0x12d35600 */
  push32(0x12d31cadu); f_12d35600();
  /* 12d31cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31cb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31cb3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12d31cb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d31cba push 3 */
  push32((uint32_t)(0x3u));
  /* 12d31cbc push 0x12d49370 */
  push32((uint32_t)(0x12d49370u));
  /* 12d31cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31cc4 push eax */
  push32((uint32_t)(EAX));
  /* 12d31cc5 call 0x12d35ff0 */
  push32(0x12d31ccau); f_12d35ff0();
  /* 12d31cca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31ccd:;
  /* 12d31ccd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d31cd0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12d31cd6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31cdd je 0x12d31d28 */
  if (C.zf) goto L_12d31d28;
  /* 12d31cdf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d31ce5 push edx */
  push32((uint32_t)(EDX));
  /* 12d31ce6 call 0x12d35600 */
  push32(0x12d31cebu); f_12d35600();
  /* 12d31ceb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31cee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31cf1 jbe 0x12d31d28 */
  if ((C.cf||C.zf)) goto L_12d31d28;
  /* 12d31cf3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d31cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12d31cfa call 0x12d35600 */
  push32(0x12d31cffu); f_12d35600();
  /* 12d31cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31d02 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d31d08 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12d31d0c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12d31d12 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d31d14 push 0x12d49370 */
  push32((uint32_t)(0x12d49370u));
  /* 12d31d19 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d31d1f push eax */
  push32((uint32_t)(EAX));
  /* 12d31d20 call 0x12d35ff0 */
  push32(0x12d31d25u); f_12d35ff0();
  /* 12d31d25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31d28:;
  /* 12d31d28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31d2c jne 0x12d31d3a */
  if (!C.zf) goto L_12d31d3a;
  /* 12d31d2e mov dword ptr [ebp - 0x1114], 0x12d492fc */
  w32((uint32_t)(EBP + -0x1114), (0x12d492fcu));
  /* 12d31d38 jmp 0x12d31d44 */
  goto L_12d31d44;
L_12d31d3a:;
  /* 12d31d3a mov dword ptr [ebp - 0x1114], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1114), (0x12d4909cu));
L_12d31d44:;
  /* 12d31d44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d31d47 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d31d4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d31d4c je 0x12d31d59 */
  if (C.zf) goto L_12d31d59;
  /* 12d31d4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d31d51 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12d31d57 jmp 0x12d31d63 */
  goto L_12d31d63;
L_12d31d59:;
  /* 12d31d59 mov dword ptr [ebp - 0x1118], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1118), (0x12d4909cu));
L_12d31d63:;
  /* 12d31d63 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d31d66 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d31d69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d31d6b je 0x12d31d7f */
  if (C.zf) goto L_12d31d7f;
  /* 12d31d6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31d71 jne 0x12d31d7f */
  if (!C.zf) goto L_12d31d7f;
  /* 12d31d73 mov dword ptr [ebp - 0x111c], 0x12d492ec */
  w32((uint32_t)(EBP + -0x111c), (0x12d492ecu));
  /* 12d31d7d jmp 0x12d31d89 */
  goto L_12d31d89;
L_12d31d7f:;
  /* 12d31d7f mov dword ptr [ebp - 0x111c], 0x12d4909c */
  w32((uint32_t)(EBP + -0x111c), (0x12d4909cu));
L_12d31d89:;
  /* 12d31d89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d31d8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d31d8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d31d91 je 0x12d31d9f */
  if (C.zf) goto L_12d31d9f;
  /* 12d31d93 mov dword ptr [ebp - 0x1120], 0x12d492e8 */
  w32((uint32_t)(EBP + -0x1120), (0x12d492e8u));
  /* 12d31d9d jmp 0x12d31da9 */
  goto L_12d31da9;
L_12d31d9f:;
  /* 12d31d9f mov dword ptr [ebp - 0x1120], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1120), (0x12d4909cu));
L_12d31da9:;
  /* 12d31da9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31dad je 0x12d31dba */
  if (C.zf) goto L_12d31dba;
  /* 12d31daf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d31db2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12d31db8 jmp 0x12d31dc4 */
  goto L_12d31dc4;
L_12d31dba:;
  /* 12d31dba mov dword ptr [ebp - 0x1124], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1124), (0x12d4909cu));
L_12d31dc4:;
  /* 12d31dc4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31dc8 je 0x12d31dd6 */
  if (C.zf) goto L_12d31dd6;
  /* 12d31dca mov dword ptr [ebp - 0x1128], 0x12d492e0 */
  w32((uint32_t)(EBP + -0x1128), (0x12d492e0u));
  /* 12d31dd4 jmp 0x12d31de0 */
  goto L_12d31de0;
L_12d31dd6:;
  /* 12d31dd6 mov dword ptr [ebp - 0x1128], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1128), (0x12d4909cu));
L_12d31de0:;
  /* 12d31de0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31de4 je 0x12d31df1 */
  if (C.zf) goto L_12d31df1;
  /* 12d31de6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d31de9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12d31def jmp 0x12d31dfb */
  goto L_12d31dfb;
L_12d31df1:;
  /* 12d31df1 mov dword ptr [ebp - 0x112c], 0x12d4909c */
  w32((uint32_t)(EBP + -0x112c), (0x12d4909cu));
L_12d31dfb:;
  /* 12d31dfb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31dff je 0x12d31e0d */
  if (C.zf) goto L_12d31e0d;
  /* 12d31e01 mov dword ptr [ebp - 0x1130], 0x12d492d8 */
  w32((uint32_t)(EBP + -0x1130), (0x12d492d8u));
  /* 12d31e0b jmp 0x12d31e17 */
  goto L_12d31e17;
L_12d31e0d:;
  /* 12d31e0d mov dword ptr [ebp - 0x1130], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1130), (0x12d4909cu));
L_12d31e17:;
  /* 12d31e17 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31e1e je 0x12d31e2e */
  if (C.zf) goto L_12d31e2e;
  /* 12d31e20 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d31e26 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12d31e2c jmp 0x12d31e38 */
  goto L_12d31e38;
L_12d31e2e:;
  /* 12d31e2e mov dword ptr [ebp - 0x1134], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1134), (0x12d4909cu));
L_12d31e38:;
  /* 12d31e38 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31e3f je 0x12d31e4d */
  if (C.zf) goto L_12d31e4d;
  /* 12d31e41 mov dword ptr [ebp - 0x1138], 0x12d492cc */
  w32((uint32_t)(EBP + -0x1138), (0x12d492ccu));
  /* 12d31e4b jmp 0x12d31e57 */
  goto L_12d31e57;
L_12d31e4d:;
  /* 12d31e4d mov dword ptr [ebp - 0x1138], 0x12d4909c */
  w32((uint32_t)(EBP + -0x1138), (0x12d4909cu));
L_12d31e57:;
  /* 12d31e57 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12d31e5d push edx */
  push32((uint32_t)(EDX));
  /* 12d31e5e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12d31e64 push eax */
  push32((uint32_t)(EAX));
  /* 12d31e65 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12d31e6b push ecx */
  push32((uint32_t)(ECX));
  /* 12d31e6c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12d31e72 push edx */
  push32((uint32_t)(EDX));
  /* 12d31e73 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12d31e79 push eax */
  push32((uint32_t)(EAX));
  /* 12d31e7a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12d31e80 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31e81 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12d31e87 push edx */
  push32((uint32_t)(EDX));
  /* 12d31e88 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12d31e8e push eax */
  push32((uint32_t)(EAX));
  /* 12d31e8f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12d31e95 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31e96 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12d31e9c push edx */
  push32((uint32_t)(EDX));
  /* 12d31e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d31ea0 push eax */
  push32((uint32_t)(EAX));
  /* 12d31ea1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31ea4 mov edx, dword ptr [ecx*4 + 0x12d4ca6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4ca6c)));
  /* 12d31eab push edx */
  push32((uint32_t)(EDX));
  /* 12d31eac push 0x12d49278 */
  push32((uint32_t)(0x12d49278u));
  /* 12d31eb1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d31eb6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12d31ebc push eax */
  push32((uint32_t)(EAX));
  /* 12d31ebd call 0x12d35680 */
  push32(0x12d31ec2u); f_12d35680();
  /* 12d31ec2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d31ec7 jge 0x12d31edd */
  if ((C.sf==C.of)) goto L_12d31edd;
  /* 12d31ec9 push 0x12d491dc */
  push32((uint32_t)(0x12d491dcu));
  /* 12d31ece lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12d31ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31ed5 call 0x12d35780 */
  push32(0x12d31edau); f_12d35780();
  /* 12d31eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d31edd:;
  /* 12d31edd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12d31ee2 push 0x12d49254 */
  push32((uint32_t)(0x12d49254u));
  /* 12d31ee7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12d31eed push edx */
  push32((uint32_t)(EDX));
  /* 12d31eee call 0x12d35f30 */
  push32(0x12d31ef3u); f_12d35f30();
  /* 12d31ef3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31ef6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12d31efc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31f03 jne 0x12d31f16 */
  if (!C.zf) goto L_12d31f16;
  /* 12d31f05 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d31f07 call 0x12d35c70 */
  push32(0x12d31f0cu); f_12d35c70();
  /* 12d31f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31f0f push 3 */
  push32((uint32_t)(0x3u));
  /* 12d31f11 call 0x12d31f90 */
  push32(0x12d31f16u); f_12d31f90();
L_12d31f16:;
  /* 12d31f16 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31f1d jne 0x12d31f26 */
  if (!C.zf) goto L_12d31f26;
  /* 12d31f1f mov eax, 1 */
  EAX = (0x1u);
  /* 12d31f24 jmp 0x12d31f28 */
  goto L_12d31f28;
L_12d31f26:;
  /* 12d31f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d31f28:;
  /* 12d31f28 mov esp, ebp */
  ESP = (EBP);
  /* 12d31f2a pop ebp */
  EBP = (pop32());
  /* 12d31f2b ret  */
  ESPCHK(0x12d31c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f30 @ 0x12d31f30 (56 bytes, 15 insns) */
void f_12d31f30(void) {
  FTRACE(0x12d31f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31f31 mov ebp, esp */
  EBP = (ESP);
  /* 12d31f33 cmp dword ptr [0x12d4ff9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ff9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d31f3a je 0x12d31f42 */
  if (C.zf) goto L_12d31f42;
  /* 12d31f3c call dword ptr [0x12d4ff9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ff9c))), 0x12d31f42u);
L_12d31f42:;
  /* 12d31f42 push 0x12d4c418 */
  push32((uint32_t)(0x12d4c418u));
  /* 12d31f47 push 0x12d4c208 */
  push32((uint32_t)(0x12d4c208u));
  /* 12d31f4c call 0x12d32100 */
  push32(0x12d31f51u); f_12d32100();
  /* 12d31f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31f54 push 0x12d4c104 */
  push32((uint32_t)(0x12d4c104u));
  /* 12d31f59 push 0x12d4c000 */
  push32((uint32_t)(0x12d4c000u));
  /* 12d31f5e call 0x12d32100 */
  push32(0x12d31f63u); f_12d32100();
  /* 12d31f63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31f66 pop ebp */
  EBP = (pop32());
  /* 12d31f67 ret  */
  ESPCHK(0x12d31f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f70 @ 0x12d31f70 (21 bytes, 10 insns) */
void f_12d31f70(void) {
  FTRACE(0x12d31f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31f71 mov ebp, esp */
  EBP = (ESP);
  /* 12d31f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31f77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31f7a push eax */
  push32((uint32_t)(EAX));
  /* 12d31f7b call 0x12d31ff0 */
  push32(0x12d31f80u); f_12d31ff0();
  /* 12d31f80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31f83 pop ebp */
  EBP = (pop32());
  /* 12d31f84 ret  */
  ESPCHK(0x12d31f70u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12d31f90 (21 bytes, 10 insns) */
void f_12d31f90(void) {
  FTRACE(0x12d31f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31f91 mov ebp, esp */
  EBP = (ESP);
  /* 12d31f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31f95 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d31f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d31f9a push eax */
  push32((uint32_t)(EAX));
  /* 12d31f9b call 0x12d31ff0 */
  push32(0x12d31fa0u); f_12d31ff0();
  /* 12d31fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31fa3 pop ebp */
  EBP = (pop32());
  /* 12d31fa4 ret  */
  ESPCHK(0x12d31f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fb0 @ 0x12d31fb0 (19 bytes, 9 insns) */
void f_12d31fb0(void) {
  FTRACE(0x12d31fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d31fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d31fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31fb9 call 0x12d31ff0 */
  push32(0x12d31fbeu); f_12d31ff0();
  /* 12d31fbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31fc1 pop ebp */
  EBP = (pop32());
  /* 12d31fc2 ret  */
  ESPCHK(0x12d31fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd0 @ 0x12d31fd0 (19 bytes, 9 insns) */
void f_12d31fd0(void) {
  FTRACE(0x12d31fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d31fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d31fd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d31fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d31fd9 call 0x12d31ff0 */
  push32(0x12d31fdeu); f_12d31ff0();
  /* 12d31fde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d31fe1 pop ebp */
  EBP = (pop32());
  /* 12d31fe2 ret  */
  ESPCHK(0x12d31fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff0 @ 0x12d31ff0 (227 bytes, 61 insns) */
void f_12d31ff0(void) {
  FTRACE(0x12d31ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d31ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d31ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12d31ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d31ff4 call 0x12d320e0 */
  push32(0x12d31ff9u); f_12d320e0();
  /* 12d31ff9 cmp dword ptr [0x12d4e4a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e4a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32000 jne 0x12d32013 */
  if (!C.zf) goto L_12d32013;
  /* 12d32002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32005 push eax */
  push32((uint32_t)(EAX));
  /* 12d32006 call dword ptr [0x12d50264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50264))), 0x12d3200cu);
  /* 12d3200c push eax */
  push32((uint32_t)(EAX));
  /* 12d3200d call dword ptr [0x12d50260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50260))), 0x12d32013u);
L_12d32013:;
  /* 12d32013 mov dword ptr [0x12d4e49c], 1 */
  w32((uint32_t)(0x12d4e49c), (0x1u));
  /* 12d3201d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d32020 mov byte ptr [0x12d4e498], cl */
  w8((uint32_t)(0x12d4e498), (CL));
  /* 12d32026 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3202a jne 0x12d32073 */
  if (!C.zf) goto L_12d32073;
  /* 12d3202c cmp dword ptr [0x12d4ff98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ff98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32033 je 0x12d32061 */
  if (C.zf) goto L_12d32061;
  /* 12d32035 mov edx, dword ptr [0x12d4ff94] */
  EDX = (r32((uint32_t)(0x12d4ff94)));
  /* 12d3203b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d3203e:;
  /* 12d3203e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32041 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32044 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d32047 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3204a cmp ecx, dword ptr [0x12d4ff98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4ff98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32050 jb 0x12d32061 */
  if (C.cf) goto L_12d32061;
  /* 12d32052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32055 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32058 je 0x12d3205f */
  if (C.zf) goto L_12d3205f;
  /* 12d3205a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3205d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12d3205fu);
L_12d3205f:;
  /* 12d3205f jmp 0x12d3203e */
  goto L_12d3203e;
L_12d32061:;
  /* 12d32061 push 0x12d4c724 */
  push32((uint32_t)(0x12d4c724u));
  /* 12d32066 push 0x12d4c51c */
  push32((uint32_t)(0x12d4c51cu));
  /* 12d3206b call 0x12d32100 */
  push32(0x12d32070u); f_12d32100();
  /* 12d32070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32073:;
  /* 12d32073 push 0x12d4c92c */
  push32((uint32_t)(0x12d4c92cu));
  /* 12d32078 push 0x12d4c828 */
  push32((uint32_t)(0x12d4c828u));
  /* 12d3207d call 0x12d32100 */
  push32(0x12d32082u); f_12d32100();
  /* 12d32082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32085 cmp dword ptr [0x12d4e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3208c jne 0x12d320ae */
  if (!C.zf) goto L_12d320ae;
  /* 12d3208e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d32090 call 0x12d33ce0 */
  push32(0x12d32095u); f_12d33ce0();
  /* 12d32095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32098 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3209b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3209d je 0x12d320ae */
  if (C.zf) goto L_12d320ae;
  /* 12d3209f mov dword ptr [0x12d4e4a4], 1 */
  w32((uint32_t)(0x12d4e4a4), (0x1u));
  /* 12d320a9 call 0x12d345f0 */
  push32(0x12d320aeu); f_12d345f0();
L_12d320ae:;
  /* 12d320ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d320b2 je 0x12d320bb */
  if (C.zf) goto L_12d320bb;
  /* 12d320b4 call 0x12d320f0 */
  push32(0x12d320b9u); f_12d320f0();
  /* 12d320b9 jmp 0x12d320cf */
  goto L_12d320cf;
L_12d320bb:;
  /* 12d320bb mov dword ptr [0x12d4e4a0], 1 */
  w32((uint32_t)(0x12d4e4a0), (0x1u));
  /* 12d320c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d320c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d320c9 call dword ptr [0x12d5025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5025c))), 0x12d320cfu);
L_12d320cf:;
  /* 12d320cf mov esp, ebp */
  ESP = (EBP);
  /* 12d320d1 pop ebp */
  EBP = (pop32());
  /* 12d320d2 ret  */
  ESPCHK(0x12d31ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e0 @ 0x12d320e0 (15 bytes, 7 insns) */
void f_12d320e0(void) {
  FTRACE(0x12d320e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d320e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d320e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d320e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12d320e5 call 0x12d361d0 */
  push32(0x12d320eau); f_12d361d0();
  /* 12d320ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d320ed pop ebp */
  EBP = (pop32());
  /* 12d320ee ret  */
  ESPCHK(0x12d320e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020f0 @ 0x12d320f0 (15 bytes, 7 insns) */
void f_12d320f0(void) {
  FTRACE(0x12d320f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d320f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d320f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d320f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12d320f5 call 0x12d36270 */
  push32(0x12d320fau); f_12d36270();
  /* 12d320fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d320fd pop ebp */
  EBP = (pop32());
  /* 12d320fe ret  */
  ESPCHK(0x12d320f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12d32100 (37 bytes, 16 insns) */
void f_12d32100(void) {
  FTRACE(0x12d32100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32100 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32101 mov ebp, esp */
  EBP = (ESP);
L_12d32103:;
  /* 12d32103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32106 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32109 jae 0x12d32123 */
  if (!C.cf) goto L_12d32123;
  /* 12d3210b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3210e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32111 je 0x12d32118 */
  if (C.zf) goto L_12d32118;
  /* 12d32113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32116 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12d32118u);
L_12d32118:;
  /* 12d32118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3211b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3211e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d32121 jmp 0x12d32103 */
  goto L_12d32103;
L_12d32123:;
  /* 12d32123 pop ebp */
  EBP = (pop32());
  /* 12d32124 ret  */
  ESPCHK(0x12d32100u, _esp0);
  ESP += 4; return;
}

/* FUN_10002130 @ 0x12d32130 (130 bytes, 42 insns) */
void f_12d32130(void) {
  FTRACE(0x12d32130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32130 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32131 mov ebp, esp */
  EBP = (ESP);
  /* 12d32133 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32134 call 0x12d360f0 */
  push32(0x12d32139u); f_12d360f0();
  /* 12d32139 call dword ptr [0x12d50270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50270))), 0x12d3213fu);
  /* 12d3213f mov dword ptr [0x12d4ca78], eax */
  w32((uint32_t)(0x12d4ca78), (EAX));
  /* 12d32144 cmp dword ptr [0x12d4ca78], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ca78))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3214b jne 0x12d32151 */
  if (!C.zf) goto L_12d32151;
  /* 12d3214d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3214f jmp 0x12d321ae */
  goto L_12d321ae;
L_12d32151:;
  /* 12d32151 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12d32153 push 0x12d493b0 */
  push32((uint32_t)(0x12d493b0u));
  /* 12d32158 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3215a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12d3215c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3215e call 0x12d32be0 */
  push32(0x12d32163u); f_12d32be0();
  /* 12d32163 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32166 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d32169 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3216d je 0x12d32184 */
  if (C.zf) goto L_12d32184;
  /* 12d3216f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32172 push eax */
  push32((uint32_t)(EAX));
  /* 12d32173 mov ecx, dword ptr [0x12d4ca78] */
  ECX = (r32((uint32_t)(0x12d4ca78)));
  /* 12d32179 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3217a call dword ptr [0x12d5026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5026c))), 0x12d32180u);
  /* 12d32180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32182 jne 0x12d32188 */
  if (!C.zf) goto L_12d32188;
L_12d32184:;
  /* 12d32184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32186 jmp 0x12d321ae */
  goto L_12d321ae;
L_12d32188:;
  /* 12d32188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3218b push edx */
  push32((uint32_t)(EDX));
  /* 12d3218c call 0x12d321f0 */
  push32(0x12d32191u); f_12d321f0();
  /* 12d32191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32194 call dword ptr [0x12d50268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50268))), 0x12d3219au);
  /* 12d3219a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3219d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d3219f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d321a2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12d321a9 mov eax, 1 */
  EAX = (0x1u);
L_12d321ae:;
  /* 12d321ae mov esp, ebp */
  ESP = (EBP);
  /* 12d321b0 pop ebp */
  EBP = (pop32());
  /* 12d321b1 ret  */
  ESPCHK(0x12d32130u, _esp0);
  ESP += 4; return;
}

/* FUN_100021c0 @ 0x12d321c0 (41 bytes, 11 insns) */
void f_12d321c0(void) {
  FTRACE(0x12d321c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d321c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d321c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d321c3 call 0x12d36130 */
  push32(0x12d321c8u); f_12d36130();
  /* 12d321c8 cmp dword ptr [0x12d4ca78], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ca78))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d321cf je 0x12d321e7 */
  if (C.zf) goto L_12d321e7;
  /* 12d321d1 mov eax, dword ptr [0x12d4ca78] */
  EAX = (r32((uint32_t)(0x12d4ca78)));
  /* 12d321d6 push eax */
  push32((uint32_t)(EAX));
  /* 12d321d7 call dword ptr [0x12d50274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50274))), 0x12d321ddu);
  /* 12d321dd mov dword ptr [0x12d4ca78], 0xffffffff */
  w32((uint32_t)(0x12d4ca78), (0xffffffffu));
L_12d321e7:;
  /* 12d321e7 pop ebp */
  EBP = (pop32());
  /* 12d321e8 ret  */
  ESPCHK(0x12d321c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021f0 @ 0x12d321f0 (25 bytes, 8 insns) */
void f_12d321f0(void) {
  FTRACE(0x12d321f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d321f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d321f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d321f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d321f6 mov dword ptr [eax + 0x50], 0x12d4cc20 */
  w32((uint32_t)(EAX + 0x50), (0x12d4cc20u));
  /* 12d321fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32200 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12d32207 pop ebp */
  EBP = (pop32());
  /* 12d32208 ret  */
  ESPCHK(0x12d321f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002210 @ 0x12d32210 (152 bytes, 48 insns) */
void f_12d32210(void) {
  FTRACE(0x12d32210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32210 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32211 mov ebp, esp */
  EBP = (ESP);
  /* 12d32213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32216 call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3221cu);
  /* 12d3221c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3221f mov eax, dword ptr [0x12d4ca78] */
  EAX = (r32((uint32_t)(0x12d4ca78)));
  /* 12d32224 push eax */
  push32((uint32_t)(EAX));
  /* 12d32225 call dword ptr [0x12d5027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5027c))), 0x12d3222bu);
  /* 12d3222b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3222e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32232 jne 0x12d32297 */
  if (!C.zf) goto L_12d32297;
  /* 12d32234 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12d32239 push 0x12d493b0 */
  push32((uint32_t)(0x12d493b0u));
  /* 12d3223e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32240 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12d32242 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32244 call 0x12d32be0 */
  push32(0x12d32249u); f_12d32be0();
  /* 12d32249 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3224c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3224f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32253 je 0x12d3228d */
  if (C.zf) goto L_12d3228d;
  /* 12d32255 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32258 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32259 mov edx, dword ptr [0x12d4ca78] */
  EDX = (r32((uint32_t)(0x12d4ca78)));
  /* 12d3225f push edx */
  push32((uint32_t)(EDX));
  /* 12d32260 call dword ptr [0x12d5026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5026c))), 0x12d32266u);
  /* 12d32266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32268 je 0x12d3228d */
  if (C.zf) goto L_12d3228d;
  /* 12d3226a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3226d push eax */
  push32((uint32_t)(EAX));
  /* 12d3226e call 0x12d321f0 */
  push32(0x12d32273u); f_12d321f0();
  /* 12d32273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32276 call dword ptr [0x12d50268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50268))), 0x12d3227cu);
  /* 12d3227c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3227f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d32281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32284 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12d3228b jmp 0x12d32297 */
  goto L_12d32297;
L_12d3228d:;
  /* 12d3228d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d3228f call 0x12d31740 */
  push32(0x12d32294u); f_12d31740();
  /* 12d32294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32297:;
  /* 12d32297 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3229a push eax */
  push32((uint32_t)(EAX));
  /* 12d3229b call dword ptr [0x12d50278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50278))), 0x12d322a1u);
  /* 12d322a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d322a4 mov esp, ebp */
  ESP = (EBP);
  /* 12d322a6 pop ebp */
  EBP = (pop32());
  /* 12d322a7 ret  */
  ESPCHK(0x12d32210u, _esp0);
  ESP += 4; return;
}

/* FUN_100022b0 @ 0x12d322b0 (263 bytes, 86 insns) */
void f_12d322b0(void) {
  FTRACE(0x12d322b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d322b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d322b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d322b3 cmp dword ptr [0x12d4ca78], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ca78))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d322ba je 0x12d323b5 */
  if (C.zf) goto L_12d323b5;
  /* 12d322c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d322c4 jne 0x12d322d5 */
  if (!C.zf) goto L_12d322d5;
  /* 12d322c6 mov eax, dword ptr [0x12d4ca78] */
  EAX = (r32((uint32_t)(0x12d4ca78)));
  /* 12d322cb push eax */
  push32((uint32_t)(EAX));
  /* 12d322cc call dword ptr [0x12d5027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5027c))), 0x12d322d2u);
  /* 12d322d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d322d5:;
  /* 12d322d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d322d9 je 0x12d323a6 */
  if (C.zf) goto L_12d323a6;
  /* 12d322df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d322e2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d322e6 je 0x12d322f9 */
  if (C.zf) goto L_12d322f9;
  /* 12d322e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d322ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d322ed mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12d322f0 push eax */
  push32((uint32_t)(EAX));
  /* 12d322f1 call 0x12d33260 */
  push32(0x12d322f6u); f_12d33260();
  /* 12d322f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d322f9:;
  /* 12d322f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d322fc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32300 je 0x12d32313 */
  if (C.zf) goto L_12d32313;
  /* 12d32302 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32307 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12d3230a push eax */
  push32((uint32_t)(EAX));
  /* 12d3230b call 0x12d33260 */
  push32(0x12d32310u); f_12d33260();
  /* 12d32310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32313:;
  /* 12d32313 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32316 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3231a je 0x12d3232d */
  if (C.zf) goto L_12d3232d;
  /* 12d3231c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3231e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32321 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12d32324 push eax */
  push32((uint32_t)(EAX));
  /* 12d32325 call 0x12d33260 */
  push32(0x12d3232au); f_12d33260();
  /* 12d3232a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3232d:;
  /* 12d3232d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32330 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32334 je 0x12d32347 */
  if (C.zf) goto L_12d32347;
  /* 12d32336 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3233b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12d3233e push eax */
  push32((uint32_t)(EAX));
  /* 12d3233f call 0x12d33260 */
  push32(0x12d32344u); f_12d33260();
  /* 12d32344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32347:;
  /* 12d32347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3234a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3234e je 0x12d32361 */
  if (C.zf) goto L_12d32361;
  /* 12d32350 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32355 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12d32358 push eax */
  push32((uint32_t)(EAX));
  /* 12d32359 call 0x12d33260 */
  push32(0x12d3235eu); f_12d33260();
  /* 12d3235e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32361:;
  /* 12d32361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32364 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32368 je 0x12d3237b */
  if (C.zf) goto L_12d3237b;
  /* 12d3236a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3236c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3236f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12d32372 push eax */
  push32((uint32_t)(EAX));
  /* 12d32373 call 0x12d33260 */
  push32(0x12d32378u); f_12d33260();
  /* 12d32378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3237b:;
  /* 12d3237b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3237e cmp dword ptr [ecx + 0x50], 0x12d4cc20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12d4cc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32385 je 0x12d32398 */
  if (C.zf) goto L_12d32398;
  /* 12d32387 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3238c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12d3238f push eax */
  push32((uint32_t)(EAX));
  /* 12d32390 call 0x12d33260 */
  push32(0x12d32395u); f_12d33260();
  /* 12d32395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32398:;
  /* 12d32398 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3239a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3239d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3239e call 0x12d33260 */
  push32(0x12d323a3u); f_12d33260();
  /* 12d323a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d323a6:;
  /* 12d323a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d323a8 mov edx, dword ptr [0x12d4ca78] */
  EDX = (r32((uint32_t)(0x12d4ca78)));
  /* 12d323ae push edx */
  push32((uint32_t)(EDX));
  /* 12d323af call dword ptr [0x12d5026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5026c))), 0x12d323b5u);
L_12d323b5:;
  /* 12d323b5 pop ebp */
  EBP = (pop32());
  /* 12d323b6 ret  */
  ESPCHK(0x12d322b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023c0 @ 0x12d323c0 (11 bytes, 5 insns) */
void f_12d323c0(void) {
  FTRACE(0x12d323c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d323c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d323c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d323c3 call dword ptr [0x12d50268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50268))), 0x12d323c9u);
  /* 12d323c9 pop ebp */
  EBP = (pop32());
  /* 12d323ca ret  */
  ESPCHK(0x12d323c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023d0 @ 0x12d323d0 (11 bytes, 5 insns) */
void f_12d323d0(void) {
  FTRACE(0x12d323d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d323d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d323d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d323d3 call dword ptr [0x12d50284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50284))), 0x12d323d9u);
  /* 12d323d9 pop ebp */
  EBP = (pop32());
  /* 12d323da ret  */
  ESPCHK(0x12d323d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023e0 @ 0x12d323e0 (804 bytes, 236 insns) */
void f_12d323e0(void) {
  FTRACE(0x12d323e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d323e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d323e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d323e3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d323e6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12d323eb push 0x12d493bc */
  push32((uint32_t)(0x12d493bcu));
  /* 12d323f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d323f2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d323f7 call 0x12d327d0 */
  push32(0x12d323fcu); f_12d327d0();
  /* 12d323fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d323ff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12d32402 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32406 jne 0x12d32412 */
  if (!C.zf) goto L_12d32412;
  /* 12d32408 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12d3240a call 0x12d31740 */
  push32(0x12d3240fu); f_12d31740();
  /* 12d3240f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d32412:;
  /* 12d32412 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32415 mov dword ptr [0x12d4fe40], eax */
  w32((uint32_t)(0x12d4fe40), (EAX));
  /* 12d3241a mov dword ptr [0x12d4ff7c], 0x20 */
  w32((uint32_t)(0x12d4ff7c), (0x20u));
  /* 12d32424 jmp 0x12d3242f */
  goto L_12d3242f;
L_12d32426:;
  /* 12d32426 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32429 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3242c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12d3242f:;
  /* 12d3242f mov edx, dword ptr [0x12d4fe40] */
  EDX = (r32((uint32_t)(0x12d4fe40)));
  /* 12d32435 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3243b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3243e jae 0x12d32463 */
  if (!C.cf) goto L_12d32463;
  /* 12d32440 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32443 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d32447 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3244a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d32450 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32453 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d32457 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3245a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d32461 jmp 0x12d32426 */
  goto L_12d32426;
L_12d32463:;
  /* 12d32463 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12d32466 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32467 call dword ptr [0x12d50290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50290))), 0x12d3246du);
  /* 12d3246d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12d32470 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d32476 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d32478 je 0x12d32605 */
  if (C.zf) goto L_12d32605;
  /* 12d3247e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32482 je 0x12d32605 */
  if (C.zf) goto L_12d32605;
  /* 12d32488 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3248b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3248d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12d32490 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d32493 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32496 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d32499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3249c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3249f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12d324a2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d324a9 jge 0x12d324b3 */
  if ((C.sf==C.of)) goto L_12d324b3;
  /* 12d324ab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12d324ae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12d324b1 jmp 0x12d324ba */
  goto L_12d324ba;
L_12d324b3:;
  /* 12d324b3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12d324ba:;
  /* 12d324ba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12d324bd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12d324c0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12d324c7 jmp 0x12d324d2 */
  goto L_12d324d2;
L_12d324c9:;
  /* 12d324c9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d324cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d324cf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12d324d2:;
  /* 12d324d2 mov ecx, dword ptr [0x12d4ff7c] */
  ECX = (r32((uint32_t)(0x12d4ff7c)));
  /* 12d324d8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d324db jge 0x12d32572 */
  if ((C.sf==C.of)) goto L_12d32572;
  /* 12d324e1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12d324e6 push 0x12d493bc */
  push32((uint32_t)(0x12d493bcu));
  /* 12d324eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12d324ed push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d324f2 call 0x12d327d0 */
  push32(0x12d324f7u); f_12d327d0();
  /* 12d324f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d324fa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12d324fd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32501 jne 0x12d3250e */
  if (!C.zf) goto L_12d3250e;
  /* 12d32503 mov edx, dword ptr [0x12d4ff7c] */
  EDX = (r32((uint32_t)(0x12d4ff7c)));
  /* 12d32509 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12d3250c jmp 0x12d32572 */
  goto L_12d32572;
L_12d3250e:;
  /* 12d3250e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d32511 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32514 mov dword ptr [eax*4 + 0x12d4fe40], ecx */
  w32((uint32_t)(EAX*4 + 0x12d4fe40), (ECX));
  /* 12d3251b mov edx, dword ptr [0x12d4ff7c] */
  EDX = (r32((uint32_t)(0x12d4ff7c)));
  /* 12d32521 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32524 mov dword ptr [0x12d4ff7c], edx */
  w32((uint32_t)(0x12d4ff7c), (EDX));
  /* 12d3252a jmp 0x12d32535 */
  goto L_12d32535;
L_12d3252c:;
  /* 12d3252c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3252f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32532 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12d32535:;
  /* 12d32535 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d32538 mov edx, dword ptr [ecx*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3253f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32545 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32548 jae 0x12d3256d */
  if (!C.cf) goto L_12d3256d;
  /* 12d3254a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3254d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d32551 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32554 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d3255a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3255d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d32561 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32564 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d3256b jmp 0x12d3252c */
  goto L_12d3252c;
L_12d3256d:;
  /* 12d3256d jmp 0x12d324c9 */
  goto L_12d324c9;
L_12d32572:;
  /* 12d32572 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12d32579 jmp 0x12d32596 */
  goto L_12d32596;
L_12d3257b:;
  /* 12d3257b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d3257e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32581 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12d32584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32587 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3258a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3258d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d32590 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32593 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12d32596:;
  /* 12d32596 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d32599 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3259c jge 0x12d32605 */
  if ((C.sf==C.of)) goto L_12d32605;
  /* 12d3259e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d325a1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d325a4 je 0x12d32600 */
  if (C.zf) goto L_12d32600;
  /* 12d325a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d325a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d325ac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d325af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d325b1 je 0x12d32600 */
  if (C.zf) goto L_12d32600;
  /* 12d325b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d325b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d325b9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12d325bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d325be jne 0x12d325d0 */
  if (!C.zf) goto L_12d325d0;
  /* 12d325c0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d325c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d325c5 push edx */
  push32((uint32_t)(EDX));
  /* 12d325c6 call dword ptr [0x12d5028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5028c))), 0x12d325ccu);
  /* 12d325cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d325ce je 0x12d32600 */
  if (C.zf) goto L_12d32600;
L_12d325d0:;
  /* 12d325d0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d325d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d325d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d325d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d325dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d325df mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d325e6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d325e8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12d325eb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d325ee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d325f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d325f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d325f5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d325f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d325fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d325fd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12d32600:;
  /* 12d32600 jmp 0x12d3257b */
  goto L_12d3257b;
L_12d32605:;
  /* 12d32605 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12d3260c jmp 0x12d32617 */
  goto L_12d32617;
L_12d3260e:;
  /* 12d3260e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d32611 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32614 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12d32617:;
  /* 12d32617 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3261b jge 0x12d326f4 */
  if ((C.sf==C.of)) goto L_12d326f4;
  /* 12d32621 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d32624 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d32627 mov edx, dword ptr [0x12d4fe40] */
  EDX = (r32((uint32_t)(0x12d4fe40)));
  /* 12d3262d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3262f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12d32632 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32635 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32638 jne 0x12d326e0 */
  if (!C.zf) goto L_12d326e0;
  /* 12d3263e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d32641 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12d32645 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32649 jne 0x12d32654 */
  if (!C.zf) goto L_12d32654;
  /* 12d3264b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12d32652 jmp 0x12d32664 */
  goto L_12d32664;
L_12d32654:;
  /* 12d32654 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d32657 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3265a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3265c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3265e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32661 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12d32664:;
  /* 12d32664 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12d32667 push eax */
  push32((uint32_t)(EAX));
  /* 12d32668 call dword ptr [0x12d5023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5023c))), 0x12d3266eu);
  /* 12d3266e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12d32671 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32675 je 0x12d326cf */
  if (C.zf) goto L_12d326cf;
  /* 12d32677 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d3267a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3267b call dword ptr [0x12d5028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5028c))), 0x12d32681u);
  /* 12d32681 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12d32684 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32688 je 0x12d326cf */
  if (C.zf) goto L_12d326cf;
  /* 12d3268a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3268d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d32690 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d32692 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12d32695 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3269b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3269e jne 0x12d326b0 */
  if (!C.zf) goto L_12d326b0;
  /* 12d326a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326a3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d326a6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12d326a8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326ab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12d326ae jmp 0x12d326cd */
  goto L_12d326cd;
L_12d326b0:;
  /* 12d326b0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12d326b3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d326b9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d326bc jne 0x12d326cd */
  if (!C.zf) goto L_12d326cd;
  /* 12d326be mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d326c4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12d326c7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d326cd:;
  /* 12d326cd jmp 0x12d326de */
  goto L_12d326de;
L_12d326cf:;
  /* 12d326cf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326d2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d326d5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12d326d8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326db mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d326de:;
  /* 12d326de jmp 0x12d326ef */
  goto L_12d326ef;
L_12d326e0:;
  /* 12d326e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326e3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d326e6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12d326e9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d326ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d326ef:;
  /* 12d326ef jmp 0x12d3260e */
  goto L_12d3260e;
L_12d326f4:;
  /* 12d326f4 mov eax, dword ptr [0x12d4ff7c] */
  EAX = (r32((uint32_t)(0x12d4ff7c)));
  /* 12d326f9 push eax */
  push32((uint32_t)(EAX));
  /* 12d326fa call dword ptr [0x12d50288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50288))), 0x12d32700u);
  /* 12d32700 mov esp, ebp */
  ESP = (EBP);
  /* 12d32702 pop ebp */
  EBP = (pop32());
  /* 12d32703 ret  */
  ESPCHK(0x12d323e0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12d32710 (155 bytes, 45 insns) */
void f_12d32710(void) {
  FTRACE(0x12d32710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32710 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32711 mov ebp, esp */
  EBP = (ESP);
  /* 12d32713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32716 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3271d jmp 0x12d32728 */
  goto L_12d32728;
L_12d3271f:;
  /* 12d3271f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32722 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32725 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d32728:;
  /* 12d32728 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3272c jge 0x12d327a7 */
  if ((C.sf==C.of)) goto L_12d327a7;
  /* 12d3272e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32731 cmp dword ptr [ecx*4 + 0x12d4fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d4fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32739 je 0x12d327a2 */
  if (C.zf) goto L_12d327a2;
  /* 12d3273b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3273e mov eax, dword ptr [edx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d32745 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d32748 jmp 0x12d32753 */
  goto L_12d32753;
L_12d3274a:;
  /* 12d3274a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3274d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32750 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d32753:;
  /* 12d32753 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32756 mov eax, dword ptr [edx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3275d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32762 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32765 jae 0x12d3277f */
  if (!C.cf) goto L_12d3277f;
  /* 12d32767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3276a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3276e je 0x12d3277d */
  if (C.zf) goto L_12d3277d;
  /* 12d32770 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32773 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32776 push edx */
  push32((uint32_t)(EDX));
  /* 12d32777 call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d3277du);
L_12d3277d:;
  /* 12d3277d jmp 0x12d3274a */
  goto L_12d3274a;
L_12d3277f:;
  /* 12d3277f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32784 mov ecx, dword ptr [eax*4 + 0x12d4fe40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3278b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3278c call 0x12d33260 */
  push32(0x12d32791u); f_12d33260();
  /* 12d32791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32794 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32797 mov dword ptr [edx*4 + 0x12d4fe40], 0 */
  w32((uint32_t)(EDX*4 + 0x12d4fe40), (0x0u));
L_12d327a2:;
  /* 12d327a2 jmp 0x12d3271f */
  goto L_12d3271f;
L_12d327a7:;
  /* 12d327a7 mov esp, ebp */
  ESP = (EBP);
  /* 12d327a9 pop ebp */
  EBP = (pop32());
  /* 12d327aa ret  */
  ESPCHK(0x12d32710u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x12d327b0 (29 bytes, 13 insns) */
void f_12d327b0(void) {
  FTRACE(0x12d327b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d327b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d327b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d327b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d327b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d327b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d327b9 mov eax, dword ptr [0x12d4e648] */
  EAX = (r32((uint32_t)(0x12d4e648)));
  /* 12d327be push eax */
  push32((uint32_t)(EAX));
  /* 12d327bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d327c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d327c3 call 0x12d32820 */
  push32(0x12d327c8u); f_12d32820();
  /* 12d327c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d327cb pop ebp */
  EBP = (pop32());
  /* 12d327cc ret  */
  ESPCHK(0x12d327b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x12d327d0 (35 bytes, 16 insns) */
void f_12d327d0(void) {
  FTRACE(0x12d327d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d327d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d327d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d327d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d327d6 push eax */
  push32((uint32_t)(EAX));
  /* 12d327d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d327da push ecx */
  push32((uint32_t)(ECX));
  /* 12d327db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d327de push edx */
  push32((uint32_t)(EDX));
  /* 12d327df mov eax, dword ptr [0x12d4e648] */
  EAX = (r32((uint32_t)(0x12d4e648)));
  /* 12d327e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d327e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d327e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d327e9 call 0x12d32820 */
  push32(0x12d327eeu); f_12d32820();
  /* 12d327ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d327f1 pop ebp */
  EBP = (pop32());
  /* 12d327f2 ret  */
  ESPCHK(0x12d327d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002800 @ 0x12d32800 (27 bytes, 13 insns) */
void f_12d32800(void) {
  FTRACE(0x12d32800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32800 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32801 mov ebp, esp */
  EBP = (ESP);
  /* 12d32803 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32805 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32807 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3280c push eax */
  push32((uint32_t)(EAX));
  /* 12d3280d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32810 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32811 call 0x12d32820 */
  push32(0x12d32816u); f_12d32820();
  /* 12d32816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32819 pop ebp */
  EBP = (pop32());
  /* 12d3281a ret  */
  ESPCHK(0x12d32800u, _esp0);
  ESP += 4; return;
}

/* FUN_10002820 @ 0x12d32820 (94 bytes, 38 insns) */
void f_12d32820(void) {
  FTRACE(0x12d32820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32820 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32821 mov ebp, esp */
  EBP = (ESP);
  /* 12d32823 push ecx */
  push32((uint32_t)(ECX));
L_12d32824:;
  /* 12d32824 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d32826 call 0x12d361d0 */
  push32(0x12d3282bu); f_12d361d0();
  /* 12d3282b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3282e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d32831 push eax */
  push32((uint32_t)(EAX));
  /* 12d32832 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32835 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32839 push edx */
  push32((uint32_t)(EDX));
  /* 12d3283a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3283d push eax */
  push32((uint32_t)(EAX));
  /* 12d3283e call 0x12d328a0 */
  push32(0x12d32843u); f_12d328a0();
  /* 12d32843 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d32849 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d3284b call 0x12d36270 */
  push32(0x12d32850u); f_12d36270();
  /* 12d32850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32857 jne 0x12d3285f */
  if (!C.zf) goto L_12d3285f;
  /* 12d32859 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3285d jne 0x12d32864 */
  if (!C.zf) goto L_12d32864;
L_12d3285f:;
  /* 12d3285f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32862 jmp 0x12d3287a */
  goto L_12d3287a;
L_12d32864:;
  /* 12d32864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32867 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32868 call 0x12d36510 */
  push32(0x12d3286du); f_12d36510();
  /* 12d3286d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32872 jne 0x12d32878 */
  if (!C.zf) goto L_12d32878;
  /* 12d32874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32876 jmp 0x12d3287a */
  goto L_12d3287a;
L_12d32878:;
  /* 12d32878 jmp 0x12d32824 */
  goto L_12d32824;
L_12d3287a:;
  /* 12d3287a mov esp, ebp */
  ESP = (EBP);
  /* 12d3287c pop ebp */
  EBP = (pop32());
  /* 12d3287d ret  */
  ESPCHK(0x12d32820u, _esp0);
  ESP += 4; return;
}

/* FUN_10002880 @ 0x12d32880 (23 bytes, 11 insns) */
void f_12d32880(void) {
  FTRACE(0x12d32880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32880 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32881 mov ebp, esp */
  EBP = (ESP);
  /* 12d32883 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32885 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32887 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3288c push eax */
  push32((uint32_t)(EAX));
  /* 12d3288d call 0x12d328a0 */
  push32(0x12d32892u); f_12d328a0();
  /* 12d32892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32895 pop ebp */
  EBP = (pop32());
  /* 12d32896 ret  */
  ESPCHK(0x12d32880u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a0 @ 0x12d328a0 (787 bytes, 254 insns) */
void f_12d328a0(void) {
  FTRACE(0x12d328a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d328a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d328a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d328a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d328a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d328a7 push esi */
  push32((uint32_t)(ESI));
  /* 12d328a8 push edi */
  push32((uint32_t)(EDI));
  /* 12d328a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d328b0 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d328b5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d328b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d328ba je 0x12d328ec */
  if (C.zf) goto L_12d328ec;
L_12d328bc:;
  /* 12d328bc call 0x12d33970 */
  push32(0x12d328c1u); f_12d33970();
  /* 12d328c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d328c3 jne 0x12d328e6 */
  if (!C.zf) goto L_12d328e6;
  /* 12d328c5 push 0x12d494b0 */
  push32((uint32_t)(0x12d494b0u));
  /* 12d328ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12d328cc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12d328d1 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d328d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d328d8 call 0x12d31890 */
  push32(0x12d328ddu); f_12d31890();
  /* 12d328dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d328e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d328e3 jne 0x12d328e6 */
  if (!C.zf) goto L_12d328e6;
  /* 12d328e5 int3  */
  x86_unimpl("int3 @ 0x12d328e5");
L_12d328e6:;
  /* 12d328e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d328e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d328ea jne 0x12d328bc */
  if (!C.zf) goto L_12d328bc;
L_12d328ec:;
  /* 12d328ec mov edx, dword ptr [0x12d4caa8] */
  EDX = (r32((uint32_t)(0x12d4caa8)));
  /* 12d328f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d328f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d328f8 cmp eax, dword ptr [0x12d4caac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4caac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d328fe jne 0x12d32901 */
  if (!C.zf) goto L_12d32901;
  /* 12d32900 int3  */
  x86_unimpl("int3 @ 0x12d32900");
L_12d32901:;
  /* 12d32901 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32904 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32905 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32908 push edx */
  push32((uint32_t)(EDX));
  /* 12d32909 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3290c push eax */
  push32((uint32_t)(EAX));
  /* 12d3290d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32910 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32911 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32914 push edx */
  push32((uint32_t)(EDX));
  /* 12d32915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32917 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32919 call dword ptr [0x12d4ccb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ccb0))), 0x12d3291fu);
  /* 12d3291f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32924 jne 0x12d32984 */
  if (!C.zf) goto L_12d32984;
  /* 12d32926 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3292a je 0x12d32957 */
  if (C.zf) goto L_12d32957;
L_12d3292c:;
  /* 12d3292c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3292f push eax */
  push32((uint32_t)(EAX));
  /* 12d32930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32933 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32934 push 0x12d4946c */
  push32((uint32_t)(0x12d4946cu));
  /* 12d32939 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3293b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3293d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3293f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32941 call 0x12d31890 */
  push32(0x12d32946u); f_12d31890();
  /* 12d32946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3294c jne 0x12d3294f */
  if (!C.zf) goto L_12d3294f;
  /* 12d3294e int3  */
  x86_unimpl("int3 @ 0x12d3294e");
L_12d3294f:;
  /* 12d3294f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d32951 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d32953 jne 0x12d3292c */
  if (!C.zf) goto L_12d3292c;
  /* 12d32955 jmp 0x12d3297d */
  goto L_12d3297d;
L_12d32957:;
  /* 12d32957 push 0x12d49448 */
  push32((uint32_t)(0x12d49448u));
  /* 12d3295c push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d32961 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32963 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32965 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32967 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32969 call 0x12d31890 */
  push32(0x12d3296eu); f_12d31890();
  /* 12d3296e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32974 jne 0x12d32977 */
  if (!C.zf) goto L_12d32977;
  /* 12d32976 int3  */
  x86_unimpl("int3 @ 0x12d32976");
L_12d32977:;
  /* 12d32977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3297b jne 0x12d32957 */
  if (!C.zf) goto L_12d32957;
L_12d3297d:;
  /* 12d3297d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3297f jmp 0x12d32bac */
  goto L_12d32bac;
L_12d32984:;
  /* 12d32984 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32987 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3298d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32990 je 0x12d329a6 */
  if (C.zf) goto L_12d329a6;
  /* 12d32992 mov edx, dword ptr [0x12d4caa4] */
  EDX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d32998 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3299b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3299d jne 0x12d329a6 */
  if (!C.zf) goto L_12d329a6;
  /* 12d3299f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12d329a6:;
  /* 12d329a6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d329aa ja 0x12d329b7 */
  if ((!C.cf&&!C.zf)) goto L_12d329b7;
  /* 12d329ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d329af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d329b2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d329b5 jbe 0x12d329e3 */
  if ((C.cf||C.zf)) goto L_12d329e3;
L_12d329b7:;
  /* 12d329b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d329ba push ecx */
  push32((uint32_t)(ECX));
  /* 12d329bb push 0x12d49420 */
  push32((uint32_t)(0x12d49420u));
  /* 12d329c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d329c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d329c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d329c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d329c8 call 0x12d31890 */
  push32(0x12d329cdu); f_12d31890();
  /* 12d329cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d329d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d329d3 jne 0x12d329d6 */
  if (!C.zf) goto L_12d329d6;
  /* 12d329d5 int3  */
  x86_unimpl("int3 @ 0x12d329d5");
L_12d329d6:;
  /* 12d329d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d329d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d329da jne 0x12d329b7 */
  if (!C.zf) goto L_12d329b7;
  /* 12d329dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d329de jmp 0x12d32bac */
  goto L_12d32bac;
L_12d329e3:;
  /* 12d329e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d329e6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d329eb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d329ee je 0x12d32a30 */
  if (C.zf) goto L_12d32a30;
  /* 12d329f0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d329f4 je 0x12d32a30 */
  if (C.zf) goto L_12d32a30;
  /* 12d329f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d329f9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d329ff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32a02 je 0x12d32a30 */
  if (C.zf) goto L_12d32a30;
  /* 12d32a04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32a08 je 0x12d32a30 */
  if (C.zf) goto L_12d32a30;
L_12d32a0a:;
  /* 12d32a0a push 0x12d493ec */
  push32((uint32_t)(0x12d493ecu));
  /* 12d32a0f push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d32a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32a1a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32a1c call 0x12d31890 */
  push32(0x12d32a21u); f_12d31890();
  /* 12d32a21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32a24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32a27 jne 0x12d32a2a */
  if (!C.zf) goto L_12d32a2a;
  /* 12d32a29 int3  */
  x86_unimpl("int3 @ 0x12d32a29");
L_12d32a2a:;
  /* 12d32a2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d32a2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d32a2e jne 0x12d32a0a */
  if (!C.zf) goto L_12d32a0a;
L_12d32a30:;
  /* 12d32a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32a33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32a36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d32a39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d32a3c push ecx */
  push32((uint32_t)(ECX));
  /* 12d32a3d call 0x12d36620 */
  push32(0x12d32a42u); f_12d36620();
  /* 12d32a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32a45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d32a48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32a4c jne 0x12d32a55 */
  if (!C.zf) goto L_12d32a55;
  /* 12d32a4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32a50 jmp 0x12d32bac */
  goto L_12d32bac;
L_12d32a55:;
  /* 12d32a55 mov edx, dword ptr [0x12d4caa8] */
  EDX = (r32((uint32_t)(0x12d4caa8)));
  /* 12d32a5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32a5e mov dword ptr [0x12d4caa8], edx */
  w32((uint32_t)(0x12d4caa8), (EDX));
  /* 12d32a64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32a68 je 0x12d32ab3 */
  if (C.zf) goto L_12d32ab3;
  /* 12d32a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32a6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d32a73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32a76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d32a7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32a80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d32a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32a8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12d32a91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32a94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32a97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12d32a9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32a9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12d32aa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32aa7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12d32aae jmp 0x12d32b53 */
  goto L_12d32b53;
L_12d32ab3:;
  /* 12d32ab3 mov edx, dword ptr [0x12d4e4ac] */
  EDX = (r32((uint32_t)(0x12d4e4ac)));
  /* 12d32ab9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32abc mov dword ptr [0x12d4e4ac], edx */
  w32((uint32_t)(0x12d4e4ac), (EDX));
  /* 12d32ac2 mov eax, dword ptr [0x12d4e4b4] */
  EAX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32ac7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32aca mov dword ptr [0x12d4e4b4], eax */
  w32((uint32_t)(0x12d4e4b4), (EAX));
  /* 12d32acf mov ecx, dword ptr [0x12d4e4b4] */
  ECX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32ad5 cmp ecx, dword ptr [0x12d4e4b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4e4b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32adb jbe 0x12d32ae9 */
  if ((C.cf||C.zf)) goto L_12d32ae9;
  /* 12d32add mov edx, dword ptr [0x12d4e4b4] */
  EDX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32ae3 mov dword ptr [0x12d4e4b8], edx */
  w32((uint32_t)(0x12d4e4b8), (EDX));
L_12d32ae9:;
  /* 12d32ae9 cmp dword ptr [0x12d4e4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32af0 je 0x12d32aff */
  if (C.zf) goto L_12d32aff;
  /* 12d32af2 mov eax, dword ptr [0x12d4e4b0] */
  EAX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d32af7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32afa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d32afd jmp 0x12d32b08 */
  goto L_12d32b08;
L_12d32aff:;
  /* 12d32aff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b02 mov dword ptr [0x12d4e4a8], edx */
  w32((uint32_t)(0x12d4e4a8), (EDX));
L_12d32b08:;
  /* 12d32b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b0b mov ecx, dword ptr [0x12d4e4b0] */
  ECX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d32b11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d32b13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12d32b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32b23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d32b26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32b2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12d32b2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32b35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12d32b38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32b3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12d32b41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32b47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12d32b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b4d mov dword ptr [0x12d4e4b0], ecx */
  w32((uint32_t)(0x12d4e4b0), (ECX));
L_12d32b53:;
  /* 12d32b53 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d32b55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d32b57 mov dl, byte ptr [0x12d4cab0] */
  DL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d32b5d push edx */
  push32((uint32_t)(EDX));
  /* 12d32b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32b64 push eax */
  push32((uint32_t)(EAX));
  /* 12d32b65 call 0x12d36540 */
  push32(0x12d32b6au); f_12d36540();
  /* 12d32b6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32b6d push 4 */
  push32((uint32_t)(0x4u));
  /* 12d32b6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d32b71 mov cl, byte ptr [0x12d4cab0] */
  CL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d32b77 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32b7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12d32b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32b83 call 0x12d36540 */
  push32(0x12d32b88u); f_12d36540();
  /* 12d32b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32b8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32b8e push edx */
  push32((uint32_t)(EDX));
  /* 12d32b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32b91 mov al, byte ptr [0x12d4cab2] */
  AL = (r8((uint32_t)(0x12d4cab2)));
  /* 12d32b96 push eax */
  push32((uint32_t)(EAX));
  /* 12d32b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32b9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32b9d push ecx */
  push32((uint32_t)(ECX));
  /* 12d32b9e call 0x12d36540 */
  push32(0x12d32ba3u); f_12d36540();
  /* 12d32ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32ba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32ba9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d32bac:;
  /* 12d32bac pop edi */
  EDI = (pop32());
  /* 12d32bad pop esi */
  ESI = (pop32());
  /* 12d32bae pop ebx */
  EBX = (pop32());
  /* 12d32baf mov esp, ebp */
  ESP = (EBP);
  /* 12d32bb1 pop ebp */
  EBP = (pop32());
  /* 12d32bb2 ret  */
  ESPCHK(0x12d328a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc0 @ 0x12d32bc0 (27 bytes, 13 insns) */
void f_12d32bc0(void) {
  FTRACE(0x12d32bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d32bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32bc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32bc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32bcc push eax */
  push32((uint32_t)(EAX));
  /* 12d32bcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32bd1 call 0x12d32be0 */
  push32(0x12d32bd6u); f_12d32be0();
  /* 12d32bd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32bd9 pop ebp */
  EBP = (pop32());
  /* 12d32bda ret  */
  ESPCHK(0x12d32bc0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12d32be0 (96 bytes, 37 insns) */
void f_12d32be0(void) {
  FTRACE(0x12d32be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32be1 mov ebp, esp */
  EBP = (ESP);
  /* 12d32be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32be6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32be9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d32bed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d32bf0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d32bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32bf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32bf7 push edx */
  push32((uint32_t)(EDX));
  /* 12d32bf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32bfb push eax */
  push32((uint32_t)(EAX));
  /* 12d32bfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32bff push ecx */
  push32((uint32_t)(ECX));
  /* 12d32c00 call 0x12d327d0 */
  push32(0x12d32c05u); f_12d327d0();
  /* 12d32c05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d32c0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32c0f je 0x12d32c39 */
  if (C.zf) goto L_12d32c39;
  /* 12d32c11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32c14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d32c17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32c1a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d32c20:;
  /* 12d32c20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32c23 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32c26 jae 0x12d32c39 */
  if (!C.cf) goto L_12d32c39;
  /* 12d32c28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32c2b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d32c2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32c31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d32c37 jmp 0x12d32c20 */
  goto L_12d32c20;
L_12d32c39:;
  /* 12d32c39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32c3c mov esp, ebp */
  ESP = (EBP);
  /* 12d32c3e pop ebp */
  EBP = (pop32());
  /* 12d32c3f ret  */
  ESPCHK(0x12d32be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c40 @ 0x12d32c40 (27 bytes, 13 insns) */
void f_12d32c40(void) {
  FTRACE(0x12d32c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32c41 mov ebp, esp */
  EBP = (ESP);
  /* 12d32c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32c49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32c4c push eax */
  push32((uint32_t)(EAX));
  /* 12d32c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32c51 call 0x12d32c60 */
  push32(0x12d32c56u); f_12d32c60();
  /* 12d32c56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c59 pop ebp */
  EBP = (pop32());
  /* 12d32c5a ret  */
  ESPCHK(0x12d32c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c60 @ 0x12d32c60 (64 bytes, 27 insns) */
void f_12d32c60(void) {
  FTRACE(0x12d32c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32c61 mov ebp, esp */
  EBP = (ESP);
  /* 12d32c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32c64 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d32c66 call 0x12d361d0 */
  push32(0x12d32c6bu); f_12d361d0();
  /* 12d32c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32c70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d32c73 push eax */
  push32((uint32_t)(EAX));
  /* 12d32c74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32c77 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32c78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32c7b push edx */
  push32((uint32_t)(EDX));
  /* 12d32c7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32c7f push eax */
  push32((uint32_t)(EAX));
  /* 12d32c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32c84 call 0x12d32ca0 */
  push32(0x12d32c89u); f_12d32ca0();
  /* 12d32c89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d32c8f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d32c91 call 0x12d36270 */
  push32(0x12d32c96u); f_12d36270();
  /* 12d32c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32c99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d32c9c mov esp, ebp */
  ESP = (EBP);
  /* 12d32c9e pop ebp */
  EBP = (pop32());
  /* 12d32c9f ret  */
  ESPCHK(0x12d32c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x12d32ca0 (1297 bytes, 431 insns) */
void f_12d32ca0(void) {
  FTRACE(0x12d32ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d32ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d32ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12d32ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d32ca7 push esi */
  push32((uint32_t)(ESI));
  /* 12d32ca8 push edi */
  push32((uint32_t)(EDI));
  /* 12d32ca9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d32cb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32cb4 jne 0x12d32cd3 */
  if (!C.zf) goto L_12d32cd3;
  /* 12d32cb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d32cb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d32cba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32cbd push ecx */
  push32((uint32_t)(ECX));
  /* 12d32cbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32cc1 push edx */
  push32((uint32_t)(EDX));
  /* 12d32cc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32cc5 push eax */
  push32((uint32_t)(EAX));
  /* 12d32cc6 call 0x12d327d0 */
  push32(0x12d32ccbu); f_12d327d0();
  /* 12d32ccb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32cce jmp 0x12d331aa */
  goto L_12d331aa;
L_12d32cd3:;
  /* 12d32cd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32cd7 je 0x12d32cf6 */
  if (C.zf) goto L_12d32cf6;
  /* 12d32cd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32cdd jne 0x12d32cf6 */
  if (!C.zf) goto L_12d32cf6;
  /* 12d32cdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32ce3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32ce6 push edx */
  push32((uint32_t)(EDX));
  /* 12d32ce7 call 0x12d33260 */
  push32(0x12d32cecu); f_12d33260();
  /* 12d32cec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32cf1 jmp 0x12d331aa */
  goto L_12d331aa;
L_12d32cf6:;
  /* 12d32cf6 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d32cfb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d32cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32d00 je 0x12d32d32 */
  if (C.zf) goto L_12d32d32;
L_12d32d02:;
  /* 12d32d02 call 0x12d33970 */
  push32(0x12d32d07u); f_12d33970();
  /* 12d32d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32d09 jne 0x12d32d2c */
  if (!C.zf) goto L_12d32d2c;
  /* 12d32d0b push 0x12d494b0 */
  push32((uint32_t)(0x12d494b0u));
  /* 12d32d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32d12 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12d32d17 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d32d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32d1e call 0x12d31890 */
  push32(0x12d32d23u); f_12d31890();
  /* 12d32d23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32d26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32d29 jne 0x12d32d2c */
  if (!C.zf) goto L_12d32d2c;
  /* 12d32d2b int3  */
  x86_unimpl("int3 @ 0x12d32d2b");
L_12d32d2c:;
  /* 12d32d2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d32d2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d32d30 jne 0x12d32d02 */
  if (!C.zf) goto L_12d32d02;
L_12d32d32:;
  /* 12d32d32 mov edx, dword ptr [0x12d4caa8] */
  EDX = (r32((uint32_t)(0x12d4caa8)));
  /* 12d32d38 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d32d3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d32d3e cmp eax, dword ptr [0x12d4caac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4caac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32d44 jne 0x12d32d47 */
  if (!C.zf) goto L_12d32d47;
  /* 12d32d46 int3  */
  x86_unimpl("int3 @ 0x12d32d46");
L_12d32d47:;
  /* 12d32d47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d32d4a push ecx */
  push32((uint32_t)(ECX));
  /* 12d32d4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32d4e push edx */
  push32((uint32_t)(EDX));
  /* 12d32d4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d32d52 push eax */
  push32((uint32_t)(EAX));
  /* 12d32d53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32d56 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32d57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32d5a push edx */
  push32((uint32_t)(EDX));
  /* 12d32d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32d5e push eax */
  push32((uint32_t)(EAX));
  /* 12d32d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32d61 call dword ptr [0x12d4ccb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ccb0))), 0x12d32d67u);
  /* 12d32d67 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32d6c jne 0x12d32dcc */
  if (!C.zf) goto L_12d32dcc;
  /* 12d32d6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32d72 je 0x12d32d9f */
  if (C.zf) goto L_12d32d9f;
L_12d32d74:;
  /* 12d32d74 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d32d77 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32d78 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d32d7b push edx */
  push32((uint32_t)(EDX));
  /* 12d32d7c push 0x12d4962c */
  push32((uint32_t)(0x12d4962cu));
  /* 12d32d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32d89 call 0x12d31890 */
  push32(0x12d32d8eu); f_12d31890();
  /* 12d32d8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32d91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32d94 jne 0x12d32d97 */
  if (!C.zf) goto L_12d32d97;
  /* 12d32d96 int3  */
  x86_unimpl("int3 @ 0x12d32d96");
L_12d32d97:;
  /* 12d32d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32d9b jne 0x12d32d74 */
  if (!C.zf) goto L_12d32d74;
  /* 12d32d9d jmp 0x12d32dc5 */
  goto L_12d32dc5;
L_12d32d9f:;
  /* 12d32d9f push 0x12d49608 */
  push32((uint32_t)(0x12d49608u));
  /* 12d32da4 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d32da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32dab push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32dad push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32db1 call 0x12d31890 */
  push32(0x12d32db6u); f_12d31890();
  /* 12d32db6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32db9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32dbc jne 0x12d32dbf */
  if (!C.zf) goto L_12d32dbf;
  /* 12d32dbe int3  */
  x86_unimpl("int3 @ 0x12d32dbe");
L_12d32dbf:;
  /* 12d32dbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d32dc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d32dc3 jne 0x12d32d9f */
  if (!C.zf) goto L_12d32d9f;
L_12d32dc5:;
  /* 12d32dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32dc7 jmp 0x12d331aa */
  goto L_12d331aa;
L_12d32dcc:;
  /* 12d32dcc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32dd0 jbe 0x12d32dfe */
  if ((C.cf||C.zf)) goto L_12d32dfe;
L_12d32dd2:;
  /* 12d32dd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32dd5 push edx */
  push32((uint32_t)(EDX));
  /* 12d32dd6 push 0x12d495d8 */
  push32((uint32_t)(0x12d495d8u));
  /* 12d32ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32de1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32de3 call 0x12d31890 */
  push32(0x12d32de8u); f_12d31890();
  /* 12d32de8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32deb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32dee jne 0x12d32df1 */
  if (!C.zf) goto L_12d32df1;
  /* 12d32df0 int3  */
  x86_unimpl("int3 @ 0x12d32df0");
L_12d32df1:;
  /* 12d32df1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32df3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32df5 jne 0x12d32dd2 */
  if (!C.zf) goto L_12d32dd2;
  /* 12d32df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32df9 jmp 0x12d331aa */
  goto L_12d331aa;
L_12d32dfe:;
  /* 12d32dfe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e02 je 0x12d32e46 */
  if (C.zf) goto L_12d32e46;
  /* 12d32e04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32e07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d32e0d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e10 je 0x12d32e46 */
  if (C.zf) goto L_12d32e46;
  /* 12d32e12 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32e15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d32e1b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e1e je 0x12d32e46 */
  if (C.zf) goto L_12d32e46;
L_12d32e20:;
  /* 12d32e20 push 0x12d493ec */
  push32((uint32_t)(0x12d493ecu));
  /* 12d32e25 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d32e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32e2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32e30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d32e32 call 0x12d31890 */
  push32(0x12d32e37u); f_12d31890();
  /* 12d32e37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32e3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e3d jne 0x12d32e40 */
  if (!C.zf) goto L_12d32e40;
  /* 12d32e3f int3  */
  x86_unimpl("int3 @ 0x12d32e3f");
L_12d32e40:;
  /* 12d32e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32e44 jne 0x12d32e20 */
  if (!C.zf) goto L_12d32e20;
L_12d32e46:;
  /* 12d32e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32e49 push ecx */
  push32((uint32_t)(ECX));
  /* 12d32e4a call 0x12d33dd0 */
  push32(0x12d32e4fu); f_12d33dd0();
  /* 12d32e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d32e54 jne 0x12d32e77 */
  if (!C.zf) goto L_12d32e77;
  /* 12d32e56 push 0x12d495b4 */
  push32((uint32_t)(0x12d495b4u));
  /* 12d32e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32e5d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12d32e62 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d32e67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32e69 call 0x12d31890 */
  push32(0x12d32e6eu); f_12d31890();
  /* 12d32e6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32e71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e74 jne 0x12d32e77 */
  if (!C.zf) goto L_12d32e77;
  /* 12d32e76 int3  */
  x86_unimpl("int3 @ 0x12d32e76");
L_12d32e77:;
  /* 12d32e77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d32e79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d32e7b jne 0x12d32e46 */
  if (!C.zf) goto L_12d32e46;
  /* 12d32e7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d32e80 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32e83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d32e86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32e89 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e8d jne 0x12d32e96 */
  if (!C.zf) goto L_12d32e96;
  /* 12d32e8f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12d32e96:;
  /* 12d32e96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32e9a je 0x12d32eda */
  if (C.zf) goto L_12d32eda;
L_12d32e9c:;
  /* 12d32e9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32e9f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32ea6 jne 0x12d32eb1 */
  if (!C.zf) goto L_12d32eb1;
  /* 12d32ea8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32eab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32eaf je 0x12d32ed2 */
  if (C.zf) goto L_12d32ed2;
L_12d32eb1:;
  /* 12d32eb1 push 0x12d4956c */
  push32((uint32_t)(0x12d4956cu));
  /* 12d32eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32eb8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12d32ebd push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d32ec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32ec4 call 0x12d31890 */
  push32(0x12d32ec9u); f_12d31890();
  /* 12d32ec9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32ecc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32ecf jne 0x12d32ed2 */
  if (!C.zf) goto L_12d32ed2;
  /* 12d32ed1 int3  */
  x86_unimpl("int3 @ 0x12d32ed1");
L_12d32ed2:;
  /* 12d32ed2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d32ed4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d32ed6 jne 0x12d32e9c */
  if (!C.zf) goto L_12d32e9c;
  /* 12d32ed8 jmp 0x12d32f3e */
  goto L_12d32f3e;
L_12d32eda:;
  /* 12d32eda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32edd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d32ee0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d32ee5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32ee8 jne 0x12d32eff */
  if (!C.zf) goto L_12d32eff;
  /* 12d32eea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32eed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d32ef3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32ef6 jne 0x12d32eff */
  if (!C.zf) goto L_12d32eff;
  /* 12d32ef8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12d32eff:;
  /* 12d32eff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32f02 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d32f05 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d32f0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d32f0d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d32f13 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32f15 je 0x12d32f38 */
  if (C.zf) goto L_12d32f38;
  /* 12d32f17 push 0x12d49530 */
  push32((uint32_t)(0x12d49530u));
  /* 12d32f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d32f1e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12d32f23 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d32f28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d32f2a call 0x12d31890 */
  push32(0x12d32f2fu); f_12d31890();
  /* 12d32f2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32f32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32f35 jne 0x12d32f38 */
  if (!C.zf) goto L_12d32f38;
  /* 12d32f37 int3  */
  x86_unimpl("int3 @ 0x12d32f37");
L_12d32f38:;
  /* 12d32f38 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d32f3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d32f3c jne 0x12d32eff */
  if (!C.zf) goto L_12d32eff;
L_12d32f3e:;
  /* 12d32f3e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32f42 je 0x12d32f69 */
  if (C.zf) goto L_12d32f69;
  /* 12d32f44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32f47 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32f4a push eax */
  push32((uint32_t)(EAX));
  /* 12d32f4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32f4e push ecx */
  push32((uint32_t)(ECX));
  /* 12d32f4f call 0x12d36750 */
  push32(0x12d32f54u); f_12d36750();
  /* 12d32f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32f57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d32f5a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32f5e jne 0x12d32f67 */
  if (!C.zf) goto L_12d32f67;
  /* 12d32f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32f62 jmp 0x12d331aa */
  goto L_12d331aa;
L_12d32f67:;
  /* 12d32f67 jmp 0x12d32f8c */
  goto L_12d32f8c;
L_12d32f69:;
  /* 12d32f69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d32f6c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32f6f push edx */
  push32((uint32_t)(EDX));
  /* 12d32f70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d32f73 push eax */
  push32((uint32_t)(EAX));
  /* 12d32f74 call 0x12d366a0 */
  push32(0x12d32f79u); f_12d366a0();
  /* 12d32f79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32f7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d32f7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32f83 jne 0x12d32f8c */
  if (!C.zf) goto L_12d32f8c;
  /* 12d32f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d32f87 jmp 0x12d331aa */
  goto L_12d331aa;
L_12d32f8c:;
  /* 12d32f8c mov ecx, dword ptr [0x12d4caa8] */
  ECX = (r32((uint32_t)(0x12d4caa8)));
  /* 12d32f92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32f95 mov dword ptr [0x12d4caa8], ecx */
  w32((uint32_t)(0x12d4caa8), (ECX));
  /* 12d32f9b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32f9f jne 0x12d32ff7 */
  if (!C.zf) goto L_12d32ff7;
  /* 12d32fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32fa4 mov eax, dword ptr [0x12d4e4ac] */
  EAX = (r32((uint32_t)(0x12d4e4ac)));
  /* 12d32fa9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32fac mov dword ptr [0x12d4e4ac], eax */
  w32((uint32_t)(0x12d4e4ac), (EAX));
  /* 12d32fb1 mov ecx, dword ptr [0x12d4e4ac] */
  ECX = (r32((uint32_t)(0x12d4e4ac)));
  /* 12d32fb7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32fba mov dword ptr [0x12d4e4ac], ecx */
  w32((uint32_t)(0x12d4e4ac), (ECX));
  /* 12d32fc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32fc3 mov eax, dword ptr [0x12d4e4b4] */
  EAX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32fc8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d32fcb mov dword ptr [0x12d4e4b4], eax */
  w32((uint32_t)(0x12d4e4b4), (EAX));
  /* 12d32fd0 mov ecx, dword ptr [0x12d4e4b4] */
  ECX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32fd6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32fd9 mov dword ptr [0x12d4e4b4], ecx */
  w32((uint32_t)(0x12d4e4b4), (ECX));
  /* 12d32fdf mov edx, dword ptr [0x12d4e4b4] */
  EDX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32fe5 cmp edx, dword ptr [0x12d4e4b8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4e4b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d32feb jbe 0x12d32ff7 */
  if ((C.cf||C.zf)) goto L_12d32ff7;
  /* 12d32fed mov eax, dword ptr [0x12d4e4b4] */
  EAX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d32ff2 mov dword ptr [0x12d4e4b8], eax */
  w32((uint32_t)(0x12d4e4b8), (EAX));
L_12d32ff7:;
  /* 12d32ff7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d32ffa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d32ffd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d33000 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33003 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33006 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33009 jbe 0x12d3302f */
  if ((C.cf||C.zf)) goto L_12d3302f;
  /* 12d3300b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3300e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33011 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33014 push edx */
  push32((uint32_t)(EDX));
  /* 12d33015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33017 mov al, byte ptr [0x12d4cab2] */
  AL = (r8((uint32_t)(0x12d4cab2)));
  /* 12d3301c push eax */
  push32((uint32_t)(EAX));
  /* 12d3301d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33020 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33023 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33026 push edx */
  push32((uint32_t)(EDX));
  /* 12d33027 call 0x12d36540 */
  push32(0x12d3302cu); f_12d36540();
  /* 12d3302c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3302f:;
  /* 12d3302f push 4 */
  push32((uint32_t)(0x4u));
  /* 12d33031 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33033 mov al, byte ptr [0x12d4cab0] */
  AL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d33038 push eax */
  push32((uint32_t)(EAX));
  /* 12d33039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3303c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3303f push ecx */
  push32((uint32_t)(ECX));
  /* 12d33040 call 0x12d36540 */
  push32(0x12d33045u); f_12d36540();
  /* 12d33045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33048 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3304c jne 0x12d33069 */
  if (!C.zf) goto L_12d33069;
  /* 12d3304e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33051 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d33054 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d33057 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3305a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3305d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12d33060 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33063 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d33066 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12d33069:;
  /* 12d33069 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3306c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3306f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12d33072:;
  /* 12d33072 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33076 jne 0x12d330a7 */
  if (!C.zf) goto L_12d330a7;
  /* 12d33078 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3307c jne 0x12d33086 */
  if (!C.zf) goto L_12d33086;
  /* 12d3307e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33081 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33084 je 0x12d330a7 */
  if (C.zf) goto L_12d330a7;
L_12d33086:;
  /* 12d33086 push 0x12d494fc */
  push32((uint32_t)(0x12d494fcu));
  /* 12d3308b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3308d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12d33092 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d33097 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d33099 call 0x12d31890 */
  push32(0x12d3309eu); f_12d31890();
  /* 12d3309e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d330a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d330a4 jne 0x12d330a7 */
  if (!C.zf) goto L_12d330a7;
  /* 12d330a6 int3  */
  x86_unimpl("int3 @ 0x12d330a6");
L_12d330a7:;
  /* 12d330a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d330a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d330ab jne 0x12d33072 */
  if (!C.zf) goto L_12d33072;
  /* 12d330ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d330b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d330b3 je 0x12d330bb */
  if (C.zf) goto L_12d330bb;
  /* 12d330b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d330b9 je 0x12d330c3 */
  if (C.zf) goto L_12d330c3;
L_12d330bb:;
  /* 12d330bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d330be jmp 0x12d331aa */
  goto L_12d331aa;
L_12d330c3:;
  /* 12d330c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d330c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d330c9 je 0x12d330db */
  if (C.zf) goto L_12d330db;
  /* 12d330cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d330ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d330d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d330d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d330d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d330d9 jmp 0x12d33117 */
  goto L_12d33117;
L_12d330db:;
  /* 12d330db mov eax, dword ptr [0x12d4e4a8] */
  EAX = (r32((uint32_t)(0x12d4e4a8)));
  /* 12d330e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d330e3 je 0x12d33106 */
  if (C.zf) goto L_12d33106;
  /* 12d330e5 push 0x12d494e0 */
  push32((uint32_t)(0x12d494e0u));
  /* 12d330ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d330ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12d330f1 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d330f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d330f8 call 0x12d31890 */
  push32(0x12d330fdu); f_12d31890();
  /* 12d330fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33100 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33103 jne 0x12d33106 */
  if (!C.zf) goto L_12d33106;
  /* 12d33105 int3  */
  x86_unimpl("int3 @ 0x12d33105");
L_12d33106:;
  /* 12d33106 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d33108 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3310a jne 0x12d330db */
  if (!C.zf) goto L_12d330db;
  /* 12d3310c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3310f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d33112 mov dword ptr [0x12d4e4a8], eax */
  w32((uint32_t)(0x12d4e4a8), (EAX));
L_12d33117:;
  /* 12d33117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3311a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3311e je 0x12d3312f */
  if (C.zf) goto L_12d3312f;
  /* 12d33120 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33123 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d33126 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33129 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3312b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3312d jmp 0x12d3316a */
  goto L_12d3316a;
L_12d3312f:;
  /* 12d3312f mov eax, dword ptr [0x12d4e4b0] */
  EAX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33134 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33137 je 0x12d3315a */
  if (C.zf) goto L_12d3315a;
  /* 12d33139 push 0x12d494c4 */
  push32((uint32_t)(0x12d494c4u));
  /* 12d3313e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33140 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12d33145 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d3314a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3314c call 0x12d31890 */
  push32(0x12d33151u); f_12d31890();
  /* 12d33151 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33154 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33157 jne 0x12d3315a */
  if (!C.zf) goto L_12d3315a;
  /* 12d33159 int3  */
  x86_unimpl("int3 @ 0x12d33159");
L_12d3315a:;
  /* 12d3315a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3315c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3315e jne 0x12d3312f */
  if (!C.zf) goto L_12d3312f;
  /* 12d33160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33163 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d33165 mov dword ptr [0x12d4e4b0], eax */
  w32((uint32_t)(0x12d4e4b0), (EAX));
L_12d3316a:;
  /* 12d3316a cmp dword ptr [0x12d4e4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33171 je 0x12d33181 */
  if (C.zf) goto L_12d33181;
  /* 12d33173 mov ecx, dword ptr [0x12d4e4b0] */
  ECX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33179 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3317c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d3317f jmp 0x12d33189 */
  goto L_12d33189;
L_12d33181:;
  /* 12d33181 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33184 mov dword ptr [0x12d4e4a8], eax */
  w32((uint32_t)(0x12d4e4a8), (EAX));
L_12d33189:;
  /* 12d33189 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3318c mov edx, dword ptr [0x12d4e4b0] */
  EDX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33192 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d33194 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d33197 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d3319e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d331a1 mov dword ptr [0x12d4e4b0], ecx */
  w32((uint32_t)(0x12d4e4b0), (ECX));
  /* 12d331a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d331aa:;
  /* 12d331aa pop edi */
  EDI = (pop32());
  /* 12d331ab pop esi */
  ESI = (pop32());
  /* 12d331ac pop ebx */
  EBX = (pop32());
  /* 12d331ad mov esp, ebp */
  ESP = (EBP);
  /* 12d331af pop ebp */
  EBP = (pop32());
  /* 12d331b0 ret  */
  ESPCHK(0x12d32ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x12d331c0 (27 bytes, 13 insns) */
void f_12d331c0(void) {
  FTRACE(0x12d331c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d331c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d331c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d331c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d331c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d331c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d331c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d331cc push eax */
  push32((uint32_t)(EAX));
  /* 12d331cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d331d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d331d1 call 0x12d331e0 */
  push32(0x12d331d6u); f_12d331e0();
  /* 12d331d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d331d9 pop ebp */
  EBP = (pop32());
  /* 12d331da ret  */
  ESPCHK(0x12d331c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e0 @ 0x12d331e0 (64 bytes, 27 insns) */
void f_12d331e0(void) {
  FTRACE(0x12d331e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d331e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d331e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d331e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d331e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d331e6 call 0x12d361d0 */
  push32(0x12d331ebu); f_12d361d0();
  /* 12d331eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d331ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d331f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d331f3 push eax */
  push32((uint32_t)(EAX));
  /* 12d331f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d331f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d331f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d331fb push edx */
  push32((uint32_t)(EDX));
  /* 12d331fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d331ff push eax */
  push32((uint32_t)(EAX));
  /* 12d33200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33203 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33204 call 0x12d32ca0 */
  push32(0x12d33209u); f_12d32ca0();
  /* 12d33209 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3320c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3320f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33211 call 0x12d36270 */
  push32(0x12d33216u); f_12d36270();
  /* 12d33216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3321c mov esp, ebp */
  ESP = (EBP);
  /* 12d3321e pop ebp */
  EBP = (pop32());
  /* 12d3321f ret  */
  ESPCHK(0x12d331e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003220 @ 0x12d33220 (19 bytes, 9 insns) */
void f_12d33220(void) {
  FTRACE(0x12d33220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33220 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33221 mov ebp, esp */
  EBP = (ESP);
  /* 12d33223 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d33225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33228 push eax */
  push32((uint32_t)(EAX));
  /* 12d33229 call 0x12d33260 */
  push32(0x12d3322eu); f_12d33260();
  /* 12d3322e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33231 pop ebp */
  EBP = (pop32());
  /* 12d33232 ret  */
  ESPCHK(0x12d33220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003240 @ 0x12d33240 (19 bytes, 9 insns) */
void f_12d33240(void) {
  FTRACE(0x12d33240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33240 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33241 mov ebp, esp */
  EBP = (ESP);
  /* 12d33243 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d33245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33248 push eax */
  push32((uint32_t)(EAX));
  /* 12d33249 call 0x12d33290 */
  push32(0x12d3324eu); f_12d33290();
  /* 12d3324e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33251 pop ebp */
  EBP = (pop32());
  /* 12d33252 ret  */
  ESPCHK(0x12d33240u, _esp0);
  ESP += 4; return;
}

/* FUN_10003260 @ 0x12d33260 (41 bytes, 16 insns) */
void f_12d33260(void) {
  FTRACE(0x12d33260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33260 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33261 mov ebp, esp */
  EBP = (ESP);
  /* 12d33263 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33265 call 0x12d361d0 */
  push32(0x12d3326au); f_12d361d0();
  /* 12d3326a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3326d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33270 push eax */
  push32((uint32_t)(EAX));
  /* 12d33271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33274 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33275 call 0x12d33290 */
  push32(0x12d3327au); f_12d33290();
  /* 12d3327a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3327d push 9 */
  push32((uint32_t)(0x9u));
  /* 12d3327f call 0x12d36270 */
  push32(0x12d33284u); f_12d36270();
  /* 12d33284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33287 pop ebp */
  EBP = (pop32());
  /* 12d33288 ret  */
  ESPCHK(0x12d33260u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x12d33290 (1004 bytes, 342 insns) */
void f_12d33290(void) {
  FTRACE(0x12d33290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33290 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33291 mov ebp, esp */
  EBP = (ESP);
  /* 12d33293 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33294 push ebx */
  push32((uint32_t)(EBX));
  /* 12d33295 push esi */
  push32((uint32_t)(ESI));
  /* 12d33296 push edi */
  push32((uint32_t)(EDI));
  /* 12d33297 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d3329c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3329f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d332a1 je 0x12d332d3 */
  if (C.zf) goto L_12d332d3;
L_12d332a3:;
  /* 12d332a3 call 0x12d33970 */
  push32(0x12d332a8u); f_12d33970();
  /* 12d332a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d332aa jne 0x12d332cd */
  if (!C.zf) goto L_12d332cd;
  /* 12d332ac push 0x12d494b0 */
  push32((uint32_t)(0x12d494b0u));
  /* 12d332b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d332b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12d332b8 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d332bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d332bf call 0x12d31890 */
  push32(0x12d332c4u); f_12d31890();
  /* 12d332c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d332c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d332ca jne 0x12d332cd */
  if (!C.zf) goto L_12d332cd;
  /* 12d332cc int3  */
  x86_unimpl("int3 @ 0x12d332cc");
L_12d332cd:;
  /* 12d332cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d332cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d332d1 jne 0x12d332a3 */
  if (!C.zf) goto L_12d332a3;
L_12d332d3:;
  /* 12d332d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d332d7 jne 0x12d332de */
  if (!C.zf) goto L_12d332de;
  /* 12d332d9 jmp 0x12d33675 */
  goto L_12d33675;
L_12d332de:;
  /* 12d332de push 0 */
  push32((uint32_t)(0x0u));
  /* 12d332e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d332e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d332e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d332e7 push edx */
  push32((uint32_t)(EDX));
  /* 12d332e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d332ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d332ed push eax */
  push32((uint32_t)(EAX));
  /* 12d332ee push 3 */
  push32((uint32_t)(0x3u));
  /* 12d332f0 call dword ptr [0x12d4ccb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4ccb0))), 0x12d332f6u);
  /* 12d332f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d332f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d332fb jne 0x12d33328 */
  if (!C.zf) goto L_12d33328;
L_12d332fd:;
  /* 12d332fd push 0x12d49774 */
  push32((uint32_t)(0x12d49774u));
  /* 12d33302 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d33307 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33309 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3330b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3330d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3330f call 0x12d31890 */
  push32(0x12d33314u); f_12d31890();
  /* 12d33314 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3331a jne 0x12d3331d */
  if (!C.zf) goto L_12d3331d;
  /* 12d3331c int3  */
  x86_unimpl("int3 @ 0x12d3331c");
L_12d3331d:;
  /* 12d3331d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3331f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33321 jne 0x12d332fd */
  if (!C.zf) goto L_12d332fd;
  /* 12d33323 jmp 0x12d33675 */
  goto L_12d33675;
L_12d33328:;
  /* 12d33328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3332b push edx */
  push32((uint32_t)(EDX));
  /* 12d3332c call 0x12d33dd0 */
  push32(0x12d33331u); f_12d33dd0();
  /* 12d33331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33336 jne 0x12d33359 */
  if (!C.zf) goto L_12d33359;
  /* 12d33338 push 0x12d495b4 */
  push32((uint32_t)(0x12d495b4u));
  /* 12d3333d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3333f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12d33344 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d33349 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3334b call 0x12d31890 */
  push32(0x12d33350u); f_12d31890();
  /* 12d33350 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33353 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33356 jne 0x12d33359 */
  if (!C.zf) goto L_12d33359;
  /* 12d33358 int3  */
  x86_unimpl("int3 @ 0x12d33358");
L_12d33359:;
  /* 12d33359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3335b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3335d jne 0x12d33328 */
  if (!C.zf) goto L_12d33328;
  /* 12d3335f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33362 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33365 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d33368:;
  /* 12d33368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3336b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d3336e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d33373 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33376 je 0x12d333bb */
  if (C.zf) goto L_12d333bb;
  /* 12d33378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3337b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3337f je 0x12d333bb */
  if (C.zf) goto L_12d333bb;
  /* 12d33381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33384 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33387 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3338c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3338f je 0x12d333bb */
  if (C.zf) goto L_12d333bb;
  /* 12d33391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33394 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33398 je 0x12d333bb */
  if (C.zf) goto L_12d333bb;
  /* 12d3339a push 0x12d4974c */
  push32((uint32_t)(0x12d4974cu));
  /* 12d3339f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d333a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12d333a6 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d333ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12d333ad call 0x12d31890 */
  push32(0x12d333b2u); f_12d31890();
  /* 12d333b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d333b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d333b8 jne 0x12d333bb */
  if (!C.zf) goto L_12d333bb;
  /* 12d333ba int3  */
  x86_unimpl("int3 @ 0x12d333ba");
L_12d333bb:;
  /* 12d333bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d333bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d333bf jne 0x12d33368 */
  if (!C.zf) goto L_12d33368;
  /* 12d333c1 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d333c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d333c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d333cb jne 0x12d33496 */
  if (!C.zf) goto L_12d33496;
  /* 12d333d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d333d3 mov cl, byte ptr [0x12d4cab0] */
  CL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d333d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d333da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d333dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d333e0 push edx */
  push32((uint32_t)(EDX));
  /* 12d333e1 call 0x12d338e0 */
  push32(0x12d333e6u); f_12d338e0();
  /* 12d333e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d333e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d333eb jne 0x12d33430 */
  if (!C.zf) goto L_12d33430;
L_12d333ed:;
  /* 12d333ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d333f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d333f3 push eax */
  push32((uint32_t)(EAX));
  /* 12d333f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d333f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d333fa push edx */
  push32((uint32_t)(EDX));
  /* 12d333fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d333fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d33401 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d33407 mov edx, dword ptr [ecx*4 + 0x12d4cab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4cab4)));
  /* 12d3340e push edx */
  push32((uint32_t)(EDX));
  /* 12d3340f push 0x12d49720 */
  push32((uint32_t)(0x12d49720u));
  /* 12d33414 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33416 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33418 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3341a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3341c call 0x12d31890 */
  push32(0x12d33421u); f_12d31890();
  /* 12d33421 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33424 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33427 jne 0x12d3342a */
  if (!C.zf) goto L_12d3342a;
  /* 12d33429 int3  */
  x86_unimpl("int3 @ 0x12d33429");
L_12d3342a:;
  /* 12d3342a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3342c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3342e jne 0x12d333ed */
  if (!C.zf) goto L_12d333ed;
L_12d33430:;
  /* 12d33430 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d33432 mov cl, byte ptr [0x12d4cab0] */
  CL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d33438 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3343c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d3343f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33442 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12d33446 push edx */
  push32((uint32_t)(EDX));
  /* 12d33447 call 0x12d338e0 */
  push32(0x12d3344cu); f_12d338e0();
  /* 12d3344c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3344f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33451 jne 0x12d33496 */
  if (!C.zf) goto L_12d33496;
L_12d33453:;
  /* 12d33453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33456 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33459 push eax */
  push32((uint32_t)(EAX));
  /* 12d3345a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3345d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d33460 push edx */
  push32((uint32_t)(EDX));
  /* 12d33461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33464 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d33467 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3346d mov edx, dword ptr [ecx*4 + 0x12d4cab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4cab4)));
  /* 12d33474 push edx */
  push32((uint32_t)(EDX));
  /* 12d33475 push 0x12d496f4 */
  push32((uint32_t)(0x12d496f4u));
  /* 12d3347a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3347c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3347e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33480 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d33482 call 0x12d31890 */
  push32(0x12d33487u); f_12d31890();
  /* 12d33487 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3348a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3348d jne 0x12d33490 */
  if (!C.zf) goto L_12d33490;
  /* 12d3348f int3  */
  x86_unimpl("int3 @ 0x12d3348f");
L_12d33490:;
  /* 12d33490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33494 jne 0x12d33453 */
  if (!C.zf) goto L_12d33453;
L_12d33496:;
  /* 12d33496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33499 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3349d jne 0x12d3350b */
  if (!C.zf) goto L_12d3350b;
L_12d3349f:;
  /* 12d3349f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d334a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d334a9 jne 0x12d334b4 */
  if (!C.zf) goto L_12d334b4;
  /* 12d334ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d334ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d334b2 je 0x12d334d5 */
  if (C.zf) goto L_12d334d5;
L_12d334b4:;
  /* 12d334b4 push 0x12d496b4 */
  push32((uint32_t)(0x12d496b4u));
  /* 12d334b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d334bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12d334c0 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d334c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d334c7 call 0x12d31890 */
  push32(0x12d334ccu); f_12d31890();
  /* 12d334cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d334cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d334d2 jne 0x12d334d5 */
  if (!C.zf) goto L_12d334d5;
  /* 12d334d4 int3  */
  x86_unimpl("int3 @ 0x12d334d4");
L_12d334d5:;
  /* 12d334d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d334d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d334d9 jne 0x12d3349f */
  if (!C.zf) goto L_12d3349f;
  /* 12d334db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d334de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d334e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d334e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d334e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d334e7 mov cl, byte ptr [0x12d4cab1] */
  CL = (r8((uint32_t)(0x12d4cab1)));
  /* 12d334ed push ecx */
  push32((uint32_t)(ECX));
  /* 12d334ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d334f1 push edx */
  push32((uint32_t)(EDX));
  /* 12d334f2 call 0x12d36540 */
  push32(0x12d334f7u); f_12d36540();
  /* 12d334f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d334fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d334fd push eax */
  push32((uint32_t)(EAX));
  /* 12d334fe call 0x12d36940 */
  push32(0x12d33503u); f_12d36940();
  /* 12d33503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33506 jmp 0x12d33675 */
  goto L_12d33675;
L_12d3350b:;
  /* 12d3350b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3350e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33512 jne 0x12d33521 */
  if (!C.zf) goto L_12d33521;
  /* 12d33514 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33518 jne 0x12d33521 */
  if (!C.zf) goto L_12d33521;
  /* 12d3351a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12d33521:;
  /* 12d33521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33524 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33527 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3352a je 0x12d3354d */
  if (C.zf) goto L_12d3354d;
  /* 12d3352c push 0x12d49694 */
  push32((uint32_t)(0x12d49694u));
  /* 12d33531 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33533 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12d33538 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d3353d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3353f call 0x12d31890 */
  push32(0x12d33544u); f_12d31890();
  /* 12d33544 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33547 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3354a jne 0x12d3354d */
  if (!C.zf) goto L_12d3354d;
  /* 12d3354c int3  */
  x86_unimpl("int3 @ 0x12d3354c");
L_12d3354d:;
  /* 12d3354d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3354f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33551 jne 0x12d33521 */
  if (!C.zf) goto L_12d33521;
  /* 12d33553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33556 mov eax, dword ptr [0x12d4e4b4] */
  EAX = (r32((uint32_t)(0x12d4e4b4)));
  /* 12d3355b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3355e mov dword ptr [0x12d4e4b4], eax */
  w32((uint32_t)(0x12d4e4b4), (EAX));
  /* 12d33563 mov ecx, dword ptr [0x12d4caa4] */
  ECX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d33569 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3356c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3356e jne 0x12d3364c */
  if (!C.zf) goto L_12d3364c;
  /* 12d33574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33577 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3357a je 0x12d3358c */
  if (C.zf) goto L_12d3358c;
  /* 12d3357c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3357f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d33581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33584 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d33587 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d3358a jmp 0x12d335ca */
  goto L_12d335ca;
L_12d3358c:;
  /* 12d3358c mov ecx, dword ptr [0x12d4e4a8] */
  ECX = (r32((uint32_t)(0x12d4e4a8)));
  /* 12d33592 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33595 je 0x12d335b8 */
  if (C.zf) goto L_12d335b8;
  /* 12d33597 push 0x12d4967c */
  push32((uint32_t)(0x12d4967cu));
  /* 12d3359c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3359e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12d335a3 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d335a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d335aa call 0x12d31890 */
  push32(0x12d335afu); f_12d31890();
  /* 12d335af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d335b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d335b5 jne 0x12d335b8 */
  if (!C.zf) goto L_12d335b8;
  /* 12d335b7 int3  */
  x86_unimpl("int3 @ 0x12d335b7");
L_12d335b8:;
  /* 12d335b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d335ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d335bc jne 0x12d3358c */
  if (!C.zf) goto L_12d3358c;
  /* 12d335be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d335c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d335c4 mov dword ptr [0x12d4e4a8], ecx */
  w32((uint32_t)(0x12d4e4a8), (ECX));
L_12d335ca:;
  /* 12d335ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d335cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d335d1 je 0x12d335e2 */
  if (C.zf) goto L_12d335e2;
  /* 12d335d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d335d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d335d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d335dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d335de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d335e0 jmp 0x12d3361f */
  goto L_12d3361f;
L_12d335e2:;
  /* 12d335e2 mov ecx, dword ptr [0x12d4e4b0] */
  ECX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d335e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d335eb je 0x12d3360e */
  if (C.zf) goto L_12d3360e;
  /* 12d335ed push 0x12d49664 */
  push32((uint32_t)(0x12d49664u));
  /* 12d335f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d335f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12d335f9 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d335fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12d33600 call 0x12d31890 */
  push32(0x12d33605u); f_12d31890();
  /* 12d33605 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33608 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3360b jne 0x12d3360e */
  if (!C.zf) goto L_12d3360e;
  /* 12d3360d int3  */
  x86_unimpl("int3 @ 0x12d3360d");
L_12d3360e:;
  /* 12d3360e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33610 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d33612 jne 0x12d335e2 */
  if (!C.zf) goto L_12d335e2;
  /* 12d33614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33617 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d33619 mov dword ptr [0x12d4e4b0], ecx */
  w32((uint32_t)(0x12d4e4b0), (ECX));
L_12d3361f:;
  /* 12d3361f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33622 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d33625 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33628 push eax */
  push32((uint32_t)(EAX));
  /* 12d33629 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3362b mov cl, byte ptr [0x12d4cab1] */
  CL = (r8((uint32_t)(0x12d4cab1)));
  /* 12d33631 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33632 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33635 push edx */
  push32((uint32_t)(EDX));
  /* 12d33636 call 0x12d36540 */
  push32(0x12d3363bu); f_12d36540();
  /* 12d3363b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3363e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33641 push eax */
  push32((uint32_t)(EAX));
  /* 12d33642 call 0x12d36940 */
  push32(0x12d33647u); f_12d36940();
  /* 12d33647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3364a jmp 0x12d33675 */
  goto L_12d33675;
L_12d3364c:;
  /* 12d3364c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3364f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12d33656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33659 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d3365c push eax */
  push32((uint32_t)(EAX));
  /* 12d3365d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3365f mov cl, byte ptr [0x12d4cab1] */
  CL = (r8((uint32_t)(0x12d4cab1)));
  /* 12d33665 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33669 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3366c push edx */
  push32((uint32_t)(EDX));
  /* 12d3366d call 0x12d36540 */
  push32(0x12d33672u); f_12d36540();
  /* 12d33672 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d33675:;
  /* 12d33675 pop edi */
  EDI = (pop32());
  /* 12d33676 pop esi */
  ESI = (pop32());
  /* 12d33677 pop ebx */
  EBX = (pop32());
  /* 12d33678 mov esp, ebp */
  ESP = (EBP);
  /* 12d3367a pop ebp */
  EBP = (pop32());
  /* 12d3367b ret  */
  ESPCHK(0x12d33290u, _esp0);
  ESP += 4; return;
}

/* FUN_10003680 @ 0x12d33680 (19 bytes, 9 insns) */
void f_12d33680(void) {
  FTRACE(0x12d33680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33680 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33681 mov ebp, esp */
  EBP = (ESP);
  /* 12d33683 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d33685 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33688 push eax */
  push32((uint32_t)(EAX));
  /* 12d33689 call 0x12d336a0 */
  push32(0x12d3368eu); f_12d336a0();
  /* 12d3368e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33691 pop ebp */
  EBP = (pop32());
  /* 12d33692 ret  */
  ESPCHK(0x12d33680u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a0 @ 0x12d336a0 (342 bytes, 119 insns) */
void f_12d336a0(void) {
  FTRACE(0x12d336a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d336a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d336a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d336a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d336a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d336a7 push esi */
  push32((uint32_t)(ESI));
  /* 12d336a8 push edi */
  push32((uint32_t)(EDI));
  /* 12d336a9 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d336ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d336b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d336b3 je 0x12d336e5 */
  if (C.zf) goto L_12d336e5;
L_12d336b5:;
  /* 12d336b5 call 0x12d33970 */
  push32(0x12d336bau); f_12d33970();
  /* 12d336ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d336bc jne 0x12d336df */
  if (!C.zf) goto L_12d336df;
  /* 12d336be push 0x12d494b0 */
  push32((uint32_t)(0x12d494b0u));
  /* 12d336c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d336c5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12d336ca push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d336cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d336d1 call 0x12d31890 */
  push32(0x12d336d6u); f_12d31890();
  /* 12d336d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d336d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d336dc jne 0x12d336df */
  if (!C.zf) goto L_12d336df;
  /* 12d336de int3  */
  x86_unimpl("int3 @ 0x12d336de");
L_12d336df:;
  /* 12d336df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d336e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d336e3 jne 0x12d336b5 */
  if (!C.zf) goto L_12d336b5;
L_12d336e5:;
  /* 12d336e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d336e7 call 0x12d361d0 */
  push32(0x12d336ecu); f_12d361d0();
  /* 12d336ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d336ef:;
  /* 12d336ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d336f2 push edx */
  push32((uint32_t)(EDX));
  /* 12d336f3 call 0x12d33dd0 */
  push32(0x12d336f8u); f_12d33dd0();
  /* 12d336f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d336fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d336fd jne 0x12d33720 */
  if (!C.zf) goto L_12d33720;
  /* 12d336ff push 0x12d495b4 */
  push32((uint32_t)(0x12d495b4u));
  /* 12d33704 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33706 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12d3370b push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d33710 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d33712 call 0x12d31890 */
  push32(0x12d33717u); f_12d31890();
  /* 12d33717 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3371a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3371d jne 0x12d33720 */
  if (!C.zf) goto L_12d33720;
  /* 12d3371f int3  */
  x86_unimpl("int3 @ 0x12d3371f");
L_12d33720:;
  /* 12d33720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33724 jne 0x12d336ef */
  if (!C.zf) goto L_12d336ef;
  /* 12d33726 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33729 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3372c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d3372f:;
  /* 12d3372f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33732 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33735 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3373a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3373d je 0x12d33782 */
  if (C.zf) goto L_12d33782;
  /* 12d3373f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33742 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33746 je 0x12d33782 */
  if (C.zf) goto L_12d33782;
  /* 12d33748 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3374b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d3374e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d33753 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33756 je 0x12d33782 */
  if (C.zf) goto L_12d33782;
  /* 12d33758 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3375b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3375f je 0x12d33782 */
  if (C.zf) goto L_12d33782;
  /* 12d33761 push 0x12d4974c */
  push32((uint32_t)(0x12d4974cu));
  /* 12d33766 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33768 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12d3376d push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d33772 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d33774 call 0x12d31890 */
  push32(0x12d33779u); f_12d31890();
  /* 12d33779 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3377c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3377f jne 0x12d33782 */
  if (!C.zf) goto L_12d33782;
  /* 12d33781 int3  */
  x86_unimpl("int3 @ 0x12d33781");
L_12d33782:;
  /* 12d33782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33784 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d33786 jne 0x12d3372f */
  if (!C.zf) goto L_12d3372f;
  /* 12d33788 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3378b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3378f jne 0x12d3379e */
  if (!C.zf) goto L_12d3379e;
  /* 12d33791 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33795 jne 0x12d3379e */
  if (!C.zf) goto L_12d3379e;
  /* 12d33797 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12d3379e:;
  /* 12d3379e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d337a1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d337a5 je 0x12d337d9 */
  if (C.zf) goto L_12d337d9;
L_12d337a7:;
  /* 12d337a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d337aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d337ad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d337b0 je 0x12d337d3 */
  if (C.zf) goto L_12d337d3;
  /* 12d337b2 push 0x12d49694 */
  push32((uint32_t)(0x12d49694u));
  /* 12d337b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d337b9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12d337be push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d337c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d337c5 call 0x12d31890 */
  push32(0x12d337cau); f_12d31890();
  /* 12d337ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d337cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d337d0 jne 0x12d337d3 */
  if (!C.zf) goto L_12d337d3;
  /* 12d337d2 int3  */
  x86_unimpl("int3 @ 0x12d337d2");
L_12d337d3:;
  /* 12d337d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d337d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d337d7 jne 0x12d337a7 */
  if (!C.zf) goto L_12d337a7;
L_12d337d9:;
  /* 12d337d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d337dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d337df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d337e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d337e4 call 0x12d36270 */
  push32(0x12d337e9u); f_12d36270();
  /* 12d337e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d337ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d337ef pop edi */
  EDI = (pop32());
  /* 12d337f0 pop esi */
  ESI = (pop32());
  /* 12d337f1 pop ebx */
  EBX = (pop32());
  /* 12d337f2 mov esp, ebp */
  ESP = (EBP);
  /* 12d337f4 pop ebp */
  EBP = (pop32());
  /* 12d337f5 ret  */
  ESPCHK(0x12d336a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003800 @ 0x12d33800 (28 bytes, 11 insns) */
void f_12d33800(void) {
  FTRACE(0x12d33800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33800 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33801 mov ebp, esp */
  EBP = (ESP);
  /* 12d33803 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33804 mov eax, dword ptr [0x12d4caac] */
  EAX = (r32((uint32_t)(0x12d4caac)));
  /* 12d33809 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3380c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3380f mov dword ptr [0x12d4caac], ecx */
  w32((uint32_t)(0x12d4caac), (ECX));
  /* 12d33815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33818 mov esp, ebp */
  ESP = (EBP);
  /* 12d3381a pop ebp */
  EBP = (pop32());
  /* 12d3381b ret  */
  ESPCHK(0x12d33800u, _esp0);
  ESP += 4; return;
}

/* FUN_10003820 @ 0x12d33820 (157 bytes, 59 insns) */
void f_12d33820(void) {
  FTRACE(0x12d33820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33820 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33821 mov ebp, esp */
  EBP = (ESP);
  /* 12d33823 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33824 push ebx */
  push32((uint32_t)(EBX));
  /* 12d33825 push esi */
  push32((uint32_t)(ESI));
  /* 12d33826 push edi */
  push32((uint32_t)(EDI));
  /* 12d33827 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33829 call 0x12d361d0 */
  push32(0x12d3382eu); f_12d361d0();
  /* 12d3382e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33834 push eax */
  push32((uint32_t)(EAX));
  /* 12d33835 call 0x12d33dd0 */
  push32(0x12d3383au); f_12d33dd0();
  /* 12d3383a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3383d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3383f je 0x12d338ac */
  if (C.zf) goto L_12d338ac;
  /* 12d33841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33844 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33847 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3384a:;
  /* 12d3384a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3384d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33850 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d33855 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33858 je 0x12d3389d */
  if (C.zf) goto L_12d3389d;
  /* 12d3385a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3385d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33861 je 0x12d3389d */
  if (C.zf) goto L_12d3389d;
  /* 12d33863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33866 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33869 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3386e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33871 je 0x12d3389d */
  if (C.zf) goto L_12d3389d;
  /* 12d33873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33876 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3387a je 0x12d3389d */
  if (C.zf) goto L_12d3389d;
  /* 12d3387c push 0x12d4974c */
  push32((uint32_t)(0x12d4974cu));
  /* 12d33881 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33883 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12d33888 push 0x12d494a4 */
  push32((uint32_t)(0x12d494a4u));
  /* 12d3388d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3388f call 0x12d31890 */
  push32(0x12d33894u); f_12d31890();
  /* 12d33894 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33897 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3389a jne 0x12d3389d */
  if (!C.zf) goto L_12d3389d;
  /* 12d3389c int3  */
  x86_unimpl("int3 @ 0x12d3389c");
L_12d3389d:;
  /* 12d3389d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3389f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d338a1 jne 0x12d3384a */
  if (!C.zf) goto L_12d3384a;
  /* 12d338a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d338a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d338a9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12d338ac:;
  /* 12d338ac push 9 */
  push32((uint32_t)(0x9u));
  /* 12d338ae call 0x12d36270 */
  push32(0x12d338b3u); f_12d36270();
  /* 12d338b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d338b6 pop edi */
  EDI = (pop32());
  /* 12d338b7 pop esi */
  ESI = (pop32());
  /* 12d338b8 pop ebx */
  EBX = (pop32());
  /* 12d338b9 mov esp, ebp */
  ESP = (EBP);
  /* 12d338bb pop ebp */
  EBP = (pop32());
  /* 12d338bc ret  */
  ESPCHK(0x12d33820u, _esp0);
  ESP += 4; return;
}

/* FUN_100038c0 @ 0x12d338c0 (28 bytes, 11 insns) */
void f_12d338c0(void) {
  FTRACE(0x12d338c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d338c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d338c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d338c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d338c4 mov eax, dword ptr [0x12d4ccb0] */
  EAX = (r32((uint32_t)(0x12d4ccb0)));
  /* 12d338c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d338cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d338cf mov dword ptr [0x12d4ccb0], ecx */
  w32((uint32_t)(0x12d4ccb0), (ECX));
  /* 12d338d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d338d8 mov esp, ebp */
  ESP = (EBP);
  /* 12d338da pop ebp */
  EBP = (pop32());
  /* 12d338db ret  */
  ESPCHK(0x12d338c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x12d338e0 (136 bytes, 55 insns) */
void f_12d338e0(void) {
  FTRACE(0x12d338e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d338e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d338e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d338e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d338e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12d338e5 push esi */
  push32((uint32_t)(ESI));
  /* 12d338e6 push edi */
  push32((uint32_t)(EDI));
  /* 12d338e7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12d338ee:;
  /* 12d338ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d338f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d338f4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d338f7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d338fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d338fc je 0x12d3395e */
  if (C.zf) goto L_12d3395e;
  /* 12d338fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33901 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33903 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d33905 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33908 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3390e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33911 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33914 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d33917 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33919 je 0x12d3395c */
  if (C.zf) goto L_12d3395c;
L_12d3391b:;
  /* 12d3391b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3391e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d33923 push eax */
  push32((uint32_t)(EAX));
  /* 12d33924 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33927 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33929 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12d3392c push edx */
  push32((uint32_t)(EDX));
  /* 12d3392d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33930 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33933 push eax */
  push32((uint32_t)(EAX));
  /* 12d33934 push 0x12d49790 */
  push32((uint32_t)(0x12d49790u));
  /* 12d33939 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3393b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3393d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3393f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33941 call 0x12d31890 */
  push32(0x12d33946u); f_12d31890();
  /* 12d33946 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3394c jne 0x12d3394f */
  if (!C.zf) goto L_12d3394f;
  /* 12d3394e int3  */
  x86_unimpl("int3 @ 0x12d3394e");
L_12d3394f:;
  /* 12d3394f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d33951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33953 jne 0x12d3391b */
  if (!C.zf) goto L_12d3391b;
  /* 12d33955 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d3395c:;
  /* 12d3395c jmp 0x12d338ee */
  goto L_12d338ee;
L_12d3395e:;
  /* 12d3395e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33961 pop edi */
  EDI = (pop32());
  /* 12d33962 pop esi */
  ESI = (pop32());
  /* 12d33963 pop ebx */
  EBX = (pop32());
  /* 12d33964 mov esp, ebp */
  ESP = (EBP);
  /* 12d33966 pop ebp */
  EBP = (pop32());
  /* 12d33967 ret  */
  ESPCHK(0x12d338e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003970 @ 0x12d33970 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12d33970(void) {
  FTRACE(0x12d33970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33970 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33971 mov ebp, esp */
  EBP = (ESP);
  /* 12d33973 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33976 push ebx */
  push32((uint32_t)(EBX));
  /* 12d33977 push esi */
  push32((uint32_t)(ESI));
  /* 12d33978 push edi */
  push32((uint32_t)(EDI));
  /* 12d33979 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d33980 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d33985 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d33988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3398a jne 0x12d33996 */
  if (!C.zf) goto L_12d33996;
  /* 12d3398c mov eax, 1 */
  EAX = (0x1u);
  /* 12d33991 jmp 0x12d33cc8 */
  goto L_12d33cc8;
L_12d33996:;
  /* 12d33996 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33998 call 0x12d361d0 */
  push32(0x12d3399du); f_12d361d0();
  /* 12d3399d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d339a0 call 0x12d369b0 */
  push32(0x12d339a5u); f_12d369b0();
  /* 12d339a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d339a8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d339ac je 0x12d33ab9 */
  if (C.zf) goto L_12d33ab9;
  /* 12d339b2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d339b6 je 0x12d33ab9 */
  if (C.zf) goto L_12d33ab9;
  /* 12d339bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d339bf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d339c2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d339c5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d339c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d339cb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d339cf ja 0x12d33a82 */
  if ((!C.cf&&!C.zf)) goto L_12d33a82;
  /* 12d339d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d339d8 jmp dword ptr [eax*4 + 0x12d33ccf] */
  switch (EAX) {
    case 0: goto L_12d33a5a;
    case 1: goto L_12d33a32;
    case 2: goto L_12d33a0a;
    case 3: goto L_12d339df;
    default: x86_unimpl("switch@0x12d339d8 out of table"); return;
  }
L_12d339df:;
  /* 12d339df push 0x12d498e4 */
  push32((uint32_t)(0x12d498e4u));
  /* 12d339e4 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d339e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d339eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d339ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12d339ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d339f1 call 0x12d31890 */
  push32(0x12d339f6u); f_12d31890();
  /* 12d339f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d339f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d339fc jne 0x12d339ff */
  if (!C.zf) goto L_12d339ff;
  /* 12d339fe int3  */
  x86_unimpl("int3 @ 0x12d339fe");
L_12d339ff:;
  /* 12d339ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d33a01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33a03 jne 0x12d339df */
  if (!C.zf) goto L_12d339df;
  /* 12d33a05 jmp 0x12d33aa8 */
  goto L_12d33aa8;
L_12d33a0a:;
  /* 12d33a0a push 0x12d498c0 */
  push32((uint32_t)(0x12d498c0u));
  /* 12d33a0f push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d33a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a1c call 0x12d31890 */
  push32(0x12d33a21u); f_12d31890();
  /* 12d33a21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33a24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33a27 jne 0x12d33a2a */
  if (!C.zf) goto L_12d33a2a;
  /* 12d33a29 int3  */
  x86_unimpl("int3 @ 0x12d33a29");
L_12d33a2a:;
  /* 12d33a2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33a2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d33a2e jne 0x12d33a0a */
  if (!C.zf) goto L_12d33a0a;
  /* 12d33a30 jmp 0x12d33aa8 */
  goto L_12d33aa8;
L_12d33a32:;
  /* 12d33a32 push 0x12d4989c */
  push32((uint32_t)(0x12d4989cu));
  /* 12d33a37 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d33a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a44 call 0x12d31890 */
  push32(0x12d33a49u); f_12d31890();
  /* 12d33a49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33a4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33a4f jne 0x12d33a52 */
  if (!C.zf) goto L_12d33a52;
  /* 12d33a51 int3  */
  x86_unimpl("int3 @ 0x12d33a51");
L_12d33a52:;
  /* 12d33a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33a56 jne 0x12d33a32 */
  if (!C.zf) goto L_12d33a32;
  /* 12d33a58 jmp 0x12d33aa8 */
  goto L_12d33aa8;
L_12d33a5a:;
  /* 12d33a5a push 0x12d49878 */
  push32((uint32_t)(0x12d49878u));
  /* 12d33a5f push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d33a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a6c call 0x12d31890 */
  push32(0x12d33a71u); f_12d31890();
  /* 12d33a71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33a77 jne 0x12d33a7a */
  if (!C.zf) goto L_12d33a7a;
  /* 12d33a79 int3  */
  x86_unimpl("int3 @ 0x12d33a79");
L_12d33a7a:;
  /* 12d33a7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d33a7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33a7e jne 0x12d33a5a */
  if (!C.zf) goto L_12d33a5a;
  /* 12d33a80 jmp 0x12d33aa8 */
  goto L_12d33aa8;
L_12d33a82:;
  /* 12d33a82 push 0x12d4984c */
  push32((uint32_t)(0x12d4984cu));
  /* 12d33a87 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d33a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33a94 call 0x12d31890 */
  push32(0x12d33a99u); f_12d31890();
  /* 12d33a99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33a9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33a9f jne 0x12d33aa2 */
  if (!C.zf) goto L_12d33aa2;
  /* 12d33aa1 int3  */
  x86_unimpl("int3 @ 0x12d33aa1");
L_12d33aa2:;
  /* 12d33aa2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33aa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d33aa6 jne 0x12d33a82 */
  if (!C.zf) goto L_12d33a82;
L_12d33aa8:;
  /* 12d33aa8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33aaa call 0x12d36270 */
  push32(0x12d33aafu); f_12d36270();
  /* 12d33aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33ab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33ab4 jmp 0x12d33cc8 */
  goto L_12d33cc8;
L_12d33ab9:;
  /* 12d33ab9 mov eax, dword ptr [0x12d4e4b0] */
  EAX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33abe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d33ac1 jmp 0x12d33acb */
  goto L_12d33acb;
L_12d33ac3:;
  /* 12d33ac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33ac6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d33ac8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d33acb:;
  /* 12d33acb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33acf je 0x12d33cbb */
  if (C.zf) goto L_12d33cbb;
  /* 12d33ad5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d33adc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33adf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d33ae2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d33ae8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33aeb je 0x12d33b10 */
  if (C.zf) goto L_12d33b10;
  /* 12d33aed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33af0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33af4 je 0x12d33b10 */
  if (C.zf) goto L_12d33b10;
  /* 12d33af6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33af9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d33afc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d33b02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33b05 je 0x12d33b10 */
  if (C.zf) goto L_12d33b10;
  /* 12d33b07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33b0e jne 0x12d33b28 */
  if (!C.zf) goto L_12d33b28;
L_12d33b10:;
  /* 12d33b10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d33b16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d33b1c mov edx, dword ptr [ecx*4 + 0x12d4cab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4cab4)));
  /* 12d33b23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d33b26 jmp 0x12d33b2f */
  goto L_12d33b2f;
L_12d33b28:;
  /* 12d33b28 mov dword ptr [ebp - 0x14], 0x12d49844 */
  w32((uint32_t)(EBP + -0x14), (0x12d49844u));
L_12d33b2f:;
  /* 12d33b2f push 4 */
  push32((uint32_t)(0x4u));
  /* 12d33b31 mov al, byte ptr [0x12d4cab0] */
  AL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d33b36 push eax */
  push32((uint32_t)(EAX));
  /* 12d33b37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33b3d push ecx */
  push32((uint32_t)(ECX));
  /* 12d33b3e call 0x12d338e0 */
  push32(0x12d33b43u); f_12d338e0();
  /* 12d33b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33b46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33b48 jne 0x12d33b84 */
  if (!C.zf) goto L_12d33b84;
L_12d33b4a:;
  /* 12d33b4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33b50 push edx */
  push32((uint32_t)(EDX));
  /* 12d33b51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d33b57 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33b58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d33b5b push edx */
  push32((uint32_t)(EDX));
  /* 12d33b5c push 0x12d49720 */
  push32((uint32_t)(0x12d49720u));
  /* 12d33b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33b69 call 0x12d31890 */
  push32(0x12d33b6eu); f_12d31890();
  /* 12d33b6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33b71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33b74 jne 0x12d33b77 */
  if (!C.zf) goto L_12d33b77;
  /* 12d33b76 int3  */
  x86_unimpl("int3 @ 0x12d33b76");
L_12d33b77:;
  /* 12d33b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33b7b jne 0x12d33b4a */
  if (!C.zf) goto L_12d33b4a;
  /* 12d33b7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d33b84:;
  /* 12d33b84 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d33b86 mov cl, byte ptr [0x12d4cab0] */
  CL = (r8((uint32_t)(0x12d4cab0)));
  /* 12d33b8c push ecx */
  push32((uint32_t)(ECX));
  /* 12d33b8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d33b93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33b96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12d33b9a push edx */
  push32((uint32_t)(EDX));
  /* 12d33b9b call 0x12d338e0 */
  push32(0x12d33ba0u); f_12d338e0();
  /* 12d33ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33ba5 jne 0x12d33be1 */
  if (!C.zf) goto L_12d33be1;
L_12d33ba7:;
  /* 12d33ba7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33baa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33bad push eax */
  push32((uint32_t)(EAX));
  /* 12d33bae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33bb1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d33bb4 push edx */
  push32((uint32_t)(EDX));
  /* 12d33bb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d33bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12d33bb9 push 0x12d496f4 */
  push32((uint32_t)(0x12d496f4u));
  /* 12d33bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33bc6 call 0x12d31890 */
  push32(0x12d33bcbu); f_12d31890();
  /* 12d33bcb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33bce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33bd1 jne 0x12d33bd4 */
  if (!C.zf) goto L_12d33bd4;
  /* 12d33bd3 int3  */
  x86_unimpl("int3 @ 0x12d33bd3");
L_12d33bd4:;
  /* 12d33bd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d33bd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33bd8 jne 0x12d33ba7 */
  if (!C.zf) goto L_12d33ba7;
  /* 12d33bda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d33be1:;
  /* 12d33be1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33be4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33be8 jne 0x12d33c3a */
  if (!C.zf) goto L_12d33c3a;
  /* 12d33bea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33bed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d33bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33bf1 mov dl, byte ptr [0x12d4cab1] */
  DL = (r8((uint32_t)(0x12d4cab1)));
  /* 12d33bf7 push edx */
  push32((uint32_t)(EDX));
  /* 12d33bf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33bfb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33bfe push eax */
  push32((uint32_t)(EAX));
  /* 12d33bff call 0x12d338e0 */
  push32(0x12d33c04u); f_12d338e0();
  /* 12d33c04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33c09 jne 0x12d33c3a */
  if (!C.zf) goto L_12d33c3a;
L_12d33c0b:;
  /* 12d33c0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33c0e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33c11 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33c12 push 0x12d49818 */
  push32((uint32_t)(0x12d49818u));
  /* 12d33c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c1f call 0x12d31890 */
  push32(0x12d33c24u); f_12d31890();
  /* 12d33c24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33c27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33c2a jne 0x12d33c2d */
  if (!C.zf) goto L_12d33c2d;
  /* 12d33c2c int3  */
  x86_unimpl("int3 @ 0x12d33c2c");
L_12d33c2d:;
  /* 12d33c2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33c2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d33c31 jne 0x12d33c0b */
  if (!C.zf) goto L_12d33c0b;
  /* 12d33c33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d33c3a:;
  /* 12d33c3a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33c3e jne 0x12d33cb6 */
  if (!C.zf) goto L_12d33cb6;
  /* 12d33c40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33c43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33c47 je 0x12d33c7c */
  if (C.zf) goto L_12d33c7c;
L_12d33c49:;
  /* 12d33c49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33c4c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d33c4f push edx */
  push32((uint32_t)(EDX));
  /* 12d33c50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33c53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d33c56 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33c57 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d33c5a push edx */
  push32((uint32_t)(EDX));
  /* 12d33c5b push 0x12d497f8 */
  push32((uint32_t)(0x12d497f8u));
  /* 12d33c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c68 call 0x12d31890 */
  push32(0x12d33c6du); f_12d31890();
  /* 12d33c6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33c70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33c73 jne 0x12d33c76 */
  if (!C.zf) goto L_12d33c76;
  /* 12d33c75 int3  */
  x86_unimpl("int3 @ 0x12d33c75");
L_12d33c76:;
  /* 12d33c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33c7a jne 0x12d33c49 */
  if (!C.zf) goto L_12d33c49;
L_12d33c7c:;
  /* 12d33c7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33c7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d33c82 push edx */
  push32((uint32_t)(EDX));
  /* 12d33c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d33c86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33c89 push eax */
  push32((uint32_t)(EAX));
  /* 12d33c8a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d33c8d push ecx */
  push32((uint32_t)(ECX));
  /* 12d33c8e push 0x12d497cc */
  push32((uint32_t)(0x12d497ccu));
  /* 12d33c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33c9b call 0x12d31890 */
  push32(0x12d33ca0u); f_12d31890();
  /* 12d33ca0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33ca3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33ca6 jne 0x12d33ca9 */
  if (!C.zf) goto L_12d33ca9;
  /* 12d33ca8 int3  */
  x86_unimpl("int3 @ 0x12d33ca8");
L_12d33ca9:;
  /* 12d33ca9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d33cab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d33cad jne 0x12d33c7c */
  if (!C.zf) goto L_12d33c7c;
  /* 12d33caf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d33cb6:;
  /* 12d33cb6 jmp 0x12d33ac3 */
  goto L_12d33ac3;
L_12d33cbb:;
  /* 12d33cbb push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33cbd call 0x12d36270 */
  push32(0x12d33cc2u); f_12d36270();
  /* 12d33cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33cc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d33cc8:;
  /* 12d33cc8 pop edi */
  EDI = (pop32());
  /* 12d33cc9 pop esi */
  ESI = (pop32());
  /* 12d33cca pop ebx */
  EBX = (pop32());
  /* 12d33ccb mov esp, ebp */
  ESP = (EBP);
  /* 12d33ccd pop ebp */
  EBP = (pop32());
  /* 12d33cce ret  */
  ESPCHK(0x12d33970u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x12d33ce0 (34 bytes, 13 insns) */
void f_12d33ce0(void) {
  FTRACE(0x12d33ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12d33ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33ce4 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d33ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d33cec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33cf0 je 0x12d33cfb */
  if (C.zf) goto L_12d33cfb;
  /* 12d33cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33cf5 mov dword ptr [0x12d4caa4], ecx */
  w32((uint32_t)(0x12d4caa4), (ECX));
L_12d33cfb:;
  /* 12d33cfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33cfe mov esp, ebp */
  ESP = (EBP);
  /* 12d33d00 pop ebp */
  EBP = (pop32());
  /* 12d33d01 ret  */
  ESPCHK(0x12d33ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x12d33d10 (103 bytes, 38 insns) */
void f_12d33d10(void) {
  FTRACE(0x12d33d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33d11 mov ebp, esp */
  EBP = (ESP);
  /* 12d33d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33d14 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d33d19 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d33d1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33d1e jne 0x12d33d22 */
  if (!C.zf) goto L_12d33d22;
  /* 12d33d20 jmp 0x12d33d73 */
  goto L_12d33d73;
L_12d33d22:;
  /* 12d33d22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33d24 call 0x12d361d0 */
  push32(0x12d33d29u); f_12d361d0();
  /* 12d33d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33d2c mov ecx, dword ptr [0x12d4e4b0] */
  ECX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33d32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d33d35 jmp 0x12d33d3f */
  goto L_12d33d3f;
L_12d33d37:;
  /* 12d33d37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33d3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d33d3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d33d3f:;
  /* 12d33d3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33d43 je 0x12d33d69 */
  if (C.zf) goto L_12d33d69;
  /* 12d33d45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33d48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d33d4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d33d51 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33d54 jne 0x12d33d67 */
  if (!C.zf) goto L_12d33d67;
  /* 12d33d56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33d59 push eax */
  push32((uint32_t)(EAX));
  /* 12d33d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33d5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33d60 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33d61 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12d33d64u);
  /* 12d33d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d33d67:;
  /* 12d33d67 jmp 0x12d33d37 */
  goto L_12d33d37;
L_12d33d69:;
  /* 12d33d69 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33d6b call 0x12d36270 */
  push32(0x12d33d70u); f_12d36270();
  /* 12d33d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d33d73:;
  /* 12d33d73 mov esp, ebp */
  ESP = (EBP);
  /* 12d33d75 pop ebp */
  EBP = (pop32());
  /* 12d33d76 ret  */
  ESPCHK(0x12d33d10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12d33d80 (75 bytes, 28 insns) */
void f_12d33d80(void) {
  FTRACE(0x12d33d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33d81 mov ebp, esp */
  EBP = (ESP);
  /* 12d33d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33d84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33d88 je 0x12d33dbd */
  if (C.zf) goto L_12d33dbd;
  /* 12d33d8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33d8d push eax */
  push32((uint32_t)(EAX));
  /* 12d33d8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33d91 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33d92 call dword ptr [0x12d5029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5029c))), 0x12d33d98u);
  /* 12d33d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33d9a jne 0x12d33dbd */
  if (!C.zf) goto L_12d33dbd;
  /* 12d33d9c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33da0 je 0x12d33db4 */
  if (C.zf) goto L_12d33db4;
  /* 12d33da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33da5 push edx */
  push32((uint32_t)(EDX));
  /* 12d33da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33da9 push eax */
  push32((uint32_t)(EAX));
  /* 12d33daa call dword ptr [0x12d50298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50298))), 0x12d33db0u);
  /* 12d33db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33db2 jne 0x12d33dbd */
  if (!C.zf) goto L_12d33dbd;
L_12d33db4:;
  /* 12d33db4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d33dbb jmp 0x12d33dc4 */
  goto L_12d33dc4;
L_12d33dbd:;
  /* 12d33dbd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d33dc4:;
  /* 12d33dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33dc7 mov esp, ebp */
  ESP = (EBP);
  /* 12d33dc9 pop ebp */
  EBP = (pop32());
  /* 12d33dca ret  */
  ESPCHK(0x12d33d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x12d33dd0 (134 bytes, 50 insns) */
void f_12d33dd0(void) {
  FTRACE(0x12d33dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d33dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33dd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33dd8 jne 0x12d33dde */
  if (!C.zf) goto L_12d33dde;
  /* 12d33dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33ddc jmp 0x12d33e52 */
  goto L_12d33e52;
L_12d33dde:;
  /* 12d33dde push 1 */
  push32((uint32_t)(0x1u));
  /* 12d33de0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d33de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33de5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33de8 push eax */
  push32((uint32_t)(EAX));
  /* 12d33de9 call 0x12d33d80 */
  push32(0x12d33deeu); f_12d33d80();
  /* 12d33dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33df3 jne 0x12d33df9 */
  if (!C.zf) goto L_12d33df9;
  /* 12d33df5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33df7 jmp 0x12d33e52 */
  goto L_12d33e52;
L_12d33df9:;
  /* 12d33df9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33dfc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33dff push ecx */
  push32((uint32_t)(ECX));
  /* 12d33e00 call 0x12d36ad0 */
  push32(0x12d33e05u); f_12d36ad0();
  /* 12d33e05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33e08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d33e0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33e0f je 0x12d33e26 */
  if (C.zf) goto L_12d33e26;
  /* 12d33e11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33e14 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33e17 push edx */
  push32((uint32_t)(EDX));
  /* 12d33e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33e1b push eax */
  push32((uint32_t)(EAX));
  /* 12d33e1c call 0x12d36b30 */
  push32(0x12d33e21u); f_12d36b30();
  /* 12d33e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33e24 jmp 0x12d33e52 */
  goto L_12d33e52;
L_12d33e26:;
  /* 12d33e26 mov ecx, dword ptr [0x12d4e464] */
  ECX = (r32((uint32_t)(0x12d4e464)));
  /* 12d33e2c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d33e32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d33e34 je 0x12d33e3d */
  if (C.zf) goto L_12d33e3d;
  /* 12d33e36 mov eax, 1 */
  EAX = (0x1u);
  /* 12d33e3b jmp 0x12d33e52 */
  goto L_12d33e52;
L_12d33e3d:;
  /* 12d33e3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33e40 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33e43 push edx */
  push32((uint32_t)(EDX));
  /* 12d33e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33e46 mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d33e4b push eax */
  push32((uint32_t)(EAX));
  /* 12d33e4c call dword ptr [0x12d502a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502a0))), 0x12d33e52u);
L_12d33e52:;
  /* 12d33e52 mov esp, ebp */
  ESP = (EBP);
  /* 12d33e54 pop ebp */
  EBP = (pop32());
  /* 12d33e55 ret  */
  ESPCHK(0x12d33dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x12d33e60 (227 bytes, 80 insns) */
void f_12d33e60(void) {
  FTRACE(0x12d33e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33e61 mov ebp, esp */
  EBP = (ESP);
  /* 12d33e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33e67 push eax */
  push32((uint32_t)(EAX));
  /* 12d33e68 call 0x12d33dd0 */
  push32(0x12d33e6du); f_12d33dd0();
  /* 12d33e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33e72 jne 0x12d33e7b */
  if (!C.zf) goto L_12d33e7b;
  /* 12d33e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33e76 jmp 0x12d33f3f */
  goto L_12d33f3f;
L_12d33e7b:;
  /* 12d33e7b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33e7d call 0x12d361d0 */
  push32(0x12d33e82u); f_12d361d0();
  /* 12d33e82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33e85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33e88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33e8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d33e8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33e91 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33e94 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d33e99 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33e9c je 0x12d33ec0 */
  if (C.zf) goto L_12d33ec0;
  /* 12d33e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33ea1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33ea5 je 0x12d33ec0 */
  if (C.zf) goto L_12d33ec0;
  /* 12d33ea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33eaa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d33ead and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d33eb2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33eb5 je 0x12d33ec0 */
  if (C.zf) goto L_12d33ec0;
  /* 12d33eb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33eba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33ebe jne 0x12d33f33 */
  if (!C.zf) goto L_12d33f33;
L_12d33ec0:;
  /* 12d33ec0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d33ec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d33ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12d33ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12d33eca call 0x12d33d80 */
  push32(0x12d33ecfu); f_12d33d80();
  /* 12d33ecf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33ed4 je 0x12d33f33 */
  if (C.zf) goto L_12d33f33;
  /* 12d33ed6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33ed9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d33edc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33edf jne 0x12d33f33 */
  if (!C.zf) goto L_12d33f33;
  /* 12d33ee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33ee4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d33ee7 cmp ecx, dword ptr [0x12d4caa8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4caa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33eed jg 0x12d33f33 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d33f33;
  /* 12d33eef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33ef3 je 0x12d33f00 */
  if (C.zf) goto L_12d33f00;
  /* 12d33ef5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d33ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33efb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d33efe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d33f00:;
  /* 12d33f00 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33f04 je 0x12d33f11 */
  if (C.zf) goto L_12d33f11;
  /* 12d33f06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d33f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33f0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d33f0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d33f11:;
  /* 12d33f11 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33f15 je 0x12d33f22 */
  if (C.zf) goto L_12d33f22;
  /* 12d33f17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d33f1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33f1d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d33f20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d33f22:;
  /* 12d33f22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33f24 call 0x12d36270 */
  push32(0x12d33f29u); f_12d36270();
  /* 12d33f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33f2c mov eax, 1 */
  EAX = (0x1u);
  /* 12d33f31 jmp 0x12d33f3f */
  goto L_12d33f3f;
L_12d33f33:;
  /* 12d33f33 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33f35 call 0x12d36270 */
  push32(0x12d33f3au); f_12d36270();
  /* 12d33f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d33f3f:;
  /* 12d33f3f mov esp, ebp */
  ESP = (EBP);
  /* 12d33f41 pop ebp */
  EBP = (pop32());
  /* 12d33f42 ret  */
  ESPCHK(0x12d33e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f50 @ 0x12d33f50 (28 bytes, 11 insns) */
void f_12d33f50(void) {
  FTRACE(0x12d33f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33f51 mov ebp, esp */
  EBP = (ESP);
  /* 12d33f53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d33f54 mov eax, dword ptr [0x12d4fe18] */
  EAX = (r32((uint32_t)(0x12d4fe18)));
  /* 12d33f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d33f5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33f5f mov dword ptr [0x12d4fe18], ecx */
  w32((uint32_t)(0x12d4fe18), (ECX));
  /* 12d33f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33f68 mov esp, ebp */
  ESP = (EBP);
  /* 12d33f6a pop ebp */
  EBP = (pop32());
  /* 12d33f6b ret  */
  ESPCHK(0x12d33f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x12d33f70 (362 bytes, 116 insns) */
void f_12d33f70(void) {
  FTRACE(0x12d33f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d33f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d33f71 mov ebp, esp */
  EBP = (ESP);
  /* 12d33f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d33f76 push ebx */
  push32((uint32_t)(EBX));
  /* 12d33f77 push esi */
  push32((uint32_t)(ESI));
  /* 12d33f78 push edi */
  push32((uint32_t)(EDI));
  /* 12d33f79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33f7d jne 0x12d33faa */
  if (!C.zf) goto L_12d33faa;
L_12d33f7f:;
  /* 12d33f7f push 0x12d4992c */
  push32((uint32_t)(0x12d4992cu));
  /* 12d33f84 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d33f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d33f91 call 0x12d31890 */
  push32(0x12d33f96u); f_12d31890();
  /* 12d33f96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33f9c jne 0x12d33f9f */
  if (!C.zf) goto L_12d33f9f;
  /* 12d33f9e int3  */
  x86_unimpl("int3 @ 0x12d33f9e");
L_12d33f9f:;
  /* 12d33f9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d33fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d33fa3 jne 0x12d33f7f */
  if (!C.zf) goto L_12d33f7f;
  /* 12d33fa5 jmp 0x12d340d3 */
  goto L_12d340d3;
L_12d33faa:;
  /* 12d33faa push 9 */
  push32((uint32_t)(0x9u));
  /* 12d33fac call 0x12d361d0 */
  push32(0x12d33fb1u); f_12d361d0();
  /* 12d33fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33fb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33fb7 mov edx, dword ptr [0x12d4e4b0] */
  EDX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33fbd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d33fbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d33fc6 jmp 0x12d33fd1 */
  goto L_12d33fd1;
L_12d33fc8:;
  /* 12d33fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33fcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d33fce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d33fd1:;
  /* 12d33fd1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d33fd5 jge 0x12d33ff5 */
  if ((C.sf==C.of)) goto L_12d33ff5;
  /* 12d33fd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33fda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33fdd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12d33fe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d33fe8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d33feb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12d33ff3 jmp 0x12d33fc8 */
  goto L_12d33fc8;
L_12d33ff5:;
  /* 12d33ff5 mov edx, dword ptr [0x12d4e4b0] */
  EDX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d33ffb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d33ffe jmp 0x12d34008 */
  goto L_12d34008;
L_12d34000:;
  /* 12d34000 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34005 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d34008:;
  /* 12d34008 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3400c je 0x12d340b1 */
  if (C.zf) goto L_12d340b1;
  /* 12d34012 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34015 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d34018 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3401d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3401f jl 0x12d34087 */
  if ((C.sf!=C.of)) goto L_12d34087;
  /* 12d34021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34024 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d34027 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3402d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34030 jge 0x12d34087 */
  if ((C.sf==C.of)) goto L_12d34087;
  /* 12d34032 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34035 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d34038 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3403e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34041 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12d34045 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34048 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3404b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d3404e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d34054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34057 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12d3405b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3405e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d34061 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d34066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34069 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12d3406d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34070 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34073 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34076 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d34079 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3407e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34081 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12d34085 jmp 0x12d340ac */
  goto L_12d340ac;
L_12d34087:;
  /* 12d34087 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3408a push edx */
  push32((uint32_t)(EDX));
  /* 12d3408b push 0x12d49908 */
  push32((uint32_t)(0x12d49908u));
  /* 12d34090 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34092 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34094 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34096 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34098 call 0x12d31890 */
  push32(0x12d3409du); f_12d31890();
  /* 12d3409d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d340a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d340a3 jne 0x12d340a6 */
  if (!C.zf) goto L_12d340a6;
  /* 12d340a5 int3  */
  x86_unimpl("int3 @ 0x12d340a5");
L_12d340a6:;
  /* 12d340a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d340a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d340aa jne 0x12d34087 */
  if (!C.zf) goto L_12d34087;
L_12d340ac:;
  /* 12d340ac jmp 0x12d34000 */
  goto L_12d34000;
L_12d340b1:;
  /* 12d340b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d340b4 mov edx, dword ptr [0x12d4e4b8] */
  EDX = (r32((uint32_t)(0x12d4e4b8)));
  /* 12d340ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12d340bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d340c0 mov ecx, dword ptr [0x12d4e4ac] */
  ECX = (r32((uint32_t)(0x12d4e4ac)));
  /* 12d340c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12d340c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d340cb call 0x12d36270 */
  push32(0x12d340d0u); f_12d36270();
  /* 12d340d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d340d3:;
  /* 12d340d3 pop edi */
  EDI = (pop32());
  /* 12d340d4 pop esi */
  ESI = (pop32());
  /* 12d340d5 pop ebx */
  EBX = (pop32());
  /* 12d340d6 mov esp, ebp */
  ESP = (EBP);
  /* 12d340d8 pop ebp */
  EBP = (pop32());
  /* 12d340d9 ret  */
  ESPCHK(0x12d33f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x12d340e0 (291 bytes, 95 insns) */
void f_12d340e0(void) {
  FTRACE(0x12d340e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d340e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d340e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d340e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d340e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d340e7 push esi */
  push32((uint32_t)(ESI));
  /* 12d340e8 push edi */
  push32((uint32_t)(EDI));
  /* 12d340e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d340f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d340f4 je 0x12d34102 */
  if (C.zf) goto L_12d34102;
  /* 12d340f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d340fa je 0x12d34102 */
  if (C.zf) goto L_12d34102;
  /* 12d340fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34100 jne 0x12d34130 */
  if (!C.zf) goto L_12d34130;
L_12d34102:;
  /* 12d34102 push 0x12d49954 */
  push32((uint32_t)(0x12d49954u));
  /* 12d34107 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d3410c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3410e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34110 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34112 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34114 call 0x12d31890 */
  push32(0x12d34119u); f_12d31890();
  /* 12d34119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3411c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3411f jne 0x12d34122 */
  if (!C.zf) goto L_12d34122;
  /* 12d34121 int3  */
  x86_unimpl("int3 @ 0x12d34121");
L_12d34122:;
  /* 12d34122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34126 jne 0x12d34102 */
  if (!C.zf) goto L_12d34102;
  /* 12d34128 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3412b jmp 0x12d341fc */
  goto L_12d341fc;
L_12d34130:;
  /* 12d34130 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d34137 jmp 0x12d34142 */
  goto L_12d34142;
L_12d34139:;
  /* 12d34139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3413c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3413f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d34142:;
  /* 12d34142 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34146 jge 0x12d341cc */
  if ((C.sf==C.of)) goto L_12d341cc;
  /* 12d3414c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3414f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34155 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34158 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12d3415c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34163 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34166 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12d3416a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3416d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34173 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34176 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12d3417a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3417e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34184 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12d34188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3418b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3418e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34193 jne 0x12d341a2 */
  if (!C.zf) goto L_12d341a2;
  /* 12d34195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3419b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d341a0 je 0x12d341c7 */
  if (C.zf) goto L_12d341c7;
L_12d341a2:;
  /* 12d341a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d341a6 je 0x12d341c7 */
  if (C.zf) goto L_12d341c7;
  /* 12d341a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d341ac jne 0x12d341c0 */
  if (!C.zf) goto L_12d341c0;
  /* 12d341ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d341b2 jne 0x12d341c7 */
  if (!C.zf) goto L_12d341c7;
  /* 12d341b4 mov eax, dword ptr [0x12d4caa4] */
  EAX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d341b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12d341bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d341be je 0x12d341c7 */
  if (C.zf) goto L_12d341c7;
L_12d341c0:;
  /* 12d341c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12d341c7:;
  /* 12d341c7 jmp 0x12d34139 */
  goto L_12d34139;
L_12d341cc:;
  /* 12d341cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d341cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d341d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12d341d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d341d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d341db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12d341de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d341e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d341e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12d341e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d341ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d341ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12d341f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d341f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d341f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d341fc:;
  /* 12d341fc pop edi */
  EDI = (pop32());
  /* 12d341fd pop esi */
  ESI = (pop32());
  /* 12d341fe pop ebx */
  EBX = (pop32());
  /* 12d341ff mov esp, ebp */
  ESP = (EBP);
  /* 12d34201 pop ebp */
  EBP = (pop32());
  /* 12d34202 ret  */
  ESPCHK(0x12d340e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004210 @ 0x12d34210 (697 bytes, 253 insns) */
void f_12d34210(void) {
  FTRACE(0x12d34210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34210 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34211 mov ebp, esp */
  EBP = (ESP);
  /* 12d34213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34216 push ebx */
  push32((uint32_t)(EBX));
  /* 12d34217 push esi */
  push32((uint32_t)(ESI));
  /* 12d34218 push edi */
  push32((uint32_t)(EDI));
  /* 12d34219 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d34220 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d34222 call 0x12d361d0 */
  push32(0x12d34227u); f_12d361d0();
  /* 12d34227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3422a:;
  /* 12d3422a push 0x12d49a4c */
  push32((uint32_t)(0x12d49a4cu));
  /* 12d3422f push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d34234 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34238 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3423a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3423c call 0x12d31890 */
  push32(0x12d34241u); f_12d31890();
  /* 12d34241 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34244 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34247 jne 0x12d3424a */
  if (!C.zf) goto L_12d3424a;
  /* 12d34249 int3  */
  x86_unimpl("int3 @ 0x12d34249");
L_12d3424a:;
  /* 12d3424a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3424c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3424e jne 0x12d3422a */
  if (!C.zf) goto L_12d3422a;
  /* 12d34250 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34254 je 0x12d3425e */
  if (C.zf) goto L_12d3425e;
  /* 12d34256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34259 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3425b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d3425e:;
  /* 12d3425e mov eax, dword ptr [0x12d4e4b0] */
  EAX = (r32((uint32_t)(0x12d4e4b0)));
  /* 12d34263 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d34266 jmp 0x12d34270 */
  goto L_12d34270;
L_12d34268:;
  /* 12d34268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3426b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3426d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d34270:;
  /* 12d34270 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34274 je 0x12d34492 */
  if (C.zf) goto L_12d34492;
  /* 12d3427a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3427d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34280 je 0x12d34492 */
  if (C.zf) goto L_12d34492;
  /* 12d34286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34289 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d3428c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d34292 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34295 je 0x12d342c4 */
  if (C.zf) goto L_12d342c4;
  /* 12d34297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3429a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d3429d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d342a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d342a5 je 0x12d342c4 */
  if (C.zf) goto L_12d342c4;
  /* 12d342a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d342aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d342ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d342b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d342b5 jne 0x12d342c9 */
  if (!C.zf) goto L_12d342c9;
  /* 12d342b7 mov ecx, dword ptr [0x12d4caa4] */
  ECX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d342bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12d342c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d342c2 jne 0x12d342c9 */
  if (!C.zf) goto L_12d342c9;
L_12d342c4:;
  /* 12d342c4 jmp 0x12d3448d */
  goto L_12d3448d;
L_12d342c9:;
  /* 12d342c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d342cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d342d0 je 0x12d34342 */
  if (C.zf) goto L_12d34342;
  /* 12d342d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d342d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d342d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d342d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d342dc push ecx */
  push32((uint32_t)(ECX));
  /* 12d342dd call 0x12d33d80 */
  push32(0x12d342e2u); f_12d33d80();
  /* 12d342e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d342e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d342e7 jne 0x12d34313 */
  if (!C.zf) goto L_12d34313;
L_12d342e9:;
  /* 12d342e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d342ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d342ef push eax */
  push32((uint32_t)(EAX));
  /* 12d342f0 push 0x12d49a38 */
  push32((uint32_t)(0x12d49a38u));
  /* 12d342f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d342f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d342f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d342fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d342fd call 0x12d31890 */
  push32(0x12d34302u); f_12d31890();
  /* 12d34302 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34308 jne 0x12d3430b */
  if (!C.zf) goto L_12d3430b;
  /* 12d3430a int3  */
  x86_unimpl("int3 @ 0x12d3430a");
L_12d3430b:;
  /* 12d3430b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3430d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3430f jne 0x12d342e9 */
  if (!C.zf) goto L_12d342e9;
  /* 12d34311 jmp 0x12d34342 */
  goto L_12d34342;
L_12d34313:;
  /* 12d34313 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34316 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d34319 push eax */
  push32((uint32_t)(EAX));
  /* 12d3431a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3431d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d34320 push edx */
  push32((uint32_t)(EDX));
  /* 12d34321 push 0x12d49a2c */
  push32((uint32_t)(0x12d49a2cu));
  /* 12d34326 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34328 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3432a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3432c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3432e call 0x12d31890 */
  push32(0x12d34333u); f_12d31890();
  /* 12d34333 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34336 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34339 jne 0x12d3433c */
  if (!C.zf) goto L_12d3433c;
  /* 12d3433b int3  */
  x86_unimpl("int3 @ 0x12d3433b");
L_12d3433c:;
  /* 12d3433c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3433e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34340 jne 0x12d34313 */
  if (!C.zf) goto L_12d34313;
L_12d34342:;
  /* 12d34342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34345 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d34348 push edx */
  push32((uint32_t)(EDX));
  /* 12d34349 push 0x12d49a24 */
  push32((uint32_t)(0x12d49a24u));
  /* 12d3434e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34350 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34352 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34354 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34356 call 0x12d31890 */
  push32(0x12d3435bu); f_12d31890();
  /* 12d3435b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3435e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34361 jne 0x12d34364 */
  if (!C.zf) goto L_12d34364;
  /* 12d34363 int3  */
  x86_unimpl("int3 @ 0x12d34363");
L_12d34364:;
  /* 12d34364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34368 jne 0x12d34342 */
  if (!C.zf) goto L_12d34342;
  /* 12d3436a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3436d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d34370 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d34376 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34379 jne 0x12d343ec */
  if (!C.zf) goto L_12d343ec;
L_12d3437b:;
  /* 12d3437b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3437e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d34381 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34385 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d34388 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d3438b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d34390 push eax */
  push32((uint32_t)(EAX));
  /* 12d34391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34394 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34397 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34398 push 0x12d499f0 */
  push32((uint32_t)(0x12d499f0u));
  /* 12d3439d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3439f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d343a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d343a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d343a5 call 0x12d31890 */
  push32(0x12d343aau); f_12d31890();
  /* 12d343aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d343ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d343b0 jne 0x12d343b3 */
  if (!C.zf) goto L_12d343b3;
  /* 12d343b2 int3  */
  x86_unimpl("int3 @ 0x12d343b2");
L_12d343b3:;
  /* 12d343b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d343b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d343b7 jne 0x12d3437b */
  if (!C.zf) goto L_12d3437b;
  /* 12d343b9 cmp dword ptr [0x12d4fe18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fe18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d343c0 je 0x12d343db */
  if (C.zf) goto L_12d343db;
  /* 12d343c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d343c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d343c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d343c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d343cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d343cf push edx */
  push32((uint32_t)(EDX));
  /* 12d343d0 call dword ptr [0x12d4fe18] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4fe18))), 0x12d343d6u);
  /* 12d343d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d343d9 jmp 0x12d343e7 */
  goto L_12d343e7;
L_12d343db:;
  /* 12d343db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d343de push eax */
  push32((uint32_t)(EAX));
  /* 12d343df call 0x12d344d0 */
  push32(0x12d343e4u); f_12d344d0();
  /* 12d343e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d343e7:;
  /* 12d343e7 jmp 0x12d3448d */
  goto L_12d3448d;
L_12d343ec:;
  /* 12d343ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d343ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d343f3 jne 0x12d34432 */
  if (!C.zf) goto L_12d34432;
L_12d343f5:;
  /* 12d343f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d343f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d343fb push eax */
  push32((uint32_t)(EAX));
  /* 12d343fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d343ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34402 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34403 push 0x12d499c8 */
  push32((uint32_t)(0x12d499c8u));
  /* 12d34408 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3440a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3440c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3440e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34410 call 0x12d31890 */
  push32(0x12d34415u); f_12d31890();
  /* 12d34415 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34418 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3441b jne 0x12d3441e */
  if (!C.zf) goto L_12d3441e;
  /* 12d3441d int3  */
  x86_unimpl("int3 @ 0x12d3441d");
L_12d3441e:;
  /* 12d3441e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34420 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34422 jne 0x12d343f5 */
  if (!C.zf) goto L_12d343f5;
  /* 12d34424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34427 push eax */
  push32((uint32_t)(EAX));
  /* 12d34428 call 0x12d344d0 */
  push32(0x12d3442du); f_12d344d0();
  /* 12d3442d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34430 jmp 0x12d3448d */
  goto L_12d3448d;
L_12d34432:;
  /* 12d34432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34435 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d34438 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3443e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34441 jne 0x12d3448d */
  if (!C.zf) goto L_12d3448d;
L_12d34443:;
  /* 12d34443 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34446 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d34449 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3444a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3444d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d34450 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d34453 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d34458 push eax */
  push32((uint32_t)(EAX));
  /* 12d34459 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3445c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3445f push ecx */
  push32((uint32_t)(ECX));
  /* 12d34460 push 0x12d49994 */
  push32((uint32_t)(0x12d49994u));
  /* 12d34465 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34467 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34469 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3446b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3446d call 0x12d31890 */
  push32(0x12d34472u); f_12d31890();
  /* 12d34472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34475 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34478 jne 0x12d3447b */
  if (!C.zf) goto L_12d3447b;
  /* 12d3447a int3  */
  x86_unimpl("int3 @ 0x12d3447a");
L_12d3447b:;
  /* 12d3447b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3447d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3447f jne 0x12d34443 */
  if (!C.zf) goto L_12d34443;
  /* 12d34481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34484 push eax */
  push32((uint32_t)(EAX));
  /* 12d34485 call 0x12d344d0 */
  push32(0x12d3448au); f_12d344d0();
  /* 12d3448a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3448d:;
  /* 12d3448d jmp 0x12d34268 */
  goto L_12d34268;
L_12d34492:;
  /* 12d34492 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d34494 call 0x12d36270 */
  push32(0x12d34499u); f_12d36270();
  /* 12d34499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3449c:;
  /* 12d3449c push 0x12d4997c */
  push32((uint32_t)(0x12d4997cu));
  /* 12d344a1 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d344a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d344a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d344aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d344ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12d344ae call 0x12d31890 */
  push32(0x12d344b3u); f_12d31890();
  /* 12d344b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d344b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d344b9 jne 0x12d344bc */
  if (!C.zf) goto L_12d344bc;
  /* 12d344bb int3  */
  x86_unimpl("int3 @ 0x12d344bb");
L_12d344bc:;
  /* 12d344bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d344be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d344c0 jne 0x12d3449c */
  if (!C.zf) goto L_12d3449c;
  /* 12d344c2 pop edi */
  EDI = (pop32());
  /* 12d344c3 pop esi */
  ESI = (pop32());
  /* 12d344c4 pop ebx */
  EBX = (pop32());
  /* 12d344c5 mov esp, ebp */
  ESP = (EBP);
  /* 12d344c7 pop ebp */
  EBP = (pop32());
  /* 12d344c8 ret  */
  ESPCHK(0x12d34210u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x12d344d0 (276 bytes, 89 insns) */
void f_12d344d0(void) {
  FTRACE(0x12d344d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d344d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d344d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d344d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d344d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d344d7 push esi */
  push32((uint32_t)(ESI));
  /* 12d344d8 push edi */
  push32((uint32_t)(EDI));
  /* 12d344d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12d344e0 jmp 0x12d344eb */
  goto L_12d344eb;
L_12d344e2:;
  /* 12d344e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d344e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d344e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12d344eb:;
  /* 12d344eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d344ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d344f2 jge 0x12d344ff */
  if ((C.sf==C.of)) goto L_12d344ff;
  /* 12d344f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d344f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d344fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12d344fd jmp 0x12d34506 */
  goto L_12d34506;
L_12d344ff:;
  /* 12d344ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12d34506:;
  /* 12d34506 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d34509 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3450c jge 0x12d345ac */
  if ((C.sf==C.of)) goto L_12d345ac;
  /* 12d34512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34515 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34518 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12d3451b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12d3451e cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34525 jle 0x12d34543 */
  if ((C.zf||C.sf!=C.of)) goto L_12d34543;
  /* 12d34527 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12d3452c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d3452f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d34535 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34536 call 0x12d387e0 */
  push32(0x12d3453bu); f_12d387e0();
  /* 12d3453b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3453e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12d34541 jmp 0x12d34560 */
  goto L_12d34560;
L_12d34543:;
  /* 12d34543 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d34546 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3454c mov eax, dword ptr [0x12d4ccb8] */
  EAX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d34551 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d34553 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d34557 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3455d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12d34560:;
  /* 12d34560 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34564 je 0x12d34574 */
  if (C.zf) goto L_12d34574;
  /* 12d34566 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d34569 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3456f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12d34572 jmp 0x12d3457b */
  goto L_12d3457b;
L_12d34574:;
  /* 12d34574 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12d3457b:;
  /* 12d3457b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d3457e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12d34581 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12d34585 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d34588 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3458e push edx */
  push32((uint32_t)(EDX));
  /* 12d3458f push 0x12d49a70 */
  push32((uint32_t)(0x12d49a70u));
  /* 12d34594 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d34597 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3459a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12d3459e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3459f call 0x12d386e0 */
  push32(0x12d345a4u); f_12d386e0();
  /* 12d345a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d345a7 jmp 0x12d344e2 */
  goto L_12d344e2;
L_12d345ac:;
  /* 12d345ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d345af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12d345b4:;
  /* 12d345b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12d345b7 push eax */
  push32((uint32_t)(EAX));
  /* 12d345b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12d345bb push ecx */
  push32((uint32_t)(ECX));
  /* 12d345bc push 0x12d49a60 */
  push32((uint32_t)(0x12d49a60u));
  /* 12d345c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d345c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d345c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d345c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d345c9 call 0x12d31890 */
  push32(0x12d345ceu); f_12d31890();
  /* 12d345ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d345d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d345d4 jne 0x12d345d7 */
  if (!C.zf) goto L_12d345d7;
  /* 12d345d6 int3  */
  x86_unimpl("int3 @ 0x12d345d6");
L_12d345d7:;
  /* 12d345d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d345d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d345db jne 0x12d345b4 */
  if (!C.zf) goto L_12d345b4;
  /* 12d345dd pop edi */
  EDI = (pop32());
  /* 12d345de pop esi */
  ESI = (pop32());
  /* 12d345df pop ebx */
  EBX = (pop32());
  /* 12d345e0 mov esp, ebp */
  ESP = (EBP);
  /* 12d345e2 pop ebp */
  EBP = (pop32());
  /* 12d345e3 ret  */
  ESPCHK(0x12d344d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f0 @ 0x12d345f0 (116 bytes, 46 insns) */
void f_12d345f0(void) {
  FTRACE(0x12d345f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d345f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d345f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d345f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d345f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d345f7 push esi */
  push32((uint32_t)(ESI));
  /* 12d345f8 push edi */
  push32((uint32_t)(EDI));
  /* 12d345f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12d345fc push eax */
  push32((uint32_t)(EAX));
  /* 12d345fd call 0x12d33f70 */
  push32(0x12d34602u); f_12d33f70();
  /* 12d34602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34605 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34609 jne 0x12d34624 */
  if (!C.zf) goto L_12d34624;
  /* 12d3460b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3460f jne 0x12d34624 */
  if (!C.zf) goto L_12d34624;
  /* 12d34611 mov ecx, dword ptr [0x12d4caa4] */
  ECX = (r32((uint32_t)(0x12d4caa4)));
  /* 12d34617 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3461a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3461c je 0x12d3465b */
  if (C.zf) goto L_12d3465b;
  /* 12d3461e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34622 je 0x12d3465b */
  if (C.zf) goto L_12d3465b;
L_12d34624:;
  /* 12d34624 push 0x12d49a78 */
  push32((uint32_t)(0x12d49a78u));
  /* 12d34629 push 0x12d49444 */
  push32((uint32_t)(0x12d49444u));
  /* 12d3462e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34630 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34634 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34636 call 0x12d31890 */
  push32(0x12d3463bu); f_12d31890();
  /* 12d3463b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3463e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34641 jne 0x12d34644 */
  if (!C.zf) goto L_12d34644;
  /* 12d34643 int3  */
  x86_unimpl("int3 @ 0x12d34643");
L_12d34644:;
  /* 12d34644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34646 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34648 jne 0x12d34624 */
  if (!C.zf) goto L_12d34624;
  /* 12d3464a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3464c call 0x12d34210 */
  push32(0x12d34651u); f_12d34210();
  /* 12d34651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34654 mov eax, 1 */
  EAX = (0x1u);
  /* 12d34659 jmp 0x12d3465d */
  goto L_12d3465d;
L_12d3465b:;
  /* 12d3465b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3465d:;
  /* 12d3465d pop edi */
  EDI = (pop32());
  /* 12d3465e pop esi */
  ESI = (pop32());
  /* 12d3465f pop ebx */
  EBX = (pop32());
  /* 12d34660 mov esp, ebp */
  ESP = (EBP);
  /* 12d34662 pop ebp */
  EBP = (pop32());
  /* 12d34663 ret  */
  ESPCHK(0x12d345f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x12d34670 (197 bytes, 79 insns) */
void f_12d34670(void) {
  FTRACE(0x12d34670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34670 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34671 mov ebp, esp */
  EBP = (ESP);
  /* 12d34673 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34674 push ebx */
  push32((uint32_t)(EBX));
  /* 12d34675 push esi */
  push32((uint32_t)(ESI));
  /* 12d34676 push edi */
  push32((uint32_t)(EDI));
  /* 12d34677 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3467b jne 0x12d34682 */
  if (!C.zf) goto L_12d34682;
  /* 12d3467d jmp 0x12d3472e */
  goto L_12d3472e;
L_12d34682:;
  /* 12d34682 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d34689 jmp 0x12d34694 */
  goto L_12d34694;
L_12d3468b:;
  /* 12d3468b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3468e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34691 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d34694:;
  /* 12d34694 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34698 jge 0x12d346de */
  if ((C.sf==C.of)) goto L_12d346de;
L_12d3469a:;
  /* 12d3469a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3469d mov edx, dword ptr [ecx*4 + 0x12d4cab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4cab4)));
  /* 12d346a4 push edx */
  push32((uint32_t)(EDX));
  /* 12d346a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d346a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d346ab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12d346af push edx */
  push32((uint32_t)(EDX));
  /* 12d346b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d346b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d346b6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12d346ba push edx */
  push32((uint32_t)(EDX));
  /* 12d346bb push 0x12d49ad4 */
  push32((uint32_t)(0x12d49ad4u));
  /* 12d346c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346c8 call 0x12d31890 */
  push32(0x12d346cdu); f_12d31890();
  /* 12d346cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d346d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d346d3 jne 0x12d346d6 */
  if (!C.zf) goto L_12d346d6;
  /* 12d346d5 int3  */
  x86_unimpl("int3 @ 0x12d346d5");
L_12d346d6:;
  /* 12d346d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d346d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d346da jne 0x12d3469a */
  if (!C.zf) goto L_12d3469a;
  /* 12d346dc jmp 0x12d3468b */
  goto L_12d3468b;
L_12d346de:;
  /* 12d346de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d346e1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12d346e4 push edx */
  push32((uint32_t)(EDX));
  /* 12d346e5 push 0x12d49ab0 */
  push32((uint32_t)(0x12d49ab0u));
  /* 12d346ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d346f2 call 0x12d31890 */
  push32(0x12d346f7u); f_12d31890();
  /* 12d346f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d346fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d346fd jne 0x12d34700 */
  if (!C.zf) goto L_12d34700;
  /* 12d346ff int3  */
  x86_unimpl("int3 @ 0x12d346ff");
L_12d34700:;
  /* 12d34700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34704 jne 0x12d346de */
  if (!C.zf) goto L_12d346de;
L_12d34706:;
  /* 12d34706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d34709 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12d3470c push edx */
  push32((uint32_t)(EDX));
  /* 12d3470d push 0x12d49a90 */
  push32((uint32_t)(0x12d49a90u));
  /* 12d34712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34714 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34718 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3471a call 0x12d31890 */
  push32(0x12d3471fu); f_12d31890();
  /* 12d3471f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34722 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34725 jne 0x12d34728 */
  if (!C.zf) goto L_12d34728;
  /* 12d34727 int3  */
  x86_unimpl("int3 @ 0x12d34727");
L_12d34728:;
  /* 12d34728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3472a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3472c jne 0x12d34706 */
  if (!C.zf) goto L_12d34706;
L_12d3472e:;
  /* 12d3472e pop edi */
  EDI = (pop32());
  /* 12d3472f pop esi */
  ESI = (pop32());
  /* 12d34730 pop ebx */
  EBX = (pop32());
  /* 12d34731 mov esp, ebp */
  ESP = (EBP);
  /* 12d34733 pop ebp */
  EBP = (pop32());
  /* 12d34734 ret  */
  ESPCHK(0x12d34670u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x12d34740 (329 bytes, 102 insns) */
void f_12d34740(void) {
  FTRACE(0x12d34740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34740 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34741 mov ebp, esp */
  EBP = (ESP);
  /* 12d34743 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34746 cmp dword ptr [0x12d4ff90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ff90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3474d jne 0x12d34754 */
  if (!C.zf) goto L_12d34754;
  /* 12d3474f call 0x12d39080 */
  push32(0x12d34754u); f_12d39080();
L_12d34754:;
  /* 12d34754 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3475b mov eax, dword ptr [0x12d4e44c] */
  EAX = (r32((uint32_t)(0x12d4e44c)));
  /* 12d34760 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d34763:;
  /* 12d34763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34766 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d34769 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3476b je 0x12d34799 */
  if (C.zf) goto L_12d34799;
  /* 12d3476d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34770 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d34773 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34776 je 0x12d34781 */
  if (C.zf) goto L_12d34781;
  /* 12d34778 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3477b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3477e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d34781:;
  /* 12d34781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34784 push eax */
  push32((uint32_t)(EAX));
  /* 12d34785 call 0x12d35600 */
  push32(0x12d3478au); f_12d35600();
  /* 12d3478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3478d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34790 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d34794 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d34797 jmp 0x12d34763 */
  goto L_12d34763;
L_12d34799:;
  /* 12d34799 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12d3479b push 0x12d49af4 */
  push32((uint32_t)(0x12d49af4u));
  /* 12d347a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d347a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d347a5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12d347ac push ecx */
  push32((uint32_t)(ECX));
  /* 12d347ad call 0x12d327d0 */
  push32(0x12d347b2u); f_12d327d0();
  /* 12d347b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d347b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d347b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d347bb mov dword ptr [0x12d4e480], edx */
  w32((uint32_t)(0x12d4e480), (EDX));
  /* 12d347c1 cmp dword ptr [0x12d4e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d347c8 jne 0x12d347d4 */
  if (!C.zf) goto L_12d347d4;
  /* 12d347ca push 9 */
  push32((uint32_t)(0x9u));
  /* 12d347cc call 0x12d31740 */
  push32(0x12d347d1u); f_12d31740();
  /* 12d347d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d347d4:;
  /* 12d347d4 mov eax, dword ptr [0x12d4e44c] */
  EAX = (r32((uint32_t)(0x12d4e44c)));
  /* 12d347d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d347dc jmp 0x12d347e7 */
  goto L_12d347e7;
L_12d347de:;
  /* 12d347de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d347e1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d347e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d347e7:;
  /* 12d347e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d347ea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d347ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d347ef je 0x12d34857 */
  if (C.zf) goto L_12d34857;
  /* 12d347f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d347f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d347f5 call 0x12d35600 */
  push32(0x12d347fau); f_12d35600();
  /* 12d347fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d347fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34800 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d34803 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34806 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d34809 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3480c je 0x12d34855 */
  if (C.zf) goto L_12d34855;
  /* 12d3480e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12d34810 push 0x12d49af4 */
  push32((uint32_t)(0x12d49af4u));
  /* 12d34815 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d34817 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3481a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3481b call 0x12d327d0 */
  push32(0x12d34820u); f_12d327d0();
  /* 12d34820 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34823 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34826 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d34828 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3482b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3482e jne 0x12d3483a */
  if (!C.zf) goto L_12d3483a;
  /* 12d34830 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d34832 call 0x12d31740 */
  push32(0x12d34837u); f_12d31740();
  /* 12d34837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3483a:;
  /* 12d3483a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3483d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3483e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34841 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d34843 push eax */
  push32((uint32_t)(EAX));
  /* 12d34844 call 0x12d35780 */
  push32(0x12d34849u); f_12d35780();
  /* 12d34849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3484c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3484f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34852 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d34855:;
  /* 12d34855 jmp 0x12d347de */
  goto L_12d347de;
L_12d34857:;
  /* 12d34857 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d34859 mov edx, dword ptr [0x12d4e44c] */
  EDX = (r32((uint32_t)(0x12d4e44c)));
  /* 12d3485f push edx */
  push32((uint32_t)(EDX));
  /* 12d34860 call 0x12d33260 */
  push32(0x12d34865u); f_12d33260();
  /* 12d34865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34868 mov dword ptr [0x12d4e44c], 0 */
  w32((uint32_t)(0x12d4e44c), (0x0u));
  /* 12d34872 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34875 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3487b mov dword ptr [0x12d4ff80], 1 */
  w32((uint32_t)(0x12d4ff80), (0x1u));
  /* 12d34885 mov esp, ebp */
  ESP = (EBP);
  /* 12d34887 pop ebp */
  EBP = (pop32());
  /* 12d34888 ret  */
  ESPCHK(0x12d34740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x12d34890 (216 bytes, 69 insns) */
void f_12d34890(void) {
  FTRACE(0x12d34890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34890 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34891 mov ebp, esp */
  EBP = (ESP);
  /* 12d34893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34896 cmp dword ptr [0x12d4ff90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ff90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3489d jne 0x12d348a4 */
  if (!C.zf) goto L_12d348a4;
  /* 12d3489f call 0x12d39080 */
  push32(0x12d348a4u); f_12d39080();
L_12d348a4:;
  /* 12d348a4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d348a9 push 0x12d4e4bc */
  push32((uint32_t)(0x12d4e4bcu));
  /* 12d348ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12d348b0 call dword ptr [0x12d50258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50258))), 0x12d348b6u);
  /* 12d348b6 mov dword ptr [0x12d4e490], 0x12d4e4bc */
  w32((uint32_t)(0x12d4e490), (0x12d4e4bcu));
  /* 12d348c0 mov eax, dword ptr [0x12d4ffac] */
  EAX = (r32((uint32_t)(0x12d4ffac)));
  /* 12d348c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d348c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d348ca jne 0x12d348d7 */
  if (!C.zf) goto L_12d348d7;
  /* 12d348cc mov edx, dword ptr [0x12d4e490] */
  EDX = (r32((uint32_t)(0x12d4e490)));
  /* 12d348d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d348d5 jmp 0x12d348df */
  goto L_12d348df;
L_12d348d7:;
  /* 12d348d7 mov eax, dword ptr [0x12d4ffac] */
  EAX = (r32((uint32_t)(0x12d4ffac)));
  /* 12d348dc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12d348df:;
  /* 12d348df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d348e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d348e5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12d348e8 push edx */
  push32((uint32_t)(EDX));
  /* 12d348e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d348ec push eax */
  push32((uint32_t)(EAX));
  /* 12d348ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12d348ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d348f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d348f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d348f5 call 0x12d34970 */
  push32(0x12d348fau); f_12d34970();
  /* 12d348fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d348fd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12d34902 push 0x12d49b00 */
  push32((uint32_t)(0x12d49b00u));
  /* 12d34907 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d34909 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3490c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3490f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12d34912 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34913 call 0x12d327d0 */
  push32(0x12d34918u); f_12d327d0();
  /* 12d34918 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3491b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3491e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34922 jne 0x12d3492e */
  if (!C.zf) goto L_12d3492e;
  /* 12d34924 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d34926 call 0x12d31740 */
  push32(0x12d3492bu); f_12d31740();
  /* 12d3492b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3492e:;
  /* 12d3492e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12d34931 push edx */
  push32((uint32_t)(EDX));
  /* 12d34932 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d34935 push eax */
  push32((uint32_t)(EAX));
  /* 12d34936 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34939 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3493c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12d3493f push eax */
  push32((uint32_t)(EAX));
  /* 12d34940 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34943 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34944 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34947 push edx */
  push32((uint32_t)(EDX));
  /* 12d34948 call 0x12d34970 */
  push32(0x12d3494du); f_12d34970();
  /* 12d3494d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34950 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34953 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34956 mov dword ptr [0x12d4e474], eax */
  w32((uint32_t)(0x12d4e474), (EAX));
  /* 12d3495b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3495e mov dword ptr [0x12d4e478], ecx */
  w32((uint32_t)(0x12d4e478), (ECX));
  /* 12d34964 mov esp, ebp */
  ESP = (EBP);
  /* 12d34966 pop ebp */
  EBP = (pop32());
  /* 12d34967 ret  */
  ESPCHK(0x12d34890u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x12d34970 (1060 bytes, 360 insns) */
void f_12d34970(void) {
  FTRACE(0x12d34970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34970 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34971 mov ebp, esp */
  EBP = (ESP);
  /* 12d34973 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34976 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34979 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3497f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d34982 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12d34988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3498b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3498e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34992 je 0x12d349a5 */
  if (C.zf) goto L_12d349a5;
  /* 12d34994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34997 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3499a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d3499c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3499f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d349a2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12d349a5:;
  /* 12d349a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d349a8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d349ab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d349ae jne 0x12d34a7d */
  if (!C.zf) goto L_12d34a7d;
L_12d349b4:;
  /* 12d349b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d349b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d349ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d349bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d349c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d349c3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d349c6 je 0x12d34a42 */
  if (C.zf) goto L_12d34a42;
  /* 12d349c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d349cb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d349ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d349d0 je 0x12d34a42 */
  if (C.zf) goto L_12d34a42;
  /* 12d349d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d349d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d349d7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d349d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d349db mov al, byte ptr [edx + 0x12d4fce1] */
  AL = (r8((uint32_t)(EDX + 0x12d4fce1)));
  /* 12d349e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d349e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d349e6 je 0x12d34a17 */
  if (C.zf) goto L_12d34a17;
  /* 12d349e8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d349eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d349ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d349f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d349f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d349f5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d349f9 je 0x12d34a17 */
  if (C.zf) goto L_12d34a17;
  /* 12d349fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d349fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34a01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d34a03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d34a05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d34a0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34a11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d34a17:;
  /* 12d34a17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34a1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34a1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34a22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d34a24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34a28 je 0x12d34a3d */
  if (C.zf) goto L_12d34a3d;
  /* 12d34a2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34a30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d34a32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d34a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a3a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d34a3d:;
  /* 12d34a3d jmp 0x12d349b4 */
  goto L_12d349b4;
L_12d34a42:;
  /* 12d34a42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34a45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d34a47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a4a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34a4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d34a4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34a53 je 0x12d34a64 */
  if (C.zf) goto L_12d34a64;
  /* 12d34a55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a58 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d34a5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a61 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12d34a64:;
  /* 12d34a64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34a67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d34a6a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34a6d jne 0x12d34a78 */
  if (!C.zf) goto L_12d34a78;
  /* 12d34a6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34a72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d34a78:;
  /* 12d34a78 jmp 0x12d34b4c */
  goto L_12d34b4c;
L_12d34a7d:;
  /* 12d34a7d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34a80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34a82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34a85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34a88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d34a8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34a8e je 0x12d34aa3 */
  if (C.zf) goto L_12d34aa3;
  /* 12d34a90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34a96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d34a98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d34a9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34a9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34aa0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d34aa3:;
  /* 12d34aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34aa6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d34aa8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12d34aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34aae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34ab1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d34ab4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34ab7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d34abd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34abf mov dl, byte ptr [ecx + 0x12d4fce1] */
  DL = (r8((uint32_t)(ECX + 0x12d4fce1)));
  /* 12d34ac5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d34ac8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34aca je 0x12d34afb */
  if (C.zf) goto L_12d34afb;
  /* 12d34acc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34acf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34ad1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34ad4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34ad7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d34ad9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34add je 0x12d34af2 */
  if (C.zf) goto L_12d34af2;
  /* 12d34adf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34ae5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d34ae7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d34ae9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34aec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34aef mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d34af2:;
  /* 12d34af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34af5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34af8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d34afb:;
  /* 12d34afb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34afe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d34b04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34b07 je 0x12d34b27 */
  if (C.zf) goto L_12d34b27;
  /* 12d34b09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34b0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d34b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34b13 je 0x12d34b27 */
  if (C.zf) goto L_12d34b27;
  /* 12d34b15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34b18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d34b1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34b21 jne 0x12d34a7d */
  if (!C.zf) goto L_12d34a7d;
L_12d34b27:;
  /* 12d34b27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34b2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d34b30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34b32 jne 0x12d34b3f */
  if (!C.zf) goto L_12d34b3f;
  /* 12d34b34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34b37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34b3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d34b3d jmp 0x12d34b4c */
  goto L_12d34b4c;
L_12d34b3f:;
  /* 12d34b3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34b43 je 0x12d34b4c */
  if (C.zf) goto L_12d34b4c;
  /* 12d34b45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34b48 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12d34b4c:;
  /* 12d34b4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12d34b53:;
  /* 12d34b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34b56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d34b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34b5b je 0x12d34b7e */
  if (C.zf) goto L_12d34b7e;
L_12d34b5d:;
  /* 12d34b5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34b60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d34b63 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34b66 je 0x12d34b73 */
  if (C.zf) goto L_12d34b73;
  /* 12d34b68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34b6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d34b6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34b71 jne 0x12d34b7e */
  if (!C.zf) goto L_12d34b7e;
L_12d34b73:;
  /* 12d34b73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34b76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34b79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d34b7c jmp 0x12d34b5d */
  goto L_12d34b5d;
L_12d34b7e:;
  /* 12d34b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34b81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d34b84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d34b86 jne 0x12d34b8d */
  if (!C.zf) goto L_12d34b8d;
  /* 12d34b88 jmp 0x12d34d6b */
  goto L_12d34d6b;
L_12d34b8d:;
  /* 12d34b8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34b91 je 0x12d34ba4 */
  if (C.zf) goto L_12d34ba4;
  /* 12d34b93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34b96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34b99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d34b9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34b9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34ba1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d34ba4:;
  /* 12d34ba4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d34ba7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d34ba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34bac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d34baf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d34bb1:;
  /* 12d34bb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d34bb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d34bbf:;
  /* 12d34bbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34bc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d34bc5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34bc8 jne 0x12d34bde */
  if (!C.zf) goto L_12d34bde;
  /* 12d34bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34bcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34bd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d34bd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34bd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34bd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d34bdc jmp 0x12d34bbf */
  goto L_12d34bbf;
L_12d34bde:;
  /* 12d34bde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34be1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d34be4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34be7 jne 0x12d34c3a */
  if (!C.zf) goto L_12d34c3a;
  /* 12d34be9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34bec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34bee mov ecx, 2 */
  ECX = (0x2u);
  /* 12d34bf3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d34bf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34bf7 jne 0x12d34c32 */
  if (!C.zf) goto L_12d34c32;
  /* 12d34bf9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34bfd je 0x12d34c1f */
  if (C.zf) goto L_12d34c1f;
  /* 12d34bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34c02 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d34c06 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c09 jne 0x12d34c16 */
  if (!C.zf) goto L_12d34c16;
  /* 12d34c0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34c0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34c11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d34c14 jmp 0x12d34c1d */
  goto L_12d34c1d;
L_12d34c16:;
  /* 12d34c16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d34c1d:;
  /* 12d34c1d jmp 0x12d34c26 */
  goto L_12d34c26;
L_12d34c1f:;
  /* 12d34c1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d34c26:;
  /* 12d34c26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34c28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c2c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12d34c2f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d34c32:;
  /* 12d34c32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34c35 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d34c37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d34c3a:;
  /* 12d34c3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34c3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34c40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34c43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d34c46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d34c48 je 0x12d34c6e */
  if (C.zf) goto L_12d34c6e;
  /* 12d34c4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c4e je 0x12d34c5f */
  if (C.zf) goto L_12d34c5f;
  /* 12d34c50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34c53 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12d34c56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34c59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34c5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12d34c5f:;
  /* 12d34c5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34c62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d34c64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34c67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34c6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d34c6c jmp 0x12d34c3a */
  goto L_12d34c3a;
L_12d34c6e:;
  /* 12d34c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34c71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d34c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34c76 je 0x12d34c94 */
  if (C.zf) goto L_12d34c94;
  /* 12d34c78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c7c jne 0x12d34c99 */
  if (!C.zf) goto L_12d34c99;
  /* 12d34c7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34c81 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d34c84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c87 je 0x12d34c94 */
  if (C.zf) goto L_12d34c94;
  /* 12d34c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34c8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d34c8f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c92 jne 0x12d34c99 */
  if (!C.zf) goto L_12d34c99;
L_12d34c94:;
  /* 12d34c94 jmp 0x12d34d44 */
  goto L_12d34d44;
L_12d34c99:;
  /* 12d34c99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34c9d je 0x12d34d36 */
  if (C.zf) goto L_12d34d36;
  /* 12d34ca3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34ca7 je 0x12d34cfd */
  if (C.zf) goto L_12d34cfd;
  /* 12d34ca9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34cac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34cae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d34cb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d34cb2 mov cl, byte ptr [eax + 0x12d4fce1] */
  CL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d34cb8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d34cbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d34cbd je 0x12d34ce8 */
  if (C.zf) goto L_12d34ce8;
  /* 12d34cbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34cc5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d34cc7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d34cc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34ccc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34ccf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12d34cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34cd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d34cdb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34cde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d34ce0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34ce6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d34ce8:;
  /* 12d34ce8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34ceb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34cee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d34cf0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d34cf2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34cf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34cf8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d34cfb jmp 0x12d34d29 */
  goto L_12d34d29;
L_12d34cfd:;
  /* 12d34cfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34d02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d34d04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d34d06 mov cl, byte ptr [eax + 0x12d4fce1] */
  CL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d34d0c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d34d0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d34d11 je 0x12d34d29 */
  if (C.zf) goto L_12d34d29;
  /* 12d34d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34d16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d34d1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34d1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34d21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34d27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d34d29:;
  /* 12d34d29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34d2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34d2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34d34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d34d36:;
  /* 12d34d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34d39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d34d3f jmp 0x12d34bb1 */
  goto L_12d34bb1;
L_12d34d44:;
  /* 12d34d44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34d48 je 0x12d34d59 */
  if (C.zf) goto L_12d34d59;
  /* 12d34d4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34d4d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d34d50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d34d53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d56 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12d34d59:;
  /* 12d34d59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34d5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d34d5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d34d64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d34d66 jmp 0x12d34b53 */
  goto L_12d34b53;
L_12d34d6b:;
  /* 12d34d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34d6f je 0x12d34d83 */
  if (C.zf) goto L_12d34d83;
  /* 12d34d71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34d74 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d34d7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d34d7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d80 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d34d83:;
  /* 12d34d83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d34d86 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d34d88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34d8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d34d8e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d34d90 mov esp, ebp */
  ESP = (EBP);
  /* 12d34d92 pop ebp */
  EBP = (pop32());
  /* 12d34d93 ret  */
  ESPCHK(0x12d34970u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x12d34da0 (537 bytes, 173 insns) */
void f_12d34da0(void) {
  FTRACE(0x12d34da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34da1 mov ebp, esp */
  EBP = (ESP);
  /* 12d34da3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34da6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d34dad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12d34db4 cmp dword ptr [0x12d4e5c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34dbb jne 0x12d34dfa */
  if (!C.zf) goto L_12d34dfa;
  /* 12d34dbd call dword ptr [0x12d502b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502b4))), 0x12d34dc3u);
  /* 12d34dc3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d34dc6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34dca je 0x12d34dd8 */
  if (C.zf) goto L_12d34dd8;
  /* 12d34dcc mov dword ptr [0x12d4e5c0], 1 */
  w32((uint32_t)(0x12d4e5c0), (0x1u));
  /* 12d34dd6 jmp 0x12d34dfa */
  goto L_12d34dfa;
L_12d34dd8:;
  /* 12d34dd8 call dword ptr [0x12d50210] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50210))), 0x12d34ddeu);
  /* 12d34dde mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d34de1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34de5 je 0x12d34df3 */
  if (C.zf) goto L_12d34df3;
  /* 12d34de7 mov dword ptr [0x12d4e5c0], 2 */
  w32((uint32_t)(0x12d4e5c0), (0x2u));
  /* 12d34df1 jmp 0x12d34dfa */
  goto L_12d34dfa;
L_12d34df3:;
  /* 12d34df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34df5 jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34dfa:;
  /* 12d34dfa cmp dword ptr [0x12d4e5c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34e01 jne 0x12d34efe */
  if (!C.zf) goto L_12d34efe;
  /* 12d34e07 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34e0b jne 0x12d34e23 */
  if (!C.zf) goto L_12d34e23;
  /* 12d34e0d call dword ptr [0x12d502b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502b4))), 0x12d34e13u);
  /* 12d34e13 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d34e16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34e1a jne 0x12d34e23 */
  if (!C.zf) goto L_12d34e23;
  /* 12d34e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34e1e jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34e23:;
  /* 12d34e23 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d34e26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d34e29:;
  /* 12d34e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34e2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34e2e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d34e31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34e33 je 0x12d34e55 */
  if (C.zf) goto L_12d34e55;
  /* 12d34e35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34e38 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34e3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d34e3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34e41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d34e43 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d34e46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34e48 jne 0x12d34e53 */
  if (!C.zf) goto L_12d34e53;
  /* 12d34e4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34e4d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34e50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d34e53:;
  /* 12d34e53 jmp 0x12d34e29 */
  goto L_12d34e29;
L_12d34e55:;
  /* 12d34e55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d34e58 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34e5b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d34e5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34e60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d34e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34e6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34e6e push edx */
  push32((uint32_t)(EDX));
  /* 12d34e6f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d34e72 push eax */
  push32((uint32_t)(EAX));
  /* 12d34e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34e77 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d34e7du);
  /* 12d34e7d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d34e80 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34e84 je 0x12d34ea4 */
  if (C.zf) goto L_12d34ea4;
  /* 12d34e86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12d34e88 push 0x12d49b0c */
  push32((uint32_t)(0x12d49b0cu));
  /* 12d34e8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d34e8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34e92 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34e93 call 0x12d327d0 */
  push32(0x12d34e98u); f_12d327d0();
  /* 12d34e98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34e9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d34e9e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34ea2 jne 0x12d34eb5 */
  if (!C.zf) goto L_12d34eb5;
L_12d34ea4:;
  /* 12d34ea4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d34ea7 push edx */
  push32((uint32_t)(EDX));
  /* 12d34ea8 call dword ptr [0x12d502a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502a8))), 0x12d34eaeu);
  /* 12d34eae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34eb0 jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34eb5:;
  /* 12d34eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34eb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34ebc push eax */
  push32((uint32_t)(EAX));
  /* 12d34ebd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d34ec4 push edx */
  push32((uint32_t)(EDX));
  /* 12d34ec5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d34ec8 push eax */
  push32((uint32_t)(EAX));
  /* 12d34ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34ecd call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d34ed3u);
  /* 12d34ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34ed5 jne 0x12d34eec */
  if (!C.zf) goto L_12d34eec;
  /* 12d34ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d34ed9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34edc push ecx */
  push32((uint32_t)(ECX));
  /* 12d34edd call 0x12d33260 */
  push32(0x12d34ee2u); f_12d33260();
  /* 12d34ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34ee5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12d34eec:;
  /* 12d34eec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d34eef push edx */
  push32((uint32_t)(EDX));
  /* 12d34ef0 call dword ptr [0x12d502a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502a8))), 0x12d34ef6u);
  /* 12d34ef6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34ef9 jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34efe:;
  /* 12d34efe cmp dword ptr [0x12d4e5c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34f05 jne 0x12d34fb3 */
  if (!C.zf) goto L_12d34fb3;
  /* 12d34f0b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34f0f jne 0x12d34f27 */
  if (!C.zf) goto L_12d34f27;
  /* 12d34f11 call dword ptr [0x12d50210] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50210))), 0x12d34f17u);
  /* 12d34f17 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d34f1a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34f1e jne 0x12d34f27 */
  if (!C.zf) goto L_12d34f27;
  /* 12d34f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34f22 jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34f27:;
  /* 12d34f27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34f2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d34f2d:;
  /* 12d34f2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34f30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d34f33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34f35 je 0x12d34f55 */
  if (C.zf) goto L_12d34f55;
  /* 12d34f37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34f3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34f3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d34f40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34f43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d34f46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d34f48 jne 0x12d34f53 */
  if (!C.zf) goto L_12d34f53;
  /* 12d34f4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34f4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34f50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d34f53:;
  /* 12d34f53 jmp 0x12d34f2d */
  goto L_12d34f2d;
L_12d34f55:;
  /* 12d34f55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34f58 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d34f5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34f5e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d34f61 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12d34f66 push 0x12d49b0c */
  push32((uint32_t)(0x12d49b0cu));
  /* 12d34f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d34f6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34f70 push edx */
  push32((uint32_t)(EDX));
  /* 12d34f71 call 0x12d327d0 */
  push32(0x12d34f76u); f_12d327d0();
  /* 12d34f76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34f79 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d34f7c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34f80 jne 0x12d34f90 */
  if (!C.zf) goto L_12d34f90;
  /* 12d34f82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34f85 push eax */
  push32((uint32_t)(EAX));
  /* 12d34f86 call dword ptr [0x12d502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502a4))), 0x12d34f8cu);
  /* 12d34f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34f8e jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34f90:;
  /* 12d34f90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d34f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34f94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34f97 push edx */
  push32((uint32_t)(EDX));
  /* 12d34f98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34f9b push eax */
  push32((uint32_t)(EAX));
  /* 12d34f9c call 0x12d390b0 */
  push32(0x12d34fa1u); f_12d390b0();
  /* 12d34fa1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d34fa4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d34fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d34fa8 call dword ptr [0x12d502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502a4))), 0x12d34faeu);
  /* 12d34fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d34fb1 jmp 0x12d34fb5 */
  goto L_12d34fb5;
L_12d34fb3:;
  /* 12d34fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d34fb5:;
  /* 12d34fb5 mov esp, ebp */
  ESP = (EBP);
  /* 12d34fb7 pop ebp */
  EBP = (pop32());
  /* 12d34fb8 ret  */
  ESPCHK(0x12d34da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x12d34fc0 (77 bytes, 25 insns) */
void f_12d34fc0(void) {
  FTRACE(0x12d34fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d34fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d34fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d34fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d34fc5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d34fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34fcc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34fd0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12d34fd3 push eax */
  push32((uint32_t)(EAX));
  /* 12d34fd4 call dword ptr [0x12d502bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502bc))), 0x12d34fdau);
  /* 12d34fda mov dword ptr [0x12d4fe0c], eax */
  w32((uint32_t)(0x12d4fe0c), (EAX));
  /* 12d34fdf cmp dword ptr [0x12d4fe0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fe0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d34fe6 jne 0x12d34fec */
  if (!C.zf) goto L_12d34fec;
  /* 12d34fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d34fea jmp 0x12d3500b */
  goto L_12d3500b;
L_12d34fec:;
  /* 12d34fec call 0x12d36a70 */
  push32(0x12d34ff1u); f_12d36a70();
  /* 12d34ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d34ff3 jne 0x12d35006 */
  if (!C.zf) goto L_12d35006;
  /* 12d34ff5 mov ecx, dword ptr [0x12d4fe0c] */
  ECX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d34ffb push ecx */
  push32((uint32_t)(ECX));
  /* 12d34ffc call dword ptr [0x12d502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502b8))), 0x12d35002u);
  /* 12d35002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d35004 jmp 0x12d3500b */
  goto L_12d3500b;
L_12d35006:;
  /* 12d35006 mov eax, 1 */
  EAX = (0x1u);
L_12d3500b:;
  /* 12d3500b pop ebp */
  EBP = (pop32());
  /* 12d3500c ret  */
  ESPCHK(0x12d34fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x12d35010 (156 bytes, 48 insns) */
void f_12d35010(void) {
  FTRACE(0x12d35010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35010 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35011 mov ebp, esp */
  EBP = (ESP);
  /* 12d35013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35016 mov eax, dword ptr [0x12d4fe08] */
  EAX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d3501b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3501e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d35025 jmp 0x12d35030 */
  goto L_12d35030;
L_12d35027:;
  /* 12d35027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3502a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3502d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d35030:;
  /* 12d35030 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35033 cmp edx, dword ptr [0x12d4fe04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4fe04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35039 jge 0x12d35086 */
  if ((C.sf==C.of)) goto L_12d35086;
  /* 12d3503b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d35040 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12d35045 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35048 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3504b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3504c call dword ptr [0x12d502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c4))), 0x12d35052u);
  /* 12d35052 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d35057 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35059 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3505c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d3505f push eax */
  push32((uint32_t)(EAX));
  /* 12d35060 call dword ptr [0x12d502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c4))), 0x12d35066u);
  /* 12d35066 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35069 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d3506c push edx */
  push32((uint32_t)(EDX));
  /* 12d3506d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3506f mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d35074 push eax */
  push32((uint32_t)(EAX));
  /* 12d35075 call dword ptr [0x12d502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c0))), 0x12d3507bu);
  /* 12d3507b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3507e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35081 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d35084 jmp 0x12d35027 */
  goto L_12d35027;
L_12d35086:;
  /* 12d35086 mov edx, dword ptr [0x12d4fe08] */
  EDX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d3508c push edx */
  push32((uint32_t)(EDX));
  /* 12d3508d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3508f mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d35094 push eax */
  push32((uint32_t)(EAX));
  /* 12d35095 call dword ptr [0x12d502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c0))), 0x12d3509bu);
  /* 12d3509b mov ecx, dword ptr [0x12d4fe0c] */
  ECX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d350a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d350a2 call dword ptr [0x12d502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502b8))), 0x12d350a8u);
  /* 12d350a8 mov esp, ebp */
  ESP = (EBP);
  /* 12d350aa pop ebp */
  EBP = (pop32());
  /* 12d350ab ret  */
  ESPCHK(0x12d35010u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12d350b0 (73 bytes, 19 insns) */
void f_12d350b0(void) {
  FTRACE(0x12d350b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d350b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d350b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d350b3 cmp dword ptr [0x12d4e454], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e454))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d350ba je 0x12d350ce */
  if (C.zf) goto L_12d350ce;
  /* 12d350bc cmp dword ptr [0x12d4e454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d350c3 jne 0x12d350f7 */
  if (!C.zf) goto L_12d350f7;
  /* 12d350c5 cmp dword ptr [0x12d4e458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d350cc jne 0x12d350f7 */
  if (!C.zf) goto L_12d350f7;
L_12d350ce:;
  /* 12d350ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12d350d3 call 0x12d35100 */
  push32(0x12d350d8u); f_12d35100();
  /* 12d350d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d350db cmp dword ptr [0x12d4e5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d350e2 je 0x12d350ea */
  if (C.zf) goto L_12d350ea;
  /* 12d350e4 call dword ptr [0x12d4e5c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e5c4))), 0x12d350eau);
L_12d350ea:;
  /* 12d350ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d350ef call 0x12d35100 */
  push32(0x12d350f4u); f_12d35100();
  /* 12d350f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d350f7:;
  /* 12d350f7 pop ebp */
  EBP = (pop32());
  /* 12d350f8 ret  */
  ESPCHK(0x12d350b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005100 @ 0x12d35100 (447 bytes, 131 insns) */
void f_12d35100(void) {
  FTRACE(0x12d35100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35100 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35101 mov ebp, esp */
  EBP = (ESP);
  /* 12d35103 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35109 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3510a push esi */
  push32((uint32_t)(ESI));
  /* 12d3510b push edi */
  push32((uint32_t)(EDI));
  /* 12d3510c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d35113 jmp 0x12d3511e */
  goto L_12d3511e;
L_12d35115:;
  /* 12d35115 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35118 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3511b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d3511e:;
  /* 12d3511e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35122 jae 0x12d35137 */
  if (!C.cf) goto L_12d35137;
  /* 12d35124 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3512a cmp edx, dword ptr [ecx*8 + 0x12d4cad0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12d4cad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35131 jne 0x12d35135 */
  if (!C.zf) goto L_12d35135;
  /* 12d35133 jmp 0x12d35137 */
  goto L_12d35137;
L_12d35135:;
  /* 12d35135 jmp 0x12d35115 */
  goto L_12d35115;
L_12d35137:;
  /* 12d35137 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3513a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3513d cmp ecx, dword ptr [eax*8 + 0x12d4cad0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d4cad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35144 jne 0x12d352b8 */
  if (!C.zf) goto L_12d352b8;
  /* 12d3514a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35151 je 0x12d35174 */
  if (C.zf) goto L_12d35174;
  /* 12d35153 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35156 mov eax, dword ptr [edx*8 + 0x12d4cad4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d4cad4)));
  /* 12d3515d push eax */
  push32((uint32_t)(EAX));
  /* 12d3515e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35162 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35164 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35166 call 0x12d31890 */
  push32(0x12d3516bu); f_12d31890();
  /* 12d3516b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3516e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35171 jne 0x12d35174 */
  if (!C.zf) goto L_12d35174;
  /* 12d35173 int3  */
  x86_unimpl("int3 @ 0x12d35173");
L_12d35174:;
  /* 12d35174 cmp dword ptr [0x12d4e454], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e454))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3517b je 0x12d3518f */
  if (C.zf) goto L_12d3518f;
  /* 12d3517d cmp dword ptr [0x12d4e454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35184 jne 0x12d351c8 */
  if (!C.zf) goto L_12d351c8;
  /* 12d35186 cmp dword ptr [0x12d4e458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3518d jne 0x12d351c8 */
  if (!C.zf) goto L_12d351c8;
L_12d3518f:;
  /* 12d3518f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35191 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12d35194 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35195 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35198 mov eax, dword ptr [edx*8 + 0x12d4cad4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d4cad4)));
  /* 12d3519f push eax */
  push32((uint32_t)(EAX));
  /* 12d351a0 call 0x12d35600 */
  push32(0x12d351a5u); f_12d35600();
  /* 12d351a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d351a8 push eax */
  push32((uint32_t)(EAX));
  /* 12d351a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d351ac mov edx, dword ptr [ecx*8 + 0x12d4cad4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12d4cad4)));
  /* 12d351b3 push edx */
  push32((uint32_t)(EDX));
  /* 12d351b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d351b6 call dword ptr [0x12d5023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5023c))), 0x12d351bcu);
  /* 12d351bc push eax */
  push32((uint32_t)(EAX));
  /* 12d351bd call dword ptr [0x12d50240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50240))), 0x12d351c3u);
  /* 12d351c3 jmp 0x12d352b8 */
  goto L_12d352b8;
L_12d351c8:;
  /* 12d351c8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d351cf je 0x12d352b8 */
  if (C.zf) goto L_12d352b8;
  /* 12d351d5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d351da lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12d351e0 push eax */
  push32((uint32_t)(EAX));
  /* 12d351e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d351e3 call dword ptr [0x12d50258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50258))), 0x12d351e9u);
  /* 12d351e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d351eb jne 0x12d35201 */
  if (!C.zf) goto L_12d35201;
  /* 12d351ed push 0x12d49374 */
  push32((uint32_t)(0x12d49374u));
  /* 12d351f2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12d351f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d351f9 call 0x12d35780 */
  push32(0x12d351feu); f_12d35780();
  /* 12d351fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35201:;
  /* 12d35201 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12d35207 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d3520a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3520d push eax */
  push32((uint32_t)(EAX));
  /* 12d3520e call 0x12d35600 */
  push32(0x12d35213u); f_12d35600();
  /* 12d35213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35216 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35219 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3521c jbe 0x12d3524a */
  if ((C.cf||C.zf)) goto L_12d3524a;
  /* 12d3521e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12d35224 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35225 call 0x12d35600 */
  push32(0x12d3522au); f_12d35600();
  /* 12d3522a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3522d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35230 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12d35234 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35237 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d35239 push 0x12d49370 */
  push32((uint32_t)(0x12d49370u));
  /* 12d3523e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35241 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35242 call 0x12d35ff0 */
  push32(0x12d35247u); f_12d35ff0();
  /* 12d35247 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3524a:;
  /* 12d3524a push 0x12d49dc8 */
  push32((uint32_t)(0x12d49dc8u));
  /* 12d3524f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d35255 push edx */
  push32((uint32_t)(EDX));
  /* 12d35256 call 0x12d35780 */
  push32(0x12d3525bu); f_12d35780();
  /* 12d3525b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3525e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35261 push eax */
  push32((uint32_t)(EAX));
  /* 12d35262 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12d35268 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35269 call 0x12d35790 */
  push32(0x12d3526eu); f_12d35790();
  /* 12d3526e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35271 push 0x12d492e8 */
  push32((uint32_t)(0x12d492e8u));
  /* 12d35276 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d3527c push edx */
  push32((uint32_t)(EDX));
  /* 12d3527d call 0x12d35790 */
  push32(0x12d35282u); f_12d35790();
  /* 12d35282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35285 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35288 mov ecx, dword ptr [eax*8 + 0x12d4cad4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12d4cad4)));
  /* 12d3528f push ecx */
  push32((uint32_t)(ECX));
  /* 12d35290 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d35296 push edx */
  push32((uint32_t)(EDX));
  /* 12d35297 call 0x12d35790 */
  push32(0x12d3529cu); f_12d35790();
  /* 12d3529c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3529f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12d352a4 push 0x12d49da0 */
  push32((uint32_t)(0x12d49da0u));
  /* 12d352a9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12d352af push eax */
  push32((uint32_t)(EAX));
  /* 12d352b0 call 0x12d35f30 */
  push32(0x12d352b5u); f_12d35f30();
  /* 12d352b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d352b8:;
  /* 12d352b8 pop edi */
  EDI = (pop32());
  /* 12d352b9 pop esi */
  ESI = (pop32());
  /* 12d352ba pop ebx */
  EBX = (pop32());
  /* 12d352bb mov esp, ebp */
  ESP = (EBP);
  /* 12d352bd pop ebp */
  EBP = (pop32());
  /* 12d352be ret  */
  ESPCHK(0x12d35100u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12d352c0 (80 bytes, 27 insns) */
void f_12d352c0(void) {
  FTRACE(0x12d352c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d352c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d352c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d352c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d352c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d352cb jmp 0x12d352d6 */
  goto L_12d352d6;
L_12d352cd:;
  /* 12d352cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d352d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d352d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d352d6:;
  /* 12d352d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d352da jae 0x12d352ef */
  if (!C.cf) goto L_12d352ef;
  /* 12d352dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d352df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d352e2 cmp edx, dword ptr [ecx*8 + 0x12d4cad0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12d4cad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d352e9 jne 0x12d352ed */
  if (!C.zf) goto L_12d352ed;
  /* 12d352eb jmp 0x12d352ef */
  goto L_12d352ef;
L_12d352ed:;
  /* 12d352ed jmp 0x12d352cd */
  goto L_12d352cd;
L_12d352ef:;
  /* 12d352ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d352f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d352f5 cmp ecx, dword ptr [eax*8 + 0x12d4cad0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d4cad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d352fc jne 0x12d3530a */
  if (!C.zf) goto L_12d3530a;
  /* 12d352fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35301 mov eax, dword ptr [edx*8 + 0x12d4cad4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d4cad4)));
  /* 12d35308 jmp 0x12d3530c */
  goto L_12d3530c;
L_12d3530a:;
  /* 12d3530a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3530c:;
  /* 12d3530c mov esp, ebp */
  ESP = (EBP);
  /* 12d3530e pop ebp */
  EBP = (pop32());
  /* 12d3530f ret  */
  ESPCHK(0x12d352c0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12d35310 (66 bytes, 28 insns) */
void f_12d35310(void) {
  FTRACE(0x12d35310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35310 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35311 mov ebp, esp */
  EBP = (ESP);
  /* 12d35313 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35317 jne 0x12d35337 */
  if (!C.zf) goto L_12d35337;
  /* 12d35319 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3531d jge 0x12d35337 */
  if ((C.sf==C.of)) goto L_12d35337;
  /* 12d3531f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35321 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d35324 push eax */
  push32((uint32_t)(EAX));
  /* 12d35325 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35328 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3532c push edx */
  push32((uint32_t)(EDX));
  /* 12d3532d call 0x12d35360 */
  push32(0x12d35332u); f_12d35360();
  /* 12d35332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35335 jmp 0x12d3534d */
  goto L_12d3534d;
L_12d35337:;
  /* 12d35337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35339 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3533c push eax */
  push32((uint32_t)(EAX));
  /* 12d3533d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35340 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35344 push edx */
  push32((uint32_t)(EDX));
  /* 12d35345 call 0x12d35360 */
  push32(0x12d3534au); f_12d35360();
  /* 12d3534a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3534d:;
  /* 12d3534d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35350 pop ebp */
  EBP = (pop32());
  /* 12d35351 ret  */
  ESPCHK(0x12d35310u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12d35360 (194 bytes, 71 insns) */
void f_12d35360(void) {
  FTRACE(0x12d35360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35360 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35361 mov ebp, esp */
  EBP = (ESP);
  /* 12d35363 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3536c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35370 je 0x12d35389 */
  if (C.zf) goto L_12d35389;
  /* 12d35372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35375 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12d35378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3537b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3537e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d35381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35384 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d35386 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d35389:;
  /* 12d35389 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3538c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d3538f:;
  /* 12d3538f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35392 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d35394 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d35397 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d3539a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3539d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3539f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d353a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d353a5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d353a9 jbe 0x12d353c1 */
  if ((C.cf||C.zf)) goto L_12d353c1;
  /* 12d353ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d353ae add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d353b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353b4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d353b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d353bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d353bf jmp 0x12d353d5 */
  goto L_12d353d5;
L_12d353c1:;
  /* 12d353c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d353c4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d353c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d353cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d353d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d353d5:;
  /* 12d353d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d353d9 ja 0x12d3538f */
  if ((!C.cf&&!C.zf)) goto L_12d3538f;
  /* 12d353db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353de mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d353e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d353e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d353ea:;
  /* 12d353ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d353ef mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12d353f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d353f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d353f8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d353fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d353fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d353ff mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12d35402 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d35404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35407 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3540a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3540d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35410 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35413 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d35416 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35419 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3541c jb 0x12d353ea */
  if (C.cf) goto L_12d353ea;
  /* 12d3541e mov esp, ebp */
  ESP = (EBP);
  /* 12d35420 pop ebp */
  EBP = (pop32());
  /* 12d35421 ret  */
  ESPCHK(0x12d35360u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12d35430 (63 bytes, 24 insns) */
void f_12d35430(void) {
  FTRACE(0x12d35430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35430 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35431 mov ebp, esp */
  EBP = (ESP);
  /* 12d35433 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35434 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35438 jne 0x12d35449 */
  if (!C.zf) goto L_12d35449;
  /* 12d3543a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3543e jge 0x12d35449 */
  if ((C.sf==C.of)) goto L_12d35449;
  /* 12d35440 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d35447 jmp 0x12d35450 */
  goto L_12d35450;
L_12d35449:;
  /* 12d35449 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d35450:;
  /* 12d35450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35453 push eax */
  push32((uint32_t)(EAX));
  /* 12d35454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d35457 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35458 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3545b push edx */
  push32((uint32_t)(EDX));
  /* 12d3545c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3545f push eax */
  push32((uint32_t)(EAX));
  /* 12d35460 call 0x12d35360 */
  push32(0x12d35465u); f_12d35360();
  /* 12d35465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35468 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3546b mov esp, ebp */
  ESP = (EBP);
  /* 12d3546d pop ebp */
  EBP = (pop32());
  /* 12d3546e ret  */
  ESPCHK(0x12d35430u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12d35470 (30 bytes, 14 insns) */
void f_12d35470(void) {
  FTRACE(0x12d35470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35470 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35471 mov ebp, esp */
  EBP = (ESP);
  /* 12d35473 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d35478 push eax */
  push32((uint32_t)(EAX));
  /* 12d35479 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3547c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3547d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35480 push edx */
  push32((uint32_t)(EDX));
  /* 12d35481 call 0x12d35360 */
  push32(0x12d35486u); f_12d35360();
  /* 12d35486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3548c pop ebp */
  EBP = (pop32());
  /* 12d3548d ret  */
  ESPCHK(0x12d35470u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12d35490 (72 bytes, 28 insns) */
void f_12d35490(void) {
  FTRACE(0x12d35490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35490 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35491 mov ebp, esp */
  EBP = (ESP);
  /* 12d35493 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35494 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35498 jne 0x12d354b1 */
  if (!C.zf) goto L_12d354b1;
  /* 12d3549a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3549e jg 0x12d354b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d354b1;
  /* 12d354a0 jl 0x12d354a8 */
  if ((C.sf!=C.of)) goto L_12d354a8;
  /* 12d354a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d354a6 jae 0x12d354b1 */
  if (!C.cf) goto L_12d354b1;
L_12d354a8:;
  /* 12d354a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d354af jmp 0x12d354b8 */
  goto L_12d354b8;
L_12d354b1:;
  /* 12d354b1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d354b8:;
  /* 12d354b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d354bb push eax */
  push32((uint32_t)(EAX));
  /* 12d354bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d354bf push ecx */
  push32((uint32_t)(ECX));
  /* 12d354c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d354c3 push edx */
  push32((uint32_t)(EDX));
  /* 12d354c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d354c7 push eax */
  push32((uint32_t)(EAX));
  /* 12d354c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d354cb push ecx */
  push32((uint32_t)(ECX));
  /* 12d354cc call 0x12d354e0 */
  push32(0x12d354d1u); f_12d354e0();
  /* 12d354d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d354d4 mov esp, ebp */
  ESP = (EBP);
  /* 12d354d6 pop ebp */
  EBP = (pop32());
  /* 12d354d7 ret  */
  ESPCHK(0x12d35490u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12d354e0 (242 bytes, 91 insns) */
void f_12d354e0(void) {
  FTRACE(0x12d354e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d354e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d354e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d354e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d354e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d354e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d354ec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d354f0 je 0x12d35514 */
  if (C.zf) goto L_12d35514;
  /* 12d354f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d354f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12d354f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d354fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d354fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d35501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35504 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d35506 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35509 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3550c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3550e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d35511 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d35514:;
  /* 12d35514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35517 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d3551a:;
  /* 12d3551a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3551d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3551f push ecx */
  push32((uint32_t)(ECX));
  /* 12d35520 push eax */
  push32((uint32_t)(EAX));
  /* 12d35521 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35524 push edx */
  push32((uint32_t)(EDX));
  /* 12d35525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35528 push eax */
  push32((uint32_t)(EAX));
  /* 12d35529 call 0x12d39460 */
  push32(0x12d3552eu); f_12d39460();
  /* 12d3552e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35531 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d35534 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d35536 push edx */
  push32((uint32_t)(EDX));
  /* 12d35537 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35538 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3553b push eax */
  push32((uint32_t)(EAX));
  /* 12d3553c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3553f push ecx */
  push32((uint32_t)(ECX));
  /* 12d35540 call 0x12d393f0 */
  push32(0x12d35545u); f_12d393f0();
  /* 12d35545 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d35548 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d3554b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3554f jbe 0x12d35567 */
  if ((C.cf||C.zf)) goto L_12d35567;
  /* 12d35551 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35554 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3555a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d3555c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3555f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35562 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d35565 jmp 0x12d3557b */
  goto L_12d3557b;
L_12d35567:;
  /* 12d35567 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3556a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3556d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35570 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d35572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35575 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35578 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3557b:;
  /* 12d3557b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3557f ja 0x12d3551a */
  if ((!C.cf&&!C.zf)) goto L_12d3551a;
  /* 12d35581 jb 0x12d35589 */
  if (C.cf) goto L_12d35589;
  /* 12d35583 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35587 ja 0x12d3551a */
  if ((!C.cf&&!C.zf)) goto L_12d3551a;
L_12d35589:;
  /* 12d35589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3558c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d3558f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35592 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35595 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d35598:;
  /* 12d35598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3559b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d3559d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12d355a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d355a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d355a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d355a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d355aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d355ad mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12d355b0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d355b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d355b5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d355b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d355bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d355be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d355c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d355c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d355c7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d355ca jb 0x12d35598 */
  if (C.cf) goto L_12d35598;
  /* 12d355cc mov esp, ebp */
  ESP = (EBP);
  /* 12d355ce pop ebp */
  EBP = (pop32());
  /* 12d355cf ret 0x14 */
  ESPCHK(0x12d354e0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12d355e0 (31 bytes, 15 insns) */
void f_12d355e0(void) {
  FTRACE(0x12d355e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d355e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d355e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d355e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d355e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d355e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d355e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d355ec push ecx */
  push32((uint32_t)(ECX));
  /* 12d355ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d355f0 push edx */
  push32((uint32_t)(EDX));
  /* 12d355f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d355f4 push eax */
  push32((uint32_t)(EAX));
  /* 12d355f5 call 0x12d354e0 */
  push32(0x12d355fau); f_12d354e0();
  /* 12d355fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d355fd pop ebp */
  EBP = (pop32());
  /* 12d355fe ret  */
  ESPCHK(0x12d355e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12d35600 (123 bytes, 44 insns) */
void f_12d35600(void) {
  FTRACE(0x12d35600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35600 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d35604 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d3560a je 0x12d35620 */
  if (C.zf) goto L_12d35620;
L_12d3560c:;
  /* 12d3560c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12d3560e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d3560f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d35611 je 0x12d35653 */
  if (C.zf) goto L_12d35653;
  /* 12d35613 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d35619 jne 0x12d3560c */
  if (!C.zf) goto L_12d3560c;
  /* 12d3561b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d35620:;
  /* 12d35620 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d35622 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d35627 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35629 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3562c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3562e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35631 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d35636 je 0x12d35620 */
  if (C.zf) goto L_12d35620;
  /* 12d35638 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d3563b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d3563d je 0x12d35671 */
  if (C.zf) goto L_12d35671;
  /* 12d3563f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d35641 je 0x12d35667 */
  if (C.zf) goto L_12d35667;
  /* 12d35643 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d35648 je 0x12d3565d */
  if (C.zf) goto L_12d3565d;
  /* 12d3564a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d3564f je 0x12d35653 */
  if (C.zf) goto L_12d35653;
  /* 12d35651 jmp 0x12d35620 */
  goto L_12d35620;
L_12d35653:;
  /* 12d35653 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12d35656 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d3565a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3565c ret  */
  ESPCHK(0x12d35600u, _esp0);
  ESP += 4; return;
L_12d3565d:;
  /* 12d3565d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12d35660 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d35664 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35666 ret  */
  ESPCHK(0x12d35600u, _esp0);
  ESP += 4; return;
L_12d35667:;
  /* 12d35667 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12d3566a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d3566e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35670 ret  */
  ESPCHK(0x12d35600u, _esp0);
  ESP += 4; return;
L_12d35671:;
  /* 12d35671 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12d35674 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d35678 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3567a ret  */
  ESPCHK(0x12d35600u, _esp0);
  ESP += 4; return;
}

/* FUN_10005680 @ 0x12d35680 (249 bytes, 93 insns) */
void f_12d35680(void) {
  FTRACE(0x12d35680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35680 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35681 mov ebp, esp */
  EBP = (ESP);
  /* 12d35683 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35686 push ebx */
  push32((uint32_t)(EBX));
  /* 12d35687 push esi */
  push32((uint32_t)(ESI));
  /* 12d35688 push edi */
  push32((uint32_t)(EDI));
  /* 12d35689 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d3568c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d3568f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12d35692 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12d35695:;
  /* 12d35695 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35699 jne 0x12d356b9 */
  if (!C.zf) goto L_12d356b9;
  /* 12d3569b push 0x12d49e00 */
  push32((uint32_t)(0x12d49e00u));
  /* 12d356a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d356a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12d356a4 push 0x12d49df4 */
  push32((uint32_t)(0x12d49df4u));
  /* 12d356a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d356ab call 0x12d31890 */
  push32(0x12d356b0u); f_12d31890();
  /* 12d356b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d356b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d356b6 jne 0x12d356b9 */
  if (!C.zf) goto L_12d356b9;
  /* 12d356b8 int3  */
  x86_unimpl("int3 @ 0x12d356b8");
L_12d356b9:;
  /* 12d356b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d356bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d356bd jne 0x12d35695 */
  if (!C.zf) goto L_12d35695;
L_12d356bf:;
  /* 12d356bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d356c3 jne 0x12d356e3 */
  if (!C.zf) goto L_12d356e3;
  /* 12d356c5 push 0x12d49de4 */
  push32((uint32_t)(0x12d49de4u));
  /* 12d356ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12d356cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d356ce push 0x12d49df4 */
  push32((uint32_t)(0x12d49df4u));
  /* 12d356d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d356d5 call 0x12d31890 */
  push32(0x12d356dau); f_12d31890();
  /* 12d356da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d356dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d356e0 jne 0x12d356e3 */
  if (!C.zf) goto L_12d356e3;
  /* 12d356e2 int3  */
  x86_unimpl("int3 @ 0x12d356e2");
L_12d356e3:;
  /* 12d356e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d356e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d356e7 jne 0x12d356bf */
  if (!C.zf) goto L_12d356bf;
  /* 12d356e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d356ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12d356f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d356f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d356f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d356fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d356ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35702 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d35704 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35707 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3570a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d3570d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d35710 push edx */
  push32((uint32_t)(EDX));
  /* 12d35711 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d35714 push eax */
  push32((uint32_t)(EAX));
  /* 12d35715 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35718 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35719 call 0x12d39760 */
  push32(0x12d3571eu); f_12d39760();
  /* 12d3571e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35721 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d35724 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35727 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d3572a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3572d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35730 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d35733 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35736 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3573a jl 0x12d3575e */
  if ((C.sf!=C.of)) goto L_12d3575e;
  /* 12d3573c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3573f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d35741 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d35744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d35746 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3574c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d3574f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35752 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d35754 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35757 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3575a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d3575c jmp 0x12d3576f */
  goto L_12d3576f;
L_12d3575e:;
  /* 12d3575e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35761 push eax */
  push32((uint32_t)(EAX));
  /* 12d35762 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d35764 call 0x12d394e0 */
  push32(0x12d35769u); f_12d394e0();
  /* 12d35769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3576c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12d3576f:;
  /* 12d3576f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d35772 pop edi */
  EDI = (pop32());
  /* 12d35773 pop esi */
  ESI = (pop32());
  /* 12d35774 pop ebx */
  EBX = (pop32());
  /* 12d35775 mov esp, ebp */
  ESP = (EBP);
  /* 12d35777 pop ebp */
  EBP = (pop32());
  /* 12d35778 ret  */
  ESPCHK(0x12d35680u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x12d35780 (7 bytes, 3 insns) */
void f_12d35780(void) {
  FTRACE(0x12d35780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35780 push edi */
  push32((uint32_t)(EDI));
  /* 12d35781 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12d35785 jmp 0x12d357f1 */
  jmp_ind(0x12d357f1u); return;
}

/* FUN_10005790 @ 0x12d35790 (224 bytes, 84 insns) */
void f_12d35790(void) {
  FTRACE(0x12d35790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35790 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d35794 push edi */
  push32((uint32_t)(EDI));
  /* 12d35795 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d3579b je 0x12d357ac */
  if (C.zf) goto L_12d357ac;
L_12d3579d:;
  /* 12d3579d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12d3579f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d357a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d357a2 je 0x12d357df */
  if (C.zf) goto L_12d357df;
  /* 12d357a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d357aa jne 0x12d3579d */
  if (!C.zf) goto L_12d3579d;
L_12d357ac:;
  /* 12d357ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d357ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d357b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d357b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d357b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d357ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d357bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d357c2 je 0x12d357ac */
  if (C.zf) goto L_12d357ac;
  /* 12d357c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d357c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d357c9 je 0x12d357ee */
  if (C.zf) goto L_12d357ee;
  /* 12d357cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d357cd je 0x12d357e9 */
  if (C.zf) goto L_12d357e9;
  /* 12d357cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d357d4 je 0x12d357e4 */
  if (C.zf) goto L_12d357e4;
  /* 12d357d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d357db je 0x12d357df */
  if (C.zf) goto L_12d357df;
  /* 12d357dd jmp 0x12d357ac */
  goto L_12d357ac;
L_12d357df:;
  /* 12d357df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12d357e2 jmp 0x12d357f1 */
  goto L_12d357f1;
L_12d357e4:;
  /* 12d357e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12d357e7 jmp 0x12d357f1 */
  goto L_12d357f1;
L_12d357e9:;
  /* 12d357e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12d357ec jmp 0x12d357f1 */
  goto L_12d357f1;
L_12d357ee:;
  /* 12d357ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12d357f1:;
  /* 12d357f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d357f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d357fb je 0x12d35816 */
  if (C.zf) goto L_12d35816;
L_12d357fd:;
  /* 12d357fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d357ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d35800 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d35802 je 0x12d35868 */
  if (C.zf) goto L_12d35868;
  /* 12d35804 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12d35806 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d35807 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d3580d jne 0x12d357fd */
  if (!C.zf) goto L_12d357fd;
  /* 12d3580f jmp 0x12d35816 */
  goto L_12d35816;
L_12d35811:;
  /* 12d35811 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d35813 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d35816:;
  /* 12d35816 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d3581b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d3581d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3581f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d35822 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d35824 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d35826 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35829 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d3582e je 0x12d35811 */
  if (C.zf) goto L_12d35811;
  /* 12d35830 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d35832 je 0x12d35868 */
  if (C.zf) goto L_12d35868;
  /* 12d35834 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12d35836 je 0x12d3585f */
  if (C.zf) goto L_12d3585f;
  /* 12d35838 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d3583e je 0x12d35852 */
  if (C.zf) goto L_12d35852;
  /* 12d35840 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d35846 je 0x12d3584a */
  if (C.zf) goto L_12d3584a;
  /* 12d35848 jmp 0x12d35811 */
  goto L_12d35811;
L_12d3584a:;
  /* 12d3584a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d3584c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d35850 pop edi */
  EDI = (pop32());
  /* 12d35851 ret  */
  ESPCHK(0x12d35790u, _esp0);
  ESP += 4; return;
L_12d35852:;
  /* 12d35852 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12d35855 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d35859 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12d3585d pop edi */
  EDI = (pop32());
  /* 12d3585e ret  */
  ESPCHK(0x12d35790u, _esp0);
  ESP += 4; return;
L_12d3585f:;
  /* 12d3585f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12d35862 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d35866 pop edi */
  EDI = (pop32());
  /* 12d35867 ret  */
  ESPCHK(0x12d35790u, _esp0);
  ESP += 4; return;
L_12d35868:;
  /* 12d35868 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12d3586a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d3586e pop edi */
  EDI = (pop32());
  /* 12d3586f ret  */
  ESPCHK(0x12d35790u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x12d35870 (243 bytes, 91 insns) */
void f_12d35870(void) {
  FTRACE(0x12d35870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35870 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35871 mov ebp, esp */
  EBP = (ESP);
  /* 12d35873 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35876 push ebx */
  push32((uint32_t)(EBX));
  /* 12d35877 push esi */
  push32((uint32_t)(ESI));
  /* 12d35878 push edi */
  push32((uint32_t)(EDI));
  /* 12d35879 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d3587c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d3587f:;
  /* 12d3587f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35883 jne 0x12d358a3 */
  if (!C.zf) goto L_12d358a3;
  /* 12d35885 push 0x12d49e00 */
  push32((uint32_t)(0x12d49e00u));
  /* 12d3588a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3588c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12d3588e push 0x12d49e10 */
  push32((uint32_t)(0x12d49e10u));
  /* 12d35893 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d35895 call 0x12d31890 */
  push32(0x12d3589au); f_12d31890();
  /* 12d3589a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3589d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d358a0 jne 0x12d358a3 */
  if (!C.zf) goto L_12d358a3;
  /* 12d358a2 int3  */
  x86_unimpl("int3 @ 0x12d358a2");
L_12d358a3:;
  /* 12d358a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d358a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d358a7 jne 0x12d3587f */
  if (!C.zf) goto L_12d3587f;
L_12d358a9:;
  /* 12d358a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d358ad jne 0x12d358cd */
  if (!C.zf) goto L_12d358cd;
  /* 12d358af push 0x12d49de4 */
  push32((uint32_t)(0x12d49de4u));
  /* 12d358b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d358b6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12d358b8 push 0x12d49e10 */
  push32((uint32_t)(0x12d49e10u));
  /* 12d358bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d358bf call 0x12d31890 */
  push32(0x12d358c4u); f_12d31890();
  /* 12d358c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d358c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d358ca jne 0x12d358cd */
  if (!C.zf) goto L_12d358cd;
  /* 12d358cc int3  */
  x86_unimpl("int3 @ 0x12d358cc");
L_12d358cd:;
  /* 12d358cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d358cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d358d1 jne 0x12d358a9 */
  if (!C.zf) goto L_12d358a9;
  /* 12d358d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d358d6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12d358dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d358e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d358e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d358e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d358e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d358ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d358ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d358f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d358f4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d358f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d358fa push ecx */
  push32((uint32_t)(ECX));
  /* 12d358fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d358fe push edx */
  push32((uint32_t)(EDX));
  /* 12d358ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35902 push eax */
  push32((uint32_t)(EAX));
  /* 12d35903 call 0x12d39760 */
  push32(0x12d35908u); f_12d39760();
  /* 12d35908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3590b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d3590e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35911 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d35914 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35917 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3591a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d3591d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35920 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35924 jl 0x12d35948 */
  if ((C.sf!=C.of)) goto L_12d35948;
  /* 12d35926 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35929 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3592b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d3592e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d35930 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d35936 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d35939 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3593c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3593e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35941 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d35944 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d35946 jmp 0x12d35959 */
  goto L_12d35959;
L_12d35948:;
  /* 12d35948 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3594b push edx */
  push32((uint32_t)(EDX));
  /* 12d3594c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3594e call 0x12d394e0 */
  push32(0x12d35953u); f_12d394e0();
  /* 12d35953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35956 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12d35959:;
  /* 12d35959 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3595c pop edi */
  EDI = (pop32());
  /* 12d3595d pop esi */
  ESI = (pop32());
  /* 12d3595e pop ebx */
  EBX = (pop32());
  /* 12d3595f mov esp, ebp */
  ESP = (EBP);
  /* 12d35961 pop ebp */
  EBP = (pop32());
  /* 12d35962 ret  */
  ESPCHK(0x12d35870u, _esp0);
  ESP += 4; return;
}

/* FUN_10005970 @ 0x12d35970 (47 bytes, 17 insns) */
void f_12d35970(void) {
  FTRACE(0x12d35970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35970 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35971 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35976 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12d3597a jb 0x12d35990 */
  if (C.cf) goto L_12d35990;
L_12d3597c:;
  /* 12d3597c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35982 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35987 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12d35989 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3598e jae 0x12d3597c */
  if (!C.cf) goto L_12d3597c;
L_12d35990:;
  /* 12d35990 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35992 mov eax, esp */
  EAX = (ESP);
  /* 12d35994 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12d35996 mov esp, ecx */
  ESP = (ECX);
  /* 12d35998 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3599a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3599d push eax */
  push32((uint32_t)(EAX));
  /* 12d3599e ret  */
  ESPCHK(0x12d35970u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a0 @ 0x12d359a0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12d359a0(void) {
  FTRACE(0x12d359a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d359a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d359a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d359a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d359a6 push esi */
  push32((uint32_t)(ESI));
  /* 12d359a7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359ab je 0x12d359b3 */
  if (C.zf) goto L_12d359b3;
  /* 12d359ad cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359b1 jne 0x12d359b8 */
  if (!C.zf) goto L_12d359b8;
L_12d359b3:;
  /* 12d359b3 jmp 0x12d35b88 */
  goto L_12d35b88;
L_12d359b8:;
  /* 12d359b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359bc je 0x12d359d4 */
  if (C.zf) goto L_12d359d4;
  /* 12d359be cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359c2 je 0x12d359d4 */
  if (C.zf) goto L_12d359d4;
  /* 12d359c4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359c8 je 0x12d359d4 */
  if (C.zf) goto L_12d359d4;
  /* 12d359ca cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359ce jne 0x12d35ab1 */
  if (!C.zf) goto L_12d35ab1;
L_12d359d4:;
  /* 12d359d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d359d6 call 0x12d361d0 */
  push32(0x12d359dbu); f_12d361d0();
  /* 12d359db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d359de cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359e2 je 0x12d359ea */
  if (C.zf) goto L_12d359ea;
  /* 12d359e4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359e8 jne 0x12d35a2f */
  if (!C.zf) goto L_12d35a2f;
L_12d359ea:;
  /* 12d359ea cmp dword ptr [0x12d4e5d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d359f1 jne 0x12d35a2f */
  if (!C.zf) goto L_12d35a2f;
  /* 12d359f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d359f5 push 0x12d35bd0 */
  push32((uint32_t)(0x12d35bd0u));
  /* 12d359fa call dword ptr [0x12d502c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c8))), 0x12d35a00u);
  /* 12d35a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35a03 jne 0x12d35a11 */
  if (!C.zf) goto L_12d35a11;
  /* 12d35a05 mov dword ptr [0x12d4e5d8], 1 */
  w32((uint32_t)(0x12d4e5d8), (0x1u));
  /* 12d35a0f jmp 0x12d35a2f */
  goto L_12d35a2f;
L_12d35a11:;
  /* 12d35a11 call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d35a17u);
  /* 12d35a17 mov esi, eax */
  ESI = (EAX);
  /* 12d35a19 call 0x12d3a6b0 */
  push32(0x12d35a1eu); f_12d3a6b0();
  /* 12d35a1e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12d35a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35a22 call 0x12d36270 */
  push32(0x12d35a27u); f_12d36270();
  /* 12d35a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35a2a jmp 0x12d35b88 */
  goto L_12d35b88;
L_12d35a2f:;
  /* 12d35a2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35a32 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d35a35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d35a38 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35a3b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d35a3e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35a42 ja 0x12d35aa2 */
  if ((!C.cf&&!C.zf)) goto L_12d35aa2;
  /* 12d35a44 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d35a47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d35a49 mov dl, byte ptr [eax + 0x12d35baf] */
  DL = (r8((uint32_t)(EAX + 0x12d35baf)));
  /* 12d35a4f jmp dword ptr [edx*4 + 0x12d35b9b] */
  switch (EDX) {
    case 0: goto L_12d35a56;
    case 1: goto L_12d35a90;
    case 2: goto L_12d35a6a;
    case 3: goto L_12d35a7d;
    case 4: goto L_12d35aa2;
    default: x86_unimpl("switch@0x12d35a4f out of table"); return;
  }
L_12d35a56:;
  /* 12d35a56 mov ecx, dword ptr [0x12d4e5c8] */
  ECX = (r32((uint32_t)(0x12d4e5c8)));
  /* 12d35a5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d35a5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35a62 mov dword ptr [0x12d4e5c8], edx */
  w32((uint32_t)(0x12d4e5c8), (EDX));
  /* 12d35a68 jmp 0x12d35aa2 */
  goto L_12d35aa2;
L_12d35a6a:;
  /* 12d35a6a mov eax, dword ptr [0x12d4e5cc] */
  EAX = (r32((uint32_t)(0x12d4e5cc)));
  /* 12d35a6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35a72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35a75 mov dword ptr [0x12d4e5cc], ecx */
  w32((uint32_t)(0x12d4e5cc), (ECX));
  /* 12d35a7b jmp 0x12d35aa2 */
  goto L_12d35aa2;
L_12d35a7d:;
  /* 12d35a7d mov edx, dword ptr [0x12d4e5d0] */
  EDX = (r32((uint32_t)(0x12d4e5d0)));
  /* 12d35a83 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d35a86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35a89 mov dword ptr [0x12d4e5d0], eax */
  w32((uint32_t)(0x12d4e5d0), (EAX));
  /* 12d35a8e jmp 0x12d35aa2 */
  goto L_12d35aa2;
L_12d35a90:;
  /* 12d35a90 mov ecx, dword ptr [0x12d4e5d4] */
  ECX = (r32((uint32_t)(0x12d4e5d4)));
  /* 12d35a96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d35a99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35a9c mov dword ptr [0x12d4e5d4], edx */
  w32((uint32_t)(0x12d4e5d4), (EDX));
L_12d35aa2:;
  /* 12d35aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35aa4 call 0x12d36270 */
  push32(0x12d35aa9u); f_12d36270();
  /* 12d35aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35aac jmp 0x12d35b83 */
  goto L_12d35b83;
L_12d35ab1:;
  /* 12d35ab1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35ab5 je 0x12d35ac8 */
  if (C.zf) goto L_12d35ac8;
  /* 12d35ab7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35abb je 0x12d35ac8 */
  if (C.zf) goto L_12d35ac8;
  /* 12d35abd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35ac1 je 0x12d35ac8 */
  if (C.zf) goto L_12d35ac8;
  /* 12d35ac3 jmp 0x12d35b88 */
  goto L_12d35b88;
L_12d35ac8:;
  /* 12d35ac8 call 0x12d32210 */
  push32(0x12d35acdu); f_12d32210();
  /* 12d35acd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d35ad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35ad3 cmp dword ptr [eax + 0x50], 0x12d4cc20 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12d4cc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35ada jne 0x12d35b25 */
  if (!C.zf) goto L_12d35b25;
  /* 12d35adc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12d35ae1 push 0x12d49e1c */
  push32((uint32_t)(0x12d49e1cu));
  /* 12d35ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d35ae8 mov ecx, dword ptr [0x12d4cca0] */
  ECX = (r32((uint32_t)(0x12d4cca0)));
  /* 12d35aee push ecx */
  push32((uint32_t)(ECX));
  /* 12d35aef call 0x12d327d0 */
  push32(0x12d35af4u); f_12d327d0();
  /* 12d35af4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35af7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35afa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12d35afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35b00 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35b04 je 0x12d35b23 */
  if (C.zf) goto L_12d35b23;
  /* 12d35b06 mov ecx, dword ptr [0x12d4cca0] */
  ECX = (r32((uint32_t)(0x12d4cca0)));
  /* 12d35b0c push ecx */
  push32((uint32_t)(ECX));
  /* 12d35b0d push 0x12d4cc20 */
  push32((uint32_t)(0x12d4cc20u));
  /* 12d35b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35b15 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12d35b18 push eax */
  push32((uint32_t)(EAX));
  /* 12d35b19 call 0x12d390b0 */
  push32(0x12d35b1eu); f_12d390b0();
  /* 12d35b1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35b21 jmp 0x12d35b25 */
  goto L_12d35b25;
L_12d35b23:;
  /* 12d35b23 jmp 0x12d35b88 */
  goto L_12d35b88;
L_12d35b25:;
  /* 12d35b25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35b28 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d35b2b push edx */
  push32((uint32_t)(EDX));
  /* 12d35b2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35b2f push eax */
  push32((uint32_t)(EAX));
  /* 12d35b30 call 0x12d35eb0 */
  push32(0x12d35b35u); f_12d35eb0();
  /* 12d35b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35b38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d35b3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35b3f jne 0x12d35b43 */
  if (!C.zf) goto L_12d35b43;
  /* 12d35b41 jmp 0x12d35b88 */
  goto L_12d35b88;
L_12d35b43:;
  /* 12d35b43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35b46 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d35b49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d35b4c:;
  /* 12d35b4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35b4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d35b52 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35b55 jne 0x12d35b83 */
  if (!C.zf) goto L_12d35b83;
  /* 12d35b57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35b5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35b5d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d35b60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35b63 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35b66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d35b69 mov edx, dword ptr [0x12d4cca4] */
  EDX = (r32((uint32_t)(0x12d4cca4)));
  /* 12d35b6f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d35b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35b75 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12d35b78 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35b7a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35b7d jb 0x12d35b81 */
  if (C.cf) goto L_12d35b81;
  /* 12d35b7f jmp 0x12d35b83 */
  goto L_12d35b83;
L_12d35b81:;
  /* 12d35b81 jmp 0x12d35b4c */
  goto L_12d35b4c;
L_12d35b83:;
  /* 12d35b83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35b86 jmp 0x12d35b96 */
  goto L_12d35b96;
L_12d35b88:;
  /* 12d35b88 call 0x12d3a6a0 */
  push32(0x12d35b8du); f_12d3a6a0();
  /* 12d35b8d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12d35b93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d35b96:;
  /* 12d35b96 pop esi */
  ESI = (pop32());
  /* 12d35b97 mov esp, ebp */
  ESP = (EBP);
  /* 12d35b99 pop ebp */
  EBP = (pop32());
  /* 12d35b9a ret  */
  ESPCHK(0x12d359a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x12d35bd0 (146 bytes, 45 insns) */
void f_12d35bd0(void) {
  FTRACE(0x12d35bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d35bd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35bd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35bd8 call 0x12d361d0 */
  push32(0x12d35bddu); f_12d361d0();
  /* 12d35bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35be0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35be4 jne 0x12d35bfe */
  if (!C.zf) goto L_12d35bfe;
  /* 12d35be6 mov dword ptr [ebp - 8], 0x12d4e5c8 */
  w32((uint32_t)(EBP + -0x8), (0x12d4e5c8u));
  /* 12d35bed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35bf0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d35bf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d35bf5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d35bfc jmp 0x12d35c14 */
  goto L_12d35c14;
L_12d35bfe:;
  /* 12d35bfe mov dword ptr [ebp - 8], 0x12d4e5cc */
  w32((uint32_t)(EBP + -0x8), (0x12d4e5ccu));
  /* 12d35c05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35c08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d35c0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35c0d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12d35c14:;
  /* 12d35c14 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35c18 jne 0x12d35c28 */
  if (!C.zf) goto L_12d35c28;
  /* 12d35c1a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35c1c call 0x12d36270 */
  push32(0x12d35c21u); f_12d36270();
  /* 12d35c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d35c26 jmp 0x12d35c5c */
  goto L_12d35c5c;
L_12d35c28:;
  /* 12d35c28 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35c2c je 0x12d35c4d */
  if (C.zf) goto L_12d35c4d;
  /* 12d35c2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35c31 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d35c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35c39 call 0x12d36270 */
  push32(0x12d35c3eu); f_12d36270();
  /* 12d35c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35c41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35c44 push edx */
  push32((uint32_t)(EDX));
  /* 12d35c45 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12d35c48u);
  /* 12d35c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35c4b jmp 0x12d35c57 */
  goto L_12d35c57;
L_12d35c4d:;
  /* 12d35c4d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35c4f call 0x12d36270 */
  push32(0x12d35c54u); f_12d36270();
  /* 12d35c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35c57:;
  /* 12d35c57 mov eax, 1 */
  EAX = (0x1u);
L_12d35c5c:;
  /* 12d35c5c mov esp, ebp */
  ESP = (EBP);
  /* 12d35c5e pop ebp */
  EBP = (pop32());
  /* 12d35c5f ret 4 */
  ESPCHK(0x12d35bd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005c70 @ 0x12d35c70 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12d35c70(void) {
  FTRACE(0x12d35c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35c71 mov ebp, esp */
  EBP = (ESP);
  /* 12d35c73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35c76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d35c7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35c80 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d35c83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d35c86 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35c89 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d35c8c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35c90 ja 0x12d35d3e */
  if ((!C.cf&&!C.zf)) goto L_12d35d3e;
  /* 12d35c96 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d35c99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d35c9b mov dl, byte ptr [eax + 0x12d35e92] */
  DL = (r8((uint32_t)(EAX + 0x12d35e92)));
  /* 12d35ca1 jmp dword ptr [edx*4 + 0x12d35e7a] */
  switch (EDX) {
    case 0: goto L_12d35ca8;
    case 1: goto L_12d35d13;
    case 2: goto L_12d35cf9;
    case 3: goto L_12d35cc5;
    case 4: goto L_12d35cdf;
    case 5: goto L_12d35d3e;
    default: x86_unimpl("switch@0x12d35ca1 out of table"); return;
  }
L_12d35ca8:;
  /* 12d35ca8 mov dword ptr [ebp - 0x18], 0x12d4e5c8 */
  w32((uint32_t)(EBP + -0x18), (0x12d4e5c8u));
  /* 12d35caf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d35cb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d35cb4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d35cb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35cba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35cbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35cc0 jmp 0x12d35d46 */
  goto L_12d35d46;
L_12d35cc5:;
  /* 12d35cc5 mov dword ptr [ebp - 0x18], 0x12d4e5cc */
  w32((uint32_t)(EBP + -0x18), (0x12d4e5ccu));
  /* 12d35ccc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d35ccf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d35cd1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d35cd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35cd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35cda mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35cdd jmp 0x12d35d46 */
  goto L_12d35d46;
L_12d35cdf:;
  /* 12d35cdf mov dword ptr [ebp - 0x18], 0x12d4e5d0 */
  w32((uint32_t)(EBP + -0x18), (0x12d4e5d0u));
  /* 12d35ce6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d35ce9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d35ceb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d35cee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35cf1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35cf4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35cf7 jmp 0x12d35d46 */
  goto L_12d35d46;
L_12d35cf9:;
  /* 12d35cf9 mov dword ptr [ebp - 0x18], 0x12d4e5d4 */
  w32((uint32_t)(EBP + -0x18), (0x12d4e5d4u));
  /* 12d35d00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d35d03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d35d05 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d35d08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d35d0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35d0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d35d11 jmp 0x12d35d46 */
  goto L_12d35d46;
L_12d35d13:;
  /* 12d35d13 call 0x12d32210 */
  push32(0x12d35d18u); f_12d32210();
  /* 12d35d18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d35d1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35d1e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d35d21 push edx */
  push32((uint32_t)(EDX));
  /* 12d35d22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35d25 push eax */
  push32((uint32_t)(EAX));
  /* 12d35d26 call 0x12d35eb0 */
  push32(0x12d35d2bu); f_12d35eb0();
  /* 12d35d2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35d2e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35d31 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d35d34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d35d37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d35d39 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d35d3c jmp 0x12d35d46 */
  goto L_12d35d46;
L_12d35d3e:;
  /* 12d35d3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d35d41 jmp 0x12d35e76 */
  goto L_12d35e76;
L_12d35d46:;
  /* 12d35d46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d4a je 0x12d35d56 */
  if (C.zf) goto L_12d35d56;
  /* 12d35d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35d4e call 0x12d361d0 */
  push32(0x12d35d53u); f_12d361d0();
  /* 12d35d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35d56:;
  /* 12d35d56 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d5a jne 0x12d35d73 */
  if (!C.zf) goto L_12d35d73;
  /* 12d35d5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d60 je 0x12d35d6c */
  if (C.zf) goto L_12d35d6c;
  /* 12d35d62 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35d64 call 0x12d36270 */
  push32(0x12d35d69u); f_12d36270();
  /* 12d35d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35d6c:;
  /* 12d35d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d35d6e jmp 0x12d35e76 */
  goto L_12d35e76;
L_12d35d73:;
  /* 12d35d73 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d77 jne 0x12d35d90 */
  if (!C.zf) goto L_12d35d90;
  /* 12d35d79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d7d je 0x12d35d89 */
  if (C.zf) goto L_12d35d89;
  /* 12d35d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35d81 call 0x12d36270 */
  push32(0x12d35d86u); f_12d36270();
  /* 12d35d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35d89:;
  /* 12d35d89 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d35d8b call 0x12d31f90 */
  push32(0x12d35d90u); f_12d31f90();
L_12d35d90:;
  /* 12d35d90 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d94 je 0x12d35da2 */
  if (C.zf) goto L_12d35da2;
  /* 12d35d96 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35d9a je 0x12d35da2 */
  if (C.zf) goto L_12d35da2;
  /* 12d35d9c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35da0 jne 0x12d35dce */
  if (!C.zf) goto L_12d35dce;
L_12d35da2:;
  /* 12d35da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35da5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12d35da8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d35dab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35dae mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12d35db5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35db9 jne 0x12d35dce */
  if (!C.zf) goto L_12d35dce;
  /* 12d35dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35dbe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12d35dc1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d35dc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35dc7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12d35dce:;
  /* 12d35dce cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35dd2 jne 0x12d35e10 */
  if (!C.zf) goto L_12d35e10;
  /* 12d35dd4 mov eax, dword ptr [0x12d4cc98] */
  EAX = (r32((uint32_t)(0x12d4cc98)));
  /* 12d35dd9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d35ddc jmp 0x12d35de7 */
  goto L_12d35de7;
L_12d35dde:;
  /* 12d35dde mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d35de1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35de4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d35de7:;
  /* 12d35de7 mov edx, dword ptr [0x12d4cc98] */
  EDX = (r32((uint32_t)(0x12d4cc98)));
  /* 12d35ded add edx, dword ptr [0x12d4cc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4cc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35df3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35df6 jge 0x12d35e0e */
  if ((C.sf==C.of)) goto L_12d35e0e;
  /* 12d35df8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d35dfb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d35dfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35e01 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d35e04 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12d35e0c jmp 0x12d35dde */
  goto L_12d35dde;
L_12d35e0e:;
  /* 12d35e0e jmp 0x12d35e19 */
  goto L_12d35e19;
L_12d35e10:;
  /* 12d35e10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d35e13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d35e19:;
  /* 12d35e19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35e1d je 0x12d35e29 */
  if (C.zf) goto L_12d35e29;
  /* 12d35e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d35e21 call 0x12d36270 */
  push32(0x12d35e26u); f_12d36270();
  /* 12d35e26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35e29:;
  /* 12d35e29 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35e2d jne 0x12d35e40 */
  if (!C.zf) goto L_12d35e40;
  /* 12d35e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35e32 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12d35e35 push edx */
  push32((uint32_t)(EDX));
  /* 12d35e36 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d35e38 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12d35e3bu);
  /* 12d35e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35e3e jmp 0x12d35e4a */
  goto L_12d35e4a;
L_12d35e40:;
  /* 12d35e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35e43 push eax */
  push32((uint32_t)(EAX));
  /* 12d35e44 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12d35e47u);
  /* 12d35e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d35e4a:;
  /* 12d35e4a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35e4e je 0x12d35e5c */
  if (C.zf) goto L_12d35e5c;
  /* 12d35e50 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35e54 je 0x12d35e5c */
  if (C.zf) goto L_12d35e5c;
  /* 12d35e56 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35e5a jne 0x12d35e74 */
  if (!C.zf) goto L_12d35e74;
L_12d35e5c:;
  /* 12d35e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35e5f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d35e62 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12d35e65 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35e69 jne 0x12d35e74 */
  if (!C.zf) goto L_12d35e74;
  /* 12d35e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35e71 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12d35e74:;
  /* 12d35e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d35e76:;
  /* 12d35e76 mov esp, ebp */
  ESP = (EBP);
  /* 12d35e78 pop ebp */
  EBP = (pop32());
  /* 12d35e79 ret  */
  ESPCHK(0x12d35c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x12d35eb0 (91 bytes, 35 insns) */
void f_12d35eb0(void) {
  FTRACE(0x12d35eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d35eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35eb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35eb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d35eba:;
  /* 12d35eba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35ebd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d35ec0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35ec3 je 0x12d35ee3 */
  if (C.zf) goto L_12d35ee3;
  /* 12d35ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35ec8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35ecb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d35ece mov ecx, dword ptr [0x12d4cca4] */
  ECX = (r32((uint32_t)(0x12d4cca4)));
  /* 12d35ed4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d35ed7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35eda add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35edc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35edf jae 0x12d35ee3 */
  if (!C.cf) goto L_12d35ee3;
  /* 12d35ee1 jmp 0x12d35eba */
  goto L_12d35eba;
L_12d35ee3:;
  /* 12d35ee3 mov eax, dword ptr [0x12d4cca4] */
  EAX = (r32((uint32_t)(0x12d4cca4)));
  /* 12d35ee8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d35eeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35eee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35ef0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35ef3 jae 0x12d35f05 */
  if (!C.cf) goto L_12d35f05;
  /* 12d35ef5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35ef8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d35efb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35efe jne 0x12d35f05 */
  if (!C.zf) goto L_12d35f05;
  /* 12d35f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35f03 jmp 0x12d35f07 */
  goto L_12d35f07;
L_12d35f05:;
  /* 12d35f05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d35f07:;
  /* 12d35f07 mov esp, ebp */
  ESP = (EBP);
  /* 12d35f09 pop ebp */
  EBP = (pop32());
  /* 12d35f0a ret  */
  ESPCHK(0x12d35eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x12d35f10 (13 bytes, 6 insns) */
void f_12d35f10(void) {
  FTRACE(0x12d35f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35f11 mov ebp, esp */
  EBP = (ESP);
  /* 12d35f13 call 0x12d32210 */
  push32(0x12d35f18u); f_12d32210();
  /* 12d35f18 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35f1b pop ebp */
  EBP = (pop32());
  /* 12d35f1c ret  */
  ESPCHK(0x12d35f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x12d35f20 (13 bytes, 6 insns) */
void f_12d35f20(void) {
  FTRACE(0x12d35f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35f21 mov ebp, esp */
  EBP = (ESP);
  /* 12d35f23 call 0x12d32210 */
  push32(0x12d35f28u); f_12d32210();
  /* 12d35f28 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d35f2b pop ebp */
  EBP = (pop32());
  /* 12d35f2c ret  */
  ESPCHK(0x12d35f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f30 @ 0x12d35f30 (187 bytes, 54 insns) */
void f_12d35f30(void) {
  FTRACE(0x12d35f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d35f31 mov ebp, esp */
  EBP = (ESP);
  /* 12d35f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d35f36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d35f3d cmp dword ptr [0x12d4e5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35f44 jne 0x12d35fa3 */
  if (!C.zf) goto L_12d35fa3;
  /* 12d35f46 push 0x12d49248 */
  push32((uint32_t)(0x12d49248u));
  /* 12d35f4b call dword ptr [0x12d50250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50250))), 0x12d35f51u);
  /* 12d35f51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d35f54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35f58 je 0x12d35f77 */
  if (C.zf) goto L_12d35f77;
  /* 12d35f5a push 0x12d49e4c */
  push32((uint32_t)(0x12d49e4cu));
  /* 12d35f5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35f62 push eax */
  push32((uint32_t)(EAX));
  /* 12d35f63 call dword ptr [0x12d5024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5024c))), 0x12d35f69u);
  /* 12d35f69 mov dword ptr [0x12d4e5dc], eax */
  w32((uint32_t)(0x12d4e5dc), (EAX));
  /* 12d35f6e cmp dword ptr [0x12d4e5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35f75 jne 0x12d35f7b */
  if (!C.zf) goto L_12d35f7b;
L_12d35f77:;
  /* 12d35f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d35f79 jmp 0x12d35fe7 */
  goto L_12d35fe7;
L_12d35f7b:;
  /* 12d35f7b push 0x12d49e3c */
  push32((uint32_t)(0x12d49e3cu));
  /* 12d35f80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35f84 call dword ptr [0x12d5024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5024c))), 0x12d35f8au);
  /* 12d35f8a mov dword ptr [0x12d4e5e0], eax */
  w32((uint32_t)(0x12d4e5e0), (EAX));
  /* 12d35f8f push 0x12d49e28 */
  push32((uint32_t)(0x12d49e28u));
  /* 12d35f94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d35f97 push edx */
  push32((uint32_t)(EDX));
  /* 12d35f98 call dword ptr [0x12d5024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5024c))), 0x12d35f9eu);
  /* 12d35f9e mov dword ptr [0x12d4e5e4], eax */
  w32((uint32_t)(0x12d4e5e4), (EAX));
L_12d35fa3:;
  /* 12d35fa3 cmp dword ptr [0x12d4e5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35faa je 0x12d35fb5 */
  if (C.zf) goto L_12d35fb5;
  /* 12d35fac call dword ptr [0x12d4e5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e5e0))), 0x12d35fb2u);
  /* 12d35fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d35fb5:;
  /* 12d35fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35fb9 je 0x12d35fd1 */
  if (C.zf) goto L_12d35fd1;
  /* 12d35fbb cmp dword ptr [0x12d4e5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d35fc2 je 0x12d35fd1 */
  if (C.zf) goto L_12d35fd1;
  /* 12d35fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35fc7 push eax */
  push32((uint32_t)(EAX));
  /* 12d35fc8 call dword ptr [0x12d4e5e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e5e4))), 0x12d35fceu);
  /* 12d35fce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d35fd1:;
  /* 12d35fd1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d35fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35fd5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d35fd8 push edx */
  push32((uint32_t)(EDX));
  /* 12d35fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d35fdc push eax */
  push32((uint32_t)(EAX));
  /* 12d35fdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d35fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d35fe1 call dword ptr [0x12d4e5dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e5dc))), 0x12d35fe7u);
L_12d35fe7:;
  /* 12d35fe7 mov esp, ebp */
  ESP = (EBP);
  /* 12d35fe9 pop ebp */
  EBP = (pop32());
  /* 12d35fea ret  */
  ESPCHK(0x12d35f30u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12d35ff0 (254 bytes, 109 insns) */
void f_12d35ff0(void) {
  FTRACE(0x12d35ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d35ff0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d35ff4 push edi */
  push32((uint32_t)(EDI));
  /* 12d35ff5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d35ff7 je 0x12d36073 */
  if (C.zf) goto L_12d36073;
  /* 12d35ff9 push esi */
  push32((uint32_t)(ESI));
  /* 12d35ffa push ebx */
  push32((uint32_t)(EBX));
  /* 12d35ffb mov ebx, ecx */
  EBX = (ECX);
  /* 12d35ffd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12d36001 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12d36007 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12d3600b jne 0x12d36014 */
  if (!C.zf) goto L_12d36014;
  /* 12d3600d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d36010 jne 0x12d36081 */
  if (!C.zf) goto L_12d36081;
  /* 12d36012 jmp 0x12d36035 */
  goto L_12d36035;
L_12d36014:;
  /* 12d36014 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d36016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d36017 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d36019 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d3601a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d3601b je 0x12d36042 */
  if (C.zf) goto L_12d36042;
  /* 12d3601d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d3601f je 0x12d3604a */
  if (C.zf) goto L_12d3604a;
  /* 12d36021 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12d36027 jne 0x12d36014 */
  if (!C.zf) goto L_12d36014;
  /* 12d36029 mov ebx, ecx */
  EBX = (ECX);
  /* 12d3602b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3602e jne 0x12d36081 */
  if (!C.zf) goto L_12d36081;
L_12d36030:;
  /* 12d36030 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12d36033 je 0x12d36042 */
  if (C.zf) goto L_12d36042;
L_12d36035:;
  /* 12d36035 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d36037 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d36038 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3603a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d3603b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d3603d je 0x12d3606e */
  if (C.zf) goto L_12d3606e;
  /* 12d3603f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12d36040 jne 0x12d36035 */
  if (!C.zf) goto L_12d36035;
L_12d36042:;
  /* 12d36042 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d36046 pop ebx */
  EBX = (pop32());
  /* 12d36047 pop esi */
  ESI = (pop32());
  /* 12d36048 pop edi */
  EDI = (pop32());
  /* 12d36049 ret  */
  ESPCHK(0x12d35ff0u, _esp0);
  ESP += 4; return;
L_12d3604a:;
  /* 12d3604a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d36050 je 0x12d36064 */
  if (C.zf) goto L_12d36064;
L_12d36052:;
  /* 12d36052 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d36054 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d36055 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d36056 je 0x12d360e6 */
  if (C.zf) goto L_12d360e6;
  /* 12d3605c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d36062 jne 0x12d36052 */
  if (!C.zf) goto L_12d36052;
L_12d36064:;
  /* 12d36064 mov ebx, ecx */
  EBX = (ECX);
  /* 12d36066 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d36069 jne 0x12d360d7 */
  if (!C.zf) goto L_12d360d7;
L_12d3606b:;
  /* 12d3606b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3606d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12d3606e:;
  /* 12d3606e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12d3606f jne 0x12d3606b */
  if (!C.zf) goto L_12d3606b;
  /* 12d36071 pop ebx */
  EBX = (pop32());
  /* 12d36072 pop esi */
  ESI = (pop32());
L_12d36073:;
  /* 12d36073 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d36077 pop edi */
  EDI = (pop32());
  /* 12d36078 ret  */
  ESPCHK(0x12d35ff0u, _esp0);
  ESP += 4; return;
L_12d36079:;
  /* 12d36079 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d3607b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3607e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d3607f je 0x12d36030 */
  if (C.zf) goto L_12d36030;
L_12d36081:;
  /* 12d36081 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d36086 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12d36088 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3608a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3608d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3608f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12d36091 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36094 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d36099 je 0x12d36079 */
  if (C.zf) goto L_12d36079;
  /* 12d3609b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d3609d je 0x12d360cb */
  if (C.zf) goto L_12d360cb;
  /* 12d3609f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12d360a1 je 0x12d360c1 */
  if (C.zf) goto L_12d360c1;
  /* 12d360a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d360a9 je 0x12d360b7 */
  if (C.zf) goto L_12d360b7;
  /* 12d360ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d360b1 jne 0x12d36079 */
  if (!C.zf) goto L_12d36079;
  /* 12d360b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d360b5 jmp 0x12d360cf */
  goto L_12d360cf;
L_12d360b7:;
  /* 12d360b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d360bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d360bf jmp 0x12d360cf */
  goto L_12d360cf;
L_12d360c1:;
  /* 12d360c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d360c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d360c9 jmp 0x12d360cf */
  goto L_12d360cf;
L_12d360cb:;
  /* 12d360cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d360cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12d360cf:;
  /* 12d360cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d360d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d360d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d360d5 je 0x12d360e1 */
  if (C.zf) goto L_12d360e1;
L_12d360d7:;
  /* 12d360d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d360d9:;
  /* 12d360d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12d360db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d360de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d360df jne 0x12d360d9 */
  if (!C.zf) goto L_12d360d9;
L_12d360e1:;
  /* 12d360e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12d360e4 jne 0x12d3606b */
  if (!C.zf) goto L_12d3606b;
L_12d360e6:;
  /* 12d360e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d360ea pop ebx */
  EBX = (pop32());
  /* 12d360eb pop esi */
  ESI = (pop32());
  /* 12d360ec pop edi */
  EDI = (pop32());
  /* 12d360ed ret  */
  ESPCHK(0x12d35ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x12d360f0 (55 bytes, 16 insns) */
void f_12d360f0(void) {
  FTRACE(0x12d360f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d360f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d360f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d360f3 mov eax, dword ptr [0x12d4cba4] */
  EAX = (r32((uint32_t)(0x12d4cba4)));
  /* 12d360f8 push eax */
  push32((uint32_t)(EAX));
  /* 12d360f9 call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d360ffu);
  /* 12d360ff mov ecx, dword ptr [0x12d4cb94] */
  ECX = (r32((uint32_t)(0x12d4cb94)));
  /* 12d36105 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36106 call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d3610cu);
  /* 12d3610c mov edx, dword ptr [0x12d4cb84] */
  EDX = (r32((uint32_t)(0x12d4cb84)));
  /* 12d36112 push edx */
  push32((uint32_t)(EDX));
  /* 12d36113 call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d36119u);
  /* 12d36119 mov eax, dword ptr [0x12d4cb64] */
  EAX = (r32((uint32_t)(0x12d4cb64)));
  /* 12d3611e push eax */
  push32((uint32_t)(EAX));
  /* 12d3611f call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d36125u);
  /* 12d36125 pop ebp */
  EBP = (pop32());
  /* 12d36126 ret  */
  ESPCHK(0x12d360f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x12d36130 (159 bytes, 47 insns) */
void f_12d36130(void) {
  FTRACE(0x12d36130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36130 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36131 mov ebp, esp */
  EBP = (ESP);
  /* 12d36133 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36134 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3613b jmp 0x12d36146 */
  goto L_12d36146;
L_12d3613d:;
  /* 12d3613d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d36146:;
  /* 12d36146 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3614a jge 0x12d36199 */
  if ((C.sf==C.of)) goto L_12d36199;
  /* 12d3614c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3614f cmp dword ptr [ecx*4 + 0x12d4cb60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d4cb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36157 je 0x12d36197 */
  if (C.zf) goto L_12d36197;
  /* 12d36159 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3615d je 0x12d36197 */
  if (C.zf) goto L_12d36197;
  /* 12d3615f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36163 je 0x12d36197 */
  if (C.zf) goto L_12d36197;
  /* 12d36165 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36169 je 0x12d36197 */
  if (C.zf) goto L_12d36197;
  /* 12d3616b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3616f je 0x12d36197 */
  if (C.zf) goto L_12d36197;
  /* 12d36171 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36174 mov eax, dword ptr [edx*4 + 0x12d4cb60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4cb60)));
  /* 12d3617b push eax */
  push32((uint32_t)(EAX));
  /* 12d3617c call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d36182u);
  /* 12d36182 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d36184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36187 mov edx, dword ptr [ecx*4 + 0x12d4cb60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4cb60)));
  /* 12d3618e push edx */
  push32((uint32_t)(EDX));
  /* 12d3618f call 0x12d33260 */
  push32(0x12d36194u); f_12d33260();
  /* 12d36194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d36197:;
  /* 12d36197 jmp 0x12d3613d */
  goto L_12d3613d;
L_12d36199:;
  /* 12d36199 mov eax, dword ptr [0x12d4cb84] */
  EAX = (r32((uint32_t)(0x12d4cb84)));
  /* 12d3619e push eax */
  push32((uint32_t)(EAX));
  /* 12d3619f call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d361a5u);
  /* 12d361a5 mov ecx, dword ptr [0x12d4cb94] */
  ECX = (r32((uint32_t)(0x12d4cb94)));
  /* 12d361ab push ecx */
  push32((uint32_t)(ECX));
  /* 12d361ac call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d361b2u);
  /* 12d361b2 mov edx, dword ptr [0x12d4cba4] */
  EDX = (r32((uint32_t)(0x12d4cba4)));
  /* 12d361b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d361b9 call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d361bfu);
  /* 12d361bf mov eax, dword ptr [0x12d4cb64] */
  EAX = (r32((uint32_t)(0x12d4cb64)));
  /* 12d361c4 push eax */
  push32((uint32_t)(EAX));
  /* 12d361c5 call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d361cbu);
  /* 12d361cb mov esp, ebp */
  ESP = (EBP);
  /* 12d361cd pop ebp */
  EBP = (pop32());
  /* 12d361ce ret  */
  ESPCHK(0x12d36130u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x12d361d0 (151 bytes, 46 insns) */
void f_12d361d0(void) {
  FTRACE(0x12d361d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d361d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d361d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d361d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d361d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d361d7 cmp dword ptr [eax*4 + 0x12d4cb60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12d4cb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d361df jne 0x12d36252 */
  if (!C.zf) goto L_12d36252;
  /* 12d361e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12d361e6 push 0x12d49e58 */
  push32((uint32_t)(0x12d49e58u));
  /* 12d361eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12d361ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12d361ef call 0x12d327d0 */
  push32(0x12d361f4u); f_12d327d0();
  /* 12d361f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d361f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d361fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d361fe jne 0x12d3620a */
  if (!C.zf) goto L_12d3620a;
  /* 12d36200 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d36202 call 0x12d31740 */
  push32(0x12d36207u); f_12d31740();
  /* 12d36207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3620a:;
  /* 12d3620a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d3620c call 0x12d361d0 */
  push32(0x12d36211u); f_12d361d0();
  /* 12d36211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36214 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36217 cmp dword ptr [ecx*4 + 0x12d4cb60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d4cb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3621f jne 0x12d3623a */
  if (!C.zf) goto L_12d3623a;
  /* 12d36221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36224 push edx */
  push32((uint32_t)(EDX));
  /* 12d36225 call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d3622bu);
  /* 12d3622b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3622e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36231 mov dword ptr [eax*4 + 0x12d4cb60], ecx */
  w32((uint32_t)(EAX*4 + 0x12d4cb60), (ECX));
  /* 12d36238 jmp 0x12d36248 */
  goto L_12d36248;
L_12d3623a:;
  /* 12d3623a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3623c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3623f push edx */
  push32((uint32_t)(EDX));
  /* 12d36240 call 0x12d33260 */
  push32(0x12d36245u); f_12d33260();
  /* 12d36245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d36248:;
  /* 12d36248 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d3624a call 0x12d36270 */
  push32(0x12d3624fu); f_12d36270();
  /* 12d3624f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d36252:;
  /* 12d36252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36255 mov ecx, dword ptr [eax*4 + 0x12d4cb60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4cb60)));
  /* 12d3625c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3625d call dword ptr [0x12d502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d0))), 0x12d36263u);
  /* 12d36263 mov esp, ebp */
  ESP = (EBP);
  /* 12d36265 pop ebp */
  EBP = (pop32());
  /* 12d36266 ret  */
  ESPCHK(0x12d361d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x12d36270 (22 bytes, 8 insns) */
void f_12d36270(void) {
  FTRACE(0x12d36270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36270 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36271 mov ebp, esp */
  EBP = (ESP);
  /* 12d36273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36276 mov ecx, dword ptr [eax*4 + 0x12d4cb60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4cb60)));
  /* 12d3627d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3627e call dword ptr [0x12d502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d4))), 0x12d36284u);
  /* 12d36284 pop ebp */
  EBP = (pop32());
  /* 12d36285 ret  */
  ESPCHK(0x12d36270u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x12d36290 (26 bytes, 10 insns) */
void f_12d36290(void) {
  FTRACE(0x12d36290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36290 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36291 mov ebp, esp */
  EBP = (ESP);
  /* 12d36293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36296 push eax */
  push32((uint32_t)(EAX));
  /* 12d36297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d36299 call dword ptr [0x12d502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d8))), 0x12d3629fu);
  /* 12d3629f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d362a4 call dword ptr [0x12d5025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5025c))), 0x12d362aau);
  /* 12d362aa pop ebp */
  EBP = (pop32());
  /* 12d362ab ret  */
  ESPCHK(0x12d36290u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12d362b0 (446 bytes, 130 insns) */
void f_12d362b0(void) {
  FTRACE(0x12d362b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d362b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d362b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d362b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d362b6 call 0x12d32210 */
  push32(0x12d362bbu); f_12d32210();
  /* 12d362bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d362be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d362c1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12d362c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d362c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d362c8 push edx */
  push32((uint32_t)(EDX));
  /* 12d362c9 call 0x12d36470 */
  push32(0x12d362ceu); f_12d36470();
  /* 12d362ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d362d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d362d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d362d8 je 0x12d362e3 */
  if (C.zf) goto L_12d362e3;
  /* 12d362da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d362dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d362e1 jne 0x12d362f2 */
  if (!C.zf) goto L_12d362f2;
L_12d362e3:;
  /* 12d362e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d362e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d362e7 call dword ptr [0x12d502dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502dc))), 0x12d362edu);
  /* 12d362ed jmp 0x12d3646a */
  goto L_12d3646a;
L_12d362f2:;
  /* 12d362f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d362f5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d362f9 jne 0x12d3630f */
  if (!C.zf) goto L_12d3630f;
  /* 12d362fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d362fe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d36305 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3630a jmp 0x12d3646a */
  goto L_12d3646a;
L_12d3630f:;
  /* 12d3630f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d36312 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36316 jne 0x12d36320 */
  if (!C.zf) goto L_12d36320;
  /* 12d36318 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3631b jmp 0x12d3646a */
  goto L_12d3646a;
L_12d36320:;
  /* 12d36320 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d36323 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d36326 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d36329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3632c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12d3632f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d36332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36335 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36338 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12d3633b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3633e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36342 jne 0x12d36447 */
  if (!C.zf) goto L_12d36447;
  /* 12d36348 mov eax, dword ptr [0x12d4cc98] */
  EAX = (r32((uint32_t)(0x12d4cc98)));
  /* 12d3634d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d36350 jmp 0x12d3635b */
  goto L_12d3635b;
L_12d36352:;
  /* 12d36352 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d36355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36358 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d3635b:;
  /* 12d3635b mov edx, dword ptr [0x12d4cc98] */
  EDX = (r32((uint32_t)(0x12d4cc98)));
  /* 12d36361 add edx, dword ptr [0x12d4cc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4cc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36367 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3636a jge 0x12d36382 */
  if ((C.sf==C.of)) goto L_12d36382;
  /* 12d3636c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3636f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d36372 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36375 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d36378 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12d36380 jmp 0x12d36352 */
  goto L_12d36352;
L_12d36382:;
  /* 12d36382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36385 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12d36388 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3638b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3638e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36394 jne 0x12d363a5 */
  if (!C.zf) goto L_12d363a5;
  /* 12d36396 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36399 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12d363a0 jmp 0x12d3642d */
  goto L_12d3642d;
L_12d363a5:;
  /* 12d363a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d363a8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d363ae jne 0x12d363bc */
  if (!C.zf) goto L_12d363bc;
  /* 12d363b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d363b3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12d363ba jmp 0x12d3642d */
  goto L_12d3642d;
L_12d363bc:;
  /* 12d363bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d363bf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d363c5 jne 0x12d363d3 */
  if (!C.zf) goto L_12d363d3;
  /* 12d363c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d363ca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12d363d1 jmp 0x12d3642d */
  goto L_12d3642d;
L_12d363d3:;
  /* 12d363d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d363d6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d363dc jne 0x12d363ea */
  if (!C.zf) goto L_12d363ea;
  /* 12d363de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d363e1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12d363e8 jmp 0x12d3642d */
  goto L_12d3642d;
L_12d363ea:;
  /* 12d363ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d363ed cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d363f3 jne 0x12d36401 */
  if (!C.zf) goto L_12d36401;
  /* 12d363f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d363f8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12d363ff jmp 0x12d3642d */
  goto L_12d3642d;
L_12d36401:;
  /* 12d36401 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d36404 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3640a jne 0x12d36418 */
  if (!C.zf) goto L_12d36418;
  /* 12d3640c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3640f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12d36416 jmp 0x12d3642d */
  goto L_12d3642d;
L_12d36418:;
  /* 12d36418 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3641b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36421 jne 0x12d3642d */
  if (!C.zf) goto L_12d3642d;
  /* 12d36423 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36426 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12d3642d:;
  /* 12d3642d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36430 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12d36433 push edx */
  push32((uint32_t)(EDX));
  /* 12d36434 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d36436 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d36439u);
  /* 12d36439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3643c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3643f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d36442 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12d36445 jmp 0x12d3645e */
  goto L_12d3645e;
L_12d36447:;
  /* 12d36447 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3644a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d36451 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d36454 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d36457 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36458 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d3645bu);
  /* 12d3645b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3645e:;
  /* 12d3645e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36461 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d36464 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12d36467 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d3646a:;
  /* 12d3646a mov esp, ebp */
  ESP = (EBP);
  /* 12d3646c pop ebp */
  EBP = (pop32());
  /* 12d3646d ret  */
  ESPCHK(0x12d362b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x12d36470 (89 bytes, 35 insns) */
void f_12d36470(void) {
  FTRACE(0x12d36470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36470 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36471 mov ebp, esp */
  EBP = (ESP);
  /* 12d36473 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36474 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36477 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3647a:;
  /* 12d3647a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3647d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3647f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36482 je 0x12d364a2 */
  if (C.zf) goto L_12d364a2;
  /* 12d36484 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36487 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3648a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3648d mov ecx, dword ptr [0x12d4cca4] */
  ECX = (r32((uint32_t)(0x12d4cca4)));
  /* 12d36493 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d36496 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36499 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3649b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3649e jae 0x12d364a2 */
  if (!C.cf) goto L_12d364a2;
  /* 12d364a0 jmp 0x12d3647a */
  goto L_12d3647a;
L_12d364a2:;
  /* 12d364a2 mov eax, dword ptr [0x12d4cca4] */
  EAX = (r32((uint32_t)(0x12d4cca4)));
  /* 12d364a7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d364aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d364ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d364af cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d364b2 jae 0x12d364be */
  if (!C.cf) goto L_12d364be;
  /* 12d364b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d364b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d364b9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d364bc je 0x12d364c2 */
  if (C.zf) goto L_12d364c2;
L_12d364be:;
  /* 12d364be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d364c0 jmp 0x12d364c5 */
  goto L_12d364c5;
L_12d364c2:;
  /* 12d364c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d364c5:;
  /* 12d364c5 mov esp, ebp */
  ESP = (EBP);
  /* 12d364c7 pop ebp */
  EBP = (pop32());
  /* 12d364c8 ret  */
  ESPCHK(0x12d36470u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12d364d0 (48 bytes, 17 insns) */
void f_12d364d0(void) {
  FTRACE(0x12d364d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d364d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d364d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d364d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d364d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d364d6 call 0x12d361d0 */
  push32(0x12d364dbu); f_12d361d0();
  /* 12d364db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d364de mov eax, dword ptr [0x12d4e64c] */
  EAX = (r32((uint32_t)(0x12d4e64c)));
  /* 12d364e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d364e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d364e9 mov dword ptr [0x12d4e64c], ecx */
  w32((uint32_t)(0x12d4e64c), (ECX));
  /* 12d364ef push 9 */
  push32((uint32_t)(0x9u));
  /* 12d364f1 call 0x12d36270 */
  push32(0x12d364f6u); f_12d36270();
  /* 12d364f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d364f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d364fc mov esp, ebp */
  ESP = (EBP);
  /* 12d364fe pop ebp */
  EBP = (pop32());
  /* 12d364ff ret  */
  ESPCHK(0x12d364d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x12d36500 (10 bytes, 5 insns) */
void f_12d36500(void) {
  FTRACE(0x12d36500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36500 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36501 mov ebp, esp */
  EBP = (ESP);
  /* 12d36503 mov eax, dword ptr [0x12d4e64c] */
  EAX = (r32((uint32_t)(0x12d4e64c)));
  /* 12d36508 pop ebp */
  EBP = (pop32());
  /* 12d36509 ret  */
  ESPCHK(0x12d36500u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12d36510 (45 bytes, 19 insns) */
void f_12d36510(void) {
  FTRACE(0x12d36510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36510 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36511 mov ebp, esp */
  EBP = (ESP);
  /* 12d36513 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36514 mov eax, dword ptr [0x12d4e64c] */
  EAX = (r32((uint32_t)(0x12d4e64c)));
  /* 12d36519 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3651c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36520 je 0x12d36530 */
  if (C.zf) goto L_12d36530;
  /* 12d36522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36525 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36526 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d36529u);
  /* 12d36529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3652c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3652e jne 0x12d36534 */
  if (!C.zf) goto L_12d36534;
L_12d36530:;
  /* 12d36530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d36532 jmp 0x12d36539 */
  goto L_12d36539;
L_12d36534:;
  /* 12d36534 mov eax, 1 */
  EAX = (0x1u);
L_12d36539:;
  /* 12d36539 mov esp, ebp */
  ESP = (EBP);
  /* 12d3653b pop ebp */
  EBP = (pop32());
  /* 12d3653c ret  */
  ESPCHK(0x12d36510u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12d36540 (88 bytes, 40 insns) */
void f_12d36540(void) {
  FTRACE(0x12d36540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36540 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d36544 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d36548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3654a je 0x12d36593 */
  if (C.zf) goto L_12d36593;
  /* 12d3654c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3654e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12d36552 push edi */
  push32((uint32_t)(EDI));
  /* 12d36553 mov edi, ecx */
  EDI = (ECX);
  /* 12d36555 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36558 jb 0x12d36587 */
  if (C.cf) goto L_12d36587;
  /* 12d3655a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3655c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3655f je 0x12d36569 */
  if (C.zf) goto L_12d36569;
  /* 12d36561 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d36563:;
  /* 12d36563 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d36565 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d36566 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d36567 jne 0x12d36563 */
  if (!C.zf) goto L_12d36563;
L_12d36569:;
  /* 12d36569 mov ecx, eax */
  ECX = (EAX);
  /* 12d3656b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d3656e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36570 mov ecx, eax */
  ECX = (EAX);
  /* 12d36572 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d36575 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36577 mov ecx, edx */
  ECX = (EDX);
  /* 12d36579 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3657c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3657f je 0x12d36587 */
  if (C.zf) goto L_12d36587;
  /* 12d36581 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d36583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d36585 je 0x12d3658d */
  if (C.zf) goto L_12d3658d;
L_12d36587:;
  /* 12d36587 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d36589 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d3658a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12d3658b jne 0x12d36587 */
  if (!C.zf) goto L_12d36587;
L_12d3658d:;
  /* 12d3658d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d36591 pop edi */
  EDI = (pop32());
  /* 12d36592 ret  */
  ESPCHK(0x12d36540u, _esp0);
  ESP += 4; return;
L_12d36593:;
  /* 12d36593 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d36597 ret  */
  ESPCHK(0x12d36540u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x12d365a0 (23 bytes, 10 insns) */
void f_12d365a0(void) {
  FTRACE(0x12d365a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d365a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d365a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d365a3 mov eax, dword ptr [0x12d4e648] */
  EAX = (r32((uint32_t)(0x12d4e648)));
  /* 12d365a8 push eax */
  push32((uint32_t)(EAX));
  /* 12d365a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d365ac push ecx */
  push32((uint32_t)(ECX));
  /* 12d365ad call 0x12d365c0 */
  push32(0x12d365b2u); f_12d365c0();
  /* 12d365b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d365b5 pop ebp */
  EBP = (pop32());
  /* 12d365b6 ret  */
  ESPCHK(0x12d365a0u, _esp0);
  ESP += 4; return;
}

