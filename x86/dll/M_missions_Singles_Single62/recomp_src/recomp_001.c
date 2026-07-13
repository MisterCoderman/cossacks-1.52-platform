#include "recomp.h"

/* __local_unwind2 @ 0x11a46efe (104 bytes, 33 insns) */
void f_11a46efe(void) {
  FTRACE(0x11a46efeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46efe push ebx */
  push32((uint32_t)(EBX));
  /* 11a46eff push esi */
  push32((uint32_t)(ESI));
  /* 11a46f00 push edi */
  push32((uint32_t)(EDI));
  /* 11a46f01 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a46f05 push eax */
  push32((uint32_t)(EAX));
  /* 11a46f06 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a46f08 push 0x11a46edc */
  push32((uint32_t)(0x11a46edcu));
  /* 11a46f0d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a46f14 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a46f1b:;
  /* 11a46f1b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a46f1f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a46f22 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a46f25 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46f28 je 0x11a46f58 */
  if (C.zf) goto L_11a46f58;
  /* 11a46f2a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46f2e je 0x11a46f58 */
  if (C.zf) goto L_11a46f58;
  /* 11a46f30 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a46f33 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a46f36 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a46f3a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a46f3d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46f42 jne 0x11a46f56 */
  if (!C.zf) goto L_11a46f56;
  /* 11a46f44 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a46f49 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a46f4d call 0x11a46f92 */
  push32(0x11a46f52u); f_11a46f92();
  /* 11a46f52 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a46f56u);
L_11a46f56:;
  /* 11a46f56 jmp 0x11a46f1b */
  goto L_11a46f1b;
L_11a46f58:;
  /* 11a46f58 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a46f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46f62 pop edi */
  EDI = (pop32());
  /* 11a46f63 pop esi */
  ESI = (pop32());
  /* 11a46f64 pop ebx */
  EBX = (pop32());
  /* 11a46f65 ret  */
  ESPCHK(0x11a46efeu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f92 @ 0x11a46f92 (24 bytes, 10 insns) */
void f_11a46f92(void) {
  FTRACE(0x11a46f92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46f92 push ebx */
  push32((uint32_t)(EBX));
  /* 11a46f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46f94 mov ebx, 0x11a4dcc0 */
  EBX = (0x11a4dcc0u);
  /* 11a46f99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46f9c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a46f9f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a46fa2 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a46fa5 pop ecx */
  ECX = (pop32());
  /* 11a46fa6 pop ebx */
  EBX = (pop32());
  /* 11a46fa7 ret 4 */
  ESPCHK(0x11a46f92u, _esp0);
  ESP += 8; return;
}

/* FUN_10007071 @ 0x11a47071 (27 bytes, 11 insns) */
void f_11a47071(void) {
  FTRACE(0x11a47071u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47071 push ebp */
  push32((uint32_t)(EBP));
  /* 11a47072 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47076 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a47078 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a4707b push eax */
  push32((uint32_t)(EAX));
  /* 11a4707c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a4707f push eax */
  push32((uint32_t)(EAX));
  /* 11a47080 call 0x11a46efe */
  push32(0x11a47085u); f_11a46efe();
  /* 11a47085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47088 pop ebp */
  EBP = (pop32());
  /* 11a47089 ret 4 */
  ESPCHK(0x11a47071u, _esp0);
  ESP += 8; return;
}

/* FUN_1000708c @ 0x11a4708c (289 bytes, 98 insns) */
void f_11a4708c(void) {
  FTRACE(0x11a4708cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4708c push ebp */
  push32((uint32_t)(EBP));
  /* 11a4708d mov ebp, esp */
  EBP = (ESP);
  /* 11a4708f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a47091 push 0x11a4a4f0 */
  push32((uint32_t)(0x11a4a4f0u));
  /* 11a47096 push 0x11a46fb4 */
  push32((uint32_t)(0x11a46fb4u));
  /* 11a4709b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a470a1 push eax */
  push32((uint32_t)(EAX));
  /* 11a470a2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a470a9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a470ac push ebx */
  push32((uint32_t)(EBX));
  /* 11a470ad push esi */
  push32((uint32_t)(ESI));
  /* 11a470ae push edi */
  push32((uint32_t)(EDI));
  /* 11a470af mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a470b2 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a470b6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a470b9 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11a470bc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a470bf ja 0x11a470d5 */
  if ((!C.cf&&!C.zf)) goto L_11a470d5;
  /* 11a470c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a470c3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a470c5 jne 0x11a470ca */
  if (!C.zf) goto L_11a470ca;
  /* 11a470c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a470c9 pop esi */
  ESI = (pop32());
L_11a470ca:;
  /* 11a470ca add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a470cd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a470d0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a470d3 jmp 0x11a470d7 */
  goto L_11a470d7;
L_11a470d5:;
  /* 11a470d5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a470d7:;
  /* 11a470d7 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a470da cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a470dd ja 0x11a4718b */
  if ((!C.cf&&!C.zf)) goto L_11a4718b;
  /* 11a470e3 mov eax, dword ptr [0x11a4fd68] */
  EAX = (r32((uint32_t)(0x11a4fd68)));
  /* 11a470e8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a470eb jne 0x11a4712e */
  if (!C.zf) goto L_11a4712e;
  /* 11a470ed mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a470f0 cmp edi, dword ptr [0x11a4fd60] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11a4fd60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a470f6 ja 0x11a47174 */
  if ((!C.cf&&!C.zf)) goto L_11a47174;
  /* 11a470f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a470fa call 0x11a46e46 */
  push32(0x11a470ffu); f_11a46e46();
  /* 11a470ff pop ecx */
  ECX = (pop32());
  /* 11a47100 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a47103 push edi */
  push32((uint32_t)(EDI));
  /* 11a47104 call 0x11a462d8 */
  push32(0x11a47109u); f_11a462d8();
  /* 11a47109 pop ecx */
  ECX = (pop32());
  /* 11a4710a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a4710d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a47111 call 0x11a47125 */
  push32(0x11a47116u); f_11a47125();
  /* 11a47116 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47119 je 0x11a47179 */
  if (C.zf) goto L_11a47179;
  /* 11a4711b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a4711e jmp 0x11a47168 */
  goto L_11a47168;
  /* 11a47120 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a47122 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a47125 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a47127 call 0x11a46ea7 */
  push32(0x11a4712cu); f_11a46ea7();
  /* 11a4712c pop ecx */
  ECX = (pop32());
  /* 11a4712d ret  */
  ESPCHK(0x11a4708cu, _esp0);
  ESP += 4; return;
L_11a4712e:;
  /* 11a4712e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47131 jne 0x11a47174 */
  if (!C.zf) goto L_11a47174;
  /* 11a47133 cmp esi, dword ptr [0x11a4dbfc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4dbfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47139 ja 0x11a47174 */
  if ((!C.cf&&!C.zf)) goto L_11a47174;
  /* 11a4713b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4713d call 0x11a46e46 */
  push32(0x11a47142u); f_11a46e46();
  /* 11a47142 pop ecx */
  ECX = (pop32());
  /* 11a47143 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a4714a mov eax, esi */
  EAX = (ESI);
  /* 11a4714c shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a4714f push eax */
  push32((uint32_t)(EAX));
  /* 11a47150 call 0x11a46a85 */
  push32(0x11a47155u); f_11a46a85();
  /* 11a47155 pop ecx */
  ECX = (pop32());
  /* 11a47156 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a47159 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a4715d call 0x11a471ae */
  push32(0x11a47162u); f_11a471ae();
  /* 11a47162 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47165 je 0x11a47179 */
  if (C.zf) goto L_11a47179;
  /* 11a47167 push esi */
  push32((uint32_t)(ESI));
L_11a47168:;
  /* 11a47168 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47169 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a4716c call 0x11a486a0 */
  push32(0x11a47171u); f_11a486a0();
  /* 11a47171 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a47174:;
  /* 11a47174 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47177 jne 0x11a471b7 */
  if (!C.zf) { jmp_ind(0x11a471b7u); return; }
L_11a47179:;
  /* 11a47179 push esi */
  push32((uint32_t)(ESI));
  /* 11a4717a push 8 */
  push32((uint32_t)(0x8u));
  /* 11a4717c push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a47182 call dword ptr [0x11a4a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a09c))), 0x11a47188u);
  /* 11a47188 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11a4718b:;
  /* 11a4718b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4718e jne 0x11a471b7 */
  if (!C.zf) { jmp_ind(0x11a471b7u); return; }
  /* 11a47190 cmp dword ptr [0x11a4f990], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4f990))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47196 je 0x11a471b7 */
  if (C.zf) { jmp_ind(0x11a471b7u); return; }
  /* 11a47198 push esi */
  push32((uint32_t)(ESI));
  /* 11a47199 call 0x11a477f2 */
  push32(0x11a4719eu); f_11a477f2();
  /* 11a4719e pop ecx */
  ECX = (pop32());
  /* 11a4719f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a471a1 jne 0x11a470d7 */
  if (!C.zf) goto L_11a470d7;
  /* 11a471a7 jmp 0x11a471ba */
  jmp_ind(0x11a471bau); return;
  /* 11a471a9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10007125 @ 0x11a47125 (9 bytes, 4 insns) */
void f_11a47125(void) {
  FTRACE(0x11a47125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47125 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a47127 call 0x11a46ea7 */
  push32(0x11a4712cu); f_11a46ea7();
  /* 11a4712c pop ecx */
  ECX = (pop32());
  /* 11a4712d ret  */
  ESPCHK(0x11a47125u, _esp0);
  ESP += 4; return;
}

/* FUN_100071ae @ 0x11a471ae (9 bytes, 4 insns) */
void f_11a471ae(void) {
  FTRACE(0x11a471aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a471ae push 9 */
  push32((uint32_t)(0x9u));
  /* 11a471b0 call 0x11a46ea7 */
  push32(0x11a471b5u); f_11a46ea7();
  /* 11a471b5 pop ecx */
  ECX = (pop32());
  /* 11a471b6 ret  */
  ESPCHK(0x11a471aeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000724a @ 0x11a4724a (291 bytes, 103 insns) */
void f_11a4724a(void) {
  FTRACE(0x11a4724au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4724a push ecx */
  push32((uint32_t)(ECX));
  /* 11a4724b push ecx */
  push32((uint32_t)(ECX));
  /* 11a4724c push ebx */
  push32((uint32_t)(EBX));
  /* 11a4724d push ebp */
  push32((uint32_t)(EBP));
  /* 11a4724e push esi */
  push32((uint32_t)(ESI));
  /* 11a4724f push edi */
  push32((uint32_t)(EDI));
  /* 11a47250 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a47252 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a47255 call 0x11a46e46 */
  push32(0x11a4725au); f_11a46e46();
  /* 11a4725a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a4725c pop ecx */
  ECX = (pop32());
  /* 11a4725d mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11a47261 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11a47265 mov ebp, 0x11a4fd80 */
  EBP = (0x11a4fd80u);
L_11a4726a:;
  /* 11a4726a mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 11a4726d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a4726f je 0x11a4730e */
  if (C.zf) goto L_11a4730e;
  /* 11a47275 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a4727b:;
  /* 11a4727b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4727d jae 0x11a472f3 */
  if (!C.cf) goto L_11a472f3;
  /* 11a4727f test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a47283 jne 0x11a472c9 */
  if (!C.zf) goto L_11a472c9;
  /* 11a47285 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47289 jne 0x11a472ae */
  if (!C.zf) goto L_11a472ae;
  /* 11a4728b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a4728d call 0x11a46e46 */
  push32(0x11a47292u); f_11a46e46();
  /* 11a47292 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47296 pop ecx */
  ECX = (pop32());
  /* 11a47297 jne 0x11a472a6 */
  if (!C.zf) goto L_11a472a6;
  /* 11a47299 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11a4729c push eax */
  push32((uint32_t)(EAX));
  /* 11a4729d call dword ptr [0x11a4a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b8))), 0x11a472a3u);
  /* 11a472a3 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11a472a6:;
  /* 11a472a6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a472a8 call 0x11a46ea7 */
  push32(0x11a472adu); f_11a46ea7();
  /* 11a472ad pop ecx */
  ECX = (pop32());
L_11a472ae:;
  /* 11a472ae lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 11a472b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a472b2 call dword ptr [0x11a4a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a088))), 0x11a472b8u);
  /* 11a472b8 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a472bc je 0x11a472d6 */
  if (C.zf) goto L_11a472d6;
  /* 11a472be push ebx */
  push32((uint32_t)(EBX));
  /* 11a472bf call dword ptr [0x11a4a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a08c))), 0x11a472c5u);
  /* 11a472c5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a472c9:;
  /* 11a472c9 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 11a472cc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a472cf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a472d4 jmp 0x11a4727b */
  goto L_11a4727b;
L_11a472d6:;
  /* 11a472d6 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a472d9 mov eax, esi */
  EAX = (ESI);
  /* 11a472db sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a472de push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11a472e0 pop ecx */
  ECX = (pop32());
  /* 11a472e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a472e2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a472e4 mov edi, eax */
  EDI = (EAX);
  /* 11a472e6 add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a472ea cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a472ed jne 0x11a4735c */
  if (!C.zf) goto L_11a4735c;
  /* 11a472ef mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a472f3:;
  /* 11a472f3 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a472f8 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a472fb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a472fc cmp ebp, 0x11a4fe80 */
  { uint32_t _a=(EBP),_b=(0x11a4fe80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47302 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11a47306 jl 0x11a4726a */
  if ((C.sf!=C.of)) goto L_11a4726a;
  /* 11a4730c jmp 0x11a4735c */
  goto L_11a4735c;
L_11a4730e:;
  /* 11a4730e mov esi, 0x480 */
  ESI = (0x480u);
  /* 11a47313 push esi */
  push32((uint32_t)(ESI));
  /* 11a47314 call 0x11a44d75 */
  push32(0x11a47319u); f_11a44d75();
  /* 11a47319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4731b pop ecx */
  ECX = (pop32());
  /* 11a4731c je 0x11a4735c */
  if (C.zf) goto L_11a4735c;
  /* 11a4731e add dword ptr [0x11a4fe80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a4fe80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a4fe80), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a47325 lea ecx, [ebx*4 + 0x11a4fd80] */
  ECX = ((uint32_t)(EBX*4 + 0x11a4fd80));
  /* 11a4732c lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 11a47332 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a47334:;
  /* 11a47334 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47336 jae 0x11a47350 */
  if (!C.cf) goto L_11a47350;
  /* 11a47338 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a4733c or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a4733f and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a47343 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a47347 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a47349 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4734c add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4734e jmp 0x11a47334 */
  goto L_11a47334;
L_11a47350:;
  /* 11a47350 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 11a47353 mov edi, ebx */
  EDI = (EBX);
  /* 11a47355 push edi */
  push32((uint32_t)(EDI));
  /* 11a47356 call 0x11a474aa */
  push32(0x11a4735bu); f_11a474aa();
  /* 11a4735b pop ecx */
  ECX = (pop32());
L_11a4735c:;
  /* 11a4735c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a4735e call 0x11a46ea7 */
  push32(0x11a47363u); f_11a46ea7();
  /* 11a47363 pop ecx */
  ECX = (pop32());
  /* 11a47364 mov eax, edi */
  EAX = (EDI);
  /* 11a47366 pop edi */
  EDI = (pop32());
  /* 11a47367 pop esi */
  ESI = (pop32());
  /* 11a47368 pop ebp */
  EBP = (pop32());
  /* 11a47369 pop ebx */
  EBX = (pop32());
  /* 11a4736a pop ecx */
  ECX = (pop32());
  /* 11a4736b pop ecx */
  ECX = (pop32());
  /* 11a4736c ret  */
  ESPCHK(0x11a4724au, _esp0);
  ESP += 4; return;
}

/* FUN_1000736d @ 0x11a4736d (124 bytes, 47 insns) */
void f_11a4736d(void) {
  FTRACE(0x11a4736du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4736d mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47371 push esi */
  push32((uint32_t)(ESI));
  /* 11a47372 cmp ecx, dword ptr [0x11a4fe80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47378 push edi */
  push32((uint32_t)(EDI));
  /* 11a47379 jae 0x11a473d0 */
  if (!C.cf) goto L_11a473d0;
  /* 11a4737b mov eax, ecx */
  EAX = (ECX);
  /* 11a4737d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a47380 lea edi, [eax*4 + 0x11a4fd80] */
  EDI = ((uint32_t)(EAX*4 + 0x11a4fd80));
  /* 11a47387 mov eax, ecx */
  EAX = (ECX);
  /* 11a47389 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4738c lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a4738f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a47391 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a47394 cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47398 jne 0x11a473d0 */
  if (!C.zf) goto L_11a473d0;
  /* 11a4739a cmp dword ptr [0x11a4f7d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a473a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a473a2 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a473a6 jne 0x11a473c6 */
  if (!C.zf) goto L_11a473c6;
  /* 11a473a8 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a473ab je 0x11a473bd */
  if (C.zf) goto L_11a473bd;
  /* 11a473ad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a473ae je 0x11a473b8 */
  if (C.zf) goto L_11a473b8;
  /* 11a473b0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a473b1 jne 0x11a473c6 */
  if (!C.zf) goto L_11a473c6;
  /* 11a473b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a473b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a473b6 jmp 0x11a473c0 */
  goto L_11a473c0;
L_11a473b8:;
  /* 11a473b8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a473b9 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a473bb jmp 0x11a473c0 */
  goto L_11a473c0;
L_11a473bd:;
  /* 11a473bd push ebx */
  push32((uint32_t)(EBX));
  /* 11a473be push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11a473c0:;
  /* 11a473c0 call dword ptr [0x11a4a040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a040))), 0x11a473c6u);
L_11a473c6:;
  /* 11a473c6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a473c8 mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 11a473cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a473cd pop ebx */
  EBX = (pop32());
  /* 11a473ce jmp 0x11a473e6 */
  goto L_11a473e6;
L_11a473d0:;
  /* 11a473d0 call 0x11a44f22 */
  push32(0x11a473d5u); f_11a44f22();
  /* 11a473d5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a473db call 0x11a44f2b */
  push32(0x11a473e0u); f_11a44f2b();
  /* 11a473e0 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a473e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a473e6:;
  /* 11a473e6 pop edi */
  EDI = (pop32());
  /* 11a473e7 pop esi */
  ESI = (pop32());
  /* 11a473e8 ret  */
  ESPCHK(0x11a4736du, _esp0);
  ESP += 4; return;
}

/* FUN_100073e9 @ 0x11a473e9 (127 bytes, 48 insns) */
void f_11a473e9(void) {
  FTRACE(0x11a473e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a473e9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a473ed push esi */
  push32((uint32_t)(ESI));
  /* 11a473ee cmp ecx, dword ptr [0x11a4fe80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a473f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a473f5 jae 0x11a4744f */
  if (!C.cf) goto L_11a4744f;
  /* 11a473f7 mov eax, ecx */
  EAX = (ECX);
  /* 11a473f9 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a473fc lea edi, [eax*4 + 0x11a4fd80] */
  EDI = ((uint32_t)(EAX*4 + 0x11a4fd80));
  /* 11a47403 mov eax, ecx */
  EAX = (ECX);
  /* 11a47405 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47408 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a4740b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a4740d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a47410 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47412 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a47416 je 0x11a4744f */
  if (C.zf) goto L_11a4744f;
  /* 11a47418 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4741b je 0x11a4744f */
  if (C.zf) goto L_11a4744f;
  /* 11a4741d cmp dword ptr [0x11a4f7d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47424 jne 0x11a47445 */
  if (!C.zf) goto L_11a47445;
  /* 11a47426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47428 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4742a je 0x11a4743c */
  if (C.zf) goto L_11a4743c;
  /* 11a4742c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a4742d je 0x11a47437 */
  if (C.zf) goto L_11a47437;
  /* 11a4742f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a47430 jne 0x11a47445 */
  if (!C.zf) goto L_11a47445;
  /* 11a47432 push eax */
  push32((uint32_t)(EAX));
  /* 11a47433 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a47435 jmp 0x11a4743f */
  goto L_11a4743f;
L_11a47437:;
  /* 11a47437 push eax */
  push32((uint32_t)(EAX));
  /* 11a47438 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a4743a jmp 0x11a4743f */
  goto L_11a4743f;
L_11a4743c:;
  /* 11a4743c push eax */
  push32((uint32_t)(EAX));
  /* 11a4743d push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11a4743f:;
  /* 11a4743f call dword ptr [0x11a4a040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a040))), 0x11a47445u);
L_11a47445:;
  /* 11a47445 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a47447 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11a4744b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4744d jmp 0x11a47465 */
  goto L_11a47465;
L_11a4744f:;
  /* 11a4744f call 0x11a44f22 */
  push32(0x11a47454u); f_11a44f22();
  /* 11a47454 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a4745a call 0x11a44f2b */
  push32(0x11a4745fu); f_11a44f2b();
  /* 11a4745f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a47462 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a47465:;
  /* 11a47465 pop edi */
  EDI = (pop32());
  /* 11a47466 pop esi */
  ESI = (pop32());
  /* 11a47467 ret  */
  ESPCHK(0x11a473e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007468 @ 0x11a47468 (66 bytes, 19 insns) */
void f_11a47468(void) {
  FTRACE(0x11a47468u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47468 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a4746c cmp eax, dword ptr [0x11a4fe80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47472 jae 0x11a47493 */
  if (!C.cf) goto L_11a47493;
  /* 11a47474 mov ecx, eax */
  ECX = (EAX);
  /* 11a47476 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47479 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a4747c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a4747f mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a47486 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a4748b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a4748e je 0x11a47493 */
  if (C.zf) goto L_11a47493;
  /* 11a47490 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11a47492 ret  */
  ESPCHK(0x11a47468u, _esp0);
  ESP += 4; return;
L_11a47493:;
  /* 11a47493 call 0x11a44f22 */
  push32(0x11a47498u); f_11a44f22();
  /* 11a47498 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a4749e call 0x11a44f2b */
  push32(0x11a474a3u); f_11a44f2b();
  /* 11a474a3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a474a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a474a9 ret  */
  ESPCHK(0x11a47468u, _esp0);
  ESP += 4; return;
}

/* FUN_100074aa @ 0x11a474aa (95 bytes, 34 insns) */
void f_11a474aa(void) {
  FTRACE(0x11a474aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a474aa mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a474ae push ebx */
  push32((uint32_t)(EBX));
  /* 11a474af mov ecx, eax */
  ECX = (EAX);
  /* 11a474b1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a474b4 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a474b7 push esi */
  push32((uint32_t)(ESI));
  /* 11a474b8 push edi */
  push32((uint32_t)(EDI));
  /* 11a474b9 mov esi, dword ptr [ecx*4 + 0x11a4fd80] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a474c0 lea ebx, [ecx*4 + 0x11a4fd80] */
  EBX = ((uint32_t)(ECX*4 + 0x11a4fd80));
  /* 11a474c7 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11a474ca shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11a474cd add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a474cf cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a474d3 jne 0x11a474f8 */
  if (!C.zf) goto L_11a474f8;
  /* 11a474d5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a474d7 call 0x11a46e46 */
  push32(0x11a474dcu); f_11a46e46();
  /* 11a474dc cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a474e0 pop ecx */
  ECX = (pop32());
  /* 11a474e1 jne 0x11a474f0 */
  if (!C.zf) goto L_11a474f0;
  /* 11a474e3 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11a474e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a474e7 call dword ptr [0x11a4a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b8))), 0x11a474edu);
  /* 11a474ed inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11a474f0:;
  /* 11a474f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a474f2 call 0x11a46ea7 */
  push32(0x11a474f7u); f_11a46ea7();
  /* 11a474f7 pop ecx */
  ECX = (pop32());
L_11a474f8:;
  /* 11a474f8 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a474fa lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11a474fe push eax */
  push32((uint32_t)(EAX));
  /* 11a474ff call dword ptr [0x11a4a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a088))), 0x11a47505u);
  /* 11a47505 pop edi */
  EDI = (pop32());
  /* 11a47506 pop esi */
  ESI = (pop32());
  /* 11a47507 pop ebx */
  EBX = (pop32());
  /* 11a47508 ret  */
  ESPCHK(0x11a474aau, _esp0);
  ESP += 4; return;
}

/* FUN_10007509 @ 0x11a47509 (34 bytes, 10 insns) */
void f_11a47509(void) {
  FTRACE(0x11a47509u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47509 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a4750d mov ecx, eax */
  ECX = (EAX);
  /* 11a4750f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47512 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a47515 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a47518 mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a4751f lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11a47523 push eax */
  push32((uint32_t)(EAX));
  /* 11a47524 call dword ptr [0x11a4a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a08c))), 0x11a4752au);
  /* 11a4752a ret  */
  ESPCHK(0x11a47509u, _esp0);
  ESP += 4; return;
}

/* FUN_1000752b @ 0x11a4752b (147 bytes, 52 insns) */
void f_11a4752b(void) {
  FTRACE(0x11a4752bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4752b push ebx */
  push32((uint32_t)(EBX));
  /* 11a4752c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47530 cmp ebx, dword ptr [0x11a4fe80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47536 push esi */
  push32((uint32_t)(ESI));
  /* 11a47537 push edi */
  push32((uint32_t)(EDI));
  /* 11a47538 jae 0x11a475ac */
  if (!C.cf) goto L_11a475ac;
  /* 11a4753a mov eax, ebx */
  EAX = (EBX);
  /* 11a4753c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a4753f lea edi, [eax*4 + 0x11a4fd80] */
  EDI = ((uint32_t)(EAX*4 + 0x11a4fd80));
  /* 11a47546 mov eax, ebx */
  EAX = (EBX);
  /* 11a47548 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4754b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a4754e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a47550 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a47553 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a47558 je 0x11a475ac */
  if (C.zf) goto L_11a475ac;
  /* 11a4755a push ebx */
  push32((uint32_t)(EBX));
  /* 11a4755b call 0x11a474aa */
  push32(0x11a47560u); f_11a474aa();
  /* 11a47560 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a47562 pop ecx */
  ECX = (pop32());
  /* 11a47563 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a47568 je 0x11a47593 */
  if (C.zf) goto L_11a47593;
  /* 11a4756a push ebx */
  push32((uint32_t)(EBX));
  /* 11a4756b call 0x11a47468 */
  push32(0x11a47570u); f_11a47468();
  /* 11a47570 pop ecx */
  ECX = (pop32());
  /* 11a47571 push eax */
  push32((uint32_t)(EAX));
  /* 11a47572 call dword ptr [0x11a4a048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a048))), 0x11a47578u);
  /* 11a47578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4757a jne 0x11a47586 */
  if (!C.zf) goto L_11a47586;
  /* 11a4757c call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a47582u);
  /* 11a47582 mov esi, eax */
  ESI = (EAX);
  /* 11a47584 jmp 0x11a47588 */
  goto L_11a47588;
L_11a47586:;
  /* 11a47586 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a47588:;
  /* 11a47588 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a4758a je 0x11a475a1 */
  if (C.zf) goto L_11a475a1;
  /* 11a4758c call 0x11a44f2b */
  push32(0x11a47591u); f_11a44f2b();
  /* 11a47591 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11a47593:;
  /* 11a47593 call 0x11a44f22 */
  push32(0x11a47598u); f_11a44f22();
  /* 11a47598 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a4759e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a475a1:;
  /* 11a475a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a475a2 call 0x11a47509 */
  push32(0x11a475a7u); f_11a47509();
  /* 11a475a7 pop ecx */
  ECX = (pop32());
  /* 11a475a8 mov eax, esi */
  EAX = (ESI);
  /* 11a475aa jmp 0x11a475ba */
  goto L_11a475ba;
L_11a475ac:;
  /* 11a475ac call 0x11a44f22 */
  push32(0x11a475b1u); f_11a44f22();
  /* 11a475b1 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a475b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a475ba:;
  /* 11a475ba pop edi */
  EDI = (pop32());
  /* 11a475bb pop esi */
  ESI = (pop32());
  /* 11a475bc pop ebx */
  EBX = (pop32());
  /* 11a475bd ret  */
  ESPCHK(0x11a4752bu, _esp0);
  ESP += 4; return;
}

/* FUN_100075be @ 0x11a475be (101 bytes, 34 insns) */
void f_11a475be(void) {
  FTRACE(0x11a475beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a475be push esi */
  push32((uint32_t)(ESI));
  /* 11a475bf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a475c3 cmp esi, dword ptr [0x11a4fe80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a475c9 jae 0x11a4760b */
  if (!C.cf) goto L_11a4760b;
  /* 11a475cb mov ecx, esi */
  ECX = (ESI);
  /* 11a475cd mov eax, esi */
  EAX = (ESI);
  /* 11a475cf sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a475d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a475d5 mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a475dc lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a475df test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a475e4 je 0x11a4760b */
  if (C.zf) goto L_11a4760b;
  /* 11a475e6 push edi */
  push32((uint32_t)(EDI));
  /* 11a475e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a475e8 call 0x11a474aa */
  push32(0x11a475edu); f_11a474aa();
  /* 11a475ed push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a475f1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a475f5 push esi */
  push32((uint32_t)(ESI));
  /* 11a475f6 call 0x11a47623 */
  push32(0x11a475fbu); f_11a47623();
  /* 11a475fb push esi */
  push32((uint32_t)(ESI));
  /* 11a475fc mov edi, eax */
  EDI = (EAX);
  /* 11a475fe call 0x11a47509 */
  push32(0x11a47603u); f_11a47509();
  /* 11a47603 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47606 mov eax, edi */
  EAX = (EDI);
  /* 11a47608 pop edi */
  EDI = (pop32());
  /* 11a47609 pop esi */
  ESI = (pop32());
  /* 11a4760a ret  */
  ESPCHK(0x11a475beu, _esp0);
  ESP += 4; return;
L_11a4760b:;
  /* 11a4760b call 0x11a44f22 */
  push32(0x11a47610u); f_11a44f22();
  /* 11a47610 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a47616 call 0x11a44f2b */
  push32(0x11a4761bu); f_11a44f2b();
  /* 11a4761b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a4761e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47621 pop esi */
  ESI = (pop32());
  /* 11a47622 ret  */
  ESPCHK(0x11a475beu, _esp0);
  ESP += 4; return;
}

/* FUN_10007623 @ 0x11a47623 (395 bytes, 135 insns) */
void f_11a47623(void) {
  FTRACE(0x11a47623u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47623 push ebp */
  push32((uint32_t)(EBP));
  /* 11a47624 mov ebp, esp */
  EBP = (ESP);
  /* 11a47626 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4762c push ebx */
  push32((uint32_t)(EBX));
  /* 11a4762d push esi */
  push32((uint32_t)(ESI));
  /* 11a4762e push edi */
  push32((uint32_t)(EDI));
  /* 11a4762f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a47631 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47634 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11a47637 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11a4763a jne 0x11a47643 */
  if (!C.zf) goto L_11a47643;
L_11a4763c:;
  /* 11a4763c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4763e jmp 0x11a477a9 */
  goto L_11a477a9;
L_11a47643:;
  /* 11a47643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a47646 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a47649 lea ebx, [eax*4 + 0x11a4fd80] */
  EBX = ((uint32_t)(EAX*4 + 0x11a4fd80));
  /* 11a47650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a47653 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47656 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a47659 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a4765b shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a4765e test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11a47663 je 0x11a47673 */
  if (C.zf) goto L_11a47673;
  /* 11a47665 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a47667 push edi */
  push32((uint32_t)(EDI));
  /* 11a47668 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4766b call 0x11a451a9 */
  push32(0x11a47670u); f_11a451a9();
  /* 11a47670 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a47673:;
  /* 11a47673 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a47675 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47677 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11a4767b je 0x11a47742 */
  if (C.zf) goto L_11a47742;
  /* 11a47681 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a47684 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47687 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a4768a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11a4768d jbe 0x11a4777d */
  if ((C.cf||C.zf)) goto L_11a4777d;
L_11a47693:;
  /* 11a47693 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11a47699:;
  /* 11a47699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a4769c sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4769f cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a476a2 jae 0x11a476cd */
  if (!C.cf) goto L_11a476cd;
  /* 11a476a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a476a7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a476aa mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11a476ac cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a476af jne 0x11a476b8 */
  if (!C.zf) goto L_11a476b8;
  /* 11a476b1 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11a476b4 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11a476b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a476b8:;
  /* 11a476b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11a476ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a476bb mov ecx, eax */
  ECX = (EAX);
  /* 11a476bd lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11a476c3 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a476c5 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a476cb jl 0x11a47699 */
  if ((C.sf!=C.of)) goto L_11a47699;
L_11a476cd:;
  /* 11a476cd mov edi, eax */
  EDI = (EAX);
  /* 11a476cf lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11a476d5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a476d7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a476da push 0 */
  push32((uint32_t)(0x0u));
  /* 11a476dc push eax */
  push32((uint32_t)(EAX));
  /* 11a476dd lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11a476e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a476e4 push eax */
  push32((uint32_t)(EAX));
  /* 11a476e5 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a476e7 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11a476ea call dword ptr [0x11a4a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a050))), 0x11a476f0u);
  /* 11a476f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a476f2 je 0x11a47737 */
  if (C.zf) goto L_11a47737;
  /* 11a476f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a476f7 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a476fa cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a476fc jl 0x11a47709 */
  if ((C.sf!=C.of)) goto L_11a47709;
  /* 11a476fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a47701 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47704 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47707 jb 0x11a47693 */
  if (C.cf) goto L_11a47693;
L_11a47709:;
  /* 11a47709 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a4770b:;
  /* 11a4770b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a4770e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47710 jne 0x11a477a6 */
  if (!C.zf) goto L_11a477a6;
  /* 11a47716 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47719 je 0x11a4777d */
  if (C.zf) goto L_11a4777d;
  /* 11a4771b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a4771d pop esi */
  ESI = (pop32());
  /* 11a4771e cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47721 jne 0x11a4776f */
  if (!C.zf) goto L_11a4776f;
  /* 11a47723 call 0x11a44f22 */
  push32(0x11a47728u); f_11a44f22();
  /* 11a47728 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a4772e call 0x11a44f2b */
  push32(0x11a47733u); f_11a44f2b();
  /* 11a47733 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11a47735 jmp 0x11a47778 */
  goto L_11a47778;
L_11a47737:;
  /* 11a47737 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a4773du);
  /* 11a4773d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a47740 jmp 0x11a47709 */
  goto L_11a47709;
L_11a47742:;
  /* 11a47742 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a47745 push edi */
  push32((uint32_t)(EDI));
  /* 11a47746 push ecx */
  push32((uint32_t)(ECX));
  /* 11a47747 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a4774a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a4774d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11a4774f call dword ptr [0x11a4a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a050))), 0x11a47755u);
  /* 11a47755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a47757 je 0x11a47764 */
  if (C.zf) goto L_11a47764;
  /* 11a47759 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a4775c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11a4775f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a47762 jmp 0x11a4770b */
  goto L_11a4770b;
L_11a47764:;
  /* 11a47764 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a4776au);
  /* 11a4776a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a4776d jmp 0x11a4770b */
  goto L_11a4770b;
L_11a4776f:;
  /* 11a4776f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a47772 call 0x11a44eaf */
  push32(0x11a47777u); f_11a44eaf();
  /* 11a47777 pop ecx */
  ECX = (pop32());
L_11a47778:;
  /* 11a47778 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4777b jmp 0x11a477a9 */
  goto L_11a477a9;
L_11a4777d:;
  /* 11a4777d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a4777f test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11a47784 je 0x11a47792 */
  if (C.zf) goto L_11a47792;
  /* 11a47786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a47789 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4778c je 0x11a4763c */
  if (C.zf) goto L_11a4763c;
L_11a47792:;
  /* 11a47792 call 0x11a44f22 */
  push32(0x11a47797u); f_11a44f22();
  /* 11a47797 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11a4779d call 0x11a44f2b */
  push32(0x11a477a2u); f_11a44f2b();
  /* 11a477a2 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11a477a4 jmp 0x11a47778 */
  goto L_11a47778;
L_11a477a6:;
  /* 11a477a6 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a477a9:;
  /* 11a477a9 pop edi */
  EDI = (pop32());
  /* 11a477aa pop esi */
  ESI = (pop32());
  /* 11a477ab pop ebx */
  EBX = (pop32());
  /* 11a477ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a477ad ret  */
  ESPCHK(0x11a47623u, _esp0);
  ESP += 4; return;
}

/* FUN_100077ae @ 0x11a477ae (68 bytes, 19 insns) */
void f_11a477ae(void) {
  FTRACE(0x11a477aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a477ae inc dword ptr [0x11a4f7d4] */
  { uint32_t _r=(r32((uint32_t)(0x11a4f7d4)))+1; w32((uint32_t)(0x11a4f7d4), (_r)); fl_inc(_r,32); }
  /* 11a477b4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a477b9 call 0x11a44d75 */
  push32(0x11a477beu); f_11a44d75();
  /* 11a477be pop ecx */
  ECX = (pop32());
  /* 11a477bf mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a477c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a477c5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a477c8 je 0x11a477d7 */
  if (C.zf) goto L_11a477d7;
  /* 11a477ca or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a477ce mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 11a477d5 jmp 0x11a477e8 */
  goto L_11a477e8;
L_11a477d7:;
  /* 11a477d7 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a477db lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 11a477de mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a477e1 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_11a477e8:;
  /* 11a477e8 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a477eb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a477ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a477f1 ret  */
  ESPCHK(0x11a477aeu, _esp0);
  ESP += 4; return;
}

/* FUN_100077f2 @ 0x11a477f2 (27 bytes, 13 insns) */
void f_11a477f2(void) {
  FTRACE(0x11a477f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a477f2 mov eax, dword ptr [0x11a4f994] */
  EAX = (r32((uint32_t)(0x11a4f994)));
  /* 11a477f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a477f9 je 0x11a4780a */
  if (C.zf) goto L_11a4780a;
  /* 11a477fb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a477ff call eax */
  call_ind((uint32_t)(EAX), 0x11a47801u);
  /* 11a47801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a47803 pop ecx */
  ECX = (pop32());
  /* 11a47804 je 0x11a4780a */
  if (C.zf) goto L_11a4780a;
  /* 11a47806 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a47808 pop eax */
  EAX = (pop32());
  /* 11a47809 ret  */
  ESPCHK(0x11a477f2u, _esp0);
  ESP += 4; return;
L_11a4780a:;
  /* 11a4780a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4780c ret  */
  ESPCHK(0x11a477f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000780d @ 0x11a4780d (719 bytes, 241 insns) */
void f_11a4780d(void) {
  FTRACE(0x11a4780du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4780d push ebp */
  push32((uint32_t)(EBP));
  /* 11a4780e mov ebp, esp */
  EBP = (ESP);
  /* 11a47810 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47813 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a47816 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47817 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a47819 push esi */
  push32((uint32_t)(ESI));
  /* 11a4781a test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a4781d push edi */
  push32((uint32_t)(EDI));
  /* 11a4781e mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 11a47825 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 11a47828 je 0x11a47833 */
  if (C.zf) goto L_11a47833;
  /* 11a4782a mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a4782d mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 11a47831 jmp 0x11a4783e */
  goto L_11a4783e;
L_11a47833:;
  /* 11a47833 and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 11a47837 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11a4783e:;
  /* 11a4783e mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 11a47843 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 11a47845 jne 0x11a47858 */
  if (!C.zf) goto L_11a47858;
  /* 11a47847 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 11a4784a jne 0x11a47854 */
  if (!C.zf) goto L_11a47854;
  /* 11a4784c cmp dword ptr [0x11a4f9ac], eax */
  { uint32_t _a=(r32((uint32_t)(0x11a4f9ac))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47852 je 0x11a47858 */
  if (C.zf) goto L_11a47858;
L_11a47854:;
  /* 11a47854 or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_11a47858:;
  /* 11a47858 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a4785a mov eax, ecx */
  EAX = (ECX);
  /* 11a4785c pop esi */
  ESI = (pop32());
  /* 11a4785d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a4785f sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47861 je 0x11a4787f */
  if (C.zf) goto L_11a4787f;
  /* 11a47863 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a47864 je 0x11a47876 */
  if (C.zf) goto L_11a47876;
  /* 11a47866 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a47867 jne 0x11a47911 */
  if (!C.zf) goto L_11a47911;
  /* 11a4786d mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 11a47874 jmp 0x11a47886 */
  goto L_11a47886;
L_11a47876:;
  /* 11a47876 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 11a4787d jmp 0x11a47886 */
  goto L_11a47886;
L_11a4787f:;
  /* 11a4787f mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_11a47886:;
  /* 11a47886 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a47889 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4788c je 0x11a478b4 */
  if (C.zf) goto L_11a478b4;
  /* 11a4788e cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47891 je 0x11a478ab */
  if (C.zf) goto L_11a478ab;
  /* 11a47893 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47896 je 0x11a478a2 */
  if (C.zf) goto L_11a478a2;
  /* 11a47898 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4789b jne 0x11a47911 */
  if (!C.zf) goto L_11a47911;
  /* 11a4789d mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 11a478a0 jmp 0x11a478b7 */
  goto L_11a478b7;
L_11a478a2:;
  /* 11a478a2 mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 11a478a9 jmp 0x11a478b7 */
  goto L_11a478b7;
L_11a478ab:;
  /* 11a478ab mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11a478b2 jmp 0x11a478b7 */
  goto L_11a478b7;
L_11a478b4:;
  /* 11a478b4 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_11a478b7:;
  /* 11a478b7 mov edx, 0x700 */
  EDX = (0x700u);
  /* 11a478bc mov eax, 0x400 */
  EAX = (0x400u);
  /* 11a478c1 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a478c3 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11a478c8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a478ca jg 0x11a478fd */
  if ((!C.zf&&C.sf==C.of)) goto L_11a478fd;
  /* 11a478cc je 0x11a478f8 */
  if (C.zf) goto L_11a478f8;
  /* 11a478ce cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a478d0 je 0x11a478f8 */
  if (C.zf) goto L_11a478f8;
  /* 11a478d2 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a478d4 je 0x11a478ef */
  if (C.zf) goto L_11a478ef;
  /* 11a478d6 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a478dc je 0x11a4792b */
  if (C.zf) goto L_11a4792b;
  /* 11a478de cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a478e4 jne 0x11a47911 */
  if (!C.zf) goto L_11a47911;
  /* 11a478e6 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11a478ed jmp 0x11a4793b */
  goto L_11a4793b;
L_11a478ef:;
  /* 11a478ef mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 11a478f6 jmp 0x11a4793b */
  goto L_11a4793b;
L_11a478f8:;
  /* 11a478f8 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11a478fb jmp 0x11a4793b */
  goto L_11a4793b;
L_11a478fd:;
  /* 11a478fd cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47903 je 0x11a47934 */
  if (C.zf) goto L_11a47934;
  /* 11a47905 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4790b je 0x11a4792b */
  if (C.zf) goto L_11a4792b;
  /* 11a4790d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4790f je 0x11a47934 */
  if (C.zf) goto L_11a47934;
L_11a47911:;
  /* 11a47911 call 0x11a44f22 */
  push32(0x11a47916u); f_11a44f22();
  /* 11a47916 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a4791c call 0x11a44f2b */
  push32(0x11a47921u); f_11a44f2b();
  /* 11a47921 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11a47923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47926 jmp 0x11a47ad7 */
  goto L_11a47ad7;
L_11a4792b:;
  /* 11a4792b mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 11a47932 jmp 0x11a4793b */
  goto L_11a4793b;
L_11a47934:;
  /* 11a47934 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a4793b:;
  /* 11a4793b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a4793e mov esi, 0x80 */
  ESI = (0x80u);
  /* 11a47943 test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 11a47945 je 0x11a4795a */
  if (C.zf) goto L_11a4795a;
  /* 11a47947 mov ecx, dword ptr [0x11a4f7d8] */
  ECX = (r32((uint32_t)(0x11a4f7d8)));
  /* 11a4794d not ecx */
  ECX = (~(ECX));
  /* 11a4794f and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 11a47952 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a47955 jne 0x11a4795a */
  if (!C.zf) goto L_11a4795a;
  /* 11a47957 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a47959 pop esi */
  ESI = (pop32());
L_11a4795a:;
  /* 11a4795a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11a4795c je 0x11a47968 */
  if (C.zf) goto L_11a47968;
  /* 11a4795e or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a47964 or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_11a47968:;
  /* 11a47968 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 11a4796b je 0x11a4796f */
  if (C.zf) goto L_11a4796f;
  /* 11a4796d or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_11a4796f:;
  /* 11a4796f test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 11a47971 je 0x11a4797b */
  if (C.zf) goto L_11a4797b;
  /* 11a47973 or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a47979 jmp 0x11a47985 */
  goto L_11a47985;
L_11a4797b:;
  /* 11a4797b test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 11a4797d je 0x11a47985 */
  if (C.zf) goto L_11a47985;
  /* 11a4797f or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_11a47985:;
  /* 11a47985 call 0x11a4724a */
  push32(0x11a4798au); f_11a4724a();
  /* 11a4798a mov ebx, eax */
  EBX = (EAX);
  /* 11a4798c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a4798f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47991 jne 0x11a479ad */
  if (!C.zf) goto L_11a479ad;
  /* 11a47993 call 0x11a44f22 */
  push32(0x11a47998u); f_11a44f22();
  /* 11a47998 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11a4799e call 0x11a44f2b */
  push32(0x11a479a3u); f_11a44f2b();
  /* 11a479a3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a479a6 mov eax, edi */
  EAX = (EDI);
  /* 11a479a8 jmp 0x11a47ad7 */
  goto L_11a47ad7;
L_11a479ad:;
  /* 11a479ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11a479af push esi */
  push32((uint32_t)(ESI));
  /* 11a479b0 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11a479b3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a479b6 push eax */
  push32((uint32_t)(EAX));
  /* 11a479b7 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11a479ba push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11a479bd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a479c0 call dword ptr [0x11a4a038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a038))), 0x11a479c6u);
  /* 11a479c6 mov esi, eax */
  ESI = (EAX);
  /* 11a479c8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a479ca jne 0x11a479e0 */
  if (!C.zf) goto L_11a479e0;
L_11a479cc:;
  /* 11a479cc call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a479d2u);
  /* 11a479d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a479d3 call 0x11a44eaf */
  push32(0x11a479d8u); f_11a44eaf();
  /* 11a479d8 pop ecx */
  ECX = (pop32());
  /* 11a479d9 mov esi, edi */
  ESI = (EDI);
  /* 11a479db jmp 0x11a47ace */
  goto L_11a47ace;
L_11a479e0:;
  /* 11a479e0 push esi */
  push32((uint32_t)(ESI));
  /* 11a479e1 call dword ptr [0x11a4a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0a8))), 0x11a479e7u);
  /* 11a479e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a479e9 jne 0x11a479f4 */
  if (!C.zf) goto L_11a479f4;
  /* 11a479eb push esi */
  push32((uint32_t)(ESI));
  /* 11a479ec call dword ptr [0x11a4a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a094))), 0x11a479f2u);
  /* 11a479f2 jmp 0x11a479cc */
  goto L_11a479cc;
L_11a479f4:;
  /* 11a479f4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a479f7 jne 0x11a479ff */
  if (!C.zf) goto L_11a479ff;
  /* 11a479f9 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 11a479fd jmp 0x11a47a08 */
  goto L_11a47a08;
L_11a479ff:;
  /* 11a479ff cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47a02 jne 0x11a47a08 */
  if (!C.zf) goto L_11a47a08;
  /* 11a47a04 or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_11a47a08:;
  /* 11a47a08 push esi */
  push32((uint32_t)(ESI));
  /* 11a47a09 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47a0a call 0x11a4736d */
  push32(0x11a47a0fu); f_11a4736d();
  /* 11a47a0f mov eax, ebx */
  EAX = (EBX);
  /* 11a47a11 pop ecx */
  ECX = (pop32());
  /* 11a47a12 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a47a15 pop ecx */
  ECX = (pop32());
  /* 11a47a16 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 11a47a19 lea edi, [eax*4 + 0x11a4fd80] */
  EDI = ((uint32_t)(EAX*4 + 0x11a4fd80));
  /* 11a47a20 mov eax, ebx */
  EAX = (EBX);
  /* 11a47a22 or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11a47a25 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47a28 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a47a2b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a47a2e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a47a30 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a47a33 and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 11a47a37 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 11a47a3b jne 0x11a47ab5 */
  if (!C.zf) goto L_11a47ab5;
  /* 11a47a3d test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a47a40 je 0x11a47ab5 */
  if (C.zf) goto L_11a47ab5;
  /* 11a47a42 test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 11a47a46 je 0x11a47ab5 */
  if (C.zf) goto L_11a47ab5;
  /* 11a47a48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a47a4a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a47a4c push ebx */
  push32((uint32_t)(EBX));
  /* 11a47a4d call 0x11a451a9 */
  push32(0x11a47a52u); f_11a451a9();
  /* 11a47a52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47a55 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47a58 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a47a5b jne 0x11a47a76 */
  if (!C.zf) goto L_11a47a76;
  /* 11a47a5d call 0x11a44f2b */
  push32(0x11a47a62u); f_11a44f2b();
  /* 11a47a62 cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47a68 je 0x11a47ab5 */
  if (C.zf) goto L_11a47ab5;
L_11a47a6a:;
  /* 11a47a6a push ebx */
  push32((uint32_t)(EBX));
  /* 11a47a6b call 0x11a444dc */
  push32(0x11a47a70u); f_11a444dc();
  /* 11a47a70 pop ecx */
  ECX = (pop32());
  /* 11a47a71 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a47a74 jmp 0x11a47ace */
  goto L_11a47ace;
L_11a47a76:;
  /* 11a47a76 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 11a47a7a lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 11a47a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a47a7f push eax */
  push32((uint32_t)(EAX));
  /* 11a47a80 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47a81 call 0x11a4485f */
  push32(0x11a47a86u); f_11a4485f();
  /* 11a47a86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a47a8b jne 0x11a47aa3 */
  if (!C.zf) goto L_11a47aa3;
  /* 11a47a8d cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a47a91 jne 0x11a47aa3 */
  if (!C.zf) goto L_11a47aa3;
  /* 11a47a93 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11a47a96 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47a97 call 0x11a486f8 */
  push32(0x11a47a9cu); f_11a486f8();
  /* 11a47a9c pop ecx */
  ECX = (pop32());
  /* 11a47a9d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47aa0 pop ecx */
  ECX = (pop32());
  /* 11a47aa1 je 0x11a47a6a */
  if (C.zf) goto L_11a47a6a;
L_11a47aa3:;
  /* 11a47aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a47aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a47aa7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47aa8 call 0x11a451a9 */
  push32(0x11a47aadu); f_11a451a9();
  /* 11a47aad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47ab0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47ab3 je 0x11a47a6a */
  if (C.zf) goto L_11a47a6a;
L_11a47ab5:;
  /* 11a47ab5 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a47ab9 jne 0x11a47acc */
  if (!C.zf) goto L_11a47acc;
  /* 11a47abb test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 11a47abf je 0x11a47acc */
  if (C.zf) goto L_11a47acc;
  /* 11a47ac1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a47ac3 or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a47ac8 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_11a47acc:;
  /* 11a47acc mov esi, ebx */
  ESI = (EBX);
L_11a47ace:;
  /* 11a47ace push ebx */
  push32((uint32_t)(EBX));
  /* 11a47acf call 0x11a47509 */
  push32(0x11a47ad4u); f_11a47509();
  /* 11a47ad4 pop ecx */
  ECX = (pop32());
  /* 11a47ad5 mov eax, esi */
  EAX = (ESI);
L_11a47ad7:;
  /* 11a47ad7 pop edi */
  EDI = (pop32());
  /* 11a47ad8 pop esi */
  ESI = (pop32());
  /* 11a47ad9 pop ebx */
  EBX = (pop32());
  /* 11a47ada leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a47adb ret  */
  ESPCHK(0x11a4780du, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x11a47ae0 (7 bytes, 3 insns) */
void f_11a47ae0(void) {
  FTRACE(0x11a47ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47ae0 push edi */
  push32((uint32_t)(EDI));
  /* 11a47ae1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47ae5 jmp 0x11a47b51 */
  jmp_ind(0x11a47b51u); return;
}

/* FUN_10007af0 @ 0x11a47af0 (224 bytes, 84 insns) */
void f_11a47af0(void) {
  FTRACE(0x11a47af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47af0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47af4 push edi */
  push32((uint32_t)(EDI));
  /* 11a47af5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a47afb je 0x11a47b0c */
  if (C.zf) goto L_11a47b0c;
L_11a47afd:;
  /* 11a47afd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a47aff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47b00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a47b02 je 0x11a47b3f */
  if (C.zf) goto L_11a47b3f;
  /* 11a47b04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a47b0a jne 0x11a47afd */
  if (!C.zf) goto L_11a47afd;
L_11a47b0c:;
  /* 11a47b0c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a47b0e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a47b13 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47b15 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47b18 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47b1a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47b1d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a47b22 je 0x11a47b0c */
  if (C.zf) goto L_11a47b0c;
  /* 11a47b24 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a47b27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a47b29 je 0x11a47b4e */
  if (C.zf) goto L_11a47b4e;
  /* 11a47b2b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a47b2d je 0x11a47b49 */
  if (C.zf) goto L_11a47b49;
  /* 11a47b2f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a47b34 je 0x11a47b44 */
  if (C.zf) goto L_11a47b44;
  /* 11a47b36 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a47b3b je 0x11a47b3f */
  if (C.zf) goto L_11a47b3f;
  /* 11a47b3d jmp 0x11a47b0c */
  goto L_11a47b0c;
L_11a47b3f:;
  /* 11a47b3f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a47b42 jmp 0x11a47b51 */
  goto L_11a47b51;
L_11a47b44:;
  /* 11a47b44 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a47b47 jmp 0x11a47b51 */
  goto L_11a47b51;
L_11a47b49:;
  /* 11a47b49 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a47b4c jmp 0x11a47b51 */
  goto L_11a47b51;
L_11a47b4e:;
  /* 11a47b4e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a47b51:;
  /* 11a47b51 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a47b55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a47b5b je 0x11a47b76 */
  if (C.zf) goto L_11a47b76;
L_11a47b5d:;
  /* 11a47b5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a47b5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47b60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a47b62 je 0x11a47bc8 */
  if (C.zf) goto L_11a47bc8;
  /* 11a47b64 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a47b66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a47b67 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a47b6d jne 0x11a47b5d */
  if (!C.zf) goto L_11a47b5d;
  /* 11a47b6f jmp 0x11a47b76 */
  goto L_11a47b76;
L_11a47b71:;
  /* 11a47b71 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a47b73 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a47b76:;
  /* 11a47b76 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a47b7b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a47b7d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47b7f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47b82 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47b84 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a47b86 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47b89 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a47b8e je 0x11a47b71 */
  if (C.zf) goto L_11a47b71;
  /* 11a47b90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a47b92 je 0x11a47bc8 */
  if (C.zf) goto L_11a47bc8;
  /* 11a47b94 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a47b96 je 0x11a47bbf */
  if (C.zf) goto L_11a47bbf;
  /* 11a47b98 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a47b9e je 0x11a47bb2 */
  if (C.zf) goto L_11a47bb2;
  /* 11a47ba0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a47ba6 je 0x11a47baa */
  if (C.zf) goto L_11a47baa;
  /* 11a47ba8 jmp 0x11a47b71 */
  goto L_11a47b71;
L_11a47baa:;
  /* 11a47baa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a47bac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47bb0 pop edi */
  EDI = (pop32());
  /* 11a47bb1 ret  */
  ESPCHK(0x11a47af0u, _esp0);
  ESP += 4; return;
L_11a47bb2:;
  /* 11a47bb2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a47bb5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47bb9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a47bbd pop edi */
  EDI = (pop32());
  /* 11a47bbe ret  */
  ESPCHK(0x11a47af0u, _esp0);
  ESP += 4; return;
L_11a47bbf:;
  /* 11a47bbf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a47bc2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47bc6 pop edi */
  EDI = (pop32());
  /* 11a47bc7 ret  */
  ESPCHK(0x11a47af0u, _esp0);
  ESP += 4; return;
L_11a47bc8:;
  /* 11a47bc8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a47bca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a47bce pop edi */
  EDI = (pop32());
  /* 11a47bcf ret  */
  ESPCHK(0x11a47af0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a47bd0 (123 bytes, 44 insns) */
void f_11a47bd0(void) {
  FTRACE(0x11a47bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47bd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47bd4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a47bda je 0x11a47bf0 */
  if (C.zf) goto L_11a47bf0;
L_11a47bdc:;
  /* 11a47bdc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a47bde inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47bdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a47be1 je 0x11a47c23 */
  if (C.zf) goto L_11a47c23;
  /* 11a47be3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a47be9 jne 0x11a47bdc */
  if (!C.zf) goto L_11a47bdc;
  /* 11a47beb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a47bf0:;
  /* 11a47bf0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a47bf2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a47bf7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47bf9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a47bfc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47bfe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47c01 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a47c06 je 0x11a47bf0 */
  if (C.zf) goto L_11a47bf0;
  /* 11a47c08 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a47c0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a47c0d je 0x11a47c41 */
  if (C.zf) goto L_11a47c41;
  /* 11a47c0f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a47c11 je 0x11a47c37 */
  if (C.zf) goto L_11a47c37;
  /* 11a47c13 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a47c18 je 0x11a47c2d */
  if (C.zf) goto L_11a47c2d;
  /* 11a47c1a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a47c1f je 0x11a47c23 */
  if (C.zf) goto L_11a47c23;
  /* 11a47c21 jmp 0x11a47bf0 */
  goto L_11a47bf0;
L_11a47c23:;
  /* 11a47c23 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a47c26 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47c2a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47c2c ret  */
  ESPCHK(0x11a47bd0u, _esp0);
  ESP += 4; return;
L_11a47c2d:;
  /* 11a47c2d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a47c30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47c34 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47c36 ret  */
  ESPCHK(0x11a47bd0u, _esp0);
  ESP += 4; return;
L_11a47c37:;
  /* 11a47c37 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a47c3a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47c3e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47c40 ret  */
  ESPCHK(0x11a47bd0u, _esp0);
  ESP += 4; return;
L_11a47c41:;
  /* 11a47c41 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a47c44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47c48 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47c4a ret  */
  ESPCHK(0x11a47bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c4b @ 0x11a47c4b (429 bytes, 143 insns) */
void f_11a47c4b(void) {
  FTRACE(0x11a47c4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47c4b push ebp */
  push32((uint32_t)(EBP));
  /* 11a47c4c mov ebp, esp */
  EBP = (ESP);
  /* 11a47c4e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47c51 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47c52 push esi */
  push32((uint32_t)(ESI));
  /* 11a47c53 push edi */
  push32((uint32_t)(EDI));
  /* 11a47c54 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a47c56 call 0x11a46e46 */
  push32(0x11a47c5bu); f_11a46e46();
  /* 11a47c5b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a47c5e call 0x11a47df8 */
  push32(0x11a47c63u); f_11a47df8();
  /* 11a47c63 mov ebx, eax */
  EBX = (EAX);
  /* 11a47c65 pop ecx */
  ECX = (pop32());
  /* 11a47c66 cmp ebx, dword ptr [0x11a4fb28] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a4fb28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47c6c pop ecx */
  ECX = (pop32());
  /* 11a47c6d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a47c70 jne 0x11a47c79 */
  if (!C.zf) goto L_11a47c79;
L_11a47c72:;
  /* 11a47c72 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a47c74 jmp 0x11a47de9 */
  goto L_11a47de9;
L_11a47c79:;
  /* 11a47c79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a47c7b je 0x11a47dd7 */
  if (C.zf) goto L_11a47dd7;
  /* 11a47c81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a47c83 mov eax, 0x11a4dd68 */
  EAX = (0x11a4dd68u);
L_11a47c88:;
  /* 11a47c88 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47c8a je 0x11a47d00 */
  if (C.zf) goto L_11a47d00;
  /* 11a47c8c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47c8f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a47c90 cmp eax, 0x11a4de58 */
  { uint32_t _a=(EAX),_b=(0x11a4de58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47c95 jl 0x11a47c88 */
  if ((C.sf!=C.of)) goto L_11a47c88;
  /* 11a47c97 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a47c9a push eax */
  push32((uint32_t)(EAX));
  /* 11a47c9b push ebx */
  push32((uint32_t)(EBX));
  /* 11a47c9c call dword ptr [0x11a4a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a03c))), 0x11a47ca2u);
  /* 11a47ca2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a47ca4 pop esi */
  ESI = (pop32());
  /* 11a47ca5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47ca7 jne 0x11a47dce */
  if (!C.zf) goto L_11a47dce;
  /* 11a47cad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a47caf and dword ptr [0x11a4fd44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a4fd44)))&(0x0u); w32((uint32_t)(0x11a4fd44), (_r)); fl_logic(_r,32); }
  /* 11a47cb6 pop ecx */
  ECX = (pop32());
  /* 11a47cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47cb9 mov edi, 0x11a4fc40 */
  EDI = (0x11a4fc40u);
  /* 11a47cbe cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47cc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a47cc3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a47cc4 mov dword ptr [0x11a4fb28], ebx */
  w32((uint32_t)(0x11a4fb28), (EBX));
  /* 11a47cca jbe 0x11a47dbb */
  if ((C.cf||C.zf)) goto L_11a47dbb;
  /* 11a47cd0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a47cd4 je 0x11a47d96 */
  if (C.zf) goto L_11a47d96;
  /* 11a47cda lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11a47cdd:;
  /* 11a47cdd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a47cdf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a47ce1 je 0x11a47d96 */
  if (C.zf) goto L_11a47d96;
  /* 11a47ce7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11a47ceb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11a47cee:;
  /* 11a47cee cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47cf0 ja 0x11a47d8a */
  if ((!C.cf&&!C.zf)) goto L_11a47d8a;
  /* 11a47cf6 or byte ptr [eax + 0x11a4fc41], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(0x4u); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a47cfd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a47cfe jmp 0x11a47cee */
  goto L_11a47cee;
L_11a47d00:;
  /* 11a47d00 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a47d04 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a47d06 pop ecx */
  ECX = (pop32());
  /* 11a47d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47d09 mov edi, 0x11a4fc40 */
  EDI = (0x11a4fc40u);
  /* 11a47d0e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11a47d11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a47d13 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a47d16 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a47d17 lea ebx, [esi + 0x11a4dd78] */
  EBX = ((uint32_t)(ESI + 0x11a4dd78));
L_11a47d1d:;
  /* 11a47d1d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a47d20 mov ecx, ebx */
  ECX = (EBX);
  /* 11a47d22 je 0x11a47d50 */
  if (C.zf) goto L_11a47d50;
L_11a47d24:;
  /* 11a47d24 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a47d27 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a47d29 je 0x11a47d50 */
  if (C.zf) goto L_11a47d50;
  /* 11a47d2b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a47d2e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11a47d31 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47d33 ja 0x11a47d49 */
  if ((!C.cf&&!C.zf)) goto L_11a47d49;
  /* 11a47d35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a47d38 mov dl, byte ptr [edx + 0x11a4dd60] */
  DL = (r8((uint32_t)(EDX + 0x11a4dd60)));
L_11a47d3e:;
  /* 11a47d3e or byte ptr [eax + 0x11a4fc41], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(DL); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a47d44 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a47d45 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47d47 jbe 0x11a47d3e */
  if ((C.cf||C.zf)) goto L_11a47d3e;
L_11a47d49:;
  /* 11a47d49 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47d4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47d4b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a47d4e jne 0x11a47d24 */
  if (!C.zf) goto L_11a47d24;
L_11a47d50:;
  /* 11a47d50 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a47d53 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47d56 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47d5a jb 0x11a47d1d */
  if (C.cf) goto L_11a47d1d;
  /* 11a47d5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a47d5f mov dword ptr [0x11a4fb3c], 1 */
  w32((uint32_t)(0x11a4fb3c), (0x1u));
  /* 11a47d69 push eax */
  push32((uint32_t)(EAX));
  /* 11a47d6a mov dword ptr [0x11a4fb28], eax */
  w32((uint32_t)(0x11a4fb28), (EAX));
  /* 11a47d6f call 0x11a47e42 */
  push32(0x11a47d74u); f_11a47e42();
  /* 11a47d74 lea esi, [esi + 0x11a4dd6c] */
  ESI = ((uint32_t)(ESI + 0x11a4dd6c));
  /* 11a47d7a mov edi, 0x11a4fb30 */
  EDI = (0x11a4fb30u);
  /* 11a47d7f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a47d80 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a47d81 pop ecx */
  ECX = (pop32());
  /* 11a47d82 mov dword ptr [0x11a4fd44], eax */
  w32((uint32_t)(0x11a4fd44), (EAX));
  /* 11a47d87 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a47d88 jmp 0x11a47ddc */
  goto L_11a47ddc;
L_11a47d8a:;
  /* 11a47d8a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47d8b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47d8c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a47d90 jne 0x11a47cdd */
  if (!C.zf) goto L_11a47cdd;
L_11a47d96:;
  /* 11a47d96 mov eax, esi */
  EAX = (ESI);
L_11a47d98:;
  /* 11a47d98 or byte ptr [eax + 0x11a4fc41], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(0x8u); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a47d9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a47da0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47da5 jb 0x11a47d98 */
  if (C.cf) goto L_11a47d98;
  /* 11a47da7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47da8 call 0x11a47e42 */
  push32(0x11a47dadu); f_11a47e42();
  /* 11a47dad pop ecx */
  ECX = (pop32());
  /* 11a47dae mov dword ptr [0x11a4fd44], eax */
  w32((uint32_t)(0x11a4fd44), (EAX));
  /* 11a47db3 mov dword ptr [0x11a4fb3c], esi */
  w32((uint32_t)(0x11a4fb3c), (ESI));
  /* 11a47db9 jmp 0x11a47dc2 */
  goto L_11a47dc2;
L_11a47dbb:;
  /* 11a47dbb and dword ptr [0x11a4fb3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a4fb3c)))&(0x0u); w32((uint32_t)(0x11a4fb3c), (_r)); fl_logic(_r,32); }
L_11a47dc2:;
  /* 11a47dc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47dc4 mov edi, 0x11a4fb30 */
  EDI = (0x11a4fb30u);
  /* 11a47dc9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a47dca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a47dcb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a47dcc jmp 0x11a47ddc */
  goto L_11a47ddc;
L_11a47dce:;
  /* 11a47dce cmp dword ptr [0x11a4f99c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f99c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47dd5 je 0x11a47de6 */
  if (C.zf) goto L_11a47de6;
L_11a47dd7:;
  /* 11a47dd7 call 0x11a47e75 */
  push32(0x11a47ddcu); f_11a47e75();
L_11a47ddc:;
  /* 11a47ddc call 0x11a47e9e */
  push32(0x11a47de1u); f_11a47e9e();
  /* 11a47de1 jmp 0x11a47c72 */
  goto L_11a47c72;
L_11a47de6:;
  /* 11a47de6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a47de9:;
  /* 11a47de9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a47deb call 0x11a46ea7 */
  push32(0x11a47df0u); f_11a46ea7();
  /* 11a47df0 pop ecx */
  ECX = (pop32());
  /* 11a47df1 mov eax, esi */
  EAX = (ESI);
  /* 11a47df3 pop edi */
  EDI = (pop32());
  /* 11a47df4 pop esi */
  ESI = (pop32());
  /* 11a47df5 pop ebx */
  EBX = (pop32());
  /* 11a47df6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a47df7 ret  */
  ESPCHK(0x11a47c4bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007df8 @ 0x11a47df8 (74 bytes, 15 insns) */
void f_11a47df8(void) {
  FTRACE(0x11a47df8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47df8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47dfc and dword ptr [0x11a4f99c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a4f99c)))&(0x0u); w32((uint32_t)(0x11a4f99c), (_r)); fl_logic(_r,32); }
  /* 11a47e03 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47e06 jne 0x11a47e18 */
  if (!C.zf) goto L_11a47e18;
  /* 11a47e08 mov dword ptr [0x11a4f99c], 1 */
  w32((uint32_t)(0x11a4f99c), (0x1u));
  /* 11a47e12 jmp dword ptr [0x11a4a02c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a4a02c)))); return;
L_11a47e18:;
  /* 11a47e18 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47e1b jne 0x11a47e2d */
  if (!C.zf) goto L_11a47e2d;
  /* 11a47e1d mov dword ptr [0x11a4f99c], 1 */
  w32((uint32_t)(0x11a4f99c), (0x1u));
  /* 11a47e27 jmp dword ptr [0x11a4a030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a4a030)))); return;
L_11a47e2d:;
  /* 11a47e2d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47e30 jne 0x11a47e41 */
  if (!C.zf) goto L_11a47e41;
  /* 11a47e32 mov eax, dword ptr [0x11a4f9c8] */
  EAX = (r32((uint32_t)(0x11a4f9c8)));
  /* 11a47e37 mov dword ptr [0x11a4f99c], 1 */
  w32((uint32_t)(0x11a4f99c), (0x1u));
L_11a47e41:;
  /* 11a47e41 ret  */
  ESPCHK(0x11a47df8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e42 @ 0x11a47e42 (51 bytes, 19 insns) */
void f_11a47e42(void) {
  FTRACE(0x11a47e42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47e42 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a47e46 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47e4b je 0x11a47e6f */
  if (C.zf) goto L_11a47e6f;
  /* 11a47e4d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47e50 je 0x11a47e69 */
  if (C.zf) goto L_11a47e69;
  /* 11a47e52 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47e55 je 0x11a47e63 */
  if (C.zf) goto L_11a47e63;
  /* 11a47e57 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a47e58 je 0x11a47e5d */
  if (C.zf) goto L_11a47e5d;
  /* 11a47e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47e5c ret  */
  ESPCHK(0x11a47e42u, _esp0);
  ESP += 4; return;
L_11a47e5d:;
  /* 11a47e5d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a47e62 ret  */
  ESPCHK(0x11a47e42u, _esp0);
  ESP += 4; return;
L_11a47e63:;
  /* 11a47e63 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a47e68 ret  */
  ESPCHK(0x11a47e42u, _esp0);
  ESP += 4; return;
L_11a47e69:;
  /* 11a47e69 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a47e6e ret  */
  ESPCHK(0x11a47e42u, _esp0);
  ESP += 4; return;
L_11a47e6f:;
  /* 11a47e6f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a47e74 ret  */
  ESPCHK(0x11a47e42u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e75 @ 0x11a47e75 (41 bytes, 17 insns) */
void f_11a47e75(void) {
  FTRACE(0x11a47e75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47e75 push edi */
  push32((uint32_t)(EDI));
  /* 11a47e76 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a47e78 pop ecx */
  ECX = (pop32());
  /* 11a47e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47e7b mov edi, 0x11a4fc40 */
  EDI = (0x11a4fc40u);
  /* 11a47e80 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a47e82 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a47e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47e85 mov edi, 0x11a4fb30 */
  EDI = (0x11a4fb30u);
  /* 11a47e8a mov dword ptr [0x11a4fb28], eax */
  w32((uint32_t)(0x11a4fb28), (EAX));
  /* 11a47e8f mov dword ptr [0x11a4fb3c], eax */
  w32((uint32_t)(0x11a4fb3c), (EAX));
  /* 11a47e94 mov dword ptr [0x11a4fd44], eax */
  w32((uint32_t)(0x11a4fd44), (EAX));
  /* 11a47e99 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a47e9a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a47e9b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a47e9c pop edi */
  EDI = (pop32());
  /* 11a47e9d ret  */
  ESPCHK(0x11a47e75u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e9e @ 0x11a47e9e (389 bytes, 124 insns) */
void f_11a47e9e(void) {
  FTRACE(0x11a47e9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a47e9e push ebp */
  push32((uint32_t)(EBP));
  /* 11a47e9f mov ebp, esp */
  EBP = (ESP);
  /* 11a47ea1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47ea7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a47eaa push esi */
  push32((uint32_t)(ESI));
  /* 11a47eab push eax */
  push32((uint32_t)(EAX));
  /* 11a47eac push dword ptr [0x11a4fb28] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fb28))));
  /* 11a47eb2 call dword ptr [0x11a4a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a03c))), 0x11a47eb8u);
  /* 11a47eb8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47ebb jne 0x11a47fd7 */
  if (!C.zf) goto L_11a47fd7;
  /* 11a47ec1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47ec3 mov esi, 0x100 */
  ESI = (0x100u);
L_11a47ec8:;
  /* 11a47ec8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11a47ecf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a47ed0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47ed2 jb 0x11a47ec8 */
  if (C.cf) goto L_11a47ec8;
  /* 11a47ed4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11a47ed7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11a47ede test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a47ee0 je 0x11a47f19 */
  if (C.zf) goto L_11a47f19;
  /* 11a47ee2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a47ee3 push edi */
  push32((uint32_t)(EDI));
  /* 11a47ee4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11a47ee7:;
  /* 11a47ee7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a47eea movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a47eed cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47eef ja 0x11a47f0e */
  if ((!C.cf&&!C.zf)) goto L_11a47f0e;
  /* 11a47ef1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a47ef3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11a47efa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47efb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11a47f00 mov ebx, ecx */
  EBX = (ECX);
  /* 11a47f02 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a47f05 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a47f07 mov ecx, ebx */
  ECX = (EBX);
  /* 11a47f09 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a47f0c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11a47f0e:;
  /* 11a47f0e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a47f0f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a47f10 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11a47f13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a47f15 jne 0x11a47ee7 */
  if (!C.zf) goto L_11a47ee7;
  /* 11a47f17 pop edi */
  EDI = (pop32());
  /* 11a47f18 pop ebx */
  EBX = (pop32());
L_11a47f19:;
  /* 11a47f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a47f1b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11a47f21 push dword ptr [0x11a4fd44] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd44))));
  /* 11a47f27 push dword ptr [0x11a4fb28] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fb28))));
  /* 11a47f2d push eax */
  push32((uint32_t)(EAX));
  /* 11a47f2e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a47f34 push esi */
  push32((uint32_t)(ESI));
  /* 11a47f35 push eax */
  push32((uint32_t)(EAX));
  /* 11a47f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a47f38 call 0x11a48a6c */
  push32(0x11a47f3du); f_11a48a6c();
  /* 11a47f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a47f3f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11a47f45 push dword ptr [0x11a4fb28] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fb28))));
  /* 11a47f4b push esi */
  push32((uint32_t)(ESI));
  /* 11a47f4c push eax */
  push32((uint32_t)(EAX));
  /* 11a47f4d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a47f53 push esi */
  push32((uint32_t)(ESI));
  /* 11a47f54 push eax */
  push32((uint32_t)(EAX));
  /* 11a47f55 push esi */
  push32((uint32_t)(ESI));
  /* 11a47f56 push dword ptr [0x11a4fd44] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd44))));
  /* 11a47f5c call 0x11a4881d */
  push32(0x11a47f61u); f_11a4881d();
  /* 11a47f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a47f63 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11a47f69 push dword ptr [0x11a4fb28] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fb28))));
  /* 11a47f6f push esi */
  push32((uint32_t)(ESI));
  /* 11a47f70 push eax */
  push32((uint32_t)(EAX));
  /* 11a47f71 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a47f77 push esi */
  push32((uint32_t)(ESI));
  /* 11a47f78 push eax */
  push32((uint32_t)(EAX));
  /* 11a47f79 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a47f7e push dword ptr [0x11a4fd44] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd44))));
  /* 11a47f84 call 0x11a4881d */
  push32(0x11a47f89u); f_11a4881d();
  /* 11a47f89 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a47f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47f8e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11a47f94:;
  /* 11a47f94 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a47f97 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a47f9a je 0x11a47fb2 */
  if (C.zf) goto L_11a47fb2;
  /* 11a47f9c or byte ptr [eax + 0x11a4fc41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(0x10u); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a47fa3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11a47faa:;
  /* 11a47faa mov byte ptr [eax + 0x11a4fb40], dl */
  w8((uint32_t)(EAX + 0x11a4fb40), (DL));
  /* 11a47fb0 jmp 0x11a47fce */
  goto L_11a47fce;
L_11a47fb2:;
  /* 11a47fb2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11a47fb5 je 0x11a47fc7 */
  if (C.zf) goto L_11a47fc7;
  /* 11a47fb7 or byte ptr [eax + 0x11a4fc41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(0x20u); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a47fbe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11a47fc5 jmp 0x11a47faa */
  goto L_11a47faa;
L_11a47fc7:;
  /* 11a47fc7 and byte ptr [eax + 0x11a4fb40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fb40)))&(0x0u); w8((uint32_t)(EAX + 0x11a4fb40), (_r)); fl_logic(_r,8); }
L_11a47fce:;
  /* 11a47fce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a47fcf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47fd0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a47fd1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47fd3 jb 0x11a47f94 */
  if (C.cf) goto L_11a47f94;
  /* 11a47fd5 jmp 0x11a48020 */
  goto L_11a48020;
L_11a47fd7:;
  /* 11a47fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a47fd9 mov esi, 0x100 */
  ESI = (0x100u);
L_11a47fde:;
  /* 11a47fde cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47fe1 jb 0x11a47ffc */
  if (C.cf) goto L_11a47ffc;
  /* 11a47fe3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47fe6 ja 0x11a47ffc */
  if ((!C.cf&&!C.zf)) goto L_11a47ffc;
  /* 11a47fe8 or byte ptr [eax + 0x11a4fc41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(0x10u); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a47fef mov cl, al */
  CL = (AL);
  /* 11a47ff1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11a47ff4:;
  /* 11a47ff4 mov byte ptr [eax + 0x11a4fb40], cl */
  w8((uint32_t)(EAX + 0x11a4fb40), (CL));
  /* 11a47ffa jmp 0x11a4801b */
  goto L_11a4801b;
L_11a47ffc:;
  /* 11a47ffc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a47fff jb 0x11a48014 */
  if (C.cf) goto L_11a48014;
  /* 11a48001 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48004 ja 0x11a48014 */
  if ((!C.cf&&!C.zf)) goto L_11a48014;
  /* 11a48006 or byte ptr [eax + 0x11a4fc41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fc41)))|(0x20u); w8((uint32_t)(EAX + 0x11a4fc41), (_r)); fl_logic(_r,8); }
  /* 11a4800d mov cl, al */
  CL = (AL);
  /* 11a4800f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a48012 jmp 0x11a47ff4 */
  goto L_11a47ff4;
L_11a48014:;
  /* 11a48014 and byte ptr [eax + 0x11a4fb40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a4fb40)))&(0x0u); w8((uint32_t)(EAX + 0x11a4fb40), (_r)); fl_logic(_r,8); }
L_11a4801b:;
  /* 11a4801b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a4801c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4801e jb 0x11a47fde */
  if (C.cf) goto L_11a47fde;
L_11a48020:;
  /* 11a48020 pop esi */
  ESI = (pop32());
  /* 11a48021 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48022 ret  */
  ESPCHK(0x11a47e9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008023 @ 0x11a48023 (28 bytes, 7 insns) */
void f_11a48023(void) {
  FTRACE(0x11a48023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48023 cmp dword ptr [0x11a4fd70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4fd70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4802a jne 0x11a4803e */
  if (!C.zf) goto L_11a4803e;
  /* 11a4802c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a4802e call 0x11a47c4b */
  push32(0x11a48033u); f_11a47c4b();
  /* 11a48033 pop ecx */
  ECX = (pop32());
  /* 11a48034 mov dword ptr [0x11a4fd70], 1 */
  w32((uint32_t)(0x11a4fd70), (0x1u));
L_11a4803e:;
  /* 11a4803e ret  */
  ESPCHK(0x11a48023u, _esp0);
  ESP += 4; return;
}

/* FUN_1000803f @ 0x11a4803f (23 bytes, 7 insns) */
void f_11a4803f(void) {
  FTRACE(0x11a4803fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4803f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48041 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a48045 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a48049 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a4804d call 0x11a48056 */
  push32(0x11a48052u); f_11a48056();
  /* 11a48052 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48055 ret  */
  ESPCHK(0x11a4803fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008056 @ 0x11a48056 (517 bytes, 195 insns) */
void f_11a48056(void) {
  FTRACE(0x11a48056u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48056 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48057 mov ebp, esp */
  EBP = (ESP);
  /* 11a48059 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4805c push ebx */
  push32((uint32_t)(EBX));
  /* 11a4805d and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a48061 push esi */
  push32((uint32_t)(ESI));
  /* 11a48062 push edi */
  push32((uint32_t)(EDI));
  /* 11a48063 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48066 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a48068 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11a4806b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a4806e:;
  /* 11a4806e cmp dword ptr [0x11a4e06c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4e06c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48075 jle 0x11a48086 */
  if ((C.zf||C.sf!=C.of)) goto L_11a48086;
  /* 11a48077 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a4807a push 8 */
  push32((uint32_t)(0x8u));
  /* 11a4807c push eax */
  push32((uint32_t)(EAX));
  /* 11a4807d call 0x11a48cf0 */
  push32(0x11a48082u); f_11a48cf0();
  /* 11a48082 pop ecx */
  ECX = (pop32());
  /* 11a48083 pop ecx */
  ECX = (pop32());
  /* 11a48084 jmp 0x11a48095 */
  goto L_11a48095;
L_11a48086:;
  /* 11a48086 mov ecx, dword ptr [0x11a4de60] */
  ECX = (r32((uint32_t)(0x11a4de60)));
  /* 11a4808c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a4808f mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11a48092 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11a48095:;
  /* 11a48095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48097 je 0x11a4809e */
  if (C.zf) goto L_11a4809e;
  /* 11a48099 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11a4809b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a4809c jmp 0x11a4806e */
  goto L_11a4806e;
L_11a4809e:;
  /* 11a4809e cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a480a1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11a480a4 jne 0x11a480ac */
  if (!C.zf) goto L_11a480ac;
  /* 11a480a6 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a480aa jmp 0x11a480b1 */
  goto L_11a480b1;
L_11a480ac:;
  /* 11a480ac cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a480af jne 0x11a480b7 */
  if (!C.zf) goto L_11a480b7;
L_11a480b1:;
  /* 11a480b1 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11a480b3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a480b4 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a480b7:;
  /* 11a480b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a480ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a480bc jl 0x11a4824b */
  if ((C.sf!=C.of)) goto L_11a4824b;
  /* 11a480c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a480c5 je 0x11a4824b */
  if (C.zf) goto L_11a4824b;
  /* 11a480cb cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a480ce jg 0x11a4824b */
  if ((!C.zf&&C.sf==C.of)) goto L_11a4824b;
  /* 11a480d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a480d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a480d8 pop ecx */
  ECX = (pop32());
  /* 11a480d9 jne 0x11a480ff */
  if (!C.zf) goto L_11a480ff;
  /* 11a480db cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a480de je 0x11a480e9 */
  if (C.zf) goto L_11a480e9;
  /* 11a480e0 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11a480e7 jmp 0x11a4811b */
  goto L_11a4811b;
L_11a480e9:;
  /* 11a480e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a480eb cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a480ed je 0x11a480fc */
  if (C.zf) goto L_11a480fc;
  /* 11a480ef cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a480f1 je 0x11a480fc */
  if (C.zf) goto L_11a480fc;
  /* 11a480f3 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11a480fa jmp 0x11a4811b */
  goto L_11a4811b;
L_11a480fc:;
  /* 11a480fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11a480ff:;
  /* 11a480ff cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48102 jne 0x11a4811b */
  if (!C.zf) goto L_11a4811b;
  /* 11a48104 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48107 jne 0x11a4811b */
  if (!C.zf) goto L_11a4811b;
  /* 11a48109 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a4810b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4810d je 0x11a48113 */
  if (C.zf) goto L_11a48113;
  /* 11a4810f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48111 jne 0x11a4811b */
  if (!C.zf) goto L_11a4811b;
L_11a48113:;
  /* 11a48113 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a48116 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48117 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48118 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a4811b:;
  /* 11a4811b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4811e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a48120 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a48123 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11a48128 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a4812b:;
  /* 11a4812b cmp dword ptr [0x11a4e06c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4e06c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48132 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11a48135 jle 0x11a48143 */
  if ((C.zf||C.sf!=C.of)) goto L_11a48143;
  /* 11a48137 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a48139 push esi */
  push32((uint32_t)(ESI));
  /* 11a4813a call 0x11a48cf0 */
  push32(0x11a4813fu); f_11a48cf0();
  /* 11a4813f pop ecx */
  ECX = (pop32());
  /* 11a48140 pop ecx */
  ECX = (pop32());
  /* 11a48141 jmp 0x11a4814e */
  goto L_11a4814e;
L_11a48143:;
  /* 11a48143 mov eax, dword ptr [0x11a4de60] */
  EAX = (r32((uint32_t)(0x11a4de60)));
  /* 11a48148 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11a4814b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11a4814e:;
  /* 11a4814e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48150 je 0x11a4815a */
  if (C.zf) goto L_11a4815a;
  /* 11a48152 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11a48155 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48158 jmp 0x11a4818c */
  goto L_11a4818c;
L_11a4815a:;
  /* 11a4815a cmp dword ptr [0x11a4e06c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4e06c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48161 jle 0x11a4816e */
  if ((C.zf||C.sf!=C.of)) goto L_11a4816e;
  /* 11a48163 push edi */
  push32((uint32_t)(EDI));
  /* 11a48164 push esi */
  push32((uint32_t)(ESI));
  /* 11a48165 call 0x11a48cf0 */
  push32(0x11a4816au); f_11a48cf0();
  /* 11a4816a pop ecx */
  ECX = (pop32());
  /* 11a4816b pop ecx */
  ECX = (pop32());
  /* 11a4816c jmp 0x11a48179 */
  goto L_11a48179;
L_11a4816e:;
  /* 11a4816e mov eax, dword ptr [0x11a4de60] */
  EAX = (r32((uint32_t)(0x11a4de60)));
  /* 11a48173 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11a48177 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11a48179:;
  /* 11a48179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4817b je 0x11a481c7 */
  if (C.zf) goto L_11a481c7;
  /* 11a4817d movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11a48180 push eax */
  push32((uint32_t)(EAX));
  /* 11a48181 call 0x11a48bb5 */
  push32(0x11a48186u); f_11a48bb5();
  /* 11a48186 pop ecx */
  ECX = (pop32());
  /* 11a48187 mov ecx, eax */
  ECX = (EAX);
  /* 11a48189 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11a4818c:;
  /* 11a4818c cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4818f jae 0x11a481c7 */
  if (!C.cf) goto L_11a481c7;
  /* 11a48191 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11a48194 or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a48198 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4819b jb 0x11a481b1 */
  if (C.cf) goto L_11a481b1;
  /* 11a4819d jne 0x11a481ab */
  if (!C.zf) goto L_11a481ab;
  /* 11a4819f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a481a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a481a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a481a7 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a481a9 jbe 0x11a481b1 */
  if ((C.cf||C.zf)) goto L_11a481b1;
L_11a481ab:;
  /* 11a481ab or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a481af jmp 0x11a481ba */
  goto L_11a481ba;
L_11a481b1:;
  /* 11a481b1 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a481b5 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a481b7 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11a481ba:;
  /* 11a481ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a481bd inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a481c0 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a481c2 jmp 0x11a4812b */
  goto L_11a4812b;
L_11a481c7:;
  /* 11a481c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a481ca dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11a481cd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a481d0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a481d2 jne 0x11a481e4 */
  if (!C.zf) goto L_11a481e4;
  /* 11a481d4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a481d6 je 0x11a481de */
  if (C.zf) goto L_11a481de;
  /* 11a481d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a481db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a481de:;
  /* 11a481de and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a481e2 jmp 0x11a4822f */
  goto L_11a4822f;
L_11a481e4:;
  /* 11a481e4 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11a481e6 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11a481eb jne 0x11a48208 */
  if (!C.zf) goto L_11a48208;
  /* 11a481ed test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a481ef jne 0x11a4822f */
  if (!C.zf) goto L_11a4822f;
  /* 11a481f1 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11a481f4 je 0x11a481ff */
  if (C.zf) goto L_11a481ff;
  /* 11a481f6 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a481fd ja 0x11a48208 */
  if ((!C.cf&&!C.zf)) goto L_11a48208;
L_11a481ff:;
  /* 11a481ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48201 jne 0x11a4822f */
  if (!C.zf) goto L_11a4822f;
  /* 11a48203 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48206 jbe 0x11a4822f */
  if ((C.cf||C.zf)) goto L_11a4822f;
L_11a48208:;
  /* 11a48208 call 0x11a44f22 */
  push32(0x11a4820du); f_11a44f22();
  /* 11a4820d test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11a48211 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11a48217 je 0x11a4821f */
  if (C.zf) goto L_11a4821f;
  /* 11a48219 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a4821d jmp 0x11a4822f */
  goto L_11a4822f;
L_11a4821f:;
  /* 11a4821f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a48222 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a48224 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11a48226 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48228 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a4822a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4822c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a4822f:;
  /* 11a4822f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a48231 je 0x11a48238 */
  if (C.zf) goto L_11a48238;
  /* 11a48233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a48236 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11a48238:;
  /* 11a48238 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11a4823c je 0x11a48246 */
  if (C.zf) goto L_11a48246;
  /* 11a4823e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a48241 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a48243 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a48246:;
  /* 11a48246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a48249 jmp 0x11a48256 */
  goto L_11a48256;
L_11a4824b:;
  /* 11a4824b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a4824e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48250 je 0x11a48254 */
  if (C.zf) goto L_11a48254;
  /* 11a48252 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11a48254:;
  /* 11a48254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a48256:;
  /* 11a48256 pop edi */
  EDI = (pop32());
  /* 11a48257 pop esi */
  ESI = (pop32());
  /* 11a48258 pop ebx */
  EBX = (pop32());
  /* 11a48259 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4825a ret  */
  ESPCHK(0x11a48056u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11a48260 (56 bytes, 31 insns) */
void f_11a48260(void) {
  FTRACE(0x11a48260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48260 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48261 mov ebp, esp */
  EBP = (ESP);
  /* 11a48263 push edi */
  push32((uint32_t)(EDI));
  /* 11a48264 push esi */
  push32((uint32_t)(ESI));
  /* 11a48265 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a48269 jecxz 0x11a48291 */
  x86_unimpl("jecxz @ 0x11a48269");
  /* 11a4826b mov ebx, ecx */
  EBX = (ECX);
  /* 11a4826d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48270 mov esi, edi */
  ESI = (EDI);
  /* 11a48272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a48274 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a48276 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a48278 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4827a mov edi, esi */
  EDI = (ESI);
  /* 11a4827c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a4827f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11a48281 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11a48284 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a48286 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48289 ja 0x11a4828f */
  if ((!C.cf&&!C.zf)) goto L_11a4828f;
  /* 11a4828b je 0x11a48291 */
  if (C.zf) goto L_11a48291;
  /* 11a4828d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a4828e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11a4828f:;
  /* 11a4828f not ecx */
  ECX = (~(ECX));
L_11a48291:;
  /* 11a48291 mov eax, ecx */
  EAX = (ECX);
  /* 11a48293 pop ebx */
  EBX = (pop32());
  /* 11a48294 pop esi */
  ESI = (pop32());
  /* 11a48295 pop edi */
  EDI = (pop32());
  /* 11a48296 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48297 ret  */
  ESPCHK(0x11a48260u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x11a482a0 (47 bytes, 17 insns) */
void f_11a482a0(void) {
  FTRACE(0x11a482a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a482a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a482a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a482a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a482aa jb 0x11a482c0 */
  if (C.cf) goto L_11a482c0;
L_11a482ac:;
  /* 11a482ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a482b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a482b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a482b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a482be jae 0x11a482ac */
  if (!C.cf) goto L_11a482ac;
L_11a482c0:;
  /* 11a482c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a482c2 mov eax, esp */
  EAX = (ESP);
  /* 11a482c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a482c6 mov esp, ecx */
  ESP = (ECX);
  /* 11a482c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a482ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a482cd push eax */
  push32((uint32_t)(EAX));
  /* 11a482ce ret  */
  ESPCHK(0x11a482a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082cf @ 0x11a482cf (137 bytes, 50 insns) */
void f_11a482cf(void) {
  FTRACE(0x11a482cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a482cf push ebx */
  push32((uint32_t)(EBX));
  /* 11a482d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a482d2 cmp dword ptr [0x11a4f9a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4f9a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a482d8 push esi */
  push32((uint32_t)(ESI));
  /* 11a482d9 push edi */
  push32((uint32_t)(EDI));
  /* 11a482da jne 0x11a4831e */
  if (!C.zf) goto L_11a4831e;
  /* 11a482dc push 0x11a4a538 */
  push32((uint32_t)(0x11a4a538u));
  /* 11a482e1 call dword ptr [0x11a4a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a024))), 0x11a482e7u);
  /* 11a482e7 mov edi, eax */
  EDI = (EAX);
  /* 11a482e9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a482eb je 0x11a48354 */
  if (C.zf) goto L_11a48354;
  /* 11a482ed mov esi, dword ptr [0x11a4a034] */
  ESI = (r32((uint32_t)(0x11a4a034)));
  /* 11a482f3 push 0x11a4a52c */
  push32((uint32_t)(0x11a4a52cu));
  /* 11a482f8 push edi */
  push32((uint32_t)(EDI));
  /* 11a482f9 call esi */
  call_ind((uint32_t)(ESI), 0x11a482fbu);
  /* 11a482fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a482fd mov dword ptr [0x11a4f9a0], eax */
  w32((uint32_t)(0x11a4f9a0), (EAX));
  /* 11a48302 je 0x11a48354 */
  if (C.zf) goto L_11a48354;
  /* 11a48304 push 0x11a4a51c */
  push32((uint32_t)(0x11a4a51cu));
  /* 11a48309 push edi */
  push32((uint32_t)(EDI));
  /* 11a4830a call esi */
  call_ind((uint32_t)(ESI), 0x11a4830cu);
  /* 11a4830c push 0x11a4a508 */
  push32((uint32_t)(0x11a4a508u));
  /* 11a48311 push edi */
  push32((uint32_t)(EDI));
  /* 11a48312 mov dword ptr [0x11a4f9a4], eax */
  w32((uint32_t)(0x11a4f9a4), (EAX));
  /* 11a48317 call esi */
  call_ind((uint32_t)(ESI), 0x11a48319u);
  /* 11a48319 mov dword ptr [0x11a4f9a8], eax */
  w32((uint32_t)(0x11a4f9a8), (EAX));
L_11a4831e:;
  /* 11a4831e mov eax, dword ptr [0x11a4f9a4] */
  EAX = (r32((uint32_t)(0x11a4f9a4)));
  /* 11a48323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48325 je 0x11a4833d */
  if (C.zf) goto L_11a4833d;
  /* 11a48327 call eax */
  call_ind((uint32_t)(EAX), 0x11a48329u);
  /* 11a48329 mov ebx, eax */
  EBX = (EAX);
  /* 11a4832b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a4832d je 0x11a4833d */
  if (C.zf) goto L_11a4833d;
  /* 11a4832f mov eax, dword ptr [0x11a4f9a8] */
  EAX = (r32((uint32_t)(0x11a4f9a8)));
  /* 11a48334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48336 je 0x11a4833d */
  if (C.zf) goto L_11a4833d;
  /* 11a48338 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48339 call eax */
  call_ind((uint32_t)(EAX), 0x11a4833bu);
  /* 11a4833b mov ebx, eax */
  EBX = (EAX);
L_11a4833d:;
  /* 11a4833d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a48341 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a48345 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a48349 push ebx */
  push32((uint32_t)(EBX));
  /* 11a4834a call dword ptr [0x11a4f9a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4f9a0))), 0x11a48350u);
L_11a48350:;
  /* 11a48350 pop edi */
  EDI = (pop32());
  /* 11a48351 pop esi */
  ESI = (pop32());
  /* 11a48352 pop ebx */
  EBX = (pop32());
  /* 11a48353 ret  */
  ESPCHK(0x11a482cfu, _esp0);
  ESP += 4; return;
L_11a48354:;
  /* 11a48354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a48356 jmp 0x11a48350 */
  goto L_11a48350;
}

/* FUN_10008360 @ 0x11a48360 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11a48360(void) {
  FTRACE(0x11a48360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48360 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48361 mov ebp, esp */
  EBP = (ESP);
  /* 11a48363 push edi */
  push32((uint32_t)(EDI));
  /* 11a48364 push esi */
  push32((uint32_t)(ESI));
  /* 11a48365 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a48368 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a4836b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a4836e mov eax, ecx */
  EAX = (ECX);
  /* 11a48370 mov edx, ecx */
  EDX = (ECX);
  /* 11a48372 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48374 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48376 jbe 0x11a48380 */
  if ((C.cf||C.zf)) goto L_11a48380;
  /* 11a48378 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4837a jb 0x11a484f8 */
  if (C.cf) goto L_11a484f8;
L_11a48380:;
  /* 11a48380 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a48386 jne 0x11a4839c */
  if (!C.zf) goto L_11a4839c;
  /* 11a48388 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a4838b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a4838e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48391 jb 0x11a483bc */
  if (C.cf) goto L_11a483bc;
  /* 11a48393 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a48395 jmp dword ptr [edx*4 + 0x11a484a8] */
  switch (EDX) {
    case 0: goto L_11a484b8;
    case 1: goto L_11a484c0;
    case 2: goto L_11a484cc;
    case 3: goto L_11a484e0;
    default: x86_unimpl("switch@0x11a48395 out of table"); return;
  }
L_11a4839c:;
  /* 11a4839c mov eax, edi */
  EAX = (EDI);
  /* 11a4839e mov edx, 3 */
  EDX = (0x3u);
  /* 11a483a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a483a6 jb 0x11a483b4 */
  if (C.cf) goto L_11a483b4;
  /* 11a483a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a483ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a483ad jmp dword ptr [eax*4 + 0x11a483c0] */
  switch (EAX) {
    case 1: goto L_11a483d0;
    case 2: goto L_11a483fc;
    case 3: goto L_11a48420;
    default: x86_unimpl("switch@0x11a483ad out of table"); return;
  }
L_11a483b4:;
  /* 11a483b4 jmp dword ptr [ecx*4 + 0x11a484b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a484b8)))); return;
  /* 11a483bb nop  */
  /* nop */
L_11a483bc:;
  /* 11a483bc jmp dword ptr [ecx*4 + 0x11a4843c] */
  switch (ECX) {
    case 0: goto L_11a4849f;
    case 1: goto L_11a4848c;
    case 2: goto L_11a48484;
    case 3: goto L_11a4847c;
    case 4: goto L_11a48474;
    case 5: goto L_11a4846c;
    case 6: goto L_11a48464;
    case 7: goto L_11a4845c;
    default: x86_unimpl("switch@0x11a483bc out of table"); return;
  }
  /* 11a483c3 nop  */
  /* nop */
L_11a483d0:;
  /* 11a483d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a483d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a483d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a483d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a483d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a483dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a483df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a483e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a483e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a483e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a483eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a483ee jb 0x11a483bc */
  if (C.cf) goto L_11a483bc;
  /* 11a483f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a483f2 jmp dword ptr [edx*4 + 0x11a484a8] */
  switch (EDX) {
    case 0: goto L_11a484b8;
    case 1: goto L_11a484c0;
    case 2: goto L_11a484cc;
    case 3: goto L_11a484e0;
    default: x86_unimpl("switch@0x11a483f2 out of table"); return;
  }
  /* 11a483f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a483fc:;
  /* 11a483fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a483fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a48400 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a48402 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a48405 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a48408 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a4840b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4840e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48411 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48414 jb 0x11a483bc */
  if (C.cf) goto L_11a483bc;
  /* 11a48416 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a48418 jmp dword ptr [edx*4 + 0x11a484a8] */
  switch (EDX) {
    case 0: goto L_11a484b8;
    case 1: goto L_11a484c0;
    case 2: goto L_11a484cc;
    case 3: goto L_11a484e0;
    default: x86_unimpl("switch@0x11a48418 out of table"); return;
  }
  /* 11a4841f nop  */
  /* nop */
L_11a48420:;
  /* 11a48420 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a48422 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a48424 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a48426 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48427 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a4842a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a4842b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4842e jb 0x11a483bc */
  if (C.cf) goto L_11a483bc;
  /* 11a48430 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a48432 jmp dword ptr [edx*4 + 0x11a484a8] */
  switch (EDX) {
    case 0: goto L_11a484b8;
    case 1: goto L_11a484c0;
    case 2: goto L_11a484cc;
    case 3: goto L_11a484e0;
    default: x86_unimpl("switch@0x11a48432 out of table"); return;
  }
  /* 11a48439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a4845c:;
  /* 11a4845c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a48460 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a48464:;
  /* 11a48464 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a48468 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a4846c:;
  /* 11a4846c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a48470 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a48474:;
  /* 11a48474 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a48478 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a4847c:;
  /* 11a4847c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a48480 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a48484:;
  /* 11a48484 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a48488 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a4848c:;
  /* 11a4848c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a48490 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a48494 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a4849b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4849d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a4849f:;
  /* 11a4849f jmp dword ptr [edx*4 + 0x11a484a8] */
  switch (EDX) {
    case 0: goto L_11a484b8;
    case 1: goto L_11a484c0;
    case 2: goto L_11a484cc;
    case 3: goto L_11a484e0;
    default: x86_unimpl("switch@0x11a4849f out of table"); return;
  }
  /* 11a484a6 mov edi, edi */
  EDI = (EDI);
L_11a484b8:;
  /* 11a484b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a484bb pop esi */
  ESI = (pop32());
  /* 11a484bc pop edi */
  EDI = (pop32());
  /* 11a484bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a484be ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a484bf nop  */
  /* nop */
L_11a484c0:;
  /* 11a484c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a484c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a484c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a484c7 pop esi */
  ESI = (pop32());
  /* 11a484c8 pop edi */
  EDI = (pop32());
  /* 11a484c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a484ca ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a484cb nop  */
  /* nop */
L_11a484cc:;
  /* 11a484cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a484ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a484d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a484d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a484d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a484d9 pop esi */
  ESI = (pop32());
  /* 11a484da pop edi */
  EDI = (pop32());
  /* 11a484db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a484dc ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a484dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a484e0:;
  /* 11a484e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a484e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a484e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a484e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a484ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a484ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a484f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a484f3 pop esi */
  ESI = (pop32());
  /* 11a484f4 pop edi */
  EDI = (pop32());
  /* 11a484f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a484f6 ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a484f7 nop  */
  /* nop */
L_11a484f8:;
  /* 11a484f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a484fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a48500 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a48506 jne 0x11a4852c */
  if (!C.zf) goto L_11a4852c;
  /* 11a48508 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a4850b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a4850e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48511 jb 0x11a48520 */
  if (C.cf) goto L_11a48520;
  /* 11a48513 std  */
  C.df=1;
  /* 11a48514 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a48516 cld  */
  C.df=0;
  /* 11a48517 jmp dword ptr [edx*4 + 0x11a48640] */
  switch (EDX) {
    case 0: goto L_11a48650;
    case 1: goto L_11a48658;
    case 2: goto L_11a48668;
    case 3: goto L_11a4867c;
    default: x86_unimpl("switch@0x11a48517 out of table"); return;
  }
  /* 11a4851e mov edi, edi */
  EDI = (EDI);
L_11a48520:;
  /* 11a48520 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a48522 jmp dword ptr [ecx*4 + 0x11a485f0] */
  switch (ECX) {
    case 0: goto L_11a48637;
    default: x86_unimpl("switch@0x11a48522 out of table"); return;
  }
  /* 11a48529 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a4852c:;
  /* 11a4852c mov eax, edi */
  EAX = (EDI);
  /* 11a4852e mov edx, 3 */
  EDX = (0x3u);
  /* 11a48533 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48536 jb 0x11a48544 */
  if (C.cf) goto L_11a48544;
  /* 11a48538 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a4853b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4853d jmp dword ptr [eax*4 + 0x11a48548] */
  switch (EAX) {
    case 1: goto L_11a48558;
    case 2: goto L_11a48578;
    case 3: goto L_11a485a0;
    default: x86_unimpl("switch@0x11a4853d out of table"); return;
  }
L_11a48544:;
  /* 11a48544 jmp dword ptr [ecx*4 + 0x11a48640] */
  switch (ECX) {
    case 0: goto L_11a48650;
    case 1: goto L_11a48658;
    case 2: goto L_11a48668;
    case 3: goto L_11a4867c;
    default: x86_unimpl("switch@0x11a48544 out of table"); return;
  }
  /* 11a4854b nop  */
  /* nop */
L_11a48558:;
  /* 11a48558 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a4855b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a4855d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a48560 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a48561 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a48564 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a48565 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48568 jb 0x11a48520 */
  if (C.cf) goto L_11a48520;
  /* 11a4856a std  */
  C.df=1;
  /* 11a4856b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a4856d cld  */
  C.df=0;
  /* 11a4856e jmp dword ptr [edx*4 + 0x11a48640] */
  switch (EDX) {
    case 0: goto L_11a48650;
    case 1: goto L_11a48658;
    case 2: goto L_11a48668;
    case 3: goto L_11a4867c;
    default: x86_unimpl("switch@0x11a4856e out of table"); return;
  }
  /* 11a48575 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a48578:;
  /* 11a48578 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a4857b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a4857d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a48580 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a48583 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a48586 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a48589 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4858c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4858f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48592 jb 0x11a48520 */
  if (C.cf) goto L_11a48520;
  /* 11a48594 std  */
  C.df=1;
  /* 11a48595 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a48597 cld  */
  C.df=0;
  /* 11a48598 jmp dword ptr [edx*4 + 0x11a48640] */
  switch (EDX) {
    case 0: goto L_11a48650;
    case 1: goto L_11a48658;
    case 2: goto L_11a48668;
    case 3: goto L_11a4867c;
    default: x86_unimpl("switch@0x11a48598 out of table"); return;
  }
  /* 11a4859f nop  */
  /* nop */
L_11a485a0:;
  /* 11a485a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a485a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a485a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a485a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a485ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a485ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a485b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a485b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a485b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a485ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a485bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a485c0 jb 0x11a48520 */
  if (C.cf) goto L_11a48520;
  /* 11a485c6 std  */
  C.df=1;
  /* 11a485c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a485c9 cld  */
  C.df=0;
  /* 11a485ca jmp dword ptr [edx*4 + 0x11a48640] */
  switch (EDX) {
    case 0: goto L_11a48650;
    case 1: goto L_11a48658;
    case 2: goto L_11a48668;
    case 3: goto L_11a4867c;
    default: x86_unimpl("switch@0x11a485ca out of table"); return;
  }
  /* 11a485d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a485d4 hlt  */
  x86_unimpl("hlt @ 0x11a485d4");
  /* 11a485d5 test dword ptr [ecx + edx + 0x11a485fc], esp */
  { uint32_t _r=(r32((uint32_t)(ECX + EDX*1 + 0x11a485fc)))&(ESP); fl_logic(_r,32); }
  /* 11a485dc add al, 0x86 */
  { uint32_t _a=(AL),_b=(0x86u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a485de movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a485df adc dword ptr [esi + eax*4], ecx */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a485e2 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a485e3 adc dword ptr [esi + eax*4], edx */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a485e6 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a485e7 adc dword ptr [esi + eax*4], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a485ea movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a485eb adc dword ptr [esi + eax*4], esp */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a485ee movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a485f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a485f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a485fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a48600 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a48604 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a48608 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a4860c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a48610 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a48614 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a48618 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a4861c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a48620 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a48624 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a48628 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a4862c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a48633 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48635 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a48637:;
  /* 11a48637 jmp dword ptr [edx*4 + 0x11a48640] */
  switch (EDX) {
    case 0: goto L_11a48650;
    case 1: goto L_11a48658;
    case 2: goto L_11a48668;
    case 3: goto L_11a4867c;
    default: x86_unimpl("switch@0x11a48637 out of table"); return;
  }
  /* 11a4863e mov edi, edi */
  EDI = (EDI);
L_11a48650:;
  /* 11a48650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48653 pop esi */
  ESI = (pop32());
  /* 11a48654 pop edi */
  EDI = (pop32());
  /* 11a48655 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48656 ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a48657 nop  */
  /* nop */
L_11a48658:;
  /* 11a48658 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a4865b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a4865e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48661 pop esi */
  ESI = (pop32());
  /* 11a48662 pop edi */
  EDI = (pop32());
  /* 11a48663 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48664 ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a48665 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a48668:;
  /* 11a48668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a4866b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a4866e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a48671 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a48674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48677 pop esi */
  ESI = (pop32());
  /* 11a48678 pop edi */
  EDI = (pop32());
  /* 11a48679 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4867a ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
  /* 11a4867b nop  */
  /* nop */
L_11a4867c:;
  /* 11a4867c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a4867f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a48682 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a48685 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a48688 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a4868b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a4868e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48691 pop esi */
  ESI = (pop32());
  /* 11a48692 pop edi */
  EDI = (pop32());
  /* 11a48693 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48694 ret  */
  ESPCHK(0x11a48360u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a486a0 (88 bytes, 40 insns) */
void f_11a486a0(void) {
  FTRACE(0x11a486a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a486a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a486a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a486a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a486aa je 0x11a486f3 */
  if (C.zf) goto L_11a486f3;
  /* 11a486ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a486ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a486b2 push edi */
  push32((uint32_t)(EDI));
  /* 11a486b3 mov edi, ecx */
  EDI = (ECX);
  /* 11a486b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a486b8 jb 0x11a486e7 */
  if (C.cf) goto L_11a486e7;
  /* 11a486ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a486bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a486bf je 0x11a486c9 */
  if (C.zf) goto L_11a486c9;
  /* 11a486c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a486c3:;
  /* 11a486c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a486c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a486c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a486c7 jne 0x11a486c3 */
  if (!C.zf) goto L_11a486c3;
L_11a486c9:;
  /* 11a486c9 mov ecx, eax */
  ECX = (EAX);
  /* 11a486cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a486ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a486d0 mov ecx, eax */
  ECX = (EAX);
  /* 11a486d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a486d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a486d7 mov ecx, edx */
  ECX = (EDX);
  /* 11a486d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a486dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a486df je 0x11a486e7 */
  if (C.zf) goto L_11a486e7;
  /* 11a486e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a486e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a486e5 je 0x11a486ed */
  if (C.zf) goto L_11a486ed;
L_11a486e7:;
  /* 11a486e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a486e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a486ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a486eb jne 0x11a486e7 */
  if (!C.zf) goto L_11a486e7;
L_11a486ed:;
  /* 11a486ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a486f1 pop edi */
  EDI = (pop32());
  /* 11a486f2 ret  */
  ESPCHK(0x11a486a0u, _esp0);
  ESP += 4; return;
L_11a486f3:;
  /* 11a486f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a486f7 ret  */
  ESPCHK(0x11a486a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f8 @ 0x11a486f8 (293 bytes, 103 insns) */
void f_11a486f8(void) {
  FTRACE(0x11a486f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a486f8 push ebp */
  push32((uint32_t)(EBP));
  /* 11a486f9 mov ebp, esp */
  EBP = (ESP);
  /* 11a486fb mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 11a48700 call 0x11a482a0 */
  push32(0x11a48705u); f_11a482a0();
  /* 11a48705 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48706 push esi */
  push32((uint32_t)(ESI));
  /* 11a48707 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a48709 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4870b push esi */
  push32((uint32_t)(ESI));
  /* 11a4870c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4870f call 0x11a451a9 */
  push32(0x11a48714u); f_11a451a9();
  /* 11a48714 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 11a48717 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4871a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4871c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a4871f je 0x11a48817 */
  if (C.zf) goto L_11a48817;
  /* 11a48725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a48727 push esi */
  push32((uint32_t)(ESI));
  /* 11a48728 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4872b call 0x11a451a9 */
  push32(0x11a48730u); f_11a451a9();
  /* 11a48730 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48733 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48735 je 0x11a48817 */
  if (C.zf) goto L_11a48817;
  /* 11a4873b push edi */
  push32((uint32_t)(EDI));
  /* 11a4873c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a4873f sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48741 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a48743 jle 0x11a487ba */
  if ((C.zf||C.sf!=C.of)) goto L_11a487ba;
  /* 11a48745 mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 11a4874a lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 11a48750 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48751 push esi */
  push32((uint32_t)(ESI));
  /* 11a48752 push eax */
  push32((uint32_t)(EAX));
  /* 11a48753 call 0x11a486a0 */
  push32(0x11a48758u); f_11a486a0();
  /* 11a48758 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a4875d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a48760 call 0x11a48d65 */
  push32(0x11a48765u); f_11a48d65();
  /* 11a48765 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48768 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a4876b:;
  /* 11a4876b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4876d mov eax, ebx */
  EAX = (EBX);
  /* 11a4876f jge 0x11a48773 */
  if ((C.sf==C.of)) goto L_11a48773;
  /* 11a48771 mov eax, edi */
  EAX = (EDI);
L_11a48773:;
  /* 11a48773 push eax */
  push32((uint32_t)(EAX));
  /* 11a48774 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 11a4877a push eax */
  push32((uint32_t)(EAX));
  /* 11a4877b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4877e call 0x11a47623 */
  push32(0x11a48783u); f_11a47623();
  /* 11a48783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48786 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48789 je 0x11a48793 */
  if (C.zf) goto L_11a48793;
  /* 11a4878b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4878d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a4878f jle 0x11a487ab */
  if ((C.zf||C.sf!=C.of)) goto L_11a487ab;
  /* 11a48791 jmp 0x11a4876b */
  goto L_11a4876b;
L_11a48793:;
  /* 11a48793 call 0x11a44f2b */
  push32(0x11a48798u); f_11a44f2b();
  /* 11a48798 cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4879b jne 0x11a487a8 */
  if (!C.zf) goto L_11a487a8;
  /* 11a4879d call 0x11a44f22 */
  push32(0x11a487a2u); f_11a44f22();
  /* 11a487a2 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_11a487a8:;
  /* 11a487a8 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a487ab:;
  /* 11a487ab push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a487ae push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a487b1 call 0x11a48d65 */
  push32(0x11a487b6u); f_11a48d65();
  /* 11a487b6 pop ecx */
  ECX = (pop32());
  /* 11a487b7 pop ecx */
  ECX = (pop32());
  /* 11a487b8 jmp 0x11a48802 */
  goto L_11a48802;
L_11a487ba:;
  /* 11a487ba jge 0x11a48802 */
  if ((C.sf==C.of)) goto L_11a48802;
  /* 11a487bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a487be push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a487c1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a487c4 call 0x11a451a9 */
  push32(0x11a487c9u); f_11a451a9();
  /* 11a487c9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a487cc call 0x11a47468 */
  push32(0x11a487d1u); f_11a47468();
  /* 11a487d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a487d4 push eax */
  push32((uint32_t)(EAX));
  /* 11a487d5 call dword ptr [0x11a4a020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a020))), 0x11a487dbu);
  /* 11a487db mov esi, eax */
  ESI = (EAX);
  /* 11a487dd neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11a487df sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a487e1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11a487e3 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a487e4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a487e6 jne 0x11a48802 */
  if (!C.zf) goto L_11a48802;
  /* 11a487e8 call 0x11a44f22 */
  push32(0x11a487edu); f_11a44f22();
  /* 11a487ed mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11a487f3 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a487f9u);
  /* 11a487f9 mov edi, eax */
  EDI = (EAX);
  /* 11a487fb call 0x11a44f2b */
  push32(0x11a48800u); f_11a44f2b();
  /* 11a48800 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11a48802:;
  /* 11a48802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48804 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a48807 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4880a call 0x11a451a9 */
  push32(0x11a4880fu); f_11a451a9();
  /* 11a4880f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48812 mov eax, esi */
  EAX = (ESI);
  /* 11a48814 pop edi */
  EDI = (pop32());
  /* 11a48815 jmp 0x11a48819 */
  goto L_11a48819;
L_11a48817:;
  /* 11a48817 mov eax, ebx */
  EAX = (EBX);
L_11a48819:;
  /* 11a48819 pop esi */
  ESI = (pop32());
  /* 11a4881a pop ebx */
  EBX = (pop32());
  /* 11a4881b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4881c ret  */
  ESPCHK(0x11a486f8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000881d @ 0x11a4881d (511 bytes, 193 insns) */
void f_11a4881d(void) {
  FTRACE(0x11a4881du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4881d push ebp */
  push32((uint32_t)(EBP));
  /* 11a4881e mov ebp, esp */
  EBP = (ESP);
  /* 11a48820 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a48822 push 0x11a4a550 */
  push32((uint32_t)(0x11a4a550u));
  /* 11a48827 push 0x11a46fb4 */
  push32((uint32_t)(0x11a46fb4u));
  /* 11a4882c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a48832 push eax */
  push32((uint32_t)(EAX));
  /* 11a48833 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a4883a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4883d push ebx */
  push32((uint32_t)(EBX));
  /* 11a4883e push esi */
  push32((uint32_t)(ESI));
  /* 11a4883f push edi */
  push32((uint32_t)(EDI));
  /* 11a48840 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a48843 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a48845 cmp dword ptr [0x11a4f9d0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a4f9d0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4884b jne 0x11a48893 */
  if (!C.zf) goto L_11a48893;
  /* 11a4884d push edi */
  push32((uint32_t)(EDI));
  /* 11a4884e push edi */
  push32((uint32_t)(EDI));
  /* 11a4884f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48851 pop ebx */
  EBX = (pop32());
  /* 11a48852 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48853 push 0x11a4a548 */
  push32((uint32_t)(0x11a4a548u));
  /* 11a48858 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11a4885d push esi */
  push32((uint32_t)(ESI));
  /* 11a4885e push edi */
  push32((uint32_t)(EDI));
  /* 11a4885f call dword ptr [0x11a4a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a014))), 0x11a48865u);
  /* 11a48865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48867 je 0x11a48871 */
  if (C.zf) goto L_11a48871;
  /* 11a48869 mov dword ptr [0x11a4f9d0], ebx */
  w32((uint32_t)(0x11a4f9d0), (EBX));
  /* 11a4886f jmp 0x11a48893 */
  goto L_11a48893;
L_11a48871:;
  /* 11a48871 push edi */
  push32((uint32_t)(EDI));
  /* 11a48872 push edi */
  push32((uint32_t)(EDI));
  /* 11a48873 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48874 push 0x11a4a544 */
  push32((uint32_t)(0x11a4a544u));
  /* 11a48879 push esi */
  push32((uint32_t)(ESI));
  /* 11a4887a push edi */
  push32((uint32_t)(EDI));
  /* 11a4887b call dword ptr [0x11a4a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a018))), 0x11a48881u);
  /* 11a48881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48883 je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a48889 mov dword ptr [0x11a4f9d0], 2 */
  w32((uint32_t)(0x11a4f9d0), (0x2u));
L_11a48893:;
  /* 11a48893 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48896 jle 0x11a488a8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a488a8;
  /* 11a48898 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a4889b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a4889e call 0x11a48a41 */
  push32(0x11a488a3u); f_11a48a41();
  /* 11a488a3 pop ecx */
  ECX = (pop32());
  /* 11a488a4 pop ecx */
  ECX = (pop32());
  /* 11a488a5 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a488a8:;
  /* 11a488a8 mov eax, dword ptr [0x11a4f9d0] */
  EAX = (r32((uint32_t)(0x11a4f9d0)));
  /* 11a488ad cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a488b0 jne 0x11a488cf */
  if (!C.zf) goto L_11a488cf;
  /* 11a488b2 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a488b5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a488b8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a488bb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a488be push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a488c1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a488c4 call dword ptr [0x11a4a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a018))), 0x11a488cau);
  /* 11a488ca jmp 0x11a489ad */
  goto L_11a489ad;
L_11a488cf:;
  /* 11a488cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a488d2 jne 0x11a489ab */
  if (!C.zf) goto L_11a489ab;
  /* 11a488d8 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a488db jne 0x11a488e5 */
  if (!C.zf) goto L_11a488e5;
  /* 11a488dd mov eax, dword ptr [0x11a4f9c8] */
  EAX = (r32((uint32_t)(0x11a4f9c8)));
  /* 11a488e2 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a488e5:;
  /* 11a488e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a488e6 push edi */
  push32((uint32_t)(EDI));
  /* 11a488e7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a488ea push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a488ed mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a488f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a488f2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a488f4 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a488f7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a488f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a488f9 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a488fc call dword ptr [0x11a4a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a028))), 0x11a48902u);
  /* 11a48902 mov ebx, eax */
  EBX = (EAX);
  /* 11a48904 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11a48907 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48909 je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a4890f mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a48912 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11a48915 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48918 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a4891a call 0x11a482a0 */
  push32(0x11a4891fu); f_11a482a0();
  /* 11a4891f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a48922 mov eax, esp */
  EAX = (ESP);
  /* 11a48924 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a48927 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a4892b jmp 0x11a48940 */
  goto L_11a48940;
  /* 11a4892d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4892f pop eax */
  EAX = (pop32());
  /* 11a48930 ret  */
  ESPCHK(0x11a4881du, _esp0);
  ESP += 4; return;
  /* 11a48931 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a48934 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a48936 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a48939 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a4893d mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11a48940:;
  /* 11a48940 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48943 je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a48945 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48946 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a48949 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a4894c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a4894f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48951 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a48954 call dword ptr [0x11a4a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a028))), 0x11a4895au);
  /* 11a4895a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4895c je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a4895e push edi */
  push32((uint32_t)(EDI));
  /* 11a4895f push edi */
  push32((uint32_t)(EDI));
  /* 11a48960 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48961 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a48964 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a48967 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4896a call dword ptr [0x11a4a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a014))), 0x11a48970u);
  /* 11a48970 mov esi, eax */
  ESI = (EAX);
  /* 11a48972 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11a48975 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48977 je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a48979 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11a4897d je 0x11a489bf */
  if (C.zf) goto L_11a489bf;
  /* 11a4897f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48982 je 0x11a48a3a */
  if (C.zf) goto L_11a48a3a;
  /* 11a48988 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4898b jg 0x11a489ab */
  if ((!C.zf&&C.sf==C.of)) goto L_11a489ab;
  /* 11a4898d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a48990 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a48993 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48994 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a48997 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a4899a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4899d call dword ptr [0x11a4a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a014))), 0x11a489a3u);
  /* 11a489a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a489a5 jne 0x11a48a3a */
  if (!C.zf) goto L_11a48a3a;
L_11a489ab:;
  /* 11a489ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a489ad:;
  /* 11a489ad lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a489b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a489b3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a489ba pop edi */
  EDI = (pop32());
  /* 11a489bb pop esi */
  ESI = (pop32());
  /* 11a489bc pop ebx */
  EBX = (pop32());
  /* 11a489bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a489be ret  */
  ESPCHK(0x11a4881du, _esp0);
  ESP += 4; return;
L_11a489bf:;
  /* 11a489bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a489c6 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a489c9 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a489cc and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a489ce call 0x11a482a0 */
  push32(0x11a489d3u); f_11a482a0();
  /* 11a489d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a489d6 mov ebx, esp */
  EBX = (ESP);
  /* 11a489d8 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a489db or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a489df jmp 0x11a489f3 */
  goto L_11a489f3;
  /* 11a489e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a489e3 pop eax */
  EAX = (pop32());
  /* 11a489e4 ret  */
  ESPCHK(0x11a4881du, _esp0);
  ESP += 4; return;
  /* 11a489e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a489e8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a489ea xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a489ec or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a489f0 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11a489f3:;
  /* 11a489f3 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a489f5 je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a489f7 push esi */
  push32((uint32_t)(ESI));
  /* 11a489f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a489f9 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a489fc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a489ff push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a48a02 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a48a05 call dword ptr [0x11a4a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a014))), 0x11a48a0bu);
  /* 11a48a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48a0d je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
  /* 11a48a0f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48a12 push edi */
  push32((uint32_t)(EDI));
  /* 11a48a13 push edi */
  push32((uint32_t)(EDI));
  /* 11a48a14 jne 0x11a48a1a */
  if (!C.zf) goto L_11a48a1a;
  /* 11a48a16 push edi */
  push32((uint32_t)(EDI));
  /* 11a48a17 push edi */
  push32((uint32_t)(EDI));
  /* 11a48a18 jmp 0x11a48a20 */
  goto L_11a48a20;
L_11a48a1a:;
  /* 11a48a1a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a48a1d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11a48a20:;
  /* 11a48a20 push esi */
  push32((uint32_t)(ESI));
  /* 11a48a21 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48a22 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a48a27 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a48a2a call dword ptr [0x11a4a074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a074))), 0x11a48a30u);
  /* 11a48a30 mov esi, eax */
  ESI = (EAX);
  /* 11a48a32 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48a34 je 0x11a489ab */
  if (C.zf) goto L_11a489ab;
L_11a48a3a:;
  /* 11a48a3a mov eax, esi */
  EAX = (ESI);
  /* 11a48a3c jmp 0x11a489ad */
  goto L_11a489ad;
}

/* FUN_10008a41 @ 0x11a48a41 (43 bytes, 20 insns) */
void f_11a48a41(void) {
  FTRACE(0x11a48a41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48a41 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a48a45 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a48a49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a48a4b push esi */
  push32((uint32_t)(ESI));
  /* 11a48a4c lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11a48a4f je 0x11a48a5e */
  if (C.zf) goto L_11a48a5e;
L_11a48a51:;
  /* 11a48a51 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48a54 je 0x11a48a5e */
  if (C.zf) goto L_11a48a5e;
  /* 11a48a56 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a48a57 mov esi, ecx */
  ESI = (ECX);
  /* 11a48a59 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a48a5a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a48a5c jne 0x11a48a51 */
  if (!C.zf) goto L_11a48a51;
L_11a48a5e:;
  /* 11a48a5e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48a61 pop esi */
  ESI = (pop32());
  /* 11a48a62 jne 0x11a48a69 */
  if (!C.zf) goto L_11a48a69;
  /* 11a48a64 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48a68 ret  */
  ESPCHK(0x11a48a41u, _esp0);
  ESP += 4; return;
L_11a48a69:;
  /* 11a48a69 mov eax, edx */
  EAX = (EDX);
  /* 11a48a6b ret  */
  ESPCHK(0x11a48a41u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a6c @ 0x11a48a6c (318 bytes, 123 insns) */
void f_11a48a6c(void) {
  FTRACE(0x11a48a6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48a6c push ebp */
  push32((uint32_t)(EBP));
  /* 11a48a6d mov ebp, esp */
  EBP = (ESP);
  /* 11a48a6f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a48a71 push 0x11a4a568 */
  push32((uint32_t)(0x11a4a568u));
  /* 11a48a76 push 0x11a46fb4 */
  push32((uint32_t)(0x11a46fb4u));
  /* 11a48a7b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a48a81 push eax */
  push32((uint32_t)(EAX));
  /* 11a48a82 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a48a89 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48a8c push ebx */
  push32((uint32_t)(EBX));
  /* 11a48a8d push esi */
  push32((uint32_t)(ESI));
  /* 11a48a8e push edi */
  push32((uint32_t)(EDI));
  /* 11a48a8f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a48a92 mov eax, dword ptr [0x11a4f9d4] */
  EAX = (r32((uint32_t)(0x11a4f9d4)));
  /* 11a48a97 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a48a99 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48a9b jne 0x11a48adb */
  if (!C.zf) goto L_11a48adb;
  /* 11a48a9d lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a48aa0 push eax */
  push32((uint32_t)(EAX));
  /* 11a48aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48aa3 pop esi */
  ESI = (pop32());
  /* 11a48aa4 push esi */
  push32((uint32_t)(ESI));
  /* 11a48aa5 push 0x11a4a548 */
  push32((uint32_t)(0x11a4a548u));
  /* 11a48aaa push esi */
  push32((uint32_t)(ESI));
  /* 11a48aab call dword ptr [0x11a4a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a00c))), 0x11a48ab1u);
  /* 11a48ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48ab3 je 0x11a48ab9 */
  if (C.zf) goto L_11a48ab9;
  /* 11a48ab5 mov eax, esi */
  EAX = (ESI);
  /* 11a48ab7 jmp 0x11a48ad6 */
  goto L_11a48ad6;
L_11a48ab9:;
  /* 11a48ab9 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a48abc push eax */
  push32((uint32_t)(EAX));
  /* 11a48abd push esi */
  push32((uint32_t)(ESI));
  /* 11a48abe push 0x11a4a544 */
  push32((uint32_t)(0x11a4a544u));
  /* 11a48ac3 push esi */
  push32((uint32_t)(ESI));
  /* 11a48ac4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48ac5 call dword ptr [0x11a4a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a01c))), 0x11a48acbu);
  /* 11a48acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48acd je 0x11a48ba1 */
  if (C.zf) goto L_11a48ba1;
  /* 11a48ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a48ad5 pop eax */
  EAX = (pop32());
L_11a48ad6:;
  /* 11a48ad6 mov dword ptr [0x11a4f9d4], eax */
  w32((uint32_t)(0x11a4f9d4), (EAX));
L_11a48adb:;
  /* 11a48adb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48ade jne 0x11a48b04 */
  if (!C.zf) goto L_11a48b04;
  /* 11a48ae0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a48ae3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48ae5 jne 0x11a48aec */
  if (!C.zf) goto L_11a48aec;
  /* 11a48ae7 mov eax, dword ptr [0x11a4f9b8] */
  EAX = (r32((uint32_t)(0x11a4f9b8)));
L_11a48aec:;
  /* 11a48aec push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a48aef push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a48af2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a48af5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a48af8 push eax */
  push32((uint32_t)(EAX));
  /* 11a48af9 call dword ptr [0x11a4a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a01c))), 0x11a48affu);
  /* 11a48aff jmp 0x11a48ba3 */
  goto L_11a48ba3;
L_11a48b04:;
  /* 11a48b04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48b07 jne 0x11a48ba1 */
  if (!C.zf) goto L_11a48ba1;
  /* 11a48b0d cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48b10 jne 0x11a48b1a */
  if (!C.zf) goto L_11a48b1a;
  /* 11a48b12 mov eax, dword ptr [0x11a4f9c8] */
  EAX = (r32((uint32_t)(0x11a4f9c8)));
  /* 11a48b17 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a48b1a:;
  /* 11a48b1a push ebx */
  push32((uint32_t)(EBX));
  /* 11a48b1b push ebx */
  push32((uint32_t)(EBX));
  /* 11a48b1c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a48b1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a48b22 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a48b25 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a48b27 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48b29 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a48b2c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a48b2d push eax */
  push32((uint32_t)(EAX));
  /* 11a48b2e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a48b31 call dword ptr [0x11a4a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a028))), 0x11a48b37u);
  /* 11a48b37 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a48b3a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48b3c je 0x11a48ba1 */
  if (C.zf) goto L_11a48ba1;
  /* 11a48b3e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a48b41 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11a48b44 mov eax, edi */
  EAX = (EDI);
  /* 11a48b46 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48b49 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a48b4b call 0x11a482a0 */
  push32(0x11a48b50u); f_11a482a0();
  /* 11a48b50 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a48b53 mov esi, esp */
  ESI = (ESP);
  /* 11a48b55 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11a48b58 push edi */
  push32((uint32_t)(EDI));
  /* 11a48b59 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48b5a push esi */
  push32((uint32_t)(ESI));
  /* 11a48b5b call 0x11a486a0 */
  push32(0x11a48b60u); f_11a486a0();
  /* 11a48b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48b63 jmp 0x11a48b70 */
  goto L_11a48b70;
  /* 11a48b65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48b67 pop eax */
  EAX = (pop32());
  /* 11a48b68 ret  */
  ESPCHK(0x11a48a6cu, _esp0);
  ESP += 4; return;
  /* 11a48b69 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a48b6c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a48b6e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a48b70:;
  /* 11a48b70 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a48b74 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48b76 je 0x11a48ba1 */
  if (C.zf) goto L_11a48ba1;
  /* 11a48b78 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a48b7b push esi */
  push32((uint32_t)(ESI));
  /* 11a48b7c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a48b7f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a48b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48b84 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a48b87 call dword ptr [0x11a4a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a028))), 0x11a48b8du);
  /* 11a48b8d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48b8f je 0x11a48ba1 */
  if (C.zf) goto L_11a48ba1;
  /* 11a48b91 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a48b94 push eax */
  push32((uint32_t)(EAX));
  /* 11a48b95 push esi */
  push32((uint32_t)(ESI));
  /* 11a48b96 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a48b99 call dword ptr [0x11a4a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a00c))), 0x11a48b9fu);
  /* 11a48b9f jmp 0x11a48ba3 */
  goto L_11a48ba3;
L_11a48ba1:;
  /* 11a48ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a48ba3:;
  /* 11a48ba3 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a48ba6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a48ba9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a48bb0 pop edi */
  EDI = (pop32());
  /* 11a48bb1 pop esi */
  ESI = (pop32());
  /* 11a48bb2 pop ebx */
  EBX = (pop32());
  /* 11a48bb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48bb4 ret  */
  ESPCHK(0x11a48a6cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008bb5 @ 0x11a48bb5 (111 bytes, 44 insns) */
void f_11a48bb5(void) {
  FTRACE(0x11a48bb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48bb5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48bb6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a48bb8 cmp dword ptr [0x11a4f9b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4f9b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48bbe jne 0x11a48bd3 */
  if (!C.zf) goto L_11a48bd3;
  /* 11a48bc0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a48bc4 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48bc7 jl 0x11a48c22 */
  if ((C.sf!=C.of)) goto L_11a48c22;
  /* 11a48bc9 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48bcc jg 0x11a48c22 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a48c22;
  /* 11a48bce sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48bd1 pop ebx */
  EBX = (pop32());
  /* 11a48bd2 ret  */
  ESPCHK(0x11a48bb5u, _esp0);
  ESP += 4; return;
L_11a48bd3:;
  /* 11a48bd3 push esi */
  push32((uint32_t)(ESI));
  /* 11a48bd4 mov esi, 0x11a4fb24 */
  ESI = (0x11a4fb24u);
  /* 11a48bd9 push edi */
  push32((uint32_t)(EDI));
  /* 11a48bda push esi */
  push32((uint32_t)(ESI));
  /* 11a48bdb call dword ptr [0x11a4a010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a010))), 0x11a48be1u);
  /* 11a48be1 cmp dword ptr [0x11a4fb20], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4fb20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48be7 mov edi, dword ptr [0x11a4a008] */
  EDI = (r32((uint32_t)(0x11a4a008)));
  /* 11a48bed je 0x11a48bfd */
  if (C.zf) goto L_11a48bfd;
  /* 11a48bef push esi */
  push32((uint32_t)(ESI));
  /* 11a48bf0 call edi */
  call_ind((uint32_t)(EDI), 0x11a48bf2u);
  /* 11a48bf2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a48bf4 call 0x11a46e46 */
  push32(0x11a48bf9u); f_11a46e46();
  /* 11a48bf9 pop ecx */
  ECX = (pop32());
  /* 11a48bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48bfc pop ebx */
  EBX = (pop32());
L_11a48bfd:;
  /* 11a48bfd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a48c01 call 0x11a48c24 */
  push32(0x11a48c06u); f_11a48c24();
  /* 11a48c06 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a48c08 pop ecx */
  ECX = (pop32());
  /* 11a48c09 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a48c0d je 0x11a48c19 */
  if (C.zf) goto L_11a48c19;
  /* 11a48c0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a48c11 call 0x11a46ea7 */
  push32(0x11a48c16u); f_11a46ea7();
  /* 11a48c16 pop ecx */
  ECX = (pop32());
  /* 11a48c17 jmp 0x11a48c1c */
  goto L_11a48c1c;
L_11a48c19:;
  /* 11a48c19 push esi */
  push32((uint32_t)(ESI));
  /* 11a48c1a call edi */
  call_ind((uint32_t)(EDI), 0x11a48c1cu);
L_11a48c1c:;
  /* 11a48c1c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a48c20 pop edi */
  EDI = (pop32());
  /* 11a48c21 pop esi */
  ESI = (pop32());
L_11a48c22:;
  /* 11a48c22 pop ebx */
  EBX = (pop32());
  /* 11a48c23 ret  */
  ESPCHK(0x11a48bb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c24 @ 0x11a48c24 (204 bytes, 71 insns) */
void f_11a48c24(void) {
  FTRACE(0x11a48c24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48c24 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48c25 mov ebp, esp */
  EBP = (ESP);
  /* 11a48c27 push ecx */
  push32((uint32_t)(ECX));
  /* 11a48c28 cmp dword ptr [0x11a4f9b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f9b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48c2f push ebx */
  push32((uint32_t)(EBX));
  /* 11a48c30 jne 0x11a48c4f */
  if (!C.zf) goto L_11a48c4f;
  /* 11a48c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48c35 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48c38 jl 0x11a48ced */
  if ((C.sf!=C.of)) goto L_11a48ced;
  /* 11a48c3e cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48c41 jg 0x11a48ced */
  if ((!C.zf&&C.sf==C.of)) goto L_11a48ced;
  /* 11a48c47 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48c4a jmp 0x11a48ced */
  goto L_11a48ced;
L_11a48c4f:;
  /* 11a48c4f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48c52 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48c58 jge 0x11a48c82 */
  if ((C.sf==C.of)) goto L_11a48c82;
  /* 11a48c5a cmp dword ptr [0x11a4e06c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4e06c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48c61 jle 0x11a48c6f */
  if ((C.zf||C.sf!=C.of)) goto L_11a48c6f;
  /* 11a48c63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a48c65 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48c66 call 0x11a48cf0 */
  push32(0x11a48c6bu); f_11a48cf0();
  /* 11a48c6b pop ecx */
  ECX = (pop32());
  /* 11a48c6c pop ecx */
  ECX = (pop32());
  /* 11a48c6d jmp 0x11a48c7a */
  goto L_11a48c7a;
L_11a48c6f:;
  /* 11a48c6f mov eax, dword ptr [0x11a4de60] */
  EAX = (r32((uint32_t)(0x11a4de60)));
  /* 11a48c74 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11a48c77 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11a48c7a:;
  /* 11a48c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48c7c jne 0x11a48c82 */
  if (!C.zf) goto L_11a48c82;
L_11a48c7e:;
  /* 11a48c7e mov eax, ebx */
  EAX = (EBX);
  /* 11a48c80 jmp 0x11a48ced */
  goto L_11a48ced;
L_11a48c82:;
  /* 11a48c82 mov edx, dword ptr [0x11a4de60] */
  EDX = (r32((uint32_t)(0x11a4de60)));
  /* 11a48c88 mov eax, ebx */
  EAX = (EBX);
  /* 11a48c8a sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a48c8d movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11a48c90 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a48c95 je 0x11a48ca5 */
  if (C.zf) goto L_11a48ca5;
  /* 11a48c97 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11a48c9b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a48c9e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11a48ca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a48ca3 jmp 0x11a48cae */
  goto L_11a48cae;
L_11a48ca5:;
  /* 11a48ca5 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11a48ca9 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a48cac push 1 */
  push32((uint32_t)(0x1u));
L_11a48cae:;
  /* 11a48cae pop eax */
  EAX = (pop32());
  /* 11a48caf lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a48cb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48cb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a48cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a48cb9 push eax */
  push32((uint32_t)(EAX));
  /* 11a48cba lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a48cbd push eax */
  push32((uint32_t)(EAX));
  /* 11a48cbe push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a48cc3 push dword ptr [0x11a4f9b8] */
  push32((uint32_t)(r32((uint32_t)(0x11a4f9b8))));
  /* 11a48cc9 call 0x11a4881d */
  push32(0x11a48cceu); f_11a4881d();
  /* 11a48cce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48cd3 je 0x11a48c7e */
  if (C.zf) goto L_11a48c7e;
  /* 11a48cd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48cd8 jne 0x11a48ce0 */
  if (!C.zf) goto L_11a48ce0;
  /* 11a48cda movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a48cde jmp 0x11a48ced */
  goto L_11a48ced;
L_11a48ce0:;
  /* 11a48ce0 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11a48ce4 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a48ce8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a48ceb or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a48ced:;
  /* 11a48ced pop ebx */
  EBX = (pop32());
  /* 11a48cee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48cef ret  */
  ESPCHK(0x11a48c24u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cf0 @ 0x11a48cf0 (117 bytes, 46 insns) */
void f_11a48cf0(void) {
  FTRACE(0x11a48cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11a48cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a48cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48cf7 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a48cfa cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48d00 ja 0x11a48d0e */
  if ((!C.cf&&!C.zf)) goto L_11a48d0e;
  /* 11a48d02 mov ecx, dword ptr [0x11a4de60] */
  ECX = (r32((uint32_t)(0x11a4de60)));
  /* 11a48d08 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11a48d0c jmp 0x11a48d60 */
  goto L_11a48d60;
L_11a48d0e:;
  /* 11a48d0e mov ecx, eax */
  ECX = (EAX);
  /* 11a48d10 push esi */
  push32((uint32_t)(ESI));
  /* 11a48d11 mov esi, dword ptr [0x11a4de60] */
  ESI = (r32((uint32_t)(0x11a4de60)));
  /* 11a48d17 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a48d1a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11a48d1d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a48d22 pop esi */
  ESI = (pop32());
  /* 11a48d23 je 0x11a48d33 */
  if (C.zf) goto L_11a48d33;
  /* 11a48d25 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11a48d29 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11a48d2c mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11a48d2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a48d31 jmp 0x11a48d3c */
  goto L_11a48d3c;
L_11a48d33:;
  /* 11a48d33 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11a48d37 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11a48d3a push 1 */
  push32((uint32_t)(0x1u));
L_11a48d3c:;
  /* 11a48d3c pop eax */
  EAX = (pop32());
  /* 11a48d3d lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11a48d40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11a48d47 push eax */
  push32((uint32_t)(EAX));
  /* 11a48d48 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a48d4b push eax */
  push32((uint32_t)(EAX));
  /* 11a48d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a48d4e call 0x11a48a6c */
  push32(0x11a48d53u); f_11a48a6c();
  /* 11a48d53 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a48d58 jne 0x11a48d5c */
  if (!C.zf) goto L_11a48d5c;
  /* 11a48d5a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48d5b ret  */
  ESPCHK(0x11a48cf0u, _esp0);
  ESP += 4; return;
L_11a48d5c:;
  /* 11a48d5c movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11a48d60:;
  /* 11a48d60 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11a48d63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48d64 ret  */
  ESPCHK(0x11a48cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d65 @ 0x11a48d65 (97 bytes, 31 insns) */
void f_11a48d65(void) {
  FTRACE(0x11a48d65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48d65 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a48d69 push esi */
  push32((uint32_t)(ESI));
  /* 11a48d6a mov ecx, eax */
  ECX = (EAX);
  /* 11a48d6c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a48d6f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a48d72 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a48d75 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 11a48d7a mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a48d81 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11a48d85 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11a48d89 mov al, cl */
  AL = (CL);
  /* 11a48d8b and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11a48d90 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48d94 jne 0x11a48d9b */
  if (!C.zf) goto L_11a48d9b;
  /* 11a48d96 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 11a48d99 jmp 0x11a48da8 */
  goto L_11a48da8;
L_11a48d9b:;
  /* 11a48d9b cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48da3 jne 0x11a48db6 */
  if (!C.zf) goto L_11a48db6;
  /* 11a48da5 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_11a48da8:;
  /* 11a48da8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a48daa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48dac mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a48dae and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 11a48db2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48db4 pop esi */
  ESI = (pop32());
  /* 11a48db5 ret  */
  ESPCHK(0x11a48d65u, _esp0);
  ESP += 4; return;
L_11a48db6:;
  /* 11a48db6 call 0x11a44f22 */
  push32(0x11a48dbbu); f_11a44f22();
  /* 11a48dbb mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a48dc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a48dc4 pop esi */
  ESI = (pop32());
  /* 11a48dc5 ret  */
  ESPCHK(0x11a48d65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x11a48e60 (58 bytes, 32 insns) */
void f_11a48e60(void) {
  FTRACE(0x11a48e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48e61 mov ebp, esp */
  EBP = (ESP);
  /* 11a48e63 push esi */
  push32((uint32_t)(ESI));
  /* 11a48e64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a48e66 push eax */
  push32((uint32_t)(EAX));
  /* 11a48e67 push eax */
  push32((uint32_t)(EAX));
  /* 11a48e68 push eax */
  push32((uint32_t)(EAX));
  /* 11a48e69 push eax */
  push32((uint32_t)(EAX));
  /* 11a48e6a push eax */
  push32((uint32_t)(EAX));
  /* 11a48e6b push eax */
  push32((uint32_t)(EAX));
  /* 11a48e6c push eax */
  push32((uint32_t)(EAX));
  /* 11a48e6d push eax */
  push32((uint32_t)(EAX));
  /* 11a48e6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a48e71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a48e74:;
  /* 11a48e74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a48e76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a48e78 je 0x11a48e81 */
  if (C.zf) goto L_11a48e81;
  /* 11a48e7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a48e7b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a48e7b");
  /* 11a48e7f jmp 0x11a48e74 */
  goto L_11a48e74;
L_11a48e81:;
  /* 11a48e81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11a48e84:;
  /* 11a48e84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a48e86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a48e88 je 0x11a48e94 */
  if (C.zf) goto L_11a48e94;
  /* 11a48e8a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48e8b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a48e8b");
  /* 11a48e8f jae 0x11a48e84 */
  if (!C.cf) goto L_11a48e84;
  /* 11a48e91 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11a48e94:;
  /* 11a48e94 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48e97 pop esi */
  ESI = (pop32());
  /* 11a48e98 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48e99 ret  */
  ESPCHK(0x11a48e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea0 @ 0x11a48ea0 (208 bytes, 85 insns) */
void f_11a48ea0(void) {
  FTRACE(0x11a48ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11a48ea3 push edi */
  push32((uint32_t)(EDI));
  /* 11a48ea4 push esi */
  push32((uint32_t)(ESI));
  /* 11a48ea5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48ea6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a48ea9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48eac lea eax, [0x11a4f9b0] */
  EAX = ((uint32_t)(0x11a4f9b0));
  /* 11a48eb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48eb6 jne 0x11a48ef3 */
  if (!C.zf) goto L_11a48ef3;
  /* 11a48eb8 mov al, 0xff */
  AL = (0xffu);
  /* 11a48eba mov edi, edi */
  EDI = (EDI);
L_11a48ebc:;
  /* 11a48ebc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a48ebe je 0x11a48eee */
  if (C.zf) goto L_11a48eee;
  /* 11a48ec0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a48ec2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48ec3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11a48ec5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a48ec6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48ec8 je 0x11a48ebc */
  if (C.zf) goto L_11a48ebc;
  /* 11a48eca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a48ecc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48ece sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a48ed0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a48ed3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a48ed5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a48ed7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11a48ed9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a48edb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48edd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a48edf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a48ee2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a48ee4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a48ee6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48ee8 je 0x11a48ebc */
  if (C.zf) goto L_11a48ebc;
  /* 11a48eea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a48eec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11a48eee:;
  /* 11a48eee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a48ef1 jmp 0x11a48f6b */
  goto L_11a48f6b;
L_11a48ef3:;
  /* 11a48ef3 lock inc dword ptr [0x11a4fb24] */
  x86_unimpl("lock inc @ 0x11a48ef3");
  /* 11a48efa cmp dword ptr [0x11a4fb20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4fb20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48f01 jg 0x11a48f07 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a48f07;
  /* 11a48f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48f05 jmp 0x11a48f1c */
  goto L_11a48f1c;
L_11a48f07:;
  /* 11a48f07 lock dec dword ptr [0x11a4fb24] */
  x86_unimpl("lock dec @ 0x11a48f07");
  /* 11a48f0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a48f10 call 0x11a46e46 */
  push32(0x11a48f15u); f_11a46e46();
  /* 11a48f15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11a48f1c:;
  /* 11a48f1c mov eax, 0xff */
  EAX = (0xffu);
  /* 11a48f21 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a48f23 nop  */
  /* nop */
L_11a48f24:;
  /* 11a48f24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a48f26 je 0x11a48f4f */
  if (C.zf) goto L_11a48f4f;
  /* 11a48f28 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a48f2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48f2b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a48f2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a48f2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48f30 je 0x11a48f24 */
  if (C.zf) goto L_11a48f24;
  /* 11a48f32 push eax */
  push32((uint32_t)(EAX));
  /* 11a48f33 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48f34 call 0x11a49165 */
  push32(0x11a48f39u); f_11a49165();
  /* 11a48f39 mov ebx, eax */
  EBX = (EAX);
  /* 11a48f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48f3e call 0x11a49165 */
  push32(0x11a48f43u); f_11a49165();
  /* 11a48f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a48f46 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48f48 je 0x11a48f24 */
  if (C.zf) goto L_11a48f24;
  /* 11a48f4a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a48f4c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a48f4f:;
  /* 11a48f4f mov ebx, eax */
  EBX = (EAX);
  /* 11a48f51 pop eax */
  EAX = (pop32());
  /* 11a48f52 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a48f54 jne 0x11a48f5f */
  if (!C.zf) goto L_11a48f5f;
  /* 11a48f56 lock dec dword ptr [0x11a4fb24] */
  x86_unimpl("lock dec @ 0x11a48f56");
  /* 11a48f5d jmp 0x11a48f69 */
  goto L_11a48f69;
L_11a48f5f:;
  /* 11a48f5f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a48f61 call 0x11a46ea7 */
  push32(0x11a48f66u); f_11a46ea7();
  /* 11a48f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a48f69:;
  /* 11a48f69 mov eax, ebx */
  EAX = (EBX);
L_11a48f6b:;
  /* 11a48f6b pop ebx */
  EBX = (pop32());
  /* 11a48f6c pop esi */
  ESI = (pop32());
  /* 11a48f6d pop edi */
  EDI = (pop32());
  /* 11a48f6e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a48f6f ret  */
  ESPCHK(0x11a48ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f70 @ 0x11a48f70 (257 bytes, 103 insns) */
void f_11a48f70(void) {
  FTRACE(0x11a48f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a48f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a48f71 mov ebp, esp */
  EBP = (ESP);
  /* 11a48f73 push edi */
  push32((uint32_t)(EDI));
  /* 11a48f74 push esi */
  push32((uint32_t)(ESI));
  /* 11a48f75 push ebx */
  push32((uint32_t)(EBX));
  /* 11a48f76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a48f79 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a48f7b je 0x11a4906a */
  if (C.zf) goto L_11a4906a;
  /* 11a48f81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a48f84 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a48f87 lea eax, [0x11a4f9b0] */
  EAX = ((uint32_t)(0x11a4f9b0));
  /* 11a48f8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48f91 jne 0x11a48fe1 */
  if (!C.zf) goto L_11a48fe1;
  /* 11a48f93 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11a48f95 mov bl, 0x5a */
  BL = (0x5au);
  /* 11a48f97 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11a48f99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a48f9c:;
  /* 11a48f9c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11a48f9e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a48fa0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a48fa2 je 0x11a48fc5 */
  if (C.zf) goto L_11a48fc5;
  /* 11a48fa4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a48fa6 je 0x11a48fc5 */
  if (C.zf) goto L_11a48fc5;
  /* 11a48fa8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a48fa9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a48faa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48fac jb 0x11a48fb4 */
  if (C.cf) goto L_11a48fb4;
  /* 11a48fae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48fb0 ja 0x11a48fb4 */
  if ((!C.cf&&!C.zf)) goto L_11a48fb4;
  /* 11a48fb2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11a48fb4:;
  /* 11a48fb4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48fb6 jb 0x11a48fbe */
  if (C.cf) goto L_11a48fbe;
  /* 11a48fb8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48fba ja 0x11a48fbe */
  if ((!C.cf&&!C.zf)) goto L_11a48fbe;
  /* 11a48fbc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11a48fbe:;
  /* 11a48fbe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48fc0 jne 0x11a48fcf */
  if (!C.zf) goto L_11a48fcf;
  /* 11a48fc2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a48fc3 jne 0x11a48f9c */
  if (!C.zf) goto L_11a48f9c;
L_11a48fc5:;
  /* 11a48fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a48fc7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a48fc9 je 0x11a4906a */
  if (C.zf) goto L_11a4906a;
L_11a48fcf:;
  /* 11a48fcf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a48fd4 jb 0x11a4906a */
  if (C.cf) goto L_11a4906a;
  /* 11a48fda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a48fdc jmp 0x11a4906a */
  goto L_11a4906a;
L_11a48fe1:;
  /* 11a48fe1 lock inc dword ptr [0x11a4fb24] */
  x86_unimpl("lock inc @ 0x11a48fe1");
  /* 11a48fe8 cmp dword ptr [0x11a4fb20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4fb20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a48fef jg 0x11a48ff5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a48ff5;
  /* 11a48ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a48ff3 jmp 0x11a4900e */
  goto L_11a4900e;
L_11a48ff5:;
  /* 11a48ff5 lock dec dword ptr [0x11a4fb24] */
  x86_unimpl("lock dec @ 0x11a48ff5");
  /* 11a48ffc mov ebx, ecx */
  EBX = (ECX);
  /* 11a48ffe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a49000 call 0x11a46e46 */
  push32(0x11a49005u); f_11a46e46();
  /* 11a49005 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11a4900c mov ecx, ebx */
  ECX = (EBX);
L_11a4900e:;
  /* 11a4900e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a49010 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a49012 mov edi, edi */
  EDI = (EDI);
L_11a49014:;
  /* 11a49014 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a49016 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a49018 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a4901a je 0x11a4903f */
  if (C.zf) goto L_11a4903f;
  /* 11a4901c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a4901e je 0x11a4903f */
  if (C.zf) goto L_11a4903f;
  /* 11a49020 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a49021 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a49022 push ecx */
  push32((uint32_t)(ECX));
  /* 11a49023 push eax */
  push32((uint32_t)(EAX));
  /* 11a49024 push ebx */
  push32((uint32_t)(EBX));
  /* 11a49025 call 0x11a49165 */
  push32(0x11a4902au); f_11a49165();
  /* 11a4902a mov ebx, eax */
  EBX = (EAX);
  /* 11a4902c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4902f call 0x11a49165 */
  push32(0x11a49034u); f_11a49165();
  /* 11a49034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a49037 pop ecx */
  ECX = (pop32());
  /* 11a49038 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4903a jne 0x11a49045 */
  if (!C.zf) goto L_11a49045;
  /* 11a4903c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a4903d jne 0x11a49014 */
  if (!C.zf) goto L_11a49014;
L_11a4903f:;
  /* 11a4903f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a49041 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a49043 je 0x11a4904e */
  if (C.zf) goto L_11a4904e;
L_11a49045:;
  /* 11a49045 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a4904a jb 0x11a4904e */
  if (C.cf) goto L_11a4904e;
  /* 11a4904c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11a4904e:;
  /* 11a4904e pop eax */
  EAX = (pop32());
  /* 11a4904f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a49051 jne 0x11a4905c */
  if (!C.zf) goto L_11a4905c;
  /* 11a49053 lock dec dword ptr [0x11a4fb24] */
  x86_unimpl("lock dec @ 0x11a49053");
  /* 11a4905a jmp 0x11a4906a */
  goto L_11a4906a;
L_11a4905c:;
  /* 11a4905c mov ebx, ecx */
  EBX = (ECX);
  /* 11a4905e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a49060 call 0x11a46ea7 */
  push32(0x11a49065u); f_11a46ea7();
  /* 11a49065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a49068 mov ecx, ebx */
  ECX = (EBX);
L_11a4906a:;
  /* 11a4906a mov eax, ecx */
  EAX = (ECX);
  /* 11a4906c pop ebx */
  EBX = (pop32());
  /* 11a4906d pop esi */
  ESI = (pop32());
  /* 11a4906e pop edi */
  EDI = (pop32());
  /* 11a4906f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a49070 ret  */
  ESPCHK(0x11a48f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009165 @ 0x11a49165 (203 bytes, 78 insns) */
void f_11a49165(void) {
  FTRACE(0x11a49165u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a49165 push ebp */
  push32((uint32_t)(EBP));
  /* 11a49166 mov ebp, esp */
  EBP = (ESP);
  /* 11a49168 push ecx */
  push32((uint32_t)(ECX));
  /* 11a49169 cmp dword ptr [0x11a4f9b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f9b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a49170 push ebx */
  push32((uint32_t)(EBX));
  /* 11a49171 push esi */
  push32((uint32_t)(ESI));
  /* 11a49172 push edi */
  push32((uint32_t)(EDI));
  /* 11a49173 jne 0x11a49192 */
  if (!C.zf) goto L_11a49192;
  /* 11a49175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a49178 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4917b jl 0x11a4922b */
  if ((C.sf!=C.of)) goto L_11a4922b;
  /* 11a49181 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a49184 jg 0x11a4922b */
  if ((!C.zf&&C.sf==C.of)) goto L_11a4922b;
  /* 11a4918a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4918d jmp 0x11a4922b */
  goto L_11a4922b;
L_11a49192:;
  /* 11a49192 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a49195 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11a4919a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4919c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4919e pop esi */
  ESI = (pop32());
  /* 11a4919f jge 0x11a491c6 */
  if ((C.sf==C.of)) goto L_11a491c6;
  /* 11a491a1 cmp dword ptr [0x11a4e06c], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a4e06c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a491a7 jle 0x11a491b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a491b4;
  /* 11a491a9 push esi */
  push32((uint32_t)(ESI));
  /* 11a491aa push ebx */
  push32((uint32_t)(EBX));
  /* 11a491ab call 0x11a48cf0 */
  push32(0x11a491b0u); f_11a48cf0();
  /* 11a491b0 pop ecx */
  ECX = (pop32());
  /* 11a491b1 pop ecx */
  ECX = (pop32());
  /* 11a491b2 jmp 0x11a491be */
  goto L_11a491be;
L_11a491b4:;
  /* 11a491b4 mov eax, dword ptr [0x11a4de60] */
  EAX = (r32((uint32_t)(0x11a4de60)));
  /* 11a491b9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11a491bc and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11a491be:;
  /* 11a491be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a491c0 jne 0x11a491c6 */
  if (!C.zf) goto L_11a491c6;
L_11a491c2:;
  /* 11a491c2 mov eax, ebx */
  EAX = (EBX);
  /* 11a491c4 jmp 0x11a4922b */
  goto L_11a4922b;
L_11a491c6:;
  /* 11a491c6 mov edx, dword ptr [0x11a4de60] */
  EDX = (r32((uint32_t)(0x11a4de60)));
  /* 11a491cc mov eax, ebx */
  EAX = (EBX);
  /* 11a491ce sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a491d1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11a491d4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a491d9 je 0x11a491ea */
  if (C.zf) goto L_11a491ea;
  /* 11a491db and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11a491df push 2 */
  push32((uint32_t)(0x2u));
  /* 11a491e1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a491e4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11a491e7 pop eax */
  EAX = (pop32());
  /* 11a491e8 jmp 0x11a491f3 */
  goto L_11a491f3;
L_11a491ea:;
  /* 11a491ea and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11a491ee mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a491f1 mov eax, esi */
  EAX = (ESI);
L_11a491f3:;
  /* 11a491f3 push esi */
  push32((uint32_t)(ESI));
  /* 11a491f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a491f6 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a491f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a491fb push ecx */
  push32((uint32_t)(ECX));
  /* 11a491fc push eax */
  push32((uint32_t)(EAX));
  /* 11a491fd lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a49200 push eax */
  push32((uint32_t)(EAX));
  /* 11a49201 push edi */
  push32((uint32_t)(EDI));
  /* 11a49202 push dword ptr [0x11a4f9b8] */
  push32((uint32_t)(r32((uint32_t)(0x11a4f9b8))));
  /* 11a49208 call 0x11a4881d */
  push32(0x11a4920du); f_11a4881d();
  /* 11a4920d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a49210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a49212 je 0x11a491c2 */
  if (C.zf) goto L_11a491c2;
  /* 11a49214 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a49216 jne 0x11a4921e */
  if (!C.zf) goto L_11a4921e;
  /* 11a49218 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a4921c jmp 0x11a4922b */
  goto L_11a4922b;
L_11a4921e:;
  /* 11a4921e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11a49222 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a49226 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a49229 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a4922b:;
  /* 11a4922b pop edi */
  EDI = (pop32());
  /* 11a4922c pop esi */
  ESI = (pop32());
  /* 11a4922d pop ebx */
  EBX = (pop32());
  /* 11a4922e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4922f ret  */
  ESPCHK(0x11a49165u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11a49264 (6 bytes, 1 insns) */
void f_11a49264(void) {
  FTRACE(0x11a49264u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a49264 jmp dword ptr [0x11a4a044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a4a044)))); return;
}

