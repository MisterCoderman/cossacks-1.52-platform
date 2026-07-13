#include "recomp.h"

/* thunk_FUN_100014a0 @ 0x10e51005 (5 bytes, 1 insns) */
void f_10e51005(void) {
  FTRACE(0x10e51005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51005 jmp 0x10e514a0 */
  f_10e514a0(); return;
}

/* thunk_FUN_100014f0 @ 0x10e5100a (5 bytes, 1 insns) */
void f_10e5100a(void) {
  FTRACE(0x10e5100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5100a jmp 0x10e514f0 */
  f_10e514f0(); return;
}

/* OnInit @ 0x10e5100f (5 bytes, 1 insns) */
void f_10e5100f(void) {
  FTRACE(0x10e5100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5100f jmp 0x10e518b0 */
  f_10e518b0(); return;
}

/* thunk_FUN_100012d0 @ 0x10e51014 (5 bytes, 1 insns) */
void f_10e51014(void) {
  FTRACE(0x10e51014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51014 jmp 0x10e512d0 */
  f_10e512d0(); return;
}

/* thunk_FUN_10001350 @ 0x10e51019 (5 bytes, 1 insns) */
void f_10e51019(void) {
  FTRACE(0x10e51019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51019 jmp 0x10e51350 */
  f_10e51350(); return;
}

/* thunk_FUN_100010c0 @ 0x10e5101e (5 bytes, 1 insns) */
void f_10e5101e(void) {
  FTRACE(0x10e5101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5101e jmp 0x10e510c0 */
  f_10e510c0(); return;
}

/* thunk_FUN_10001590 @ 0x10e51023 (5 bytes, 1 insns) */
void f_10e51023(void) {
  FTRACE(0x10e51023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51023 jmp 0x10e51590 */
  f_10e51590(); return;
}

/* thunk_FUN_10001120 @ 0x10e51028 (5 bytes, 1 insns) */
void f_10e51028(void) {
  FTRACE(0x10e51028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51028 jmp 0x10e51120 */
  f_10e51120(); return;
}

/* thunk_FUN_10001450 @ 0x10e51032 (5 bytes, 1 insns) */
void f_10e51032(void) {
  FTRACE(0x10e51032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51032 jmp 0x10e51450 */
  f_10e51450(); return;
}

/* ProcessScenary @ 0x10e5103c (5 bytes, 1 insns) */
void f_10e5103c(void) {
  FTRACE(0x10e5103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5103c jmp 0x10e527d0 */
  f_10e527d0(); return;
}

/* thunk_FUN_100016f0 @ 0x10e51046 (5 bytes, 1 insns) */
void f_10e51046(void) {
  FTRACE(0x10e51046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51046 jmp 0x10e516f0 */
  f_10e516f0(); return;
}

/* thunk_FUN_10001260 @ 0x10e51050 (5 bytes, 1 insns) */
void f_10e51050(void) {
  FTRACE(0x10e51050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51050 jmp 0x10e51260 */
  f_10e51260(); return;
}

/* thunk_FUN_10001780 @ 0x10e51055 (5 bytes, 1 insns) */
void f_10e51055(void) {
  FTRACE(0x10e51055u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51055 jmp 0x10e51780 */
  f_10e51780(); return;
}

/* thunk_FUN_100011d0 @ 0x10e5105a (5 bytes, 1 insns) */
void f_10e5105a(void) {
  FTRACE(0x10e5105au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5105a jmp 0x10e511d0 */
  f_10e511d0(); return;
}

/* FUN_100010c0 @ 0x10e510c0 (67 bytes, 26 insns) */
void f_10e510c0(void) {
  FTRACE(0x10e510c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e510c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e510c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e510c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e510c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e510c7 push esi */
  push32((uint32_t)(ESI));
  /* 10e510c8 push edi */
  push32((uint32_t)(EDI));
  /* 10e510c9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e510cc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e510d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e510d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e510d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e510db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e510de cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e510e2 je 0x10e510e6 */
  if (C.zf) goto L_10e510e6;
  /* 10e510e4 jmp 0x10e510eb */
  goto L_10e510eb;
L_10e510e6:;
  /* 10e510e6 call 0x10e5100f */
  push32(0x10e510ebu); f_10e5100f();
L_10e510eb:;
  /* 10e510eb mov eax, 1 */
  EAX = (0x1u);
  /* 10e510f0 pop edi */
  EDI = (pop32());
  /* 10e510f1 pop esi */
  ESI = (pop32());
  /* 10e510f2 pop ebx */
  EBX = (pop32());
  /* 10e510f3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e510f6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e510f8 call 0x10e553d0 */
  push32(0x10e510fdu); f_10e553d0();
  /* 10e510fd mov esp, ebp */
  ESP = (EBP);
  /* 10e510ff pop ebp */
  EBP = (pop32());
  /* 10e51100 ret 0xc */
  ESPCHK(0x10e510c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001120 @ 0x10e51120 (133 bytes, 49 insns) */
void f_10e51120(void) {
  FTRACE(0x10e51120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51120 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51121 mov ebp, esp */
  EBP = (ESP);
  /* 10e51123 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51126 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51127 push esi */
  push32((uint32_t)(ESI));
  /* 10e51128 push edi */
  push32((uint32_t)(EDI));
  /* 10e51129 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e5112c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e51131 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51136 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51138 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5113f jmp 0x10e5114a */
  goto L_10e5114a;
L_10e51141:;
  /* 10e51141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51147 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5114a:;
  /* 10e5114a cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5114e jg 0x10e51194 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e51194;
  /* 10e51150 mov esi, esp */
  ESI = (ESP);
  /* 10e51152 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e51155 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51156 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e51159 push edx */
  push32((uint32_t)(EDX));
  /* 10e5115a call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e51160u);
  /* 10e51160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51165 call 0x10e553d0 */
  push32(0x10e5116au); f_10e553d0();
  /* 10e5116a cmp eax, dword ptr [0x10e80a30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e80a30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51170 jge 0x10e51192 */
  if ((C.sf==C.of)) goto L_10e51192;
  /* 10e51172 mov esi, esp */
  ESI = (ESP);
  /* 10e51174 mov eax, dword ptr [0x10e80a30] */
  EAX = (r32((uint32_t)(0x10e80a30)));
  /* 10e51179 push eax */
  push32((uint32_t)(EAX));
  /* 10e5117a mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e5117d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5117e mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e51181 push edx */
  push32((uint32_t)(EDX));
  /* 10e51182 call dword ptr [0x10e85544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85544))), 0x10e51188u);
  /* 10e51188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5118b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5118d call 0x10e553d0 */
  push32(0x10e51192u); f_10e553d0();
L_10e51192:;
  /* 10e51192 jmp 0x10e51141 */
  goto L_10e51141;
L_10e51194:;
  /* 10e51194 pop edi */
  EDI = (pop32());
  /* 10e51195 pop esi */
  ESI = (pop32());
  /* 10e51196 pop ebx */
  EBX = (pop32());
  /* 10e51197 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5119a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5119c call 0x10e553d0 */
  push32(0x10e511a1u); f_10e553d0();
  /* 10e511a1 mov esp, ebp */
  ESP = (EBP);
  /* 10e511a3 pop ebp */
  EBP = (pop32());
  /* 10e511a4 ret  */
  ESPCHK(0x10e51120u, _esp0);
  ESP += 4; return;
}

/* FUN_100011d0 @ 0x10e511d0 (105 bytes, 40 insns) */
void f_10e511d0(void) {
  FTRACE(0x10e511d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e511d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e511d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e511d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e511d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e511d7 push esi */
  push32((uint32_t)(ESI));
  /* 10e511d8 push edi */
  push32((uint32_t)(EDI));
  /* 10e511d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e511dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e511e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e511e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e511e8 mov esi, esp */
  ESI = (ESP);
  /* 10e511ea mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10e511ed push eax */
  push32((uint32_t)(EAX));
  /* 10e511ee mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e511f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e511f2 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e511f8u);
  /* 10e511f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e511fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e511fd call 0x10e553d0 */
  push32(0x10e51202u); f_10e553d0();
  /* 10e51202 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51207 jge 0x10e51228 */
  if ((C.sf==C.of)) goto L_10e51228;
  /* 10e51209 mov esi, esp */
  ESI = (ESP);
  /* 10e5120b push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 10e51210 mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10e51213 push edx */
  push32((uint32_t)(EDX));
  /* 10e51214 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e51217 push eax */
  push32((uint32_t)(EAX));
  /* 10e51218 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e5121eu);
  /* 10e5121e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51223 call 0x10e553d0 */
  push32(0x10e51228u); f_10e553d0();
L_10e51228:;
  /* 10e51228 pop edi */
  EDI = (pop32());
  /* 10e51229 pop esi */
  ESI = (pop32());
  /* 10e5122a pop ebx */
  EBX = (pop32());
  /* 10e5122b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5122e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51230 call 0x10e553d0 */
  push32(0x10e51235u); f_10e553d0();
  /* 10e51235 mov esp, ebp */
  ESP = (EBP);
  /* 10e51237 pop ebp */
  EBP = (pop32());
  /* 10e51238 ret  */
  ESPCHK(0x10e511d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001260 @ 0x10e51260 (83 bytes, 33 insns) */
void f_10e51260(void) {
  FTRACE(0x10e51260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51260 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51261 mov ebp, esp */
  EBP = (ESP);
  /* 10e51263 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51266 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51267 push esi */
  push32((uint32_t)(ESI));
  /* 10e51268 push edi */
  push32((uint32_t)(EDI));
  /* 10e51269 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e5126c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e51271 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51276 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51278 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5127f jmp 0x10e5128a */
  goto L_10e5128a;
L_10e51281:;
  /* 10e51281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51284 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5128a:;
  /* 10e5128a cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5128e jg 0x10e512a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e512a2;
  /* 10e51290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51293 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51297 push edx */
  push32((uint32_t)(EDX));
  /* 10e51298 call 0x10e5105a */
  push32(0x10e5129du); f_10e5105a();
  /* 10e5129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e512a0 jmp 0x10e51281 */
  goto L_10e51281;
L_10e512a2:;
  /* 10e512a2 pop edi */
  EDI = (pop32());
  /* 10e512a3 pop esi */
  ESI = (pop32());
  /* 10e512a4 pop ebx */
  EBX = (pop32());
  /* 10e512a5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e512a8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e512aa call 0x10e553d0 */
  push32(0x10e512afu); f_10e553d0();
  /* 10e512af mov esp, ebp */
  ESP = (EBP);
  /* 10e512b1 pop ebp */
  EBP = (pop32());
  /* 10e512b2 ret  */
  ESPCHK(0x10e51260u, _esp0);
  ESP += 4; return;
}

/* FUN_100012d0 @ 0x10e512d0 (102 bytes, 40 insns) */
void f_10e512d0(void) {
  FTRACE(0x10e512d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e512d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e512d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e512d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e512d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e512d7 push esi */
  push32((uint32_t)(ESI));
  /* 10e512d8 push edi */
  push32((uint32_t)(EDI));
  /* 10e512d9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e512dc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e512e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e512e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e512e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e512ef jmp 0x10e512fa */
  goto L_10e512fa;
L_10e512f1:;
  /* 10e512f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e512f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e512f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e512fa:;
  /* 10e512fa cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e512fe jge 0x10e51322 */
  if ((C.sf==C.of)) goto L_10e51322;
  /* 10e51300 mov esi, esp */
  ESI = (ESP);
  /* 10e51302 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e51305 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51306 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51309 push edx */
  push32((uint32_t)(EDX));
  /* 10e5130a call dword ptr [0x10e85538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85538))), 0x10e51310u);
  /* 10e51310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51315 call 0x10e553d0 */
  push32(0x10e5131au); f_10e553d0();
  /* 10e5131a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5131c jle 0x10e51320 */
  if ((C.zf||C.sf!=C.of)) goto L_10e51320;
  /* 10e5131e jmp 0x10e51322 */
  goto L_10e51322;
L_10e51320:;
  /* 10e51320 jmp 0x10e512f1 */
  goto L_10e512f1;
L_10e51322:;
  /* 10e51322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51325 pop edi */
  EDI = (pop32());
  /* 10e51326 pop esi */
  ESI = (pop32());
  /* 10e51327 pop ebx */
  EBX = (pop32());
  /* 10e51328 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5132b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5132d call 0x10e553d0 */
  push32(0x10e51332u); f_10e553d0();
  /* 10e51332 mov esp, ebp */
  ESP = (EBP);
  /* 10e51334 pop ebp */
  EBP = (pop32());
  /* 10e51335 ret  */
  ESPCHK(0x10e512d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001350 @ 0x10e51350 (199 bytes, 75 insns) */
void f_10e51350(void) {
  FTRACE(0x10e51350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51350 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51351 mov ebp, esp */
  EBP = (ESP);
  /* 10e51353 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51356 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51357 push esi */
  push32((uint32_t)(ESI));
  /* 10e51358 push edi */
  push32((uint32_t)(EDI));
  /* 10e51359 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e5135c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e51361 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51366 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5136b push eax */
  push32((uint32_t)(EAX));
  /* 10e5136c call 0x10e51014 */
  push32(0x10e51371u); f_10e51014();
  /* 10e51371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e51377 mov esi, esp */
  ESI = (ESP);
  /* 10e51379 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e5137c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5137d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51380 push edx */
  push32((uint32_t)(EDX));
  /* 10e51381 call dword ptr [0x10e85538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85538))), 0x10e51387u);
  /* 10e51387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5138a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5138c call 0x10e553d0 */
  push32(0x10e51391u); f_10e553d0();
  /* 10e51391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e51393 je 0x10e51403 */
  if (C.zf) goto L_10e51403;
  /* 10e51395 mov esi, esp */
  ESI = (ESP);
  /* 10e51397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e51399 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5139c push eax */
  push32((uint32_t)(EAX));
  /* 10e5139d mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e513a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e513a1 call dword ptr [0x10e85528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85528))), 0x10e513a7u);
  /* 10e513a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e513aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e513ac call 0x10e553d0 */
  push32(0x10e513b1u); f_10e553d0();
  /* 10e513b1 mov esi, esp */
  ESI = (ESP);
  /* 10e513b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e513b5 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e513b8 push edx */
  push32((uint32_t)(EDX));
  /* 10e513b9 call dword ptr [0x10e8552c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8552c))), 0x10e513bfu);
  /* 10e513bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e513c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e513c4 call 0x10e553d0 */
  push32(0x10e513c9u); f_10e553d0();
  /* 10e513c9 mov esi, esp */
  ESI = (ESP);
  /* 10e513cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e513cd mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e513d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e513d1 call dword ptr [0x10e85530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85530))), 0x10e513d7u);
  /* 10e513d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e513da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e513dc call 0x10e553d0 */
  push32(0x10e513e1u); f_10e553d0();
  /* 10e513e1 mov esi, esp */
  ESI = (ESP);
  /* 10e513e3 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 10e513e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e513e7 mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 10e513ea push edx */
  push32((uint32_t)(EDX));
  /* 10e513eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e513ee push eax */
  push32((uint32_t)(EAX));
  /* 10e513ef mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e513f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e513f3 call dword ptr [0x10e85534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85534))), 0x10e513f9u);
  /* 10e513f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e513fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e513fe call 0x10e553d0 */
  push32(0x10e51403u); f_10e553d0();
L_10e51403:;
  /* 10e51403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51406 pop edi */
  EDI = (pop32());
  /* 10e51407 pop esi */
  ESI = (pop32());
  /* 10e51408 pop ebx */
  EBX = (pop32());
  /* 10e51409 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5140c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5140e call 0x10e553d0 */
  push32(0x10e51413u); f_10e553d0();
  /* 10e51413 mov esp, ebp */
  ESP = (EBP);
  /* 10e51415 pop ebp */
  EBP = (pop32());
  /* 10e51416 ret  */
  ESPCHK(0x10e51350u, _esp0);
  ESP += 4; return;
}

/* FUN_10001450 @ 0x10e51450 (64 bytes, 27 insns) */
void f_10e51450(void) {
  FTRACE(0x10e51450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51450 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51451 mov ebp, esp */
  EBP = (ESP);
  /* 10e51453 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51456 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51457 push esi */
  push32((uint32_t)(ESI));
  /* 10e51458 push edi */
  push32((uint32_t)(EDI));
  /* 10e51459 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e5145c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e51461 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51466 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51468 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5146a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10e5146f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e51472 push eax */
  push32((uint32_t)(EAX));
  /* 10e51473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51476 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51477 call 0x10e51019 */
  push32(0x10e5147cu); f_10e51019();
  /* 10e5147c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5147f pop edi */
  EDI = (pop32());
  /* 10e51480 pop esi */
  ESI = (pop32());
  /* 10e51481 pop ebx */
  EBX = (pop32());
  /* 10e51482 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51485 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51487 call 0x10e553d0 */
  push32(0x10e5148cu); f_10e553d0();
  /* 10e5148c mov esp, ebp */
  ESP = (EBP);
  /* 10e5148e pop ebp */
  EBP = (pop32());
  /* 10e5148f ret  */
  ESPCHK(0x10e51450u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x10e514a0 (63 bytes, 28 insns) */
void f_10e514a0(void) {
  FTRACE(0x10e514a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e514a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e514a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e514a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e514a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e514a7 push esi */
  push32((uint32_t)(ESI));
  /* 10e514a8 push edi */
  push32((uint32_t)(EDI));
  /* 10e514a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e514ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e514b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e514b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e514b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e514ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e514bd push eax */
  push32((uint32_t)(EAX));
  /* 10e514be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e514c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e514c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e514c5 push edx */
  push32((uint32_t)(EDX));
  /* 10e514c6 call 0x10e51019 */
  push32(0x10e514cbu); f_10e51019();
  /* 10e514cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e514ce pop edi */
  EDI = (pop32());
  /* 10e514cf pop esi */
  ESI = (pop32());
  /* 10e514d0 pop ebx */
  EBX = (pop32());
  /* 10e514d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e514d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e514d6 call 0x10e553d0 */
  push32(0x10e514dbu); f_10e553d0();
  /* 10e514db mov esp, ebp */
  ESP = (EBP);
  /* 10e514dd pop ebp */
  EBP = (pop32());
  /* 10e514de ret  */
  ESPCHK(0x10e514a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014f0 @ 0x10e514f0 (64 bytes, 27 insns) */
void f_10e514f0(void) {
  FTRACE(0x10e514f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e514f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e514f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e514f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e514f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e514f7 push esi */
  push32((uint32_t)(ESI));
  /* 10e514f8 push edi */
  push32((uint32_t)(EDI));
  /* 10e514f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e514fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e51501 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51506 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51508 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5150a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10e5150f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e51512 push eax */
  push32((uint32_t)(EAX));
  /* 10e51513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51516 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51517 call 0x10e51019 */
  push32(0x10e5151cu); f_10e51019();
  /* 10e5151c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5151f pop edi */
  EDI = (pop32());
  /* 10e51520 pop esi */
  ESI = (pop32());
  /* 10e51521 pop ebx */
  EBX = (pop32());
  /* 10e51522 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51525 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51527 call 0x10e553d0 */
  push32(0x10e5152cu); f_10e553d0();
  /* 10e5152c mov esp, ebp */
  ESP = (EBP);
  /* 10e5152e pop ebp */
  EBP = (pop32());
  /* 10e5152f ret  */
  ESPCHK(0x10e514f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x10e51540 (63 bytes, 28 insns) */
void f_10e51540(void) {
  FTRACE(0x10e51540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51540 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51541 mov ebp, esp */
  EBP = (ESP);
  /* 10e51543 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51546 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51547 push esi */
  push32((uint32_t)(ESI));
  /* 10e51548 push edi */
  push32((uint32_t)(EDI));
  /* 10e51549 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e5154c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e51551 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51556 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51558 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5155a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5155d push eax */
  push32((uint32_t)(EAX));
  /* 10e5155e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e51561 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51565 push edx */
  push32((uint32_t)(EDX));
  /* 10e51566 call 0x10e51019 */
  push32(0x10e5156bu); f_10e51019();
  /* 10e5156b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5156e pop edi */
  EDI = (pop32());
  /* 10e5156f pop esi */
  ESI = (pop32());
  /* 10e51570 pop ebx */
  EBX = (pop32());
  /* 10e51571 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51574 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51576 call 0x10e553d0 */
  push32(0x10e5157bu); f_10e553d0();
  /* 10e5157b mov esp, ebp */
  ESP = (EBP);
  /* 10e5157d pop ebp */
  EBP = (pop32());
  /* 10e5157e ret  */
  ESPCHK(0x10e51540u, _esp0);
  ESP += 4; return;
}

/* FUN_10001590 @ 0x10e51590 (151 bytes, 59 insns) */
void f_10e51590(void) {
  FTRACE(0x10e51590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51591 mov ebp, esp */
  EBP = (ESP);
  /* 10e51593 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51596 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51597 push esi */
  push32((uint32_t)(ESI));
  /* 10e51598 push edi */
  push32((uint32_t)(EDI));
  /* 10e51599 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e5159c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e515a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e515a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e515a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e515ab push eax */
  push32((uint32_t)(EAX));
  /* 10e515ac call 0x10e51014 */
  push32(0x10e515b1u); f_10e51014();
  /* 10e515b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e515b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e515b7 mov esi, esp */
  ESI = (ESP);
  /* 10e515b9 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e515bc push ecx */
  push32((uint32_t)(ECX));
  /* 10e515bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e515c0 push edx */
  push32((uint32_t)(EDX));
  /* 10e515c1 call dword ptr [0x10e85538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85538))), 0x10e515c7u);
  /* 10e515c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e515ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e515cc call 0x10e553d0 */
  push32(0x10e515d1u); f_10e553d0();
  /* 10e515d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e515d3 je 0x10e51613 */
  if (C.zf) goto L_10e51613;
  /* 10e515d5 mov esi, esp */
  ESI = (ESP);
  /* 10e515d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e515d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e515dc push eax */
  push32((uint32_t)(EAX));
  /* 10e515dd mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e515e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e515e1 call dword ptr [0x10e85528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85528))), 0x10e515e7u);
  /* 10e515e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e515ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e515ec call 0x10e553d0 */
  push32(0x10e515f1u); f_10e553d0();
  /* 10e515f1 mov esi, esp */
  ESI = (ESP);
  /* 10e515f3 mov dl, byte ptr [ebp + 0x14] */
  DL = (r8((uint32_t)(EBP + 0x14)));
  /* 10e515f6 push edx */
  push32((uint32_t)(EDX));
  /* 10e515f7 mov al, byte ptr [ebp + 0x10] */
  AL = (r8((uint32_t)(EBP + 0x10)));
  /* 10e515fa push eax */
  push32((uint32_t)(EAX));
  /* 10e515fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e515fe push ecx */
  push32((uint32_t)(ECX));
  /* 10e515ff mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 10e51602 push edx */
  push32((uint32_t)(EDX));
  /* 10e51603 call dword ptr [0x10e85524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85524))), 0x10e51609u);
  /* 10e51609 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5160c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5160e call 0x10e553d0 */
  push32(0x10e51613u); f_10e553d0();
L_10e51613:;
  /* 10e51613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51616 pop edi */
  EDI = (pop32());
  /* 10e51617 pop esi */
  ESI = (pop32());
  /* 10e51618 pop ebx */
  EBX = (pop32());
  /* 10e51619 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5161c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5161e call 0x10e553d0 */
  push32(0x10e51623u); f_10e553d0();
  /* 10e51623 mov esp, ebp */
  ESP = (EBP);
  /* 10e51625 pop ebp */
  EBP = (pop32());
  /* 10e51626 ret  */
  ESPCHK(0x10e51590u, _esp0);
  ESP += 4; return;
}

/* FUN_10001650 @ 0x10e51650 (64 bytes, 27 insns) */
void f_10e51650(void) {
  FTRACE(0x10e51650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51650 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51651 mov ebp, esp */
  EBP = (ESP);
  /* 10e51653 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51656 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51657 push esi */
  push32((uint32_t)(ESI));
  /* 10e51658 push edi */
  push32((uint32_t)(EDI));
  /* 10e51659 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e5165c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e51661 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51666 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51668 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5166a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10e5166f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e51672 push eax */
  push32((uint32_t)(EAX));
  /* 10e51673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51676 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51677 call 0x10e51023 */
  push32(0x10e5167cu); f_10e51023();
  /* 10e5167c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5167f pop edi */
  EDI = (pop32());
  /* 10e51680 pop esi */
  ESI = (pop32());
  /* 10e51681 pop ebx */
  EBX = (pop32());
  /* 10e51682 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51685 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51687 call 0x10e553d0 */
  push32(0x10e5168cu); f_10e553d0();
  /* 10e5168c mov esp, ebp */
  ESP = (EBP);
  /* 10e5168e pop ebp */
  EBP = (pop32());
  /* 10e5168f ret  */
  ESPCHK(0x10e51650u, _esp0);
  ESP += 4; return;
}

/* FUN_100016a0 @ 0x10e516a0 (63 bytes, 28 insns) */
void f_10e516a0(void) {
  FTRACE(0x10e516a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e516a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e516a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e516a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e516a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e516a7 push esi */
  push32((uint32_t)(ESI));
  /* 10e516a8 push edi */
  push32((uint32_t)(EDI));
  /* 10e516a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e516ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e516b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e516b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e516b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e516ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e516bd push eax */
  push32((uint32_t)(EAX));
  /* 10e516be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e516c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e516c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e516c5 push edx */
  push32((uint32_t)(EDX));
  /* 10e516c6 call 0x10e51023 */
  push32(0x10e516cbu); f_10e51023();
  /* 10e516cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e516ce pop edi */
  EDI = (pop32());
  /* 10e516cf pop esi */
  ESI = (pop32());
  /* 10e516d0 pop ebx */
  EBX = (pop32());
  /* 10e516d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e516d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e516d6 call 0x10e553d0 */
  push32(0x10e516dbu); f_10e553d0();
  /* 10e516db mov esp, ebp */
  ESP = (EBP);
  /* 10e516dd pop ebp */
  EBP = (pop32());
  /* 10e516de ret  */
  ESPCHK(0x10e516a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100016f0 @ 0x10e516f0 (113 bytes, 42 insns) */
void f_10e516f0(void) {
  FTRACE(0x10e516f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e516f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e516f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e516f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e516f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e516f7 push esi */
  push32((uint32_t)(ESI));
  /* 10e516f8 push edi */
  push32((uint32_t)(EDI));
  /* 10e516f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e516fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e51701 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51706 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51708 mov esi, esp */
  ESI = (ESP);
  /* 10e5170a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e5170c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5170f push eax */
  push32((uint32_t)(EAX));
  /* 10e51710 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 10e51713 push ecx */
  push32((uint32_t)(ECX));
  /* 10e51714 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e51717 push edx */
  push32((uint32_t)(EDX));
  /* 10e51718 push 0x10e824a8 */
  push32((uint32_t)(0x10e824a8u));
  /* 10e5171d push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e51722 call dword ptr [0x10e8551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8551c))), 0x10e51728u);
  /* 10e51728 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5172b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5172d call 0x10e553d0 */
  push32(0x10e51732u); f_10e553d0();
  /* 10e51732 mov esi, esp */
  ESI = (ESP);
  /* 10e51734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51737 push eax */
  push32((uint32_t)(EAX));
  /* 10e51738 push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e5173d call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e51743u);
  /* 10e51743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51748 call 0x10e553d0 */
  push32(0x10e5174du); f_10e553d0();
  /* 10e5174d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e51750 pop edi */
  EDI = (pop32());
  /* 10e51751 pop esi */
  ESI = (pop32());
  /* 10e51752 pop ebx */
  EBX = (pop32());
  /* 10e51753 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51756 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51758 call 0x10e553d0 */
  push32(0x10e5175du); f_10e553d0();
  /* 10e5175d mov esp, ebp */
  ESP = (EBP);
  /* 10e5175f pop ebp */
  EBP = (pop32());
  /* 10e51760 ret  */
  ESPCHK(0x10e516f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001780 @ 0x10e51780 (87 bytes, 36 insns) */
void f_10e51780(void) {
  FTRACE(0x10e51780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e51780 push ebp */
  push32((uint32_t)(EBP));
  /* 10e51781 mov ebp, esp */
  EBP = (ESP);
  /* 10e51783 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e51786 push ebx */
  push32((uint32_t)(EBX));
  /* 10e51787 push esi */
  push32((uint32_t)(ESI));
  /* 10e51788 push edi */
  push32((uint32_t)(EDI));
  /* 10e51789 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e5178c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e51791 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51796 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51798 mov esi, esp */
  ESI = (ESP);
  /* 10e5179a mov al, byte ptr [ebp + 0x18] */
  AL = (r8((uint32_t)(EBP + 0x18)));
  /* 10e5179d push eax */
  push32((uint32_t)(EAX));
  /* 10e5179e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e517a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e517a2 mov dl, byte ptr [ebp + 0x14] */
  DL = (r8((uint32_t)(EBP + 0x14)));
  /* 10e517a5 push edx */
  push32((uint32_t)(EDX));
  /* 10e517a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e517a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e517aa push 0x10e824a8 */
  push32((uint32_t)(0x10e824a8u));
  /* 10e517af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e517b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e517b3 call dword ptr [0x10e8551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8551c))), 0x10e517b9u);
  /* 10e517b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e517bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e517be call 0x10e553d0 */
  push32(0x10e517c3u); f_10e553d0();
  /* 10e517c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e517c6 pop edi */
  EDI = (pop32());
  /* 10e517c7 pop esi */
  ESI = (pop32());
  /* 10e517c8 pop ebx */
  EBX = (pop32());
  /* 10e517c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e517cc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e517ce call 0x10e553d0 */
  push32(0x10e517d3u); f_10e553d0();
  /* 10e517d3 mov esp, ebp */
  ESP = (EBP);
  /* 10e517d5 pop ebp */
  EBP = (pop32());
  /* 10e517d6 ret  */
  ESPCHK(0x10e51780u, _esp0);
  ESP += 4; return;
}

/* FUN_100017f0 @ 0x10e517f0 (144 bytes, 52 insns) */
void f_10e517f0(void) {
  FTRACE(0x10e517f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e517f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e517f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e517f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e517f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e517f7 push esi */
  push32((uint32_t)(ESI));
  /* 10e517f8 push edi */
  push32((uint32_t)(EDI));
  /* 10e517f9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10e517fc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10e51801 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e51806 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e51808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5180b push eax */
  push32((uint32_t)(EAX));
  /* 10e5180c call 0x10e51014 */
  push32(0x10e51811u); f_10e51014();
  /* 10e51811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51814 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e51817 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e5181e jmp 0x10e51829 */
  goto L_10e51829;
L_10e51820:;
  /* 10e51820 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e51823 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51826 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e51829:;
  /* 10e51829 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5182c cmp edx, dword ptr [0x10e82570] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e82570))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51832 jge 0x10e5186c */
  if ((C.sf==C.of)) goto L_10e5186c;
  /* 10e51834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e51836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e51839 push eax */
  push32((uint32_t)(EAX));
  /* 10e5183a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5183d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5183e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e51841 push edx */
  push32((uint32_t)(EDX));
  /* 10e51842 push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e51847 call 0x10e51055 */
  push32(0x10e5184cu); f_10e51055();
  /* 10e5184c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5184f mov esi, esp */
  ESI = (ESP);
  /* 10e51851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e51854 push eax */
  push32((uint32_t)(EAX));
  /* 10e51855 push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e5185a call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e51860u);
  /* 10e51860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51863 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51865 call 0x10e553d0 */
  push32(0x10e5186au); f_10e553d0();
  /* 10e5186a jmp 0x10e51820 */
  goto L_10e51820;
L_10e5186c:;
  /* 10e5186c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5186f pop edi */
  EDI = (pop32());
  /* 10e51870 pop esi */
  ESI = (pop32());
  /* 10e51871 pop ebx */
  EBX = (pop32());
  /* 10e51872 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51875 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51877 call 0x10e553d0 */
  push32(0x10e5187cu); f_10e553d0();
  /* 10e5187c mov esp, ebp */
  ESP = (EBP);
  /* 10e5187e pop ebp */
  EBP = (pop32());
  /* 10e5187f ret  */
  ESPCHK(0x10e517f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100018b0 @ 0x10e518b0 (3087 bytes, 802 insns) */
void f_10e518b0(void) {
  FTRACE(0x10e518b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e518b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e518b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e518b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e518b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e518b7 push esi */
  push32((uint32_t)(ESI));
  /* 10e518b8 push edi */
  push32((uint32_t)(EDI));
  /* 10e518b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e518bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e518c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e518c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e518c8 mov esi, esp */
  ESI = (ESP);
  /* 10e518ca push 4 */
  push32((uint32_t)(0x4u));
  /* 10e518cc push 0x10e823f8 */
  push32((uint32_t)(0x10e823f8u));
  /* 10e518d1 call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e518d7u);
  /* 10e518d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e518da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e518dc call 0x10e553d0 */
  push32(0x10e518e1u); f_10e553d0();
  /* 10e518e1 mov esi, esp */
  ESI = (ESP);
  /* 10e518e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e518e5 push 0x10e82570 */
  push32((uint32_t)(0x10e82570u));
  /* 10e518ea call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e518f0u);
  /* 10e518f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e518f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e518f5 call 0x10e553d0 */
  push32(0x10e518fau); f_10e553d0();
  /* 10e518fa mov esi, esp */
  ESI = (ESP);
  /* 10e518fc push 0x10e7d268 */
  push32((uint32_t)(0x10e7d268u));
  /* 10e51901 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e51903 call dword ptr [0x10e85500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85500))), 0x10e51909u);
  /* 10e51909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5190c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5190e call 0x10e553d0 */
  push32(0x10e51913u); f_10e553d0();
  /* 10e51913 mov esi, esp */
  ESI = (ESP);
  /* 10e51915 push 0x10e7d260 */
  push32((uint32_t)(0x10e7d260u));
  /* 10e5191a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5191c call dword ptr [0x10e85500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85500))), 0x10e51922u);
  /* 10e51922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51927 call 0x10e553d0 */
  push32(0x10e5192cu); f_10e553d0();
  /* 10e5192c mov esi, esp */
  ESI = (ESP);
  /* 10e5192e push 0x10e7d268 */
  push32((uint32_t)(0x10e7d268u));
  /* 10e51933 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e51935 call dword ptr [0x10e85500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85500))), 0x10e5193bu);
  /* 10e5193b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5193e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51940 call 0x10e553d0 */
  push32(0x10e51945u); f_10e553d0();
  /* 10e51945 mov esi, esp */
  ESI = (ESP);
  /* 10e51947 push 0x10e7d260 */
  push32((uint32_t)(0x10e7d260u));
  /* 10e5194c push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5194e call dword ptr [0x10e85500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85500))), 0x10e51954u);
  /* 10e51954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51957 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51959 call 0x10e553d0 */
  push32(0x10e5195eu); f_10e553d0();
  /* 10e5195e mov esi, esp */
  ESI = (ESP);
  /* 10e51960 push 0x10e7d258 */
  push32((uint32_t)(0x10e7d258u));
  /* 10e51965 push 0x10e82508 */
  push32((uint32_t)(0x10e82508u));
  /* 10e5196a call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e51970u);
  /* 10e51970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51975 call 0x10e553d0 */
  push32(0x10e5197au); f_10e553d0();
  /* 10e5197a mov esi, esp */
  ESI = (ESP);
  /* 10e5197c push 0x10e824d8 */
  push32((uint32_t)(0x10e824d8u));
  /* 10e51981 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51987u);
  /* 10e51987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5198a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5198c call 0x10e553d0 */
  push32(0x10e51991u); f_10e553d0();
  /* 10e51991 mov esi, esp */
  ESI = (ESP);
  /* 10e51993 push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e51998 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e5199eu);
  /* 10e5199e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e519a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e519a3 call 0x10e553d0 */
  push32(0x10e519a8u); f_10e553d0();
  /* 10e519a8 mov esi, esp */
  ESI = (ESP);
  /* 10e519aa push 0x10e82470 */
  push32((uint32_t)(0x10e82470u));
  /* 10e519af call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e519b5u);
  /* 10e519b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e519b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e519ba call 0x10e553d0 */
  push32(0x10e519bfu); f_10e553d0();
  /* 10e519bf mov esi, esp */
  ESI = (ESP);
  /* 10e519c1 push 0x10e82478 */
  push32((uint32_t)(0x10e82478u));
  /* 10e519c6 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e519ccu);
  /* 10e519cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e519cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e519d1 call 0x10e553d0 */
  push32(0x10e519d6u); f_10e553d0();
  /* 10e519d6 mov esi, esp */
  ESI = (ESP);
  /* 10e519d8 push 0x10e82480 */
  push32((uint32_t)(0x10e82480u));
  /* 10e519dd call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e519e3u);
  /* 10e519e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e519e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e519e8 call 0x10e553d0 */
  push32(0x10e519edu); f_10e553d0();
  /* 10e519ed mov esi, esp */
  ESI = (ESP);
  /* 10e519ef push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e519f4 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e519fau);
  /* 10e519fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e519fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e519ff call 0x10e553d0 */
  push32(0x10e51a04u); f_10e553d0();
  /* 10e51a04 mov esi, esp */
  ESI = (ESP);
  /* 10e51a06 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51a08 push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e51a0d call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51a13u);
  /* 10e51a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51a18 call 0x10e553d0 */
  push32(0x10e51a1du); f_10e553d0();
  /* 10e51a1d mov esi, esp */
  ESI = (ESP);
  /* 10e51a1f push 0x10e7d254 */
  push32((uint32_t)(0x10e7d254u));
  /* 10e51a24 push 0x10e82490 */
  push32((uint32_t)(0x10e82490u));
  /* 10e51a29 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51a2fu);
  /* 10e51a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51a34 call 0x10e553d0 */
  push32(0x10e51a39u); f_10e553d0();
  /* 10e51a39 mov esi, esp */
  ESI = (ESP);
  /* 10e51a3b push 0x10e7d250 */
  push32((uint32_t)(0x10e7d250u));
  /* 10e51a40 push 0x10e82498 */
  push32((uint32_t)(0x10e82498u));
  /* 10e51a45 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51a4bu);
  /* 10e51a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51a4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51a50 call 0x10e553d0 */
  push32(0x10e51a55u); f_10e553d0();
  /* 10e51a55 mov esi, esp */
  ESI = (ESP);
  /* 10e51a57 push 0x10e7d24c */
  push32((uint32_t)(0x10e7d24cu));
  /* 10e51a5c push 0x10e824a0 */
  push32((uint32_t)(0x10e824a0u));
  /* 10e51a61 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51a67u);
  /* 10e51a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51a6c call 0x10e553d0 */
  push32(0x10e51a71u); f_10e553d0();
  /* 10e51a71 mov esi, esp */
  ESI = (ESP);
  /* 10e51a73 push 0x10e7d248 */
  push32((uint32_t)(0x10e7d248u));
  /* 10e51a78 push 0x10e824b0 */
  push32((uint32_t)(0x10e824b0u));
  /* 10e51a7d call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51a83u);
  /* 10e51a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51a88 call 0x10e553d0 */
  push32(0x10e51a8du); f_10e553d0();
  /* 10e51a8d mov esi, esp */
  ESI = (ESP);
  /* 10e51a8f push 0x10e7d244 */
  push32((uint32_t)(0x10e7d244u));
  /* 10e51a94 push 0x10e824b8 */
  push32((uint32_t)(0x10e824b8u));
  /* 10e51a99 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51a9fu);
  /* 10e51a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51aa4 call 0x10e553d0 */
  push32(0x10e51aa9u); f_10e553d0();
  /* 10e51aa9 mov esi, esp */
  ESI = (ESP);
  /* 10e51aab push 0x10e7d240 */
  push32((uint32_t)(0x10e7d240u));
  /* 10e51ab0 push 0x10e824c0 */
  push32((uint32_t)(0x10e824c0u));
  /* 10e51ab5 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51abbu);
  /* 10e51abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51ac0 call 0x10e553d0 */
  push32(0x10e51ac5u); f_10e553d0();
  /* 10e51ac5 mov esi, esp */
  ESI = (ESP);
  /* 10e51ac7 push 0x10e7d238 */
  push32((uint32_t)(0x10e7d238u));
  /* 10e51acc push 0x10e824a8 */
  push32((uint32_t)(0x10e824a8u));
  /* 10e51ad1 call dword ptr [0x10e85510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85510))), 0x10e51ad7u);
  /* 10e51ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51adc call 0x10e553d0 */
  push32(0x10e51ae1u); f_10e553d0();
  /* 10e51ae1 mov esi, esp */
  ESI = (ESP);
  /* 10e51ae3 push 0x10e7d230 */
  push32((uint32_t)(0x10e7d230u));
  /* 10e51ae8 push 0x10e82418 */
  push32((uint32_t)(0x10e82418u));
  /* 10e51aed call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e51af3u);
  /* 10e51af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51af8 call 0x10e553d0 */
  push32(0x10e51afdu); f_10e553d0();
  /* 10e51afd mov esi, esp */
  ESI = (ESP);
  /* 10e51aff push 0x10e7d224 */
  push32((uint32_t)(0x10e7d224u));
  /* 10e51b04 push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e51b09 call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e51b0fu);
  /* 10e51b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51b14 call 0x10e553d0 */
  push32(0x10e51b19u); f_10e553d0();
  /* 10e51b19 mov esi, esp */
  ESI = (ESP);
  /* 10e51b1b push 0x10e7d210 */
  push32((uint32_t)(0x10e7d210u));
  /* 10e51b20 push 0x10e82670 */
  push32((uint32_t)(0x10e82670u));
  /* 10e51b25 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51b2bu);
  /* 10e51b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51b30 call 0x10e553d0 */
  push32(0x10e51b35u); f_10e553d0();
  /* 10e51b35 mov esi, esp */
  ESI = (ESP);
  /* 10e51b37 push 0x10e7d1f8 */
  push32((uint32_t)(0x10e7d1f8u));
  /* 10e51b3c push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e51b41 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51b47u);
  /* 10e51b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51b4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51b4c call 0x10e553d0 */
  push32(0x10e51b51u); f_10e553d0();
  /* 10e51b51 mov esi, esp */
  ESI = (ESP);
  /* 10e51b53 push 0x10e82548 */
  push32((uint32_t)(0x10e82548u));
  /* 10e51b58 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51b5eu);
  /* 10e51b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51b63 call 0x10e553d0 */
  push32(0x10e51b68u); f_10e553d0();
  /* 10e51b68 mov esi, esp */
  ESI = (ESP);
  /* 10e51b6a push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51b6c push 0x10e82548 */
  push32((uint32_t)(0x10e82548u));
  /* 10e51b71 call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51b77u);
  /* 10e51b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51b7c call 0x10e553d0 */
  push32(0x10e51b81u); f_10e553d0();
  /* 10e51b81 mov esi, esp */
  ESI = (ESP);
  /* 10e51b83 push 0x10e7d1e4 */
  push32((uint32_t)(0x10e7d1e4u));
  /* 10e51b88 push 0x10e82578 */
  push32((uint32_t)(0x10e82578u));
  /* 10e51b8d call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51b93u);
  /* 10e51b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51b98 call 0x10e553d0 */
  push32(0x10e51b9du); f_10e553d0();
  /* 10e51b9d mov esi, esp */
  ESI = (ESP);
  /* 10e51b9f push 0x10e7d1c8 */
  push32((uint32_t)(0x10e7d1c8u));
  /* 10e51ba4 push 0x10e82690 */
  push32((uint32_t)(0x10e82690u));
  /* 10e51ba9 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51bafu);
  /* 10e51baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51bb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51bb4 call 0x10e553d0 */
  push32(0x10e51bb9u); f_10e553d0();
  /* 10e51bb9 mov esi, esp */
  ESI = (ESP);
  /* 10e51bbb push 0x10e7d1b0 */
  push32((uint32_t)(0x10e7d1b0u));
  /* 10e51bc0 push 0x10e82520 */
  push32((uint32_t)(0x10e82520u));
  /* 10e51bc5 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51bcbu);
  /* 10e51bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51bce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51bd0 call 0x10e553d0 */
  push32(0x10e51bd5u); f_10e553d0();
  /* 10e51bd5 mov esi, esp */
  ESI = (ESP);
  /* 10e51bd7 push 0x10e7d1a0 */
  push32((uint32_t)(0x10e7d1a0u));
  /* 10e51bdc push 0x10e82518 */
  push32((uint32_t)(0x10e82518u));
  /* 10e51be1 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51be7u);
  /* 10e51be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51bec call 0x10e553d0 */
  push32(0x10e51bf1u); f_10e553d0();
  /* 10e51bf1 mov esi, esp */
  ESI = (ESP);
  /* 10e51bf3 push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e51bf8 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51bfeu);
  /* 10e51bfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c03 call 0x10e553d0 */
  push32(0x10e51c08u); f_10e553d0();
  /* 10e51c08 mov esi, esp */
  ESI = (ESP);
  /* 10e51c0a push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51c0c push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e51c11 call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51c17u);
  /* 10e51c17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c1c call 0x10e553d0 */
  push32(0x10e51c21u); f_10e553d0();
  /* 10e51c21 mov esi, esp */
  ESI = (ESP);
  /* 10e51c23 push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e51c28 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51c2eu);
  /* 10e51c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c33 call 0x10e553d0 */
  push32(0x10e51c38u); f_10e553d0();
  /* 10e51c38 mov esi, esp */
  ESI = (ESP);
  /* 10e51c3a push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51c3c push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e51c41 call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51c47u);
  /* 10e51c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c4c call 0x10e553d0 */
  push32(0x10e51c51u); f_10e553d0();
  /* 10e51c51 mov esi, esp */
  ESI = (ESP);
  /* 10e51c53 push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e51c58 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51c5eu);
  /* 10e51c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c63 call 0x10e553d0 */
  push32(0x10e51c68u); f_10e553d0();
  /* 10e51c68 mov esi, esp */
  ESI = (ESP);
  /* 10e51c6a push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51c6c push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e51c71 call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51c77u);
  /* 10e51c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c7c call 0x10e553d0 */
  push32(0x10e51c81u); f_10e553d0();
  /* 10e51c81 mov esi, esp */
  ESI = (ESP);
  /* 10e51c83 push 0x10e82430 */
  push32((uint32_t)(0x10e82430u));
  /* 10e51c88 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51c8eu);
  /* 10e51c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51c93 call 0x10e553d0 */
  push32(0x10e51c98u); f_10e553d0();
  /* 10e51c98 mov esi, esp */
  ESI = (ESP);
  /* 10e51c9a push 0x10e82438 */
  push32((uint32_t)(0x10e82438u));
  /* 10e51c9f call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51ca5u);
  /* 10e51ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51caa call 0x10e553d0 */
  push32(0x10e51cafu); f_10e553d0();
  /* 10e51caf mov esi, esp */
  ESI = (ESP);
  /* 10e51cb1 push 0x10e82440 */
  push32((uint32_t)(0x10e82440u));
  /* 10e51cb6 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51cbcu);
  /* 10e51cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51cbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51cc1 call 0x10e553d0 */
  push32(0x10e51cc6u); f_10e553d0();
  /* 10e51cc6 mov esi, esp */
  ESI = (ESP);
  /* 10e51cc8 push 0x10e7d19c */
  push32((uint32_t)(0x10e7d19cu));
  /* 10e51ccd push 0x10e82638 */
  push32((uint32_t)(0x10e82638u));
  /* 10e51cd2 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51cd8u);
  /* 10e51cd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51cdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51cdd call 0x10e553d0 */
  push32(0x10e51ce2u); f_10e553d0();
  /* 10e51ce2 mov esi, esp */
  ESI = (ESP);
  /* 10e51ce4 push 0x10e7d198 */
  push32((uint32_t)(0x10e7d198u));
  /* 10e51ce9 push 0x10e82640 */
  push32((uint32_t)(0x10e82640u));
  /* 10e51cee call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51cf4u);
  /* 10e51cf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51cf9 call 0x10e553d0 */
  push32(0x10e51cfeu); f_10e553d0();
  /* 10e51cfe mov esi, esp */
  ESI = (ESP);
  /* 10e51d00 push 0x10e7d194 */
  push32((uint32_t)(0x10e7d194u));
  /* 10e51d05 push 0x10e82658 */
  push32((uint32_t)(0x10e82658u));
  /* 10e51d0a call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51d10u);
  /* 10e51d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51d15 call 0x10e553d0 */
  push32(0x10e51d1au); f_10e553d0();
  /* 10e51d1a mov esi, esp */
  ESI = (ESP);
  /* 10e51d1c push 0x10e7d190 */
  push32((uint32_t)(0x10e7d190u));
  /* 10e51d21 push 0x10e82600 */
  push32((uint32_t)(0x10e82600u));
  /* 10e51d26 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51d2cu);
  /* 10e51d2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51d2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51d31 call 0x10e553d0 */
  push32(0x10e51d36u); f_10e553d0();
  /* 10e51d36 mov esi, esp */
  ESI = (ESP);
  /* 10e51d38 push 0x10e7d18c */
  push32((uint32_t)(0x10e7d18cu));
  /* 10e51d3d push 0x10e82608 */
  push32((uint32_t)(0x10e82608u));
  /* 10e51d42 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51d48u);
  /* 10e51d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51d4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51d4d call 0x10e553d0 */
  push32(0x10e51d52u); f_10e553d0();
  /* 10e51d52 mov esi, esp */
  ESI = (ESP);
  /* 10e51d54 push 0x10e7d188 */
  push32((uint32_t)(0x10e7d188u));
  /* 10e51d59 push 0x10e82618 */
  push32((uint32_t)(0x10e82618u));
  /* 10e51d5e call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51d64u);
  /* 10e51d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51d69 call 0x10e553d0 */
  push32(0x10e51d6eu); f_10e553d0();
  /* 10e51d6e mov esi, esp */
  ESI = (ESP);
  /* 10e51d70 push 0x10e82650 */
  push32((uint32_t)(0x10e82650u));
  /* 10e51d75 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51d7bu);
  /* 10e51d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51d80 call 0x10e553d0 */
  push32(0x10e51d85u); f_10e553d0();
  /* 10e51d85 mov esi, esp */
  ESI = (ESP);
  /* 10e51d87 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51d89 push 0x10e82650 */
  push32((uint32_t)(0x10e82650u));
  /* 10e51d8e call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51d94u);
  /* 10e51d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51d99 call 0x10e553d0 */
  push32(0x10e51d9eu); f_10e553d0();
  /* 10e51d9e mov esi, esp */
  ESI = (ESP);
  /* 10e51da0 push 0x10e82660 */
  push32((uint32_t)(0x10e82660u));
  /* 10e51da5 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51dabu);
  /* 10e51dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51dae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51db0 call 0x10e553d0 */
  push32(0x10e51db5u); f_10e553d0();
  /* 10e51db5 mov esi, esp */
  ESI = (ESP);
  /* 10e51db7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51db9 push 0x10e82660 */
  push32((uint32_t)(0x10e82660u));
  /* 10e51dbe call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51dc4u);
  /* 10e51dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51dc9 call 0x10e553d0 */
  push32(0x10e51dceu); f_10e553d0();
  /* 10e51dce mov esi, esp */
  ESI = (ESP);
  /* 10e51dd0 push 0x10e82668 */
  push32((uint32_t)(0x10e82668u));
  /* 10e51dd5 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51ddbu);
  /* 10e51ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51dde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51de0 call 0x10e553d0 */
  push32(0x10e51de5u); f_10e553d0();
  /* 10e51de5 mov esi, esp */
  ESI = (ESP);
  /* 10e51de7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51de9 push 0x10e82668 */
  push32((uint32_t)(0x10e82668u));
  /* 10e51dee call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51df4u);
  /* 10e51df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51df9 call 0x10e553d0 */
  push32(0x10e51dfeu); f_10e553d0();
  /* 10e51dfe mov esi, esp */
  ESI = (ESP);
  /* 10e51e00 push 0x10e7d178 */
  push32((uint32_t)(0x10e7d178u));
  /* 10e51e05 push 0x10e826a0 */
  push32((uint32_t)(0x10e826a0u));
  /* 10e51e0a call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51e10u);
  /* 10e51e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51e15 call 0x10e553d0 */
  push32(0x10e51e1au); f_10e553d0();
  /* 10e51e1a mov esi, esp */
  ESI = (ESP);
  /* 10e51e1c push 0x10e7d174 */
  push32((uint32_t)(0x10e7d174u));
  /* 10e51e21 push 0x10e82628 */
  push32((uint32_t)(0x10e82628u));
  /* 10e51e26 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51e2cu);
  /* 10e51e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51e31 call 0x10e553d0 */
  push32(0x10e51e36u); f_10e553d0();
  /* 10e51e36 mov esi, esp */
  ESI = (ESP);
  /* 10e51e38 push 0x10e7d170 */
  push32((uint32_t)(0x10e7d170u));
  /* 10e51e3d push 0x10e82610 */
  push32((uint32_t)(0x10e82610u));
  /* 10e51e42 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51e48u);
  /* 10e51e48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51e4d call 0x10e553d0 */
  push32(0x10e51e52u); f_10e553d0();
  /* 10e51e52 mov esi, esp */
  ESI = (ESP);
  /* 10e51e54 push 0x10e7d16c */
  push32((uint32_t)(0x10e7d16cu));
  /* 10e51e59 push 0x10e82620 */
  push32((uint32_t)(0x10e82620u));
  /* 10e51e5e call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51e64u);
  /* 10e51e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51e67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51e69 call 0x10e553d0 */
  push32(0x10e51e6eu); f_10e553d0();
  /* 10e51e6e mov esi, esp */
  ESI = (ESP);
  /* 10e51e70 push 0x10e7d168 */
  push32((uint32_t)(0x10e7d168u));
  /* 10e51e75 push 0x10e82630 */
  push32((uint32_t)(0x10e82630u));
  /* 10e51e7a call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51e80u);
  /* 10e51e80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51e85 call 0x10e553d0 */
  push32(0x10e51e8au); f_10e553d0();
  /* 10e51e8a mov esi, esp */
  ESI = (ESP);
  /* 10e51e8c push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e51e91 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51e97u);
  /* 10e51e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51e9c call 0x10e553d0 */
  push32(0x10e51ea1u); f_10e553d0();
  /* 10e51ea1 mov esi, esp */
  ESI = (ESP);
  /* 10e51ea3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51ea5 push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e51eaa call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51eb0u);
  /* 10e51eb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51eb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51eb5 call 0x10e553d0 */
  push32(0x10e51ebau); f_10e553d0();
  /* 10e51eba mov esi, esp */
  ESI = (ESP);
  /* 10e51ebc push 0x10e82530 */
  push32((uint32_t)(0x10e82530u));
  /* 10e51ec1 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51ec7u);
  /* 10e51ec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51eca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51ecc call 0x10e553d0 */
  push32(0x10e51ed1u); f_10e553d0();
  /* 10e51ed1 mov esi, esp */
  ESI = (ESP);
  /* 10e51ed3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51ed5 push 0x10e82530 */
  push32((uint32_t)(0x10e82530u));
  /* 10e51eda call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51ee0u);
  /* 10e51ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51ee3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51ee5 call 0x10e553d0 */
  push32(0x10e51eeau); f_10e553d0();
  /* 10e51eea mov esi, esp */
  ESI = (ESP);
  /* 10e51eec push 0x10e7d164 */
  push32((uint32_t)(0x10e7d164u));
  /* 10e51ef1 push 0x10e824c8 */
  push32((uint32_t)(0x10e824c8u));
  /* 10e51ef6 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51efcu);
  /* 10e51efc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51eff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f01 call 0x10e553d0 */
  push32(0x10e51f06u); f_10e553d0();
  /* 10e51f06 mov esi, esp */
  ESI = (ESP);
  /* 10e51f08 push 0x10e7d160 */
  push32((uint32_t)(0x10e7d160u));
  /* 10e51f0d push 0x10e824d0 */
  push32((uint32_t)(0x10e824d0u));
  /* 10e51f12 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51f18u);
  /* 10e51f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f1d call 0x10e553d0 */
  push32(0x10e51f22u); f_10e553d0();
  /* 10e51f22 mov esi, esp */
  ESI = (ESP);
  /* 10e51f24 push 0x10e82568 */
  push32((uint32_t)(0x10e82568u));
  /* 10e51f29 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51f2fu);
  /* 10e51f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f34 call 0x10e553d0 */
  push32(0x10e51f39u); f_10e553d0();
  /* 10e51f39 mov esi, esp */
  ESI = (ESP);
  /* 10e51f3b push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51f3d push 0x10e82568 */
  push32((uint32_t)(0x10e82568u));
  /* 10e51f42 call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51f48u);
  /* 10e51f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f4d call 0x10e553d0 */
  push32(0x10e51f52u); f_10e553d0();
  /* 10e51f52 mov esi, esp */
  ESI = (ESP);
  /* 10e51f54 push 0x10e7d150 */
  push32((uint32_t)(0x10e7d150u));
  /* 10e51f59 push 0x10e82538 */
  push32((uint32_t)(0x10e82538u));
  /* 10e51f5e call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51f64u);
  /* 10e51f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f69 call 0x10e553d0 */
  push32(0x10e51f6eu); f_10e553d0();
  /* 10e51f6e mov esi, esp */
  ESI = (ESP);
  /* 10e51f70 push 0x10e82400 */
  push32((uint32_t)(0x10e82400u));
  /* 10e51f75 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51f7bu);
  /* 10e51f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51f7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f80 call 0x10e553d0 */
  push32(0x10e51f85u); f_10e553d0();
  /* 10e51f85 mov esi, esp */
  ESI = (ESP);
  /* 10e51f87 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51f89 push 0x10e82400 */
  push32((uint32_t)(0x10e82400u));
  /* 10e51f8e call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51f94u);
  /* 10e51f94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51f97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51f99 call 0x10e553d0 */
  push32(0x10e51f9eu); f_10e553d0();
  /* 10e51f9e mov esi, esp */
  ESI = (ESP);
  /* 10e51fa0 push 0x10e7d140 */
  push32((uint32_t)(0x10e7d140u));
  /* 10e51fa5 push 0x10e826a8 */
  push32((uint32_t)(0x10e826a8u));
  /* 10e51faa call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e51fb0u);
  /* 10e51fb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51fb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51fb5 call 0x10e553d0 */
  push32(0x10e51fbau); f_10e553d0();
  /* 10e51fba mov esi, esp */
  ESI = (ESP);
  /* 10e51fbc push 0x10e82408 */
  push32((uint32_t)(0x10e82408u));
  /* 10e51fc1 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e51fc7u);
  /* 10e51fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51fca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51fcc call 0x10e553d0 */
  push32(0x10e51fd1u); f_10e553d0();
  /* 10e51fd1 mov esi, esp */
  ESI = (ESP);
  /* 10e51fd3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e51fd5 push 0x10e82408 */
  push32((uint32_t)(0x10e82408u));
  /* 10e51fda call dword ptr [0x10e854fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854fc))), 0x10e51fe0u);
  /* 10e51fe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e51fe5 call 0x10e553d0 */
  push32(0x10e51feau); f_10e553d0();
  /* 10e51fea mov esi, esp */
  ESI = (ESP);
  /* 10e51fec push 0x10e7d13c */
  push32((uint32_t)(0x10e7d13cu));
  /* 10e51ff1 push 0x10e82588 */
  push32((uint32_t)(0x10e82588u));
  /* 10e51ff6 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e51ffcu);
  /* 10e51ffc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e51fff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52001 call 0x10e553d0 */
  push32(0x10e52006u); f_10e553d0();
  /* 10e52006 mov esi, esp */
  ESI = (ESP);
  /* 10e52008 push 0x10e7d138 */
  push32((uint32_t)(0x10e7d138u));
  /* 10e5200d push 0x10e82590 */
  push32((uint32_t)(0x10e82590u));
  /* 10e52012 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52018u);
  /* 10e52018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5201b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5201d call 0x10e553d0 */
  push32(0x10e52022u); f_10e553d0();
  /* 10e52022 mov esi, esp */
  ESI = (ESP);
  /* 10e52024 push 0x10e7d134 */
  push32((uint32_t)(0x10e7d134u));
  /* 10e52029 push 0x10e82598 */
  push32((uint32_t)(0x10e82598u));
  /* 10e5202e call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52034u);
  /* 10e52034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52037 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52039 call 0x10e553d0 */
  push32(0x10e5203eu); f_10e553d0();
  /* 10e5203e mov esi, esp */
  ESI = (ESP);
  /* 10e52040 push 0x10e7d130 */
  push32((uint32_t)(0x10e7d130u));
  /* 10e52045 push 0x10e825a0 */
  push32((uint32_t)(0x10e825a0u));
  /* 10e5204a call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52050u);
  /* 10e52050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52053 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52055 call 0x10e553d0 */
  push32(0x10e5205au); f_10e553d0();
  /* 10e5205a mov esi, esp */
  ESI = (ESP);
  /* 10e5205c push 0x10e7d12c */
  push32((uint32_t)(0x10e7d12cu));
  /* 10e52061 push 0x10e825b0 */
  push32((uint32_t)(0x10e825b0u));
  /* 10e52066 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e5206cu);
  /* 10e5206c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5206f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52071 call 0x10e553d0 */
  push32(0x10e52076u); f_10e553d0();
  /* 10e52076 mov esi, esp */
  ESI = (ESP);
  /* 10e52078 push 0x10e7d128 */
  push32((uint32_t)(0x10e7d128u));
  /* 10e5207d push 0x10e825c0 */
  push32((uint32_t)(0x10e825c0u));
  /* 10e52082 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52088u);
  /* 10e52088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5208b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5208d call 0x10e553d0 */
  push32(0x10e52092u); f_10e553d0();
  /* 10e52092 mov esi, esp */
  ESI = (ESP);
  /* 10e52094 push 0x10e7d124 */
  push32((uint32_t)(0x10e7d124u));
  /* 10e52099 push 0x10e82540 */
  push32((uint32_t)(0x10e82540u));
  /* 10e5209e call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e520a4u);
  /* 10e520a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e520a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e520a9 call 0x10e553d0 */
  push32(0x10e520aeu); f_10e553d0();
  /* 10e520ae mov esi, esp */
  ESI = (ESP);
  /* 10e520b0 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e520b5 push 0x10e82688 */
  push32((uint32_t)(0x10e82688u));
  /* 10e520ba call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e520c0u);
  /* 10e520c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e520c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e520c5 call 0x10e553d0 */
  push32(0x10e520cau); f_10e553d0();
  /* 10e520ca mov esi, esp */
  ESI = (ESP);
  /* 10e520cc push 0x10e7d114 */
  push32((uint32_t)(0x10e7d114u));
  /* 10e520d1 push 0x10e82698 */
  push32((uint32_t)(0x10e82698u));
  /* 10e520d6 call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e520dcu);
  /* 10e520dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e520df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e520e1 call 0x10e553d0 */
  push32(0x10e520e6u); f_10e553d0();
  /* 10e520e6 mov esi, esp */
  ESI = (ESP);
  /* 10e520e8 push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e520ed call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e520f3u);
  /* 10e520f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e520f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e520f8 call 0x10e553d0 */
  push32(0x10e520fdu); f_10e553d0();
  /* 10e520fd mov esi, esp */
  ESI = (ESP);
  /* 10e520ff push 0x10e826d8 */
  push32((uint32_t)(0x10e826d8u));
  /* 10e52104 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e5210au);
  /* 10e5210a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5210d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5210f call 0x10e553d0 */
  push32(0x10e52114u); f_10e553d0();
  /* 10e52114 mov esi, esp */
  ESI = (ESP);
  /* 10e52116 push 0x10e826e0 */
  push32((uint32_t)(0x10e826e0u));
  /* 10e5211b call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e52121u);
  /* 10e52121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52126 call 0x10e553d0 */
  push32(0x10e5212bu); f_10e553d0();
  /* 10e5212b mov esi, esp */
  ESI = (ESP);
  /* 10e5212d push 0x10e826e8 */
  push32((uint32_t)(0x10e826e8u));
  /* 10e52132 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e52138u);
  /* 10e52138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5213b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5213d call 0x10e553d0 */
  push32(0x10e52142u); f_10e553d0();
  /* 10e52142 mov esi, esp */
  ESI = (ESP);
  /* 10e52144 push 0x10e7d100 */
  push32((uint32_t)(0x10e7d100u));
  /* 10e52149 push 0x10e82428 */
  push32((uint32_t)(0x10e82428u));
  /* 10e5214e call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e52154u);
  /* 10e52154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52157 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52159 call 0x10e553d0 */
  push32(0x10e5215eu); f_10e553d0();
  /* 10e5215e mov esi, esp */
  ESI = (ESP);
  /* 10e52160 push 0x10e7d0ec */
  push32((uint32_t)(0x10e7d0ecu));
  /* 10e52165 push 0x10e82500 */
  push32((uint32_t)(0x10e82500u));
  /* 10e5216a call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e52170u);
  /* 10e52170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52175 call 0x10e553d0 */
  push32(0x10e5217au); f_10e553d0();
  /* 10e5217a mov esi, esp */
  ESI = (ESP);
  /* 10e5217c push 0x10e7d0d8 */
  push32((uint32_t)(0x10e7d0d8u));
  /* 10e52181 push 0x10e82678 */
  push32((uint32_t)(0x10e82678u));
  /* 10e52186 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e5218cu);
  /* 10e5218c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5218f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52191 call 0x10e553d0 */
  push32(0x10e52196u); f_10e553d0();
  /* 10e52196 mov esi, esp */
  ESI = (ESP);
  /* 10e52198 push 0x10e7d0bc */
  push32((uint32_t)(0x10e7d0bcu));
  /* 10e5219d push 0x10e82560 */
  push32((uint32_t)(0x10e82560u));
  /* 10e521a2 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e521a8u);
  /* 10e521a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e521ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e521ad call 0x10e553d0 */
  push32(0x10e521b2u); f_10e553d0();
  /* 10e521b2 mov esi, esp */
  ESI = (ESP);
  /* 10e521b4 push 0x10e7d0b8 */
  push32((uint32_t)(0x10e7d0b8u));
  /* 10e521b9 push 0x10e825a8 */
  push32((uint32_t)(0x10e825a8u));
  /* 10e521be call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e521c4u);
  /* 10e521c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e521c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e521c9 call 0x10e553d0 */
  push32(0x10e521ceu); f_10e553d0();
  /* 10e521ce mov esi, esp */
  ESI = (ESP);
  /* 10e521d0 push 0x10e7d0b4 */
  push32((uint32_t)(0x10e7d0b4u));
  /* 10e521d5 push 0x10e825b8 */
  push32((uint32_t)(0x10e825b8u));
  /* 10e521da call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e521e0u);
  /* 10e521e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e521e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e521e5 call 0x10e553d0 */
  push32(0x10e521eau); f_10e553d0();
  /* 10e521ea mov esi, esp */
  ESI = (ESP);
  /* 10e521ec push 0x10e7d0b0 */
  push32((uint32_t)(0x10e7d0b0u));
  /* 10e521f1 push 0x10e825d0 */
  push32((uint32_t)(0x10e825d0u));
  /* 10e521f6 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e521fcu);
  /* 10e521fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e521ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52201 call 0x10e553d0 */
  push32(0x10e52206u); f_10e553d0();
  /* 10e52206 mov esi, esp */
  ESI = (ESP);
  /* 10e52208 push 0x10e7d0ac */
  push32((uint32_t)(0x10e7d0acu));
  /* 10e5220d push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e52212 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52218u);
  /* 10e52218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5221b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5221d call 0x10e553d0 */
  push32(0x10e52222u); f_10e553d0();
  /* 10e52222 mov esi, esp */
  ESI = (ESP);
  /* 10e52224 push 0x10e7d0a8 */
  push32((uint32_t)(0x10e7d0a8u));
  /* 10e52229 push 0x10e82580 */
  push32((uint32_t)(0x10e82580u));
  /* 10e5222e call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52234u);
  /* 10e52234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52237 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52239 call 0x10e553d0 */
  push32(0x10e5223eu); f_10e553d0();
  /* 10e5223e mov esi, esp */
  ESI = (ESP);
  /* 10e52240 push 0x10e7d0a4 */
  push32((uint32_t)(0x10e7d0a4u));
  /* 10e52245 push 0x10e825c8 */
  push32((uint32_t)(0x10e825c8u));
  /* 10e5224a call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52250u);
  /* 10e52250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52253 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52255 call 0x10e553d0 */
  push32(0x10e5225au); f_10e553d0();
  /* 10e5225a mov esi, esp */
  ESI = (ESP);
  /* 10e5225c push 0x10e7d0a0 */
  push32((uint32_t)(0x10e7d0a0u));
  /* 10e52261 push 0x10e825e0 */
  push32((uint32_t)(0x10e825e0u));
  /* 10e52266 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e5226cu);
  /* 10e5226c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5226f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52271 call 0x10e553d0 */
  push32(0x10e52276u); f_10e553d0();
  /* 10e52276 mov esi, esp */
  ESI = (ESP);
  /* 10e52278 push 0x10e7d09c */
  push32((uint32_t)(0x10e7d09cu));
  /* 10e5227d push 0x10e825e8 */
  push32((uint32_t)(0x10e825e8u));
  /* 10e52282 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e52288u);
  /* 10e52288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5228b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5228d call 0x10e553d0 */
  push32(0x10e52292u); f_10e553d0();
  /* 10e52292 mov esi, esp */
  ESI = (ESP);
  /* 10e52294 push 0x10e7d098 */
  push32((uint32_t)(0x10e7d098u));
  /* 10e52299 push 0x10e825f0 */
  push32((uint32_t)(0x10e825f0u));
  /* 10e5229e call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e522a4u);
  /* 10e522a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e522a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e522a9 call 0x10e553d0 */
  push32(0x10e522aeu); f_10e553d0();
  /* 10e522ae mov esi, esp */
  ESI = (ESP);
  /* 10e522b0 push 0x10e7d094 */
  push32((uint32_t)(0x10e7d094u));
  /* 10e522b5 push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e522ba call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e522c0u);
  /* 10e522c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e522c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e522c5 call 0x10e553d0 */
  push32(0x10e522cau); f_10e553d0();
  /* 10e522ca mov esi, esp */
  ESI = (ESP);
  /* 10e522cc push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e522d1 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e522d7u);
  /* 10e522d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e522da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e522dc call 0x10e553d0 */
  push32(0x10e522e1u); f_10e553d0();
  /* 10e522e1 mov esi, esp */
  ESI = (ESP);
  /* 10e522e3 push 0x10e826b8 */
  push32((uint32_t)(0x10e826b8u));
  /* 10e522e8 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e522eeu);
  /* 10e522ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e522f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e522f3 call 0x10e553d0 */
  push32(0x10e522f8u); f_10e553d0();
  /* 10e522f8 mov esi, esp */
  ESI = (ESP);
  /* 10e522fa push 0x10e826c0 */
  push32((uint32_t)(0x10e826c0u));
  /* 10e522ff call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e52305u);
  /* 10e52305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52308 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5230a call 0x10e553d0 */
  push32(0x10e5230fu); f_10e553d0();
  /* 10e5230f mov esi, esp */
  ESI = (ESP);
  /* 10e52311 push 0x10e826c8 */
  push32((uint32_t)(0x10e826c8u));
  /* 10e52316 call dword ptr [0x10e85508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85508))), 0x10e5231cu);
  /* 10e5231c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5231f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52321 call 0x10e553d0 */
  push32(0x10e52326u); f_10e553d0();
  /* 10e52326 mov esi, esp */
  ESI = (ESP);
  /* 10e52328 push 0x10e7d084 */
  push32((uint32_t)(0x10e7d084u));
  /* 10e5232d push 0x10e824e0 */
  push32((uint32_t)(0x10e824e0u));
  /* 10e52332 call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e52338u);
  /* 10e52338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5233b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5233d call 0x10e553d0 */
  push32(0x10e52342u); f_10e553d0();
  /* 10e52342 mov esi, esp */
  ESI = (ESP);
  /* 10e52344 push 0x10e7d070 */
  push32((uint32_t)(0x10e7d070u));
  /* 10e52349 push 0x10e82510 */
  push32((uint32_t)(0x10e82510u));
  /* 10e5234e call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e52354u);
  /* 10e52354 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52357 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52359 call 0x10e553d0 */
  push32(0x10e5235eu); f_10e553d0();
  /* 10e5235e mov esi, esp */
  ESI = (ESP);
  /* 10e52360 push 0x10e7d054 */
  push32((uint32_t)(0x10e7d054u));
  /* 10e52365 push 0x10e82488 */
  push32((uint32_t)(0x10e82488u));
  /* 10e5236a call dword ptr [0x10e85514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85514))), 0x10e52370u);
  /* 10e52370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52375 call 0x10e553d0 */
  push32(0x10e5237au); f_10e553d0();
  /* 10e5237a mov esi, esp */
  ESI = (ESP);
  /* 10e5237c push 0x10e7d0b8 */
  push32((uint32_t)(0x10e7d0b8u));
  /* 10e52381 push 0x10e825a8 */
  push32((uint32_t)(0x10e825a8u));
  /* 10e52386 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e5238cu);
  /* 10e5238c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5238f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52391 call 0x10e553d0 */
  push32(0x10e52396u); f_10e553d0();
  /* 10e52396 mov esi, esp */
  ESI = (ESP);
  /* 10e52398 push 0x10e7d0b4 */
  push32((uint32_t)(0x10e7d0b4u));
  /* 10e5239d push 0x10e825b8 */
  push32((uint32_t)(0x10e825b8u));
  /* 10e523a2 call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e523a8u);
  /* 10e523a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e523ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e523ad call 0x10e553d0 */
  push32(0x10e523b2u); f_10e553d0();
  /* 10e523b2 mov esi, esp */
  ESI = (ESP);
  /* 10e523b4 push 0x10e7d0b0 */
  push32((uint32_t)(0x10e7d0b0u));
  /* 10e523b9 push 0x10e825d0 */
  push32((uint32_t)(0x10e825d0u));
  /* 10e523be call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e523c4u);
  /* 10e523c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e523c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e523c9 call 0x10e553d0 */
  push32(0x10e523ceu); f_10e553d0();
  /* 10e523ce mov esi, esp */
  ESI = (ESP);
  /* 10e523d0 push 0x10e7d0ac */
  push32((uint32_t)(0x10e7d0acu));
  /* 10e523d5 push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e523da call dword ptr [0x10e8550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8550c))), 0x10e523e0u);
  /* 10e523e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e523e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e523e5 call 0x10e553d0 */
  push32(0x10e523eau); f_10e553d0();
  /* 10e523ea mov esi, esp */
  ESI = (ESP);
  /* 10e523ec push 0x10e7d050 */
  push32((uint32_t)(0x10e7d050u));
  /* 10e523f1 push 0x10e82528 */
  push32((uint32_t)(0x10e82528u));
  /* 10e523f6 call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e523fcu);
  /* 10e523fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e523ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52401 call 0x10e553d0 */
  push32(0x10e52406u); f_10e553d0();
  /* 10e52406 mov esi, esp */
  ESI = (ESP);
  /* 10e52408 push 0x10e7d04c */
  push32((uint32_t)(0x10e7d04cu));
  /* 10e5240d push 0x10e82550 */
  push32((uint32_t)(0x10e82550u));
  /* 10e52412 call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e52418u);
  /* 10e52418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5241b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5241d call 0x10e553d0 */
  push32(0x10e52422u); f_10e553d0();
  /* 10e52422 mov esi, esp */
  ESI = (ESP);
  /* 10e52424 push 0x10e7d044 */
  push32((uint32_t)(0x10e7d044u));
  /* 10e52429 push 0x10e82680 */
  push32((uint32_t)(0x10e82680u));
  /* 10e5242e call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e52434u);
  /* 10e52434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52437 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52439 call 0x10e553d0 */
  push32(0x10e5243eu); f_10e553d0();
  /* 10e5243e mov esi, esp */
  ESI = (ESP);
  /* 10e52440 push 0x10e7d03c */
  push32((uint32_t)(0x10e7d03cu));
  /* 10e52445 push 0x10e826f0 */
  push32((uint32_t)(0x10e826f0u));
  /* 10e5244a call dword ptr [0x10e85504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85504))), 0x10e52450u);
  /* 10e52450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52455 call 0x10e553d0 */
  push32(0x10e5245au); f_10e553d0();
  /* 10e5245a mov esi, esp */
  ESI = (ESP);
  /* 10e5245c push 0x10e7d034 */
  push32((uint32_t)(0x10e7d034u));
  /* 10e52461 push 0x10e82558 */
  push32((uint32_t)(0x10e82558u));
  /* 10e52466 call dword ptr [0x10e85518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85518))), 0x10e5246cu);
  /* 10e5246c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5246f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52471 call 0x10e553d0 */
  push32(0x10e52476u); f_10e553d0();
  /* 10e52476 mov esi, esp */
  ESI = (ESP);
  /* 10e52478 push 0x10e7d028 */
  push32((uint32_t)(0x10e7d028u));
  /* 10e5247d push 0x10e824f0 */
  push32((uint32_t)(0x10e824f0u));
  /* 10e52482 call dword ptr [0x10e85518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85518))), 0x10e52488u);
  /* 10e52488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5248b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5248d call 0x10e553d0 */
  push32(0x10e52492u); f_10e553d0();
  /* 10e52492 mov esi, esp */
  ESI = (ESP);
  /* 10e52494 push 0x10e7d01c */
  push32((uint32_t)(0x10e7d01cu));
  /* 10e52499 push 0x10e82410 */
  push32((uint32_t)(0x10e82410u));
  /* 10e5249e call dword ptr [0x10e85518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85518))), 0x10e524a4u);
  /* 10e524a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e524a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e524a9 call 0x10e553d0 */
  push32(0x10e524aeu); f_10e553d0();
  /* 10e524ae pop edi */
  EDI = (pop32());
  /* 10e524af pop esi */
  ESI = (pop32());
  /* 10e524b0 pop ebx */
  EBX = (pop32());
  /* 10e524b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e524b4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e524b6 call 0x10e553d0 */
  push32(0x10e524bbu); f_10e553d0();
  /* 10e524bb mov esp, ebp */
  ESP = (EBP);
  /* 10e524bd pop ebp */
  EBP = (pop32());
  /* 10e524be ret  */
  ESPCHK(0x10e518b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x10e527d0 (8751 bytes, 2486 insns) */
void f_10e527d0(void) {
  FTRACE(0x10e527d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e527d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e527d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e527d3 sub esp, 0x64 */
  { uint32_t _a=(ESP),_b=(0x64u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e527d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e527d7 push esi */
  push32((uint32_t)(ESI));
  /* 10e527d8 push edi */
  push32((uint32_t)(EDI));
  /* 10e527d9 lea edi, [ebp - 0x64] */
  EDI = ((uint32_t)(EBP + -0x64));
  /* 10e527dc mov ecx, 0x19 */
  ECX = (0x19u);
  /* 10e527e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e527e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e527e8 mov esi, esp */
  ESI = (ESP);
  /* 10e527ea push 0xa */
  push32((uint32_t)(0xau));
  /* 10e527ec call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e527f2u);
  /* 10e527f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e527f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e527f7 call 0x10e553d0 */
  push32(0x10e527fcu); f_10e553d0();
  /* 10e527fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e52801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e52803 je 0x10e52846 */
  if (C.zf) goto L_10e52846;
  /* 10e52805 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52807 call 0x10e51028 */
  push32(0x10e5280cu); f_10e51028();
  /* 10e5280c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5280f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52811 call 0x10e51028 */
  push32(0x10e52816u); f_10e51028();
  /* 10e52816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52819 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e5281b call 0x10e51050 */
  push32(0x10e52820u); f_10e51050();
  /* 10e52820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52823 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52825 call 0x10e51050 */
  push32(0x10e5282au); f_10e51050();
  /* 10e5282a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5282d mov esi, esp */
  ESI = (ESP);
  /* 10e5282f push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10e52834 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e52836 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e5283cu);
  /* 10e5283c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5283f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52841 call 0x10e553d0 */
  push32(0x10e52846u); f_10e553d0();
L_10e52846:;
  /* 10e52846 mov esi, esp */
  ESI = (ESP);
  /* 10e52848 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5284a call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e52850u);
  /* 10e52850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52855 call 0x10e553d0 */
  push32(0x10e5285au); f_10e553d0();
  /* 10e5285a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5285f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e52861 je 0x10e538e4 */
  if (C.zf) goto L_10e538e4;
  /* 10e52867 mov esi, esp */
  ESI = (ESP);
  /* 10e52869 push 0x10e82688 */
  push32((uint32_t)(0x10e82688u));
  /* 10e5286e call dword ptr [0x10e8547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8547c))), 0x10e52874u);
  /* 10e52874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52879 call 0x10e553d0 */
  push32(0x10e5287eu); f_10e553d0();
  /* 10e5287e mov esi, esp */
  ESI = (ESP);
  /* 10e52880 push 0x10e82698 */
  push32((uint32_t)(0x10e82698u));
  /* 10e52885 call dword ptr [0x10e85480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85480))), 0x10e5288bu);
  /* 10e5288b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5288e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52890 call 0x10e553d0 */
  push32(0x10e52895u); f_10e553d0();
  /* 10e52895 mov esi, esp */
  ESI = (ESP);
  /* 10e52897 push 0x10e7d420 */
  push32((uint32_t)(0x10e7d420u));
  /* 10e5289c push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e528a1 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e528a7u);
  /* 10e528a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e528aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e528ac call 0x10e553d0 */
  push32(0x10e528b1u); f_10e553d0();
  /* 10e528b1 mov esi, esp */
  ESI = (ESP);
  /* 10e528b3 push 0x10e824f0 */
  push32((uint32_t)(0x10e824f0u));
  /* 10e528b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e528ba call dword ptr [0x10e85488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85488))), 0x10e528c0u);
  /* 10e528c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e528c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e528c5 call 0x10e553d0 */
  push32(0x10e528cau); f_10e553d0();
  /* 10e528ca mov esi, esp */
  ESI = (ESP);
  /* 10e528cc push 0x10e82410 */
  push32((uint32_t)(0x10e82410u));
  /* 10e528d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e528d3 call dword ptr [0x10e85488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85488))), 0x10e528d9u);
  /* 10e528d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e528dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e528de call 0x10e553d0 */
  push32(0x10e528e3u); f_10e553d0();
  /* 10e528e3 mov esi, esp */
  ESI = (ESP);
  /* 10e528e5 push 0x10e82558 */
  push32((uint32_t)(0x10e82558u));
  /* 10e528ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10e528ec call dword ptr [0x10e85488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85488))), 0x10e528f2u);
  /* 10e528f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e528f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e528f7 call 0x10e553d0 */
  push32(0x10e528fcu); f_10e553d0();
  /* 10e528fc mov esi, esp */
  ESI = (ESP);
  /* 10e528fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52900 push 0x10e82670 */
  push32((uint32_t)(0x10e82670u));
  /* 10e52905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52907 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e5290du);
  /* 10e5290d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52910 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52912 call 0x10e553d0 */
  push32(0x10e52917u); f_10e553d0();
  /* 10e52917 mov esi, esp */
  ESI = (ESP);
  /* 10e52919 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5291b push 0x10e82578 */
  push32((uint32_t)(0x10e82578u));
  /* 10e52920 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52922 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e52928u);
  /* 10e52928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5292b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5292d call 0x10e553d0 */
  push32(0x10e52932u); f_10e553d0();
  /* 10e52932 mov esi, esp */
  ESI = (ESP);
  /* 10e52934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52936 push 0x10e82690 */
  push32((uint32_t)(0x10e82690u));
  /* 10e5293b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5293d call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e52943u);
  /* 10e52943 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52946 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52948 call 0x10e553d0 */
  push32(0x10e5294du); f_10e553d0();
  /* 10e5294d mov esi, esp */
  ESI = (ESP);
  /* 10e5294f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52951 push 0x10e82520 */
  push32((uint32_t)(0x10e82520u));
  /* 10e52956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52958 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e5295eu);
  /* 10e5295e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52963 call 0x10e553d0 */
  push32(0x10e52968u); f_10e553d0();
  /* 10e52968 mov esi, esp */
  ESI = (ESP);
  /* 10e5296a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5296c push 0x10e82670 */
  push32((uint32_t)(0x10e82670u));
  /* 10e52971 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52973 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e52979u);
  /* 10e52979 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5297c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5297e call 0x10e553d0 */
  push32(0x10e52983u); f_10e553d0();
  /* 10e52983 mov esi, esp */
  ESI = (ESP);
  /* 10e52985 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e52987 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52989 call dword ptr [0x10e85490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85490))), 0x10e5298fu);
  /* 10e5298f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52992 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52994 call 0x10e553d0 */
  push32(0x10e52999u); f_10e553d0();
  /* 10e52999 mov esi, esp */
  ESI = (ESP);
  /* 10e5299b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e5299d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5299f call dword ptr [0x10e85490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85490))), 0x10e529a5u);
  /* 10e529a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e529a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e529aa call 0x10e553d0 */
  push32(0x10e529afu); f_10e553d0();
  /* 10e529af mov esi, esp */
  ESI = (ESP);
  /* 10e529b1 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e529b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e529b5 call dword ptr [0x10e85490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85490))), 0x10e529bbu);
  /* 10e529bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e529be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e529c0 call 0x10e553d0 */
  push32(0x10e529c5u); f_10e553d0();
  /* 10e529c5 mov esi, esp */
  ESI = (ESP);
  /* 10e529c7 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e529c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e529cb call dword ptr [0x10e85490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85490))), 0x10e529d1u);
  /* 10e529d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e529d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e529d6 call 0x10e553d0 */
  push32(0x10e529dbu); f_10e553d0();
  /* 10e529db mov esi, esp */
  ESI = (ESP);
  /* 10e529dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e529df call dword ptr [0x10e85494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85494))), 0x10e529e5u);
  /* 10e529e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e529e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e529ea call 0x10e553d0 */
  push32(0x10e529efu); f_10e553d0();
  /* 10e529ef mov dword ptr [0x10e823f8], eax */
  w32((uint32_t)(0x10e823f8), (EAX));
  /* 10e529f4 mov eax, dword ptr [0x10e823f8] */
  EAX = (r32((uint32_t)(0x10e823f8)));
  /* 10e529f9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e529fb mov ecx, 0xf */
  ECX = (0xfu);
  /* 10e52a00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e52a02 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e52a08 mov esi, esp */
  ESI = (ESP);
  /* 10e52a0a push ecx */
  push32((uint32_t)(ECX));
  /* 10e52a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a0f call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52a15u);
  /* 10e52a15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52a1a call 0x10e553d0 */
  push32(0x10e52a1fu); f_10e553d0();
  /* 10e52a1f mov esi, esp */
  ESI = (ESP);
  /* 10e52a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a25 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52a2bu);
  /* 10e52a2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52a30 call 0x10e553d0 */
  push32(0x10e52a35u); f_10e553d0();
  /* 10e52a35 mov esi, esp */
  ESI = (ESP);
  /* 10e52a37 push eax */
  push32((uint32_t)(EAX));
  /* 10e52a38 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a3c call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52a42u);
  /* 10e52a42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52a47 call 0x10e553d0 */
  push32(0x10e52a4cu); f_10e553d0();
  /* 10e52a4c mov esi, esp */
  ESI = (ESP);
  /* 10e52a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a52 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52a58u);
  /* 10e52a58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52a5d call 0x10e553d0 */
  push32(0x10e52a62u); f_10e553d0();
  /* 10e52a62 mov esi, esp */
  ESI = (ESP);
  /* 10e52a64 push eax */
  push32((uint32_t)(EAX));
  /* 10e52a65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a69 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52a6fu);
  /* 10e52a6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52a74 call 0x10e553d0 */
  push32(0x10e52a79u); f_10e553d0();
  /* 10e52a79 mov esi, esp */
  ESI = (ESP);
  /* 10e52a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a7f call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52a85u);
  /* 10e52a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52a8a call 0x10e553d0 */
  push32(0x10e52a8fu); f_10e553d0();
  /* 10e52a8f mov esi, esp */
  ESI = (ESP);
  /* 10e52a91 push eax */
  push32((uint32_t)(EAX));
  /* 10e52a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52a96 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52a9cu);
  /* 10e52a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52aa1 call 0x10e553d0 */
  push32(0x10e52aa6u); f_10e553d0();
  /* 10e52aa6 mov esi, esp */
  ESI = (ESP);
  /* 10e52aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52aac call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52ab2u);
  /* 10e52ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ab7 call 0x10e553d0 */
  push32(0x10e52abcu); f_10e553d0();
  /* 10e52abc mov esi, esp */
  ESI = (ESP);
  /* 10e52abe push eax */
  push32((uint32_t)(EAX));
  /* 10e52abf push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52ac3 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52ac9u);
  /* 10e52ac9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52acc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ace call 0x10e553d0 */
  push32(0x10e52ad3u); f_10e553d0();
  /* 10e52ad3 mov esi, esp */
  ESI = (ESP);
  /* 10e52ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52ad9 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52adfu);
  /* 10e52adf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ae4 call 0x10e553d0 */
  push32(0x10e52ae9u); f_10e553d0();
  /* 10e52ae9 mov esi, esp */
  ESI = (ESP);
  /* 10e52aeb push eax */
  push32((uint32_t)(EAX));
  /* 10e52aec push 5 */
  push32((uint32_t)(0x5u));
  /* 10e52aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52af0 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52af6u);
  /* 10e52af6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52af9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52afb call 0x10e553d0 */
  push32(0x10e52b00u); f_10e553d0();
  /* 10e52b00 cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b07 jne 0x10e52b40 */
  if (!C.zf) goto L_10e52b40;
  /* 10e52b09 mov esi, esp */
  ESI = (ESP);
  /* 10e52b0b push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52b0f call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52b15u);
  /* 10e52b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b1a call 0x10e553d0 */
  push32(0x10e52b1fu); f_10e553d0();
  /* 10e52b1f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e52b20 mov ecx, 3 */
  ECX = (0x3u);
  /* 10e52b25 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e52b27 mov esi, esp */
  ESI = (ESP);
  /* 10e52b29 push eax */
  push32((uint32_t)(EAX));
  /* 10e52b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52b2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52b2e call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52b34u);
  /* 10e52b34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52b37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b39 call 0x10e553d0 */
  push32(0x10e52b3eu); f_10e553d0();
  /* 10e52b3e jmp 0x10e52b6d */
  goto L_10e52b6d;
L_10e52b40:;
  /* 10e52b40 mov esi, esp */
  ESI = (ESP);
  /* 10e52b42 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52b46 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52b4cu);
  /* 10e52b4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b51 call 0x10e553d0 */
  push32(0x10e52b56u); f_10e553d0();
  /* 10e52b56 mov esi, esp */
  ESI = (ESP);
  /* 10e52b58 push eax */
  push32((uint32_t)(EAX));
  /* 10e52b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52b5d call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52b63u);
  /* 10e52b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52b66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b68 call 0x10e553d0 */
  push32(0x10e52b6du); f_10e553d0();
L_10e52b6d:;
  /* 10e52b6d mov esi, esp */
  ESI = (ESP);
  /* 10e52b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52b73 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52b79u);
  /* 10e52b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52b7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b7e call 0x10e553d0 */
  push32(0x10e52b83u); f_10e553d0();
  /* 10e52b83 mov esi, esp */
  ESI = (ESP);
  /* 10e52b85 push eax */
  push32((uint32_t)(EAX));
  /* 10e52b86 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52b88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52b8a call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52b90u);
  /* 10e52b90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52b93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52b95 call 0x10e553d0 */
  push32(0x10e52b9au); f_10e553d0();
  /* 10e52b9a mov esi, esp */
  ESI = (ESP);
  /* 10e52b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52ba0 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52ba6u);
  /* 10e52ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52bab call 0x10e553d0 */
  push32(0x10e52bb0u); f_10e553d0();
  /* 10e52bb0 mov esi, esp */
  ESI = (ESP);
  /* 10e52bb2 push eax */
  push32((uint32_t)(EAX));
  /* 10e52bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52bb7 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52bbdu);
  /* 10e52bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52bc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52bc2 call 0x10e553d0 */
  push32(0x10e52bc7u); f_10e553d0();
  /* 10e52bc7 mov esi, esp */
  ESI = (ESP);
  /* 10e52bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52bcb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52bcd call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52bd3u);
  /* 10e52bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52bd8 call 0x10e553d0 */
  push32(0x10e52bddu); f_10e553d0();
  /* 10e52bdd mov esi, esp */
  ESI = (ESP);
  /* 10e52bdf push eax */
  push32((uint32_t)(EAX));
  /* 10e52be0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52be4 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52beau);
  /* 10e52bea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52bef call 0x10e553d0 */
  push32(0x10e52bf4u); f_10e553d0();
  /* 10e52bf4 mov esi, esp */
  ESI = (ESP);
  /* 10e52bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52bf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52bfa call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52c00u);
  /* 10e52c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c05 call 0x10e553d0 */
  push32(0x10e52c0au); f_10e553d0();
  /* 10e52c0a mov esi, esp */
  ESI = (ESP);
  /* 10e52c0c push eax */
  push32((uint32_t)(EAX));
  /* 10e52c0d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52c11 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52c17u);
  /* 10e52c17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c1c call 0x10e553d0 */
  push32(0x10e52c21u); f_10e553d0();
  /* 10e52c21 mov esi, esp */
  ESI = (ESP);
  /* 10e52c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52c27 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52c2du);
  /* 10e52c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c32 call 0x10e553d0 */
  push32(0x10e52c37u); f_10e553d0();
  /* 10e52c37 mov esi, esp */
  ESI = (ESP);
  /* 10e52c39 push eax */
  push32((uint32_t)(EAX));
  /* 10e52c3a push 5 */
  push32((uint32_t)(0x5u));
  /* 10e52c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52c3e call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52c44u);
  /* 10e52c44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c49 call 0x10e553d0 */
  push32(0x10e52c4eu); f_10e553d0();
  /* 10e52c4e mov esi, esp */
  ESI = (ESP);
  /* 10e52c50 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52c54 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52c5au);
  /* 10e52c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c5f call 0x10e553d0 */
  push32(0x10e52c64u); f_10e553d0();
  /* 10e52c64 mov esi, esp */
  ESI = (ESP);
  /* 10e52c66 push eax */
  push32((uint32_t)(EAX));
  /* 10e52c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52c69 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52c6b call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52c71u);
  /* 10e52c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c76 call 0x10e553d0 */
  push32(0x10e52c7bu); f_10e553d0();
  /* 10e52c7b mov esi, esp */
  ESI = (ESP);
  /* 10e52c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52c7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52c81 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52c87u);
  /* 10e52c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52c8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52c8c call 0x10e553d0 */
  push32(0x10e52c91u); f_10e553d0();
  /* 10e52c91 mov esi, esp */
  ESI = (ESP);
  /* 10e52c93 push eax */
  push32((uint32_t)(EAX));
  /* 10e52c94 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52c98 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52c9eu);
  /* 10e52c9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ca1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ca3 call 0x10e553d0 */
  push32(0x10e52ca8u); f_10e553d0();
  /* 10e52ca8 mov esi, esp */
  ESI = (ESP);
  /* 10e52caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52cac push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52cae call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52cb4u);
  /* 10e52cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52cb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52cb9 call 0x10e553d0 */
  push32(0x10e52cbeu); f_10e553d0();
  /* 10e52cbe mov esi, esp */
  ESI = (ESP);
  /* 10e52cc0 push eax */
  push32((uint32_t)(EAX));
  /* 10e52cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52cc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52cc5 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52ccbu);
  /* 10e52ccb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52cce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52cd0 call 0x10e553d0 */
  push32(0x10e52cd5u); f_10e553d0();
  /* 10e52cd5 mov esi, esp */
  ESI = (ESP);
  /* 10e52cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52cd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52cdb call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52ce1u);
  /* 10e52ce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ce4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ce6 call 0x10e553d0 */
  push32(0x10e52cebu); f_10e553d0();
  /* 10e52ceb mov esi, esp */
  ESI = (ESP);
  /* 10e52ced push eax */
  push32((uint32_t)(EAX));
  /* 10e52cee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52cf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52cf2 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52cf8u);
  /* 10e52cf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52cfd call 0x10e553d0 */
  push32(0x10e52d02u); f_10e553d0();
  /* 10e52d02 mov esi, esp */
  ESI = (ESP);
  /* 10e52d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52d06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52d08 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52d0eu);
  /* 10e52d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d13 call 0x10e553d0 */
  push32(0x10e52d18u); f_10e553d0();
  /* 10e52d18 mov esi, esp */
  ESI = (ESP);
  /* 10e52d1a push eax */
  push32((uint32_t)(EAX));
  /* 10e52d1b push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52d1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52d1f call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52d25u);
  /* 10e52d25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d2a call 0x10e553d0 */
  push32(0x10e52d2fu); f_10e553d0();
  /* 10e52d2f mov esi, esp */
  ESI = (ESP);
  /* 10e52d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52d33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52d35 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52d3bu);
  /* 10e52d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d40 call 0x10e553d0 */
  push32(0x10e52d45u); f_10e553d0();
  /* 10e52d45 mov esi, esp */
  ESI = (ESP);
  /* 10e52d47 push eax */
  push32((uint32_t)(EAX));
  /* 10e52d48 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e52d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52d4c call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52d52u);
  /* 10e52d52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d57 call 0x10e553d0 */
  push32(0x10e52d5cu); f_10e553d0();
  /* 10e52d5c mov esi, esp */
  ESI = (ESP);
  /* 10e52d5e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10e52d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52d65 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52d67 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52d6du);
  /* 10e52d6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d72 call 0x10e553d0 */
  push32(0x10e52d77u); f_10e553d0();
  /* 10e52d77 mov esi, esp */
  ESI = (ESP);
  /* 10e52d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52d7b push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52d7d call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52d83u);
  /* 10e52d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d88 call 0x10e553d0 */
  push32(0x10e52d8du); f_10e553d0();
  /* 10e52d8d mov esi, esp */
  ESI = (ESP);
  /* 10e52d8f push eax */
  push32((uint32_t)(EAX));
  /* 10e52d90 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52d92 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52d94 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52d9au);
  /* 10e52d9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52d9f call 0x10e553d0 */
  push32(0x10e52da4u); f_10e553d0();
  /* 10e52da4 mov esi, esp */
  ESI = (ESP);
  /* 10e52da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52da8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52daa call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52db0u);
  /* 10e52db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52db5 call 0x10e553d0 */
  push32(0x10e52dbau); f_10e553d0();
  /* 10e52dba mov esi, esp */
  ESI = (ESP);
  /* 10e52dbc push eax */
  push32((uint32_t)(EAX));
  /* 10e52dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52dbf push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52dc1 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52dc7u);
  /* 10e52dc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52dca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52dcc call 0x10e553d0 */
  push32(0x10e52dd1u); f_10e553d0();
  /* 10e52dd1 mov esi, esp */
  ESI = (ESP);
  /* 10e52dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52dd5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52dd7 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52dddu);
  /* 10e52ddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52de0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52de2 call 0x10e553d0 */
  push32(0x10e52de7u); f_10e553d0();
  /* 10e52de7 mov esi, esp */
  ESI = (ESP);
  /* 10e52de9 push eax */
  push32((uint32_t)(EAX));
  /* 10e52dea push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52dec push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52dee call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52df4u);
  /* 10e52df4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52df9 call 0x10e553d0 */
  push32(0x10e52dfeu); f_10e553d0();
  /* 10e52dfe mov esi, esp */
  ESI = (ESP);
  /* 10e52e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52e02 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e04 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52e0au);
  /* 10e52e0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e0f call 0x10e553d0 */
  push32(0x10e52e14u); f_10e553d0();
  /* 10e52e14 mov esi, esp */
  ESI = (ESP);
  /* 10e52e16 push eax */
  push32((uint32_t)(EAX));
  /* 10e52e17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e1b call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52e21u);
  /* 10e52e21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e26 call 0x10e553d0 */
  push32(0x10e52e2bu); f_10e553d0();
  /* 10e52e2b mov esi, esp */
  ESI = (ESP);
  /* 10e52e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52e2f push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e31 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52e37u);
  /* 10e52e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e3c call 0x10e553d0 */
  push32(0x10e52e41u); f_10e553d0();
  /* 10e52e41 mov esi, esp */
  ESI = (ESP);
  /* 10e52e43 push eax */
  push32((uint32_t)(EAX));
  /* 10e52e44 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e52e46 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e48 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52e4eu);
  /* 10e52e4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e53 call 0x10e553d0 */
  push32(0x10e52e58u); f_10e553d0();
  /* 10e52e58 mov esi, esp */
  ESI = (ESP);
  /* 10e52e5a push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e5e call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52e64u);
  /* 10e52e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e69 call 0x10e553d0 */
  push32(0x10e52e6eu); f_10e553d0();
  /* 10e52e6e mov esi, esp */
  ESI = (ESP);
  /* 10e52e70 push eax */
  push32((uint32_t)(EAX));
  /* 10e52e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52e73 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52e75 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52e7bu);
  /* 10e52e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e80 call 0x10e553d0 */
  push32(0x10e52e85u); f_10e553d0();
  /* 10e52e85 mov esi, esp */
  ESI = (ESP);
  /* 10e52e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52e89 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52e8b call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52e91u);
  /* 10e52e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52e94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52e96 call 0x10e553d0 */
  push32(0x10e52e9bu); f_10e553d0();
  /* 10e52e9b mov esi, esp */
  ESI = (ESP);
  /* 10e52e9d push eax */
  push32((uint32_t)(EAX));
  /* 10e52e9e push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52ea0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52ea2 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52ea8u);
  /* 10e52ea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ead call 0x10e553d0 */
  push32(0x10e52eb2u); f_10e553d0();
  /* 10e52eb2 mov esi, esp */
  ESI = (ESP);
  /* 10e52eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52eb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52eb8 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52ebeu);
  /* 10e52ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ec1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ec3 call 0x10e553d0 */
  push32(0x10e52ec8u); f_10e553d0();
  /* 10e52ec8 mov esi, esp */
  ESI = (ESP);
  /* 10e52eca push eax */
  push32((uint32_t)(EAX));
  /* 10e52ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52ecd push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52ecf call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52ed5u);
  /* 10e52ed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52ed8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52eda call 0x10e553d0 */
  push32(0x10e52edfu); f_10e553d0();
  /* 10e52edf mov esi, esp */
  ESI = (ESP);
  /* 10e52ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52ee3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52ee5 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52eebu);
  /* 10e52eeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52eee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52ef0 call 0x10e553d0 */
  push32(0x10e52ef5u); f_10e553d0();
  /* 10e52ef5 mov esi, esp */
  ESI = (ESP);
  /* 10e52ef7 push eax */
  push32((uint32_t)(EAX));
  /* 10e52ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52efa push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52efc call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52f02u);
  /* 10e52f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52f07 call 0x10e553d0 */
  push32(0x10e52f0cu); f_10e553d0();
  /* 10e52f0c mov esi, esp */
  ESI = (ESP);
  /* 10e52f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52f10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52f12 call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52f18u);
  /* 10e52f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52f1d call 0x10e553d0 */
  push32(0x10e52f22u); f_10e553d0();
  /* 10e52f22 mov esi, esp */
  ESI = (ESP);
  /* 10e52f24 push eax */
  push32((uint32_t)(EAX));
  /* 10e52f25 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52f27 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52f29 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52f2fu);
  /* 10e52f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52f34 call 0x10e553d0 */
  push32(0x10e52f39u); f_10e553d0();
  /* 10e52f39 mov esi, esp */
  ESI = (ESP);
  /* 10e52f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e52f3d push 3 */
  push32((uint32_t)(0x3u));
  /* 10e52f3f call dword ptr [0x10e85540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85540))), 0x10e52f45u);
  /* 10e52f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52f4a call 0x10e553d0 */
  push32(0x10e52f4fu); f_10e553d0();
  /* 10e52f4f mov esi, esp */
  ESI = (ESP);
  /* 10e52f51 push eax */
  push32((uint32_t)(EAX));
  /* 10e52f52 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e52f54 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e52f56 call dword ptr [0x10e8553c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8553c))), 0x10e52f5cu);
  /* 10e52f5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52f61 call 0x10e553d0 */
  push32(0x10e52f66u); f_10e553d0();
  /* 10e52f66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e52f6d jmp 0x10e52f78 */
  goto L_10e52f78;
L_10e52f6f:;
  /* 10e52f6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e52f72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e52f78:;
  /* 10e52f78 mov eax, dword ptr [0x10e823f8] */
  EAX = (r32((uint32_t)(0x10e823f8)));
  /* 10e52f7d imul eax, eax, 5 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x5u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e52f80 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52f83 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52f86 jge 0x10e5304b */
  if ((C.sf==C.of)) goto L_10e5304b;
  /* 10e52f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52f8e push 0x10e825b8 */
  push32((uint32_t)(0x10e825b8u));
  /* 10e52f93 push 0x10e82428 */
  push32((uint32_t)(0x10e82428u));
  /* 10e52f98 push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e52f9d call 0x10e51046 */
  push32(0x10e52fa2u); f_10e51046();
  /* 10e52fa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e52fa5 cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52fac je 0x10e52fc7 */
  if (C.zf) goto L_10e52fc7;
  /* 10e52fae push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52fb0 push 0x10e825d0 */
  push32((uint32_t)(0x10e825d0u));
  /* 10e52fb5 push 0x10e82428 */
  push32((uint32_t)(0x10e82428u));
  /* 10e52fba push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e52fbf call 0x10e51046 */
  push32(0x10e52fc4u); f_10e51046();
  /* 10e52fc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e52fc7:;
  /* 10e52fc7 cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e52fce je 0x10e52fe9 */
  if (C.zf) goto L_10e52fe9;
  /* 10e52fd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e52fd2 push 0x10e825d0 */
  push32((uint32_t)(0x10e825d0u));
  /* 10e52fd7 push 0x10e82500 */
  push32((uint32_t)(0x10e82500u));
  /* 10e52fdc push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e52fe1 call 0x10e51046 */
  push32(0x10e52fe6u); f_10e51046();
  /* 10e52fe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e52fe9:;
  /* 10e52fe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e52feb push 0x10e825e8 */
  push32((uint32_t)(0x10e825e8u));
  /* 10e52ff0 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e52ff5 push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e52ffa call 0x10e51046 */
  push32(0x10e52fffu); f_10e51046();
  /* 10e52fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53002 cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53009 je 0x10e53024 */
  if (C.zf) goto L_10e53024;
  /* 10e5300b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5300d push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e53012 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e53017 push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e5301c call 0x10e51046 */
  push32(0x10e53021u); f_10e51046();
  /* 10e53021 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e53024:;
  /* 10e53024 cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5302b je 0x10e53046 */
  if (C.zf) goto L_10e53046;
  /* 10e5302d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5302f push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e53034 push 0x10e824e0 */
  push32((uint32_t)(0x10e824e0u));
  /* 10e53039 push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e5303e call 0x10e51046 */
  push32(0x10e53043u); f_10e51046();
  /* 10e53043 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e53046:;
  /* 10e53046 jmp 0x10e52f6f */
  goto L_10e52f6f;
L_10e5304b:;
  /* 10e5304b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e5304d push 0x10e825b8 */
  push32((uint32_t)(0x10e825b8u));
  /* 10e53052 push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e53057 call 0x10e51005 */
  push32(0x10e5305cu); f_10e51005();
  /* 10e5305c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5305f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e53061 push 0x10e825a8 */
  push32((uint32_t)(0x10e825a8u));
  /* 10e53066 push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e5306b call 0x10e51005 */
  push32(0x10e53070u); f_10e51005();
  /* 10e53070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53075 push 0x10e82580 */
  push32((uint32_t)(0x10e82580u));
  /* 10e5307a push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e5307f call 0x10e51005 */
  push32(0x10e53084u); f_10e51005();
  /* 10e53084 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53087 mov esi, esp */
  ESI = (ESP);
  /* 10e53089 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5308b push 0x10e826d0 */
  push32((uint32_t)(0x10e826d0u));
  /* 10e53090 call dword ptr [0x10e85498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85498))), 0x10e53096u);
  /* 10e53096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53099 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5309b call 0x10e553d0 */
  push32(0x10e530a0u); f_10e553d0();
  /* 10e530a0 mov esi, esp */
  ESI = (ESP);
  /* 10e530a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e530a4 call dword ptr [0x10e8549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8549c))), 0x10e530aau);
  /* 10e530aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e530ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e530af call 0x10e553d0 */
  push32(0x10e530b4u); f_10e553d0();
  /* 10e530b4 mov esi, esp */
  ESI = (ESP);
  /* 10e530b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e530b8 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e530beu);
  /* 10e530be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e530c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e530c3 call 0x10e553d0 */
  push32(0x10e530c8u); f_10e553d0();
  /* 10e530c8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e530ca push 0x10e825e8 */
  push32((uint32_t)(0x10e825e8u));
  /* 10e530cf push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e530d4 call 0x10e51005 */
  push32(0x10e530d9u); f_10e51005();
  /* 10e530d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e530dc push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e530de push 0x10e825e0 */
  push32((uint32_t)(0x10e825e0u));
  /* 10e530e3 push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e530e8 call 0x10e51005 */
  push32(0x10e530edu); f_10e51005();
  /* 10e530ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e530f0 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10e530f5 push 0x10e82580 */
  push32((uint32_t)(0x10e82580u));
  /* 10e530fa push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e530ff call 0x10e51005 */
  push32(0x10e53104u); f_10e51005();
  /* 10e53104 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53107 mov esi, esp */
  ESI = (ESP);
  /* 10e53109 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5310b push 0x10e826b0 */
  push32((uint32_t)(0x10e826b0u));
  /* 10e53110 call dword ptr [0x10e85498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85498))), 0x10e53116u);
  /* 10e53116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53119 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5311b call 0x10e553d0 */
  push32(0x10e53120u); f_10e553d0();
  /* 10e53120 mov esi, esp */
  ESI = (ESP);
  /* 10e53122 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53124 call dword ptr [0x10e8549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8549c))), 0x10e5312au);
  /* 10e5312a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5312d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5312f call 0x10e553d0 */
  push32(0x10e53134u); f_10e553d0();
  /* 10e53134 mov esi, esp */
  ESI = (ESP);
  /* 10e53136 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53138 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e5313eu);
  /* 10e5313e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53143 call 0x10e553d0 */
  push32(0x10e53148u); f_10e553d0();
  /* 10e53148 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5314f jmp 0x10e5315a */
  goto L_10e5315a;
L_10e53151:;
  /* 10e53151 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e53154 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53157 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5315a:;
  /* 10e5315a mov edx, dword ptr [0x10e823f8] */
  EDX = (r32((uint32_t)(0x10e823f8)));
  /* 10e53160 lea eax, [edx + edx - 1] */
  EAX = ((uint32_t)(EDX + EDX*1 + -0x1));
  /* 10e53164 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53167 jge 0x10e53222 */
  if ((C.sf==C.of)) goto L_10e53222;
  /* 10e5316d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5316f push 0x10e82498 */
  push32((uint32_t)(0x10e82498u));
  /* 10e53174 push 0x10e82518 */
  push32((uint32_t)(0x10e82518u));
  /* 10e53179 push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e5317e call 0x10e51046 */
  push32(0x10e53183u); f_10e51046();
  /* 10e53183 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53186 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53188 push 0x10e824a0 */
  push32((uint32_t)(0x10e824a0u));
  /* 10e5318d push 0x10e82518 */
  push32((uint32_t)(0x10e82518u));
  /* 10e53192 push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e53197 call 0x10e51046 */
  push32(0x10e5319cu); f_10e51046();
  /* 10e5319c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5319f push 4 */
  push32((uint32_t)(0x4u));
  /* 10e531a1 push 0x10e824b0 */
  push32((uint32_t)(0x10e824b0u));
  /* 10e531a6 push 0x10e82518 */
  push32((uint32_t)(0x10e82518u));
  /* 10e531ab push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e531b0 call 0x10e51046 */
  push32(0x10e531b5u); f_10e51046();
  /* 10e531b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e531b8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e531bf jmp 0x10e531ca */
  goto L_10e531ca;
L_10e531c1:;
  /* 10e531c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e531c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e531c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e531ca:;
  /* 10e531ca cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e531ce jge 0x10e5321d */
  if ((C.sf==C.of)) goto L_10e5321d;
  /* 10e531d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e531d2 push 0x10e824b8 */
  push32((uint32_t)(0x10e824b8u));
  /* 10e531d7 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e531dc push 0x10e82430 */
  push32((uint32_t)(0x10e82430u));
  /* 10e531e1 call 0x10e51046 */
  push32(0x10e531e6u); f_10e51046();
  /* 10e531e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e531e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e531eb push 0x10e824b8 */
  push32((uint32_t)(0x10e824b8u));
  /* 10e531f0 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e531f5 push 0x10e82438 */
  push32((uint32_t)(0x10e82438u));
  /* 10e531fa call 0x10e51046 */
  push32(0x10e531ffu); f_10e51046();
  /* 10e531ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53202 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53204 push 0x10e824b8 */
  push32((uint32_t)(0x10e824b8u));
  /* 10e53209 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e5320e push 0x10e82440 */
  push32((uint32_t)(0x10e82440u));
  /* 10e53213 call 0x10e51046 */
  push32(0x10e53218u); f_10e51046();
  /* 10e53218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5321b jmp 0x10e531c1 */
  goto L_10e531c1;
L_10e5321d:;
  /* 10e5321d jmp 0x10e53151 */
  goto L_10e53151;
L_10e53222:;
  /* 10e53222 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e53229 jmp 0x10e53234 */
  goto L_10e53234;
L_10e5322b:;
  /* 10e5322b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5322e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53231 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e53234:;
  /* 10e53234 mov eax, dword ptr [0x10e823f8] */
  EAX = (r32((uint32_t)(0x10e823f8)));
  /* 10e53239 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5323c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5323f jge 0x10e532d9 */
  if ((C.sf==C.of)) goto L_10e532d9;
  /* 10e53245 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53247 push 0x10e82610 */
  push32((uint32_t)(0x10e82610u));
  /* 10e5324c push 0x10e826a0 */
  push32((uint32_t)(0x10e826a0u));
  /* 10e53251 push 0x10e82650 */
  push32((uint32_t)(0x10e82650u));
  /* 10e53256 call 0x10e51046 */
  push32(0x10e5325bu); f_10e51046();
  /* 10e5325b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5325e push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53260 push 0x10e82620 */
  push32((uint32_t)(0x10e82620u));
  /* 10e53265 push 0x10e826a0 */
  push32((uint32_t)(0x10e826a0u));
  /* 10e5326a push 0x10e82660 */
  push32((uint32_t)(0x10e82660u));
  /* 10e5326f call 0x10e51046 */
  push32(0x10e53274u); f_10e51046();
  /* 10e53274 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53277 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53279 push 0x10e82630 */
  push32((uint32_t)(0x10e82630u));
  /* 10e5327e push 0x10e826a0 */
  push32((uint32_t)(0x10e826a0u));
  /* 10e53283 push 0x10e82668 */
  push32((uint32_t)(0x10e82668u));
  /* 10e53288 call 0x10e51046 */
  push32(0x10e5328du); f_10e51046();
  /* 10e5328d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53290 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53292 push 0x10e824c8 */
  push32((uint32_t)(0x10e824c8u));
  /* 10e53297 push 0x10e826a0 */
  push32((uint32_t)(0x10e826a0u));
  /* 10e5329c push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e532a1 call 0x10e51046 */
  push32(0x10e532a6u); f_10e51046();
  /* 10e532a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e532a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e532ab push 0x10e824d0 */
  push32((uint32_t)(0x10e824d0u));
  /* 10e532b0 push 0x10e826a0 */
  push32((uint32_t)(0x10e826a0u));
  /* 10e532b5 push 0x10e82530 */
  push32((uint32_t)(0x10e82530u));
  /* 10e532ba call 0x10e51046 */
  push32(0x10e532bfu); f_10e51046();
  /* 10e532bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e532c2 cmp dword ptr [0x10e823f8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e532c9 jge 0x10e532d4 */
  if ((C.sf==C.of)) goto L_10e532d4;
  /* 10e532cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e532ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e532d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e532d4:;
  /* 10e532d4 jmp 0x10e5322b */
  goto L_10e5322b;
L_10e532d9:;
  /* 10e532d9 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e532db push 0x10e82498 */
  push32((uint32_t)(0x10e82498u));
  /* 10e532e0 push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e532e5 call 0x10e51005 */
  push32(0x10e532eau); f_10e51005();
  /* 10e532ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e532ed push 0xa */
  push32((uint32_t)(0xau));
  /* 10e532ef push 0x10e82638 */
  push32((uint32_t)(0x10e82638u));
  /* 10e532f4 push 0x10e82430 */
  push32((uint32_t)(0x10e82430u));
  /* 10e532f9 call 0x10e51005 */
  push32(0x10e532feu); f_10e51005();
  /* 10e532fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53301 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e53303 push 0x10e824a0 */
  push32((uint32_t)(0x10e824a0u));
  /* 10e53308 push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e5330d call 0x10e51005 */
  push32(0x10e53312u); f_10e51005();
  /* 10e53312 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53315 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e53317 push 0x10e82640 */
  push32((uint32_t)(0x10e82640u));
  /* 10e5331c push 0x10e82438 */
  push32((uint32_t)(0x10e82438u));
  /* 10e53321 call 0x10e51005 */
  push32(0x10e53326u); f_10e51005();
  /* 10e53326 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53329 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10e5332e push 0x10e824b0 */
  push32((uint32_t)(0x10e824b0u));
  /* 10e53333 push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e53338 call 0x10e51005 */
  push32(0x10e5333du); f_10e51005();
  /* 10e5333d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53340 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10e53345 push 0x10e82658 */
  push32((uint32_t)(0x10e82658u));
  /* 10e5334a push 0x10e82440 */
  push32((uint32_t)(0x10e82440u));
  /* 10e5334f call 0x10e51005 */
  push32(0x10e53354u); f_10e51005();
  /* 10e53354 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53357 mov esi, esp */
  ESI = (ESP);
  /* 10e53359 push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e5335e push 0x10e82430 */
  push32((uint32_t)(0x10e82430u));
  /* 10e53363 call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53369u);
  /* 10e53369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5336c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5336e call 0x10e553d0 */
  push32(0x10e53373u); f_10e553d0();
  /* 10e53373 mov esi, esp */
  ESI = (ESP);
  /* 10e53375 push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e5337a push 0x10e82438 */
  push32((uint32_t)(0x10e82438u));
  /* 10e5337f call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53385u);
  /* 10e53385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53388 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5338a call 0x10e553d0 */
  push32(0x10e5338fu); f_10e553d0();
  /* 10e5338f mov esi, esp */
  ESI = (ESP);
  /* 10e53391 push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e53396 push 0x10e82440 */
  push32((uint32_t)(0x10e82440u));
  /* 10e5339b call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e533a1u);
  /* 10e533a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e533a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e533a6 call 0x10e553d0 */
  push32(0x10e533abu); f_10e553d0();
  /* 10e533ab push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e533ad push 0x10e82610 */
  push32((uint32_t)(0x10e82610u));
  /* 10e533b2 push 0x10e82650 */
  push32((uint32_t)(0x10e82650u));
  /* 10e533b7 call 0x10e51005 */
  push32(0x10e533bcu); f_10e51005();
  /* 10e533bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e533bf push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e533c1 push 0x10e82620 */
  push32((uint32_t)(0x10e82620u));
  /* 10e533c6 push 0x10e82660 */
  push32((uint32_t)(0x10e82660u));
  /* 10e533cb call 0x10e51005 */
  push32(0x10e533d0u); f_10e51005();
  /* 10e533d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e533d3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e533d5 push 0x10e82630 */
  push32((uint32_t)(0x10e82630u));
  /* 10e533da push 0x10e82668 */
  push32((uint32_t)(0x10e82668u));
  /* 10e533df call 0x10e51005 */
  push32(0x10e533e4u); f_10e51005();
  /* 10e533e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e533e7 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10e533e9 push 0x10e824c8 */
  push32((uint32_t)(0x10e824c8u));
  /* 10e533ee push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e533f3 call 0x10e51005 */
  push32(0x10e533f8u); f_10e51005();
  /* 10e533f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e533fb push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10e533fd push 0x10e824d0 */
  push32((uint32_t)(0x10e824d0u));
  /* 10e53402 push 0x10e82530 */
  push32((uint32_t)(0x10e82530u));
  /* 10e53407 call 0x10e51005 */
  push32(0x10e5340cu); f_10e51005();
  /* 10e5340c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5340f mov esi, esp */
  ESI = (ESP);
  /* 10e53411 push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e53416 push 0x10e82650 */
  push32((uint32_t)(0x10e82650u));
  /* 10e5341b call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53421u);
  /* 10e53421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53426 call 0x10e553d0 */
  push32(0x10e5342bu); f_10e553d0();
  /* 10e5342b mov esi, esp */
  ESI = (ESP);
  /* 10e5342d push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e53432 push 0x10e82660 */
  push32((uint32_t)(0x10e82660u));
  /* 10e53437 call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e5343du);
  /* 10e5343d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53440 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53442 call 0x10e553d0 */
  push32(0x10e53447u); f_10e553d0();
  /* 10e53447 mov esi, esp */
  ESI = (ESP);
  /* 10e53449 push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e5344e push 0x10e82668 */
  push32((uint32_t)(0x10e82668u));
  /* 10e53453 call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53459u);
  /* 10e53459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5345c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5345e call 0x10e553d0 */
  push32(0x10e53463u); f_10e553d0();
  /* 10e53463 mov esi, esp */
  ESI = (ESP);
  /* 10e53465 push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e5346a push 0x10e82530 */
  push32((uint32_t)(0x10e82530u));
  /* 10e5346f call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53475u);
  /* 10e53475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53478 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5347a call 0x10e553d0 */
  push32(0x10e5347fu); f_10e553d0();
  /* 10e5347f mov edx, dword ptr [0x10e823f8] */
  EDX = (r32((uint32_t)(0x10e823f8)));
  /* 10e53485 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e53488 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5348c je 0x10e5349d */
  if (C.zf) goto L_10e5349d;
  /* 10e5348e cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53492 je 0x10e53529 */
  if (C.zf) goto L_10e53529;
  /* 10e53498 jmp 0x10e535ed */
  goto L_10e535ed;
L_10e5349d:;
  /* 10e5349d mov esi, esp */
  ESI = (ESP);
  /* 10e5349f push 0x10e7d414 */
  push32((uint32_t)(0x10e7d414u));
  /* 10e534a4 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e534a9 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e534afu);
  /* 10e534af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e534b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e534b4 call 0x10e553d0 */
  push32(0x10e534b9u); f_10e553d0();
  /* 10e534b9 mov esi, esp */
  ESI = (ESP);
  /* 10e534bb push 0x10e7d408 */
  push32((uint32_t)(0x10e7d408u));
  /* 10e534c0 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e534c5 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e534cbu);
  /* 10e534cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e534ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e534d0 call 0x10e553d0 */
  push32(0x10e534d5u); f_10e553d0();
  /* 10e534d5 mov esi, esp */
  ESI = (ESP);
  /* 10e534d7 push 0x10e7d3fc */
  push32((uint32_t)(0x10e7d3fcu));
  /* 10e534dc push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e534e1 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e534e7u);
  /* 10e534e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e534ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e534ec call 0x10e553d0 */
  push32(0x10e534f1u); f_10e553d0();
  /* 10e534f1 mov esi, esp */
  ESI = (ESP);
  /* 10e534f3 push 0x10e7d3f0 */
  push32((uint32_t)(0x10e7d3f0u));
  /* 10e534f8 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e534fd call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53503u);
  /* 10e53503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53506 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53508 call 0x10e553d0 */
  push32(0x10e5350du); f_10e553d0();
  /* 10e5350d mov esi, esp */
  ESI = (ESP);
  /* 10e5350f push 0x10e7d3e4 */
  push32((uint32_t)(0x10e7d3e4u));
  /* 10e53514 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e53519 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5351fu);
  /* 10e5351f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53522 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53524 call 0x10e553d0 */
  push32(0x10e53529u); f_10e553d0();
L_10e53529:;
  /* 10e53529 mov esi, esp */
  ESI = (ESP);
  /* 10e5352b push 0x10e7d3d8 */
  push32((uint32_t)(0x10e7d3d8u));
  /* 10e53530 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e53535 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5353bu);
  /* 10e5353b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5353e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53540 call 0x10e553d0 */
  push32(0x10e53545u); f_10e553d0();
  /* 10e53545 mov esi, esp */
  ESI = (ESP);
  /* 10e53547 push 0x10e7d3cc */
  push32((uint32_t)(0x10e7d3ccu));
  /* 10e5354c push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e53551 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53557u);
  /* 10e53557 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5355a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5355c call 0x10e553d0 */
  push32(0x10e53561u); f_10e553d0();
  /* 10e53561 mov esi, esp */
  ESI = (ESP);
  /* 10e53563 push 0x10e7d3c0 */
  push32((uint32_t)(0x10e7d3c0u));
  /* 10e53568 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e5356d call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53573u);
  /* 10e53573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53576 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53578 call 0x10e553d0 */
  push32(0x10e5357du); f_10e553d0();
  /* 10e5357d mov esi, esp */
  ESI = (ESP);
  /* 10e5357f push 0x10e7d3b4 */
  push32((uint32_t)(0x10e7d3b4u));
  /* 10e53584 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e53589 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5358fu);
  /* 10e5358f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53592 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53594 call 0x10e553d0 */
  push32(0x10e53599u); f_10e553d0();
  /* 10e53599 mov esi, esp */
  ESI = (ESP);
  /* 10e5359b push 0x10e7d3a8 */
  push32((uint32_t)(0x10e7d3a8u));
  /* 10e535a0 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e535a5 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e535abu);
  /* 10e535ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e535ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e535b0 call 0x10e553d0 */
  push32(0x10e535b5u); f_10e553d0();
  /* 10e535b5 mov esi, esp */
  ESI = (ESP);
  /* 10e535b7 push 0x10e7d39c */
  push32((uint32_t)(0x10e7d39cu));
  /* 10e535bc push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e535c1 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e535c7u);
  /* 10e535c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e535ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e535cc call 0x10e553d0 */
  push32(0x10e535d1u); f_10e553d0();
  /* 10e535d1 mov esi, esp */
  ESI = (ESP);
  /* 10e535d3 push 0x10e7d390 */
  push32((uint32_t)(0x10e7d390u));
  /* 10e535d8 push 0x10e7d11c */
  push32((uint32_t)(0x10e7d11cu));
  /* 10e535dd call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e535e3u);
  /* 10e535e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e535e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e535e8 call 0x10e553d0 */
  push32(0x10e535edu); f_10e553d0();
L_10e535ed:;
  /* 10e535ed mov eax, dword ptr [0x10e823f8] */
  EAX = (r32((uint32_t)(0x10e823f8)));
  /* 10e535f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e535f5 cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e535f9 je 0x10e536f0 */
  if (C.zf) goto L_10e536f0;
  /* 10e535ff cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53603 je 0x10e53680 */
  if (C.zf) goto L_10e53680;
  /* 10e53605 cmp dword ptr [ebp - 0x24], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53609 je 0x10e53610 */
  if (C.zf) goto L_10e53610;
  /* 10e5360b jmp 0x10e53728 */
  goto L_10e53728;
L_10e53610:;
  /* 10e53610 mov esi, esp */
  ESI = (ESP);
  /* 10e53612 push 0x10e7d384 */
  push32((uint32_t)(0x10e7d384u));
  /* 10e53617 push 0x10e7d050 */
  push32((uint32_t)(0x10e7d050u));
  /* 10e5361c call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53622u);
  /* 10e53622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53627 call 0x10e553d0 */
  push32(0x10e5362cu); f_10e553d0();
  /* 10e5362c mov esi, esp */
  ESI = (ESP);
  /* 10e5362e push 0x10e7d378 */
  push32((uint32_t)(0x10e7d378u));
  /* 10e53633 push 0x10e7d050 */
  push32((uint32_t)(0x10e7d050u));
  /* 10e53638 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5363eu);
  /* 10e5363e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53643 call 0x10e553d0 */
  push32(0x10e53648u); f_10e553d0();
  /* 10e53648 mov esi, esp */
  ESI = (ESP);
  /* 10e5364a push 0x10e7d36c */
  push32((uint32_t)(0x10e7d36cu));
  /* 10e5364f push 0x10e7d04c */
  push32((uint32_t)(0x10e7d04cu));
  /* 10e53654 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5365au);
  /* 10e5365a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5365d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5365f call 0x10e553d0 */
  push32(0x10e53664u); f_10e553d0();
  /* 10e53664 mov esi, esp */
  ESI = (ESP);
  /* 10e53666 push 0x10e7d360 */
  push32((uint32_t)(0x10e7d360u));
  /* 10e5366b push 0x10e7d04c */
  push32((uint32_t)(0x10e7d04cu));
  /* 10e53670 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53676u);
  /* 10e53676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5367b call 0x10e553d0 */
  push32(0x10e53680u); f_10e553d0();
L_10e53680:;
  /* 10e53680 mov esi, esp */
  ESI = (ESP);
  /* 10e53682 push 0x10e7d354 */
  push32((uint32_t)(0x10e7d354u));
  /* 10e53687 push 0x10e7d050 */
  push32((uint32_t)(0x10e7d050u));
  /* 10e5368c call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53692u);
  /* 10e53692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53697 call 0x10e553d0 */
  push32(0x10e5369cu); f_10e553d0();
  /* 10e5369c mov esi, esp */
  ESI = (ESP);
  /* 10e5369e push 0x10e7d348 */
  push32((uint32_t)(0x10e7d348u));
  /* 10e536a3 push 0x10e7d050 */
  push32((uint32_t)(0x10e7d050u));
  /* 10e536a8 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e536aeu);
  /* 10e536ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e536b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e536b3 call 0x10e553d0 */
  push32(0x10e536b8u); f_10e553d0();
  /* 10e536b8 mov esi, esp */
  ESI = (ESP);
  /* 10e536ba push 0x10e7d33c */
  push32((uint32_t)(0x10e7d33cu));
  /* 10e536bf push 0x10e7d04c */
  push32((uint32_t)(0x10e7d04cu));
  /* 10e536c4 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e536cau);
  /* 10e536ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e536cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e536cf call 0x10e553d0 */
  push32(0x10e536d4u); f_10e553d0();
  /* 10e536d4 mov esi, esp */
  ESI = (ESP);
  /* 10e536d6 push 0x10e7d330 */
  push32((uint32_t)(0x10e7d330u));
  /* 10e536db push 0x10e7d04c */
  push32((uint32_t)(0x10e7d04cu));
  /* 10e536e0 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e536e6u);
  /* 10e536e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e536e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e536eb call 0x10e553d0 */
  push32(0x10e536f0u); f_10e553d0();
L_10e536f0:;
  /* 10e536f0 mov esi, esp */
  ESI = (ESP);
  /* 10e536f2 push 0x10e7d324 */
  push32((uint32_t)(0x10e7d324u));
  /* 10e536f7 push 0x10e7d050 */
  push32((uint32_t)(0x10e7d050u));
  /* 10e536fc call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e53702u);
  /* 10e53702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53705 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53707 call 0x10e553d0 */
  push32(0x10e5370cu); f_10e553d0();
  /* 10e5370c mov esi, esp */
  ESI = (ESP);
  /* 10e5370e push 0x10e7d318 */
  push32((uint32_t)(0x10e7d318u));
  /* 10e53713 push 0x10e7d04c */
  push32((uint32_t)(0x10e7d04cu));
  /* 10e53718 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5371eu);
  /* 10e5371e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53721 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53723 call 0x10e553d0 */
  push32(0x10e53728u); f_10e553d0();
L_10e53728:;
  /* 10e53728 mov esi, esp */
  ESI = (ESP);
  /* 10e5372a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5372c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5372e call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53734u);
  /* 10e53734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53737 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53739 call 0x10e553d0 */
  push32(0x10e5373eu); f_10e553d0();
  /* 10e5373e mov esi, esp */
  ESI = (ESP);
  /* 10e53740 push 0x9dd */
  push32((uint32_t)(0x9ddu));
  /* 10e53745 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53747 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e5374du);
  /* 10e5374d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53752 call 0x10e553d0 */
  push32(0x10e53757u); f_10e553d0();
  /* 10e53757 mov esi, esp */
  ESI = (ESP);
  /* 10e53759 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5375b push 3 */
  push32((uint32_t)(0x3u));
  /* 10e5375d call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53763u);
  /* 10e53763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53768 call 0x10e553d0 */
  push32(0x10e5376du); f_10e553d0();
  /* 10e5376d mov esi, esp */
  ESI = (ESP);
  /* 10e5376f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53771 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e53773 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53779u);
  /* 10e53779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5377c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5377e call 0x10e553d0 */
  push32(0x10e53783u); f_10e553d0();
  /* 10e53783 cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5378a je 0x10e537be */
  if (C.zf) goto L_10e537be;
  /* 10e5378c mov esi, esp */
  ESI = (ESP);
  /* 10e5378e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e53793 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e53795 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e5379bu);
  /* 10e5379b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5379e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e537a0 call 0x10e553d0 */
  push32(0x10e537a5u); f_10e553d0();
  /* 10e537a5 mov esi, esp */
  ESI = (ESP);
  /* 10e537a7 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 10e537ac push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e537ae call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e537b4u);
  /* 10e537b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e537b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e537b9 call 0x10e553d0 */
  push32(0x10e537beu); f_10e553d0();
L_10e537be:;
  /* 10e537be mov esi, esp */
  ESI = (ESP);
  /* 10e537c0 mov ecx, dword ptr [0x10e823f8] */
  ECX = (r32((uint32_t)(0x10e823f8)));
  /* 10e537c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e537c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537cd push 0x10e7d30c */
  push32((uint32_t)(0x10e7d30cu));
  /* 10e537d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537d4 call dword ptr [0x10e854a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a4))), 0x10e537dau);
  /* 10e537da add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e537dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e537df call 0x10e553d0 */
  push32(0x10e537e4u); f_10e553d0();
  /* 10e537e4 mov esi, esp */
  ESI = (ESP);
  /* 10e537e6 mov edx, dword ptr [0x10e823f8] */
  EDX = (r32((uint32_t)(0x10e823f8)));
  /* 10e537ec push edx */
  push32((uint32_t)(EDX));
  /* 10e537ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e537f3 push 0x10e7d300 */
  push32((uint32_t)(0x10e7d300u));
  /* 10e537f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e537fa call dword ptr [0x10e854a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a4))), 0x10e53800u);
  /* 10e53800 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53803 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53805 call 0x10e553d0 */
  push32(0x10e5380au); f_10e553d0();
  /* 10e5380a mov esi, esp */
  ESI = (ESP);
  /* 10e5380c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5380e push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53810 push 0x10e824b8 */
  push32((uint32_t)(0x10e824b8u));
  /* 10e53815 call dword ptr [0x10e854a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a8))), 0x10e5381bu);
  /* 10e5381b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5381e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53820 call 0x10e553d0 */
  push32(0x10e53825u); f_10e553d0();
  /* 10e53825 mov esi, esp */
  ESI = (ESP);
  /* 10e53827 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10e53829 call dword ptr [0x10e854ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854ac))), 0x10e5382fu);
  /* 10e5382f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53834 call 0x10e553d0 */
  push32(0x10e53839u); f_10e553d0();
  /* 10e53839 mov esi, esp */
  ESI = (ESP);
  /* 10e5383b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e5383d call dword ptr [0x10e854b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b0))), 0x10e53843u);
  /* 10e53843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53848 call 0x10e553d0 */
  push32(0x10e5384du); f_10e553d0();
  /* 10e5384d mov esi, esp */
  ESI = (ESP);
  /* 10e5384f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e53851 call dword ptr [0x10e854b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b0))), 0x10e53857u);
  /* 10e53857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5385a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5385c call 0x10e553d0 */
  push32(0x10e53861u); f_10e553d0();
  /* 10e53861 mov esi, esp */
  ESI = (ESP);
  /* 10e53863 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10e53865 call dword ptr [0x10e854b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b0))), 0x10e5386bu);
  /* 10e5386b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5386e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53870 call 0x10e553d0 */
  push32(0x10e53875u); f_10e553d0();
  /* 10e53875 mov esi, esp */
  ESI = (ESP);
  /* 10e53877 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10e53879 call dword ptr [0x10e854b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b0))), 0x10e5387fu);
  /* 10e5387f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53884 call 0x10e553d0 */
  push32(0x10e53889u); f_10e553d0();
  /* 10e53889 mov esi, esp */
  ESI = (ESP);
  /* 10e5388b push 0x10e7d2f4 */
  push32((uint32_t)(0x10e7d2f4u));
  /* 10e53890 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e53896u);
  /* 10e53896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53899 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5389b call 0x10e553d0 */
  push32(0x10e538a0u); f_10e553d0();
  /* 10e538a0 mov esi, esp */
  ESI = (ESP);
  /* 10e538a2 push 0x10e7d2e8 */
  push32((uint32_t)(0x10e7d2e8u));
  /* 10e538a7 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e538adu);
  /* 10e538ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e538b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e538b2 call 0x10e553d0 */
  push32(0x10e538b7u); f_10e553d0();
  /* 10e538b7 mov esi, esp */
  ESI = (ESP);
  /* 10e538b9 push 0x10e7d2dc */
  push32((uint32_t)(0x10e7d2dcu));
  /* 10e538be call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e538c4u);
  /* 10e538c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e538c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e538c9 call 0x10e553d0 */
  push32(0x10e538ceu); f_10e553d0();
  /* 10e538ce mov esi, esp */
  ESI = (ESP);
  /* 10e538d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e538d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e538d4 call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e538dau);
  /* 10e538da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e538dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e538df call 0x10e553d0 */
  push32(0x10e538e4u); f_10e553d0();
L_10e538e4:;
  /* 10e538e4 mov esi, esp */
  ESI = (ESP);
  /* 10e538e6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e538e8 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e538eeu);
  /* 10e538ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e538f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e538f3 call 0x10e553d0 */
  push32(0x10e538f8u); f_10e553d0();
  /* 10e538f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e538fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e538ff je 0x10e539c5 */
  if (C.zf) goto L_10e539c5;
  /* 10e53905 mov esi, esp */
  ESI = (ESP);
  /* 10e53907 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e53909 call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e5390fu);
  /* 10e5390f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53912 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53914 call 0x10e553d0 */
  push32(0x10e53919u); f_10e553d0();
  /* 10e53919 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5391e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53920 je 0x10e539c5 */
  if (C.zf) goto L_10e539c5;
  /* 10e53926 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5392d jmp 0x10e53938 */
  goto L_10e53938;
L_10e5392f:;
  /* 10e5392f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e53932 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53935 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e53938:;
  /* 10e53938 mov ecx, dword ptr [0x10e823f8] */
  ECX = (r32((uint32_t)(0x10e823f8)));
  /* 10e5393e imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e53941 add ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53944 cmp dword ptr [ebp - 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53947 jge 0x10e539af */
  if ((C.sf==C.of)) goto L_10e539af;
  /* 10e53949 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5394b push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e53950 push 0x10e82428 */
  push32((uint32_t)(0x10e82428u));
  /* 10e53955 push 0x10e826d8 */
  push32((uint32_t)(0x10e826d8u));
  /* 10e5395a call 0x10e51046 */
  push32(0x10e5395fu); f_10e51046();
  /* 10e5395f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53962 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53964 push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e53969 push 0x10e82500 */
  push32((uint32_t)(0x10e82500u));
  /* 10e5396e push 0x10e826d8 */
  push32((uint32_t)(0x10e826d8u));
  /* 10e53973 call 0x10e51046 */
  push32(0x10e53978u); f_10e51046();
  /* 10e53978 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5397b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5397d push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e53982 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e53987 push 0x10e826b8 */
  push32((uint32_t)(0x10e826b8u));
  /* 10e5398c call 0x10e51046 */
  push32(0x10e53991u); f_10e51046();
  /* 10e53991 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53994 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53996 push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e5399b push 0x10e824e0 */
  push32((uint32_t)(0x10e824e0u));
  /* 10e539a0 push 0x10e826b8 */
  push32((uint32_t)(0x10e826b8u));
  /* 10e539a5 call 0x10e51046 */
  push32(0x10e539aau); f_10e51046();
  /* 10e539aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e539ad jmp 0x10e5392f */
  goto L_10e5392f;
L_10e539af:;
  /* 10e539af mov esi, esp */
  ESI = (ESP);
  /* 10e539b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e539b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e539b5 call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e539bbu);
  /* 10e539bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e539be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e539c0 call 0x10e553d0 */
  push32(0x10e539c5u); f_10e553d0();
L_10e539c5:;
  /* 10e539c5 mov esi, esp */
  ESI = (ESP);
  /* 10e539c7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e539c9 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e539cfu);
  /* 10e539cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e539d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e539d4 call 0x10e553d0 */
  push32(0x10e539d9u); f_10e553d0();
  /* 10e539d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e539de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e539e0 je 0x10e53ade */
  if (C.zf) goto L_10e53ade;
  /* 10e539e6 mov esi, esp */
  ESI = (ESP);
  /* 10e539e8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e539ea call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e539f0u);
  /* 10e539f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e539f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e539f5 call 0x10e553d0 */
  push32(0x10e539fau); f_10e553d0();
  /* 10e539fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e539ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53a01 je 0x10e53ade */
  if (C.zf) goto L_10e53ade;
  /* 10e53a07 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e53a0e jmp 0x10e53a19 */
  goto L_10e53a19;
L_10e53a10:;
  /* 10e53a10 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e53a13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53a16 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e53a19:;
  /* 10e53a19 mov eax, dword ptr [0x10e823f8] */
  EAX = (r32((uint32_t)(0x10e823f8)));
  /* 10e53a1e imul eax, eax, 0xf */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xfu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e53a21 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53a24 cmp dword ptr [ebp - 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53a27 jge 0x10e53ac8 */
  if ((C.sf==C.of)) goto L_10e53ac8;
  /* 10e53a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53a2f push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e53a34 push 0x10e82678 */
  push32((uint32_t)(0x10e82678u));
  /* 10e53a39 push 0x10e826e0 */
  push32((uint32_t)(0x10e826e0u));
  /* 10e53a3e call 0x10e51046 */
  push32(0x10e53a43u); f_10e51046();
  /* 10e53a43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53a48 push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e53a4d push 0x10e82560 */
  push32((uint32_t)(0x10e82560u));
  /* 10e53a52 push 0x10e826e0 */
  push32((uint32_t)(0x10e826e0u));
  /* 10e53a57 call 0x10e51046 */
  push32(0x10e53a5cu); f_10e51046();
  /* 10e53a5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53a61 push 0x10e825d8 */
  push32((uint32_t)(0x10e825d8u));
  /* 10e53a66 push 0x10e82428 */
  push32((uint32_t)(0x10e82428u));
  /* 10e53a6b push 0x10e826e8 */
  push32((uint32_t)(0x10e826e8u));
  /* 10e53a70 call 0x10e51046 */
  push32(0x10e53a75u); f_10e51046();
  /* 10e53a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53a78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53a7a push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e53a7f push 0x10e82510 */
  push32((uint32_t)(0x10e82510u));
  /* 10e53a84 push 0x10e826c0 */
  push32((uint32_t)(0x10e826c0u));
  /* 10e53a89 call 0x10e51046 */
  push32(0x10e53a8eu); f_10e51046();
  /* 10e53a8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53a91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53a93 push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e53a98 push 0x10e82488 */
  push32((uint32_t)(0x10e82488u));
  /* 10e53a9d push 0x10e826c0 */
  push32((uint32_t)(0x10e826c0u));
  /* 10e53aa2 call 0x10e51046 */
  push32(0x10e53aa7u); f_10e51046();
  /* 10e53aa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53aac push 0x10e825f8 */
  push32((uint32_t)(0x10e825f8u));
  /* 10e53ab1 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e53ab6 push 0x10e826c8 */
  push32((uint32_t)(0x10e826c8u));
  /* 10e53abb call 0x10e51046 */
  push32(0x10e53ac0u); f_10e51046();
  /* 10e53ac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53ac3 jmp 0x10e53a10 */
  goto L_10e53a10;
L_10e53ac8:;
  /* 10e53ac8 mov esi, esp */
  ESI = (ESP);
  /* 10e53aca push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53acc push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e53ace call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e53ad4u);
  /* 10e53ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53ad9 call 0x10e553d0 */
  push32(0x10e53adeu); f_10e553d0();
L_10e53ade:;
  /* 10e53ade mov esi, esp */
  ESI = (ESP);
  /* 10e53ae0 push 0x10e82540 */
  push32((uint32_t)(0x10e82540u));
  /* 10e53ae5 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53aebu);
  /* 10e53aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53aee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53af0 call 0x10e553d0 */
  push32(0x10e53af5u); f_10e553d0();
  /* 10e53af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53af7 je 0x10e53b2f */
  if (C.zf) goto L_10e53b2f;
  /* 10e53af9 mov esi, esp */
  ESI = (ESP);
  /* 10e53afb push 0x10e82540 */
  push32((uint32_t)(0x10e82540u));
  /* 10e53b00 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53b06u);
  /* 10e53b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53b0b call 0x10e553d0 */
  push32(0x10e53b10u); f_10e553d0();
  /* 10e53b10 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e53b11 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e53b13 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e53b15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b18 mov esi, esp */
  ESI = (ESP);
  /* 10e53b1a push eax */
  push32((uint32_t)(EAX));
  /* 10e53b1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53b1f call dword ptr [0x10e85544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85544))), 0x10e53b25u);
  /* 10e53b25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53b2a call 0x10e553d0 */
  push32(0x10e53b2fu); f_10e553d0();
L_10e53b2f:;
  /* 10e53b2f mov esi, esp */
  ESI = (ESP);
  /* 10e53b31 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e53b33 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e53b39u);
  /* 10e53b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53b3e call 0x10e553d0 */
  push32(0x10e53b43u); f_10e553d0();
  /* 10e53b43 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53b4a je 0x10e53c37 */
  if (C.zf) goto L_10e53c37;
  /* 10e53b50 mov esi, esp */
  ESI = (ESP);
  /* 10e53b52 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e53b54 call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e53b5au);
  /* 10e53b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53b5f call 0x10e553d0 */
  push32(0x10e53b64u); f_10e553d0();
  /* 10e53b64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53b6b je 0x10e53c37 */
  if (C.zf) goto L_10e53c37;
  /* 10e53b71 mov esi, esp */
  ESI = (ESP);
  /* 10e53b73 push 0x10e82400 */
  push32((uint32_t)(0x10e82400u));
  /* 10e53b78 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53b7eu);
  /* 10e53b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53b83 call 0x10e553d0 */
  push32(0x10e53b88u); f_10e553d0();
  /* 10e53b88 mov ecx, dword ptr [0x10e823f8] */
  ECX = (r32((uint32_t)(0x10e823f8)));
  /* 10e53b8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53b91 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53b93 jge 0x10e53c1e */
  if ((C.sf==C.of)) goto L_10e53c1e;
  /* 10e53b99 mov esi, esp */
  ESI = (ESP);
  /* 10e53b9b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e53b9d push 0x10e82588 */
  push32((uint32_t)(0x10e82588u));
  /* 10e53ba2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e53ba4 push 0x10e82538 */
  push32((uint32_t)(0x10e82538u));
  /* 10e53ba9 push 0x10e824a8 */
  push32((uint32_t)(0x10e824a8u));
  /* 10e53bae push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e53bb3 call dword ptr [0x10e8551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8551c))), 0x10e53bb9u);
  /* 10e53bb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53bbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53bbe call 0x10e553d0 */
  push32(0x10e53bc3u); f_10e553d0();
  /* 10e53bc3 mov esi, esp */
  ESI = (ESP);
  /* 10e53bc5 push 0x10e82400 */
  push32((uint32_t)(0x10e82400u));
  /* 10e53bca push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e53bcf call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53bd5u);
  /* 10e53bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53bda call 0x10e553d0 */
  push32(0x10e53bdfu); f_10e553d0();
  /* 10e53bdf push 0x10e82590 */
  push32((uint32_t)(0x10e82590u));
  /* 10e53be4 push 0x10e82400 */
  push32((uint32_t)(0x10e82400u));
  /* 10e53be9 call 0x10e5100a */
  push32(0x10e53beeu); f_10e5100a();
  /* 10e53bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53bf1 push 0x10e825b0 */
  push32((uint32_t)(0x10e825b0u));
  /* 10e53bf6 push 0x10e82400 */
  push32((uint32_t)(0x10e82400u));
  /* 10e53bfb call 0x10e51032 */
  push32(0x10e53c00u); f_10e51032();
  /* 10e53c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c03 mov esi, esp */
  ESI = (ESP);
  /* 10e53c05 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 10e53c0a push 3 */
  push32((uint32_t)(0x3u));
  /* 10e53c0c call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53c12u);
  /* 10e53c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53c17 call 0x10e553d0 */
  push32(0x10e53c1cu); f_10e553d0();
  /* 10e53c1c jmp 0x10e53c37 */
  goto L_10e53c37;
L_10e53c1e:;
  /* 10e53c1e mov esi, esp */
  ESI = (ESP);
  /* 10e53c20 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 10e53c25 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e53c27 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53c2du);
  /* 10e53c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53c32 call 0x10e553d0 */
  push32(0x10e53c37u); f_10e553d0();
L_10e53c37:;
  /* 10e53c37 mov esi, esp */
  ESI = (ESP);
  /* 10e53c39 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e53c3b call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e53c41u);
  /* 10e53c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53c46 call 0x10e553d0 */
  push32(0x10e53c4bu); f_10e553d0();
  /* 10e53c4b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53c52 je 0x10e53d3f */
  if (C.zf) goto L_10e53d3f;
  /* 10e53c58 mov esi, esp */
  ESI = (ESP);
  /* 10e53c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53c5c call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e53c62u);
  /* 10e53c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53c67 call 0x10e553d0 */
  push32(0x10e53c6cu); f_10e553d0();
  /* 10e53c6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53c73 je 0x10e53d3f */
  if (C.zf) goto L_10e53d3f;
  /* 10e53c79 mov esi, esp */
  ESI = (ESP);
  /* 10e53c7b push 0x10e82408 */
  push32((uint32_t)(0x10e82408u));
  /* 10e53c80 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53c86u);
  /* 10e53c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53c8b call 0x10e553d0 */
  push32(0x10e53c90u); f_10e553d0();
  /* 10e53c90 mov edx, dword ptr [0x10e823f8] */
  EDX = (r32((uint32_t)(0x10e823f8)));
  /* 10e53c96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53c99 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53c9b jge 0x10e53d26 */
  if ((C.sf==C.of)) goto L_10e53d26;
  /* 10e53ca1 mov esi, esp */
  ESI = (ESP);
  /* 10e53ca3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e53ca5 push 0x10e82598 */
  push32((uint32_t)(0x10e82598u));
  /* 10e53caa push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53cac push 0x10e826a8 */
  push32((uint32_t)(0x10e826a8u));
  /* 10e53cb1 push 0x10e824a8 */
  push32((uint32_t)(0x10e824a8u));
  /* 10e53cb6 push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e53cbb call dword ptr [0x10e8551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8551c))), 0x10e53cc1u);
  /* 10e53cc1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53cc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53cc6 call 0x10e553d0 */
  push32(0x10e53ccbu); f_10e553d0();
  /* 10e53ccb mov esi, esp */
  ESI = (ESP);
  /* 10e53ccd push 0x10e82408 */
  push32((uint32_t)(0x10e82408u));
  /* 10e53cd2 push 0x10e82460 */
  push32((uint32_t)(0x10e82460u));
  /* 10e53cd7 call dword ptr [0x10e85520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85520))), 0x10e53cddu);
  /* 10e53cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53ce2 call 0x10e553d0 */
  push32(0x10e53ce7u); f_10e553d0();
  /* 10e53ce7 push 0x10e825a0 */
  push32((uint32_t)(0x10e825a0u));
  /* 10e53cec push 0x10e82408 */
  push32((uint32_t)(0x10e82408u));
  /* 10e53cf1 call 0x10e5100a */
  push32(0x10e53cf6u); f_10e5100a();
  /* 10e53cf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53cf9 push 0x10e825c0 */
  push32((uint32_t)(0x10e825c0u));
  /* 10e53cfe push 0x10e82408 */
  push32((uint32_t)(0x10e82408u));
  /* 10e53d03 call 0x10e51032 */
  push32(0x10e53d08u); f_10e51032();
  /* 10e53d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53d0b mov esi, esp */
  ESI = (ESP);
  /* 10e53d0d push 0xfa */
  push32((uint32_t)(0xfau));
  /* 10e53d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53d14 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53d1au);
  /* 10e53d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53d1f call 0x10e553d0 */
  push32(0x10e53d24u); f_10e553d0();
  /* 10e53d24 jmp 0x10e53d3f */
  goto L_10e53d3f;
L_10e53d26:;
  /* 10e53d26 mov esi, esp */
  ESI = (ESP);
  /* 10e53d28 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 10e53d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53d2f call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e53d35u);
  /* 10e53d35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53d38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53d3a call 0x10e553d0 */
  push32(0x10e53d3fu); f_10e553d0();
L_10e53d3f:;
  /* 10e53d3f mov esi, esp */
  ESI = (ESP);
  /* 10e53d41 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e53d43 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e53d49u);
  /* 10e53d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53d4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53d4e call 0x10e553d0 */
  push32(0x10e53d53u); f_10e553d0();
  /* 10e53d53 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53d5a je 0x10e53ed2 */
  if (C.zf) goto L_10e53ed2;
  /* 10e53d60 mov esi, esp */
  ESI = (ESP);
  /* 10e53d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53d64 push 0x10e824c0 */
  push32((uint32_t)(0x10e824c0u));
  /* 10e53d69 call dword ptr [0x10e854c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854c0))), 0x10e53d6fu);
  /* 10e53d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53d74 call 0x10e553d0 */
  push32(0x10e53d79u); f_10e553d0();
  /* 10e53d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53d7b jle 0x10e53ed2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e53ed2;
  /* 10e53d81 mov esi, esp */
  ESI = (ESP);
  /* 10e53d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53d85 push 0x10e824d8 */
  push32((uint32_t)(0x10e824d8u));
  /* 10e53d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53d8c call dword ptr [0x10e854c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854c4))), 0x10e53d92u);
  /* 10e53d92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53d97 call 0x10e553d0 */
  push32(0x10e53d9cu); f_10e553d0();
  /* 10e53d9c mov esi, esp */
  ESI = (ESP);
  /* 10e53d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53da0 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e53da6u);
  /* 10e53da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53dab call 0x10e553d0 */
  push32(0x10e53db0u); f_10e553d0();
  /* 10e53db0 mov esi, esp */
  ESI = (ESP);
  /* 10e53db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53db6 push 0x10e824c0 */
  push32((uint32_t)(0x10e824c0u));
  /* 10e53dbb call dword ptr [0x10e854c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854c8))), 0x10e53dc1u);
  /* 10e53dc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53dc6 call 0x10e553d0 */
  push32(0x10e53dcbu); f_10e553d0();
  /* 10e53dcb mov esi, esp */
  ESI = (ESP);
  /* 10e53dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53dcf push 0x10e82568 */
  push32((uint32_t)(0x10e82568u));
  /* 10e53dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53dd6 call dword ptr [0x10e854c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854c4))), 0x10e53ddcu);
  /* 10e53ddc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53ddf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53de1 call 0x10e553d0 */
  push32(0x10e53de6u); f_10e553d0();
  /* 10e53de6 mov esi, esp */
  ESI = (ESP);
  /* 10e53de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53dea call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e53df0u);
  /* 10e53df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53df3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53df5 call 0x10e553d0 */
  push32(0x10e53dfau); f_10e553d0();
  /* 10e53dfa mov esi, esp */
  ESI = (ESP);
  /* 10e53dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53dfe push 0x10e82648 */
  push32((uint32_t)(0x10e82648u));
  /* 10e53e03 call dword ptr [0x10e85498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85498))), 0x10e53e09u);
  /* 10e53e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53e0e call 0x10e553d0 */
  push32(0x10e53e13u); f_10e553d0();
  /* 10e53e13 mov esi, esp */
  ESI = (ESP);
  /* 10e53e15 push 0x10e82568 */
  push32((uint32_t)(0x10e82568u));
  /* 10e53e1a push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53e1c call dword ptr [0x10e854cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854cc))), 0x10e53e22u);
  /* 10e53e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53e27 call 0x10e553d0 */
  push32(0x10e53e2cu); f_10e553d0();
  /* 10e53e2c mov esi, esp */
  ESI = (ESP);
  /* 10e53e2e push 4 */
  push32((uint32_t)(0x4u));
  /* 10e53e30 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e53e36u);
  /* 10e53e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53e3b call 0x10e553d0 */
  push32(0x10e53e40u); f_10e553d0();
  /* 10e53e40 mov esi, esp */
  ESI = (ESP);
  /* 10e53e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53e44 push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e53e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53e4b call dword ptr [0x10e85528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85528))), 0x10e53e51u);
  /* 10e53e51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53e56 call 0x10e553d0 */
  push32(0x10e53e5bu); f_10e553d0();
  /* 10e53e5b mov esi, esp */
  ESI = (ESP);
  /* 10e53e5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53e5f push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e53e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53e66 call dword ptr [0x10e85528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85528))), 0x10e53e6cu);
  /* 10e53e6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53e71 call 0x10e553d0 */
  push32(0x10e53e76u); f_10e553d0();
  /* 10e53e76 mov esi, esp */
  ESI = (ESP);
  /* 10e53e78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e53e7a push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e53e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53e81 call dword ptr [0x10e85528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85528))), 0x10e53e87u);
  /* 10e53e87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53e8c call 0x10e553d0 */
  push32(0x10e53e91u); f_10e553d0();
  /* 10e53e91 mov esi, esp */
  ESI = (ESP);
  /* 10e53e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53e95 call dword ptr [0x10e854d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d0))), 0x10e53e9bu);
  /* 10e53e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53ea0 call 0x10e553d0 */
  push32(0x10e53ea5u); f_10e553d0();
  /* 10e53ea5 mov esi, esp */
  ESI = (ESP);
  /* 10e53ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53ea9 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e53eafu);
  /* 10e53eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53eb4 call 0x10e553d0 */
  push32(0x10e53eb9u); f_10e553d0();
  /* 10e53eb9 mov esi, esp */
  ESI = (ESP);
  /* 10e53ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53ebd push 0x10e824d8 */
  push32((uint32_t)(0x10e824d8u));
  /* 10e53ec2 call dword ptr [0x10e85498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85498))), 0x10e53ec8u);
  /* 10e53ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53ecd call 0x10e553d0 */
  push32(0x10e53ed2u); f_10e553d0();
L_10e53ed2:;
  /* 10e53ed2 mov esi, esp */
  ESI = (ESP);
  /* 10e53ed4 push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e53ed9 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53edfu);
  /* 10e53edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53ee4 call 0x10e553d0 */
  push32(0x10e53ee9u); f_10e553d0();
  /* 10e53ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53eeb je 0x10e53f0b */
  if (C.zf) goto L_10e53f0b;
  /* 10e53eed mov esi, esp */
  ESI = (ESP);
  /* 10e53eef push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53ef1 push 0x10e82498 */
  push32((uint32_t)(0x10e82498u));
  /* 10e53ef6 push 0x10e82448 */
  push32((uint32_t)(0x10e82448u));
  /* 10e53efb call dword ptr [0x10e854d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d4))), 0x10e53f01u);
  /* 10e53f01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53f04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53f06 call 0x10e553d0 */
  push32(0x10e53f0bu); f_10e553d0();
L_10e53f0b:;
  /* 10e53f0b mov esi, esp */
  ESI = (ESP);
  /* 10e53f0d push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e53f12 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53f18u);
  /* 10e53f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53f1d call 0x10e553d0 */
  push32(0x10e53f22u); f_10e553d0();
  /* 10e53f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53f24 je 0x10e53f44 */
  if (C.zf) goto L_10e53f44;
  /* 10e53f26 mov esi, esp */
  ESI = (ESP);
  /* 10e53f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53f2a push 0x10e824a0 */
  push32((uint32_t)(0x10e824a0u));
  /* 10e53f2f push 0x10e82450 */
  push32((uint32_t)(0x10e82450u));
  /* 10e53f34 call dword ptr [0x10e854d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d4))), 0x10e53f3au);
  /* 10e53f3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53f3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53f3f call 0x10e553d0 */
  push32(0x10e53f44u); f_10e553d0();
L_10e53f44:;
  /* 10e53f44 mov esi, esp */
  ESI = (ESP);
  /* 10e53f46 push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e53f4b call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53f51u);
  /* 10e53f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53f54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53f56 call 0x10e553d0 */
  push32(0x10e53f5bu); f_10e553d0();
  /* 10e53f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53f5d je 0x10e53f7d */
  if (C.zf) goto L_10e53f7d;
  /* 10e53f5f mov esi, esp */
  ESI = (ESP);
  /* 10e53f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53f63 push 0x10e824b0 */
  push32((uint32_t)(0x10e824b0u));
  /* 10e53f68 push 0x10e82458 */
  push32((uint32_t)(0x10e82458u));
  /* 10e53f6d call dword ptr [0x10e854d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d4))), 0x10e53f73u);
  /* 10e53f73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53f78 call 0x10e553d0 */
  push32(0x10e53f7du); f_10e553d0();
L_10e53f7d:;
  /* 10e53f7d mov esi, esp */
  ESI = (ESP);
  /* 10e53f7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e53f81 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e53f87u);
  /* 10e53f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53f8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53f8c call 0x10e553d0 */
  push32(0x10e53f91u); f_10e553d0();
  /* 10e53f91 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53f98 je 0x10e5400e */
  if (C.zf) goto L_10e5400e;
  /* 10e53f9a mov esi, esp */
  ESI = (ESP);
  /* 10e53f9c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e53f9e call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e53fa4u);
  /* 10e53fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53fa9 call 0x10e553d0 */
  push32(0x10e53faeu); f_10e553d0();
  /* 10e53fae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e53fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53fb5 je 0x10e5400e */
  if (C.zf) goto L_10e5400e;
  /* 10e53fb7 mov esi, esp */
  ESI = (ESP);
  /* 10e53fb9 push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e53fbe call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e53fc4u);
  /* 10e53fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53fc9 call 0x10e553d0 */
  push32(0x10e53fceu); f_10e553d0();
  /* 10e53fce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e53fd0 jne 0x10e5400e */
  if (!C.zf) goto L_10e5400e;
  /* 10e53fd2 mov esi, esp */
  ESI = (ESP);
  /* 10e53fd4 push 0x10e7d2d0 */
  push32((uint32_t)(0x10e7d2d0u));
  /* 10e53fd9 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e53fdfu);
  /* 10e53fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e53fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53fe4 call 0x10e553d0 */
  push32(0x10e53fe9u); f_10e553d0();
  /* 10e53fe9 mov esi, esp */
  ESI = (ESP);
  /* 10e53feb call dword ptr [0x10e854d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d8))), 0x10e53ff1u);
  /* 10e53ff1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e53ff3 call 0x10e553d0 */
  push32(0x10e53ff8u); f_10e553d0();
  /* 10e53ff8 mov esi, esp */
  ESI = (ESP);
  /* 10e53ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e53ffc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e53ffe call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54004u);
  /* 10e54004 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54007 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54009 call 0x10e553d0 */
  push32(0x10e5400eu); f_10e553d0();
L_10e5400e:;
  /* 10e5400e mov esi, esp */
  ESI = (ESP);
  /* 10e54010 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54012 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54018u);
  /* 10e54018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5401b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5401d call 0x10e553d0 */
  push32(0x10e54022u); f_10e553d0();
  /* 10e54022 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54029 je 0x10e5407e */
  if (C.zf) goto L_10e5407e;
  /* 10e5402b push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e54030 call 0x10e51014 */
  push32(0x10e54035u); f_10e51014();
  /* 10e54035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5403a jne 0x10e5407e */
  if (!C.zf) goto L_10e5407e;
  /* 10e5403c mov esi, esp */
  ESI = (ESP);
  /* 10e5403e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e54040 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54042 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e54048u);
  /* 10e54048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5404b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5404d call 0x10e553d0 */
  push32(0x10e54052u); f_10e553d0();
  /* 10e54052 mov esi, esp */
  ESI = (ESP);
  /* 10e54054 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54056 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54058 call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e5405eu);
  /* 10e5405e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54061 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54063 call 0x10e553d0 */
  push32(0x10e54068u); f_10e553d0();
  /* 10e54068 mov esi, esp */
  ESI = (ESP);
  /* 10e5406a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5406c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5406e call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54074u);
  /* 10e54074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54077 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54079 call 0x10e553d0 */
  push32(0x10e5407eu); f_10e553d0();
L_10e5407e:;
  /* 10e5407e mov esi, esp */
  ESI = (ESP);
  /* 10e54080 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e54082 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54088u);
  /* 10e54088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5408b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5408d call 0x10e553d0 */
  push32(0x10e54092u); f_10e553d0();
  /* 10e54092 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54099 je 0x10e5437a */
  if (C.zf) goto L_10e5437a;
  /* 10e5409f mov esi, esp */
  ESI = (ESP);
  /* 10e540a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e540a3 call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e540a9u);
  /* 10e540a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e540ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e540ae call 0x10e553d0 */
  push32(0x10e540b3u); f_10e553d0();
  /* 10e540b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e540b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e540ba je 0x10e5437a */
  if (C.zf) goto L_10e5437a;
  /* 10e540c0 push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e540c5 call 0x10e51014 */
  push32(0x10e540cau); f_10e51014();
  /* 10e540ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e540cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e540cf jne 0x10e54364 */
  if (!C.zf) goto L_10e54364;
  /* 10e540d5 mov eax, 4 */
  EAX = (0x4u);
  /* 10e540da sub eax, dword ptr [0x10e823f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e540e0 imul eax, eax, 0x8ca */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x8cau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e540e6 mov esi, esp */
  ESI = (ESP);
  /* 10e540e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e540e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e540eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e540ed call dword ptr [0x10e85544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85544))), 0x10e540f3u);
  /* 10e540f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e540f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e540f8 call 0x10e553d0 */
  push32(0x10e540fdu); f_10e553d0();
  /* 10e540fd mov ecx, 4 */
  ECX = (0x4u);
  /* 10e54102 sub ecx, dword ptr [0x10e823f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e54108 imul ecx, ecx, 0x5dc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x5dcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5410e mov esi, esp */
  ESI = (ESP);
  /* 10e54110 push ecx */
  push32((uint32_t)(ECX));
  /* 10e54111 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e54113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54115 call dword ptr [0x10e85544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85544))), 0x10e5411bu);
  /* 10e5411b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5411e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54120 call 0x10e553d0 */
  push32(0x10e54125u); f_10e553d0();
  /* 10e54125 mov edx, 4 */
  EDX = (0x4u);
  /* 10e5412a sub edx, dword ptr [0x10e823f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e54130 imul edx, edx, 0x5dc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x5dcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e54136 mov esi, esp */
  ESI = (ESP);
  /* 10e54138 push edx */
  push32((uint32_t)(EDX));
  /* 10e54139 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e5413b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5413d call dword ptr [0x10e85544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85544))), 0x10e54143u);
  /* 10e54143 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54148 call 0x10e553d0 */
  push32(0x10e5414du); f_10e553d0();
  /* 10e5414d mov eax, 4 */
  EAX = (0x4u);
  /* 10e54152 sub eax, dword ptr [0x10e823f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e54158 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5415e mov esi, esp */
  ESI = (ESP);
  /* 10e54160 push eax */
  push32((uint32_t)(EAX));
  /* 10e54161 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e54163 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54165 call dword ptr [0x10e85544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85544))), 0x10e5416bu);
  /* 10e5416b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5416e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54170 call 0x10e553d0 */
  push32(0x10e54175u); f_10e553d0();
  /* 10e54175 mov esi, esp */
  ESI = (ESP);
  /* 10e54177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54179 push 0x10e824d8 */
  push32((uint32_t)(0x10e824d8u));
  /* 10e5417e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54180 call dword ptr [0x10e854c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854c4))), 0x10e54186u);
  /* 10e54186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54189 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5418b call 0x10e553d0 */
  push32(0x10e54190u); f_10e553d0();
  /* 10e54190 mov esi, esp */
  ESI = (ESP);
  /* 10e54192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54194 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e5419au);
  /* 10e5419a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5419d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5419f call 0x10e553d0 */
  push32(0x10e541a4u); f_10e553d0();
  /* 10e541a4 mov esi, esp */
  ESI = (ESP);
  /* 10e541a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e541a8 call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e541aeu);
  /* 10e541ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e541b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e541b3 call 0x10e553d0 */
  push32(0x10e541b8u); f_10e553d0();
  /* 10e541b8 mov esi, esp */
  ESI = (ESP);
  /* 10e541ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10e541bc push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e541c1 call dword ptr [0x10e85498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85498))), 0x10e541c7u);
  /* 10e541c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e541ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e541cc call 0x10e553d0 */
  push32(0x10e541d1u); f_10e553d0();
  /* 10e541d1 mov esi, esp */
  ESI = (ESP);
  /* 10e541d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e541d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e541d7 call dword ptr [0x10e854dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854dc))), 0x10e541ddu);
  /* 10e541dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e541e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e541e2 call 0x10e553d0 */
  push32(0x10e541e7u); f_10e553d0();
  /* 10e541e7 mov esi, esp */
  ESI = (ESP);
  /* 10e541e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e541eb call dword ptr [0x10e854a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854a0))), 0x10e541f1u);
  /* 10e541f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e541f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e541f6 call 0x10e553d0 */
  push32(0x10e541fbu); f_10e553d0();
  /* 10e541fb mov esi, esp */
  ESI = (ESP);
  /* 10e541fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e541ff push 0x10e824d8 */
  push32((uint32_t)(0x10e824d8u));
  /* 10e54204 call dword ptr [0x10e85498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85498))), 0x10e5420au);
  /* 10e5420a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5420d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5420f call 0x10e553d0 */
  push32(0x10e54214u); f_10e553d0();
  /* 10e54214 mov esi, esp */
  ESI = (ESP);
  /* 10e54216 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54218 push 0x10e82670 */
  push32((uint32_t)(0x10e82670u));
  /* 10e5421d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5421f call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e54225u);
  /* 10e54225 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54228 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5422a call 0x10e553d0 */
  push32(0x10e5422fu); f_10e553d0();
  /* 10e5422f mov esi, esp */
  ESI = (ESP);
  /* 10e54231 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54233 push 0x10e82670 */
  push32((uint32_t)(0x10e82670u));
  /* 10e54238 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5423a call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e54240u);
  /* 10e54240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54245 call 0x10e553d0 */
  push32(0x10e5424au); f_10e553d0();
  /* 10e5424a mov esi, esp */
  ESI = (ESP);
  /* 10e5424c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5424e push 0x10e82548 */
  push32((uint32_t)(0x10e82548u));
  /* 10e54253 push 0x10e82670 */
  push32((uint32_t)(0x10e82670u));
  /* 10e54258 push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e5425d call dword ptr [0x10e854e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854e0))), 0x10e54263u);
  /* 10e54263 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54266 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54268 call 0x10e553d0 */
  push32(0x10e5426du); f_10e553d0();
  /* 10e5426d mov esi, esp */
  ESI = (ESP);
  /* 10e5426f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10e54274 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54276 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e5427cu);
  /* 10e5427c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5427f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54281 call 0x10e553d0 */
  push32(0x10e54286u); f_10e553d0();
  /* 10e54286 mov esi, esp */
  ESI = (ESP);
  /* 10e54288 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5428a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5428c call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54292u);
  /* 10e54292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54297 call 0x10e553d0 */
  push32(0x10e5429cu); f_10e553d0();
  /* 10e5429c mov esi, esp */
  ESI = (ESP);
  /* 10e5429e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e542a0 call dword ptr [0x10e854e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854e4))), 0x10e542a6u);
  /* 10e542a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e542a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e542ab call 0x10e553d0 */
  push32(0x10e542b0u); f_10e553d0();
  /* 10e542b0 mov esi, esp */
  ESI = (ESP);
  /* 10e542b2 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10e542b4 call dword ptr [0x10e854b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b0))), 0x10e542bau);
  /* 10e542ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e542bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e542bf call 0x10e553d0 */
  push32(0x10e542c4u); f_10e553d0();
  /* 10e542c4 mov esi, esp */
  ESI = (ESP);
  /* 10e542c6 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e542c8 call dword ptr [0x10e854ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854ac))), 0x10e542ceu);
  /* 10e542ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e542d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e542d3 call 0x10e553d0 */
  push32(0x10e542d8u); f_10e553d0();
  /* 10e542d8 mov esi, esp */
  ESI = (ESP);
  /* 10e542da push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e542dc call dword ptr [0x10e854ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854ac))), 0x10e542e2u);
  /* 10e542e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e542e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e542e7 call 0x10e553d0 */
  push32(0x10e542ecu); f_10e553d0();
  /* 10e542ec mov esi, esp */
  ESI = (ESP);
  /* 10e542ee push 0x10e7d2c8 */
  push32((uint32_t)(0x10e7d2c8u));
  /* 10e542f3 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e542f9u);
  /* 10e542f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e542fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e542fe call 0x10e553d0 */
  push32(0x10e54303u); f_10e553d0();
  /* 10e54303 mov ecx, 4 */
  ECX = (0x4u);
  /* 10e54308 sub ecx, dword ptr [0x10e823f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5430e imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e54314 mov esi, esp */
  ESI = (ESP);
  /* 10e54316 push ecx */
  push32((uint32_t)(ECX));
  /* 10e54317 mov edx, 4 */
  EDX = (0x4u);
  /* 10e5431c sub edx, dword ptr [0x10e823f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e54322 imul edx, edx, 0x5dc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x5dcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e54328 push edx */
  push32((uint32_t)(EDX));
  /* 10e54329 mov eax, 4 */
  EAX = (0x4u);
  /* 10e5432e sub eax, dword ptr [0x10e823f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e54334 imul eax, eax, 0x5dc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x5dcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5433a push eax */
  push32((uint32_t)(EAX));
  /* 10e5433b mov ecx, 4 */
  ECX = (0x4u);
  /* 10e54340 sub ecx, dword ptr [0x10e823f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e823f8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e54346 imul ecx, ecx, 0x8ca */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8cau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5434c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5434d push 0x10e7d2c0 */
  push32((uint32_t)(0x10e7d2c0u));
  /* 10e54352 call dword ptr [0x10e854e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854e8))), 0x10e54358u);
  /* 10e54358 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5435b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5435d call 0x10e553d0 */
  push32(0x10e54362u); f_10e553d0();
  /* 10e54362 jmp 0x10e5437a */
  goto L_10e5437a;
L_10e54364:;
  /* 10e54364 mov esi, esp */
  ESI = (ESP);
  /* 10e54366 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54368 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5436a call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54370u);
  /* 10e54370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54375 call 0x10e553d0 */
  push32(0x10e5437au); f_10e553d0();
L_10e5437a:;
  /* 10e5437a mov esi, esp */
  ESI = (ESP);
  /* 10e5437c push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5437e call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54384u);
  /* 10e54384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54389 call 0x10e553d0 */
  push32(0x10e5438eu); f_10e553d0();
  /* 10e5438e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54395 je 0x10e5445e */
  if (C.zf) goto L_10e5445e;
  /* 10e5439b mov esi, esp */
  ESI = (ESP);
  /* 10e5439d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5439f push 0x10e824b8 */
  push32((uint32_t)(0x10e824b8u));
  /* 10e543a4 call dword ptr [0x10e854c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854c0))), 0x10e543aau);
  /* 10e543aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e543ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e543af call 0x10e553d0 */
  push32(0x10e543b4u); f_10e553d0();
  /* 10e543b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e543b6 jle 0x10e5445e */
  if ((C.zf||C.sf!=C.of)) goto L_10e5445e;
  /* 10e543bc cmp dword ptr [0x10e823f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e823f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e543c3 jle 0x10e5442f */
  if ((C.zf||C.sf!=C.of)) goto L_10e5442f;
  /* 10e543c5 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e543cc jmp 0x10e543d7 */
  goto L_10e543d7;
L_10e543ce:;
  /* 10e543ce mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e543d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e543d4 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e543d7:;
  /* 10e543d7 mov eax, dword ptr [0x10e823f8] */
  EAX = (r32((uint32_t)(0x10e823f8)));
  /* 10e543dc imul eax, eax, 5 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x5u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e543df add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e543e2 cmp dword ptr [ebp - 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e543e5 jge 0x10e5442f */
  if ((C.sf==C.of)) goto L_10e5442f;
  /* 10e543e7 mov esi, esp */
  ESI = (ESP);
  /* 10e543e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e543eb push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e543f0 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e543f5 push 0x10e82418 */
  push32((uint32_t)(0x10e82418u));
  /* 10e543fa call dword ptr [0x10e854e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854e0))), 0x10e54400u);
  /* 10e54400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54403 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54405 call 0x10e553d0 */
  push32(0x10e5440au); f_10e553d0();
  /* 10e5440a mov esi, esp */
  ESI = (ESP);
  /* 10e5440c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5440e push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e54413 push 0x10e824f8 */
  push32((uint32_t)(0x10e824f8u));
  /* 10e54418 push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e5441d call dword ptr [0x10e854e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854e0))), 0x10e54423u);
  /* 10e54423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54428 call 0x10e553d0 */
  push32(0x10e5442du); f_10e553d0();
  /* 10e5442d jmp 0x10e543ce */
  goto L_10e543ce;
L_10e5442f:;
  /* 10e5442f mov esi, esp */
  ESI = (ESP);
  /* 10e54431 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10e54436 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e54438 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e5443eu);
  /* 10e5443e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54443 call 0x10e553d0 */
  push32(0x10e54448u); f_10e553d0();
  /* 10e54448 mov esi, esp */
  ESI = (ESP);
  /* 10e5444a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5444c push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5444e call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54454u);
  /* 10e54454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54459 call 0x10e553d0 */
  push32(0x10e5445eu); f_10e553d0();
L_10e5445e:;
  /* 10e5445e mov esi, esp */
  ESI = (ESP);
  /* 10e54460 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e54462 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54468u);
  /* 10e54468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5446b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5446d call 0x10e553d0 */
  push32(0x10e54472u); f_10e553d0();
  /* 10e54472 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54479 je 0x10e544f8 */
  if (C.zf) goto L_10e544f8;
  /* 10e5447b mov esi, esp */
  ESI = (ESP);
  /* 10e5447d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5447f call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e54485u);
  /* 10e54485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5448a call 0x10e553d0 */
  push32(0x10e5448fu); f_10e553d0();
  /* 10e5448f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54496 je 0x10e544f8 */
  if (C.zf) goto L_10e544f8;
  /* 10e54498 mov esi, esp */
  ESI = (ESP);
  /* 10e5449a push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e5449f call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e544a5u);
  /* 10e544a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e544a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e544aa call 0x10e553d0 */
  push32(0x10e544afu); f_10e553d0();
  /* 10e544af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e544b1 je 0x10e544e2 */
  if (C.zf) goto L_10e544e2;
  /* 10e544b3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e544b5 push 0x10e82628 */
  push32((uint32_t)(0x10e82628u));
  /* 10e544ba push 0x10e82468 */
  push32((uint32_t)(0x10e82468u));
  /* 10e544bf call 0x10e51005 */
  push32(0x10e544c4u); f_10e51005();
  /* 10e544c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e544c7 mov esi, esp */
  ESI = (ESP);
  /* 10e544c9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10e544ce push 4 */
  push32((uint32_t)(0x4u));
  /* 10e544d0 call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e544d6u);
  /* 10e544d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e544d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e544db call 0x10e553d0 */
  push32(0x10e544e0u); f_10e553d0();
  /* 10e544e0 jmp 0x10e544f8 */
  goto L_10e544f8;
L_10e544e2:;
  /* 10e544e2 mov esi, esp */
  ESI = (ESP);
  /* 10e544e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e544e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e544e8 call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e544eeu);
  /* 10e544ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e544f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e544f3 call 0x10e553d0 */
  push32(0x10e544f8u); f_10e553d0();
L_10e544f8:;
  /* 10e544f8 mov esi, esp */
  ESI = (ESP);
  /* 10e544fa push 3 */
  push32((uint32_t)(0x3u));
  /* 10e544fc call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54502u);
  /* 10e54502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54507 call 0x10e553d0 */
  push32(0x10e5450cu); f_10e553d0();
  /* 10e5450c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54513 je 0x10e546d1 */
  if (C.zf) goto L_10e546d1;
  /* 10e54519 mov esi, esp */
  ESI = (ESP);
  /* 10e5451b push 0x10e82548 */
  push32((uint32_t)(0x10e82548u));
  /* 10e54520 push 0x10e82490 */
  push32((uint32_t)(0x10e82490u));
  /* 10e54525 call dword ptr [0x10e854ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854ec))), 0x10e5452bu);
  /* 10e5452b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5452e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54530 call 0x10e553d0 */
  push32(0x10e54535u); f_10e553d0();
  /* 10e54535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54537 jle 0x10e546d1 */
  if ((C.zf||C.sf!=C.of)) goto L_10e546d1;
  /* 10e5453d mov esi, esp */
  ESI = (ESP);
  /* 10e5453f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54541 push 0x10e82578 */
  push32((uint32_t)(0x10e82578u));
  /* 10e54546 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54548 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e5454eu);
  /* 10e5454e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54551 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54553 call 0x10e553d0 */
  push32(0x10e54558u); f_10e553d0();
  /* 10e54558 mov esi, esp */
  ESI = (ESP);
  /* 10e5455a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5455c push 0x10e82690 */
  push32((uint32_t)(0x10e82690u));
  /* 10e54561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54563 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e54569u);
  /* 10e54569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5456c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5456e call 0x10e553d0 */
  push32(0x10e54573u); f_10e553d0();
  /* 10e54573 mov esi, esp */
  ESI = (ESP);
  /* 10e54575 push 0x10e82420 */
  push32((uint32_t)(0x10e82420u));
  /* 10e5457a call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e54580u);
  /* 10e54580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54585 call 0x10e553d0 */
  push32(0x10e5458au); f_10e553d0();
  /* 10e5458a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5458c jne 0x10e545a9 */
  if (!C.zf) goto L_10e545a9;
  /* 10e5458e mov esi, esp */
  ESI = (ESP);
  /* 10e54590 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54592 push 0x10e82520 */
  push32((uint32_t)(0x10e82520u));
  /* 10e54597 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54599 call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e5459fu);
  /* 10e5459f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e545a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e545a4 call 0x10e553d0 */
  push32(0x10e545a9u); f_10e553d0();
L_10e545a9:;
  /* 10e545a9 mov esi, esp */
  ESI = (ESP);
  /* 10e545ab push 0x10e7d034 */
  push32((uint32_t)(0x10e7d034u));
  /* 10e545b0 push 0x10e7d044 */
  push32((uint32_t)(0x10e7d044u));
  /* 10e545b5 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e545bbu);
  /* 10e545bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e545be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e545c0 call 0x10e553d0 */
  push32(0x10e545c5u); f_10e553d0();
  /* 10e545c5 mov esi, esp */
  ESI = (ESP);
  /* 10e545c7 push 0x10e7d028 */
  push32((uint32_t)(0x10e7d028u));
  /* 10e545cc push 0x10e7d044 */
  push32((uint32_t)(0x10e7d044u));
  /* 10e545d1 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e545d7u);
  /* 10e545d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e545da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e545dc call 0x10e553d0 */
  push32(0x10e545e1u); f_10e553d0();
  /* 10e545e1 mov esi, esp */
  ESI = (ESP);
  /* 10e545e3 push 0x10e7d01c */
  push32((uint32_t)(0x10e7d01cu));
  /* 10e545e8 push 0x10e7d044 */
  push32((uint32_t)(0x10e7d044u));
  /* 10e545ed call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e545f3u);
  /* 10e545f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e545f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e545f8 call 0x10e553d0 */
  push32(0x10e545fdu); f_10e553d0();
  /* 10e545fd mov esi, esp */
  ESI = (ESP);
  /* 10e545ff push 0x10e7d034 */
  push32((uint32_t)(0x10e7d034u));
  /* 10e54604 push 0x10e7d03c */
  push32((uint32_t)(0x10e7d03cu));
  /* 10e54609 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5460fu);
  /* 10e5460f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54614 call 0x10e553d0 */
  push32(0x10e54619u); f_10e553d0();
  /* 10e54619 mov esi, esp */
  ESI = (ESP);
  /* 10e5461b push 0x10e7d028 */
  push32((uint32_t)(0x10e7d028u));
  /* 10e54620 push 0x10e7d03c */
  push32((uint32_t)(0x10e7d03cu));
  /* 10e54625 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e5462bu);
  /* 10e5462b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5462e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54630 call 0x10e553d0 */
  push32(0x10e54635u); f_10e553d0();
  /* 10e54635 mov esi, esp */
  ESI = (ESP);
  /* 10e54637 push 0x10e7d01c */
  push32((uint32_t)(0x10e7d01cu));
  /* 10e5463c push 0x10e7d03c */
  push32((uint32_t)(0x10e7d03cu));
  /* 10e54641 call dword ptr [0x10e85484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85484))), 0x10e54647u);
  /* 10e54647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5464a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5464c call 0x10e553d0 */
  push32(0x10e54651u); f_10e553d0();
  /* 10e54651 mov esi, esp */
  ESI = (ESP);
  /* 10e54653 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e54655 call dword ptr [0x10e854b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b0))), 0x10e5465bu);
  /* 10e5465b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5465e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54660 call 0x10e553d0 */
  push32(0x10e54665u); f_10e553d0();
  /* 10e54665 mov esi, esp */
  ESI = (ESP);
  /* 10e54667 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10e54669 call dword ptr [0x10e854ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854ac))), 0x10e5466fu);
  /* 10e5466f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54674 call 0x10e553d0 */
  push32(0x10e54679u); f_10e553d0();
  /* 10e54679 mov esi, esp */
  ESI = (ESP);
  /* 10e5467b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10e5467d call dword ptr [0x10e854ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854ac))), 0x10e54683u);
  /* 10e54683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54688 call 0x10e553d0 */
  push32(0x10e5468du); f_10e553d0();
  /* 10e5468d mov esi, esp */
  ESI = (ESP);
  /* 10e5468f push 0x10e7d2b8 */
  push32((uint32_t)(0x10e7d2b8u));
  /* 10e54694 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e5469au);
  /* 10e5469a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5469d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5469f call 0x10e553d0 */
  push32(0x10e546a4u); f_10e553d0();
  /* 10e546a4 mov esi, esp */
  ESI = (ESP);
  /* 10e546a6 push 0x10e7d2b0 */
  push32((uint32_t)(0x10e7d2b0u));
  /* 10e546ab call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e546b1u);
  /* 10e546b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e546b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e546b6 call 0x10e553d0 */
  push32(0x10e546bbu); f_10e553d0();
  /* 10e546bb mov esi, esp */
  ESI = (ESP);
  /* 10e546bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e546bf push 3 */
  push32((uint32_t)(0x3u));
  /* 10e546c1 call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e546c7u);
  /* 10e546c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e546ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e546cc call 0x10e553d0 */
  push32(0x10e546d1u); f_10e553d0();
L_10e546d1:;
  /* 10e546d1 mov esi, esp */
  ESI = (ESP);
  /* 10e546d3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e546d5 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e546dbu);
  /* 10e546db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e546de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e546e0 call 0x10e553d0 */
  push32(0x10e546e5u); f_10e553d0();
  /* 10e546e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e546ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e546ec je 0x10e54783 */
  if (C.zf) goto L_10e54783;
  /* 10e546f2 mov esi, esp */
  ESI = (ESP);
  /* 10e546f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e546f6 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e546fcu);
  /* 10e546fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e546ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54701 call 0x10e553d0 */
  push32(0x10e54706u); f_10e553d0();
  /* 10e54706 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5470b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5470d jne 0x10e54783 */
  if (!C.zf) goto L_10e54783;
  /* 10e5470f mov esi, esp */
  ESI = (ESP);
  /* 10e54711 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54713 call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e54719u);
  /* 10e54719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5471c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5471e call 0x10e553d0 */
  push32(0x10e54723u); f_10e553d0();
  /* 10e54723 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5472a je 0x10e54783 */
  if (C.zf) goto L_10e54783;
  /* 10e5472c mov esi, esp */
  ESI = (ESP);
  /* 10e5472e push 0x10e82548 */
  push32((uint32_t)(0x10e82548u));
  /* 10e54733 call dword ptr [0x10e854bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854bc))), 0x10e54739u);
  /* 10e54739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5473c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5473e call 0x10e553d0 */
  push32(0x10e54743u); f_10e553d0();
  /* 10e54743 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54745 jne 0x10e54783 */
  if (!C.zf) goto L_10e54783;
  /* 10e54747 mov esi, esp */
  ESI = (ESP);
  /* 10e54749 push 0x10e7d2a4 */
  push32((uint32_t)(0x10e7d2a4u));
  /* 10e5474e call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e54754u);
  /* 10e54754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54759 call 0x10e553d0 */
  push32(0x10e5475eu); f_10e553d0();
  /* 10e5475e mov esi, esp */
  ESI = (ESP);
  /* 10e54760 call dword ptr [0x10e854d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d8))), 0x10e54766u);
  /* 10e54766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54768 call 0x10e553d0 */
  push32(0x10e5476du); f_10e553d0();
  /* 10e5476d mov esi, esp */
  ESI = (ESP);
  /* 10e5476f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54771 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e54773 call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54779u);
  /* 10e54779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5477c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5477e call 0x10e553d0 */
  push32(0x10e54783u); f_10e553d0();
L_10e54783:;
  /* 10e54783 mov esi, esp */
  ESI = (ESP);
  /* 10e54785 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e54787 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e5478du);
  /* 10e5478d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54792 call 0x10e553d0 */
  push32(0x10e54797u); f_10e553d0();
  /* 10e54797 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5479c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5479e je 0x10e547ea */
  if (C.zf) goto L_10e547ea;
  /* 10e547a0 mov esi, esp */
  ESI = (ESP);
  /* 10e547a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e547a4 call dword ptr [0x10e854f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854f0))), 0x10e547aau);
  /* 10e547aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e547ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e547af call 0x10e553d0 */
  push32(0x10e547b4u); f_10e553d0();
  /* 10e547b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e547b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e547bb je 0x10e547ea */
  if (C.zf) goto L_10e547ea;
  /* 10e547bd mov esi, esp */
  ESI = (ESP);
  /* 10e547bf push 0x10e7d298 */
  push32((uint32_t)(0x10e7d298u));
  /* 10e547c4 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e547cau);
  /* 10e547ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e547cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e547cf call 0x10e553d0 */
  push32(0x10e547d4u); f_10e553d0();
  /* 10e547d4 mov esi, esp */
  ESI = (ESP);
  /* 10e547d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e547d8 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e547da call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e547e0u);
  /* 10e547e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e547e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e547e5 call 0x10e553d0 */
  push32(0x10e547eau); f_10e553d0();
L_10e547ea:;
  /* 10e547ea mov esi, esp */
  ESI = (ESP);
  /* 10e547ec push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e547ee call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e547f4u);
  /* 10e547f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e547f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e547f9 call 0x10e553d0 */
  push32(0x10e547feu); f_10e553d0();
  /* 10e547fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54805 je 0x10e5486c */
  if (C.zf) goto L_10e5486c;
  /* 10e54807 mov esi, esp */
  ESI = (ESP);
  /* 10e54809 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5480b call dword ptr [0x10e854f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854f0))), 0x10e54811u);
  /* 10e54811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54816 call 0x10e553d0 */
  push32(0x10e5481bu); f_10e553d0();
  /* 10e5481b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54822 je 0x10e5486c */
  if (C.zf) goto L_10e5486c;
  /* 10e54824 mov esi, esp */
  ESI = (ESP);
  /* 10e54826 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e54828 push 0x10e82520 */
  push32((uint32_t)(0x10e82520u));
  /* 10e5482d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5482f call dword ptr [0x10e8548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8548c))), 0x10e54835u);
  /* 10e54835 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54838 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5483a call 0x10e553d0 */
  push32(0x10e5483fu); f_10e553d0();
  /* 10e5483f mov esi, esp */
  ESI = (ESP);
  /* 10e54841 push 0x10e7d28c */
  push32((uint32_t)(0x10e7d28cu));
  /* 10e54846 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e5484cu);
  /* 10e5484c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5484f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54851 call 0x10e553d0 */
  push32(0x10e54856u); f_10e553d0();
  /* 10e54856 mov esi, esp */
  ESI = (ESP);
  /* 10e54858 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5485a push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e5485c call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54862u);
  /* 10e54862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54867 call 0x10e553d0 */
  push32(0x10e5486cu); f_10e553d0();
L_10e5486c:;
  /* 10e5486c mov esi, esp */
  ESI = (ESP);
  /* 10e5486e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e54870 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54876u);
  /* 10e54876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54879 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5487b call 0x10e553d0 */
  push32(0x10e54880u); f_10e553d0();
  /* 10e54880 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54887 je 0x10e5493b */
  if (C.zf) goto L_10e5493b;
  /* 10e5488d mov esi, esp */
  ESI = (ESP);
  /* 10e5488f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54891 call dword ptr [0x10e854f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854f0))), 0x10e54897u);
  /* 10e54897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5489a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5489c call 0x10e553d0 */
  push32(0x10e548a1u); f_10e553d0();
  /* 10e548a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e548a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e548a8 je 0x10e5493b */
  if (C.zf) goto L_10e5493b;
  /* 10e548ae mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 10e548b5 jmp 0x10e548c0 */
  goto L_10e548c0;
L_10e548b7:;
  /* 10e548b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e548ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e548bd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e548c0:;
  /* 10e548c0 cmp dword ptr [ebp - 0x18], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e548c4 jge 0x10e548ff */
  if ((C.sf==C.of)) goto L_10e548ff;
  /* 10e548c6 mov esi, esp */
  ESI = (ESP);
  /* 10e548c8 mov dl, byte ptr [ebp - 0x18] */
  DL = (r8((uint32_t)(EBP + -0x18)));
  /* 10e548cb push edx */
  push32((uint32_t)(EDX));
  /* 10e548cc call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e548d2u);
  /* 10e548d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e548d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e548d7 call 0x10e553d0 */
  push32(0x10e548dcu); f_10e553d0();
  /* 10e548dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e548e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e548e3 jne 0x10e548fd */
  if (!C.zf) goto L_10e548fd;
  /* 10e548e5 mov esi, esp */
  ESI = (ESP);
  /* 10e548e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e548e9 mov al, byte ptr [ebp - 0x18] */
  AL = (r8((uint32_t)(EBP + -0x18)));
  /* 10e548ec push eax */
  push32((uint32_t)(EAX));
  /* 10e548ed call dword ptr [0x10e85474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85474))), 0x10e548f3u);
  /* 10e548f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e548f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e548f8 call 0x10e553d0 */
  push32(0x10e548fdu); f_10e553d0();
L_10e548fd:;
  /* 10e548fd jmp 0x10e548b7 */
  goto L_10e548b7;
L_10e548ff:;
  /* 10e548ff mov esi, esp */
  ESI = (ESP);
  /* 10e54901 push 0x10e7d280 */
  push32((uint32_t)(0x10e7d280u));
  /* 10e54906 call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e5490cu);
  /* 10e5490c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5490f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54911 call 0x10e553d0 */
  push32(0x10e54916u); f_10e553d0();
  /* 10e54916 mov esi, esp */
  ESI = (ESP);
  /* 10e54918 call dword ptr [0x10e854d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854d8))), 0x10e5491eu);
  /* 10e5491e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54920 call 0x10e553d0 */
  push32(0x10e54925u); f_10e553d0();
  /* 10e54925 mov esi, esp */
  ESI = (ESP);
  /* 10e54927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e54929 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e5492b call dword ptr [0x10e854b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b8))), 0x10e54931u);
  /* 10e54931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e54936 call 0x10e553d0 */
  push32(0x10e5493bu); f_10e553d0();
L_10e5493b:;
  /* 10e5493b mov esi, esp */
  ESI = (ESP);
  /* 10e5493d push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e5493f call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54945u);
  /* 10e54945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5494a call 0x10e553d0 */
  push32(0x10e5494fu); f_10e553d0();
  /* 10e5494f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54956 jne 0x10e549ee */
  if (!C.zf) goto L_10e549ee;
  /* 10e5495c mov esi, esp */
  ESI = (ESP);
  /* 10e5495e push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e54960 call dword ptr [0x10e85478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85478))), 0x10e54966u);
  /* 10e54966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5496b call 0x10e553d0 */
  push32(0x10e54970u); f_10e553d0();
  /* 10e54970 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e54975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e54977 jne 0x10e549ee */
  if (!C.zf) goto L_10e549ee;
  /* 10e54979 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e54980 jmp 0x10e5498b */
  goto L_10e5498b;
L_10e54982:;
  /* 10e54982 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e54985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e54988 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_10e5498b:;
  /* 10e5498b cmp dword ptr [ebp - 0x1c], 0x1e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5498f jge 0x10e549c8 */
  if ((C.sf==C.of)) goto L_10e549c8;
  /* 10e54991 mov esi, esp */
  ESI = (ESP);
  /* 10e54993 mov dl, byte ptr [ebp - 0x1c] */
  DL = (r8((uint32_t)(EBP + -0x1c)));
  /* 10e54996 push edx */
  push32((uint32_t)(EDX));
  /* 10e54997 call dword ptr [0x10e85470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85470))), 0x10e5499du);
  /* 10e5499d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e549a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e549a2 call 0x10e553d0 */
  push32(0x10e549a7u); f_10e553d0();
  /* 10e549a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e549ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e549ae jne 0x10e549c6 */
  if (!C.zf) goto L_10e549c6;
  /* 10e549b0 mov esi, esp */
  ESI = (ESP);
  /* 10e549b2 mov al, byte ptr [ebp - 0x1c] */
  AL = (r8((uint32_t)(EBP + -0x1c)));
  /* 10e549b5 push eax */
  push32((uint32_t)(EAX));
  /* 10e549b6 call dword ptr [0x10e854f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854f4))), 0x10e549bcu);
  /* 10e549bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e549bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e549c1 call 0x10e553d0 */
  push32(0x10e549c6u); f_10e553d0();
L_10e549c6:;
  /* 10e549c6 jmp 0x10e54982 */
  goto L_10e54982;
L_10e549c8:;
  /* 10e549c8 mov esi, esp */
  ESI = (ESP);
  /* 10e549ca push 0x10e7d274 */
  push32((uint32_t)(0x10e7d274u));
  /* 10e549cf call dword ptr [0x10e854b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854b4))), 0x10e549d5u);
  /* 10e549d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e549d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e549da call 0x10e553d0 */
  push32(0x10e549dfu); f_10e553d0();
  /* 10e549df mov esi, esp */
  ESI = (ESP);
  /* 10e549e1 call dword ptr [0x10e854f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e854f8))), 0x10e549e7u);
  /* 10e549e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e549e9 call 0x10e553d0 */
  push32(0x10e549eeu); f_10e553d0();
L_10e549ee:;
  /* 10e549ee pop edi */
  EDI = (pop32());
  /* 10e549ef pop esi */
  ESI = (pop32());
  /* 10e549f0 pop ebx */
  EBX = (pop32());
  /* 10e549f1 add esp, 0x64 */
  { uint32_t _a=(ESP),_b=(0x64u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e549f4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e549f6 call 0x10e553d0 */
  push32(0x10e549fbu); f_10e553d0();
  /* 10e549fb mov esp, ebp */
  ESP = (EBP);
  /* 10e549fd pop ebp */
  EBP = (pop32());
  /* 10e549fe ret  */
  ESPCHK(0x10e527d0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10e553d0 (56 bytes, 28 insns) */
void f_10e553d0(void) {
  FTRACE(0x10e553d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e553d0 jne 0x10e553d3 */
  if (!C.zf) goto L_10e553d3;
  /* 10e553d2 ret  */
  ESPCHK(0x10e553d0u, _esp0);
  ESP += 4; return;
L_10e553d3:;
  /* 10e553d3 push ebp */
  push32((uint32_t)(EBP));
  /* 10e553d4 mov ebp, esp */
  EBP = (ESP);
  /* 10e553d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e553d9 push eax */
  push32((uint32_t)(EAX));
  /* 10e553da push edx */
  push32((uint32_t)(EDX));
  /* 10e553db push ebx */
  push32((uint32_t)(EBX));
  /* 10e553dc push esi */
  push32((uint32_t)(ESI));
  /* 10e553dd push edi */
  push32((uint32_t)(EDI));
  /* 10e553de push 0x10e7d440 */
  push32((uint32_t)(0x10e7d440u));
  /* 10e553e3 push 0x10e7d43c */
  push32((uint32_t)(0x10e7d43cu));
  /* 10e553e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10e553ea push 0x10e7d42c */
  push32((uint32_t)(0x10e7d42cu));
  /* 10e553ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10e553f1 call 0x10e557a0 */
  push32(0x10e553f6u); f_10e557a0();
  /* 10e553f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e553f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e553fc jne 0x10e553ff */
  if (!C.zf) goto L_10e553ff;
  /* 10e553fe int3  */
  x86_unimpl("int3 @ 0x10e553fe");
L_10e553ff:;
  /* 10e553ff pop edi */
  EDI = (pop32());
  /* 10e55400 pop esi */
  ESI = (pop32());
  /* 10e55401 pop ebx */
  EBX = (pop32());
  /* 10e55402 pop edx */
  EDX = (pop32());
  /* 10e55403 pop eax */
  EAX = (pop32());
  /* 10e55404 mov esp, ebp */
  ESP = (EBP);
  /* 10e55406 pop ebp */
  EBP = (pop32());
  /* 10e55407 ret  */
  ESPCHK(0x10e553d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x10e55410 (313 bytes, 78 insns) */
void f_10e55410(void) {
  FTRACE(0x10e55410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55410 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55411 mov ebp, esp */
  EBP = (ESP);
  /* 10e55413 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55417 jne 0x10e554d7 */
  if (!C.zf) goto L_10e554d7;
  /* 10e5541d call dword ptr [0x10e853c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c8))), 0x10e55423u);
  /* 10e55423 mov dword ptr [0x10e827b4], eax */
  w32((uint32_t)(0x10e827b4), (EAX));
  /* 10e55428 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5542a call 0x10e58ed0 */
  push32(0x10e5542fu); f_10e58ed0();
  /* 10e5542f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55434 jne 0x10e5543d */
  if (!C.zf) goto L_10e5543d;
  /* 10e55436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e55438 jmp 0x10e55545 */
  goto L_10e55545;
L_10e5543d:;
  /* 10e5543d mov eax, dword ptr [0x10e827b4] */
  EAX = (r32((uint32_t)(0x10e827b4)));
  /* 10e55442 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e55445 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5544a mov dword ptr [0x10e827c0], eax */
  w32((uint32_t)(0x10e827c0), (EAX));
  /* 10e5544f mov ecx, dword ptr [0x10e827b4] */
  ECX = (r32((uint32_t)(0x10e827b4)));
  /* 10e55455 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5545b mov dword ptr [0x10e827bc], ecx */
  w32((uint32_t)(0x10e827bc), (ECX));
  /* 10e55461 mov edx, dword ptr [0x10e827bc] */
  EDX = (r32((uint32_t)(0x10e827bc)));
  /* 10e55467 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e5546a add edx, dword ptr [0x10e827c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e827c0))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55470 mov dword ptr [0x10e827b8], edx */
  w32((uint32_t)(0x10e827b8), (EDX));
  /* 10e55476 mov eax, dword ptr [0x10e827b4] */
  EAX = (r32((uint32_t)(0x10e827b4)));
  /* 10e5547b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e5547e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e55483 mov dword ptr [0x10e827b4], eax */
  w32((uint32_t)(0x10e827b4), (EAX));
  /* 10e55488 call 0x10e56040 */
  push32(0x10e5548du); f_10e56040();
  /* 10e5548d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5548f jne 0x10e5549d */
  if (!C.zf) goto L_10e5549d;
  /* 10e55491 call 0x10e58f20 */
  push32(0x10e55496u); f_10e58f20();
  /* 10e55496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e55498 jmp 0x10e55545 */
  goto L_10e55545;
L_10e5549d:;
  /* 10e5549d call dword ptr [0x10e853c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c4))), 0x10e554a3u);
  /* 10e554a3 mov dword ptr [0x10e842ec], eax */
  w32((uint32_t)(0x10e842ec), (EAX));
  /* 10e554a8 call 0x10e58cb0 */
  push32(0x10e554adu); f_10e58cb0();
  /* 10e554ad mov dword ptr [0x10e8279c], eax */
  w32((uint32_t)(0x10e8279c), (EAX));
  /* 10e554b2 call 0x10e562f0 */
  push32(0x10e554b7u); f_10e562f0();
  /* 10e554b7 call 0x10e587a0 */
  push32(0x10e554bcu); f_10e587a0();
  /* 10e554bc call 0x10e58650 */
  push32(0x10e554c1u); f_10e58650();
  /* 10e554c1 call 0x10e55e40 */
  push32(0x10e554c6u); f_10e55e40();
  /* 10e554c6 mov ecx, dword ptr [0x10e82798] */
  ECX = (r32((uint32_t)(0x10e82798)));
  /* 10e554cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e554cf mov dword ptr [0x10e82798], ecx */
  w32((uint32_t)(0x10e82798), (ECX));
  /* 10e554d5 jmp 0x10e55540 */
  goto L_10e55540;
L_10e554d7:;
  /* 10e554d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e554db jne 0x10e55530 */
  if (!C.zf) goto L_10e55530;
  /* 10e554dd cmp dword ptr [0x10e82798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e554e4 jle 0x10e5552a */
  if ((C.zf||C.sf!=C.of)) goto L_10e5552a;
  /* 10e554e6 mov edx, dword ptr [0x10e82798] */
  EDX = (r32((uint32_t)(0x10e82798)));
  /* 10e554ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e554ef mov dword ptr [0x10e82798], edx */
  w32((uint32_t)(0x10e82798), (EDX));
  /* 10e554f5 cmp dword ptr [0x10e827ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e554fc jne 0x10e55503 */
  if (!C.zf) goto L_10e55503;
  /* 10e554fe call 0x10e55ec0 */
  push32(0x10e55503u); f_10e55ec0();
L_10e55503:;
  /* 10e55503 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e55505 call 0x10e57bf0 */
  push32(0x10e5550au); f_10e57bf0();
  /* 10e5550a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5550d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e55510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55512 je 0x10e55519 */
  if (C.zf) goto L_10e55519;
  /* 10e55514 call 0x10e58500 */
  push32(0x10e55519u); f_10e58500();
L_10e55519:;
  /* 10e55519 call 0x10e56620 */
  push32(0x10e5551eu); f_10e56620();
  /* 10e5551e call 0x10e560d0 */
  push32(0x10e55523u); f_10e560d0();
  /* 10e55523 call 0x10e58f20 */
  push32(0x10e55528u); f_10e58f20();
  /* 10e55528 jmp 0x10e5552e */
  goto L_10e5552e;
L_10e5552a:;
  /* 10e5552a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5552c jmp 0x10e55545 */
  goto L_10e55545;
L_10e5552e:;
  /* 10e5552e jmp 0x10e55540 */
  goto L_10e55540;
L_10e55530:;
  /* 10e55530 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55534 jne 0x10e55540 */
  if (!C.zf) goto L_10e55540;
  /* 10e55536 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55538 call 0x10e561c0 */
  push32(0x10e5553du); f_10e561c0();
  /* 10e5553d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55540:;
  /* 10e55540 mov eax, 1 */
  EAX = (0x1u);
L_10e55545:;
  /* 10e55545 pop ebp */
  EBP = (pop32());
  /* 10e55546 ret 0xc */
  ESPCHK(0x10e55410u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10e55550 (243 bytes, 86 insns) */
void f_10e55550(void) {
  FTRACE(0x10e55550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55550 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55551 mov ebp, esp */
  EBP = (ESP);
  /* 10e55553 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55554 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e5555b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5555f jne 0x10e55571 */
  if (!C.zf) goto L_10e55571;
  /* 10e55561 cmp dword ptr [0x10e82798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55568 jne 0x10e55571 */
  if (!C.zf) goto L_10e55571;
  /* 10e5556a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5556c jmp 0x10e5563d */
  goto L_10e5563d;
L_10e55571:;
  /* 10e55571 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55575 je 0x10e5557d */
  if (C.zf) goto L_10e5557d;
  /* 10e55577 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5557b jne 0x10e555bf */
  if (!C.zf) goto L_10e555bf;
L_10e5557d:;
  /* 10e5557d cmp dword ptr [0x10e842fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55584 je 0x10e5559b */
  if (C.zf) goto L_10e5559b;
  /* 10e55586 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e55589 push eax */
  push32((uint32_t)(EAX));
  /* 10e5558a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5558d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5558e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55591 push edx */
  push32((uint32_t)(EDX));
  /* 10e55592 call dword ptr [0x10e842fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e842fc))), 0x10e55598u);
  /* 10e55598 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5559b:;
  /* 10e5559b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5559f je 0x10e555b5 */
  if (C.zf) goto L_10e555b5;
  /* 10e555a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e555a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e555a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e555a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e555a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e555ac push edx */
  push32((uint32_t)(EDX));
  /* 10e555ad call 0x10e55410 */
  push32(0x10e555b2u); f_10e55410();
  /* 10e555b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e555b5:;
  /* 10e555b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e555b9 jne 0x10e555bf */
  if (!C.zf) goto L_10e555bf;
  /* 10e555bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e555bd jmp 0x10e5563d */
  goto L_10e5563d;
L_10e555bf:;
  /* 10e555bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e555c2 push eax */
  push32((uint32_t)(EAX));
  /* 10e555c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e555c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e555c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e555ca push edx */
  push32((uint32_t)(EDX));
  /* 10e555cb call 0x10e5101e */
  push32(0x10e555d0u); f_10e5101e();
  /* 10e555d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e555d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e555d7 jne 0x10e555ee */
  if (!C.zf) goto L_10e555ee;
  /* 10e555d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e555dd jne 0x10e555ee */
  if (!C.zf) goto L_10e555ee;
  /* 10e555df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e555e2 push eax */
  push32((uint32_t)(EAX));
  /* 10e555e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e555e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e555e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e555e9 call 0x10e55410 */
  push32(0x10e555eeu); f_10e55410();
L_10e555ee:;
  /* 10e555ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e555f2 je 0x10e555fa */
  if (C.zf) goto L_10e555fa;
  /* 10e555f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e555f8 jne 0x10e5563a */
  if (!C.zf) goto L_10e5563a;
L_10e555fa:;
  /* 10e555fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e555fd push edx */
  push32((uint32_t)(EDX));
  /* 10e555fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e55601 push eax */
  push32((uint32_t)(EAX));
  /* 10e55602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55605 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55606 call 0x10e55410 */
  push32(0x10e5560bu); f_10e55410();
  /* 10e5560b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5560d jne 0x10e55616 */
  if (!C.zf) goto L_10e55616;
  /* 10e5560f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e55616:;
  /* 10e55616 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5561a je 0x10e5563a */
  if (C.zf) goto L_10e5563a;
  /* 10e5561c cmp dword ptr [0x10e842fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55623 je 0x10e5563a */
  if (C.zf) goto L_10e5563a;
  /* 10e55625 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e55628 push edx */
  push32((uint32_t)(EDX));
  /* 10e55629 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5562c push eax */
  push32((uint32_t)(EAX));
  /* 10e5562d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55630 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55631 call dword ptr [0x10e842fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e842fc))), 0x10e55637u);
  /* 10e55637 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5563a:;
  /* 10e5563a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5563d:;
  /* 10e5563d mov esp, ebp */
  ESP = (EBP);
  /* 10e5563f pop ebp */
  EBP = (pop32());
  /* 10e55640 ret 0xc */
  ESPCHK(0x10e55550u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10e55650 (58 bytes, 18 insns) */
void f_10e55650(void) {
  FTRACE(0x10e55650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55650 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55651 mov ebp, esp */
  EBP = (ESP);
  /* 10e55653 cmp dword ptr [0x10e827a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5565a je 0x10e5566e */
  if (C.zf) goto L_10e5566e;
  /* 10e5565c cmp dword ptr [0x10e827a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55663 jne 0x10e55673 */
  if (!C.zf) goto L_10e55673;
  /* 10e55665 cmp dword ptr [0x10e827a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5566c jne 0x10e55673 */
  if (!C.zf) goto L_10e55673;
L_10e5566e:;
  /* 10e5566e call 0x10e58fc0 */
  push32(0x10e55673u); f_10e58fc0();
L_10e55673:;
  /* 10e55673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55676 push eax */
  push32((uint32_t)(EAX));
  /* 10e55677 call 0x10e59010 */
  push32(0x10e5567cu); f_10e59010();
  /* 10e5567c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5567f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e55684 call dword ptr [0x10e80a34] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e80a34))), 0x10e5568au);
  /* 10e5568a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5568d pop ebp */
  EBP = (pop32());
  /* 10e5568e ret  */
  ESPCHK(0x10e55650u, _esp0);
  ESP += 4; return;
}

/* FUN_10005690 @ 0x10e55690 (11 bytes, 5 insns) */
void f_10e55690(void) {
  FTRACE(0x10e55690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55690 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55691 mov ebp, esp */
  EBP = (ESP);
  /* 10e55693 call dword ptr [0x10e853cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853cc))), 0x10e55699u);
  /* 10e55699 pop ebp */
  EBP = (pop32());
  /* 10e5569a ret  */
  ESPCHK(0x10e55690u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x10e556a0 (87 bytes, 30 insns) */
void f_10e556a0(void) {
  FTRACE(0x10e556a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e556a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e556a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e556a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e556a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e556a8 jl 0x10e556b0 */
  if ((C.sf!=C.of)) goto L_10e556b0;
  /* 10e556aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e556ae jl 0x10e556b5 */
  if ((C.sf!=C.of)) goto L_10e556b5;
L_10e556b0:;
  /* 10e556b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e556b3 jmp 0x10e556f3 */
  goto L_10e556f3;
L_10e556b5:;
  /* 10e556b5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e556b9 jne 0x10e556c7 */
  if (!C.zf) goto L_10e556c7;
  /* 10e556bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e556be mov eax, dword ptr [eax*4 + 0x10e80a3c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e80a3c)));
  /* 10e556c5 jmp 0x10e556f3 */
  goto L_10e556f3;
L_10e556c7:;
  /* 10e556c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e556ca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e556cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e556cf je 0x10e556d6 */
  if (C.zf) goto L_10e556d6;
  /* 10e556d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e556d4 jmp 0x10e556f3 */
  goto L_10e556f3;
L_10e556d6:;
  /* 10e556d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e556d9 mov eax, dword ptr [edx*4 + 0x10e80a3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e80a3c)));
  /* 10e556e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e556e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e556e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e556e9 mov dword ptr [ecx*4 + 0x10e80a3c], edx */
  w32((uint32_t)(ECX*4 + 0x10e80a3c), (EDX));
  /* 10e556f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e556f3:;
  /* 10e556f3 mov esp, ebp */
  ESP = (EBP);
  /* 10e556f5 pop ebp */
  EBP = (pop32());
  /* 10e556f6 ret  */
  ESPCHK(0x10e556a0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10e55700 (126 bytes, 38 insns) */
void f_10e55700(void) {
  FTRACE(0x10e55700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55700 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55701 mov ebp, esp */
  EBP = (ESP);
  /* 10e55703 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55704 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55708 jl 0x10e55710 */
  if ((C.sf!=C.of)) goto L_10e55710;
  /* 10e5570a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5570e jl 0x10e55717 */
  if ((C.sf!=C.of)) goto L_10e55717;
L_10e55710:;
  /* 10e55710 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10e55715 jmp 0x10e5577a */
  goto L_10e5577a;
L_10e55717:;
  /* 10e55717 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5571b jne 0x10e55729 */
  if (!C.zf) goto L_10e55729;
  /* 10e5571d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55720 mov eax, dword ptr [eax*4 + 0x10e80a48] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e80a48)));
  /* 10e55727 jmp 0x10e5577a */
  goto L_10e5577a;
L_10e55729:;
  /* 10e55729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5572c mov edx, dword ptr [ecx*4 + 0x10e80a48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a48)));
  /* 10e55733 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e55736 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5573a jne 0x10e55750 */
  if (!C.zf) goto L_10e55750;
  /* 10e5573c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e5573e call dword ptr [0x10e853d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d0))), 0x10e55744u);
  /* 10e55744 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55747 mov dword ptr [ecx*4 + 0x10e80a48], eax */
  w32((uint32_t)(ECX*4 + 0x10e80a48), (EAX));
  /* 10e5574e jmp 0x10e55777 */
  goto L_10e55777;
L_10e55750:;
  /* 10e55750 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55754 jne 0x10e5576a */
  if (!C.zf) goto L_10e5576a;
  /* 10e55756 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e55758 call dword ptr [0x10e853d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d0))), 0x10e5575eu);
  /* 10e5575e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55761 mov dword ptr [edx*4 + 0x10e80a48], eax */
  w32((uint32_t)(EDX*4 + 0x10e80a48), (EAX));
  /* 10e55768 jmp 0x10e55777 */
  goto L_10e55777;
L_10e5576a:;
  /* 10e5576a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5576d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e55770 mov dword ptr [eax*4 + 0x10e80a48], ecx */
  w32((uint32_t)(EAX*4 + 0x10e80a48), (ECX));
L_10e55777:;
  /* 10e55777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5577a:;
  /* 10e5577a mov esp, ebp */
  ESP = (EBP);
  /* 10e5577c pop ebp */
  EBP = (pop32());
  /* 10e5577d ret  */
  ESPCHK(0x10e55700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x10e55780 (28 bytes, 11 insns) */
void f_10e55780(void) {
  FTRACE(0x10e55780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55780 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55781 mov ebp, esp */
  EBP = (ESP);
  /* 10e55783 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55784 mov eax, dword ptr [0x10e842e0] */
  EAX = (r32((uint32_t)(0x10e842e0)));
  /* 10e55789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5578c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5578f mov dword ptr [0x10e842e0], ecx */
  w32((uint32_t)(0x10e842e0), (ECX));
  /* 10e55795 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55798 mov esp, ebp */
  ESP = (EBP);
  /* 10e5579a pop ebp */
  EBP = (pop32());
  /* 10e5579b ret  */
  ESPCHK(0x10e55780u, _esp0);
  ESP += 4; return;
}

/* FUN_100057a0 @ 0x10e557a0 (912 bytes, 248 insns) */
void f_10e557a0(void) {
  FTRACE(0x10e557a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e557a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e557a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e557a3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10e557a8 call 0x10e59880 */
  push32(0x10e557adu); f_10e59880();
  /* 10e557ad push edi */
  push32((uint32_t)(EDI));
  /* 10e557ae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10e557b5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e557ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e557bc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10e557c2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e557c4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e557c6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e557c7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10e557ce mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e557d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e557d5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10e557db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e557dd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e557df stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e557e0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10e557e7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e557ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e557ee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10e557f4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e557f6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e557f8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e557f9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10e557fc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10e55802 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55806 jl 0x10e5580e */
  if ((C.sf!=C.of)) goto L_10e5580e;
  /* 10e55808 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5580c jl 0x10e55816 */
  if ((C.sf!=C.of)) goto L_10e55816;
L_10e5580e:;
  /* 10e5580e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e55811 jmp 0x10e55b2b */
  goto L_10e55b2b;
L_10e55816:;
  /* 10e55816 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5581a jne 0x10e558c0 */
  if (!C.zf) goto L_10e558c0;
  /* 10e55820 push 0x10e80a38 */
  push32((uint32_t)(0x10e80a38u));
  /* 10e55825 call dword ptr [0x10e852ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852ec))), 0x10e5582bu);
  /* 10e5582b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5582d jle 0x10e558c0 */
  if ((C.zf||C.sf!=C.of)) goto L_10e558c0;
  /* 10e55833 cmp dword ptr [0x10e827ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5583a jne 0x10e5587e */
  if (!C.zf) goto L_10e5587e;
  /* 10e5583c push 0x10e7d5e8 */
  push32((uint32_t)(0x10e7d5e8u));
  /* 10e55841 call dword ptr [0x10e852f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852f0))), 0x10e55847u);
  /* 10e55847 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10e5584d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55854 je 0x10e55876 */
  if (C.zf) goto L_10e55876;
  /* 10e55856 push 0x10e7d5dc */
  push32((uint32_t)(0x10e7d5dcu));
  /* 10e5585b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10e55861 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55862 call dword ptr [0x10e853e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e0))), 0x10e55868u);
  /* 10e55868 mov dword ptr [0x10e827ac], eax */
  w32((uint32_t)(0x10e827ac), (EAX));
  /* 10e5586d cmp dword ptr [0x10e827ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55874 jne 0x10e5587e */
  if (!C.zf) goto L_10e5587e;
L_10e55876:;
  /* 10e55876 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e55879 jmp 0x10e55b2b */
  goto L_10e55b2b;
L_10e5587e:;
  /* 10e5587e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e55881 push edx */
  push32((uint32_t)(EDX));
  /* 10e55882 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e55885 push eax */
  push32((uint32_t)(EAX));
  /* 10e55886 push 0x10e7d5a8 */
  push32((uint32_t)(0x10e7d5a8u));
  /* 10e5588b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10e55891 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55892 call dword ptr [0x10e827ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e827ac))), 0x10e55898u);
  /* 10e55898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5589b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e558a1 push edx */
  push32((uint32_t)(EDX));
  /* 10e558a2 call dword ptr [0x10e853dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853dc))), 0x10e558a8u);
  /* 10e558a8 push 0x10e80a38 */
  push32((uint32_t)(0x10e80a38u));
  /* 10e558ad call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e558b3u);
  /* 10e558b3 call 0x10e55690 */
  push32(0x10e558b8u); f_10e55690();
  /* 10e558b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e558bb jmp 0x10e55b2b */
  goto L_10e55b2b;
L_10e558c0:;
  /* 10e558c0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e558c4 je 0x10e558fd */
  if (C.zf) goto L_10e558fd;
  /* 10e558c6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10e558cc push eax */
  push32((uint32_t)(EAX));
  /* 10e558cd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e558d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e558d1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10e558d6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10e558dc push edx */
  push32((uint32_t)(EDX));
  /* 10e558dd call 0x10e59780 */
  push32(0x10e558e2u); f_10e59780();
  /* 10e558e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e558e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e558e7 jge 0x10e558fd */
  if ((C.sf==C.of)) goto L_10e558fd;
  /* 10e558e9 push 0x10e7d57c */
  push32((uint32_t)(0x10e7d57cu));
  /* 10e558ee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10e558f4 push eax */
  push32((uint32_t)(EAX));
  /* 10e558f5 call 0x10e59690 */
  push32(0x10e558fau); f_10e59690();
  /* 10e558fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e558fd:;
  /* 10e558fd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55901 jne 0x10e55935 */
  if (!C.zf) goto L_10e55935;
  /* 10e55903 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55907 je 0x10e55915 */
  if (C.zf) goto L_10e55915;
  /* 10e55909 mov dword ptr [ebp - 0x3028], 0x10e7d568 */
  w32((uint32_t)(EBP + -0x3028), (0x10e7d568u));
  /* 10e55913 jmp 0x10e5591f */
  goto L_10e5591f;
L_10e55915:;
  /* 10e55915 mov dword ptr [ebp - 0x3028], 0x10e7d554 */
  w32((uint32_t)(EBP + -0x3028), (0x10e7d554u));
L_10e5591f:;
  /* 10e5591f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10e55925 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55926 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e5592c push edx */
  push32((uint32_t)(EDX));
  /* 10e5592d call 0x10e59690 */
  push32(0x10e55932u); f_10e59690();
  /* 10e55932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55935:;
  /* 10e55935 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10e5593b push eax */
  push32((uint32_t)(EAX));
  /* 10e5593c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10e55942 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55943 call 0x10e596a0 */
  push32(0x10e55948u); f_10e596a0();
  /* 10e55948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5594b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5594f jne 0x10e5598a */
  if (!C.zf) goto L_10e5598a;
  /* 10e55951 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55954 mov eax, dword ptr [edx*4 + 0x10e80a3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e80a3c)));
  /* 10e5595b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5595e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55960 je 0x10e55976 */
  if (C.zf) goto L_10e55976;
  /* 10e55962 push 0x10e7d550 */
  push32((uint32_t)(0x10e7d550u));
  /* 10e55967 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10e5596d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5596e call 0x10e596a0 */
  push32(0x10e55973u); f_10e596a0();
  /* 10e55973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55976:;
  /* 10e55976 push 0x10e7d54c */
  push32((uint32_t)(0x10e7d54cu));
  /* 10e5597b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e55981 push edx */
  push32((uint32_t)(EDX));
  /* 10e55982 call 0x10e596a0 */
  push32(0x10e55987u); f_10e596a0();
  /* 10e55987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5598a:;
  /* 10e5598a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5598e je 0x10e559d2 */
  if (C.zf) goto L_10e559d2;
  /* 10e55990 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10e55996 push eax */
  push32((uint32_t)(EAX));
  /* 10e55997 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5599a push ecx */
  push32((uint32_t)(ECX));
  /* 10e5599b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5599e push edx */
  push32((uint32_t)(EDX));
  /* 10e5599f push 0x10e7d540 */
  push32((uint32_t)(0x10e7d540u));
  /* 10e559a4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e559a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e559af push eax */
  push32((uint32_t)(EAX));
  /* 10e559b0 call 0x10e59590 */
  push32(0x10e559b5u); f_10e59590();
  /* 10e559b5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e559b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e559ba jge 0x10e559d0 */
  if ((C.sf==C.of)) goto L_10e559d0;
  /* 10e559bc push 0x10e7d57c */
  push32((uint32_t)(0x10e7d57cu));
  /* 10e559c1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10e559c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e559c8 call 0x10e59690 */
  push32(0x10e559cdu); f_10e59690();
  /* 10e559cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e559d0:;
  /* 10e559d0 jmp 0x10e559e8 */
  goto L_10e559e8;
L_10e559d2:;
  /* 10e559d2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e559d8 push edx */
  push32((uint32_t)(EDX));
  /* 10e559d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e559df push eax */
  push32((uint32_t)(EAX));
  /* 10e559e0 call 0x10e59690 */
  push32(0x10e559e5u); f_10e59690();
  /* 10e559e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e559e8:;
  /* 10e559e8 cmp dword ptr [0x10e842e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e559ef je 0x10e55a2c */
  if (C.zf) goto L_10e55a2c;
  /* 10e559f1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10e559f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e559f8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e559fe push edx */
  push32((uint32_t)(EDX));
  /* 10e559ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55a02 push eax */
  push32((uint32_t)(EAX));
  /* 10e55a03 call dword ptr [0x10e842e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e842e0))), 0x10e55a09u);
  /* 10e55a09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55a0e je 0x10e55a2c */
  if (C.zf) goto L_10e55a2c;
  /* 10e55a10 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55a14 jne 0x10e55a21 */
  if (!C.zf) goto L_10e55a21;
  /* 10e55a16 push 0x10e80a38 */
  push32((uint32_t)(0x10e80a38u));
  /* 10e55a1b call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e55a21u);
L_10e55a21:;
  /* 10e55a21 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10e55a27 jmp 0x10e55b2b */
  goto L_10e55b2b;
L_10e55a2c:;
  /* 10e55a2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55a2f mov edx, dword ptr [ecx*4 + 0x10e80a3c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a3c)));
  /* 10e55a36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e55a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e55a3b je 0x10e55a7b */
  if (C.zf) goto L_10e55a7b;
  /* 10e55a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55a40 cmp dword ptr [eax*4 + 0x10e80a48], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10e80a48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55a48 je 0x10e55a7b */
  if (C.zf) goto L_10e55a7b;
  /* 10e55a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55a4c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10e55a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55a53 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e55a59 push edx */
  push32((uint32_t)(EDX));
  /* 10e55a5a call 0x10e59510 */
  push32(0x10e55a5fu); f_10e59510();
  /* 10e55a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55a62 push eax */
  push32((uint32_t)(EAX));
  /* 10e55a63 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e55a69 push eax */
  push32((uint32_t)(EAX));
  /* 10e55a6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55a6d mov edx, dword ptr [ecx*4 + 0x10e80a48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a48)));
  /* 10e55a74 push edx */
  push32((uint32_t)(EDX));
  /* 10e55a75 call dword ptr [0x10e853d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d4))), 0x10e55a7bu);
L_10e55a7b:;
  /* 10e55a7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55a7e mov ecx, dword ptr [eax*4 + 0x10e80a3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e80a3c)));
  /* 10e55a85 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e55a88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e55a8a je 0x10e55a99 */
  if (C.zf) goto L_10e55a99;
  /* 10e55a8c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e55a92 push edx */
  push32((uint32_t)(EDX));
  /* 10e55a93 call dword ptr [0x10e853dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853dc))), 0x10e55a99u);
L_10e55a99:;
  /* 10e55a99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55a9c mov ecx, dword ptr [eax*4 + 0x10e80a3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e80a3c)));
  /* 10e55aa3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e55aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e55aa8 je 0x10e55b18 */
  if (C.zf) goto L_10e55b18;
  /* 10e55aaa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55aae je 0x10e55acd */
  if (C.zf) goto L_10e55acd;
  /* 10e55ab0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e55ab2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10e55ab8 push edx */
  push32((uint32_t)(EDX));
  /* 10e55ab9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e55abc push eax */
  push32((uint32_t)(EAX));
  /* 10e55abd call 0x10e59220 */
  push32(0x10e55ac2u); f_10e59220();
  /* 10e55ac2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55ac5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10e55acb jmp 0x10e55ad7 */
  goto L_10e55ad7;
L_10e55acd:;
  /* 10e55acd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10e55ad7:;
  /* 10e55ad7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10e55add push ecx */
  push32((uint32_t)(ECX));
  /* 10e55ade mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e55ae1 push edx */
  push32((uint32_t)(EDX));
  /* 10e55ae2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10e55ae8 push eax */
  push32((uint32_t)(EAX));
  /* 10e55ae9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e55aec push ecx */
  push32((uint32_t)(ECX));
  /* 10e55aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55af0 push edx */
  push32((uint32_t)(EDX));
  /* 10e55af1 call 0x10e55b30 */
  push32(0x10e55af6u); f_10e55b30();
  /* 10e55af6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55af9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10e55aff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55b03 jne 0x10e55b10 */
  if (!C.zf) goto L_10e55b10;
  /* 10e55b05 push 0x10e80a38 */
  push32((uint32_t)(0x10e80a38u));
  /* 10e55b0a call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e55b10u);
L_10e55b10:;
  /* 10e55b10 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10e55b16 jmp 0x10e55b2b */
  goto L_10e55b2b;
L_10e55b18:;
  /* 10e55b18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55b1c jne 0x10e55b29 */
  if (!C.zf) goto L_10e55b29;
  /* 10e55b1e push 0x10e80a38 */
  push32((uint32_t)(0x10e80a38u));
  /* 10e55b23 call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e55b29u);
L_10e55b29:;
  /* 10e55b29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e55b2b:;
  /* 10e55b2b pop edi */
  EDI = (pop32());
  /* 10e55b2c mov esp, ebp */
  ESP = (EBP);
  /* 10e55b2e pop ebp */
  EBP = (pop32());
  /* 10e55b2f ret  */
  ESPCHK(0x10e557a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b30 @ 0x10e55b30 (780 bytes, 197 insns) */
void f_10e55b30(void) {
  FTRACE(0x10e55b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55b31 mov ebp, esp */
  EBP = (ESP);
  /* 10e55b33 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10e55b38 call 0x10e59880 */
  push32(0x10e55b3du); f_10e59880();
L_10e55b3d:;
  /* 10e55b3d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55b41 jne 0x10e55b68 */
  if (!C.zf) goto L_10e55b68;
  /* 10e55b43 push 0x10e7d738 */
  push32((uint32_t)(0x10e7d738u));
  /* 10e55b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55b4a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10e55b4f push 0x10e7d72c */
  push32((uint32_t)(0x10e7d72cu));
  /* 10e55b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e55b56 call 0x10e557a0 */
  push32(0x10e55b5bu); f_10e557a0();
  /* 10e55b5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55b61 jne 0x10e55b68 */
  if (!C.zf) goto L_10e55b68;
  /* 10e55b63 call 0x10e55690 */
  push32(0x10e55b68u); f_10e55690();
L_10e55b68:;
  /* 10e55b68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e55b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55b6c jne 0x10e55b3d */
  if (!C.zf) goto L_10e55b3d;
  /* 10e55b6e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e55b73 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10e55b79 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55b7c call dword ptr [0x10e853ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ec))), 0x10e55b82u);
  /* 10e55b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55b84 jne 0x10e55b9a */
  if (!C.zf) goto L_10e55b9a;
  /* 10e55b86 push 0x10e7d714 */
  push32((uint32_t)(0x10e7d714u));
  /* 10e55b8b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10e55b91 push edx */
  push32((uint32_t)(EDX));
  /* 10e55b92 call 0x10e59690 */
  push32(0x10e55b97u); f_10e59690();
  /* 10e55b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55b9a:;
  /* 10e55b9a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10e55ba0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e55ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55ba7 call 0x10e59510 */
  push32(0x10e55bacu); f_10e59510();
  /* 10e55bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55baf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55bb2 jbe 0x10e55bdd */
  if ((C.cf||C.zf)) goto L_10e55bdd;
  /* 10e55bb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55bb7 push edx */
  push32((uint32_t)(EDX));
  /* 10e55bb8 call 0x10e59510 */
  push32(0x10e55bbdu); f_10e59510();
  /* 10e55bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55bc3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10e55bc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e55bca push 3 */
  push32((uint32_t)(0x3u));
  /* 10e55bcc push 0x10e7d710 */
  push32((uint32_t)(0x10e7d710u));
  /* 10e55bd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55bd4 push eax */
  push32((uint32_t)(EAX));
  /* 10e55bd5 call 0x10e59f00 */
  push32(0x10e55bdau); f_10e59f00();
  /* 10e55bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55bdd:;
  /* 10e55bdd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e55be0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10e55be6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55bed je 0x10e55c38 */
  if (C.zf) goto L_10e55c38;
  /* 10e55bef mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e55bf5 push edx */
  push32((uint32_t)(EDX));
  /* 10e55bf6 call 0x10e59510 */
  push32(0x10e55bfbu); f_10e59510();
  /* 10e55bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55bfe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55c01 jbe 0x10e55c38 */
  if ((C.cf||C.zf)) goto L_10e55c38;
  /* 10e55c03 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e55c09 push eax */
  push32((uint32_t)(EAX));
  /* 10e55c0a call 0x10e59510 */
  push32(0x10e55c0fu); f_10e59510();
  /* 10e55c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55c12 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e55c18 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10e55c1c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10e55c22 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e55c24 push 0x10e7d710 */
  push32((uint32_t)(0x10e7d710u));
  /* 10e55c29 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e55c2f push eax */
  push32((uint32_t)(EAX));
  /* 10e55c30 call 0x10e59f00 */
  push32(0x10e55c35u); f_10e59f00();
  /* 10e55c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55c38:;
  /* 10e55c38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55c3c jne 0x10e55c4a */
  if (!C.zf) goto L_10e55c4a;
  /* 10e55c3e mov dword ptr [ebp - 0x1114], 0x10e7d69c */
  w32((uint32_t)(EBP + -0x1114), (0x10e7d69cu));
  /* 10e55c48 jmp 0x10e55c54 */
  goto L_10e55c54;
L_10e55c4a:;
  /* 10e55c4a mov dword ptr [ebp - 0x1114], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1114), (0x10e7d43cu));
L_10e55c54:;
  /* 10e55c54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e55c57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e55c5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e55c5c je 0x10e55c69 */
  if (C.zf) goto L_10e55c69;
  /* 10e55c5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e55c61 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10e55c67 jmp 0x10e55c73 */
  goto L_10e55c73;
L_10e55c69:;
  /* 10e55c69 mov dword ptr [ebp - 0x1118], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1118), (0x10e7d43cu));
L_10e55c73:;
  /* 10e55c73 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e55c76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e55c79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e55c7b je 0x10e55c8f */
  if (C.zf) goto L_10e55c8f;
  /* 10e55c7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55c81 jne 0x10e55c8f */
  if (!C.zf) goto L_10e55c8f;
  /* 10e55c83 mov dword ptr [ebp - 0x111c], 0x10e7d68c */
  w32((uint32_t)(EBP + -0x111c), (0x10e7d68cu));
  /* 10e55c8d jmp 0x10e55c99 */
  goto L_10e55c99;
L_10e55c8f:;
  /* 10e55c8f mov dword ptr [ebp - 0x111c], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x111c), (0x10e7d43cu));
L_10e55c99:;
  /* 10e55c99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e55c9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e55c9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e55ca1 je 0x10e55caf */
  if (C.zf) goto L_10e55caf;
  /* 10e55ca3 mov dword ptr [ebp - 0x1120], 0x10e7d688 */
  w32((uint32_t)(EBP + -0x1120), (0x10e7d688u));
  /* 10e55cad jmp 0x10e55cb9 */
  goto L_10e55cb9;
L_10e55caf:;
  /* 10e55caf mov dword ptr [ebp - 0x1120], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1120), (0x10e7d43cu));
L_10e55cb9:;
  /* 10e55cb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55cbd je 0x10e55cca */
  if (C.zf) goto L_10e55cca;
  /* 10e55cbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e55cc2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10e55cc8 jmp 0x10e55cd4 */
  goto L_10e55cd4;
L_10e55cca:;
  /* 10e55cca mov dword ptr [ebp - 0x1124], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1124), (0x10e7d43cu));
L_10e55cd4:;
  /* 10e55cd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55cd8 je 0x10e55ce6 */
  if (C.zf) goto L_10e55ce6;
  /* 10e55cda mov dword ptr [ebp - 0x1128], 0x10e7d680 */
  w32((uint32_t)(EBP + -0x1128), (0x10e7d680u));
  /* 10e55ce4 jmp 0x10e55cf0 */
  goto L_10e55cf0;
L_10e55ce6:;
  /* 10e55ce6 mov dword ptr [ebp - 0x1128], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1128), (0x10e7d43cu));
L_10e55cf0:;
  /* 10e55cf0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55cf4 je 0x10e55d01 */
  if (C.zf) goto L_10e55d01;
  /* 10e55cf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e55cf9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10e55cff jmp 0x10e55d0b */
  goto L_10e55d0b;
L_10e55d01:;
  /* 10e55d01 mov dword ptr [ebp - 0x112c], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x112c), (0x10e7d43cu));
L_10e55d0b:;
  /* 10e55d0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55d0f je 0x10e55d1d */
  if (C.zf) goto L_10e55d1d;
  /* 10e55d11 mov dword ptr [ebp - 0x1130], 0x10e7d678 */
  w32((uint32_t)(EBP + -0x1130), (0x10e7d678u));
  /* 10e55d1b jmp 0x10e55d27 */
  goto L_10e55d27;
L_10e55d1d:;
  /* 10e55d1d mov dword ptr [ebp - 0x1130], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1130), (0x10e7d43cu));
L_10e55d27:;
  /* 10e55d27 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55d2e je 0x10e55d3e */
  if (C.zf) goto L_10e55d3e;
  /* 10e55d30 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e55d36 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10e55d3c jmp 0x10e55d48 */
  goto L_10e55d48;
L_10e55d3e:;
  /* 10e55d3e mov dword ptr [ebp - 0x1134], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1134), (0x10e7d43cu));
L_10e55d48:;
  /* 10e55d48 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55d4f je 0x10e55d5d */
  if (C.zf) goto L_10e55d5d;
  /* 10e55d51 mov dword ptr [ebp - 0x1138], 0x10e7d66c */
  w32((uint32_t)(EBP + -0x1138), (0x10e7d66cu));
  /* 10e55d5b jmp 0x10e55d67 */
  goto L_10e55d67;
L_10e55d5d:;
  /* 10e55d5d mov dword ptr [ebp - 0x1138], 0x10e7d43c */
  w32((uint32_t)(EBP + -0x1138), (0x10e7d43cu));
L_10e55d67:;
  /* 10e55d67 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10e55d6d push edx */
  push32((uint32_t)(EDX));
  /* 10e55d6e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10e55d74 push eax */
  push32((uint32_t)(EAX));
  /* 10e55d75 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10e55d7b push ecx */
  push32((uint32_t)(ECX));
  /* 10e55d7c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10e55d82 push edx */
  push32((uint32_t)(EDX));
  /* 10e55d83 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10e55d89 push eax */
  push32((uint32_t)(EAX));
  /* 10e55d8a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10e55d90 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55d91 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10e55d97 push edx */
  push32((uint32_t)(EDX));
  /* 10e55d98 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10e55d9e push eax */
  push32((uint32_t)(EAX));
  /* 10e55d9f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10e55da5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55da6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10e55dac push edx */
  push32((uint32_t)(EDX));
  /* 10e55dad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55db0 push eax */
  push32((uint32_t)(EAX));
  /* 10e55db1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55db4 mov edx, dword ptr [ecx*4 + 0x10e80a54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a54)));
  /* 10e55dbb push edx */
  push32((uint32_t)(EDX));
  /* 10e55dbc push 0x10e7d618 */
  push32((uint32_t)(0x10e7d618u));
  /* 10e55dc1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e55dc6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10e55dcc push eax */
  push32((uint32_t)(EAX));
  /* 10e55dcd call 0x10e59590 */
  push32(0x10e55dd2u); f_10e59590();
  /* 10e55dd2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55dd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55dd7 jge 0x10e55ded */
  if ((C.sf==C.of)) goto L_10e55ded;
  /* 10e55dd9 push 0x10e7d57c */
  push32((uint32_t)(0x10e7d57cu));
  /* 10e55dde lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10e55de4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55de5 call 0x10e59690 */
  push32(0x10e55deau); f_10e59690();
  /* 10e55dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55ded:;
  /* 10e55ded push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10e55df2 push 0x10e7d5f4 */
  push32((uint32_t)(0x10e7d5f4u));
  /* 10e55df7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10e55dfd push edx */
  push32((uint32_t)(EDX));
  /* 10e55dfe call 0x10e59e40 */
  push32(0x10e55e03u); f_10e59e40();
  /* 10e55e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55e06 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10e55e0c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55e13 jne 0x10e55e26 */
  if (!C.zf) goto L_10e55e26;
  /* 10e55e15 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e55e17 call 0x10e59b80 */
  push32(0x10e55e1cu); f_10e59b80();
  /* 10e55e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55e1f push 3 */
  push32((uint32_t)(0x3u));
  /* 10e55e21 call 0x10e55ea0 */
  push32(0x10e55e26u); f_10e55ea0();
L_10e55e26:;
  /* 10e55e26 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55e2d jne 0x10e55e36 */
  if (!C.zf) goto L_10e55e36;
  /* 10e55e2f mov eax, 1 */
  EAX = (0x1u);
  /* 10e55e34 jmp 0x10e55e38 */
  goto L_10e55e38;
L_10e55e36:;
  /* 10e55e36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e55e38:;
  /* 10e55e38 mov esp, ebp */
  ESP = (EBP);
  /* 10e55e3a pop ebp */
  EBP = (pop32());
  /* 10e55e3b ret  */
  ESPCHK(0x10e55b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e40 @ 0x10e55e40 (56 bytes, 15 insns) */
void f_10e55e40(void) {
  FTRACE(0x10e55e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55e41 mov ebp, esp */
  EBP = (ESP);
  /* 10e55e43 cmp dword ptr [0x10e842dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55e4a je 0x10e55e52 */
  if (C.zf) goto L_10e55e52;
  /* 10e55e4c call dword ptr [0x10e842dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e842dc))), 0x10e55e52u);
L_10e55e52:;
  /* 10e55e52 push 0x10e80418 */
  push32((uint32_t)(0x10e80418u));
  /* 10e55e57 push 0x10e80208 */
  push32((uint32_t)(0x10e80208u));
  /* 10e55e5c call 0x10e56010 */
  push32(0x10e55e61u); f_10e56010();
  /* 10e55e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55e64 push 0x10e80104 */
  push32((uint32_t)(0x10e80104u));
  /* 10e55e69 push 0x10e80000 */
  push32((uint32_t)(0x10e80000u));
  /* 10e55e6e call 0x10e56010 */
  push32(0x10e55e73u); f_10e56010();
  /* 10e55e73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55e76 pop ebp */
  EBP = (pop32());
  /* 10e55e77 ret  */
  ESPCHK(0x10e55e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e80 @ 0x10e55e80 (21 bytes, 10 insns) */
void f_10e55e80(void) {
  FTRACE(0x10e55e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55e81 mov ebp, esp */
  EBP = (ESP);
  /* 10e55e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55e87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55e8a push eax */
  push32((uint32_t)(EAX));
  /* 10e55e8b call 0x10e55f00 */
  push32(0x10e55e90u); f_10e55f00();
  /* 10e55e90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55e93 pop ebp */
  EBP = (pop32());
  /* 10e55e94 ret  */
  ESPCHK(0x10e55e80u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10e55ea0 (21 bytes, 10 insns) */
void f_10e55ea0(void) {
  FTRACE(0x10e55ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10e55ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55ea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e55ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55eaa push eax */
  push32((uint32_t)(EAX));
  /* 10e55eab call 0x10e55f00 */
  push32(0x10e55eb0u); f_10e55f00();
  /* 10e55eb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55eb3 pop ebp */
  EBP = (pop32());
  /* 10e55eb4 ret  */
  ESPCHK(0x10e55ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x10e55ec0 (19 bytes, 9 insns) */
void f_10e55ec0(void) {
  FTRACE(0x10e55ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10e55ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e55ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55ec9 call 0x10e55f00 */
  push32(0x10e55eceu); f_10e55f00();
  /* 10e55ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55ed1 pop ebp */
  EBP = (pop32());
  /* 10e55ed2 ret  */
  ESPCHK(0x10e55ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ee0 @ 0x10e55ee0 (19 bytes, 9 insns) */
void f_10e55ee0(void) {
  FTRACE(0x10e55ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10e55ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e55ee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e55ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e55ee9 call 0x10e55f00 */
  push32(0x10e55eeeu); f_10e55f00();
  /* 10e55eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55ef1 pop ebp */
  EBP = (pop32());
  /* 10e55ef2 ret  */
  ESPCHK(0x10e55ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x10e55f00 (227 bytes, 61 insns) */
void f_10e55f00(void) {
  FTRACE(0x10e55f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55f01 mov ebp, esp */
  EBP = (ESP);
  /* 10e55f03 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55f04 call 0x10e55ff0 */
  push32(0x10e55f09u); f_10e55ff0();
  /* 10e55f09 cmp dword ptr [0x10e827f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55f10 jne 0x10e55f23 */
  if (!C.zf) goto L_10e55f23;
  /* 10e55f12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55f15 push eax */
  push32((uint32_t)(EAX));
  /* 10e55f16 call dword ptr [0x10e853f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853f8))), 0x10e55f1cu);
  /* 10e55f1c push eax */
  push32((uint32_t)(EAX));
  /* 10e55f1d call dword ptr [0x10e853f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853f4))), 0x10e55f23u);
L_10e55f23:;
  /* 10e55f23 mov dword ptr [0x10e827ec], 1 */
  w32((uint32_t)(0x10e827ec), (0x1u));
  /* 10e55f2d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10e55f30 mov byte ptr [0x10e827e8], cl */
  w8((uint32_t)(0x10e827e8), (CL));
  /* 10e55f36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55f3a jne 0x10e55f83 */
  if (!C.zf) goto L_10e55f83;
  /* 10e55f3c cmp dword ptr [0x10e842d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55f43 je 0x10e55f71 */
  if (C.zf) goto L_10e55f71;
  /* 10e55f45 mov edx, dword ptr [0x10e842d4] */
  EDX = (r32((uint32_t)(0x10e842d4)));
  /* 10e55f4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e55f4e:;
  /* 10e55f4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55f51 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e55f54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e55f57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55f5a cmp ecx, dword ptr [0x10e842d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e842d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55f60 jb 0x10e55f71 */
  if (C.cf) goto L_10e55f71;
  /* 10e55f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55f65 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55f68 je 0x10e55f6f */
  if (C.zf) goto L_10e55f6f;
  /* 10e55f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e55f6d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10e55f6fu);
L_10e55f6f:;
  /* 10e55f6f jmp 0x10e55f4e */
  goto L_10e55f4e;
L_10e55f71:;
  /* 10e55f71 push 0x10e80724 */
  push32((uint32_t)(0x10e80724u));
  /* 10e55f76 push 0x10e8051c */
  push32((uint32_t)(0x10e8051cu));
  /* 10e55f7b call 0x10e56010 */
  push32(0x10e55f80u); f_10e56010();
  /* 10e55f80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e55f83:;
  /* 10e55f83 push 0x10e8092c */
  push32((uint32_t)(0x10e8092cu));
  /* 10e55f88 push 0x10e80828 */
  push32((uint32_t)(0x10e80828u));
  /* 10e55f8d call 0x10e56010 */
  push32(0x10e55f92u); f_10e56010();
  /* 10e55f92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55f95 cmp dword ptr [0x10e827f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55f9c jne 0x10e55fbe */
  if (!C.zf) goto L_10e55fbe;
  /* 10e55f9e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e55fa0 call 0x10e57bf0 */
  push32(0x10e55fa5u); f_10e57bf0();
  /* 10e55fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55fa8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e55fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e55fad je 0x10e55fbe */
  if (C.zf) goto L_10e55fbe;
  /* 10e55faf mov dword ptr [0x10e827f4], 1 */
  w32((uint32_t)(0x10e827f4), (0x1u));
  /* 10e55fb9 call 0x10e58500 */
  push32(0x10e55fbeu); f_10e58500();
L_10e55fbe:;
  /* 10e55fbe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e55fc2 je 0x10e55fcb */
  if (C.zf) goto L_10e55fcb;
  /* 10e55fc4 call 0x10e56000 */
  push32(0x10e55fc9u); f_10e56000();
  /* 10e55fc9 jmp 0x10e55fdf */
  goto L_10e55fdf;
L_10e55fcb:;
  /* 10e55fcb mov dword ptr [0x10e827f0], 1 */
  w32((uint32_t)(0x10e827f0), (0x1u));
  /* 10e55fd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e55fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e55fd9 call dword ptr [0x10e853f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853f0))), 0x10e55fdfu);
L_10e55fdf:;
  /* 10e55fdf mov esp, ebp */
  ESP = (EBP);
  /* 10e55fe1 pop ebp */
  EBP = (pop32());
  /* 10e55fe2 ret  */
  ESPCHK(0x10e55f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x10e55ff0 (15 bytes, 7 insns) */
void f_10e55ff0(void) {
  FTRACE(0x10e55ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e55ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e55ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10e55ff3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10e55ff5 call 0x10e5a0e0 */
  push32(0x10e55ffau); f_10e5a0e0();
  /* 10e55ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e55ffd pop ebp */
  EBP = (pop32());
  /* 10e55ffe ret  */
  ESPCHK(0x10e55ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x10e56000 (15 bytes, 7 insns) */
void f_10e56000(void) {
  FTRACE(0x10e56000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56000 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56001 mov ebp, esp */
  EBP = (ESP);
  /* 10e56003 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10e56005 call 0x10e5a180 */
  push32(0x10e5600au); f_10e5a180();
  /* 10e5600a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5600d pop ebp */
  EBP = (pop32());
  /* 10e5600e ret  */
  ESPCHK(0x10e56000u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10e56010 (37 bytes, 16 insns) */
void f_10e56010(void) {
  FTRACE(0x10e56010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56010 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56011 mov ebp, esp */
  EBP = (ESP);
L_10e56013:;
  /* 10e56013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56016 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56019 jae 0x10e56033 */
  if (!C.cf) goto L_10e56033;
  /* 10e5601b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5601e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56021 je 0x10e56028 */
  if (C.zf) goto L_10e56028;
  /* 10e56023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56026 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10e56028u);
L_10e56028:;
  /* 10e56028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5602b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5602e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e56031 jmp 0x10e56013 */
  goto L_10e56013;
L_10e56033:;
  /* 10e56033 pop ebp */
  EBP = (pop32());
  /* 10e56034 ret  */
  ESPCHK(0x10e56010u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x10e56040 (130 bytes, 42 insns) */
void f_10e56040(void) {
  FTRACE(0x10e56040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56040 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56041 mov ebp, esp */
  EBP = (ESP);
  /* 10e56043 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56044 call 0x10e5a000 */
  push32(0x10e56049u); f_10e5a000();
  /* 10e56049 call dword ptr [0x10e85400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85400))), 0x10e5604fu);
  /* 10e5604f mov dword ptr [0x10e80a60], eax */
  w32((uint32_t)(0x10e80a60), (EAX));
  /* 10e56054 cmp dword ptr [0x10e80a60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80a60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5605b jne 0x10e56061 */
  if (!C.zf) goto L_10e56061;
  /* 10e5605d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5605f jmp 0x10e560be */
  goto L_10e560be;
L_10e56061:;
  /* 10e56061 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10e56063 push 0x10e7d750 */
  push32((uint32_t)(0x10e7d750u));
  /* 10e56068 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5606a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10e5606c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5606e call 0x10e56af0 */
  push32(0x10e56073u); f_10e56af0();
  /* 10e56073 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56076 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e56079 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5607d je 0x10e56094 */
  if (C.zf) goto L_10e56094;
  /* 10e5607f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56082 push eax */
  push32((uint32_t)(EAX));
  /* 10e56083 mov ecx, dword ptr [0x10e80a60] */
  ECX = (r32((uint32_t)(0x10e80a60)));
  /* 10e56089 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5608a call dword ptr [0x10e853fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853fc))), 0x10e56090u);
  /* 10e56090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56092 jne 0x10e56098 */
  if (!C.zf) goto L_10e56098;
L_10e56094:;
  /* 10e56094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56096 jmp 0x10e560be */
  goto L_10e560be;
L_10e56098:;
  /* 10e56098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5609b push edx */
  push32((uint32_t)(EDX));
  /* 10e5609c call 0x10e56100 */
  push32(0x10e560a1u); f_10e56100();
  /* 10e560a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e560a4 call dword ptr [0x10e853e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e8))), 0x10e560aau);
  /* 10e560aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e560ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e560af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e560b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10e560b9 mov eax, 1 */
  EAX = (0x1u);
L_10e560be:;
  /* 10e560be mov esp, ebp */
  ESP = (EBP);
  /* 10e560c0 pop ebp */
  EBP = (pop32());
  /* 10e560c1 ret  */
  ESPCHK(0x10e56040u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x10e560d0 (41 bytes, 11 insns) */
void f_10e560d0(void) {
  FTRACE(0x10e560d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e560d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e560d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e560d3 call 0x10e5a040 */
  push32(0x10e560d8u); f_10e5a040();
  /* 10e560d8 cmp dword ptr [0x10e80a60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80a60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e560df je 0x10e560f7 */
  if (C.zf) goto L_10e560f7;
  /* 10e560e1 mov eax, dword ptr [0x10e80a60] */
  EAX = (r32((uint32_t)(0x10e80a60)));
  /* 10e560e6 push eax */
  push32((uint32_t)(EAX));
  /* 10e560e7 call dword ptr [0x10e85404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85404))), 0x10e560edu);
  /* 10e560ed mov dword ptr [0x10e80a60], 0xffffffff */
  w32((uint32_t)(0x10e80a60), (0xffffffffu));
L_10e560f7:;
  /* 10e560f7 pop ebp */
  EBP = (pop32());
  /* 10e560f8 ret  */
  ESPCHK(0x10e560d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006100 @ 0x10e56100 (25 bytes, 8 insns) */
void f_10e56100(void) {
  FTRACE(0x10e56100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56100 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56101 mov ebp, esp */
  EBP = (ESP);
  /* 10e56103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56106 mov dword ptr [eax + 0x50], 0x10e80c10 */
  w32((uint32_t)(EAX + 0x50), (0x10e80c10u));
  /* 10e5610d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56110 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10e56117 pop ebp */
  EBP = (pop32());
  /* 10e56118 ret  */
  ESPCHK(0x10e56100u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x10e56120 (152 bytes, 48 insns) */
void f_10e56120(void) {
  FTRACE(0x10e56120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56120 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56121 mov ebp, esp */
  EBP = (ESP);
  /* 10e56123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56126 call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e5612cu);
  /* 10e5612c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5612f mov eax, dword ptr [0x10e80a60] */
  EAX = (r32((uint32_t)(0x10e80a60)));
  /* 10e56134 push eax */
  push32((uint32_t)(EAX));
  /* 10e56135 call dword ptr [0x10e853e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e4))), 0x10e5613bu);
  /* 10e5613b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5613e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56142 jne 0x10e561a7 */
  if (!C.zf) goto L_10e561a7;
  /* 10e56144 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10e56149 push 0x10e7d750 */
  push32((uint32_t)(0x10e7d750u));
  /* 10e5614e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56150 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10e56152 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56154 call 0x10e56af0 */
  push32(0x10e56159u); f_10e56af0();
  /* 10e56159 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5615c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5615f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56163 je 0x10e5619d */
  if (C.zf) goto L_10e5619d;
  /* 10e56165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56168 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56169 mov edx, dword ptr [0x10e80a60] */
  EDX = (r32((uint32_t)(0x10e80a60)));
  /* 10e5616f push edx */
  push32((uint32_t)(EDX));
  /* 10e56170 call dword ptr [0x10e853fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853fc))), 0x10e56176u);
  /* 10e56176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56178 je 0x10e5619d */
  if (C.zf) goto L_10e5619d;
  /* 10e5617a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5617d push eax */
  push32((uint32_t)(EAX));
  /* 10e5617e call 0x10e56100 */
  push32(0x10e56183u); f_10e56100();
  /* 10e56183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56186 call dword ptr [0x10e853e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e8))), 0x10e5618cu);
  /* 10e5618c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5618f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e56191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56194 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10e5619b jmp 0x10e561a7 */
  goto L_10e561a7;
L_10e5619d:;
  /* 10e5619d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e5619f call 0x10e55650 */
  push32(0x10e561a4u); f_10e55650();
  /* 10e561a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e561a7:;
  /* 10e561a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e561aa push eax */
  push32((uint32_t)(EAX));
  /* 10e561ab call dword ptr [0x10e85408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85408))), 0x10e561b1u);
  /* 10e561b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e561b4 mov esp, ebp */
  ESP = (EBP);
  /* 10e561b6 pop ebp */
  EBP = (pop32());
  /* 10e561b7 ret  */
  ESPCHK(0x10e56120u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x10e561c0 (263 bytes, 86 insns) */
void f_10e561c0(void) {
  FTRACE(0x10e561c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e561c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e561c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e561c3 cmp dword ptr [0x10e80a60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80a60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e561ca je 0x10e562c5 */
  if (C.zf) goto L_10e562c5;
  /* 10e561d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e561d4 jne 0x10e561e5 */
  if (!C.zf) goto L_10e561e5;
  /* 10e561d6 mov eax, dword ptr [0x10e80a60] */
  EAX = (r32((uint32_t)(0x10e80a60)));
  /* 10e561db push eax */
  push32((uint32_t)(EAX));
  /* 10e561dc call dword ptr [0x10e853e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e4))), 0x10e561e2u);
  /* 10e561e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e561e5:;
  /* 10e561e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e561e9 je 0x10e562b6 */
  if (C.zf) goto L_10e562b6;
  /* 10e561ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e561f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e561f6 je 0x10e56209 */
  if (C.zf) goto L_10e56209;
  /* 10e561f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e561fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e561fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10e56200 push eax */
  push32((uint32_t)(EAX));
  /* 10e56201 call 0x10e57170 */
  push32(0x10e56206u); f_10e57170();
  /* 10e56206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e56209:;
  /* 10e56209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5620c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56210 je 0x10e56223 */
  if (C.zf) goto L_10e56223;
  /* 10e56212 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56217 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10e5621a push eax */
  push32((uint32_t)(EAX));
  /* 10e5621b call 0x10e57170 */
  push32(0x10e56220u); f_10e57170();
  /* 10e56220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e56223:;
  /* 10e56223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56226 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5622a je 0x10e5623d */
  if (C.zf) goto L_10e5623d;
  /* 10e5622c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5622e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56231 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10e56234 push eax */
  push32((uint32_t)(EAX));
  /* 10e56235 call 0x10e57170 */
  push32(0x10e5623au); f_10e57170();
  /* 10e5623a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5623d:;
  /* 10e5623d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56240 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56244 je 0x10e56257 */
  if (C.zf) goto L_10e56257;
  /* 10e56246 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5624b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10e5624e push eax */
  push32((uint32_t)(EAX));
  /* 10e5624f call 0x10e57170 */
  push32(0x10e56254u); f_10e57170();
  /* 10e56254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e56257:;
  /* 10e56257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5625a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5625e je 0x10e56271 */
  if (C.zf) goto L_10e56271;
  /* 10e56260 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56265 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10e56268 push eax */
  push32((uint32_t)(EAX));
  /* 10e56269 call 0x10e57170 */
  push32(0x10e5626eu); f_10e57170();
  /* 10e5626e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e56271:;
  /* 10e56271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56274 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56278 je 0x10e5628b */
  if (C.zf) goto L_10e5628b;
  /* 10e5627a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5627c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5627f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10e56282 push eax */
  push32((uint32_t)(EAX));
  /* 10e56283 call 0x10e57170 */
  push32(0x10e56288u); f_10e57170();
  /* 10e56288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5628b:;
  /* 10e5628b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5628e cmp dword ptr [ecx + 0x50], 0x10e80c10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10e80c10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56295 je 0x10e562a8 */
  if (C.zf) goto L_10e562a8;
  /* 10e56297 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5629c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10e5629f push eax */
  push32((uint32_t)(EAX));
  /* 10e562a0 call 0x10e57170 */
  push32(0x10e562a5u); f_10e57170();
  /* 10e562a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e562a8:;
  /* 10e562a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e562aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e562ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e562ae call 0x10e57170 */
  push32(0x10e562b3u); f_10e57170();
  /* 10e562b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e562b6:;
  /* 10e562b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e562b8 mov edx, dword ptr [0x10e80a60] */
  EDX = (r32((uint32_t)(0x10e80a60)));
  /* 10e562be push edx */
  push32((uint32_t)(EDX));
  /* 10e562bf call dword ptr [0x10e853fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853fc))), 0x10e562c5u);
L_10e562c5:;
  /* 10e562c5 pop ebp */
  EBP = (pop32());
  /* 10e562c6 ret  */
  ESPCHK(0x10e561c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x10e562d0 (11 bytes, 5 insns) */
void f_10e562d0(void) {
  FTRACE(0x10e562d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e562d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e562d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e562d3 call dword ptr [0x10e853e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e8))), 0x10e562d9u);
  /* 10e562d9 pop ebp */
  EBP = (pop32());
  /* 10e562da ret  */
  ESPCHK(0x10e562d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e0 @ 0x10e562e0 (11 bytes, 5 insns) */
void f_10e562e0(void) {
  FTRACE(0x10e562e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e562e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e562e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e562e3 call dword ptr [0x10e853bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853bc))), 0x10e562e9u);
  /* 10e562e9 pop ebp */
  EBP = (pop32());
  /* 10e562ea ret  */
  ESPCHK(0x10e562e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x10e562f0 (804 bytes, 236 insns) */
void f_10e562f0(void) {
  FTRACE(0x10e562f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e562f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e562f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e562f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e562f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10e562fb push 0x10e7d75c */
  push32((uint32_t)(0x10e7d75cu));
  /* 10e56300 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56302 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e56307 call 0x10e566e0 */
  push32(0x10e5630cu); f_10e566e0();
  /* 10e5630c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5630f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10e56312 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56316 jne 0x10e56322 */
  if (!C.zf) goto L_10e56322;
  /* 10e56318 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10e5631a call 0x10e55650 */
  push32(0x10e5631fu); f_10e55650();
  /* 10e5631f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e56322:;
  /* 10e56322 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56325 mov dword ptr [0x10e84180], eax */
  w32((uint32_t)(0x10e84180), (EAX));
  /* 10e5632a mov dword ptr [0x10e842bc], 0x20 */
  w32((uint32_t)(0x10e842bc), (0x20u));
  /* 10e56334 jmp 0x10e5633f */
  goto L_10e5633f;
L_10e56336:;
  /* 10e56336 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56339 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5633c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10e5633f:;
  /* 10e5633f mov edx, dword ptr [0x10e84180] */
  EDX = (r32((uint32_t)(0x10e84180)));
  /* 10e56345 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5634b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5634e jae 0x10e56373 */
  if (!C.cf) goto L_10e56373;
  /* 10e56350 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56353 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e56357 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5635a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e56360 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56363 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e56367 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5636a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e56371 jmp 0x10e56336 */
  goto L_10e56336;
L_10e56373:;
  /* 10e56373 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10e56376 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56377 call dword ptr [0x10e853b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853b0))), 0x10e5637du);
  /* 10e5637d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10e56380 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e56386 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e56388 je 0x10e56515 */
  if (C.zf) goto L_10e56515;
  /* 10e5638e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56392 je 0x10e56515 */
  if (C.zf) goto L_10e56515;
  /* 10e56398 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5639b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5639d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10e563a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e563a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e563a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e563a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e563ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e563af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10e563b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e563b9 jge 0x10e563c3 */
  if ((C.sf==C.of)) goto L_10e563c3;
  /* 10e563bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10e563be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10e563c1 jmp 0x10e563ca */
  goto L_10e563ca;
L_10e563c3:;
  /* 10e563c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10e563ca:;
  /* 10e563ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10e563cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10e563d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10e563d7 jmp 0x10e563e2 */
  goto L_10e563e2;
L_10e563d9:;
  /* 10e563d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e563dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e563df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10e563e2:;
  /* 10e563e2 mov ecx, dword ptr [0x10e842bc] */
  ECX = (r32((uint32_t)(0x10e842bc)));
  /* 10e563e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e563eb jge 0x10e56482 */
  if ((C.sf==C.of)) goto L_10e56482;
  /* 10e563f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10e563f6 push 0x10e7d75c */
  push32((uint32_t)(0x10e7d75cu));
  /* 10e563fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e563fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e56402 call 0x10e566e0 */
  push32(0x10e56407u); f_10e566e0();
  /* 10e56407 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5640a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10e5640d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56411 jne 0x10e5641e */
  if (!C.zf) goto L_10e5641e;
  /* 10e56413 mov edx, dword ptr [0x10e842bc] */
  EDX = (r32((uint32_t)(0x10e842bc)));
  /* 10e56419 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10e5641c jmp 0x10e56482 */
  goto L_10e56482;
L_10e5641e:;
  /* 10e5641e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e56421 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56424 mov dword ptr [eax*4 + 0x10e84180], ecx */
  w32((uint32_t)(EAX*4 + 0x10e84180), (ECX));
  /* 10e5642b mov edx, dword ptr [0x10e842bc] */
  EDX = (r32((uint32_t)(0x10e842bc)));
  /* 10e56431 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56434 mov dword ptr [0x10e842bc], edx */
  w32((uint32_t)(0x10e842bc), (EDX));
  /* 10e5643a jmp 0x10e56445 */
  goto L_10e56445;
L_10e5643c:;
  /* 10e5643c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5643f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56442 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10e56445:;
  /* 10e56445 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e56448 mov edx, dword ptr [ecx*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5644f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56455 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56458 jae 0x10e5647d */
  if (!C.cf) goto L_10e5647d;
  /* 10e5645a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5645d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e56461 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56464 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e5646a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5646d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e56471 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56474 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e5647b jmp 0x10e5643c */
  goto L_10e5643c;
L_10e5647d:;
  /* 10e5647d jmp 0x10e563d9 */
  goto L_10e563d9;
L_10e56482:;
  /* 10e56482 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10e56489 jmp 0x10e564a6 */
  goto L_10e564a6;
L_10e5648b:;
  /* 10e5648b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e5648e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56491 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10e56494 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56497 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5649a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5649d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e564a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e564a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10e564a6:;
  /* 10e564a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e564a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e564ac jge 0x10e56515 */
  if ((C.sf==C.of)) goto L_10e56515;
  /* 10e564ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e564b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e564b4 je 0x10e56510 */
  if (C.zf) goto L_10e56510;
  /* 10e564b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e564b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e564bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e564bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e564c1 je 0x10e56510 */
  if (C.zf) goto L_10e56510;
  /* 10e564c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e564c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e564c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10e564cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e564ce jne 0x10e564e0 */
  if (!C.zf) goto L_10e564e0;
  /* 10e564d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e564d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e564d5 push edx */
  push32((uint32_t)(EDX));
  /* 10e564d6 call dword ptr [0x10e853b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853b4))), 0x10e564dcu);
  /* 10e564dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e564de je 0x10e56510 */
  if (C.zf) goto L_10e56510;
L_10e564e0:;
  /* 10e564e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e564e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e564e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e564e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e564ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e564ef mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e564f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e564f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10e564fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e564fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e56501 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e56503 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e56505 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56508 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5650b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5650d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10e56510:;
  /* 10e56510 jmp 0x10e5648b */
  goto L_10e5648b;
L_10e56515:;
  /* 10e56515 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10e5651c jmp 0x10e56527 */
  goto L_10e56527;
L_10e5651e:;
  /* 10e5651e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e56521 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56524 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10e56527:;
  /* 10e56527 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5652b jge 0x10e56604 */
  if ((C.sf==C.of)) goto L_10e56604;
  /* 10e56531 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e56534 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e56537 mov edx, dword ptr [0x10e84180] */
  EDX = (r32((uint32_t)(0x10e84180)));
  /* 10e5653d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5653f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10e56542 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56545 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56548 jne 0x10e565f0 */
  if (!C.zf) goto L_10e565f0;
  /* 10e5654e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e56551 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10e56555 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56559 jne 0x10e56564 */
  if (!C.zf) goto L_10e56564;
  /* 10e5655b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10e56562 jmp 0x10e56574 */
  goto L_10e56574;
L_10e56564:;
  /* 10e56564 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e56567 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5656a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5656c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5656e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56571 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10e56574:;
  /* 10e56574 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10e56577 push eax */
  push32((uint32_t)(EAX));
  /* 10e56578 call dword ptr [0x10e853d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d0))), 0x10e5657eu);
  /* 10e5657e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10e56581 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56585 je 0x10e565df */
  if (C.zf) goto L_10e565df;
  /* 10e56587 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e5658a push ecx */
  push32((uint32_t)(ECX));
  /* 10e5658b call dword ptr [0x10e853b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853b4))), 0x10e56591u);
  /* 10e56591 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10e56594 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56598 je 0x10e565df */
  if (C.zf) goto L_10e565df;
  /* 10e5659a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5659d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e565a0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e565a2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10e565a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e565ab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e565ae jne 0x10e565c0 */
  if (!C.zf) goto L_10e565c0;
  /* 10e565b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565b3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e565b6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10e565b8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565bb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10e565be jmp 0x10e565dd */
  goto L_10e565dd;
L_10e565c0:;
  /* 10e565c0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10e565c3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e565c9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e565cc jne 0x10e565dd */
  if (!C.zf) goto L_10e565dd;
  /* 10e565ce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e565d4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10e565d7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e565dd:;
  /* 10e565dd jmp 0x10e565ee */
  goto L_10e565ee;
L_10e565df:;
  /* 10e565df mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565e2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e565e5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10e565e8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e565ee:;
  /* 10e565ee jmp 0x10e565ff */
  goto L_10e565ff;
L_10e565f0:;
  /* 10e565f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565f3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e565f6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10e565f9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e565fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e565ff:;
  /* 10e565ff jmp 0x10e5651e */
  goto L_10e5651e;
L_10e56604:;
  /* 10e56604 mov eax, dword ptr [0x10e842bc] */
  EAX = (r32((uint32_t)(0x10e842bc)));
  /* 10e56609 push eax */
  push32((uint32_t)(EAX));
  /* 10e5660a call dword ptr [0x10e853b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853b8))), 0x10e56610u);
  /* 10e56610 mov esp, ebp */
  ESP = (EBP);
  /* 10e56612 pop ebp */
  EBP = (pop32());
  /* 10e56613 ret  */
  ESPCHK(0x10e562f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10e56620 (155 bytes, 45 insns) */
void f_10e56620(void) {
  FTRACE(0x10e56620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56620 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56621 mov ebp, esp */
  EBP = (ESP);
  /* 10e56623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56626 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e5662d jmp 0x10e56638 */
  goto L_10e56638;
L_10e5662f:;
  /* 10e5662f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56632 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56635 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e56638:;
  /* 10e56638 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5663c jge 0x10e566b7 */
  if ((C.sf==C.of)) goto L_10e566b7;
  /* 10e5663e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56641 cmp dword ptr [ecx*4 + 0x10e84180], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e84180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56649 je 0x10e566b2 */
  if (C.zf) goto L_10e566b2;
  /* 10e5664b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5664e mov eax, dword ptr [edx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e56655 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e56658 jmp 0x10e56663 */
  goto L_10e56663;
L_10e5665a:;
  /* 10e5665a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5665d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56660 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e56663:;
  /* 10e56663 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56666 mov eax, dword ptr [edx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5666d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56672 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56675 jae 0x10e5668f */
  if (!C.cf) goto L_10e5668f;
  /* 10e56677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5667a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5667e je 0x10e5668d */
  if (C.zf) goto L_10e5668d;
  /* 10e56680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56683 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56686 push edx */
  push32((uint32_t)(EDX));
  /* 10e56687 call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5668du);
L_10e5668d:;
  /* 10e5668d jmp 0x10e5665a */
  goto L_10e5665a;
L_10e5668f:;
  /* 10e5668f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56694 mov ecx, dword ptr [eax*4 + 0x10e84180] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5669b push ecx */
  push32((uint32_t)(ECX));
  /* 10e5669c call 0x10e57170 */
  push32(0x10e566a1u); f_10e57170();
  /* 10e566a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e566a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e566a7 mov dword ptr [edx*4 + 0x10e84180], 0 */
  w32((uint32_t)(EDX*4 + 0x10e84180), (0x0u));
L_10e566b2:;
  /* 10e566b2 jmp 0x10e5662f */
  goto L_10e5662f;
L_10e566b7:;
  /* 10e566b7 mov esp, ebp */
  ESP = (EBP);
  /* 10e566b9 pop ebp */
  EBP = (pop32());
  /* 10e566ba ret  */
  ESPCHK(0x10e56620u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x10e566c0 (29 bytes, 13 insns) */
void f_10e566c0(void) {
  FTRACE(0x10e566c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e566c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e566c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e566c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e566c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e566c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e566c9 mov eax, dword ptr [0x10e82998] */
  EAX = (r32((uint32_t)(0x10e82998)));
  /* 10e566ce push eax */
  push32((uint32_t)(EAX));
  /* 10e566cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e566d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e566d3 call 0x10e56730 */
  push32(0x10e566d8u); f_10e56730();
  /* 10e566d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e566db pop ebp */
  EBP = (pop32());
  /* 10e566dc ret  */
  ESPCHK(0x10e566c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x10e566e0 (35 bytes, 16 insns) */
void f_10e566e0(void) {
  FTRACE(0x10e566e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e566e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e566e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e566e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e566e6 push eax */
  push32((uint32_t)(EAX));
  /* 10e566e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e566ea push ecx */
  push32((uint32_t)(ECX));
  /* 10e566eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e566ee push edx */
  push32((uint32_t)(EDX));
  /* 10e566ef mov eax, dword ptr [0x10e82998] */
  EAX = (r32((uint32_t)(0x10e82998)));
  /* 10e566f4 push eax */
  push32((uint32_t)(EAX));
  /* 10e566f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e566f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e566f9 call 0x10e56730 */
  push32(0x10e566feu); f_10e56730();
  /* 10e566fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56701 pop ebp */
  EBP = (pop32());
  /* 10e56702 ret  */
  ESPCHK(0x10e566e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x10e56710 (27 bytes, 13 insns) */
void f_10e56710(void) {
  FTRACE(0x10e56710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56710 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56711 mov ebp, esp */
  EBP = (ESP);
  /* 10e56713 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56717 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56719 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5671c push eax */
  push32((uint32_t)(EAX));
  /* 10e5671d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56720 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56721 call 0x10e56730 */
  push32(0x10e56726u); f_10e56730();
  /* 10e56726 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56729 pop ebp */
  EBP = (pop32());
  /* 10e5672a ret  */
  ESPCHK(0x10e56710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10e56730 (94 bytes, 38 insns) */
void f_10e56730(void) {
  FTRACE(0x10e56730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56730 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56731 mov ebp, esp */
  EBP = (ESP);
  /* 10e56733 push ecx */
  push32((uint32_t)(ECX));
L_10e56734:;
  /* 10e56734 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e56736 call 0x10e5a0e0 */
  push32(0x10e5673bu); f_10e5a0e0();
  /* 10e5673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5673e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56741 push eax */
  push32((uint32_t)(EAX));
  /* 10e56742 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56745 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56746 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56749 push edx */
  push32((uint32_t)(EDX));
  /* 10e5674a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5674d push eax */
  push32((uint32_t)(EAX));
  /* 10e5674e call 0x10e567b0 */
  push32(0x10e56753u); f_10e567b0();
  /* 10e56753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56756 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e56759 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5675b call 0x10e5a180 */
  push32(0x10e56760u); f_10e5a180();
  /* 10e56760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56763 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56767 jne 0x10e5676f */
  if (!C.zf) goto L_10e5676f;
  /* 10e56769 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5676d jne 0x10e56774 */
  if (!C.zf) goto L_10e56774;
L_10e5676f:;
  /* 10e5676f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56772 jmp 0x10e5678a */
  goto L_10e5678a;
L_10e56774:;
  /* 10e56774 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56777 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56778 call 0x10e5a420 */
  push32(0x10e5677du); f_10e5a420();
  /* 10e5677d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56782 jne 0x10e56788 */
  if (!C.zf) goto L_10e56788;
  /* 10e56784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56786 jmp 0x10e5678a */
  goto L_10e5678a;
L_10e56788:;
  /* 10e56788 jmp 0x10e56734 */
  goto L_10e56734;
L_10e5678a:;
  /* 10e5678a mov esp, ebp */
  ESP = (EBP);
  /* 10e5678c pop ebp */
  EBP = (pop32());
  /* 10e5678d ret  */
  ESPCHK(0x10e56730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006790 @ 0x10e56790 (23 bytes, 11 insns) */
void f_10e56790(void) {
  FTRACE(0x10e56790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56790 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56791 mov ebp, esp */
  EBP = (ESP);
  /* 10e56793 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56795 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56797 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5679c push eax */
  push32((uint32_t)(EAX));
  /* 10e5679d call 0x10e567b0 */
  push32(0x10e567a2u); f_10e567b0();
  /* 10e567a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e567a5 pop ebp */
  EBP = (pop32());
  /* 10e567a6 ret  */
  ESPCHK(0x10e56790u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x10e567b0 (787 bytes, 254 insns) */
void f_10e567b0(void) {
  FTRACE(0x10e567b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e567b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e567b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e567b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e567b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e567b7 push esi */
  push32((uint32_t)(ESI));
  /* 10e567b8 push edi */
  push32((uint32_t)(EDI));
  /* 10e567b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e567c0 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e567c5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e567c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e567ca je 0x10e567fc */
  if (C.zf) goto L_10e567fc;
L_10e567cc:;
  /* 10e567cc call 0x10e57880 */
  push32(0x10e567d1u); f_10e57880();
  /* 10e567d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e567d3 jne 0x10e567f6 */
  if (!C.zf) goto L_10e567f6;
  /* 10e567d5 push 0x10e7d850 */
  push32((uint32_t)(0x10e7d850u));
  /* 10e567da push 0 */
  push32((uint32_t)(0x0u));
  /* 10e567dc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10e567e1 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e567e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e567e8 call 0x10e557a0 */
  push32(0x10e567edu); f_10e557a0();
  /* 10e567ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e567f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e567f3 jne 0x10e567f6 */
  if (!C.zf) goto L_10e567f6;
  /* 10e567f5 int3  */
  x86_unimpl("int3 @ 0x10e567f5");
L_10e567f6:;
  /* 10e567f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e567f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e567fa jne 0x10e567cc */
  if (!C.zf) goto L_10e567cc;
L_10e567fc:;
  /* 10e567fc mov edx, dword ptr [0x10e80a90] */
  EDX = (r32((uint32_t)(0x10e80a90)));
  /* 10e56802 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e56805 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56808 cmp eax, dword ptr [0x10e80a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e80a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5680e jne 0x10e56811 */
  if (!C.zf) goto L_10e56811;
  /* 10e56810 int3  */
  x86_unimpl("int3 @ 0x10e56810");
L_10e56811:;
  /* 10e56811 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56814 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56815 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56818 push edx */
  push32((uint32_t)(EDX));
  /* 10e56819 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5681c push eax */
  push32((uint32_t)(EAX));
  /* 10e5681d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56820 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56824 push edx */
  push32((uint32_t)(EDX));
  /* 10e56825 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56827 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56829 call dword ptr [0x10e80ca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e80ca0))), 0x10e5682fu);
  /* 10e5682f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56834 jne 0x10e56894 */
  if (!C.zf) goto L_10e56894;
  /* 10e56836 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5683a je 0x10e56867 */
  if (C.zf) goto L_10e56867;
L_10e5683c:;
  /* 10e5683c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5683f push eax */
  push32((uint32_t)(EAX));
  /* 10e56840 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56843 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56844 push 0x10e7d80c */
  push32((uint32_t)(0x10e7d80cu));
  /* 10e56849 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5684b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5684d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5684f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56851 call 0x10e557a0 */
  push32(0x10e56856u); f_10e557a0();
  /* 10e56856 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56859 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5685c jne 0x10e5685f */
  if (!C.zf) goto L_10e5685f;
  /* 10e5685e int3  */
  x86_unimpl("int3 @ 0x10e5685e");
L_10e5685f:;
  /* 10e5685f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e56861 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e56863 jne 0x10e5683c */
  if (!C.zf) goto L_10e5683c;
  /* 10e56865 jmp 0x10e5688d */
  goto L_10e5688d;
L_10e56867:;
  /* 10e56867 push 0x10e7d7e8 */
  push32((uint32_t)(0x10e7d7e8u));
  /* 10e5686c push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e56871 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56873 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56875 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56877 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56879 call 0x10e557a0 */
  push32(0x10e5687eu); f_10e557a0();
  /* 10e5687e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56881 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56884 jne 0x10e56887 */
  if (!C.zf) goto L_10e56887;
  /* 10e56886 int3  */
  x86_unimpl("int3 @ 0x10e56886");
L_10e56887:;
  /* 10e56887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5688b jne 0x10e56867 */
  if (!C.zf) goto L_10e56867;
L_10e5688d:;
  /* 10e5688d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5688f jmp 0x10e56abc */
  goto L_10e56abc;
L_10e56894:;
  /* 10e56894 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56897 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5689d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e568a0 je 0x10e568b6 */
  if (C.zf) goto L_10e568b6;
  /* 10e568a2 mov edx, dword ptr [0x10e80a8c] */
  EDX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e568a8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e568ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e568ad jne 0x10e568b6 */
  if (!C.zf) goto L_10e568b6;
  /* 10e568af mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10e568b6:;
  /* 10e568b6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e568ba ja 0x10e568c7 */
  if ((!C.cf&&!C.zf)) goto L_10e568c7;
  /* 10e568bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e568bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e568c2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e568c5 jbe 0x10e568f3 */
  if ((C.cf||C.zf)) goto L_10e568f3;
L_10e568c7:;
  /* 10e568c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e568ca push ecx */
  push32((uint32_t)(ECX));
  /* 10e568cb push 0x10e7d7c0 */
  push32((uint32_t)(0x10e7d7c0u));
  /* 10e568d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e568d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e568d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e568d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e568d8 call 0x10e557a0 */
  push32(0x10e568ddu); f_10e557a0();
  /* 10e568dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e568e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e568e3 jne 0x10e568e6 */
  if (!C.zf) goto L_10e568e6;
  /* 10e568e5 int3  */
  x86_unimpl("int3 @ 0x10e568e5");
L_10e568e6:;
  /* 10e568e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e568e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e568ea jne 0x10e568c7 */
  if (!C.zf) goto L_10e568c7;
  /* 10e568ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e568ee jmp 0x10e56abc */
  goto L_10e56abc;
L_10e568f3:;
  /* 10e568f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e568f6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e568fb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e568fe je 0x10e56940 */
  if (C.zf) goto L_10e56940;
  /* 10e56900 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56904 je 0x10e56940 */
  if (C.zf) goto L_10e56940;
  /* 10e56906 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56909 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5690f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56912 je 0x10e56940 */
  if (C.zf) goto L_10e56940;
  /* 10e56914 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56918 je 0x10e56940 */
  if (C.zf) goto L_10e56940;
L_10e5691a:;
  /* 10e5691a push 0x10e7d78c */
  push32((uint32_t)(0x10e7d78cu));
  /* 10e5691f push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e56924 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56926 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56928 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5692a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5692c call 0x10e557a0 */
  push32(0x10e56931u); f_10e557a0();
  /* 10e56931 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56937 jne 0x10e5693a */
  if (!C.zf) goto L_10e5693a;
  /* 10e56939 int3  */
  x86_unimpl("int3 @ 0x10e56939");
L_10e5693a:;
  /* 10e5693a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5693c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5693e jne 0x10e5691a */
  if (!C.zf) goto L_10e5691a;
L_10e56940:;
  /* 10e56940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56943 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56946 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e56949 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5694c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5694d call 0x10e5a530 */
  push32(0x10e56952u); f_10e5a530();
  /* 10e56952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56955 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e56958 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5695c jne 0x10e56965 */
  if (!C.zf) goto L_10e56965;
  /* 10e5695e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56960 jmp 0x10e56abc */
  goto L_10e56abc;
L_10e56965:;
  /* 10e56965 mov edx, dword ptr [0x10e80a90] */
  EDX = (r32((uint32_t)(0x10e80a90)));
  /* 10e5696b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5696e mov dword ptr [0x10e80a90], edx */
  w32((uint32_t)(0x10e80a90), (EDX));
  /* 10e56974 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56978 je 0x10e569c3 */
  if (C.zf) goto L_10e569c3;
  /* 10e5697a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5697d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e56983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56986 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e5698d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56990 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e56997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5699a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10e569a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e569a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e569a7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10e569aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e569ad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10e569b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e569b7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10e569be jmp 0x10e56a63 */
  goto L_10e56a63;
L_10e569c3:;
  /* 10e569c3 mov edx, dword ptr [0x10e827fc] */
  EDX = (r32((uint32_t)(0x10e827fc)));
  /* 10e569c9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e569cc mov dword ptr [0x10e827fc], edx */
  w32((uint32_t)(0x10e827fc), (EDX));
  /* 10e569d2 mov eax, dword ptr [0x10e82804] */
  EAX = (r32((uint32_t)(0x10e82804)));
  /* 10e569d7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e569da mov dword ptr [0x10e82804], eax */
  w32((uint32_t)(0x10e82804), (EAX));
  /* 10e569df mov ecx, dword ptr [0x10e82804] */
  ECX = (r32((uint32_t)(0x10e82804)));
  /* 10e569e5 cmp ecx, dword ptr [0x10e82808] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e82808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e569eb jbe 0x10e569f9 */
  if ((C.cf||C.zf)) goto L_10e569f9;
  /* 10e569ed mov edx, dword ptr [0x10e82804] */
  EDX = (r32((uint32_t)(0x10e82804)));
  /* 10e569f3 mov dword ptr [0x10e82808], edx */
  w32((uint32_t)(0x10e82808), (EDX));
L_10e569f9:;
  /* 10e569f9 cmp dword ptr [0x10e82800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56a00 je 0x10e56a0f */
  if (C.zf) goto L_10e56a0f;
  /* 10e56a02 mov eax, dword ptr [0x10e82800] */
  EAX = (r32((uint32_t)(0x10e82800)));
  /* 10e56a07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e56a0d jmp 0x10e56a18 */
  goto L_10e56a18;
L_10e56a0f:;
  /* 10e56a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a12 mov dword ptr [0x10e827f8], edx */
  w32((uint32_t)(0x10e827f8), (EDX));
L_10e56a18:;
  /* 10e56a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a1b mov ecx, dword ptr [0x10e82800] */
  ECX = (r32((uint32_t)(0x10e82800)));
  /* 10e56a21 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e56a23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a26 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10e56a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56a33 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e56a36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56a3c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10e56a3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56a45 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10e56a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56a4e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10e56a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56a57 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10e56a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a5d mov dword ptr [0x10e82800], ecx */
  w32((uint32_t)(0x10e82800), (ECX));
L_10e56a63:;
  /* 10e56a63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e56a65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e56a67 mov dl, byte ptr [0x10e80a98] */
  DL = (r8((uint32_t)(0x10e80a98)));
  /* 10e56a6d push edx */
  push32((uint32_t)(EDX));
  /* 10e56a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a71 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56a74 push eax */
  push32((uint32_t)(EAX));
  /* 10e56a75 call 0x10e5a450 */
  push32(0x10e56a7au); f_10e5a450();
  /* 10e56a7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56a7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e56a7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e56a81 mov cl, byte ptr [0x10e80a98] */
  CL = (r8((uint32_t)(0x10e80a98)));
  /* 10e56a87 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56a88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56a8e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10e56a92 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56a93 call 0x10e5a450 */
  push32(0x10e56a98u); f_10e5a450();
  /* 10e56a98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56a9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56a9e push edx */
  push32((uint32_t)(EDX));
  /* 10e56a9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56aa1 mov al, byte ptr [0x10e80a9a] */
  AL = (r8((uint32_t)(0x10e80a9a)));
  /* 10e56aa6 push eax */
  push32((uint32_t)(EAX));
  /* 10e56aa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56aaa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56aad push ecx */
  push32((uint32_t)(ECX));
  /* 10e56aae call 0x10e5a450 */
  push32(0x10e56ab3u); f_10e5a450();
  /* 10e56ab3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ab6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56ab9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e56abc:;
  /* 10e56abc pop edi */
  EDI = (pop32());
  /* 10e56abd pop esi */
  ESI = (pop32());
  /* 10e56abe pop ebx */
  EBX = (pop32());
  /* 10e56abf mov esp, ebp */
  ESP = (EBP);
  /* 10e56ac1 pop ebp */
  EBP = (pop32());
  /* 10e56ac2 ret  */
  ESPCHK(0x10e567b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x10e56ad0 (27 bytes, 13 insns) */
void f_10e56ad0(void) {
  FTRACE(0x10e56ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10e56ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56adc push eax */
  push32((uint32_t)(EAX));
  /* 10e56add mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56ae1 call 0x10e56af0 */
  push32(0x10e56ae6u); f_10e56af0();
  /* 10e56ae6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ae9 pop ebp */
  EBP = (pop32());
  /* 10e56aea ret  */
  ESPCHK(0x10e56ad0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10e56af0 (96 bytes, 37 insns) */
void f_10e56af0(void) {
  FTRACE(0x10e56af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56af1 mov ebp, esp */
  EBP = (ESP);
  /* 10e56af3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56af6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56af9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e56afd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e56b00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56b04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56b07 push edx */
  push32((uint32_t)(EDX));
  /* 10e56b08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56b0b push eax */
  push32((uint32_t)(EAX));
  /* 10e56b0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56b0f push ecx */
  push32((uint32_t)(ECX));
  /* 10e56b10 call 0x10e566e0 */
  push32(0x10e56b15u); f_10e566e0();
  /* 10e56b15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56b18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e56b1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56b1f je 0x10e56b49 */
  if (C.zf) goto L_10e56b49;
  /* 10e56b21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56b24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e56b27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56b2a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56b2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e56b30:;
  /* 10e56b30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56b33 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56b36 jae 0x10e56b49 */
  if (!C.cf) goto L_10e56b49;
  /* 10e56b38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56b3b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e56b3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56b41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56b44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e56b47 jmp 0x10e56b30 */
  goto L_10e56b30;
L_10e56b49:;
  /* 10e56b49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56b4c mov esp, ebp */
  ESP = (EBP);
  /* 10e56b4e pop ebp */
  EBP = (pop32());
  /* 10e56b4f ret  */
  ESPCHK(0x10e56af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x10e56b50 (27 bytes, 13 insns) */
void f_10e56b50(void) {
  FTRACE(0x10e56b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56b51 mov ebp, esp */
  EBP = (ESP);
  /* 10e56b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56b57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56b59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56b5c push eax */
  push32((uint32_t)(EAX));
  /* 10e56b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56b60 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56b61 call 0x10e56b70 */
  push32(0x10e56b66u); f_10e56b70();
  /* 10e56b66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56b69 pop ebp */
  EBP = (pop32());
  /* 10e56b6a ret  */
  ESPCHK(0x10e56b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x10e56b70 (64 bytes, 27 insns) */
void f_10e56b70(void) {
  FTRACE(0x10e56b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56b71 mov ebp, esp */
  EBP = (ESP);
  /* 10e56b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56b74 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e56b76 call 0x10e5a0e0 */
  push32(0x10e56b7bu); f_10e5a0e0();
  /* 10e56b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56b80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56b83 push eax */
  push32((uint32_t)(EAX));
  /* 10e56b84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56b87 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56b88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56b8b push edx */
  push32((uint32_t)(EDX));
  /* 10e56b8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56b8f push eax */
  push32((uint32_t)(EAX));
  /* 10e56b90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56b94 call 0x10e56bb0 */
  push32(0x10e56b99u); f_10e56bb0();
  /* 10e56b99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56b9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e56b9f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e56ba1 call 0x10e5a180 */
  push32(0x10e56ba6u); f_10e5a180();
  /* 10e56ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ba9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56bac mov esp, ebp */
  ESP = (EBP);
  /* 10e56bae pop ebp */
  EBP = (pop32());
  /* 10e56baf ret  */
  ESPCHK(0x10e56b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x10e56bb0 (1297 bytes, 431 insns) */
void f_10e56bb0(void) {
  FTRACE(0x10e56bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e56bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e56bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e56bb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e56bb7 push esi */
  push32((uint32_t)(ESI));
  /* 10e56bb8 push edi */
  push32((uint32_t)(EDI));
  /* 10e56bb9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e56bc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56bc4 jne 0x10e56be3 */
  if (!C.zf) goto L_10e56be3;
  /* 10e56bc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10e56bca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56bcd push ecx */
  push32((uint32_t)(ECX));
  /* 10e56bce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56bd1 push edx */
  push32((uint32_t)(EDX));
  /* 10e56bd2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56bd5 push eax */
  push32((uint32_t)(EAX));
  /* 10e56bd6 call 0x10e566e0 */
  push32(0x10e56bdbu); f_10e566e0();
  /* 10e56bdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56bde jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56be3:;
  /* 10e56be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56be7 je 0x10e56c06 */
  if (C.zf) goto L_10e56c06;
  /* 10e56be9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56bed jne 0x10e56c06 */
  if (!C.zf) goto L_10e56c06;
  /* 10e56bef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56bf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56bf6 push edx */
  push32((uint32_t)(EDX));
  /* 10e56bf7 call 0x10e57170 */
  push32(0x10e56bfcu); f_10e57170();
  /* 10e56bfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56bff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56c01 jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56c06:;
  /* 10e56c06 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e56c0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e56c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56c10 je 0x10e56c42 */
  if (C.zf) goto L_10e56c42;
L_10e56c12:;
  /* 10e56c12 call 0x10e57880 */
  push32(0x10e56c17u); f_10e57880();
  /* 10e56c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56c19 jne 0x10e56c3c */
  if (!C.zf) goto L_10e56c3c;
  /* 10e56c1b push 0x10e7d850 */
  push32((uint32_t)(0x10e7d850u));
  /* 10e56c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56c22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10e56c27 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e56c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56c2e call 0x10e557a0 */
  push32(0x10e56c33u); f_10e557a0();
  /* 10e56c33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56c36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56c39 jne 0x10e56c3c */
  if (!C.zf) goto L_10e56c3c;
  /* 10e56c3b int3  */
  x86_unimpl("int3 @ 0x10e56c3b");
L_10e56c3c:;
  /* 10e56c3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e56c3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e56c40 jne 0x10e56c12 */
  if (!C.zf) goto L_10e56c12;
L_10e56c42:;
  /* 10e56c42 mov edx, dword ptr [0x10e80a90] */
  EDX = (r32((uint32_t)(0x10e80a90)));
  /* 10e56c48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e56c4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e56c4e cmp eax, dword ptr [0x10e80a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e80a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56c54 jne 0x10e56c57 */
  if (!C.zf) goto L_10e56c57;
  /* 10e56c56 int3  */
  x86_unimpl("int3 @ 0x10e56c56");
L_10e56c57:;
  /* 10e56c57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56c5a push ecx */
  push32((uint32_t)(ECX));
  /* 10e56c5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56c5e push edx */
  push32((uint32_t)(EDX));
  /* 10e56c5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e56c62 push eax */
  push32((uint32_t)(EAX));
  /* 10e56c63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56c66 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56c67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56c6a push edx */
  push32((uint32_t)(EDX));
  /* 10e56c6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56c6e push eax */
  push32((uint32_t)(EAX));
  /* 10e56c6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56c71 call dword ptr [0x10e80ca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e80ca0))), 0x10e56c77u);
  /* 10e56c77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56c7c jne 0x10e56cdc */
  if (!C.zf) goto L_10e56cdc;
  /* 10e56c7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56c82 je 0x10e56caf */
  if (C.zf) goto L_10e56caf;
L_10e56c84:;
  /* 10e56c84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56c87 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56c88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56c8b push edx */
  push32((uint32_t)(EDX));
  /* 10e56c8c push 0x10e7d9cc */
  push32((uint32_t)(0x10e7d9ccu));
  /* 10e56c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56c99 call 0x10e557a0 */
  push32(0x10e56c9eu); f_10e557a0();
  /* 10e56c9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56ca4 jne 0x10e56ca7 */
  if (!C.zf) goto L_10e56ca7;
  /* 10e56ca6 int3  */
  x86_unimpl("int3 @ 0x10e56ca6");
L_10e56ca7:;
  /* 10e56ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56cab jne 0x10e56c84 */
  if (!C.zf) goto L_10e56c84;
  /* 10e56cad jmp 0x10e56cd5 */
  goto L_10e56cd5;
L_10e56caf:;
  /* 10e56caf push 0x10e7d9a8 */
  push32((uint32_t)(0x10e7d9a8u));
  /* 10e56cb4 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e56cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56cc1 call 0x10e557a0 */
  push32(0x10e56cc6u); f_10e557a0();
  /* 10e56cc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56ccc jne 0x10e56ccf */
  if (!C.zf) goto L_10e56ccf;
  /* 10e56cce int3  */
  x86_unimpl("int3 @ 0x10e56cce");
L_10e56ccf:;
  /* 10e56ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e56cd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e56cd3 jne 0x10e56caf */
  if (!C.zf) goto L_10e56caf;
L_10e56cd5:;
  /* 10e56cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56cd7 jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56cdc:;
  /* 10e56cdc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56ce0 jbe 0x10e56d0e */
  if ((C.cf||C.zf)) goto L_10e56d0e;
L_10e56ce2:;
  /* 10e56ce2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56ce5 push edx */
  push32((uint32_t)(EDX));
  /* 10e56ce6 push 0x10e7d978 */
  push32((uint32_t)(0x10e7d978u));
  /* 10e56ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56cf3 call 0x10e557a0 */
  push32(0x10e56cf8u); f_10e557a0();
  /* 10e56cf8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56cfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56cfe jne 0x10e56d01 */
  if (!C.zf) goto L_10e56d01;
  /* 10e56d00 int3  */
  x86_unimpl("int3 @ 0x10e56d00");
L_10e56d01:;
  /* 10e56d01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56d03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56d05 jne 0x10e56ce2 */
  if (!C.zf) goto L_10e56ce2;
  /* 10e56d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56d09 jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56d0e:;
  /* 10e56d0e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56d12 je 0x10e56d56 */
  if (C.zf) goto L_10e56d56;
  /* 10e56d14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56d17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e56d1d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56d20 je 0x10e56d56 */
  if (C.zf) goto L_10e56d56;
  /* 10e56d22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56d25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e56d2b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56d2e je 0x10e56d56 */
  if (C.zf) goto L_10e56d56;
L_10e56d30:;
  /* 10e56d30 push 0x10e7d78c */
  push32((uint32_t)(0x10e7d78cu));
  /* 10e56d35 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e56d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56d40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e56d42 call 0x10e557a0 */
  push32(0x10e56d47u); f_10e557a0();
  /* 10e56d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56d4d jne 0x10e56d50 */
  if (!C.zf) goto L_10e56d50;
  /* 10e56d4f int3  */
  x86_unimpl("int3 @ 0x10e56d4f");
L_10e56d50:;
  /* 10e56d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56d54 jne 0x10e56d30 */
  if (!C.zf) goto L_10e56d30;
L_10e56d56:;
  /* 10e56d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56d59 push ecx */
  push32((uint32_t)(ECX));
  /* 10e56d5a call 0x10e57ce0 */
  push32(0x10e56d5fu); f_10e57ce0();
  /* 10e56d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e56d64 jne 0x10e56d87 */
  if (!C.zf) goto L_10e56d87;
  /* 10e56d66 push 0x10e7d954 */
  push32((uint32_t)(0x10e7d954u));
  /* 10e56d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56d6d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10e56d72 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e56d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56d79 call 0x10e557a0 */
  push32(0x10e56d7eu); f_10e557a0();
  /* 10e56d7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56d81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56d84 jne 0x10e56d87 */
  if (!C.zf) goto L_10e56d87;
  /* 10e56d86 int3  */
  x86_unimpl("int3 @ 0x10e56d86");
L_10e56d87:;
  /* 10e56d87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e56d89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e56d8b jne 0x10e56d56 */
  if (!C.zf) goto L_10e56d56;
  /* 10e56d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e56d90 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56d93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e56d96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56d99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56d9d jne 0x10e56da6 */
  if (!C.zf) goto L_10e56da6;
  /* 10e56d9f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10e56da6:;
  /* 10e56da6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56daa je 0x10e56dea */
  if (C.zf) goto L_10e56dea;
L_10e56dac:;
  /* 10e56dac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56daf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56db6 jne 0x10e56dc1 */
  if (!C.zf) goto L_10e56dc1;
  /* 10e56db8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56dbb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56dbf je 0x10e56de2 */
  if (C.zf) goto L_10e56de2;
L_10e56dc1:;
  /* 10e56dc1 push 0x10e7d90c */
  push32((uint32_t)(0x10e7d90cu));
  /* 10e56dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56dc8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10e56dcd push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e56dd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56dd4 call 0x10e557a0 */
  push32(0x10e56dd9u); f_10e557a0();
  /* 10e56dd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ddc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56ddf jne 0x10e56de2 */
  if (!C.zf) goto L_10e56de2;
  /* 10e56de1 int3  */
  x86_unimpl("int3 @ 0x10e56de1");
L_10e56de2:;
  /* 10e56de2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e56de4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e56de6 jne 0x10e56dac */
  if (!C.zf) goto L_10e56dac;
  /* 10e56de8 jmp 0x10e56e4e */
  goto L_10e56e4e;
L_10e56dea:;
  /* 10e56dea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56ded mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e56df0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e56df5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56df8 jne 0x10e56e0f */
  if (!C.zf) goto L_10e56e0f;
  /* 10e56dfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56dfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e56e03 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56e06 jne 0x10e56e0f */
  if (!C.zf) goto L_10e56e0f;
  /* 10e56e08 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10e56e0f:;
  /* 10e56e0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56e12 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e56e15 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e56e1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e56e1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e56e23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56e25 je 0x10e56e48 */
  if (C.zf) goto L_10e56e48;
  /* 10e56e27 push 0x10e7d8d0 */
  push32((uint32_t)(0x10e7d8d0u));
  /* 10e56e2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56e2e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10e56e33 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e56e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56e3a call 0x10e557a0 */
  push32(0x10e56e3fu); f_10e557a0();
  /* 10e56e3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56e42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56e45 jne 0x10e56e48 */
  if (!C.zf) goto L_10e56e48;
  /* 10e56e47 int3  */
  x86_unimpl("int3 @ 0x10e56e47");
L_10e56e48:;
  /* 10e56e48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e56e4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e56e4c jne 0x10e56e0f */
  if (!C.zf) goto L_10e56e0f;
L_10e56e4e:;
  /* 10e56e4e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56e52 je 0x10e56e79 */
  if (C.zf) goto L_10e56e79;
  /* 10e56e54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56e57 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56e5a push eax */
  push32((uint32_t)(EAX));
  /* 10e56e5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56e5e push ecx */
  push32((uint32_t)(ECX));
  /* 10e56e5f call 0x10e5a660 */
  push32(0x10e56e64u); f_10e5a660();
  /* 10e56e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56e67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e56e6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56e6e jne 0x10e56e77 */
  if (!C.zf) goto L_10e56e77;
  /* 10e56e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56e72 jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56e77:;
  /* 10e56e77 jmp 0x10e56e9c */
  goto L_10e56e9c;
L_10e56e79:;
  /* 10e56e79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56e7c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56e7f push edx */
  push32((uint32_t)(EDX));
  /* 10e56e80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e56e83 push eax */
  push32((uint32_t)(EAX));
  /* 10e56e84 call 0x10e5a5b0 */
  push32(0x10e56e89u); f_10e5a5b0();
  /* 10e56e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56e8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e56e8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56e93 jne 0x10e56e9c */
  if (!C.zf) goto L_10e56e9c;
  /* 10e56e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56e97 jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56e9c:;
  /* 10e56e9c mov ecx, dword ptr [0x10e80a90] */
  ECX = (r32((uint32_t)(0x10e80a90)));
  /* 10e56ea2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ea5 mov dword ptr [0x10e80a90], ecx */
  w32((uint32_t)(0x10e80a90), (ECX));
  /* 10e56eab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56eaf jne 0x10e56f07 */
  if (!C.zf) goto L_10e56f07;
  /* 10e56eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56eb4 mov eax, dword ptr [0x10e827fc] */
  EAX = (r32((uint32_t)(0x10e827fc)));
  /* 10e56eb9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56ebc mov dword ptr [0x10e827fc], eax */
  w32((uint32_t)(0x10e827fc), (EAX));
  /* 10e56ec1 mov ecx, dword ptr [0x10e827fc] */
  ECX = (r32((uint32_t)(0x10e827fc)));
  /* 10e56ec7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56eca mov dword ptr [0x10e827fc], ecx */
  w32((uint32_t)(0x10e827fc), (ECX));
  /* 10e56ed0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56ed3 mov eax, dword ptr [0x10e82804] */
  EAX = (r32((uint32_t)(0x10e82804)));
  /* 10e56ed8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56edb mov dword ptr [0x10e82804], eax */
  w32((uint32_t)(0x10e82804), (EAX));
  /* 10e56ee0 mov ecx, dword ptr [0x10e82804] */
  ECX = (r32((uint32_t)(0x10e82804)));
  /* 10e56ee6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56ee9 mov dword ptr [0x10e82804], ecx */
  w32((uint32_t)(0x10e82804), (ECX));
  /* 10e56eef mov edx, dword ptr [0x10e82804] */
  EDX = (r32((uint32_t)(0x10e82804)));
  /* 10e56ef5 cmp edx, dword ptr [0x10e82808] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e82808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56efb jbe 0x10e56f07 */
  if ((C.cf||C.zf)) goto L_10e56f07;
  /* 10e56efd mov eax, dword ptr [0x10e82804] */
  EAX = (r32((uint32_t)(0x10e82804)));
  /* 10e56f02 mov dword ptr [0x10e82808], eax */
  w32((uint32_t)(0x10e82808), (EAX));
L_10e56f07:;
  /* 10e56f07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56f0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e56f10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56f16 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56f19 jbe 0x10e56f3f */
  if ((C.cf||C.zf)) goto L_10e56f3f;
  /* 10e56f1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56f21 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e56f24 push edx */
  push32((uint32_t)(EDX));
  /* 10e56f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56f27 mov al, byte ptr [0x10e80a9a] */
  AL = (r8((uint32_t)(0x10e80a9a)));
  /* 10e56f2c push eax */
  push32((uint32_t)(EAX));
  /* 10e56f2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56f33 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56f36 push edx */
  push32((uint32_t)(EDX));
  /* 10e56f37 call 0x10e5a450 */
  push32(0x10e56f3cu); f_10e5a450();
  /* 10e56f3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e56f3f:;
  /* 10e56f3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10e56f41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e56f43 mov al, byte ptr [0x10e80a98] */
  AL = (r8((uint32_t)(0x10e80a98)));
  /* 10e56f48 push eax */
  push32((uint32_t)(EAX));
  /* 10e56f49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56f4c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56f4f push ecx */
  push32((uint32_t)(ECX));
  /* 10e56f50 call 0x10e5a450 */
  push32(0x10e56f55u); f_10e5a450();
  /* 10e56f55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56f58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56f5c jne 0x10e56f79 */
  if (!C.zf) goto L_10e56f79;
  /* 10e56f5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e56f64 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e56f67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e56f6d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10e56f70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f73 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e56f76 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10e56f79:;
  /* 10e56f79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e56f7f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10e56f82:;
  /* 10e56f82 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56f86 jne 0x10e56fb7 */
  if (!C.zf) goto L_10e56fb7;
  /* 10e56f88 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56f8c jne 0x10e56f96 */
  if (!C.zf) goto L_10e56f96;
  /* 10e56f8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56f91 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56f94 je 0x10e56fb7 */
  if (C.zf) goto L_10e56fb7;
L_10e56f96:;
  /* 10e56f96 push 0x10e7d89c */
  push32((uint32_t)(0x10e7d89cu));
  /* 10e56f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56f9d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10e56fa2 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e56fa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e56fa9 call 0x10e557a0 */
  push32(0x10e56faeu); f_10e557a0();
  /* 10e56fae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e56fb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56fb4 jne 0x10e56fb7 */
  if (!C.zf) goto L_10e56fb7;
  /* 10e56fb6 int3  */
  x86_unimpl("int3 @ 0x10e56fb6");
L_10e56fb7:;
  /* 10e56fb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e56fb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e56fbb jne 0x10e56f82 */
  if (!C.zf) goto L_10e56f82;
  /* 10e56fbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56fc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56fc3 je 0x10e56fcb */
  if (C.zf) goto L_10e56fcb;
  /* 10e56fc5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56fc9 je 0x10e56fd3 */
  if (C.zf) goto L_10e56fd3;
L_10e56fcb:;
  /* 10e56fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e56fce jmp 0x10e570ba */
  goto L_10e570ba;
L_10e56fd3:;
  /* 10e56fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56fd6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56fd9 je 0x10e56feb */
  if (C.zf) goto L_10e56feb;
  /* 10e56fdb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56fde mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e56fe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e56fe3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e56fe6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e56fe9 jmp 0x10e57027 */
  goto L_10e57027;
L_10e56feb:;
  /* 10e56feb mov eax, dword ptr [0x10e827f8] */
  EAX = (r32((uint32_t)(0x10e827f8)));
  /* 10e56ff0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e56ff3 je 0x10e57016 */
  if (C.zf) goto L_10e57016;
  /* 10e56ff5 push 0x10e7d880 */
  push32((uint32_t)(0x10e7d880u));
  /* 10e56ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e56ffc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10e57001 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e57006 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e57008 call 0x10e557a0 */
  push32(0x10e5700du); f_10e557a0();
  /* 10e5700d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57010 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57013 jne 0x10e57016 */
  if (!C.zf) goto L_10e57016;
  /* 10e57015 int3  */
  x86_unimpl("int3 @ 0x10e57015");
L_10e57016:;
  /* 10e57016 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e57018 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5701a jne 0x10e56feb */
  if (!C.zf) goto L_10e56feb;
  /* 10e5701c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5701f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e57022 mov dword ptr [0x10e827f8], eax */
  w32((uint32_t)(0x10e827f8), (EAX));
L_10e57027:;
  /* 10e57027 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5702a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5702e je 0x10e5703f */
  if (C.zf) goto L_10e5703f;
  /* 10e57030 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e57033 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e57036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e57039 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5703b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e5703d jmp 0x10e5707a */
  goto L_10e5707a;
L_10e5703f:;
  /* 10e5703f mov eax, dword ptr [0x10e82800] */
  EAX = (r32((uint32_t)(0x10e82800)));
  /* 10e57044 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57047 je 0x10e5706a */
  if (C.zf) goto L_10e5706a;
  /* 10e57049 push 0x10e7d864 */
  push32((uint32_t)(0x10e7d864u));
  /* 10e5704e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57050 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10e57055 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e5705a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5705c call 0x10e557a0 */
  push32(0x10e57061u); f_10e557a0();
  /* 10e57061 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57064 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57067 jne 0x10e5706a */
  if (!C.zf) goto L_10e5706a;
  /* 10e57069 int3  */
  x86_unimpl("int3 @ 0x10e57069");
L_10e5706a:;
  /* 10e5706a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5706c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5706e jne 0x10e5703f */
  if (!C.zf) goto L_10e5703f;
  /* 10e57070 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e57073 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e57075 mov dword ptr [0x10e82800], eax */
  w32((uint32_t)(0x10e82800), (EAX));
L_10e5707a:;
  /* 10e5707a cmp dword ptr [0x10e82800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57081 je 0x10e57091 */
  if (C.zf) goto L_10e57091;
  /* 10e57083 mov ecx, dword ptr [0x10e82800] */
  ECX = (r32((uint32_t)(0x10e82800)));
  /* 10e57089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5708c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e5708f jmp 0x10e57099 */
  goto L_10e57099;
L_10e57091:;
  /* 10e57091 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e57094 mov dword ptr [0x10e827f8], eax */
  w32((uint32_t)(0x10e827f8), (EAX));
L_10e57099:;
  /* 10e57099 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5709c mov edx, dword ptr [0x10e82800] */
  EDX = (r32((uint32_t)(0x10e82800)));
  /* 10e570a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e570a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e570a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e570ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e570b1 mov dword ptr [0x10e82800], ecx */
  w32((uint32_t)(0x10e82800), (ECX));
  /* 10e570b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e570ba:;
  /* 10e570ba pop edi */
  EDI = (pop32());
  /* 10e570bb pop esi */
  ESI = (pop32());
  /* 10e570bc pop ebx */
  EBX = (pop32());
  /* 10e570bd mov esp, ebp */
  ESP = (EBP);
  /* 10e570bf pop ebp */
  EBP = (pop32());
  /* 10e570c0 ret  */
  ESPCHK(0x10e56bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x10e570d0 (27 bytes, 13 insns) */
void f_10e570d0(void) {
  FTRACE(0x10e570d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e570d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e570d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e570d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e570d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e570d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e570d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e570dc push eax */
  push32((uint32_t)(EAX));
  /* 10e570dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e570e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e570e1 call 0x10e570f0 */
  push32(0x10e570e6u); f_10e570f0();
  /* 10e570e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e570e9 pop ebp */
  EBP = (pop32());
  /* 10e570ea ret  */
  ESPCHK(0x10e570d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x10e570f0 (64 bytes, 27 insns) */
void f_10e570f0(void) {
  FTRACE(0x10e570f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e570f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e570f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e570f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e570f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e570f6 call 0x10e5a0e0 */
  push32(0x10e570fbu); f_10e5a0e0();
  /* 10e570fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e570fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57100 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e57103 push eax */
  push32((uint32_t)(EAX));
  /* 10e57104 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e57107 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57108 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5710b push edx */
  push32((uint32_t)(EDX));
  /* 10e5710c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5710f push eax */
  push32((uint32_t)(EAX));
  /* 10e57110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57113 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57114 call 0x10e56bb0 */
  push32(0x10e57119u); f_10e56bb0();
  /* 10e57119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5711c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5711f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57121 call 0x10e5a180 */
  push32(0x10e57126u); f_10e5a180();
  /* 10e57126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5712c mov esp, ebp */
  ESP = (EBP);
  /* 10e5712e pop ebp */
  EBP = (pop32());
  /* 10e5712f ret  */
  ESPCHK(0x10e570f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x10e57130 (19 bytes, 9 insns) */
void f_10e57130(void) {
  FTRACE(0x10e57130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57130 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57131 mov ebp, esp */
  EBP = (ESP);
  /* 10e57133 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e57135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57138 push eax */
  push32((uint32_t)(EAX));
  /* 10e57139 call 0x10e57170 */
  push32(0x10e5713eu); f_10e57170();
  /* 10e5713e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57141 pop ebp */
  EBP = (pop32());
  /* 10e57142 ret  */
  ESPCHK(0x10e57130u, _esp0);
  ESP += 4; return;
}

/* FUN_10007150 @ 0x10e57150 (19 bytes, 9 insns) */
void f_10e57150(void) {
  FTRACE(0x10e57150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57150 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57151 mov ebp, esp */
  EBP = (ESP);
  /* 10e57153 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e57155 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57158 push eax */
  push32((uint32_t)(EAX));
  /* 10e57159 call 0x10e571a0 */
  push32(0x10e5715eu); f_10e571a0();
  /* 10e5715e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57161 pop ebp */
  EBP = (pop32());
  /* 10e57162 ret  */
  ESPCHK(0x10e57150u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x10e57170 (41 bytes, 16 insns) */
void f_10e57170(void) {
  FTRACE(0x10e57170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57170 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57171 mov ebp, esp */
  EBP = (ESP);
  /* 10e57173 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57175 call 0x10e5a0e0 */
  push32(0x10e5717au); f_10e5a0e0();
  /* 10e5717a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5717d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e57180 push eax */
  push32((uint32_t)(EAX));
  /* 10e57181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57184 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57185 call 0x10e571a0 */
  push32(0x10e5718au); f_10e571a0();
  /* 10e5718a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5718d push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5718f call 0x10e5a180 */
  push32(0x10e57194u); f_10e5a180();
  /* 10e57194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57197 pop ebp */
  EBP = (pop32());
  /* 10e57198 ret  */
  ESPCHK(0x10e57170u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a0 @ 0x10e571a0 (1004 bytes, 342 insns) */
void f_10e571a0(void) {
  FTRACE(0x10e571a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e571a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e571a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e571a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e571a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e571a5 push esi */
  push32((uint32_t)(ESI));
  /* 10e571a6 push edi */
  push32((uint32_t)(EDI));
  /* 10e571a7 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e571ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e571af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e571b1 je 0x10e571e3 */
  if (C.zf) goto L_10e571e3;
L_10e571b3:;
  /* 10e571b3 call 0x10e57880 */
  push32(0x10e571b8u); f_10e57880();
  /* 10e571b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e571ba jne 0x10e571dd */
  if (!C.zf) goto L_10e571dd;
  /* 10e571bc push 0x10e7d850 */
  push32((uint32_t)(0x10e7d850u));
  /* 10e571c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e571c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10e571c8 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e571cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e571cf call 0x10e557a0 */
  push32(0x10e571d4u); f_10e557a0();
  /* 10e571d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e571d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e571da jne 0x10e571dd */
  if (!C.zf) goto L_10e571dd;
  /* 10e571dc int3  */
  x86_unimpl("int3 @ 0x10e571dc");
L_10e571dd:;
  /* 10e571dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e571df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e571e1 jne 0x10e571b3 */
  if (!C.zf) goto L_10e571b3;
L_10e571e3:;
  /* 10e571e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e571e7 jne 0x10e571ee */
  if (!C.zf) goto L_10e571ee;
  /* 10e571e9 jmp 0x10e57585 */
  goto L_10e57585;
L_10e571ee:;
  /* 10e571ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e571f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e571f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e571f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e571f7 push edx */
  push32((uint32_t)(EDX));
  /* 10e571f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e571fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e571fd push eax */
  push32((uint32_t)(EAX));
  /* 10e571fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10e57200 call dword ptr [0x10e80ca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e80ca0))), 0x10e57206u);
  /* 10e57206 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5720b jne 0x10e57238 */
  if (!C.zf) goto L_10e57238;
L_10e5720d:;
  /* 10e5720d push 0x10e7db14 */
  push32((uint32_t)(0x10e7db14u));
  /* 10e57212 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e57217 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57219 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5721b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5721d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5721f call 0x10e557a0 */
  push32(0x10e57224u); f_10e557a0();
  /* 10e57224 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57227 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5722a jne 0x10e5722d */
  if (!C.zf) goto L_10e5722d;
  /* 10e5722c int3  */
  x86_unimpl("int3 @ 0x10e5722c");
L_10e5722d:;
  /* 10e5722d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5722f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e57231 jne 0x10e5720d */
  if (!C.zf) goto L_10e5720d;
  /* 10e57233 jmp 0x10e57585 */
  goto L_10e57585;
L_10e57238:;
  /* 10e57238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5723b push edx */
  push32((uint32_t)(EDX));
  /* 10e5723c call 0x10e57ce0 */
  push32(0x10e57241u); f_10e57ce0();
  /* 10e57241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57246 jne 0x10e57269 */
  if (!C.zf) goto L_10e57269;
  /* 10e57248 push 0x10e7d954 */
  push32((uint32_t)(0x10e7d954u));
  /* 10e5724d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5724f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10e57254 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e57259 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5725b call 0x10e557a0 */
  push32(0x10e57260u); f_10e557a0();
  /* 10e57260 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57263 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57266 jne 0x10e57269 */
  if (!C.zf) goto L_10e57269;
  /* 10e57268 int3  */
  x86_unimpl("int3 @ 0x10e57268");
L_10e57269:;
  /* 10e57269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5726b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5726d jne 0x10e57238 */
  if (!C.zf) goto L_10e57238;
  /* 10e5726f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57272 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57275 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e57278:;
  /* 10e57278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5727b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e5727e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57283 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57286 je 0x10e572cb */
  if (C.zf) goto L_10e572cb;
  /* 10e57288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5728b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5728f je 0x10e572cb */
  if (C.zf) goto L_10e572cb;
  /* 10e57291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57294 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57297 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5729c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5729f je 0x10e572cb */
  if (C.zf) goto L_10e572cb;
  /* 10e572a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e572a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e572a8 je 0x10e572cb */
  if (C.zf) goto L_10e572cb;
  /* 10e572aa push 0x10e7daec */
  push32((uint32_t)(0x10e7daecu));
  /* 10e572af push 0 */
  push32((uint32_t)(0x0u));
  /* 10e572b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10e572b6 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e572bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e572bd call 0x10e557a0 */
  push32(0x10e572c2u); f_10e557a0();
  /* 10e572c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e572c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e572c8 jne 0x10e572cb */
  if (!C.zf) goto L_10e572cb;
  /* 10e572ca int3  */
  x86_unimpl("int3 @ 0x10e572ca");
L_10e572cb:;
  /* 10e572cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e572cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e572cf jne 0x10e57278 */
  if (!C.zf) goto L_10e57278;
  /* 10e572d1 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e572d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e572d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e572db jne 0x10e573a6 */
  if (!C.zf) goto L_10e573a6;
  /* 10e572e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e572e3 mov cl, byte ptr [0x10e80a98] */
  CL = (r8((uint32_t)(0x10e80a98)));
  /* 10e572e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e572ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e572ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e572f0 push edx */
  push32((uint32_t)(EDX));
  /* 10e572f1 call 0x10e577f0 */
  push32(0x10e572f6u); f_10e577f0();
  /* 10e572f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e572f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e572fb jne 0x10e57340 */
  if (!C.zf) goto L_10e57340;
L_10e572fd:;
  /* 10e572fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57300 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57303 push eax */
  push32((uint32_t)(EAX));
  /* 10e57304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57307 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e5730a push edx */
  push32((uint32_t)(EDX));
  /* 10e5730b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5730e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e57311 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e57317 mov edx, dword ptr [ecx*4 + 0x10e80a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a9c)));
  /* 10e5731e push edx */
  push32((uint32_t)(EDX));
  /* 10e5731f push 0x10e7dac0 */
  push32((uint32_t)(0x10e7dac0u));
  /* 10e57324 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57326 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57328 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5732a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5732c call 0x10e557a0 */
  push32(0x10e57331u); f_10e557a0();
  /* 10e57331 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57334 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57337 jne 0x10e5733a */
  if (!C.zf) goto L_10e5733a;
  /* 10e57339 int3  */
  x86_unimpl("int3 @ 0x10e57339");
L_10e5733a:;
  /* 10e5733a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5733c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5733e jne 0x10e572fd */
  if (!C.zf) goto L_10e572fd;
L_10e57340:;
  /* 10e57340 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e57342 mov cl, byte ptr [0x10e80a98] */
  CL = (r8((uint32_t)(0x10e80a98)));
  /* 10e57348 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57349 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5734c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5734f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57352 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10e57356 push edx */
  push32((uint32_t)(EDX));
  /* 10e57357 call 0x10e577f0 */
  push32(0x10e5735cu); f_10e577f0();
  /* 10e5735c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5735f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57361 jne 0x10e573a6 */
  if (!C.zf) goto L_10e573a6;
L_10e57363:;
  /* 10e57363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57366 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57369 push eax */
  push32((uint32_t)(EAX));
  /* 10e5736a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5736d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e57370 push edx */
  push32((uint32_t)(EDX));
  /* 10e57371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57374 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e57377 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5737d mov edx, dword ptr [ecx*4 + 0x10e80a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a9c)));
  /* 10e57384 push edx */
  push32((uint32_t)(EDX));
  /* 10e57385 push 0x10e7da94 */
  push32((uint32_t)(0x10e7da94u));
  /* 10e5738a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5738c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5738e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57390 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e57392 call 0x10e557a0 */
  push32(0x10e57397u); f_10e557a0();
  /* 10e57397 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5739a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5739d jne 0x10e573a0 */
  if (!C.zf) goto L_10e573a0;
  /* 10e5739f int3  */
  x86_unimpl("int3 @ 0x10e5739f");
L_10e573a0:;
  /* 10e573a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e573a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e573a4 jne 0x10e57363 */
  if (!C.zf) goto L_10e57363;
L_10e573a6:;
  /* 10e573a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e573a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e573ad jne 0x10e5741b */
  if (!C.zf) goto L_10e5741b;
L_10e573af:;
  /* 10e573af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e573b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e573b9 jne 0x10e573c4 */
  if (!C.zf) goto L_10e573c4;
  /* 10e573bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e573be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e573c2 je 0x10e573e5 */
  if (C.zf) goto L_10e573e5;
L_10e573c4:;
  /* 10e573c4 push 0x10e7da54 */
  push32((uint32_t)(0x10e7da54u));
  /* 10e573c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e573cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10e573d0 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e573d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e573d7 call 0x10e557a0 */
  push32(0x10e573dcu); f_10e557a0();
  /* 10e573dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e573df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e573e2 jne 0x10e573e5 */
  if (!C.zf) goto L_10e573e5;
  /* 10e573e4 int3  */
  x86_unimpl("int3 @ 0x10e573e4");
L_10e573e5:;
  /* 10e573e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e573e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e573e9 jne 0x10e573af */
  if (!C.zf) goto L_10e573af;
  /* 10e573eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e573ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e573f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e573f4 push eax */
  push32((uint32_t)(EAX));
  /* 10e573f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e573f7 mov cl, byte ptr [0x10e80a99] */
  CL = (r8((uint32_t)(0x10e80a99)));
  /* 10e573fd push ecx */
  push32((uint32_t)(ECX));
  /* 10e573fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57401 push edx */
  push32((uint32_t)(EDX));
  /* 10e57402 call 0x10e5a450 */
  push32(0x10e57407u); f_10e5a450();
  /* 10e57407 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5740a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5740d push eax */
  push32((uint32_t)(EAX));
  /* 10e5740e call 0x10e5a850 */
  push32(0x10e57413u); f_10e5a850();
  /* 10e57413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57416 jmp 0x10e57585 */
  goto L_10e57585;
L_10e5741b:;
  /* 10e5741b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5741e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57422 jne 0x10e57431 */
  if (!C.zf) goto L_10e57431;
  /* 10e57424 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57428 jne 0x10e57431 */
  if (!C.zf) goto L_10e57431;
  /* 10e5742a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10e57431:;
  /* 10e57431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57434 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57437 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5743a je 0x10e5745d */
  if (C.zf) goto L_10e5745d;
  /* 10e5743c push 0x10e7da34 */
  push32((uint32_t)(0x10e7da34u));
  /* 10e57441 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57443 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10e57448 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e5744d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5744f call 0x10e557a0 */
  push32(0x10e57454u); f_10e557a0();
  /* 10e57454 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57457 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5745a jne 0x10e5745d */
  if (!C.zf) goto L_10e5745d;
  /* 10e5745c int3  */
  x86_unimpl("int3 @ 0x10e5745c");
L_10e5745d:;
  /* 10e5745d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5745f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e57461 jne 0x10e57431 */
  if (!C.zf) goto L_10e57431;
  /* 10e57463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57466 mov eax, dword ptr [0x10e82804] */
  EAX = (r32((uint32_t)(0x10e82804)));
  /* 10e5746b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5746e mov dword ptr [0x10e82804], eax */
  w32((uint32_t)(0x10e82804), (EAX));
  /* 10e57473 mov ecx, dword ptr [0x10e80a8c] */
  ECX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e57479 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5747c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5747e jne 0x10e5755c */
  if (!C.zf) goto L_10e5755c;
  /* 10e57484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57487 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5748a je 0x10e5749c */
  if (C.zf) goto L_10e5749c;
  /* 10e5748c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5748f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e57491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57494 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e57497 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e5749a jmp 0x10e574da */
  goto L_10e574da;
L_10e5749c:;
  /* 10e5749c mov ecx, dword ptr [0x10e827f8] */
  ECX = (r32((uint32_t)(0x10e827f8)));
  /* 10e574a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e574a5 je 0x10e574c8 */
  if (C.zf) goto L_10e574c8;
  /* 10e574a7 push 0x10e7da1c */
  push32((uint32_t)(0x10e7da1cu));
  /* 10e574ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10e574ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10e574b3 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e574b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e574ba call 0x10e557a0 */
  push32(0x10e574bfu); f_10e557a0();
  /* 10e574bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e574c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e574c5 jne 0x10e574c8 */
  if (!C.zf) goto L_10e574c8;
  /* 10e574c7 int3  */
  x86_unimpl("int3 @ 0x10e574c7");
L_10e574c8:;
  /* 10e574c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e574ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e574cc jne 0x10e5749c */
  if (!C.zf) goto L_10e5749c;
  /* 10e574ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e574d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e574d4 mov dword ptr [0x10e827f8], ecx */
  w32((uint32_t)(0x10e827f8), (ECX));
L_10e574da:;
  /* 10e574da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e574dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e574e1 je 0x10e574f2 */
  if (C.zf) goto L_10e574f2;
  /* 10e574e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e574e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e574e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e574ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e574ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e574f0 jmp 0x10e5752f */
  goto L_10e5752f;
L_10e574f2:;
  /* 10e574f2 mov ecx, dword ptr [0x10e82800] */
  ECX = (r32((uint32_t)(0x10e82800)));
  /* 10e574f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e574fb je 0x10e5751e */
  if (C.zf) goto L_10e5751e;
  /* 10e574fd push 0x10e7da04 */
  push32((uint32_t)(0x10e7da04u));
  /* 10e57502 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57504 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10e57509 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e5750e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e57510 call 0x10e557a0 */
  push32(0x10e57515u); f_10e557a0();
  /* 10e57515 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57518 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5751b jne 0x10e5751e */
  if (!C.zf) goto L_10e5751e;
  /* 10e5751d int3  */
  x86_unimpl("int3 @ 0x10e5751d");
L_10e5751e:;
  /* 10e5751e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e57520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e57522 jne 0x10e574f2 */
  if (!C.zf) goto L_10e574f2;
  /* 10e57524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57527 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e57529 mov dword ptr [0x10e82800], ecx */
  w32((uint32_t)(0x10e82800), (ECX));
L_10e5752f:;
  /* 10e5752f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57532 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e57535 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57538 push eax */
  push32((uint32_t)(EAX));
  /* 10e57539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5753b mov cl, byte ptr [0x10e80a99] */
  CL = (r8((uint32_t)(0x10e80a99)));
  /* 10e57541 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57545 push edx */
  push32((uint32_t)(EDX));
  /* 10e57546 call 0x10e5a450 */
  push32(0x10e5754bu); f_10e5a450();
  /* 10e5754b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5754e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57551 push eax */
  push32((uint32_t)(EAX));
  /* 10e57552 call 0x10e5a850 */
  push32(0x10e57557u); f_10e5a850();
  /* 10e57557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5755a jmp 0x10e57585 */
  goto L_10e57585;
L_10e5755c:;
  /* 10e5755c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5755f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10e57566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57569 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5756c push eax */
  push32((uint32_t)(EAX));
  /* 10e5756d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5756f mov cl, byte ptr [0x10e80a99] */
  CL = (r8((uint32_t)(0x10e80a99)));
  /* 10e57575 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57579 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5757c push edx */
  push32((uint32_t)(EDX));
  /* 10e5757d call 0x10e5a450 */
  push32(0x10e57582u); f_10e5a450();
  /* 10e57582 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e57585:;
  /* 10e57585 pop edi */
  EDI = (pop32());
  /* 10e57586 pop esi */
  ESI = (pop32());
  /* 10e57587 pop ebx */
  EBX = (pop32());
  /* 10e57588 mov esp, ebp */
  ESP = (EBP);
  /* 10e5758a pop ebp */
  EBP = (pop32());
  /* 10e5758b ret  */
  ESPCHK(0x10e571a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x10e57590 (19 bytes, 9 insns) */
void f_10e57590(void) {
  FTRACE(0x10e57590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57591 mov ebp, esp */
  EBP = (ESP);
  /* 10e57593 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e57595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57598 push eax */
  push32((uint32_t)(EAX));
  /* 10e57599 call 0x10e575b0 */
  push32(0x10e5759eu); f_10e575b0();
  /* 10e5759e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e575a1 pop ebp */
  EBP = (pop32());
  /* 10e575a2 ret  */
  ESPCHK(0x10e57590u, _esp0);
  ESP += 4; return;
}

/* FUN_100075b0 @ 0x10e575b0 (342 bytes, 119 insns) */
void f_10e575b0(void) {
  FTRACE(0x10e575b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e575b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e575b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e575b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e575b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e575b7 push esi */
  push32((uint32_t)(ESI));
  /* 10e575b8 push edi */
  push32((uint32_t)(EDI));
  /* 10e575b9 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e575be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e575c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e575c3 je 0x10e575f5 */
  if (C.zf) goto L_10e575f5;
L_10e575c5:;
  /* 10e575c5 call 0x10e57880 */
  push32(0x10e575cau); f_10e57880();
  /* 10e575ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e575cc jne 0x10e575ef */
  if (!C.zf) goto L_10e575ef;
  /* 10e575ce push 0x10e7d850 */
  push32((uint32_t)(0x10e7d850u));
  /* 10e575d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e575d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10e575da push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e575df push 2 */
  push32((uint32_t)(0x2u));
  /* 10e575e1 call 0x10e557a0 */
  push32(0x10e575e6u); f_10e557a0();
  /* 10e575e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e575e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e575ec jne 0x10e575ef */
  if (!C.zf) goto L_10e575ef;
  /* 10e575ee int3  */
  x86_unimpl("int3 @ 0x10e575ee");
L_10e575ef:;
  /* 10e575ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e575f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e575f3 jne 0x10e575c5 */
  if (!C.zf) goto L_10e575c5;
L_10e575f5:;
  /* 10e575f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e575f7 call 0x10e5a0e0 */
  push32(0x10e575fcu); f_10e5a0e0();
  /* 10e575fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e575ff:;
  /* 10e575ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57602 push edx */
  push32((uint32_t)(EDX));
  /* 10e57603 call 0x10e57ce0 */
  push32(0x10e57608u); f_10e57ce0();
  /* 10e57608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5760b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5760d jne 0x10e57630 */
  if (!C.zf) goto L_10e57630;
  /* 10e5760f push 0x10e7d954 */
  push32((uint32_t)(0x10e7d954u));
  /* 10e57614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57616 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10e5761b push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e57620 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e57622 call 0x10e557a0 */
  push32(0x10e57627u); f_10e557a0();
  /* 10e57627 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5762a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5762d jne 0x10e57630 */
  if (!C.zf) goto L_10e57630;
  /* 10e5762f int3  */
  x86_unimpl("int3 @ 0x10e5762f");
L_10e57630:;
  /* 10e57630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57634 jne 0x10e575ff */
  if (!C.zf) goto L_10e575ff;
  /* 10e57636 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57639 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5763c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e5763f:;
  /* 10e5763f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57642 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57645 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5764a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5764d je 0x10e57692 */
  if (C.zf) goto L_10e57692;
  /* 10e5764f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57652 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57656 je 0x10e57692 */
  if (C.zf) goto L_10e57692;
  /* 10e57658 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5765b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e5765e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57663 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57666 je 0x10e57692 */
  if (C.zf) goto L_10e57692;
  /* 10e57668 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5766b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5766f je 0x10e57692 */
  if (C.zf) goto L_10e57692;
  /* 10e57671 push 0x10e7daec */
  push32((uint32_t)(0x10e7daecu));
  /* 10e57676 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57678 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10e5767d push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e57682 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e57684 call 0x10e557a0 */
  push32(0x10e57689u); f_10e557a0();
  /* 10e57689 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5768c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5768f jne 0x10e57692 */
  if (!C.zf) goto L_10e57692;
  /* 10e57691 int3  */
  x86_unimpl("int3 @ 0x10e57691");
L_10e57692:;
  /* 10e57692 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e57694 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e57696 jne 0x10e5763f */
  if (!C.zf) goto L_10e5763f;
  /* 10e57698 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5769b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5769f jne 0x10e576ae */
  if (!C.zf) goto L_10e576ae;
  /* 10e576a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e576a5 jne 0x10e576ae */
  if (!C.zf) goto L_10e576ae;
  /* 10e576a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10e576ae:;
  /* 10e576ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e576b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e576b5 je 0x10e576e9 */
  if (C.zf) goto L_10e576e9;
L_10e576b7:;
  /* 10e576b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e576ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e576bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e576c0 je 0x10e576e3 */
  if (C.zf) goto L_10e576e3;
  /* 10e576c2 push 0x10e7da34 */
  push32((uint32_t)(0x10e7da34u));
  /* 10e576c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e576c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10e576ce push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e576d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e576d5 call 0x10e557a0 */
  push32(0x10e576dau); f_10e557a0();
  /* 10e576da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e576dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e576e0 jne 0x10e576e3 */
  if (!C.zf) goto L_10e576e3;
  /* 10e576e2 int3  */
  x86_unimpl("int3 @ 0x10e576e2");
L_10e576e3:;
  /* 10e576e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e576e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e576e7 jne 0x10e576b7 */
  if (!C.zf) goto L_10e576b7;
L_10e576e9:;
  /* 10e576e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e576ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e576ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e576f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e576f4 call 0x10e5a180 */
  push32(0x10e576f9u); f_10e5a180();
  /* 10e576f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e576fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e576ff pop edi */
  EDI = (pop32());
  /* 10e57700 pop esi */
  ESI = (pop32());
  /* 10e57701 pop ebx */
  EBX = (pop32());
  /* 10e57702 mov esp, ebp */
  ESP = (EBP);
  /* 10e57704 pop ebp */
  EBP = (pop32());
  /* 10e57705 ret  */
  ESPCHK(0x10e575b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x10e57710 (28 bytes, 11 insns) */
void f_10e57710(void) {
  FTRACE(0x10e57710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57710 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57711 mov ebp, esp */
  EBP = (ESP);
  /* 10e57713 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57714 mov eax, dword ptr [0x10e80a94] */
  EAX = (r32((uint32_t)(0x10e80a94)));
  /* 10e57719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5771c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5771f mov dword ptr [0x10e80a94], ecx */
  w32((uint32_t)(0x10e80a94), (ECX));
  /* 10e57725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57728 mov esp, ebp */
  ESP = (EBP);
  /* 10e5772a pop ebp */
  EBP = (pop32());
  /* 10e5772b ret  */
  ESPCHK(0x10e57710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x10e57730 (157 bytes, 59 insns) */
void f_10e57730(void) {
  FTRACE(0x10e57730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57730 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57731 mov ebp, esp */
  EBP = (ESP);
  /* 10e57733 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57734 push ebx */
  push32((uint32_t)(EBX));
  /* 10e57735 push esi */
  push32((uint32_t)(ESI));
  /* 10e57736 push edi */
  push32((uint32_t)(EDI));
  /* 10e57737 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57739 call 0x10e5a0e0 */
  push32(0x10e5773eu); f_10e5a0e0();
  /* 10e5773e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57744 push eax */
  push32((uint32_t)(EAX));
  /* 10e57745 call 0x10e57ce0 */
  push32(0x10e5774au); f_10e57ce0();
  /* 10e5774a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5774d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5774f je 0x10e577bc */
  if (C.zf) goto L_10e577bc;
  /* 10e57751 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57754 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57757 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5775a:;
  /* 10e5775a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5775d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57760 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57765 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57768 je 0x10e577ad */
  if (C.zf) goto L_10e577ad;
  /* 10e5776a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5776d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57771 je 0x10e577ad */
  if (C.zf) goto L_10e577ad;
  /* 10e57773 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57776 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57779 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5777e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57781 je 0x10e577ad */
  if (C.zf) goto L_10e577ad;
  /* 10e57783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57786 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5778a je 0x10e577ad */
  if (C.zf) goto L_10e577ad;
  /* 10e5778c push 0x10e7daec */
  push32((uint32_t)(0x10e7daecu));
  /* 10e57791 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57793 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10e57798 push 0x10e7d844 */
  push32((uint32_t)(0x10e7d844u));
  /* 10e5779d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5779f call 0x10e557a0 */
  push32(0x10e577a4u); f_10e557a0();
  /* 10e577a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e577a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e577aa jne 0x10e577ad */
  if (!C.zf) goto L_10e577ad;
  /* 10e577ac int3  */
  x86_unimpl("int3 @ 0x10e577ac");
L_10e577ad:;
  /* 10e577ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e577af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e577b1 jne 0x10e5775a */
  if (!C.zf) goto L_10e5775a;
  /* 10e577b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e577b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e577b9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10e577bc:;
  /* 10e577bc push 9 */
  push32((uint32_t)(0x9u));
  /* 10e577be call 0x10e5a180 */
  push32(0x10e577c3u); f_10e5a180();
  /* 10e577c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e577c6 pop edi */
  EDI = (pop32());
  /* 10e577c7 pop esi */
  ESI = (pop32());
  /* 10e577c8 pop ebx */
  EBX = (pop32());
  /* 10e577c9 mov esp, ebp */
  ESP = (EBP);
  /* 10e577cb pop ebp */
  EBP = (pop32());
  /* 10e577cc ret  */
  ESPCHK(0x10e57730u, _esp0);
  ESP += 4; return;
}

/* FUN_100077d0 @ 0x10e577d0 (28 bytes, 11 insns) */
void f_10e577d0(void) {
  FTRACE(0x10e577d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e577d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e577d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e577d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e577d4 mov eax, dword ptr [0x10e80ca0] */
  EAX = (r32((uint32_t)(0x10e80ca0)));
  /* 10e577d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e577dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e577df mov dword ptr [0x10e80ca0], ecx */
  w32((uint32_t)(0x10e80ca0), (ECX));
  /* 10e577e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e577e8 mov esp, ebp */
  ESP = (EBP);
  /* 10e577ea pop ebp */
  EBP = (pop32());
  /* 10e577eb ret  */
  ESPCHK(0x10e577d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x10e577f0 (136 bytes, 55 insns) */
void f_10e577f0(void) {
  FTRACE(0x10e577f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e577f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e577f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e577f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e577f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e577f5 push esi */
  push32((uint32_t)(ESI));
  /* 10e577f6 push edi */
  push32((uint32_t)(EDI));
  /* 10e577f7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10e577fe:;
  /* 10e577fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e57801 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e57804 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57807 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e5780a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5780c je 0x10e5786e */
  if (C.zf) goto L_10e5786e;
  /* 10e5780e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57811 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57813 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e57815 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e57818 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5781e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57821 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57824 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e57827 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57829 je 0x10e5786c */
  if (C.zf) goto L_10e5786c;
L_10e5782b:;
  /* 10e5782b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5782e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57833 push eax */
  push32((uint32_t)(EAX));
  /* 10e57834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57837 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e57839 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10e5783c push edx */
  push32((uint32_t)(EDX));
  /* 10e5783d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57840 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57843 push eax */
  push32((uint32_t)(EAX));
  /* 10e57844 push 0x10e7db30 */
  push32((uint32_t)(0x10e7db30u));
  /* 10e57849 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5784b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5784d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5784f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57851 call 0x10e557a0 */
  push32(0x10e57856u); f_10e557a0();
  /* 10e57856 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57859 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5785c jne 0x10e5785f */
  if (!C.zf) goto L_10e5785f;
  /* 10e5785e int3  */
  x86_unimpl("int3 @ 0x10e5785e");
L_10e5785f:;
  /* 10e5785f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e57861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e57863 jne 0x10e5782b */
  if (!C.zf) goto L_10e5782b;
  /* 10e57865 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e5786c:;
  /* 10e5786c jmp 0x10e577fe */
  goto L_10e577fe;
L_10e5786e:;
  /* 10e5786e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57871 pop edi */
  EDI = (pop32());
  /* 10e57872 pop esi */
  ESI = (pop32());
  /* 10e57873 pop ebx */
  EBX = (pop32());
  /* 10e57874 mov esp, ebp */
  ESP = (EBP);
  /* 10e57876 pop ebp */
  EBP = (pop32());
  /* 10e57877 ret  */
  ESPCHK(0x10e577f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x10e57880 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10e57880(void) {
  FTRACE(0x10e57880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57880 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57881 mov ebp, esp */
  EBP = (ESP);
  /* 10e57883 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57886 push ebx */
  push32((uint32_t)(EBX));
  /* 10e57887 push esi */
  push32((uint32_t)(ESI));
  /* 10e57888 push edi */
  push32((uint32_t)(EDI));
  /* 10e57889 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e57890 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e57895 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e57898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5789a jne 0x10e578a6 */
  if (!C.zf) goto L_10e578a6;
  /* 10e5789c mov eax, 1 */
  EAX = (0x1u);
  /* 10e578a1 jmp 0x10e57bd8 */
  goto L_10e57bd8;
L_10e578a6:;
  /* 10e578a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e578a8 call 0x10e5a0e0 */
  push32(0x10e578adu); f_10e5a0e0();
  /* 10e578ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e578b0 call 0x10e5a8c0 */
  push32(0x10e578b5u); f_10e5a8c0();
  /* 10e578b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e578b8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e578bc je 0x10e579c9 */
  if (C.zf) goto L_10e579c9;
  /* 10e578c2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e578c6 je 0x10e579c9 */
  if (C.zf) goto L_10e579c9;
  /* 10e578cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e578cf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e578d2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e578d5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e578d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e578db cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e578df ja 0x10e57992 */
  if ((!C.cf&&!C.zf)) goto L_10e57992;
  /* 10e578e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e578e8 jmp dword ptr [eax*4 + 0x10e57bdf] */
  switch (EAX) {
    case 0: goto L_10e5796a;
    case 1: goto L_10e57942;
    case 2: goto L_10e5791a;
    case 3: goto L_10e578ef;
    default: x86_unimpl("switch@0x10e578e8 out of table"); return;
  }
L_10e578ef:;
  /* 10e578ef push 0x10e7dc84 */
  push32((uint32_t)(0x10e7dc84u));
  /* 10e578f4 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e578f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e578fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e578fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e578ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57901 call 0x10e557a0 */
  push32(0x10e57906u); f_10e557a0();
  /* 10e57906 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57909 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5790c jne 0x10e5790f */
  if (!C.zf) goto L_10e5790f;
  /* 10e5790e int3  */
  x86_unimpl("int3 @ 0x10e5790e");
L_10e5790f:;
  /* 10e5790f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e57911 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e57913 jne 0x10e578ef */
  if (!C.zf) goto L_10e578ef;
  /* 10e57915 jmp 0x10e579b8 */
  goto L_10e579b8;
L_10e5791a:;
  /* 10e5791a push 0x10e7dc60 */
  push32((uint32_t)(0x10e7dc60u));
  /* 10e5791f push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e57924 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57926 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57928 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5792a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5792c call 0x10e557a0 */
  push32(0x10e57931u); f_10e557a0();
  /* 10e57931 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57937 jne 0x10e5793a */
  if (!C.zf) goto L_10e5793a;
  /* 10e57939 int3  */
  x86_unimpl("int3 @ 0x10e57939");
L_10e5793a:;
  /* 10e5793a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5793c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5793e jne 0x10e5791a */
  if (!C.zf) goto L_10e5791a;
  /* 10e57940 jmp 0x10e579b8 */
  goto L_10e579b8;
L_10e57942:;
  /* 10e57942 push 0x10e7dc3c */
  push32((uint32_t)(0x10e7dc3cu));
  /* 10e57947 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e5794c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5794e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57950 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57952 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57954 call 0x10e557a0 */
  push32(0x10e57959u); f_10e557a0();
  /* 10e57959 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5795c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5795f jne 0x10e57962 */
  if (!C.zf) goto L_10e57962;
  /* 10e57961 int3  */
  x86_unimpl("int3 @ 0x10e57961");
L_10e57962:;
  /* 10e57962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57966 jne 0x10e57942 */
  if (!C.zf) goto L_10e57942;
  /* 10e57968 jmp 0x10e579b8 */
  goto L_10e579b8;
L_10e5796a:;
  /* 10e5796a push 0x10e7dc18 */
  push32((uint32_t)(0x10e7dc18u));
  /* 10e5796f push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e57974 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57978 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5797a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5797c call 0x10e557a0 */
  push32(0x10e57981u); f_10e557a0();
  /* 10e57981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57987 jne 0x10e5798a */
  if (!C.zf) goto L_10e5798a;
  /* 10e57989 int3  */
  x86_unimpl("int3 @ 0x10e57989");
L_10e5798a:;
  /* 10e5798a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5798c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5798e jne 0x10e5796a */
  if (!C.zf) goto L_10e5796a;
  /* 10e57990 jmp 0x10e579b8 */
  goto L_10e579b8;
L_10e57992:;
  /* 10e57992 push 0x10e7dbec */
  push32((uint32_t)(0x10e7dbecu));
  /* 10e57997 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e5799c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5799e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e579a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e579a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e579a4 call 0x10e557a0 */
  push32(0x10e579a9u); f_10e557a0();
  /* 10e579a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e579ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e579af jne 0x10e579b2 */
  if (!C.zf) goto L_10e579b2;
  /* 10e579b1 int3  */
  x86_unimpl("int3 @ 0x10e579b1");
L_10e579b2:;
  /* 10e579b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e579b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e579b6 jne 0x10e57992 */
  if (!C.zf) goto L_10e57992;
L_10e579b8:;
  /* 10e579b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e579ba call 0x10e5a180 */
  push32(0x10e579bfu); f_10e5a180();
  /* 10e579bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e579c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e579c4 jmp 0x10e57bd8 */
  goto L_10e57bd8;
L_10e579c9:;
  /* 10e579c9 mov eax, dword ptr [0x10e82800] */
  EAX = (r32((uint32_t)(0x10e82800)));
  /* 10e579ce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e579d1 jmp 0x10e579db */
  goto L_10e579db;
L_10e579d3:;
  /* 10e579d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e579d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e579d8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e579db:;
  /* 10e579db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e579df je 0x10e57bcb */
  if (C.zf) goto L_10e57bcb;
  /* 10e579e5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e579ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e579ef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e579f2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e579f8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e579fb je 0x10e57a20 */
  if (C.zf) goto L_10e57a20;
  /* 10e579fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a00 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57a04 je 0x10e57a20 */
  if (C.zf) goto L_10e57a20;
  /* 10e57a06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a09 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e57a0c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e57a12 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57a15 je 0x10e57a20 */
  if (C.zf) goto L_10e57a20;
  /* 10e57a17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a1a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57a1e jne 0x10e57a38 */
  if (!C.zf) goto L_10e57a38;
L_10e57a20:;
  /* 10e57a20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a23 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e57a26 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e57a2c mov edx, dword ptr [ecx*4 + 0x10e80a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a9c)));
  /* 10e57a33 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e57a36 jmp 0x10e57a3f */
  goto L_10e57a3f;
L_10e57a38:;
  /* 10e57a38 mov dword ptr [ebp - 0x14], 0x10e7dbe4 */
  w32((uint32_t)(EBP + -0x14), (0x10e7dbe4u));
L_10e57a3f:;
  /* 10e57a3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10e57a41 mov al, byte ptr [0x10e80a98] */
  AL = (r8((uint32_t)(0x10e80a98)));
  /* 10e57a46 push eax */
  push32((uint32_t)(EAX));
  /* 10e57a47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a4a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57a4d push ecx */
  push32((uint32_t)(ECX));
  /* 10e57a4e call 0x10e577f0 */
  push32(0x10e57a53u); f_10e577f0();
  /* 10e57a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57a58 jne 0x10e57a94 */
  if (!C.zf) goto L_10e57a94;
L_10e57a5a:;
  /* 10e57a5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a5d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57a60 push edx */
  push32((uint32_t)(EDX));
  /* 10e57a61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57a64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e57a67 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57a68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e57a6b push edx */
  push32((uint32_t)(EDX));
  /* 10e57a6c push 0x10e7dac0 */
  push32((uint32_t)(0x10e7dac0u));
  /* 10e57a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57a79 call 0x10e557a0 */
  push32(0x10e57a7eu); f_10e557a0();
  /* 10e57a7e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57a84 jne 0x10e57a87 */
  if (!C.zf) goto L_10e57a87;
  /* 10e57a86 int3  */
  x86_unimpl("int3 @ 0x10e57a86");
L_10e57a87:;
  /* 10e57a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57a8b jne 0x10e57a5a */
  if (!C.zf) goto L_10e57a5a;
  /* 10e57a8d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e57a94:;
  /* 10e57a94 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e57a96 mov cl, byte ptr [0x10e80a98] */
  CL = (r8((uint32_t)(0x10e80a98)));
  /* 10e57a9c push ecx */
  push32((uint32_t)(ECX));
  /* 10e57a9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57aa0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e57aa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57aa6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10e57aaa push edx */
  push32((uint32_t)(EDX));
  /* 10e57aab call 0x10e577f0 */
  push32(0x10e57ab0u); f_10e577f0();
  /* 10e57ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57ab5 jne 0x10e57af1 */
  if (!C.zf) goto L_10e57af1;
L_10e57ab7:;
  /* 10e57ab7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57aba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57abd push eax */
  push32((uint32_t)(EAX));
  /* 10e57abe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57ac1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e57ac4 push edx */
  push32((uint32_t)(EDX));
  /* 10e57ac5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e57ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10e57ac9 push 0x10e7da94 */
  push32((uint32_t)(0x10e7da94u));
  /* 10e57ace push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ad6 call 0x10e557a0 */
  push32(0x10e57adbu); f_10e557a0();
  /* 10e57adb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57ade cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57ae1 jne 0x10e57ae4 */
  if (!C.zf) goto L_10e57ae4;
  /* 10e57ae3 int3  */
  x86_unimpl("int3 @ 0x10e57ae3");
L_10e57ae4:;
  /* 10e57ae4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e57ae6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e57ae8 jne 0x10e57ab7 */
  if (!C.zf) goto L_10e57ab7;
  /* 10e57aea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e57af1:;
  /* 10e57af1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57af4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57af8 jne 0x10e57b4a */
  if (!C.zf) goto L_10e57b4a;
  /* 10e57afa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57afd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e57b00 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57b01 mov dl, byte ptr [0x10e80a99] */
  DL = (r8((uint32_t)(0x10e80a99)));
  /* 10e57b07 push edx */
  push32((uint32_t)(EDX));
  /* 10e57b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57b0e push eax */
  push32((uint32_t)(EAX));
  /* 10e57b0f call 0x10e577f0 */
  push32(0x10e57b14u); f_10e577f0();
  /* 10e57b14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57b19 jne 0x10e57b4a */
  if (!C.zf) goto L_10e57b4a;
L_10e57b1b:;
  /* 10e57b1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57b21 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57b22 push 0x10e7dbb8 */
  push32((uint32_t)(0x10e7dbb8u));
  /* 10e57b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b2f call 0x10e557a0 */
  push32(0x10e57b34u); f_10e557a0();
  /* 10e57b34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57b37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57b3a jne 0x10e57b3d */
  if (!C.zf) goto L_10e57b3d;
  /* 10e57b3c int3  */
  x86_unimpl("int3 @ 0x10e57b3c");
L_10e57b3d:;
  /* 10e57b3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e57b3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e57b41 jne 0x10e57b1b */
  if (!C.zf) goto L_10e57b1b;
  /* 10e57b43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e57b4a:;
  /* 10e57b4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57b4e jne 0x10e57bc6 */
  if (!C.zf) goto L_10e57bc6;
  /* 10e57b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57b57 je 0x10e57b8c */
  if (C.zf) goto L_10e57b8c;
L_10e57b59:;
  /* 10e57b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e57b5f push edx */
  push32((uint32_t)(EDX));
  /* 10e57b60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e57b66 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57b67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e57b6a push edx */
  push32((uint32_t)(EDX));
  /* 10e57b6b push 0x10e7db98 */
  push32((uint32_t)(0x10e7db98u));
  /* 10e57b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57b78 call 0x10e557a0 */
  push32(0x10e57b7du); f_10e557a0();
  /* 10e57b7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57b80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57b83 jne 0x10e57b86 */
  if (!C.zf) goto L_10e57b86;
  /* 10e57b85 int3  */
  x86_unimpl("int3 @ 0x10e57b85");
L_10e57b86:;
  /* 10e57b86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57b8a jne 0x10e57b59 */
  if (!C.zf) goto L_10e57b59;
L_10e57b8c:;
  /* 10e57b8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e57b92 push edx */
  push32((uint32_t)(EDX));
  /* 10e57b93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57b96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57b99 push eax */
  push32((uint32_t)(EAX));
  /* 10e57b9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e57b9d push ecx */
  push32((uint32_t)(ECX));
  /* 10e57b9e push 0x10e7db6c */
  push32((uint32_t)(0x10e7db6cu));
  /* 10e57ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57bab call 0x10e557a0 */
  push32(0x10e57bb0u); f_10e557a0();
  /* 10e57bb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57bb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57bb6 jne 0x10e57bb9 */
  if (!C.zf) goto L_10e57bb9;
  /* 10e57bb8 int3  */
  x86_unimpl("int3 @ 0x10e57bb8");
L_10e57bb9:;
  /* 10e57bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e57bbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e57bbd jne 0x10e57b8c */
  if (!C.zf) goto L_10e57b8c;
  /* 10e57bbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e57bc6:;
  /* 10e57bc6 jmp 0x10e579d3 */
  goto L_10e579d3;
L_10e57bcb:;
  /* 10e57bcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57bcd call 0x10e5a180 */
  push32(0x10e57bd2u); f_10e5a180();
  /* 10e57bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e57bd8:;
  /* 10e57bd8 pop edi */
  EDI = (pop32());
  /* 10e57bd9 pop esi */
  ESI = (pop32());
  /* 10e57bda pop ebx */
  EBX = (pop32());
  /* 10e57bdb mov esp, ebp */
  ESP = (EBP);
  /* 10e57bdd pop ebp */
  EBP = (pop32());
  /* 10e57bde ret  */
  ESPCHK(0x10e57880u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x10e57bf0 (34 bytes, 13 insns) */
void f_10e57bf0(void) {
  FTRACE(0x10e57bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10e57bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57bf4 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e57bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e57bfc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57c00 je 0x10e57c0b */
  if (C.zf) goto L_10e57c0b;
  /* 10e57c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57c05 mov dword ptr [0x10e80a8c], ecx */
  w32((uint32_t)(0x10e80a8c), (ECX));
L_10e57c0b:;
  /* 10e57c0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57c0e mov esp, ebp */
  ESP = (EBP);
  /* 10e57c10 pop ebp */
  EBP = (pop32());
  /* 10e57c11 ret  */
  ESPCHK(0x10e57bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c20 @ 0x10e57c20 (103 bytes, 38 insns) */
void f_10e57c20(void) {
  FTRACE(0x10e57c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57c21 mov ebp, esp */
  EBP = (ESP);
  /* 10e57c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57c24 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e57c29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e57c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57c2e jne 0x10e57c32 */
  if (!C.zf) goto L_10e57c32;
  /* 10e57c30 jmp 0x10e57c83 */
  goto L_10e57c83;
L_10e57c32:;
  /* 10e57c32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57c34 call 0x10e5a0e0 */
  push32(0x10e57c39u); f_10e5a0e0();
  /* 10e57c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57c3c mov ecx, dword ptr [0x10e82800] */
  ECX = (r32((uint32_t)(0x10e82800)));
  /* 10e57c42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e57c45 jmp 0x10e57c4f */
  goto L_10e57c4f;
L_10e57c47:;
  /* 10e57c47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57c4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e57c4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e57c4f:;
  /* 10e57c4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57c53 je 0x10e57c79 */
  if (C.zf) goto L_10e57c79;
  /* 10e57c55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57c58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e57c5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e57c61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57c64 jne 0x10e57c77 */
  if (!C.zf) goto L_10e57c77;
  /* 10e57c66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e57c69 push eax */
  push32((uint32_t)(EAX));
  /* 10e57c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57c6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57c70 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57c71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10e57c74u);
  /* 10e57c74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e57c77:;
  /* 10e57c77 jmp 0x10e57c47 */
  goto L_10e57c47;
L_10e57c79:;
  /* 10e57c79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57c7b call 0x10e5a180 */
  push32(0x10e57c80u); f_10e5a180();
  /* 10e57c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e57c83:;
  /* 10e57c83 mov esp, ebp */
  ESP = (EBP);
  /* 10e57c85 pop ebp */
  EBP = (pop32());
  /* 10e57c86 ret  */
  ESPCHK(0x10e57c20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10e57c90 (75 bytes, 28 insns) */
void f_10e57c90(void) {
  FTRACE(0x10e57c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57c91 mov ebp, esp */
  EBP = (ESP);
  /* 10e57c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57c94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57c98 je 0x10e57ccd */
  if (C.zf) goto L_10e57ccd;
  /* 10e57c9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e57c9d push eax */
  push32((uint32_t)(EAX));
  /* 10e57c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57ca1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57ca2 call dword ptr [0x10e853a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a4))), 0x10e57ca8u);
  /* 10e57ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57caa jne 0x10e57ccd */
  if (!C.zf) goto L_10e57ccd;
  /* 10e57cac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57cb0 je 0x10e57cc4 */
  if (C.zf) goto L_10e57cc4;
  /* 10e57cb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e57cb5 push edx */
  push32((uint32_t)(EDX));
  /* 10e57cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57cb9 push eax */
  push32((uint32_t)(EAX));
  /* 10e57cba call dword ptr [0x10e853a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a8))), 0x10e57cc0u);
  /* 10e57cc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57cc2 jne 0x10e57ccd */
  if (!C.zf) goto L_10e57ccd;
L_10e57cc4:;
  /* 10e57cc4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e57ccb jmp 0x10e57cd4 */
  goto L_10e57cd4;
L_10e57ccd:;
  /* 10e57ccd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e57cd4:;
  /* 10e57cd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57cd7 mov esp, ebp */
  ESP = (EBP);
  /* 10e57cd9 pop ebp */
  EBP = (pop32());
  /* 10e57cda ret  */
  ESPCHK(0x10e57c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x10e57ce0 (134 bytes, 50 insns) */
void f_10e57ce0(void) {
  FTRACE(0x10e57ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10e57ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57ce4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57ce8 jne 0x10e57cee */
  if (!C.zf) goto L_10e57cee;
  /* 10e57cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57cec jmp 0x10e57d62 */
  goto L_10e57d62;
L_10e57cee:;
  /* 10e57cee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e57cf0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e57cf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57cf5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57cf8 push eax */
  push32((uint32_t)(EAX));
  /* 10e57cf9 call 0x10e57c90 */
  push32(0x10e57cfeu); f_10e57c90();
  /* 10e57cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57d03 jne 0x10e57d09 */
  if (!C.zf) goto L_10e57d09;
  /* 10e57d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57d07 jmp 0x10e57d62 */
  goto L_10e57d62;
L_10e57d09:;
  /* 10e57d09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57d0c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57d0f push ecx */
  push32((uint32_t)(ECX));
  /* 10e57d10 call 0x10e5a9e0 */
  push32(0x10e57d15u); f_10e5a9e0();
  /* 10e57d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57d18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e57d1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57d1f je 0x10e57d36 */
  if (C.zf) goto L_10e57d36;
  /* 10e57d21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57d24 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57d27 push edx */
  push32((uint32_t)(EDX));
  /* 10e57d28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57d2b push eax */
  push32((uint32_t)(EAX));
  /* 10e57d2c call 0x10e5aa40 */
  push32(0x10e57d31u); f_10e5aa40();
  /* 10e57d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57d34 jmp 0x10e57d62 */
  goto L_10e57d62;
L_10e57d36:;
  /* 10e57d36 mov ecx, dword ptr [0x10e827b4] */
  ECX = (r32((uint32_t)(0x10e827b4)));
  /* 10e57d3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e57d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e57d44 je 0x10e57d4d */
  if (C.zf) goto L_10e57d4d;
  /* 10e57d46 mov eax, 1 */
  EAX = (0x1u);
  /* 10e57d4b jmp 0x10e57d62 */
  goto L_10e57d62;
L_10e57d4d:;
  /* 10e57d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57d50 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57d53 push edx */
  push32((uint32_t)(EDX));
  /* 10e57d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57d56 mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e57d5b push eax */
  push32((uint32_t)(EAX));
  /* 10e57d5c call dword ptr [0x10e853a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a0))), 0x10e57d62u);
L_10e57d62:;
  /* 10e57d62 mov esp, ebp */
  ESP = (EBP);
  /* 10e57d64 pop ebp */
  EBP = (pop32());
  /* 10e57d65 ret  */
  ESPCHK(0x10e57ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d70 @ 0x10e57d70 (227 bytes, 80 insns) */
void f_10e57d70(void) {
  FTRACE(0x10e57d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57d71 mov ebp, esp */
  EBP = (ESP);
  /* 10e57d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57d77 push eax */
  push32((uint32_t)(EAX));
  /* 10e57d78 call 0x10e57ce0 */
  push32(0x10e57d7du); f_10e57ce0();
  /* 10e57d7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57d82 jne 0x10e57d8b */
  if (!C.zf) goto L_10e57d8b;
  /* 10e57d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57d86 jmp 0x10e57e4f */
  goto L_10e57e4f;
L_10e57d8b:;
  /* 10e57d8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57d8d call 0x10e5a0e0 */
  push32(0x10e57d92u); f_10e5a0e0();
  /* 10e57d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57d95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57d98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57d9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e57d9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57da1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57da4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57da9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57dac je 0x10e57dd0 */
  if (C.zf) goto L_10e57dd0;
  /* 10e57dae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57db1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57db5 je 0x10e57dd0 */
  if (C.zf) goto L_10e57dd0;
  /* 10e57db7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57dba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57dbd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57dc2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57dc5 je 0x10e57dd0 */
  if (C.zf) goto L_10e57dd0;
  /* 10e57dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57dca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57dce jne 0x10e57e43 */
  if (!C.zf) goto L_10e57e43;
L_10e57dd0:;
  /* 10e57dd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e57dd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e57dd5 push edx */
  push32((uint32_t)(EDX));
  /* 10e57dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57dd9 push eax */
  push32((uint32_t)(EAX));
  /* 10e57dda call 0x10e57c90 */
  push32(0x10e57ddfu); f_10e57c90();
  /* 10e57ddf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57de4 je 0x10e57e43 */
  if (C.zf) goto L_10e57e43;
  /* 10e57de6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57de9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e57dec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57def jne 0x10e57e43 */
  if (!C.zf) goto L_10e57e43;
  /* 10e57df1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57df4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e57df7 cmp ecx, dword ptr [0x10e80a90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e80a90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57dfd jg 0x10e57e43 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e57e43;
  /* 10e57dff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57e03 je 0x10e57e10 */
  if (C.zf) goto L_10e57e10;
  /* 10e57e05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e57e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57e0b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e57e0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e57e10:;
  /* 10e57e10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57e14 je 0x10e57e21 */
  if (C.zf) goto L_10e57e21;
  /* 10e57e16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e57e19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57e1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e57e1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e57e21:;
  /* 10e57e21 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57e25 je 0x10e57e32 */
  if (C.zf) goto L_10e57e32;
  /* 10e57e27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e57e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57e2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e57e30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e57e32:;
  /* 10e57e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57e34 call 0x10e5a180 */
  push32(0x10e57e39u); f_10e5a180();
  /* 10e57e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57e3c mov eax, 1 */
  EAX = (0x1u);
  /* 10e57e41 jmp 0x10e57e4f */
  goto L_10e57e4f;
L_10e57e43:;
  /* 10e57e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57e45 call 0x10e5a180 */
  push32(0x10e57e4au); f_10e5a180();
  /* 10e57e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e57e4f:;
  /* 10e57e4f mov esp, ebp */
  ESP = (EBP);
  /* 10e57e51 pop ebp */
  EBP = (pop32());
  /* 10e57e52 ret  */
  ESPCHK(0x10e57d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x10e57e60 (28 bytes, 11 insns) */
void f_10e57e60(void) {
  FTRACE(0x10e57e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57e61 mov ebp, esp */
  EBP = (ESP);
  /* 10e57e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e57e64 mov eax, dword ptr [0x10e84158] */
  EAX = (r32((uint32_t)(0x10e84158)));
  /* 10e57e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e57e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57e6f mov dword ptr [0x10e84158], ecx */
  w32((uint32_t)(0x10e84158), (ECX));
  /* 10e57e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57e78 mov esp, ebp */
  ESP = (EBP);
  /* 10e57e7a pop ebp */
  EBP = (pop32());
  /* 10e57e7b ret  */
  ESPCHK(0x10e57e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10e57e80 (362 bytes, 116 insns) */
void f_10e57e80(void) {
  FTRACE(0x10e57e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57e81 mov ebp, esp */
  EBP = (ESP);
  /* 10e57e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57e86 push ebx */
  push32((uint32_t)(EBX));
  /* 10e57e87 push esi */
  push32((uint32_t)(ESI));
  /* 10e57e88 push edi */
  push32((uint32_t)(EDI));
  /* 10e57e89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57e8d jne 0x10e57eba */
  if (!C.zf) goto L_10e57eba;
L_10e57e8f:;
  /* 10e57e8f push 0x10e7dccc */
  push32((uint32_t)(0x10e7dcccu));
  /* 10e57e94 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e57e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57ea1 call 0x10e557a0 */
  push32(0x10e57ea6u); f_10e557a0();
  /* 10e57ea6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57eac jne 0x10e57eaf */
  if (!C.zf) goto L_10e57eaf;
  /* 10e57eae int3  */
  x86_unimpl("int3 @ 0x10e57eae");
L_10e57eaf:;
  /* 10e57eaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57eb3 jne 0x10e57e8f */
  if (!C.zf) goto L_10e57e8f;
  /* 10e57eb5 jmp 0x10e57fe3 */
  goto L_10e57fe3;
L_10e57eba:;
  /* 10e57eba push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57ebc call 0x10e5a0e0 */
  push32(0x10e57ec1u); f_10e5a0e0();
  /* 10e57ec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57ec4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57ec7 mov edx, dword ptr [0x10e82800] */
  EDX = (r32((uint32_t)(0x10e82800)));
  /* 10e57ecd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e57ecf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e57ed6 jmp 0x10e57ee1 */
  goto L_10e57ee1;
L_10e57ed8:;
  /* 10e57ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57edb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57ede mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e57ee1:;
  /* 10e57ee1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57ee5 jge 0x10e57f05 */
  if ((C.sf==C.of)) goto L_10e57f05;
  /* 10e57ee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57eea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57eed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10e57ef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e57ef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57efb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10e57f03 jmp 0x10e57ed8 */
  goto L_10e57ed8;
L_10e57f05:;
  /* 10e57f05 mov edx, dword ptr [0x10e82800] */
  EDX = (r32((uint32_t)(0x10e82800)));
  /* 10e57f0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e57f0e jmp 0x10e57f18 */
  goto L_10e57f18;
L_10e57f10:;
  /* 10e57f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e57f15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e57f18:;
  /* 10e57f18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57f1c je 0x10e57fc1 */
  if (C.zf) goto L_10e57fc1;
  /* 10e57f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f25 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57f28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57f2f jl 0x10e57f97 */
  if ((C.sf!=C.of)) goto L_10e57f97;
  /* 10e57f31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f34 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e57f37 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e57f3d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57f40 jge 0x10e57f97 */
  if ((C.sf==C.of)) goto L_10e57f97;
  /* 10e57f42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f45 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e57f48 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e57f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57f51 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10e57f55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57f58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f5b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e57f5e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e57f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57f67 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10e57f6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f6e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e57f71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57f76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57f79 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10e57f7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f80 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f86 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e57f89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e57f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57f91 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10e57f95 jmp 0x10e57fbc */
  goto L_10e57fbc;
L_10e57f97:;
  /* 10e57f97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e57f9a push edx */
  push32((uint32_t)(EDX));
  /* 10e57f9b push 0x10e7dca8 */
  push32((uint32_t)(0x10e7dca8u));
  /* 10e57fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e57fa8 call 0x10e557a0 */
  push32(0x10e57fadu); f_10e557a0();
  /* 10e57fad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e57fb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e57fb3 jne 0x10e57fb6 */
  if (!C.zf) goto L_10e57fb6;
  /* 10e57fb5 int3  */
  x86_unimpl("int3 @ 0x10e57fb5");
L_10e57fb6:;
  /* 10e57fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e57fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e57fba jne 0x10e57f97 */
  if (!C.zf) goto L_10e57f97;
L_10e57fbc:;
  /* 10e57fbc jmp 0x10e57f10 */
  goto L_10e57f10;
L_10e57fc1:;
  /* 10e57fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57fc4 mov edx, dword ptr [0x10e82808] */
  EDX = (r32((uint32_t)(0x10e82808)));
  /* 10e57fca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10e57fcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e57fd0 mov ecx, dword ptr [0x10e827fc] */
  ECX = (r32((uint32_t)(0x10e827fc)));
  /* 10e57fd6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10e57fd9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e57fdb call 0x10e5a180 */
  push32(0x10e57fe0u); f_10e5a180();
  /* 10e57fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e57fe3:;
  /* 10e57fe3 pop edi */
  EDI = (pop32());
  /* 10e57fe4 pop esi */
  ESI = (pop32());
  /* 10e57fe5 pop ebx */
  EBX = (pop32());
  /* 10e57fe6 mov esp, ebp */
  ESP = (EBP);
  /* 10e57fe8 pop ebp */
  EBP = (pop32());
  /* 10e57fe9 ret  */
  ESPCHK(0x10e57e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x10e57ff0 (291 bytes, 95 insns) */
void f_10e57ff0(void) {
  FTRACE(0x10e57ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e57ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e57ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10e57ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e57ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e57ff7 push esi */
  push32((uint32_t)(ESI));
  /* 10e57ff8 push edi */
  push32((uint32_t)(EDI));
  /* 10e57ff9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e58000 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58004 je 0x10e58012 */
  if (C.zf) goto L_10e58012;
  /* 10e58006 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5800a je 0x10e58012 */
  if (C.zf) goto L_10e58012;
  /* 10e5800c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58010 jne 0x10e58040 */
  if (!C.zf) goto L_10e58040;
L_10e58012:;
  /* 10e58012 push 0x10e7dcf4 */
  push32((uint32_t)(0x10e7dcf4u));
  /* 10e58017 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e5801c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5801e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58022 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58024 call 0x10e557a0 */
  push32(0x10e58029u); f_10e557a0();
  /* 10e58029 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5802c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5802f jne 0x10e58032 */
  if (!C.zf) goto L_10e58032;
  /* 10e58031 int3  */
  x86_unimpl("int3 @ 0x10e58031");
L_10e58032:;
  /* 10e58032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58036 jne 0x10e58012 */
  if (!C.zf) goto L_10e58012;
  /* 10e58038 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5803b jmp 0x10e5810c */
  goto L_10e5810c;
L_10e58040:;
  /* 10e58040 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e58047 jmp 0x10e58052 */
  goto L_10e58052;
L_10e58049:;
  /* 10e58049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5804c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5804f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e58052:;
  /* 10e58052 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58056 jge 0x10e580dc */
  if ((C.sf==C.of)) goto L_10e580dc;
  /* 10e5805c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5805f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58065 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e58068 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10e5806c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58076 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10e5807a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5807d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58080 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58083 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e58086 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10e5808a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5808e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58094 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10e58098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5809b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5809e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e580a3 jne 0x10e580b2 */
  if (!C.zf) goto L_10e580b2;
  /* 10e580a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e580a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e580ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e580b0 je 0x10e580d7 */
  if (C.zf) goto L_10e580d7;
L_10e580b2:;
  /* 10e580b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e580b6 je 0x10e580d7 */
  if (C.zf) goto L_10e580d7;
  /* 10e580b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e580bc jne 0x10e580d0 */
  if (!C.zf) goto L_10e580d0;
  /* 10e580be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e580c2 jne 0x10e580d7 */
  if (!C.zf) goto L_10e580d7;
  /* 10e580c4 mov eax, dword ptr [0x10e80a8c] */
  EAX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e580c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10e580cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e580ce je 0x10e580d7 */
  if (C.zf) goto L_10e580d7;
L_10e580d0:;
  /* 10e580d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10e580d7:;
  /* 10e580d7 jmp 0x10e58049 */
  goto L_10e58049;
L_10e580dc:;
  /* 10e580dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e580df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e580e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10e580e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e580e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e580eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10e580ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e580f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e580f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10e580f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e580fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e580fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10e58100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58103 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e58109 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e5810c:;
  /* 10e5810c pop edi */
  EDI = (pop32());
  /* 10e5810d pop esi */
  ESI = (pop32());
  /* 10e5810e pop ebx */
  EBX = (pop32());
  /* 10e5810f mov esp, ebp */
  ESP = (EBP);
  /* 10e58111 pop ebp */
  EBP = (pop32());
  /* 10e58112 ret  */
  ESPCHK(0x10e57ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008120 @ 0x10e58120 (697 bytes, 253 insns) */
void f_10e58120(void) {
  FTRACE(0x10e58120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58120 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58121 mov ebp, esp */
  EBP = (ESP);
  /* 10e58123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58126 push ebx */
  push32((uint32_t)(EBX));
  /* 10e58127 push esi */
  push32((uint32_t)(ESI));
  /* 10e58128 push edi */
  push32((uint32_t)(EDI));
  /* 10e58129 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e58130 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e58132 call 0x10e5a0e0 */
  push32(0x10e58137u); f_10e5a0e0();
  /* 10e58137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5813a:;
  /* 10e5813a push 0x10e7ddec */
  push32((uint32_t)(0x10e7ddecu));
  /* 10e5813f push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e58144 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58146 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58148 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5814a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5814c call 0x10e557a0 */
  push32(0x10e58151u); f_10e557a0();
  /* 10e58151 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58154 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58157 jne 0x10e5815a */
  if (!C.zf) goto L_10e5815a;
  /* 10e58159 int3  */
  x86_unimpl("int3 @ 0x10e58159");
L_10e5815a:;
  /* 10e5815a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5815c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5815e jne 0x10e5813a */
  if (!C.zf) goto L_10e5813a;
  /* 10e58160 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58164 je 0x10e5816e */
  if (C.zf) goto L_10e5816e;
  /* 10e58166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58169 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5816b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e5816e:;
  /* 10e5816e mov eax, dword ptr [0x10e82800] */
  EAX = (r32((uint32_t)(0x10e82800)));
  /* 10e58173 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e58176 jmp 0x10e58180 */
  goto L_10e58180;
L_10e58178:;
  /* 10e58178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5817b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5817d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e58180:;
  /* 10e58180 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58184 je 0x10e583a2 */
  if (C.zf) goto L_10e583a2;
  /* 10e5818a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5818d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58190 je 0x10e583a2 */
  if (C.zf) goto L_10e583a2;
  /* 10e58196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58199 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e5819c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e581a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e581a5 je 0x10e581d4 */
  if (C.zf) goto L_10e581d4;
  /* 10e581a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e581aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e581ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e581b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e581b5 je 0x10e581d4 */
  if (C.zf) goto L_10e581d4;
  /* 10e581b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e581ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e581bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e581c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e581c5 jne 0x10e581d9 */
  if (!C.zf) goto L_10e581d9;
  /* 10e581c7 mov ecx, dword ptr [0x10e80a8c] */
  ECX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e581cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10e581d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e581d2 jne 0x10e581d9 */
  if (!C.zf) goto L_10e581d9;
L_10e581d4:;
  /* 10e581d4 jmp 0x10e5839d */
  goto L_10e5839d;
L_10e581d9:;
  /* 10e581d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e581dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e581e0 je 0x10e58252 */
  if (C.zf) goto L_10e58252;
  /* 10e581e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e581e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e581e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e581e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e581ec push ecx */
  push32((uint32_t)(ECX));
  /* 10e581ed call 0x10e57c90 */
  push32(0x10e581f2u); f_10e57c90();
  /* 10e581f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e581f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e581f7 jne 0x10e58223 */
  if (!C.zf) goto L_10e58223;
L_10e581f9:;
  /* 10e581f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e581fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e581ff push eax */
  push32((uint32_t)(EAX));
  /* 10e58200 push 0x10e7ddd8 */
  push32((uint32_t)(0x10e7ddd8u));
  /* 10e58205 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58207 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58209 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5820b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5820d call 0x10e557a0 */
  push32(0x10e58212u); f_10e557a0();
  /* 10e58212 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58215 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58218 jne 0x10e5821b */
  if (!C.zf) goto L_10e5821b;
  /* 10e5821a int3  */
  x86_unimpl("int3 @ 0x10e5821a");
L_10e5821b:;
  /* 10e5821b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5821d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5821f jne 0x10e581f9 */
  if (!C.zf) goto L_10e581f9;
  /* 10e58221 jmp 0x10e58252 */
  goto L_10e58252;
L_10e58223:;
  /* 10e58223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58226 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e58229 push eax */
  push32((uint32_t)(EAX));
  /* 10e5822a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5822d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e58230 push edx */
  push32((uint32_t)(EDX));
  /* 10e58231 push 0x10e7ddcc */
  push32((uint32_t)(0x10e7ddccu));
  /* 10e58236 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58238 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5823a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5823c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5823e call 0x10e557a0 */
  push32(0x10e58243u); f_10e557a0();
  /* 10e58243 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58246 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58249 jne 0x10e5824c */
  if (!C.zf) goto L_10e5824c;
  /* 10e5824b int3  */
  x86_unimpl("int3 @ 0x10e5824b");
L_10e5824c:;
  /* 10e5824c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5824e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58250 jne 0x10e58223 */
  if (!C.zf) goto L_10e58223;
L_10e58252:;
  /* 10e58252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58255 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e58258 push edx */
  push32((uint32_t)(EDX));
  /* 10e58259 push 0x10e7ddc4 */
  push32((uint32_t)(0x10e7ddc4u));
  /* 10e5825e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58260 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58262 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58266 call 0x10e557a0 */
  push32(0x10e5826bu); f_10e557a0();
  /* 10e5826b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5826e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58271 jne 0x10e58274 */
  if (!C.zf) goto L_10e58274;
  /* 10e58273 int3  */
  x86_unimpl("int3 @ 0x10e58273");
L_10e58274:;
  /* 10e58274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58278 jne 0x10e58252 */
  if (!C.zf) goto L_10e58252;
  /* 10e5827a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5827d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e58280 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e58286 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58289 jne 0x10e582fc */
  if (!C.zf) goto L_10e582fc;
L_10e5828b:;
  /* 10e5828b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5828e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e58291 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58295 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e58298 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e5829b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e582a0 push eax */
  push32((uint32_t)(EAX));
  /* 10e582a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e582a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e582a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e582a8 push 0x10e7dd90 */
  push32((uint32_t)(0x10e7dd90u));
  /* 10e582ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10e582af push 0 */
  push32((uint32_t)(0x0u));
  /* 10e582b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e582b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e582b5 call 0x10e557a0 */
  push32(0x10e582bau); f_10e557a0();
  /* 10e582ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e582bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e582c0 jne 0x10e582c3 */
  if (!C.zf) goto L_10e582c3;
  /* 10e582c2 int3  */
  x86_unimpl("int3 @ 0x10e582c2");
L_10e582c3:;
  /* 10e582c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e582c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e582c7 jne 0x10e5828b */
  if (!C.zf) goto L_10e5828b;
  /* 10e582c9 cmp dword ptr [0x10e84158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e84158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e582d0 je 0x10e582eb */
  if (C.zf) goto L_10e582eb;
  /* 10e582d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e582d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e582d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e582d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e582dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e582df push edx */
  push32((uint32_t)(EDX));
  /* 10e582e0 call dword ptr [0x10e84158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e84158))), 0x10e582e6u);
  /* 10e582e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e582e9 jmp 0x10e582f7 */
  goto L_10e582f7;
L_10e582eb:;
  /* 10e582eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e582ee push eax */
  push32((uint32_t)(EAX));
  /* 10e582ef call 0x10e583e0 */
  push32(0x10e582f4u); f_10e583e0();
  /* 10e582f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e582f7:;
  /* 10e582f7 jmp 0x10e5839d */
  goto L_10e5839d;
L_10e582fc:;
  /* 10e582fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e582ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58303 jne 0x10e58342 */
  if (!C.zf) goto L_10e58342;
L_10e58305:;
  /* 10e58305 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58308 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5830b push eax */
  push32((uint32_t)(EAX));
  /* 10e5830c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5830f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58312 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58313 push 0x10e7dd68 */
  push32((uint32_t)(0x10e7dd68u));
  /* 10e58318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5831a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5831c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5831e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58320 call 0x10e557a0 */
  push32(0x10e58325u); f_10e557a0();
  /* 10e58325 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58328 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5832b jne 0x10e5832e */
  if (!C.zf) goto L_10e5832e;
  /* 10e5832d int3  */
  x86_unimpl("int3 @ 0x10e5832d");
L_10e5832e:;
  /* 10e5832e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e58330 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58332 jne 0x10e58305 */
  if (!C.zf) goto L_10e58305;
  /* 10e58334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58337 push eax */
  push32((uint32_t)(EAX));
  /* 10e58338 call 0x10e583e0 */
  push32(0x10e5833du); f_10e583e0();
  /* 10e5833d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58340 jmp 0x10e5839d */
  goto L_10e5839d;
L_10e58342:;
  /* 10e58342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58345 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e58348 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5834e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58351 jne 0x10e5839d */
  if (!C.zf) goto L_10e5839d;
L_10e58353:;
  /* 10e58353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58356 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e58359 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5835a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5835d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e58360 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e58363 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e58368 push eax */
  push32((uint32_t)(EAX));
  /* 10e58369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5836c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5836f push ecx */
  push32((uint32_t)(ECX));
  /* 10e58370 push 0x10e7dd34 */
  push32((uint32_t)(0x10e7dd34u));
  /* 10e58375 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58379 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5837b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5837d call 0x10e557a0 */
  push32(0x10e58382u); f_10e557a0();
  /* 10e58382 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58385 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58388 jne 0x10e5838b */
  if (!C.zf) goto L_10e5838b;
  /* 10e5838a int3  */
  x86_unimpl("int3 @ 0x10e5838a");
L_10e5838b:;
  /* 10e5838b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5838d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5838f jne 0x10e58353 */
  if (!C.zf) goto L_10e58353;
  /* 10e58391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58394 push eax */
  push32((uint32_t)(EAX));
  /* 10e58395 call 0x10e583e0 */
  push32(0x10e5839au); f_10e583e0();
  /* 10e5839a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5839d:;
  /* 10e5839d jmp 0x10e58178 */
  goto L_10e58178;
L_10e583a2:;
  /* 10e583a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e583a4 call 0x10e5a180 */
  push32(0x10e583a9u); f_10e5a180();
  /* 10e583a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e583ac:;
  /* 10e583ac push 0x10e7dd1c */
  push32((uint32_t)(0x10e7dd1cu));
  /* 10e583b1 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e583b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e583b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e583ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10e583bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e583be call 0x10e557a0 */
  push32(0x10e583c3u); f_10e557a0();
  /* 10e583c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e583c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e583c9 jne 0x10e583cc */
  if (!C.zf) goto L_10e583cc;
  /* 10e583cb int3  */
  x86_unimpl("int3 @ 0x10e583cb");
L_10e583cc:;
  /* 10e583cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e583ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e583d0 jne 0x10e583ac */
  if (!C.zf) goto L_10e583ac;
  /* 10e583d2 pop edi */
  EDI = (pop32());
  /* 10e583d3 pop esi */
  ESI = (pop32());
  /* 10e583d4 pop ebx */
  EBX = (pop32());
  /* 10e583d5 mov esp, ebp */
  ESP = (EBP);
  /* 10e583d7 pop ebp */
  EBP = (pop32());
  /* 10e583d8 ret  */
  ESPCHK(0x10e58120u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x10e583e0 (276 bytes, 89 insns) */
void f_10e583e0(void) {
  FTRACE(0x10e583e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e583e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e583e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e583e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e583e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e583e7 push esi */
  push32((uint32_t)(ESI));
  /* 10e583e8 push edi */
  push32((uint32_t)(EDI));
  /* 10e583e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10e583f0 jmp 0x10e583fb */
  goto L_10e583fb;
L_10e583f2:;
  /* 10e583f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e583f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e583f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10e583fb:;
  /* 10e583fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e583fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58402 jge 0x10e5840f */
  if ((C.sf==C.of)) goto L_10e5840f;
  /* 10e58404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58407 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5840a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10e5840d jmp 0x10e58416 */
  goto L_10e58416;
L_10e5840f:;
  /* 10e5840f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10e58416:;
  /* 10e58416 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e58419 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5841c jge 0x10e584bc */
  if ((C.sf==C.of)) goto L_10e584bc;
  /* 10e58422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58425 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58428 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10e5842b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10e5842e cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58435 jle 0x10e58453 */
  if ((C.zf||C.sf!=C.of)) goto L_10e58453;
  /* 10e58437 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10e5843c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e5843f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e58445 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58446 call 0x10e5c6f0 */
  push32(0x10e5844bu); f_10e5c6f0();
  /* 10e5844b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5844e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10e58451 jmp 0x10e58470 */
  goto L_10e58470;
L_10e58453:;
  /* 10e58453 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e58456 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5845c mov eax, dword ptr [0x10e80ca8] */
  EAX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e58461 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e58463 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e58467 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5846d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10e58470:;
  /* 10e58470 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58474 je 0x10e58484 */
  if (C.zf) goto L_10e58484;
  /* 10e58476 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e58479 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5847f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10e58482 jmp 0x10e5848b */
  goto L_10e5848b;
L_10e58484:;
  /* 10e58484 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10e5848b:;
  /* 10e5848b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e5848e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10e58491 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10e58495 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e58498 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5849e push edx */
  push32((uint32_t)(EDX));
  /* 10e5849f push 0x10e7de10 */
  push32((uint32_t)(0x10e7de10u));
  /* 10e584a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e584a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e584aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10e584ae push ecx */
  push32((uint32_t)(ECX));
  /* 10e584af call 0x10e5c5f0 */
  push32(0x10e584b4u); f_10e5c5f0();
  /* 10e584b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e584b7 jmp 0x10e583f2 */
  goto L_10e583f2;
L_10e584bc:;
  /* 10e584bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e584bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10e584c4:;
  /* 10e584c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10e584c7 push eax */
  push32((uint32_t)(EAX));
  /* 10e584c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10e584cb push ecx */
  push32((uint32_t)(ECX));
  /* 10e584cc push 0x10e7de00 */
  push32((uint32_t)(0x10e7de00u));
  /* 10e584d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e584d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e584d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e584d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e584d9 call 0x10e557a0 */
  push32(0x10e584deu); f_10e557a0();
  /* 10e584de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e584e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e584e4 jne 0x10e584e7 */
  if (!C.zf) goto L_10e584e7;
  /* 10e584e6 int3  */
  x86_unimpl("int3 @ 0x10e584e6");
L_10e584e7:;
  /* 10e584e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e584e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e584eb jne 0x10e584c4 */
  if (!C.zf) goto L_10e584c4;
  /* 10e584ed pop edi */
  EDI = (pop32());
  /* 10e584ee pop esi */
  ESI = (pop32());
  /* 10e584ef pop ebx */
  EBX = (pop32());
  /* 10e584f0 mov esp, ebp */
  ESP = (EBP);
  /* 10e584f2 pop ebp */
  EBP = (pop32());
  /* 10e584f3 ret  */
  ESPCHK(0x10e583e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x10e58500 (116 bytes, 46 insns) */
void f_10e58500(void) {
  FTRACE(0x10e58500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58500 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58501 mov ebp, esp */
  EBP = (ESP);
  /* 10e58503 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58506 push ebx */
  push32((uint32_t)(EBX));
  /* 10e58507 push esi */
  push32((uint32_t)(ESI));
  /* 10e58508 push edi */
  push32((uint32_t)(EDI));
  /* 10e58509 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10e5850c push eax */
  push32((uint32_t)(EAX));
  /* 10e5850d call 0x10e57e80 */
  push32(0x10e58512u); f_10e57e80();
  /* 10e58512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58515 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58519 jne 0x10e58534 */
  if (!C.zf) goto L_10e58534;
  /* 10e5851b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5851f jne 0x10e58534 */
  if (!C.zf) goto L_10e58534;
  /* 10e58521 mov ecx, dword ptr [0x10e80a8c] */
  ECX = (r32((uint32_t)(0x10e80a8c)));
  /* 10e58527 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5852a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5852c je 0x10e5856b */
  if (C.zf) goto L_10e5856b;
  /* 10e5852e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58532 je 0x10e5856b */
  if (C.zf) goto L_10e5856b;
L_10e58534:;
  /* 10e58534 push 0x10e7de18 */
  push32((uint32_t)(0x10e7de18u));
  /* 10e58539 push 0x10e7d7e4 */
  push32((uint32_t)(0x10e7d7e4u));
  /* 10e5853e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58540 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58542 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58544 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58546 call 0x10e557a0 */
  push32(0x10e5854bu); f_10e557a0();
  /* 10e5854b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5854e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58551 jne 0x10e58554 */
  if (!C.zf) goto L_10e58554;
  /* 10e58553 int3  */
  x86_unimpl("int3 @ 0x10e58553");
L_10e58554:;
  /* 10e58554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e58556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58558 jne 0x10e58534 */
  if (!C.zf) goto L_10e58534;
  /* 10e5855a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5855c call 0x10e58120 */
  push32(0x10e58561u); f_10e58120();
  /* 10e58561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58564 mov eax, 1 */
  EAX = (0x1u);
  /* 10e58569 jmp 0x10e5856d */
  goto L_10e5856d;
L_10e5856b:;
  /* 10e5856b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5856d:;
  /* 10e5856d pop edi */
  EDI = (pop32());
  /* 10e5856e pop esi */
  ESI = (pop32());
  /* 10e5856f pop ebx */
  EBX = (pop32());
  /* 10e58570 mov esp, ebp */
  ESP = (EBP);
  /* 10e58572 pop ebp */
  EBP = (pop32());
  /* 10e58573 ret  */
  ESPCHK(0x10e58500u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x10e58580 (197 bytes, 79 insns) */
void f_10e58580(void) {
  FTRACE(0x10e58580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58580 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58581 mov ebp, esp */
  EBP = (ESP);
  /* 10e58583 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58584 push ebx */
  push32((uint32_t)(EBX));
  /* 10e58585 push esi */
  push32((uint32_t)(ESI));
  /* 10e58586 push edi */
  push32((uint32_t)(EDI));
  /* 10e58587 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5858b jne 0x10e58592 */
  if (!C.zf) goto L_10e58592;
  /* 10e5858d jmp 0x10e5863e */
  goto L_10e5863e;
L_10e58592:;
  /* 10e58592 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e58599 jmp 0x10e585a4 */
  goto L_10e585a4;
L_10e5859b:;
  /* 10e5859b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5859e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e585a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e585a4:;
  /* 10e585a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e585a8 jge 0x10e585ee */
  if ((C.sf==C.of)) goto L_10e585ee;
L_10e585aa:;
  /* 10e585aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e585ad mov edx, dword ptr [ecx*4 + 0x10e80a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80a9c)));
  /* 10e585b4 push edx */
  push32((uint32_t)(EDX));
  /* 10e585b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e585b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e585bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10e585bf push edx */
  push32((uint32_t)(EDX));
  /* 10e585c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e585c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e585c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10e585ca push edx */
  push32((uint32_t)(EDX));
  /* 10e585cb push 0x10e7de74 */
  push32((uint32_t)(0x10e7de74u));
  /* 10e585d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e585d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e585d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e585d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e585d8 call 0x10e557a0 */
  push32(0x10e585ddu); f_10e557a0();
  /* 10e585dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e585e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e585e3 jne 0x10e585e6 */
  if (!C.zf) goto L_10e585e6;
  /* 10e585e5 int3  */
  x86_unimpl("int3 @ 0x10e585e5");
L_10e585e6:;
  /* 10e585e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e585e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e585ea jne 0x10e585aa */
  if (!C.zf) goto L_10e585aa;
  /* 10e585ec jmp 0x10e5859b */
  goto L_10e5859b;
L_10e585ee:;
  /* 10e585ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e585f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10e585f4 push edx */
  push32((uint32_t)(EDX));
  /* 10e585f5 push 0x10e7de50 */
  push32((uint32_t)(0x10e7de50u));
  /* 10e585fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e585fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e585fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58600 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58602 call 0x10e557a0 */
  push32(0x10e58607u); f_10e557a0();
  /* 10e58607 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5860a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5860d jne 0x10e58610 */
  if (!C.zf) goto L_10e58610;
  /* 10e5860f int3  */
  x86_unimpl("int3 @ 0x10e5860f");
L_10e58610:;
  /* 10e58610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58614 jne 0x10e585ee */
  if (!C.zf) goto L_10e585ee;
L_10e58616:;
  /* 10e58616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e58619 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10e5861c push edx */
  push32((uint32_t)(EDX));
  /* 10e5861d push 0x10e7de30 */
  push32((uint32_t)(0x10e7de30u));
  /* 10e58622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58626 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58628 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5862a call 0x10e557a0 */
  push32(0x10e5862fu); f_10e557a0();
  /* 10e5862f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58632 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58635 jne 0x10e58638 */
  if (!C.zf) goto L_10e58638;
  /* 10e58637 int3  */
  x86_unimpl("int3 @ 0x10e58637");
L_10e58638:;
  /* 10e58638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5863a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5863c jne 0x10e58616 */
  if (!C.zf) goto L_10e58616;
L_10e5863e:;
  /* 10e5863e pop edi */
  EDI = (pop32());
  /* 10e5863f pop esi */
  ESI = (pop32());
  /* 10e58640 pop ebx */
  EBX = (pop32());
  /* 10e58641 mov esp, ebp */
  ESP = (EBP);
  /* 10e58643 pop ebp */
  EBP = (pop32());
  /* 10e58644 ret  */
  ESPCHK(0x10e58580u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x10e58650 (329 bytes, 102 insns) */
void f_10e58650(void) {
  FTRACE(0x10e58650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58650 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58651 mov ebp, esp */
  EBP = (ESP);
  /* 10e58653 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58656 cmp dword ptr [0x10e842d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5865d jne 0x10e58664 */
  if (!C.zf) goto L_10e58664;
  /* 10e5865f call 0x10e5cf90 */
  push32(0x10e58664u); f_10e5cf90();
L_10e58664:;
  /* 10e58664 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e5866b mov eax, dword ptr [0x10e8279c] */
  EAX = (r32((uint32_t)(0x10e8279c)));
  /* 10e58670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e58673:;
  /* 10e58673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58676 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e58679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5867b je 0x10e586a9 */
  if (C.zf) goto L_10e586a9;
  /* 10e5867d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58680 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e58683 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58686 je 0x10e58691 */
  if (C.zf) goto L_10e58691;
  /* 10e58688 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5868b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5868e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e58691:;
  /* 10e58691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58694 push eax */
  push32((uint32_t)(EAX));
  /* 10e58695 call 0x10e59510 */
  push32(0x10e5869au); f_10e59510();
  /* 10e5869a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5869d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e586a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e586a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e586a7 jmp 0x10e58673 */
  goto L_10e58673;
L_10e586a9:;
  /* 10e586a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10e586ab push 0x10e7de94 */
  push32((uint32_t)(0x10e7de94u));
  /* 10e586b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e586b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e586b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10e586bc push ecx */
  push32((uint32_t)(ECX));
  /* 10e586bd call 0x10e566e0 */
  push32(0x10e586c2u); f_10e566e0();
  /* 10e586c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e586c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e586c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e586cb mov dword ptr [0x10e827d0], edx */
  w32((uint32_t)(0x10e827d0), (EDX));
  /* 10e586d1 cmp dword ptr [0x10e827d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e586d8 jne 0x10e586e4 */
  if (!C.zf) goto L_10e586e4;
  /* 10e586da push 9 */
  push32((uint32_t)(0x9u));
  /* 10e586dc call 0x10e55650 */
  push32(0x10e586e1u); f_10e55650();
  /* 10e586e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e586e4:;
  /* 10e586e4 mov eax, dword ptr [0x10e8279c] */
  EAX = (r32((uint32_t)(0x10e8279c)));
  /* 10e586e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e586ec jmp 0x10e586f7 */
  goto L_10e586f7;
L_10e586ee:;
  /* 10e586ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e586f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e586f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e586f7:;
  /* 10e586f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e586fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e586fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e586ff je 0x10e58767 */
  if (C.zf) goto L_10e58767;
  /* 10e58701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58704 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58705 call 0x10e59510 */
  push32(0x10e5870au); f_10e59510();
  /* 10e5870a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5870d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58710 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e58713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58716 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e58719 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5871c je 0x10e58765 */
  if (C.zf) goto L_10e58765;
  /* 10e5871e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10e58720 push 0x10e7de94 */
  push32((uint32_t)(0x10e7de94u));
  /* 10e58725 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e58727 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5872a push ecx */
  push32((uint32_t)(ECX));
  /* 10e5872b call 0x10e566e0 */
  push32(0x10e58730u); f_10e566e0();
  /* 10e58730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58733 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58736 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e58738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5873b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5873e jne 0x10e5874a */
  if (!C.zf) goto L_10e5874a;
  /* 10e58740 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e58742 call 0x10e55650 */
  push32(0x10e58747u); f_10e55650();
  /* 10e58747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5874a:;
  /* 10e5874a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5874d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5874e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58751 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e58753 push eax */
  push32((uint32_t)(EAX));
  /* 10e58754 call 0x10e59690 */
  push32(0x10e58759u); f_10e59690();
  /* 10e58759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5875c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5875f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58762 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e58765:;
  /* 10e58765 jmp 0x10e586ee */
  goto L_10e586ee;
L_10e58767:;
  /* 10e58767 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e58769 mov edx, dword ptr [0x10e8279c] */
  EDX = (r32((uint32_t)(0x10e8279c)));
  /* 10e5876f push edx */
  push32((uint32_t)(EDX));
  /* 10e58770 call 0x10e57170 */
  push32(0x10e58775u); f_10e57170();
  /* 10e58775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58778 mov dword ptr [0x10e8279c], 0 */
  w32((uint32_t)(0x10e8279c), (0x0u));
  /* 10e58782 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58785 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5878b mov dword ptr [0x10e842c0], 1 */
  w32((uint32_t)(0x10e842c0), (0x1u));
  /* 10e58795 mov esp, ebp */
  ESP = (EBP);
  /* 10e58797 pop ebp */
  EBP = (pop32());
  /* 10e58798 ret  */
  ESPCHK(0x10e58650u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x10e587a0 (216 bytes, 69 insns) */
void f_10e587a0(void) {
  FTRACE(0x10e587a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e587a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e587a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e587a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e587a6 cmp dword ptr [0x10e842d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e587ad jne 0x10e587b4 */
  if (!C.zf) goto L_10e587b4;
  /* 10e587af call 0x10e5cf90 */
  push32(0x10e587b4u); f_10e5cf90();
L_10e587b4:;
  /* 10e587b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e587b9 push 0x10e8280c */
  push32((uint32_t)(0x10e8280cu));
  /* 10e587be push 0 */
  push32((uint32_t)(0x0u));
  /* 10e587c0 call dword ptr [0x10e853ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ec))), 0x10e587c6u);
  /* 10e587c6 mov dword ptr [0x10e827e0], 0x10e8280c */
  w32((uint32_t)(0x10e827e0), (0x10e8280cu));
  /* 10e587d0 mov eax, dword ptr [0x10e842ec] */
  EAX = (r32((uint32_t)(0x10e842ec)));
  /* 10e587d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e587d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e587da jne 0x10e587e7 */
  if (!C.zf) goto L_10e587e7;
  /* 10e587dc mov edx, dword ptr [0x10e827e0] */
  EDX = (r32((uint32_t)(0x10e827e0)));
  /* 10e587e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e587e5 jmp 0x10e587ef */
  goto L_10e587ef;
L_10e587e7:;
  /* 10e587e7 mov eax, dword ptr [0x10e842ec] */
  EAX = (r32((uint32_t)(0x10e842ec)));
  /* 10e587ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10e587ef:;
  /* 10e587ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e587f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e587f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10e587f8 push edx */
  push32((uint32_t)(EDX));
  /* 10e587f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e587fc push eax */
  push32((uint32_t)(EAX));
  /* 10e587fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e587ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58801 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58804 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58805 call 0x10e58880 */
  push32(0x10e5880au); f_10e58880();
  /* 10e5880a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5880d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10e58812 push 0x10e7dea0 */
  push32((uint32_t)(0x10e7dea0u));
  /* 10e58817 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e58819 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5881c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5881f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10e58822 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58823 call 0x10e566e0 */
  push32(0x10e58828u); f_10e566e0();
  /* 10e58828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5882b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5882e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58832 jne 0x10e5883e */
  if (!C.zf) goto L_10e5883e;
  /* 10e58834 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e58836 call 0x10e55650 */
  push32(0x10e5883bu); f_10e55650();
  /* 10e5883b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5883e:;
  /* 10e5883e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10e58841 push edx */
  push32((uint32_t)(EDX));
  /* 10e58842 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e58845 push eax */
  push32((uint32_t)(EAX));
  /* 10e58846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58849 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5884c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10e5884f push eax */
  push32((uint32_t)(EAX));
  /* 10e58850 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58853 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58854 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58857 push edx */
  push32((uint32_t)(EDX));
  /* 10e58858 call 0x10e58880 */
  push32(0x10e5885du); f_10e58880();
  /* 10e5885d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58860 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58863 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58866 mov dword ptr [0x10e827c4], eax */
  w32((uint32_t)(0x10e827c4), (EAX));
  /* 10e5886b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5886e mov dword ptr [0x10e827c8], ecx */
  w32((uint32_t)(0x10e827c8), (ECX));
  /* 10e58874 mov esp, ebp */
  ESP = (EBP);
  /* 10e58876 pop ebp */
  EBP = (pop32());
  /* 10e58877 ret  */
  ESPCHK(0x10e587a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x10e58880 (1060 bytes, 360 insns) */
void f_10e58880(void) {
  FTRACE(0x10e58880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58880 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58881 mov ebp, esp */
  EBP = (ESP);
  /* 10e58883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58886 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58889 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5888f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e58892 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10e58898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5889b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5889e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e588a2 je 0x10e588b5 */
  if (C.zf) goto L_10e588b5;
  /* 10e588a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e588a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e588aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e588ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e588af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e588b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10e588b5:;
  /* 10e588b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e588b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e588bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e588be jne 0x10e5898d */
  if (!C.zf) goto L_10e5898d;
L_10e588c4:;
  /* 10e588c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e588c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e588ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e588cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e588d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e588d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e588d6 je 0x10e58952 */
  if (C.zf) goto L_10e58952;
  /* 10e588d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e588db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e588de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e588e0 je 0x10e58952 */
  if (C.zf) goto L_10e58952;
  /* 10e588e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e588e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e588e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e588e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e588eb mov al, byte ptr [edx + 0x10e84021] */
  AL = (r8((uint32_t)(EDX + 0x10e84021)));
  /* 10e588f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e588f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e588f6 je 0x10e58927 */
  if (C.zf) goto L_10e58927;
  /* 10e588f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e588fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e588fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58900 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58903 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e58905 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58909 je 0x10e58927 */
  if (C.zf) goto L_10e58927;
  /* 10e5890b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5890e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58911 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e58913 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e58915 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58918 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5891b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e5891e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58924 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e58927:;
  /* 10e58927 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5892a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5892c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5892f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58932 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e58934 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58938 je 0x10e5894d */
  if (C.zf) goto L_10e5894d;
  /* 10e5893a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5893d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58940 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e58942 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e58944 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58947 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5894a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e5894d:;
  /* 10e5894d jmp 0x10e588c4 */
  goto L_10e588c4;
L_10e58952:;
  /* 10e58952 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58955 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e58957 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5895a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5895d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e5895f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58963 je 0x10e58974 */
  if (C.zf) goto L_10e58974;
  /* 10e58965 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58968 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e5896b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5896e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58971 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10e58974:;
  /* 10e58974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58977 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e5897a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5897d jne 0x10e58988 */
  if (!C.zf) goto L_10e58988;
  /* 10e5897f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58982 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58985 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e58988:;
  /* 10e58988 jmp 0x10e58a5c */
  goto L_10e58a5c;
L_10e5898d:;
  /* 10e5898d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58990 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e58992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58995 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58998 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e5899a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5899e je 0x10e589b3 */
  if (C.zf) goto L_10e589b3;
  /* 10e589a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e589a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e589a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e589a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e589aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e589ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e589b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e589b3:;
  /* 10e589b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e589b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e589b8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10e589bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e589be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e589c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e589c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e589c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e589cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e589cf mov dl, byte ptr [ecx + 0x10e84021] */
  DL = (r8((uint32_t)(ECX + 0x10e84021)));
  /* 10e589d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e589d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e589da je 0x10e58a0b */
  if (C.zf) goto L_10e58a0b;
  /* 10e589dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e589df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e589e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e589e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e589e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e589e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e589ed je 0x10e58a02 */
  if (C.zf) goto L_10e58a02;
  /* 10e589ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e589f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e589f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e589f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e589f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e589fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e589ff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e58a02:;
  /* 10e58a02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58a08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e58a0b:;
  /* 10e58a0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58a0e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e58a14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58a17 je 0x10e58a37 */
  if (C.zf) goto L_10e58a37;
  /* 10e58a19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58a1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e58a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58a23 je 0x10e58a37 */
  if (C.zf) goto L_10e58a37;
  /* 10e58a25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58a28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e58a2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58a31 jne 0x10e5898d */
  if (!C.zf) goto L_10e5898d;
L_10e58a37:;
  /* 10e58a37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58a3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e58a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58a42 jne 0x10e58a4f */
  if (!C.zf) goto L_10e58a4f;
  /* 10e58a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58a4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e58a4d jmp 0x10e58a5c */
  goto L_10e58a5c;
L_10e58a4f:;
  /* 10e58a4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58a53 je 0x10e58a5c */
  if (C.zf) goto L_10e58a5c;
  /* 10e58a55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58a58 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10e58a5c:;
  /* 10e58a5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10e58a63:;
  /* 10e58a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e58a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58a6b je 0x10e58a8e */
  if (C.zf) goto L_10e58a8e;
L_10e58a6d:;
  /* 10e58a6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e58a73 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58a76 je 0x10e58a83 */
  if (C.zf) goto L_10e58a83;
  /* 10e58a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e58a7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58a81 jne 0x10e58a8e */
  if (!C.zf) goto L_10e58a8e;
L_10e58a83:;
  /* 10e58a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58a89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e58a8c jmp 0x10e58a6d */
  goto L_10e58a6d;
L_10e58a8e:;
  /* 10e58a8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58a91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e58a94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e58a96 jne 0x10e58a9d */
  if (!C.zf) goto L_10e58a9d;
  /* 10e58a98 jmp 0x10e58c7b */
  goto L_10e58c7b;
L_10e58a9d:;
  /* 10e58a9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58aa1 je 0x10e58ab4 */
  if (C.zf) goto L_10e58ab4;
  /* 10e58aa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e58aa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58aa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e58aab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e58aae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58ab1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e58ab4:;
  /* 10e58ab4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e58ab7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e58ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58abc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e58abf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e58ac1:;
  /* 10e58ac1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e58ac8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e58acf:;
  /* 10e58acf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58ad2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e58ad5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58ad8 jne 0x10e58aee */
  if (!C.zf) goto L_10e58aee;
  /* 10e58ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58add add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58ae0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e58ae3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58ae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58ae9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e58aec jmp 0x10e58acf */
  goto L_10e58acf;
L_10e58aee:;
  /* 10e58aee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58af1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e58af4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58af7 jne 0x10e58b4a */
  if (!C.zf) goto L_10e58b4a;
  /* 10e58af9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58afc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e58afe mov ecx, 2 */
  ECX = (0x2u);
  /* 10e58b03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e58b05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58b07 jne 0x10e58b42 */
  if (!C.zf) goto L_10e58b42;
  /* 10e58b09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58b0d je 0x10e58b2f */
  if (C.zf) goto L_10e58b2f;
  /* 10e58b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58b12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e58b16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58b19 jne 0x10e58b26 */
  if (!C.zf) goto L_10e58b26;
  /* 10e58b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58b1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58b21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e58b24 jmp 0x10e58b2d */
  goto L_10e58b2d;
L_10e58b26:;
  /* 10e58b26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e58b2d:;
  /* 10e58b2d jmp 0x10e58b36 */
  goto L_10e58b36;
L_10e58b2f:;
  /* 10e58b2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e58b36:;
  /* 10e58b36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e58b38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58b3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10e58b3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e58b42:;
  /* 10e58b42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58b45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e58b47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e58b4a:;
  /* 10e58b4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58b50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58b53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e58b56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e58b58 je 0x10e58b7e */
  if (C.zf) goto L_10e58b7e;
  /* 10e58b5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58b5e je 0x10e58b6f */
  if (C.zf) goto L_10e58b6f;
  /* 10e58b60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58b63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10e58b66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58b69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58b6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10e58b6f:;
  /* 10e58b6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58b72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e58b74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58b77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58b7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e58b7c jmp 0x10e58b4a */
  goto L_10e58b4a;
L_10e58b7e:;
  /* 10e58b7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58b81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e58b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58b86 je 0x10e58ba4 */
  if (C.zf) goto L_10e58ba4;
  /* 10e58b88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58b8c jne 0x10e58ba9 */
  if (!C.zf) goto L_10e58ba9;
  /* 10e58b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58b91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e58b94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58b97 je 0x10e58ba4 */
  if (C.zf) goto L_10e58ba4;
  /* 10e58b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58b9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e58b9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58ba2 jne 0x10e58ba9 */
  if (!C.zf) goto L_10e58ba9;
L_10e58ba4:;
  /* 10e58ba4 jmp 0x10e58c54 */
  goto L_10e58c54;
L_10e58ba9:;
  /* 10e58ba9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58bad je 0x10e58c46 */
  if (C.zf) goto L_10e58c46;
  /* 10e58bb3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58bb7 je 0x10e58c0d */
  if (C.zf) goto L_10e58c0d;
  /* 10e58bb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58bbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e58bc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e58bc2 mov cl, byte ptr [eax + 0x10e84021] */
  CL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e58bc8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e58bcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e58bcd je 0x10e58bf8 */
  if (C.zf) goto L_10e58bf8;
  /* 10e58bcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58bd5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e58bd7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e58bd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58bdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58bdf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10e58be2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58be5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e58beb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58bee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e58bf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58bf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58bf6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e58bf8:;
  /* 10e58bf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58bfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58bfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e58c00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e58c02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e58c0b jmp 0x10e58c39 */
  goto L_10e58c39;
L_10e58c0d:;
  /* 10e58c0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58c12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e58c14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e58c16 mov cl, byte ptr [eax + 0x10e84021] */
  CL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e58c1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e58c1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e58c21 je 0x10e58c39 */
  if (C.zf) goto L_10e58c39;
  /* 10e58c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58c26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e58c2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58c2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e58c31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58c37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e58c39:;
  /* 10e58c39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58c3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e58c3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58c44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e58c46:;
  /* 10e58c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58c49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e58c4f jmp 0x10e58ac1 */
  goto L_10e58ac1;
L_10e58c54:;
  /* 10e58c54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58c58 je 0x10e58c69 */
  if (C.zf) goto L_10e58c69;
  /* 10e58c5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58c5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e58c60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e58c63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10e58c69:;
  /* 10e58c69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58c6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e58c6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e58c74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e58c76 jmp 0x10e58a63 */
  goto L_10e58a63;
L_10e58c7b:;
  /* 10e58c7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58c7f je 0x10e58c93 */
  if (C.zf) goto L_10e58c93;
  /* 10e58c81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e58c84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e58c8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e58c8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e58c93:;
  /* 10e58c93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e58c96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e58c98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58c9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e58c9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e58ca0 mov esp, ebp */
  ESP = (EBP);
  /* 10e58ca2 pop ebp */
  EBP = (pop32());
  /* 10e58ca3 ret  */
  ESPCHK(0x10e58880u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x10e58cb0 (537 bytes, 173 insns) */
void f_10e58cb0(void) {
  FTRACE(0x10e58cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e58cb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58cb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e58cbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10e58cc4 cmp dword ptr [0x10e82910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58ccb jne 0x10e58d0a */
  if (!C.zf) goto L_10e58d0a;
  /* 10e58ccd call dword ptr [0x10e8538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8538c))), 0x10e58cd3u);
  /* 10e58cd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e58cd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58cda je 0x10e58ce8 */
  if (C.zf) goto L_10e58ce8;
  /* 10e58cdc mov dword ptr [0x10e82910], 1 */
  w32((uint32_t)(0x10e82910), (0x1u));
  /* 10e58ce6 jmp 0x10e58d0a */
  goto L_10e58d0a;
L_10e58ce8:;
  /* 10e58ce8 call dword ptr [0x10e85390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85390))), 0x10e58ceeu);
  /* 10e58cee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e58cf1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58cf5 je 0x10e58d03 */
  if (C.zf) goto L_10e58d03;
  /* 10e58cf7 mov dword ptr [0x10e82910], 2 */
  w32((uint32_t)(0x10e82910), (0x2u));
  /* 10e58d01 jmp 0x10e58d0a */
  goto L_10e58d0a;
L_10e58d03:;
  /* 10e58d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58d05 jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58d0a:;
  /* 10e58d0a cmp dword ptr [0x10e82910], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e82910))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58d11 jne 0x10e58e0e */
  if (!C.zf) goto L_10e58e0e;
  /* 10e58d17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58d1b jne 0x10e58d33 */
  if (!C.zf) goto L_10e58d33;
  /* 10e58d1d call dword ptr [0x10e8538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8538c))), 0x10e58d23u);
  /* 10e58d23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e58d26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58d2a jne 0x10e58d33 */
  if (!C.zf) goto L_10e58d33;
  /* 10e58d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58d2e jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58d33:;
  /* 10e58d33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e58d36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e58d39:;
  /* 10e58d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58d3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e58d3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e58d41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58d43 je 0x10e58d65 */
  if (C.zf) goto L_10e58d65;
  /* 10e58d45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58d48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58d4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e58d4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58d51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e58d53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e58d56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58d58 jne 0x10e58d63 */
  if (!C.zf) goto L_10e58d63;
  /* 10e58d5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58d5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58d60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e58d63:;
  /* 10e58d63 jmp 0x10e58d39 */
  goto L_10e58d39;
L_10e58d65:;
  /* 10e58d65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58d68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58d6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e58d6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58d70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e58d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58d7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58d7e push edx */
  push32((uint32_t)(EDX));
  /* 10e58d7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e58d82 push eax */
  push32((uint32_t)(EAX));
  /* 10e58d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58d87 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e58d8du);
  /* 10e58d8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e58d90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58d94 je 0x10e58db4 */
  if (C.zf) goto L_10e58db4;
  /* 10e58d96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e58d98 push 0x10e7deac */
  push32((uint32_t)(0x10e7deacu));
  /* 10e58d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e58d9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58da2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58da3 call 0x10e566e0 */
  push32(0x10e58da8u); f_10e566e0();
  /* 10e58da8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58dab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e58dae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58db2 jne 0x10e58dc5 */
  if (!C.zf) goto L_10e58dc5;
L_10e58db4:;
  /* 10e58db4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e58db7 push edx */
  push32((uint32_t)(EDX));
  /* 10e58db8 call dword ptr [0x10e85398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85398))), 0x10e58dbeu);
  /* 10e58dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58dc0 jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58dc5:;
  /* 10e58dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58dc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58dcc push eax */
  push32((uint32_t)(EAX));
  /* 10e58dcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58dd4 push edx */
  push32((uint32_t)(EDX));
  /* 10e58dd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e58dd8 push eax */
  push32((uint32_t)(EAX));
  /* 10e58dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58ddd call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e58de3u);
  /* 10e58de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58de5 jne 0x10e58dfc */
  if (!C.zf) goto L_10e58dfc;
  /* 10e58de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e58de9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58dec push ecx */
  push32((uint32_t)(ECX));
  /* 10e58ded call 0x10e57170 */
  push32(0x10e58df2u); f_10e57170();
  /* 10e58df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58df5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10e58dfc:;
  /* 10e58dfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e58dff push edx */
  push32((uint32_t)(EDX));
  /* 10e58e00 call dword ptr [0x10e85398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85398))), 0x10e58e06u);
  /* 10e58e06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58e09 jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58e0e:;
  /* 10e58e0e cmp dword ptr [0x10e82910], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e82910))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58e15 jne 0x10e58ec3 */
  if (!C.zf) goto L_10e58ec3;
  /* 10e58e1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58e1f jne 0x10e58e37 */
  if (!C.zf) goto L_10e58e37;
  /* 10e58e21 call dword ptr [0x10e85390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85390))), 0x10e58e27u);
  /* 10e58e27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e58e2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58e2e jne 0x10e58e37 */
  if (!C.zf) goto L_10e58e37;
  /* 10e58e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58e32 jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58e37:;
  /* 10e58e37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58e3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e58e3d:;
  /* 10e58e3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58e40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e58e43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58e45 je 0x10e58e65 */
  if (C.zf) goto L_10e58e65;
  /* 10e58e47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58e4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58e4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e58e50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58e53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e58e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e58e58 jne 0x10e58e63 */
  if (!C.zf) goto L_10e58e63;
  /* 10e58e5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58e60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e58e63:;
  /* 10e58e63 jmp 0x10e58e3d */
  goto L_10e58e3d;
L_10e58e65:;
  /* 10e58e65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58e68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58e6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58e6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e58e71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10e58e76 push 0x10e7deac */
  push32((uint32_t)(0x10e7deacu));
  /* 10e58e7b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e58e7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58e80 push edx */
  push32((uint32_t)(EDX));
  /* 10e58e81 call 0x10e566e0 */
  push32(0x10e58e86u); f_10e566e0();
  /* 10e58e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58e89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e58e8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58e90 jne 0x10e58ea0 */
  if (!C.zf) goto L_10e58ea0;
  /* 10e58e92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58e95 push eax */
  push32((uint32_t)(EAX));
  /* 10e58e96 call dword ptr [0x10e8539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8539c))), 0x10e58e9cu);
  /* 10e58e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58e9e jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58ea0:;
  /* 10e58ea0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e58ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58ea4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10e58ea8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58eab push eax */
  push32((uint32_t)(EAX));
  /* 10e58eac call 0x10e5cfc0 */
  push32(0x10e58eb1u); f_10e5cfc0();
  /* 10e58eb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58eb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e58eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58eb8 call dword ptr [0x10e8539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8539c))), 0x10e58ebeu);
  /* 10e58ebe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e58ec1 jmp 0x10e58ec5 */
  goto L_10e58ec5;
L_10e58ec3:;
  /* 10e58ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e58ec5:;
  /* 10e58ec5 mov esp, ebp */
  ESP = (EBP);
  /* 10e58ec7 pop ebp */
  EBP = (pop32());
  /* 10e58ec8 ret  */
  ESPCHK(0x10e58cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ed0 @ 0x10e58ed0 (77 bytes, 25 insns) */
void f_10e58ed0(void) {
  FTRACE(0x10e58ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10e58ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58ed5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e58eda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58edc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58ee0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10e58ee3 push eax */
  push32((uint32_t)(EAX));
  /* 10e58ee4 call dword ptr [0x10e85384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85384))), 0x10e58eeau);
  /* 10e58eea mov dword ptr [0x10e8414c], eax */
  w32((uint32_t)(0x10e8414c), (EAX));
  /* 10e58eef cmp dword ptr [0x10e8414c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e8414c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58ef6 jne 0x10e58efc */
  if (!C.zf) goto L_10e58efc;
  /* 10e58ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58efa jmp 0x10e58f1b */
  goto L_10e58f1b;
L_10e58efc:;
  /* 10e58efc call 0x10e5a980 */
  push32(0x10e58f01u); f_10e5a980();
  /* 10e58f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e58f03 jne 0x10e58f16 */
  if (!C.zf) goto L_10e58f16;
  /* 10e58f05 mov ecx, dword ptr [0x10e8414c] */
  ECX = (r32((uint32_t)(0x10e8414c)));
  /* 10e58f0b push ecx */
  push32((uint32_t)(ECX));
  /* 10e58f0c call dword ptr [0x10e85388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85388))), 0x10e58f12u);
  /* 10e58f12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e58f14 jmp 0x10e58f1b */
  goto L_10e58f1b;
L_10e58f16:;
  /* 10e58f16 mov eax, 1 */
  EAX = (0x1u);
L_10e58f1b:;
  /* 10e58f1b pop ebp */
  EBP = (pop32());
  /* 10e58f1c ret  */
  ESPCHK(0x10e58ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f20 @ 0x10e58f20 (156 bytes, 48 insns) */
void f_10e58f20(void) {
  FTRACE(0x10e58f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58f21 mov ebp, esp */
  EBP = (ESP);
  /* 10e58f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e58f26 mov eax, dword ptr [0x10e84148] */
  EAX = (r32((uint32_t)(0x10e84148)));
  /* 10e58f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e58f2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e58f35 jmp 0x10e58f40 */
  goto L_10e58f40;
L_10e58f37:;
  /* 10e58f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58f3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58f3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e58f40:;
  /* 10e58f40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e58f43 cmp edx, dword ptr [0x10e84144] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e84144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58f49 jge 0x10e58f96 */
  if ((C.sf==C.of)) goto L_10e58f96;
  /* 10e58f4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e58f50 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10e58f55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58f58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e58f5b push ecx */
  push32((uint32_t)(ECX));
  /* 10e58f5c call dword ptr [0x10e8537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8537c))), 0x10e58f62u);
  /* 10e58f62 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e58f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58f69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58f6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e58f6f push eax */
  push32((uint32_t)(EAX));
  /* 10e58f70 call dword ptr [0x10e8537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8537c))), 0x10e58f76u);
  /* 10e58f76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58f79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e58f7c push edx */
  push32((uint32_t)(EDX));
  /* 10e58f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58f7f mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e58f84 push eax */
  push32((uint32_t)(EAX));
  /* 10e58f85 call dword ptr [0x10e85380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85380))), 0x10e58f8bu);
  /* 10e58f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e58f8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58f91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e58f94 jmp 0x10e58f37 */
  goto L_10e58f37;
L_10e58f96:;
  /* 10e58f96 mov edx, dword ptr [0x10e84148] */
  EDX = (r32((uint32_t)(0x10e84148)));
  /* 10e58f9c push edx */
  push32((uint32_t)(EDX));
  /* 10e58f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e58f9f mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e58fa4 push eax */
  push32((uint32_t)(EAX));
  /* 10e58fa5 call dword ptr [0x10e85380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85380))), 0x10e58fabu);
  /* 10e58fab mov ecx, dword ptr [0x10e8414c] */
  ECX = (r32((uint32_t)(0x10e8414c)));
  /* 10e58fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e58fb2 call dword ptr [0x10e85388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85388))), 0x10e58fb8u);
  /* 10e58fb8 mov esp, ebp */
  ESP = (EBP);
  /* 10e58fba pop ebp */
  EBP = (pop32());
  /* 10e58fbb ret  */
  ESPCHK(0x10e58f20u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10e58fc0 (73 bytes, 19 insns) */
void f_10e58fc0(void) {
  FTRACE(0x10e58fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e58fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e58fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e58fc3 cmp dword ptr [0x10e827a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58fca je 0x10e58fde */
  if (C.zf) goto L_10e58fde;
  /* 10e58fcc cmp dword ptr [0x10e827a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58fd3 jne 0x10e59007 */
  if (!C.zf) goto L_10e59007;
  /* 10e58fd5 cmp dword ptr [0x10e827a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58fdc jne 0x10e59007 */
  if (!C.zf) goto L_10e59007;
L_10e58fde:;
  /* 10e58fde push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10e58fe3 call 0x10e59010 */
  push32(0x10e58fe8u); f_10e59010();
  /* 10e58fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e58feb cmp dword ptr [0x10e82914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e58ff2 je 0x10e58ffa */
  if (C.zf) goto L_10e58ffa;
  /* 10e58ff4 call dword ptr [0x10e82914] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82914))), 0x10e58ffau);
L_10e58ffa:;
  /* 10e58ffa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e58fff call 0x10e59010 */
  push32(0x10e59004u); f_10e59010();
  /* 10e59004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59007:;
  /* 10e59007 pop ebp */
  EBP = (pop32());
  /* 10e59008 ret  */
  ESPCHK(0x10e58fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x10e59010 (447 bytes, 131 insns) */
void f_10e59010(void) {
  FTRACE(0x10e59010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59010 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59011 mov ebp, esp */
  EBP = (ESP);
  /* 10e59013 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59019 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5901a push esi */
  push32((uint32_t)(ESI));
  /* 10e5901b push edi */
  push32((uint32_t)(EDI));
  /* 10e5901c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e59023 jmp 0x10e5902e */
  goto L_10e5902e;
L_10e59025:;
  /* 10e59025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59028 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5902b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e5902e:;
  /* 10e5902e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59032 jae 0x10e59047 */
  if (!C.cf) goto L_10e59047;
  /* 10e59034 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5903a cmp edx, dword ptr [ecx*8 + 0x10e80ab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10e80ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59041 jne 0x10e59045 */
  if (!C.zf) goto L_10e59045;
  /* 10e59043 jmp 0x10e59047 */
  goto L_10e59047;
L_10e59045:;
  /* 10e59045 jmp 0x10e59025 */
  goto L_10e59025;
L_10e59047:;
  /* 10e59047 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5904a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5904d cmp ecx, dword ptr [eax*8 + 0x10e80ab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10e80ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59054 jne 0x10e591c8 */
  if (!C.zf) goto L_10e591c8;
  /* 10e5905a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59061 je 0x10e59084 */
  if (C.zf) goto L_10e59084;
  /* 10e59063 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59066 mov eax, dword ptr [edx*8 + 0x10e80abc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10e80abc)));
  /* 10e5906d push eax */
  push32((uint32_t)(EAX));
  /* 10e5906e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e59070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e59072 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e59074 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59076 call 0x10e557a0 */
  push32(0x10e5907bu); f_10e557a0();
  /* 10e5907b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5907e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59081 jne 0x10e59084 */
  if (!C.zf) goto L_10e59084;
  /* 10e59083 int3  */
  x86_unimpl("int3 @ 0x10e59083");
L_10e59084:;
  /* 10e59084 cmp dword ptr [0x10e827a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5908b je 0x10e5909f */
  if (C.zf) goto L_10e5909f;
  /* 10e5908d cmp dword ptr [0x10e827a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59094 jne 0x10e590d8 */
  if (!C.zf) goto L_10e590d8;
  /* 10e59096 cmp dword ptr [0x10e827a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5909d jne 0x10e590d8 */
  if (!C.zf) goto L_10e590d8;
L_10e5909f:;
  /* 10e5909f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e590a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10e590a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e590a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e590a8 mov eax, dword ptr [edx*8 + 0x10e80abc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10e80abc)));
  /* 10e590af push eax */
  push32((uint32_t)(EAX));
  /* 10e590b0 call 0x10e59510 */
  push32(0x10e590b5u); f_10e59510();
  /* 10e590b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e590b8 push eax */
  push32((uint32_t)(EAX));
  /* 10e590b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e590bc mov edx, dword ptr [ecx*8 + 0x10e80abc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10e80abc)));
  /* 10e590c3 push edx */
  push32((uint32_t)(EDX));
  /* 10e590c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e590c6 call dword ptr [0x10e853d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d0))), 0x10e590ccu);
  /* 10e590cc push eax */
  push32((uint32_t)(EAX));
  /* 10e590cd call dword ptr [0x10e853d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d4))), 0x10e590d3u);
  /* 10e590d3 jmp 0x10e591c8 */
  goto L_10e591c8;
L_10e590d8:;
  /* 10e590d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e590df je 0x10e591c8 */
  if (C.zf) goto L_10e591c8;
  /* 10e590e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e590ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10e590f0 push eax */
  push32((uint32_t)(EAX));
  /* 10e590f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e590f3 call dword ptr [0x10e853ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ec))), 0x10e590f9u);
  /* 10e590f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e590fb jne 0x10e59111 */
  if (!C.zf) goto L_10e59111;
  /* 10e590fd push 0x10e7d714 */
  push32((uint32_t)(0x10e7d714u));
  /* 10e59102 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10e59108 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59109 call 0x10e59690 */
  push32(0x10e5910eu); f_10e59690();
  /* 10e5910e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59111:;
  /* 10e59111 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10e59117 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e5911a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5911d push eax */
  push32((uint32_t)(EAX));
  /* 10e5911e call 0x10e59510 */
  push32(0x10e59123u); f_10e59510();
  /* 10e59123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59126 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59129 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5912c jbe 0x10e5915a */
  if ((C.cf||C.zf)) goto L_10e5915a;
  /* 10e5912e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10e59134 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59135 call 0x10e59510 */
  push32(0x10e5913au); f_10e59510();
  /* 10e5913a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5913d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59140 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10e59144 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59147 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e59149 push 0x10e7d710 */
  push32((uint32_t)(0x10e7d710u));
  /* 10e5914e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59151 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59152 call 0x10e59f00 */
  push32(0x10e59157u); f_10e59f00();
  /* 10e59157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5915a:;
  /* 10e5915a push 0x10e7e168 */
  push32((uint32_t)(0x10e7e168u));
  /* 10e5915f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e59165 push edx */
  push32((uint32_t)(EDX));
  /* 10e59166 call 0x10e59690 */
  push32(0x10e5916bu); f_10e59690();
  /* 10e5916b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5916e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59171 push eax */
  push32((uint32_t)(EAX));
  /* 10e59172 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10e59178 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59179 call 0x10e596a0 */
  push32(0x10e5917eu); f_10e596a0();
  /* 10e5917e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59181 push 0x10e7d688 */
  push32((uint32_t)(0x10e7d688u));
  /* 10e59186 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e5918c push edx */
  push32((uint32_t)(EDX));
  /* 10e5918d call 0x10e596a0 */
  push32(0x10e59192u); f_10e596a0();
  /* 10e59192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59198 mov ecx, dword ptr [eax*8 + 0x10e80abc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10e80abc)));
  /* 10e5919f push ecx */
  push32((uint32_t)(ECX));
  /* 10e591a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e591a6 push edx */
  push32((uint32_t)(EDX));
  /* 10e591a7 call 0x10e596a0 */
  push32(0x10e591acu); f_10e596a0();
  /* 10e591ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e591af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10e591b4 push 0x10e7e140 */
  push32((uint32_t)(0x10e7e140u));
  /* 10e591b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10e591bf push eax */
  push32((uint32_t)(EAX));
  /* 10e591c0 call 0x10e59e40 */
  push32(0x10e591c5u); f_10e59e40();
  /* 10e591c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e591c8:;
  /* 10e591c8 pop edi */
  EDI = (pop32());
  /* 10e591c9 pop esi */
  ESI = (pop32());
  /* 10e591ca pop ebx */
  EBX = (pop32());
  /* 10e591cb mov esp, ebp */
  ESP = (EBP);
  /* 10e591cd pop ebp */
  EBP = (pop32());
  /* 10e591ce ret  */
  ESPCHK(0x10e59010u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10e591d0 (80 bytes, 27 insns) */
void f_10e591d0(void) {
  FTRACE(0x10e591d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e591d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e591d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e591d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e591d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e591db jmp 0x10e591e6 */
  goto L_10e591e6;
L_10e591dd:;
  /* 10e591dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e591e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e591e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e591e6:;
  /* 10e591e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e591ea jae 0x10e591ff */
  if (!C.cf) goto L_10e591ff;
  /* 10e591ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e591ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e591f2 cmp edx, dword ptr [ecx*8 + 0x10e80ab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10e80ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e591f9 jne 0x10e591fd */
  if (!C.zf) goto L_10e591fd;
  /* 10e591fb jmp 0x10e591ff */
  goto L_10e591ff;
L_10e591fd:;
  /* 10e591fd jmp 0x10e591dd */
  goto L_10e591dd;
L_10e591ff:;
  /* 10e591ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59205 cmp ecx, dword ptr [eax*8 + 0x10e80ab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10e80ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5920c jne 0x10e5921a */
  if (!C.zf) goto L_10e5921a;
  /* 10e5920e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59211 mov eax, dword ptr [edx*8 + 0x10e80abc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10e80abc)));
  /* 10e59218 jmp 0x10e5921c */
  goto L_10e5921c;
L_10e5921a:;
  /* 10e5921a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5921c:;
  /* 10e5921c mov esp, ebp */
  ESP = (EBP);
  /* 10e5921e pop ebp */
  EBP = (pop32());
  /* 10e5921f ret  */
  ESPCHK(0x10e591d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10e59220 (66 bytes, 28 insns) */
void f_10e59220(void) {
  FTRACE(0x10e59220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59220 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59221 mov ebp, esp */
  EBP = (ESP);
  /* 10e59223 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59227 jne 0x10e59247 */
  if (!C.zf) goto L_10e59247;
  /* 10e59229 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5922d jge 0x10e59247 */
  if ((C.sf==C.of)) goto L_10e59247;
  /* 10e5922f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59231 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e59234 push eax */
  push32((uint32_t)(EAX));
  /* 10e59235 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59238 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5923c push edx */
  push32((uint32_t)(EDX));
  /* 10e5923d call 0x10e59270 */
  push32(0x10e59242u); f_10e59270();
  /* 10e59242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59245 jmp 0x10e5925d */
  goto L_10e5925d;
L_10e59247:;
  /* 10e59247 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e59249 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5924c push eax */
  push32((uint32_t)(EAX));
  /* 10e5924d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59250 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59254 push edx */
  push32((uint32_t)(EDX));
  /* 10e59255 call 0x10e59270 */
  push32(0x10e5925au); f_10e59270();
  /* 10e5925a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5925d:;
  /* 10e5925d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59260 pop ebp */
  EBP = (pop32());
  /* 10e59261 ret  */
  ESPCHK(0x10e59220u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10e59270 (194 bytes, 71 insns) */
void f_10e59270(void) {
  FTRACE(0x10e59270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59270 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59271 mov ebp, esp */
  EBP = (ESP);
  /* 10e59273 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59276 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5927c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59280 je 0x10e59299 */
  if (C.zf) goto L_10e59299;
  /* 10e59282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59285 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10e59288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5928b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5928e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e59291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59294 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e59296 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e59299:;
  /* 10e59299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5929c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e5929f:;
  /* 10e5929f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e592a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e592a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e592a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e592aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e592ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e592af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e592b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e592b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e592b9 jbe 0x10e592d1 */
  if ((C.cf||C.zf)) goto L_10e592d1;
  /* 10e592bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e592be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e592c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e592c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e592cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e592cf jmp 0x10e592e5 */
  goto L_10e592e5;
L_10e592d1:;
  /* 10e592d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e592d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e592d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e592dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e592e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e592e5:;
  /* 10e592e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e592e9 ja 0x10e5929f */
  if ((!C.cf&&!C.zf)) goto L_10e5929f;
  /* 10e592eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e592f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e592f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e592fa:;
  /* 10e592fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e592fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e592ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10e59302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59308 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5930a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e5930c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5930f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10e59312 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e59314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59317 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5931a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5931d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59320 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59323 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e59326 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59329 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5932c jb 0x10e592fa */
  if (C.cf) goto L_10e592fa;
  /* 10e5932e mov esp, ebp */
  ESP = (EBP);
  /* 10e59330 pop ebp */
  EBP = (pop32());
  /* 10e59331 ret  */
  ESPCHK(0x10e59270u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10e59340 (63 bytes, 24 insns) */
void f_10e59340(void) {
  FTRACE(0x10e59340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59340 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59341 mov ebp, esp */
  EBP = (ESP);
  /* 10e59343 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59344 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59348 jne 0x10e59359 */
  if (!C.zf) goto L_10e59359;
  /* 10e5934a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5934e jge 0x10e59359 */
  if ((C.sf==C.of)) goto L_10e59359;
  /* 10e59350 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e59357 jmp 0x10e59360 */
  goto L_10e59360;
L_10e59359:;
  /* 10e59359 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e59360:;
  /* 10e59360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59363 push eax */
  push32((uint32_t)(EAX));
  /* 10e59364 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e59367 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59368 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5936b push edx */
  push32((uint32_t)(EDX));
  /* 10e5936c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5936f push eax */
  push32((uint32_t)(EAX));
  /* 10e59370 call 0x10e59270 */
  push32(0x10e59375u); f_10e59270();
  /* 10e59375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59378 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5937b mov esp, ebp */
  ESP = (EBP);
  /* 10e5937d pop ebp */
  EBP = (pop32());
  /* 10e5937e ret  */
  ESPCHK(0x10e59340u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10e59380 (30 bytes, 14 insns) */
void f_10e59380(void) {
  FTRACE(0x10e59380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59380 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59381 mov ebp, esp */
  EBP = (ESP);
  /* 10e59383 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e59385 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e59388 push eax */
  push32((uint32_t)(EAX));
  /* 10e59389 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5938c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5938d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59390 push edx */
  push32((uint32_t)(EDX));
  /* 10e59391 call 0x10e59270 */
  push32(0x10e59396u); f_10e59270();
  /* 10e59396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59399 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5939c pop ebp */
  EBP = (pop32());
  /* 10e5939d ret  */
  ESPCHK(0x10e59380u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10e593a0 (72 bytes, 28 insns) */
void f_10e593a0(void) {
  FTRACE(0x10e593a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e593a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e593a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e593a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e593a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e593a8 jne 0x10e593c1 */
  if (!C.zf) goto L_10e593c1;
  /* 10e593aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e593ae jg 0x10e593c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e593c1;
  /* 10e593b0 jl 0x10e593b8 */
  if ((C.sf!=C.of)) goto L_10e593b8;
  /* 10e593b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e593b6 jae 0x10e593c1 */
  if (!C.cf) goto L_10e593c1;
L_10e593b8:;
  /* 10e593b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e593bf jmp 0x10e593c8 */
  goto L_10e593c8;
L_10e593c1:;
  /* 10e593c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e593c8:;
  /* 10e593c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e593cb push eax */
  push32((uint32_t)(EAX));
  /* 10e593cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e593cf push ecx */
  push32((uint32_t)(ECX));
  /* 10e593d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e593d3 push edx */
  push32((uint32_t)(EDX));
  /* 10e593d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e593d7 push eax */
  push32((uint32_t)(EAX));
  /* 10e593d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e593db push ecx */
  push32((uint32_t)(ECX));
  /* 10e593dc call 0x10e593f0 */
  push32(0x10e593e1u); f_10e593f0();
  /* 10e593e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e593e4 mov esp, ebp */
  ESP = (EBP);
  /* 10e593e6 pop ebp */
  EBP = (pop32());
  /* 10e593e7 ret  */
  ESPCHK(0x10e593a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10e593f0 (242 bytes, 91 insns) */
void f_10e593f0(void) {
  FTRACE(0x10e593f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e593f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e593f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e593f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e593f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e593f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e593fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59400 je 0x10e59424 */
  if (C.zf) goto L_10e59424;
  /* 10e59402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59405 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10e59408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5940b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5940e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e59411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e59416 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59419 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5941c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5941e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e59421 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e59424:;
  /* 10e59424 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59427 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e5942a:;
  /* 10e5942a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5942d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5942f push ecx */
  push32((uint32_t)(ECX));
  /* 10e59430 push eax */
  push32((uint32_t)(EAX));
  /* 10e59431 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59434 push edx */
  push32((uint32_t)(EDX));
  /* 10e59435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59438 push eax */
  push32((uint32_t)(EAX));
  /* 10e59439 call 0x10e5d370 */
  push32(0x10e5943eu); f_10e5d370();
  /* 10e5943e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59441 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e59444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e59446 push edx */
  push32((uint32_t)(EDX));
  /* 10e59447 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5944b push eax */
  push32((uint32_t)(EAX));
  /* 10e5944c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5944f push ecx */
  push32((uint32_t)(ECX));
  /* 10e59450 call 0x10e5d300 */
  push32(0x10e59455u); f_10e5d300();
  /* 10e59455 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e59458 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e5945b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5945f jbe 0x10e59477 */
  if ((C.cf||C.zf)) goto L_10e59477;
  /* 10e59461 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59464 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5946a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e5946c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5946f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59472 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e59475 jmp 0x10e5948b */
  goto L_10e5948b;
L_10e59477:;
  /* 10e59477 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5947a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5947d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59480 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e59482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59488 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5948b:;
  /* 10e5948b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5948f ja 0x10e5942a */
  if ((!C.cf&&!C.zf)) goto L_10e5942a;
  /* 10e59491 jb 0x10e59499 */
  if (C.cf) goto L_10e59499;
  /* 10e59493 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59497 ja 0x10e5942a */
  if ((!C.cf&&!C.zf)) goto L_10e5942a;
L_10e59499:;
  /* 10e59499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5949c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e5949f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e594a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e594a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e594a8:;
  /* 10e594a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e594ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e594ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10e594b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e594b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e594b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e594b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e594ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e594bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10e594c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e594c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e594c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e594c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e594cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e594ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e594d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e594d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e594d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e594da jb 0x10e594a8 */
  if (C.cf) goto L_10e594a8;
  /* 10e594dc mov esp, ebp */
  ESP = (EBP);
  /* 10e594de pop ebp */
  EBP = (pop32());
  /* 10e594df ret 0x14 */
  ESPCHK(0x10e593f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10e594f0 (31 bytes, 15 insns) */
void f_10e594f0(void) {
  FTRACE(0x10e594f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e594f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e594f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e594f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e594f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e594f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e594f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e594fc push ecx */
  push32((uint32_t)(ECX));
  /* 10e594fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59500 push edx */
  push32((uint32_t)(EDX));
  /* 10e59501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59504 push eax */
  push32((uint32_t)(EAX));
  /* 10e59505 call 0x10e593f0 */
  push32(0x10e5950au); f_10e593f0();
  /* 10e5950a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5950d pop ebp */
  EBP = (pop32());
  /* 10e5950e ret  */
  ESPCHK(0x10e594f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10e59510 (123 bytes, 44 insns) */
void f_10e59510(void) {
  FTRACE(0x10e59510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59510 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e59514 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e5951a je 0x10e59530 */
  if (C.zf) goto L_10e59530;
L_10e5951c:;
  /* 10e5951c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10e5951e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e5951f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e59521 je 0x10e59563 */
  if (C.zf) goto L_10e59563;
  /* 10e59523 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e59529 jne 0x10e5951c */
  if (!C.zf) goto L_10e5951c;
  /* 10e5952b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e59530:;
  /* 10e59530 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e59532 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e59537 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59539 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5953c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5953e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59541 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e59546 je 0x10e59530 */
  if (C.zf) goto L_10e59530;
  /* 10e59548 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e5954b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e5954d je 0x10e59581 */
  if (C.zf) goto L_10e59581;
  /* 10e5954f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e59551 je 0x10e59577 */
  if (C.zf) goto L_10e59577;
  /* 10e59553 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e59558 je 0x10e5956d */
  if (C.zf) goto L_10e5956d;
  /* 10e5955a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e5955f je 0x10e59563 */
  if (C.zf) goto L_10e59563;
  /* 10e59561 jmp 0x10e59530 */
  goto L_10e59530;
L_10e59563:;
  /* 10e59563 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10e59566 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e5956a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5956c ret  */
  ESPCHK(0x10e59510u, _esp0);
  ESP += 4; return;
L_10e5956d:;
  /* 10e5956d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10e59570 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e59574 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59576 ret  */
  ESPCHK(0x10e59510u, _esp0);
  ESP += 4; return;
L_10e59577:;
  /* 10e59577 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10e5957a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e5957e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59580 ret  */
  ESPCHK(0x10e59510u, _esp0);
  ESP += 4; return;
L_10e59581:;
  /* 10e59581 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10e59584 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e59588 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5958a ret  */
  ESPCHK(0x10e59510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009590 @ 0x10e59590 (249 bytes, 93 insns) */
void f_10e59590(void) {
  FTRACE(0x10e59590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59591 mov ebp, esp */
  EBP = (ESP);
  /* 10e59593 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59596 push ebx */
  push32((uint32_t)(EBX));
  /* 10e59597 push esi */
  push32((uint32_t)(ESI));
  /* 10e59598 push edi */
  push32((uint32_t)(EDI));
  /* 10e59599 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e5959c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e5959f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10e595a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10e595a5:;
  /* 10e595a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e595a9 jne 0x10e595c9 */
  if (!C.zf) goto L_10e595c9;
  /* 10e595ab push 0x10e7e1a0 */
  push32((uint32_t)(0x10e7e1a0u));
  /* 10e595b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e595b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10e595b4 push 0x10e7e194 */
  push32((uint32_t)(0x10e7e194u));
  /* 10e595b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e595bb call 0x10e557a0 */
  push32(0x10e595c0u); f_10e557a0();
  /* 10e595c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e595c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e595c6 jne 0x10e595c9 */
  if (!C.zf) goto L_10e595c9;
  /* 10e595c8 int3  */
  x86_unimpl("int3 @ 0x10e595c8");
L_10e595c9:;
  /* 10e595c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e595cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e595cd jne 0x10e595a5 */
  if (!C.zf) goto L_10e595a5;
L_10e595cf:;
  /* 10e595cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e595d3 jne 0x10e595f3 */
  if (!C.zf) goto L_10e595f3;
  /* 10e595d5 push 0x10e7e184 */
  push32((uint32_t)(0x10e7e184u));
  /* 10e595da push 0 */
  push32((uint32_t)(0x0u));
  /* 10e595dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e595de push 0x10e7e194 */
  push32((uint32_t)(0x10e7e194u));
  /* 10e595e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e595e5 call 0x10e557a0 */
  push32(0x10e595eau); f_10e557a0();
  /* 10e595ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e595ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e595f0 jne 0x10e595f3 */
  if (!C.zf) goto L_10e595f3;
  /* 10e595f2 int3  */
  x86_unimpl("int3 @ 0x10e595f2");
L_10e595f3:;
  /* 10e595f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e595f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e595f7 jne 0x10e595cf */
  if (!C.zf) goto L_10e595cf;
  /* 10e595f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e595fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10e59603 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59609 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e5960c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5960f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59612 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e59614 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59617 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5961a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e5961d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e59620 push edx */
  push32((uint32_t)(EDX));
  /* 10e59621 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e59624 push eax */
  push32((uint32_t)(EAX));
  /* 10e59625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59628 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59629 call 0x10e5d670 */
  push32(0x10e5962eu); f_10e5d670();
  /* 10e5962e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59631 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e59634 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59637 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5963a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5963d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59640 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e59643 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59646 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5964a jl 0x10e5966e */
  if ((C.sf!=C.of)) goto L_10e5966e;
  /* 10e5964c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5964f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e59651 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e59654 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e59656 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5965c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e5965f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59662 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e59664 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59667 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5966a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e5966c jmp 0x10e5967f */
  goto L_10e5967f;
L_10e5966e:;
  /* 10e5966e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59671 push eax */
  push32((uint32_t)(EAX));
  /* 10e59672 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e59674 call 0x10e5d3f0 */
  push32(0x10e59679u); f_10e5d3f0();
  /* 10e59679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5967c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10e5967f:;
  /* 10e5967f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e59682 pop edi */
  EDI = (pop32());
  /* 10e59683 pop esi */
  ESI = (pop32());
  /* 10e59684 pop ebx */
  EBX = (pop32());
  /* 10e59685 mov esp, ebp */
  ESP = (EBP);
  /* 10e59687 pop ebp */
  EBP = (pop32());
  /* 10e59688 ret  */
  ESPCHK(0x10e59590u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x10e59690 (7 bytes, 3 insns) */
void f_10e59690(void) {
  FTRACE(0x10e59690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59690 push edi */
  push32((uint32_t)(EDI));
  /* 10e59691 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10e59695 jmp 0x10e59701 */
  jmp_ind(0x10e59701u); return;
}

/* FUN_100096a0 @ 0x10e596a0 (224 bytes, 84 insns) */
void f_10e596a0(void) {
  FTRACE(0x10e596a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e596a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e596a4 push edi */
  push32((uint32_t)(EDI));
  /* 10e596a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e596ab je 0x10e596bc */
  if (C.zf) goto L_10e596bc;
L_10e596ad:;
  /* 10e596ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10e596af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e596b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e596b2 je 0x10e596ef */
  if (C.zf) goto L_10e596ef;
  /* 10e596b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e596ba jne 0x10e596ad */
  if (!C.zf) goto L_10e596ad;
L_10e596bc:;
  /* 10e596bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e596be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e596c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e596c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e596c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e596ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e596cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e596d2 je 0x10e596bc */
  if (C.zf) goto L_10e596bc;
  /* 10e596d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e596d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e596d9 je 0x10e596fe */
  if (C.zf) goto L_10e596fe;
  /* 10e596db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e596dd je 0x10e596f9 */
  if (C.zf) goto L_10e596f9;
  /* 10e596df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e596e4 je 0x10e596f4 */
  if (C.zf) goto L_10e596f4;
  /* 10e596e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e596eb je 0x10e596ef */
  if (C.zf) goto L_10e596ef;
  /* 10e596ed jmp 0x10e596bc */
  goto L_10e596bc;
L_10e596ef:;
  /* 10e596ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10e596f2 jmp 0x10e59701 */
  goto L_10e59701;
L_10e596f4:;
  /* 10e596f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10e596f7 jmp 0x10e59701 */
  goto L_10e59701;
L_10e596f9:;
  /* 10e596f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10e596fc jmp 0x10e59701 */
  goto L_10e59701;
L_10e596fe:;
  /* 10e596fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10e59701:;
  /* 10e59701 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e59705 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e5970b je 0x10e59726 */
  if (C.zf) goto L_10e59726;
L_10e5970d:;
  /* 10e5970d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5970f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e59710 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e59712 je 0x10e59778 */
  if (C.zf) goto L_10e59778;
  /* 10e59714 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10e59716 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e59717 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e5971d jne 0x10e5970d */
  if (!C.zf) goto L_10e5970d;
  /* 10e5971f jmp 0x10e59726 */
  goto L_10e59726;
L_10e59721:;
  /* 10e59721 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e59723 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e59726:;
  /* 10e59726 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e5972b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e5972d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5972f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e59732 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e59734 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e59736 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59739 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e5973e je 0x10e59721 */
  if (C.zf) goto L_10e59721;
  /* 10e59740 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e59742 je 0x10e59778 */
  if (C.zf) goto L_10e59778;
  /* 10e59744 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10e59746 je 0x10e5976f */
  if (C.zf) goto L_10e5976f;
  /* 10e59748 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e5974e je 0x10e59762 */
  if (C.zf) goto L_10e59762;
  /* 10e59750 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e59756 je 0x10e5975a */
  if (C.zf) goto L_10e5975a;
  /* 10e59758 jmp 0x10e59721 */
  goto L_10e59721;
L_10e5975a:;
  /* 10e5975a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e5975c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e59760 pop edi */
  EDI = (pop32());
  /* 10e59761 ret  */
  ESPCHK(0x10e596a0u, _esp0);
  ESP += 4; return;
L_10e59762:;
  /* 10e59762 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10e59765 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e59769 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10e5976d pop edi */
  EDI = (pop32());
  /* 10e5976e ret  */
  ESPCHK(0x10e596a0u, _esp0);
  ESP += 4; return;
L_10e5976f:;
  /* 10e5976f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10e59772 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e59776 pop edi */
  EDI = (pop32());
  /* 10e59777 ret  */
  ESPCHK(0x10e596a0u, _esp0);
  ESP += 4; return;
L_10e59778:;
  /* 10e59778 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10e5977a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e5977e pop edi */
  EDI = (pop32());
  /* 10e5977f ret  */
  ESPCHK(0x10e596a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009780 @ 0x10e59780 (243 bytes, 91 insns) */
void f_10e59780(void) {
  FTRACE(0x10e59780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59780 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59781 mov ebp, esp */
  EBP = (ESP);
  /* 10e59783 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59786 push ebx */
  push32((uint32_t)(EBX));
  /* 10e59787 push esi */
  push32((uint32_t)(ESI));
  /* 10e59788 push edi */
  push32((uint32_t)(EDI));
  /* 10e59789 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e5978c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e5978f:;
  /* 10e5978f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59793 jne 0x10e597b3 */
  if (!C.zf) goto L_10e597b3;
  /* 10e59795 push 0x10e7e1a0 */
  push32((uint32_t)(0x10e7e1a0u));
  /* 10e5979a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5979c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e5979e push 0x10e7e1b0 */
  push32((uint32_t)(0x10e7e1b0u));
  /* 10e597a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e597a5 call 0x10e557a0 */
  push32(0x10e597aau); f_10e557a0();
  /* 10e597aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e597ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e597b0 jne 0x10e597b3 */
  if (!C.zf) goto L_10e597b3;
  /* 10e597b2 int3  */
  x86_unimpl("int3 @ 0x10e597b2");
L_10e597b3:;
  /* 10e597b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e597b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e597b7 jne 0x10e5978f */
  if (!C.zf) goto L_10e5978f;
L_10e597b9:;
  /* 10e597b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e597bd jne 0x10e597dd */
  if (!C.zf) goto L_10e597dd;
  /* 10e597bf push 0x10e7e184 */
  push32((uint32_t)(0x10e7e184u));
  /* 10e597c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e597c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e597c8 push 0x10e7e1b0 */
  push32((uint32_t)(0x10e7e1b0u));
  /* 10e597cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e597cf call 0x10e557a0 */
  push32(0x10e597d4u); f_10e557a0();
  /* 10e597d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e597d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e597da jne 0x10e597dd */
  if (!C.zf) goto L_10e597dd;
  /* 10e597dc int3  */
  x86_unimpl("int3 @ 0x10e597dc");
L_10e597dd:;
  /* 10e597dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e597df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e597e1 jne 0x10e597b9 */
  if (!C.zf) goto L_10e597b9;
  /* 10e597e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e597e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10e597ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e597f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e597f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e597f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e597f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e597fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e597fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59801 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59804 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e59807 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5980a push ecx */
  push32((uint32_t)(ECX));
  /* 10e5980b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5980e push edx */
  push32((uint32_t)(EDX));
  /* 10e5980f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59812 push eax */
  push32((uint32_t)(EAX));
  /* 10e59813 call 0x10e5d670 */
  push32(0x10e59818u); f_10e5d670();
  /* 10e59818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5981b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5981e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59821 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e59824 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59827 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5982a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e5982d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59830 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59834 jl 0x10e59858 */
  if ((C.sf!=C.of)) goto L_10e59858;
  /* 10e59836 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5983b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e5983e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e59840 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e59846 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e59849 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5984c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5984e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59851 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e59854 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e59856 jmp 0x10e59869 */
  goto L_10e59869;
L_10e59858:;
  /* 10e59858 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5985b push edx */
  push32((uint32_t)(EDX));
  /* 10e5985c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5985e call 0x10e5d3f0 */
  push32(0x10e59863u); f_10e5d3f0();
  /* 10e59863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59866 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10e59869:;
  /* 10e59869 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5986c pop edi */
  EDI = (pop32());
  /* 10e5986d pop esi */
  ESI = (pop32());
  /* 10e5986e pop ebx */
  EBX = (pop32());
  /* 10e5986f mov esp, ebp */
  ESP = (EBP);
  /* 10e59871 pop ebp */
  EBP = (pop32());
  /* 10e59872 ret  */
  ESPCHK(0x10e59780u, _esp0);
  ESP += 4; return;
}

/* FUN_10009880 @ 0x10e59880 (47 bytes, 17 insns) */
void f_10e59880(void) {
  FTRACE(0x10e59880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59880 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59881 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59886 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10e5988a jb 0x10e598a0 */
  if (C.cf) goto L_10e598a0;
L_10e5988c:;
  /* 10e5988c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59892 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59897 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10e59899 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5989e jae 0x10e5988c */
  if (!C.cf) goto L_10e5988c;
L_10e598a0:;
  /* 10e598a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e598a2 mov eax, esp */
  EAX = (ESP);
  /* 10e598a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10e598a6 mov esp, ecx */
  ESP = (ECX);
  /* 10e598a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e598aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e598ad push eax */
  push32((uint32_t)(EAX));
  /* 10e598ae ret  */
  ESPCHK(0x10e59880u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x10e598b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10e598b0(void) {
  FTRACE(0x10e598b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e598b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e598b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e598b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e598b6 push esi */
  push32((uint32_t)(ESI));
  /* 10e598b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598bb je 0x10e598c3 */
  if (C.zf) goto L_10e598c3;
  /* 10e598bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598c1 jne 0x10e598c8 */
  if (!C.zf) goto L_10e598c8;
L_10e598c3:;
  /* 10e598c3 jmp 0x10e59a98 */
  goto L_10e59a98;
L_10e598c8:;
  /* 10e598c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598cc je 0x10e598e4 */
  if (C.zf) goto L_10e598e4;
  /* 10e598ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598d2 je 0x10e598e4 */
  if (C.zf) goto L_10e598e4;
  /* 10e598d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598d8 je 0x10e598e4 */
  if (C.zf) goto L_10e598e4;
  /* 10e598da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598de jne 0x10e599c1 */
  if (!C.zf) goto L_10e599c1;
L_10e598e4:;
  /* 10e598e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e598e6 call 0x10e5a0e0 */
  push32(0x10e598ebu); f_10e5a0e0();
  /* 10e598eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e598ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598f2 je 0x10e598fa */
  if (C.zf) goto L_10e598fa;
  /* 10e598f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e598f8 jne 0x10e5993f */
  if (!C.zf) goto L_10e5993f;
L_10e598fa:;
  /* 10e598fa cmp dword ptr [0x10e82928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59901 jne 0x10e5993f */
  if (!C.zf) goto L_10e5993f;
  /* 10e59903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59905 push 0x10e59ae0 */
  push32((uint32_t)(0x10e59ae0u));
  /* 10e5990a call dword ptr [0x10e85378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85378))), 0x10e59910u);
  /* 10e59910 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59913 jne 0x10e59921 */
  if (!C.zf) goto L_10e59921;
  /* 10e59915 mov dword ptr [0x10e82928], 1 */
  w32((uint32_t)(0x10e82928), (0x1u));
  /* 10e5991f jmp 0x10e5993f */
  goto L_10e5993f;
L_10e59921:;
  /* 10e59921 call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e59927u);
  /* 10e59927 mov esi, eax */
  ESI = (EAX);
  /* 10e59929 call 0x10e5e5c0 */
  push32(0x10e5992eu); f_10e5e5c0();
  /* 10e5992e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10e59930 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59932 call 0x10e5a180 */
  push32(0x10e59937u); f_10e5a180();
  /* 10e59937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5993a jmp 0x10e59a98 */
  goto L_10e59a98;
L_10e5993f:;
  /* 10e5993f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59942 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e59945 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e59948 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5994b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e5994e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59952 ja 0x10e599b2 */
  if ((!C.cf&&!C.zf)) goto L_10e599b2;
  /* 10e59954 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e59957 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e59959 mov dl, byte ptr [eax + 0x10e59abf] */
  DL = (r8((uint32_t)(EAX + 0x10e59abf)));
  /* 10e5995f jmp dword ptr [edx*4 + 0x10e59aab] */
  switch (EDX) {
    case 0: goto L_10e59966;
    case 1: goto L_10e599a0;
    case 2: goto L_10e5997a;
    case 3: goto L_10e5998d;
    case 4: goto L_10e599b2;
    default: x86_unimpl("switch@0x10e5995f out of table"); return;
  }
L_10e59966:;
  /* 10e59966 mov ecx, dword ptr [0x10e82918] */
  ECX = (r32((uint32_t)(0x10e82918)));
  /* 10e5996c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e5996f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59972 mov dword ptr [0x10e82918], edx */
  w32((uint32_t)(0x10e82918), (EDX));
  /* 10e59978 jmp 0x10e599b2 */
  goto L_10e599b2;
L_10e5997a:;
  /* 10e5997a mov eax, dword ptr [0x10e8291c] */
  EAX = (r32((uint32_t)(0x10e8291c)));
  /* 10e5997f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59982 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59985 mov dword ptr [0x10e8291c], ecx */
  w32((uint32_t)(0x10e8291c), (ECX));
  /* 10e5998b jmp 0x10e599b2 */
  goto L_10e599b2;
L_10e5998d:;
  /* 10e5998d mov edx, dword ptr [0x10e82920] */
  EDX = (r32((uint32_t)(0x10e82920)));
  /* 10e59993 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e59996 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59999 mov dword ptr [0x10e82920], eax */
  w32((uint32_t)(0x10e82920), (EAX));
  /* 10e5999e jmp 0x10e599b2 */
  goto L_10e599b2;
L_10e599a0:;
  /* 10e599a0 mov ecx, dword ptr [0x10e82924] */
  ECX = (r32((uint32_t)(0x10e82924)));
  /* 10e599a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e599a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e599ac mov dword ptr [0x10e82924], edx */
  w32((uint32_t)(0x10e82924), (EDX));
L_10e599b2:;
  /* 10e599b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e599b4 call 0x10e5a180 */
  push32(0x10e599b9u); f_10e5a180();
  /* 10e599b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e599bc jmp 0x10e59a93 */
  goto L_10e59a93;
L_10e599c1:;
  /* 10e599c1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e599c5 je 0x10e599d8 */
  if (C.zf) goto L_10e599d8;
  /* 10e599c7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e599cb je 0x10e599d8 */
  if (C.zf) goto L_10e599d8;
  /* 10e599cd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e599d1 je 0x10e599d8 */
  if (C.zf) goto L_10e599d8;
  /* 10e599d3 jmp 0x10e59a98 */
  goto L_10e59a98;
L_10e599d8:;
  /* 10e599d8 call 0x10e56120 */
  push32(0x10e599ddu); f_10e56120();
  /* 10e599dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e599e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e599e3 cmp dword ptr [eax + 0x50], 0x10e80c10 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10e80c10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e599ea jne 0x10e59a35 */
  if (!C.zf) goto L_10e59a35;
  /* 10e599ec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10e599f1 push 0x10e7e1bc */
  push32((uint32_t)(0x10e7e1bcu));
  /* 10e599f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e599f8 mov ecx, dword ptr [0x10e80c90] */
  ECX = (r32((uint32_t)(0x10e80c90)));
  /* 10e599fe push ecx */
  push32((uint32_t)(ECX));
  /* 10e599ff call 0x10e566e0 */
  push32(0x10e59a04u); f_10e566e0();
  /* 10e59a04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59a07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59a0a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10e59a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59a10 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59a14 je 0x10e59a33 */
  if (C.zf) goto L_10e59a33;
  /* 10e59a16 mov ecx, dword ptr [0x10e80c90] */
  ECX = (r32((uint32_t)(0x10e80c90)));
  /* 10e59a1c push ecx */
  push32((uint32_t)(ECX));
  /* 10e59a1d push 0x10e80c10 */
  push32((uint32_t)(0x10e80c10u));
  /* 10e59a22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59a25 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10e59a28 push eax */
  push32((uint32_t)(EAX));
  /* 10e59a29 call 0x10e5cfc0 */
  push32(0x10e59a2eu); f_10e5cfc0();
  /* 10e59a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59a31 jmp 0x10e59a35 */
  goto L_10e59a35;
L_10e59a33:;
  /* 10e59a33 jmp 0x10e59a98 */
  goto L_10e59a98;
L_10e59a35:;
  /* 10e59a35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59a38 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e59a3b push edx */
  push32((uint32_t)(EDX));
  /* 10e59a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59a3f push eax */
  push32((uint32_t)(EAX));
  /* 10e59a40 call 0x10e59dc0 */
  push32(0x10e59a45u); f_10e59dc0();
  /* 10e59a45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59a48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e59a4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59a4f jne 0x10e59a53 */
  if (!C.zf) goto L_10e59a53;
  /* 10e59a51 jmp 0x10e59a98 */
  goto L_10e59a98;
L_10e59a53:;
  /* 10e59a53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59a56 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e59a59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e59a5c:;
  /* 10e59a5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59a5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e59a62 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59a65 jne 0x10e59a93 */
  if (!C.zf) goto L_10e59a93;
  /* 10e59a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59a6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59a6d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e59a70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59a73 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59a76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e59a79 mov edx, dword ptr [0x10e80c94] */
  EDX = (r32((uint32_t)(0x10e80c94)));
  /* 10e59a7f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e59a82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59a85 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10e59a88 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59a8a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59a8d jb 0x10e59a91 */
  if (C.cf) goto L_10e59a91;
  /* 10e59a8f jmp 0x10e59a93 */
  goto L_10e59a93;
L_10e59a91:;
  /* 10e59a91 jmp 0x10e59a5c */
  goto L_10e59a5c;
L_10e59a93:;
  /* 10e59a93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59a96 jmp 0x10e59aa6 */
  goto L_10e59aa6;
L_10e59a98:;
  /* 10e59a98 call 0x10e5e5b0 */
  push32(0x10e59a9du); f_10e5e5b0();
  /* 10e59a9d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10e59aa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e59aa6:;
  /* 10e59aa6 pop esi */
  ESI = (pop32());
  /* 10e59aa7 mov esp, ebp */
  ESP = (EBP);
  /* 10e59aa9 pop ebp */
  EBP = (pop32());
  /* 10e59aaa ret  */
  ESPCHK(0x10e598b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ae0 @ 0x10e59ae0 (146 bytes, 45 insns) */
void f_10e59ae0(void) {
  FTRACE(0x10e59ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10e59ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59ae8 call 0x10e5a0e0 */
  push32(0x10e59aedu); f_10e5a0e0();
  /* 10e59aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59af0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59af4 jne 0x10e59b0e */
  if (!C.zf) goto L_10e59b0e;
  /* 10e59af6 mov dword ptr [ebp - 8], 0x10e82918 */
  w32((uint32_t)(EBP + -0x8), (0x10e82918u));
  /* 10e59afd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59b00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e59b02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e59b05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e59b0c jmp 0x10e59b24 */
  goto L_10e59b24;
L_10e59b0e:;
  /* 10e59b0e mov dword ptr [ebp - 8], 0x10e8291c */
  w32((uint32_t)(EBP + -0x8), (0x10e8291cu));
  /* 10e59b15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59b18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e59b1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59b1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10e59b24:;
  /* 10e59b24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59b28 jne 0x10e59b38 */
  if (!C.zf) goto L_10e59b38;
  /* 10e59b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59b2c call 0x10e5a180 */
  push32(0x10e59b31u); f_10e5a180();
  /* 10e59b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e59b36 jmp 0x10e59b6c */
  goto L_10e59b6c;
L_10e59b38:;
  /* 10e59b38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59b3c je 0x10e59b5d */
  if (C.zf) goto L_10e59b5d;
  /* 10e59b3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59b41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10e59b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59b49 call 0x10e5a180 */
  push32(0x10e59b4eu); f_10e5a180();
  /* 10e59b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59b54 push edx */
  push32((uint32_t)(EDX));
  /* 10e59b55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10e59b58u);
  /* 10e59b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59b5b jmp 0x10e59b67 */
  goto L_10e59b67;
L_10e59b5d:;
  /* 10e59b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59b5f call 0x10e5a180 */
  push32(0x10e59b64u); f_10e5a180();
  /* 10e59b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59b67:;
  /* 10e59b67 mov eax, 1 */
  EAX = (0x1u);
L_10e59b6c:;
  /* 10e59b6c mov esp, ebp */
  ESP = (EBP);
  /* 10e59b6e pop ebp */
  EBP = (pop32());
  /* 10e59b6f ret 4 */
  ESPCHK(0x10e59ae0u, _esp0);
  ESP += 8; return;
}

