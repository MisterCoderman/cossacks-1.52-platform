#include "recomp.h"

/* FUN_10006fa0 @ 0x10b46fa0 (490 bytes, 165 insns) */
void f_10b46fa0(void) {
  FTRACE(0x10b46fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b46fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b46fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b46fa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b46fa6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46faa jne 0x10b46fbd */
  if (!C.zf) goto L_10b46fbd;
  /* 10b46fac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b46faf push eax */
  push32((uint32_t)(EAX));
  /* 10b46fb0 call 0x10b46df0 */
  push32(0x10b46fb5u); f_10b46df0();
  /* 10b46fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46fb8 jmp 0x10b47186 */
  goto L_10b47186;
L_10b46fbd:;
  /* 10b46fbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46fc1 jne 0x10b46fd6 */
  if (!C.zf) goto L_10b46fd6;
  /* 10b46fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b46fc7 call 0x10b47190 */
  push32(0x10b46fccu); f_10b47190();
  /* 10b46fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b46fd1 jmp 0x10b47186 */
  goto L_10b47186;
L_10b46fd6:;
  /* 10b46fd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b46fdd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b46fe1 ja 0x10b47159 */
  if ((!C.cf&&!C.zf)) goto L_10b47159;
  /* 10b46fe7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b46fe9 call 0x10b46a20 */
  push32(0x10b46feeu); f_10b46a20();
  /* 10b46fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46ff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b46ff4 push edx */
  push32((uint32_t)(EDX));
  /* 10b46ff5 call 0x10b47320 */
  push32(0x10b46ffau); f_10b47320();
  /* 10b46ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b46ffd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b47000 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47004 je 0x10b4711c */
  if (C.zf) goto L_10b4711c;
  /* 10b4700a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4700d cmp eax, dword ptr [0x10b6cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47013 ja 0x10b47090 */
  if ((!C.cf&&!C.zf)) goto L_10b47090;
  /* 10b47015 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b47018 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47019 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4701c push edx */
  push32((uint32_t)(EDX));
  /* 10b4701d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47020 push eax */
  push32((uint32_t)(EAX));
  /* 10b47021 call 0x10b481f0 */
  push32(0x10b47026u); f_10b481f0();
  /* 10b47026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4702b je 0x10b47035 */
  if (C.zf) goto L_10b47035;
  /* 10b4702d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47030 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b47033 jmp 0x10b47090 */
  goto L_10b47090;
L_10b47035:;
  /* 10b47035 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b47038 push edx */
  push32((uint32_t)(EDX));
  /* 10b47039 call 0x10b479b0 */
  push32(0x10b4703eu); f_10b479b0();
  /* 10b4703e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47041 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b47044 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47048 je 0x10b47090 */
  if (C.zf) goto L_10b47090;
  /* 10b4704a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4704d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10b47050 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47053 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b47056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47059 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4705c jae 0x10b47066 */
  if (!C.cf) goto L_10b47066;
  /* 10b4705e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47061 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b47064 jmp 0x10b4706c */
  goto L_10b4706c;
L_10b47066:;
  /* 10b47066 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b47069 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b4706c:;
  /* 10b4706c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4706f push edx */
  push32((uint32_t)(EDX));
  /* 10b47070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47073 push eax */
  push32((uint32_t)(EAX));
  /* 10b47074 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47077 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47078 call 0x10b49900 */
  push32(0x10b4707du); f_10b49900();
  /* 10b4707d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47080 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47083 push edx */
  push32((uint32_t)(EDX));
  /* 10b47084 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47087 push eax */
  push32((uint32_t)(EAX));
  /* 10b47088 call 0x10b473e0 */
  push32(0x10b4708du); f_10b473e0();
  /* 10b4708d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b47090:;
  /* 10b47090 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47094 jne 0x10b47110 */
  if (!C.zf) goto L_10b47110;
  /* 10b47096 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4709a jne 0x10b470a3 */
  if (!C.zf) goto L_10b470a3;
  /* 10b4709c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10b470a3:;
  /* 10b470a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b470a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b470a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10b470ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b470af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b470b2 push edx */
  push32((uint32_t)(EDX));
  /* 10b470b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b470b5 mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b470ba push eax */
  push32((uint32_t)(EAX));
  /* 10b470bb call dword ptr [0x10b70344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70344))), 0x10b470c1u);
  /* 10b470c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b470c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b470c8 je 0x10b47110 */
  if (C.zf) goto L_10b47110;
  /* 10b470ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b470cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b470d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b470d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b470d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b470d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b470dc jae 0x10b470e6 */
  if (!C.cf) goto L_10b470e6;
  /* 10b470de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b470e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b470e4 jmp 0x10b470ec */
  goto L_10b470ec;
L_10b470e6:;
  /* 10b470e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b470e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b470ec:;
  /* 10b470ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b470ef push eax */
  push32((uint32_t)(EAX));
  /* 10b470f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b470f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b470f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b470f7 push edx */
  push32((uint32_t)(EDX));
  /* 10b470f8 call 0x10b49900 */
  push32(0x10b470fdu); f_10b49900();
  /* 10b470fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47103 push eax */
  push32((uint32_t)(EAX));
  /* 10b47104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47107 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47108 call 0x10b473e0 */
  push32(0x10b4710du); f_10b473e0();
  /* 10b4710d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b47110:;
  /* 10b47110 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b47112 call 0x10b46ac0 */
  push32(0x10b47117u); f_10b46ac0();
  /* 10b47117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4711a jmp 0x10b47159 */
  goto L_10b47159;
L_10b4711c:;
  /* 10b4711c push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4711e call 0x10b46ac0 */
  push32(0x10b47123u); f_10b46ac0();
  /* 10b47123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47126 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4712a jne 0x10b47133 */
  if (!C.zf) goto L_10b47133;
  /* 10b4712c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10b47133:;
  /* 10b47133 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b47136 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47139 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4713c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b4713f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b47142 push eax */
  push32((uint32_t)(EAX));
  /* 10b47143 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47146 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47147 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47149 mov edx, dword ptr [0x10b6fe0c] */
  EDX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b4714f push edx */
  push32((uint32_t)(EDX));
  /* 10b47150 call dword ptr [0x10b7035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7035c))), 0x10b47156u);
  /* 10b47156 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b47159:;
  /* 10b47159 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4715d jne 0x10b47168 */
  if (!C.zf) goto L_10b47168;
  /* 10b4715f cmp dword ptr [0x10b6e640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47166 jne 0x10b4716d */
  if (!C.zf) goto L_10b4716d;
L_10b47168:;
  /* 10b47168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4716b jmp 0x10b47186 */
  goto L_10b47186;
L_10b4716d:;
  /* 10b4716d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b47170 push eax */
  push32((uint32_t)(EAX));
  /* 10b47171 call 0x10b46d60 */
  push32(0x10b47176u); f_10b46d60();
  /* 10b47176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4717b jne 0x10b47181 */
  if (!C.zf) goto L_10b47181;
  /* 10b4717d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4717f jmp 0x10b47186 */
  goto L_10b47186;
L_10b47181:;
  /* 10b47181 jmp 0x10b46fd6 */
  goto L_10b46fd6;
L_10b47186:;
  /* 10b47186 mov esp, ebp */
  ESP = (EBP);
  /* 10b47188 pop ebp */
  EBP = (pop32());
  /* 10b47189 ret  */
  ESPCHK(0x10b46fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007190 @ 0x10b47190 (104 bytes, 38 insns) */
void f_10b47190(void) {
  FTRACE(0x10b47190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47190 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47191 mov ebp, esp */
  EBP = (ESP);
  /* 10b47193 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47194 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47198 jne 0x10b4719c */
  if (!C.zf) goto L_10b4719c;
  /* 10b4719a jmp 0x10b471f4 */
  goto L_10b471f4;
L_10b4719c:;
  /* 10b4719c push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4719e call 0x10b46a20 */
  push32(0x10b471a3u); f_10b46a20();
  /* 10b471a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b471a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b471a9 push eax */
  push32((uint32_t)(EAX));
  /* 10b471aa call 0x10b47320 */
  push32(0x10b471afu); f_10b47320();
  /* 10b471af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b471b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b471b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b471b9 je 0x10b471d7 */
  if (C.zf) goto L_10b471d7;
  /* 10b471bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b471be push ecx */
  push32((uint32_t)(ECX));
  /* 10b471bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b471c2 push edx */
  push32((uint32_t)(EDX));
  /* 10b471c3 call 0x10b473e0 */
  push32(0x10b471c8u); f_10b473e0();
  /* 10b471c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b471cb push 9 */
  push32((uint32_t)(0x9u));
  /* 10b471cd call 0x10b46ac0 */
  push32(0x10b471d2u); f_10b46ac0();
  /* 10b471d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b471d5 jmp 0x10b471f4 */
  goto L_10b471f4;
L_10b471d7:;
  /* 10b471d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b471d9 call 0x10b46ac0 */
  push32(0x10b471deu); f_10b46ac0();
  /* 10b471de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b471e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b471e4 push eax */
  push32((uint32_t)(EAX));
  /* 10b471e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b471e7 mov ecx, dword ptr [0x10b6fe0c] */
  ECX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b471ed push ecx */
  push32((uint32_t)(ECX));
  /* 10b471ee call dword ptr [0x10b7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7033c))), 0x10b471f4u);
L_10b471f4:;
  /* 10b471f4 mov esp, ebp */
  ESP = (EBP);
  /* 10b471f6 pop ebp */
  EBP = (pop32());
  /* 10b471f7 ret  */
  ESPCHK(0x10b47190u, _esp0);
  ESP += 4; return;
}

/* FUN_10007200 @ 0x10b47200 (116 bytes, 34 insns) */
void f_10b47200(void) {
  FTRACE(0x10b47200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47200 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47201 mov ebp, esp */
  EBP = (ESP);
  /* 10b47203 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47204 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10b4720b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b4720d call 0x10b46a20 */
  push32(0x10b47212u); f_10b46a20();
  /* 10b47212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47215 call 0x10b48910 */
  push32(0x10b4721au); f_10b48910();
  /* 10b4721a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4721c jge 0x10b47225 */
  if ((C.sf==C.of)) goto L_10b47225;
  /* 10b4721e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10b47225:;
  /* 10b47225 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b47227 call 0x10b46ac0 */
  push32(0x10b4722cu); f_10b46ac0();
  /* 10b4722c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4722f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47231 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47233 mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b47238 push eax */
  push32((uint32_t)(EAX));
  /* 10b47239 call dword ptr [0x10b7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7031c))), 0x10b4723fu);
  /* 10b4723f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b47241 jne 0x10b4726d */
  if (!C.zf) goto L_10b4726d;
  /* 10b47243 call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b47249u);
  /* 10b47249 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4724c jne 0x10b47266 */
  if (!C.zf) goto L_10b47266;
  /* 10b4724e call 0x10b4af00 */
  push32(0x10b47253u); f_10b4af00();
  /* 10b47253 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10b47259 call 0x10b4aef0 */
  push32(0x10b4725eu); f_10b4aef0();
  /* 10b4725e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10b47264 jmp 0x10b4726d */
  goto L_10b4726d;
L_10b47266:;
  /* 10b47266 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10b4726d:;
  /* 10b4726d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47270 mov esp, ebp */
  ESP = (EBP);
  /* 10b47272 pop ebp */
  EBP = (pop32());
  /* 10b47273 ret  */
  ESPCHK(0x10b47200u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x10b47280 (10 bytes, 5 insns) */
void f_10b47280(void) {
  FTRACE(0x10b47280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47280 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47281 mov ebp, esp */
  EBP = (ESP);
  /* 10b47283 call 0x10b47200 */
  push32(0x10b47288u); f_10b47200();
  /* 10b47288 pop ebp */
  EBP = (pop32());
  /* 10b47289 ret  */
  ESPCHK(0x10b47280u, _esp0);
  ESP += 4; return;
}

/* FUN_10007290 @ 0x10b47290 (10 bytes, 5 insns) */
void f_10b47290(void) {
  FTRACE(0x10b47290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47290 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47291 mov ebp, esp */
  EBP = (ESP);
  /* 10b47293 mov eax, dword ptr [0x10b6cc94] */
  EAX = (r32((uint32_t)(0x10b6cc94)));
  /* 10b47298 pop ebp */
  EBP = (pop32());
  /* 10b47299 ret  */
  ESPCHK(0x10b47290u, _esp0);
  ESP += 4; return;
}

/* FUN_100072a0 @ 0x10b472a0 (31 bytes, 11 insns) */
void f_10b472a0(void) {
  FTRACE(0x10b472a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b472a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b472a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b472a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b472aa jbe 0x10b472b0 */
  if ((C.cf||C.zf)) goto L_10b472b0;
  /* 10b472ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b472ae jmp 0x10b472bd */
  goto L_10b472bd;
L_10b472b0:;
  /* 10b472b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b472b3 mov dword ptr [0x10b6cc94], eax */
  w32((uint32_t)(0x10b6cc94), (EAX));
  /* 10b472b8 mov eax, 1 */
  EAX = (0x1u);
L_10b472bd:;
  /* 10b472bd pop ebp */
  EBP = (pop32());
  /* 10b472be ret  */
  ESPCHK(0x10b472a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072c0 @ 0x10b472c0 (89 bytes, 20 insns) */
void f_10b472c0(void) {
  FTRACE(0x10b472c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b472c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b472c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b472c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10b472c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b472ca mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b472cf push eax */
  push32((uint32_t)(EAX));
  /* 10b472d0 call dword ptr [0x10b70344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70344))), 0x10b472d6u);
  /* 10b472d6 mov dword ptr [0x10b6fe08], eax */
  w32((uint32_t)(0x10b6fe08), (EAX));
  /* 10b472db cmp dword ptr [0x10b6fe08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fe08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b472e2 jne 0x10b472e8 */
  if (!C.zf) goto L_10b472e8;
  /* 10b472e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b472e6 jmp 0x10b47317 */
  goto L_10b47317;
L_10b472e8:;
  /* 10b472e8 mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b472ee mov dword ptr [0x10b6fdfc], ecx */
  w32((uint32_t)(0x10b6fdfc), (ECX));
  /* 10b472f4 mov dword ptr [0x10b6fe00], 0 */
  w32((uint32_t)(0x10b6fe00), (0x0u));
  /* 10b472fe mov dword ptr [0x10b6fe04], 0 */
  w32((uint32_t)(0x10b6fe04), (0x0u));
  /* 10b47308 mov dword ptr [0x10b6fde8], 0x10 */
  w32((uint32_t)(0x10b6fde8), (0x10u));
  /* 10b47312 mov eax, 1 */
  EAX = (0x1u);
L_10b47317:;
  /* 10b47317 pop ebp */
  EBP = (pop32());
  /* 10b47318 ret  */
  ESPCHK(0x10b472c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x10b47320 (85 bytes, 29 insns) */
void f_10b47320(void) {
  FTRACE(0x10b47320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47320 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47321 mov ebp, esp */
  EBP = (ESP);
  /* 10b47323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47326 mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b4732b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4732e mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47334 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47336 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b47339 mov edx, dword ptr [0x10b6fe08] */
  EDX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b4733f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b47342:;
  /* 10b47342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47345 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47348 jae 0x10b4736f */
  if (!C.cf) goto L_10b4736f;
  /* 10b4734a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4734d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47350 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47353 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b47356 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4735d jae 0x10b47364 */
  if (!C.cf) goto L_10b47364;
  /* 10b4735f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47362 jmp 0x10b47371 */
  goto L_10b47371;
L_10b47364:;
  /* 10b47364 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47367 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4736a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4736d jmp 0x10b47342 */
  goto L_10b47342;
L_10b4736f:;
  /* 10b4736f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b47371:;
  /* 10b47371 mov esp, ebp */
  ESP = (EBP);
  /* 10b47373 pop ebp */
  EBP = (pop32());
  /* 10b47374 ret  */
  ESPCHK(0x10b47320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x10b47380 (95 bytes, 33 insns) */
void f_10b47380(void) {
  FTRACE(0x10b47380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47380 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47381 mov ebp, esp */
  EBP = (ESP);
  /* 10b47383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47389 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4738c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4738f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b47392 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47395 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10b47398 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4739b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b473a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b473a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b473a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b473a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b473ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b473ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b473af jne 0x10b473d1 */
  if (!C.zf) goto L_10b473d1;
  /* 10b473b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b473b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10b473b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b473b9 jne 0x10b473d1 */
  if (!C.zf) goto L_10b473d1;
  /* 10b473bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b473be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b473c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b473c6 je 0x10b473d1 */
  if (C.zf) goto L_10b473d1;
  /* 10b473c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10b473cf jmp 0x10b473d8 */
  goto L_10b473d8;
L_10b473d1:;
  /* 10b473d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10b473d8:;
  /* 10b473d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b473db mov esp, ebp */
  ESP = (EBP);
  /* 10b473dd pop ebp */
  EBP = (pop32());
  /* 10b473de ret  */
  ESPCHK(0x10b47380u, _esp0);
  ESP += 4; return;
}

/* FUN_100073e0 @ 0x10b473e0 (1485 bytes, 453 insns) */
void f_10b473e0(void) {
  FTRACE(0x10b473e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b473e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b473e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b473e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b473e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b473e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b473ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10b473ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b473f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b473f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b473f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b473fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b473fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10b47401 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b47404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47407 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4740d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47410 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10b47417 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4741a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4741d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47420 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b47423 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47426 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b47428 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4742b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10b4742e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47431 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47434 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10b47437 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b4743a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4743c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b4743f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47442 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10b47445 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b47448 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4744b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4744e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47450 jne 0x10b47578 */
  if (!C.zf) goto L_10b47578;
  /* 10b47456 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47459 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b4745c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4745f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b47462 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47466 jbe 0x10b4746f */
  if ((C.cf||C.zf)) goto L_10b4746f;
  /* 10b47468 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10b4746f:;
  /* 10b4746f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47472 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47475 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47478 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4747b jne 0x10b47551 */
  if (!C.zf) goto L_10b47551;
  /* 10b47481 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47485 jae 0x10b474e6 */
  if (!C.cf) goto L_10b474e6;
  /* 10b47487 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b4748c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4748f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47491 not eax */
  EAX = (~(EAX));
  /* 10b47493 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47496 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47499 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b4749d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4749f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b474a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b474a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b474a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b474ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b474af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b474b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b474b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b474b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b474bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b474be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b474c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b474c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b474c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b474ca jne 0x10b474e4 */
  if (!C.zf) goto L_10b474e4;
  /* 10b474cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b474d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b474d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b474d6 not eax */
  EAX = (~(EAX));
  /* 10b474d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b474db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b474dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b474df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b474e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b474e4:;
  /* 10b474e4 jmp 0x10b47551 */
  goto L_10b47551;
L_10b474e6:;
  /* 10b474e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b474e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b474ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b474f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b474f3 not edx */
  EDX = (~(EDX));
  /* 10b474f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b474f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b474fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b47502 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47507 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b4750a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10b47511 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47514 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47517 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b4751a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b4751d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47520 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47523 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b47526 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47529 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4752c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b47530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47532 jne 0x10b47551 */
  if (!C.zf) goto L_10b47551;
  /* 10b47534 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b47537 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4753a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b4753f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47541 not edx */
  EDX = (~(EDX));
  /* 10b47543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47546 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47549 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4754b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4754e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b47551:;
  /* 10b47551 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47554 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b47557 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b4755a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b4755d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b47560 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47563 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b47566 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47569 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4756c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b4756f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47572 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47575 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10b47578:;
  /* 10b47578 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4757b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b4757e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47581 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b47584 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47588 jbe 0x10b47591 */
  if ((C.cf||C.zf)) goto L_10b47591;
  /* 10b4758a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10b47591:;
  /* 10b47591 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47594 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b47597 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47599 jne 0x10b476f5 */
  if (!C.zf) goto L_10b476f5;
  /* 10b4759f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b475a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b475a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10b475a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b475ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b475ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b475b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10b475b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b475b8 jbe 0x10b475c1 */
  if ((C.cf||C.zf)) goto L_10b475c1;
  /* 10b475ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10b475c1:;
  /* 10b475c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b475c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b475c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10b475ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b475cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b475d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b475d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b475d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b475da jbe 0x10b475e3 */
  if ((C.cf||C.zf)) goto L_10b475e3;
  /* 10b475dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10b475e3:;
  /* 10b475e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b475e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b475e9 je 0x10b476ef */
  if (C.zf) goto L_10b476ef;
  /* 10b475ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b475f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b475f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b475f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b475fb jne 0x10b476d1 */
  if (!C.zf) goto L_10b476d1;
  /* 10b47601 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47605 jae 0x10b47666 */
  if (!C.cf) goto L_10b47666;
  /* 10b47607 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b4760c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4760f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47611 not edx */
  EDX = (~(EDX));
  /* 10b47613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47616 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47619 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b4761d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4761f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47622 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47625 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b47629 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b4762c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4762f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b47632 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b47635 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47638 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4763b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b4763e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47641 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47644 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b47648 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4764a jne 0x10b47664 */
  if (!C.zf) goto L_10b47664;
  /* 10b4764c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47651 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b47654 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47656 not edx */
  EDX = (~(EDX));
  /* 10b47658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4765b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4765d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4765f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47662 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b47664:;
  /* 10b47664 jmp 0x10b476d1 */
  goto L_10b476d1;
L_10b47666:;
  /* 10b47666 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b47669 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4766c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b47671 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47673 not eax */
  EAX = (~(EAX));
  /* 10b47675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47678 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b4767b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b47682 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b47684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47687 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b4768a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10b47691 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47694 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47697 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b4769a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b4769d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b476a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b476a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b476a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b476a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b476ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b476b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b476b2 jne 0x10b476d1 */
  if (!C.zf) goto L_10b476d1;
  /* 10b476b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b476b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b476ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b476bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b476c1 not eax */
  EAX = (~(EAX));
  /* 10b476c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b476c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b476c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b476cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b476ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b476d1:;
  /* 10b476d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b476d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b476d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b476da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b476dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b476e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b476e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b476e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b476e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b476ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10b476ef:;
  /* 10b476ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b476f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10b476f5:;
  /* 10b476f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b476f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b476fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b476fd jne 0x10b4770b */
  if (!C.zf) goto L_10b4770b;
  /* 10b476ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b47702 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47705 je 0x10b4781b */
  if (C.zf) goto L_10b4781b;
L_10b4770b:;
  /* 10b4770b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4770e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47711 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10b47714 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b47717 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4771a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4771d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b47720 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b47723 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47726 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47729 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b4772c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4772f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47732 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b47735 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47738 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4773b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4773e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b47741 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47744 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47747 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4774a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4774d jne 0x10b4781b */
  if (!C.zf) goto L_10b4781b;
  /* 10b47753 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47757 jae 0x10b477b4 */
  if (!C.cf) goto L_10b477b4;
  /* 10b47759 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b4775c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4775f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b47763 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47766 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47769 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b4776c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4776f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47772 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47775 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b47778 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4777a jne 0x10b47792 */
  if (!C.zf) goto L_10b47792;
  /* 10b4777c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47781 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b47784 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47789 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4778b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4778d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47790 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b47792:;
  /* 10b47792 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b47797 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4779a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b4779c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4779f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b477a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b477a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b477a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b477ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b477ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b477b2 jmp 0x10b4781b */
  goto L_10b4781b;
L_10b477b4:;
  /* 10b477b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b477b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b477ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b477be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b477c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b477c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b477c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b477ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b477cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b477d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b477d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b477d5 jne 0x10b477f2 */
  if (!C.zf) goto L_10b477f2;
  /* 10b477d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b477da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b477dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b477e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b477e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b477e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b477ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b477ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b477ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b477f2:;
  /* 10b477f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b477f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b477f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b477fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b477ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47802 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47805 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b4780c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4780e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47811 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b47814 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10b4781b:;
  /* 10b4781b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4781e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47821 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b47823 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47826 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47829 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4782c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10b4782f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47832 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b47834 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47837 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4783a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b4783c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4783f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47842 jne 0x10b479a9 */
  if (!C.zf) goto L_10b479a9;
  /* 10b47848 cmp dword ptr [0x10b6fe00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4784f je 0x10b47998 */
  if (C.zf) goto L_10b47998;
  /* 10b47855 mov eax, dword ptr [0x10b6fdf8] */
  EAX = (r32((uint32_t)(0x10b6fdf8)));
  /* 10b4785a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10b4785d mov ecx, dword ptr [0x10b6fe00] */
  ECX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b47863 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b47866 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47868 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b4786b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b47870 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b47875 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47878 push eax */
  push32((uint32_t)(EAX));
  /* 10b47879 call dword ptr [0x10b70340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70340))), 0x10b4787fu);
  /* 10b4787f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47884 mov ecx, dword ptr [0x10b6fdf8] */
  ECX = (r32((uint32_t)(0x10b6fdf8)));
  /* 10b4788a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b4788c mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b47891 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b47894 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b47896 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b4789c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b4789f mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b478a7 mov edx, dword ptr [0x10b6fdf8] */
  EDX = (r32((uint32_t)(0x10b6fdf8)));
  /* 10b478ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10b478b8 mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b478c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10b478c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b478c6 mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b478ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10b478d1 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b478da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10b478de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b478e0 jne 0x10b478f6 */
  if (!C.zf) goto L_10b478f6;
  /* 10b478e2 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b478eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10b478ed mov ecx, dword ptr [0x10b6fe00] */
  ECX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10b478f6:;
  /* 10b478f6 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b478fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47900 jne 0x10b47998 */
  if (!C.zf) goto L_10b47998;
  /* 10b47906 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b4790b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4790d mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b47912 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b47915 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47916 call dword ptr [0x10b70340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70340))), 0x10b4791cu);
  /* 10b4791c mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b47922 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b47925 push eax */
  push32((uint32_t)(EAX));
  /* 10b47926 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47928 mov ecx, dword ptr [0x10b6fe0c] */
  ECX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b4792e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4792f call dword ptr [0x10b7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7033c))), 0x10b47935u);
  /* 10b47935 mov edx, dword ptr [0x10b6fe04] */
  EDX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b4793b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4793e mov eax, dword ptr [0x10b6fe08] */
  EAX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47943 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47945 mov ecx, dword ptr [0x10b6fe00] */
  ECX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b4794b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4794e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47950 push eax */
  push32((uint32_t)(EAX));
  /* 10b47951 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b47957 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4795a push edx */
  push32((uint32_t)(EDX));
  /* 10b4795b mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b47960 push eax */
  push32((uint32_t)(EAX));
  /* 10b47961 call 0x10b4af10 */
  push32(0x10b47966u); f_10b4af10();
  /* 10b47966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47969 mov ecx, dword ptr [0x10b6fe04] */
  ECX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b4796f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47972 mov dword ptr [0x10b6fe04], ecx */
  w32((uint32_t)(0x10b6fe04), (ECX));
  /* 10b47978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4797b cmp edx, dword ptr [0x10b6fe00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b6fe00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47981 jbe 0x10b4798c */
  if ((C.cf||C.zf)) goto L_10b4798c;
  /* 10b47983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b47986 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47989 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b4798c:;
  /* 10b4798c mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47992 mov dword ptr [0x10b6fdfc], ecx */
  w32((uint32_t)(0x10b6fdfc), (ECX));
L_10b47998:;
  /* 10b47998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4799b mov dword ptr [0x10b6fe00], edx */
  w32((uint32_t)(0x10b6fe00), (EDX));
  /* 10b479a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b479a4 mov dword ptr [0x10b6fdf8], eax */
  w32((uint32_t)(0x10b6fdf8), (EAX));
L_10b479a9:;
  /* 10b479a9 mov esp, ebp */
  ESP = (EBP);
  /* 10b479ab pop ebp */
  EBP = (pop32());
  /* 10b479ac ret  */
  ESPCHK(0x10b473e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x10b479b0 (1334 bytes, 427 insns) */
void f_10b479b0(void) {
  FTRACE(0x10b479b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b479b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b479b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b479b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b479b6 push esi */
  push32((uint32_t)(ESI));
  /* 10b479b7 mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b479bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b479bf mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b479c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b479c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b479ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b479cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b479d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10b479d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b479d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b479d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b479dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b479df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b479e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b479e6 jge 0x10b479fc */
  if ((C.sf==C.of)) goto L_10b479fc;
  /* 10b479e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b479eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b479ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b479f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b479f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10b479fa jmp 0x10b47a11 */
  goto L_10b47a11;
L_10b479fc:;
  /* 10b479fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b47a03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47a06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47a09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b47a0c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47a0e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10b47a11:;
  /* 10b47a11 mov ecx, dword ptr [0x10b6fdfc] */
  ECX = (r32((uint32_t)(0x10b6fdfc)));
  /* 10b47a17 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10b47a1a:;
  /* 10b47a1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a1d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47a20 jae 0x10b47a46 */
  if (!C.cf) goto L_10b47a46;
  /* 10b47a22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b47a28 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10b47a2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a2d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b47a30 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10b47a33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b47a35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47a37 je 0x10b47a3b */
  if (C.zf) goto L_10b47a3b;
  /* 10b47a39 jmp 0x10b47a46 */
  goto L_10b47a46;
L_10b47a3b:;
  /* 10b47a3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47a41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b47a44 jmp 0x10b47a1a */
  goto L_10b47a1a;
L_10b47a46:;
  /* 10b47a46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47a4c jne 0x10b47b2d */
  if (!C.zf) goto L_10b47b2d;
  /* 10b47a52 mov eax, dword ptr [0x10b6fe08] */
  EAX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47a57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10b47a5a:;
  /* 10b47a5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a5d cmp ecx, dword ptr [0x10b6fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47a63 jae 0x10b47a89 */
  if (!C.cf) goto L_10b47a89;
  /* 10b47a65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b47a6b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10b47a6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b47a73 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10b47a76 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b47a7a je 0x10b47a7e */
  if (C.zf) goto L_10b47a7e;
  /* 10b47a7c jmp 0x10b47a89 */
  goto L_10b47a89;
L_10b47a7e:;
  /* 10b47a7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a81 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47a84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b47a87 jmp 0x10b47a5a */
  goto L_10b47a5a;
L_10b47a89:;
  /* 10b47a89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a8c cmp ecx, dword ptr [0x10b6fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47a92 jne 0x10b47b2d */
  if (!C.zf) goto L_10b47b2d;
L_10b47a98:;
  /* 10b47a98 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47a9b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47a9e jae 0x10b47ab6 */
  if (!C.cf) goto L_10b47ab6;
  /* 10b47aa0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47aa3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47aa7 je 0x10b47aab */
  if (C.zf) goto L_10b47aab;
  /* 10b47aa9 jmp 0x10b47ab6 */
  goto L_10b47ab6;
L_10b47aab:;
  /* 10b47aab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47aae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47ab1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b47ab4 jmp 0x10b47a98 */
  goto L_10b47a98;
L_10b47ab6:;
  /* 10b47ab6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47ab9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47abc jne 0x10b47b07 */
  if (!C.zf) goto L_10b47b07;
  /* 10b47abe mov eax, dword ptr [0x10b6fe08] */
  EAX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47ac3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10b47ac6:;
  /* 10b47ac6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47ac9 cmp ecx, dword ptr [0x10b6fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47acf jae 0x10b47ae7 */
  if (!C.cf) goto L_10b47ae7;
  /* 10b47ad1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47ad4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47ad8 je 0x10b47adc */
  if (C.zf) goto L_10b47adc;
  /* 10b47ada jmp 0x10b47ae7 */
  goto L_10b47ae7;
L_10b47adc:;
  /* 10b47adc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47adf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47ae2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b47ae5 jmp 0x10b47ac6 */
  goto L_10b47ac6;
L_10b47ae7:;
  /* 10b47ae7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47aea cmp ecx, dword ptr [0x10b6fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47af0 jne 0x10b47b07 */
  if (!C.zf) goto L_10b47b07;
  /* 10b47af2 call 0x10b47ef0 */
  push32(0x10b47af7u); f_10b47ef0();
  /* 10b47af7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b47afa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47afe jne 0x10b47b07 */
  if (!C.zf) goto L_10b47b07;
  /* 10b47b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47b02 jmp 0x10b47ee1 */
  goto L_10b47ee1;
L_10b47b07:;
  /* 10b47b07 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47b0a push edx */
  push32((uint32_t)(EDX));
  /* 10b47b0b call 0x10b48000 */
  push32(0x10b47b10u); f_10b48000();
  /* 10b47b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47b13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47b16 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b47b19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b47b1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47b1e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b47b21 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47b24 jne 0x10b47b2d */
  if (!C.zf) goto L_10b47b2d;
  /* 10b47b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47b28 jmp 0x10b47ee1 */
  goto L_10b47ee1;
L_10b47b2d:;
  /* 10b47b2d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47b30 mov dword ptr [0x10b6fdfc], edx */
  w32((uint32_t)(0x10b6fdfc), (EDX));
  /* 10b47b36 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47b39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b47b3c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10b47b3f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47b42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b47b44 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10b47b47 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47b4b je 0x10b47b70 */
  if (C.zf) goto L_10b47b70;
  /* 10b47b4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47b50 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47b53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b47b56 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10b47b5a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47b5d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47b60 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10b47b63 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10b47b6a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10b47b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b47b6e jne 0x10b47ba5 */
  if (!C.zf) goto L_10b47ba5;
L_10b47b70:;
  /* 10b47b70 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10b47b77:;
  /* 10b47b77 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47b7a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47b7d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b47b80 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10b47b84 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47b87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47b8a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10b47b8d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10b47b94 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10b47b96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b47b98 jne 0x10b47ba5 */
  if (!C.zf) goto L_10b47ba5;
  /* 10b47b9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47b9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47ba0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10b47ba3 jmp 0x10b47b77 */
  goto L_10b47b77;
L_10b47ba5:;
  /* 10b47ba5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47ba8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b47bae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47bb1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b47bb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b47bbb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b47bc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47bc5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47bc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b47bcb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10b47bcf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b47bd2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47bd6 jne 0x10b47bf2 */
  if (!C.zf) goto L_10b47bf2;
  /* 10b47bd8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10b47bdf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47be2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47be5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b47be8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10b47bef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10b47bf2:;
  /* 10b47bf2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47bf6 jl 0x10b47c0b */
  if ((C.sf!=C.of)) goto L_10b47c0b;
  /* 10b47bf8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b47bfb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b47bfd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b47c00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47c03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47c06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b47c09 jmp 0x10b47bf2 */
  goto L_10b47bf2;
L_10b47c0b:;
  /* 10b47c0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47c11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10b47c15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b47c18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47c1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b47c1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47c20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b47c23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47c26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b47c29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47c2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b47c2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47c33 jle 0x10b47c3c */
  if ((C.zf||C.sf!=C.of)) goto L_10b47c3c;
  /* 10b47c35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10b47c3c:;
  /* 10b47c3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47c3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47c42 je 0x10b47e60 */
  if (C.zf) goto L_10b47e60;
  /* 10b47c48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47c4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47c4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47c51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47c54 jne 0x10b47d2a */
  if (!C.zf) goto L_10b47d2a;
  /* 10b47c5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47c5e jge 0x10b47cbf */
  if ((C.sf==C.of)) goto L_10b47cbf;
  /* 10b47c60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b47c65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47c68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47c6a not eax */
  EAX = (~(EAX));
  /* 10b47c6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47c6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47c72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b47c76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b47c78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47c7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47c7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b47c82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47c85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47c88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b47c8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b47c8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47c91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47c94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b47c97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47c9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47c9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b47ca1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b47ca3 jne 0x10b47cbd */
  if (!C.zf) goto L_10b47cbd;
  /* 10b47ca5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b47caa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47cad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47caf not eax */
  EAX = (~(EAX));
  /* 10b47cb1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47cb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b47cb6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b47cb8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47cbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b47cbd:;
  /* 10b47cbd jmp 0x10b47d2a */
  goto L_10b47d2a;
L_10b47cbf:;
  /* 10b47cbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47cc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47cc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47cca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47ccc not edx */
  EDX = (~(EDX));
  /* 10b47cce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47cd1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47cd4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b47cdb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47cdd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47ce0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47ce3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10b47cea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47ced add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47cf0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b47cf3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b47cf6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47cf9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47cfc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b47cff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47d02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47d05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b47d09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47d0b jne 0x10b47d2a */
  if (!C.zf) goto L_10b47d2a;
  /* 10b47d0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b47d10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47d13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47d18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47d1a not edx */
  EDX = (~(EDX));
  /* 10b47d1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47d1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47d22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b47d24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47d27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b47d2a:;
  /* 10b47d2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b47d30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b47d36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b47d39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b47d3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b47d45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b47d48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47d4c je 0x10b47e60 */
  if (C.zf) goto L_10b47e60;
  /* 10b47d52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47d58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10b47d5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b47d5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47d64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47d67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b47d6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47d70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b47d73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b47d76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b47d7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47d82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b47d88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47d8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b47d91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47d94 jne 0x10b47e60 */
  if (!C.zf) goto L_10b47e60;
  /* 10b47d9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47d9e jge 0x10b47dfa */
  if ((C.sf==C.of)) goto L_10b47dfa;
  /* 10b47da0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47da3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47da6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b47daa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47dad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47db0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b47db3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b47db5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47db8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47dbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b47dbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47dc0 jne 0x10b47dd8 */
  if (!C.zf) goto L_10b47dd8;
  /* 10b47dc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b47dc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47dca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47dcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47dcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b47dd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b47dd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47dd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b47dd8:;
  /* 10b47dd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47ddd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47de0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47de2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47de5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47de8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b47dec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47dee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47df1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47df4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b47df8 jmp 0x10b47e60 */
  goto L_10b47e60;
L_10b47dfa:;
  /* 10b47dfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47dfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b47e04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47e07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b47e0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b47e0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47e12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b47e18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47e1a jne 0x10b47e37 */
  if (!C.zf) goto L_10b47e37;
  /* 10b47e1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47e1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47e22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b47e27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b47e29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47e2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b47e2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b47e31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47e34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b47e37:;
  /* 10b47e37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b47e3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b47e3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b47e42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b47e44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47e47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47e4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b47e51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47e53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47e56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47e59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10b47e60:;
  /* 10b47e60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47e64 je 0x10b47e7a */
  if (C.zf) goto L_10b47e7a;
  /* 10b47e66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47e6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b47e6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47e71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b47e77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10b47e7a:;
  /* 10b47e7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47e7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b47e83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b47e86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47e8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b47e8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b47e91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47e97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47e9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10b47e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47ea0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b47ea2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47ea5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b47ea7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47eaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47ead mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b47eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b47eb1 jne 0x10b47ed3 */
  if (!C.zf) goto L_10b47ed3;
  /* 10b47eb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b47eb6 cmp eax, dword ptr [0x10b6fe00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6fe00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47ebc jne 0x10b47ed3 */
  if (!C.zf) goto L_10b47ed3;
  /* 10b47ebe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47ec1 cmp ecx, dword ptr [0x10b6fdf8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fdf8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47ec7 jne 0x10b47ed3 */
  if (!C.zf) goto L_10b47ed3;
  /* 10b47ec9 mov dword ptr [0x10b6fe00], 0 */
  w32((uint32_t)(0x10b6fe00), (0x0u));
L_10b47ed3:;
  /* 10b47ed3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b47ed6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b47ed9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b47edb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b47ede add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b47ee1:;
  /* 10b47ee1 pop esi */
  ESI = (pop32());
  /* 10b47ee2 mov esp, ebp */
  ESP = (EBP);
  /* 10b47ee4 pop ebp */
  EBP = (pop32());
  /* 10b47ee5 ret  */
  ESPCHK(0x10b479b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x10b47ef0 (271 bytes, 78 insns) */
void f_10b47ef0(void) {
  FTRACE(0x10b47ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b47ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b47ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10b47ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b47ef4 mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b47ef9 cmp eax, dword ptr [0x10b6fde8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6fde8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47eff jne 0x10b47f4b */
  if (!C.zf) goto L_10b47f4b;
  /* 10b47f01 mov ecx, dword ptr [0x10b6fde8] */
  ECX = (r32((uint32_t)(0x10b6fde8)));
  /* 10b47f07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47f0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b47f0d push ecx */
  push32((uint32_t)(ECX));
  /* 10b47f0e mov edx, dword ptr [0x10b6fe08] */
  EDX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47f14 push edx */
  push32((uint32_t)(EDX));
  /* 10b47f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47f17 mov eax, dword ptr [0x10b6fe0c] */
  EAX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b47f1c push eax */
  push32((uint32_t)(EAX));
  /* 10b47f1d call dword ptr [0x10b7035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7035c))), 0x10b47f23u);
  /* 10b47f23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b47f26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47f2a jne 0x10b47f33 */
  if (!C.zf) goto L_10b47f33;
  /* 10b47f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47f2e jmp 0x10b47ffb */
  goto L_10b47ffb;
L_10b47f33:;
  /* 10b47f33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47f36 mov dword ptr [0x10b6fe08], ecx */
  w32((uint32_t)(0x10b6fe08), (ECX));
  /* 10b47f3c mov edx, dword ptr [0x10b6fde8] */
  EDX = (r32((uint32_t)(0x10b6fde8)));
  /* 10b47f42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47f45 mov dword ptr [0x10b6fde8], edx */
  w32((uint32_t)(0x10b6fde8), (EDX));
L_10b47f4b:;
  /* 10b47f4b mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b47f50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b47f53 mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b47f59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47f5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b47f5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10b47f63 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b47f65 mov edx, dword ptr [0x10b6fe0c] */
  EDX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b47f6b push edx */
  push32((uint32_t)(EDX));
  /* 10b47f6c call dword ptr [0x10b70344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70344))), 0x10b47f72u);
  /* 10b47f72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47f75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10b47f78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47f7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47f7f jne 0x10b47f85 */
  if (!C.zf) goto L_10b47f85;
  /* 10b47f81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47f83 jmp 0x10b47ffb */
  goto L_10b47ffb;
L_10b47f85:;
  /* 10b47f85 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b47f87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10b47f8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b47f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47f93 call dword ptr [0x10b70360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70360))), 0x10b47f99u);
  /* 10b47f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47f9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10b47f9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47fa2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b47fa6 jne 0x10b47fc2 */
  if (!C.zf) goto L_10b47fc2;
  /* 10b47fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47fab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b47fae push ecx */
  push32((uint32_t)(ECX));
  /* 10b47faf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b47fb1 mov edx, dword ptr [0x10b6fe0c] */
  EDX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b47fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10b47fb8 call dword ptr [0x10b7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7033c))), 0x10b47fbeu);
  /* 10b47fbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b47fc0 jmp 0x10b47ffb */
  goto L_10b47ffb;
L_10b47fc2:;
  /* 10b47fc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47fc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b47fcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47fce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b47fd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47fd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10b47fdf mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b47fe4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b47fe7 mov dword ptr [0x10b6fe04], eax */
  w32((uint32_t)(0x10b6fe04), (EAX));
  /* 10b47fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b47fef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b47ff2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10b47ff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b47ffb:;
  /* 10b47ffb mov esp, ebp */
  ESP = (EBP);
  /* 10b47ffd pop ebp */
  EBP = (pop32());
  /* 10b47ffe ret  */
  ESPCHK(0x10b47ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x10b48000 (494 bytes, 149 insns) */
void f_10b48000(void) {
  FTRACE(0x10b48000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b48000 push ebp */
  push32((uint32_t)(EBP));
  /* 10b48001 mov ebp, esp */
  EBP = (ESP);
  /* 10b48003 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48009 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4800c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b4800f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48012 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b48015 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b48018 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10b4801f:;
  /* 10b4801f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48023 jl 0x10b48038 */
  if ((C.sf!=C.of)) goto L_10b48038;
  /* 10b48025 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b48028 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b4802a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4802d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48030 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48033 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b48036 jmp 0x10b4801f */
  goto L_10b4801f;
L_10b48038:;
  /* 10b48038 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4803b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b48041 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48044 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b4804b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b4804e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b48055 jmp 0x10b48060 */
  goto L_10b48060;
L_10b48057:;
  /* 10b48057 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4805a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4805d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10b48060:;
  /* 10b48060 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48064 jge 0x10b48086 */
  if ((C.sf==C.of)) goto L_10b48086;
  /* 10b48066 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48069 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4806c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10b4806f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b48072 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48075 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48078 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b4807b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4807e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48081 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b48084 jmp 0x10b48057 */
  goto L_10b48057;
L_10b48086:;
  /* 10b48086 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48089 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10b4808c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4808f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b48092 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48094 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b48097 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b48099 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b4809e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b480a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b480a6 push edx */
  push32((uint32_t)(EDX));
  /* 10b480a7 call dword ptr [0x10b70360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70360))), 0x10b480adu);
  /* 10b480ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b480af jne 0x10b480b9 */
  if (!C.zf) goto L_10b480b9;
  /* 10b480b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b480b4 jmp 0x10b481ea */
  goto L_10b481ea;
L_10b480b9:;
  /* 10b480b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b480bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b480c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b480c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b480c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b480ca jmp 0x10b480d8 */
  goto L_10b480d8;
L_10b480cc:;
  /* 10b480cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b480cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b480d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b480d8:;
  /* 10b480d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b480db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b480de ja 0x10b4813d */
  if ((!C.cf&&!C.zf)) goto L_10b4813d;
  /* 10b480e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b480e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10b480ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b480ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10b480f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b480fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b480fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b48100 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48103 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10b48109 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4810c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48112 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48115 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b48118 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4811b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48121 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48124 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b48127 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4812a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4812f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b48132 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48135 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10b4813b jmp 0x10b480cc */
  goto L_10b480cc;
L_10b4813d:;
  /* 10b4813d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b48140 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48146 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b48149 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4814c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4814f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48152 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b48155 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48158 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b4815b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b4815e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48161 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48164 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b48167 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4816a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4816d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48170 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b48173 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48176 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b48179 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b4817c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4817f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48182 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b48185 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48188 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4818b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10b48193 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48196 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48199 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10b481a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b481a7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10b481ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b481ae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10b481b1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b481b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b481b7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10b481ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b481bc jne 0x10b481cd */
  if (!C.zf) goto L_10b481cd;
  /* 10b481be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b481c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b481c4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b481c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b481ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b481cd:;
  /* 10b481cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b481d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b481d5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b481d7 not edx */
  EDX = (~(EDX));
  /* 10b481d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b481dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b481df and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b481e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b481e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b481e7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10b481ea:;
  /* 10b481ea mov esp, ebp */
  ESP = (EBP);
  /* 10b481ec pop ebp */
  EBP = (pop32());
  /* 10b481ed ret  */
  ESPCHK(0x10b48000u, _esp0);
  ESP += 4; return;
}

/* FUN_100081f0 @ 0x10b481f0 (1515 bytes, 489 insns) */
void f_10b481f0(void) {
  FTRACE(0x10b481f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b481f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b481f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b481f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b481f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b481f9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b481fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10b481fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b48201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48204 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b48207 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10b4820a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4820d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b48210 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48213 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b48216 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b48219 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10b4821c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4821f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48222 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b48228 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4822b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b48232 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b48235 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b48238 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4823b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b4823e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48241 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b48243 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48246 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b48249 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4824c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4824f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10b48252 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48255 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b48257 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b4825a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4825d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48260 jle 0x10b48516 */
  if ((C.zf||C.sf!=C.of)) goto L_10b48516;
  /* 10b48266 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48269 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4826c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4826e jne 0x10b4827b */
  if (!C.zf) goto L_10b4827b;
  /* 10b48270 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48273 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48276 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48279 jle 0x10b48282 */
  if ((C.zf||C.sf!=C.of)) goto L_10b48282;
L_10b4827b:;
  /* 10b4827b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4827d jmp 0x10b487d7 */
  goto L_10b487d7;
L_10b48282:;
  /* 10b48282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48285 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b48288 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4828b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4828e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48292 jbe 0x10b4829b */
  if ((C.cf||C.zf)) goto L_10b4829b;
  /* 10b48294 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10b4829b:;
  /* 10b4829b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4829e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b482a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b482a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b482a7 jne 0x10b4837d */
  if (!C.zf) goto L_10b4837d;
  /* 10b482ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b482b1 jae 0x10b48312 */
  if (!C.cf) goto L_10b48312;
  /* 10b482b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b482b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b482bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b482bd not edx */
  EDX = (~(EDX));
  /* 10b482bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b482c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b482c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b482c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b482cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b482ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b482d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b482d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b482d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b482db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b482de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b482e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b482e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b482e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b482ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b482ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b482f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b482f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b482f6 jne 0x10b48310 */
  if (!C.zf) goto L_10b48310;
  /* 10b482f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b482fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48300 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48302 not edx */
  EDX = (~(EDX));
  /* 10b48304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48307 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b48309 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4830b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4830e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b48310:;
  /* 10b48310 jmp 0x10b4837d */
  goto L_10b4837d;
L_10b48312:;
  /* 10b48312 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48315 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48318 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b4831d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b4831f not eax */
  EAX = (~(EAX));
  /* 10b48321 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48327 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b4832e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b48330 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48333 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48336 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10b4833d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48340 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48343 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b48346 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b48349 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4834c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4834f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b48352 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48355 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48358 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b4835c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4835e jne 0x10b4837d */
  if (!C.zf) goto L_10b4837d;
  /* 10b48360 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48363 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48366 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b4836b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b4836d not eax */
  EAX = (~(EAX));
  /* 10b4836f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48372 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48375 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b48377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4837a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b4837d:;
  /* 10b4837d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48380 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b48383 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48386 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b48389 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b4838c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4838f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b48392 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48395 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b48398 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10b4839b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4839e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b483a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b483a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b483a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b483ab jle 0x10b484f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b484f7;
  /* 10b483b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b483b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b483b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b483ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b483bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b483c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b483c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b483c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b483ca jbe 0x10b483d3 */
  if ((C.cf||C.zf)) goto L_10b483d3;
  /* 10b483cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10b483d3:;
  /* 10b483d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b483d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b483d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10b483dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b483df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b483e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b483e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b483e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b483eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b483ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b483f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b483f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b483f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b483fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b483fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48400 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48403 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48406 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b48409 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4840c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4840f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48412 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48415 jne 0x10b484e3 */
  if (!C.zf) goto L_10b484e3;
  /* 10b4841b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4841f jae 0x10b4847c */
  if (!C.cf) goto L_10b4847c;
  /* 10b48421 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48424 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48427 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b4842b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4842e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48431 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b48434 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b48437 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4843a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4843d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b48440 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b48442 jne 0x10b4845a */
  if (!C.zf) goto L_10b4845a;
  /* 10b48444 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b48449 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4844c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b4844e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48451 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b48453 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b48455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48458 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b4845a:;
  /* 10b4845a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b4845f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48462 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b48464 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48467 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4846a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b4846e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b48470 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48473 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48476 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b4847a jmp 0x10b484e3 */
  goto L_10b484e3;
L_10b4847c:;
  /* 10b4847c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4847f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48482 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b48486 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48489 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4848c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b4848f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b48492 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48495 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48498 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b4849b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4849d jne 0x10b484ba */
  if (!C.zf) goto L_10b484ba;
  /* 10b4849f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b484a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b484a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b484aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b484ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b484af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b484b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b484b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b484b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b484ba:;
  /* 10b484ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b484bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b484c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b484c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b484c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b484ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b484cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b484d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b484d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b484d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b484dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10b484e3:;
  /* 10b484e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b484e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b484e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b484eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b484ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b484f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b484f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10b484f7:;
  /* 10b484f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b484fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b484fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48500 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b48502 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b48505 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48508 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4850b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4850e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10b48511 jmp 0x10b487d2 */
  goto L_10b487d2;
L_10b48516:;
  /* 10b48516 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b48519 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4851c jge 0x10b487d2 */
  if ((C.sf==C.of)) goto L_10b487d2;
  /* 10b48522 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b48525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48528 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4852b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b4852d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b48530 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48533 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48536 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48539 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10b4853c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4853f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48542 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b48545 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48548 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4854b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4854e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48551 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b48554 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48557 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b4855a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4855e jbe 0x10b48567 */
  if ((C.cf||C.zf)) goto L_10b48567;
  /* 10b48560 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10b48567:;
  /* 10b48567 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4856a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4856d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4856f jne 0x10b486b0 */
  if (!C.zf) goto L_10b486b0;
  /* 10b48575 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48578 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b4857b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4857e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b48581 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48585 jbe 0x10b4858e */
  if ((C.cf||C.zf)) goto L_10b4858e;
  /* 10b48587 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10b4858e:;
  /* 10b4858e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48591 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48594 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48597 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4859a jne 0x10b48670 */
  if (!C.zf) goto L_10b48670;
  /* 10b485a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b485a4 jae 0x10b48605 */
  if (!C.cf) goto L_10b48605;
  /* 10b485a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b485ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b485ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b485b0 not edx */
  EDX = (~(EDX));
  /* 10b485b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b485b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b485b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b485bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b485be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b485c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b485c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b485c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b485cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b485ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b485d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b485d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b485d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b485da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b485dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b485e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b485e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b485e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b485e9 jne 0x10b48603 */
  if (!C.zf) goto L_10b48603;
  /* 10b485eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b485f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b485f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b485f5 not edx */
  EDX = (~(EDX));
  /* 10b485f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b485fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b485fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b485fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48601 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b48603:;
  /* 10b48603 jmp 0x10b48670 */
  goto L_10b48670;
L_10b48605:;
  /* 10b48605 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48608 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4860b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b48610 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b48612 not eax */
  EAX = (~(EAX));
  /* 10b48614 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48617 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4861a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b48621 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b48623 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48626 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48629 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10b48630 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48633 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48636 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b48639 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b4863c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4863f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48642 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b48645 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48648 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4864b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b4864f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b48651 jne 0x10b48670 */
  if (!C.zf) goto L_10b48670;
  /* 10b48653 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b48656 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48659 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b4865e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b48660 not eax */
  EAX = (~(EAX));
  /* 10b48662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48665 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48668 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4866a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4866d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b48670:;
  /* 10b48670 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48673 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b48676 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48679 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b4867c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b4867f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48682 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b48685 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48688 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b4868b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10b4868e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b48691 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48694 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b48697 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4869a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b4869d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b486a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b486a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b486a7 jbe 0x10b486b0 */
  if ((C.cf||C.zf)) goto L_10b486b0;
  /* 10b486a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10b486b0:;
  /* 10b486b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b486b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b486b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10b486b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b486bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b486c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b486c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b486c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b486ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b486d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b486d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b486da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b486e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b486e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b486ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b486ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b486f2 jne 0x10b487be */
  if (!C.zf) goto L_10b487be;
  /* 10b486f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b486fc jae 0x10b48758 */
  if (!C.cf) goto L_10b48758;
  /* 10b486fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48701 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48704 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b48708 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4870b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4870e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b48711 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b48713 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48716 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48719 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b4871c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4871e jne 0x10b48736 */
  if (!C.zf) goto L_10b48736;
  /* 10b48720 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b48725 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b4872a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4872d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4872f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b48731 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48734 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b48736:;
  /* 10b48736 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b4873b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4873e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48740 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48743 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48746 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b4874a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4874c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4874f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48752 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b48756 jmp 0x10b487be */
  goto L_10b487be;
L_10b48758:;
  /* 10b48758 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4875b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4875e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b48762 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48765 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48768 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b4876b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4876d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b48770 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48773 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b48776 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b48778 jne 0x10b48795 */
  if (!C.zf) goto L_10b48795;
  /* 10b4877a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4877d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48780 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b48785 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b48787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4878a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4878d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4878f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48792 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b48795:;
  /* 10b48795 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48798 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4879b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b487a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b487a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b487a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b487a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b487af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b487b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b487b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b487b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10b487be:;
  /* 10b487be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b487c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b487c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b487c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b487c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b487cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b487cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10b487d2:;
  /* 10b487d2 mov eax, 1 */
  EAX = (0x1u);
L_10b487d7:;
  /* 10b487d7 mov esp, ebp */
  ESP = (EBP);
  /* 10b487d9 pop ebp */
  EBP = (pop32());
  /* 10b487da ret  */
  ESPCHK(0x10b481f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087e0 @ 0x10b487e0 (304 bytes, 79 insns) */
void f_10b487e0(void) {
  FTRACE(0x10b487e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b487e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b487e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b487e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b487e4 cmp dword ptr [0x10b6fe00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b487eb je 0x10b4890c */
  if (C.zf) goto L_10b4890c;
  /* 10b487f1 mov eax, dword ptr [0x10b6fdf8] */
  EAX = (r32((uint32_t)(0x10b6fdf8)));
  /* 10b487f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10b487f9 mov ecx, dword ptr [0x10b6fe00] */
  ECX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b487ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b48802 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48804 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b48807 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b4880c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b48811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48814 push eax */
  push32((uint32_t)(EAX));
  /* 10b48815 call dword ptr [0x10b70340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70340))), 0x10b4881bu);
  /* 10b4881b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b48820 mov ecx, dword ptr [0x10b6fdf8] */
  ECX = (r32((uint32_t)(0x10b6fdf8)));
  /* 10b48826 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48828 mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b4882d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b48830 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b48832 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48838 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b4883b mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48840 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b48843 mov edx, dword ptr [0x10b6fdf8] */
  EDX = (r32((uint32_t)(0x10b6fdf8)));
  /* 10b48849 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10b48854 mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48859 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4885c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10b4885f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b48862 mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48867 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4886a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10b4886d mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48873 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b48876 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10b4887a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4887c jne 0x10b48892 */
  if (!C.zf) goto L_10b48892;
  /* 10b4887e mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48884 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b48887 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10b48889 mov ecx, dword ptr [0x10b6fe00] */
  ECX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b4888f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10b48892:;
  /* 10b48892 mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b48898 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4889c jne 0x10b48902 */
  if (!C.zf) goto L_10b48902;
  /* 10b4889e cmp dword ptr [0x10b6fe04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fe04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b488a5 jle 0x10b48902 */
  if ((C.zf||C.sf!=C.of)) goto L_10b48902;
  /* 10b488a7 mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b488ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b488af push ecx */
  push32((uint32_t)(ECX));
  /* 10b488b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b488b2 mov edx, dword ptr [0x10b6fe0c] */
  EDX = (r32((uint32_t)(0x10b6fe0c)));
  /* 10b488b8 push edx */
  push32((uint32_t)(EDX));
  /* 10b488b9 call dword ptr [0x10b7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7033c))), 0x10b488bfu);
  /* 10b488bf mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b488c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b488c7 mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b488cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b488cf mov edx, dword ptr [0x10b6fe00] */
  EDX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b488d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b488d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b488da push ecx */
  push32((uint32_t)(ECX));
  /* 10b488db mov eax, dword ptr [0x10b6fe00] */
  EAX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b488e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b488e3 push eax */
  push32((uint32_t)(EAX));
  /* 10b488e4 mov ecx, dword ptr [0x10b6fe00] */
  ECX = (r32((uint32_t)(0x10b6fe00)));
  /* 10b488ea push ecx */
  push32((uint32_t)(ECX));
  /* 10b488eb call 0x10b4af10 */
  push32(0x10b488f0u); f_10b4af10();
  /* 10b488f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b488f3 mov edx, dword ptr [0x10b6fe04] */
  EDX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b488f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b488fc mov dword ptr [0x10b6fe04], edx */
  w32((uint32_t)(0x10b6fe04), (EDX));
L_10b48902:;
  /* 10b48902 mov dword ptr [0x10b6fe00], 0 */
  w32((uint32_t)(0x10b6fe00), (0x0u));
L_10b4890c:;
  /* 10b4890c mov esp, ebp */
  ESP = (EBP);
  /* 10b4890e pop ebp */
  EBP = (pop32());
  /* 10b4890f ret  */
  ESPCHK(0x10b487e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008910 @ 0x10b48910 (1565 bytes, 343 insns) */
void f_10b48910(void) {
  FTRACE(0x10b48910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b48910 push ebp */
  push32((uint32_t)(EBP));
  /* 10b48911 mov ebp, esp */
  EBP = (ESP);
  /* 10b48913 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48919 mov eax, dword ptr [0x10b6fe04] */
  EAX = (r32((uint32_t)(0x10b6fe04)));
  /* 10b4891e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b48921 push eax */
  push32((uint32_t)(EAX));
  /* 10b48922 mov ecx, dword ptr [0x10b6fe08] */
  ECX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b48928 push ecx */
  push32((uint32_t)(ECX));
  /* 10b48929 call dword ptr [0x10b70314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70314))), 0x10b4892fu);
  /* 10b4892f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b48931 je 0x10b4893b */
  if (C.zf) goto L_10b4893b;
  /* 10b48933 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b48936 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b4893b:;
  /* 10b4893b mov edx, dword ptr [0x10b6fe08] */
  EDX = (r32((uint32_t)(0x10b6fe08)));
  /* 10b48941 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10b48947 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10b48951 jmp 0x10b48962 */
  goto L_10b48962;
L_10b48953:;
  /* 10b48953 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10b48959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4895c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10b48962:;
  /* 10b48962 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10b48968 cmp ecx, dword ptr [0x10b6fe04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fe04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4896e jge 0x10b48f27 */
  if ((C.sf==C.of)) goto L_10b48f27;
  /* 10b48974 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b4897a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b4897d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10b48983 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10b48988 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b4898e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4898f call dword ptr [0x10b70314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70314))), 0x10b48995u);
  /* 10b48995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b48997 je 0x10b489a3 */
  if (C.zf) goto L_10b489a3;
  /* 10b48999 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10b4899e jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b489a3:;
  /* 10b489a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b489a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b489ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10b489b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b489b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b489be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b489c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b489c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b489ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b489cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10b489d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10b489e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b489e8 jmp 0x10b489f3 */
  goto L_10b489f3;
L_10b489ea:;
  /* 10b489ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b489ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b489f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b489f3:;
  /* 10b489f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b489f7 jge 0x10b48eeb */
  if ((C.sf==C.of)) goto L_10b48eeb;
  /* 10b489fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10b48a07 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10b48a11 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10b48a1b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10b48a25 jmp 0x10b48a36 */
  goto L_10b48a36;
L_10b48a27:;
  /* 10b48a27 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b48a2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48a30 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10b48a36:;
  /* 10b48a36 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48a3d jge 0x10b48a52 */
  if ((C.sf==C.of)) goto L_10b48a52;
  /* 10b48a3f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b48a45 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10b48a50 jmp 0x10b48a27 */
  goto L_10b48a27;
L_10b48a52:;
  /* 10b48a52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48a56 jl 0x10b48e8d */
  if ((C.sf!=C.of)) goto L_10b48e8d;
  /* 10b48a5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b48a61 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b48a67 push ecx */
  push32((uint32_t)(ECX));
  /* 10b48a68 call dword ptr [0x10b70314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70314))), 0x10b48a6eu);
  /* 10b48a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b48a70 je 0x10b48a7c */
  if (C.zf) goto L_10b48a7c;
  /* 10b48a72 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10b48a77 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48a7c:;
  /* 10b48a7c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b48a82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b48a85 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10b48a8f jmp 0x10b48aa0 */
  goto L_10b48aa0;
L_10b48a91:;
  /* 10b48a91 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10b48a97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48a9a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10b48aa0:;
  /* 10b48aa0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48aa7 jge 0x10b48c24 */
  if ((C.sf==C.of)) goto L_10b48c24;
  /* 10b48aad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b48ab0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48ab3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10b48ab9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48abf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48ac5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10b48acb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48ad1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48ad5 jne 0x10b48ae2 */
  if (!C.zf) goto L_10b48ae2;
  /* 10b48ad7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10b48add cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48ae0 je 0x10b48aec */
  if (C.zf) goto L_10b48aec;
L_10b48ae2:;
  /* 10b48ae2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10b48ae7 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48aec:;
  /* 10b48aec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48af2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b48af4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10b48afa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b48b00 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10b48b06 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10b48b0c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b48b0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b48b11 je 0x10b48b49 */
  if (C.zf) goto L_10b48b49;
  /* 10b48b13 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b48b19 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48b1c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10b48b22 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48b2c jle 0x10b48b38 */
  if ((C.zf||C.sf!=C.of)) goto L_10b48b38;
  /* 10b48b2e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10b48b33 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48b38:;
  /* 10b48b38 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10b48b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48b41 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10b48b47 jmp 0x10b48b8b */
  goto L_10b48b8b;
L_10b48b49:;
  /* 10b48b49 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b48b4f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b48b52 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48b55 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10b48b5b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48b62 jle 0x10b48b6e */
  if ((C.zf||C.sf!=C.of)) goto L_10b48b6e;
  /* 10b48b64 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10b48b6e:;
  /* 10b48b6e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b48b74 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10b48b7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48b7e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b48b84 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10b48b8b:;
  /* 10b48b8b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48b92 jl 0x10b48bad */
  if ((C.sf!=C.of)) goto L_10b48bad;
  /* 10b48b94 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b48b9a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10b48b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b48b9f jne 0x10b48bad */
  if (!C.zf) goto L_10b48bad;
  /* 10b48ba1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48bab jle 0x10b48bb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b48bb7;
L_10b48bad:;
  /* 10b48bad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10b48bb2 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48bb7:;
  /* 10b48bb7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48bbd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48bc3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b48bc6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48bcc je 0x10b48bd8 */
  if (C.zf) goto L_10b48bd8;
  /* 10b48bce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10b48bd3 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48bd8:;
  /* 10b48bd8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48bde add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48be4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10b48bea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48bf0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48bf6 jb 0x10b48aec */
  if (C.cf) goto L_10b48aec;
  /* 10b48bfc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48c02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48c08 je 0x10b48c14 */
  if (C.zf) goto L_10b48c14;
  /* 10b48c0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10b48c0f jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48c14:;
  /* 10b48c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b48c17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48c1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b48c1f jmp 0x10b48a91 */
  goto L_10b48a91;
L_10b48c24:;
  /* 10b48c24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48c27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b48c29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48c2f je 0x10b48c3b */
  if (C.zf) goto L_10b48c3b;
  /* 10b48c31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10b48c36 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48c3b:;
  /* 10b48c3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48c3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10b48c44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10b48c4b jmp 0x10b48c56 */
  goto L_10b48c56;
L_10b48c4d:;
  /* 10b48c4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48c50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48c53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b48c56:;
  /* 10b48c56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48c5a jge 0x10b48e8d */
  if ((C.sf==C.of)) goto L_10b48e8d;
  /* 10b48c60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10b48c6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10b48c70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10b48c76:;
  /* 10b48c76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48c7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b48c7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10b48c85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b48c8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48c91 je 0x10b48dba */
  if (C.zf) goto L_10b48dba;
  /* 10b48c97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48c9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10b48ca0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48ca7 je 0x10b48dba */
  if (C.zf) goto L_10b48dba;
  /* 10b48cad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b48cb3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48cb9 jb 0x10b48cce */
  if (C.cf) goto L_10b48cce;
  /* 10b48cbb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b48cc1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48cc6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48ccc jb 0x10b48cd8 */
  if (C.cf) goto L_10b48cd8;
L_10b48cce:;
  /* 10b48cce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10b48cd3 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48cd8:;
  /* 10b48cd8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b48cde and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b48ce4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10b48cea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10b48cf0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48cf3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b48cf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48cf9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48cfe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10b48d04:;
  /* 10b48d04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48d07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48d0d je 0x10b48d2e */
  if (C.zf) goto L_10b48d2e;
  /* 10b48d0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48d12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48d18 jne 0x10b48d1c */
  if (!C.zf) goto L_10b48d1c;
  /* 10b48d1a jmp 0x10b48d2e */
  goto L_10b48d2e;
L_10b48d1c:;
  /* 10b48d1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48d1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b48d21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10b48d24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48d27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48d29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b48d2c jmp 0x10b48d04 */
  goto L_10b48d04;
L_10b48d2e:;
  /* 10b48d2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b48d31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48d37 jne 0x10b48d43 */
  if (!C.zf) goto L_10b48d43;
  /* 10b48d39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10b48d3e jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48d43:;
  /* 10b48d43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b48d49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b48d4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b48d4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48d51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10b48d57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48d5e jle 0x10b48d6a */
  if ((C.zf||C.sf!=C.of)) goto L_10b48d6a;
  /* 10b48d60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10b48d6a:;
  /* 10b48d6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b48d70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48d73 je 0x10b48d7f */
  if (C.zf) goto L_10b48d7f;
  /* 10b48d75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10b48d7a jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48d7f:;
  /* 10b48d7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b48d85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b48d88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48d8e je 0x10b48d9a */
  if (C.zf) goto L_10b48d9a;
  /* 10b48d90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10b48d95 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48d9a:;
  /* 10b48d9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b48da0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10b48da6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10b48dac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48daf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10b48db5 jmp 0x10b48c76 */
  goto L_10b48c76;
L_10b48dba:;
  /* 10b48dba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48dc1 je 0x10b48e31 */
  if (C.zf) goto L_10b48e31;
  /* 10b48dc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48dc7 jge 0x10b48dfb */
  if ((C.sf==C.of)) goto L_10b48dfb;
  /* 10b48dc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b48dce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48dd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48dd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10b48dd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b48ddb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10b48de1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b48de6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48de9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48deb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10b48df1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b48df3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10b48df9 jmp 0x10b48e31 */
  goto L_10b48e31;
L_10b48dfb:;
  /* 10b48dfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48dfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48e01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b48e06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48e08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10b48e0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b48e10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10b48e16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48e19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48e1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b48e21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b48e23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10b48e29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b48e2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10b48e31:;
  /* 10b48e31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b48e37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48e3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48e40 jne 0x10b48e54 */
  if (!C.zf) goto L_10b48e54;
  /* 10b48e42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b48e45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10b48e4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48e52 je 0x10b48e5e */
  if (C.zf) goto L_10b48e5e;
L_10b48e54:;
  /* 10b48e54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10b48e59 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48e5e:;
  /* 10b48e5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10b48e64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b48e67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48e6d je 0x10b48e79 */
  if (C.zf) goto L_10b48e79;
  /* 10b48e6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10b48e74 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48e79:;
  /* 10b48e79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10b48e7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48e82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10b48e88 jmp 0x10b48c4d */
  goto L_10b48c4d;
L_10b48e8d:;
  /* 10b48e8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b48e90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b48e96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10b48e9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48ea0 jne 0x10b48eba */
  if (!C.zf) goto L_10b48eba;
  /* 10b48ea2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b48ea5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b48eab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10b48eb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48eb8 je 0x10b48ec1 */
  if (C.zf) goto L_10b48ec1;
L_10b48eba:;
  /* 10b48eba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10b48ebf jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48ec1:;
  /* 10b48ec1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b48ec7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48ecd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10b48ed3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b48ed6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48edb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b48ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b48ee1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b48ee3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b48ee6 jmp 0x10b489ea */
  goto L_10b489ea;
L_10b48eeb:;
  /* 10b48eeb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b48ef1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10b48ef7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48ef9 jne 0x10b48f0c */
  if (!C.zf) goto L_10b48f0c;
  /* 10b48efb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b48f01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10b48f07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48f0a je 0x10b48f13 */
  if (C.zf) goto L_10b48f13;
L_10b48f0c:;
  /* 10b48f0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10b48f11 jmp 0x10b48f29 */
  goto L_10b48f29;
L_10b48f13:;
  /* 10b48f13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b48f19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48f1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10b48f22 jmp 0x10b48953 */
  goto L_10b48953;
L_10b48f27:;
  /* 10b48f27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b48f29:;
  /* 10b48f29 mov esp, ebp */
  ESP = (EBP);
  /* 10b48f2b pop ebp */
  EBP = (pop32());
  /* 10b48f2c ret  */
  ESPCHK(0x10b48910u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f30 @ 0x10b48f30 (250 bytes, 92 insns) */
void f_10b48f30(void) {
  FTRACE(0x10b48f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b48f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b48f31 mov ebp, esp */
  EBP = (ESP);
  /* 10b48f33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48f36 push ebx */
  push32((uint32_t)(EBX));
  /* 10b48f37 push esi */
  push32((uint32_t)(ESI));
  /* 10b48f38 push edi */
  push32((uint32_t)(EDI));
  /* 10b48f39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10b48f3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b48f3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b48f42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10b48f45:;
  /* 10b48f45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48f49 jne 0x10b48f69 */
  if (!C.zf) goto L_10b48f69;
  /* 10b48f4b push 0x10b69e84 */
  push32((uint32_t)(0x10b69e84u));
  /* 10b48f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b48f52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10b48f54 push 0x10b69e78 */
  push32((uint32_t)(0x10b69e78u));
  /* 10b48f59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b48f5b call 0x10b420e0 */
  push32(0x10b48f60u); f_10b420e0();
  /* 10b48f60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48f63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48f66 jne 0x10b48f69 */
  if (!C.zf) goto L_10b48f69;
  /* 10b48f68 int3  */
  x86_unimpl("int3 @ 0x10b48f68");
L_10b48f69:;
  /* 10b48f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b48f6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b48f6d jne 0x10b48f45 */
  if (!C.zf) goto L_10b48f45;
L_10b48f6f:;
  /* 10b48f6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48f73 jne 0x10b48f93 */
  if (!C.zf) goto L_10b48f93;
  /* 10b48f75 push 0x10b69e68 */
  push32((uint32_t)(0x10b69e68u));
  /* 10b48f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b48f7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10b48f7e push 0x10b69e78 */
  push32((uint32_t)(0x10b69e78u));
  /* 10b48f83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b48f85 call 0x10b420e0 */
  push32(0x10b48f8au); f_10b420e0();
  /* 10b48f8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48f8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48f90 jne 0x10b48f93 */
  if (!C.zf) goto L_10b48f93;
  /* 10b48f92 int3  */
  x86_unimpl("int3 @ 0x10b48f92");
L_10b48f93:;
  /* 10b48f93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b48f95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b48f97 jne 0x10b48f6f */
  if (!C.zf) goto L_10b48f6f;
  /* 10b48f99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48f9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10b48fa3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48fa9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b48fac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48faf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b48fb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b48fb4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48fb7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10b48fbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b48fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b48fc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b48fc5 push edx */
  push32((uint32_t)(EDX));
  /* 10b48fc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10b48fca call 0x10b49fb0 */
  push32(0x10b48fcfu); f_10b49fb0();
  /* 10b48fcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b48fd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b48fd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48fd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b48fdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b48fde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48fe1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b48fe4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48fe7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b48feb jl 0x10b4900f */
  if ((C.sf!=C.of)) goto L_10b4900f;
  /* 10b48fed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b48ff0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b48ff2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b48ff5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b48ff7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b48ffd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10b49000 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49003 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b49005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49008 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4900b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b4900d jmp 0x10b49020 */
  goto L_10b49020;
L_10b4900f:;
  /* 10b4900f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49012 push edx */
  push32((uint32_t)(EDX));
  /* 10b49013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b49015 call 0x10b49d30 */
  push32(0x10b4901au); f_10b49d30();
  /* 10b4901a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4901d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10b49020:;
  /* 10b49020 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b49023 pop edi */
  EDI = (pop32());
  /* 10b49024 pop esi */
  ESI = (pop32());
  /* 10b49025 pop ebx */
  EBX = (pop32());
  /* 10b49026 mov esp, ebp */
  ESP = (EBP);
  /* 10b49028 pop ebp */
  EBP = (pop32());
  /* 10b49029 ret  */
  ESPCHK(0x10b48f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009030 @ 0x10b49030 (183 bytes, 58 insns) */
void f_10b49030(void) {
  FTRACE(0x10b49030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49030 push ebp */
  push32((uint32_t)(EBP));
  /* 10b49031 mov ebp, esp */
  EBP = (ESP);
  /* 10b49033 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49039 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4903c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49041 ja 0x10b4905a */
  if ((!C.cf&&!C.zf)) goto L_10b4905a;
  /* 10b49043 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49046 mov edx, dword ptr [0x10b6cc98] */
  EDX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b4904c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4904e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10b49052 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10b49055 jmp 0x10b490e3 */
  goto L_10b490e3;
L_10b4905a:;
  /* 10b4905a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4905d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10b49060 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b49066 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4906c mov edx, dword ptr [0x10b6cc98] */
  EDX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b49072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49074 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10b49078 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4907d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4907f je 0x10b490a3 */
  if (C.zf) goto L_10b490a3;
  /* 10b49081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49084 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10b49087 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4908d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10b49090 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b49093 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10b49096 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10b4909a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10b490a1 jmp 0x10b490b4 */
  goto L_10b490b4;
L_10b490a3:;
  /* 10b490a3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b490a6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10b490a9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10b490ad mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10b490b4:;
  /* 10b490b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b490b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b490b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b490ba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10b490bd push ecx */
  push32((uint32_t)(ECX));
  /* 10b490be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b490c1 push edx */
  push32((uint32_t)(EDX));
  /* 10b490c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10b490c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b490c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b490c8 call 0x10b4b250 */
  push32(0x10b490cdu); f_10b4b250();
  /* 10b490cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b490d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b490d2 jne 0x10b490d8 */
  if (!C.zf) goto L_10b490d8;
  /* 10b490d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b490d6 jmp 0x10b490e3 */
  goto L_10b490e3;
L_10b490d8:;
  /* 10b490d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b490db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b490e0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10b490e3:;
  /* 10b490e3 mov esp, ebp */
  ESP = (EBP);
  /* 10b490e5 pop ebp */
  EBP = (pop32());
  /* 10b490e6 ret  */
  ESPCHK(0x10b49030u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x10b490f0 (836 bytes, 238 insns) */
void f_10b490f0(void) {
  FTRACE(0x10b490f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b490f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b490f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b490f3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b490f6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b490f8 call 0x10b46a20 */
  push32(0x10b490fdu); f_10b46a20();
  /* 10b490fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49103 push eax */
  push32((uint32_t)(EAX));
  /* 10b49104 call 0x10b49440 */
  push32(0x10b49109u); f_10b49440();
  /* 10b49109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4910c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b4910f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49112 cmp ecx, dword ptr [0x10b6fb44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fb44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49118 jne 0x10b4912b */
  if (!C.zf) goto L_10b4912b;
  /* 10b4911a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b4911c call 0x10b46ac0 */
  push32(0x10b49121u); f_10b46ac0();
  /* 10b49121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49126 jmp 0x10b49430 */
  goto L_10b49430;
L_10b4912b:;
  /* 10b4912b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4912f jne 0x10b4914c */
  if (!C.zf) goto L_10b4914c;
  /* 10b49131 call 0x10b49520 */
  push32(0x10b49136u); f_10b49520();
  /* 10b49136 call 0x10b495a0 */
  push32(0x10b4913bu); f_10b495a0();
  /* 10b4913b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b4913d call 0x10b46ac0 */
  push32(0x10b49142u); f_10b46ac0();
  /* 10b49142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49147 jmp 0x10b49430 */
  goto L_10b49430;
L_10b4914c:;
  /* 10b4914c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b49153 jmp 0x10b4915e */
  goto L_10b4915e;
L_10b49155:;
  /* 10b49155 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49158 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4915b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4915e:;
  /* 10b4915e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49162 jae 0x10b492af */
  if (!C.cf) goto L_10b492af;
  /* 10b49168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4916b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4916e mov ecx, dword ptr [eax + 0x10b6ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10b6ceb8)));
  /* 10b49174 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49177 jne 0x10b492aa */
  if (!C.zf) goto L_10b492aa;
  /* 10b4917d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b49184 jmp 0x10b4918f */
  goto L_10b4918f;
L_10b49186:;
  /* 10b49186 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49189 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4918c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10b4918f:;
  /* 10b4918f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49196 jae 0x10b491a4 */
  if (!C.cf) goto L_10b491a4;
  /* 10b49198 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4919b mov byte ptr [eax + 0x10b6fce0], 0 */
  w8((uint32_t)(EAX + 0x10b6fce0), (0x0u));
  /* 10b491a2 jmp 0x10b49186 */
  goto L_10b49186;
L_10b491a4:;
  /* 10b491a4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b491ab jmp 0x10b491b6 */
  goto L_10b491b6;
L_10b491ad:;
  /* 10b491ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b491b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b491b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b491b6:;
  /* 10b491b6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b491ba jae 0x10b49237 */
  if (!C.cf) goto L_10b49237;
  /* 10b491bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b491bf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b491c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b491c5 lea ecx, [edx + eax*8 + 0x10b6cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10b6cec8));
  /* 10b491cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b491cf jmp 0x10b491da */
  goto L_10b491da;
L_10b491d1:;
  /* 10b491d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b491d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b491d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b491da:;
  /* 10b491da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b491dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b491df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b491e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b491e3 je 0x10b49232 */
  if (C.zf) goto L_10b49232;
  /* 10b491e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b491e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b491ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b491ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b491ef je 0x10b49232 */
  if (C.zf) goto L_10b49232;
  /* 10b491f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b491f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b491f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b491f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b491fb jmp 0x10b49206 */
  goto L_10b49206;
L_10b491fd:;
  /* 10b491fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49203 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b49206:;
  /* 10b49206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4920b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b4920e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49211 ja 0x10b49230 */
  if ((!C.cf&&!C.zf)) goto L_10b49230;
  /* 10b49213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b49219 mov dl, byte ptr [eax + 0x10b6fce1] */
  DL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b4921f or dl, byte ptr [ecx + 0x10b6ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10b6ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10b49225 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49228 mov byte ptr [eax + 0x10b6fce1], dl */
  w8((uint32_t)(EAX + 0x10b6fce1), (DL));
  /* 10b4922e jmp 0x10b491fd */
  goto L_10b491fd;
L_10b49230:;
  /* 10b49230 jmp 0x10b491d1 */
  goto L_10b491d1;
L_10b49232:;
  /* 10b49232 jmp 0x10b491ad */
  goto L_10b491ad;
L_10b49237:;
  /* 10b49237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4923a mov dword ptr [0x10b6fb44], ecx */
  w32((uint32_t)(0x10b6fb44), (ECX));
  /* 10b49240 mov dword ptr [0x10b6fbcc], 1 */
  w32((uint32_t)(0x10b6fbcc), (0x1u));
  /* 10b4924a mov edx, dword ptr [0x10b6fb44] */
  EDX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b49250 push edx */
  push32((uint32_t)(EDX));
  /* 10b49251 call 0x10b494a0 */
  push32(0x10b49256u); f_10b494a0();
  /* 10b49256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49259 mov dword ptr [0x10b6fde4], eax */
  w32((uint32_t)(0x10b6fde4), (EAX));
  /* 10b4925e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b49265 jmp 0x10b49270 */
  goto L_10b49270;
L_10b49267:;
  /* 10b49267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4926a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4926d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b49270:;
  /* 10b49270 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49274 jae 0x10b49294 */
  if (!C.cf) goto L_10b49294;
  /* 10b49276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49279 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4927c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4927f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b49282 mov cx, word ptr [ecx + eax*2 + 0x10b6cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10b6cebc)));
  /* 10b4928a mov word ptr [edx*2 + 0x10b6fbc0], cx */
  w16((uint32_t)(EDX*2 + 0x10b6fbc0), (CX));
  /* 10b49292 jmp 0x10b49267 */
  goto L_10b49267;
L_10b49294:;
  /* 10b49294 call 0x10b495a0 */
  push32(0x10b49299u); f_10b495a0();
  /* 10b49299 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b4929b call 0x10b46ac0 */
  push32(0x10b492a0u); f_10b46ac0();
  /* 10b492a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b492a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b492a5 jmp 0x10b49430 */
  goto L_10b49430;
L_10b492aa:;
  /* 10b492aa jmp 0x10b49155 */
  goto L_10b49155;
L_10b492af:;
  /* 10b492af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10b492b2 push edx */
  push32((uint32_t)(EDX));
  /* 10b492b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b492b6 push eax */
  push32((uint32_t)(EAX));
  /* 10b492b7 call dword ptr [0x10b70364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70364))), 0x10b492bdu);
  /* 10b492bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b492c0 jne 0x10b49402 */
  if (!C.zf) goto L_10b49402;
  /* 10b492c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b492cd jmp 0x10b492d8 */
  goto L_10b492d8;
L_10b492cf:;
  /* 10b492cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b492d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b492d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10b492d8:;
  /* 10b492d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b492df jae 0x10b492ed */
  if (!C.cf) goto L_10b492ed;
  /* 10b492e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b492e4 mov byte ptr [edx + 0x10b6fce0], 0 */
  w8((uint32_t)(EDX + 0x10b6fce0), (0x0u));
  /* 10b492eb jmp 0x10b492cf */
  goto L_10b492cf;
L_10b492ed:;
  /* 10b492ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b492f0 mov dword ptr [0x10b6fb44], eax */
  w32((uint32_t)(0x10b6fb44), (EAX));
  /* 10b492f5 mov dword ptr [0x10b6fde4], 0 */
  w32((uint32_t)(0x10b6fde4), (0x0u));
  /* 10b492ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49303 jbe 0x10b493be */
  if ((C.cf||C.zf)) goto L_10b493be;
  /* 10b49309 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10b4930c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10b4930f jmp 0x10b4931a */
  goto L_10b4931a;
L_10b49311:;
  /* 10b49311 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b49314 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49317 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10b4931a:;
  /* 10b4931a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4931d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4931f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b49321 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b49323 je 0x10b4936c */
  if (C.zf) goto L_10b4936c;
  /* 10b49325 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b49328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4932a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b4932d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4932f je 0x10b4936c */
  if (C.zf) goto L_10b4936c;
  /* 10b49331 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b49334 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49336 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b49338 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b4933b jmp 0x10b49346 */
  goto L_10b49346;
L_10b4933d:;
  /* 10b4933d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49340 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49343 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b49346:;
  /* 10b49346 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b49349 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4934b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b4934e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49351 ja 0x10b4936a */
  if ((!C.cf&&!C.zf)) goto L_10b4936a;
  /* 10b49353 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49356 mov cl, byte ptr [eax + 0x10b6fce1] */
  CL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b4935c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10b4935f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49362 mov byte ptr [edx + 0x10b6fce1], cl */
  w8((uint32_t)(EDX + 0x10b6fce1), (CL));
  /* 10b49368 jmp 0x10b4933d */
  goto L_10b4933d;
L_10b4936a:;
  /* 10b4936a jmp 0x10b49311 */
  goto L_10b49311;
L_10b4936c:;
  /* 10b4936c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10b49373 jmp 0x10b4937e */
  goto L_10b4937e;
L_10b49375:;
  /* 10b49375 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49378 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4937b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b4937e:;
  /* 10b4937e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49385 jae 0x10b4939e */
  if (!C.cf) goto L_10b4939e;
  /* 10b49387 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4938a mov dl, byte ptr [ecx + 0x10b6fce1] */
  DL = (r8((uint32_t)(ECX + 0x10b6fce1)));
  /* 10b49390 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10b49393 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b49396 mov byte ptr [eax + 0x10b6fce1], dl */
  w8((uint32_t)(EAX + 0x10b6fce1), (DL));
  /* 10b4939c jmp 0x10b49375 */
  goto L_10b49375;
L_10b4939e:;
  /* 10b4939e mov ecx, dword ptr [0x10b6fb44] */
  ECX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b493a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b493a5 call 0x10b494a0 */
  push32(0x10b493aau); f_10b494a0();
  /* 10b493aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b493ad mov dword ptr [0x10b6fde4], eax */
  w32((uint32_t)(0x10b6fde4), (EAX));
  /* 10b493b2 mov dword ptr [0x10b6fbcc], 1 */
  w32((uint32_t)(0x10b6fbcc), (0x1u));
  /* 10b493bc jmp 0x10b493c8 */
  goto L_10b493c8;
L_10b493be:;
  /* 10b493be mov dword ptr [0x10b6fbcc], 0 */
  w32((uint32_t)(0x10b6fbcc), (0x0u));
L_10b493c8:;
  /* 10b493c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b493cf jmp 0x10b493da */
  goto L_10b493da;
L_10b493d1:;
  /* 10b493d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b493d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b493d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b493da:;
  /* 10b493da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b493de jae 0x10b493ef */
  if (!C.cf) goto L_10b493ef;
  /* 10b493e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b493e3 mov word ptr [eax*2 + 0x10b6fbc0], 0 */
  w16((uint32_t)(EAX*2 + 0x10b6fbc0), (0x0u));
  /* 10b493ed jmp 0x10b493d1 */
  goto L_10b493d1;
L_10b493ef:;
  /* 10b493ef call 0x10b495a0 */
  push32(0x10b493f4u); f_10b495a0();
  /* 10b493f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b493f6 call 0x10b46ac0 */
  push32(0x10b493fbu); f_10b46ac0();
  /* 10b493fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b493fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49400 jmp 0x10b49430 */
  goto L_10b49430;
L_10b49402:;
  /* 10b49402 cmp dword ptr [0x10b6e648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49409 je 0x10b49423 */
  if (C.zf) goto L_10b49423;
  /* 10b4940b call 0x10b49520 */
  push32(0x10b49410u); f_10b49520();
  /* 10b49410 call 0x10b495a0 */
  push32(0x10b49415u); f_10b495a0();
  /* 10b49415 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b49417 call 0x10b46ac0 */
  push32(0x10b4941cu); f_10b46ac0();
  /* 10b4941c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4941f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49421 jmp 0x10b49430 */
  goto L_10b49430;
L_10b49423:;
  /* 10b49423 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b49425 call 0x10b46ac0 */
  push32(0x10b4942au); f_10b46ac0();
  /* 10b4942a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4942d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b49430:;
  /* 10b49430 mov esp, ebp */
  ESP = (EBP);
  /* 10b49432 pop ebp */
  EBP = (pop32());
  /* 10b49433 ret  */
  ESPCHK(0x10b490f0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10b49440 (89 bytes, 21 insns) */
void f_10b49440(void) {
  FTRACE(0x10b49440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49440 push ebp */
  push32((uint32_t)(EBP));
  /* 10b49441 mov ebp, esp */
  EBP = (ESP);
  /* 10b49443 mov dword ptr [0x10b6e648], 0 */
  w32((uint32_t)(0x10b6e648), (0x0u));
  /* 10b4944d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49451 jne 0x10b49465 */
  if (!C.zf) goto L_10b49465;
  /* 10b49453 mov dword ptr [0x10b6e648], 1 */
  w32((uint32_t)(0x10b6e648), (0x1u));
  /* 10b4945d call dword ptr [0x10b7036c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7036c))), 0x10b49463u);
  /* 10b49463 jmp 0x10b49497 */
  goto L_10b49497;
L_10b49465:;
  /* 10b49465 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49469 jne 0x10b4947d */
  if (!C.zf) goto L_10b4947d;
  /* 10b4946b mov dword ptr [0x10b6e648], 1 */
  w32((uint32_t)(0x10b6e648), (0x1u));
  /* 10b49475 call dword ptr [0x10b70368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70368))), 0x10b4947bu);
  /* 10b4947b jmp 0x10b49497 */
  goto L_10b49497;
L_10b4947d:;
  /* 10b4947d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49481 jne 0x10b49494 */
  if (!C.zf) goto L_10b49494;
  /* 10b49483 mov dword ptr [0x10b6e648], 1 */
  w32((uint32_t)(0x10b6e648), (0x1u));
  /* 10b4948d mov eax, dword ptr [0x10b6e668] */
  EAX = (r32((uint32_t)(0x10b6e668)));
  /* 10b49492 jmp 0x10b49497 */
  goto L_10b49497;
L_10b49494:;
  /* 10b49494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10b49497:;
  /* 10b49497 pop ebp */
  EBP = (pop32());
  /* 10b49498 ret  */
  ESPCHK(0x10b49440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x10b494a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10b494a0(void) {
  FTRACE(0x10b494a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b494a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b494a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b494a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b494a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b494a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b494aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b494ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b494b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b494b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b494ba ja 0x10b494ea */
  if ((!C.cf&&!C.zf)) goto L_10b494ea;
  /* 10b494bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b494bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b494c1 mov dl, byte ptr [eax + 0x10b49504] */
  DL = (r8((uint32_t)(EAX + 0x10b49504)));
  /* 10b494c7 jmp dword ptr [edx*4 + 0x10b494f0] */
  switch (EDX) {
    case 0: goto L_10b494ce;
    case 1: goto L_10b494d5;
    case 2: goto L_10b494dc;
    case 3: goto L_10b494e3;
    case 4: goto L_10b494ea;
    default: x86_unimpl("switch@0x10b494c7 out of table"); return;
  }
L_10b494ce:;
  /* 10b494ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 10b494d3 jmp 0x10b494ec */
  goto L_10b494ec;
L_10b494d5:;
  /* 10b494d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10b494da jmp 0x10b494ec */
  goto L_10b494ec;
L_10b494dc:;
  /* 10b494dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10b494e1 jmp 0x10b494ec */
  goto L_10b494ec;
L_10b494e3:;
  /* 10b494e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10b494e8 jmp 0x10b494ec */
  goto L_10b494ec;
L_10b494ea:;
  /* 10b494ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b494ec:;
  /* 10b494ec mov esp, ebp */
  ESP = (EBP);
  /* 10b494ee pop ebp */
  EBP = (pop32());
  /* 10b494ef ret  */
  ESPCHK(0x10b494a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10b49520 (116 bytes, 29 insns) */
void f_10b49520(void) {
  FTRACE(0x10b49520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49520 push ebp */
  push32((uint32_t)(EBP));
  /* 10b49521 mov ebp, esp */
  EBP = (ESP);
  /* 10b49523 push ecx */
  push32((uint32_t)(ECX));
  /* 10b49524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4952b jmp 0x10b49536 */
  goto L_10b49536;
L_10b4952d:;
  /* 10b4952d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49530 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49533 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b49536:;
  /* 10b49536 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4953d jge 0x10b4954b */
  if ((C.sf==C.of)) goto L_10b4954b;
  /* 10b4953f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49542 mov byte ptr [ecx + 0x10b6fce0], 0 */
  w8((uint32_t)(ECX + 0x10b6fce0), (0x0u));
  /* 10b49549 jmp 0x10b4952d */
  goto L_10b4952d;
L_10b4954b:;
  /* 10b4954b mov dword ptr [0x10b6fb44], 0 */
  w32((uint32_t)(0x10b6fb44), (0x0u));
  /* 10b49555 mov dword ptr [0x10b6fbcc], 0 */
  w32((uint32_t)(0x10b6fbcc), (0x0u));
  /* 10b4955f mov dword ptr [0x10b6fde4], 0 */
  w32((uint32_t)(0x10b6fde4), (0x0u));
  /* 10b49569 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b49570 jmp 0x10b4957b */
  goto L_10b4957b;
L_10b49572:;
  /* 10b49572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49575 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49578 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4957b:;
  /* 10b4957b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4957f jge 0x10b49590 */
  if ((C.sf==C.of)) goto L_10b49590;
  /* 10b49581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49584 mov word ptr [eax*2 + 0x10b6fbc0], 0 */
  w16((uint32_t)(EAX*2 + 0x10b6fbc0), (0x0u));
  /* 10b4958e jmp 0x10b49572 */
  goto L_10b49572;
L_10b49590:;
  /* 10b49590 mov esp, ebp */
  ESP = (EBP);
  /* 10b49592 pop ebp */
  EBP = (pop32());
  /* 10b49593 ret  */
  ESPCHK(0x10b49520u, _esp0);
  ESP += 4; return;
}

/* FUN_100095a0 @ 0x10b495a0 (770 bytes, 175 insns) */
void f_10b495a0(void) {
  FTRACE(0x10b495a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b495a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b495a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b495a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b495a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10b495af push eax */
  push32((uint32_t)(EAX));
  /* 10b495b0 mov ecx, dword ptr [0x10b6fb44] */
  ECX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b495b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b495b7 call dword ptr [0x10b70364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70364))), 0x10b495bdu);
  /* 10b495bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b495c0 jne 0x10b497d9 */
  if (!C.zf) goto L_10b497d9;
  /* 10b495c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10b495d0 jmp 0x10b495e1 */
  goto L_10b495e1;
L_10b495d2:;
  /* 10b495d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b495d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b495db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10b495e1:;
  /* 10b495e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b495eb jae 0x10b49602 */
  if (!C.cf) goto L_10b49602;
  /* 10b495ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b495f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10b495f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10b49600 jmp 0x10b495d2 */
  goto L_10b495d2;
L_10b49602:;
  /* 10b49602 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10b49609 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10b4960f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b49612 jmp 0x10b4961d */
  goto L_10b4961d;
L_10b49614:;
  /* 10b49614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49617 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4961a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4961d:;
  /* 10b4961d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49620 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49622 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b49624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b49626 je 0x10b49668 */
  if (C.zf) goto L_10b49668;
  /* 10b49628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4962b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4962d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b4962f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10b49635 jmp 0x10b49646 */
  goto L_10b49646;
L_10b49637:;
  /* 10b49637 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4963d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49640 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10b49646:;
  /* 10b49646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49649 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4964b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b4964e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49654 ja 0x10b49666 */
  if ((!C.cf&&!C.zf)) goto L_10b49666;
  /* 10b49656 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4965c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10b49664 jmp 0x10b49637 */
  goto L_10b49637;
L_10b49666:;
  /* 10b49666 jmp 0x10b49614 */
  goto L_10b49614;
L_10b49668:;
  /* 10b49668 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4966a mov eax, dword ptr [0x10b6fde4] */
  EAX = (r32((uint32_t)(0x10b6fde4)));
  /* 10b4966f push eax */
  push32((uint32_t)(EAX));
  /* 10b49670 mov ecx, dword ptr [0x10b6fb44] */
  ECX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b49676 push ecx */
  push32((uint32_t)(ECX));
  /* 10b49677 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10b4967d push edx */
  push32((uint32_t)(EDX));
  /* 10b4967e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b49683 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10b49689 push eax */
  push32((uint32_t)(EAX));
  /* 10b4968a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4968c call 0x10b4b250 */
  push32(0x10b49691u); f_10b4b250();
  /* 10b49691 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b49696 mov ecx, dword ptr [0x10b6fb44] */
  ECX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b4969c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4969d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b496a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10b496a8 push edx */
  push32((uint32_t)(EDX));
  /* 10b496a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b496ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10b496b4 push eax */
  push32((uint32_t)(EAX));
  /* 10b496b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b496ba mov ecx, dword ptr [0x10b6fde4] */
  ECX = (r32((uint32_t)(0x10b6fde4)));
  /* 10b496c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b496c1 call 0x10b4b410 */
  push32(0x10b496c6u); f_10b4b410();
  /* 10b496c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b496c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b496cb mov edx, dword ptr [0x10b6fb44] */
  EDX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b496d1 push edx */
  push32((uint32_t)(EDX));
  /* 10b496d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b496d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10b496dd push eax */
  push32((uint32_t)(EAX));
  /* 10b496de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b496e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10b496e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b496ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10b496ef mov edx, dword ptr [0x10b6fde4] */
  EDX = (r32((uint32_t)(0x10b6fde4)));
  /* 10b496f5 push edx */
  push32((uint32_t)(EDX));
  /* 10b496f6 call 0x10b4b410 */
  push32(0x10b496fbu); f_10b4b410();
  /* 10b496fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b496fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10b49708 jmp 0x10b49719 */
  goto L_10b49719;
L_10b4970a:;
  /* 10b4970a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49713 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10b49719:;
  /* 10b49719 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49723 jae 0x10b497d4 */
  if (!C.cf) goto L_10b497d4;
  /* 10b49729 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4972f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49731 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10b49739 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4973c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4973e je 0x10b49776 */
  if (C.zf) goto L_10b49776;
  /* 10b49740 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49746 mov cl, byte ptr [eax + 0x10b6fce1] */
  CL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b4974c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10b4974f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49755 mov byte ptr [edx + 0x10b6fce1], cl */
  w8((uint32_t)(EDX + 0x10b6fce1), (CL));
  /* 10b4975b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49761 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49767 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10b4976e mov byte ptr [eax + 0x10b6fbe0], dl */
  w8((uint32_t)(EAX + 0x10b6fbe0), (DL));
  /* 10b49774 jmp 0x10b497cf */
  goto L_10b497cf;
L_10b49776:;
  /* 10b49776 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4977c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4977e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10b49786 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b49789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4978b je 0x10b497c2 */
  if (C.zf) goto L_10b497c2;
  /* 10b4978d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49793 mov al, byte ptr [edx + 0x10b6fce1] */
  AL = (r8((uint32_t)(EDX + 0x10b6fce1)));
  /* 10b49799 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10b4979b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b497a1 mov byte ptr [ecx + 0x10b6fce1], al */
  w8((uint32_t)(ECX + 0x10b6fce1), (AL));
  /* 10b497a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b497ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b497b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10b497ba mov byte ptr [edx + 0x10b6fbe0], cl */
  w8((uint32_t)(EDX + 0x10b6fbe0), (CL));
  /* 10b497c0 jmp 0x10b497cf */
  goto L_10b497cf;
L_10b497c2:;
  /* 10b497c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b497c8 mov byte ptr [edx + 0x10b6fbe0], 0 */
  w8((uint32_t)(EDX + 0x10b6fbe0), (0x0u));
L_10b497cf:;
  /* 10b497cf jmp 0x10b4970a */
  goto L_10b4970a;
L_10b497d4:;
  /* 10b497d4 jmp 0x10b4989e */
  goto L_10b4989e;
L_10b497d9:;
  /* 10b497d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10b497e3 jmp 0x10b497f4 */
  goto L_10b497f4;
L_10b497e5:;
  /* 10b497e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b497eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b497ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10b497f4:;
  /* 10b497f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b497fe jae 0x10b4989e */
  if (!C.cf) goto L_10b4989e;
  /* 10b49804 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4980b jb 0x10b49848 */
  if (C.cf) goto L_10b49848;
  /* 10b4980d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49814 ja 0x10b49848 */
  if ((!C.cf&&!C.zf)) goto L_10b49848;
  /* 10b49816 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4981c mov dl, byte ptr [ecx + 0x10b6fce1] */
  DL = (r8((uint32_t)(ECX + 0x10b6fce1)));
  /* 10b49822 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10b49825 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4982b mov byte ptr [eax + 0x10b6fce1], dl */
  w8((uint32_t)(EAX + 0x10b6fce1), (DL));
  /* 10b49831 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49837 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4983a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49840 mov byte ptr [edx + 0x10b6fbe0], cl */
  w8((uint32_t)(EDX + 0x10b6fbe0), (CL));
  /* 10b49846 jmp 0x10b49899 */
  goto L_10b49899;
L_10b49848:;
  /* 10b49848 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4984f jb 0x10b4988c */
  if (C.cf) goto L_10b4988c;
  /* 10b49851 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49858 ja 0x10b4988c */
  if ((!C.cf&&!C.zf)) goto L_10b4988c;
  /* 10b4985a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49860 mov cl, byte ptr [eax + 0x10b6fce1] */
  CL = (r8((uint32_t)(EAX + 0x10b6fce1)));
  /* 10b49866 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b49869 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4986f mov byte ptr [edx + 0x10b6fce1], cl */
  w8((uint32_t)(EDX + 0x10b6fce1), (CL));
  /* 10b49875 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b4987b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4987e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49884 mov byte ptr [ecx + 0x10b6fbe0], al */
  w8((uint32_t)(ECX + 0x10b6fbe0), (AL));
  /* 10b4988a jmp 0x10b49899 */
  goto L_10b49899;
L_10b4988c:;
  /* 10b4988c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b49892 mov byte ptr [edx + 0x10b6fbe0], 0 */
  w8((uint32_t)(EDX + 0x10b6fbe0), (0x0u));
L_10b49899:;
  /* 10b49899 jmp 0x10b497e5 */
  goto L_10b497e5;
L_10b4989e:;
  /* 10b4989e mov esp, ebp */
  ESP = (EBP);
  /* 10b498a0 pop ebp */
  EBP = (pop32());
  /* 10b498a1 ret  */
  ESPCHK(0x10b495a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x10b498b0 (23 bytes, 9 insns) */
void f_10b498b0(void) {
  FTRACE(0x10b498b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b498b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b498b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b498b3 cmp dword ptr [0x10b6fbcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fbcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b498ba je 0x10b498c3 */
  if (C.zf) goto L_10b498c3;
  /* 10b498bc mov eax, dword ptr [0x10b6fb44] */
  EAX = (r32((uint32_t)(0x10b6fb44)));
  /* 10b498c1 jmp 0x10b498c5 */
  goto L_10b498c5;
L_10b498c3:;
  /* 10b498c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b498c5:;
  /* 10b498c5 pop ebp */
  EBP = (pop32());
  /* 10b498c6 ret  */
  ESPCHK(0x10b498b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d0 @ 0x10b498d0 (34 bytes, 10 insns) */
void f_10b498d0(void) {
  FTRACE(0x10b498d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b498d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b498d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b498d3 cmp dword ptr [0x10b6ff90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6ff90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b498da jne 0x10b498f0 */
  if (!C.zf) goto L_10b498f0;
  /* 10b498dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10b498de call 0x10b490f0 */
  push32(0x10b498e3u); f_10b490f0();
  /* 10b498e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b498e6 mov dword ptr [0x10b6ff90], 1 */
  w32((uint32_t)(0x10b6ff90), (0x1u));
L_10b498f0:;
  /* 10b498f0 pop ebp */
  EBP = (pop32());
  /* 10b498f1 ret  */
  ESPCHK(0x10b498d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009900 @ 0x10b49900 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10b49900(void) {
  FTRACE(0x10b49900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49900 push ebp */
  push32((uint32_t)(EBP));
  /* 10b49901 mov ebp, esp */
  EBP = (ESP);
  /* 10b49903 push edi */
  push32((uint32_t)(EDI));
  /* 10b49904 push esi */
  push32((uint32_t)(ESI));
  /* 10b49905 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b49908 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4990b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4990e mov eax, ecx */
  EAX = (ECX);
  /* 10b49910 mov edx, ecx */
  EDX = (ECX);
  /* 10b49912 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49914 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49916 jbe 0x10b49920 */
  if ((C.cf||C.zf)) goto L_10b49920;
  /* 10b49918 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4991a jb 0x10b49a98 */
  if (C.cf) goto L_10b49a98;
L_10b49920:;
  /* 10b49920 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b49926 jne 0x10b4993c */
  if (!C.zf) goto L_10b4993c;
  /* 10b49928 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4992b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4992e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49931 jb 0x10b4995c */
  if (C.cf) goto L_10b4995c;
  /* 10b49933 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b49935 jmp dword ptr [edx*4 + 0x10b49a48] */
  switch (EDX) {
    case 0: goto L_10b49a58;
    case 1: goto L_10b49a60;
    case 2: goto L_10b49a6c;
    case 3: goto L_10b49a80;
    default: x86_unimpl("switch@0x10b49935 out of table"); return;
  }
L_10b4993c:;
  /* 10b4993c mov eax, edi */
  EAX = (EDI);
  /* 10b4993e mov edx, 3 */
  EDX = (0x3u);
  /* 10b49943 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49946 jb 0x10b49954 */
  if (C.cf) goto L_10b49954;
  /* 10b49948 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4994b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4994d jmp dword ptr [eax*4 + 0x10b49960] */
  switch (EAX) {
    case 1: goto L_10b49970;
    case 2: goto L_10b4999c;
    case 3: goto L_10b499c0;
    default: x86_unimpl("switch@0x10b4994d out of table"); return;
  }
L_10b49954:;
  /* 10b49954 jmp dword ptr [ecx*4 + 0x10b49a58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b49a58)))); return;
  /* 10b4995b nop  */
  /* nop */
L_10b4995c:;
  /* 10b4995c jmp dword ptr [ecx*4 + 0x10b499dc] */
  switch (ECX) {
    case 0: goto L_10b49a3f;
    case 1: goto L_10b49a2c;
    case 2: goto L_10b49a24;
    case 3: goto L_10b49a1c;
    case 4: goto L_10b49a14;
    case 5: goto L_10b49a0c;
    case 6: goto L_10b49a04;
    case 7: goto L_10b499fc;
    default: x86_unimpl("switch@0x10b4995c out of table"); return;
  }
  /* 10b49963 nop  */
  /* nop */
L_10b49970:;
  /* 10b49970 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49972 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b49974 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b49976 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b49979 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4997c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4997f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b49982 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b49985 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49988 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4998b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4998e jb 0x10b4995c */
  if (C.cf) goto L_10b4995c;
  /* 10b49990 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b49992 jmp dword ptr [edx*4 + 0x10b49a48] */
  switch (EDX) {
    case 0: goto L_10b49a58;
    case 1: goto L_10b49a60;
    case 2: goto L_10b49a6c;
    case 3: goto L_10b49a80;
    default: x86_unimpl("switch@0x10b49992 out of table"); return;
  }
  /* 10b49999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4999c:;
  /* 10b4999c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4999e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b499a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b499a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b499a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b499a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b499ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b499ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b499b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b499b4 jb 0x10b4995c */
  if (C.cf) goto L_10b4995c;
  /* 10b499b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b499b8 jmp dword ptr [edx*4 + 0x10b49a48] */
  switch (EDX) {
    case 0: goto L_10b49a58;
    case 1: goto L_10b49a60;
    case 2: goto L_10b49a6c;
    case 3: goto L_10b49a80;
    default: x86_unimpl("switch@0x10b499b8 out of table"); return;
  }
  /* 10b499bf nop  */
  /* nop */
L_10b499c0:;
  /* 10b499c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b499c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b499c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b499c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b499c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b499ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b499cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b499ce jb 0x10b4995c */
  if (C.cf) goto L_10b4995c;
  /* 10b499d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b499d2 jmp dword ptr [edx*4 + 0x10b49a48] */
  switch (EDX) {
    case 0: goto L_10b49a58;
    case 1: goto L_10b49a60;
    case 2: goto L_10b49a6c;
    case 3: goto L_10b49a80;
    default: x86_unimpl("switch@0x10b499d2 out of table"); return;
  }
  /* 10b499d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b499fc:;
  /* 10b499fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b49a00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b49a04:;
  /* 10b49a04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b49a08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b49a0c:;
  /* 10b49a0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b49a10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b49a14:;
  /* 10b49a14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b49a18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b49a1c:;
  /* 10b49a1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b49a20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b49a24:;
  /* 10b49a24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b49a28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b49a2c:;
  /* 10b49a2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b49a30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b49a34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b49a3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49a3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b49a3f:;
  /* 10b49a3f jmp dword ptr [edx*4 + 0x10b49a48] */
  switch (EDX) {
    case 0: goto L_10b49a58;
    case 1: goto L_10b49a60;
    case 2: goto L_10b49a6c;
    case 3: goto L_10b49a80;
    default: x86_unimpl("switch@0x10b49a3f out of table"); return;
  }
  /* 10b49a46 mov edi, edi */
  EDI = (EDI);
L_10b49a58:;
  /* 10b49a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49a5b pop esi */
  ESI = (pop32());
  /* 10b49a5c pop edi */
  EDI = (pop32());
  /* 10b49a5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49a5e ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49a5f nop  */
  /* nop */
L_10b49a60:;
  /* 10b49a60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b49a62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b49a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49a67 pop esi */
  ESI = (pop32());
  /* 10b49a68 pop edi */
  EDI = (pop32());
  /* 10b49a69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49a6a ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49a6b nop  */
  /* nop */
L_10b49a6c:;
  /* 10b49a6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b49a6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b49a70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b49a73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b49a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49a79 pop esi */
  ESI = (pop32());
  /* 10b49a7a pop edi */
  EDI = (pop32());
  /* 10b49a7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49a7c ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49a7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b49a80:;
  /* 10b49a80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b49a82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b49a84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b49a87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b49a8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b49a8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b49a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49a93 pop esi */
  ESI = (pop32());
  /* 10b49a94 pop edi */
  EDI = (pop32());
  /* 10b49a95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49a96 ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49a97 nop  */
  /* nop */
L_10b49a98:;
  /* 10b49a98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b49a9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b49aa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b49aa6 jne 0x10b49acc */
  if (!C.zf) goto L_10b49acc;
  /* 10b49aa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b49aab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b49aae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49ab1 jb 0x10b49ac0 */
  if (C.cf) goto L_10b49ac0;
  /* 10b49ab3 std  */
  C.df=1;
  /* 10b49ab4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b49ab6 cld  */
  C.df=0;
  /* 10b49ab7 jmp dword ptr [edx*4 + 0x10b49be0] */
  switch (EDX) {
    case 0: goto L_10b49bf0;
    case 1: goto L_10b49bf8;
    case 2: goto L_10b49c08;
    case 3: goto L_10b49c1c;
    default: x86_unimpl("switch@0x10b49ab7 out of table"); return;
  }
  /* 10b49abe mov edi, edi */
  EDI = (EDI);
L_10b49ac0:;
  /* 10b49ac0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b49ac2 jmp dword ptr [ecx*4 + 0x10b49b90] */
  switch (ECX) {
    case 0: goto L_10b49bd7;
    default: x86_unimpl("switch@0x10b49ac2 out of table"); return;
  }
  /* 10b49ac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b49acc:;
  /* 10b49acc mov eax, edi */
  EAX = (EDI);
  /* 10b49ace mov edx, 3 */
  EDX = (0x3u);
  /* 10b49ad3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49ad6 jb 0x10b49ae4 */
  if (C.cf) goto L_10b49ae4;
  /* 10b49ad8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b49adb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49add jmp dword ptr [eax*4 + 0x10b49ae8] */
  switch (EAX) {
    case 1: goto L_10b49af8;
    case 2: goto L_10b49b18;
    case 3: goto L_10b49b40;
    default: x86_unimpl("switch@0x10b49add out of table"); return;
  }
L_10b49ae4:;
  /* 10b49ae4 jmp dword ptr [ecx*4 + 0x10b49be0] */
  switch (ECX) {
    case 0: goto L_10b49bf0;
    case 1: goto L_10b49bf8;
    case 2: goto L_10b49c08;
    case 3: goto L_10b49c1c;
    default: x86_unimpl("switch@0x10b49ae4 out of table"); return;
  }
  /* 10b49aeb nop  */
  /* nop */
L_10b49af8:;
  /* 10b49af8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b49afb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49afd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b49b00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b49b01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b49b04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b49b05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49b08 jb 0x10b49ac0 */
  if (C.cf) goto L_10b49ac0;
  /* 10b49b0a std  */
  C.df=1;
  /* 10b49b0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b49b0d cld  */
  C.df=0;
  /* 10b49b0e jmp dword ptr [edx*4 + 0x10b49be0] */
  switch (EDX) {
    case 0: goto L_10b49bf0;
    case 1: goto L_10b49bf8;
    case 2: goto L_10b49c08;
    case 3: goto L_10b49c1c;
    default: x86_unimpl("switch@0x10b49b0e out of table"); return;
  }
  /* 10b49b15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b49b18:;
  /* 10b49b18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b49b1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49b1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b49b20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b49b23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b49b26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b49b29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49b2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49b2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49b32 jb 0x10b49ac0 */
  if (C.cf) goto L_10b49ac0;
  /* 10b49b34 std  */
  C.df=1;
  /* 10b49b35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b49b37 cld  */
  C.df=0;
  /* 10b49b38 jmp dword ptr [edx*4 + 0x10b49be0] */
  switch (EDX) {
    case 0: goto L_10b49bf0;
    case 1: goto L_10b49bf8;
    case 2: goto L_10b49c08;
    case 3: goto L_10b49c1c;
    default: x86_unimpl("switch@0x10b49b38 out of table"); return;
  }
  /* 10b49b3f nop  */
  /* nop */
L_10b49b40:;
  /* 10b49b40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b49b43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49b45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b49b48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b49b4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b49b4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b49b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b49b54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b49b57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49b5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49b5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49b60 jb 0x10b49ac0 */
  if (C.cf) goto L_10b49ac0;
  /* 10b49b66 std  */
  C.df=1;
  /* 10b49b67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b49b69 cld  */
  C.df=0;
  /* 10b49b6a jmp dword ptr [edx*4 + 0x10b49be0] */
  switch (EDX) {
    case 0: goto L_10b49bf0;
    case 1: goto L_10b49bf8;
    case 2: goto L_10b49c08;
    case 3: goto L_10b49c1c;
    default: x86_unimpl("switch@0x10b49b6a out of table"); return;
  }
  /* 10b49b71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b49b74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10b49b75 wait  */
  /* wait (no observable integer/reg state) */
  /* 10b49b76 mov ah, 0x10 */
  AH = (0x10u);
  /* 10b49b78 pushfd  */
  x86_unimpl("pushfd @ 0x10b49b78");
  /* 10b49b79 wait  */
  /* wait (no observable integer/reg state) */
  /* 10b49b7a mov ah, 0x10 */
  AH = (0x10u);
  /* 10b49b7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10b49b7d wait  */
  /* wait (no observable integer/reg state) */
  /* 10b49b7e mov ah, 0x10 */
  AH = (0x10u);
  /* 10b49b80 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10b49b81 wait  */
  /* wait (no observable integer/reg state) */
  /* 10b49b82 mov ah, 0x10 */
  AH = (0x10u);
  /* 10b49b84 mov ah, 0x9b */
  AH = (0x9bu);
  /* 10b49b86 mov ah, 0x10 */
  AH = (0x10u);
  /* 10b49b88 mov esp, 0xc410b49b */
  ESP = (0xc410b49bu);
  /* 10b49b8d wait  */
  /* wait (no observable integer/reg state) */
  /* 10b49b8e mov ah, 0x10 */
  AH = (0x10u);
  /* 10b49b94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b49b98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b49b9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b49ba0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b49ba4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b49ba8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b49bac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b49bb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b49bb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b49bb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b49bbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b49bc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b49bc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b49bc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b49bcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b49bd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49bd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b49bd7:;
  /* 10b49bd7 jmp dword ptr [edx*4 + 0x10b49be0] */
  switch (EDX) {
    case 0: goto L_10b49bf0;
    case 1: goto L_10b49bf8;
    case 2: goto L_10b49c08;
    case 3: goto L_10b49c1c;
    default: x86_unimpl("switch@0x10b49bd7 out of table"); return;
  }
  /* 10b49bde mov edi, edi */
  EDI = (EDI);
L_10b49bf0:;
  /* 10b49bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49bf3 pop esi */
  ESI = (pop32());
  /* 10b49bf4 pop edi */
  EDI = (pop32());
  /* 10b49bf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49bf6 ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49bf7 nop  */
  /* nop */
L_10b49bf8:;
  /* 10b49bf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b49bfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b49bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49c01 pop esi */
  ESI = (pop32());
  /* 10b49c02 pop edi */
  EDI = (pop32());
  /* 10b49c03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49c04 ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49c05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b49c08:;
  /* 10b49c08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b49c0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b49c0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b49c11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b49c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49c17 pop esi */
  ESI = (pop32());
  /* 10b49c18 pop edi */
  EDI = (pop32());
  /* 10b49c19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49c1a ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
  /* 10b49c1b nop  */
  /* nop */
L_10b49c1c:;
  /* 10b49c1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b49c1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b49c22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b49c25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b49c28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b49c2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b49c2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49c31 pop esi */
  ESI = (pop32());
  /* 10b49c32 pop edi */
  EDI = (pop32());
  /* 10b49c33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b49c34 ret  */
  ESPCHK(0x10b49900u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10b49c40 (104 bytes, 43 insns) */
void f_10b49c40(void) {
  FTRACE(0x10b49c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49c40 push ebx */
  push32((uint32_t)(EBX));
  /* 10b49c41 push esi */
  push32((uint32_t)(ESI));
  /* 10b49c42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10b49c46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49c48 jne 0x10b49c62 */
  if (!C.zf) goto L_10b49c62;
  /* 10b49c4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b49c4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b49c52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49c54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b49c56 mov ebx, eax */
  EBX = (EAX);
  /* 10b49c58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b49c5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b49c5e mov edx, ebx */
  EDX = (EBX);
  /* 10b49c60 jmp 0x10b49ca3 */
  goto L_10b49ca3;
L_10b49c62:;
  /* 10b49c62 mov ecx, eax */
  ECX = (EAX);
  /* 10b49c64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b49c68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b49c6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10b49c70:;
  /* 10b49c70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b49c72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10b49c74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b49c76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10b49c78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b49c7a jne 0x10b49c70 */
  if (!C.zf) goto L_10b49c70;
  /* 10b49c7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b49c7e mov esi, eax */
  ESI = (EAX);
  /* 10b49c80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b49c84 mov ecx, eax */
  ECX = (EAX);
  /* 10b49c86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b49c8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b49c8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49c8e jb 0x10b49c9e */
  if (C.cf) goto L_10b49c9e;
  /* 10b49c90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49c94 ja 0x10b49c9e */
  if ((!C.cf&&!C.zf)) goto L_10b49c9e;
  /* 10b49c96 jb 0x10b49c9f */
  if (C.cf) goto L_10b49c9f;
  /* 10b49c98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49c9c jbe 0x10b49c9f */
  if ((C.cf||C.zf)) goto L_10b49c9f;
L_10b49c9e:;
  /* 10b49c9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10b49c9f:;
  /* 10b49c9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49ca1 mov eax, esi */
  EAX = (ESI);
L_10b49ca3:;
  /* 10b49ca3 pop esi */
  ESI = (pop32());
  /* 10b49ca4 pop ebx */
  EBX = (pop32());
  /* 10b49ca5 ret 0x10 */
  ESPCHK(0x10b49c40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10b49cb0 (117 bytes, 44 insns) */
void f_10b49cb0(void) {
  FTRACE(0x10b49cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b49cb1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b49cb5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49cb7 jne 0x10b49cd1 */
  if (!C.zf) goto L_10b49cd1;
  /* 10b49cb9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b49cbd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b49cc1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49cc3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b49cc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b49cc9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b49ccb mov eax, edx */
  EAX = (EDX);
  /* 10b49ccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b49ccf jmp 0x10b49d21 */
  goto L_10b49d21;
L_10b49cd1:;
  /* 10b49cd1 mov ecx, eax */
  ECX = (EAX);
  /* 10b49cd3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b49cd7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b49cdb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10b49cdf:;
  /* 10b49cdf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b49ce1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10b49ce3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b49ce5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10b49ce7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b49ce9 jne 0x10b49cdf */
  if (!C.zf) goto L_10b49cdf;
  /* 10b49ceb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b49ced mov ecx, eax */
  ECX = (EAX);
  /* 10b49cef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b49cf3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10b49cf4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b49cf8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49cfa jb 0x10b49d0a */
  if (C.cf) goto L_10b49d0a;
  /* 10b49cfc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49d00 ja 0x10b49d0a */
  if ((!C.cf&&!C.zf)) goto L_10b49d0a;
  /* 10b49d02 jb 0x10b49d12 */
  if (C.cf) goto L_10b49d12;
  /* 10b49d04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49d08 jbe 0x10b49d12 */
  if ((C.cf||C.zf)) goto L_10b49d12;
L_10b49d0a:;
  /* 10b49d0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49d0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b49d12:;
  /* 10b49d12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49d16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49d1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b49d1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b49d1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b49d21:;
  /* 10b49d21 pop ebx */
  EBX = (pop32());
  /* 10b49d22 ret 0x10 */
  ESPCHK(0x10b49cb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009d30 @ 0x10b49d30 (628 bytes, 214 insns) */
void f_10b49d30(void) {
  FTRACE(0x10b49d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b49d31 mov ebp, esp */
  EBP = (ESP);
  /* 10b49d33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49d36 push ebx */
  push32((uint32_t)(EBX));
  /* 10b49d37 push esi */
  push32((uint32_t)(ESI));
  /* 10b49d38 push edi */
  push32((uint32_t)(EDI));
L_10b49d39:;
  /* 10b49d39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49d3d jne 0x10b49d5d */
  if (!C.zf) goto L_10b49d5d;
  /* 10b49d3f push 0x10b69f30 */
  push32((uint32_t)(0x10b69f30u));
  /* 10b49d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b49d46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10b49d48 push 0x10b69f24 */
  push32((uint32_t)(0x10b69f24u));
  /* 10b49d4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b49d4f call 0x10b420e0 */
  push32(0x10b49d54u); f_10b420e0();
  /* 10b49d54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49d57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49d5a jne 0x10b49d5d */
  if (!C.zf) goto L_10b49d5d;
  /* 10b49d5c int3  */
  x86_unimpl("int3 @ 0x10b49d5c");
L_10b49d5d:;
  /* 10b49d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b49d61 jne 0x10b49d39 */
  if (!C.zf) goto L_10b49d39;
  /* 10b49d63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b49d66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b49d69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49d6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b49d6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b49d72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49d75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b49d78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10b49d7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b49d80 je 0x10b49d8f */
  if (C.zf) goto L_10b49d8f;
  /* 10b49d82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49d85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b49d88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10b49d8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b49d8d je 0x10b49da5 */
  if (C.zf) goto L_10b49da5;
L_10b49d8f:;
  /* 10b49d8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49d92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b49d95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10b49d97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49d9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10b49d9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b49da0 jmp 0x10b49f9d */
  goto L_10b49f9d;
L_10b49da5:;
  /* 10b49da5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49da8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b49dab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b49dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b49db0 je 0x10b49dfc */
  if (C.zf) goto L_10b49dfc;
  /* 10b49db2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49db5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b49dbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49dbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b49dc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10b49dc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b49dc7 je 0x10b49de5 */
  if (C.zf) goto L_10b49de5;
  /* 10b49dc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49dcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49dcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b49dd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b49dd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49dd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b49dda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10b49ddd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49de0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b49de3 jmp 0x10b49dfc */
  goto L_10b49dfc;
L_10b49de5:;
  /* 10b49de5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49de8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b49deb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10b49dee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49df1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b49df4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b49df7 jmp 0x10b49f9d */
  goto L_10b49f9d;
L_10b49dfc:;
  /* 10b49dfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49dff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b49e02 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10b49e05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e08 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b49e0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e0e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b49e11 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10b49e14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e17 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b49e1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e1d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b49e24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b49e2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49e2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b49e31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b49e37 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10b49e3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b49e3f jne 0x10b49e6f */
  if (!C.zf) goto L_10b49e6f;
  /* 10b49e41 cmp dword ptr [ebp - 8], 0x10b6d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10b6d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49e48 je 0x10b49e53 */
  if (C.zf) goto L_10b49e53;
  /* 10b49e4a cmp dword ptr [ebp - 8], 0x10b6d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10b6d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49e51 jne 0x10b49e63 */
  if (!C.zf) goto L_10b49e63;
L_10b49e53:;
  /* 10b49e53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b49e56 push edx */
  push32((uint32_t)(EDX));
  /* 10b49e57 call 0x10b4bca0 */
  push32(0x10b49e5cu); f_10b4bca0();
  /* 10b49e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b49e61 jne 0x10b49e6f */
  if (!C.zf) goto L_10b49e6f;
L_10b49e63:;
  /* 10b49e63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e66 push eax */
  push32((uint32_t)(EAX));
  /* 10b49e67 call 0x10b4bbd0 */
  push32(0x10b49e6cu); f_10b4bbd0();
  /* 10b49e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b49e6f:;
  /* 10b49e6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e72 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b49e75 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10b49e7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b49e7d je 0x10b49f5b */
  if (C.zf) goto L_10b49f5b;
L_10b49e83:;
  /* 10b49e83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49e89 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10b49e8b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b49e90 jge 0x10b49eb3 */
  if ((C.sf==C.of)) goto L_10b49eb3;
  /* 10b49e92 push 0x10b69ee4 */
  push32((uint32_t)(0x10b69ee4u));
  /* 10b49e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b49e99 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b49e9e push 0x10b69f24 */
  push32((uint32_t)(0x10b69f24u));
  /* 10b49ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b49ea5 call 0x10b420e0 */
  push32(0x10b49eaau); f_10b420e0();
  /* 10b49eaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49ead cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49eb0 jne 0x10b49eb3 */
  if (!C.zf) goto L_10b49eb3;
  /* 10b49eb2 int3  */
  x86_unimpl("int3 @ 0x10b49eb2");
L_10b49eb3:;
  /* 10b49eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b49eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b49eb7 jne 0x10b49e83 */
  if (!C.zf) goto L_10b49e83;
  /* 10b49eb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49ebc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49ebf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b49ec1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49ec4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b49ec7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49eca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b49ecd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49ed0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49ed3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b49ed5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49ed8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b49edb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49ede mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49ee1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b49ee4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49ee8 jle 0x10b49f06 */
  if ((C.zf||C.sf!=C.of)) goto L_10b49f06;
  /* 10b49eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49eed push ecx */
  push32((uint32_t)(ECX));
  /* 10b49eee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49ef1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b49ef4 push eax */
  push32((uint32_t)(EAX));
  /* 10b49ef5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b49ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b49ef9 call 0x10b4b8c0 */
  push32(0x10b49efeu); f_10b4b8c0();
  /* 10b49efe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49f01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b49f04 jmp 0x10b49f4e */
  goto L_10b49f4e;
L_10b49f06:;
  /* 10b49f06 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49f0a je 0x10b49f29 */
  if (C.zf) goto L_10b49f29;
  /* 10b49f0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b49f0f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b49f12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b49f15 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b49f18 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b49f1b mov ecx, dword ptr [edx*4 + 0x10b6fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b49f22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49f24 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b49f27 jmp 0x10b49f30 */
  goto L_10b49f30;
L_10b49f29:;
  /* 10b49f29 mov dword ptr [ebp - 0x14], 0x10b6ca60 */
  w32((uint32_t)(EBP + -0x14), (0x10b6ca60u));
L_10b49f30:;
  /* 10b49f30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b49f33 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10b49f37 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b49f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b49f3c je 0x10b49f4e */
  if (C.zf) goto L_10b49f4e;
  /* 10b49f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b49f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b49f42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b49f45 push ecx */
  push32((uint32_t)(ECX));
  /* 10b49f46 call 0x10b4b770 */
  push32(0x10b49f4bu); f_10b4b770();
  /* 10b49f4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b49f4e:;
  /* 10b49f4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49f51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b49f54 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b49f57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b49f59 jmp 0x10b49f79 */
  goto L_10b49f79;
L_10b49f5b:;
  /* 10b49f5b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b49f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b49f65 push edx */
  push32((uint32_t)(EDX));
  /* 10b49f66 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10b49f69 push eax */
  push32((uint32_t)(EAX));
  /* 10b49f6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b49f6d push ecx */
  push32((uint32_t)(ECX));
  /* 10b49f6e call 0x10b4b8c0 */
  push32(0x10b49f73u); f_10b4b8c0();
  /* 10b49f73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49f76 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b49f79:;
  /* 10b49f79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b49f7c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49f7f je 0x10b49f95 */
  if (C.zf) goto L_10b49f95;
  /* 10b49f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49f84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b49f87 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10b49f8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b49f8d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10b49f90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b49f93 jmp 0x10b49f9d */
  goto L_10b49f9d;
L_10b49f95:;
  /* 10b49f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b49f98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10b49f9d:;
  /* 10b49f9d pop edi */
  EDI = (pop32());
  /* 10b49f9e pop esi */
  ESI = (pop32());
  /* 10b49f9f pop ebx */
  EBX = (pop32());
  /* 10b49fa0 mov esp, ebp */
  ESP = (EBP);
  /* 10b49fa2 pop ebp */
  EBP = (pop32());
  /* 10b49fa3 ret  */
  ESPCHK(0x10b49d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x10b49fb0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10b49fb0(void) {
  FTRACE(0x10b49fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b49fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b49fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b49fb3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b49fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 10b49fba push esi */
  push32((uint32_t)(ESI));
  /* 10b49fbb push edi */
  push32((uint32_t)(EDI));
  /* 10b49fbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b49fc3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10b49fcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10b49fd4:;
  /* 10b49fd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b49fd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b49fd9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10b49fdc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b49fe0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b49fe3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b49fe6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b49fe9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b49feb je 0x10b4abc7 */
  if (C.zf) goto L_10b4abc7;
  /* 10b49ff1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b49ff8 jl 0x10b4abc7 */
  if ((C.sf!=C.of)) goto L_10b4abc7;
  /* 10b49ffe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a002 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a005 jl 0x10b4a026 */
  if ((C.sf!=C.of)) goto L_10b4a026;
  /* 10b4a007 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a00b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a00e jg 0x10b4a026 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4a026;
  /* 10b4a010 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a014 movsx ecx, byte ptr [eax + 0x10b69f1c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10b69f1c))));
  /* 10b4a01b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a01e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10b4a024 jmp 0x10b4a030 */
  goto L_10b4a030;
L_10b4a026:;
  /* 10b4a026 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10b4a030:;
  /* 10b4a030 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10b4a036 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b4a039 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4a03c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4a03f movsx edx, byte ptr [ecx + eax*8 + 0x10b69f3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10b69f3c))));
  /* 10b4a047 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b4a04a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b4a04d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4a050 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10b4a056 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a05d ja 0x10b4abc2 */
  if ((!C.cf&&!C.zf)) goto L_10b4abc2;
  /* 10b4a063 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10b4a069 jmp dword ptr [ecx*4 + 0x10b4abd4] */
  switch (ECX) {
    case 0: goto L_10b4a070;
    case 1: goto L_10b4a10a;
    case 2: goto L_10b4a14c;
    case 3: goto L_10b4a1bb;
    case 4: goto L_10b4a213;
    case 5: goto L_10b4a222;
    case 6: goto L_10b4a26e;
    case 7: goto L_10b4a301;
    case 8: goto L_10b4a198;
    case 9: goto L_10b4a1a3;
    case 10: goto L_10b4a18e;
    case 11: goto L_10b4a183;
    case 12: goto L_10b4a1ae;
    case 13: goto L_10b4a1b6;
    default: x86_unimpl("switch@0x10b4a069 out of table"); return;
  }
L_10b4a070:;
  /* 10b4a070 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10b4a077 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4a07a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a080 mov eax, dword ptr [0x10b6cc98] */
  EAX = (r32((uint32_t)(0x10b6cc98)));
  /* 10b4a085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a087 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b4a08b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4a093 je 0x10b4a0ed */
  if (C.zf) goto L_10b4a0ed;
  /* 10b4a095 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10b4a09b push edx */
  push32((uint32_t)(EDX));
  /* 10b4a09c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4a09f push eax */
  push32((uint32_t)(EAX));
  /* 10b4a0a0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a0a5 call 0x10b4ace0 */
  push32(0x10b4a0aau); f_10b4ace0();
  /* 10b4a0aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a0ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4a0b0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4a0b2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10b4a0b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4a0b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a0bb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b4a0be:;
  /* 10b4a0be movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a0c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a0c4 jne 0x10b4a0e7 */
  if (!C.zf) goto L_10b4a0e7;
  /* 10b4a0c6 push 0x10b69fbc */
  push32((uint32_t)(0x10b69fbcu));
  /* 10b4a0cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4a0cd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10b4a0d2 push 0x10b69fb0 */
  push32((uint32_t)(0x10b69fb0u));
  /* 10b4a0d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4a0d9 call 0x10b420e0 */
  push32(0x10b4a0deu); f_10b420e0();
  /* 10b4a0de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a0e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a0e4 jne 0x10b4a0e7 */
  if (!C.zf) goto L_10b4a0e7;
  /* 10b4a0e6 int3  */
  x86_unimpl("int3 @ 0x10b4a0e6");
L_10b4a0e7:;
  /* 10b4a0e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a0e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a0eb jne 0x10b4a0be */
  if (!C.zf) goto L_10b4a0be;
L_10b4a0ed:;
  /* 10b4a0ed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10b4a0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4a0f7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a0f8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a0fc push eax */
  push32((uint32_t)(EAX));
  /* 10b4a0fd call 0x10b4ace0 */
  push32(0x10b4a102u); f_10b4ace0();
  /* 10b4a102 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a105 jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a10a:;
  /* 10b4a10a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4a111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4a114 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10b4a11a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10b4a120 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10b4a126 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b4a12c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b4a12f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4a136 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10b4a140 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10b4a147 jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a14c:;
  /* 10b4a14c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a150 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10b4a156 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10b4a15c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a15f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10b4a165 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a16c ja 0x10b4a1b6 */
  if ((!C.cf&&!C.zf)) goto L_10b4a1b6;
  /* 10b4a16e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10b4a174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a176 mov al, byte ptr [ecx + 0x10b4ac0c] */
  AL = (r8((uint32_t)(ECX + 0x10b4ac0c)));
  /* 10b4a17c jmp dword ptr [eax*4 + 0x10b4abf4] */
  switch (EAX) {
    case 0: goto L_10b4a198;
    case 1: goto L_10b4a1a3;
    case 2: goto L_10b4a18e;
    case 3: goto L_10b4a183;
    case 4: goto L_10b4a1ae;
    case 5: goto L_10b4a1b6;
    default: x86_unimpl("switch@0x10b4a17c out of table"); return;
  }
L_10b4a183:;
  /* 10b4a183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a186 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a189 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4a18c jmp 0x10b4a1b6 */
  goto L_10b4a1b6;
L_10b4a18e:;
  /* 10b4a18e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a191 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10b4a193 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4a196 jmp 0x10b4a1b6 */
  goto L_10b4a1b6;
L_10b4a198:;
  /* 10b4a198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a19b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a19e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4a1a1 jmp 0x10b4a1b6 */
  goto L_10b4a1b6;
L_10b4a1a3:;
  /* 10b4a1a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a1a6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10b4a1a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4a1ac jmp 0x10b4a1b6 */
  goto L_10b4a1b6;
L_10b4a1ae:;
  /* 10b4a1ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a1b1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10b4a1b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4a1b6:;
  /* 10b4a1b6 jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a1bb:;
  /* 10b4a1bb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a1bf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a1c2 jne 0x10b4a1f7 */
  if (!C.zf) goto L_10b4a1f7;
  /* 10b4a1c4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b4a1c7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a1c8 call 0x10b4adf0 */
  push32(0x10b4a1cdu); f_10b4adf0();
  /* 10b4a1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a1d0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10b4a1d6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a1dd jge 0x10b4a1f5 */
  if ((C.sf==C.of)) goto L_10b4a1f5;
  /* 10b4a1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a1e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10b4a1e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4a1e7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b4a1ed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4a1ef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10b4a1f5:;
  /* 10b4a1f5 jmp 0x10b4a20e */
  goto L_10b4a20e;
L_10b4a1f7:;
  /* 10b4a1f7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b4a1fd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4a200 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a204 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10b4a208 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10b4a20e:;
  /* 10b4a20e jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a213:;
  /* 10b4a213 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10b4a21d jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a222:;
  /* 10b4a222 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a226 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a229 jne 0x10b4a252 */
  if (!C.zf) goto L_10b4a252;
  /* 10b4a22b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b4a22e push eax */
  push32((uint32_t)(EAX));
  /* 10b4a22f call 0x10b4adf0 */
  push32(0x10b4a234u); f_10b4adf0();
  /* 10b4a234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a237 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10b4a23d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a244 jge 0x10b4a250 */
  if ((C.sf==C.of)) goto L_10b4a250;
  /* 10b4a246 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10b4a250:;
  /* 10b4a250 jmp 0x10b4a269 */
  goto L_10b4a269;
L_10b4a252:;
  /* 10b4a252 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b4a258 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4a25b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a25f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10b4a263 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10b4a269:;
  /* 10b4a269 jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a26e:;
  /* 10b4a26e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a272 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10b4a278 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10b4a27e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a281 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10b4a287 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a28e ja 0x10b4a2fc */
  if ((!C.cf&&!C.zf)) goto L_10b4a2fc;
  /* 10b4a290 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10b4a296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a298 mov al, byte ptr [ecx + 0x10b4ac31] */
  AL = (r8((uint32_t)(ECX + 0x10b4ac31)));
  /* 10b4a29e jmp dword ptr [eax*4 + 0x10b4ac1d] */
  switch (EAX) {
    case 0: goto L_10b4a2b0;
    case 1: goto L_10b4a2e9;
    case 2: goto L_10b4a2a5;
    case 3: goto L_10b4a2f3;
    case 4: goto L_10b4a2fc;
    default: x86_unimpl("switch@0x10b4a29e out of table"); return;
  }
L_10b4a2a5:;
  /* 10b4a2a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a2a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a2ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4a2ae jmp 0x10b4a2fc */
  goto L_10b4a2fc;
L_10b4a2b0:;
  /* 10b4a2b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4a2b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4a2b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a2b9 jne 0x10b4a2db */
  if (!C.zf) goto L_10b4a2db;
  /* 10b4a2bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4a2be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b4a2c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a2c5 jne 0x10b4a2db */
  if (!C.zf) goto L_10b4a2db;
  /* 10b4a2c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4a2ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a2cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b4a2d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a2d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a2d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4a2d9 jmp 0x10b4a2e7 */
  goto L_10b4a2e7;
L_10b4a2db:;
  /* 10b4a2db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10b4a2e2 jmp 0x10b4a070 */
  goto L_10b4a070;
L_10b4a2e7:;
  /* 10b4a2e7 jmp 0x10b4a2fc */
  goto L_10b4a2fc;
L_10b4a2e9:;
  /* 10b4a2e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a2ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10b4a2ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4a2f1 jmp 0x10b4a2fc */
  goto L_10b4a2fc;
L_10b4a2f3:;
  /* 10b4a2f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a2f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a2f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4a2fc:;
  /* 10b4a2fc jmp 0x10b4abc2 */
  goto L_10b4abc2;
L_10b4a301:;
  /* 10b4a301 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a305 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10b4a30b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10b4a311 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a314 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10b4a31a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a321 ja 0x10b4a9e7 */
  if ((!C.cf&&!C.zf)) goto L_10b4a9e7;
  /* 10b4a327 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10b4a32d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a32f mov cl, byte ptr [edx + 0x10b4ac9c] */
  CL = (r8((uint32_t)(EDX + 0x10b4ac9c)));
  /* 10b4a335 jmp dword ptr [ecx*4 + 0x10b4ac60] */
  switch (ECX) {
    case 0: goto L_10b4a33c;
    case 1: goto L_10b4a5d0;
    case 2: goto L_10b4a460;
    case 3: goto L_10b4a709;
    case 4: goto L_10b4a3cb;
    case 5: goto L_10b4a351;
    case 6: goto L_10b4a6db;
    case 7: goto L_10b4a5e0;
    case 8: goto L_10b4a585;
    case 9: goto L_10b4a755;
    case 10: goto L_10b4a6ff;
    case 11: goto L_10b4a476;
    case 12: goto L_10b4a6f3;
    case 13: goto L_10b4a715;
    case 14: goto L_10b4a9e7;
    default: x86_unimpl("switch@0x10b4a335 out of table"); return;
  }
L_10b4a33c:;
  /* 10b4a33c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a33f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a346 jne 0x10b4a351 */
  if (!C.zf) goto L_10b4a351;
  /* 10b4a348 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a34b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a34e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4a351:;
  /* 10b4a351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a354 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a35a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a35c je 0x10b4a397 */
  if (C.zf) goto L_10b4a397;
  /* 10b4a35e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b4a361 push eax */
  push32((uint32_t)(EAX));
  /* 10b4a362 call 0x10b4ae30 */
  push32(0x10b4a367u); f_10b4ae30();
  /* 10b4a367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a36a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10b4a36e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10b4a372 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a373 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10b4a379 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a37a call 0x10b4bf10 */
  push32(0x10b4a37fu); f_10b4bf10();
  /* 10b4a37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a382 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b4a385 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a389 jge 0x10b4a395 */
  if ((C.sf==C.of)) goto L_10b4a395;
  /* 10b4a38b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10b4a395:;
  /* 10b4a395 jmp 0x10b4a3bd */
  goto L_10b4a3bd;
L_10b4a397:;
  /* 10b4a397 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b4a39a push eax */
  push32((uint32_t)(EAX));
  /* 10b4a39b call 0x10b4adf0 */
  push32(0x10b4a3a0u); f_10b4adf0();
  /* 10b4a3a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a3a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10b4a3aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10b4a3b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10b4a3b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10b4a3bd:;
  /* 10b4a3bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10b4a3c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b4a3c6 jmp 0x10b4a9e7 */
  goto L_10b4a9e7;
L_10b4a3cb:;
  /* 10b4a3cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b4a3ce push eax */
  push32((uint32_t)(EAX));
  /* 10b4a3cf call 0x10b4adf0 */
  push32(0x10b4a3d4u); f_10b4adf0();
  /* 10b4a3d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a3d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10b4a3dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a3e4 je 0x10b4a3f2 */
  if (C.zf) goto L_10b4a3f2;
  /* 10b4a3e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b4a3ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a3f0 jne 0x10b4a40c */
  if (!C.zf) goto L_10b4a40c;
L_10b4a3f2:;
  /* 10b4a3f2 mov edx, dword ptr [0x10b6cfb0] */
  EDX = (r32((uint32_t)(0x10b6cfb0)));
  /* 10b4a3f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b4a3fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a3fe push eax */
  push32((uint32_t)(EAX));
  /* 10b4a3ff call 0x10b45e50 */
  push32(0x10b4a404u); f_10b45e50();
  /* 10b4a404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a407 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b4a40a jmp 0x10b4a45b */
  goto L_10b4a45b;
L_10b4a40c:;
  /* 10b4a40c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a40f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a415 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4a417 je 0x10b4a43c */
  if (C.zf) goto L_10b4a43c;
  /* 10b4a419 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b4a41f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b4a422 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4a425 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b4a42b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10b4a42e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b4a430 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b4a433 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10b4a43a jmp 0x10b4a45b */
  goto L_10b4a45b;
L_10b4a43c:;
  /* 10b4a43c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10b4a443 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b4a449 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b4a44c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b4a44f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b4a455 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10b4a458 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b4a45b:;
  /* 10b4a45b jmp 0x10b4a9e7 */
  goto L_10b4a9e7;
L_10b4a460:;
  /* 10b4a460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a463 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a469 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4a46b jne 0x10b4a476 */
  if (!C.zf) goto L_10b4a476;
  /* 10b4a46d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a470 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a473 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4a476:;
  /* 10b4a476 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a47d jne 0x10b4a48b */
  if (!C.zf) goto L_10b4a48b;
  /* 10b4a47f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10b4a489 jmp 0x10b4a497 */
  goto L_10b4a497;
L_10b4a48b:;
  /* 10b4a48b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b4a491 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10b4a497:;
  /* 10b4a497 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10b4a49d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10b4a4a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b4a4a6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a4a7 call 0x10b4adf0 */
  push32(0x10b4a4acu); f_10b4adf0();
  /* 10b4a4ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a4af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4a4b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a4b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a4ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a4bc je 0x10b4a526 */
  if (C.zf) goto L_10b4a526;
  /* 10b4a4be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a4c2 jne 0x10b4a4cd */
  if (!C.zf) goto L_10b4a4cd;
  /* 10b4a4c4 mov ecx, dword ptr [0x10b6cfb4] */
  ECX = (r32((uint32_t)(0x10b6cfb4)));
  /* 10b4a4ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b4a4cd:;
  /* 10b4a4cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10b4a4d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a4d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10b4a4dd:;
  /* 10b4a4dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b4a4e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b4a4e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a4ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10b4a4f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a4f4 je 0x10b4a516 */
  if (C.zf) goto L_10b4a516;
  /* 10b4a4f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10b4a4fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a4fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10b4a501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a503 je 0x10b4a516 */
  if (C.zf) goto L_10b4a516;
  /* 10b4a505 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10b4a50b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a50e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10b4a514 jmp 0x10b4a4dd */
  goto L_10b4a4dd;
L_10b4a516:;
  /* 10b4a516 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10b4a51c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a51f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b4a521 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b4a524 jmp 0x10b4a580 */
  goto L_10b4a580;
L_10b4a526:;
  /* 10b4a526 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a52a jne 0x10b4a534 */
  if (!C.zf) goto L_10b4a534;
  /* 10b4a52c mov eax, dword ptr [0x10b6cfb0] */
  EAX = (r32((uint32_t)(0x10b6cfb0)));
  /* 10b4a531 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10b4a534:;
  /* 10b4a534 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a537 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10b4a53d:;
  /* 10b4a53d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b4a543 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b4a549 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a54c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10b4a552 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a554 je 0x10b4a574 */
  if (C.zf) goto L_10b4a574;
  /* 10b4a556 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10b4a55c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4a55f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a561 je 0x10b4a574 */
  if (C.zf) goto L_10b4a574;
  /* 10b4a563 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10b4a569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a56c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10b4a572 jmp 0x10b4a53d */
  goto L_10b4a53d;
L_10b4a574:;
  /* 10b4a574 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10b4a57a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a57d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10b4a580:;
  /* 10b4a580 jmp 0x10b4a9e7 */
  goto L_10b4a9e7;
L_10b4a585:;
  /* 10b4a585 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b4a588 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a589 call 0x10b4adf0 */
  push32(0x10b4a58eu); f_10b4adf0();
  /* 10b4a58e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a591 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10b4a597 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a59a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a59d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a59f je 0x10b4a5b3 */
  if (C.zf) goto L_10b4a5b3;
  /* 10b4a5a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10b4a5a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10b4a5ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10b4a5b1 jmp 0x10b4a5c1 */
  goto L_10b4a5c1;
L_10b4a5b3:;
  /* 10b4a5b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10b4a5b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10b4a5bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10b4a5c1:;
  /* 10b4a5c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10b4a5cb jmp 0x10b4a9e7 */
  goto L_10b4a9e7;
L_10b4a5d0:;
  /* 10b4a5d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b4a5d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10b4a5da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4a5dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10b4a5e0:;
  /* 10b4a5e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a5e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10b4a5e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4a5e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10b4a5ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b4a5f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a5f8 jge 0x10b4a606 */
  if ((C.sf==C.of)) goto L_10b4a606;
  /* 10b4a5fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10b4a604 jmp 0x10b4a622 */
  goto L_10b4a622;
L_10b4a606:;
  /* 10b4a606 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a60d jne 0x10b4a622 */
  if (!C.zf) goto L_10b4a622;
  /* 10b4a60f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a613 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a616 jne 0x10b4a622 */
  if (!C.zf) goto L_10b4a622;
  /* 10b4a618 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10b4a622:;
  /* 10b4a622 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4a625 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a628 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10b4a62b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4a62e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a631 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4a633 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4a636 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10b4a63c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10b4a642 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4a645 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a646 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b4a64c push edx */
  push32((uint32_t)(EDX));
  /* 10b4a64d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a651 push eax */
  push32((uint32_t)(EAX));
  /* 10b4a652 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a655 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a656 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10b4a65c push edx */
  push32((uint32_t)(EDX));
  /* 10b4a65d call dword ptr [0x10b6d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6d3a0))), 0x10b4a663u);
  /* 10b4a663 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a669 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a66e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a670 je 0x10b4a688 */
  if (C.zf) goto L_10b4a688;
  /* 10b4a672 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a679 jne 0x10b4a688 */
  if (!C.zf) goto L_10b4a688;
  /* 10b4a67b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a67e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a67f call dword ptr [0x10b6d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6d3ac))), 0x10b4a685u);
  /* 10b4a685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4a688:;
  /* 10b4a688 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b4a68c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a68f jne 0x10b4a6aa */
  if (!C.zf) goto L_10b4a6aa;
  /* 10b4a691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a694 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a69b jne 0x10b4a6aa */
  if (!C.zf) goto L_10b4a6aa;
  /* 10b4a69d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a6a1 call dword ptr [0x10b6d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6d3a4))), 0x10b4a6a7u);
  /* 10b4a6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4a6aa:;
  /* 10b4a6aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a6ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4a6b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a6b3 jne 0x10b4a6c7 */
  if (!C.zf) goto L_10b4a6c7;
  /* 10b4a6b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a6b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a6bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4a6be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a6c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a6c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10b4a6c7:;
  /* 10b4a6c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a6ca push eax */
  push32((uint32_t)(EAX));
  /* 10b4a6cb call 0x10b45e50 */
  push32(0x10b4a6d0u); f_10b45e50();
  /* 10b4a6d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a6d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b4a6d6 jmp 0x10b4a9e7 */
  goto L_10b4a9e7;
L_10b4a6db:;
  /* 10b4a6db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a6de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a6e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4a6e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10b4a6ee jmp 0x10b4a775 */
  goto L_10b4a775;
L_10b4a6f3:;
  /* 10b4a6f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10b4a6fd jmp 0x10b4a775 */
  goto L_10b4a775;
L_10b4a6ff:;
  /* 10b4a6ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10b4a709:;
  /* 10b4a709 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10b4a713 jmp 0x10b4a71f */
  goto L_10b4a71f;
L_10b4a715:;
  /* 10b4a715 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10b4a71f:;
  /* 10b4a71f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10b4a729 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a72c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a732 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a734 je 0x10b4a753 */
  if (C.zf) goto L_10b4a753;
  /* 10b4a736 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10b4a73d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10b4a743 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a746 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10b4a74c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10b4a753:;
  /* 10b4a753 jmp 0x10b4a775 */
  goto L_10b4a775;
L_10b4a755:;
  /* 10b4a755 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10b4a75f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a762 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a768 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4a76a je 0x10b4a775 */
  if (C.zf) goto L_10b4a775;
  /* 10b4a76c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a76f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a772 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4a775:;
  /* 10b4a775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a778 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a77d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a77f je 0x10b4a79e */
  if (C.zf) goto L_10b4a79e;
  /* 10b4a781 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b4a784 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a785 call 0x10b4ae10 */
  push32(0x10b4a78au); f_10b4ae10();
  /* 10b4a78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a78d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b4a793 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10b4a799 jmp 0x10b4a82f */
  goto L_10b4a82f;
L_10b4a79e:;
  /* 10b4a79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a7a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a7a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a7a6 je 0x10b4a7f0 */
  if (C.zf) goto L_10b4a7f0;
  /* 10b4a7a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a7ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a7ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a7b0 je 0x10b4a7d0 */
  if (C.zf) goto L_10b4a7d0;
  /* 10b4a7b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b4a7b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a7b6 call 0x10b4adf0 */
  push32(0x10b4a7bbu); f_10b4adf0();
  /* 10b4a7bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a7be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10b4a7c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4a7c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b4a7c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10b4a7ce jmp 0x10b4a7ee */
  goto L_10b4a7ee;
L_10b4a7d0:;
  /* 10b4a7d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b4a7d3 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a7d4 call 0x10b4adf0 */
  push32(0x10b4a7d9u); f_10b4adf0();
  /* 10b4a7d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a7dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a7e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4a7e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b4a7e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10b4a7ee:;
  /* 10b4a7ee jmp 0x10b4a82f */
  goto L_10b4a82f;
L_10b4a7f0:;
  /* 10b4a7f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a7f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a7f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a7f8 je 0x10b4a815 */
  if (C.zf) goto L_10b4a815;
  /* 10b4a7fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b4a7fd push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a7fe call 0x10b4adf0 */
  push32(0x10b4a803u); f_10b4adf0();
  /* 10b4a803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a806 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4a807 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b4a80d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10b4a813 jmp 0x10b4a82f */
  goto L_10b4a82f;
L_10b4a815:;
  /* 10b4a815 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b4a818 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a819 call 0x10b4adf0 */
  push32(0x10b4a81eu); f_10b4adf0();
  /* 10b4a81e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a821 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a823 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b4a829 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10b4a82f:;
  /* 10b4a82f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a832 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a835 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a837 je 0x10b4a877 */
  if (C.zf) goto L_10b4a877;
  /* 10b4a839 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a840 jg 0x10b4a877 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4a877;
  /* 10b4a842 jl 0x10b4a84d */
  if ((C.sf!=C.of)) goto L_10b4a84d;
  /* 10b4a844 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a84b jae 0x10b4a877 */
  if (!C.cf) goto L_10b4a877;
L_10b4a84d:;
  /* 10b4a84d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10b4a853 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4a855 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10b4a85b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a85e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4a860 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b4a866 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10b4a86c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a86f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b4a872 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4a875 jmp 0x10b4a88f */
  goto L_10b4a88f;
L_10b4a877:;
  /* 10b4a877 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10b4a87d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b4a883 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10b4a889 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10b4a88f:;
  /* 10b4a88f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a892 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a898 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a89a jne 0x10b4a8b7 */
  if (!C.zf) goto L_10b4a8b7;
  /* 10b4a89c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b4a8a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10b4a8a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a8ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b4a8b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10b4a8b7:;
  /* 10b4a8b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a8be jge 0x10b4a8cc */
  if ((C.sf==C.of)) goto L_10b4a8cc;
  /* 10b4a8c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10b4a8ca jmp 0x10b4a8d5 */
  goto L_10b4a8d5;
L_10b4a8cc:;
  /* 10b4a8cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a8cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4a8d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4a8d5:;
  /* 10b4a8d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b4a8db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a8e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a8e3 jne 0x10b4a8ec */
  if (!C.zf) goto L_10b4a8ec;
  /* 10b4a8e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b4a8ec:;
  /* 10b4a8ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10b4a8ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b4a8f2:;
  /* 10b4a8f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b4a8f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b4a8fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a901 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10b4a907 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4a909 jg 0x10b4a91f */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4a91f;
  /* 10b4a90b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b4a911 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10b4a917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4a919 je 0x10b4a9a0 */
  if (C.zf) goto L_10b4a9a0;
L_10b4a91f:;
  /* 10b4a91f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10b4a925 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4a926 push edx */
  push32((uint32_t)(EDX));
  /* 10b4a927 push eax */
  push32((uint32_t)(EAX));
  /* 10b4a928 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10b4a92e push edx */
  push32((uint32_t)(EDX));
  /* 10b4a92f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b4a935 push eax */
  push32((uint32_t)(EAX));
  /* 10b4a936 call 0x10b49cb0 */
  push32(0x10b4a93bu); f_10b49cb0();
  /* 10b4a93b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a93e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10b4a944 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10b4a94a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4a94b push edx */
  push32((uint32_t)(EDX));
  /* 10b4a94c push eax */
  push32((uint32_t)(EAX));
  /* 10b4a94d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10b4a953 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4a954 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b4a95a push edx */
  push32((uint32_t)(EDX));
  /* 10b4a95b call 0x10b49c40 */
  push32(0x10b4a960u); f_10b49c40();
  /* 10b4a960 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b4a966 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10b4a96c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a973 jle 0x10b4a987 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4a987;
  /* 10b4a975 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10b4a97b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a981 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10b4a987:;
  /* 10b4a987 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a98a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10b4a990 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10b4a992 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a995 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a998 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4a99b jmp 0x10b4a8f2 */
  goto L_10b4a8f2;
L_10b4a9a0:;
  /* 10b4a9a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10b4a9a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a9a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b4a9a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a9ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a9af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b4a9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a9b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a9ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a9bc je 0x10b4a9e7 */
  if (C.zf) goto L_10b4a9e7;
  /* 10b4a9be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a9c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4a9c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a9c7 jne 0x10b4a9cf */
  if (!C.zf) goto L_10b4a9cf;
  /* 10b4a9c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a9cd jne 0x10b4a9e7 */
  if (!C.zf) goto L_10b4a9e7;
L_10b4a9cf:;
  /* 10b4a9cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a9d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4a9d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4a9d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4a9db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10b4a9de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4a9e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4a9e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10b4a9e7:;
  /* 10b4a9e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4a9ee jne 0x10b4abc2 */
  if (!C.zf) goto L_10b4abc2;
  /* 10b4a9f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4a9f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4a9fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4a9fc je 0x10b4aa4d */
  if (C.zf) goto L_10b4aa4d;
  /* 10b4a9fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4aa01 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4aa07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4aa09 je 0x10b4aa1b */
  if (C.zf) goto L_10b4aa1b;
  /* 10b4aa0b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10b4aa12 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b4aa19 jmp 0x10b4aa4d */
  goto L_10b4aa4d;
L_10b4aa1b:;
  /* 10b4aa1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4aa1e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4aa21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4aa23 je 0x10b4aa35 */
  if (C.zf) goto L_10b4aa35;
  /* 10b4aa25 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10b4aa2c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b4aa33 jmp 0x10b4aa4d */
  goto L_10b4aa4d;
L_10b4aa35:;
  /* 10b4aa35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4aa38 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4aa3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4aa3d je 0x10b4aa4d */
  if (C.zf) goto L_10b4aa4d;
  /* 10b4aa3f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10b4aa46 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10b4aa4d:;
  /* 10b4aa4d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b4aa53 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4aa56 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4aa59 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10b4aa5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4aa62 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4aa65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4aa67 jne 0x10b4aa85 */
  if (!C.zf) goto L_10b4aa85;
  /* 10b4aa69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b4aa6f push eax */
  push32((uint32_t)(EAX));
  /* 10b4aa70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4aa73 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4aa74 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10b4aa7a push edx */
  push32((uint32_t)(EDX));
  /* 10b4aa7b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b4aa7d call 0x10b4ad60 */
  push32(0x10b4aa82u); f_10b4ad60();
  /* 10b4aa82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4aa85:;
  /* 10b4aa85 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b4aa8b push eax */
  push32((uint32_t)(EAX));
  /* 10b4aa8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4aa8f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4aa90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4aa93 push edx */
  push32((uint32_t)(EDX));
  /* 10b4aa94 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10b4aa9a push eax */
  push32((uint32_t)(EAX));
  /* 10b4aa9b call 0x10b4ada0 */
  push32(0x10b4aaa0u); f_10b4ada0();
  /* 10b4aaa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4aaa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4aaa6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4aaa9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4aaab je 0x10b4aad3 */
  if (C.zf) goto L_10b4aad3;
  /* 10b4aaad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4aab0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4aab3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4aab5 jne 0x10b4aad3 */
  if (!C.zf) goto L_10b4aad3;
  /* 10b4aab7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b4aabd push eax */
  push32((uint32_t)(EAX));
  /* 10b4aabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4aac1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4aac2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10b4aac8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4aac9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b4aacb call 0x10b4ad60 */
  push32(0x10b4aad0u); f_10b4ad60();
  /* 10b4aad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4aad3:;
  /* 10b4aad3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4aad7 je 0x10b4ab81 */
  if (C.zf) goto L_10b4ab81;
  /* 10b4aadd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4aae1 jle 0x10b4ab81 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4ab81;
  /* 10b4aae7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4aaea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10b4aaf0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4aaf3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10b4aaf9:;
  /* 10b4aaf9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10b4aaff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10b4ab05 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ab08 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10b4ab0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4ab10 je 0x10b4ab7f */
  if (C.zf) goto L_10b4ab7f;
  /* 10b4ab12 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10b4ab18 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b4ab1b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10b4ab22 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10b4ab29 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ab2a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10b4ab30 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ab31 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10b4ab37 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ab3a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10b4ab40 call 0x10b4bf10 */
  push32(0x10b4ab45u); f_10b4bf10();
  /* 10b4ab45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ab48 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10b4ab4e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ab55 jg 0x10b4ab59 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4ab59;
  /* 10b4ab57 jmp 0x10b4ab7f */
  goto L_10b4ab7f;
L_10b4ab59:;
  /* 10b4ab59 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b4ab5f push eax */
  push32((uint32_t)(EAX));
  /* 10b4ab60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ab63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ab64 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10b4ab6a push edx */
  push32((uint32_t)(EDX));
  /* 10b4ab6b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10b4ab71 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ab72 call 0x10b4ada0 */
  push32(0x10b4ab77u); f_10b4ada0();
  /* 10b4ab77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ab7a jmp 0x10b4aaf9 */
  goto L_10b4aaf9;
L_10b4ab7f:;
  /* 10b4ab7f jmp 0x10b4ab9c */
  goto L_10b4ab9c;
L_10b4ab81:;
  /* 10b4ab81 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10b4ab87 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ab88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ab8b push edx */
  push32((uint32_t)(EDX));
  /* 10b4ab8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4ab8f push eax */
  push32((uint32_t)(EAX));
  /* 10b4ab90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4ab93 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ab94 call 0x10b4ada0 */
  push32(0x10b4ab99u); f_10b4ada0();
  /* 10b4ab99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4ab9c:;
  /* 10b4ab9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ab9f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4aba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4aba4 je 0x10b4abc2 */
  if (C.zf) goto L_10b4abc2;
  /* 10b4aba6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b4abac push eax */
  push32((uint32_t)(EAX));
  /* 10b4abad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4abb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4abb1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10b4abb7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4abb8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b4abba call 0x10b4ad60 */
  push32(0x10b4abbfu); f_10b4ad60();
  /* 10b4abbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4abc2:;
  /* 10b4abc2 jmp 0x10b49fd4 */
  goto L_10b49fd4;
L_10b4abc7:;
  /* 10b4abc7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10b4abcd pop edi */
  EDI = (pop32());
  /* 10b4abce pop esi */
  ESI = (pop32());
  /* 10b4abcf pop ebx */
  EBX = (pop32());
  /* 10b4abd0 mov esp, ebp */
  ESP = (EBP);
  /* 10b4abd2 pop ebp */
  EBP = (pop32());
  /* 10b4abd3 ret  */
  ESPCHK(0x10b49fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x10b4ace0 (119 bytes, 44 insns) */
void f_10b4ace0(void) {
  FTRACE(0x10b4ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ace1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ace3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ace4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ace7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b4acea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4aced mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4acf0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b4acf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4acf6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4acfa jl 0x10b4ad22 */
  if ((C.sf!=C.of)) goto L_10b4ad22;
  /* 10b4acfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4acff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4ad01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b4ad04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10b4ad06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10b4ad0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ad10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4ad13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ad16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4ad18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ad1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ad1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b4ad20 jmp 0x10b4ad35 */
  goto L_10b4ad35;
L_10b4ad22:;
  /* 10b4ad22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ad25 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ad26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ad29 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ad2a call 0x10b49d30 */
  push32(0x10b4ad2fu); f_10b49d30();
  /* 10b4ad2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ad32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4ad35:;
  /* 10b4ad35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ad39 jne 0x10b4ad46 */
  if (!C.zf) goto L_10b4ad46;
  /* 10b4ad3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4ad3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b4ad44 jmp 0x10b4ad53 */
  goto L_10b4ad53;
L_10b4ad46:;
  /* 10b4ad46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4ad49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4ad4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ad4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4ad51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10b4ad53:;
  /* 10b4ad53 mov esp, ebp */
  ESP = (EBP);
  /* 10b4ad55 pop ebp */
  EBP = (pop32());
  /* 10b4ad56 ret  */
  ESPCHK(0x10b4ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad60 @ 0x10b4ad60 (53 bytes, 23 insns) */
void f_10b4ad60(void) {
  FTRACE(0x10b4ad60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ad60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ad61 mov ebp, esp */
  EBP = (ESP);
L_10b4ad63:;
  /* 10b4ad63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ad66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ad69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ad6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b4ad6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ad71 jle 0x10b4ad93 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4ad93;
  /* 10b4ad73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4ad76 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ad77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4ad7a push eax */
  push32((uint32_t)(EAX));
  /* 10b4ad7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ad7e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ad7f call 0x10b4ace0 */
  push32(0x10b4ad84u); f_10b4ace0();
  /* 10b4ad84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ad87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4ad8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ad8d jne 0x10b4ad91 */
  if (!C.zf) goto L_10b4ad91;
  /* 10b4ad8f jmp 0x10b4ad93 */
  goto L_10b4ad93;
L_10b4ad91:;
  /* 10b4ad91 jmp 0x10b4ad63 */
  goto L_10b4ad63;
L_10b4ad93:;
  /* 10b4ad93 pop ebp */
  EBP = (pop32());
  /* 10b4ad94 ret  */
  ESPCHK(0x10b4ad60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x10b4ada0 (74 bytes, 31 insns) */
void f_10b4ada0(void) {
  FTRACE(0x10b4ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ada1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ada3 push ecx */
  push32((uint32_t)(ECX));
L_10b4ada4:;
  /* 10b4ada4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ada7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4adaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4adad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b4adb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4adb2 jle 0x10b4ade6 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4ade6;
  /* 10b4adb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4adb7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4adb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4adbb push eax */
  push32((uint32_t)(EAX));
  /* 10b4adbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4adbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4adc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4adc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4adc8 push eax */
  push32((uint32_t)(EAX));
  /* 10b4adc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4adcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4adcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b4add2 call 0x10b4ace0 */
  push32(0x10b4add7u); f_10b4ace0();
  /* 10b4add7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4adda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4addd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ade0 jne 0x10b4ade4 */
  if (!C.zf) goto L_10b4ade4;
  /* 10b4ade2 jmp 0x10b4ade6 */
  goto L_10b4ade6;
L_10b4ade4:;
  /* 10b4ade4 jmp 0x10b4ada4 */
  goto L_10b4ada4;
L_10b4ade6:;
  /* 10b4ade6 mov esp, ebp */
  ESP = (EBP);
  /* 10b4ade8 pop ebp */
  EBP = (pop32());
  /* 10b4ade9 ret  */
  ESPCHK(0x10b4ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adf0 @ 0x10b4adf0 (26 bytes, 12 insns) */
void f_10b4adf0(void) {
  FTRACE(0x10b4adf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4adf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4adf1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4adf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4adf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4adf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4adfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4adfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b4ae00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4ae05 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b4ae08 pop ebp */
  EBP = (pop32());
  /* 10b4ae09 ret  */
  ESPCHK(0x10b4adf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae10 @ 0x10b4ae10 (31 bytes, 14 insns) */
void f_10b4ae10(void) {
  FTRACE(0x10b4ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ae10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ae11 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ae13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4ae18 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ae1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b4ae20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4ae25 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ae28 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b4ae2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4ae2d pop ebp */
  EBP = (pop32());
  /* 10b4ae2e ret  */
  ESPCHK(0x10b4ae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae30 @ 0x10b4ae30 (27 bytes, 12 insns) */
void f_10b4ae30(void) {
  FTRACE(0x10b4ae30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ae30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ae31 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ae33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4ae38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ae3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b4ae40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4ae45 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10b4ae49 pop ebp */
  EBP = (pop32());
  /* 10b4ae4a ret  */
  ESPCHK(0x10b4ae30u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10b4ae50 (145 bytes, 42 insns) */
void f_10b4ae50(void) {
  FTRACE(0x10b4ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ae50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ae51 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ae53 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ae54 call 0x10b4af00 */
  push32(0x10b4ae59u); f_10b4af00();
  /* 10b4ae59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b4ae5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4ae65 jmp 0x10b4ae70 */
  goto L_10b4ae70;
L_10b4ae67:;
  /* 10b4ae67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ae6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ae6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4ae70:;
  /* 10b4ae70 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ae74 jae 0x10b4ae9a */
  if (!C.cf) goto L_10b4ae9a;
  /* 10b4ae76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ae79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ae7c cmp ecx, dword ptr [eax*8 + 0x10b6cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10b6cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ae83 jne 0x10b4ae98 */
  if (!C.zf) goto L_10b4ae98;
  /* 10b4ae85 call 0x10b4aef0 */
  push32(0x10b4ae8au); f_10b4aef0();
  /* 10b4ae8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ae8d mov ecx, dword ptr [edx*8 + 0x10b6cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10b6cfbc)));
  /* 10b4ae94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b4ae96 jmp 0x10b4aedd */
  goto L_10b4aedd;
L_10b4ae98:;
  /* 10b4ae98 jmp 0x10b4ae67 */
  goto L_10b4ae67;
L_10b4ae9a:;
  /* 10b4ae9a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ae9e jb 0x10b4aeb3 */
  if (C.cf) goto L_10b4aeb3;
  /* 10b4aea0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4aea4 ja 0x10b4aeb3 */
  if ((!C.cf&&!C.zf)) goto L_10b4aeb3;
  /* 10b4aea6 call 0x10b4aef0 */
  push32(0x10b4aeabu); f_10b4aef0();
  /* 10b4aeab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10b4aeb1 jmp 0x10b4aedd */
  goto L_10b4aedd;
L_10b4aeb3:;
  /* 10b4aeb3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4aeba jb 0x10b4aed2 */
  if (C.cf) goto L_10b4aed2;
  /* 10b4aebc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4aec3 ja 0x10b4aed2 */
  if ((!C.cf&&!C.zf)) goto L_10b4aed2;
  /* 10b4aec5 call 0x10b4aef0 */
  push32(0x10b4aecau); f_10b4aef0();
  /* 10b4aeca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10b4aed0 jmp 0x10b4aedd */
  goto L_10b4aedd;
L_10b4aed2:;
  /* 10b4aed2 call 0x10b4aef0 */
  push32(0x10b4aed7u); f_10b4aef0();
  /* 10b4aed7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10b4aedd:;
  /* 10b4aedd mov esp, ebp */
  ESP = (EBP);
  /* 10b4aedf pop ebp */
  EBP = (pop32());
  /* 10b4aee0 ret  */
  ESPCHK(0x10b4ae50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aef0 @ 0x10b4aef0 (13 bytes, 6 insns) */
void f_10b4aef0(void) {
  FTRACE(0x10b4aef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4aef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4aef1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4aef3 call 0x10b42a60 */
  push32(0x10b4aef8u); f_10b42a60();
  /* 10b4aef8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4aefb pop ebp */
  EBP = (pop32());
  /* 10b4aefc ret  */
  ESPCHK(0x10b4aef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af00 @ 0x10b4af00 (13 bytes, 6 insns) */
void f_10b4af00(void) {
  FTRACE(0x10b4af00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4af00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4af01 mov ebp, esp */
  EBP = (ESP);
  /* 10b4af03 call 0x10b42a60 */
  push32(0x10b4af08u); f_10b42a60();
  /* 10b4af08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4af0b pop ebp */
  EBP = (pop32());
  /* 10b4af0c ret  */
  ESPCHK(0x10b4af00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x10b4af10 (664 bytes, 261 insns) [15 switch table(s)] */
void f_10b4af10(void) {
  FTRACE(0x10b4af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4af10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4af11 mov ebp, esp */
  EBP = (ESP);
  /* 10b4af13 push edi */
  push32((uint32_t)(EDI));
  /* 10b4af14 push esi */
  push32((uint32_t)(ESI));
  /* 10b4af15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4af18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4af1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4af1e mov eax, ecx */
  EAX = (ECX);
  /* 10b4af20 mov edx, ecx */
  EDX = (ECX);
  /* 10b4af22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4af24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4af26 jbe 0x10b4af30 */
  if ((C.cf||C.zf)) goto L_10b4af30;
  /* 10b4af28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4af2a jb 0x10b4b0a8 */
  if (C.cf) goto L_10b4b0a8;
L_10b4af30:;
  /* 10b4af30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b4af36 jne 0x10b4af4c */
  if (!C.zf) goto L_10b4af4c;
  /* 10b4af38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4af3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4af3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4af41 jb 0x10b4af6c */
  if (C.cf) goto L_10b4af6c;
  /* 10b4af43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4af45 jmp dword ptr [edx*4 + 0x10b4b058] */
  switch (EDX) {
    case 0: goto L_10b4b068;
    case 1: goto L_10b4b070;
    case 2: goto L_10b4b07c;
    case 3: goto L_10b4b090;
    default: x86_unimpl("switch@0x10b4af45 out of table"); return;
  }
L_10b4af4c:;
  /* 10b4af4c mov eax, edi */
  EAX = (EDI);
  /* 10b4af4e mov edx, 3 */
  EDX = (0x3u);
  /* 10b4af53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4af56 jb 0x10b4af64 */
  if (C.cf) goto L_10b4af64;
  /* 10b4af58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4af5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4af5d jmp dword ptr [eax*4 + 0x10b4af70] */
  switch (EAX) {
    case 1: goto L_10b4af80;
    case 2: goto L_10b4afac;
    case 3: goto L_10b4afd0;
    default: x86_unimpl("switch@0x10b4af5d out of table"); return;
  }
L_10b4af64:;
  /* 10b4af64 jmp dword ptr [ecx*4 + 0x10b4b068] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b4b068)))); return;
  /* 10b4af6b nop  */
  /* nop */
L_10b4af6c:;
  /* 10b4af6c jmp dword ptr [ecx*4 + 0x10b4afec] */
  switch (ECX) {
    case 0: goto L_10b4b04f;
    case 1: goto L_10b4b03c;
    case 2: goto L_10b4b034;
    case 3: goto L_10b4b02c;
    case 4: goto L_10b4b024;
    case 5: goto L_10b4b01c;
    case 6: goto L_10b4b014;
    case 7: goto L_10b4b00c;
    default: x86_unimpl("switch@0x10b4af6c out of table"); return;
  }
  /* 10b4af73 nop  */
  /* nop */
L_10b4af80:;
  /* 10b4af80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4af82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4af84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4af86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b4af89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4af8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4af8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4af92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b4af95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4af98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4af9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4af9e jb 0x10b4af6c */
  if (C.cf) goto L_10b4af6c;
  /* 10b4afa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4afa2 jmp dword ptr [edx*4 + 0x10b4b058] */
  switch (EDX) {
    case 0: goto L_10b4b068;
    case 1: goto L_10b4b070;
    case 2: goto L_10b4b07c;
    case 3: goto L_10b4b090;
    default: x86_unimpl("switch@0x10b4afa2 out of table"); return;
  }
  /* 10b4afa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4afac:;
  /* 10b4afac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4afae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4afb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4afb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b4afb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4afb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4afbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4afbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4afc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4afc4 jb 0x10b4af6c */
  if (C.cf) goto L_10b4af6c;
  /* 10b4afc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4afc8 jmp dword ptr [edx*4 + 0x10b4b058] */
  switch (EDX) {
    case 0: goto L_10b4b068;
    case 1: goto L_10b4b070;
    case 2: goto L_10b4b07c;
    case 3: goto L_10b4b090;
    default: x86_unimpl("switch@0x10b4afc8 out of table"); return;
  }
  /* 10b4afcf nop  */
  /* nop */
L_10b4afd0:;
  /* 10b4afd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4afd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4afd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4afd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b4afd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4afda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b4afdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4afde jb 0x10b4af6c */
  if (C.cf) goto L_10b4af6c;
  /* 10b4afe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4afe2 jmp dword ptr [edx*4 + 0x10b4b058] */
  switch (EDX) {
    case 0: goto L_10b4b068;
    case 1: goto L_10b4b070;
    case 2: goto L_10b4b07c;
    case 3: goto L_10b4b090;
    default: x86_unimpl("switch@0x10b4afe2 out of table"); return;
  }
  /* 10b4afe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4b00c:;
  /* 10b4b00c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b4b010 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b4b014:;
  /* 10b4b014 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b4b018 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b4b01c:;
  /* 10b4b01c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b4b020 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b4b024:;
  /* 10b4b024 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b4b028 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b4b02c:;
  /* 10b4b02c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b4b030 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b4b034:;
  /* 10b4b034 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b4b038 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b4b03c:;
  /* 10b4b03c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b4b040 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b4b044 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b4b04b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b04d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b4b04f:;
  /* 10b4b04f jmp dword ptr [edx*4 + 0x10b4b058] */
  switch (EDX) {
    case 0: goto L_10b4b068;
    case 1: goto L_10b4b070;
    case 2: goto L_10b4b07c;
    case 3: goto L_10b4b090;
    default: x86_unimpl("switch@0x10b4b04f out of table"); return;
  }
  /* 10b4b056 mov edi, edi */
  EDI = (EDI);
L_10b4b068:;
  /* 10b4b068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b06b pop esi */
  ESI = (pop32());
  /* 10b4b06c pop edi */
  EDI = (pop32());
  /* 10b4b06d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b06e ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b06f nop  */
  /* nop */
L_10b4b070:;
  /* 10b4b070 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4b072 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4b074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b077 pop esi */
  ESI = (pop32());
  /* 10b4b078 pop edi */
  EDI = (pop32());
  /* 10b4b079 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b07a ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b07b nop  */
  /* nop */
L_10b4b07c:;
  /* 10b4b07c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4b07e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4b080 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b4b083 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4b086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b089 pop esi */
  ESI = (pop32());
  /* 10b4b08a pop edi */
  EDI = (pop32());
  /* 10b4b08b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b08c ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b08d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4b090:;
  /* 10b4b090 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4b092 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b4b094 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b4b097 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4b09a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4b09d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b4b0a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b0a3 pop esi */
  ESI = (pop32());
  /* 10b4b0a4 pop edi */
  EDI = (pop32());
  /* 10b4b0a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b0a6 ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b0a7 nop  */
  /* nop */
L_10b4b0a8:;
  /* 10b4b0a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b4b0ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b4b0b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b4b0b6 jne 0x10b4b0dc */
  if (!C.zf) goto L_10b4b0dc;
  /* 10b4b0b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4b0bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b0be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b0c1 jb 0x10b4b0d0 */
  if (C.cf) goto L_10b4b0d0;
  /* 10b4b0c3 std  */
  C.df=1;
  /* 10b4b0c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4b0c6 cld  */
  C.df=0;
  /* 10b4b0c7 jmp dword ptr [edx*4 + 0x10b4b1f0] */
  switch (EDX) {
    case 0: goto L_10b4b200;
    case 1: goto L_10b4b208;
    case 2: goto L_10b4b218;
    case 3: goto L_10b4b22c;
    default: x86_unimpl("switch@0x10b4b0c7 out of table"); return;
  }
  /* 10b4b0ce mov edi, edi */
  EDI = (EDI);
L_10b4b0d0:;
  /* 10b4b0d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4b0d2 jmp dword ptr [ecx*4 + 0x10b4b1a0] */
  switch (ECX) {
    case 0: goto L_10b4b1e7;
    default: x86_unimpl("switch@0x10b4b0d2 out of table"); return;
  }
  /* 10b4b0d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4b0dc:;
  /* 10b4b0dc mov eax, edi */
  EAX = (EDI);
  /* 10b4b0de mov edx, 3 */
  EDX = (0x3u);
  /* 10b4b0e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b0e6 jb 0x10b4b0f4 */
  if (C.cf) goto L_10b4b0f4;
  /* 10b4b0e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b0eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b0ed jmp dword ptr [eax*4 + 0x10b4b0f8] */
  switch (EAX) {
    case 1: goto L_10b4b108;
    case 2: goto L_10b4b128;
    case 3: goto L_10b4b150;
    default: x86_unimpl("switch@0x10b4b0ed out of table"); return;
  }
L_10b4b0f4:;
  /* 10b4b0f4 jmp dword ptr [ecx*4 + 0x10b4b1f0] */
  switch (ECX) {
    case 0: goto L_10b4b200;
    case 1: goto L_10b4b208;
    case 2: goto L_10b4b218;
    case 3: goto L_10b4b22c;
    default: x86_unimpl("switch@0x10b4b0f4 out of table"); return;
  }
  /* 10b4b0fb nop  */
  /* nop */
L_10b4b108:;
  /* 10b4b108 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b4b10b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b10d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b4b110 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b4b111 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4b114 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b4b115 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b118 jb 0x10b4b0d0 */
  if (C.cf) goto L_10b4b0d0;
  /* 10b4b11a std  */
  C.df=1;
  /* 10b4b11b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4b11d cld  */
  C.df=0;
  /* 10b4b11e jmp dword ptr [edx*4 + 0x10b4b1f0] */
  switch (EDX) {
    case 0: goto L_10b4b200;
    case 1: goto L_10b4b208;
    case 2: goto L_10b4b218;
    case 3: goto L_10b4b22c;
    default: x86_unimpl("switch@0x10b4b11e out of table"); return;
  }
  /* 10b4b125 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4b128:;
  /* 10b4b128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b4b12b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b12d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b4b130 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4b133 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4b136 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b4b139 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b13c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b13f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b142 jb 0x10b4b0d0 */
  if (C.cf) goto L_10b4b0d0;
  /* 10b4b144 std  */
  C.df=1;
  /* 10b4b145 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4b147 cld  */
  C.df=0;
  /* 10b4b148 jmp dword ptr [edx*4 + 0x10b4b1f0] */
  switch (EDX) {
    case 0: goto L_10b4b200;
    case 1: goto L_10b4b208;
    case 2: goto L_10b4b218;
    case 3: goto L_10b4b22c;
    default: x86_unimpl("switch@0x10b4b148 out of table"); return;
  }
  /* 10b4b14f nop  */
  /* nop */
L_10b4b150:;
  /* 10b4b150 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b4b153 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b155 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b4b158 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4b15b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b4b15e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b4b161 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b4b164 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4b167 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b16a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b16d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b170 jb 0x10b4b0d0 */
  if (C.cf) goto L_10b4b0d0;
  /* 10b4b176 std  */
  C.df=1;
  /* 10b4b177 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b4b179 cld  */
  C.df=0;
  /* 10b4b17a jmp dword ptr [edx*4 + 0x10b4b1f0] */
  switch (EDX) {
    case 0: goto L_10b4b200;
    case 1: goto L_10b4b208;
    case 2: goto L_10b4b218;
    case 3: goto L_10b4b22c;
    default: x86_unimpl("switch@0x10b4b17a out of table"); return;
  }
  /* 10b4b181 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b4b184 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10b4b185 mov cl, 0xb4 */
  CL = (0xb4u);
  /* 10b4b187 adc byte ptr [ecx + esi*4 - 0x4e4bef4c], ch */
  { uint32_t _a=(r8((uint32_t)(ECX + ESI*4 + -0x4e4bef4c))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ESI*4 + -0x4e4bef4c), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b4b18e mov ah, 0x10 */
  AH = (0x10u);
  /* 10b4b190 mov esp, 0xc410b4b1 */
  ESP = (0xc410b4b1u);
  /* 10b4b195 mov cl, 0xb4 */
  CL = (0xb4u);
  /* 10b4b197 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4b199 mov cl, 0xb4 */
  CL = (0xb4u);
  /* 10b4b19b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4b19d mov cl, 0xb4 */
  CL = (0xb4u);
  /* 10b4b1a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b4b1a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b4b1ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b4b1b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b4b1b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b4b1b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b4b1bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b4b1c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b4b1c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b4b1c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b4b1cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b4b1d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b4b1d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b4b1d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b4b1dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b4b1e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b1e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b4b1e7:;
  /* 10b4b1e7 jmp dword ptr [edx*4 + 0x10b4b1f0] */
  switch (EDX) {
    case 0: goto L_10b4b200;
    case 1: goto L_10b4b208;
    case 2: goto L_10b4b218;
    case 3: goto L_10b4b22c;
    default: x86_unimpl("switch@0x10b4b1e7 out of table"); return;
  }
  /* 10b4b1ee mov edi, edi */
  EDI = (EDI);
L_10b4b200:;
  /* 10b4b200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b203 pop esi */
  ESI = (pop32());
  /* 10b4b204 pop edi */
  EDI = (pop32());
  /* 10b4b205 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b206 ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b207 nop  */
  /* nop */
L_10b4b208:;
  /* 10b4b208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b4b20b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b4b20e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b211 pop esi */
  ESI = (pop32());
  /* 10b4b212 pop edi */
  EDI = (pop32());
  /* 10b4b213 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b214 ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b215 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4b218:;
  /* 10b4b218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b4b21b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b4b21e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4b221 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b4b224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b227 pop esi */
  ESI = (pop32());
  /* 10b4b228 pop edi */
  EDI = (pop32());
  /* 10b4b229 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b22a ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
  /* 10b4b22b nop  */
  /* nop */
L_10b4b22c:;
  /* 10b4b22c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b4b22f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b4b232 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b4b235 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b4b238 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b4b23b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b4b23e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b241 pop esi */
  ESI = (pop32());
  /* 10b4b242 pop edi */
  EDI = (pop32());
  /* 10b4b243 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4b244 ret  */
  ESPCHK(0x10b4af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x10b4b250 (421 bytes, 148 insns) */
void f_10b4b250(void) {
  FTRACE(0x10b4b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b250 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b251 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b253 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b4b255 push 0x10b69fd8 */
  push32((uint32_t)(0x10b69fd8u));
  /* 10b4b25a push 0x10b4c128 */
  push32((uint32_t)(0x10b4c128u));
  /* 10b4b25f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b4b265 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b266 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b4b26d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b270 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4b271 push esi */
  push32((uint32_t)(ESI));
  /* 10b4b272 push edi */
  push32((uint32_t)(EDI));
  /* 10b4b273 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b4b276 cmp dword ptr [0x10b6e64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b27d jne 0x10b4b2ce */
  if (!C.zf) goto L_10b4b2ce;
  /* 10b4b27f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b4b282 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b283 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b285 push 0x10b69fd0 */
  push32((uint32_t)(0x10b69fd0u));
  /* 10b4b28a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b28c call dword ptr [0x10b702a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a8))), 0x10b4b292u);
  /* 10b4b292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b294 je 0x10b4b2a2 */
  if (C.zf) goto L_10b4b2a2;
  /* 10b4b296 mov dword ptr [0x10b6e64c], 1 */
  w32((uint32_t)(0x10b6e64c), (0x1u));
  /* 10b4b2a0 jmp 0x10b4b2ce */
  goto L_10b4b2ce;
L_10b4b2a2:;
  /* 10b4b2a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10b4b2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b2a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b2a8 push 0x10b69fcc */
  push32((uint32_t)(0x10b69fccu));
  /* 10b4b2ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b2af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b2b1 call dword ptr [0x10b7030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7030c))), 0x10b4b2b7u);
  /* 10b4b2b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b2b9 je 0x10b4b2c7 */
  if (C.zf) goto L_10b4b2c7;
  /* 10b4b2bb mov dword ptr [0x10b6e64c], 2 */
  w32((uint32_t)(0x10b6e64c), (0x2u));
  /* 10b4b2c5 jmp 0x10b4b2ce */
  goto L_10b4b2ce;
L_10b4b2c7:;
  /* 10b4b2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b2c9 jmp 0x10b4b3f8 */
  goto L_10b4b3f8;
L_10b4b2ce:;
  /* 10b4b2ce cmp dword ptr [0x10b6e64c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e64c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b2d5 jne 0x10b4b305 */
  if (!C.zf) goto L_10b4b305;
  /* 10b4b2d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b2db jne 0x10b4b2e6 */
  if (!C.zf) goto L_10b4b2e6;
  /* 10b4b2dd mov edx, dword ptr [0x10b6e658] */
  EDX = (r32((uint32_t)(0x10b6e658)));
  /* 10b4b2e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10b4b2e6:;
  /* 10b4b2e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4b2e9 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b2ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b2ed push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b2ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b2f1 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b2f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b2f5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b2f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b4b2f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b2fa call dword ptr [0x10b7030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7030c))), 0x10b4b300u);
  /* 10b4b300 jmp 0x10b4b3f8 */
  goto L_10b4b3f8;
L_10b4b305:;
  /* 10b4b305 cmp dword ptr [0x10b6e64c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e64c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b30c jne 0x10b4b3f6 */
  if (!C.zf) goto L_10b4b3f6;
  /* 10b4b312 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b316 jne 0x10b4b321 */
  if (!C.zf) goto L_10b4b321;
  /* 10b4b318 mov edx, dword ptr [0x10b6e668] */
  EDX = (r32((uint32_t)(0x10b6e668)));
  /* 10b4b31e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10b4b321:;
  /* 10b4b321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b323 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b325 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b328 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b329 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b32c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b32d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b4b330 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4b332 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b334 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b337 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b33a push edx */
  push32((uint32_t)(EDX));
  /* 10b4b33b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4b33e push eax */
  push32((uint32_t)(EAX));
  /* 10b4b33f call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b4b345u);
  /* 10b4b345 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4b348 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b34c jne 0x10b4b355 */
  if (!C.zf) goto L_10b4b355;
  /* 10b4b34e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b350 jmp 0x10b4b3f8 */
  goto L_10b4b3f8;
L_10b4b355:;
  /* 10b4b355 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4b35c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4b35f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b4b361 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b364 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b4b366 call 0x10b461c0 */
  push32(0x10b4b36bu); f_10b461c0();
  /* 10b4b36b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10b4b36e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b4b371 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4b374 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b4b377 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4b37a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b4b37c push edx */
  push32((uint32_t)(EDX));
  /* 10b4b37d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b37f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b382 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b383 call 0x10b46d90 */
  push32(0x10b4b388u); f_10b46d90();
  /* 10b4b388 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b38b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b4b392 jmp 0x10b4b3ab */
  goto L_10b4b3ab;
  /* 10b4b394 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4b399 ret  */
  ESPCHK(0x10b4b250u, _esp0);
  ESP += 4; return;
  /* 10b4b39a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4b39d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b4b3a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b4b3ab:;
  /* 10b4b3ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b3af jne 0x10b4b3b5 */
  if (!C.zf) goto L_10b4b3b5;
  /* 10b4b3b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b3b3 jmp 0x10b4b3f8 */
  goto L_10b4b3f8;
L_10b4b3b5:;
  /* 10b4b3b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4b3b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b3b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b3bc push edx */
  push32((uint32_t)(EDX));
  /* 10b4b3bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b3c0 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b3c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b3c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b3c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4b3ca push edx */
  push32((uint32_t)(EDX));
  /* 10b4b3cb call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b4b3d1u);
  /* 10b4b3d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4b3d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b3d8 jne 0x10b4b3de */
  if (!C.zf) goto L_10b4b3de;
  /* 10b4b3da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b3dc jmp 0x10b4b3f8 */
  goto L_10b4b3f8;
L_10b4b3de:;
  /* 10b4b3de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4b3e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b3e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4b3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b3e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b3e9 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b3ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b3ed push eax */
  push32((uint32_t)(EAX));
  /* 10b4b3ee call dword ptr [0x10b702a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a8))), 0x10b4b3f4u);
  /* 10b4b3f4 jmp 0x10b4b3f8 */
  goto L_10b4b3f8;
L_10b4b3f6:;
  /* 10b4b3f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4b3f8:;
  /* 10b4b3f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10b4b3fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4b3fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b4b405 pop edi */
  EDI = (pop32());
  /* 10b4b406 pop esi */
  ESI = (pop32());
  /* 10b4b407 pop ebx */
  EBX = (pop32());
  /* 10b4b408 mov esp, ebp */
  ESP = (EBP);
  /* 10b4b40a pop ebp */
  EBP = (pop32());
  /* 10b4b40b ret  */
  ESPCHK(0x10b4b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b410 @ 0x10b4b410 (727 bytes, 263 insns) */
void f_10b4b410(void) {
  FTRACE(0x10b4b410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b410 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b411 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b413 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b4b415 push 0x10b69fe8 */
  push32((uint32_t)(0x10b69fe8u));
  /* 10b4b41a push 0x10b4c128 */
  push32((uint32_t)(0x10b4c128u));
  /* 10b4b41f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b4b425 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b426 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b4b42d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b430 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4b431 push esi */
  push32((uint32_t)(ESI));
  /* 10b4b432 push edi */
  push32((uint32_t)(EDI));
  /* 10b4b433 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b4b436 cmp dword ptr [0x10b6e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b43d jne 0x10b4b496 */
  if (!C.zf) goto L_10b4b496;
  /* 10b4b43f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b441 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b443 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b445 push 0x10b69fd0 */
  push32((uint32_t)(0x10b69fd0u));
  /* 10b4b44a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b4b44f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b451 call dword ptr [0x10b702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a0))), 0x10b4b457u);
  /* 10b4b457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b459 je 0x10b4b467 */
  if (C.zf) goto L_10b4b467;
  /* 10b4b45b mov dword ptr [0x10b6e670], 1 */
  w32((uint32_t)(0x10b6e670), (0x1u));
  /* 10b4b465 jmp 0x10b4b496 */
  goto L_10b4b496;
L_10b4b467:;
  /* 10b4b467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b469 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b46b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b46d push 0x10b69fcc */
  push32((uint32_t)(0x10b69fccu));
  /* 10b4b472 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b4b477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b479 call dword ptr [0x10b702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a4))), 0x10b4b47fu);
  /* 10b4b47f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b481 je 0x10b4b48f */
  if (C.zf) goto L_10b4b48f;
  /* 10b4b483 mov dword ptr [0x10b6e670], 2 */
  w32((uint32_t)(0x10b6e670), (0x2u));
  /* 10b4b48d jmp 0x10b4b496 */
  goto L_10b4b496;
L_10b4b48f:;
  /* 10b4b48f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b491 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b496:;
  /* 10b4b496 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b49a jle 0x10b4b4af */
  if ((C.zf||C.sf!=C.of)) goto L_10b4b4af;
  /* 10b4b49c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4b49f push eax */
  push32((uint32_t)(EAX));
  /* 10b4b4a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b4a4 call 0x10b4b720 */
  push32(0x10b4b4a9u); f_10b4b720();
  /* 10b4b4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b4ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10b4b4af:;
  /* 10b4b4af cmp dword ptr [0x10b6e670], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e670))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b4b6 jne 0x10b4b4db */
  if (!C.zf) goto L_10b4b4db;
  /* 10b4b4b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b4b4bb push edx */
  push32((uint32_t)(EDX));
  /* 10b4b4bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4b4bf push eax */
  push32((uint32_t)(EAX));
  /* 10b4b4c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4b4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b4c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b4c7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b4c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b4cb push eax */
  push32((uint32_t)(EAX));
  /* 10b4b4cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b4cf push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b4d0 call dword ptr [0x10b702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a4))), 0x10b4b4d6u);
  /* 10b4b4d6 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b4db:;
  /* 10b4b4db cmp dword ptr [0x10b6e670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b4e2 jne 0x10b4b6ff */
  if (!C.zf) goto L_10b4b6ff;
  /* 10b4b4e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b4ec jne 0x10b4b4f7 */
  if (!C.zf) goto L_10b4b4f7;
  /* 10b4b4ee mov edx, dword ptr [0x10b6e668] */
  EDX = (r32((uint32_t)(0x10b6e668)));
  /* 10b4b4f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10b4b4f7:;
  /* 10b4b4f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b4f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b4fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4b4fe push eax */
  push32((uint32_t)(EAX));
  /* 10b4b4ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b502 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b503 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b4b506 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4b508 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b50a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b50d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b510 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b511 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b4b514 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b515 call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b4b51bu);
  /* 10b4b51b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b4b51e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b522 jne 0x10b4b52b */
  if (!C.zf) goto L_10b4b52b;
  /* 10b4b524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b526 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b52b:;
  /* 10b4b52b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4b532 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4b535 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b4b537 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b53a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b4b53c call 0x10b461c0 */
  push32(0x10b4b541u); f_10b461c0();
  /* 10b4b541 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10b4b544 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b4b547 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4b54a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b4b54d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b4b554 jmp 0x10b4b56d */
  goto L_10b4b56d;
  /* 10b4b556 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4b55b ret  */
  ESPCHK(0x10b4b410u, _esp0);
  ESP += 4; return;
  /* 10b4b55c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4b55f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b4b566 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b4b56d:;
  /* 10b4b56d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b571 jne 0x10b4b57a */
  if (!C.zf) goto L_10b4b57a;
  /* 10b4b573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b575 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b57a:;
  /* 10b4b57a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4b57d push edx */
  push32((uint32_t)(EDX));
  /* 10b4b57e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b581 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b582 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4b585 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b586 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b589 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b58a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4b58c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b4b58f push eax */
  push32((uint32_t)(EAX));
  /* 10b4b590 call dword ptr [0x10b70370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70370))), 0x10b4b596u);
  /* 10b4b596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b598 jne 0x10b4b5a1 */
  if (!C.zf) goto L_10b4b5a1;
  /* 10b4b59a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b59c jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b5a1:;
  /* 10b4b5a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b5a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b5a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4b5a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b5a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b5ac push edx */
  push32((uint32_t)(EDX));
  /* 10b4b5ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b5b0 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b5b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b5b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b5b5 call dword ptr [0x10b702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a0))), 0x10b4b5bbu);
  /* 10b4b5bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4b5be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b5c2 jne 0x10b4b5cb */
  if (!C.zf) goto L_10b4b5cb;
  /* 10b4b5c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b5c6 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b5cb:;
  /* 10b4b5cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b5ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b5d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4b5d6 je 0x10b4b61b */
  if (C.zf) goto L_10b4b61b;
  /* 10b4b5d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b5dc je 0x10b4b616 */
  if (C.zf) goto L_10b4b616;
  /* 10b4b5de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4b5e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b5e4 jle 0x10b4b5ed */
  if ((C.zf||C.sf!=C.of)) goto L_10b4b5ed;
  /* 10b4b5e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b5e8 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b5ed:;
  /* 10b4b5ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b4b5f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b5f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4b5f4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b5f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4b5f8 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b5f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b5fc push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b5fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b600 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b604 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b605 call dword ptr [0x10b702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a0))), 0x10b4b60bu);
  /* 10b4b60b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b60d jne 0x10b4b616 */
  if (!C.zf) goto L_10b4b616;
  /* 10b4b60f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b611 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b616:;
  /* 10b4b616 jmp 0x10b4b6fa */
  goto L_10b4b6fa;
L_10b4b61b:;
  /* 10b4b61b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4b61e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b4b621 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b4b628 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4b62b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b4b62d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b630 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b4b632 call 0x10b461c0 */
  push32(0x10b4b637u); f_10b461c0();
  /* 10b4b637 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10b4b63a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b4b63d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b4b640 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b4b643 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b4b64a jmp 0x10b4b663 */
  goto L_10b4b663;
  /* 10b4b64c mov eax, 1 */
  EAX = (0x1u);
  /* 10b4b651 ret  */
  ESPCHK(0x10b4b410u, _esp0);
  ESP += 4; return;
  /* 10b4b652 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4b655 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b4b65c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b4b663:;
  /* 10b4b663 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b667 jne 0x10b4b670 */
  if (!C.zf) goto L_10b4b670;
  /* 10b4b669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b66b jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b670:;
  /* 10b4b670 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4b673 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b674 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4b677 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b678 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4b67b push edx */
  push32((uint32_t)(EDX));
  /* 10b4b67c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4b67f push eax */
  push32((uint32_t)(EAX));
  /* 10b4b680 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b683 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b687 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b688 call dword ptr [0x10b702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702a0))), 0x10b4b68eu);
  /* 10b4b68e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b690 jne 0x10b4b696 */
  if (!C.zf) goto L_10b4b696;
  /* 10b4b692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b694 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b696:;
  /* 10b4b696 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b69a jne 0x10b4b6ca */
  if (!C.zf) goto L_10b4b6ca;
  /* 10b4b69c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b69e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b6a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b6a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b6a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4b6a7 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b6a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4b6ab push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b6ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b4b6b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b4b6b4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b6b5 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b4b6bbu);
  /* 10b4b6bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4b6be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b6c2 jne 0x10b4b6c8 */
  if (!C.zf) goto L_10b4b6c8;
  /* 10b4b6c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b6c6 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b6c8:;
  /* 10b4b6c8 jmp 0x10b4b6fa */
  goto L_10b4b6fa;
L_10b4b6ca:;
  /* 10b4b6ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b6cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b6ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b4b6d1 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b6d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b4b6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b6d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4b6d9 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b6da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4b6dd push eax */
  push32((uint32_t)(EAX));
  /* 10b4b6de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b4b6e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b4b6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b6e7 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b4b6edu);
  /* 10b4b6ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4b6f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b6f4 jne 0x10b4b6fa */
  if (!C.zf) goto L_10b4b6fa;
  /* 10b4b6f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b6f8 jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b6fa:;
  /* 10b4b6fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4b6fd jmp 0x10b4b701 */
  goto L_10b4b701;
L_10b4b6ff:;
  /* 10b4b6ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4b701:;
  /* 10b4b701 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10b4b704 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4b707 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b4b70e pop edi */
  EDI = (pop32());
  /* 10b4b70f pop esi */
  ESI = (pop32());
  /* 10b4b710 pop ebx */
  EBX = (pop32());
  /* 10b4b711 mov esp, ebp */
  ESP = (EBP);
  /* 10b4b713 pop ebp */
  EBP = (pop32());
  /* 10b4b714 ret  */
  ESPCHK(0x10b4b410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x10b4b720 (80 bytes, 32 insns) */
void f_10b4b720(void) {
  FTRACE(0x10b4b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b720 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b721 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b726 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b729 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4b72c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b72f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4b732:;
  /* 10b4b732 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4b735 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4b738 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b73b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4b73e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4b740 je 0x10b4b757 */
  if (C.zf) goto L_10b4b757;
  /* 10b4b742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4b745 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4b748 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4b74a je 0x10b4b757 */
  if (C.zf) goto L_10b4b757;
  /* 10b4b74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4b74f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b752 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4b755 jmp 0x10b4b732 */
  goto L_10b4b732;
L_10b4b757:;
  /* 10b4b757 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4b75a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4b75d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4b75f jne 0x10b4b769 */
  if (!C.zf) goto L_10b4b769;
  /* 10b4b761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4b764 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b767 jmp 0x10b4b76c */
  goto L_10b4b76c;
L_10b4b769:;
  /* 10b4b769 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10b4b76c:;
  /* 10b4b76c mov esp, ebp */
  ESP = (EBP);
  /* 10b4b76e pop ebp */
  EBP = (pop32());
  /* 10b4b76f ret  */
  ESPCHK(0x10b4b720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x10b4b770 (130 bytes, 43 insns) */
void f_10b4b770(void) {
  FTRACE(0x10b4b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b770 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b771 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b773 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b777 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b77d jae 0x10b4b7a1 */
  if (!C.cf) goto L_10b4b7a1;
  /* 10b4b77f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b782 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4b785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b788 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b78b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4b78e mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4b795 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4b79a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4b79d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4b79f jne 0x10b4b7bc */
  if (!C.zf) goto L_10b4b7bc;
L_10b4b7a1:;
  /* 10b4b7a1 call 0x10b4aef0 */
  push32(0x10b4b7a6u); f_10b4aef0();
  /* 10b4b7a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4b7ac call 0x10b4af00 */
  push32(0x10b4b7b1u); f_10b4af00();
  /* 10b4b7b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4b7b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b7ba jmp 0x10b4b7ee */
  goto L_10b4b7ee;
L_10b4b7bc:;
  /* 10b4b7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b7bf push edx */
  push32((uint32_t)(EDX));
  /* 10b4b7c0 call 0x10b4c710 */
  push32(0x10b4b7c5u); f_10b4c710();
  /* 10b4b7c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b7c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b7cb push eax */
  push32((uint32_t)(EAX));
  /* 10b4b7cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b7cf push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b7d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b7d3 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b7d4 call 0x10b4b800 */
  push32(0x10b4b7d9u); f_10b4b800();
  /* 10b4b7d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b7dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4b7df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b7e2 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b7e3 call 0x10b4c7a0 */
  push32(0x10b4b7e8u); f_10b4c7a0();
  /* 10b4b7e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b7eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b4b7ee:;
  /* 10b4b7ee mov esp, ebp */
  ESP = (EBP);
  /* 10b4b7f0 pop ebp */
  EBP = (pop32());
  /* 10b4b7f1 ret  */
  ESPCHK(0x10b4b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x10b4b800 (178 bytes, 56 insns) */
void f_10b4b800(void) {
  FTRACE(0x10b4b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b800 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b801 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b809 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b80a call 0x10b4c590 */
  push32(0x10b4b80fu); f_10b4c590();
  /* 10b4b80f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b812 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4b815 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b819 jne 0x10b4b82e */
  if (!C.zf) goto L_10b4b82e;
  /* 10b4b81b call 0x10b4aef0 */
  push32(0x10b4b820u); f_10b4aef0();
  /* 10b4b820 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4b826 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b829 jmp 0x10b4b8ae */
  goto L_10b4b8ae;
L_10b4b82e:;
  /* 10b4b82e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b831 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b832 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b834 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b837 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b838 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4b83b push eax */
  push32((uint32_t)(EAX));
  /* 10b4b83c call dword ptr [0x10b7029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7029c))), 0x10b4b842u);
  /* 10b4b842 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4b845 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b849 jne 0x10b4b856 */
  if (!C.zf) goto L_10b4b856;
  /* 10b4b84b call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b4b851u);
  /* 10b4b851 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4b854 jmp 0x10b4b85d */
  goto L_10b4b85d;
L_10b4b856:;
  /* 10b4b856 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b4b85d:;
  /* 10b4b85d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b861 je 0x10b4b874 */
  if (C.zf) goto L_10b4b874;
  /* 10b4b863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4b866 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b867 call 0x10b4ae50 */
  push32(0x10b4b86cu); f_10b4ae50();
  /* 10b4b86c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b86f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b872 jmp 0x10b4b8ae */
  goto L_10b4b8ae;
L_10b4b874:;
  /* 10b4b874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b877 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b4b87a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b87d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b880 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4b883 mov ecx, dword ptr [edx*4 + 0x10b6fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b4b88a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10b4b88e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10b4b891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b894 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4b897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b89a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4b89d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4b8a0 mov eax, dword ptr [eax*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4b8a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10b4b8ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b4b8ae:;
  /* 10b4b8ae mov esp, ebp */
  ESP = (EBP);
  /* 10b4b8b0 pop ebp */
  EBP = (pop32());
  /* 10b4b8b1 ret  */
  ESPCHK(0x10b4b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x10b4b8c0 (130 bytes, 43 insns) */
void f_10b4b8c0(void) {
  FTRACE(0x10b4b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b8c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b8c7 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b8cd jae 0x10b4b8f1 */
  if (!C.cf) goto L_10b4b8f1;
  /* 10b4b8cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b8d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4b8d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b8d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b8db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4b8de mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4b8e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4b8ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4b8ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4b8ef jne 0x10b4b90c */
  if (!C.zf) goto L_10b4b90c;
L_10b4b8f1:;
  /* 10b4b8f1 call 0x10b4aef0 */
  push32(0x10b4b8f6u); f_10b4aef0();
  /* 10b4b8f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4b8fc call 0x10b4af00 */
  push32(0x10b4b901u); f_10b4af00();
  /* 10b4b901 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4b907 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b90a jmp 0x10b4b93e */
  goto L_10b4b93e;
L_10b4b90c:;
  /* 10b4b90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b90f push edx */
  push32((uint32_t)(EDX));
  /* 10b4b910 call 0x10b4c710 */
  push32(0x10b4b915u); f_10b4c710();
  /* 10b4b915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b918 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4b91b push eax */
  push32((uint32_t)(EAX));
  /* 10b4b91c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b91f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4b920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b923 push edx */
  push32((uint32_t)(EDX));
  /* 10b4b924 call 0x10b4b950 */
  push32(0x10b4b929u); f_10b4b950();
  /* 10b4b929 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b92c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4b92f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b932 push eax */
  push32((uint32_t)(EAX));
  /* 10b4b933 call 0x10b4c7a0 */
  push32(0x10b4b938u); f_10b4c7a0();
  /* 10b4b938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4b93b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b4b93e:;
  /* 10b4b93e mov esp, ebp */
  ESP = (EBP);
  /* 10b4b940 pop ebp */
  EBP = (pop32());
  /* 10b4b941 ret  */
  ESPCHK(0x10b4b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x10b4b950 (627 bytes, 182 insns) */
void f_10b4b950(void) {
  FTRACE(0x10b4b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4b950 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4b951 mov ebp, esp */
  EBP = (ESP);
  /* 10b4b953 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b959 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4b960 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4b963 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10b4b969 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b96d jne 0x10b4b976 */
  if (!C.zf) goto L_10b4b976;
  /* 10b4b96f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b971 jmp 0x10b4bbbf */
  goto L_10b4bbbf;
L_10b4b976:;
  /* 10b4b976 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b979 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4b97c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b97f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4b982 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4b985 mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4b98c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4b991 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4b994 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4b996 je 0x10b4b9a8 */
  if (C.zf) goto L_10b4b9a8;
  /* 10b4b998 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4b99a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4b99c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b99f push edx */
  push32((uint32_t)(EDX));
  /* 10b4b9a0 call 0x10b4b800 */
  push32(0x10b4b9a5u); f_10b4b800();
  /* 10b4b9a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4b9a8:;
  /* 10b4b9a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b9ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4b9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4b9b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4b9b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4b9b7 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4b9be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10b4b9c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4b9c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4b9ca je 0x10b4badc */
  if (C.zf) goto L_10b4badc;
  /* 10b4b9d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4b9d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4b9d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10b4b9dd:;
  /* 10b4b9dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4b9e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4b9e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4b9e6 jae 0x10b4bada */
  if (!C.cf) goto L_10b4bada;
  /* 10b4b9ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10b4b9f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b4b9f5:;
  /* 10b4b9f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4b9f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10b4b9fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ba00 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ba06 jge 0x10b4ba67 */
  if ((C.sf==C.of)) goto L_10b4ba67;
  /* 10b4ba08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ba0b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ba0e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ba11 jae 0x10b4ba67 */
  if (!C.cf) goto L_10b4ba67;
  /* 10b4ba13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ba16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b4ba18 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10b4ba1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ba21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ba24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4ba27 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10b4ba2e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ba31 jne 0x10b4ba51 */
  if (!C.zf) goto L_10b4ba51;
  /* 10b4ba33 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10b4ba39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ba3c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10b4ba42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ba45 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10b4ba48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ba4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ba4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b4ba51:;
  /* 10b4ba51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ba54 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10b4ba5a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10b4ba5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ba5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ba62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4ba65 jmp 0x10b4b9f5 */
  goto L_10b4b9f5;
L_10b4ba67:;
  /* 10b4ba67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4ba69 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10b4ba6f push edx */
  push32((uint32_t)(EDX));
  /* 10b4ba70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ba73 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10b4ba79 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ba7b push eax */
  push32((uint32_t)(EAX));
  /* 10b4ba7c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10b4ba82 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ba83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ba86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4ba89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ba8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ba8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4ba92 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4ba99 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10b4ba9c push eax */
  push32((uint32_t)(EAX));
  /* 10b4ba9d call dword ptr [0x10b702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702bc))), 0x10b4baa3u);
  /* 10b4baa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4baa5 je 0x10b4baca */
  if (C.zf) goto L_10b4baca;
  /* 10b4baa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4baaa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bab0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b4bab3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4bab6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10b4babc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4babe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bac4 jge 0x10b4bac8 */
  if ((C.sf==C.of)) goto L_10b4bac8;
  /* 10b4bac6 jmp 0x10b4bada */
  goto L_10b4bada;
L_10b4bac8:;
  /* 10b4bac8 jmp 0x10b4bad5 */
  goto L_10b4bad5;
L_10b4baca:;
  /* 10b4baca call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b4bad0u);
  /* 10b4bad0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4bad3 jmp 0x10b4bada */
  goto L_10b4bada;
L_10b4bad5:;
  /* 10b4bad5 jmp 0x10b4b9dd */
  goto L_10b4b9dd;
L_10b4bada:;
  /* 10b4bada jmp 0x10b4bb2c */
  goto L_10b4bb2c;
L_10b4badc:;
  /* 10b4badc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4bade lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10b4bae4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bae5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4bae8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4bae9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4baec push eax */
  push32((uint32_t)(EAX));
  /* 10b4baed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4baf0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4baf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4baf6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4baf9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4bafc mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4bb03 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10b4bb06 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bb07 call dword ptr [0x10b702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702bc))), 0x10b4bb0du);
  /* 10b4bb0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4bb0f je 0x10b4bb23 */
  if (C.zf) goto L_10b4bb23;
  /* 10b4bb11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b4bb18 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10b4bb1e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b4bb21 jmp 0x10b4bb2c */
  goto L_10b4bb2c;
L_10b4bb23:;
  /* 10b4bb23 call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b4bb29u);
  /* 10b4bb29 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b4bb2c:;
  /* 10b4bb2c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bb30 jne 0x10b4bbb6 */
  if (!C.zf) goto L_10b4bbb6;
  /* 10b4bb36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bb3a je 0x10b4bb6a */
  if (C.zf) goto L_10b4bb6a;
  /* 10b4bb3c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bb40 jne 0x10b4bb59 */
  if (!C.zf) goto L_10b4bb59;
  /* 10b4bb42 call 0x10b4aef0 */
  push32(0x10b4bb47u); f_10b4aef0();
  /* 10b4bb47 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4bb4d call 0x10b4af00 */
  push32(0x10b4bb52u); f_10b4af00();
  /* 10b4bb52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4bb55 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b4bb57 jmp 0x10b4bb65 */
  goto L_10b4bb65;
L_10b4bb59:;
  /* 10b4bb59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4bb5c push edx */
  push32((uint32_t)(EDX));
  /* 10b4bb5d call 0x10b4ae50 */
  push32(0x10b4bb62u); f_10b4ae50();
  /* 10b4bb62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4bb65:;
  /* 10b4bb65 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bb68 jmp 0x10b4bbbf */
  goto L_10b4bbbf;
L_10b4bb6a:;
  /* 10b4bb6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bb6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4bb70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bb73 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4bb76 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4bb79 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4bb80 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10b4bb85 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bb88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4bb8a je 0x10b4bb9b */
  if (C.zf) goto L_10b4bb9b;
  /* 10b4bb8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4bb8f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4bb92 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bb95 jne 0x10b4bb9b */
  if (!C.zf) goto L_10b4bb9b;
  /* 10b4bb97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bb99 jmp 0x10b4bbbf */
  goto L_10b4bbbf;
L_10b4bb9b:;
  /* 10b4bb9b call 0x10b4aef0 */
  push32(0x10b4bba0u); f_10b4aef0();
  /* 10b4bba0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10b4bba6 call 0x10b4af00 */
  push32(0x10b4bbabu); f_10b4af00();
  /* 10b4bbab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4bbb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bbb4 jmp 0x10b4bbbf */
  goto L_10b4bbbf;
L_10b4bbb6:;
  /* 10b4bbb6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4bbb9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b4bbbf:;
  /* 10b4bbbf mov esp, ebp */
  ESP = (EBP);
  /* 10b4bbc1 pop ebp */
  EBP = (pop32());
  /* 10b4bbc2 ret  */
  ESPCHK(0x10b4b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x10b4bbd0 (199 bytes, 68 insns) */
void f_10b4bbd0(void) {
  FTRACE(0x10b4bbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bbd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bbd4 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4bbd5 push esi */
  push32((uint32_t)(ESI));
  /* 10b4bbd6 push edi */
  push32((uint32_t)(EDI));
L_10b4bbd7:;
  /* 10b4bbd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bbdb jne 0x10b4bbfb */
  if (!C.zf) goto L_10b4bbfb;
  /* 10b4bbdd push 0x10b69f30 */
  push32((uint32_t)(0x10b69f30u));
  /* 10b4bbe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4bbe4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10b4bbe6 push 0x10b6a000 */
  push32((uint32_t)(0x10b6a000u));
  /* 10b4bbeb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4bbed call 0x10b420e0 */
  push32(0x10b4bbf2u); f_10b420e0();
  /* 10b4bbf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bbf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bbf8 jne 0x10b4bbfb */
  if (!C.zf) goto L_10b4bbfb;
  /* 10b4bbfa int3  */
  x86_unimpl("int3 @ 0x10b4bbfa");
L_10b4bbfb:;
  /* 10b4bbfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bbfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4bbff jne 0x10b4bbd7 */
  if (!C.zf) goto L_10b4bbd7;
  /* 10b4bc01 mov ecx, dword ptr [0x10b6e674] */
  ECX = (r32((uint32_t)(0x10b6e674)));
  /* 10b4bc07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bc0a mov dword ptr [0x10b6e674], ecx */
  w32((uint32_t)(0x10b6e674), (ECX));
  /* 10b4bc10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bc13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4bc16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10b4bc18 push 0x10b6a000 */
  push32((uint32_t)(0x10b6a000u));
  /* 10b4bc1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4bc1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b4bc24 call 0x10b43020 */
  push32(0x10b4bc29u); f_10b43020();
  /* 10b4bc29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bc2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b4bc32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bc39 je 0x10b4bc56 */
  if (C.zf) goto L_10b4bc56;
  /* 10b4bc3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4bc41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4bc44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10b4bc4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10b4bc54 jmp 0x10b4bc7b */
  goto L_10b4bc7b;
L_10b4bc56:;
  /* 10b4bc56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4bc5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4bc5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b4bc65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bc6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b4bc71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10b4bc7b:;
  /* 10b4bc7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b4bc84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b4bc86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bc89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b4bc90 pop edi */
  EDI = (pop32());
  /* 10b4bc91 pop esi */
  ESI = (pop32());
  /* 10b4bc92 pop ebx */
  EBX = (pop32());
  /* 10b4bc93 mov esp, ebp */
  ESP = (EBP);
  /* 10b4bc95 pop ebp */
  EBP = (pop32());
  /* 10b4bc96 ret  */
  ESPCHK(0x10b4bbd0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10b4bca0 (50 bytes, 17 insns) */
void f_10b4bca0(void) {
  FTRACE(0x10b4bca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bca1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bca6 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bcac jb 0x10b4bcb2 */
  if (C.cf) goto L_10b4bcb2;
  /* 10b4bcae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bcb0 jmp 0x10b4bcd0 */
  goto L_10b4bcd0;
L_10b4bcb2:;
  /* 10b4bcb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bcb5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4bcb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bcbb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4bcbe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4bcc1 mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4bcc8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4bccd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10b4bcd0:;
  /* 10b4bcd0 pop ebp */
  EBP = (pop32());
  /* 10b4bcd1 ret  */
  ESPCHK(0x10b4bca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x10b4bce0 (300 bytes, 80 insns) */
void f_10b4bce0(void) {
  FTRACE(0x10b4bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bce1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bce4 cmp dword ptr [0x10b6fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bceb jne 0x10b4bcf9 */
  if (!C.zf) goto L_10b4bcf9;
  /* 10b4bced mov dword ptr [0x10b6fb40], 0x200 */
  w32((uint32_t)(0x10b6fb40), (0x200u));
  /* 10b4bcf7 jmp 0x10b4bd0c */
  goto L_10b4bd0c;
L_10b4bcf9:;
  /* 10b4bcf9 cmp dword ptr [0x10b6fb40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10b6fb40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bd00 jge 0x10b4bd0c */
  if ((C.sf==C.of)) goto L_10b4bd0c;
  /* 10b4bd02 mov dword ptr [0x10b6fb40], 0x14 */
  w32((uint32_t)(0x10b6fb40), (0x14u));
L_10b4bd0c:;
  /* 10b4bd0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10b4bd11 push 0x10b6a00c */
  push32((uint32_t)(0x10b6a00cu));
  /* 10b4bd16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4bd18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b4bd1a mov eax, dword ptr [0x10b6fb40] */
  EAX = (r32((uint32_t)(0x10b6fb40)));
  /* 10b4bd1f push eax */
  push32((uint32_t)(EAX));
  /* 10b4bd20 call 0x10b43430 */
  push32(0x10b4bd25u); f_10b43430();
  /* 10b4bd25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bd28 mov dword ptr [0x10b6e7e8], eax */
  w32((uint32_t)(0x10b6e7e8), (EAX));
  /* 10b4bd2d cmp dword ptr [0x10b6e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bd34 jne 0x10b4bd75 */
  if (!C.zf) goto L_10b4bd75;
  /* 10b4bd36 mov dword ptr [0x10b6fb40], 0x14 */
  w32((uint32_t)(0x10b6fb40), (0x14u));
  /* 10b4bd40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10b4bd45 push 0x10b6a00c */
  push32((uint32_t)(0x10b6a00cu));
  /* 10b4bd4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4bd4c push 4 */
  push32((uint32_t)(0x4u));
  /* 10b4bd4e mov ecx, dword ptr [0x10b6fb40] */
  ECX = (r32((uint32_t)(0x10b6fb40)));
  /* 10b4bd54 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bd55 call 0x10b43430 */
  push32(0x10b4bd5au); f_10b43430();
  /* 10b4bd5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bd5d mov dword ptr [0x10b6e7e8], eax */
  w32((uint32_t)(0x10b6e7e8), (EAX));
  /* 10b4bd62 cmp dword ptr [0x10b6e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bd69 jne 0x10b4bd75 */
  if (!C.zf) goto L_10b4bd75;
  /* 10b4bd6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b4bd6d call 0x10b41f90 */
  push32(0x10b4bd72u); f_10b41f90();
  /* 10b4bd72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4bd75:;
  /* 10b4bd75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4bd7c jmp 0x10b4bd87 */
  goto L_10b4bd87;
L_10b4bd7e:;
  /* 10b4bd7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bd81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bd84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4bd87:;
  /* 10b4bd87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bd8b jge 0x10b4bda6 */
  if ((C.sf==C.of)) goto L_10b4bda6;
  /* 10b4bd8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bd90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4bd93 add eax, 0x10b6d120 */
  { uint32_t _a=(EAX),_b=(0x10b6d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bd98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bd9b mov edx, dword ptr [0x10b6e7e8] */
  EDX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4bda1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10b4bda4 jmp 0x10b4bd7e */
  goto L_10b4bd7e;
L_10b4bda6:;
  /* 10b4bda6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4bdad jmp 0x10b4bdb8 */
  goto L_10b4bdb8;
L_10b4bdaf:;
  /* 10b4bdaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bdb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bdb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4bdb8:;
  /* 10b4bdb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bdbc jge 0x10b4be08 */
  if ((C.sf==C.of)) goto L_10b4be08;
  /* 10b4bdbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bdc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4bdc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bdc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4bdca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4bdcd mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4bdd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bdd8 je 0x10b4bdf6 */
  if (C.zf) goto L_10b4bdf6;
  /* 10b4bdda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bddd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4bde0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bde3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4bde6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4bde9 mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4bdf0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bdf4 jne 0x10b4be06 */
  if (!C.zf) goto L_10b4be06;
L_10b4bdf6:;
  /* 10b4bdf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4bdf9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4bdfc mov dword ptr [ecx + 0x10b6d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10b6d130), (0xffffffffu));
L_10b4be06:;
  /* 10b4be06 jmp 0x10b4bdaf */
  goto L_10b4bdaf;
L_10b4be08:;
  /* 10b4be08 mov esp, ebp */
  ESP = (EBP);
  /* 10b4be0a pop ebp */
  EBP = (pop32());
  /* 10b4be0b ret  */
  ESPCHK(0x10b4bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x10b4be10 (26 bytes, 9 insns) */
void f_10b4be10(void) {
  FTRACE(0x10b4be10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4be10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4be11 mov ebp, esp */
  EBP = (ESP);
  /* 10b4be13 call 0x10b4ca10 */
  push32(0x10b4be18u); f_10b4ca10();
  /* 10b4be18 movsx eax, byte ptr [0x10b6e48c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10b6e48c))));
  /* 10b4be1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4be21 je 0x10b4be28 */
  if (C.zf) goto L_10b4be28;
  /* 10b4be23 call 0x10b4c7d0 */
  push32(0x10b4be28u); f_10b4c7d0();
L_10b4be28:;
  /* 10b4be28 pop ebp */
  EBP = (pop32());
  /* 10b4be29 ret  */
  ESPCHK(0x10b4be10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be30 @ 0x10b4be30 (61 bytes, 20 insns) */
void f_10b4be30(void) {
  FTRACE(0x10b4be30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4be30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4be31 mov ebp, esp */
  EBP = (ESP);
  /* 10b4be33 cmp dword ptr [ebp + 8], 0x10b6d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b6d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4be3a jb 0x10b4be5e */
  if (C.cf) goto L_10b4be5e;
  /* 10b4be3c cmp dword ptr [ebp + 8], 0x10b6d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b6d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4be43 ja 0x10b4be5e */
  if ((!C.cf&&!C.zf)) goto L_10b4be5e;
  /* 10b4be45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4be48 sub eax, 0x10b6d120 */
  { uint32_t _a=(EAX),_b=(0x10b6d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4be4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4be50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4be53 push eax */
  push32((uint32_t)(EAX));
  /* 10b4be54 call 0x10b46a20 */
  push32(0x10b4be59u); f_10b46a20();
  /* 10b4be59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4be5c jmp 0x10b4be6b */
  goto L_10b4be6b;
L_10b4be5e:;
  /* 10b4be5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4be61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4be64 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4be65 call dword ptr [0x10b7034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7034c))), 0x10b4be6bu);
L_10b4be6b:;
  /* 10b4be6b pop ebp */
  EBP = (pop32());
  /* 10b4be6c ret  */
  ESPCHK(0x10b4be30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x10b4be70 (41 bytes, 16 insns) */
void f_10b4be70(void) {
  FTRACE(0x10b4be70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4be70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4be71 mov ebp, esp */
  EBP = (ESP);
  /* 10b4be73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4be77 jge 0x10b4be8a */
  if ((C.sf==C.of)) goto L_10b4be8a;
  /* 10b4be79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4be7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4be7f push eax */
  push32((uint32_t)(EAX));
  /* 10b4be80 call 0x10b46a20 */
  push32(0x10b4be85u); f_10b46a20();
  /* 10b4be85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4be88 jmp 0x10b4be97 */
  goto L_10b4be97;
L_10b4be8a:;
  /* 10b4be8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4be8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4be90 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4be91 call dword ptr [0x10b7034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7034c))), 0x10b4be97u);
L_10b4be97:;
  /* 10b4be97 pop ebp */
  EBP = (pop32());
  /* 10b4be98 ret  */
  ESPCHK(0x10b4be70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x10b4bea0 (61 bytes, 20 insns) */
void f_10b4bea0(void) {
  FTRACE(0x10b4bea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bea1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bea3 cmp dword ptr [ebp + 8], 0x10b6d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b6d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4beaa jb 0x10b4bece */
  if (C.cf) goto L_10b4bece;
  /* 10b4beac cmp dword ptr [ebp + 8], 0x10b6d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b6d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4beb3 ja 0x10b4bece */
  if ((!C.cf&&!C.zf)) goto L_10b4bece;
  /* 10b4beb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4beb8 sub eax, 0x10b6d120 */
  { uint32_t _a=(EAX),_b=(0x10b6d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4bebd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4bec0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bec3 push eax */
  push32((uint32_t)(EAX));
  /* 10b4bec4 call 0x10b46ac0 */
  push32(0x10b4bec9u); f_10b46ac0();
  /* 10b4bec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4becc jmp 0x10b4bedb */
  goto L_10b4bedb;
L_10b4bece:;
  /* 10b4bece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bed1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bed4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bed5 call dword ptr [0x10b70350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70350))), 0x10b4bedbu);
L_10b4bedb:;
  /* 10b4bedb pop ebp */
  EBP = (pop32());
  /* 10b4bedc ret  */
  ESPCHK(0x10b4bea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bee0 @ 0x10b4bee0 (41 bytes, 16 insns) */
void f_10b4bee0(void) {
  FTRACE(0x10b4bee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bee1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bee3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bee7 jge 0x10b4befa */
  if ((C.sf==C.of)) goto L_10b4befa;
  /* 10b4bee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4beec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4beef push eax */
  push32((uint32_t)(EAX));
  /* 10b4bef0 call 0x10b46ac0 */
  push32(0x10b4bef5u); f_10b46ac0();
  /* 10b4bef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bef8 jmp 0x10b4bf07 */
  goto L_10b4bf07;
L_10b4befa:;
  /* 10b4befa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4befd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bf00 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bf01 call dword ptr [0x10b70350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70350))), 0x10b4bf07u);
L_10b4bf07:;
  /* 10b4bf07 pop ebp */
  EBP = (pop32());
  /* 10b4bf08 ret  */
  ESPCHK(0x10b4bee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x10b4bf10 (119 bytes, 34 insns) */
void f_10b4bf10(void) {
  FTRACE(0x10b4bf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bf10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bf11 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bf13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4bf16 push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b4bf1b call dword ptr [0x10b702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702d0))), 0x10b4bf21u);
  /* 10b4bf21 cmp dword ptr [0x10b6e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bf28 je 0x10b4bf48 */
  if (C.zf) goto L_10b4bf48;
  /* 10b4bf2a push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b4bf2f call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b4bf35u);
  /* 10b4bf35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b4bf37 call 0x10b46a20 */
  push32(0x10b4bf3cu); f_10b46a20();
  /* 10b4bf3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bf3f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b4bf46 jmp 0x10b4bf4f */
  goto L_10b4bf4f;
L_10b4bf48:;
  /* 10b4bf48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b4bf4f:;
  /* 10b4bf4f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10b4bf53 push eax */
  push32((uint32_t)(EAX));
  /* 10b4bf54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bf57 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bf58 call 0x10b4bf90 */
  push32(0x10b4bf5du); f_10b4bf90();
  /* 10b4bf5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bf60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4bf63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bf67 je 0x10b4bf75 */
  if (C.zf) goto L_10b4bf75;
  /* 10b4bf69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b4bf6b call 0x10b46ac0 */
  push32(0x10b4bf70u); f_10b46ac0();
  /* 10b4bf70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4bf73 jmp 0x10b4bf80 */
  goto L_10b4bf80;
L_10b4bf75:;
  /* 10b4bf75 push 0x10b6e7e4 */
  push32((uint32_t)(0x10b6e7e4u));
  /* 10b4bf7a call dword ptr [0x10b702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702c0))), 0x10b4bf80u);
L_10b4bf80:;
  /* 10b4bf80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4bf83 mov esp, ebp */
  ESP = (EBP);
  /* 10b4bf85 pop ebp */
  EBP = (pop32());
  /* 10b4bf86 ret  */
  ESPCHK(0x10b4bf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x10b4bf90 (160 bytes, 50 insns) */
void f_10b4bf90(void) {
  FTRACE(0x10b4bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4bf91 mov ebp, esp */
  EBP = (ESP);
  /* 10b4bf93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4bf96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bf9a jne 0x10b4bfa3 */
  if (!C.zf) goto L_10b4bfa3;
  /* 10b4bf9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bf9e jmp 0x10b4c02c */
  goto L_10b4c02c;
L_10b4bfa3:;
  /* 10b4bfa3 cmp dword ptr [0x10b6e658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bfaa jne 0x10b4bfda */
  if (!C.zf) goto L_10b4bfda;
  /* 10b4bfac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4bfaf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bfb4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4bfb9 jle 0x10b4bfcb */
  if ((C.zf||C.sf!=C.of)) goto L_10b4bfcb;
  /* 10b4bfbb call 0x10b4aef0 */
  push32(0x10b4bfc0u); f_10b4aef0();
  /* 10b4bfc0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10b4bfc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4bfc9 jmp 0x10b4c02c */
  goto L_10b4c02c;
L_10b4bfcb:;
  /* 10b4bfcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bfce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10b4bfd1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10b4bfd3 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4bfd8 jmp 0x10b4c02c */
  goto L_10b4c02c;
L_10b4bfda:;
  /* 10b4bfda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4bfe1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b4bfe4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4bfe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4bfe7 mov ecx, dword ptr [0x10b6cea4] */
  ECX = (r32((uint32_t)(0x10b6cea4)));
  /* 10b4bfed push ecx */
  push32((uint32_t)(ECX));
  /* 10b4bfee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4bff1 push edx */
  push32((uint32_t)(EDX));
  /* 10b4bff2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4bff4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10b4bff7 push eax */
  push32((uint32_t)(EAX));
  /* 10b4bff8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b4bffd mov ecx, dword ptr [0x10b6e668] */
  ECX = (r32((uint32_t)(0x10b6e668)));
  /* 10b4c003 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c004 call dword ptr [0x10b70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70328))), 0x10b4c00au);
  /* 10b4c00a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4c00d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c011 je 0x10b4c019 */
  if (C.zf) goto L_10b4c019;
  /* 10b4c013 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c017 je 0x10b4c029 */
  if (C.zf) goto L_10b4c029;
L_10b4c019:;
  /* 10b4c019 call 0x10b4aef0 */
  push32(0x10b4c01eu); f_10b4aef0();
  /* 10b4c01e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10b4c024 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c027 jmp 0x10b4c02c */
  goto L_10b4c02c;
L_10b4c029:;
  /* 10b4c029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b4c02c:;
  /* 10b4c02c mov esp, ebp */
  ESP = (EBP);
  /* 10b4c02e pop ebp */
  EBP = (pop32());
  /* 10b4c02f ret  */
  ESPCHK(0x10b4bf90u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10b4c030 (32 bytes, 18 insns) */
void f_10b4c030(void) {
  FTRACE(0x10b4c030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c030 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c031 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c033 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4c034 push esi */
  push32((uint32_t)(ESI));
  /* 10b4c035 push edi */
  push32((uint32_t)(EDI));
  /* 10b4c036 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4c039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4c03b push 0x10b4c048 */
  push32((uint32_t)(0x10b4c048u));
  /* 10b4c040 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b4c043 call 0x10b5377c */
  push32(0x10b4c048u); f_10b5377c();
  /* 10b4c048 pop ebp */
  EBP = (pop32());
  /* 10b4c049 pop edi */
  EDI = (pop32());
  /* 10b4c04a pop esi */
  ESI = (pop32());
  /* 10b4c04b pop ebx */
  EBX = (pop32());
  /* 10b4c04c mov esp, ebp */
  ESP = (EBP);
  /* 10b4c04e pop ebp */
  EBP = (pop32());
  /* 10b4c04f ret  */
  ESPCHK(0x10b4c030u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10b4c072 (104 bytes, 33 insns) */
void f_10b4c072(void) {
  FTRACE(0x10b4c072u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c072 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4c073 push esi */
  push32((uint32_t)(ESI));
  /* 10b4c074 push edi */
  push32((uint32_t)(EDI));
  /* 10b4c075 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b4c079 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c07a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10b4c07c push 0x10b4c050 */
  push32((uint32_t)(0x10b4c050u));
  /* 10b4c081 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10b4c088 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10b4c08f:;
  /* 10b4c08f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10b4c093 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4c096 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4c099 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c09c je 0x10b4c0cc */
  if (C.zf) goto L_10b4c0cc;
  /* 10b4c09e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c0a2 je 0x10b4c0cc */
  if (C.zf) goto L_10b4c0cc;
  /* 10b4c0a4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10b4c0a7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10b4c0aa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10b4c0ae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10b4c0b1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c0b6 jne 0x10b4c0ca */
  if (!C.zf) goto L_10b4c0ca;
  /* 10b4c0b8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10b4c0bd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10b4c0c1 call 0x10b4c106 */
  push32(0x10b4c0c6u); f_10b4c106();
  /* 10b4c0c6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10b4c0cau);
L_10b4c0ca:;
  /* 10b4c0ca jmp 0x10b4c08f */
  goto L_10b4c08f;
L_10b4c0cc:;
  /* 10b4c0cc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10b4c0d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c0d6 pop edi */
  EDI = (pop32());
  /* 10b4c0d7 pop esi */
  ESI = (pop32());
  /* 10b4c0d8 pop ebx */
  EBX = (pop32());
  /* 10b4c0d9 ret  */
  ESPCHK(0x10b4c072u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c106 @ 0x10b4c106 (24 bytes, 10 insns) */
void f_10b4c106(void) {
  FTRACE(0x10b4c106u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c106 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4c107 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c108 mov ebx, 0x10b6d3b8 */
  EBX = (0x10b6d3b8u);
  /* 10b4c10d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c110 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10b4c113 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10b4c116 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10b4c119 pop ecx */
  ECX = (pop32());
  /* 10b4c11a pop ebx */
  EBX = (pop32());
  /* 10b4c11b ret 4 */
  ESPCHK(0x10b4c106u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c1e5 @ 0x10b4c1e5 (27 bytes, 11 insns) */
void f_10b4c1e5(void) {
  FTRACE(0x10b4c1e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c1e5 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c1e6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b4c1ea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10b4c1ec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b4c1ef push eax */
  push32((uint32_t)(EAX));
  /* 10b4c1f0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b4c1f3 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c1f4 call 0x10b4c072 */
  push32(0x10b4c1f9u); f_10b4c072();
  /* 10b4c1f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c1fc pop ebp */
  EBP = (pop32());
  /* 10b4c1fd ret 4 */
  ESPCHK(0x10b4c1e5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c200 @ 0x10b4c200 (482 bytes, 138 insns) */
void f_10b4c200(void) {
  FTRACE(0x10b4c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c200 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c201 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c206 push esi */
  push32((uint32_t)(ESI));
  /* 10b4c207 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10b4c20e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b4c210 call 0x10b46a20 */
  push32(0x10b4c215u); f_10b46a20();
  /* 10b4c215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c218 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b4c21f jmp 0x10b4c22a */
  goto L_10b4c22a;
L_10b4c221:;
  /* 10b4c221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c224 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c227 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b4c22a:;
  /* 10b4c22a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c22e jge 0x10b4c3d0 */
  if ((C.sf==C.of)) goto L_10b4c3d0;
  /* 10b4c234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c237 cmp dword ptr [ecx*4 + 0x10b6fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b6fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c23f je 0x10b4c336 */
  if (C.zf) goto L_10b4c336;
  /* 10b4c245 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c248 mov eax, dword ptr [edx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b4c24f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4c252 jmp 0x10b4c25d */
  goto L_10b4c25d;
L_10b4c254:;
  /* 10b4c254 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c257 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c25a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4c25d:;
  /* 10b4c25d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c260 mov eax, dword ptr [edx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b4c267 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c26c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c26f jae 0x10b4c326 */
  if (!C.cf) goto L_10b4c326;
  /* 10b4c275 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c278 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b4c27c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c27f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4c281 jne 0x10b4c321 */
  if (!C.zf) goto L_10b4c321;
  /* 10b4c287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c28a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c28e jne 0x10b4c2c9 */
  if (!C.zf) goto L_10b4c2c9;
  /* 10b4c290 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b4c292 call 0x10b46a20 */
  push32(0x10b4c297u); f_10b46a20();
  /* 10b4c297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c29a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c29d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c2a1 jne 0x10b4c2bf */
  if (!C.zf) goto L_10b4c2bf;
  /* 10b4c2a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c2a9 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c2aa call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b4c2b0u);
  /* 10b4c2b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4c2b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c2b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10b4c2bf:;
  /* 10b4c2bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b4c2c1 call 0x10b46ac0 */
  push32(0x10b4c2c6u); f_10b46ac0();
  /* 10b4c2c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4c2c9:;
  /* 10b4c2c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c2cf push eax */
  push32((uint32_t)(EAX));
  /* 10b4c2d0 call dword ptr [0x10b7034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7034c))), 0x10b4c2d6u);
  /* 10b4c2d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b4c2dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c2e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4c2e2 je 0x10b4c2f6 */
  if (C.zf) goto L_10b4c2f6;
  /* 10b4c2e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c2ea push eax */
  push32((uint32_t)(EAX));
  /* 10b4c2eb call dword ptr [0x10b70350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70350))), 0x10b4c2f1u);
  /* 10b4c2f1 jmp 0x10b4c254 */
  goto L_10b4c254;
L_10b4c2f6:;
  /* 10b4c2f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c2f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b4c2ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c302 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4c305 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c30b sub eax, dword ptr [edx*4 + 0x10b6fe40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10b6fe40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c312 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4c313 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10b4c318 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b4c31a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c31c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4c31f jmp 0x10b4c326 */
  goto L_10b4c326;
L_10b4c321:;
  /* 10b4c321 jmp 0x10b4c254 */
  goto L_10b4c254;
L_10b4c326:;
  /* 10b4c326 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c32a je 0x10b4c331 */
  if (C.zf) goto L_10b4c331;
  /* 10b4c32c jmp 0x10b4c3d0 */
  goto L_10b4c3d0;
L_10b4c331:;
  /* 10b4c331 jmp 0x10b4c3cb */
  goto L_10b4c3cb;
L_10b4c336:;
  /* 10b4c336 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10b4c338 push 0x10b6a014 */
  push32((uint32_t)(0x10b6a014u));
  /* 10b4c33d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4c33f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b4c344 call 0x10b43020 */
  push32(0x10b4c349u); f_10b43020();
  /* 10b4c349 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c34c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4c34f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c353 je 0x10b4c3c9 */
  if (C.zf) goto L_10b4c3c9;
  /* 10b4c355 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c35b mov dword ptr [eax*4 + 0x10b6fe40], ecx */
  w32((uint32_t)(EAX*4 + 0x10b6fe40), (ECX));
  /* 10b4c362 mov edx, dword ptr [0x10b6ff7c] */
  EDX = (r32((uint32_t)(0x10b6ff7c)));
  /* 10b4c368 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c36b mov dword ptr [0x10b6ff7c], edx */
  w32((uint32_t)(0x10b6ff7c), (EDX));
  /* 10b4c371 jmp 0x10b4c37c */
  goto L_10b4c37c;
L_10b4c373:;
  /* 10b4c373 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c376 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4c37c:;
  /* 10b4c37c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c37f mov edx, dword ptr [ecx*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4c386 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c38c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c38f jae 0x10b4c3b4 */
  if (!C.cf) goto L_10b4c3b4;
  /* 10b4c391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c394 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b4c398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c39b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b4c3a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c3a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10b4c3a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c3ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b4c3b2 jmp 0x10b4c373 */
  goto L_10b4c373;
L_10b4c3b4:;
  /* 10b4c3b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c3b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4c3ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4c3bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c3c0 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c3c1 call 0x10b4c710 */
  push32(0x10b4c3c6u); f_10b4c710();
  /* 10b4c3c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4c3c9:;
  /* 10b4c3c9 jmp 0x10b4c3d0 */
  goto L_10b4c3d0;
L_10b4c3cb:;
  /* 10b4c3cb jmp 0x10b4c221 */
  goto L_10b4c221;
L_10b4c3d0:;
  /* 10b4c3d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b4c3d2 call 0x10b46ac0 */
  push32(0x10b4c3d7u); f_10b46ac0();
  /* 10b4c3d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c3da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c3dd pop esi */
  ESI = (pop32());
  /* 10b4c3de mov esp, ebp */
  ESP = (EBP);
  /* 10b4c3e0 pop ebp */
  EBP = (pop32());
  /* 10b4c3e1 ret  */
  ESPCHK(0x10b4c200u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10b4c3f0 (183 bytes, 57 insns) */
void f_10b4c3f0(void) {
  FTRACE(0x10b4c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c3f7 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c3fd jae 0x10b4c48a */
  if (!C.cf) goto L_10b4c48a;
  /* 10b4c403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c406 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4c409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c40c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c40f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c412 mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4c419 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c41d jne 0x10b4c48a */
  if (!C.zf) goto L_10b4c48a;
  /* 10b4c41f cmp dword ptr [0x10b6e44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c426 jne 0x10b4c46a */
  if (!C.zf) goto L_10b4c46a;
  /* 10b4c428 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c42b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4c42e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c432 je 0x10b4c442 */
  if (C.zf) goto L_10b4c442;
  /* 10b4c434 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c438 je 0x10b4c450 */
  if (C.zf) goto L_10b4c450;
  /* 10b4c43a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c43e je 0x10b4c45e */
  if (C.zf) goto L_10b4c45e;
  /* 10b4c440 jmp 0x10b4c46a */
  goto L_10b4c46a;
L_10b4c442:;
  /* 10b4c442 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c445 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c446 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10b4c448 call dword ptr [0x10b70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70294))), 0x10b4c44eu);
  /* 10b4c44e jmp 0x10b4c46a */
  goto L_10b4c46a;
L_10b4c450:;
  /* 10b4c450 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c453 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c454 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10b4c456 call dword ptr [0x10b70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70294))), 0x10b4c45cu);
  /* 10b4c45c jmp 0x10b4c46a */
  goto L_10b4c46a;
L_10b4c45e:;
  /* 10b4c45e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c461 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c462 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b4c464 call dword ptr [0x10b70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70294))), 0x10b4c46au);
L_10b4c46a:;
  /* 10b4c46a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c46d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b4c470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c473 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c476 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c479 mov ecx, dword ptr [edx*4 + 0x10b6fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b4c480 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c483 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10b4c486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c488 jmp 0x10b4c4a3 */
  goto L_10b4c4a3;
L_10b4c48a:;
  /* 10b4c48a call 0x10b4aef0 */
  push32(0x10b4c48fu); f_10b4aef0();
  /* 10b4c48f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4c495 call 0x10b4af00 */
  push32(0x10b4c49au); f_10b4af00();
  /* 10b4c49a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4c4a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b4c4a3:;
  /* 10b4c4a3 mov esp, ebp */
  ESP = (EBP);
  /* 10b4c4a5 pop ebp */
  EBP = (pop32());
  /* 10b4c4a6 ret  */
  ESPCHK(0x10b4c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4b0 @ 0x10b4c4b0 (216 bytes, 63 insns) */
void f_10b4c4b0(void) {
  FTRACE(0x10b4c4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c4b7 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c4bd jae 0x10b4c56b */
  if (!C.cf) goto L_10b4c56b;
  /* 10b4c4c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c4c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4c4c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c4cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c4cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c4d2 mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4c4d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4c4de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c4e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4c4e3 je 0x10b4c56b */
  if (C.zf) goto L_10b4c56b;
  /* 10b4c4e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c4ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b4c4ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c4f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c4f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c4f8 mov ecx, dword ptr [edx*4 + 0x10b6fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b4c4ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c503 je 0x10b4c56b */
  if (C.zf) goto L_10b4c56b;
  /* 10b4c505 cmp dword ptr [0x10b6e44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c50c jne 0x10b4c54a */
  if (!C.zf) goto L_10b4c54a;
  /* 10b4c50e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c511 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4c514 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c518 je 0x10b4c528 */
  if (C.zf) goto L_10b4c528;
  /* 10b4c51a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c51e je 0x10b4c534 */
  if (C.zf) goto L_10b4c534;
  /* 10b4c520 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c524 je 0x10b4c540 */
  if (C.zf) goto L_10b4c540;
  /* 10b4c526 jmp 0x10b4c54a */
  goto L_10b4c54a;
L_10b4c528:;
  /* 10b4c528 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4c52a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10b4c52c call dword ptr [0x10b70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70294))), 0x10b4c532u);
  /* 10b4c532 jmp 0x10b4c54a */
  goto L_10b4c54a;
L_10b4c534:;
  /* 10b4c534 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4c536 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10b4c538 call dword ptr [0x10b70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70294))), 0x10b4c53eu);
  /* 10b4c53e jmp 0x10b4c54a */
  goto L_10b4c54a;
L_10b4c540:;
  /* 10b4c540 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4c542 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b4c544 call dword ptr [0x10b70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70294))), 0x10b4c54au);
L_10b4c54a:;
  /* 10b4c54a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c54d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4c550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c553 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c556 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c559 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4c560 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10b4c567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c569 jmp 0x10b4c584 */
  goto L_10b4c584;
L_10b4c56b:;
  /* 10b4c56b call 0x10b4aef0 */
  push32(0x10b4c570u); f_10b4aef0();
  /* 10b4c570 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4c576 call 0x10b4af00 */
  push32(0x10b4c57bu); f_10b4af00();
  /* 10b4c57b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4c581 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b4c584:;
  /* 10b4c584 mov esp, ebp */
  ESP = (EBP);
  /* 10b4c586 pop ebp */
  EBP = (pop32());
  /* 10b4c587 ret  */
  ESPCHK(0x10b4c4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c590 @ 0x10b4c590 (102 bytes, 30 insns) */
void f_10b4c590(void) {
  FTRACE(0x10b4c590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c590 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c591 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c596 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c59c jae 0x10b4c5db */
  if (!C.cf) goto L_10b4c5db;
  /* 10b4c59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c5a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4c5a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c5a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c5aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c5ad mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4c5b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4c5b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c5bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4c5be je 0x10b4c5db */
  if (C.zf) goto L_10b4c5db;
  /* 10b4c5c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c5c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b4c5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c5c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c5cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c5cf mov ecx, dword ptr [edx*4 + 0x10b6fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b6fe40)));
  /* 10b4c5d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10b4c5d9 jmp 0x10b4c5f4 */
  goto L_10b4c5f4;
L_10b4c5db:;
  /* 10b4c5db call 0x10b4aef0 */
  push32(0x10b4c5e0u); f_10b4aef0();
  /* 10b4c5e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4c5e6 call 0x10b4af00 */
  push32(0x10b4c5ebu); f_10b4af00();
  /* 10b4c5eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4c5f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b4c5f4:;
  /* 10b4c5f4 pop ebp */
  EBP = (pop32());
  /* 10b4c5f5 ret  */
  ESPCHK(0x10b4c590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x10b4c600 (260 bytes, 83 insns) */
void f_10b4c600(void) {
  FTRACE(0x10b4c600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c600 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c601 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c606 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b4c60a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c60d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4c612 je 0x10b4c61d */
  if (C.zf) goto L_10b4c61d;
  /* 10b4c614 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c617 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b4c61a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10b4c61d:;
  /* 10b4c61d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c620 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c626 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4c628 je 0x10b4c632 */
  if (C.zf) goto L_10b4c632;
  /* 10b4c62a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c62d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10b4c62f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10b4c632:;
  /* 10b4c632 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4c635 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c63b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4c63d je 0x10b4c648 */
  if (C.zf) goto L_10b4c648;
  /* 10b4c63f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c642 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10b4c645 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10b4c648:;
  /* 10b4c648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c64b push eax */
  push32((uint32_t)(EAX));
  /* 10b4c64c call dword ptr [0x10b70308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70308))), 0x10b4c652u);
  /* 10b4c652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4c655 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c659 jne 0x10b4c672 */
  if (!C.zf) goto L_10b4c672;
  /* 10b4c65b call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b4c661u);
  /* 10b4c661 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c662 call 0x10b4ae50 */
  push32(0x10b4c667u); f_10b4ae50();
  /* 10b4c667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c66a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c66d jmp 0x10b4c700 */
  goto L_10b4c700;
L_10b4c672:;
  /* 10b4c672 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c676 jne 0x10b4c683 */
  if (!C.zf) goto L_10b4c683;
  /* 10b4c678 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c67b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10b4c67e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10b4c681 jmp 0x10b4c692 */
  goto L_10b4c692;
L_10b4c683:;
  /* 10b4c683 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c687 jne 0x10b4c692 */
  if (!C.zf) goto L_10b4c692;
  /* 10b4c689 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c68c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10b4c68f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10b4c692:;
  /* 10b4c692 call 0x10b4c200 */
  push32(0x10b4c697u); f_10b4c200();
  /* 10b4c697 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4c69a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c69e jne 0x10b4c6bb */
  if (!C.zf) goto L_10b4c6bb;
  /* 10b4c6a0 call 0x10b4aef0 */
  push32(0x10b4c6a5u); f_10b4aef0();
  /* 10b4c6a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10b4c6ab call 0x10b4af00 */
  push32(0x10b4c6b0u); f_10b4af00();
  /* 10b4c6b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4c6b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c6b9 jmp 0x10b4c700 */
  goto L_10b4c700;
L_10b4c6bb:;
  /* 10b4c6bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c6be push eax */
  push32((uint32_t)(EAX));
  /* 10b4c6bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c6c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c6c3 call 0x10b4c3f0 */
  push32(0x10b4c6c8u); f_10b4c3f0();
  /* 10b4c6c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c6cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c6ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10b4c6d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10b4c6d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c6d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4c6da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c6dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c6e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c6e3 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4c6ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b4c6ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10b4c6f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c6f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c6f5 call 0x10b4c7a0 */
  push32(0x10b4c6fau); f_10b4c7a0();
  /* 10b4c6fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c6fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b4c700:;
  /* 10b4c700 mov esp, ebp */
  ESP = (EBP);
  /* 10b4c702 pop ebp */
  EBP = (pop32());
  /* 10b4c703 ret  */
  ESPCHK(0x10b4c600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c710 @ 0x10b4c710 (134 bytes, 44 insns) */
void f_10b4c710(void) {
  FTRACE(0x10b4c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c710 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c711 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c713 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c717 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4c71a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c71d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c720 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c723 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4c72a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c72c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b4c72f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c732 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c736 jne 0x10b4c771 */
  if (!C.zf) goto L_10b4c771;
  /* 10b4c738 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b4c73a call 0x10b46a20 */
  push32(0x10b4c73fu); f_10b46a20();
  /* 10b4c73f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c745 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c749 jne 0x10b4c767 */
  if (!C.zf) goto L_10b4c767;
  /* 10b4c74b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c74e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c751 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c752 call dword ptr [0x10b70348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70348))), 0x10b4c758u);
  /* 10b4c758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c75b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4c75e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c761 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c764 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10b4c767:;
  /* 10b4c767 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b4c769 call 0x10b46ac0 */
  push32(0x10b4c76eu); f_10b46ac0();
  /* 10b4c76e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4c771:;
  /* 10b4c771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c774 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4c777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c77a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c77d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c780 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4c787 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10b4c78b push eax */
  push32((uint32_t)(EAX));
  /* 10b4c78c call dword ptr [0x10b7034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7034c))), 0x10b4c792u);
  /* 10b4c792 mov esp, ebp */
  ESP = (EBP);
  /* 10b4c794 pop ebp */
  EBP = (pop32());
  /* 10b4c795 ret  */
  ESPCHK(0x10b4c710u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10b4c7a0 (38 bytes, 13 insns) */
void f_10b4c7a0(void) {
  FTRACE(0x10b4c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c7a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c7a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4c7a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c7ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c7af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4c7b2 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4c7b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10b4c7bd push eax */
  push32((uint32_t)(EAX));
  /* 10b4c7be call dword ptr [0x10b70350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70350))), 0x10b4c7c4u);
  /* 10b4c7c4 pop ebp */
  EBP = (pop32());
  /* 10b4c7c5 ret  */
  ESPCHK(0x10b4c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x10b4c7d0 (218 bytes, 63 insns) */
void f_10b4c7d0(void) {
  FTRACE(0x10b4c7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c7d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4c7dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4c7df call 0x10b46a20 */
  push32(0x10b4c7e4u); f_10b46a20();
  /* 10b4c7e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c7e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10b4c7ee jmp 0x10b4c7f9 */
  goto L_10b4c7f9;
L_10b4c7f0:;
  /* 10b4c7f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c7f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c7f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b4c7f9:;
  /* 10b4c7f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c7fc cmp ecx, dword ptr [0x10b6fb40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c802 jge 0x10b4c899 */
  if ((C.sf==C.of)) goto L_10b4c899;
  /* 10b4c808 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c80b mov eax, dword ptr [0x10b6e7e8] */
  EAX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4c810 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c814 je 0x10b4c894 */
  if (C.zf) goto L_10b4c894;
  /* 10b4c816 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c819 mov edx, dword ptr [0x10b6e7e8] */
  EDX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4c81f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b4c822 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4c825 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c82b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4c82d je 0x10b4c851 */
  if (C.zf) goto L_10b4c851;
  /* 10b4c82f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c832 mov eax, dword ptr [0x10b6e7e8] */
  EAX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4c837 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b4c83a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c83b call 0x10b4d5c0 */
  push32(0x10b4c840u); f_10b4d5c0();
  /* 10b4c840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c843 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c846 je 0x10b4c851 */
  if (C.zf) goto L_10b4c851;
  /* 10b4c848 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c84b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c84e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b4c851:;
  /* 10b4c851 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c855 jl 0x10b4c894 */
  if ((C.sf!=C.of)) goto L_10b4c894;
  /* 10b4c857 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c85a mov ecx, dword ptr [0x10b6e7e8] */
  ECX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4c860 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b4c863 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c866 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c867 call dword ptr [0x10b70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70254))), 0x10b4c86du);
  /* 10b4c86d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4c86f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c872 mov ecx, dword ptr [0x10b6e7e8] */
  ECX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4c878 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b4c87b push edx */
  push32((uint32_t)(EDX));
  /* 10b4c87c call 0x10b43ab0 */
  push32(0x10b4c881u); f_10b43ab0();
  /* 10b4c881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c887 mov ecx, dword ptr [0x10b6e7e8] */
  ECX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4c88d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10b4c894:;
  /* 10b4c894 jmp 0x10b4c7f0 */
  goto L_10b4c7f0;
L_10b4c899:;
  /* 10b4c899 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4c89b call 0x10b46ac0 */
  push32(0x10b4c8a0u); f_10b46ac0();
  /* 10b4c8a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4c8a6 mov esp, ebp */
  ESP = (EBP);
  /* 10b4c8a8 pop ebp */
  EBP = (pop32());
  /* 10b4c8a9 ret  */
  ESPCHK(0x10b4c7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8b0 @ 0x10b4c8b0 (68 bytes, 26 insns) */
void f_10b4c8b0(void) {
  FTRACE(0x10b4c8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c8b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c8b8 jne 0x10b4c8c6 */
  if (!C.zf) goto L_10b4c8c6;
  /* 10b4c8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4c8bc call 0x10b4ca20 */
  push32(0x10b4c8c1u); f_10b4ca20();
  /* 10b4c8c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c8c4 jmp 0x10b4c8f0 */
  goto L_10b4c8f0;
L_10b4c8c6:;
  /* 10b4c8c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c8c9 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c8ca call 0x10b4be30 */
  push32(0x10b4c8cfu); f_10b4be30();
  /* 10b4c8cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c8d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c8d6 call 0x10b4c900 */
  push32(0x10b4c8dbu); f_10b4c900();
  /* 10b4c8db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c8de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4c8e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c8e4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c8e5 call 0x10b4bea0 */
  push32(0x10b4c8eau); f_10b4bea0();
  /* 10b4c8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c8ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b4c8f0:;
  /* 10b4c8f0 mov esp, ebp */
  ESP = (EBP);
  /* 10b4c8f2 pop ebp */
  EBP = (pop32());
  /* 10b4c8f3 ret  */
  ESPCHK(0x10b4c8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c900 @ 0x10b4c900 (65 bytes, 26 insns) */
void f_10b4c900(void) {
  FTRACE(0x10b4c900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c900 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c901 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c906 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c907 call 0x10b4c950 */
  push32(0x10b4c90cu); f_10b4c950();
  /* 10b4c90c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c90f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4c911 je 0x10b4c918 */
  if (C.zf) goto L_10b4c918;
  /* 10b4c913 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4c916 jmp 0x10b4c93f */
  goto L_10b4c93f;
L_10b4c918:;
  /* 10b4c918 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c91b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4c91e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c924 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4c926 je 0x10b4c93d */
  if (C.zf) goto L_10b4c93d;
  /* 10b4c928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c92b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4c92e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c92f call 0x10b4d710 */
  push32(0x10b4c934u); f_10b4d710();
  /* 10b4c934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c937 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4c939 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c93b jmp 0x10b4c93f */
  goto L_10b4c93f;
L_10b4c93d:;
  /* 10b4c93d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4c93f:;
  /* 10b4c93f pop ebp */
  EBP = (pop32());
  /* 10b4c940 ret  */
  ESPCHK(0x10b4c900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x10b4c950 (183 bytes, 62 insns) */
void f_10b4c950(void) {
  FTRACE(0x10b4c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4c950 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4c951 mov ebp, esp */
  EBP = (ESP);
  /* 10b4c953 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c956 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4c95d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4c960 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4c963 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c966 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4c969 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c96c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c96f jne 0x10b4c9eb */
  if (!C.zf) goto L_10b4c9eb;
  /* 10b4c971 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c974 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4c977 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c97d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4c97f je 0x10b4c9eb */
  if (C.zf) goto L_10b4c9eb;
  /* 10b4c981 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c984 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c987 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10b4c989 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4c98c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4c98f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c993 jle 0x10b4c9eb */
  if ((C.zf||C.sf!=C.of)) goto L_10b4c9eb;
  /* 10b4c995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4c998 push edx */
  push32((uint32_t)(EDX));
  /* 10b4c999 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c99c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4c99f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4c9a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b4c9a6 push eax */
  push32((uint32_t)(EAX));
  /* 10b4c9a7 call 0x10b4b8c0 */
  push32(0x10b4c9acu); f_10b4b8c0();
  /* 10b4c9ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4c9af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4c9b2 jne 0x10b4c9d5 */
  if (!C.zf) goto L_10b4c9d5;
  /* 10b4c9b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4c9ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4c9c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4c9c2 je 0x10b4c9d3 */
  if (C.zf) goto L_10b4c9d3;
  /* 10b4c9c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4c9ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c9cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10b4c9d3:;
  /* 10b4c9d3 jmp 0x10b4c9eb */
  goto L_10b4c9eb;
L_10b4c9d5:;
  /* 10b4c9d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4c9db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4c9de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10b4c9e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b4c9eb:;
  /* 10b4c9eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b4c9f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b4c9f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4c9f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b4ca00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ca03 mov esp, ebp */
  ESP = (EBP);
  /* 10b4ca05 pop ebp */
  EBP = (pop32());
  /* 10b4ca06 ret  */
  ESPCHK(0x10b4c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca10 @ 0x10b4ca10 (15 bytes, 7 insns) */
void f_10b4ca10(void) {
  FTRACE(0x10b4ca10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ca10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ca11 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ca13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4ca15 call 0x10b4ca20 */
  push32(0x10b4ca1au); f_10b4ca20();
  /* 10b4ca1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ca1d pop ebp */
  EBP = (pop32());
  /* 10b4ca1e ret  */
  ESPCHK(0x10b4ca10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca20 @ 0x10b4ca20 (319 bytes, 94 insns) */
void f_10b4ca20(void) {
  FTRACE(0x10b4ca20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ca20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ca21 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ca23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ca26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4ca2d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4ca34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ca36 call 0x10b46a20 */
  push32(0x10b4ca3bu); f_10b46a20();
  /* 10b4ca3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ca3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b4ca45 jmp 0x10b4ca50 */
  goto L_10b4ca50;
L_10b4ca47:;
  /* 10b4ca47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ca4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ca4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b4ca50:;
  /* 10b4ca50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ca53 cmp ecx, dword ptr [0x10b6fb40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b6fb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ca59 jge 0x10b4cb43 */
  if ((C.sf==C.of)) goto L_10b4cb43;
  /* 10b4ca5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ca62 mov eax, dword ptr [0x10b6e7e8] */
  EAX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4ca67 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ca6b je 0x10b4cb3e */
  if (C.zf) goto L_10b4cb3e;
  /* 10b4ca71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ca74 mov edx, dword ptr [0x10b6e7e8] */
  EDX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4ca7a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b4ca7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4ca80 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ca86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4ca88 je 0x10b4cb3e */
  if (C.zf) goto L_10b4cb3e;
  /* 10b4ca8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ca91 mov eax, dword ptr [0x10b6e7e8] */
  EAX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4ca96 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b4ca99 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ca9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ca9d push edx */
  push32((uint32_t)(EDX));
  /* 10b4ca9e call 0x10b4be70 */
  push32(0x10b4caa3u); f_10b4be70();
  /* 10b4caa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4caa6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4caa9 mov ecx, dword ptr [0x10b6e7e8] */
  ECX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4caaf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b4cab2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b4cab5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4caba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cabc je 0x10b4cb25 */
  if (C.zf) goto L_10b4cb25;
  /* 10b4cabe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cac2 jne 0x10b4cae9 */
  if (!C.zf) goto L_10b4cae9;
  /* 10b4cac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4cac7 mov edx, dword ptr [0x10b6e7e8] */
  EDX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4cacd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b4cad0 push eax */
  push32((uint32_t)(EAX));
  /* 10b4cad1 call 0x10b4c900 */
  push32(0x10b4cad6u); f_10b4c900();
  /* 10b4cad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cad9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cadc je 0x10b4cae7 */
  if (C.zf) goto L_10b4cae7;
  /* 10b4cade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4cae1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cae4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4cae7:;
  /* 10b4cae7 jmp 0x10b4cb25 */
  goto L_10b4cb25;
L_10b4cae9:;
  /* 10b4cae9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4caed jne 0x10b4cb25 */
  if (!C.zf) goto L_10b4cb25;
  /* 10b4caef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4caf2 mov eax, dword ptr [0x10b6e7e8] */
  EAX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4caf7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b4cafa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4cafd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4cb00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4cb02 je 0x10b4cb25 */
  if (C.zf) goto L_10b4cb25;
  /* 10b4cb04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4cb07 mov ecx, dword ptr [0x10b6e7e8] */
  ECX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4cb0d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b4cb10 push edx */
  push32((uint32_t)(EDX));
  /* 10b4cb11 call 0x10b4c900 */
  push32(0x10b4cb16u); f_10b4c900();
  /* 10b4cb16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cb19 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cb1c jne 0x10b4cb25 */
  if (!C.zf) goto L_10b4cb25;
  /* 10b4cb1e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10b4cb25:;
  /* 10b4cb25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4cb28 mov ecx, dword ptr [0x10b6e7e8] */
  ECX = (r32((uint32_t)(0x10b6e7e8)));
  /* 10b4cb2e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b4cb31 push edx */
  push32((uint32_t)(EDX));
  /* 10b4cb32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4cb35 push eax */
  push32((uint32_t)(EAX));
  /* 10b4cb36 call 0x10b4bee0 */
  push32(0x10b4cb3bu); f_10b4bee0();
  /* 10b4cb3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4cb3e:;
  /* 10b4cb3e jmp 0x10b4ca47 */
  goto L_10b4ca47;
L_10b4cb43:;
  /* 10b4cb43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4cb45 call 0x10b46ac0 */
  push32(0x10b4cb4au); f_10b46ac0();
  /* 10b4cb4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cb4d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cb51 jne 0x10b4cb58 */
  if (!C.zf) goto L_10b4cb58;
  /* 10b4cb53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4cb56 jmp 0x10b4cb5b */
  goto L_10b4cb5b;
L_10b4cb58:;
  /* 10b4cb58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b4cb5b:;
  /* 10b4cb5b mov esp, ebp */
  ESP = (EBP);
  /* 10b4cb5d pop ebp */
  EBP = (pop32());
  /* 10b4cb5e ret  */
  ESPCHK(0x10b4ca20u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10b4cb60 (15 bytes, 7 insns) */
void f_10b4cb60(void) {
  FTRACE(0x10b4cb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4cb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4cb61 mov ebp, esp */
  EBP = (ESP);
  /* 10b4cb63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4cb65 call 0x10b41f90 */
  push32(0x10b4cb6au); f_10b41f90();
  /* 10b4cb6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cb6d pop ebp */
  EBP = (pop32());
  /* 10b4cb6e ret  */
  ESPCHK(0x10b4cb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb70 @ 0x10b4cb70 (1007 bytes, 269 insns) */
void f_10b4cb70(void) {
  FTRACE(0x10b4cb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4cb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4cb71 mov ebp, esp */
  EBP = (ESP);
  /* 10b4cb73 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4cb79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cb7d jl 0x10b4cb85 */
  if ((C.sf!=C.of)) goto L_10b4cb85;
  /* 10b4cb7f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cb83 jle 0x10b4cb8c */
  if ((C.zf||C.sf!=C.of)) goto L_10b4cb8c;
L_10b4cb85:;
  /* 10b4cb85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4cb87 jmp 0x10b4cf5b */
  goto L_10b4cf5b;
L_10b4cb8c:;
  /* 10b4cb8c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b4cb8e call 0x10b46a20 */
  push32(0x10b4cb93u); f_10b46a20();
  /* 10b4cb93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cb96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b4cb9d mov eax, dword ptr [0x10b6e7d4] */
  EAX = (r32((uint32_t)(0x10b6e7d4)));
  /* 10b4cba2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cba5 mov dword ptr [0x10b6e7d4], eax */
  w32((uint32_t)(0x10b6e7d4), (EAX));
L_10b4cbaa:;
  /* 10b4cbaa cmp dword ptr [0x10b6e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cbb1 je 0x10b4cbbd */
  if (C.zf) goto L_10b4cbbd;
  /* 10b4cbb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4cbb5 call dword ptr [0x10b70290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70290))), 0x10b4cbbbu);
  /* 10b4cbbb jmp 0x10b4cbaa */
  goto L_10b4cbaa;
L_10b4cbbd:;
  /* 10b4cbbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cbc1 je 0x10b4cc01 */
  if (C.zf) goto L_10b4cc01;
  /* 10b4cbc3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cbc7 je 0x10b4cbe1 */
  if (C.zf) goto L_10b4cbe1;
  /* 10b4cbc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4cbcc push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cbcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4cbd0 push edx */
  push32((uint32_t)(EDX));
  /* 10b4cbd1 call 0x10b4cf60 */
  push32(0x10b4cbd6u); f_10b4cf60();
  /* 10b4cbd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cbd9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10b4cbdf jmp 0x10b4cbf3 */
  goto L_10b4cbf3;
L_10b4cbe1:;
  /* 10b4cbe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4cbe4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4cbe7 mov ecx, dword ptr [eax + 0x10b6d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10b6d4dc)));
  /* 10b4cbed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10b4cbf3:;
  /* 10b4cbf3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10b4cbf9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b4cbfc jmp 0x10b4cf3b */
  goto L_10b4cf3b;
L_10b4cc01:;
  /* 10b4cc01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10b4cc08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b4cc0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc13 je 0x10b4cf33 */
  if (C.zf) goto L_10b4cf33;
  /* 10b4cc19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4cc1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4cc1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc22 jne 0x10b4ce44 */
  if (!C.zf) goto L_10b4ce44;
  /* 10b4cc28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4cc2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b4cc2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc32 jne 0x10b4ce44 */
  if (!C.zf) goto L_10b4ce44;
  /* 10b4cc38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4cc3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10b4cc3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc42 jne 0x10b4ce44 */
  if (!C.zf) goto L_10b4ce44;
  /* 10b4cc48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4cc4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10b4cc51:;
  /* 10b4cc51 push 0x10b6a064 */
  push32((uint32_t)(0x10b6a064u));
  /* 10b4cc56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b4cc5c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cc5d call 0x10b4edc0 */
  push32(0x10b4cc62u); f_10b4edc0();
  /* 10b4cc62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cc65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10b4cc6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc72 je 0x10b4cc9d */
  if (C.zf) goto L_10b4cc9d;
  /* 10b4cc74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cc7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4cc80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10b4cc86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc8d je 0x10b4cc9d */
  if (C.zf) goto L_10b4cc9d;
  /* 10b4cc8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cc95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4cc98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cc9b jne 0x10b4ccc3 */
  if (!C.zf) goto L_10b4ccc3;
L_10b4cc9d:;
  /* 10b4cc9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cca1 je 0x10b4ccbc */
  if (C.zf) goto L_10b4ccbc;
  /* 10b4cca3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b4cca5 call 0x10b46ac0 */
  push32(0x10b4ccaau); f_10b46ac0();
  /* 10b4ccaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ccad mov edx, dword ptr [0x10b6e7d4] */
  EDX = (r32((uint32_t)(0x10b6e7d4)));
  /* 10b4ccb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ccb6 mov dword ptr [0x10b6e7d4], edx */
  w32((uint32_t)(0x10b6e7d4), (EDX));
L_10b4ccbc:;
  /* 10b4ccbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ccbe jmp 0x10b4cf5b */
  goto L_10b4cf5b;
L_10b4ccc3:;
  /* 10b4ccc3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b4ccca jmp 0x10b4ccd5 */
  goto L_10b4ccd5;
L_10b4cccc:;
  /* 10b4cccc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4cccf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ccd2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b4ccd5:;
  /* 10b4ccd5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ccd9 jg 0x10b4cd23 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4cd23;
  /* 10b4ccdb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b4cce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cce2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b4cce8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4cce9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ccec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4ccef mov ecx, dword ptr [eax + 0x10b6d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10b6d4d8)));
  /* 10b4ccf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ccf6 call 0x10b4ed80 */
  push32(0x10b4ccfbu); f_10b4ed80();
  /* 10b4ccfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ccfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cd00 jne 0x10b4cd21 */
  if (!C.zf) goto L_10b4cd21;
  /* 10b4cd02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4cd05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4cd08 mov eax, dword ptr [edx + 0x10b6d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10b6d4d8)));
  /* 10b4cd0e push eax */
  push32((uint32_t)(EAX));
  /* 10b4cd0f call 0x10b45e50 */
  push32(0x10b4cd14u); f_10b45e50();
  /* 10b4cd14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cd17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cd1d jne 0x10b4cd21 */
  if (!C.zf) goto L_10b4cd21;
  /* 10b4cd1f jmp 0x10b4cd23 */
  goto L_10b4cd23;
L_10b4cd21:;
  /* 10b4cd21 jmp 0x10b4cccc */
  goto L_10b4cccc;
L_10b4cd23:;
  /* 10b4cd23 push 0x10b6a060 */
  push32((uint32_t)(0x10b6a060u));
  /* 10b4cd28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cd2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cd31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10b4cd37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cd3d push edx */
  push32((uint32_t)(EDX));
  /* 10b4cd3e call 0x10b4ed40 */
  push32(0x10b4cd43u); f_10b4ed40();
  /* 10b4cd43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cd46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10b4cd4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cd53 jne 0x10b4cd89 */
  if (!C.zf) goto L_10b4cd89;
  /* 10b4cd55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cd5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4cd5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cd61 je 0x10b4cd89 */
  if (C.zf) goto L_10b4cd89;
  /* 10b4cd63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cd67 je 0x10b4cd82 */
  if (C.zf) goto L_10b4cd82;
  /* 10b4cd69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b4cd6b call 0x10b46ac0 */
  push32(0x10b4cd70u); f_10b46ac0();
  /* 10b4cd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cd73 mov edx, dword ptr [0x10b6e7d4] */
  EDX = (r32((uint32_t)(0x10b6e7d4)));
  /* 10b4cd79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4cd7c mov dword ptr [0x10b6e7d4], edx */
  w32((uint32_t)(0x10b6e7d4), (EDX));
L_10b4cd82:;
  /* 10b4cd82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4cd84 jmp 0x10b4cf5b */
  goto L_10b4cf5b;
L_10b4cd89:;
  /* 10b4cd89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cd8d jg 0x10b4cdda */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4cdda;
  /* 10b4cd8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b4cd95 push eax */
  push32((uint32_t)(EAX));
  /* 10b4cd96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cd9c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cd9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10b4cda3 push edx */
  push32((uint32_t)(EDX));
  /* 10b4cda4 call 0x10b46840 */
  push32(0x10b4cda9u); f_10b46840();
  /* 10b4cda9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cdac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b4cdb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10b4cdba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10b4cdc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cdc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4cdc4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4cdc5 call 0x10b4cf60 */
  push32(0x10b4cdcau); f_10b4cf60();
  /* 10b4cdca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cdcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cdcf je 0x10b4cdda */
  if (C.zf) goto L_10b4cdda;
  /* 10b4cdd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4cdd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cdd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b4cdda:;
  /* 10b4cdda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4cde0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cde6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10b4cdec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b4cdf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4cdf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cdf7 je 0x10b4ce08 */
  if (C.zf) goto L_10b4ce08;
  /* 10b4cdf9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b4cdff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ce02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10b4ce08:;
  /* 10b4ce08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b4ce0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4ce11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ce13 jne 0x10b4cc51 */
  if (!C.zf) goto L_10b4cc51;
  /* 10b4ce19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ce1d je 0x10b4ce2c */
  if (C.zf) goto L_10b4ce2c;
  /* 10b4ce1f call 0x10b4d100 */
  push32(0x10b4ce24u); f_10b4d100();
  /* 10b4ce24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10b4ce2a jmp 0x10b4ce36 */
  goto L_10b4ce36;
L_10b4ce2c:;
  /* 10b4ce2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10b4ce36:;
  /* 10b4ce36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10b4ce3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4ce3f jmp 0x10b4cf31 */
  goto L_10b4cf31;
L_10b4ce44:;
  /* 10b4ce44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ce47 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ce48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4ce4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4ce4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10b4ce52 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ce53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ce56 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ce57 call 0x10b4d200 */
  push32(0x10b4ce5cu); f_10b4d200();
  /* 10b4ce5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ce5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4ce62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ce66 je 0x10b4cf31 */
  if (C.zf) goto L_10b4cf31;
  /* 10b4ce6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4ce73 jmp 0x10b4ce7e */
  goto L_10b4ce7e;
L_10b4ce75:;
  /* 10b4ce75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ce78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ce7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b4ce7e:;
  /* 10b4ce7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ce82 jg 0x10b4cee0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4cee0;
  /* 10b4ce84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ce88 je 0x10b4cede */
  if (C.zf) goto L_10b4cede;
  /* 10b4ce8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ce8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4ce90 mov ecx, dword ptr [eax + 0x10b6d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10b6d4dc)));
  /* 10b4ce96 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ce97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10b4ce9d push edx */
  push32((uint32_t)(EDX));
  /* 10b4ce9e call 0x10b4ecb0 */
  push32(0x10b4cea3u); f_10b4ecb0();
  /* 10b4cea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cea8 je 0x10b4ced5 */
  if (C.zf) goto L_10b4ced5;
  /* 10b4ceaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10b4ceb0 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ceb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4ceb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ceb5 call 0x10b4cf60 */
  push32(0x10b4cebau); f_10b4cf60();
  /* 10b4ceba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cebf je 0x10b4cecc */
  if (C.zf) goto L_10b4cecc;
  /* 10b4cec1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4cec4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cec7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b4ceca jmp 0x10b4ced3 */
  goto L_10b4ced3;
L_10b4cecc:;
  /* 10b4cecc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10b4ced3:;
  /* 10b4ced3 jmp 0x10b4cede */
  goto L_10b4cede;
L_10b4ced5:;
  /* 10b4ced5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ced8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cedb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b4cede:;
  /* 10b4cede jmp 0x10b4ce75 */
  goto L_10b4ce75;
L_10b4cee0:;
  /* 10b4cee0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cee4 je 0x10b4cf0b */
  if (C.zf) goto L_10b4cf0b;
  /* 10b4cee6 call 0x10b4d100 */
  push32(0x10b4ceebu); f_10b4d100();
  /* 10b4ceeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4ceee push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4cef0 mov ecx, dword ptr [0x10b6d4dc] */
  ECX = (r32((uint32_t)(0x10b6d4dc)));
  /* 10b4cef6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cef7 call 0x10b43ab0 */
  push32(0x10b4cefcu); f_10b43ab0();
  /* 10b4cefc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ceff mov dword ptr [0x10b6d4dc], 0 */
  w32((uint32_t)(0x10b6d4dc), (0x0u));
  /* 10b4cf09 jmp 0x10b4cf31 */
  goto L_10b4cf31;
L_10b4cf0b:;
  /* 10b4cf0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cf0f je 0x10b4cf1e */
  if (C.zf) goto L_10b4cf1e;
  /* 10b4cf11 call 0x10b4d100 */
  push32(0x10b4cf16u); f_10b4d100();
  /* 10b4cf16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10b4cf1c jmp 0x10b4cf28 */
  goto L_10b4cf28;
L_10b4cf1e:;
  /* 10b4cf1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10b4cf28:;
  /* 10b4cf28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10b4cf2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b4cf31:;
  /* 10b4cf31 jmp 0x10b4cf3b */
  goto L_10b4cf3b;
L_10b4cf33:;
  /* 10b4cf33 call 0x10b4d100 */
  push32(0x10b4cf38u); f_10b4d100();
  /* 10b4cf38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b4cf3b:;
  /* 10b4cf3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cf3f je 0x10b4cf58 */
  if (C.zf) goto L_10b4cf58;
  /* 10b4cf41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b4cf43 call 0x10b46ac0 */
  push32(0x10b4cf48u); f_10b46ac0();
  /* 10b4cf48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cf4b mov eax, dword ptr [0x10b6e7d4] */
  EAX = (r32((uint32_t)(0x10b6e7d4)));
  /* 10b4cf50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4cf53 mov dword ptr [0x10b6e7d4], eax */
  w32((uint32_t)(0x10b6e7d4), (EAX));
L_10b4cf58:;
  /* 10b4cf58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b4cf5b:;
  /* 10b4cf5b mov esp, ebp */
  ESP = (EBP);
  /* 10b4cf5d pop ebp */
  EBP = (pop32());
  /* 10b4cf5e ret  */
  ESPCHK(0x10b4cb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x10b4cf60 (403 bytes, 117 insns) */
void f_10b4cf60(void) {
  FTRACE(0x10b4cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4cf61 mov ebp, esp */
  EBP = (ESP);
  /* 10b4cf63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4cf69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4cf6c push eax */
  push32((uint32_t)(EAX));
  /* 10b4cf6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10b4cf73 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cf74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10b4cf7a push edx */
  push32((uint32_t)(EDX));
  /* 10b4cf7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10b4cf81 push eax */
  push32((uint32_t)(EAX));
  /* 10b4cf82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4cf85 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cf86 call 0x10b4d200 */
  push32(0x10b4cf8bu); f_10b4d200();
  /* 10b4cf8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cf8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4cf90 jne 0x10b4cf99 */
  if (!C.zf) goto L_10b4cf99;
  /* 10b4cf92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4cf94 jmp 0x10b4d0ef */
  goto L_10b4d0ef;
L_10b4cf99:;
  /* 10b4cf99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10b4cf9e push 0x10b6a068 */
  push32((uint32_t)(0x10b6a068u));
  /* 10b4cfa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4cfa5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10b4cfab push edx */
  push32((uint32_t)(EDX));
  /* 10b4cfac call 0x10b45e50 */
  push32(0x10b4cfb1u); f_10b45e50();
  /* 10b4cfb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cfb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cfb7 push eax */
  push32((uint32_t)(EAX));
  /* 10b4cfb8 call 0x10b43020 */
  push32(0x10b4cfbdu); f_10b43020();
  /* 10b4cfbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cfc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4cfc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4cfc7 jne 0x10b4cfd0 */
  if (!C.zf) goto L_10b4cfd0;
  /* 10b4cfc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4cfcb jmp 0x10b4d0ef */
  goto L_10b4d0ef;
L_10b4cfd0:;
  /* 10b4cfd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4cfd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4cfd6 mov ecx, dword ptr [eax + 0x10b6d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10b6d4dc)));
  /* 10b4cfdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4cfdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4cfe2 mov eax, dword ptr [edx*4 + 0x10b6e650] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b6e650)));
  /* 10b4cfe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4cfec push 6 */
  push32((uint32_t)(0x6u));
  /* 10b4cfee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4cff1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4cff4 add ecx, 0x10b6e6a0 */
  { uint32_t _a=(ECX),_b=(0x10b6e6a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4cffa push ecx */
  push32((uint32_t)(ECX));
  /* 10b4cffb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10b4cffe push edx */
  push32((uint32_t)(EDX));
  /* 10b4cfff call 0x10b49900 */
  push32(0x10b4d004u); f_10b49900();
  /* 10b4d004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d007 mov eax, dword ptr [0x10b6e668] */
  EAX = (r32((uint32_t)(0x10b6e668)));
  /* 10b4d00c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b4d00f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10b4d015 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d016 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d019 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d01a call 0x10b45fd0 */
  push32(0x10b4d01fu); f_10b45fd0();
  /* 10b4d01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d025 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d028 mov dword ptr [ecx + 0x10b6d4dc], eax */
  w32((uint32_t)(ECX + 0x10b6d4dc), (EAX));
  /* 10b4d02e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10b4d034 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4d03a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d03d mov dword ptr [eax*4 + 0x10b6e650], edx */
  w32((uint32_t)(EAX*4 + 0x10b6e650), (EDX));
  /* 10b4d044 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b4d046 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10b4d04c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d04d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d050 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d053 add edx, 0x10b6e6a0 */
  { uint32_t _a=(EDX),_b=(0x10b6e6a0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d059 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d05a call 0x10b49900 */
  push32(0x10b4d05fu); f_10b49900();
  /* 10b4d05f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d062 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d066 jne 0x10b4d073 */
  if (!C.zf) goto L_10b4d073;
  /* 10b4d068 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4d06e mov dword ptr [0x10b6e668], eax */
  w32((uint32_t)(0x10b6e668), (EAX));
L_10b4d073:;
  /* 10b4d073 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d077 jne 0x10b4d085 */
  if (!C.zf) goto L_10b4d085;
  /* 10b4d079 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b4d07f mov dword ptr [0x10b6e66c], ecx */
  w32((uint32_t)(0x10b6e66c), (ECX));
L_10b4d085:;
  /* 10b4d085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d088 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d08b call dword ptr [edx + 0x10b6d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10b6d4e0))), 0x10b4d091u);
  /* 10b4d091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d093 je 0x10b4d0cc */
  if (C.zf) goto L_10b4d0cc;
  /* 10b4d095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d098 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d09b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d09e mov dword ptr [eax + 0x10b6d4dc], ecx */
  w32((uint32_t)(EAX + 0x10b6d4dc), (ECX));
  /* 10b4d0a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d0a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d0a9 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d0aa call 0x10b43ab0 */
  push32(0x10b4d0afu); f_10b43ab0();
  /* 10b4d0af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d0b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d0b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d0b8 mov dword ptr [eax*4 + 0x10b6e650], ecx */
  w32((uint32_t)(EAX*4 + 0x10b6e650), (ECX));
  /* 10b4d0bf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4d0c2 mov dword ptr [0x10b6e668], edx */
  w32((uint32_t)(0x10b6e668), (EDX));
  /* 10b4d0c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d0ca jmp 0x10b4d0ef */
  goto L_10b4d0ef;
L_10b4d0cc:;
  /* 10b4d0cc cmp dword ptr [ebp - 0xc], 0x10b6d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10b6d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d0d3 je 0x10b4d0e3 */
  if (C.zf) goto L_10b4d0e3;
  /* 10b4d0d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d0d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d0da push eax */
  push32((uint32_t)(EAX));
  /* 10b4d0db call 0x10b43ab0 */
  push32(0x10b4d0e0u); f_10b43ab0();
  /* 10b4d0e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d0e3:;
  /* 10b4d0e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d0e6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d0e9 mov eax, dword ptr [ecx + 0x10b6d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10b6d4dc)));
L_10b4d0ef:;
  /* 10b4d0ef mov esp, ebp */
  ESP = (EBP);
  /* 10b4d0f1 pop ebp */
  EBP = (pop32());
  /* 10b4d0f2 ret  */
  ESPCHK(0x10b4cf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d100 @ 0x10b4d100 (256 bytes, 72 insns) */
void f_10b4d100(void) {
  FTRACE(0x10b4d100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d100 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d101 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4d106 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b4d10d cmp dword ptr [0x10b6d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d114 jne 0x10b4d134 */
  if (!C.zf) goto L_10b4d134;
  /* 10b4d116 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10b4d11b push 0x10b6a068 */
  push32((uint32_t)(0x10b6a068u));
  /* 10b4d120 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d122 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10b4d127 call 0x10b43020 */
  push32(0x10b4d12cu); f_10b43020();
  /* 10b4d12c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d12f mov dword ptr [0x10b6d4dc], eax */
  w32((uint32_t)(0x10b6d4dc), (EAX));
L_10b4d134:;
  /* 10b4d134 mov eax, dword ptr [0x10b6d4dc] */
  EAX = (r32((uint32_t)(0x10b6d4dc)));
  /* 10b4d139 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b4d13c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b4d143 jmp 0x10b4d14e */
  goto L_10b4d14e;
L_10b4d145:;
  /* 10b4d145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d148 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d14b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b4d14e:;
  /* 10b4d14e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d151 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d154 mov eax, dword ptr [edx + 0x10b6d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10b6d4dc)));
  /* 10b4d15a push eax */
  push32((uint32_t)(EAX));
  /* 10b4d15b push 0x10b6a074 */
  push32((uint32_t)(0x10b6a074u));
  /* 10b4d160 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d163 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d166 mov edx, dword ptr [ecx + 0x10b6d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10b6d4d8)));
  /* 10b4d16c push edx */
  push32((uint32_t)(EDX));
  /* 10b4d16d push 3 */
  push32((uint32_t)(0x3u));
  /* 10b4d16f mov eax, dword ptr [0x10b6d4dc] */
  EAX = (r32((uint32_t)(0x10b6d4dc)));
  /* 10b4d174 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d175 call 0x10b4d3a0 */
  push32(0x10b4d17au); f_10b4d3a0();
  /* 10b4d17a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d17d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d181 jge 0x10b4d1c9 */
  if ((C.sf==C.of)) goto L_10b4d1c9;
  /* 10b4d183 push 0x10b6a060 */
  push32((uint32_t)(0x10b6a060u));
  /* 10b4d188 mov ecx, dword ptr [0x10b6d4dc] */
  ECX = (r32((uint32_t)(0x10b6d4dc)));
  /* 10b4d18e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d18f call 0x10b45fe0 */
  push32(0x10b4d194u); f_10b45fe0();
  /* 10b4d194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d19a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d19d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d1a0 mov eax, dword ptr [edx + 0x10b6d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10b6d4dc)));
  /* 10b4d1a6 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d1a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d1aa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d1ad mov edx, dword ptr [ecx + 0x10b6d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10b6d4dc)));
  /* 10b4d1b3 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d1b4 call 0x10b4ecb0 */
  push32(0x10b4d1b9u); f_10b4ecb0();
  /* 10b4d1b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d1bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d1be je 0x10b4d1c7 */
  if (C.zf) goto L_10b4d1c7;
  /* 10b4d1c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b4d1c7:;
  /* 10b4d1c7 jmp 0x10b4d1f7 */
  goto L_10b4d1f7;
L_10b4d1c9:;
  /* 10b4d1c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d1cd jne 0x10b4d1d6 */
  if (!C.zf) goto L_10b4d1d6;
  /* 10b4d1cf mov eax, dword ptr [0x10b6d4dc] */
  EAX = (r32((uint32_t)(0x10b6d4dc)));
  /* 10b4d1d4 jmp 0x10b4d1fc */
  goto L_10b4d1fc;
L_10b4d1d6:;
  /* 10b4d1d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d1d8 mov eax, dword ptr [0x10b6d4dc] */
  EAX = (r32((uint32_t)(0x10b6d4dc)));
  /* 10b4d1dd push eax */
  push32((uint32_t)(EAX));
  /* 10b4d1de call 0x10b43ab0 */
  push32(0x10b4d1e3u); f_10b43ab0();
  /* 10b4d1e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d1e6 mov dword ptr [0x10b6d4dc], 0 */
  w32((uint32_t)(0x10b6d4dc), (0x0u));
  /* 10b4d1f0 mov eax, dword ptr [0x10b6d4f4] */
  EAX = (r32((uint32_t)(0x10b6d4f4)));
  /* 10b4d1f5 jmp 0x10b4d1fc */
  goto L_10b4d1fc;
L_10b4d1f7:;
  /* 10b4d1f7 jmp 0x10b4d145 */
  goto L_10b4d145;
L_10b4d1fc:;
  /* 10b4d1fc mov esp, ebp */
  ESP = (EBP);
  /* 10b4d1fe pop ebp */
  EBP = (pop32());
  /* 10b4d1ff ret  */
  ESPCHK(0x10b4d100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d200 @ 0x10b4d200 (388 bytes, 115 insns) */
void f_10b4d200(void) {
  FTRACE(0x10b4d200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d200 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d201 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d203 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4d209 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d20d jne 0x10b4d216 */
  if (!C.zf) goto L_10b4d216;
  /* 10b4d20f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d211 jmp 0x10b4d380 */
  goto L_10b4d380;
L_10b4d216:;
  /* 10b4d216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d219 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4d21c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d21f jne 0x10b4d270 */
  if (!C.zf) goto L_10b4d270;
  /* 10b4d221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d224 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b4d228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d22a jne 0x10b4d270 */
  if (!C.zf) goto L_10b4d270;
  /* 10b4d22c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d22f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10b4d232 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d235 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10b4d239 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d23d je 0x10b4d259 */
  if (C.zf) goto L_10b4d259;
  /* 10b4d23f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4d242 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10b4d247 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4d24a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10b4d250 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4d253 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10b4d259:;
  /* 10b4d259 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d25d je 0x10b4d268 */
  if (C.zf) goto L_10b4d268;
  /* 10b4d25f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4d262 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b4d268:;
  /* 10b4d268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d26b jmp 0x10b4d380 */
  goto L_10b4d380;
L_10b4d270:;
  /* 10b4d270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d273 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d274 push 0x10b6d450 */
  push32((uint32_t)(0x10b6d450u));
  /* 10b4d279 call 0x10b4ecb0 */
  push32(0x10b4d27eu); f_10b4ecb0();
  /* 10b4d27e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d283 je 0x10b4d338 */
  if (C.zf) goto L_10b4d338;
  /* 10b4d289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d28c push edx */
  push32((uint32_t)(EDX));
  /* 10b4d28d push 0x10b6d3cc */
  push32((uint32_t)(0x10b6d3ccu));
  /* 10b4d292 call 0x10b4ecb0 */
  push32(0x10b4d297u); f_10b4ecb0();
  /* 10b4d297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d29c je 0x10b4d338 */
  if (C.zf) goto L_10b4d338;
  /* 10b4d2a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d2a5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d2a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10b4d2ac push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d2ad call 0x10b4d3f0 */
  push32(0x10b4d2b2u); f_10b4d3f0();
  /* 10b4d2b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d2b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d2b7 je 0x10b4d2c0 */
  if (C.zf) goto L_10b4d2c0;
  /* 10b4d2b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d2bb jmp 0x10b4d380 */
  goto L_10b4d380;
L_10b4d2c0:;
  /* 10b4d2c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10b4d2c6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d2c7 push 0x10b6e678 */
  push32((uint32_t)(0x10b6e678u));
  /* 10b4d2cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10b4d2d2 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d2d3 call 0x10b4ee00 */
  push32(0x10b4d2d8u); f_10b4ee00();
  /* 10b4d2d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d2db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d2dd jne 0x10b4d2e6 */
  if (!C.zf) goto L_10b4d2e6;
  /* 10b4d2df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d2e1 jmp 0x10b4d380 */
  goto L_10b4d380;
L_10b4d2e6:;
  /* 10b4d2e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d2e8 mov cx, word ptr [0x10b6e67c] */
  CX = (r16((uint32_t)(0x10b6e67c)));
  /* 10b4d2ef mov dword ptr [0x10b6e680], ecx */
  w32((uint32_t)(0x10b6e680), (ECX));
  /* 10b4d2f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10b4d2fb push edx */
  push32((uint32_t)(EDX));
  /* 10b4d2fc push 0x10b6d450 */
  push32((uint32_t)(0x10b6d450u));
  /* 10b4d301 call 0x10b4d550 */
  push32(0x10b4d306u); f_10b4d550();
  /* 10b4d306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d30c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4d30f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4d311 je 0x10b4d326 */
  if (C.zf) goto L_10b4d326;
  /* 10b4d313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d316 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d317 push 0x10b6d3cc */
  push32((uint32_t)(0x10b6d3ccu));
  /* 10b4d31c call 0x10b45fd0 */
  push32(0x10b4d321u); f_10b45fd0();
  /* 10b4d321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d324 jmp 0x10b4d338 */
  goto L_10b4d338;
L_10b4d326:;
  /* 10b4d326 push 0x10b6d450 */
  push32((uint32_t)(0x10b6d450u));
  /* 10b4d32b push 0x10b6d3cc */
  push32((uint32_t)(0x10b6d3ccu));
  /* 10b4d330 call 0x10b45fd0 */
  push32(0x10b4d335u); f_10b45fd0();
  /* 10b4d335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d338:;
  /* 10b4d338 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d33c je 0x10b4d351 */
  if (C.zf) goto L_10b4d351;
  /* 10b4d33e push 6 */
  push32((uint32_t)(0x6u));
  /* 10b4d340 push 0x10b6e678 */
  push32((uint32_t)(0x10b6e678u));
  /* 10b4d345 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4d348 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d349 call 0x10b49900 */
  push32(0x10b4d34eu); f_10b49900();
  /* 10b4d34e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d351:;
  /* 10b4d351 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d355 je 0x10b4d36a */
  if (C.zf) goto L_10b4d36a;
  /* 10b4d357 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b4d359 push 0x10b6e680 */
  push32((uint32_t)(0x10b6e680u));
  /* 10b4d35e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4d361 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d362 call 0x10b49900 */
  push32(0x10b4d367u); f_10b49900();
  /* 10b4d367 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d36a:;
  /* 10b4d36a push 0x10b6d450 */
  push32((uint32_t)(0x10b6d450u));
  /* 10b4d36f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d372 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d373 call 0x10b45fd0 */
  push32(0x10b4d378u); f_10b45fd0();
  /* 10b4d378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d37b mov eax, 0x10b6d450 */
  EAX = (0x10b6d450u);
L_10b4d380:;
  /* 10b4d380 mov esp, ebp */
  ESP = (EBP);
  /* 10b4d382 pop ebp */
  EBP = (pop32());
  /* 10b4d383 ret  */
  ESPCHK(0x10b4d200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x10b4d390 (7 bytes, 5 insns) */
void f_10b4d390(void) {
  FTRACE(0x10b4d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d390 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d391 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d395 pop ebp */
  EBP = (pop32());
  /* 10b4d396 ret  */
  ESPCHK(0x10b4d390u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10b4d3a0 (79 bytes, 28 insns) */
void f_10b4d3a0(void) {
  FTRACE(0x10b4d3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d3a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4d3a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b4d3a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d3ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4d3b3 jmp 0x10b4d3be */
  goto L_10b4d3be;
L_10b4d3b5:;
  /* 10b4d3b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d3b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d3bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b4d3be:;
  /* 10b4d3be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d3c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d3c4 jge 0x10b4d3e4 */
  if ((C.sf==C.of)) goto L_10b4d3e4;
  /* 10b4d3c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d3c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d3cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d3cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d3d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b4d3d5 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d3d9 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d3da call 0x10b45fe0 */
  push32(0x10b4d3dfu); f_10b45fe0();
  /* 10b4d3df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d3e2 jmp 0x10b4d3b5 */
  goto L_10b4d3b5;
L_10b4d3e4:;
  /* 10b4d3e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4d3eb mov esp, ebp */
  ESP = (EBP);
  /* 10b4d3ed pop ebp */
  EBP = (pop32());
  /* 10b4d3ee ret  */
  ESPCHK(0x10b4d3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x10b4d3f0 (349 bytes, 122 insns) */
void f_10b4d3f0(void) {
  FTRACE(0x10b4d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4d3f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10b4d3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4d3fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d400 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d401 call 0x10b46d90 */
  push32(0x10b4d406u); f_10b46d90();
  /* 10b4d406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d409 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d40c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4d40f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4d411 jne 0x10b4d41a */
  if (!C.zf) goto L_10b4d41a;
  /* 10b4d413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d415 jmp 0x10b4d549 */
  goto L_10b4d549;
L_10b4d41a:;
  /* 10b4d41a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d41d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4d420 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d423 jne 0x10b4d450 */
  if (!C.zf) goto L_10b4d450;
  /* 10b4d425 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d428 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b4d42c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d42e je 0x10b4d450 */
  if (C.zf) goto L_10b4d450;
  /* 10b4d430 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d433 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d436 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d43a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d440 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d441 call 0x10b45fd0 */
  push32(0x10b4d446u); f_10b45fd0();
  /* 10b4d446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d44b jmp 0x10b4d549 */
  goto L_10b4d549;
L_10b4d450:;
  /* 10b4d450 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4d457 jmp 0x10b4d462 */
  goto L_10b4d462;
L_10b4d459:;
  /* 10b4d459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d45c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d45f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4d462:;
  /* 10b4d462 push 0x10b6a078 */
  push32((uint32_t)(0x10b6a078u));
  /* 10b4d467 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d46a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d46b call 0x10b4ed40 */
  push32(0x10b4d470u); f_10b4ed40();
  /* 10b4d470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d473 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4d476 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d47a jne 0x10b4d484 */
  if (!C.zf) goto L_10b4d484;
  /* 10b4d47c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d47f jmp 0x10b4d549 */
  goto L_10b4d549;
L_10b4d484:;
  /* 10b4d484 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d487 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d48a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4d48c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10b4d48f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d493 jne 0x10b4d4ba */
  if (!C.zf) goto L_10b4d4ba;
  /* 10b4d495 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d499 jge 0x10b4d4ba */
  if ((C.sf==C.of)) goto L_10b4d4ba;
  /* 10b4d49b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4d49f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d4a2 je 0x10b4d4ba */
  if (C.zf) goto L_10b4d4ba;
  /* 10b4d4a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d4a7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d4a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d4ab push eax */
  push32((uint32_t)(EAX));
  /* 10b4d4ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d4af push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d4b0 call 0x10b46840 */
  push32(0x10b4d4b5u); f_10b46840();
  /* 10b4d4b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d4b8 jmp 0x10b4d520 */
  goto L_10b4d520;
L_10b4d4ba:;
  /* 10b4d4ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d4be jne 0x10b4d4e8 */
  if (!C.zf) goto L_10b4d4e8;
  /* 10b4d4c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d4c4 jge 0x10b4d4e8 */
  if ((C.sf==C.of)) goto L_10b4d4e8;
  /* 10b4d4c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4d4ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d4cd je 0x10b4d4e8 */
  if (C.zf) goto L_10b4d4e8;
  /* 10b4d4cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d4d2 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d4d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d4d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d4d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d4da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d4dd push edx */
  push32((uint32_t)(EDX));
  /* 10b4d4de call 0x10b46840 */
  push32(0x10b4d4e3u); f_10b46840();
  /* 10b4d4e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d4e6 jmp 0x10b4d520 */
  goto L_10b4d520;
L_10b4d4e8:;
  /* 10b4d4e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d4ec jne 0x10b4d51b */
  if (!C.zf) goto L_10b4d51b;
  /* 10b4d4ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4d4f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d4f4 je 0x10b4d4ff */
  if (C.zf) goto L_10b4d4ff;
  /* 10b4d4f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4d4fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d4fd jne 0x10b4d51b */
  if (!C.zf) goto L_10b4d51b;
L_10b4d4ff:;
  /* 10b4d4ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d502 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d503 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d506 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d507 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d50a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d510 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d511 call 0x10b46840 */
  push32(0x10b4d516u); f_10b46840();
  /* 10b4d516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d519 jmp 0x10b4d520 */
  goto L_10b4d520;
L_10b4d51b:;
  /* 10b4d51b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d51e jmp 0x10b4d549 */
  goto L_10b4d549;
L_10b4d520:;
  /* 10b4d520 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4d524 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d527 jne 0x10b4d52b */
  if (!C.zf) goto L_10b4d52b;
  /* 10b4d529 jmp 0x10b4d547 */
  goto L_10b4d547;
L_10b4d52b:;
  /* 10b4d52b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4d52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d531 jne 0x10b4d535 */
  if (!C.zf) goto L_10b4d535;
  /* 10b4d533 jmp 0x10b4d547 */
  goto L_10b4d547;
L_10b4d535:;
  /* 10b4d535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d538 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d53b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10b4d53f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b4d542 jmp 0x10b4d459 */
  goto L_10b4d459;
L_10b4d547:;
  /* 10b4d547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4d549:;
  /* 10b4d549 mov esp, ebp */
  ESP = (EBP);
  /* 10b4d54b pop ebp */
  EBP = (pop32());
  /* 10b4d54c ret  */
  ESPCHK(0x10b4d3f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10b4d550 (101 bytes, 36 insns) */
void f_10b4d550(void) {
  FTRACE(0x10b4d550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d550 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d551 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d553 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d556 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d55a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d55b call 0x10b45fd0 */
  push32(0x10b4d560u); f_10b45fd0();
  /* 10b4d560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d563 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d566 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10b4d56a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d56c je 0x10b4d588 */
  if (C.zf) goto L_10b4d588;
  /* 10b4d56e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d571 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d574 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d575 push 0x10b6a080 */
  push32((uint32_t)(0x10b6a080u));
  /* 10b4d57a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d57c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d57f push edx */
  push32((uint32_t)(EDX));
  /* 10b4d580 call 0x10b4d3a0 */
  push32(0x10b4d585u); f_10b4d3a0();
  /* 10b4d585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d588:;
  /* 10b4d588 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d58b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10b4d592 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4d594 je 0x10b4d5b3 */
  if (C.zf) goto L_10b4d5b3;
  /* 10b4d596 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4d599 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d59f push edx */
  push32((uint32_t)(EDX));
  /* 10b4d5a0 push 0x10b6a07c */
  push32((uint32_t)(0x10b6a07cu));
  /* 10b4d5a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d5a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d5aa push eax */
  push32((uint32_t)(EAX));
  /* 10b4d5ab call 0x10b4d3a0 */
  push32(0x10b4d5b0u); f_10b4d3a0();
  /* 10b4d5b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d5b3:;
  /* 10b4d5b3 pop ebp */
  EBP = (pop32());
  /* 10b4d5b4 ret  */
  ESPCHK(0x10b4d550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5c0 @ 0x10b4d5c0 (130 bytes, 50 insns) */
void f_10b4d5c0(void) {
  FTRACE(0x10b4d5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d5c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4d5c5 push esi */
  push32((uint32_t)(ESI));
  /* 10b4d5c6 push edi */
  push32((uint32_t)(EDI));
  /* 10b4d5c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b4d5ce:;
  /* 10b4d5ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d5d2 jne 0x10b4d5f2 */
  if (!C.zf) goto L_10b4d5f2;
  /* 10b4d5d4 push 0x10b6a090 */
  push32((uint32_t)(0x10b6a090u));
  /* 10b4d5d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4d5db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10b4d5dd push 0x10b6a084 */
  push32((uint32_t)(0x10b6a084u));
  /* 10b4d5e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d5e4 call 0x10b420e0 */
  push32(0x10b4d5e9u); f_10b420e0();
  /* 10b4d5e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d5ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d5ef jne 0x10b4d5f2 */
  if (!C.zf) goto L_10b4d5f2;
  /* 10b4d5f1 int3  */
  x86_unimpl("int3 @ 0x10b4d5f1");
L_10b4d5f2:;
  /* 10b4d5f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d5f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d5f6 jne 0x10b4d5ce */
  if (!C.zf) goto L_10b4d5ce;
  /* 10b4d5f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d5fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4d5fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4d601 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4d603 je 0x10b4d611 */
  if (C.zf) goto L_10b4d611;
  /* 10b4d605 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d608 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10b4d60f jmp 0x10b4d638 */
  goto L_10b4d638;
L_10b4d611:;
  /* 10b4d611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d614 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d615 call 0x10b4be30 */
  push32(0x10b4d61au); f_10b4be30();
  /* 10b4d61a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d61d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d620 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d621 call 0x10b4d650 */
  push32(0x10b4d626u); f_10b4d650();
  /* 10b4d626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d62c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d62f push eax */
  push32((uint32_t)(EAX));
  /* 10b4d630 call 0x10b4bea0 */
  push32(0x10b4d635u); f_10b4bea0();
  /* 10b4d635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4d638:;
  /* 10b4d638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d63b pop edi */
  EDI = (pop32());
  /* 10b4d63c pop esi */
  ESI = (pop32());
  /* 10b4d63d pop ebx */
  EBX = (pop32());
  /* 10b4d63e mov esp, ebp */
  ESP = (EBP);
  /* 10b4d640 pop ebp */
  EBP = (pop32());
  /* 10b4d641 ret  */
  ESPCHK(0x10b4d5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d650 @ 0x10b4d650 (190 bytes, 67 insns) */
void f_10b4d650(void) {
  FTRACE(0x10b4d650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d650 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d651 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4d656 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4d657 push esi */
  push32((uint32_t)(ESI));
  /* 10b4d658 push edi */
  push32((uint32_t)(EDI));
  /* 10b4d659 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b4d660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d663 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b4d666:;
  /* 10b4d666 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d66a jne 0x10b4d68a */
  if (!C.zf) goto L_10b4d68a;
  /* 10b4d66c push 0x10b69f30 */
  push32((uint32_t)(0x10b69f30u));
  /* 10b4d671 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4d673 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10b4d675 push 0x10b6a084 */
  push32((uint32_t)(0x10b6a084u));
  /* 10b4d67a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d67c call 0x10b420e0 */
  push32(0x10b4d681u); f_10b420e0();
  /* 10b4d681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d687 jne 0x10b4d68a */
  if (!C.zf) goto L_10b4d68a;
  /* 10b4d689 int3  */
  x86_unimpl("int3 @ 0x10b4d689");
L_10b4d68a:;
  /* 10b4d68a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d68c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4d68e jne 0x10b4d666 */
  if (!C.zf) goto L_10b4d666;
  /* 10b4d690 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d693 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b4d696 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d69b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d69d je 0x10b4d6fa */
  if (C.zf) goto L_10b4d6fa;
  /* 10b4d69f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d6a3 call 0x10b4c950 */
  push32(0x10b4d6a8u); f_10b4c950();
  /* 10b4d6a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d6ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d6ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6b1 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d6b2 call 0x10b4fcd0 */
  push32(0x10b4d6b7u); f_10b4fcd0();
  /* 10b4d6b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d6ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4d6c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d6c1 call 0x10b4fba0 */
  push32(0x10b4d6c6u); f_10b4fba0();
  /* 10b4d6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d6c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d6cb jge 0x10b4d6d6 */
  if ((C.sf==C.of)) goto L_10b4d6d6;
  /* 10b4d6cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b4d6d4 jmp 0x10b4d6fa */
  goto L_10b4d6fa;
L_10b4d6d6:;
  /* 10b4d6d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d6dd je 0x10b4d6fa */
  if (C.zf) goto L_10b4d6fa;
  /* 10b4d6df push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d6e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b4d6e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d6e8 call 0x10b43ab0 */
  push32(0x10b4d6edu); f_10b43ab0();
  /* 10b4d6ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d6f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10b4d6fa:;
  /* 10b4d6fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4d6fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10b4d704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d707 pop edi */
  EDI = (pop32());
  /* 10b4d708 pop esi */
  ESI = (pop32());
  /* 10b4d709 pop ebx */
  EBX = (pop32());
  /* 10b4d70a mov esp, ebp */
  ESP = (EBP);
  /* 10b4d70c pop ebp */
  EBP = (pop32());
  /* 10b4d70d ret  */
  ESPCHK(0x10b4d650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d710 @ 0x10b4d710 (210 bytes, 63 insns) */
void f_10b4d710(void) {
  FTRACE(0x10b4d710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d710 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d711 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d713 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d717 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d71d jae 0x10b4d741 */
  if (!C.cf) goto L_10b4d741;
  /* 10b4d71f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d722 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4d725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d728 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4d72b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d72e mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4d735 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4d73a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d73d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4d73f jne 0x10b4d754 */
  if (!C.zf) goto L_10b4d754;
L_10b4d741:;
  /* 10b4d741 call 0x10b4aef0 */
  push32(0x10b4d746u); f_10b4aef0();
  /* 10b4d746 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4d74c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d74f jmp 0x10b4d7de */
  goto L_10b4d7de;
L_10b4d754:;
  /* 10b4d754 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d757 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d758 call 0x10b4c710 */
  push32(0x10b4d75du); f_10b4c710();
  /* 10b4d75d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d763 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4d766 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d769 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d76c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4d76f mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4d776 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10b4d77b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d77e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d780 je 0x10b4d7bd */
  if (C.zf) goto L_10b4d7bd;
  /* 10b4d782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d785 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d786 call 0x10b4c590 */
  push32(0x10b4d78bu); f_10b4c590();
  /* 10b4d78b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d78e push eax */
  push32((uint32_t)(EAX));
  /* 10b4d78f call dword ptr [0x10b7028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7028c))), 0x10b4d795u);
  /* 10b4d795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d797 jne 0x10b4d7a4 */
  if (!C.zf) goto L_10b4d7a4;
  /* 10b4d799 call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b4d79fu);
  /* 10b4d79f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d7a2 jmp 0x10b4d7ab */
  goto L_10b4d7ab;
L_10b4d7a4:;
  /* 10b4d7a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b4d7ab:;
  /* 10b4d7ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d7af jne 0x10b4d7b3 */
  if (!C.zf) goto L_10b4d7b3;
  /* 10b4d7b1 jmp 0x10b4d7cf */
  goto L_10b4d7cf;
L_10b4d7b3:;
  /* 10b4d7b3 call 0x10b4af00 */
  push32(0x10b4d7b8u); f_10b4af00();
  /* 10b4d7b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d7bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b4d7bd:;
  /* 10b4d7bd call 0x10b4aef0 */
  push32(0x10b4d7c2u); f_10b4aef0();
  /* 10b4d7c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4d7c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b4d7cf:;
  /* 10b4d7cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d7d2 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d7d3 call 0x10b4c7a0 */
  push32(0x10b4d7d8u); f_10b4c7a0();
  /* 10b4d7d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d7db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b4d7de:;
  /* 10b4d7de mov esp, ebp */
  ESP = (EBP);
  /* 10b4d7e0 pop ebp */
  EBP = (pop32());
  /* 10b4d7e1 ret  */
  ESPCHK(0x10b4d710u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10b4d7f0 (219 bytes, 64 insns) */
void f_10b4d7f0(void) {
  FTRACE(0x10b4d7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d7f4 cmp dword ptr [0x10b6e664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d7fb je 0x10b4d891 */
  if (C.zf) goto L_10b4d891;
  /* 10b4d801 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b4d803 push 0x10b6a0a0 */
  push32((uint32_t)(0x10b6a0a0u));
  /* 10b4d808 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d80a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10b4d80f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d811 call 0x10b43430 */
  push32(0x10b4d816u); f_10b43430();
  /* 10b4d816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d81c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d820 jne 0x10b4d82c */
  if (!C.zf) goto L_10b4d82c;
  /* 10b4d822 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4d827 jmp 0x10b4d8c7 */
  goto L_10b4d8c7;
L_10b4d82c:;
  /* 10b4d82c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d82f push eax */
  push32((uint32_t)(EAX));
  /* 10b4d830 call 0x10b4d8d0 */
  push32(0x10b4d835u); f_10b4d8d0();
  /* 10b4d835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4d83a je 0x10b4d85d */
  if (C.zf) goto L_10b4d85d;
  /* 10b4d83c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d83f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d840 call 0x10b4de60 */
  push32(0x10b4d845u); f_10b4de60();
  /* 10b4d845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d848 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d84a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d84d push edx */
  push32((uint32_t)(EDX));
  /* 10b4d84e call 0x10b43ab0 */
  push32(0x10b4d853u); f_10b43ab0();
  /* 10b4d853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d856 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4d85b jmp 0x10b4d8c7 */
  goto L_10b4d8c7;
L_10b4d85d:;
  /* 10b4d85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d860 mov dword ptr [0x10b6dc98], eax */
  w32((uint32_t)(0x10b6dc98), (EAX));
  /* 10b4d865 mov ecx, dword ptr [0x10b6e684] */
  ECX = (r32((uint32_t)(0x10b6e684)));
  /* 10b4d86b push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d86c call 0x10b4de60 */
  push32(0x10b4d871u); f_10b4de60();
  /* 10b4d871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d874 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d876 mov edx, dword ptr [0x10b6e684] */
  EDX = (r32((uint32_t)(0x10b6e684)));
  /* 10b4d87c push edx */
  push32((uint32_t)(EDX));
  /* 10b4d87d call 0x10b43ab0 */
  push32(0x10b4d882u); f_10b43ab0();
  /* 10b4d882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d888 mov dword ptr [0x10b6e684], eax */
  w32((uint32_t)(0x10b6e684), (EAX));
  /* 10b4d88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d88f jmp 0x10b4d8c7 */
  goto L_10b4d8c7;
L_10b4d891:;
  /* 10b4d891 mov dword ptr [0x10b6dc98], 0x10b6dca0 */
  w32((uint32_t)(0x10b6dc98), (0x10b6dca0u));
  /* 10b4d89b mov ecx, dword ptr [0x10b6e684] */
  ECX = (r32((uint32_t)(0x10b6e684)));
  /* 10b4d8a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4d8a2 call 0x10b4de60 */
  push32(0x10b4d8a7u); f_10b4de60();
  /* 10b4d8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d8aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4d8ac mov edx, dword ptr [0x10b6e684] */
  EDX = (r32((uint32_t)(0x10b6e684)));
  /* 10b4d8b2 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d8b3 call 0x10b43ab0 */
  push32(0x10b4d8b8u); f_10b43ab0();
  /* 10b4d8b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d8bb mov dword ptr [0x10b6e684], 0 */
  w32((uint32_t)(0x10b6e684), (0x0u));
  /* 10b4d8c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4d8c7:;
  /* 10b4d8c7 mov esp, ebp */
  ESP = (EBP);
  /* 10b4d8c9 pop ebp */
  EBP = (pop32());
  /* 10b4d8ca ret  */
  ESPCHK(0x10b4d7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d0 @ 0x10b4d8d0 (1423 bytes, 533 insns) */
void f_10b4d8d0(void) {
  FTRACE(0x10b4d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4d8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4d8d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4d8d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4d8d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b4d8dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d8df mov ax, word ptr [0x10b6e6be] */
  AX = (r16((uint32_t)(0x10b6e6be)));
  /* 10b4d8e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4d8e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d8ea mov cx, word ptr [0x10b6e6c0] */
  CX = (r16((uint32_t)(0x10b6e6c0)));
  /* 10b4d8f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4d8f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4d8f8 jne 0x10b4d902 */
  if (!C.zf) goto L_10b4d902;
  /* 10b4d8fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4d8fd jmp 0x10b4de5b */
  goto L_10b4de5b;
L_10b4d902:;
  /* 10b4d902 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d905 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d908 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d909 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10b4d90b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d90e push eax */
  push32((uint32_t)(EAX));
  /* 10b4d90f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d911 call 0x10b511e0 */
  push32(0x10b4d916u); f_10b511e0();
  /* 10b4d916 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d919 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d91c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d91e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d921 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d924 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d927 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d928 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b4d92a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d92d push eax */
  push32((uint32_t)(EAX));
  /* 10b4d92e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d930 call 0x10b511e0 */
  push32(0x10b4d935u); f_10b511e0();
  /* 10b4d935 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d938 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d93b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d93d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d943 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d946 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d947 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10b4d949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d94c push eax */
  push32((uint32_t)(EAX));
  /* 10b4d94d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d94f call 0x10b511e0 */
  push32(0x10b4d954u); f_10b511e0();
  /* 10b4d954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d95a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d95c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d95f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d962 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d965 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d966 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10b4d968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d96b push eax */
  push32((uint32_t)(EAX));
  /* 10b4d96c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d96e call 0x10b511e0 */
  push32(0x10b4d973u); f_10b511e0();
  /* 10b4d973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d976 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d979 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d97b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d981 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d984 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d985 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10b4d987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d98a push eax */
  push32((uint32_t)(EAX));
  /* 10b4d98b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d98d call 0x10b511e0 */
  push32(0x10b4d992u); f_10b511e0();
  /* 10b4d992 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d998 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d99a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d99d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d9a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d9a3 push edx */
  push32((uint32_t)(EDX));
  /* 10b4d9a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10b4d9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d9a9 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d9aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d9ac call 0x10b511e0 */
  push32(0x10b4d9b1u); f_10b511e0();
  /* 10b4d9b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d9b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d9b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d9b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d9bf push edx */
  push32((uint32_t)(EDX));
  /* 10b4d9c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10b4d9c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d9c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d9c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d9c8 call 0x10b511e0 */
  push32(0x10b4d9cdu); f_10b511e0();
  /* 10b4d9cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d9d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d9d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d9d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d9d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d9db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d9de push edx */
  push32((uint32_t)(EDX));
  /* 10b4d9df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10b4d9e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4d9e4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4d9e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4d9e7 call 0x10b511e0 */
  push32(0x10b4d9ecu); f_10b511e0();
  /* 10b4d9ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d9ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4d9f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4d9f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4d9f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4d9fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4d9fd push edx */
  push32((uint32_t)(EDX));
  /* 10b4d9fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10b4da00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4da03 push eax */
  push32((uint32_t)(EAX));
  /* 10b4da04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4da06 call 0x10b511e0 */
  push32(0x10b4da0bu); f_10b511e0();
  /* 10b4da0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4da11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4da13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4da16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4da19 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da1c push edx */
  push32((uint32_t)(EDX));
  /* 10b4da1d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10b4da1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4da22 push eax */
  push32((uint32_t)(EAX));
  /* 10b4da23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4da25 call 0x10b511e0 */
  push32(0x10b4da2au); f_10b511e0();
  /* 10b4da2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4da30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4da32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4da35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4da38 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da3b push edx */
  push32((uint32_t)(EDX));
  /* 10b4da3c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10b4da3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4da41 push eax */
  push32((uint32_t)(EAX));
  /* 10b4da42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4da44 call 0x10b511e0 */
  push32(0x10b4da49u); f_10b511e0();
  /* 10b4da49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4da4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4da51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4da54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4da57 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da5a push edx */
  push32((uint32_t)(EDX));
  /* 10b4da5b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10b4da5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4da60 push eax */
  push32((uint32_t)(EAX));
  /* 10b4da61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4da63 call 0x10b511e0 */
  push32(0x10b4da68u); f_10b511e0();
  /* 10b4da68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4da6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4da70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4da73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4da76 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da79 push edx */
  push32((uint32_t)(EDX));
  /* 10b4da7a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10b4da7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4da7f push eax */
  push32((uint32_t)(EAX));
  /* 10b4da80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4da82 call 0x10b511e0 */
  push32(0x10b4da87u); f_10b511e0();
  /* 10b4da87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4da8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4da8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4da92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4da95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4da98 push edx */
  push32((uint32_t)(EDX));
  /* 10b4da99 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b4da9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4da9e push eax */
  push32((uint32_t)(EAX));
  /* 10b4da9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4daa1 call 0x10b511e0 */
  push32(0x10b4daa6u); f_10b511e0();
  /* 10b4daa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4daa9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4daac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4daae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dab4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dab7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dab8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b4daba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dabd push eax */
  push32((uint32_t)(EAX));
  /* 10b4dabe push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dac0 call 0x10b511e0 */
  push32(0x10b4dac5u); f_10b511e0();
  /* 10b4dac5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dac8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dacb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dacd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dad0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dad3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dad6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dad7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10b4dad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dadc push eax */
  push32((uint32_t)(EAX));
  /* 10b4dadd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dadf call 0x10b511e0 */
  push32(0x10b4dae4u); f_10b511e0();
  /* 10b4dae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dae7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4daea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4daec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4daef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4daf2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4daf5 push edx */
  push32((uint32_t)(EDX));
  /* 10b4daf6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10b4daf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dafb push eax */
  push32((uint32_t)(EAX));
  /* 10b4dafc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dafe call 0x10b511e0 */
  push32(0x10b4db03u); f_10b511e0();
  /* 10b4db03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4db09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4db0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4db0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4db11 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db14 push edx */
  push32((uint32_t)(EDX));
  /* 10b4db15 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10b4db17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4db1a push eax */
  push32((uint32_t)(EAX));
  /* 10b4db1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4db1d call 0x10b511e0 */
  push32(0x10b4db22u); f_10b511e0();
  /* 10b4db22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4db28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4db2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4db2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4db30 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db33 push edx */
  push32((uint32_t)(EDX));
  /* 10b4db34 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b4db36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4db39 push eax */
  push32((uint32_t)(EAX));
  /* 10b4db3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4db3c call 0x10b511e0 */
  push32(0x10b4db41u); f_10b511e0();
  /* 10b4db41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4db47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4db49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4db4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4db4f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db52 push edx */
  push32((uint32_t)(EDX));
  /* 10b4db53 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10b4db55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4db58 push eax */
  push32((uint32_t)(EAX));
  /* 10b4db59 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4db5b call 0x10b511e0 */
  push32(0x10b4db60u); f_10b511e0();
  /* 10b4db60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4db66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4db68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4db6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4db6e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db71 push edx */
  push32((uint32_t)(EDX));
  /* 10b4db72 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10b4db74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4db77 push eax */
  push32((uint32_t)(EAX));
  /* 10b4db78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4db7a call 0x10b511e0 */
  push32(0x10b4db7fu); f_10b511e0();
  /* 10b4db7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4db85 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4db87 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4db8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4db8d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4db90 push edx */
  push32((uint32_t)(EDX));
  /* 10b4db91 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10b4db93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4db96 push eax */
  push32((uint32_t)(EAX));
  /* 10b4db97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4db99 call 0x10b511e0 */
  push32(0x10b4db9eu); f_10b511e0();
  /* 10b4db9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dba1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dba4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dba6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dbac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dbaf push edx */
  push32((uint32_t)(EDX));
  /* 10b4dbb0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10b4dbb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dbb5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dbb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dbb8 call 0x10b511e0 */
  push32(0x10b4dbbdu); f_10b511e0();
  /* 10b4dbbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dbc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dbc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dbc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dbc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dbcb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dbce push edx */
  push32((uint32_t)(EDX));
  /* 10b4dbcf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10b4dbd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dbd4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dbd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dbd7 call 0x10b511e0 */
  push32(0x10b4dbdcu); f_10b511e0();
  /* 10b4dbdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dbdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dbe2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dbe4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dbea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dbed push edx */
  push32((uint32_t)(EDX));
  /* 10b4dbee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10b4dbf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dbf3 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dbf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dbf6 call 0x10b511e0 */
  push32(0x10b4dbfbu); f_10b511e0();
  /* 10b4dbfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dbfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dc01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dc03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dc06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dc09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc0c push edx */
  push32((uint32_t)(EDX));
  /* 10b4dc0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10b4dc0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dc12 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dc13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dc15 call 0x10b511e0 */
  push32(0x10b4dc1au); f_10b511e0();
  /* 10b4dc1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dc20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dc22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dc25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dc28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc2b push edx */
  push32((uint32_t)(EDX));
  /* 10b4dc2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10b4dc2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dc31 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dc32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dc34 call 0x10b511e0 */
  push32(0x10b4dc39u); f_10b511e0();
  /* 10b4dc39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dc3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dc41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dc47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc4a push edx */
  push32((uint32_t)(EDX));
  /* 10b4dc4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10b4dc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dc50 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dc51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dc53 call 0x10b511e0 */
  push32(0x10b4dc58u); f_10b511e0();
  /* 10b4dc58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dc5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dc60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dc63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dc66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc69 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dc6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10b4dc6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dc6f push eax */
  push32((uint32_t)(EAX));
  /* 10b4dc70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dc72 call 0x10b511e0 */
  push32(0x10b4dc77u); f_10b511e0();
  /* 10b4dc77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dc7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dc7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dc82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dc85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc88 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dc89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10b4dc8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dc8e push eax */
  push32((uint32_t)(EAX));
  /* 10b4dc8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dc91 call 0x10b511e0 */
  push32(0x10b4dc96u); f_10b511e0();
  /* 10b4dc96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dc99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dc9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dc9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dca4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dca7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dca8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10b4dcaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dcad push eax */
  push32((uint32_t)(EAX));
  /* 10b4dcae push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dcb0 call 0x10b511e0 */
  push32(0x10b4dcb5u); f_10b511e0();
  /* 10b4dcb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dcb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dcbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dcbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dcc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dcc3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dcc6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dcc7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10b4dcc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dccc push eax */
  push32((uint32_t)(EAX));
  /* 10b4dccd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dccf call 0x10b511e0 */
  push32(0x10b4dcd4u); f_10b511e0();
  /* 10b4dcd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dcd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dcda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dcdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dcdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dce2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dce8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dce9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10b4dceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dcee push eax */
  push32((uint32_t)(EAX));
  /* 10b4dcef push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dcf1 call 0x10b511e0 */
  push32(0x10b4dcf6u); f_10b511e0();
  /* 10b4dcf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dcf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dcfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dcfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dd01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dd04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd0a push edx */
  push32((uint32_t)(EDX));
  /* 10b4dd0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b4dd0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dd10 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dd11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dd13 call 0x10b511e0 */
  push32(0x10b4dd18u); f_10b511e0();
  /* 10b4dd18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dd1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dd20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dd23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dd26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd2c push edx */
  push32((uint32_t)(EDX));
  /* 10b4dd2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b4dd2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dd32 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dd33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dd35 call 0x10b511e0 */
  push32(0x10b4dd3au); f_10b511e0();
  /* 10b4dd3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dd40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dd42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dd45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dd48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd4e push edx */
  push32((uint32_t)(EDX));
  /* 10b4dd4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b4dd51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dd54 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dd55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dd57 call 0x10b511e0 */
  push32(0x10b4dd5cu); f_10b511e0();
  /* 10b4dd5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dd62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dd64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dd67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dd6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd70 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dd71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b4dd73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dd76 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dd77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dd79 call 0x10b511e0 */
  push32(0x10b4dd7eu); f_10b511e0();
  /* 10b4dd7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dd84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dd86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4dd89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dd8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dd92 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dd93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b4dd95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dd98 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dd99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dd9b call 0x10b511e0 */
  push32(0x10b4dda0u); f_10b511e0();
  /* 10b4dda0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dda3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4dda6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4dda8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4ddab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ddae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ddb4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ddb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10b4ddb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ddba push eax */
  push32((uint32_t)(EAX));
  /* 10b4ddbb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4ddbd call 0x10b511e0 */
  push32(0x10b4ddc2u); f_10b511e0();
  /* 10b4ddc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ddc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ddc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ddca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4ddcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ddd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ddd6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ddd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10b4ddd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4dddc push eax */
  push32((uint32_t)(EAX));
  /* 10b4dddd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4dddf call 0x10b511e0 */
  push32(0x10b4dde4u); f_10b511e0();
  /* 10b4dde4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dde7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4ddea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ddec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4ddef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ddf2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ddf8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ddf9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b4ddfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ddfe push eax */
  push32((uint32_t)(EAX));
  /* 10b4ddff push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4de01 call 0x10b511e0 */
  push32(0x10b4de06u); f_10b511e0();
  /* 10b4de06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4de0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4de0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4de11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4de14 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de1a push edx */
  push32((uint32_t)(EDX));
  /* 10b4de1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b4de1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4de20 push eax */
  push32((uint32_t)(EAX));
  /* 10b4de21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4de23 call 0x10b511e0 */
  push32(0x10b4de28u); f_10b511e0();
  /* 10b4de28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4de2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4de30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4de33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4de36 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de3c push edx */
  push32((uint32_t)(EDX));
  /* 10b4de3d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10b4de42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4de45 push eax */
  push32((uint32_t)(EAX));
  /* 10b4de46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4de48 call 0x10b511e0 */
  push32(0x10b4de4du); f_10b511e0();
  /* 10b4de4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4de53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4de55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b4de58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10b4de5b:;
  /* 10b4de5b mov esp, ebp */
  ESP = (EBP);
  /* 10b4de5d pop ebp */
  EBP = (pop32());
  /* 10b4de5e ret  */
  ESPCHK(0x10b4d8d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10b4de60 (779 bytes, 265 insns) */
void f_10b4de60(void) {
  FTRACE(0x10b4de60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4de60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4de61 mov ebp, esp */
  EBP = (ESP);
  /* 10b4de63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4de67 jne 0x10b4de6e */
  if (!C.zf) goto L_10b4de6e;
  /* 10b4de69 jmp 0x10b4e169 */
  goto L_10b4e169;
L_10b4de6e:;
  /* 10b4de6e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4de70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4de73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b4de76 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4de77 call 0x10b43ab0 */
  push32(0x10b4de7cu); f_10b43ab0();
  /* 10b4de7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4de81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4de84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b4de87 push eax */
  push32((uint32_t)(EAX));
  /* 10b4de88 call 0x10b43ab0 */
  push32(0x10b4de8du); f_10b43ab0();
  /* 10b4de8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4de90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4de92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4de95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4de98 push edx */
  push32((uint32_t)(EDX));
  /* 10b4de99 call 0x10b43ab0 */
  push32(0x10b4de9eu); f_10b43ab0();
  /* 10b4de9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dea6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4dea9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4deaa call 0x10b43ab0 */
  push32(0x10b4deafu); f_10b43ab0();
  /* 10b4deaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4deb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4deb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4deb7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b4deba push eax */
  push32((uint32_t)(EAX));
  /* 10b4debb call 0x10b43ab0 */
  push32(0x10b4dec0u); f_10b43ab0();
  /* 10b4dec0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dec5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dec8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b4decb push edx */
  push32((uint32_t)(EDX));
  /* 10b4decc call 0x10b43ab0 */
  push32(0x10b4ded1u); f_10b43ab0();
  /* 10b4ded1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ded4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ded6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ded9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4dedb push ecx */
  push32((uint32_t)(ECX));
  /* 10b4dedc call 0x10b43ab0 */
  push32(0x10b4dee1u); f_10b43ab0();
  /* 10b4dee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dee6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dee9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10b4deec push eax */
  push32((uint32_t)(EAX));
  /* 10b4deed call 0x10b43ab0 */
  push32(0x10b4def2u); f_10b43ab0();
  /* 10b4def2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4def5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4def7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4defa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10b4defd push edx */
  push32((uint32_t)(EDX));
  /* 10b4defe call 0x10b43ab0 */
  push32(0x10b4df03u); f_10b43ab0();
  /* 10b4df03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df0b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10b4df0e push ecx */
  push32((uint32_t)(ECX));
  /* 10b4df0f call 0x10b43ab0 */
  push32(0x10b4df14u); f_10b43ab0();
  /* 10b4df14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df1c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10b4df1f push eax */
  push32((uint32_t)(EAX));
  /* 10b4df20 call 0x10b43ab0 */
  push32(0x10b4df25u); f_10b43ab0();
  /* 10b4df25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df2d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10b4df30 push edx */
  push32((uint32_t)(EDX));
  /* 10b4df31 call 0x10b43ab0 */
  push32(0x10b4df36u); f_10b43ab0();
  /* 10b4df36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df3e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10b4df41 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4df42 call 0x10b43ab0 */
  push32(0x10b4df47u); f_10b43ab0();
  /* 10b4df47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df4f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b4df52 push eax */
  push32((uint32_t)(EAX));
  /* 10b4df53 call 0x10b43ab0 */
  push32(0x10b4df58u); f_10b43ab0();
  /* 10b4df58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df60 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10b4df63 push edx */
  push32((uint32_t)(EDX));
  /* 10b4df64 call 0x10b43ab0 */
  push32(0x10b4df69u); f_10b43ab0();
  /* 10b4df69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df71 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10b4df74 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4df75 call 0x10b43ab0 */
  push32(0x10b4df7au); f_10b43ab0();
  /* 10b4df7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df82 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10b4df85 push eax */
  push32((uint32_t)(EAX));
  /* 10b4df86 call 0x10b43ab0 */
  push32(0x10b4df8bu); f_10b43ab0();
  /* 10b4df8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4df90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4df93 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10b4df96 push edx */
  push32((uint32_t)(EDX));
  /* 10b4df97 call 0x10b43ab0 */
  push32(0x10b4df9cu); f_10b43ab0();
  /* 10b4df9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4df9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dfa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dfa4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10b4dfa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4dfa8 call 0x10b43ab0 */
  push32(0x10b4dfadu); f_10b43ab0();
  /* 10b4dfad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dfb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dfb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dfb5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10b4dfb8 push eax */
  push32((uint32_t)(EAX));
  /* 10b4dfb9 call 0x10b43ab0 */
  push32(0x10b4dfbeu); f_10b43ab0();
  /* 10b4dfbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dfc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dfc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dfc6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b4dfc9 push edx */
  push32((uint32_t)(EDX));
  /* 10b4dfca call 0x10b43ab0 */
  push32(0x10b4dfcfu); f_10b43ab0();
  /* 10b4dfcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dfd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dfd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dfd7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10b4dfda push ecx */
  push32((uint32_t)(ECX));
  /* 10b4dfdb call 0x10b43ab0 */
  push32(0x10b4dfe0u); f_10b43ab0();
  /* 10b4dfe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dfe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dfe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dfe8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10b4dfeb push eax */
  push32((uint32_t)(EAX));
  /* 10b4dfec call 0x10b43ab0 */
  push32(0x10b4dff1u); f_10b43ab0();
  /* 10b4dff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4dff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4dff6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4dff9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10b4dffc push edx */
  push32((uint32_t)(EDX));
  /* 10b4dffd call 0x10b43ab0 */
  push32(0x10b4e002u); f_10b43ab0();
  /* 10b4e002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e005 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e007 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e00a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10b4e00d push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e00e call 0x10b43ab0 */
  push32(0x10b4e013u); f_10b43ab0();
  /* 10b4e013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e016 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e01b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10b4e01e push eax */
  push32((uint32_t)(EAX));
  /* 10b4e01f call 0x10b43ab0 */
  push32(0x10b4e024u); f_10b43ab0();
  /* 10b4e024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e027 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e02c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10b4e02f push edx */
  push32((uint32_t)(EDX));
  /* 10b4e030 call 0x10b43ab0 */
  push32(0x10b4e035u); f_10b43ab0();
  /* 10b4e035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e038 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e03a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e03d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10b4e040 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e041 call 0x10b43ab0 */
  push32(0x10b4e046u); f_10b43ab0();
  /* 10b4e046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e049 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e04b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e04e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10b4e051 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e052 call 0x10b43ab0 */
  push32(0x10b4e057u); f_10b43ab0();
  /* 10b4e057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e05a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e05c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e05f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10b4e062 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e063 call 0x10b43ab0 */
  push32(0x10b4e068u); f_10b43ab0();
  /* 10b4e068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e06b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e06d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e070 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10b4e073 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e074 call 0x10b43ab0 */
  push32(0x10b4e079u); f_10b43ab0();
  /* 10b4e079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e07c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e07e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e081 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10b4e084 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e085 call 0x10b43ab0 */
  push32(0x10b4e08au); f_10b43ab0();
  /* 10b4e08a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e08d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e08f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e092 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10b4e098 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e099 call 0x10b43ab0 */
  push32(0x10b4e09eu); f_10b43ab0();
  /* 10b4e09e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e0a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e0a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e0a6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10b4e0ac push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e0ad call 0x10b43ab0 */
  push32(0x10b4e0b2u); f_10b43ab0();
  /* 10b4e0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e0b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e0b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e0ba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10b4e0c0 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e0c1 call 0x10b43ab0 */
  push32(0x10b4e0c6u); f_10b43ab0();
  /* 10b4e0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e0c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e0cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e0ce mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10b4e0d4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e0d5 call 0x10b43ab0 */
  push32(0x10b4e0dau); f_10b43ab0();
  /* 10b4e0da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e0df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e0e2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10b4e0e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e0e9 call 0x10b43ab0 */
  push32(0x10b4e0eeu); f_10b43ab0();
  /* 10b4e0ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e0f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e0f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e0f6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10b4e0fc push eax */
  push32((uint32_t)(EAX));
  /* 10b4e0fd call 0x10b43ab0 */
  push32(0x10b4e102u); f_10b43ab0();
  /* 10b4e102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e105 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e10a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10b4e110 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e111 call 0x10b43ab0 */
  push32(0x10b4e116u); f_10b43ab0();
  /* 10b4e116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e119 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e11b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e11e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10b4e124 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e125 call 0x10b43ab0 */
  push32(0x10b4e12au); f_10b43ab0();
  /* 10b4e12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e12d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e12f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e132 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10b4e138 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e139 call 0x10b43ab0 */
  push32(0x10b4e13eu); f_10b43ab0();
  /* 10b4e13e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e141 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e143 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e146 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10b4e14c push edx */
  push32((uint32_t)(EDX));
  /* 10b4e14d call 0x10b43ab0 */
  push32(0x10b4e152u); f_10b43ab0();
  /* 10b4e152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e155 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e15a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10b4e160 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e161 call 0x10b43ab0 */
  push32(0x10b4e166u); f_10b43ab0();
  /* 10b4e166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4e169:;
  /* 10b4e169 pop ebp */
  EBP = (pop32());
  /* 10b4e16a ret  */
  ESPCHK(0x10b4de60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x10b4e170 (678 bytes, 180 insns) */
void f_10b4e170(void) {
  FTRACE(0x10b4e170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e170 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e171 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4e176 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4e17d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e17f mov ax, word ptr [0x10b6e6ba] */
  AX = (r16((uint32_t)(0x10b6e6ba)));
  /* 10b4e185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4e188 cmp dword ptr [0x10b6e660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e18f je 0x10b4e2ea */
  if (C.zf) goto L_10b4e2ea;
  /* 10b4e195 push 0x10b6e688 */
  push32((uint32_t)(0x10b6e688u));
  /* 10b4e19a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b4e19c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e19f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e1a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e1a2 call 0x10b511e0 */
  push32(0x10b4e1a7u); f_10b511e0();
  /* 10b4e1a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e1aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e1ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4e1af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b4e1b2 push 0x10b6e68c */
  push32((uint32_t)(0x10b6e68cu));
  /* 10b4e1b7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b4e1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e1bc push eax */
  push32((uint32_t)(EAX));
  /* 10b4e1bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e1bf call 0x10b511e0 */
  push32(0x10b4e1c4u); f_10b511e0();
  /* 10b4e1c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e1c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e1ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e1cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e1cf push 0x10b6e690 */
  push32((uint32_t)(0x10b6e690u));
  /* 10b4e1d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b4e1d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e1d9 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e1da push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e1dc call 0x10b511e0 */
  push32(0x10b4e1e1u); f_10b511e0();
  /* 10b4e1e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e1e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e1e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e1e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e1ec mov edx, dword ptr [0x10b6e690] */
  EDX = (r32((uint32_t)(0x10b6e690)));
  /* 10b4e1f2 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e1f3 call 0x10b4e420 */
  push32(0x10b4e1f8u); f_10b4e420();
  /* 10b4e1f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e1fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e1ff je 0x10b4e259 */
  if (C.zf) goto L_10b4e259;
  /* 10b4e201 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e203 mov eax, dword ptr [0x10b6e688] */
  EAX = (r32((uint32_t)(0x10b6e688)));
  /* 10b4e208 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e209 call 0x10b43ab0 */
  push32(0x10b4e20eu); f_10b43ab0();
  /* 10b4e20e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e211 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e213 mov ecx, dword ptr [0x10b6e68c] */
  ECX = (r32((uint32_t)(0x10b6e68c)));
  /* 10b4e219 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e21a call 0x10b43ab0 */
  push32(0x10b4e21fu); f_10b43ab0();
  /* 10b4e21f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e222 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e224 mov edx, dword ptr [0x10b6e690] */
  EDX = (r32((uint32_t)(0x10b6e690)));
  /* 10b4e22a push edx */
  push32((uint32_t)(EDX));
  /* 10b4e22b call 0x10b43ab0 */
  push32(0x10b4e230u); f_10b43ab0();
  /* 10b4e230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e233 mov dword ptr [0x10b6e688], 0 */
  w32((uint32_t)(0x10b6e688), (0x0u));
  /* 10b4e23d mov dword ptr [0x10b6e68c], 0 */
  w32((uint32_t)(0x10b6e68c), (0x0u));
  /* 10b4e247 mov dword ptr [0x10b6e690], 0 */
  w32((uint32_t)(0x10b6e690), (0x0u));
  /* 10b4e251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e254 jmp 0x10b4e412 */
  goto L_10b4e412;
L_10b4e259:;
  /* 10b4e259 mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e25e cmp dword ptr [eax], 0x10b6dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10b6dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e264 je 0x10b4e2a0 */
  if (C.zf) goto L_10b4e2a0;
  /* 10b4e266 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e268 mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e26e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4e270 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e271 call 0x10b43ab0 */
  push32(0x10b4e276u); f_10b43ab0();
  /* 10b4e276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e279 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e27b mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e280 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b4e283 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e284 call 0x10b43ab0 */
  push32(0x10b4e289u); f_10b43ab0();
  /* 10b4e289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e28c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e28e mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e294 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b4e297 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e298 call 0x10b43ab0 */
  push32(0x10b4e29du); f_10b43ab0();
  /* 10b4e29d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4e2a0:;
  /* 10b4e2a0 mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e2a6 mov edx, dword ptr [0x10b6e688] */
  EDX = (r32((uint32_t)(0x10b6e688)));
  /* 10b4e2ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b4e2ae mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e2b3 mov ecx, dword ptr [0x10b6e68c] */
  ECX = (r32((uint32_t)(0x10b6e68c)));
  /* 10b4e2b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b4e2bc mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e2c2 mov eax, dword ptr [0x10b6e690] */
  EAX = (r32((uint32_t)(0x10b6e690)));
  /* 10b4e2c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b4e2ca mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e2d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4e2d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4e2d4 mov byte ptr [0x10b6cea8], al */
  w8((uint32_t)(0x10b6cea8), (AL));
  /* 10b4e2d9 mov dword ptr [0x10b6ceac], 1 */
  w32((uint32_t)(0x10b6ceac), (0x1u));
  /* 10b4e2e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e2e5 jmp 0x10b4e412 */
  goto L_10b4e412;
L_10b4e2ea:;
  /* 10b4e2ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e2ec mov ecx, dword ptr [0x10b6e688] */
  ECX = (r32((uint32_t)(0x10b6e688)));
  /* 10b4e2f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e2f3 call 0x10b43ab0 */
  push32(0x10b4e2f8u); f_10b43ab0();
  /* 10b4e2f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e2fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e2fd mov edx, dword ptr [0x10b6e68c] */
  EDX = (r32((uint32_t)(0x10b6e68c)));
  /* 10b4e303 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e304 call 0x10b43ab0 */
  push32(0x10b4e309u); f_10b43ab0();
  /* 10b4e309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e30c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e30e mov eax, dword ptr [0x10b6e690] */
  EAX = (r32((uint32_t)(0x10b6e690)));
  /* 10b4e313 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e314 call 0x10b43ab0 */
  push32(0x10b4e319u); f_10b43ab0();
  /* 10b4e319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e31c mov dword ptr [0x10b6e688], 0 */
  w32((uint32_t)(0x10b6e688), (0x0u));
  /* 10b4e326 mov dword ptr [0x10b6e68c], 0 */
  w32((uint32_t)(0x10b6e68c), (0x0u));
  /* 10b4e330 mov dword ptr [0x10b6e690], 0 */
  w32((uint32_t)(0x10b6e690), (0x0u));
  /* 10b4e33a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10b4e33f push 0x10b6a0ac */
  push32((uint32_t)(0x10b6a0acu));
  /* 10b4e344 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e346 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e348 call 0x10b43020 */
  push32(0x10b4e34du); f_10b43020();
  /* 10b4e34d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e350 mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e356 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b4e358 mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e35e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e361 jne 0x10b4e36b */
  if (!C.zf) goto L_10b4e36b;
  /* 10b4e363 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e366 jmp 0x10b4e412 */
  goto L_10b4e412;
L_10b4e36b:;
  /* 10b4e36b push 0x10b6a07c */
  push32((uint32_t)(0x10b6a07cu));
  /* 10b4e370 mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e375 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b4e377 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e378 call 0x10b45fd0 */
  push32(0x10b4e37du); f_10b45fd0();
  /* 10b4e37d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e380 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10b4e385 push 0x10b6a0ac */
  push32((uint32_t)(0x10b6a0acu));
  /* 10b4e38a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e38c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e38e call 0x10b43020 */
  push32(0x10b4e393u); f_10b43020();
  /* 10b4e393 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e396 mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e39c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b4e39f mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e3a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e3a8 jne 0x10b4e3af */
  if (!C.zf) goto L_10b4e3af;
  /* 10b4e3aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e3ad jmp 0x10b4e412 */
  goto L_10b4e412;
L_10b4e3af:;
  /* 10b4e3af mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e3b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4e3b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b4e3bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10b4e3c0 push 0x10b6a0ac */
  push32((uint32_t)(0x10b6a0acu));
  /* 10b4e3c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e3c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e3c9 call 0x10b43020 */
  push32(0x10b4e3ceu); f_10b43020();
  /* 10b4e3ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e3d1 mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e3d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b4e3da mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e3e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e3e4 jne 0x10b4e3eb */
  if (!C.zf) goto L_10b4e3eb;
  /* 10b4e3e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e3e9 jmp 0x10b4e412 */
  goto L_10b4e412;
L_10b4e3eb:;
  /* 10b4e3eb mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e3f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b4e3f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b4e3f6 mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e3fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4e3fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b4e400 mov byte ptr [0x10b6cea8], cl */
  w8((uint32_t)(0x10b6cea8), (CL));
  /* 10b4e406 mov dword ptr [0x10b6ceac], 1 */
  w32((uint32_t)(0x10b6ceac), (0x1u));
  /* 10b4e410 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4e412:;
  /* 10b4e412 mov esp, ebp */
  ESP = (EBP);
  /* 10b4e414 pop ebp */
  EBP = (pop32());
  /* 10b4e415 ret  */
  ESPCHK(0x10b4e170u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10b4e420 (125 bytes, 49 insns) */
void f_10b4e420(void) {
  FTRACE(0x10b4e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e420 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e421 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e423 push ecx */
  push32((uint32_t)(ECX));
L_10b4e424:;
  /* 10b4e424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e427 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4e42a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4e42c je 0x10b4e499 */
  if (C.zf) goto L_10b4e499;
  /* 10b4e42e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e431 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4e434 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e437 jl 0x10b4e45d */
  if ((C.sf!=C.of)) goto L_10b4e45d;
  /* 10b4e439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e43c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4e43f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e442 jg 0x10b4e45d */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4e45d;
  /* 10b4e444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e447 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4e44a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4e44d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e450 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b4e452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e455 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e458 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b4e45b jmp 0x10b4e497 */
  goto L_10b4e497;
L_10b4e45d:;
  /* 10b4e45d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e460 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4e463 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e466 jne 0x10b4e48e */
  if (!C.zf) goto L_10b4e48e;
  /* 10b4e468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e46b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4e46e:;
  /* 10b4e46e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e474 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b4e477 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b4e479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e47c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e47f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4e482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e485 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4e488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4e48a jne 0x10b4e46e */
  if (!C.zf) goto L_10b4e46e;
  /* 10b4e48c jmp 0x10b4e497 */
  goto L_10b4e497;
L_10b4e48e:;
  /* 10b4e48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e491 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e494 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b4e497:;
  /* 10b4e497 jmp 0x10b4e424 */
  goto L_10b4e424;
L_10b4e499:;
  /* 10b4e499 mov esp, ebp */
  ESP = (EBP);
  /* 10b4e49b pop ebp */
  EBP = (pop32());
  /* 10b4e49c ret  */
  ESPCHK(0x10b4e420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4a0 @ 0x10b4e4a0 (304 bytes, 85 insns) */
void f_10b4e4a0(void) {
  FTRACE(0x10b4e4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e4a4 cmp dword ptr [0x10b6e65c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e65c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e4ab je 0x10b4e56c */
  if (C.zf) goto L_10b4e56c;
  /* 10b4e4b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10b4e4b3 push 0x10b6a0b8 */
  push32((uint32_t)(0x10b6a0b8u));
  /* 10b4e4b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e4ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b4e4bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e4be call 0x10b43430 */
  push32(0x10b4e4c3u); f_10b43430();
  /* 10b4e4c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e4c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4e4c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e4cd jne 0x10b4e4d9 */
  if (!C.zf) goto L_10b4e4d9;
  /* 10b4e4cf mov eax, 1 */
  EAX = (0x1u);
  /* 10b4e4d4 jmp 0x10b4e5cc */
  goto L_10b4e5cc;
L_10b4e4d9:;
  /* 10b4e4d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e4dc push eax */
  push32((uint32_t)(EAX));
  /* 10b4e4dd call 0x10b4e5d0 */
  push32(0x10b4e4e2u); f_10b4e5d0();
  /* 10b4e4e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e4e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4e4e7 je 0x10b4e50d */
  if (C.zf) goto L_10b4e50d;
  /* 10b4e4e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e4ec push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e4ed call 0x10b4e860 */
  push32(0x10b4e4f2u); f_10b4e860();
  /* 10b4e4f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e4f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e4f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e4fa push edx */
  push32((uint32_t)(EDX));
  /* 10b4e4fb call 0x10b43ab0 */
  push32(0x10b4e500u); f_10b43ab0();
  /* 10b4e500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e503 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4e508 jmp 0x10b4e5cc */
  goto L_10b4e5cc;
L_10b4e50d:;
  /* 10b4e50d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e510 mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e516 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4e518 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b4e51a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e51d mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e523 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b4e526 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b4e529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e52c mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e532 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b4e535 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10b4e538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e53b mov dword ptr [0x10b6dd88], eax */
  w32((uint32_t)(0x10b6dd88), (EAX));
  /* 10b4e540 mov ecx, dword ptr [0x10b6e694] */
  ECX = (r32((uint32_t)(0x10b6e694)));
  /* 10b4e546 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e547 call 0x10b4e860 */
  push32(0x10b4e54cu); f_10b4e860();
  /* 10b4e54c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e54f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e551 mov edx, dword ptr [0x10b6e694] */
  EDX = (r32((uint32_t)(0x10b6e694)));
  /* 10b4e557 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e558 call 0x10b43ab0 */
  push32(0x10b4e55du); f_10b43ab0();
  /* 10b4e55d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e560 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e563 mov dword ptr [0x10b6e694], eax */
  w32((uint32_t)(0x10b6e694), (EAX));
  /* 10b4e568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e56a jmp 0x10b4e5cc */
  goto L_10b4e5cc;
L_10b4e56c:;
  /* 10b4e56c mov ecx, dword ptr [0x10b6dd88] */
  ECX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e572 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4e574 mov dword ptr [0x10b6dd58], edx */
  w32((uint32_t)(0x10b6dd58), (EDX));
  /* 10b4e57a mov eax, dword ptr [0x10b6dd88] */
  EAX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e57f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b4e582 mov dword ptr [0x10b6dd5c], ecx */
  w32((uint32_t)(0x10b6dd5c), (ECX));
  /* 10b4e588 mov edx, dword ptr [0x10b6dd88] */
  EDX = (r32((uint32_t)(0x10b6dd88)));
  /* 10b4e58e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b4e591 mov dword ptr [0x10b6dd60], eax */
  w32((uint32_t)(0x10b6dd60), (EAX));
  /* 10b4e596 mov dword ptr [0x10b6dd88], 0x10b6dd58 */
  w32((uint32_t)(0x10b6dd88), (0x10b6dd58u));
  /* 10b4e5a0 mov ecx, dword ptr [0x10b6e694] */
  ECX = (r32((uint32_t)(0x10b6e694)));
  /* 10b4e5a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e5a7 call 0x10b4e860 */
  push32(0x10b4e5acu); f_10b4e860();
  /* 10b4e5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e5af push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e5b1 mov edx, dword ptr [0x10b6e694] */
  EDX = (r32((uint32_t)(0x10b6e694)));
  /* 10b4e5b7 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e5b8 call 0x10b43ab0 */
  push32(0x10b4e5bdu); f_10b43ab0();
  /* 10b4e5bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e5c0 mov dword ptr [0x10b6e694], 0 */
  w32((uint32_t)(0x10b6e694), (0x0u));
  /* 10b4e5ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4e5cc:;
  /* 10b4e5cc mov esp, ebp */
  ESP = (EBP);
  /* 10b4e5ce pop ebp */
  EBP = (pop32());
  /* 10b4e5cf ret  */
  ESPCHK(0x10b4e4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5d0 @ 0x10b4e5d0 (525 bytes, 200 insns) */
void f_10b4e5d0(void) {
  FTRACE(0x10b4e5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4e5d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4e5dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e5df mov ax, word ptr [0x10b6e6b4] */
  AX = (r16((uint32_t)(0x10b6e6b4)));
  /* 10b4e5e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4e5e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e5ec jne 0x10b4e5f6 */
  if (!C.zf) goto L_10b4e5f6;
  /* 10b4e5ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e5f1 jmp 0x10b4e7d9 */
  goto L_10b4e7d9;
L_10b4e5f6:;
  /* 10b4e5f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e5f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e5fc push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e5fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b4e5ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e602 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e603 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e605 call 0x10b511e0 */
  push32(0x10b4e60au); f_10b511e0();
  /* 10b4e60a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e60d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e610 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e612 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e618 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e61b push edx */
  push32((uint32_t)(EDX));
  /* 10b4e61c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b4e61e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e621 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e624 call 0x10b511e0 */
  push32(0x10b4e629u); f_10b511e0();
  /* 10b4e629 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e62c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e62f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e631 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e637 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e63a push edx */
  push32((uint32_t)(EDX));
  /* 10b4e63b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b4e63d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e640 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e641 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e643 call 0x10b511e0 */
  push32(0x10b4e648u); f_10b511e0();
  /* 10b4e648 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e64b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e64e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e650 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e653 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e656 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e659 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e65a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10b4e65c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e65f push eax */
  push32((uint32_t)(EAX));
  /* 10b4e660 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e662 call 0x10b511e0 */
  push32(0x10b4e667u); f_10b511e0();
  /* 10b4e667 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e66a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e66d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e66f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e675 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e678 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e679 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b4e67b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e67e push eax */
  push32((uint32_t)(EAX));
  /* 10b4e67f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e681 call 0x10b511e0 */
  push32(0x10b4e686u); f_10b511e0();
  /* 10b4e686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e68c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e68e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e694 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b4e697 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e698 call 0x10b4e7e0 */
  push32(0x10b4e69du); f_10b4e7e0();
  /* 10b4e69d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e6a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e6a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10b4e6a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e6ac push edx */
  push32((uint32_t)(EDX));
  /* 10b4e6ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e6af call 0x10b511e0 */
  push32(0x10b4e6b4u); f_10b511e0();
  /* 10b4e6b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e6ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e6bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e6bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e6c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6c5 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e6c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10b4e6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e6cb push eax */
  push32((uint32_t)(EAX));
  /* 10b4e6cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4e6ce call 0x10b511e0 */
  push32(0x10b4e6d3u); f_10b511e0();
  /* 10b4e6d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e6d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e6db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e6de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e6e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6e4 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e6e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b4e6e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e6ea push eax */
  push32((uint32_t)(EAX));
  /* 10b4e6eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e6ed call 0x10b511e0 */
  push32(0x10b4e6f2u); f_10b511e0();
  /* 10b4e6f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e6f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e6f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e6fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e700 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e703 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e704 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b4e706 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e709 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e70a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e70c call 0x10b511e0 */
  push32(0x10b4e711u); f_10b511e0();
  /* 10b4e711 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e714 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e717 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e719 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e71c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e71f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e722 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e723 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10b4e725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e728 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e729 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e72b call 0x10b511e0 */
  push32(0x10b4e730u); f_10b511e0();
  /* 10b4e730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e733 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e736 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e738 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e73b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e73e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e741 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e742 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10b4e744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e747 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e748 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e74a call 0x10b511e0 */
  push32(0x10b4e74fu); f_10b511e0();
  /* 10b4e74f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e752 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e755 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e757 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e75a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e75d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e760 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e761 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10b4e763 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e766 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e767 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e769 call 0x10b511e0 */
  push32(0x10b4e76eu); f_10b511e0();
  /* 10b4e76e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e771 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e774 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e776 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e77c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e77f push edx */
  push32((uint32_t)(EDX));
  /* 10b4e780 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10b4e782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e785 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e786 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e788 call 0x10b511e0 */
  push32(0x10b4e78du); f_10b511e0();
  /* 10b4e78d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e790 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e793 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e795 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e79b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e79e push edx */
  push32((uint32_t)(EDX));
  /* 10b4e79f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10b4e7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e7a4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e7a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e7a7 call 0x10b511e0 */
  push32(0x10b4e7acu); f_10b511e0();
  /* 10b4e7ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e7af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e7b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e7b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e7b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e7ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e7bd push edx */
  push32((uint32_t)(EDX));
  /* 10b4e7be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10b4e7c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e7c3 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e7c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e7c6 call 0x10b511e0 */
  push32(0x10b4e7cbu); f_10b511e0();
  /* 10b4e7cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e7ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4e7d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4e7d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4e7d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b4e7d9:;
  /* 10b4e7d9 mov esp, ebp */
  ESP = (EBP);
  /* 10b4e7db pop ebp */
  EBP = (pop32());
  /* 10b4e7dc ret  */
  ESPCHK(0x10b4e5d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10b4e7e0 (125 bytes, 49 insns) */
void f_10b4e7e0(void) {
  FTRACE(0x10b4e7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e7e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e7e3 push ecx */
  push32((uint32_t)(ECX));
L_10b4e7e4:;
  /* 10b4e7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e7e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4e7ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4e7ec je 0x10b4e859 */
  if (C.zf) goto L_10b4e859;
  /* 10b4e7ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e7f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4e7f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e7f7 jl 0x10b4e81d */
  if ((C.sf!=C.of)) goto L_10b4e81d;
  /* 10b4e7f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e7fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4e7ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e802 jg 0x10b4e81d */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4e81d;
  /* 10b4e804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e807 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4e80a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4e80d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e810 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b4e812 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e815 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e818 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b4e81b jmp 0x10b4e857 */
  goto L_10b4e857;
L_10b4e81d:;
  /* 10b4e81d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e820 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4e823 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e826 jne 0x10b4e84e */
  if (!C.zf) goto L_10b4e84e;
  /* 10b4e828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e82b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4e82e:;
  /* 10b4e82e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e834 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b4e837 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b4e839 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e83c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e83f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4e842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4e845 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4e848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4e84a jne 0x10b4e82e */
  if (!C.zf) goto L_10b4e82e;
  /* 10b4e84c jmp 0x10b4e857 */
  goto L_10b4e857;
L_10b4e84e:;
  /* 10b4e84e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e854 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b4e857:;
  /* 10b4e857 jmp 0x10b4e7e4 */
  goto L_10b4e7e4;
L_10b4e859:;
  /* 10b4e859 mov esp, ebp */
  ESP = (EBP);
  /* 10b4e85b pop ebp */
  EBP = (pop32());
  /* 10b4e85c ret  */
  ESPCHK(0x10b4e7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x10b4e860 (147 bytes, 52 insns) */
void f_10b4e860(void) {
  FTRACE(0x10b4e860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e860 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e861 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e863 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e867 jne 0x10b4e86e */
  if (!C.zf) goto L_10b4e86e;
  /* 10b4e869 jmp 0x10b4e8f1 */
  goto L_10b4e8f1;
L_10b4e86e:;
  /* 10b4e86e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e871 cmp dword ptr [eax + 0xc], 0x10b6e6f0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10b6e6f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e878 je 0x10b4e8f1 */
  if (C.zf) goto L_10b4e8f1;
  /* 10b4e87a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e87c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e87f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4e882 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e883 call 0x10b43ab0 */
  push32(0x10b4e888u); f_10b43ab0();
  /* 10b4e888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e88b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e88d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e890 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b4e893 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e894 call 0x10b43ab0 */
  push32(0x10b4e899u); f_10b43ab0();
  /* 10b4e899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e89c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e8a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b4e8a4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e8a5 call 0x10b43ab0 */
  push32(0x10b4e8aau); f_10b43ab0();
  /* 10b4e8aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e8ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e8af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e8b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b4e8b5 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e8b6 call 0x10b43ab0 */
  push32(0x10b4e8bbu); f_10b43ab0();
  /* 10b4e8bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e8be push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e8c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e8c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b4e8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4e8c7 call 0x10b43ab0 */
  push32(0x10b4e8ccu); f_10b43ab0();
  /* 10b4e8cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e8cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e8d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e8d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10b4e8d7 push eax */
  push32((uint32_t)(EAX));
  /* 10b4e8d8 call 0x10b43ab0 */
  push32(0x10b4e8ddu); f_10b43ab0();
  /* 10b4e8dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e8e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e8e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4e8e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10b4e8e8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4e8e9 call 0x10b43ab0 */
  push32(0x10b4e8eeu); f_10b43ab0();
  /* 10b4e8ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4e8f1:;
  /* 10b4e8f1 pop ebp */
  EBP = (pop32());
  /* 10b4e8f2 ret  */
  ESPCHK(0x10b4e860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x10b4e900 (928 bytes, 284 insns) */
void f_10b4e900(void) {
  FTRACE(0x10b4e900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4e900 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4e901 mov ebp, esp */
  EBP = (ESP);
  /* 10b4e903 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4e906 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10b4e90d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10b4e914 cmp dword ptr [0x10b6e658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e91b je 0x10b4ec51 */
  if (C.zf) goto L_10b4ec51;
  /* 10b4e921 cmp dword ptr [0x10b6e668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e928 jne 0x10b4e950 */
  if (!C.zf) goto L_10b4e950;
  /* 10b4e92a push 0x10b6e668 */
  push32((uint32_t)(0x10b6e668u));
  /* 10b4e92f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10b4e934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4e936 mov ax, word ptr [0x10b6e6ac] */
  AX = (r16((uint32_t)(0x10b6e6ac)));
  /* 10b4e93c push eax */
  push32((uint32_t)(EAX));
  /* 10b4e93d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4e93f call 0x10b511e0 */
  push32(0x10b4e944u); f_10b511e0();
  /* 10b4e944 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4e949 je 0x10b4e950 */
  if (C.zf) goto L_10b4e950;
  /* 10b4e94b jmp 0x10b4ec12 */
  goto L_10b4ec12;
L_10b4e950:;
  /* 10b4e950 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10b4e952 push 0x10b6a0c4 */
  push32((uint32_t)(0x10b6a0c4u));
  /* 10b4e957 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e959 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10b4e95e call 0x10b43020 */
  push32(0x10b4e963u); f_10b43020();
  /* 10b4e963 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e966 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10b4e969 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10b4e96b push 0x10b6a0c4 */
  push32((uint32_t)(0x10b6a0c4u));
  /* 10b4e970 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e972 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10b4e977 call 0x10b43020 */
  push32(0x10b4e97cu); f_10b43020();
  /* 10b4e97c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e97f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b4e982 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10b4e984 push 0x10b6a0c4 */
  push32((uint32_t)(0x10b6a0c4u));
  /* 10b4e989 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e98b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10b4e990 call 0x10b43020 */
  push32(0x10b4e995u); f_10b43020();
  /* 10b4e995 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e998 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10b4e99b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10b4e99d push 0x10b6a0c4 */
  push32((uint32_t)(0x10b6a0c4u));
  /* 10b4e9a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4e9a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10b4e9a9 call 0x10b43020 */
  push32(0x10b4e9aeu); f_10b43020();
  /* 10b4e9ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e9b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b4e9b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e9b8 je 0x10b4e9cc */
  if (C.zf) goto L_10b4e9cc;
  /* 10b4e9ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e9be je 0x10b4e9cc */
  if (C.zf) goto L_10b4e9cc;
  /* 10b4e9c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e9c4 je 0x10b4e9cc */
  if (C.zf) goto L_10b4e9cc;
  /* 10b4e9c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e9ca jne 0x10b4e9d1 */
  if (!C.zf) goto L_10b4e9d1;
L_10b4e9cc:;
  /* 10b4e9cc jmp 0x10b4ec12 */
  goto L_10b4ec12;
L_10b4e9d1:;
  /* 10b4e9d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4e9d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b4e9d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b4e9de jmp 0x10b4e9e9 */
  goto L_10b4e9e9;
L_10b4e9e0:;
  /* 10b4e9e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4e9e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4e9e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10b4e9e9:;
  /* 10b4e9e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4e9f0 jge 0x10b4ea05 */
  if ((C.sf==C.of)) goto L_10b4ea05;
  /* 10b4e9f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4e9f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10b4e9f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b4e9fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4e9fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ea00 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b4ea03 jmp 0x10b4e9e0 */
  goto L_10b4e9e0;
L_10b4ea05:;
  /* 10b4ea05 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10b4ea08 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ea09 mov ecx, dword ptr [0x10b6e668] */
  ECX = (r32((uint32_t)(0x10b6e668)));
  /* 10b4ea0f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ea10 call dword ptr [0x10b70364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70364))), 0x10b4ea16u);
  /* 10b4ea16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ea18 jne 0x10b4ea1f */
  if (!C.zf) goto L_10b4ea1f;
  /* 10b4ea1a jmp 0x10b4ec12 */
  goto L_10b4ec12;
L_10b4ea1f:;
  /* 10b4ea1f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ea23 jbe 0x10b4ea2a */
  if ((C.cf||C.zf)) goto L_10b4ea2a;
  /* 10b4ea25 jmp 0x10b4ec12 */
  goto L_10b4ec12;
L_10b4ea2a:;
  /* 10b4ea2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b4ea2d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4ea33 mov dword ptr [0x10b6cea4], edx */
  w32((uint32_t)(0x10b6cea4), (EDX));
  /* 10b4ea39 cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ea40 jle 0x10b4ea99 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4ea99;
  /* 10b4ea42 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10b4ea45 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b4ea48 jmp 0x10b4ea53 */
  goto L_10b4ea53;
L_10b4ea4a:;
  /* 10b4ea4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4ea4d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ea50 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10b4ea53:;
  /* 10b4ea53 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4ea56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ea58 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4ea5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ea5c je 0x10b4ea99 */
  if (C.zf) goto L_10b4ea99;
  /* 10b4ea5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4ea61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4ea63 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b4ea66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4ea68 je 0x10b4ea99 */
  if (C.zf) goto L_10b4ea99;
  /* 10b4ea6a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4ea6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ea6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b4ea71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b4ea74 jmp 0x10b4ea7f */
  goto L_10b4ea7f;
L_10b4ea76:;
  /* 10b4ea76 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4ea79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ea7c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10b4ea7f:;
  /* 10b4ea7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4ea82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ea84 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b4ea87 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ea8a jg 0x10b4ea97 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4ea97;
  /* 10b4ea8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4ea8f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ea92 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b4ea95 jmp 0x10b4ea76 */
  goto L_10b4ea76;
L_10b4ea97:;
  /* 10b4ea97 jmp 0x10b4ea4a */
  goto L_10b4ea4a;
L_10b4ea99:;
  /* 10b4ea99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4ea9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4ea9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4ea9f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4eaa2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eaa5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4eaa6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b4eaab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4eaae push ecx */
  push32((uint32_t)(ECX));
  /* 10b4eaaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4eab1 call 0x10b4b250 */
  push32(0x10b4eab6u); f_10b4b250();
  /* 10b4eab6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4eabb jne 0x10b4eac2 */
  if (!C.zf) goto L_10b4eac2;
  /* 10b4eabd jmp 0x10b4ec12 */
  goto L_10b4ec12;
L_10b4eac2:;
  /* 10b4eac2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4eac5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10b4eaca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4eacd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b4ead0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b4ead7 jmp 0x10b4eae2 */
  goto L_10b4eae2;
L_10b4ead9:;
  /* 10b4ead9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4eadc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eadf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b4eae2:;
  /* 10b4eae2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4eae9 jge 0x10b4eb00 */
  if ((C.sf==C.of)) goto L_10b4eb00;
  /* 10b4eaeb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4eaee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10b4eaf2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10b4eaf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b4eaf8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eafb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b4eafe jmp 0x10b4ead9 */
  goto L_10b4ead9;
L_10b4eb00:;
  /* 10b4eb00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4eb02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4eb04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4eb07 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eb0a push edx */
  push32((uint32_t)(EDX));
  /* 10b4eb0b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b4eb10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4eb13 push eax */
  push32((uint32_t)(EAX));
  /* 10b4eb14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4eb16 call 0x10b51480 */
  push32(0x10b4eb1bu); f_10b51480();
  /* 10b4eb1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eb1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4eb20 jne 0x10b4eb27 */
  if (!C.zf) goto L_10b4eb27;
  /* 10b4eb22 jmp 0x10b4ec12 */
  goto L_10b4ec12;
L_10b4eb27:;
  /* 10b4eb27 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4eb2a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10b4eb2f cmp dword ptr [0x10b6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4eb36 jle 0x10b4eb93 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4eb93;
  /* 10b4eb38 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10b4eb3b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b4eb3e jmp 0x10b4eb49 */
  goto L_10b4eb49;
L_10b4eb40:;
  /* 10b4eb40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4eb43 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eb46 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10b4eb49:;
  /* 10b4eb49 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4eb4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b4eb4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b4eb50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4eb52 je 0x10b4eb93 */
  if (C.zf) goto L_10b4eb93;
  /* 10b4eb54 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4eb57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4eb59 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b4eb5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4eb5e je 0x10b4eb93 */
  if (C.zf) goto L_10b4eb93;
  /* 10b4eb60 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4eb63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4eb65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4eb67 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b4eb6a jmp 0x10b4eb75 */
  goto L_10b4eb75;
L_10b4eb6c:;
  /* 10b4eb6c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4eb6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eb72 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b4eb75:;
  /* 10b4eb75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b4eb78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4eb7a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b4eb7d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4eb80 jg 0x10b4eb91 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4eb91;
  /* 10b4eb82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b4eb85 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4eb88 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10b4eb8f jmp 0x10b4eb6c */
  goto L_10b4eb6c;
L_10b4eb91:;
  /* 10b4eb91 jmp 0x10b4eb40 */
  goto L_10b4eb40;
L_10b4eb93:;
  /* 10b4eb93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4eb96 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eb99 mov dword ptr [0x10b6cc98], eax */
  w32((uint32_t)(0x10b6cc98), (EAX));
  /* 10b4eb9e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4eba1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4eba4 mov dword ptr [0x10b6cc9c], ecx */
  w32((uint32_t)(0x10b6cc9c), (ECX));
  /* 10b4ebaa cmp dword ptr [0x10b6e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ebb1 je 0x10b4ebc4 */
  if (C.zf) goto L_10b4ebc4;
  /* 10b4ebb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ebb5 mov edx, dword ptr [0x10b6e698] */
  EDX = (r32((uint32_t)(0x10b6e698)));
  /* 10b4ebbb push edx */
  push32((uint32_t)(EDX));
  /* 10b4ebbc call 0x10b43ab0 */
  push32(0x10b4ebc1u); f_10b43ab0();
  /* 10b4ebc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4ebc4:;
  /* 10b4ebc4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4ebc7 mov dword ptr [0x10b6e698], eax */
  w32((uint32_t)(0x10b6e698), (EAX));
  /* 10b4ebcc cmp dword ptr [0x10b6e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ebd3 je 0x10b4ebe6 */
  if (C.zf) goto L_10b4ebe6;
  /* 10b4ebd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ebd7 mov ecx, dword ptr [0x10b6e69c] */
  ECX = (r32((uint32_t)(0x10b6e69c)));
  /* 10b4ebdd push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ebde call 0x10b43ab0 */
  push32(0x10b4ebe3u); f_10b43ab0();
  /* 10b4ebe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4ebe6:;
  /* 10b4ebe6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4ebe9 mov dword ptr [0x10b6e69c], edx */
  w32((uint32_t)(0x10b6e69c), (EDX));
  /* 10b4ebef push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ebf1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4ebf4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ebf5 call 0x10b43ab0 */
  push32(0x10b4ebfau); f_10b43ab0();
  /* 10b4ebfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ebfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ebff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4ec02 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ec03 call 0x10b43ab0 */
  push32(0x10b4ec08u); f_10b43ab0();
  /* 10b4ec08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ec0d jmp 0x10b4ec9c */
  goto L_10b4ec9c;
L_10b4ec12:;
  /* 10b4ec12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ec14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b4ec17 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ec18 call 0x10b43ab0 */
  push32(0x10b4ec1du); f_10b43ab0();
  /* 10b4ec1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ec22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b4ec25 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ec26 call 0x10b43ab0 */
  push32(0x10b4ec2bu); f_10b43ab0();
  /* 10b4ec2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ec30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b4ec33 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ec34 call 0x10b43ab0 */
  push32(0x10b4ec39u); f_10b43ab0();
  /* 10b4ec39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ec3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b4ec41 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ec42 call 0x10b43ab0 */
  push32(0x10b4ec47u); f_10b43ab0();
  /* 10b4ec47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec4a mov eax, 1 */
  EAX = (0x1u);
  /* 10b4ec4f jmp 0x10b4ec9c */
  goto L_10b4ec9c;
L_10b4ec51:;
  /* 10b4ec51 mov dword ptr [0x10b6cc98], 0x10b6cca2 */
  w32((uint32_t)(0x10b6cc98), (0x10b6cca2u));
  /* 10b4ec5b mov dword ptr [0x10b6cc9c], 0x10b6cca2 */
  w32((uint32_t)(0x10b6cc9c), (0x10b6cca2u));
  /* 10b4ec65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ec67 mov eax, dword ptr [0x10b6e698] */
  EAX = (r32((uint32_t)(0x10b6e698)));
  /* 10b4ec6c push eax */
  push32((uint32_t)(EAX));
  /* 10b4ec6d call 0x10b43ab0 */
  push32(0x10b4ec72u); f_10b43ab0();
  /* 10b4ec72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4ec77 mov ecx, dword ptr [0x10b6e69c] */
  ECX = (r32((uint32_t)(0x10b6e69c)));
  /* 10b4ec7d push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ec7e call 0x10b43ab0 */
  push32(0x10b4ec83u); f_10b43ab0();
  /* 10b4ec83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ec86 mov dword ptr [0x10b6e698], 0 */
  w32((uint32_t)(0x10b6e698), (0x0u));
  /* 10b4ec90 mov dword ptr [0x10b6e69c], 0 */
  w32((uint32_t)(0x10b6e69c), (0x0u));
  /* 10b4ec9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4ec9c:;
  /* 10b4ec9c mov esp, ebp */
  ESP = (EBP);
  /* 10b4ec9e pop ebp */
  EBP = (pop32());
  /* 10b4ec9f ret  */
  ESPCHK(0x10b4e900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eca0 @ 0x10b4eca0 (7 bytes, 5 insns) */
void f_10b4eca0(void) {
  FTRACE(0x10b4eca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4eca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4eca1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4eca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4eca5 pop ebp */
  EBP = (pop32());
  /* 10b4eca6 ret  */
  ESPCHK(0x10b4eca0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10b4ecb0 (129 bytes, 56 insns) */
void f_10b4ecb0(void) {
  FTRACE(0x10b4ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ecb0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b4ecb4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b4ecb8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10b4ecbe jne 0x10b4ecfc */
  if (!C.zf) goto L_10b4ecfc;
L_10b4ecc0:;
  /* 10b4ecc0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b4ecc2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4ecc4 jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4ecc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ecc8 je 0x10b4ecf0 */
  if (C.zf) goto L_10b4ecf0;
  /* 10b4ecca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4eccd jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4eccf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b4ecd1 je 0x10b4ecf0 */
  if (C.zf) goto L_10b4ecf0;
  /* 10b4ecd3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b4ecd6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4ecd9 jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4ecdb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ecdd je 0x10b4ecf0 */
  if (C.zf) goto L_10b4ecf0;
  /* 10b4ecdf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4ece2 jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4ece4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ece7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ecea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b4ecec jne 0x10b4ecc0 */
  if (!C.zf) goto L_10b4ecc0;
  /* 10b4ecee mov edi, edi */
  EDI = (EDI);
L_10b4ecf0:;
  /* 10b4ecf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ecf2 ret  */
  ESPCHK(0x10b4ecb0u, _esp0);
  ESP += 4; return;
  /* 10b4ecf3 nop  */
  /* nop */
L_10b4ecf4:;
  /* 10b4ecf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ecf6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b4ecf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b4ecf9 ret  */
  ESPCHK(0x10b4ecb0u, _esp0);
  ESP += 4; return;
  /* 10b4ecfa mov edi, edi */
  EDI = (EDI);
L_10b4ecfc:;
  /* 10b4ecfc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10b4ed02 je 0x10b4ed18 */
  if (C.zf) goto L_10b4ed18;
  /* 10b4ed04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4ed06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b4ed07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4ed09 jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4ed0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b4ed0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ed0e je 0x10b4ecf0 */
  if (C.zf) goto L_10b4ecf0;
  /* 10b4ed10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10b4ed16 je 0x10b4ecc0 */
  if (C.zf) goto L_10b4ecc0;
L_10b4ed18:;
  /* 10b4ed18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10b4ed1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ed1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4ed20 jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4ed22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ed24 je 0x10b4ecf0 */
  if (C.zf) goto L_10b4ecf0;
  /* 10b4ed26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4ed29 jne 0x10b4ecf4 */
  if (!C.zf) goto L_10b4ecf4;
  /* 10b4ed2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b4ed2d je 0x10b4ecf0 */
  if (C.zf) goto L_10b4ecf0;
  /* 10b4ed2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ed32 jmp 0x10b4ecc0 */
  goto L_10b4ecc0;
}

/* FUN_1000ed40 @ 0x10b4ed40 (62 bytes, 35 insns) */
void f_10b4ed40(void) {
  FTRACE(0x10b4ed40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ed40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ed41 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ed43 push esi */
  push32((uint32_t)(ESI));
  /* 10b4ed44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ed46 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed47 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed48 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed49 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed4a push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed4b push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed4c push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed4d push eax */
  push32((uint32_t)(EAX));
  /* 10b4ed4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ed51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4ed54:;
  /* 10b4ed54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4ed56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ed58 je 0x10b4ed61 */
  if (C.zf) goto L_10b4ed61;
  /* 10b4ed5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b4ed5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10b4ed5b");
  /* 10b4ed5f jmp 0x10b4ed54 */
  goto L_10b4ed54;
L_10b4ed61:;
  /* 10b4ed61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ed64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4ed67 nop  */
  /* nop */
L_10b4ed68:;
  /* 10b4ed68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b4ed69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4ed6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ed6d je 0x10b4ed76 */
  if (C.zf) goto L_10b4ed76;
  /* 10b4ed6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b4ed70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10b4ed70");
  /* 10b4ed74 jae 0x10b4ed68 */
  if (!C.cf) goto L_10b4ed68;
L_10b4ed76:;
  /* 10b4ed76 mov eax, ecx */
  EAX = (ECX);
  /* 10b4ed78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ed7b pop esi */
  ESI = (pop32());
  /* 10b4ed7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4ed7d ret  */
  ESPCHK(0x10b4ed40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10b4ed80 (56 bytes, 31 insns) */
void f_10b4ed80(void) {
  FTRACE(0x10b4ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ed81 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ed83 push edi */
  push32((uint32_t)(EDI));
  /* 10b4ed84 push esi */
  push32((uint32_t)(ESI));
  /* 10b4ed85 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4ed86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4ed89 jecxz 0x10b4edb1 */
  x86_unimpl("jecxz @ 0x10b4ed89");
  /* 10b4ed8b mov ebx, ecx */
  EBX = (ECX);
  /* 10b4ed8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ed90 mov esi, edi */
  ESI = (EDI);
  /* 10b4ed92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ed94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10b4ed96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4ed98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ed9a mov edi, esi */
  EDI = (ESI);
  /* 10b4ed9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ed9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10b4eda1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10b4eda4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4eda6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b4eda9 ja 0x10b4edaf */
  if ((!C.cf&&!C.zf)) goto L_10b4edaf;
  /* 10b4edab je 0x10b4edb1 */
  if (C.zf) goto L_10b4edb1;
  /* 10b4edad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b4edae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10b4edaf:;
  /* 10b4edaf not ecx */
  ECX = (~(ECX));
L_10b4edb1:;
  /* 10b4edb1 mov eax, ecx */
  EAX = (ECX);
  /* 10b4edb3 pop ebx */
  EBX = (pop32());
  /* 10b4edb4 pop esi */
  ESI = (pop32());
  /* 10b4edb5 pop edi */
  EDI = (pop32());
  /* 10b4edb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4edb7 ret  */
  ESPCHK(0x10b4ed80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edc0 @ 0x10b4edc0 (58 bytes, 32 insns) */
void f_10b4edc0(void) {
  FTRACE(0x10b4edc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4edc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4edc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4edc3 push esi */
  push32((uint32_t)(ESI));
  /* 10b4edc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4edc6 push eax */
  push32((uint32_t)(EAX));
  /* 10b4edc7 push eax */
  push32((uint32_t)(EAX));
  /* 10b4edc8 push eax */
  push32((uint32_t)(EAX));
  /* 10b4edc9 push eax */
  push32((uint32_t)(EAX));
  /* 10b4edca push eax */
  push32((uint32_t)(EAX));
  /* 10b4edcb push eax */
  push32((uint32_t)(EAX));
  /* 10b4edcc push eax */
  push32((uint32_t)(EAX));
  /* 10b4edcd push eax */
  push32((uint32_t)(EAX));
  /* 10b4edce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4edd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b4edd4:;
  /* 10b4edd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4edd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4edd8 je 0x10b4ede1 */
  if (C.zf) goto L_10b4ede1;
  /* 10b4edda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b4eddb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10b4eddb");
  /* 10b4eddf jmp 0x10b4edd4 */
  goto L_10b4edd4;
L_10b4ede1:;
  /* 10b4ede1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10b4ede4:;
  /* 10b4ede4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b4ede6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b4ede8 je 0x10b4edf4 */
  if (C.zf) goto L_10b4edf4;
  /* 10b4edea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b4edeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10b4edeb");
  /* 10b4edef jae 0x10b4ede4 */
  if (!C.cf) goto L_10b4ede4;
  /* 10b4edf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10b4edf4:;
  /* 10b4edf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4edf7 pop esi */
  ESI = (pop32());
  /* 10b4edf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b4edf9 ret  */
  ESPCHK(0x10b4edc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x10b4ee00 (512 bytes, 147 insns) */
void f_10b4ee00(void) {
  FTRACE(0x10b4ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4ee01 mov ebp, esp */
  EBP = (ESP);
  /* 10b4ee03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4ee06 cmp dword ptr [0x10b6e6e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ee0d jne 0x10b4ee32 */
  if (!C.zf) goto L_10b4ee32;
  /* 10b4ee0f call 0x10b4f8d0 */
  push32(0x10b4ee14u); f_10b4f8d0();
  /* 10b4ee14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ee16 je 0x10b4ee22 */
  if (C.zf) goto L_10b4ee22;
  /* 10b4ee18 mov eax, dword ptr [0x10b70280] */
  EAX = (r32((uint32_t)(0x10b70280)));
  /* 10b4ee1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4ee20 jmp 0x10b4ee29 */
  goto L_10b4ee29;
L_10b4ee22:;
  /* 10b4ee22 mov dword ptr [ebp - 8], 0x10b4f920 */
  w32((uint32_t)(EBP + -0x8), (0x10b4f920u));
L_10b4ee29:;
  /* 10b4ee29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4ee2c mov dword ptr [0x10b6e6e4], ecx */
  w32((uint32_t)(0x10b6e6e4), (ECX));
L_10b4ee32:;
  /* 10b4ee32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ee36 jne 0x10b4ee42 */
  if (!C.zf) goto L_10b4ee42;
  /* 10b4ee38 call 0x10b4f720 */
  push32(0x10b4ee3du); f_10b4f720();
  /* 10b4ee3d jmp 0x10b4ef0e */
  goto L_10b4ef0e;
L_10b4ee42:;
  /* 10b4ee42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ee45 mov dword ptr [0x10b6e6d4], edx */
  w32((uint32_t)(0x10b6e6d4), (EDX));
  /* 10b4ee4b cmp dword ptr [0x10b6e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ee52 je 0x10b4ee74 */
  if (C.zf) goto L_10b4ee74;
  /* 10b4ee54 mov eax, dword ptr [0x10b6e6d4] */
  EAX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4ee59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4ee5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4ee5e je 0x10b4ee74 */
  if (C.zf) goto L_10b4ee74;
  /* 10b4ee60 push 0x10b6e6d4 */
  push32((uint32_t)(0x10b6e6d4u));
  /* 10b4ee65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b4ee67 push 0x10b6da90 */
  push32((uint32_t)(0x10b6da90u));
  /* 10b4ee6c call 0x10b4f000 */
  push32(0x10b4ee71u); f_10b4f000();
  /* 10b4ee71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4ee74:;
  /* 10b4ee74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ee77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ee7a mov dword ptr [0x10b6e6d8], edx */
  w32((uint32_t)(0x10b6e6d8), (EDX));
  /* 10b4ee80 cmp dword ptr [0x10b6e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ee87 je 0x10b4eea9 */
  if (C.zf) goto L_10b4eea9;
  /* 10b4ee89 mov eax, dword ptr [0x10b6e6d8] */
  EAX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4ee8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4ee91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4ee93 je 0x10b4eea9 */
  if (C.zf) goto L_10b4eea9;
  /* 10b4ee95 push 0x10b6e6d8 */
  push32((uint32_t)(0x10b6e6d8u));
  /* 10b4ee9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b4ee9c push 0x10b6d9d8 */
  push32((uint32_t)(0x10b6d9d8u));
  /* 10b4eea1 call 0x10b4f000 */
  push32(0x10b4eea6u); f_10b4f000();
  /* 10b4eea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4eea9:;
  /* 10b4eea9 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
  /* 10b4eeb3 cmp dword ptr [0x10b6e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4eeba je 0x10b4eeed */
  if (C.zf) goto L_10b4eeed;
  /* 10b4eebc mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4eec2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b4eec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4eec7 je 0x10b4eeed */
  if (C.zf) goto L_10b4eeed;
  /* 10b4eec9 cmp dword ptr [0x10b6e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4eed0 je 0x10b4eee6 */
  if (C.zf) goto L_10b4eee6;
  /* 10b4eed2 mov ecx, dword ptr [0x10b6e6d8] */
  ECX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4eed8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b4eedb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4eedd je 0x10b4eee6 */
  if (C.zf) goto L_10b4eee6;
  /* 10b4eedf call 0x10b4f090 */
  push32(0x10b4eee4u); f_10b4f090();
  /* 10b4eee4 jmp 0x10b4eeeb */
  goto L_10b4eeeb;
L_10b4eee6:;
  /* 10b4eee6 call 0x10b4f480 */
  push32(0x10b4eeebu); f_10b4f480();
L_10b4eeeb:;
  /* 10b4eeeb jmp 0x10b4ef0e */
  goto L_10b4ef0e;
L_10b4eeed:;
  /* 10b4eeed cmp dword ptr [0x10b6e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4eef4 je 0x10b4ef09 */
  if (C.zf) goto L_10b4ef09;
  /* 10b4eef6 mov eax, dword ptr [0x10b6e6d8] */
  EAX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4eefb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4eefe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4ef00 je 0x10b4ef09 */
  if (C.zf) goto L_10b4ef09;
  /* 10b4ef02 call 0x10b4f620 */
  push32(0x10b4ef07u); f_10b4f620();
  /* 10b4ef07 jmp 0x10b4ef0e */
  goto L_10b4ef0e;
L_10b4ef09:;
  /* 10b4ef09 call 0x10b4f720 */
  push32(0x10b4ef0eu); f_10b4f720();
L_10b4ef0e:;
  /* 10b4ef0e cmp dword ptr [0x10b6e6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ef15 jne 0x10b4ef1e */
  if (!C.zf) goto L_10b4ef1e;
  /* 10b4ef17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ef19 jmp 0x10b4effc */
  goto L_10b4effc;
L_10b4ef1e:;
  /* 10b4ef1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4ef21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ef27 push edx */
  push32((uint32_t)(EDX));
  /* 10b4ef28 call 0x10b4f750 */
  push32(0x10b4ef2du); f_10b4f750();
  /* 10b4ef2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4ef30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4ef33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ef37 je 0x10b4ef4c */
  if (C.zf) goto L_10b4ef4c;
  /* 10b4ef39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4ef3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ef41 push eax */
  push32((uint32_t)(EAX));
  /* 10b4ef42 call dword ptr [0x10b70284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70284))), 0x10b4ef48u);
  /* 10b4ef48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ef4a jne 0x10b4ef53 */
  if (!C.zf) goto L_10b4ef53;
L_10b4ef4c:;
  /* 10b4ef4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ef4e jmp 0x10b4effc */
  goto L_10b4effc;
L_10b4ef53:;
  /* 10b4ef53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4ef55 mov ecx, dword ptr [0x10b6e6c4] */
  ECX = (r32((uint32_t)(0x10b6e6c4)));
  /* 10b4ef5b push ecx */
  push32((uint32_t)(ECX));
  /* 10b4ef5c call dword ptr [0x10b70288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70288))), 0x10b4ef62u);
  /* 10b4ef62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4ef64 jne 0x10b4ef6d */
  if (!C.zf) goto L_10b4ef6d;
  /* 10b4ef66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4ef68 jmp 0x10b4effc */
  goto L_10b4effc;
L_10b4ef6d:;
  /* 10b4ef6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ef71 je 0x10b4ef98 */
  if (C.zf) goto L_10b4ef98;
  /* 10b4ef73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ef76 mov ax, word ptr [0x10b6e6c4] */
  AX = (r16((uint32_t)(0x10b6e6c4)));
  /* 10b4ef7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10b4ef7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ef82 mov dx, word ptr [0x10b6e6e0] */
  DX = (r16((uint32_t)(0x10b6e6e0)));
  /* 10b4ef89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10b4ef8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4ef90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10b4ef94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10b4ef98:;
  /* 10b4ef98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4ef9c je 0x10b4eff7 */
  if (C.zf) goto L_10b4eff7;
  /* 10b4ef9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b4efa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4efa3 push edx */
  push32((uint32_t)(EDX));
  /* 10b4efa4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10b4efa9 mov eax, dword ptr [0x10b6e6c4] */
  EAX = (r32((uint32_t)(0x10b6e6c4)));
  /* 10b4efae push eax */
  push32((uint32_t)(EAX));
  /* 10b4efaf call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4efb5u);
  /* 10b4efb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4efb7 jne 0x10b4efbd */
  if (!C.zf) goto L_10b4efbd;
  /* 10b4efb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4efbb jmp 0x10b4effc */
  goto L_10b4effc;
L_10b4efbd:;
  /* 10b4efbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b4efbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4efc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4efc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4efc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10b4efcb mov edx, dword ptr [0x10b6e6e0] */
  EDX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4efd1 push edx */
  push32((uint32_t)(EDX));
  /* 10b4efd2 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4efd8u);
  /* 10b4efd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4efda jne 0x10b4efe0 */
  if (!C.zf) goto L_10b4efe0;
  /* 10b4efdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4efde jmp 0x10b4effc */
  goto L_10b4effc;
L_10b4efe0:;
  /* 10b4efe0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b4efe2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4efe5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4efea push eax */
  push32((uint32_t)(EAX));
  /* 10b4efeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4efee push ecx */
  push32((uint32_t)(ECX));
  /* 10b4efef call 0x10b45b60 */
  push32(0x10b4eff4u); f_10b45b60();
  /* 10b4eff4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4eff7:;
  /* 10b4eff7 mov eax, 1 */
  EAX = (0x1u);
L_10b4effc:;
  /* 10b4effc mov esp, ebp */
  ESP = (EBP);
  /* 10b4effe pop ebp */
  EBP = (pop32());
  /* 10b4efff ret  */
  ESPCHK(0x10b4ee00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x10b4f000 (130 bytes, 47 insns) */
void f_10b4f000(void) {
  FTRACE(0x10b4f000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f000 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f001 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f006 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b4f00d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10b4f014:;
  /* 10b4f014 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f017 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f01a jg 0x10b4f07e */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4f07e;
  /* 10b4f01c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f020 je 0x10b4f07e */
  if (C.zf) goto L_10b4f07e;
  /* 10b4f022 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f025 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f028 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4f029 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f02b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b4f02d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4f030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f036 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10b4f039 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f03a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4f03d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b4f03f push edx */
  push32((uint32_t)(EDX));
  /* 10b4f040 call 0x10b516f0 */
  push32(0x10b4f045u); f_10b516f0();
  /* 10b4f045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f048 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4f04b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f04f jne 0x10b4f062 */
  if (!C.zf) goto L_10b4f062;
  /* 10b4f051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f057 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10b4f05b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4f05e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b4f060 jmp 0x10b4f07c */
  goto L_10b4f07c;
L_10b4f062:;
  /* 10b4f062 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f066 jge 0x10b4f073 */
  if ((C.sf==C.of)) goto L_10b4f073;
  /* 10b4f068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f06b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f06e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b4f071 jmp 0x10b4f07c */
  goto L_10b4f07c;
L_10b4f073:;
  /* 10b4f073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f076 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f079 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b4f07c:;
  /* 10b4f07c jmp 0x10b4f014 */
  goto L_10b4f014;
L_10b4f07e:;
  /* 10b4f07e mov esp, ebp */
  ESP = (EBP);
  /* 10b4f080 pop ebp */
  EBP = (pop32());
  /* 10b4f081 ret  */
  ESPCHK(0x10b4f000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f090 @ 0x10b4f090 (186 bytes, 50 insns) */
void f_10b4f090(void) {
  FTRACE(0x10b4f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f090 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f091 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f093 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f094 mov eax, dword ptr [0x10b6e6d4] */
  EAX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f099 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f09a call 0x10b45e50 */
  push32(0x10b4f09fu); f_10b45e50();
  /* 10b4f09f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f0a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f0a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f0a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b4f0aa mov dword ptr [0x10b6e6d0], ecx */
  w32((uint32_t)(0x10b6e6d0), (ECX));
  /* 10b4f0b0 mov edx, dword ptr [0x10b6e6d8] */
  EDX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4f0b6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f0b7 call 0x10b45e50 */
  push32(0x10b4f0bcu); f_10b45e50();
  /* 10b4f0bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f0bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f0c1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f0c4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b4f0c7 mov dword ptr [0x10b6e6c8], ecx */
  w32((uint32_t)(0x10b6e6c8), (ECX));
  /* 10b4f0cd mov dword ptr [0x10b6e6c4], 0 */
  w32((uint32_t)(0x10b6e6c4), (0x0u));
  /* 10b4f0d7 cmp dword ptr [0x10b6e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f0de je 0x10b4f0e9 */
  if (C.zf) goto L_10b4f0e9;
  /* 10b4f0e0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b4f0e7 jmp 0x10b4f0fb */
  goto L_10b4f0fb;
L_10b4f0e9:;
  /* 10b4f0e9 mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f0ef push edx */
  push32((uint32_t)(EDX));
  /* 10b4f0f0 call 0x10b4fb30 */
  push32(0x10b4f0f5u); f_10b4fb30();
  /* 10b4f0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f0f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4f0fb:;
  /* 10b4f0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f0fe mov dword ptr [0x10b6e6cc], eax */
  w32((uint32_t)(0x10b6e6cc), (EAX));
  /* 10b4f103 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4f105 push 0x10b4f150 */
  push32((uint32_t)(0x10b4f150u));
  /* 10b4f10a call dword ptr [0x10b7027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7027c))), 0x10b4f110u);
  /* 10b4f110 mov ecx, dword ptr [0x10b6e6dc] */
  ECX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f116 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f11c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4f11e je 0x10b4f13c */
  if (C.zf) goto L_10b4f13c;
  /* 10b4f120 mov edx, dword ptr [0x10b6e6dc] */
  EDX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f126 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f12c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4f12e je 0x10b4f13c */
  if (C.zf) goto L_10b4f13c;
  /* 10b4f130 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f135 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f13a jne 0x10b4f146 */
  if (!C.zf) goto L_10b4f146;
L_10b4f13c:;
  /* 10b4f13c mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
L_10b4f146:;
  /* 10b4f146 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f148 pop ebp */
  EBP = (pop32());
  /* 10b4f149 ret  */
  ESPCHK(0x10b4f090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f150 @ 0x10b4f150 (804 bytes, 220 insns) */
void f_10b4f150(void) {
  FTRACE(0x10b4f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f150 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f151 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f153 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f159 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f15a call 0x10b4fab0 */
  push32(0x10b4f15fu); f_10b4fab0();
  /* 10b4f15f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f162 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10b4f165 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b4f167 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f16a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f16b mov edx, dword ptr [0x10b6e6c8] */
  EDX = (r32((uint32_t)(0x10b6e6c8)));
  /* 10b4f171 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f173 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f175 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f17b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f181 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f182 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f185 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f186 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f18cu);
  /* 10b4f18c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f18e jne 0x10b4f1a4 */
  if (!C.zf) goto L_10b4f1a4;
  /* 10b4f190 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
  /* 10b4f19a mov eax, 1 */
  EAX = (0x1u);
  /* 10b4f19f jmp 0x10b4f46e */
  goto L_10b4f46e;
L_10b4f1a4:;
  /* 10b4f1a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f1a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f1a8 mov edx, dword ptr [0x10b6e6d8] */
  EDX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4f1ae push edx */
  push32((uint32_t)(EDX));
  /* 10b4f1af call 0x10b516f0 */
  push32(0x10b4f1b4u); f_10b516f0();
  /* 10b4f1b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f1b9 jne 0x10b4f2df */
  if (!C.zf) goto L_10b4f2df;
  /* 10b4f1bf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b4f1c1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b4f1c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f1c5 mov ecx, dword ptr [0x10b6e6d0] */
  ECX = (r32((uint32_t)(0x10b6e6d0)));
  /* 10b4f1cb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f1cd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f1cf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f1d5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f1db push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f1dc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f1df push edx */
  push32((uint32_t)(EDX));
  /* 10b4f1e0 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f1e6u);
  /* 10b4f1e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f1e8 jne 0x10b4f1fe */
  if (!C.zf) goto L_10b4f1fe;
  /* 10b4f1ea mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
  /* 10b4f1f4 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4f1f9 jmp 0x10b4f46e */
  goto L_10b4f46e;
L_10b4f1fe:;
  /* 10b4f1fe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b4f201 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f202 mov ecx, dword ptr [0x10b6e6d4] */
  ECX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f208 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f209 call 0x10b516f0 */
  push32(0x10b4f20eu); f_10b516f0();
  /* 10b4f20e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f213 jne 0x10b4f240 */
  if (!C.zf) goto L_10b4f240;
  /* 10b4f215 mov edx, dword ptr [0x10b6e6dc] */
  EDX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f21b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f221 mov dword ptr [0x10b6e6dc], edx */
  w32((uint32_t)(0x10b6e6dc), (EDX));
  /* 10b4f227 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f22a mov dword ptr [0x10b6e6e0], eax */
  w32((uint32_t)(0x10b6e6e0), (EAX));
  /* 10b4f22f mov ecx, dword ptr [0x10b6e6e0] */
  ECX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f235 mov dword ptr [0x10b6e6c4], ecx */
  w32((uint32_t)(0x10b6e6c4), (ECX));
  /* 10b4f23b jmp 0x10b4f2df */
  goto L_10b4f2df;
L_10b4f240:;
  /* 10b4f240 mov edx, dword ptr [0x10b6e6dc] */
  EDX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f246 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f249 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4f24b jne 0x10b4f2df */
  if (!C.zf) goto L_10b4f2df;
  /* 10b4f251 cmp dword ptr [0x10b6e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f258 je 0x10b4f2ad */
  if (C.zf) goto L_10b4f2ad;
  /* 10b4f25a mov eax, dword ptr [0x10b6e6cc] */
  EAX = (r32((uint32_t)(0x10b6e6cc)));
  /* 10b4f25f push eax */
  push32((uint32_t)(EAX));
  /* 10b4f260 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f263 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f264 mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f26a push edx */
  push32((uint32_t)(EDX));
  /* 10b4f26b call 0x10b517c0 */
  push32(0x10b4f270u); f_10b517c0();
  /* 10b4f270 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f273 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f275 jne 0x10b4f2ad */
  if (!C.zf) goto L_10b4f2ad;
  /* 10b4f277 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f27c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10b4f27e mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
  /* 10b4f283 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f286 mov dword ptr [0x10b6e6e0], ecx */
  w32((uint32_t)(0x10b6e6e0), (ECX));
  /* 10b4f28c mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f292 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f293 call 0x10b45e50 */
  push32(0x10b4f298u); f_10b45e50();
  /* 10b4f298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f29b cmp eax, dword ptr [0x10b6e6cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6e6cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f2a1 jne 0x10b4f2ab */
  if (!C.zf) goto L_10b4f2ab;
  /* 10b4f2a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f2a6 mov dword ptr [0x10b6e6c4], eax */
  w32((uint32_t)(0x10b6e6c4), (EAX));
L_10b4f2ab:;
  /* 10b4f2ab jmp 0x10b4f2df */
  goto L_10b4f2df;
L_10b4f2ad:;
  /* 10b4f2ad mov ecx, dword ptr [0x10b6e6dc] */
  ECX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f2b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f2b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4f2b8 jne 0x10b4f2df */
  if (!C.zf) goto L_10b4f2df;
  /* 10b4f2ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f2bd push edx */
  push32((uint32_t)(EDX));
  /* 10b4f2be call 0x10b4f7f0 */
  push32(0x10b4f2c3u); f_10b4f7f0();
  /* 10b4f2c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f2c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f2c8 je 0x10b4f2df */
  if (C.zf) goto L_10b4f2df;
  /* 10b4f2ca mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f2cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10b4f2d1 mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
  /* 10b4f2d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f2d9 mov dword ptr [0x10b6e6e0], ecx */
  w32((uint32_t)(0x10b6e6e0), (ECX));
L_10b4f2df:;
  /* 10b4f2df mov edx, dword ptr [0x10b6e6dc] */
  EDX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f2e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f2eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f2f1 je 0x10b4f461 */
  if (C.zf) goto L_10b4f461;
  /* 10b4f2f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b4f2f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b4f2fc push eax */
  push32((uint32_t)(EAX));
  /* 10b4f2fd mov ecx, dword ptr [0x10b6e6d0] */
  ECX = (r32((uint32_t)(0x10b6e6d0)));
  /* 10b4f303 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f305 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f307 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f30d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f313 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f314 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f317 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f318 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f31eu);
  /* 10b4f31e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f320 jne 0x10b4f336 */
  if (!C.zf) goto L_10b4f336;
  /* 10b4f322 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
  /* 10b4f32c mov eax, 1 */
  EAX = (0x1u);
  /* 10b4f331 jmp 0x10b4f46e */
  goto L_10b4f46e;
L_10b4f336:;
  /* 10b4f336 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b4f339 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f33a mov ecx, dword ptr [0x10b6e6d4] */
  ECX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f340 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f341 call 0x10b516f0 */
  push32(0x10b4f346u); f_10b516f0();
  /* 10b4f346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f34b jne 0x10b4f400 */
  if (!C.zf) goto L_10b4f400;
  /* 10b4f351 mov edx, dword ptr [0x10b6e6dc] */
  EDX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f357 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b4f35a mov dword ptr [0x10b6e6dc], edx */
  w32((uint32_t)(0x10b6e6dc), (EDX));
  /* 10b4f360 cmp dword ptr [0x10b6e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f367 je 0x10b4f38a */
  if (C.zf) goto L_10b4f38a;
  /* 10b4f369 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f36e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10b4f371 mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
  /* 10b4f376 cmp dword ptr [0x10b6e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f37d jne 0x10b4f388 */
  if (!C.zf) goto L_10b4f388;
  /* 10b4f37f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f382 mov dword ptr [0x10b6e6c4], ecx */
  w32((uint32_t)(0x10b6e6c4), (ECX));
L_10b4f388:;
  /* 10b4f388 jmp 0x10b4f3fe */
  goto L_10b4f3fe;
L_10b4f38a:;
  /* 10b4f38a cmp dword ptr [0x10b6e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f391 je 0x10b4f3df */
  if (C.zf) goto L_10b4f3df;
  /* 10b4f393 mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f399 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f39a call 0x10b45e50 */
  push32(0x10b4f39fu); f_10b45e50();
  /* 10b4f39f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f3a2 cmp eax, dword ptr [0x10b6e6cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6e6cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f3a8 jne 0x10b4f3df */
  if (!C.zf) goto L_10b4f3df;
  /* 10b4f3aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4f3ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f3af push eax */
  push32((uint32_t)(EAX));
  /* 10b4f3b0 call 0x10b4f840 */
  push32(0x10b4f3b5u); f_10b4f840();
  /* 10b4f3b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f3b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f3ba je 0x10b4f3dd */
  if (C.zf) goto L_10b4f3dd;
  /* 10b4f3bc mov ecx, dword ptr [0x10b6e6dc] */
  ECX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f3c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b4f3c5 mov dword ptr [0x10b6e6dc], ecx */
  w32((uint32_t)(0x10b6e6dc), (ECX));
  /* 10b4f3cb cmp dword ptr [0x10b6e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f3d2 jne 0x10b4f3dd */
  if (!C.zf) goto L_10b4f3dd;
  /* 10b4f3d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f3d7 mov dword ptr [0x10b6e6c4], edx */
  w32((uint32_t)(0x10b6e6c4), (EDX));
L_10b4f3dd:;
  /* 10b4f3dd jmp 0x10b4f3fe */
  goto L_10b4f3fe;
L_10b4f3df:;
  /* 10b4f3df mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f3e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10b4f3e7 mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
  /* 10b4f3ec cmp dword ptr [0x10b6e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f3f3 jne 0x10b4f3fe */
  if (!C.zf) goto L_10b4f3fe;
  /* 10b4f3f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f3f8 mov dword ptr [0x10b6e6c4], ecx */
  w32((uint32_t)(0x10b6e6c4), (ECX));
L_10b4f3fe:;
  /* 10b4f3fe jmp 0x10b4f461 */
  goto L_10b4f461;
L_10b4f400:;
  /* 10b4f400 cmp dword ptr [0x10b6e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f407 jne 0x10b4f461 */
  if (!C.zf) goto L_10b4f461;
  /* 10b4f409 cmp dword ptr [0x10b6e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f410 je 0x10b4f461 */
  if (C.zf) goto L_10b4f461;
  /* 10b4f412 mov edx, dword ptr [0x10b6e6cc] */
  EDX = (r32((uint32_t)(0x10b6e6cc)));
  /* 10b4f418 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f419 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b4f41c push eax */
  push32((uint32_t)(EAX));
  /* 10b4f41d mov ecx, dword ptr [0x10b6e6d4] */
  ECX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f423 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f424 call 0x10b517c0 */
  push32(0x10b4f429u); f_10b517c0();
  /* 10b4f429 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f42c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f42e jne 0x10b4f461 */
  if (!C.zf) goto L_10b4f461;
  /* 10b4f430 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4f432 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f435 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f436 call 0x10b4f840 */
  push32(0x10b4f43bu); f_10b4f840();
  /* 10b4f43b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f43e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f440 je 0x10b4f461 */
  if (C.zf) goto L_10b4f461;
  /* 10b4f442 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f447 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10b4f44a mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
  /* 10b4f44f cmp dword ptr [0x10b6e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f456 jne 0x10b4f461 */
  if (!C.zf) goto L_10b4f461;
  /* 10b4f458 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f45b mov dword ptr [0x10b6e6c4], ecx */
  w32((uint32_t)(0x10b6e6c4), (ECX));
L_10b4f461:;
  /* 10b4f461 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f466 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f469 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f46b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f46d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b4f46e:;
  /* 10b4f46e mov esp, ebp */
  ESP = (EBP);
  /* 10b4f470 pop ebp */
  EBP = (pop32());
  /* 10b4f471 ret 4 */
  ESPCHK(0x10b4f150u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f480 @ 0x10b4f480 (116 bytes, 33 insns) */
void f_10b4f480(void) {
  FTRACE(0x10b4f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f480 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f481 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f483 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f484 mov eax, dword ptr [0x10b6e6d4] */
  EAX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f489 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f48a call 0x10b45e50 */
  push32(0x10b4f48fu); f_10b45e50();
  /* 10b4f48f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f492 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f494 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f497 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b4f49a mov dword ptr [0x10b6e6d0], ecx */
  w32((uint32_t)(0x10b6e6d0), (ECX));
  /* 10b4f4a0 cmp dword ptr [0x10b6e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f4a7 je 0x10b4f4b2 */
  if (C.zf) goto L_10b4f4b2;
  /* 10b4f4a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b4f4b0 jmp 0x10b4f4c4 */
  goto L_10b4f4c4;
L_10b4f4b2:;
  /* 10b4f4b2 mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f4b8 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f4b9 call 0x10b4fb30 */
  push32(0x10b4f4beu); f_10b4fb30();
  /* 10b4f4be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f4c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4f4c4:;
  /* 10b4f4c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f4c7 mov dword ptr [0x10b6e6cc], eax */
  w32((uint32_t)(0x10b6e6cc), (EAX));
  /* 10b4f4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4f4ce push 0x10b4f500 */
  push32((uint32_t)(0x10b4f500u));
  /* 10b4f4d3 call dword ptr [0x10b7027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7027c))), 0x10b4f4d9u);
  /* 10b4f4d9 mov ecx, dword ptr [0x10b6e6dc] */
  ECX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f4df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f4e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4f4e4 jne 0x10b4f4f0 */
  if (!C.zf) goto L_10b4f4f0;
  /* 10b4f4e6 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
L_10b4f4f0:;
  /* 10b4f4f0 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f4f2 pop ebp */
  EBP = (pop32());
  /* 10b4f4f3 ret  */
  ESPCHK(0x10b4f480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f500 @ 0x10b4f500 (287 bytes, 86 insns) */
void f_10b4f500(void) {
  FTRACE(0x10b4f500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f500 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f501 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f503 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f509 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f50a call 0x10b4fab0 */
  push32(0x10b4f50fu); f_10b4fab0();
  /* 10b4f50f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f512 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10b4f515 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b4f517 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f51a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f51b mov edx, dword ptr [0x10b6e6d0] */
  EDX = (r32((uint32_t)(0x10b6e6d0)));
  /* 10b4f521 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f523 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f525 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f52b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f531 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f532 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f535 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f536 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f53cu);
  /* 10b4f53c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f53e jne 0x10b4f554 */
  if (!C.zf) goto L_10b4f554;
  /* 10b4f540 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
  /* 10b4f54a mov eax, 1 */
  EAX = (0x1u);
  /* 10b4f54f jmp 0x10b4f619 */
  goto L_10b4f619;
L_10b4f554:;
  /* 10b4f554 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f557 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f558 mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f55e push edx */
  push32((uint32_t)(EDX));
  /* 10b4f55f call 0x10b516f0 */
  push32(0x10b4f564u); f_10b516f0();
  /* 10b4f564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f569 jne 0x10b4f5a9 */
  if (!C.zf) goto L_10b4f5a9;
  /* 10b4f56b cmp dword ptr [0x10b6e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f572 jne 0x10b4f586 */
  if (!C.zf) goto L_10b4f586;
  /* 10b4f574 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4f576 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f579 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f57a call 0x10b4f840 */
  push32(0x10b4f57fu); f_10b4f840();
  /* 10b4f57f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f584 je 0x10b4f5a7 */
  if (C.zf) goto L_10b4f5a7;
L_10b4f586:;
  /* 10b4f586 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f589 mov dword ptr [0x10b6e6e0], ecx */
  w32((uint32_t)(0x10b6e6e0), (ECX));
  /* 10b4f58f mov edx, dword ptr [0x10b6e6e0] */
  EDX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f595 mov dword ptr [0x10b6e6c4], edx */
  w32((uint32_t)(0x10b6e6c4), (EDX));
  /* 10b4f59b mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f5a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10b4f5a2 mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
L_10b4f5a7:;
  /* 10b4f5a7 jmp 0x10b4f60c */
  goto L_10b4f60c;
L_10b4f5a9:;
  /* 10b4f5a9 cmp dword ptr [0x10b6e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f5b0 jne 0x10b4f60c */
  if (!C.zf) goto L_10b4f60c;
  /* 10b4f5b2 cmp dword ptr [0x10b6e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b6e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f5b9 je 0x10b4f60c */
  if (C.zf) goto L_10b4f60c;
  /* 10b4f5bb mov ecx, dword ptr [0x10b6e6cc] */
  ECX = (r32((uint32_t)(0x10b6e6cc)));
  /* 10b4f5c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f5c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10b4f5c5 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f5c6 mov eax, dword ptr [0x10b6e6d4] */
  EAX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f5cb push eax */
  push32((uint32_t)(EAX));
  /* 10b4f5cc call 0x10b517c0 */
  push32(0x10b4f5d1u); f_10b517c0();
  /* 10b4f5d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f5d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f5d6 jne 0x10b4f60c */
  if (!C.zf) goto L_10b4f60c;
  /* 10b4f5d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4f5da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f5dd push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f5de call 0x10b4f840 */
  push32(0x10b4f5e3u); f_10b4f840();
  /* 10b4f5e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f5e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f5e8 je 0x10b4f60c */
  if (C.zf) goto L_10b4f60c;
  /* 10b4f5ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f5ed mov dword ptr [0x10b6e6e0], edx */
  w32((uint32_t)(0x10b6e6e0), (EDX));
  /* 10b4f5f3 mov eax, dword ptr [0x10b6e6e0] */
  EAX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f5f8 mov dword ptr [0x10b6e6c4], eax */
  w32((uint32_t)(0x10b6e6c4), (EAX));
  /* 10b4f5fd mov ecx, dword ptr [0x10b6e6dc] */
  ECX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f603 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f606 mov dword ptr [0x10b6e6dc], ecx */
  w32((uint32_t)(0x10b6e6dc), (ECX));
L_10b4f60c:;
  /* 10b4f60c mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f611 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f614 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f616 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f618 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b4f619:;
  /* 10b4f619 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f61b pop ebp */
  EBP = (pop32());
  /* 10b4f61c ret 4 */
  ESPCHK(0x10b4f500u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f620 @ 0x10b4f620 (69 bytes, 20 insns) */
void f_10b4f620(void) {
  FTRACE(0x10b4f620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f620 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f621 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f623 mov eax, dword ptr [0x10b6e6d8] */
  EAX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4f628 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f629 call 0x10b45e50 */
  push32(0x10b4f62eu); f_10b45e50();
  /* 10b4f62e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f631 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f633 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f636 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b4f639 mov dword ptr [0x10b6e6c8], ecx */
  w32((uint32_t)(0x10b6e6c8), (ECX));
  /* 10b4f63f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4f641 push 0x10b4f670 */
  push32((uint32_t)(0x10b4f670u));
  /* 10b4f646 call dword ptr [0x10b7027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b7027c))), 0x10b4f64cu);
  /* 10b4f64c mov edx, dword ptr [0x10b6e6dc] */
  EDX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f652 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f655 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4f657 jne 0x10b4f663 */
  if (!C.zf) goto L_10b4f663;
  /* 10b4f659 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
L_10b4f663:;
  /* 10b4f663 pop ebp */
  EBP = (pop32());
  /* 10b4f664 ret  */
  ESPCHK(0x10b4f620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x10b4f670 (172 bytes, 54 insns) */
void f_10b4f670(void) {
  FTRACE(0x10b4f670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f670 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f671 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f673 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f679 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f67a call 0x10b4fab0 */
  push32(0x10b4f67fu); f_10b4fab0();
  /* 10b4f67f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f682 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10b4f685 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b4f687 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f68a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f68b mov edx, dword ptr [0x10b6e6c8] */
  EDX = (r32((uint32_t)(0x10b6e6c8)));
  /* 10b4f691 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f693 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f695 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f69b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f6a1 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f6a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f6a5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f6a6 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f6acu);
  /* 10b4f6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f6ae jne 0x10b4f6c1 */
  if (!C.zf) goto L_10b4f6c1;
  /* 10b4f6b0 mov dword ptr [0x10b6e6dc], 0 */
  w32((uint32_t)(0x10b6e6dc), (0x0u));
  /* 10b4f6ba mov eax, 1 */
  EAX = (0x1u);
  /* 10b4f6bf jmp 0x10b4f716 */
  goto L_10b4f716;
L_10b4f6c1:;
  /* 10b4f6c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b4f6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f6c5 mov edx, dword ptr [0x10b6e6d8] */
  EDX = (r32((uint32_t)(0x10b6e6d8)));
  /* 10b4f6cb push edx */
  push32((uint32_t)(EDX));
  /* 10b4f6cc call 0x10b516f0 */
  push32(0x10b4f6d1u); f_10b516f0();
  /* 10b4f6d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f6d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f6d6 jne 0x10b4f709 */
  if (!C.zf) goto L_10b4f709;
  /* 10b4f6d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f6db push eax */
  push32((uint32_t)(EAX));
  /* 10b4f6dc call 0x10b4f7f0 */
  push32(0x10b4f6e1u); f_10b4f7f0();
  /* 10b4f6e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f6e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f6e6 je 0x10b4f709 */
  if (C.zf) goto L_10b4f709;
  /* 10b4f6e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b4f6eb mov dword ptr [0x10b6e6e0], ecx */
  w32((uint32_t)(0x10b6e6e0), (ECX));
  /* 10b4f6f1 mov edx, dword ptr [0x10b6e6e0] */
  EDX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f6f7 mov dword ptr [0x10b6e6c4], edx */
  w32((uint32_t)(0x10b6e6c4), (EDX));
  /* 10b4f6fd mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f702 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10b4f704 mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
L_10b4f709:;
  /* 10b4f709 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f70e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f711 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b4f713 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f715 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b4f716:;
  /* 10b4f716 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f718 pop ebp */
  EBP = (pop32());
  /* 10b4f719 ret 4 */
  ESPCHK(0x10b4f670u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f720 @ 0x10b4f720 (43 bytes, 11 insns) */
void f_10b4f720(void) {
  FTRACE(0x10b4f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f720 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f721 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f723 mov eax, dword ptr [0x10b6e6dc] */
  EAX = (r32((uint32_t)(0x10b6e6dc)));
  /* 10b4f728 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f72d mov dword ptr [0x10b6e6dc], eax */
  w32((uint32_t)(0x10b6e6dc), (EAX));
  /* 10b4f732 call dword ptr [0x10b70278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70278))), 0x10b4f738u);
  /* 10b4f738 mov dword ptr [0x10b6e6e0], eax */
  w32((uint32_t)(0x10b6e6e0), (EAX));
  /* 10b4f73d mov ecx, dword ptr [0x10b6e6e0] */
  ECX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f743 mov dword ptr [0x10b6e6c4], ecx */
  w32((uint32_t)(0x10b6e6c4), (ECX));
  /* 10b4f749 pop ebp */
  EBP = (pop32());
  /* 10b4f74a ret  */
  ESPCHK(0x10b4f720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f750 @ 0x10b4f750 (155 bytes, 57 insns) */
void f_10b4f750(void) {
  FTRACE(0x10b4f750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f750 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f751 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f756 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f75a je 0x10b4f77b */
  if (C.zf) goto L_10b4f77b;
  /* 10b4f75c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f75f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b4f762 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4f764 je 0x10b4f77b */
  if (C.zf) goto L_10b4f77b;
  /* 10b4f766 push 0x10b6a754 */
  push32((uint32_t)(0x10b6a754u));
  /* 10b4f76b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f76e push edx */
  push32((uint32_t)(EDX));
  /* 10b4f76f call 0x10b4ecb0 */
  push32(0x10b4f774u); f_10b4ecb0();
  /* 10b4f774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f779 jne 0x10b4f7a3 */
  if (!C.zf) goto L_10b4f7a3;
L_10b4f77b:;
  /* 10b4f77b push 8 */
  push32((uint32_t)(0x8u));
  /* 10b4f77d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b4f780 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f781 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10b4f786 mov ecx, dword ptr [0x10b6e6e0] */
  ECX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f78c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f78d call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f793u);
  /* 10b4f793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f795 jne 0x10b4f79b */
  if (!C.zf) goto L_10b4f79b;
  /* 10b4f797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f799 jmp 0x10b4f7e7 */
  goto L_10b4f7e7;
L_10b4f79b:;
  /* 10b4f79b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10b4f79e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b4f7a1 jmp 0x10b4f7db */
  goto L_10b4f7db;
L_10b4f7a3:;
  /* 10b4f7a3 push 0x10b6a750 */
  push32((uint32_t)(0x10b6a750u));
  /* 10b4f7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f7ab push eax */
  push32((uint32_t)(EAX));
  /* 10b4f7ac call 0x10b4ecb0 */
  push32(0x10b4f7b1u); f_10b4ecb0();
  /* 10b4f7b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f7b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f7b6 jne 0x10b4f7db */
  if (!C.zf) goto L_10b4f7db;
  /* 10b4f7b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b4f7ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10b4f7bd push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f7be push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b4f7c0 mov edx, dword ptr [0x10b6e6e0] */
  EDX = (r32((uint32_t)(0x10b6e6e0)));
  /* 10b4f7c6 push edx */
  push32((uint32_t)(EDX));
  /* 10b4f7c7 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f7cdu);
  /* 10b4f7cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f7cf jne 0x10b4f7d5 */
  if (!C.zf) goto L_10b4f7d5;
  /* 10b4f7d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f7d3 jmp 0x10b4f7e7 */
  goto L_10b4f7e7;
L_10b4f7d5:;
  /* 10b4f7d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b4f7d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b4f7db:;
  /* 10b4f7db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f7de push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f7df call 0x10b518d0 */
  push32(0x10b4f7e4u); f_10b518d0();
  /* 10b4f7e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b4f7e7:;
  /* 10b4f7e7 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f7e9 pop ebp */
  EBP = (pop32());
  /* 10b4f7ea ret  */
  ESPCHK(0x10b4f750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x10b4f7f0 (79 bytes, 26 insns) */
void f_10b4f7f0(void) {
  FTRACE(0x10b4f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f7f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f7f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10b4f7fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10b4f7fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4f805 jmp 0x10b4f810 */
  goto L_10b4f810;
L_10b4f807:;
  /* 10b4f807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4f80a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f80d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b4f810:;
  /* 10b4f810 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f814 jae 0x10b4f836 */
  if (!C.cf) goto L_10b4f836;
  /* 10b4f816 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f819 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4f81f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4f822 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b4f824 mov cx, word ptr [eax*2 + 0x10b6d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10b6d9c4)));
  /* 10b4f82c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f82e jne 0x10b4f834 */
  if (!C.zf) goto L_10b4f834;
  /* 10b4f830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f832 jmp 0x10b4f83b */
  goto L_10b4f83b;
L_10b4f834:;
  /* 10b4f834 jmp 0x10b4f807 */
  goto L_10b4f807;
L_10b4f836:;
  /* 10b4f836 mov eax, 1 */
  EAX = (0x1u);
L_10b4f83b:;
  /* 10b4f83b mov esp, ebp */
  ESP = (EBP);
  /* 10b4f83d pop ebp */
  EBP = (pop32());
  /* 10b4f83e ret  */
  ESPCHK(0x10b4f7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f840 @ 0x10b4f840 (135 bytes, 48 insns) */
void f_10b4f840(void) {
  FTRACE(0x10b4f840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f840 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f841 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f843 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f846 push esi */
  push32((uint32_t)(ESI));
  /* 10b4f847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f84a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f84f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f854 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f859 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10b4f85c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f861 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4f864 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b4f866 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10b4f869 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f86a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4f86c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4f86f push edx */
  push32((uint32_t)(EDX));
  /* 10b4f870 call dword ptr [0x10b6e6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b6e6e4))), 0x10b4f876u);
  /* 10b4f876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f878 jne 0x10b4f87e */
  if (!C.zf) goto L_10b4f87e;
  /* 10b4f87a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f87c jmp 0x10b4f8c2 */
  goto L_10b4f8c2;
L_10b4f87e:;
  /* 10b4f87e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10b4f881 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f882 call 0x10b4fab0 */
  push32(0x10b4f887u); f_10b4fab0();
  /* 10b4f887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f88a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f88d je 0x10b4f8bd */
  if (C.zf) goto L_10b4f8bd;
  /* 10b4f88f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f893 je 0x10b4f8bd */
  if (C.zf) goto L_10b4f8bd;
  /* 10b4f895 mov ecx, dword ptr [0x10b6e6d4] */
  ECX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f89b push ecx */
  push32((uint32_t)(ECX));
  /* 10b4f89c call 0x10b4fb30 */
  push32(0x10b4f8a1u); f_10b4fb30();
  /* 10b4f8a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f8a4 mov esi, eax */
  ESI = (EAX);
  /* 10b4f8a6 mov edx, dword ptr [0x10b6e6d4] */
  EDX = (r32((uint32_t)(0x10b6e6d4)));
  /* 10b4f8ac push edx */
  push32((uint32_t)(EDX));
  /* 10b4f8ad call 0x10b45e50 */
  push32(0x10b4f8b2u); f_10b45e50();
  /* 10b4f8b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f8b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f8b7 jne 0x10b4f8bd */
  if (!C.zf) goto L_10b4f8bd;
  /* 10b4f8b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4f8bb jmp 0x10b4f8c2 */
  goto L_10b4f8c2;
L_10b4f8bd:;
  /* 10b4f8bd mov eax, 1 */
  EAX = (0x1u);
L_10b4f8c2:;
  /* 10b4f8c2 pop esi */
  ESI = (pop32());
  /* 10b4f8c3 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f8c5 pop ebp */
  EBP = (pop32());
  /* 10b4f8c6 ret  */
  ESPCHK(0x10b4f840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x10b4f8d0 (77 bytes, 18 insns) */
void f_10b4f8d0(void) {
  FTRACE(0x10b4f8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f8d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f8d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f8d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10b4f8e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10b4f8e9 push eax */
  push32((uint32_t)(EAX));
  /* 10b4f8ea call dword ptr [0x10b70274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70274))), 0x10b4f8f0u);
  /* 10b4f8f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4f8f2 je 0x10b4f909 */
  if (C.zf) goto L_10b4f909;
  /* 10b4f8f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f8fb jne 0x10b4f909 */
  if (!C.zf) goto L_10b4f909;
  /* 10b4f8fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10b4f907 jmp 0x10b4f913 */
  goto L_10b4f913;
L_10b4f909:;
  /* 10b4f909 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10b4f913:;
  /* 10b4f913 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10b4f919 mov esp, ebp */
  ESP = (EBP);
  /* 10b4f91b pop ebp */
  EBP = (pop32());
  /* 10b4f91c ret  */
  ESPCHK(0x10b4f8d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10b4f920 (388 bytes, 118 insns) */
void f_10b4f920(void) {
  FTRACE(0x10b4f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4f920 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4f921 mov ebp, esp */
  EBP = (ESP);
  /* 10b4f923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f926 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b4f92d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10b4f934 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b4f93b:;
  /* 10b4f93b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4f93e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f941 jg 0x10b4fa88 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4fa88;
  /* 10b4f947 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b4f94a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f94d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b4f94e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4f950 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b4f952 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b4f955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f958 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4f95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4f95e cmp edx, dword ptr [ecx + 0x10b6d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10b6d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f964 jne 0x10b4fa5e */
  if (!C.zf) goto L_10b4fa5e;
  /* 10b4f96a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4f96d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b4f970 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f974 ja 0x10b4f997 */
  if ((!C.cf&&!C.zf)) goto L_10b4f997;
  /* 10b4f976 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f97a je 0x10b4fa09 */
  if (C.zf) goto L_10b4fa09;
  /* 10b4f980 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f984 je 0x10b4f9b4 */
  if (C.zf) goto L_10b4f9b4;
  /* 10b4f986 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f98a je 0x10b4f9d6 */
  if (C.zf) goto L_10b4f9d6;
  /* 10b4f98c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f990 je 0x10b4f9f8 */
  if (C.zf) goto L_10b4f9f8;
  /* 10b4f992 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4f997:;
  /* 10b4f997 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f99e je 0x10b4f9c5 */
  if (C.zf) goto L_10b4f9c5;
  /* 10b4f9a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f9a7 je 0x10b4f9e7 */
  if (C.zf) goto L_10b4f9e7;
  /* 10b4f9a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4f9b0 je 0x10b4fa1a */
  if (C.zf) goto L_10b4fa1a;
  /* 10b4f9b2 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4f9b4:;
  /* 10b4f9b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f9b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4f9ba add ecx, 0x10b6d524 */
  { uint32_t _a=(ECX),_b=(0x10b6d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f9c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4f9c3 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4f9c5:;
  /* 10b4f9c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f9c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4f9cb mov eax, dword ptr [edx + 0x10b6d52c] */
  EAX = (r32((uint32_t)(EDX + 0x10b6d52c)));
  /* 10b4f9d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4f9d4 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4f9d6:;
  /* 10b4f9d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f9d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4f9dc add ecx, 0x10b6d530 */
  { uint32_t _a=(ECX),_b=(0x10b6d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4f9e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4f9e5 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4f9e7:;
  /* 10b4f9e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f9ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4f9ed mov eax, dword ptr [edx + 0x10b6d534] */
  EAX = (r32((uint32_t)(EDX + 0x10b6d534)));
  /* 10b4f9f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b4f9f6 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4f9f8:;
  /* 10b4f9f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4f9fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4f9fe add ecx, 0x10b6d538 */
  { uint32_t _a=(ECX),_b=(0x10b6d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fa04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4fa07 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4fa09:;
  /* 10b4fa09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fa0c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4fa0f add edx, 0x10b6d53c */
  { uint32_t _a=(EDX),_b=(0x10b6d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fa15 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b4fa18 jmp 0x10b4fa28 */
  goto L_10b4fa28;
L_10b4fa1a:;
  /* 10b4fa1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fa1d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4fa20 add eax, 0x10b6d544 */
  { uint32_t _a=(EAX),_b=(0x10b6d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fa25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b4fa28:;
  /* 10b4fa28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fa2c je 0x10b4fa34 */
  if (C.zf) goto L_10b4fa34;
  /* 10b4fa2e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fa32 jge 0x10b4fa36 */
  if ((C.sf==C.of)) goto L_10b4fa36;
L_10b4fa34:;
  /* 10b4fa34 jmp 0x10b4fa88 */
  goto L_10b4fa88;
L_10b4fa36:;
  /* 10b4fa36 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4fa39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4fa3c push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fa3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4fa40 push edx */
  push32((uint32_t)(EDX));
  /* 10b4fa41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4fa44 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fa45 call 0x10b46840 */
  push32(0x10b4fa4au); f_10b46840();
  /* 10b4fa4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fa4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4fa50 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fa53 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10b4fa57 mov eax, 1 */
  EAX = (0x1u);
  /* 10b4fa5c jmp 0x10b4fa9e */
  goto L_10b4fa9e;
L_10b4fa5e:;
  /* 10b4fa5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fa61 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4fa64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fa67 cmp eax, dword ptr [edx + 0x10b6d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10b6d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fa6d jae 0x10b4fa7a */
  if (!C.cf) goto L_10b4fa7a;
  /* 10b4fa6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fa72 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4fa75 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b4fa78 jmp 0x10b4fa83 */
  goto L_10b4fa83;
L_10b4fa7a:;
  /* 10b4fa7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b4fa7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fa80 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b4fa83:;
  /* 10b4fa83 jmp 0x10b4f93b */
  goto L_10b4f93b;
L_10b4fa88:;
  /* 10b4fa88 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b4fa8b push eax */
  push32((uint32_t)(EAX));
  /* 10b4fa8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b4fa8f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fa90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b4fa93 push edx */
  push32((uint32_t)(EDX));
  /* 10b4fa94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fa97 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fa98 call dword ptr [0x10b70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70280))), 0x10b4fa9eu);
L_10b4fa9e:;
  /* 10b4fa9e mov esp, ebp */
  ESP = (EBP);
  /* 10b4faa0 pop ebp */
  EBP = (pop32());
  /* 10b4faa1 ret 0x10 */
  ESPCHK(0x10b4f920u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fab0 @ 0x10b4fab0 (118 bytes, 42 insns) */
void f_10b4fab0(void) {
  FTRACE(0x10b4fab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fab1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4fab6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b4fabd:;
  /* 10b4fabd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fac0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b4fac2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10b4fac5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4fac9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4facc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4facf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b4fad2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4fad4 je 0x10b4fb1f */
  if (C.zf) goto L_10b4fb1f;
  /* 10b4fad6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4fada cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fadd jl 0x10b4faf2 */
  if ((C.sf!=C.of)) goto L_10b4faf2;
  /* 10b4fadf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4fae3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fae6 jg 0x10b4faf2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4faf2;
  /* 10b4fae8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10b4faeb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4faed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10b4faf0 jmp 0x10b4fb0c */
  goto L_10b4fb0c;
L_10b4faf2:;
  /* 10b4faf2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4faf6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4faf9 jl 0x10b4fb0c */
  if ((C.sf!=C.of)) goto L_10b4fb0c;
  /* 10b4fafb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4faff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fb02 jg 0x10b4fb0c */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4fb0c;
  /* 10b4fb04 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10b4fb07 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b4fb09 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10b4fb0c:;
  /* 10b4fb0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4fb0f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b4fb12 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b4fb16 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10b4fb1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4fb1d jmp 0x10b4fabd */
  goto L_10b4fabd;
L_10b4fb1f:;
  /* 10b4fb1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4fb22 mov esp, ebp */
  ESP = (EBP);
  /* 10b4fb24 pop ebp */
  EBP = (pop32());
  /* 10b4fb25 ret  */
  ESPCHK(0x10b4fab0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10b4fb30 (101 bytes, 36 insns) */
void f_10b4fb30(void) {
  FTRACE(0x10b4fb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fb30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fb31 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fb33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b4fb36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b4fb3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fb40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b4fb42 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10b4fb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fb48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fb4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10b4fb4e:;
  /* 10b4fb4e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b4fb52 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fb55 jl 0x10b4fb60 */
  if ((C.sf!=C.of)) goto L_10b4fb60;
  /* 10b4fb57 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b4fb5b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fb5e jle 0x10b4fb72 */
  if ((C.zf||C.sf!=C.of)) goto L_10b4fb72;
L_10b4fb60:;
  /* 10b4fb60 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b4fb64 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fb67 jl 0x10b4fb8e */
  if ((C.sf!=C.of)) goto L_10b4fb8e;
  /* 10b4fb69 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b4fb6d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fb70 jg 0x10b4fb8e */
  if ((!C.zf&&C.sf==C.of)) goto L_10b4fb8e;
L_10b4fb72:;
  /* 10b4fb72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4fb75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fb78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b4fb7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fb7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b4fb80 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10b4fb83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fb86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fb89 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b4fb8c jmp 0x10b4fb4e */
  goto L_10b4fb4e;
L_10b4fb8e:;
  /* 10b4fb8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b4fb91 mov esp, ebp */
  ESP = (EBP);
  /* 10b4fb93 pop ebp */
  EBP = (pop32());
  /* 10b4fb94 ret  */
  ESPCHK(0x10b4fb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x10b4fba0 (122 bytes, 39 insns) */
void f_10b4fba0(void) {
  FTRACE(0x10b4fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fba1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fba7 cmp eax, dword ptr [0x10b6ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b6ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fbad jae 0x10b4fbd1 */
  if (!C.cf) goto L_10b4fbd1;
  /* 10b4fbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fbb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b4fbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fbb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b4fbbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4fbbe mov eax, dword ptr [ecx*4 + 0x10b6fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b6fe40)));
  /* 10b4fbc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b4fbca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4fbcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4fbcf jne 0x10b4fbec */
  if (!C.zf) goto L_10b4fbec;
L_10b4fbd1:;
  /* 10b4fbd1 call 0x10b4aef0 */
  push32(0x10b4fbd6u); f_10b4aef0();
  /* 10b4fbd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b4fbdc call 0x10b4af00 */
  push32(0x10b4fbe1u); f_10b4af00();
  /* 10b4fbe1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b4fbe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4fbea jmp 0x10b4fc16 */
  goto L_10b4fc16;
L_10b4fbec:;
  /* 10b4fbec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fbef push edx */
  push32((uint32_t)(EDX));
  /* 10b4fbf0 call 0x10b4c710 */
  push32(0x10b4fbf5u); f_10b4c710();
  /* 10b4fbf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fbf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fbfb push eax */
  push32((uint32_t)(EAX));
  /* 10b4fbfc call 0x10b4fc20 */
  push32(0x10b4fc01u); f_10b4fc20();
  /* 10b4fc01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b4fc07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fc0a push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fc0b call 0x10b4c7a0 */
  push32(0x10b4fc10u); f_10b4c7a0();
  /* 10b4fc10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b4fc16:;
  /* 10b4fc16 mov esp, ebp */
  ESP = (EBP);
  /* 10b4fc18 pop ebp */
  EBP = (pop32());
  /* 10b4fc19 ret  */
  ESPCHK(0x10b4fba0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10b4fc20 (170 bytes, 59 insns) */
void f_10b4fc20(void) {
  FTRACE(0x10b4fc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fc20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fc21 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fc24 push esi */
  push32((uint32_t)(ESI));
  /* 10b4fc25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fc28 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fc29 call 0x10b4c590 */
  push32(0x10b4fc2eu); f_10b4c590();
  /* 10b4fc2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fc34 je 0x10b4fc73 */
  if (C.zf) goto L_10b4fc73;
  /* 10b4fc36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fc3a je 0x10b4fc42 */
  if (C.zf) goto L_10b4fc42;
  /* 10b4fc3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fc40 jne 0x10b4fc5c */
  if (!C.zf) goto L_10b4fc5c;
L_10b4fc42:;
  /* 10b4fc42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b4fc44 call 0x10b4c590 */
  push32(0x10b4fc49u); f_10b4c590();
  /* 10b4fc49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc4c mov esi, eax */
  ESI = (EAX);
  /* 10b4fc4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4fc50 call 0x10b4c590 */
  push32(0x10b4fc55u); f_10b4c590();
  /* 10b4fc55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fc5a je 0x10b4fc73 */
  if (C.zf) goto L_10b4fc73;
L_10b4fc5c:;
  /* 10b4fc5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fc5f push ecx */
  push32((uint32_t)(ECX));
  /* 10b4fc60 call 0x10b4c590 */
  push32(0x10b4fc65u); f_10b4c590();
  /* 10b4fc65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc68 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fc69 call dword ptr [0x10b70270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b70270))), 0x10b4fc6fu);
  /* 10b4fc6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4fc71 je 0x10b4fc7c */
  if (C.zf) goto L_10b4fc7c;
L_10b4fc73:;
  /* 10b4fc73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b4fc7a jmp 0x10b4fc85 */
  goto L_10b4fc85;
L_10b4fc7c:;
  /* 10b4fc7c call dword ptr [0x10b702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b702fc))), 0x10b4fc82u);
  /* 10b4fc82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b4fc85:;
  /* 10b4fc85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fc88 push edx */
  push32((uint32_t)(EDX));
  /* 10b4fc89 call 0x10b4c4b0 */
  push32(0x10b4fc8eu); f_10b4c4b0();
  /* 10b4fc8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fc91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fc94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b4fc97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fc9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b4fc9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b4fca0 mov edx, dword ptr [eax*4 + 0x10b6fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b6fe40)));
  /* 10b4fca7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10b4fcac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fcb0 je 0x10b4fcc3 */
  if (C.zf) goto L_10b4fcc3;
  /* 10b4fcb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b4fcb5 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fcb6 call 0x10b4ae50 */
  push32(0x10b4fcbbu); f_10b4ae50();
  /* 10b4fcbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fcbe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b4fcc1 jmp 0x10b4fcc5 */
  goto L_10b4fcc5;
L_10b4fcc3:;
  /* 10b4fcc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b4fcc5:;
  /* 10b4fcc5 pop esi */
  ESI = (pop32());
  /* 10b4fcc6 mov esp, ebp */
  ESP = (EBP);
  /* 10b4fcc8 pop ebp */
  EBP = (pop32());
  /* 10b4fcc9 ret  */
  ESPCHK(0x10b4fc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcd0 @ 0x10b4fcd0 (146 bytes, 52 insns) */
void f_10b4fcd0(void) {
  FTRACE(0x10b4fcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b4fcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b4fcd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b4fcd3 push ebx */
  push32((uint32_t)(EBX));
  /* 10b4fcd4 push esi */
  push32((uint32_t)(ESI));
  /* 10b4fcd5 push edi */
  push32((uint32_t)(EDI));
L_10b4fcd6:;
  /* 10b4fcd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fcda jne 0x10b4fcfa */
  if (!C.zf) goto L_10b4fcfa;
  /* 10b4fcdc push 0x10b6a090 */
  push32((uint32_t)(0x10b6a090u));
  /* 10b4fce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b4fce3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b4fce5 push 0x10b6a758 */
  push32((uint32_t)(0x10b6a758u));
  /* 10b4fcea push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4fcec call 0x10b420e0 */
  push32(0x10b4fcf1u); f_10b420e0();
  /* 10b4fcf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fcf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b4fcf7 jne 0x10b4fcfa */
  if (!C.zf) goto L_10b4fcfa;
  /* 10b4fcf9 int3  */
  x86_unimpl("int3 @ 0x10b4fcf9");
L_10b4fcfa:;
  /* 10b4fcfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b4fcfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b4fcfe jne 0x10b4fcd6 */
  if (!C.zf) goto L_10b4fcd6;
  /* 10b4fd00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4fd06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4fd0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b4fd0e je 0x10b4fd5d */
  if (C.zf) goto L_10b4fd5d;
  /* 10b4fd10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b4fd16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b4fd19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b4fd1b je 0x10b4fd5d */
  if (C.zf) goto L_10b4fd5d;
  /* 10b4fd1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b4fd1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b4fd25 push eax */
  push32((uint32_t)(EAX));
  /* 10b4fd26 call 0x10b43ab0 */
  push32(0x10b4fd2bu); f_10b43ab0();
  /* 10b4fd2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b4fd2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b4fd34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10b4fd3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b4fd40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10b4fd49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10b4fd53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b4fd56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10b4fd5d:;
  /* 10b4fd5d pop edi */
  EDI = (pop32());
  /* 10b4fd5e pop esi */
  ESI = (pop32());
  /* 10b4fd5f pop ebx */
  EBX = (pop32());
  /* 10b4fd60 pop ebp */
  EBP = (pop32());
  /* 10b4fd61 ret  */
  ESPCHK(0x10b4fcd0u, _esp0);
  ESP += 4; return;
}

