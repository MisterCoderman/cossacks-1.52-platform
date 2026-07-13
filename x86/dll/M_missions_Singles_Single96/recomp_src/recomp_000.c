#include "recomp.h"

/* OnInit @ 0x1206100f (5 bytes, 1 insns) */
void f_1206100f(void) {
  FTRACE(0x1206100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206100f jmp 0x12061890 */
  f_12061890(); return;
}

/* thunk_FUN_100012d0 @ 0x12061014 (5 bytes, 1 insns) */
void f_12061014(void) {
  FTRACE(0x12061014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061014 jmp 0x120612d0 */
  f_120612d0(); return;
}

/* thunk_FUN_10001350 @ 0x12061019 (5 bytes, 1 insns) */
void f_12061019(void) {
  FTRACE(0x12061019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061019 jmp 0x12061350 */
  f_12061350(); return;
}

/* thunk_FUN_100010c0 @ 0x1206101e (5 bytes, 1 insns) */
void f_1206101e(void) {
  FTRACE(0x1206101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206101e jmp 0x120610c0 */
  f_120610c0(); return;
}

/* thunk_FUN_10001590 @ 0x12061023 (5 bytes, 1 insns) */
void f_12061023(void) {
  FTRACE(0x12061023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061023 jmp 0x12061590 */
  f_12061590(); return;
}

/* thunk_FUN_10001120 @ 0x12061028 (5 bytes, 1 insns) */
void f_12061028(void) {
  FTRACE(0x12061028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061028 jmp 0x12061120 */
  f_12061120(); return;
}

/* thunk_FUN_10001540 @ 0x1206102d (5 bytes, 1 insns) */
void f_1206102d(void) {
  FTRACE(0x1206102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206102d jmp 0x12061540 */
  f_12061540(); return;
}

/* thunk_FUN_10001450 @ 0x12061032 (5 bytes, 1 insns) */
void f_12061032(void) {
  FTRACE(0x12061032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061032 jmp 0x12061450 */
  f_12061450(); return;
}

/* ProcessScenary @ 0x1206103c (5 bytes, 1 insns) */
void f_1206103c(void) {
  FTRACE(0x1206103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206103c jmp 0x12062000 */
  f_12062000(); return;
}

/* thunk_FUN_10001260 @ 0x12061050 (5 bytes, 1 insns) */
void f_12061050(void) {
  FTRACE(0x12061050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061050 jmp 0x12061260 */
  f_12061260(); return;
}

/* thunk_FUN_10001760 @ 0x12061055 (5 bytes, 1 insns) */
void f_12061055(void) {
  FTRACE(0x12061055u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061055 jmp 0x12061760 */
  f_12061760(); return;
}

/* thunk_FUN_100011d0 @ 0x1206105a (5 bytes, 1 insns) */
void f_1206105a(void) {
  FTRACE(0x1206105au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206105a jmp 0x120611d0 */
  f_120611d0(); return;
}

/* FUN_100010c0 @ 0x120610c0 (67 bytes, 26 insns) */
void f_120610c0(void) {
  FTRACE(0x120610c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120610c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120610c1 mov ebp, esp */
  EBP = (ESP);
  /* 120610c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120610c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120610c7 push esi */
  push32((uint32_t)(ESI));
  /* 120610c8 push edi */
  push32((uint32_t)(EDI));
  /* 120610c9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120610cc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120610d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120610d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120610d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120610db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120610de cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120610e2 je 0x120610e6 */
  if (C.zf) goto L_120610e6;
  /* 120610e4 jmp 0x120610eb */
  goto L_120610eb;
L_120610e6:;
  /* 120610e6 call 0x1206100f */
  push32(0x120610ebu); f_1206100f();
L_120610eb:;
  /* 120610eb mov eax, 1 */
  EAX = (0x1u);
  /* 120610f0 pop edi */
  EDI = (pop32());
  /* 120610f1 pop esi */
  ESI = (pop32());
  /* 120610f2 pop ebx */
  EBX = (pop32());
  /* 120610f3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120610f6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120610f8 call 0x12064500 */
  push32(0x120610fdu); f_12064500();
  /* 120610fd mov esp, ebp */
  ESP = (EBP);
  /* 120610ff pop ebp */
  EBP = (pop32());
  /* 12061100 ret 0xc */
  ESPCHK(0x120610c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001120 @ 0x12061120 (133 bytes, 49 insns) */
void f_12061120(void) {
  FTRACE(0x12061120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061120 push ebp */
  push32((uint32_t)(EBP));
  /* 12061121 mov ebp, esp */
  EBP = (ESP);
  /* 12061123 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061126 push ebx */
  push32((uint32_t)(EBX));
  /* 12061127 push esi */
  push32((uint32_t)(ESI));
  /* 12061128 push edi */
  push32((uint32_t)(EDI));
  /* 12061129 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1206112c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12061131 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061136 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061138 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206113f jmp 0x1206114a */
  goto L_1206114a;
L_12061141:;
  /* 12061141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12061147 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206114a:;
  /* 1206114a cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206114e jg 0x12061194 */
  if ((!C.zf&&C.sf==C.of)) goto L_12061194;
  /* 12061150 mov esi, esp */
  ESI = (ESP);
  /* 12061152 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12061155 push ecx */
  push32((uint32_t)(ECX));
  /* 12061156 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12061159 push edx */
  push32((uint32_t)(EDX));
  /* 1206115a call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12061160u);
  /* 12061160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061165 call 0x12064500 */
  push32(0x1206116au); f_12064500();
  /* 1206116a cmp eax, dword ptr [0x1208fa30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1208fa30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061170 jge 0x12061192 */
  if ((C.sf==C.of)) goto L_12061192;
  /* 12061172 mov esi, esp */
  ESI = (ESP);
  /* 12061174 mov eax, dword ptr [0x1208fa30] */
  EAX = (r32((uint32_t)(0x1208fa30)));
  /* 12061179 push eax */
  push32((uint32_t)(EAX));
  /* 1206117a mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 1206117d push ecx */
  push32((uint32_t)(ECX));
  /* 1206117e mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12061181 push edx */
  push32((uint32_t)(EDX));
  /* 12061182 call dword ptr [0x120944f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f0))), 0x12061188u);
  /* 12061188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206118b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206118d call 0x12064500 */
  push32(0x12061192u); f_12064500();
L_12061192:;
  /* 12061192 jmp 0x12061141 */
  goto L_12061141;
L_12061194:;
  /* 12061194 pop edi */
  EDI = (pop32());
  /* 12061195 pop esi */
  ESI = (pop32());
  /* 12061196 pop ebx */
  EBX = (pop32());
  /* 12061197 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206119a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206119c call 0x12064500 */
  push32(0x120611a1u); f_12064500();
  /* 120611a1 mov esp, ebp */
  ESP = (EBP);
  /* 120611a3 pop ebp */
  EBP = (pop32());
  /* 120611a4 ret  */
  ESPCHK(0x12061120u, _esp0);
  ESP += 4; return;
}

/* FUN_100011d0 @ 0x120611d0 (105 bytes, 40 insns) */
void f_120611d0(void) {
  FTRACE(0x120611d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120611d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120611d1 mov ebp, esp */
  EBP = (ESP);
  /* 120611d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120611d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120611d7 push esi */
  push32((uint32_t)(ESI));
  /* 120611d8 push edi */
  push32((uint32_t)(EDI));
  /* 120611d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120611dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120611e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120611e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120611e8 mov esi, esp */
  ESI = (ESP);
  /* 120611ea mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 120611ed push eax */
  push32((uint32_t)(EAX));
  /* 120611ee mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 120611f1 push ecx */
  push32((uint32_t)(ECX));
  /* 120611f2 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120611f8u);
  /* 120611f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120611fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120611fd call 0x12064500 */
  push32(0x12061202u); f_12064500();
  /* 12061202 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061207 jge 0x12061228 */
  if ((C.sf==C.of)) goto L_12061228;
  /* 12061209 mov esi, esp */
  ESI = (ESP);
  /* 1206120b push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 12061210 mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12061213 push edx */
  push32((uint32_t)(EDX));
  /* 12061214 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12061217 push eax */
  push32((uint32_t)(EAX));
  /* 12061218 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206121eu);
  /* 1206121e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061223 call 0x12064500 */
  push32(0x12061228u); f_12064500();
L_12061228:;
  /* 12061228 pop edi */
  EDI = (pop32());
  /* 12061229 pop esi */
  ESI = (pop32());
  /* 1206122a pop ebx */
  EBX = (pop32());
  /* 1206122b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206122e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061230 call 0x12064500 */
  push32(0x12061235u); f_12064500();
  /* 12061235 mov esp, ebp */
  ESP = (EBP);
  /* 12061237 pop ebp */
  EBP = (pop32());
  /* 12061238 ret  */
  ESPCHK(0x120611d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001260 @ 0x12061260 (83 bytes, 33 insns) */
void f_12061260(void) {
  FTRACE(0x12061260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061260 push ebp */
  push32((uint32_t)(EBP));
  /* 12061261 mov ebp, esp */
  EBP = (ESP);
  /* 12061263 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061266 push ebx */
  push32((uint32_t)(EBX));
  /* 12061267 push esi */
  push32((uint32_t)(ESI));
  /* 12061268 push edi */
  push32((uint32_t)(EDI));
  /* 12061269 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1206126c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12061271 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061276 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061278 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206127f jmp 0x1206128a */
  goto L_1206128a;
L_12061281:;
  /* 12061281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061284 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12061287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206128a:;
  /* 1206128a cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206128e jg 0x120612a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_120612a2;
  /* 12061290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061293 push ecx */
  push32((uint32_t)(ECX));
  /* 12061294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061297 push edx */
  push32((uint32_t)(EDX));
  /* 12061298 call 0x1206105a */
  push32(0x1206129du); f_1206105a();
  /* 1206129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120612a0 jmp 0x12061281 */
  goto L_12061281;
L_120612a2:;
  /* 120612a2 pop edi */
  EDI = (pop32());
  /* 120612a3 pop esi */
  ESI = (pop32());
  /* 120612a4 pop ebx */
  EBX = (pop32());
  /* 120612a5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120612a8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120612aa call 0x12064500 */
  push32(0x120612afu); f_12064500();
  /* 120612af mov esp, ebp */
  ESP = (EBP);
  /* 120612b1 pop ebp */
  EBP = (pop32());
  /* 120612b2 ret  */
  ESPCHK(0x12061260u, _esp0);
  ESP += 4; return;
}

/* FUN_100012d0 @ 0x120612d0 (102 bytes, 40 insns) */
void f_120612d0(void) {
  FTRACE(0x120612d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120612d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120612d1 mov ebp, esp */
  EBP = (ESP);
  /* 120612d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120612d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120612d7 push esi */
  push32((uint32_t)(ESI));
  /* 120612d8 push edi */
  push32((uint32_t)(EDI));
  /* 120612d9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 120612dc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120612e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120612e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120612e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120612ef jmp 0x120612fa */
  goto L_120612fa;
L_120612f1:;
  /* 120612f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120612f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120612f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120612fa:;
  /* 120612fa cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120612fe jge 0x12061322 */
  if ((C.sf==C.of)) goto L_12061322;
  /* 12061300 mov esi, esp */
  ESI = (ESP);
  /* 12061302 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12061305 push ecx */
  push32((uint32_t)(ECX));
  /* 12061306 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061309 push edx */
  push32((uint32_t)(EDX));
  /* 1206130a call dword ptr [0x120944e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944e4))), 0x12061310u);
  /* 12061310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061315 call 0x12064500 */
  push32(0x1206131au); f_12064500();
  /* 1206131a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206131c jle 0x12061320 */
  if ((C.zf||C.sf!=C.of)) goto L_12061320;
  /* 1206131e jmp 0x12061322 */
  goto L_12061322;
L_12061320:;
  /* 12061320 jmp 0x120612f1 */
  goto L_120612f1;
L_12061322:;
  /* 12061322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061325 pop edi */
  EDI = (pop32());
  /* 12061326 pop esi */
  ESI = (pop32());
  /* 12061327 pop ebx */
  EBX = (pop32());
  /* 12061328 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206132b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206132d call 0x12064500 */
  push32(0x12061332u); f_12064500();
  /* 12061332 mov esp, ebp */
  ESP = (EBP);
  /* 12061334 pop ebp */
  EBP = (pop32());
  /* 12061335 ret  */
  ESPCHK(0x120612d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001350 @ 0x12061350 (199 bytes, 75 insns) */
void f_12061350(void) {
  FTRACE(0x12061350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061350 push ebp */
  push32((uint32_t)(EBP));
  /* 12061351 mov ebp, esp */
  EBP = (ESP);
  /* 12061353 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061356 push ebx */
  push32((uint32_t)(EBX));
  /* 12061357 push esi */
  push32((uint32_t)(ESI));
  /* 12061358 push edi */
  push32((uint32_t)(EDI));
  /* 12061359 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1206135c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12061361 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061366 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206136b push eax */
  push32((uint32_t)(EAX));
  /* 1206136c call 0x12061014 */
  push32(0x12061371u); f_12061014();
  /* 12061371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12061377 mov esi, esp */
  ESI = (ESP);
  /* 12061379 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 1206137c push ecx */
  push32((uint32_t)(ECX));
  /* 1206137d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061380 push edx */
  push32((uint32_t)(EDX));
  /* 12061381 call dword ptr [0x120944e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944e4))), 0x12061387u);
  /* 12061387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206138a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206138c call 0x12064500 */
  push32(0x12061391u); f_12064500();
  /* 12061391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12061393 je 0x12061403 */
  if (C.zf) goto L_12061403;
  /* 12061395 mov esi, esp */
  ESI = (ESP);
  /* 12061397 push 0 */
  push32((uint32_t)(0x0u));
  /* 12061399 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206139c push eax */
  push32((uint32_t)(EAX));
  /* 1206139d mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 120613a0 push ecx */
  push32((uint32_t)(ECX));
  /* 120613a1 call dword ptr [0x120944e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944e0))), 0x120613a7u);
  /* 120613a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120613aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120613ac call 0x12064500 */
  push32(0x120613b1u); f_12064500();
  /* 120613b1 mov esi, esp */
  ESI = (ESP);
  /* 120613b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120613b5 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 120613b8 push edx */
  push32((uint32_t)(EDX));
  /* 120613b9 call dword ptr [0x120944d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d8))), 0x120613bfu);
  /* 120613bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120613c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120613c4 call 0x12064500 */
  push32(0x120613c9u); f_12064500();
  /* 120613c9 mov esi, esp */
  ESI = (ESP);
  /* 120613cb push 1 */
  push32((uint32_t)(0x1u));
  /* 120613cd mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 120613d0 push eax */
  push32((uint32_t)(EAX));
  /* 120613d1 call dword ptr [0x120944e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944e8))), 0x120613d7u);
  /* 120613d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120613da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120613dc call 0x12064500 */
  push32(0x120613e1u); f_12064500();
  /* 120613e1 mov esi, esp */
  ESI = (ESP);
  /* 120613e3 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 120613e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120613e7 mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 120613ea push edx */
  push32((uint32_t)(EDX));
  /* 120613eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120613ee push eax */
  push32((uint32_t)(EAX));
  /* 120613ef mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 120613f2 push ecx */
  push32((uint32_t)(ECX));
  /* 120613f3 call dword ptr [0x120944ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944ec))), 0x120613f9u);
  /* 120613f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120613fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120613fe call 0x12064500 */
  push32(0x12061403u); f_12064500();
L_12061403:;
  /* 12061403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061406 pop edi */
  EDI = (pop32());
  /* 12061407 pop esi */
  ESI = (pop32());
  /* 12061408 pop ebx */
  EBX = (pop32());
  /* 12061409 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206140c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206140e call 0x12064500 */
  push32(0x12061413u); f_12064500();
  /* 12061413 mov esp, ebp */
  ESP = (EBP);
  /* 12061415 pop ebp */
  EBP = (pop32());
  /* 12061416 ret  */
  ESPCHK(0x12061350u, _esp0);
  ESP += 4; return;
}

/* FUN_10001450 @ 0x12061450 (64 bytes, 27 insns) */
void f_12061450(void) {
  FTRACE(0x12061450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061450 push ebp */
  push32((uint32_t)(EBP));
  /* 12061451 mov ebp, esp */
  EBP = (ESP);
  /* 12061453 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061456 push ebx */
  push32((uint32_t)(EBX));
  /* 12061457 push esi */
  push32((uint32_t)(ESI));
  /* 12061458 push edi */
  push32((uint32_t)(EDI));
  /* 12061459 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1206145c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12061461 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061466 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061468 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206146a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1206146f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061472 push eax */
  push32((uint32_t)(EAX));
  /* 12061473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061476 push ecx */
  push32((uint32_t)(ECX));
  /* 12061477 call 0x12061019 */
  push32(0x1206147cu); f_12061019();
  /* 1206147c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206147f pop edi */
  EDI = (pop32());
  /* 12061480 pop esi */
  ESI = (pop32());
  /* 12061481 pop ebx */
  EBX = (pop32());
  /* 12061482 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061485 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061487 call 0x12064500 */
  push32(0x1206148cu); f_12064500();
  /* 1206148c mov esp, ebp */
  ESP = (EBP);
  /* 1206148e pop ebp */
  EBP = (pop32());
  /* 1206148f ret  */
  ESPCHK(0x12061450u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x120614a0 (63 bytes, 28 insns) */
void f_120614a0(void) {
  FTRACE(0x120614a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120614a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120614a1 mov ebp, esp */
  EBP = (ESP);
  /* 120614a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120614a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120614a7 push esi */
  push32((uint32_t)(ESI));
  /* 120614a8 push edi */
  push32((uint32_t)(EDI));
  /* 120614a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120614ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120614b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120614b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120614b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120614ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120614bd push eax */
  push32((uint32_t)(EAX));
  /* 120614be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120614c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120614c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120614c5 push edx */
  push32((uint32_t)(EDX));
  /* 120614c6 call 0x12061019 */
  push32(0x120614cbu); f_12061019();
  /* 120614cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120614ce pop edi */
  EDI = (pop32());
  /* 120614cf pop esi */
  ESI = (pop32());
  /* 120614d0 pop ebx */
  EBX = (pop32());
  /* 120614d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120614d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120614d6 call 0x12064500 */
  push32(0x120614dbu); f_12064500();
  /* 120614db mov esp, ebp */
  ESP = (EBP);
  /* 120614dd pop ebp */
  EBP = (pop32());
  /* 120614de ret  */
  ESPCHK(0x120614a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014f0 @ 0x120614f0 (64 bytes, 27 insns) */
void f_120614f0(void) {
  FTRACE(0x120614f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120614f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120614f1 mov ebp, esp */
  EBP = (ESP);
  /* 120614f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120614f6 push ebx */
  push32((uint32_t)(EBX));
  /* 120614f7 push esi */
  push32((uint32_t)(ESI));
  /* 120614f8 push edi */
  push32((uint32_t)(EDI));
  /* 120614f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120614fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12061501 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061506 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206150a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1206150f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061512 push eax */
  push32((uint32_t)(EAX));
  /* 12061513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061516 push ecx */
  push32((uint32_t)(ECX));
  /* 12061517 call 0x12061019 */
  push32(0x1206151cu); f_12061019();
  /* 1206151c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206151f pop edi */
  EDI = (pop32());
  /* 12061520 pop esi */
  ESI = (pop32());
  /* 12061521 pop ebx */
  EBX = (pop32());
  /* 12061522 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061525 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061527 call 0x12064500 */
  push32(0x1206152cu); f_12064500();
  /* 1206152c mov esp, ebp */
  ESP = (EBP);
  /* 1206152e pop ebp */
  EBP = (pop32());
  /* 1206152f ret  */
  ESPCHK(0x120614f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x12061540 (63 bytes, 28 insns) */
void f_12061540(void) {
  FTRACE(0x12061540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061540 push ebp */
  push32((uint32_t)(EBP));
  /* 12061541 mov ebp, esp */
  EBP = (ESP);
  /* 12061543 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061546 push ebx */
  push32((uint32_t)(EBX));
  /* 12061547 push esi */
  push32((uint32_t)(ESI));
  /* 12061548 push edi */
  push32((uint32_t)(EDI));
  /* 12061549 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1206154c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12061551 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061556 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206155a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206155d push eax */
  push32((uint32_t)(EAX));
  /* 1206155e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061561 push ecx */
  push32((uint32_t)(ECX));
  /* 12061562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061565 push edx */
  push32((uint32_t)(EDX));
  /* 12061566 call 0x12061019 */
  push32(0x1206156bu); f_12061019();
  /* 1206156b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206156e pop edi */
  EDI = (pop32());
  /* 1206156f pop esi */
  ESI = (pop32());
  /* 12061570 pop ebx */
  EBX = (pop32());
  /* 12061571 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061574 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061576 call 0x12064500 */
  push32(0x1206157bu); f_12064500();
  /* 1206157b mov esp, ebp */
  ESP = (EBP);
  /* 1206157d pop ebp */
  EBP = (pop32());
  /* 1206157e ret  */
  ESPCHK(0x12061540u, _esp0);
  ESP += 4; return;
}

/* FUN_10001590 @ 0x12061590 (151 bytes, 59 insns) */
void f_12061590(void) {
  FTRACE(0x12061590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061590 push ebp */
  push32((uint32_t)(EBP));
  /* 12061591 mov ebp, esp */
  EBP = (ESP);
  /* 12061593 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061596 push ebx */
  push32((uint32_t)(EBX));
  /* 12061597 push esi */
  push32((uint32_t)(ESI));
  /* 12061598 push edi */
  push32((uint32_t)(EDI));
  /* 12061599 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1206159c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 120615a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120615a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120615a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120615ab push eax */
  push32((uint32_t)(EAX));
  /* 120615ac call 0x12061014 */
  push32(0x120615b1u); f_12061014();
  /* 120615b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120615b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120615b7 mov esi, esp */
  ESI = (ESP);
  /* 120615b9 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 120615bc push ecx */
  push32((uint32_t)(ECX));
  /* 120615bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120615c0 push edx */
  push32((uint32_t)(EDX));
  /* 120615c1 call dword ptr [0x120944e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944e4))), 0x120615c7u);
  /* 120615c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120615ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120615cc call 0x12064500 */
  push32(0x120615d1u); f_12064500();
  /* 120615d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120615d3 je 0x12061613 */
  if (C.zf) goto L_12061613;
  /* 120615d5 mov esi, esp */
  ESI = (ESP);
  /* 120615d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120615d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120615dc push eax */
  push32((uint32_t)(EAX));
  /* 120615dd mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 120615e0 push ecx */
  push32((uint32_t)(ECX));
  /* 120615e1 call dword ptr [0x120944e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944e0))), 0x120615e7u);
  /* 120615e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120615ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120615ec call 0x12064500 */
  push32(0x120615f1u); f_12064500();
  /* 120615f1 mov esi, esp */
  ESI = (ESP);
  /* 120615f3 mov dl, byte ptr [ebp + 0x14] */
  DL = (r8((uint32_t)(EBP + 0x14)));
  /* 120615f6 push edx */
  push32((uint32_t)(EDX));
  /* 120615f7 mov al, byte ptr [ebp + 0x10] */
  AL = (r8((uint32_t)(EBP + 0x10)));
  /* 120615fa push eax */
  push32((uint32_t)(EAX));
  /* 120615fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120615fe push ecx */
  push32((uint32_t)(ECX));
  /* 120615ff mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12061602 push edx */
  push32((uint32_t)(EDX));
  /* 12061603 call dword ptr [0x120944dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944dc))), 0x12061609u);
  /* 12061609 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206160c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206160e call 0x12064500 */
  push32(0x12061613u); f_12064500();
L_12061613:;
  /* 12061613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061616 pop edi */
  EDI = (pop32());
  /* 12061617 pop esi */
  ESI = (pop32());
  /* 12061618 pop ebx */
  EBX = (pop32());
  /* 12061619 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206161c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206161e call 0x12064500 */
  push32(0x12061623u); f_12064500();
  /* 12061623 mov esp, ebp */
  ESP = (EBP);
  /* 12061625 pop ebp */
  EBP = (pop32());
  /* 12061626 ret  */
  ESPCHK(0x12061590u, _esp0);
  ESP += 4; return;
}

/* FUN_10001650 @ 0x12061650 (64 bytes, 27 insns) */
void f_12061650(void) {
  FTRACE(0x12061650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061650 push ebp */
  push32((uint32_t)(EBP));
  /* 12061651 mov ebp, esp */
  EBP = (ESP);
  /* 12061653 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061656 push ebx */
  push32((uint32_t)(EBX));
  /* 12061657 push esi */
  push32((uint32_t)(ESI));
  /* 12061658 push edi */
  push32((uint32_t)(EDI));
  /* 12061659 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1206165c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12061661 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061666 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206166a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1206166f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061672 push eax */
  push32((uint32_t)(EAX));
  /* 12061673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061676 push ecx */
  push32((uint32_t)(ECX));
  /* 12061677 call 0x12061023 */
  push32(0x1206167cu); f_12061023();
  /* 1206167c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206167f pop edi */
  EDI = (pop32());
  /* 12061680 pop esi */
  ESI = (pop32());
  /* 12061681 pop ebx */
  EBX = (pop32());
  /* 12061682 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061685 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061687 call 0x12064500 */
  push32(0x1206168cu); f_12064500();
  /* 1206168c mov esp, ebp */
  ESP = (EBP);
  /* 1206168e pop ebp */
  EBP = (pop32());
  /* 1206168f ret  */
  ESPCHK(0x12061650u, _esp0);
  ESP += 4; return;
}

/* FUN_100016a0 @ 0x120616a0 (63 bytes, 28 insns) */
void f_120616a0(void) {
  FTRACE(0x120616a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120616a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120616a1 mov ebp, esp */
  EBP = (ESP);
  /* 120616a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120616a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120616a7 push esi */
  push32((uint32_t)(ESI));
  /* 120616a8 push edi */
  push32((uint32_t)(EDI));
  /* 120616a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120616ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120616b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120616b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120616b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120616ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120616bd push eax */
  push32((uint32_t)(EAX));
  /* 120616be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120616c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120616c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120616c5 push edx */
  push32((uint32_t)(EDX));
  /* 120616c6 call 0x12061023 */
  push32(0x120616cbu); f_12061023();
  /* 120616cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120616ce pop edi */
  EDI = (pop32());
  /* 120616cf pop esi */
  ESI = (pop32());
  /* 120616d0 pop ebx */
  EBX = (pop32());
  /* 120616d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120616d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120616d6 call 0x12064500 */
  push32(0x120616dbu); f_12064500();
  /* 120616db mov esp, ebp */
  ESP = (EBP);
  /* 120616dd pop ebp */
  EBP = (pop32());
  /* 120616de ret  */
  ESPCHK(0x120616a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100016f0 @ 0x120616f0 (85 bytes, 35 insns) */
void f_120616f0(void) {
  FTRACE(0x120616f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120616f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120616f1 mov ebp, esp */
  EBP = (ESP);
  /* 120616f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120616f6 push ebx */
  push32((uint32_t)(EBX));
  /* 120616f7 push esi */
  push32((uint32_t)(ESI));
  /* 120616f8 push edi */
  push32((uint32_t)(EDI));
  /* 120616f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 120616fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12061701 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061706 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061708 mov esi, esp */
  ESI = (ESP);
  /* 1206170a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1206170c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206170f push eax */
  push32((uint32_t)(EAX));
  /* 12061710 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 12061713 push ecx */
  push32((uint32_t)(ECX));
  /* 12061714 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061717 push edx */
  push32((uint32_t)(EDX));
  /* 12061718 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206171d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061720 push eax */
  push32((uint32_t)(EAX));
  /* 12061721 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12061727u);
  /* 12061727 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206172a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206172c call 0x12064500 */
  push32(0x12061731u); f_12064500();
  /* 12061731 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12061734 pop edi */
  EDI = (pop32());
  /* 12061735 pop esi */
  ESI = (pop32());
  /* 12061736 pop ebx */
  EBX = (pop32());
  /* 12061737 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206173a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206173c call 0x12064500 */
  push32(0x12061741u); f_12064500();
  /* 12061741 mov esp, ebp */
  ESP = (EBP);
  /* 12061743 pop ebp */
  EBP = (pop32());
  /* 12061744 ret  */
  ESPCHK(0x120616f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001760 @ 0x12061760 (87 bytes, 36 insns) */
void f_12061760(void) {
  FTRACE(0x12061760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061760 push ebp */
  push32((uint32_t)(EBP));
  /* 12061761 mov ebp, esp */
  EBP = (ESP);
  /* 12061763 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061766 push ebx */
  push32((uint32_t)(EBX));
  /* 12061767 push esi */
  push32((uint32_t)(ESI));
  /* 12061768 push edi */
  push32((uint32_t)(EDI));
  /* 12061769 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1206176c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12061771 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12061776 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12061778 mov esi, esp */
  ESI = (ESP);
  /* 1206177a mov al, byte ptr [ebp + 0x18] */
  AL = (r8((uint32_t)(EBP + 0x18)));
  /* 1206177d push eax */
  push32((uint32_t)(EAX));
  /* 1206177e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12061781 push ecx */
  push32((uint32_t)(ECX));
  /* 12061782 mov dl, byte ptr [ebp + 0x14] */
  DL = (r8((uint32_t)(EBP + 0x14)));
  /* 12061785 push edx */
  push32((uint32_t)(EDX));
  /* 12061786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061789 push eax */
  push32((uint32_t)(EAX));
  /* 1206178a push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206178f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061792 push ecx */
  push32((uint32_t)(ECX));
  /* 12061793 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12061799u);
  /* 12061799 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206179c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206179e call 0x12064500 */
  push32(0x120617a3u); f_12064500();
  /* 120617a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120617a6 pop edi */
  EDI = (pop32());
  /* 120617a7 pop esi */
  ESI = (pop32());
  /* 120617a8 pop ebx */
  EBX = (pop32());
  /* 120617a9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120617ac cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120617ae call 0x12064500 */
  push32(0x120617b3u); f_12064500();
  /* 120617b3 mov esp, ebp */
  ESP = (EBP);
  /* 120617b5 pop ebp */
  EBP = (pop32());
  /* 120617b6 ret  */
  ESPCHK(0x12061760u, _esp0);
  ESP += 4; return;
}

/* FUN_100017d0 @ 0x120617d0 (144 bytes, 52 insns) */
void f_120617d0(void) {
  FTRACE(0x120617d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120617d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120617d1 mov ebp, esp */
  EBP = (ESP);
  /* 120617d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120617d6 push ebx */
  push32((uint32_t)(EBX));
  /* 120617d7 push esi */
  push32((uint32_t)(ESI));
  /* 120617d8 push edi */
  push32((uint32_t)(EDI));
  /* 120617d9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 120617dc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 120617e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120617e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120617e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120617eb push eax */
  push32((uint32_t)(EAX));
  /* 120617ec call 0x12061014 */
  push32(0x120617f1u); f_12061014();
  /* 120617f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120617f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120617f7 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120617fe jmp 0x12061809 */
  goto L_12061809;
L_12061800:;
  /* 12061800 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12061803 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12061806 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12061809:;
  /* 12061809 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206180c cmp edx, dword ptr [0x12091500] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12091500))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061812 jge 0x1206184c */
  if ((C.sf==C.of)) goto L_1206184c;
  /* 12061814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12061816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12061819 push eax */
  push32((uint32_t)(EAX));
  /* 1206181a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206181d push ecx */
  push32((uint32_t)(ECX));
  /* 1206181e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12061821 push edx */
  push32((uint32_t)(EDX));
  /* 12061822 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12061827 call 0x12061055 */
  push32(0x1206182cu); f_12061055();
  /* 1206182c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206182f mov esi, esp */
  ESI = (ESP);
  /* 12061831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12061834 push eax */
  push32((uint32_t)(EAX));
  /* 12061835 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206183a call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12061840u);
  /* 12061840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061845 call 0x12064500 */
  push32(0x1206184au); f_12064500();
  /* 1206184a jmp 0x12061800 */
  goto L_12061800;
L_1206184c:;
  /* 1206184c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206184f pop edi */
  EDI = (pop32());
  /* 12061850 pop esi */
  ESI = (pop32());
  /* 12061851 pop ebx */
  EBX = (pop32());
  /* 12061852 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061855 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061857 call 0x12064500 */
  push32(0x1206185cu); f_12064500();
  /* 1206185c mov esp, ebp */
  ESP = (EBP);
  /* 1206185e pop ebp */
  EBP = (pop32());
  /* 1206185f ret  */
  ESPCHK(0x120617d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001890 @ 0x12061890 (1521 bytes, 403 insns) */
void f_12061890(void) {
  FTRACE(0x12061890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12061890 push ebp */
  push32((uint32_t)(EBP));
  /* 12061891 mov ebp, esp */
  EBP = (ESP);
  /* 12061893 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12061896 push ebx */
  push32((uint32_t)(EBX));
  /* 12061897 push esi */
  push32((uint32_t)(ESI));
  /* 12061898 push edi */
  push32((uint32_t)(EDI));
  /* 12061899 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1206189c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 120618a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120618a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120618a8 mov esi, esp */
  ESI = (ESP);
  /* 120618aa push 4 */
  push32((uint32_t)(0x4u));
  /* 120618ac push 0x120913f8 */
  push32((uint32_t)(0x120913f8u));
  /* 120618b1 call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x120618b7u);
  /* 120618b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120618ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120618bc call 0x12064500 */
  push32(0x120618c1u); f_12064500();
  /* 120618c1 mov esi, esp */
  ESI = (ESP);
  /* 120618c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 120618c5 push 0x120913fc */
  push32((uint32_t)(0x120913fcu));
  /* 120618ca call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x120618d0u);
  /* 120618d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120618d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120618d5 call 0x12064500 */
  push32(0x120618dau); f_12064500();
  /* 120618da mov esi, esp */
  ESI = (ESP);
  /* 120618dc push 4 */
  push32((uint32_t)(0x4u));
  /* 120618de push 0x12091500 */
  push32((uint32_t)(0x12091500u));
  /* 120618e3 call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x120618e9u);
  /* 120618e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120618ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120618ee call 0x12064500 */
  push32(0x120618f3u); f_12064500();
  /* 120618f3 mov esi, esp */
  ESI = (ESP);
  /* 120618f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 120618f7 push 0x120914b0 */
  push32((uint32_t)(0x120914b0u));
  /* 120618fc call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061902u);
  /* 12061902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061905 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061907 call 0x12064500 */
  push32(0x1206190cu); f_12064500();
  /* 1206190c mov esi, esp */
  ESI = (ESP);
  /* 1206190e push 0x1208c118 */
  push32((uint32_t)(0x1208c118u));
  /* 12061913 push 1 */
  push32((uint32_t)(0x1u));
  /* 12061915 call dword ptr [0x120944b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b8))), 0x1206191bu);
  /* 1206191b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206191e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061920 call 0x12064500 */
  push32(0x12061925u); f_12064500();
  /* 12061925 mov esi, esp */
  ESI = (ESP);
  /* 12061927 push 0x1208c118 */
  push32((uint32_t)(0x1208c118u));
  /* 1206192c push 2 */
  push32((uint32_t)(0x2u));
  /* 1206192e call dword ptr [0x120944b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b8))), 0x12061934u);
  /* 12061934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061939 call 0x12064500 */
  push32(0x1206193eu); f_12064500();
  /* 1206193e mov esi, esp */
  ESI = (ESP);
  /* 12061940 push 0x1208c118 */
  push32((uint32_t)(0x1208c118u));
  /* 12061945 push 3 */
  push32((uint32_t)(0x3u));
  /* 12061947 call dword ptr [0x120944b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b8))), 0x1206194du);
  /* 1206194d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061950 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061952 call 0x12064500 */
  push32(0x12061957u); f_12064500();
  /* 12061957 mov esi, esp */
  ESI = (ESP);
  /* 12061959 push 0x1208c118 */
  push32((uint32_t)(0x1208c118u));
  /* 1206195e push 5 */
  push32((uint32_t)(0x5u));
  /* 12061960 call dword ptr [0x120944b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b8))), 0x12061966u);
  /* 12061966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206196b call 0x12064500 */
  push32(0x12061970u); f_12064500();
  /* 12061970 mov esi, esp */
  ESI = (ESP);
  /* 12061972 push 0x1208c10c */
  push32((uint32_t)(0x1208c10cu));
  /* 12061977 push 4 */
  push32((uint32_t)(0x4u));
  /* 12061979 call dword ptr [0x120944b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b8))), 0x1206197fu);
  /* 1206197f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061982 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061984 call 0x12064500 */
  push32(0x12061989u); f_12064500();
  /* 12061989 mov esi, esp */
  ESI = (ESP);
  /* 1206198b push 0x1208c104 */
  push32((uint32_t)(0x1208c104u));
  /* 12061990 push 0x120914e0 */
  push32((uint32_t)(0x120914e0u));
  /* 12061995 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x1206199bu);
  /* 1206199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206199e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120619a0 call 0x12064500 */
  push32(0x120619a5u); f_12064500();
  /* 120619a5 mov esi, esp */
  ESI = (ESP);
  /* 120619a7 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120619ac call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x120619b2u);
  /* 120619b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120619b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120619b7 call 0x12064500 */
  push32(0x120619bcu); f_12064500();
  /* 120619bc mov esi, esp */
  ESI = (ESP);
  /* 120619be push 0x12091420 */
  push32((uint32_t)(0x12091420u));
  /* 120619c3 call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x120619c9u);
  /* 120619c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120619cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120619ce call 0x12064500 */
  push32(0x120619d3u); f_12064500();
  /* 120619d3 mov esi, esp */
  ESI = (ESP);
  /* 120619d5 push 0x12091428 */
  push32((uint32_t)(0x12091428u));
  /* 120619da call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x120619e0u);
  /* 120619e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120619e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120619e5 call 0x12064500 */
  push32(0x120619eau); f_12064500();
  /* 120619ea mov esi, esp */
  ESI = (ESP);
  /* 120619ec push 0x12091430 */
  push32((uint32_t)(0x12091430u));
  /* 120619f1 call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x120619f7u);
  /* 120619f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120619fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120619fc call 0x12064500 */
  push32(0x12061a01u); f_12064500();
  /* 12061a01 mov esi, esp */
  ESI = (ESP);
  /* 12061a03 push 0x12091438 */
  push32((uint32_t)(0x12091438u));
  /* 12061a08 call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x12061a0eu);
  /* 12061a0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061a11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061a13 call 0x12064500 */
  push32(0x12061a18u); f_12064500();
  /* 12061a18 mov esi, esp */
  ESI = (ESP);
  /* 12061a1a push 0x120914a8 */
  push32((uint32_t)(0x120914a8u));
  /* 12061a1f call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x12061a25u);
  /* 12061a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061a28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061a2a call 0x12064500 */
  push32(0x12061a2fu); f_12064500();
  /* 12061a2f mov esi, esp */
  ESI = (ESP);
  /* 12061a31 push 8 */
  push32((uint32_t)(0x8u));
  /* 12061a33 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12061a38 call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061a3eu);
  /* 12061a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061a43 call 0x12064500 */
  push32(0x12061a48u); f_12064500();
  /* 12061a48 mov esi, esp */
  ESI = (ESP);
  /* 12061a4a push 8 */
  push32((uint32_t)(0x8u));
  /* 12061a4c push 0x12091420 */
  push32((uint32_t)(0x12091420u));
  /* 12061a51 call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061a57u);
  /* 12061a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061a5c call 0x12064500 */
  push32(0x12061a61u); f_12064500();
  /* 12061a61 mov esi, esp */
  ESI = (ESP);
  /* 12061a63 push 8 */
  push32((uint32_t)(0x8u));
  /* 12061a65 push 0x12091428 */
  push32((uint32_t)(0x12091428u));
  /* 12061a6a call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061a70u);
  /* 12061a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061a75 call 0x12064500 */
  push32(0x12061a7au); f_12064500();
  /* 12061a7a mov esi, esp */
  ESI = (ESP);
  /* 12061a7c push 8 */
  push32((uint32_t)(0x8u));
  /* 12061a7e push 0x12091430 */
  push32((uint32_t)(0x12091430u));
  /* 12061a83 call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061a89u);
  /* 12061a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061a8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061a8e call 0x12064500 */
  push32(0x12061a93u); f_12064500();
  /* 12061a93 mov esi, esp */
  ESI = (ESP);
  /* 12061a95 push 8 */
  push32((uint32_t)(0x8u));
  /* 12061a97 push 0x12091438 */
  push32((uint32_t)(0x12091438u));
  /* 12061a9c call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061aa2u);
  /* 12061aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061aa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061aa7 call 0x12064500 */
  push32(0x12061aacu); f_12064500();
  /* 12061aac mov esi, esp */
  ESI = (ESP);
  /* 12061aae push 0x1208c100 */
  push32((uint32_t)(0x1208c100u));
  /* 12061ab3 push 0x12091450 */
  push32((uint32_t)(0x12091450u));
  /* 12061ab8 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061abeu);
  /* 12061abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061ac3 call 0x12064500 */
  push32(0x12061ac8u); f_12064500();
  /* 12061ac8 mov esi, esp */
  ESI = (ESP);
  /* 12061aca push 0x1208c0fc */
  push32((uint32_t)(0x1208c0fcu));
  /* 12061acf push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12061ad4 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061adau);
  /* 12061ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061adf call 0x12064500 */
  push32(0x12061ae4u); f_12064500();
  /* 12061ae4 mov esi, esp */
  ESI = (ESP);
  /* 12061ae6 push 0x1208c0f8 */
  push32((uint32_t)(0x1208c0f8u));
  /* 12061aeb push 0x12091460 */
  push32((uint32_t)(0x12091460u));
  /* 12061af0 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061af6u);
  /* 12061af6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061af9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061afb call 0x12064500 */
  push32(0x12061b00u); f_12064500();
  /* 12061b00 mov esi, esp */
  ESI = (ESP);
  /* 12061b02 push 0x1208c0f4 */
  push32((uint32_t)(0x1208c0f4u));
  /* 12061b07 push 0x12091470 */
  push32((uint32_t)(0x12091470u));
  /* 12061b0c call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061b12u);
  /* 12061b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061b17 call 0x12064500 */
  push32(0x12061b1cu); f_12064500();
  /* 12061b1c mov esi, esp */
  ESI = (ESP);
  /* 12061b1e push 0x1208c0f0 */
  push32((uint32_t)(0x1208c0f0u));
  /* 12061b23 push 0x12091478 */
  push32((uint32_t)(0x12091478u));
  /* 12061b28 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061b2eu);
  /* 12061b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061b33 call 0x12064500 */
  push32(0x12061b38u); f_12064500();
  /* 12061b38 mov esi, esp */
  ESI = (ESP);
  /* 12061b3a push 0x1208c0ec */
  push32((uint32_t)(0x1208c0ecu));
  /* 12061b3f push 0x12091538 */
  push32((uint32_t)(0x12091538u));
  /* 12061b44 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061b4au);
  /* 12061b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061b4f call 0x12064500 */
  push32(0x12061b54u); f_12064500();
  /* 12061b54 mov esi, esp */
  ESI = (ESP);
  /* 12061b56 push 0x1208c0e8 */
  push32((uint32_t)(0x1208c0e8u));
  /* 12061b5b push 0x12091540 */
  push32((uint32_t)(0x12091540u));
  /* 12061b60 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061b66u);
  /* 12061b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061b69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061b6b call 0x12064500 */
  push32(0x12061b70u); f_12064500();
  /* 12061b70 mov esi, esp */
  ESI = (ESP);
  /* 12061b72 push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 12061b77 push 0x120914f0 */
  push32((uint32_t)(0x120914f0u));
  /* 12061b7c call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061b82u);
  /* 12061b82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061b87 call 0x12064500 */
  push32(0x12061b8cu); f_12064500();
  /* 12061b8c mov esi, esp */
  ESI = (ESP);
  /* 12061b8e push 0x1208c0d4 */
  push32((uint32_t)(0x1208c0d4u));
  /* 12061b93 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12061b98 call dword ptr [0x120944c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c8))), 0x12061b9eu);
  /* 12061b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061ba3 call 0x12064500 */
  push32(0x12061ba8u); f_12064500();
  /* 12061ba8 mov esi, esp */
  ESI = (ESP);
  /* 12061baa push 0x1208c0cc */
  push32((uint32_t)(0x1208c0ccu));
  /* 12061baf push 0x12091528 */
  push32((uint32_t)(0x12091528u));
  /* 12061bb4 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061bbau);
  /* 12061bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061bbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061bbf call 0x12064500 */
  push32(0x12061bc4u); f_12064500();
  /* 12061bc4 mov esi, esp */
  ESI = (ESP);
  /* 12061bc6 push 0x1208c0c4 */
  push32((uint32_t)(0x1208c0c4u));
  /* 12061bcb push 0x12091530 */
  push32((uint32_t)(0x12091530u));
  /* 12061bd0 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061bd6u);
  /* 12061bd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061bdb call 0x12064500 */
  push32(0x12061be0u); f_12064500();
  /* 12061be0 mov esi, esp */
  ESI = (ESP);
  /* 12061be2 push 0x1208c0bc */
  push32((uint32_t)(0x1208c0bcu));
  /* 12061be7 push 0x120914d0 */
  push32((uint32_t)(0x120914d0u));
  /* 12061bec call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061bf2u);
  /* 12061bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061bf7 call 0x12064500 */
  push32(0x12061bfcu); f_12064500();
  /* 12061bfc mov esi, esp */
  ESI = (ESP);
  /* 12061bfe push 0x1208c0b4 */
  push32((uint32_t)(0x1208c0b4u));
  /* 12061c03 push 0x120914d8 */
  push32((uint32_t)(0x120914d8u));
  /* 12061c08 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061c0eu);
  /* 12061c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061c13 call 0x12064500 */
  push32(0x12061c18u); f_12064500();
  /* 12061c18 mov esi, esp */
  ESI = (ESP);
  /* 12061c1a push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 12061c1f call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x12061c25u);
  /* 12061c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061c2a call 0x12064500 */
  push32(0x12061c2fu); f_12064500();
  /* 12061c2f mov esi, esp */
  ESI = (ESP);
  /* 12061c31 push 8 */
  push32((uint32_t)(0x8u));
  /* 12061c33 push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 12061c38 call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061c3eu);
  /* 12061c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061c43 call 0x12064500 */
  push32(0x12061c48u); f_12064500();
  /* 12061c48 mov esi, esp */
  ESI = (ESP);
  /* 12061c4a push 0x1208c0ac */
  push32((uint32_t)(0x1208c0acu));
  /* 12061c4f push 0x12091410 */
  push32((uint32_t)(0x12091410u));
  /* 12061c54 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061c5au);
  /* 12061c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061c5f call 0x12064500 */
  push32(0x12061c64u); f_12064500();
  /* 12061c64 mov esi, esp */
  ESI = (ESP);
  /* 12061c66 push 0x1208c0a4 */
  push32((uint32_t)(0x1208c0a4u));
  /* 12061c6b push 0x12091448 */
  push32((uint32_t)(0x12091448u));
  /* 12061c70 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061c76u);
  /* 12061c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061c7b call 0x12064500 */
  push32(0x12061c80u); f_12064500();
  /* 12061c80 mov esi, esp */
  ESI = (ESP);
  /* 12061c82 push 0x1208c094 */
  push32((uint32_t)(0x1208c094u));
  /* 12061c87 push 0x12091400 */
  push32((uint32_t)(0x12091400u));
  /* 12061c8c call dword ptr [0x120944c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c8))), 0x12061c92u);
  /* 12061c92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061c97 call 0x12064500 */
  push32(0x12061c9cu); f_12064500();
  /* 12061c9c mov esi, esp */
  ESI = (ESP);
  /* 12061c9e push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12061ca3 call dword ptr [0x120944b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b4))), 0x12061ca9u);
  /* 12061ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061cae call 0x12064500 */
  push32(0x12061cb3u); f_12064500();
  /* 12061cb3 mov esi, esp */
  ESI = (ESP);
  /* 12061cb5 push 8 */
  push32((uint32_t)(0x8u));
  /* 12061cb7 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12061cbc call dword ptr [0x120944a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a8))), 0x12061cc2u);
  /* 12061cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061cc7 call 0x12064500 */
  push32(0x12061cccu); f_12064500();
  /* 12061ccc mov esi, esp */
  ESI = (ESP);
  /* 12061cce push 0x1208c08c */
  push32((uint32_t)(0x1208c08cu));
  /* 12061cd3 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12061cd8 call dword ptr [0x120944c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c0))), 0x12061cdeu);
  /* 12061cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061ce3 call 0x12064500 */
  push32(0x12061ce8u); f_12064500();
  /* 12061ce8 mov esi, esp */
  ESI = (ESP);
  /* 12061cea push 0x1208c080 */
  push32((uint32_t)(0x1208c080u));
  /* 12061cef push 0x120914c0 */
  push32((uint32_t)(0x120914c0u));
  /* 12061cf4 call dword ptr [0x120944c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c8))), 0x12061cfau);
  /* 12061cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061cff call 0x12064500 */
  push32(0x12061d04u); f_12064500();
  /* 12061d04 mov esi, esp */
  ESI = (ESP);
  /* 12061d06 push 0x1208c078 */
  push32((uint32_t)(0x1208c078u));
  /* 12061d0b push 0x120914b8 */
  push32((uint32_t)(0x120914b8u));
  /* 12061d10 call dword ptr [0x120944d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d0))), 0x12061d16u);
  /* 12061d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061d1b call 0x12064500 */
  push32(0x12061d20u); f_12064500();
  /* 12061d20 mov esi, esp */
  ESI = (ESP);
  /* 12061d22 push 0x1208c070 */
  push32((uint32_t)(0x1208c070u));
  /* 12061d27 push 0x120914f8 */
  push32((uint32_t)(0x120914f8u));
  /* 12061d2c call dword ptr [0x120944d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d0))), 0x12061d32u);
  /* 12061d32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061d37 call 0x12064500 */
  push32(0x12061d3cu); f_12064500();
  /* 12061d3c mov esi, esp */
  ESI = (ESP);
  /* 12061d3e push 0x1208c064 */
  push32((uint32_t)(0x1208c064u));
  /* 12061d43 push 0x12091408 */
  push32((uint32_t)(0x12091408u));
  /* 12061d48 call dword ptr [0x120944bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944bc))), 0x12061d4eu);
  /* 12061d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061d53 call 0x12064500 */
  push32(0x12061d58u); f_12064500();
  /* 12061d58 mov esi, esp */
  ESI = (ESP);
  /* 12061d5a push 0x1208c060 */
  push32((uint32_t)(0x1208c060u));
  /* 12061d5f push 0x12091480 */
  push32((uint32_t)(0x12091480u));
  /* 12061d64 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061d6au);
  /* 12061d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061d6f call 0x12064500 */
  push32(0x12061d74u); f_12064500();
  /* 12061d74 mov esi, esp */
  ESI = (ESP);
  /* 12061d76 push 0x1208c05c */
  push32((uint32_t)(0x1208c05cu));
  /* 12061d7b push 0x12091488 */
  push32((uint32_t)(0x12091488u));
  /* 12061d80 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061d86u);
  /* 12061d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061d8b call 0x12064500 */
  push32(0x12061d90u); f_12064500();
  /* 12061d90 mov esi, esp */
  ESI = (ESP);
  /* 12061d92 push 0x1208c058 */
  push32((uint32_t)(0x1208c058u));
  /* 12061d97 push 0x12091490 */
  push32((uint32_t)(0x12091490u));
  /* 12061d9c call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061da2u);
  /* 12061da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061da5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061da7 call 0x12064500 */
  push32(0x12061dacu); f_12064500();
  /* 12061dac mov esi, esp */
  ESI = (ESP);
  /* 12061dae push 0x1208c054 */
  push32((uint32_t)(0x1208c054u));
  /* 12061db3 push 0x12091498 */
  push32((uint32_t)(0x12091498u));
  /* 12061db8 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061dbeu);
  /* 12061dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061dc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061dc3 call 0x12064500 */
  push32(0x12061dc8u); f_12064500();
  /* 12061dc8 mov esi, esp */
  ESI = (ESP);
  /* 12061dca push 0x1208c044 */
  push32((uint32_t)(0x1208c044u));
  /* 12061dcf push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12061dd4 call dword ptr [0x120944c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c8))), 0x12061ddau);
  /* 12061dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061ddd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061ddf call 0x12064500 */
  push32(0x12061de4u); f_12064500();
  /* 12061de4 mov esi, esp */
  ESI = (ESP);
  /* 12061de6 push 0x1208c034 */
  push32((uint32_t)(0x1208c034u));
  /* 12061deb push 0x120913f0 */
  push32((uint32_t)(0x120913f0u));
  /* 12061df0 call dword ptr [0x120944c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c8))), 0x12061df6u);
  /* 12061df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061df9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061dfb call 0x12064500 */
  push32(0x12061e00u); f_12064500();
  /* 12061e00 mov esi, esp */
  ESI = (ESP);
  /* 12061e02 push 0x1208c030 */
  push32((uint32_t)(0x1208c030u));
  /* 12061e07 push 0x120914a0 */
  push32((uint32_t)(0x120914a0u));
  /* 12061e0c call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061e12u);
  /* 12061e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061e17 call 0x12064500 */
  push32(0x12061e1cu); f_12064500();
  /* 12061e1c mov esi, esp */
  ESI = (ESP);
  /* 12061e1e push 0x1208c02c */
  push32((uint32_t)(0x1208c02cu));
  /* 12061e23 push 0x12091518 */
  push32((uint32_t)(0x12091518u));
  /* 12061e28 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061e2eu);
  /* 12061e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061e31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061e33 call 0x12064500 */
  push32(0x12061e38u); f_12064500();
  /* 12061e38 mov esi, esp */
  ESI = (ESP);
  /* 12061e3a push 0x1208c028 */
  push32((uint32_t)(0x1208c028u));
  /* 12061e3f push 0x12091520 */
  push32((uint32_t)(0x12091520u));
  /* 12061e44 call dword ptr [0x120944c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c4))), 0x12061e4au);
  /* 12061e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061e4f call 0x12064500 */
  push32(0x12061e54u); f_12064500();
  /* 12061e54 mov esi, esp */
  ESI = (ESP);
  /* 12061e56 push 0x1208c01c */
  push32((uint32_t)(0x1208c01cu));
  /* 12061e5b push 0x12091508 */
  push32((uint32_t)(0x12091508u));
  /* 12061e60 call dword ptr [0x120944c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944c8))), 0x12061e66u);
  /* 12061e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061e6b call 0x12064500 */
  push32(0x12061e70u); f_12064500();
  /* 12061e70 pop edi */
  EDI = (pop32());
  /* 12061e71 pop esi */
  ESI = (pop32());
  /* 12061e72 pop ebx */
  EBX = (pop32());
  /* 12061e73 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12061e76 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12061e78 call 0x12064500 */
  push32(0x12061e7du); f_12064500();
  /* 12061e7d mov esp, ebp */
  ESP = (EBP);
  /* 12061e7f pop ebp */
  EBP = (pop32());
  /* 12061e80 ret  */
  ESPCHK(0x12061890u, _esp0);
  ESP += 4; return;
}

/* FUN_10002000 @ 0x12062000 (7354 bytes, 2139 insns) */
void f_12062000(void) {
  FTRACE(0x12062000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12062000 push ebp */
  push32((uint32_t)(EBP));
  /* 12062001 mov ebp, esp */
  EBP = (ESP);
  /* 12062003 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12062006 push ebx */
  push32((uint32_t)(EBX));
  /* 12062007 push esi */
  push32((uint32_t)(ESI));
  /* 12062008 push edi */
  push32((uint32_t)(EDI));
  /* 12062009 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 1206200c mov ecx, 0x13 */
  ECX = (0x13u);
  /* 12062011 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12062016 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12062018 mov esi, esp */
  ESI = (ESP);
  /* 1206201a push 0xa */
  push32((uint32_t)(0xau));
  /* 1206201c call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x12062022u);
  /* 12062022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062025 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062027 call 0x12064500 */
  push32(0x1206202cu); f_12064500();
  /* 1206202c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062033 je 0x12062150 */
  if (C.zf) goto L_12062150;
  /* 12062039 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206203b call 0x12061028 */
  push32(0x12062040u); f_12061028();
  /* 12062040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062043 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062045 call 0x12061028 */
  push32(0x1206204au); f_12061028();
  /* 1206204a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206204d push 5 */
  push32((uint32_t)(0x5u));
  /* 1206204f call 0x12061028 */
  push32(0x12062054u); f_12061028();
  /* 12062054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062057 mov esi, esp */
  ESI = (ESP);
  /* 12062059 push 3 */
  push32((uint32_t)(0x3u));
  /* 1206205b push 2 */
  push32((uint32_t)(0x2u));
  /* 1206205d call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062063u);
  /* 12062063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062066 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062068 call 0x12064500 */
  push32(0x1206206du); f_12064500();
  /* 1206206d cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062072 jge 0x1206208f */
  if ((C.sf==C.of)) goto L_1206208f;
  /* 12062074 mov esi, esp */
  ESI = (ESP);
  /* 12062076 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 1206207b push 3 */
  push32((uint32_t)(0x3u));
  /* 1206207d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206207f call dword ptr [0x120944f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f0))), 0x12062085u);
  /* 12062085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062088 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206208a call 0x12064500 */
  push32(0x1206208fu); f_12064500();
L_1206208f:;
  /* 1206208f mov esi, esp */
  ESI = (ESP);
  /* 12062091 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062093 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062095 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x1206209bu);
  /* 1206209b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206209e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120620a0 call 0x12064500 */
  push32(0x120620a5u); f_12064500();
  /* 120620a5 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120620aa jge 0x120620c7 */
  if ((C.sf==C.of)) goto L_120620c7;
  /* 120620ac mov esi, esp */
  ESI = (ESP);
  /* 120620ae push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 120620b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120620b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120620b7 call dword ptr [0x120944f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f0))), 0x120620bdu);
  /* 120620bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120620c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120620c2 call 0x12064500 */
  push32(0x120620c7u); f_12064500();
L_120620c7:;
  /* 120620c7 mov esi, esp */
  ESI = (ESP);
  /* 120620c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 120620cb push 2 */
  push32((uint32_t)(0x2u));
  /* 120620cd call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120620d3u);
  /* 120620d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120620d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120620d8 call 0x12064500 */
  push32(0x120620ddu); f_12064500();
  /* 120620dd cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120620e2 jge 0x120620ff */
  if ((C.sf==C.of)) goto L_120620ff;
  /* 120620e4 mov esi, esp */
  ESI = (ESP);
  /* 120620e6 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 120620eb push 4 */
  push32((uint32_t)(0x4u));
  /* 120620ed push 2 */
  push32((uint32_t)(0x2u));
  /* 120620ef call dword ptr [0x120944f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f0))), 0x120620f5u);
  /* 120620f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120620f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120620fa call 0x12064500 */
  push32(0x120620ffu); f_12064500();
L_120620ff:;
  /* 120620ff mov esi, esp */
  ESI = (ESP);
  /* 12062101 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062103 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062105 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x1206210bu);
  /* 1206210b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206210e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062110 call 0x12064500 */
  push32(0x12062115u); f_12064500();
  /* 12062115 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206211a jge 0x12062137 */
  if ((C.sf==C.of)) goto L_12062137;
  /* 1206211c mov esi, esp */
  ESI = (ESP);
  /* 1206211e push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 12062123 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062125 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062127 call dword ptr [0x120944f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f0))), 0x1206212du);
  /* 1206212d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062132 call 0x12064500 */
  push32(0x12062137u); f_12064500();
L_12062137:;
  /* 12062137 mov esi, esp */
  ESI = (ESP);
  /* 12062139 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1206213e push 0xa */
  push32((uint32_t)(0xau));
  /* 12062140 call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062146u);
  /* 12062146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206214b call 0x12064500 */
  push32(0x12062150u); f_12064500();
L_12062150:;
  /* 12062150 mov esi, esp */
  ESI = (ESP);
  /* 12062152 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062154 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x1206215au);
  /* 1206215a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206215d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206215f call 0x12064500 */
  push32(0x12062164u); f_12064500();
  /* 12062164 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206216b je 0x12062952 */
  if (C.zf) goto L_12062952;
  /* 12062171 mov esi, esp */
  ESI = (ESP);
  /* 12062173 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12062175 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062177 call dword ptr [0x12094458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094458))), 0x1206217du);
  /* 1206217d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062180 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062182 call 0x12064500 */
  push32(0x12062187u); f_12064500();
  /* 12062187 mov esi, esp */
  ESI = (ESP);
  /* 12062189 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1206218b push 2 */
  push32((uint32_t)(0x2u));
  /* 1206218d call dword ptr [0x12094458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094458))), 0x12062193u);
  /* 12062193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062196 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062198 call 0x12064500 */
  push32(0x1206219du); f_12064500();
  /* 1206219d mov esi, esp */
  ESI = (ESP);
  /* 1206219f push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 120621a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 120621a3 call dword ptr [0x12094458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094458))), 0x120621a9u);
  /* 120621a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120621ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120621ae call 0x12064500 */
  push32(0x120621b3u); f_12064500();
  /* 120621b3 mov esi, esp */
  ESI = (ESP);
  /* 120621b5 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 120621b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 120621b9 call dword ptr [0x12094458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094458))), 0x120621bfu);
  /* 120621bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120621c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120621c4 call 0x12064500 */
  push32(0x120621c9u); f_12064500();
  /* 120621c9 mov esi, esp */
  ESI = (ESP);
  /* 120621cb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120621cd push 4 */
  push32((uint32_t)(0x4u));
  /* 120621cf call dword ptr [0x12094458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094458))), 0x120621d5u);
  /* 120621d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120621d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120621da call 0x12064500 */
  push32(0x120621dfu); f_12064500();
  /* 120621df mov esi, esp */
  ESI = (ESP);
  /* 120621e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120621e3 call dword ptr [0x1209445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209445c))), 0x120621e9u);
  /* 120621e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120621ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120621ee call 0x12064500 */
  push32(0x120621f3u); f_12064500();
  /* 120621f3 mov dword ptr [0x120913fc], eax */
  w32((uint32_t)(0x120913fc), (EAX));
  /* 120621f8 mov eax, dword ptr [0x120913fc] */
  EAX = (r32((uint32_t)(0x120913fc)));
  /* 120621fd shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120621ff mov ecx, 0xf */
  ECX = (0xfu);
  /* 12062204 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12062206 mov dword ptr [0x120914b0], ecx */
  w32((uint32_t)(0x120914b0), (ECX));
  /* 1206220c mov eax, dword ptr [0x120913fc] */
  EAX = (r32((uint32_t)(0x120913fc)));
  /* 12062211 imul eax, eax, 5 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x5u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12062214 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12062215 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12062217 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12062219 mov edx, 0xa */
  EDX = (0xau);
  /* 1206221e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12062220 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12062226 mov esi, esp */
  ESI = (ESP);
  /* 12062228 push edx */
  push32((uint32_t)(EDX));
  /* 12062229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206222b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206222d call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062233u);
  /* 12062233 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062238 call 0x12064500 */
  push32(0x1206223du); f_12064500();
  /* 1206223d mov esi, esp */
  ESI = (ESP);
  /* 1206223f push 0 */
  push32((uint32_t)(0x0u));
  /* 12062241 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062243 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062249u);
  /* 12062249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206224c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206224e call 0x12064500 */
  push32(0x12062253u); f_12064500();
  /* 12062253 mov esi, esp */
  ESI = (ESP);
  /* 12062255 push eax */
  push32((uint32_t)(EAX));
  /* 12062256 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062258 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206225a call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062260u);
  /* 12062260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062263 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062265 call 0x12064500 */
  push32(0x1206226au); f_12064500();
  /* 1206226a mov esi, esp */
  ESI = (ESP);
  /* 1206226c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206226e push 0 */
  push32((uint32_t)(0x0u));
  /* 12062270 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062276u);
  /* 12062276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062279 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206227b call 0x12064500 */
  push32(0x12062280u); f_12064500();
  /* 12062280 mov esi, esp */
  ESI = (ESP);
  /* 12062282 push eax */
  push32((uint32_t)(EAX));
  /* 12062283 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062285 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062287 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206228du);
  /* 1206228d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062292 call 0x12064500 */
  push32(0x12062297u); f_12064500();
  /* 12062297 mov esi, esp */
  ESI = (ESP);
  /* 12062299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206229b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206229d call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120622a3u);
  /* 120622a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120622a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120622a8 call 0x12064500 */
  push32(0x120622adu); f_12064500();
  /* 120622ad mov esi, esp */
  ESI = (ESP);
  /* 120622af push eax */
  push32((uint32_t)(EAX));
  /* 120622b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120622b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120622b4 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120622bau);
  /* 120622ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120622bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120622bf call 0x12064500 */
  push32(0x120622c4u); f_12064500();
  /* 120622c4 mov esi, esp */
  ESI = (ESP);
  /* 120622c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120622c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120622ca call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120622d0u);
  /* 120622d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120622d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120622d5 call 0x12064500 */
  push32(0x120622dau); f_12064500();
  /* 120622da mov esi, esp */
  ESI = (ESP);
  /* 120622dc push eax */
  push32((uint32_t)(EAX));
  /* 120622dd push 4 */
  push32((uint32_t)(0x4u));
  /* 120622df push 0 */
  push32((uint32_t)(0x0u));
  /* 120622e1 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120622e7u);
  /* 120622e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120622ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120622ec call 0x12064500 */
  push32(0x120622f1u); f_12064500();
  /* 120622f1 mov esi, esp */
  ESI = (ESP);
  /* 120622f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120622f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120622f7 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120622fdu);
  /* 120622fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062302 call 0x12064500 */
  push32(0x12062307u); f_12064500();
  /* 12062307 mov esi, esp */
  ESI = (ESP);
  /* 12062309 push eax */
  push32((uint32_t)(EAX));
  /* 1206230a push 5 */
  push32((uint32_t)(0x5u));
  /* 1206230c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206230e call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062314u);
  /* 12062314 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062319 call 0x12064500 */
  push32(0x1206231eu); f_12064500();
  /* 1206231e mov esi, esp */
  ESI = (ESP);
  /* 12062320 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062322 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062324 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x1206232au);
  /* 1206232a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206232d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206232f call 0x12064500 */
  push32(0x12062334u); f_12064500();
  /* 12062334 mov esi, esp */
  ESI = (ESP);
  /* 12062336 push eax */
  push32((uint32_t)(EAX));
  /* 12062337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062339 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206233b call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062341u);
  /* 12062341 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062344 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062346 call 0x12064500 */
  push32(0x1206234bu); f_12064500();
  /* 1206234b mov esi, esp */
  ESI = (ESP);
  /* 1206234d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206234f push 1 */
  push32((uint32_t)(0x1u));
  /* 12062351 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062357u);
  /* 12062357 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206235a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206235c call 0x12064500 */
  push32(0x12062361u); f_12064500();
  /* 12062361 mov esi, esp */
  ESI = (ESP);
  /* 12062363 push eax */
  push32((uint32_t)(EAX));
  /* 12062364 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062366 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062368 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206236eu);
  /* 1206236e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062373 call 0x12064500 */
  push32(0x12062378u); f_12064500();
  /* 12062378 mov esi, esp */
  ESI = (ESP);
  /* 1206237a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206237c push 1 */
  push32((uint32_t)(0x1u));
  /* 1206237e call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062384u);
  /* 12062384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062389 call 0x12064500 */
  push32(0x1206238eu); f_12064500();
  /* 1206238e mov esi, esp */
  ESI = (ESP);
  /* 12062390 push eax */
  push32((uint32_t)(EAX));
  /* 12062391 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062393 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062395 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206239bu);
  /* 1206239b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206239e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120623a0 call 0x12064500 */
  push32(0x120623a5u); f_12064500();
  /* 120623a5 mov esi, esp */
  ESI = (ESP);
  /* 120623a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120623a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 120623ab call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120623b1u);
  /* 120623b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120623b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120623b6 call 0x12064500 */
  push32(0x120623bbu); f_12064500();
  /* 120623bb mov esi, esp */
  ESI = (ESP);
  /* 120623bd push eax */
  push32((uint32_t)(EAX));
  /* 120623be push 1 */
  push32((uint32_t)(0x1u));
  /* 120623c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120623c2 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120623c8u);
  /* 120623c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120623cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120623cd call 0x12064500 */
  push32(0x120623d2u); f_12064500();
  /* 120623d2 mov esi, esp */
  ESI = (ESP);
  /* 120623d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120623d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120623d8 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120623deu);
  /* 120623de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120623e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120623e3 call 0x12064500 */
  push32(0x120623e8u); f_12064500();
  /* 120623e8 mov esi, esp */
  ESI = (ESP);
  /* 120623ea push eax */
  push32((uint32_t)(EAX));
  /* 120623eb push 4 */
  push32((uint32_t)(0x4u));
  /* 120623ed push 1 */
  push32((uint32_t)(0x1u));
  /* 120623ef call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120623f5u);
  /* 120623f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120623f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120623fa call 0x12064500 */
  push32(0x120623ffu); f_12064500();
  /* 120623ff mov esi, esp */
  ESI = (ESP);
  /* 12062401 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062403 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062405 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x1206240bu);
  /* 1206240b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206240e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062410 call 0x12064500 */
  push32(0x12062415u); f_12064500();
  /* 12062415 mov esi, esp */
  ESI = (ESP);
  /* 12062417 push eax */
  push32((uint32_t)(EAX));
  /* 12062418 push 5 */
  push32((uint32_t)(0x5u));
  /* 1206241a push 1 */
  push32((uint32_t)(0x1u));
  /* 1206241c call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062422u);
  /* 12062422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062427 call 0x12064500 */
  push32(0x1206242cu); f_12064500();
  /* 1206242c mov esi, esp */
  ESI = (ESP);
  /* 1206242e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12062433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062435 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062437 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206243du);
  /* 1206243d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062440 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062442 call 0x12064500 */
  push32(0x12062447u); f_12064500();
  /* 12062447 mov esi, esp */
  ESI = (ESP);
  /* 12062449 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206244b push 3 */
  push32((uint32_t)(0x3u));
  /* 1206244d call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062453u);
  /* 12062453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062456 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062458 call 0x12064500 */
  push32(0x1206245du); f_12064500();
  /* 1206245d mov esi, esp */
  ESI = (ESP);
  /* 1206245f push eax */
  push32((uint32_t)(EAX));
  /* 12062460 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062462 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062464 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206246au);
  /* 1206246a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206246d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206246f call 0x12064500 */
  push32(0x12062474u); f_12064500();
  /* 12062474 mov esi, esp */
  ESI = (ESP);
  /* 12062476 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062478 push 3 */
  push32((uint32_t)(0x3u));
  /* 1206247a call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062480u);
  /* 12062480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062485 call 0x12064500 */
  push32(0x1206248au); f_12064500();
  /* 1206248a mov esi, esp */
  ESI = (ESP);
  /* 1206248c push eax */
  push32((uint32_t)(EAX));
  /* 1206248d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206248f push 3 */
  push32((uint32_t)(0x3u));
  /* 12062491 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062497u);
  /* 12062497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206249a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206249c call 0x12064500 */
  push32(0x120624a1u); f_12064500();
  /* 120624a1 mov esi, esp */
  ESI = (ESP);
  /* 120624a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120624a5 push 3 */
  push32((uint32_t)(0x3u));
  /* 120624a7 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120624adu);
  /* 120624ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120624b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120624b2 call 0x12064500 */
  push32(0x120624b7u); f_12064500();
  /* 120624b7 mov esi, esp */
  ESI = (ESP);
  /* 120624b9 push eax */
  push32((uint32_t)(EAX));
  /* 120624ba push 1 */
  push32((uint32_t)(0x1u));
  /* 120624bc push 3 */
  push32((uint32_t)(0x3u));
  /* 120624be call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120624c4u);
  /* 120624c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120624c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120624c9 call 0x12064500 */
  push32(0x120624ceu); f_12064500();
  /* 120624ce mov esi, esp */
  ESI = (ESP);
  /* 120624d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120624d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 120624d4 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120624dau);
  /* 120624da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120624dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120624df call 0x12064500 */
  push32(0x120624e4u); f_12064500();
  /* 120624e4 mov esi, esp */
  ESI = (ESP);
  /* 120624e6 push eax */
  push32((uint32_t)(EAX));
  /* 120624e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 120624e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 120624eb call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120624f1u);
  /* 120624f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120624f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120624f6 call 0x12064500 */
  push32(0x120624fbu); f_12064500();
  /* 120624fb mov esi, esp */
  ESI = (ESP);
  /* 120624fd push 0 */
  push32((uint32_t)(0x0u));
  /* 120624ff push 3 */
  push32((uint32_t)(0x3u));
  /* 12062501 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062507u);
  /* 12062507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206250a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206250c call 0x12064500 */
  push32(0x12062511u); f_12064500();
  /* 12062511 mov esi, esp */
  ESI = (ESP);
  /* 12062513 push eax */
  push32((uint32_t)(EAX));
  /* 12062514 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062516 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062518 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206251eu);
  /* 1206251e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062523 call 0x12064500 */
  push32(0x12062528u); f_12064500();
  /* 12062528 mov esi, esp */
  ESI = (ESP);
  /* 1206252a push 3 */
  push32((uint32_t)(0x3u));
  /* 1206252c push 3 */
  push32((uint32_t)(0x3u));
  /* 1206252e call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062534u);
  /* 12062534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062539 call 0x12064500 */
  push32(0x1206253eu); f_12064500();
  /* 1206253e mov esi, esp */
  ESI = (ESP);
  /* 12062540 push eax */
  push32((uint32_t)(EAX));
  /* 12062541 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062543 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062545 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206254bu);
  /* 1206254b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206254e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062550 call 0x12064500 */
  push32(0x12062555u); f_12064500();
  /* 12062555 mov esi, esp */
  ESI = (ESP);
  /* 12062557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062559 push 3 */
  push32((uint32_t)(0x3u));
  /* 1206255b call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062561u);
  /* 12062561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062566 call 0x12064500 */
  push32(0x1206256bu); f_12064500();
  /* 1206256b mov esi, esp */
  ESI = (ESP);
  /* 1206256d push eax */
  push32((uint32_t)(EAX));
  /* 1206256e push 3 */
  push32((uint32_t)(0x3u));
  /* 12062570 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062572 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062578u);
  /* 12062578 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206257b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206257d call 0x12064500 */
  push32(0x12062582u); f_12064500();
  /* 12062582 mov esi, esp */
  ESI = (ESP);
  /* 12062584 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062586 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062588 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x1206258eu);
  /* 1206258e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062593 call 0x12064500 */
  push32(0x12062598u); f_12064500();
  /* 12062598 mov esi, esp */
  ESI = (ESP);
  /* 1206259a push eax */
  push32((uint32_t)(EAX));
  /* 1206259b push 2 */
  push32((uint32_t)(0x2u));
  /* 1206259d push 5 */
  push32((uint32_t)(0x5u));
  /* 1206259f call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120625a5u);
  /* 120625a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120625a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120625aa call 0x12064500 */
  push32(0x120625afu); f_12064500();
  /* 120625af mov esi, esp */
  ESI = (ESP);
  /* 120625b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120625b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 120625b5 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120625bbu);
  /* 120625bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120625be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120625c0 call 0x12064500 */
  push32(0x120625c5u); f_12064500();
  /* 120625c5 mov esi, esp */
  ESI = (ESP);
  /* 120625c7 push eax */
  push32((uint32_t)(EAX));
  /* 120625c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120625ca push 5 */
  push32((uint32_t)(0x5u));
  /* 120625cc call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120625d2u);
  /* 120625d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120625d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120625d7 call 0x12064500 */
  push32(0x120625dcu); f_12064500();
  /* 120625dc mov esi, esp */
  ESI = (ESP);
  /* 120625de push 0 */
  push32((uint32_t)(0x0u));
  /* 120625e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 120625e2 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x120625e8u);
  /* 120625e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120625eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120625ed call 0x12064500 */
  push32(0x120625f2u); f_12064500();
  /* 120625f2 mov esi, esp */
  ESI = (ESP);
  /* 120625f4 push eax */
  push32((uint32_t)(EAX));
  /* 120625f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 120625f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 120625f9 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x120625ffu);
  /* 120625ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062602 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062604 call 0x12064500 */
  push32(0x12062609u); f_12064500();
  /* 12062609 mov esi, esp */
  ESI = (ESP);
  /* 1206260b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206260d push 3 */
  push32((uint32_t)(0x3u));
  /* 1206260f call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062615u);
  /* 12062615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062618 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206261a call 0x12064500 */
  push32(0x1206261fu); f_12064500();
  /* 1206261f mov esi, esp */
  ESI = (ESP);
  /* 12062621 push eax */
  push32((uint32_t)(EAX));
  /* 12062622 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062624 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062626 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x1206262cu);
  /* 1206262c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206262f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062631 call 0x12064500 */
  push32(0x12062636u); f_12064500();
  /* 12062636 mov esi, esp */
  ESI = (ESP);
  /* 12062638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206263a push 0x12091508 */
  push32((uint32_t)(0x12091508u));
  /* 1206263f push 0 */
  push32((uint32_t)(0x0u));
  /* 12062641 call dword ptr [0x12094454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094454))), 0x12062647u);
  /* 12062647 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206264a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206264c call 0x12064500 */
  push32(0x12062651u); f_12064500();
  /* 12062651 mov esi, esp */
  ESI = (ESP);
  /* 12062653 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062655 push 0x120914c0 */
  push32((uint32_t)(0x120914c0u));
  /* 1206265a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206265c call dword ptr [0x12094454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094454))), 0x12062662u);
  /* 12062662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062667 call 0x12064500 */
  push32(0x1206266cu); f_12064500();
  /* 1206266c mov esi, esp */
  ESI = (ESP);
  /* 1206266e push 0x1208c204 */
  push32((uint32_t)(0x1208c204u));
  /* 12062673 push 0x1208c0ac */
  push32((uint32_t)(0x1208c0acu));
  /* 12062678 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x1206267eu);
  /* 1206267e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062683 call 0x12064500 */
  push32(0x12062688u); f_12064500();
  /* 12062688 mov esi, esp */
  ESI = (ESP);
  /* 1206268a push 0x12091528 */
  push32((uint32_t)(0x12091528u));
  /* 1206268f call dword ptr [0x12094468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094468))), 0x12062695u);
  /* 12062695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062698 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206269a call 0x12064500 */
  push32(0x1206269fu); f_12064500();
  /* 1206269f mov esi, esp */
  ESI = (ESP);
  /* 120626a1 push 0x12091530 */
  push32((uint32_t)(0x12091530u));
  /* 120626a6 call dword ptr [0x12094468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094468))), 0x120626acu);
  /* 120626ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120626af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120626b1 call 0x12064500 */
  push32(0x120626b6u); f_12064500();
  /* 120626b6 mov esi, esp */
  ESI = (ESP);
  /* 120626b8 push 0x1208c1f8 */
  push32((uint32_t)(0x1208c1f8u));
  /* 120626bd push 0x1208c0cc */
  push32((uint32_t)(0x1208c0ccu));
  /* 120626c2 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x120626c8u);
  /* 120626c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120626cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120626cd call 0x12064500 */
  push32(0x120626d2u); f_12064500();
  /* 120626d2 mov esi, esp */
  ESI = (ESP);
  /* 120626d4 push 0x1208c1ec */
  push32((uint32_t)(0x1208c1ecu));
  /* 120626d9 push 0x1208c0cc */
  push32((uint32_t)(0x1208c0ccu));
  /* 120626de call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x120626e4u);
  /* 120626e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120626e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120626e9 call 0x12064500 */
  push32(0x120626eeu); f_12064500();
  /* 120626ee mov esi, esp */
  ESI = (ESP);
  /* 120626f0 push 0x1208c1f8 */
  push32((uint32_t)(0x1208c1f8u));
  /* 120626f5 push 0x1208c0c4 */
  push32((uint32_t)(0x1208c0c4u));
  /* 120626fa call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x12062700u);
  /* 12062700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062705 call 0x12064500 */
  push32(0x1206270au); f_12064500();
  /* 1206270a mov esi, esp */
  ESI = (ESP);
  /* 1206270c push 0x1208c1ec */
  push32((uint32_t)(0x1208c1ecu));
  /* 12062711 push 0x1208c0c4 */
  push32((uint32_t)(0x1208c0c4u));
  /* 12062716 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x1206271cu);
  /* 1206271c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206271f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062721 call 0x12064500 */
  push32(0x12062726u); f_12064500();
  /* 12062726 mov esi, esp */
  ESI = (ESP);
  /* 12062728 push 0x1208c1e0 */
  push32((uint32_t)(0x1208c1e0u));
  /* 1206272d push 0x1208c0cc */
  push32((uint32_t)(0x1208c0ccu));
  /* 12062732 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x12062738u);
  /* 12062738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206273b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206273d call 0x12064500 */
  push32(0x12062742u); f_12064500();
  /* 12062742 mov eax, dword ptr [0x120913fc] */
  EAX = (r32((uint32_t)(0x120913fc)));
  /* 12062747 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1206274a cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206274e je 0x120627d5 */
  if (C.zf) goto L_120627d5;
  /* 12062754 cmp dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062758 je 0x1206279d */
  if (C.zf) goto L_1206279d;
  /* 1206275a cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206275e je 0x12062765 */
  if (C.zf) goto L_12062765;
  /* 12062760 jmp 0x1206280d */
  goto L_1206280d;
L_12062765:;
  /* 12062765 mov esi, esp */
  ESI = (ESP);
  /* 12062767 push 0x1208c1d4 */
  push32((uint32_t)(0x1208c1d4u));
  /* 1206276c push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 12062771 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x12062777u);
  /* 12062777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206277a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206277c call 0x12064500 */
  push32(0x12062781u); f_12064500();
  /* 12062781 mov esi, esp */
  ESI = (ESP);
  /* 12062783 push 0x1208c1c8 */
  push32((uint32_t)(0x1208c1c8u));
  /* 12062788 push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 1206278d call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x12062793u);
  /* 12062793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062796 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062798 call 0x12064500 */
  push32(0x1206279du); f_12064500();
L_1206279d:;
  /* 1206279d mov esi, esp */
  ESI = (ESP);
  /* 1206279f push 0x1208c1bc */
  push32((uint32_t)(0x1208c1bcu));
  /* 120627a4 push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 120627a9 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x120627afu);
  /* 120627af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120627b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120627b4 call 0x12064500 */
  push32(0x120627b9u); f_12064500();
  /* 120627b9 mov esi, esp */
  ESI = (ESP);
  /* 120627bb push 0x1208c1b0 */
  push32((uint32_t)(0x1208c1b0u));
  /* 120627c0 push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 120627c5 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x120627cbu);
  /* 120627cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120627ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120627d0 call 0x12064500 */
  push32(0x120627d5u); f_12064500();
L_120627d5:;
  /* 120627d5 mov esi, esp */
  ESI = (ESP);
  /* 120627d7 push 0x1208c1a4 */
  push32((uint32_t)(0x1208c1a4u));
  /* 120627dc push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 120627e1 call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x120627e7u);
  /* 120627e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120627ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120627ec call 0x12064500 */
  push32(0x120627f1u); f_12064500();
  /* 120627f1 mov esi, esp */
  ESI = (ESP);
  /* 120627f3 push 0x1208c1f8 */
  push32((uint32_t)(0x1208c1f8u));
  /* 120627f8 push 0x1208c0e4 */
  push32((uint32_t)(0x1208c0e4u));
  /* 120627fd call dword ptr [0x12094464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094464))), 0x12062803u);
  /* 12062803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062806 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062808 call 0x12064500 */
  push32(0x1206280du); f_12064500();
L_1206280d:;
  /* 1206280d mov esi, esp */
  ESI = (ESP);
  /* 1206280f mov ecx, dword ptr [0x120913fc] */
  ECX = (r32((uint32_t)(0x120913fc)));
  /* 12062815 push ecx */
  push32((uint32_t)(ECX));
  /* 12062816 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206281a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206281c push 0x1208c198 */
  push32((uint32_t)(0x1208c198u));
  /* 12062821 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062823 call dword ptr [0x12094460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094460))), 0x12062829u);
  /* 12062829 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206282c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206282e call 0x12064500 */
  push32(0x12062833u); f_12064500();
  /* 12062833 mov esi, esp */
  ESI = (ESP);
  /* 12062835 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062837 push 0xa */
  push32((uint32_t)(0xau));
  /* 12062839 call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x1206283fu);
  /* 1206283f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062842 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062844 call 0x12064500 */
  push32(0x12062849u); f_12064500();
  /* 12062849 mov esi, esp */
  ESI = (ESP);
  /* 1206284b push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 1206284d push 1 */
  push32((uint32_t)(0x1u));
  /* 1206284f call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062855u);
  /* 12062855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062858 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206285a call 0x12064500 */
  push32(0x1206285fu); f_12064500();
  /* 1206285f mov esi, esp */
  ESI = (ESP);
  /* 12062861 push 0xde */
  push32((uint32_t)(0xdeu));
  /* 12062866 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062868 call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x1206286eu);
  /* 1206286e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062871 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062873 call 0x12064500 */
  push32(0x12062878u); f_12064500();
  /* 12062878 mov esi, esp */
  ESI = (ESP);
  /* 1206287a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1206287f push 3 */
  push32((uint32_t)(0x3u));
  /* 12062881 call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062887u);
  /* 12062887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206288a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206288c call 0x12064500 */
  push32(0x12062891u); f_12064500();
  /* 12062891 mov esi, esp */
  ESI = (ESP);
  /* 12062893 push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 12062898 push 0x12091448 */
  push32((uint32_t)(0x12091448u));
  /* 1206289d call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120628a3u);
  /* 120628a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120628a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120628a8 call 0x12064500 */
  push32(0x120628adu); f_12064500();
  /* 120628ad mov esi, esp */
  ESI = (ESP);
  /* 120628af push 0x42 */
  push32((uint32_t)(0x42u));
  /* 120628b1 call dword ptr [0x12094470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094470))), 0x120628b7u);
  /* 120628b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120628ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120628bc call 0x12064500 */
  push32(0x120628c1u); f_12064500();
  /* 120628c1 mov esi, esp */
  ESI = (ESP);
  /* 120628c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 120628c5 call dword ptr [0x12094470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094470))), 0x120628cbu);
  /* 120628cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120628ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120628d0 call 0x12064500 */
  push32(0x120628d5u); f_12064500();
  /* 120628d5 mov esi, esp */
  ESI = (ESP);
  /* 120628d7 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120628d9 call dword ptr [0x12094474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094474))), 0x120628dfu);
  /* 120628df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120628e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120628e4 call 0x12064500 */
  push32(0x120628e9u); f_12064500();
  /* 120628e9 mov esi, esp */
  ESI = (ESP);
  /* 120628eb push 0x45 */
  push32((uint32_t)(0x45u));
  /* 120628ed call dword ptr [0x12094474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094474))), 0x120628f3u);
  /* 120628f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120628f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120628f8 call 0x12064500 */
  push32(0x120628fdu); f_12064500();
  /* 120628fd mov esi, esp */
  ESI = (ESP);
  /* 120628ff push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12062901 call dword ptr [0x12094474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094474))), 0x12062907u);
  /* 12062907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206290a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206290c call 0x12064500 */
  push32(0x12062911u); f_12064500();
  /* 12062911 mov esi, esp */
  ESI = (ESP);
  /* 12062913 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12062915 call dword ptr [0x12094474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094474))), 0x1206291bu);
  /* 1206291b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206291e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062920 call 0x12064500 */
  push32(0x12062925u); f_12064500();
  /* 12062925 mov esi, esp */
  ESI = (ESP);
  /* 12062927 push 0x1208c190 */
  push32((uint32_t)(0x1208c190u));
  /* 1206292c call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x12062932u);
  /* 12062932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062937 call 0x12064500 */
  push32(0x1206293cu); f_12064500();
  /* 1206293c mov esi, esp */
  ESI = (ESP);
  /* 1206293e push 0 */
  push32((uint32_t)(0x0u));
  /* 12062940 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062942 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12062948u);
  /* 12062948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206294b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206294d call 0x12064500 */
  push32(0x12062952u); f_12064500();
L_12062952:;
  /* 12062952 mov esi, esp */
  ESI = (ESP);
  /* 12062954 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12062956 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x1206295cu);
  /* 1206295c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206295f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062961 call 0x12064500 */
  push32(0x12062966u); f_12064500();
  /* 12062966 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206296b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206296d je 0x120629c0 */
  if (C.zf) goto L_120629c0;
  /* 1206296f mov esi, esp */
  ESI = (ESP);
  /* 12062971 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062973 push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12062978 call dword ptr [0x12094480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094480))), 0x1206297eu);
  /* 1206297e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062981 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062983 call 0x12064500 */
  push32(0x12062988u); f_12064500();
  /* 12062988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206298a jle 0x120629c0 */
  if ((C.zf||C.sf!=C.of)) goto L_120629c0;
  /* 1206298c mov esi, esp */
  ESI = (ESP);
  /* 1206298e push 0 */
  push32((uint32_t)(0x0u));
  /* 12062990 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062992 push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12062997 call dword ptr [0x12094478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094478))), 0x1206299du);
  /* 1206299d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120629a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120629a2 call 0x12064500 */
  push32(0x120629a7u); f_12064500();
  /* 120629a7 mov esi, esp */
  ESI = (ESP);
  /* 120629a9 push 0x12091410 */
  push32((uint32_t)(0x12091410u));
  /* 120629ae push 2 */
  push32((uint32_t)(0x2u));
  /* 120629b0 call dword ptr [0x12094488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094488))), 0x120629b6u);
  /* 120629b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120629b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120629bb call 0x12064500 */
  push32(0x120629c0u); f_12064500();
L_120629c0:;
  /* 120629c0 mov esi, esp */
  ESI = (ESP);
  /* 120629c2 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 120629c4 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x120629cau);
  /* 120629ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120629cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120629cf call 0x12064500 */
  push32(0x120629d4u); f_12064500();
  /* 120629d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120629d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120629db je 0x12062b03 */
  if (C.zf) goto L_12062b03;
  /* 120629e1 mov esi, esp */
  ESI = (ESP);
  /* 120629e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 120629e5 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x120629ebu);
  /* 120629eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120629ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120629f0 call 0x12064500 */
  push32(0x120629f5u); f_12064500();
  /* 120629f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120629fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120629fc je 0x12062b03 */
  if (C.zf) goto L_12062b03;
  /* 12062a02 mov esi, esp */
  ESI = (ESP);
  /* 12062a04 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062a06 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12062a0cu);
  /* 12062a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062a0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062a11 call 0x12064500 */
  push32(0x12062a16u); f_12064500();
  /* 12062a16 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062a1d je 0x12062a85 */
  if (C.zf) goto L_12062a85;
  /* 12062a1f mov esi, esp */
  ESI = (ESP);
  /* 12062a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062a23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062a25 push 0x12091450 */
  push32((uint32_t)(0x12091450u));
  /* 12062a2a call dword ptr [0x12094478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094478))), 0x12062a30u);
  /* 12062a30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062a35 call 0x12064500 */
  push32(0x12062a3au); f_12064500();
  /* 12062a3a mov esi, esp */
  ESI = (ESP);
  /* 12062a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12062a3e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12062a40 push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12062a45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062a47 call dword ptr [0x120944dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944dc))), 0x12062a4du);
  /* 12062a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062a50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062a52 call 0x12064500 */
  push32(0x12062a57u); f_12064500();
  /* 12062a57 mov esi, esp */
  ESI = (ESP);
  /* 12062a59 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12062a5b push 3 */
  push32((uint32_t)(0x3u));
  /* 12062a5d call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062a63u);
  /* 12062a63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062a68 call 0x12064500 */
  push32(0x12062a6du); f_12064500();
  /* 12062a6d mov esi, esp */
  ESI = (ESP);
  /* 12062a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12062a71 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062a73 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12062a79u);
  /* 12062a79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062a7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062a7e call 0x12064500 */
  push32(0x12062a83u); f_12064500();
  /* 12062a83 jmp 0x12062b03 */
  goto L_12062b03;
L_12062a85:;
  /* 12062a85 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12062a8a push 0x12091460 */
  push32((uint32_t)(0x12091460u));
  /* 12062a8f push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 12062a94 call 0x1206102d */
  push32(0x12062a99u); f_1206102d();
  /* 12062a99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062a9c mov esi, esp */
  ESI = (ESP);
  /* 12062a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12062aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062aa2 push 0x12091450 */
  push32((uint32_t)(0x12091450u));
  /* 12062aa7 call dword ptr [0x12094478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094478))), 0x12062aadu);
  /* 12062aad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062ab0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062ab2 call 0x12064500 */
  push32(0x12062ab7u); f_12064500();
  /* 12062ab7 mov esi, esp */
  ESI = (ESP);
  /* 12062ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062abb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12062abd push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12062ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062ac4 call dword ptr [0x120944ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944ec))), 0x12062acau);
  /* 12062aca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062acf call 0x12064500 */
  push32(0x12062ad4u); f_12064500();
  /* 12062ad4 mov esi, esp */
  ESI = (ESP);
  /* 12062ad6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12062adb push 3 */
  push32((uint32_t)(0x3u));
  /* 12062add call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062ae3u);
  /* 12062ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062ae8 call 0x12064500 */
  push32(0x12062aedu); f_12064500();
  /* 12062aed mov esi, esp */
  ESI = (ESP);
  /* 12062aef push 1 */
  push32((uint32_t)(0x1u));
  /* 12062af1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062af3 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12062af9u);
  /* 12062af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062afc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062afe call 0x12064500 */
  push32(0x12062b03u); f_12064500();
L_12062b03:;
  /* 12062b03 mov esi, esp */
  ESI = (ESP);
  /* 12062b05 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12062b07 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12062b0du);
  /* 12062b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062b12 call 0x12064500 */
  push32(0x12062b17u); f_12064500();
  /* 12062b17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062b1e je 0x12062ccb */
  if (C.zf) goto L_12062ccb;
  /* 12062b24 mov esi, esp */
  ESI = (ESP);
  /* 12062b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062b28 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x12062b2eu);
  /* 12062b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062b33 call 0x12064500 */
  push32(0x12062b38u); f_12064500();
  /* 12062b38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062b3f je 0x12062ccb */
  if (C.zf) goto L_12062ccb;
  /* 12062b45 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062b47 call 0x12061050 */
  push32(0x12062b4cu); f_12061050();
  /* 12062b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062b4f mov esi, esp */
  ESI = (ESP);
  /* 12062b51 push 6 */
  push32((uint32_t)(0x6u));
  /* 12062b53 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12062b58 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12062b5d push 0x120914d0 */
  push32((uint32_t)(0x120914d0u));
  /* 12062b62 call dword ptr [0x1209448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209448c))), 0x12062b68u);
  /* 12062b68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062b6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062b6d call 0x12064500 */
  push32(0x12062b72u); f_12064500();
  /* 12062b72 cmp dword ptr [0x120913fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120913fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062b79 jle 0x12062b9e */
  if ((C.zf||C.sf!=C.of)) goto L_12062b9e;
  /* 12062b7b mov esi, esp */
  ESI = (ESP);
  /* 12062b7d push 6 */
  push32((uint32_t)(0x6u));
  /* 12062b7f push 0x12091420 */
  push32((uint32_t)(0x12091420u));
  /* 12062b84 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12062b89 push 0x120914d8 */
  push32((uint32_t)(0x120914d8u));
  /* 12062b8e call dword ptr [0x1209448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209448c))), 0x12062b94u);
  /* 12062b94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062b99 call 0x12064500 */
  push32(0x12062b9eu); f_12064500();
L_12062b9e:;
  /* 12062b9e cmp dword ptr [0x120913fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120913fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062ba5 jle 0x12062bca */
  if ((C.zf||C.sf!=C.of)) goto L_12062bca;
  /* 12062ba7 mov esi, esp */
  ESI = (ESP);
  /* 12062ba9 push 6 */
  push32((uint32_t)(0x6u));
  /* 12062bab push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12062bb0 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12062bb5 push 0x120914d0 */
  push32((uint32_t)(0x120914d0u));
  /* 12062bba call dword ptr [0x1209448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209448c))), 0x12062bc0u);
  /* 12062bc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062bc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062bc5 call 0x12064500 */
  push32(0x12062bcau); f_12064500();
L_12062bca:;
  /* 12062bca cmp dword ptr [0x120913fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120913fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062bd1 jle 0x12062bf6 */
  if ((C.zf||C.sf!=C.of)) goto L_12062bf6;
  /* 12062bd3 mov esi, esp */
  ESI = (ESP);
  /* 12062bd5 push 6 */
  push32((uint32_t)(0x6u));
  /* 12062bd7 push 0x12091420 */
  push32((uint32_t)(0x12091420u));
  /* 12062bdc push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12062be1 push 0x120914d8 */
  push32((uint32_t)(0x120914d8u));
  /* 12062be6 call dword ptr [0x1209448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209448c))), 0x12062becu);
  /* 12062bec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062bf1 call 0x12064500 */
  push32(0x12062bf6u); f_12064500();
L_12062bf6:;
  /* 12062bf6 push 0x12091470 */
  push32((uint32_t)(0x12091470u));
  /* 12062bfb push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12062c00 call 0x12061032 */
  push32(0x12062c05u); f_12061032();
  /* 12062c05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c08 push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12062c0d push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12062c12 call 0x12061032 */
  push32(0x12062c17u); f_12061032();
  /* 12062c17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c1a push 0x12091478 */
  push32((uint32_t)(0x12091478u));
  /* 12062c1f push 0x12091420 */
  push32((uint32_t)(0x12091420u));
  /* 12062c24 call 0x12061032 */
  push32(0x12062c29u); f_12061032();
  /* 12062c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c2c push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 12062c31 push 0x12091420 */
  push32((uint32_t)(0x12091420u));
  /* 12062c36 call 0x12061032 */
  push32(0x12062c3bu); f_12061032();
  /* 12062c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c3e mov esi, esp */
  ESI = (ESP);
  /* 12062c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062c42 call dword ptr [0x12094484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094484))), 0x12062c48u);
  /* 12062c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062c4d call 0x12064500 */
  push32(0x12062c52u); f_12064500();
  /* 12062c52 mov esi, esp */
  ESI = (ESP);
  /* 12062c54 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062c56 call dword ptr [0x12094484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094484))), 0x12062c5cu);
  /* 12062c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062c61 call 0x12064500 */
  push32(0x12062c66u); f_12064500();
  /* 12062c66 mov esi, esp */
  ESI = (ESP);
  /* 12062c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 12062c6c push 0x12091538 */
  push32((uint32_t)(0x12091538u));
  /* 12062c71 call dword ptr [0x12094478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094478))), 0x12062c77u);
  /* 12062c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062c7c call 0x12064500 */
  push32(0x12062c81u); f_12064500();
  /* 12062c81 mov esi, esp */
  ESI = (ESP);
  /* 12062c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062c85 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062c87 push 0x12091540 */
  push32((uint32_t)(0x12091540u));
  /* 12062c8c call dword ptr [0x12094478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094478))), 0x12062c92u);
  /* 12062c92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062c97 call 0x12064500 */
  push32(0x12062c9cu); f_12064500();
  /* 12062c9c mov esi, esp */
  ESI = (ESP);
  /* 12062c9e push 2 */
  push32((uint32_t)(0x2u));
  /* 12062ca0 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062ca2 call dword ptr [0x12094494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094494))), 0x12062ca8u);
  /* 12062ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062cab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062cad call 0x12064500 */
  push32(0x12062cb2u); f_12064500();
  /* 12062cb2 mov esi, esp */
  ESI = (ESP);
  /* 12062cb4 push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 12062cb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062cbb call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062cc1u);
  /* 12062cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062cc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062cc6 call 0x12064500 */
  push32(0x12062ccbu); f_12064500();
L_12062ccb:;
  /* 12062ccb mov esi, esp */
  ESI = (ESP);
  /* 12062ccd push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12062ccf call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12062cd5u);
  /* 12062cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062cd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062cda call 0x12064500 */
  push32(0x12062cdfu); f_12064500();
  /* 12062cdf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062ce6 je 0x12062d6e */
  if (C.zf) goto L_12062d6e;
  /* 12062cec mov esi, esp */
  ESI = (ESP);
  /* 12062cee push 2 */
  push32((uint32_t)(0x2u));
  /* 12062cf0 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x12062cf6u);
  /* 12062cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062cf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062cfb call 0x12064500 */
  push32(0x12062d00u); f_12064500();
  /* 12062d00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062d05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062d07 je 0x12062d6e */
  if (C.zf) goto L_12062d6e;
  /* 12062d09 mov esi, esp */
  ESI = (ESP);
  /* 12062d0b push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 12062d10 call dword ptr [0x12094498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094498))), 0x12062d16u);
  /* 12062d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062d1b call 0x12064500 */
  push32(0x12062d20u); f_12064500();
  /* 12062d20 cmp eax, dword ptr [0x120914b0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120914b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062d26 jge 0x12062d6e */
  if ((C.sf==C.of)) goto L_12062d6e;
  /* 12062d28 push 4 */
  push32((uint32_t)(0x4u));
  /* 12062d2a call 0x12061050 */
  push32(0x12062d2fu); f_12061050();
  /* 12062d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062d32 mov esi, esp */
  ESI = (ESP);
  /* 12062d34 push 6 */
  push32((uint32_t)(0x6u));
  /* 12062d36 push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 12062d3b push 0x12091400 */
  push32((uint32_t)(0x12091400u));
  /* 12062d40 push 0x12091410 */
  push32((uint32_t)(0x12091410u));
  /* 12062d45 call dword ptr [0x1209448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209448c))), 0x12062d4bu);
  /* 12062d4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062d4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062d50 call 0x12064500 */
  push32(0x12062d55u); f_12064500();
  /* 12062d55 mov esi, esp */
  ESI = (ESP);
  /* 12062d57 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12062d5c push 2 */
  push32((uint32_t)(0x2u));
  /* 12062d5e call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12062d64u);
  /* 12062d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062d69 call 0x12064500 */
  push32(0x12062d6eu); f_12064500();
L_12062d6e:;
  /* 12062d6e mov esi, esp */
  ESI = (ESP);
  /* 12062d70 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12062d72 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12062d78u);
  /* 12062d78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062d7d call 0x12064500 */
  push32(0x12062d82u); f_12064500();
  /* 12062d82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062d89 je 0x1206309f */
  if (C.zf) goto L_1206309f;
  /* 12062d8f mov esi, esp */
  ESI = (ESP);
  /* 12062d91 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12062d93 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12062d99u);
  /* 12062d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062d9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062d9e call 0x12064500 */
  push32(0x12062da3u); f_12064500();
  /* 12062da3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12062da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12062daa jne 0x1206309f */
  if (!C.zf) goto L_1206309f;
  /* 12062db0 mov edx, dword ptr [0x120913fc] */
  EDX = (r32((uint32_t)(0x120913fc)));
  /* 12062db6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12062db9 imul edx, edx, 0x186a0 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x186a0u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12062dbf mov esi, esp */
  ESI = (ESP);
  /* 12062dc1 push edx */
  push32((uint32_t)(EDX));
  /* 12062dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062dc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062dc6 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062dccu);
  /* 12062dcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062dd1 call 0x12064500 */
  push32(0x12062dd6u); f_12064500();
  /* 12062dd6 mov esi, esp */
  ESI = (ESP);
  /* 12062dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062dda push 3 */
  push32((uint32_t)(0x3u));
  /* 12062ddc call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062de2u);
  /* 12062de2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062de5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062de7 call 0x12064500 */
  push32(0x12062decu); f_12064500();
  /* 12062dec mov esi, esp */
  ESI = (ESP);
  /* 12062dee push eax */
  push32((uint32_t)(EAX));
  /* 12062def push 3 */
  push32((uint32_t)(0x3u));
  /* 12062df1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062df3 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062df9u);
  /* 12062df9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062dfe call 0x12064500 */
  push32(0x12062e03u); f_12064500();
  /* 12062e03 mov esi, esp */
  ESI = (ESP);
  /* 12062e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062e07 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e09 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062e0fu);
  /* 12062e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e14 call 0x12064500 */
  push32(0x12062e19u); f_12064500();
  /* 12062e19 mov esi, esp */
  ESI = (ESP);
  /* 12062e1b push eax */
  push32((uint32_t)(EAX));
  /* 12062e1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12062e1e push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e20 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062e26u);
  /* 12062e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e2b call 0x12064500 */
  push32(0x12062e30u); f_12064500();
  /* 12062e30 mov esi, esp */
  ESI = (ESP);
  /* 12062e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062e34 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e36 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062e3cu);
  /* 12062e3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e41 call 0x12064500 */
  push32(0x12062e46u); f_12064500();
  /* 12062e46 mov esi, esp */
  ESI = (ESP);
  /* 12062e48 push eax */
  push32((uint32_t)(EAX));
  /* 12062e49 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062e4b push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e4d call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062e53u);
  /* 12062e53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e58 call 0x12064500 */
  push32(0x12062e5du); f_12064500();
  /* 12062e5d mov esi, esp */
  ESI = (ESP);
  /* 12062e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12062e61 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e63 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062e69u);
  /* 12062e69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e6e call 0x12064500 */
  push32(0x12062e73u); f_12064500();
  /* 12062e73 mov esi, esp */
  ESI = (ESP);
  /* 12062e75 push eax */
  push32((uint32_t)(EAX));
  /* 12062e76 push 4 */
  push32((uint32_t)(0x4u));
  /* 12062e78 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e7a call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062e80u);
  /* 12062e80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e85 call 0x12064500 */
  push32(0x12062e8au); f_12064500();
  /* 12062e8a mov esi, esp */
  ESI = (ESP);
  /* 12062e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12062e8e push 3 */
  push32((uint32_t)(0x3u));
  /* 12062e90 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062e96u);
  /* 12062e96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062e99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062e9b call 0x12064500 */
  push32(0x12062ea0u); f_12064500();
  /* 12062ea0 mov esi, esp */
  ESI = (ESP);
  /* 12062ea2 push eax */
  push32((uint32_t)(EAX));
  /* 12062ea3 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062ea5 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062ea7 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062eadu);
  /* 12062ead add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062eb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062eb2 call 0x12064500 */
  push32(0x12062eb7u); f_12064500();
  /* 12062eb7 mov esi, esp */
  ESI = (ESP);
  /* 12062eb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062ebb push 3 */
  push32((uint32_t)(0x3u));
  /* 12062ebd call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062ec3u);
  /* 12062ec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062ec8 call 0x12064500 */
  push32(0x12062ecdu); f_12064500();
  /* 12062ecd mov esi, esp */
  ESI = (ESP);
  /* 12062ecf push eax */
  push32((uint32_t)(EAX));
  /* 12062ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062ed2 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062ed4 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062edau);
  /* 12062eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062edf call 0x12064500 */
  push32(0x12062ee4u); f_12064500();
  /* 12062ee4 mov esi, esp */
  ESI = (ESP);
  /* 12062ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062ee8 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062eea call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062ef0u);
  /* 12062ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062ef5 call 0x12064500 */
  push32(0x12062efau); f_12064500();
  /* 12062efa mov esi, esp */
  ESI = (ESP);
  /* 12062efc push eax */
  push32((uint32_t)(EAX));
  /* 12062efd push 3 */
  push32((uint32_t)(0x3u));
  /* 12062eff push 5 */
  push32((uint32_t)(0x5u));
  /* 12062f01 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062f07u);
  /* 12062f07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f0c call 0x12064500 */
  push32(0x12062f11u); f_12064500();
  /* 12062f11 mov esi, esp */
  ESI = (ESP);
  /* 12062f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062f15 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062f17 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062f1du);
  /* 12062f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f22 call 0x12064500 */
  push32(0x12062f27u); f_12064500();
  /* 12062f27 mov esi, esp */
  ESI = (ESP);
  /* 12062f29 push eax */
  push32((uint32_t)(EAX));
  /* 12062f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12062f2c push 5 */
  push32((uint32_t)(0x5u));
  /* 12062f2e call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062f34u);
  /* 12062f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f39 call 0x12064500 */
  push32(0x12062f3eu); f_12064500();
  /* 12062f3e mov esi, esp */
  ESI = (ESP);
  /* 12062f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062f42 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062f44 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062f4au);
  /* 12062f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f4f call 0x12064500 */
  push32(0x12062f54u); f_12064500();
  /* 12062f54 mov esi, esp */
  ESI = (ESP);
  /* 12062f56 push eax */
  push32((uint32_t)(EAX));
  /* 12062f57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062f59 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062f5b call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062f61u);
  /* 12062f61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f66 call 0x12064500 */
  push32(0x12062f6bu); f_12064500();
  /* 12062f6b mov esi, esp */
  ESI = (ESP);
  /* 12062f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12062f6f push 3 */
  push32((uint32_t)(0x3u));
  /* 12062f71 call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062f77u);
  /* 12062f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f7c call 0x12064500 */
  push32(0x12062f81u); f_12064500();
  /* 12062f81 mov esi, esp */
  ESI = (ESP);
  /* 12062f83 push eax */
  push32((uint32_t)(EAX));
  /* 12062f84 push 4 */
  push32((uint32_t)(0x4u));
  /* 12062f86 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062f88 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062f8eu);
  /* 12062f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062f93 call 0x12064500 */
  push32(0x12062f98u); f_12064500();
  /* 12062f98 mov esi, esp */
  ESI = (ESP);
  /* 12062f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12062f9c push 3 */
  push32((uint32_t)(0x3u));
  /* 12062f9e call dword ptr [0x120944f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f8))), 0x12062fa4u);
  /* 12062fa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062fa9 call 0x12064500 */
  push32(0x12062faeu); f_12064500();
  /* 12062fae mov esi, esp */
  ESI = (ESP);
  /* 12062fb0 push eax */
  push32((uint32_t)(EAX));
  /* 12062fb1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062fb3 push 5 */
  push32((uint32_t)(0x5u));
  /* 12062fb5 call dword ptr [0x120944f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944f4))), 0x12062fbbu);
  /* 12062fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062fc0 call 0x12064500 */
  push32(0x12062fc5u); f_12064500();
  /* 12062fc5 mov esi, esp */
  ESI = (ESP);
  /* 12062fc7 mov eax, dword ptr [0x120913fc] */
  EAX = (r32((uint32_t)(0x120913fc)));
  /* 12062fcc push eax */
  push32((uint32_t)(EAX));
  /* 12062fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12062fcf push 3 */
  push32((uint32_t)(0x3u));
  /* 12062fd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12062fd3 push 0x1208c198 */
  push32((uint32_t)(0x1208c198u));
  /* 12062fd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062fda call dword ptr [0x12094460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094460))), 0x12062fe0u);
  /* 12062fe0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12062fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12062fe5 call 0x12064500 */
  push32(0x12062feau); f_12064500();
  /* 12062fea mov esi, esp */
  ESI = (ESP);
  /* 12062fec mov ecx, dword ptr [0x120913fc] */
  ECX = (r32((uint32_t)(0x120913fc)));
  /* 12062ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 12062ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12062ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 12062ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12062ff9 push 0x1208c198 */
  push32((uint32_t)(0x1208c198u));
  /* 12062ffe push 5 */
  push32((uint32_t)(0x5u));
  /* 12063000 call dword ptr [0x12094460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094460))), 0x12063006u);
  /* 12063006 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206300b call 0x12064500 */
  push32(0x12063010u); f_12064500();
  /* 12063010 mov esi, esp */
  ESI = (ESP);
  /* 12063012 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063017 push 0x120914f0 */
  push32((uint32_t)(0x120914f0u));
  /* 1206301c call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063022u);
  /* 12063022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063025 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063027 call 0x12064500 */
  push32(0x1206302cu); f_12064500();
  /* 1206302c mov esi, esp */
  ESI = (ESP);
  /* 1206302e push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12063033 push 4 */
  push32((uint32_t)(0x4u));
  /* 12063035 call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x1206303bu);
  /* 1206303b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206303e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063040 call 0x12064500 */
  push32(0x12063045u); f_12064500();
  /* 12063045 mov esi, esp */
  ESI = (ESP);
  /* 12063047 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1206304c push 0xf */
  push32((uint32_t)(0xfu));
  /* 1206304e call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12063054u);
  /* 12063054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063057 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063059 call 0x12064500 */
  push32(0x1206305eu); f_12064500();
  /* 1206305e mov esi, esp */
  ESI = (ESP);
  /* 12063060 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12063062 call dword ptr [0x12094470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094470))), 0x12063068u);
  /* 12063068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206306b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206306d call 0x12064500 */
  push32(0x12063072u); f_12064500();
  /* 12063072 mov esi, esp */
  ESI = (ESP);
  /* 12063074 push 0x1208c188 */
  push32((uint32_t)(0x1208c188u));
  /* 12063079 call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x1206307fu);
  /* 1206307f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063084 call 0x12064500 */
  push32(0x12063089u); f_12064500();
  /* 12063089 mov esi, esp */
  ESI = (ESP);
  /* 1206308b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206308d push 0x23 */
  push32((uint32_t)(0x23u));
  /* 1206308f call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12063095u);
  /* 12063095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063098 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206309a call 0x12064500 */
  push32(0x1206309fu); f_12064500();
L_1206309f:;
  /* 1206309f mov esi, esp */
  ESI = (ESP);
  /* 120630a1 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 120630a3 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x120630a9u);
  /* 120630a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120630ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120630ae call 0x12064500 */
  push32(0x120630b3u); f_12064500();
  /* 120630b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120630b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120630ba je 0x12063300 */
  if (C.zf) goto L_12063300;
  /* 120630c0 mov esi, esp */
  ESI = (ESP);
  /* 120630c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 120630c4 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x120630cau);
  /* 120630ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120630cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120630cf call 0x12064500 */
  push32(0x120630d4u); f_12064500();
  /* 120630d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120630d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120630db je 0x12063300 */
  if (C.zf) goto L_12063300;
  /* 120630e1 cmp dword ptr [0x120913fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120913fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120630e8 jle 0x120632ab */
  if ((C.zf||C.sf!=C.of)) goto L_120632ab;
  /* 120630ee mov esi, esp */
  ESI = (ESP);
  /* 120630f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120630f2 push 0x12091480 */
  push32((uint32_t)(0x12091480u));
  /* 120630f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120630f9 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 120630fe push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063103 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063108 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x1206310eu);
  /* 1206310e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063113 call 0x12064500 */
  push32(0x12063118u); f_12064500();
  /* 12063118 mov esi, esp */
  ESI = (ESP);
  /* 1206311a push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 1206311f push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063124 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x1206312au);
  /* 1206312a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206312d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206312f call 0x12064500 */
  push32(0x12063134u); f_12064500();
  /* 12063134 mov esi, esp */
  ESI = (ESP);
  /* 12063136 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063138 push 0x12091488 */
  push32((uint32_t)(0x12091488u));
  /* 1206313d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206313f push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12063144 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063149 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206314e call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063154u);
  /* 12063154 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063157 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063159 call 0x12064500 */
  push32(0x1206315eu); f_12064500();
  /* 1206315e mov esi, esp */
  ESI = (ESP);
  /* 12063160 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063165 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206316a call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063170u);
  /* 12063170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063175 call 0x12064500 */
  push32(0x1206317au); f_12064500();
  /* 1206317a mov esi, esp */
  ESI = (ESP);
  /* 1206317c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206317e push 0x12091490 */
  push32((uint32_t)(0x12091490u));
  /* 12063183 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063185 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 1206318a push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206318f push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063194 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x1206319au);
  /* 1206319a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206319d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206319f call 0x12064500 */
  push32(0x120631a4u); f_12064500();
  /* 120631a4 mov esi, esp */
  ESI = (ESP);
  /* 120631a6 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120631ab push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120631b0 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120631b6u);
  /* 120631b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120631b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120631bb call 0x12064500 */
  push32(0x120631c0u); f_12064500();
  /* 120631c0 mov esi, esp */
  ESI = (ESP);
  /* 120631c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120631c4 push 0x12091498 */
  push32((uint32_t)(0x12091498u));
  /* 120631c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120631cb push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 120631d0 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 120631d5 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120631da call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x120631e0u);
  /* 120631e0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120631e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120631e5 call 0x12064500 */
  push32(0x120631eau); f_12064500();
  /* 120631ea mov esi, esp */
  ESI = (ESP);
  /* 120631ec push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120631f1 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120631f6 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120631fcu);
  /* 120631fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120631ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063201 call 0x12064500 */
  push32(0x12063206u); f_12064500();
  /* 12063206 mov esi, esp */
  ESI = (ESP);
  /* 12063208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206320a push 0x120914a0 */
  push32((uint32_t)(0x120914a0u));
  /* 1206320f push 2 */
  push32((uint32_t)(0x2u));
  /* 12063211 push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12063216 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206321b push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063220 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063226u);
  /* 12063226 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206322b call 0x12064500 */
  push32(0x12063230u); f_12064500();
  /* 12063230 mov esi, esp */
  ESI = (ESP);
  /* 12063232 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063237 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206323c call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063242u);
  /* 12063242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063247 call 0x12064500 */
  push32(0x1206324cu); f_12064500();
  /* 1206324c mov esi, esp */
  ESI = (ESP);
  /* 1206324e push 0 */
  push32((uint32_t)(0x0u));
  /* 12063250 push 0x12091518 */
  push32((uint32_t)(0x12091518u));
  /* 12063255 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063257 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 1206325c push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063261 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063266 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x1206326cu);
  /* 1206326c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206326f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063271 call 0x12064500 */
  push32(0x12063276u); f_12064500();
  /* 12063276 mov esi, esp */
  ESI = (ESP);
  /* 12063278 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 1206327d push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063282 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063288u);
  /* 12063288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206328b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206328d call 0x12064500 */
  push32(0x12063292u); f_12064500();
  /* 12063292 mov esi, esp */
  ESI = (ESP);
  /* 12063294 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12063299 push 5 */
  push32((uint32_t)(0x5u));
  /* 1206329b call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x120632a1u);
  /* 120632a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120632a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120632a6 call 0x12064500 */
  push32(0x120632abu); f_12064500();
L_120632ab:;
  /* 120632ab mov esi, esp */
  ESI = (ESP);
  /* 120632ad push 0x45 */
  push32((uint32_t)(0x45u));
  /* 120632af call dword ptr [0x12094470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094470))), 0x120632b5u);
  /* 120632b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120632b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120632ba call 0x12064500 */
  push32(0x120632bfu); f_12064500();
  /* 120632bf mov esi, esp */
  ESI = (ESP);
  /* 120632c1 push 0x1208c180 */
  push32((uint32_t)(0x1208c180u));
  /* 120632c6 call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x120632ccu);
  /* 120632cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120632cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120632d1 call 0x12064500 */
  push32(0x120632d6u); f_12064500();
  /* 120632d6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 120632d8 push 0x12091520 */
  push32((uint32_t)(0x12091520u));
  /* 120632dd push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120632e2 call 0x1206102d */
  push32(0x120632e7u); f_1206102d();
  /* 120632e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120632ea mov esi, esp */
  ESI = (ESP);
  /* 120632ec push 0 */
  push32((uint32_t)(0x0u));
  /* 120632ee push 0x24 */
  push32((uint32_t)(0x24u));
  /* 120632f0 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x120632f6u);
  /* 120632f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120632f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120632fb call 0x12064500 */
  push32(0x12063300u); f_12064500();
L_12063300:;
  /* 12063300 mov esi, esp */
  ESI = (ESP);
  /* 12063302 push 5 */
  push32((uint32_t)(0x5u));
  /* 12063304 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x1206330au);
  /* 1206330a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206330d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206330f call 0x12064500 */
  push32(0x12063314u); f_12064500();
  /* 12063314 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206331b je 0x12063513 */
  if (C.zf) goto L_12063513;
  /* 12063321 cmp dword ptr [0x120913fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120913fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063328 jle 0x120634eb */
  if ((C.zf||C.sf!=C.of)) goto L_120634eb;
  /* 1206332e mov esi, esp */
  ESI = (ESP);
  /* 12063330 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063332 push 0x12091480 */
  push32((uint32_t)(0x12091480u));
  /* 12063337 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063339 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 1206333e push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063343 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063348 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x1206334eu);
  /* 1206334e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063353 call 0x12064500 */
  push32(0x12063358u); f_12064500();
  /* 12063358 mov esi, esp */
  ESI = (ESP);
  /* 1206335a push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 1206335f push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063364 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x1206336au);
  /* 1206336a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206336d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206336f call 0x12064500 */
  push32(0x12063374u); f_12064500();
  /* 12063374 mov esi, esp */
  ESI = (ESP);
  /* 12063376 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063378 push 0x12091488 */
  push32((uint32_t)(0x12091488u));
  /* 1206337d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206337f push 0x120913f0 */
  push32((uint32_t)(0x120913f0u));
  /* 12063384 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063389 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206338e call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063394u);
  /* 12063394 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063397 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063399 call 0x12064500 */
  push32(0x1206339eu); f_12064500();
  /* 1206339e mov esi, esp */
  ESI = (ESP);
  /* 120633a0 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120633a5 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120633aa call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120633b0u);
  /* 120633b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120633b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120633b5 call 0x12064500 */
  push32(0x120633bau); f_12064500();
  /* 120633ba mov esi, esp */
  ESI = (ESP);
  /* 120633bc push 0 */
  push32((uint32_t)(0x0u));
  /* 120633be push 0x12091490 */
  push32((uint32_t)(0x12091490u));
  /* 120633c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120633c5 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 120633ca push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 120633cf push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120633d4 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x120633dau);
  /* 120633da add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120633dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120633df call 0x12064500 */
  push32(0x120633e4u); f_12064500();
  /* 120633e4 mov esi, esp */
  ESI = (ESP);
  /* 120633e6 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120633eb push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120633f0 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120633f6u);
  /* 120633f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120633f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120633fb call 0x12064500 */
  push32(0x12063400u); f_12064500();
  /* 12063400 mov esi, esp */
  ESI = (ESP);
  /* 12063402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063404 push 0x12091498 */
  push32((uint32_t)(0x12091498u));
  /* 12063409 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206340b push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12063410 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063415 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206341a call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063420u);
  /* 12063420 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063425 call 0x12064500 */
  push32(0x1206342au); f_12064500();
  /* 1206342a mov esi, esp */
  ESI = (ESP);
  /* 1206342c push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063431 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063436 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x1206343cu);
  /* 1206343c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206343f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063441 call 0x12064500 */
  push32(0x12063446u); f_12064500();
  /* 12063446 mov esi, esp */
  ESI = (ESP);
  /* 12063448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206344a push 0x120914a0 */
  push32((uint32_t)(0x120914a0u));
  /* 1206344f push 2 */
  push32((uint32_t)(0x2u));
  /* 12063451 push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12063456 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206345b push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063460 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063466u);
  /* 12063466 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206346b call 0x12064500 */
  push32(0x12063470u); f_12064500();
  /* 12063470 mov esi, esp */
  ESI = (ESP);
  /* 12063472 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063477 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206347c call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063482u);
  /* 12063482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063487 call 0x12064500 */
  push32(0x1206348cu); f_12064500();
  /* 1206348c mov esi, esp */
  ESI = (ESP);
  /* 1206348e push 0 */
  push32((uint32_t)(0x0u));
  /* 12063490 push 0x12091518 */
  push32((uint32_t)(0x12091518u));
  /* 12063495 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063497 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 1206349c push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 120634a1 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120634a6 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x120634acu);
  /* 120634ac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120634af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120634b1 call 0x12064500 */
  push32(0x120634b6u); f_12064500();
  /* 120634b6 mov esi, esp */
  ESI = (ESP);
  /* 120634b8 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120634bd push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120634c2 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120634c8u);
  /* 120634c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120634cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120634cd call 0x12064500 */
  push32(0x120634d2u); f_12064500();
  /* 120634d2 mov esi, esp */
  ESI = (ESP);
  /* 120634d4 push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 120634d9 push 6 */
  push32((uint32_t)(0x6u));
  /* 120634db call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x120634e1u);
  /* 120634e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120634e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120634e6 call 0x12064500 */
  push32(0x120634ebu); f_12064500();
L_120634eb:;
  /* 120634eb push 0x15 */
  push32((uint32_t)(0x15u));
  /* 120634ed push 0x12091520 */
  push32((uint32_t)(0x12091520u));
  /* 120634f2 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120634f7 call 0x1206102d */
  push32(0x120634fcu); f_1206102d();
  /* 120634fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120634ff mov esi, esp */
  ESI = (ESP);
  /* 12063501 push 5 */
  push32((uint32_t)(0x5u));
  /* 12063503 call dword ptr [0x12094490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094490))), 0x12063509u);
  /* 12063509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206350c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206350e call 0x12064500 */
  push32(0x12063513u); f_12064500();
L_12063513:;
  /* 12063513 mov esi, esp */
  ESI = (ESP);
  /* 12063515 push 6 */
  push32((uint32_t)(0x6u));
  /* 12063517 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x1206351du);
  /* 1206351d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063520 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063522 call 0x12064500 */
  push32(0x12063527u); f_12064500();
  /* 12063527 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206352c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206352e je 0x12063726 */
  if (C.zf) goto L_12063726;
  /* 12063534 cmp dword ptr [0x120913fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120913fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206353b jle 0x120636fe */
  if ((C.zf||C.sf!=C.of)) goto L_120636fe;
  /* 12063541 mov esi, esp */
  ESI = (ESP);
  /* 12063543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063545 push 0x12091480 */
  push32((uint32_t)(0x12091480u));
  /* 1206354a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206354c push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12063551 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063556 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206355b call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063561u);
  /* 12063561 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063566 call 0x12064500 */
  push32(0x1206356bu); f_12064500();
  /* 1206356b mov esi, esp */
  ESI = (ESP);
  /* 1206356d push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063572 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063577 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x1206357du);
  /* 1206357d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063582 call 0x12064500 */
  push32(0x12063587u); f_12064500();
  /* 12063587 mov esi, esp */
  ESI = (ESP);
  /* 12063589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206358b push 0x12091488 */
  push32((uint32_t)(0x12091488u));
  /* 12063590 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063592 push 0x120913f0 */
  push32((uint32_t)(0x120913f0u));
  /* 12063597 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206359c push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120635a1 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x120635a7u);
  /* 120635a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120635aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120635ac call 0x12064500 */
  push32(0x120635b1u); f_12064500();
  /* 120635b1 mov esi, esp */
  ESI = (ESP);
  /* 120635b3 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120635b8 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120635bd call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120635c3u);
  /* 120635c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120635c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120635c8 call 0x12064500 */
  push32(0x120635cdu); f_12064500();
  /* 120635cd mov esi, esp */
  ESI = (ESP);
  /* 120635cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120635d1 push 0x12091490 */
  push32((uint32_t)(0x12091490u));
  /* 120635d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120635d8 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 120635dd push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 120635e2 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120635e7 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x120635edu);
  /* 120635ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120635f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120635f2 call 0x12064500 */
  push32(0x120635f7u); f_12064500();
  /* 120635f7 mov esi, esp */
  ESI = (ESP);
  /* 120635f9 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120635fe push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063603 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063609u);
  /* 12063609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206360c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206360e call 0x12064500 */
  push32(0x12063613u); f_12064500();
  /* 12063613 mov esi, esp */
  ESI = (ESP);
  /* 12063615 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063617 push 0x12091498 */
  push32((uint32_t)(0x12091498u));
  /* 1206361c push 2 */
  push32((uint32_t)(0x2u));
  /* 1206361e push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12063623 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 12063628 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206362d call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063633u);
  /* 12063633 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063638 call 0x12064500 */
  push32(0x1206363du); f_12064500();
  /* 1206363d mov esi, esp */
  ESI = (ESP);
  /* 1206363f push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 12063644 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063649 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x1206364fu);
  /* 1206364f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063654 call 0x12064500 */
  push32(0x12063659u); f_12064500();
  /* 12063659 mov esi, esp */
  ESI = (ESP);
  /* 1206365b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206365d push 0x120914a0 */
  push32((uint32_t)(0x120914a0u));
  /* 12063662 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063664 push 0x120913f0 */
  push32((uint32_t)(0x120913f0u));
  /* 12063669 push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 1206366e push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 12063673 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x12063679u);
  /* 12063679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206367c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206367e call 0x12064500 */
  push32(0x12063683u); f_12064500();
  /* 12063683 mov esi, esp */
  ESI = (ESP);
  /* 12063685 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 1206368a push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 1206368f call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x12063695u);
  /* 12063695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063698 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206369a call 0x12064500 */
  push32(0x1206369fu); f_12064500();
  /* 1206369f mov esi, esp */
  ESI = (ESP);
  /* 120636a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120636a3 push 0x12091518 */
  push32((uint32_t)(0x12091518u));
  /* 120636a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120636aa push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 120636af push 0x12091468 */
  push32((uint32_t)(0x12091468u));
  /* 120636b4 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120636b9 call dword ptr [0x120944cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944cc))), 0x120636bfu);
  /* 120636bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120636c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120636c4 call 0x12064500 */
  push32(0x120636c9u); f_12064500();
  /* 120636c9 mov esi, esp */
  ESI = (ESP);
  /* 120636cb push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 120636d0 push 0x12091418 */
  push32((uint32_t)(0x12091418u));
  /* 120636d5 call dword ptr [0x120944d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944d4))), 0x120636dbu);
  /* 120636db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120636de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120636e0 call 0x12064500 */
  push32(0x120636e5u); f_12064500();
  /* 120636e5 mov esi, esp */
  ESI = (ESP);
  /* 120636e7 push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 120636ec push 6 */
  push32((uint32_t)(0x6u));
  /* 120636ee call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x120636f4u);
  /* 120636f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120636f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120636f9 call 0x12064500 */
  push32(0x120636feu); f_12064500();
L_120636fe:;
  /* 120636fe push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12063700 push 0x12091520 */
  push32((uint32_t)(0x12091520u));
  /* 12063705 push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 1206370a call 0x1206102d */
  push32(0x1206370fu); f_1206102d();
  /* 1206370f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063712 mov esi, esp */
  ESI = (ESP);
  /* 12063714 push 6 */
  push32((uint32_t)(0x6u));
  /* 12063716 call dword ptr [0x12094490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094490))), 0x1206371cu);
  /* 1206371c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206371f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063721 call 0x12064500 */
  push32(0x12063726u); f_12064500();
L_12063726:;
  /* 12063726 mov esi, esp */
  ESI = (ESP);
  /* 12063728 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1206372a call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x12063730u);
  /* 12063730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063735 call 0x12064500 */
  push32(0x1206373au); f_12064500();
  /* 1206373a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206373f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063741 je 0x1206376b */
  if (C.zf) goto L_1206376b;
  /* 12063743 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12063745 push 0x12091458 */
  push32((uint32_t)(0x12091458u));
  /* 1206374a push 0x12091510 */
  push32((uint32_t)(0x12091510u));
  /* 1206374f call 0x1206102d */
  push32(0x12063754u); f_1206102d();
  /* 12063754 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063757 mov esi, esp */
  ESI = (ESP);
  /* 12063759 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1206375b call dword ptr [0x12094490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094490))), 0x12063761u);
  /* 12063761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063766 call 0x12064500 */
  push32(0x1206376bu); f_12064500();
L_1206376b:;
  /* 1206376b mov esi, esp */
  ESI = (ESP);
  /* 1206376d push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1206376f call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063775u);
  /* 12063775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063778 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206377a call 0x12064500 */
  push32(0x1206377fu); f_12064500();
  /* 1206377f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063786 je 0x120638dc */
  if (C.zf) goto L_120638dc;
  /* 1206378c mov esi, esp */
  ESI = (ESP);
  /* 1206378e push 1 */
  push32((uint32_t)(0x1u));
  /* 12063790 call dword ptr [0x120944a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a0))), 0x12063796u);
  /* 12063796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063799 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206379b call 0x12064500 */
  push32(0x120637a0u); f_12064500();
  /* 120637a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120637a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120637a7 je 0x120638dc */
  if (C.zf) goto L_120638dc;
  /* 120637ad mov esi, esp */
  ESI = (ESP);
  /* 120637af push 1 */
  push32((uint32_t)(0x1u));
  /* 120637b1 push 0x12091508 */
  push32((uint32_t)(0x12091508u));
  /* 120637b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120637b8 call dword ptr [0x12094454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094454))), 0x120637beu);
  /* 120637be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120637c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120637c3 call 0x12064500 */
  push32(0x120637c8u); f_12064500();
  /* 120637c8 mov esi, esp */
  ESI = (ESP);
  /* 120637ca push 1 */
  push32((uint32_t)(0x1u));
  /* 120637cc push 0x120914c0 */
  push32((uint32_t)(0x120914c0u));
  /* 120637d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120637d3 call dword ptr [0x12094454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094454))), 0x120637d9u);
  /* 120637d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120637dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120637de call 0x12064500 */
  push32(0x120637e3u); f_12064500();
  /* 120637e3 mov esi, esp */
  ESI = (ESP);
  /* 120637e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120637e7 push 0x12091410 */
  push32((uint32_t)(0x12091410u));
  /* 120637ec call dword ptr [0x120944a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a4))), 0x120637f2u);
  /* 120637f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120637f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120637f7 call 0x12064500 */
  push32(0x120637fcu); f_12064500();
  /* 120637fc mov esi, esp */
  ESI = (ESP);
  /* 120637fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12063800 push 4 */
  push32((uint32_t)(0x4u));
  /* 12063802 call dword ptr [0x12094494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094494))), 0x12063808u);
  /* 12063808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206380b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206380d call 0x12064500 */
  push32(0x12063812u); f_12064500();
  /* 12063812 mov esi, esp */
  ESI = (ESP);
  /* 12063814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063816 push 0x12091408 */
  push32((uint32_t)(0x12091408u));
  /* 1206381b call dword ptr [0x120944a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a4))), 0x12063821u);
  /* 12063821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063826 call 0x12064500 */
  push32(0x1206382bu); f_12064500();
  /* 1206382b mov esi, esp */
  ESI = (ESP);
  /* 1206382d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206382f push 4 */
  push32((uint32_t)(0x4u));
  /* 12063831 call dword ptr [0x12094494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094494))), 0x12063837u);
  /* 12063837 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206383a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206383c call 0x12064500 */
  push32(0x12063841u); f_12064500();
  /* 12063841 mov esi, esp */
  ESI = (ESP);
  /* 12063843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063845 push 0x12091440 */
  push32((uint32_t)(0x12091440u));
  /* 1206384a call dword ptr [0x120944a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a4))), 0x12063850u);
  /* 12063850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063855 call 0x12064500 */
  push32(0x1206385au); f_12064500();
  /* 1206385a mov esi, esp */
  ESI = (ESP);
  /* 1206385c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206385e push 4 */
  push32((uint32_t)(0x4u));
  /* 12063860 call dword ptr [0x12094494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094494))), 0x12063866u);
  /* 12063866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206386b call 0x12064500 */
  push32(0x12063870u); f_12064500();
  /* 12063870 mov esi, esp */
  ESI = (ESP);
  /* 12063872 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12063874 call dword ptr [0x12094470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094470))), 0x1206387au);
  /* 1206387a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206387d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206387f call 0x12064500 */
  push32(0x12063884u); f_12064500();
  /* 12063884 mov esi, esp */
  ESI = (ESP);
  /* 12063886 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12063888 call dword ptr [0x12094474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094474))), 0x1206388eu);
  /* 1206388e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063893 call 0x12064500 */
  push32(0x12063898u); f_12064500();
  /* 12063898 mov esi, esp */
  ESI = (ESP);
  /* 1206389a push 0x1208c174 */
  push32((uint32_t)(0x1208c174u));
  /* 1206389f call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x120638a5u);
  /* 120638a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120638a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120638aa call 0x12064500 */
  push32(0x120638afu); f_12064500();
  /* 120638af mov esi, esp */
  ESI = (ESP);
  /* 120638b1 push 0x1208c16c */
  push32((uint32_t)(0x1208c16cu));
  /* 120638b6 call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x120638bcu);
  /* 120638bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120638bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120638c1 call 0x12064500 */
  push32(0x120638c6u); f_12064500();
  /* 120638c6 mov esi, esp */
  ESI = (ESP);
  /* 120638c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120638ca push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 120638cc call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x120638d2u);
  /* 120638d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120638d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120638d7 call 0x12064500 */
  push32(0x120638dcu); f_12064500();
L_120638dc:;
  /* 120638dc mov esi, esp */
  ESI = (ESP);
  /* 120638de push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 120638e0 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x120638e6u);
  /* 120638e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120638e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120638eb call 0x12064500 */
  push32(0x120638f0u); f_12064500();
  /* 120638f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120638f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120638f7 je 0x120639a7 */
  if (C.zf) goto L_120639a7;
  /* 120638fd mov esi, esp */
  ESI = (ESP);
  /* 120638ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12063901 push 0x12091548 */
  push32((uint32_t)(0x12091548u));
  /* 12063906 call dword ptr [0x1209449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209449c))), 0x1206390cu);
  /* 1206390c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206390f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063911 call 0x12064500 */
  push32(0x12063916u); f_12064500();
  /* 12063916 mov esi, eax */
  ESI = (EAX);
  /* 12063918 mov edi, esp */
  EDI = (ESP);
  /* 1206391a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206391c push 0x120914e8 */
  push32((uint32_t)(0x120914e8u));
  /* 12063921 call dword ptr [0x1209449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209449c))), 0x12063927u);
  /* 12063927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206392a cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206392c call 0x12064500 */
  push32(0x12063931u); f_12064500();
  /* 12063931 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12063933 mov edi, esp */
  EDI = (ESP);
  /* 12063935 push 2 */
  push32((uint32_t)(0x2u));
  /* 12063937 push 0x120913f0 */
  push32((uint32_t)(0x120913f0u));
  /* 1206393c call dword ptr [0x1209449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209449c))), 0x12063942u);
  /* 12063942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063945 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063947 call 0x12064500 */
  push32(0x1206394cu); f_12064500();
  /* 1206394c add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206394e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12063950 jne 0x120639a7 */
  if (!C.zf) goto L_120639a7;
  /* 12063952 mov esi, esp */
  ESI = (ESP);
  /* 12063954 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12063956 call dword ptr [0x12094470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094470))), 0x1206395cu);
  /* 1206395c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206395f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063961 call 0x12064500 */
  push32(0x12063966u); f_12064500();
  /* 12063966 mov esi, esp */
  ESI = (ESP);
  /* 12063968 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1206396a call dword ptr [0x12094474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094474))), 0x12063970u);
  /* 12063970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063975 call 0x12064500 */
  push32(0x1206397au); f_12064500();
  /* 1206397a mov esi, esp */
  ESI = (ESP);
  /* 1206397c push 0x1208c160 */
  push32((uint32_t)(0x1208c160u));
  /* 12063981 call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x12063987u);
  /* 12063987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206398a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206398c call 0x12064500 */
  push32(0x12063991u); f_12064500();
  /* 12063991 mov esi, esp */
  ESI = (ESP);
  /* 12063993 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063995 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12063997 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x1206399du);
  /* 1206399d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120639a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120639a2 call 0x12064500 */
  push32(0x120639a7u); f_12064500();
L_120639a7:;
  /* 120639a7 mov esi, esp */
  ESI = (ESP);
  /* 120639a9 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 120639ab call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x120639b1u);
  /* 120639b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120639b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120639b6 call 0x12064500 */
  push32(0x120639bbu); f_12064500();
  /* 120639bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120639c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120639c2 je 0x12063a0e */
  if (C.zf) goto L_12063a0e;
  /* 120639c4 mov esi, esp */
  ESI = (ESP);
  /* 120639c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 120639c8 call dword ptr [0x120944a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a0))), 0x120639ceu);
  /* 120639ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120639d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120639d3 call 0x12064500 */
  push32(0x120639d8u); f_12064500();
  /* 120639d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120639dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120639df je 0x12063a0e */
  if (C.zf) goto L_12063a0e;
  /* 120639e1 mov esi, esp */
  ESI = (ESP);
  /* 120639e3 push 0x1208c154 */
  push32((uint32_t)(0x1208c154u));
  /* 120639e8 call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x120639eeu);
  /* 120639ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120639f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120639f3 call 0x12064500 */
  push32(0x120639f8u); f_12064500();
  /* 120639f8 mov esi, esp */
  ESI = (ESP);
  /* 120639fa push 0 */
  push32((uint32_t)(0x0u));
  /* 120639fc push 0x5d */
  push32((uint32_t)(0x5du));
  /* 120639fe call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12063a04u);
  /* 12063a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063a09 call 0x12064500 */
  push32(0x12063a0eu); f_12064500();
L_12063a0e:;
  /* 12063a0e mov esi, esp */
  ESI = (ESP);
  /* 12063a10 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12063a12 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063a18u);
  /* 12063a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063a1d call 0x12064500 */
  push32(0x12063a22u); f_12064500();
  /* 12063a22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063a29 je 0x12063a75 */
  if (C.zf) goto L_12063a75;
  /* 12063a2b mov esi, esp */
  ESI = (ESP);
  /* 12063a2d push 5 */
  push32((uint32_t)(0x5u));
  /* 12063a2f call dword ptr [0x120944a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a0))), 0x12063a35u);
  /* 12063a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063a38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063a3a call 0x12064500 */
  push32(0x12063a3fu); f_12064500();
  /* 12063a3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063a46 je 0x12063a75 */
  if (C.zf) goto L_12063a75;
  /* 12063a48 mov esi, esp */
  ESI = (ESP);
  /* 12063a4a push 0x1208c148 */
  push32((uint32_t)(0x1208c148u));
  /* 12063a4f call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x12063a55u);
  /* 12063a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063a5a call 0x12064500 */
  push32(0x12063a5fu); f_12064500();
  /* 12063a5f mov esi, esp */
  ESI = (ESP);
  /* 12063a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063a63 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12063a65 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12063a6bu);
  /* 12063a6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063a6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063a70 call 0x12064500 */
  push32(0x12063a75u); f_12064500();
L_12063a75:;
  /* 12063a75 mov esi, esp */
  ESI = (ESP);
  /* 12063a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12063a79 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063a7fu);
  /* 12063a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063a84 call 0x12064500 */
  push32(0x12063a89u); f_12064500();
  /* 12063a89 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063a90 je 0x12063bb4 */
  if (C.zf) goto L_12063bb4;
  /* 12063a96 mov esi, esp */
  ESI = (ESP);
  /* 12063a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063a9a call dword ptr [0x120944a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a0))), 0x12063aa0u);
  /* 12063aa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063aa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063aa5 call 0x12064500 */
  push32(0x12063aaau); f_12064500();
  /* 12063aaa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063aaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063ab1 jne 0x12063af1 */
  if (!C.zf) goto L_12063af1;
  /* 12063ab3 mov esi, esp */
  ESI = (ESP);
  /* 12063ab5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12063ab7 push 0x120914c0 */
  push32((uint32_t)(0x120914c0u));
  /* 12063abc call dword ptr [0x1209449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209449c))), 0x12063ac2u);
  /* 12063ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063ac7 call 0x12064500 */
  push32(0x12063accu); f_12064500();
  /* 12063acc mov esi, eax */
  ESI = (EAX);
  /* 12063ace mov edi, esp */
  EDI = (ESP);
  /* 12063ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063ad2 push 0x120914c0 */
  push32((uint32_t)(0x120914c0u));
  /* 12063ad7 call dword ptr [0x1209449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209449c))), 0x12063addu);
  /* 12063add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063ae0 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063ae2 call 0x12064500 */
  push32(0x12063ae7u); f_12064500();
  /* 12063ae7 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12063ae9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12063aeb jne 0x12063bb4 */
  if (!C.zf) goto L_12063bb4;
L_12063af1:;
  /* 12063af1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12063af8 jmp 0x12063b03 */
  goto L_12063b03;
L_12063afa:;
  /* 12063afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12063afd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12063b00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12063b03:;
  /* 12063b03 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b07 jge 0x12063b42 */
  if ((C.sf==C.of)) goto L_12063b42;
  /* 12063b09 mov esi, esp */
  ESI = (ESP);
  /* 12063b0b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 12063b0e push eax */
  push32((uint32_t)(EAX));
  /* 12063b0f call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x12063b15u);
  /* 12063b15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b1a call 0x12064500 */
  push32(0x12063b1fu); f_12064500();
  /* 12063b1f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063b26 jne 0x12063b40 */
  if (!C.zf) goto L_12063b40;
  /* 12063b28 mov esi, esp */
  ESI = (ESP);
  /* 12063b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12063b2c mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12063b2f push ecx */
  push32((uint32_t)(ECX));
  /* 12063b30 call dword ptr [0x12094450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094450))), 0x12063b36u);
  /* 12063b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063b39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b3b call 0x12064500 */
  push32(0x12063b40u); f_12064500();
L_12063b40:;
  /* 12063b40 jmp 0x12063afa */
  goto L_12063afa;
L_12063b42:;
  /* 12063b42 mov esi, esp */
  ESI = (ESP);
  /* 12063b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063b46 call dword ptr [0x120944a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944a0))), 0x12063b4cu);
  /* 12063b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b51 call 0x12064500 */
  push32(0x12063b56u); f_12064500();
  /* 12063b56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063b5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063b5d je 0x12063b78 */
  if (C.zf) goto L_12063b78;
  /* 12063b5f mov esi, esp */
  ESI = (ESP);
  /* 12063b61 push 0x1208c13c */
  push32((uint32_t)(0x1208c13cu));
  /* 12063b66 call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x12063b6cu);
  /* 12063b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b71 call 0x12064500 */
  push32(0x12063b76u); f_12064500();
  /* 12063b76 jmp 0x12063b8f */
  goto L_12063b8f;
L_12063b78:;
  /* 12063b78 mov esi, esp */
  ESI = (ESP);
  /* 12063b7a push 0x1208c130 */
  push32((uint32_t)(0x1208c130u));
  /* 12063b7f call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x12063b85u);
  /* 12063b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b8a call 0x12064500 */
  push32(0x12063b8fu); f_12064500();
L_12063b8f:;
  /* 12063b8f mov esi, esp */
  ESI = (ESP);
  /* 12063b91 call dword ptr [0x120944ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944ac))), 0x12063b97u);
  /* 12063b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063b99 call 0x12064500 */
  push32(0x12063b9eu); f_12064500();
  /* 12063b9e mov esi, esp */
  ESI = (ESP);
  /* 12063ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12063ba2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12063ba4 call dword ptr [0x1209447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209447c))), 0x12063baau);
  /* 12063baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063baf call 0x12064500 */
  push32(0x12063bb4u); f_12064500();
L_12063bb4:;
  /* 12063bb4 mov esi, esp */
  ESI = (ESP);
  /* 12063bb6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12063bb8 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063bbeu);
  /* 12063bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063bc3 call 0x12064500 */
  push32(0x12063bc8u); f_12064500();
  /* 12063bc8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063bcf jne 0x12063ca9 */
  if (!C.zf) goto L_12063ca9;
  /* 12063bd5 mov esi, esp */
  ESI = (ESP);
  /* 12063bd7 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12063bd9 call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063bdfu);
  /* 12063bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063be4 call 0x12064500 */
  push32(0x12063be9u); f_12064500();
  /* 12063be9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063bf0 jne 0x12063ca9 */
  if (!C.zf) goto L_12063ca9;
  /* 12063bf6 mov esi, esp */
  ESI = (ESP);
  /* 12063bf8 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12063bfa call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063c00u);
  /* 12063c00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063c05 call 0x12064500 */
  push32(0x12063c0au); f_12064500();
  /* 12063c0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063c11 jne 0x12063ca9 */
  if (!C.zf) goto L_12063ca9;
  /* 12063c17 mov esi, esp */
  ESI = (ESP);
  /* 12063c19 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12063c1b call dword ptr [0x12094448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094448))), 0x12063c21u);
  /* 12063c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063c24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063c26 call 0x12064500 */
  push32(0x12063c2bu); f_12064500();
  /* 12063c2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063c30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063c32 jne 0x12063ca9 */
  if (!C.zf) goto L_12063ca9;
  /* 12063c34 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12063c3b jmp 0x12063c46 */
  goto L_12063c46;
L_12063c3d:;
  /* 12063c3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12063c40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12063c43 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12063c46:;
  /* 12063c46 cmp dword ptr [ebp - 8], 0x1e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063c4a jge 0x12063c83 */
  if ((C.sf==C.of)) goto L_12063c83;
  /* 12063c4c mov esi, esp */
  ESI = (ESP);
  /* 12063c4e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12063c51 push eax */
  push32((uint32_t)(EAX));
  /* 12063c52 call dword ptr [0x1209444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209444c))), 0x12063c58u);
  /* 12063c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063c5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063c5d call 0x12064500 */
  push32(0x12063c62u); f_12064500();
  /* 12063c62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12063c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12063c69 jne 0x12063c81 */
  if (!C.zf) goto L_12063c81;
  /* 12063c6b mov esi, esp */
  ESI = (ESP);
  /* 12063c6d mov cl, byte ptr [ebp - 8] */
  CL = (r8((uint32_t)(EBP + -0x8)));
  /* 12063c70 push ecx */
  push32((uint32_t)(ECX));
  /* 12063c71 call dword ptr [0x12094490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094490))), 0x12063c77u);
  /* 12063c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063c7c call 0x12064500 */
  push32(0x12063c81u); f_12064500();
L_12063c81:;
  /* 12063c81 jmp 0x12063c3d */
  goto L_12063c3d;
L_12063c83:;
  /* 12063c83 mov esi, esp */
  ESI = (ESP);
  /* 12063c85 push 0x1208c124 */
  push32((uint32_t)(0x1208c124u));
  /* 12063c8a call dword ptr [0x1209446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209446c))), 0x12063c90u);
  /* 12063c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063c95 call 0x12064500 */
  push32(0x12063c9au); f_12064500();
  /* 12063c9a mov esi, esp */
  ESI = (ESP);
  /* 12063c9c call dword ptr [0x120944b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120944b0))), 0x12063ca2u);
  /* 12063ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063ca4 call 0x12064500 */
  push32(0x12063ca9u); f_12064500();
L_12063ca9:;
  /* 12063ca9 pop edi */
  EDI = (pop32());
  /* 12063caa pop esi */
  ESI = (pop32());
  /* 12063cab pop ebx */
  EBX = (pop32());
  /* 12063cac add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12063caf cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12063cb1 call 0x12064500 */
  push32(0x12063cb6u); f_12064500();
  /* 12063cb6 mov esp, ebp */
  ESP = (EBP);
  /* 12063cb8 pop ebp */
  EBP = (pop32());
  /* 12063cb9 ret  */
  ESPCHK(0x12062000u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12064500 (56 bytes, 28 insns) */
void f_12064500(void) {
  FTRACE(0x12064500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064500 jne 0x12064503 */
  if (!C.zf) goto L_12064503;
  /* 12064502 ret  */
  ESPCHK(0x12064500u, _esp0);
  ESP += 4; return;
L_12064503:;
  /* 12064503 push ebp */
  push32((uint32_t)(EBP));
  /* 12064504 mov ebp, esp */
  EBP = (ESP);
  /* 12064506 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12064509 push eax */
  push32((uint32_t)(EAX));
  /* 1206450a push edx */
  push32((uint32_t)(EDX));
  /* 1206450b push ebx */
  push32((uint32_t)(EBX));
  /* 1206450c push esi */
  push32((uint32_t)(ESI));
  /* 1206450d push edi */
  push32((uint32_t)(EDI));
  /* 1206450e push 0x1208c224 */
  push32((uint32_t)(0x1208c224u));
  /* 12064513 push 0x1208c220 */
  push32((uint32_t)(0x1208c220u));
  /* 12064518 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1206451a push 0x1208c210 */
  push32((uint32_t)(0x1208c210u));
  /* 1206451f push 1 */
  push32((uint32_t)(0x1u));
  /* 12064521 call 0x120648d0 */
  push32(0x12064526u); f_120648d0();
  /* 12064526 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206452c jne 0x1206452f */
  if (!C.zf) goto L_1206452f;
  /* 1206452e int3  */
  x86_unimpl("int3 @ 0x1206452e");
L_1206452f:;
  /* 1206452f pop edi */
  EDI = (pop32());
  /* 12064530 pop esi */
  ESI = (pop32());
  /* 12064531 pop ebx */
  EBX = (pop32());
  /* 12064532 pop edx */
  EDX = (pop32());
  /* 12064533 pop eax */
  EAX = (pop32());
  /* 12064534 mov esp, ebp */
  ESP = (EBP);
  /* 12064536 pop ebp */
  EBP = (pop32());
  /* 12064537 ret  */
  ESPCHK(0x12064500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x12064540 (313 bytes, 78 insns) */
void f_12064540(void) {
  FTRACE(0x12064540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064540 push ebp */
  push32((uint32_t)(EBP));
  /* 12064541 mov ebp, esp */
  EBP = (ESP);
  /* 12064543 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064547 jne 0x12064607 */
  if (!C.zf) goto L_12064607;
  /* 1206454d call dword ptr [0x1209437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209437c))), 0x12064553u);
  /* 12064553 mov dword ptr [0x120915b8], eax */
  w32((uint32_t)(0x120915b8), (EAX));
  /* 12064558 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206455a call 0x12068000 */
  push32(0x1206455fu); f_12068000();
  /* 1206455f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064564 jne 0x1206456d */
  if (!C.zf) goto L_1206456d;
  /* 12064566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12064568 jmp 0x12064675 */
  goto L_12064675;
L_1206456d:;
  /* 1206456d mov eax, dword ptr [0x120915b8] */
  EAX = (r32((uint32_t)(0x120915b8)));
  /* 12064572 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12064575 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206457a mov dword ptr [0x120915c4], eax */
  w32((uint32_t)(0x120915c4), (EAX));
  /* 1206457f mov ecx, dword ptr [0x120915b8] */
  ECX = (r32((uint32_t)(0x120915b8)));
  /* 12064585 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206458b mov dword ptr [0x120915c0], ecx */
  w32((uint32_t)(0x120915c0), (ECX));
  /* 12064591 mov edx, dword ptr [0x120915c0] */
  EDX = (r32((uint32_t)(0x120915c0)));
  /* 12064597 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1206459a add edx, dword ptr [0x120915c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120915c4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120645a0 mov dword ptr [0x120915bc], edx */
  w32((uint32_t)(0x120915bc), (EDX));
  /* 120645a6 mov eax, dword ptr [0x120915b8] */
  EAX = (r32((uint32_t)(0x120915b8)));
  /* 120645ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120645ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120645b3 mov dword ptr [0x120915b8], eax */
  w32((uint32_t)(0x120915b8), (EAX));
  /* 120645b8 call 0x12065170 */
  push32(0x120645bdu); f_12065170();
  /* 120645bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120645bf jne 0x120645cd */
  if (!C.zf) goto L_120645cd;
  /* 120645c1 call 0x12068050 */
  push32(0x120645c6u); f_12068050();
  /* 120645c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120645c8 jmp 0x12064675 */
  goto L_12064675;
L_120645cd:;
  /* 120645cd call dword ptr [0x12094378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094378))), 0x120645d3u);
  /* 120645d3 mov dword ptr [0x1209310c], eax */
  w32((uint32_t)(0x1209310c), (EAX));
  /* 120645d8 call 0x12067de0 */
  push32(0x120645ddu); f_12067de0();
  /* 120645dd mov dword ptr [0x120915a0], eax */
  w32((uint32_t)(0x120915a0), (EAX));
  /* 120645e2 call 0x12065420 */
  push32(0x120645e7u); f_12065420();
  /* 120645e7 call 0x120678d0 */
  push32(0x120645ecu); f_120678d0();
  /* 120645ec call 0x12067780 */
  push32(0x120645f1u); f_12067780();
  /* 120645f1 call 0x12064f70 */
  push32(0x120645f6u); f_12064f70();
  /* 120645f6 mov ecx, dword ptr [0x1209159c] */
  ECX = (r32((uint32_t)(0x1209159c)));
  /* 120645fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120645ff mov dword ptr [0x1209159c], ecx */
  w32((uint32_t)(0x1209159c), (ECX));
  /* 12064605 jmp 0x12064670 */
  goto L_12064670;
L_12064607:;
  /* 12064607 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206460b jne 0x12064660 */
  if (!C.zf) goto L_12064660;
  /* 1206460d cmp dword ptr [0x1209159c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209159c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064614 jle 0x1206465a */
  if ((C.zf||C.sf!=C.of)) goto L_1206465a;
  /* 12064616 mov edx, dword ptr [0x1209159c] */
  EDX = (r32((uint32_t)(0x1209159c)));
  /* 1206461c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206461f mov dword ptr [0x1209159c], edx */
  w32((uint32_t)(0x1209159c), (EDX));
  /* 12064625 cmp dword ptr [0x120915f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206462c jne 0x12064633 */
  if (!C.zf) goto L_12064633;
  /* 1206462e call 0x12064ff0 */
  push32(0x12064633u); f_12064ff0();
L_12064633:;
  /* 12064633 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12064635 call 0x12066d20 */
  push32(0x1206463au); f_12066d20();
  /* 1206463a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206463d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12064640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064642 je 0x12064649 */
  if (C.zf) goto L_12064649;
  /* 12064644 call 0x12067630 */
  push32(0x12064649u); f_12067630();
L_12064649:;
  /* 12064649 call 0x12065750 */
  push32(0x1206464eu); f_12065750();
  /* 1206464e call 0x12065200 */
  push32(0x12064653u); f_12065200();
  /* 12064653 call 0x12068050 */
  push32(0x12064658u); f_12068050();
  /* 12064658 jmp 0x1206465e */
  goto L_1206465e;
L_1206465a:;
  /* 1206465a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206465c jmp 0x12064675 */
  goto L_12064675;
L_1206465e:;
  /* 1206465e jmp 0x12064670 */
  goto L_12064670;
L_12064660:;
  /* 12064660 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064664 jne 0x12064670 */
  if (!C.zf) goto L_12064670;
  /* 12064666 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064668 call 0x120652f0 */
  push32(0x1206466du); f_120652f0();
  /* 1206466d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064670:;
  /* 12064670 mov eax, 1 */
  EAX = (0x1u);
L_12064675:;
  /* 12064675 pop ebp */
  EBP = (pop32());
  /* 12064676 ret 0xc */
  ESPCHK(0x12064540u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12064680 (243 bytes, 86 insns) */
void f_12064680(void) {
  FTRACE(0x12064680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064680 push ebp */
  push32((uint32_t)(EBP));
  /* 12064681 mov ebp, esp */
  EBP = (ESP);
  /* 12064683 push ecx */
  push32((uint32_t)(ECX));
  /* 12064684 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1206468b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206468f jne 0x120646a1 */
  if (!C.zf) goto L_120646a1;
  /* 12064691 cmp dword ptr [0x1209159c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209159c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064698 jne 0x120646a1 */
  if (!C.zf) goto L_120646a1;
  /* 1206469a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206469c jmp 0x1206476d */
  goto L_1206476d;
L_120646a1:;
  /* 120646a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120646a5 je 0x120646ad */
  if (C.zf) goto L_120646ad;
  /* 120646a7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120646ab jne 0x120646ef */
  if (!C.zf) goto L_120646ef;
L_120646ad:;
  /* 120646ad cmp dword ptr [0x1209311c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209311c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120646b4 je 0x120646cb */
  if (C.zf) goto L_120646cb;
  /* 120646b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120646b9 push eax */
  push32((uint32_t)(EAX));
  /* 120646ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120646bd push ecx */
  push32((uint32_t)(ECX));
  /* 120646be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120646c1 push edx */
  push32((uint32_t)(EDX));
  /* 120646c2 call dword ptr [0x1209311c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209311c))), 0x120646c8u);
  /* 120646c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120646cb:;
  /* 120646cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120646cf je 0x120646e5 */
  if (C.zf) goto L_120646e5;
  /* 120646d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120646d4 push eax */
  push32((uint32_t)(EAX));
  /* 120646d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120646d8 push ecx */
  push32((uint32_t)(ECX));
  /* 120646d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120646dc push edx */
  push32((uint32_t)(EDX));
  /* 120646dd call 0x12064540 */
  push32(0x120646e2u); f_12064540();
  /* 120646e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120646e5:;
  /* 120646e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120646e9 jne 0x120646ef */
  if (!C.zf) goto L_120646ef;
  /* 120646eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120646ed jmp 0x1206476d */
  goto L_1206476d;
L_120646ef:;
  /* 120646ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120646f2 push eax */
  push32((uint32_t)(EAX));
  /* 120646f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120646f6 push ecx */
  push32((uint32_t)(ECX));
  /* 120646f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120646fa push edx */
  push32((uint32_t)(EDX));
  /* 120646fb call 0x1206101e */
  push32(0x12064700u); f_1206101e();
  /* 12064700 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12064703 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064707 jne 0x1206471e */
  if (!C.zf) goto L_1206471e;
  /* 12064709 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206470d jne 0x1206471e */
  if (!C.zf) goto L_1206471e;
  /* 1206470f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12064712 push eax */
  push32((uint32_t)(EAX));
  /* 12064713 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064718 push ecx */
  push32((uint32_t)(ECX));
  /* 12064719 call 0x12064540 */
  push32(0x1206471eu); f_12064540();
L_1206471e:;
  /* 1206471e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064722 je 0x1206472a */
  if (C.zf) goto L_1206472a;
  /* 12064724 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064728 jne 0x1206476a */
  if (!C.zf) goto L_1206476a;
L_1206472a:;
  /* 1206472a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206472d push edx */
  push32((uint32_t)(EDX));
  /* 1206472e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12064731 push eax */
  push32((uint32_t)(EAX));
  /* 12064732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064735 push ecx */
  push32((uint32_t)(ECX));
  /* 12064736 call 0x12064540 */
  push32(0x1206473bu); f_12064540();
  /* 1206473b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206473d jne 0x12064746 */
  if (!C.zf) goto L_12064746;
  /* 1206473f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12064746:;
  /* 12064746 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206474a je 0x1206476a */
  if (C.zf) goto L_1206476a;
  /* 1206474c cmp dword ptr [0x1209311c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209311c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064753 je 0x1206476a */
  if (C.zf) goto L_1206476a;
  /* 12064755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12064758 push edx */
  push32((uint32_t)(EDX));
  /* 12064759 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206475c push eax */
  push32((uint32_t)(EAX));
  /* 1206475d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064760 push ecx */
  push32((uint32_t)(ECX));
  /* 12064761 call dword ptr [0x1209311c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209311c))), 0x12064767u);
  /* 12064767 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206476a:;
  /* 1206476a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206476d:;
  /* 1206476d mov esp, ebp */
  ESP = (EBP);
  /* 1206476f pop ebp */
  EBP = (pop32());
  /* 12064770 ret 0xc */
  ESPCHK(0x12064680u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12064780 (58 bytes, 18 insns) */
void f_12064780(void) {
  FTRACE(0x12064780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064780 push ebp */
  push32((uint32_t)(EBP));
  /* 12064781 mov ebp, esp */
  EBP = (ESP);
  /* 12064783 cmp dword ptr [0x120915a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206478a je 0x1206479e */
  if (C.zf) goto L_1206479e;
  /* 1206478c cmp dword ptr [0x120915a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064793 jne 0x120647a3 */
  if (!C.zf) goto L_120647a3;
  /* 12064795 cmp dword ptr [0x120915ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206479c jne 0x120647a3 */
  if (!C.zf) goto L_120647a3;
L_1206479e:;
  /* 1206479e call 0x120680f0 */
  push32(0x120647a3u); f_120680f0();
L_120647a3:;
  /* 120647a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120647a6 push eax */
  push32((uint32_t)(EAX));
  /* 120647a7 call 0x12068140 */
  push32(0x120647acu); f_12068140();
  /* 120647ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120647af push 0xff */
  push32((uint32_t)(0xffu));
  /* 120647b4 call dword ptr [0x1208fa34] */
  call_ind((uint32_t)(r32((uint32_t)(0x1208fa34))), 0x120647bau);
  /* 120647ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120647bd pop ebp */
  EBP = (pop32());
  /* 120647be ret  */
  ESPCHK(0x12064780u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x120647c0 (11 bytes, 5 insns) */
void f_120647c0(void) {
  FTRACE(0x120647c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120647c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120647c1 mov ebp, esp */
  EBP = (ESP);
  /* 120647c3 call dword ptr [0x12094380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094380))), 0x120647c9u);
  /* 120647c9 pop ebp */
  EBP = (pop32());
  /* 120647ca ret  */
  ESPCHK(0x120647c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047d0 @ 0x120647d0 (87 bytes, 30 insns) */
void f_120647d0(void) {
  FTRACE(0x120647d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120647d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120647d1 mov ebp, esp */
  EBP = (ESP);
  /* 120647d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120647d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120647d8 jl 0x120647e0 */
  if ((C.sf!=C.of)) goto L_120647e0;
  /* 120647da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120647de jl 0x120647e5 */
  if ((C.sf!=C.of)) goto L_120647e5;
L_120647e0:;
  /* 120647e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120647e3 jmp 0x12064823 */
  goto L_12064823;
L_120647e5:;
  /* 120647e5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120647e9 jne 0x120647f7 */
  if (!C.zf) goto L_120647f7;
  /* 120647eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120647ee mov eax, dword ptr [eax*4 + 0x1208fa3c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1208fa3c)));
  /* 120647f5 jmp 0x12064823 */
  goto L_12064823;
L_120647f7:;
  /* 120647f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120647fa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 120647fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120647ff je 0x12064806 */
  if (C.zf) goto L_12064806;
  /* 12064801 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12064804 jmp 0x12064823 */
  goto L_12064823;
L_12064806:;
  /* 12064806 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064809 mov eax, dword ptr [edx*4 + 0x1208fa3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1208fa3c)));
  /* 12064810 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12064813 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064816 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12064819 mov dword ptr [ecx*4 + 0x1208fa3c], edx */
  w32((uint32_t)(ECX*4 + 0x1208fa3c), (EDX));
  /* 12064820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12064823:;
  /* 12064823 mov esp, ebp */
  ESP = (EBP);
  /* 12064825 pop ebp */
  EBP = (pop32());
  /* 12064826 ret  */
  ESPCHK(0x120647d0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12064830 (126 bytes, 38 insns) */
void f_12064830(void) {
  FTRACE(0x12064830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064830 push ebp */
  push32((uint32_t)(EBP));
  /* 12064831 mov ebp, esp */
  EBP = (ESP);
  /* 12064833 push ecx */
  push32((uint32_t)(ECX));
  /* 12064834 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064838 jl 0x12064840 */
  if ((C.sf!=C.of)) goto L_12064840;
  /* 1206483a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206483e jl 0x12064847 */
  if ((C.sf!=C.of)) goto L_12064847;
L_12064840:;
  /* 12064840 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12064845 jmp 0x120648aa */
  goto L_120648aa;
L_12064847:;
  /* 12064847 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206484b jne 0x12064859 */
  if (!C.zf) goto L_12064859;
  /* 1206484d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064850 mov eax, dword ptr [eax*4 + 0x1208fa48] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1208fa48)));
  /* 12064857 jmp 0x120648aa */
  goto L_120648aa;
L_12064859:;
  /* 12064859 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206485c mov edx, dword ptr [ecx*4 + 0x1208fa48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa48)));
  /* 12064863 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12064866 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206486a jne 0x12064880 */
  if (!C.zf) goto L_12064880;
  /* 1206486c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1206486e call dword ptr [0x12094384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094384))), 0x12064874u);
  /* 12064874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064877 mov dword ptr [ecx*4 + 0x1208fa48], eax */
  w32((uint32_t)(ECX*4 + 0x1208fa48), (EAX));
  /* 1206487e jmp 0x120648a7 */
  goto L_120648a7;
L_12064880:;
  /* 12064880 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064884 jne 0x1206489a */
  if (!C.zf) goto L_1206489a;
  /* 12064886 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12064888 call dword ptr [0x12094384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094384))), 0x1206488eu);
  /* 1206488e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064891 mov dword ptr [edx*4 + 0x1208fa48], eax */
  w32((uint32_t)(EDX*4 + 0x1208fa48), (EAX));
  /* 12064898 jmp 0x120648a7 */
  goto L_120648a7;
L_1206489a:;
  /* 1206489a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206489d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120648a0 mov dword ptr [eax*4 + 0x1208fa48], ecx */
  w32((uint32_t)(EAX*4 + 0x1208fa48), (ECX));
L_120648a7:;
  /* 120648a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120648aa:;
  /* 120648aa mov esp, ebp */
  ESP = (EBP);
  /* 120648ac pop ebp */
  EBP = (pop32());
  /* 120648ad ret  */
  ESPCHK(0x12064830u, _esp0);
  ESP += 4; return;
}

/* FUN_100048b0 @ 0x120648b0 (28 bytes, 11 insns) */
void f_120648b0(void) {
  FTRACE(0x120648b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120648b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120648b1 mov ebp, esp */
  EBP = (ESP);
  /* 120648b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120648b4 mov eax, dword ptr [0x12093100] */
  EAX = (r32((uint32_t)(0x12093100)));
  /* 120648b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120648bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120648bf mov dword ptr [0x12093100], ecx */
  w32((uint32_t)(0x12093100), (ECX));
  /* 120648c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120648c8 mov esp, ebp */
  ESP = (EBP);
  /* 120648ca pop ebp */
  EBP = (pop32());
  /* 120648cb ret  */
  ESPCHK(0x120648b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d0 @ 0x120648d0 (912 bytes, 248 insns) */
void f_120648d0(void) {
  FTRACE(0x120648d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120648d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120648d1 mov ebp, esp */
  EBP = (ESP);
  /* 120648d3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 120648d8 call 0x120689b0 */
  push32(0x120648ddu); f_120689b0();
  /* 120648dd push edi */
  push32((uint32_t)(EDI));
  /* 120648de mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 120648e5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 120648ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120648ec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 120648f2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120648f4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 120648f6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120648f7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 120648fe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12064903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12064905 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1206490b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1206490d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1206490f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12064910 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12064917 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1206491c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206491e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12064924 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12064926 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12064928 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12064929 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1206492c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12064932 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064936 jl 0x1206493e */
  if ((C.sf!=C.of)) goto L_1206493e;
  /* 12064938 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206493c jl 0x12064946 */
  if ((C.sf!=C.of)) goto L_12064946;
L_1206493e:;
  /* 1206493e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12064941 jmp 0x12064c5b */
  goto L_12064c5b;
L_12064946:;
  /* 12064946 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206494a jne 0x120649f0 */
  if (!C.zf) goto L_120649f0;
  /* 12064950 push 0x1208fa38 */
  push32((uint32_t)(0x1208fa38u));
  /* 12064955 call dword ptr [0x1209439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209439c))), 0x1206495bu);
  /* 1206495b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206495d jle 0x120649f0 */
  if ((C.zf||C.sf!=C.of)) goto L_120649f0;
  /* 12064963 cmp dword ptr [0x120915b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206496a jne 0x120649ae */
  if (!C.zf) goto L_120649ae;
  /* 1206496c push 0x1208c3cc */
  push32((uint32_t)(0x1208c3ccu));
  /* 12064971 call dword ptr [0x12094398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094398))), 0x12064977u);
  /* 12064977 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1206497d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064984 je 0x120649a6 */
  if (C.zf) goto L_120649a6;
  /* 12064986 push 0x1208c3c0 */
  push32((uint32_t)(0x1208c3c0u));
  /* 1206498b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12064991 push ecx */
  push32((uint32_t)(ECX));
  /* 12064992 call dword ptr [0x12094394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094394))), 0x12064998u);
  /* 12064998 mov dword ptr [0x120915b0], eax */
  w32((uint32_t)(0x120915b0), (EAX));
  /* 1206499d cmp dword ptr [0x120915b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120649a4 jne 0x120649ae */
  if (!C.zf) goto L_120649ae;
L_120649a6:;
  /* 120649a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120649a9 jmp 0x12064c5b */
  goto L_12064c5b;
L_120649ae:;
  /* 120649ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120649b1 push edx */
  push32((uint32_t)(EDX));
  /* 120649b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120649b5 push eax */
  push32((uint32_t)(EAX));
  /* 120649b6 push 0x1208c38c */
  push32((uint32_t)(0x1208c38cu));
  /* 120649bb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 120649c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120649c2 call dword ptr [0x120915b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120915b0))), 0x120649c8u);
  /* 120649c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120649cb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 120649d1 push edx */
  push32((uint32_t)(EDX));
  /* 120649d2 call dword ptr [0x12094390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094390))), 0x120649d8u);
  /* 120649d8 push 0x1208fa38 */
  push32((uint32_t)(0x1208fa38u));
  /* 120649dd call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x120649e3u);
  /* 120649e3 call 0x120647c0 */
  push32(0x120649e8u); f_120647c0();
  /* 120649e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120649eb jmp 0x12064c5b */
  goto L_12064c5b;
L_120649f0:;
  /* 120649f0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120649f4 je 0x12064a2d */
  if (C.zf) goto L_12064a2d;
  /* 120649f6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 120649fc push eax */
  push32((uint32_t)(EAX));
  /* 120649fd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12064a00 push ecx */
  push32((uint32_t)(ECX));
  /* 12064a01 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12064a06 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12064a0c push edx */
  push32((uint32_t)(EDX));
  /* 12064a0d call 0x120688b0 */
  push32(0x12064a12u); f_120688b0();
  /* 12064a12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064a17 jge 0x12064a2d */
  if ((C.sf==C.of)) goto L_12064a2d;
  /* 12064a19 push 0x1208c360 */
  push32((uint32_t)(0x1208c360u));
  /* 12064a1e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12064a24 push eax */
  push32((uint32_t)(EAX));
  /* 12064a25 call 0x120687c0 */
  push32(0x12064a2au); f_120687c0();
  /* 12064a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064a2d:;
  /* 12064a2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064a31 jne 0x12064a65 */
  if (!C.zf) goto L_12064a65;
  /* 12064a33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064a37 je 0x12064a45 */
  if (C.zf) goto L_12064a45;
  /* 12064a39 mov dword ptr [ebp - 0x3028], 0x1208c34c */
  w32((uint32_t)(EBP + -0x3028), (0x1208c34cu));
  /* 12064a43 jmp 0x12064a4f */
  goto L_12064a4f;
L_12064a45:;
  /* 12064a45 mov dword ptr [ebp - 0x3028], 0x1208c338 */
  w32((uint32_t)(EBP + -0x3028), (0x1208c338u));
L_12064a4f:;
  /* 12064a4f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12064a55 push ecx */
  push32((uint32_t)(ECX));
  /* 12064a56 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12064a5c push edx */
  push32((uint32_t)(EDX));
  /* 12064a5d call 0x120687c0 */
  push32(0x12064a62u); f_120687c0();
  /* 12064a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064a65:;
  /* 12064a65 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12064a6b push eax */
  push32((uint32_t)(EAX));
  /* 12064a6c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12064a72 push ecx */
  push32((uint32_t)(ECX));
  /* 12064a73 call 0x120687d0 */
  push32(0x12064a78u); f_120687d0();
  /* 12064a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064a7b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064a7f jne 0x12064aba */
  if (!C.zf) goto L_12064aba;
  /* 12064a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064a84 mov eax, dword ptr [edx*4 + 0x1208fa3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1208fa3c)));
  /* 12064a8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12064a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064a90 je 0x12064aa6 */
  if (C.zf) goto L_12064aa6;
  /* 12064a92 push 0x1208c334 */
  push32((uint32_t)(0x1208c334u));
  /* 12064a97 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12064a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12064a9e call 0x120687d0 */
  push32(0x12064aa3u); f_120687d0();
  /* 12064aa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064aa6:;
  /* 12064aa6 push 0x1208c330 */
  push32((uint32_t)(0x1208c330u));
  /* 12064aab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12064ab1 push edx */
  push32((uint32_t)(EDX));
  /* 12064ab2 call 0x120687d0 */
  push32(0x12064ab7u); f_120687d0();
  /* 12064ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064aba:;
  /* 12064aba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064abe je 0x12064b02 */
  if (C.zf) goto L_12064b02;
  /* 12064ac0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12064ac6 push eax */
  push32((uint32_t)(EAX));
  /* 12064ac7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12064aca push ecx */
  push32((uint32_t)(ECX));
  /* 12064acb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12064ace push edx */
  push32((uint32_t)(EDX));
  /* 12064acf push 0x1208c324 */
  push32((uint32_t)(0x1208c324u));
  /* 12064ad4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12064ad9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12064adf push eax */
  push32((uint32_t)(EAX));
  /* 12064ae0 call 0x120686c0 */
  push32(0x12064ae5u); f_120686c0();
  /* 12064ae5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064aea jge 0x12064b00 */
  if ((C.sf==C.of)) goto L_12064b00;
  /* 12064aec push 0x1208c360 */
  push32((uint32_t)(0x1208c360u));
  /* 12064af1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12064af7 push ecx */
  push32((uint32_t)(ECX));
  /* 12064af8 call 0x120687c0 */
  push32(0x12064afdu); f_120687c0();
  /* 12064afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064b00:;
  /* 12064b00 jmp 0x12064b18 */
  goto L_12064b18;
L_12064b02:;
  /* 12064b02 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12064b08 push edx */
  push32((uint32_t)(EDX));
  /* 12064b09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12064b0f push eax */
  push32((uint32_t)(EAX));
  /* 12064b10 call 0x120687c0 */
  push32(0x12064b15u); f_120687c0();
  /* 12064b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064b18:;
  /* 12064b18 cmp dword ptr [0x12093100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12093100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064b1f je 0x12064b5c */
  if (C.zf) goto L_12064b5c;
  /* 12064b21 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12064b27 push ecx */
  push32((uint32_t)(ECX));
  /* 12064b28 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12064b2e push edx */
  push32((uint32_t)(EDX));
  /* 12064b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064b32 push eax */
  push32((uint32_t)(EAX));
  /* 12064b33 call dword ptr [0x12093100] */
  call_ind((uint32_t)(r32((uint32_t)(0x12093100))), 0x12064b39u);
  /* 12064b39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064b3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064b3e je 0x12064b5c */
  if (C.zf) goto L_12064b5c;
  /* 12064b40 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064b44 jne 0x12064b51 */
  if (!C.zf) goto L_12064b51;
  /* 12064b46 push 0x1208fa38 */
  push32((uint32_t)(0x1208fa38u));
  /* 12064b4b call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x12064b51u);
L_12064b51:;
  /* 12064b51 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12064b57 jmp 0x12064c5b */
  goto L_12064c5b;
L_12064b5c:;
  /* 12064b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064b5f mov edx, dword ptr [ecx*4 + 0x1208fa3c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa3c)));
  /* 12064b66 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12064b69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12064b6b je 0x12064bab */
  if (C.zf) goto L_12064bab;
  /* 12064b6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064b70 cmp dword ptr [eax*4 + 0x1208fa48], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1208fa48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064b78 je 0x12064bab */
  if (C.zf) goto L_12064bab;
  /* 12064b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12064b7c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12064b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12064b83 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12064b89 push edx */
  push32((uint32_t)(EDX));
  /* 12064b8a call 0x12068640 */
  push32(0x12064b8fu); f_12068640();
  /* 12064b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064b92 push eax */
  push32((uint32_t)(EAX));
  /* 12064b93 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12064b99 push eax */
  push32((uint32_t)(EAX));
  /* 12064b9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064b9d mov edx, dword ptr [ecx*4 + 0x1208fa48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa48)));
  /* 12064ba4 push edx */
  push32((uint32_t)(EDX));
  /* 12064ba5 call dword ptr [0x12094388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094388))), 0x12064babu);
L_12064bab:;
  /* 12064bab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064bae mov ecx, dword ptr [eax*4 + 0x1208fa3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1208fa3c)));
  /* 12064bb5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12064bb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12064bba je 0x12064bc9 */
  if (C.zf) goto L_12064bc9;
  /* 12064bbc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12064bc2 push edx */
  push32((uint32_t)(EDX));
  /* 12064bc3 call dword ptr [0x12094390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094390))), 0x12064bc9u);
L_12064bc9:;
  /* 12064bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064bcc mov ecx, dword ptr [eax*4 + 0x1208fa3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1208fa3c)));
  /* 12064bd3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12064bd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12064bd8 je 0x12064c48 */
  if (C.zf) goto L_12064c48;
  /* 12064bda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064bde je 0x12064bfd */
  if (C.zf) goto L_12064bfd;
  /* 12064be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12064be2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12064be8 push edx */
  push32((uint32_t)(EDX));
  /* 12064be9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12064bec push eax */
  push32((uint32_t)(EAX));
  /* 12064bed call 0x12068350 */
  push32(0x12064bf2u); f_12068350();
  /* 12064bf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064bf5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12064bfb jmp 0x12064c07 */
  goto L_12064c07;
L_12064bfd:;
  /* 12064bfd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12064c07:;
  /* 12064c07 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12064c0d push ecx */
  push32((uint32_t)(ECX));
  /* 12064c0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12064c11 push edx */
  push32((uint32_t)(EDX));
  /* 12064c12 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12064c18 push eax */
  push32((uint32_t)(EAX));
  /* 12064c19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12064c1c push ecx */
  push32((uint32_t)(ECX));
  /* 12064c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064c20 push edx */
  push32((uint32_t)(EDX));
  /* 12064c21 call 0x12064c60 */
  push32(0x12064c26u); f_12064c60();
  /* 12064c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064c29 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12064c2f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064c33 jne 0x12064c40 */
  if (!C.zf) goto L_12064c40;
  /* 12064c35 push 0x1208fa38 */
  push32((uint32_t)(0x1208fa38u));
  /* 12064c3a call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x12064c40u);
L_12064c40:;
  /* 12064c40 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12064c46 jmp 0x12064c5b */
  goto L_12064c5b;
L_12064c48:;
  /* 12064c48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064c4c jne 0x12064c59 */
  if (!C.zf) goto L_12064c59;
  /* 12064c4e push 0x1208fa38 */
  push32((uint32_t)(0x1208fa38u));
  /* 12064c53 call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x12064c59u);
L_12064c59:;
  /* 12064c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12064c5b:;
  /* 12064c5b pop edi */
  EDI = (pop32());
  /* 12064c5c mov esp, ebp */
  ESP = (EBP);
  /* 12064c5e pop ebp */
  EBP = (pop32());
  /* 12064c5f ret  */
  ESPCHK(0x120648d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x12064c60 (780 bytes, 197 insns) */
void f_12064c60(void) {
  FTRACE(0x12064c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12064c61 mov ebp, esp */
  EBP = (ESP);
  /* 12064c63 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12064c68 call 0x120689b0 */
  push32(0x12064c6du); f_120689b0();
L_12064c6d:;
  /* 12064c6d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064c71 jne 0x12064c98 */
  if (!C.zf) goto L_12064c98;
  /* 12064c73 push 0x1208c51c */
  push32((uint32_t)(0x1208c51cu));
  /* 12064c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064c7a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12064c7f push 0x1208c510 */
  push32((uint32_t)(0x1208c510u));
  /* 12064c84 push 2 */
  push32((uint32_t)(0x2u));
  /* 12064c86 call 0x120648d0 */
  push32(0x12064c8bu); f_120648d0();
  /* 12064c8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064c91 jne 0x12064c98 */
  if (!C.zf) goto L_12064c98;
  /* 12064c93 call 0x120647c0 */
  push32(0x12064c98u); f_120647c0();
L_12064c98:;
  /* 12064c98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12064c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064c9c jne 0x12064c6d */
  if (!C.zf) goto L_12064c6d;
  /* 12064c9e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12064ca3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12064ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 12064caa push 0 */
  push32((uint32_t)(0x0u));
  /* 12064cac call dword ptr [0x120943a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943a0))), 0x12064cb2u);
  /* 12064cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064cb4 jne 0x12064cca */
  if (!C.zf) goto L_12064cca;
  /* 12064cb6 push 0x1208c4f8 */
  push32((uint32_t)(0x1208c4f8u));
  /* 12064cbb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12064cc1 push edx */
  push32((uint32_t)(EDX));
  /* 12064cc2 call 0x120687c0 */
  push32(0x12064cc7u); f_120687c0();
  /* 12064cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064cca:;
  /* 12064cca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12064cd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12064cd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12064cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12064cd7 call 0x12068640 */
  push32(0x12064cdcu); f_12068640();
  /* 12064cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064cdf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064ce2 jbe 0x12064d0d */
  if ((C.cf||C.zf)) goto L_12064d0d;
  /* 12064ce4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12064ce7 push edx */
  push32((uint32_t)(EDX));
  /* 12064ce8 call 0x12068640 */
  push32(0x12064cedu); f_12068640();
  /* 12064ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064cf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12064cf3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12064cf7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12064cfa push 3 */
  push32((uint32_t)(0x3u));
  /* 12064cfc push 0x1208c4f4 */
  push32((uint32_t)(0x1208c4f4u));
  /* 12064d01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12064d04 push eax */
  push32((uint32_t)(EAX));
  /* 12064d05 call 0x12069030 */
  push32(0x12064d0au); f_12069030();
  /* 12064d0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064d0d:;
  /* 12064d0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12064d10 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12064d16 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064d1d je 0x12064d68 */
  if (C.zf) goto L_12064d68;
  /* 12064d1f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12064d25 push edx */
  push32((uint32_t)(EDX));
  /* 12064d26 call 0x12068640 */
  push32(0x12064d2bu); f_12068640();
  /* 12064d2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064d2e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064d31 jbe 0x12064d68 */
  if ((C.cf||C.zf)) goto L_12064d68;
  /* 12064d33 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12064d39 push eax */
  push32((uint32_t)(EAX));
  /* 12064d3a call 0x12068640 */
  push32(0x12064d3fu); f_12068640();
  /* 12064d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064d42 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12064d48 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12064d4c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12064d52 push 3 */
  push32((uint32_t)(0x3u));
  /* 12064d54 push 0x1208c4f4 */
  push32((uint32_t)(0x1208c4f4u));
  /* 12064d59 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12064d5f push eax */
  push32((uint32_t)(EAX));
  /* 12064d60 call 0x12069030 */
  push32(0x12064d65u); f_12069030();
  /* 12064d65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064d68:;
  /* 12064d68 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064d6c jne 0x12064d7a */
  if (!C.zf) goto L_12064d7a;
  /* 12064d6e mov dword ptr [ebp - 0x1114], 0x1208c480 */
  w32((uint32_t)(EBP + -0x1114), (0x1208c480u));
  /* 12064d78 jmp 0x12064d84 */
  goto L_12064d84;
L_12064d7a:;
  /* 12064d7a mov dword ptr [ebp - 0x1114], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1114), (0x1208c220u));
L_12064d84:;
  /* 12064d84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12064d87 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12064d8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12064d8c je 0x12064d99 */
  if (C.zf) goto L_12064d99;
  /* 12064d8e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12064d91 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12064d97 jmp 0x12064da3 */
  goto L_12064da3;
L_12064d99:;
  /* 12064d99 mov dword ptr [ebp - 0x1118], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1118), (0x1208c220u));
L_12064da3:;
  /* 12064da3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12064da6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12064da9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12064dab je 0x12064dbf */
  if (C.zf) goto L_12064dbf;
  /* 12064dad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064db1 jne 0x12064dbf */
  if (!C.zf) goto L_12064dbf;
  /* 12064db3 mov dword ptr [ebp - 0x111c], 0x1208c470 */
  w32((uint32_t)(EBP + -0x111c), (0x1208c470u));
  /* 12064dbd jmp 0x12064dc9 */
  goto L_12064dc9;
L_12064dbf:;
  /* 12064dbf mov dword ptr [ebp - 0x111c], 0x1208c220 */
  w32((uint32_t)(EBP + -0x111c), (0x1208c220u));
L_12064dc9:;
  /* 12064dc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12064dcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12064dcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12064dd1 je 0x12064ddf */
  if (C.zf) goto L_12064ddf;
  /* 12064dd3 mov dword ptr [ebp - 0x1120], 0x1208c46c */
  w32((uint32_t)(EBP + -0x1120), (0x1208c46cu));
  /* 12064ddd jmp 0x12064de9 */
  goto L_12064de9;
L_12064ddf:;
  /* 12064ddf mov dword ptr [ebp - 0x1120], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1120), (0x1208c220u));
L_12064de9:;
  /* 12064de9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064ded je 0x12064dfa */
  if (C.zf) goto L_12064dfa;
  /* 12064def mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12064df2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12064df8 jmp 0x12064e04 */
  goto L_12064e04;
L_12064dfa:;
  /* 12064dfa mov dword ptr [ebp - 0x1124], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1124), (0x1208c220u));
L_12064e04:;
  /* 12064e04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064e08 je 0x12064e16 */
  if (C.zf) goto L_12064e16;
  /* 12064e0a mov dword ptr [ebp - 0x1128], 0x1208c464 */
  w32((uint32_t)(EBP + -0x1128), (0x1208c464u));
  /* 12064e14 jmp 0x12064e20 */
  goto L_12064e20;
L_12064e16:;
  /* 12064e16 mov dword ptr [ebp - 0x1128], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1128), (0x1208c220u));
L_12064e20:;
  /* 12064e20 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064e24 je 0x12064e31 */
  if (C.zf) goto L_12064e31;
  /* 12064e26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12064e29 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12064e2f jmp 0x12064e3b */
  goto L_12064e3b;
L_12064e31:;
  /* 12064e31 mov dword ptr [ebp - 0x112c], 0x1208c220 */
  w32((uint32_t)(EBP + -0x112c), (0x1208c220u));
L_12064e3b:;
  /* 12064e3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064e3f je 0x12064e4d */
  if (C.zf) goto L_12064e4d;
  /* 12064e41 mov dword ptr [ebp - 0x1130], 0x1208c45c */
  w32((uint32_t)(EBP + -0x1130), (0x1208c45cu));
  /* 12064e4b jmp 0x12064e57 */
  goto L_12064e57;
L_12064e4d:;
  /* 12064e4d mov dword ptr [ebp - 0x1130], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1130), (0x1208c220u));
L_12064e57:;
  /* 12064e57 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064e5e je 0x12064e6e */
  if (C.zf) goto L_12064e6e;
  /* 12064e60 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12064e66 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12064e6c jmp 0x12064e78 */
  goto L_12064e78;
L_12064e6e:;
  /* 12064e6e mov dword ptr [ebp - 0x1134], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1134), (0x1208c220u));
L_12064e78:;
  /* 12064e78 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064e7f je 0x12064e8d */
  if (C.zf) goto L_12064e8d;
  /* 12064e81 mov dword ptr [ebp - 0x1138], 0x1208c450 */
  w32((uint32_t)(EBP + -0x1138), (0x1208c450u));
  /* 12064e8b jmp 0x12064e97 */
  goto L_12064e97;
L_12064e8d:;
  /* 12064e8d mov dword ptr [ebp - 0x1138], 0x1208c220 */
  w32((uint32_t)(EBP + -0x1138), (0x1208c220u));
L_12064e97:;
  /* 12064e97 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12064e9d push edx */
  push32((uint32_t)(EDX));
  /* 12064e9e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12064ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12064ea5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12064eab push ecx */
  push32((uint32_t)(ECX));
  /* 12064eac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12064eb2 push edx */
  push32((uint32_t)(EDX));
  /* 12064eb3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12064eb9 push eax */
  push32((uint32_t)(EAX));
  /* 12064eba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12064ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12064ec1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12064ec7 push edx */
  push32((uint32_t)(EDX));
  /* 12064ec8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12064ece push eax */
  push32((uint32_t)(EAX));
  /* 12064ecf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12064ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 12064ed6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12064edc push edx */
  push32((uint32_t)(EDX));
  /* 12064edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12064ee0 push eax */
  push32((uint32_t)(EAX));
  /* 12064ee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064ee4 mov edx, dword ptr [ecx*4 + 0x1208fa54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa54)));
  /* 12064eeb push edx */
  push32((uint32_t)(EDX));
  /* 12064eec push 0x1208c3fc */
  push32((uint32_t)(0x1208c3fcu));
  /* 12064ef1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12064ef6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12064efc push eax */
  push32((uint32_t)(EAX));
  /* 12064efd call 0x120686c0 */
  push32(0x12064f02u); f_120686c0();
  /* 12064f02 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12064f07 jge 0x12064f1d */
  if ((C.sf==C.of)) goto L_12064f1d;
  /* 12064f09 push 0x1208c360 */
  push32((uint32_t)(0x1208c360u));
  /* 12064f0e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12064f14 push ecx */
  push32((uint32_t)(ECX));
  /* 12064f15 call 0x120687c0 */
  push32(0x12064f1au); f_120687c0();
  /* 12064f1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12064f1d:;
  /* 12064f1d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12064f22 push 0x1208c3d8 */
  push32((uint32_t)(0x1208c3d8u));
  /* 12064f27 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12064f2d push edx */
  push32((uint32_t)(EDX));
  /* 12064f2e call 0x12068f70 */
  push32(0x12064f33u); f_12068f70();
  /* 12064f33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064f36 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12064f3c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064f43 jne 0x12064f56 */
  if (!C.zf) goto L_12064f56;
  /* 12064f45 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12064f47 call 0x12068cb0 */
  push32(0x12064f4cu); f_12068cb0();
  /* 12064f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064f4f push 3 */
  push32((uint32_t)(0x3u));
  /* 12064f51 call 0x12064fd0 */
  push32(0x12064f56u); f_12064fd0();
L_12064f56:;
  /* 12064f56 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064f5d jne 0x12064f66 */
  if (!C.zf) goto L_12064f66;
  /* 12064f5f mov eax, 1 */
  EAX = (0x1u);
  /* 12064f64 jmp 0x12064f68 */
  goto L_12064f68;
L_12064f66:;
  /* 12064f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12064f68:;
  /* 12064f68 mov esp, ebp */
  ESP = (EBP);
  /* 12064f6a pop ebp */
  EBP = (pop32());
  /* 12064f6b ret  */
  ESPCHK(0x12064c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f70 @ 0x12064f70 (56 bytes, 15 insns) */
void f_12064f70(void) {
  FTRACE(0x12064f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12064f71 mov ebp, esp */
  EBP = (ESP);
  /* 12064f73 cmp dword ptr [0x120930fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120930fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12064f7a je 0x12064f82 */
  if (C.zf) goto L_12064f82;
  /* 12064f7c call dword ptr [0x120930fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120930fc))), 0x12064f82u);
L_12064f82:;
  /* 12064f82 push 0x1208f418 */
  push32((uint32_t)(0x1208f418u));
  /* 12064f87 push 0x1208f208 */
  push32((uint32_t)(0x1208f208u));
  /* 12064f8c call 0x12065140 */
  push32(0x12064f91u); f_12065140();
  /* 12064f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064f94 push 0x1208f104 */
  push32((uint32_t)(0x1208f104u));
  /* 12064f99 push 0x1208f000 */
  push32((uint32_t)(0x1208f000u));
  /* 12064f9e call 0x12065140 */
  push32(0x12064fa3u); f_12065140();
  /* 12064fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064fa6 pop ebp */
  EBP = (pop32());
  /* 12064fa7 ret  */
  ESPCHK(0x12064f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fb0 @ 0x12064fb0 (21 bytes, 10 insns) */
void f_12064fb0(void) {
  FTRACE(0x12064fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12064fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12064fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064fb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064fba push eax */
  push32((uint32_t)(EAX));
  /* 12064fbb call 0x12065030 */
  push32(0x12064fc0u); f_12065030();
  /* 12064fc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064fc3 pop ebp */
  EBP = (pop32());
  /* 12064fc4 ret  */
  ESPCHK(0x12064fb0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12064fd0 (21 bytes, 10 insns) */
void f_12064fd0(void) {
  FTRACE(0x12064fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12064fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12064fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064fd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12064fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12064fda push eax */
  push32((uint32_t)(EAX));
  /* 12064fdb call 0x12065030 */
  push32(0x12064fe0u); f_12065030();
  /* 12064fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12064fe3 pop ebp */
  EBP = (pop32());
  /* 12064fe4 ret  */
  ESPCHK(0x12064fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ff0 @ 0x12064ff0 (19 bytes, 9 insns) */
void f_12064ff0(void) {
  FTRACE(0x12064ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12064ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12064ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12064ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12064ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12064ff9 call 0x12065030 */
  push32(0x12064ffeu); f_12065030();
  /* 12064ffe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065001 pop ebp */
  EBP = (pop32());
  /* 12065002 ret  */
  ESPCHK(0x12064ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x12065010 (19 bytes, 9 insns) */
void f_12065010(void) {
  FTRACE(0x12065010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065010 push ebp */
  push32((uint32_t)(EBP));
  /* 12065011 mov ebp, esp */
  EBP = (ESP);
  /* 12065013 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065015 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065017 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065019 call 0x12065030 */
  push32(0x1206501eu); f_12065030();
  /* 1206501e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065021 pop ebp */
  EBP = (pop32());
  /* 12065022 ret  */
  ESPCHK(0x12065010u, _esp0);
  ESP += 4; return;
}

/* FUN_10005030 @ 0x12065030 (227 bytes, 61 insns) */
void f_12065030(void) {
  FTRACE(0x12065030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065030 push ebp */
  push32((uint32_t)(EBP));
  /* 12065031 mov ebp, esp */
  EBP = (ESP);
  /* 12065033 push ecx */
  push32((uint32_t)(ECX));
  /* 12065034 call 0x12065120 */
  push32(0x12065039u); f_12065120();
  /* 12065039 cmp dword ptr [0x120915f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065040 jne 0x12065053 */
  if (!C.zf) goto L_12065053;
  /* 12065042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065045 push eax */
  push32((uint32_t)(EAX));
  /* 12065046 call dword ptr [0x120942c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942c4))), 0x1206504cu);
  /* 1206504c push eax */
  push32((uint32_t)(EAX));
  /* 1206504d call dword ptr [0x120943a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943a8))), 0x12065053u);
L_12065053:;
  /* 12065053 mov dword ptr [0x120915f0], 1 */
  w32((uint32_t)(0x120915f0), (0x1u));
  /* 1206505d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12065060 mov byte ptr [0x120915ec], cl */
  w8((uint32_t)(0x120915ec), (CL));
  /* 12065066 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206506a jne 0x120650b3 */
  if (!C.zf) goto L_120650b3;
  /* 1206506c cmp dword ptr [0x120930f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120930f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065073 je 0x120650a1 */
  if (C.zf) goto L_120650a1;
  /* 12065075 mov edx, dword ptr [0x120930f4] */
  EDX = (r32((uint32_t)(0x120930f4)));
  /* 1206507b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206507e:;
  /* 1206507e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065081 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065084 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12065087 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206508a cmp ecx, dword ptr [0x120930f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120930f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065090 jb 0x120650a1 */
  if (C.cf) goto L_120650a1;
  /* 12065092 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065095 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065098 je 0x1206509f */
  if (C.zf) goto L_1206509f;
  /* 1206509a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206509d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1206509fu);
L_1206509f:;
  /* 1206509f jmp 0x1206507e */
  goto L_1206507e;
L_120650a1:;
  /* 120650a1 push 0x1208f724 */
  push32((uint32_t)(0x1208f724u));
  /* 120650a6 push 0x1208f51c */
  push32((uint32_t)(0x1208f51cu));
  /* 120650ab call 0x12065140 */
  push32(0x120650b0u); f_12065140();
  /* 120650b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120650b3:;
  /* 120650b3 push 0x1208f92c */
  push32((uint32_t)(0x1208f92cu));
  /* 120650b8 push 0x1208f828 */
  push32((uint32_t)(0x1208f828u));
  /* 120650bd call 0x12065140 */
  push32(0x120650c2u); f_12065140();
  /* 120650c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120650c5 cmp dword ptr [0x120915f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120650cc jne 0x120650ee */
  if (!C.zf) goto L_120650ee;
  /* 120650ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120650d0 call 0x12066d20 */
  push32(0x120650d5u); f_12066d20();
  /* 120650d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120650d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 120650db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120650dd je 0x120650ee */
  if (C.zf) goto L_120650ee;
  /* 120650df mov dword ptr [0x120915f8], 1 */
  w32((uint32_t)(0x120915f8), (0x1u));
  /* 120650e9 call 0x12067630 */
  push32(0x120650eeu); f_12067630();
L_120650ee:;
  /* 120650ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120650f2 je 0x120650fb */
  if (C.zf) goto L_120650fb;
  /* 120650f4 call 0x12065130 */
  push32(0x120650f9u); f_12065130();
  /* 120650f9 jmp 0x1206510f */
  goto L_1206510f;
L_120650fb:;
  /* 120650fb mov dword ptr [0x120915f4], 1 */
  w32((uint32_t)(0x120915f4), (0x1u));
  /* 12065105 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065108 push ecx */
  push32((uint32_t)(ECX));
  /* 12065109 call dword ptr [0x120943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943a4))), 0x1206510fu);
L_1206510f:;
  /* 1206510f mov esp, ebp */
  ESP = (EBP);
  /* 12065111 pop ebp */
  EBP = (pop32());
  /* 12065112 ret  */
  ESPCHK(0x12065030u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x12065120 (15 bytes, 7 insns) */
void f_12065120(void) {
  FTRACE(0x12065120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065120 push ebp */
  push32((uint32_t)(EBP));
  /* 12065121 mov ebp, esp */
  EBP = (ESP);
  /* 12065123 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12065125 call 0x12069210 */
  push32(0x1206512au); f_12069210();
  /* 1206512a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206512d pop ebp */
  EBP = (pop32());
  /* 1206512e ret  */
  ESPCHK(0x12065120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005130 @ 0x12065130 (15 bytes, 7 insns) */
void f_12065130(void) {
  FTRACE(0x12065130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065130 push ebp */
  push32((uint32_t)(EBP));
  /* 12065131 mov ebp, esp */
  EBP = (ESP);
  /* 12065133 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12065135 call 0x120692b0 */
  push32(0x1206513au); f_120692b0();
  /* 1206513a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206513d pop ebp */
  EBP = (pop32());
  /* 1206513e ret  */
  ESPCHK(0x12065130u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12065140 (37 bytes, 16 insns) */
void f_12065140(void) {
  FTRACE(0x12065140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065140 push ebp */
  push32((uint32_t)(EBP));
  /* 12065141 mov ebp, esp */
  EBP = (ESP);
L_12065143:;
  /* 12065143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065146 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065149 jae 0x12065163 */
  if (!C.cf) goto L_12065163;
  /* 1206514b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206514e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065151 je 0x12065158 */
  if (C.zf) goto L_12065158;
  /* 12065153 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065156 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12065158u);
L_12065158:;
  /* 12065158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206515b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206515e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12065161 jmp 0x12065143 */
  goto L_12065143;
L_12065163:;
  /* 12065163 pop ebp */
  EBP = (pop32());
  /* 12065164 ret  */
  ESPCHK(0x12065140u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x12065170 (130 bytes, 42 insns) */
void f_12065170(void) {
  FTRACE(0x12065170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065170 push ebp */
  push32((uint32_t)(EBP));
  /* 12065171 mov ebp, esp */
  EBP = (ESP);
  /* 12065173 push ecx */
  push32((uint32_t)(ECX));
  /* 12065174 call 0x12069130 */
  push32(0x12065179u); f_12069130();
  /* 12065179 call dword ptr [0x120943b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943b8))), 0x1206517fu);
  /* 1206517f mov dword ptr [0x1208fa60], eax */
  w32((uint32_t)(0x1208fa60), (EAX));
  /* 12065184 cmp dword ptr [0x1208fa60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1208fa60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206518b jne 0x12065191 */
  if (!C.zf) goto L_12065191;
  /* 1206518d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206518f jmp 0x120651ee */
  goto L_120651ee;
L_12065191:;
  /* 12065191 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12065193 push 0x1208c534 */
  push32((uint32_t)(0x1208c534u));
  /* 12065198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206519a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1206519c push 1 */
  push32((uint32_t)(0x1u));
  /* 1206519e call 0x12065c20 */
  push32(0x120651a3u); f_12065c20();
  /* 120651a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120651a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120651a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120651ad je 0x120651c4 */
  if (C.zf) goto L_120651c4;
  /* 120651af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120651b2 push eax */
  push32((uint32_t)(EAX));
  /* 120651b3 mov ecx, dword ptr [0x1208fa60] */
  ECX = (r32((uint32_t)(0x1208fa60)));
  /* 120651b9 push ecx */
  push32((uint32_t)(ECX));
  /* 120651ba call dword ptr [0x120943b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943b4))), 0x120651c0u);
  /* 120651c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120651c2 jne 0x120651c8 */
  if (!C.zf) goto L_120651c8;
L_120651c4:;
  /* 120651c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120651c6 jmp 0x120651ee */
  goto L_120651ee;
L_120651c8:;
  /* 120651c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120651cb push edx */
  push32((uint32_t)(EDX));
  /* 120651cc call 0x12065230 */
  push32(0x120651d1u); f_12065230();
  /* 120651d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120651d4 call dword ptr [0x120942c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942c8))), 0x120651dau);
  /* 120651da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120651dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120651df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120651e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 120651e9 mov eax, 1 */
  EAX = (0x1u);
L_120651ee:;
  /* 120651ee mov esp, ebp */
  ESP = (EBP);
  /* 120651f0 pop ebp */
  EBP = (pop32());
  /* 120651f1 ret  */
  ESPCHK(0x12065170u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x12065200 (41 bytes, 11 insns) */
void f_12065200(void) {
  FTRACE(0x12065200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065200 push ebp */
  push32((uint32_t)(EBP));
  /* 12065201 mov ebp, esp */
  EBP = (ESP);
  /* 12065203 call 0x12069170 */
  push32(0x12065208u); f_12069170();
  /* 12065208 cmp dword ptr [0x1208fa60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1208fa60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206520f je 0x12065227 */
  if (C.zf) goto L_12065227;
  /* 12065211 mov eax, dword ptr [0x1208fa60] */
  EAX = (r32((uint32_t)(0x1208fa60)));
  /* 12065216 push eax */
  push32((uint32_t)(EAX));
  /* 12065217 call dword ptr [0x120943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943bc))), 0x1206521du);
  /* 1206521d mov dword ptr [0x1208fa60], 0xffffffff */
  w32((uint32_t)(0x1208fa60), (0xffffffffu));
L_12065227:;
  /* 12065227 pop ebp */
  EBP = (pop32());
  /* 12065228 ret  */
  ESPCHK(0x12065200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005230 @ 0x12065230 (25 bytes, 8 insns) */
void f_12065230(void) {
  FTRACE(0x12065230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065230 push ebp */
  push32((uint32_t)(EBP));
  /* 12065231 mov ebp, esp */
  EBP = (ESP);
  /* 12065233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065236 mov dword ptr [eax + 0x50], 0x1208fc10 */
  w32((uint32_t)(EAX + 0x50), (0x1208fc10u));
  /* 1206523d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065240 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12065247 pop ebp */
  EBP = (pop32());
  /* 12065248 ret  */
  ESPCHK(0x12065230u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x12065250 (152 bytes, 48 insns) */
void f_12065250(void) {
  FTRACE(0x12065250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065250 push ebp */
  push32((uint32_t)(EBP));
  /* 12065251 mov ebp, esp */
  EBP = (ESP);
  /* 12065253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065256 call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x1206525cu);
  /* 1206525c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206525f mov eax, dword ptr [0x1208fa60] */
  EAX = (r32((uint32_t)(0x1208fa60)));
  /* 12065264 push eax */
  push32((uint32_t)(EAX));
  /* 12065265 call dword ptr [0x120943c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943c4))), 0x1206526bu);
  /* 1206526b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206526e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065272 jne 0x120652d7 */
  if (!C.zf) goto L_120652d7;
  /* 12065274 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12065279 push 0x1208c534 */
  push32((uint32_t)(0x1208c534u));
  /* 1206527e push 2 */
  push32((uint32_t)(0x2u));
  /* 12065280 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12065282 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065284 call 0x12065c20 */
  push32(0x12065289u); f_12065c20();
  /* 12065289 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206528c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206528f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065293 je 0x120652cd */
  if (C.zf) goto L_120652cd;
  /* 12065295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065298 push ecx */
  push32((uint32_t)(ECX));
  /* 12065299 mov edx, dword ptr [0x1208fa60] */
  EDX = (r32((uint32_t)(0x1208fa60)));
  /* 1206529f push edx */
  push32((uint32_t)(EDX));
  /* 120652a0 call dword ptr [0x120943b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943b4))), 0x120652a6u);
  /* 120652a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120652a8 je 0x120652cd */
  if (C.zf) goto L_120652cd;
  /* 120652aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120652ad push eax */
  push32((uint32_t)(EAX));
  /* 120652ae call 0x12065230 */
  push32(0x120652b3u); f_12065230();
  /* 120652b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120652b6 call dword ptr [0x120942c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942c8))), 0x120652bcu);
  /* 120652bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120652bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120652c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120652c4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 120652cb jmp 0x120652d7 */
  goto L_120652d7;
L_120652cd:;
  /* 120652cd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120652cf call 0x12064780 */
  push32(0x120652d4u); f_12064780();
  /* 120652d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120652d7:;
  /* 120652d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120652da push eax */
  push32((uint32_t)(EAX));
  /* 120652db call dword ptr [0x120943c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943c0))), 0x120652e1u);
  /* 120652e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120652e4 mov esp, ebp */
  ESP = (EBP);
  /* 120652e6 pop ebp */
  EBP = (pop32());
  /* 120652e7 ret  */
  ESPCHK(0x12065250u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x120652f0 (263 bytes, 86 insns) */
void f_120652f0(void) {
  FTRACE(0x120652f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120652f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120652f1 mov ebp, esp */
  EBP = (ESP);
  /* 120652f3 cmp dword ptr [0x1208fa60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1208fa60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120652fa je 0x120653f5 */
  if (C.zf) goto L_120653f5;
  /* 12065300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065304 jne 0x12065315 */
  if (!C.zf) goto L_12065315;
  /* 12065306 mov eax, dword ptr [0x1208fa60] */
  EAX = (r32((uint32_t)(0x1208fa60)));
  /* 1206530b push eax */
  push32((uint32_t)(EAX));
  /* 1206530c call dword ptr [0x120943c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943c4))), 0x12065312u);
  /* 12065312 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12065315:;
  /* 12065315 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065319 je 0x120653e6 */
  if (C.zf) goto L_120653e6;
  /* 1206531f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065322 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065326 je 0x12065339 */
  if (C.zf) goto L_12065339;
  /* 12065328 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206532a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206532d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12065330 push eax */
  push32((uint32_t)(EAX));
  /* 12065331 call 0x120662a0 */
  push32(0x12065336u); f_120662a0();
  /* 12065336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12065339:;
  /* 12065339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206533c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065340 je 0x12065353 */
  if (C.zf) goto L_12065353;
  /* 12065342 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065347 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1206534a push eax */
  push32((uint32_t)(EAX));
  /* 1206534b call 0x120662a0 */
  push32(0x12065350u); f_120662a0();
  /* 12065350 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12065353:;
  /* 12065353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065356 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206535a je 0x1206536d */
  if (C.zf) goto L_1206536d;
  /* 1206535c push 2 */
  push32((uint32_t)(0x2u));
  /* 1206535e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065361 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12065364 push eax */
  push32((uint32_t)(EAX));
  /* 12065365 call 0x120662a0 */
  push32(0x1206536au); f_120662a0();
  /* 1206536a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206536d:;
  /* 1206536d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065370 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065374 je 0x12065387 */
  if (C.zf) goto L_12065387;
  /* 12065376 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206537b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1206537e push eax */
  push32((uint32_t)(EAX));
  /* 1206537f call 0x120662a0 */
  push32(0x12065384u); f_120662a0();
  /* 12065384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12065387:;
  /* 12065387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206538a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206538e je 0x120653a1 */
  if (C.zf) goto L_120653a1;
  /* 12065390 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065395 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12065398 push eax */
  push32((uint32_t)(EAX));
  /* 12065399 call 0x120662a0 */
  push32(0x1206539eu); f_120662a0();
  /* 1206539e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120653a1:;
  /* 120653a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120653a4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120653a8 je 0x120653bb */
  if (C.zf) goto L_120653bb;
  /* 120653aa push 2 */
  push32((uint32_t)(0x2u));
  /* 120653ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120653af mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 120653b2 push eax */
  push32((uint32_t)(EAX));
  /* 120653b3 call 0x120662a0 */
  push32(0x120653b8u); f_120662a0();
  /* 120653b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120653bb:;
  /* 120653bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120653be cmp dword ptr [ecx + 0x50], 0x1208fc10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1208fc10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120653c5 je 0x120653d8 */
  if (C.zf) goto L_120653d8;
  /* 120653c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120653c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120653cc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 120653cf push eax */
  push32((uint32_t)(EAX));
  /* 120653d0 call 0x120662a0 */
  push32(0x120653d5u); f_120662a0();
  /* 120653d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120653d8:;
  /* 120653d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120653da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120653dd push ecx */
  push32((uint32_t)(ECX));
  /* 120653de call 0x120662a0 */
  push32(0x120653e3u); f_120662a0();
  /* 120653e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120653e6:;
  /* 120653e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120653e8 mov edx, dword ptr [0x1208fa60] */
  EDX = (r32((uint32_t)(0x1208fa60)));
  /* 120653ee push edx */
  push32((uint32_t)(EDX));
  /* 120653ef call dword ptr [0x120943b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943b4))), 0x120653f5u);
L_120653f5:;
  /* 120653f5 pop ebp */
  EBP = (pop32());
  /* 120653f6 ret  */
  ESPCHK(0x120652f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x12065400 (11 bytes, 5 insns) */
void f_12065400(void) {
  FTRACE(0x12065400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065400 push ebp */
  push32((uint32_t)(EBP));
  /* 12065401 mov ebp, esp */
  EBP = (ESP);
  /* 12065403 call dword ptr [0x120942c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942c8))), 0x12065409u);
  /* 12065409 pop ebp */
  EBP = (pop32());
  /* 1206540a ret  */
  ESPCHK(0x12065400u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x12065410 (11 bytes, 5 insns) */
void f_12065410(void) {
  FTRACE(0x12065410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065410 push ebp */
  push32((uint32_t)(EBP));
  /* 12065411 mov ebp, esp */
  EBP = (ESP);
  /* 12065413 call dword ptr [0x120943c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943c8))), 0x12065419u);
  /* 12065419 pop ebp */
  EBP = (pop32());
  /* 1206541a ret  */
  ESPCHK(0x12065410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005420 @ 0x12065420 (804 bytes, 236 insns) */
void f_12065420(void) {
  FTRACE(0x12065420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065420 push ebp */
  push32((uint32_t)(EBP));
  /* 12065421 mov ebp, esp */
  EBP = (ESP);
  /* 12065423 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065426 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1206542b push 0x1208c540 */
  push32((uint32_t)(0x1208c540u));
  /* 12065430 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065432 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12065437 call 0x12065810 */
  push32(0x1206543cu); f_12065810();
  /* 1206543c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206543f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12065442 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065446 jne 0x12065452 */
  if (!C.zf) goto L_12065452;
  /* 12065448 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1206544a call 0x12064780 */
  push32(0x1206544fu); f_12064780();
  /* 1206544f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12065452:;
  /* 12065452 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065455 mov dword ptr [0x12092fa0], eax */
  w32((uint32_t)(0x12092fa0), (EAX));
  /* 1206545a mov dword ptr [0x120930dc], 0x20 */
  w32((uint32_t)(0x120930dc), (0x20u));
  /* 12065464 jmp 0x1206546f */
  goto L_1206546f;
L_12065466:;
  /* 12065466 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065469 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206546c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1206546f:;
  /* 1206546f mov edx, dword ptr [0x12092fa0] */
  EDX = (r32((uint32_t)(0x12092fa0)));
  /* 12065475 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206547b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206547e jae 0x120654a3 */
  if (!C.cf) goto L_120654a3;
  /* 12065480 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065483 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12065487 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206548a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12065490 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065493 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12065497 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206549a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120654a1 jmp 0x12065466 */
  goto L_12065466;
L_120654a3:;
  /* 120654a3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 120654a6 push ecx */
  push32((uint32_t)(ECX));
  /* 120654a7 call dword ptr [0x120943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d4))), 0x120654adu);
  /* 120654ad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 120654b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120654b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120654b8 je 0x12065645 */
  if (C.zf) goto L_12065645;
  /* 120654be cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120654c2 je 0x12065645 */
  if (C.zf) goto L_12065645;
  /* 120654c8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120654cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120654cd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 120654d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120654d3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120654d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120654d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120654dc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120654df mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 120654e2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120654e9 jge 0x120654f3 */
  if ((C.sf==C.of)) goto L_120654f3;
  /* 120654eb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 120654ee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 120654f1 jmp 0x120654fa */
  goto L_120654fa;
L_120654f3:;
  /* 120654f3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_120654fa:;
  /* 120654fa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 120654fd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12065500 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12065507 jmp 0x12065512 */
  goto L_12065512;
L_12065509:;
  /* 12065509 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1206550c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206550f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12065512:;
  /* 12065512 mov ecx, dword ptr [0x120930dc] */
  ECX = (r32((uint32_t)(0x120930dc)));
  /* 12065518 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206551b jge 0x120655b2 */
  if ((C.sf==C.of)) goto L_120655b2;
  /* 12065521 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12065526 push 0x1208c540 */
  push32((uint32_t)(0x1208c540u));
  /* 1206552b push 2 */
  push32((uint32_t)(0x2u));
  /* 1206552d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12065532 call 0x12065810 */
  push32(0x12065537u); f_12065810();
  /* 12065537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206553a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1206553d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065541 jne 0x1206554e */
  if (!C.zf) goto L_1206554e;
  /* 12065543 mov edx, dword ptr [0x120930dc] */
  EDX = (r32((uint32_t)(0x120930dc)));
  /* 12065549 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1206554c jmp 0x120655b2 */
  goto L_120655b2;
L_1206554e:;
  /* 1206554e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12065551 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065554 mov dword ptr [eax*4 + 0x12092fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12092fa0), (ECX));
  /* 1206555b mov edx, dword ptr [0x120930dc] */
  EDX = (r32((uint32_t)(0x120930dc)));
  /* 12065561 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065564 mov dword ptr [0x120930dc], edx */
  w32((uint32_t)(0x120930dc), (EDX));
  /* 1206556a jmp 0x12065575 */
  goto L_12065575;
L_1206556c:;
  /* 1206556c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206556f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065572 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12065575:;
  /* 12065575 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12065578 mov edx, dword ptr [ecx*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206557f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065585 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065588 jae 0x120655ad */
  if (!C.cf) goto L_120655ad;
  /* 1206558a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206558d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12065591 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065594 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1206559a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206559d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 120655a1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120655a4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120655ab jmp 0x1206556c */
  goto L_1206556c;
L_120655ad:;
  /* 120655ad jmp 0x12065509 */
  goto L_12065509;
L_120655b2:;
  /* 120655b2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 120655b9 jmp 0x120655d6 */
  goto L_120655d6;
L_120655bb:;
  /* 120655bb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 120655be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120655c1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 120655c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120655c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120655ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120655cd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 120655d0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120655d3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_120655d6:;
  /* 120655d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 120655d9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120655dc jge 0x12065645 */
  if ((C.sf==C.of)) goto L_12065645;
  /* 120655de mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 120655e1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120655e4 je 0x12065640 */
  if (C.zf) goto L_12065640;
  /* 120655e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120655e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120655ec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120655ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120655f1 je 0x12065640 */
  if (C.zf) goto L_12065640;
  /* 120655f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120655f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120655f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 120655fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120655fe jne 0x12065610 */
  if (!C.zf) goto L_12065610;
  /* 12065600 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12065603 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12065605 push edx */
  push32((uint32_t)(EDX));
  /* 12065606 call dword ptr [0x120943d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d0))), 0x1206560cu);
  /* 1206560c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206560e je 0x12065640 */
  if (C.zf) goto L_12065640;
L_12065610:;
  /* 12065610 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12065613 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12065616 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12065619 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206561c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206561f mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 12065626 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065628 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1206562b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206562e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12065631 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12065633 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12065635 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206563b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206563d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12065640:;
  /* 12065640 jmp 0x120655bb */
  goto L_120655bb;
L_12065645:;
  /* 12065645 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1206564c jmp 0x12065657 */
  goto L_12065657;
L_1206564e:;
  /* 1206564e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12065651 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065654 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12065657:;
  /* 12065657 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206565b jge 0x12065734 */
  if ((C.sf==C.of)) goto L_12065734;
  /* 12065661 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12065664 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12065667 mov edx, dword ptr [0x12092fa0] */
  EDX = (r32((uint32_t)(0x12092fa0)));
  /* 1206566d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206566f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12065672 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065675 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065678 jne 0x12065720 */
  if (!C.zf) goto L_12065720;
  /* 1206567e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065681 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12065685 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065689 jne 0x12065694 */
  if (!C.zf) goto L_12065694;
  /* 1206568b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12065692 jmp 0x120656a4 */
  goto L_120656a4;
L_12065694:;
  /* 12065694 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12065697 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206569a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206569c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206569e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120656a1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_120656a4:;
  /* 120656a4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120656a7 push eax */
  push32((uint32_t)(EAX));
  /* 120656a8 call dword ptr [0x12094384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094384))), 0x120656aeu);
  /* 120656ae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 120656b1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120656b5 je 0x1206570f */
  if (C.zf) goto L_1206570f;
  /* 120656b7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120656ba push ecx */
  push32((uint32_t)(ECX));
  /* 120656bb call dword ptr [0x120943d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d0))), 0x120656c1u);
  /* 120656c1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 120656c4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120656c8 je 0x1206570f */
  if (C.zf) goto L_1206570f;
  /* 120656ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120656cd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120656d0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120656d2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 120656d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120656db cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120656de jne 0x120656f0 */
  if (!C.zf) goto L_120656f0;
  /* 120656e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120656e3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 120656e6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 120656e8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120656eb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 120656ee jmp 0x1206570d */
  goto L_1206570d;
L_120656f0:;
  /* 120656f0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 120656f3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120656f9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120656fc jne 0x1206570d */
  if (!C.zf) goto L_1206570d;
  /* 120656fe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065701 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12065704 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12065707 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206570a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1206570d:;
  /* 1206570d jmp 0x1206571e */
  goto L_1206571e;
L_1206570f:;
  /* 1206570f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065712 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12065715 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12065718 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206571b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1206571e:;
  /* 1206571e jmp 0x1206572f */
  goto L_1206572f;
L_12065720:;
  /* 12065720 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12065723 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12065726 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12065729 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206572c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1206572f:;
  /* 1206572f jmp 0x1206564e */
  goto L_1206564e;
L_12065734:;
  /* 12065734 mov eax, dword ptr [0x120930dc] */
  EAX = (r32((uint32_t)(0x120930dc)));
  /* 12065739 push eax */
  push32((uint32_t)(EAX));
  /* 1206573a call dword ptr [0x120943cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943cc))), 0x12065740u);
  /* 12065740 mov esp, ebp */
  ESP = (EBP);
  /* 12065742 pop ebp */
  EBP = (pop32());
  /* 12065743 ret  */
  ESPCHK(0x12065420u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12065750 (155 bytes, 45 insns) */
void f_12065750(void) {
  FTRACE(0x12065750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065750 push ebp */
  push32((uint32_t)(EBP));
  /* 12065751 mov ebp, esp */
  EBP = (ESP);
  /* 12065753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065756 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1206575d jmp 0x12065768 */
  goto L_12065768;
L_1206575f:;
  /* 1206575f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065762 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065765 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12065768:;
  /* 12065768 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206576c jge 0x120657e7 */
  if ((C.sf==C.of)) goto L_120657e7;
  /* 1206576e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065771 cmp dword ptr [ecx*4 + 0x12092fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12092fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065779 je 0x120657e2 */
  if (C.zf) goto L_120657e2;
  /* 1206577b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206577e mov eax, dword ptr [edx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 12065785 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12065788 jmp 0x12065793 */
  goto L_12065793;
L_1206578a:;
  /* 1206578a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206578d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065790 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12065793:;
  /* 12065793 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065796 mov eax, dword ptr [edx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206579d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120657a2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120657a5 jae 0x120657bf */
  if (!C.cf) goto L_120657bf;
  /* 120657a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120657aa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120657ae je 0x120657bd */
  if (C.zf) goto L_120657bd;
  /* 120657b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120657b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120657b6 push edx */
  push32((uint32_t)(EDX));
  /* 120657b7 call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x120657bdu);
L_120657bd:;
  /* 120657bd jmp 0x1206578a */
  goto L_1206578a;
L_120657bf:;
  /* 120657bf push 2 */
  push32((uint32_t)(0x2u));
  /* 120657c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120657c4 mov ecx, dword ptr [eax*4 + 0x12092fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 120657cb push ecx */
  push32((uint32_t)(ECX));
  /* 120657cc call 0x120662a0 */
  push32(0x120657d1u); f_120662a0();
  /* 120657d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120657d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120657d7 mov dword ptr [edx*4 + 0x12092fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x12092fa0), (0x0u));
L_120657e2:;
  /* 120657e2 jmp 0x1206575f */
  goto L_1206575f;
L_120657e7:;
  /* 120657e7 mov esp, ebp */
  ESP = (EBP);
  /* 120657e9 pop ebp */
  EBP = (pop32());
  /* 120657ea ret  */
  ESPCHK(0x12065750u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x120657f0 (29 bytes, 13 insns) */
void f_120657f0(void) {
  FTRACE(0x120657f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120657f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120657f1 mov ebp, esp */
  EBP = (ESP);
  /* 120657f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120657f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120657f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120657f9 mov eax, dword ptr [0x120917a0] */
  EAX = (r32((uint32_t)(0x120917a0)));
  /* 120657fe push eax */
  push32((uint32_t)(EAX));
  /* 120657ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065802 push ecx */
  push32((uint32_t)(ECX));
  /* 12065803 call 0x12065860 */
  push32(0x12065808u); f_12065860();
  /* 12065808 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206580b pop ebp */
  EBP = (pop32());
  /* 1206580c ret  */
  ESPCHK(0x120657f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x12065810 (35 bytes, 16 insns) */
void f_12065810(void) {
  FTRACE(0x12065810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065810 push ebp */
  push32((uint32_t)(EBP));
  /* 12065811 mov ebp, esp */
  EBP = (ESP);
  /* 12065813 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065816 push eax */
  push32((uint32_t)(EAX));
  /* 12065817 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206581a push ecx */
  push32((uint32_t)(ECX));
  /* 1206581b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206581e push edx */
  push32((uint32_t)(EDX));
  /* 1206581f mov eax, dword ptr [0x120917a0] */
  EAX = (r32((uint32_t)(0x120917a0)));
  /* 12065824 push eax */
  push32((uint32_t)(EAX));
  /* 12065825 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065828 push ecx */
  push32((uint32_t)(ECX));
  /* 12065829 call 0x12065860 */
  push32(0x1206582eu); f_12065860();
  /* 1206582e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065831 pop ebp */
  EBP = (pop32());
  /* 12065832 ret  */
  ESPCHK(0x12065810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x12065840 (27 bytes, 13 insns) */
void f_12065840(void) {
  FTRACE(0x12065840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065840 push ebp */
  push32((uint32_t)(EBP));
  /* 12065841 mov ebp, esp */
  EBP = (ESP);
  /* 12065843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065845 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065847 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065849 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206584c push eax */
  push32((uint32_t)(EAX));
  /* 1206584d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065850 push ecx */
  push32((uint32_t)(ECX));
  /* 12065851 call 0x12065860 */
  push32(0x12065856u); f_12065860();
  /* 12065856 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065859 pop ebp */
  EBP = (pop32());
  /* 1206585a ret  */
  ESPCHK(0x12065840u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x12065860 (94 bytes, 38 insns) */
void f_12065860(void) {
  FTRACE(0x12065860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065860 push ebp */
  push32((uint32_t)(EBP));
  /* 12065861 mov ebp, esp */
  EBP = (ESP);
  /* 12065863 push ecx */
  push32((uint32_t)(ECX));
L_12065864:;
  /* 12065864 push 9 */
  push32((uint32_t)(0x9u));
  /* 12065866 call 0x12069210 */
  push32(0x1206586bu); f_12069210();
  /* 1206586b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206586e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12065871 push eax */
  push32((uint32_t)(EAX));
  /* 12065872 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065875 push ecx */
  push32((uint32_t)(ECX));
  /* 12065876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065879 push edx */
  push32((uint32_t)(EDX));
  /* 1206587a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206587d push eax */
  push32((uint32_t)(EAX));
  /* 1206587e call 0x120658e0 */
  push32(0x12065883u); f_120658e0();
  /* 12065883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065886 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12065889 push 9 */
  push32((uint32_t)(0x9u));
  /* 1206588b call 0x120692b0 */
  push32(0x12065890u); f_120692b0();
  /* 12065890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065893 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065897 jne 0x1206589f */
  if (!C.zf) goto L_1206589f;
  /* 12065899 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206589d jne 0x120658a4 */
  if (!C.zf) goto L_120658a4;
L_1206589f:;
  /* 1206589f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120658a2 jmp 0x120658ba */
  goto L_120658ba;
L_120658a4:;
  /* 120658a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120658a7 push ecx */
  push32((uint32_t)(ECX));
  /* 120658a8 call 0x12069550 */
  push32(0x120658adu); f_12069550();
  /* 120658ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120658b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120658b2 jne 0x120658b8 */
  if (!C.zf) goto L_120658b8;
  /* 120658b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120658b6 jmp 0x120658ba */
  goto L_120658ba;
L_120658b8:;
  /* 120658b8 jmp 0x12065864 */
  goto L_12065864;
L_120658ba:;
  /* 120658ba mov esp, ebp */
  ESP = (EBP);
  /* 120658bc pop ebp */
  EBP = (pop32());
  /* 120658bd ret  */
  ESPCHK(0x12065860u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x120658c0 (23 bytes, 11 insns) */
void f_120658c0(void) {
  FTRACE(0x120658c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120658c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120658c1 mov ebp, esp */
  EBP = (ESP);
  /* 120658c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120658c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120658c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120658c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120658cc push eax */
  push32((uint32_t)(EAX));
  /* 120658cd call 0x120658e0 */
  push32(0x120658d2u); f_120658e0();
  /* 120658d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120658d5 pop ebp */
  EBP = (pop32());
  /* 120658d6 ret  */
  ESPCHK(0x120658c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e0 @ 0x120658e0 (787 bytes, 254 insns) */
void f_120658e0(void) {
  FTRACE(0x120658e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120658e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120658e1 mov ebp, esp */
  EBP = (ESP);
  /* 120658e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120658e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120658e7 push esi */
  push32((uint32_t)(ESI));
  /* 120658e8 push edi */
  push32((uint32_t)(EDI));
  /* 120658e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120658f0 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 120658f5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120658f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120658fa je 0x1206592c */
  if (C.zf) goto L_1206592c;
L_120658fc:;
  /* 120658fc call 0x120669b0 */
  push32(0x12065901u); f_120669b0();
  /* 12065901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065903 jne 0x12065926 */
  if (!C.zf) goto L_12065926;
  /* 12065905 push 0x1208c634 */
  push32((uint32_t)(0x1208c634u));
  /* 1206590a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206590c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12065911 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12065916 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065918 call 0x120648d0 */
  push32(0x1206591du); f_120648d0();
  /* 1206591d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065920 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065923 jne 0x12065926 */
  if (!C.zf) goto L_12065926;
  /* 12065925 int3  */
  x86_unimpl("int3 @ 0x12065925");
L_12065926:;
  /* 12065926 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12065928 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206592a jne 0x120658fc */
  if (!C.zf) goto L_120658fc;
L_1206592c:;
  /* 1206592c mov edx, dword ptr [0x1208fa90] */
  EDX = (r32((uint32_t)(0x1208fa90)));
  /* 12065932 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12065935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065938 cmp eax, dword ptr [0x1208fa94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1208fa94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206593e jne 0x12065941 */
  if (!C.zf) goto L_12065941;
  /* 12065940 int3  */
  x86_unimpl("int3 @ 0x12065940");
L_12065941:;
  /* 12065941 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065944 push ecx */
  push32((uint32_t)(ECX));
  /* 12065945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065948 push edx */
  push32((uint32_t)(EDX));
  /* 12065949 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206594c push eax */
  push32((uint32_t)(EAX));
  /* 1206594d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065950 push ecx */
  push32((uint32_t)(ECX));
  /* 12065951 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065954 push edx */
  push32((uint32_t)(EDX));
  /* 12065955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065957 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065959 call dword ptr [0x1208fca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1208fca0))), 0x1206595fu);
  /* 1206595f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065964 jne 0x120659c4 */
  if (!C.zf) goto L_120659c4;
  /* 12065966 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206596a je 0x12065997 */
  if (C.zf) goto L_12065997;
L_1206596c:;
  /* 1206596c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206596f push eax */
  push32((uint32_t)(EAX));
  /* 12065970 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065973 push ecx */
  push32((uint32_t)(ECX));
  /* 12065974 push 0x1208c5f0 */
  push32((uint32_t)(0x1208c5f0u));
  /* 12065979 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206597b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206597d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206597f push 0 */
  push32((uint32_t)(0x0u));
  /* 12065981 call 0x120648d0 */
  push32(0x12065986u); f_120648d0();
  /* 12065986 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065989 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206598c jne 0x1206598f */
  if (!C.zf) goto L_1206598f;
  /* 1206598e int3  */
  x86_unimpl("int3 @ 0x1206598e");
L_1206598f:;
  /* 1206598f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12065991 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12065993 jne 0x1206596c */
  if (!C.zf) goto L_1206596c;
  /* 12065995 jmp 0x120659bd */
  goto L_120659bd;
L_12065997:;
  /* 12065997 push 0x1208c5cc */
  push32((uint32_t)(0x1208c5ccu));
  /* 1206599c push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 120659a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120659a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120659a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120659a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120659a9 call 0x120648d0 */
  push32(0x120659aeu); f_120648d0();
  /* 120659ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120659b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120659b4 jne 0x120659b7 */
  if (!C.zf) goto L_120659b7;
  /* 120659b6 int3  */
  x86_unimpl("int3 @ 0x120659b6");
L_120659b7:;
  /* 120659b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120659b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120659bb jne 0x12065997 */
  if (!C.zf) goto L_12065997;
L_120659bd:;
  /* 120659bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120659bf jmp 0x12065bec */
  goto L_12065bec;
L_120659c4:;
  /* 120659c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120659c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120659cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120659d0 je 0x120659e6 */
  if (C.zf) goto L_120659e6;
  /* 120659d2 mov edx, dword ptr [0x1208fa8c] */
  EDX = (r32((uint32_t)(0x1208fa8c)));
  /* 120659d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120659db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120659dd jne 0x120659e6 */
  if (!C.zf) goto L_120659e6;
  /* 120659df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_120659e6:;
  /* 120659e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120659ea ja 0x120659f7 */
  if ((!C.cf&&!C.zf)) goto L_120659f7;
  /* 120659ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120659ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120659f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120659f5 jbe 0x12065a23 */
  if ((C.cf||C.zf)) goto L_12065a23;
L_120659f7:;
  /* 120659f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120659fa push ecx */
  push32((uint32_t)(ECX));
  /* 120659fb push 0x1208c5a4 */
  push32((uint32_t)(0x1208c5a4u));
  /* 12065a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065a08 call 0x120648d0 */
  push32(0x12065a0du); f_120648d0();
  /* 12065a0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065a10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a13 jne 0x12065a16 */
  if (!C.zf) goto L_12065a16;
  /* 12065a15 int3  */
  x86_unimpl("int3 @ 0x12065a15");
L_12065a16:;
  /* 12065a16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12065a18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12065a1a jne 0x120659f7 */
  if (!C.zf) goto L_120659f7;
  /* 12065a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065a1e jmp 0x12065bec */
  goto L_12065bec;
L_12065a23:;
  /* 12065a23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065a26 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12065a2b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a2e je 0x12065a70 */
  if (C.zf) goto L_12065a70;
  /* 12065a30 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a34 je 0x12065a70 */
  if (C.zf) goto L_12065a70;
  /* 12065a36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065a39 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12065a3f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a42 je 0x12065a70 */
  if (C.zf) goto L_12065a70;
  /* 12065a44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a48 je 0x12065a70 */
  if (C.zf) goto L_12065a70;
L_12065a4a:;
  /* 12065a4a push 0x1208c570 */
  push32((uint32_t)(0x1208c570u));
  /* 12065a4f push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12065a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12065a5c call 0x120648d0 */
  push32(0x12065a61u); f_120648d0();
  /* 12065a61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065a64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a67 jne 0x12065a6a */
  if (!C.zf) goto L_12065a6a;
  /* 12065a69 int3  */
  x86_unimpl("int3 @ 0x12065a69");
L_12065a6a:;
  /* 12065a6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12065a6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12065a6e jne 0x12065a4a */
  if (!C.zf) goto L_12065a4a;
L_12065a70:;
  /* 12065a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065a73 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065a76 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12065a79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12065a7c push ecx */
  push32((uint32_t)(ECX));
  /* 12065a7d call 0x12069660 */
  push32(0x12065a82u); f_12069660();
  /* 12065a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065a85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12065a88 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065a8c jne 0x12065a95 */
  if (!C.zf) goto L_12065a95;
  /* 12065a8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065a90 jmp 0x12065bec */
  goto L_12065bec;
L_12065a95:;
  /* 12065a95 mov edx, dword ptr [0x1208fa90] */
  EDX = (r32((uint32_t)(0x1208fa90)));
  /* 12065a9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065a9e mov dword ptr [0x1208fa90], edx */
  w32((uint32_t)(0x1208fa90), (EDX));
  /* 12065aa4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065aa8 je 0x12065af3 */
  if (C.zf) goto L_12065af3;
  /* 12065aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065aad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12065ab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065ab6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12065abd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065ac0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12065ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065aca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12065ad1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065ad7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12065ada mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065add mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12065ae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065ae7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12065aee jmp 0x12065b93 */
  goto L_12065b93;
L_12065af3:;
  /* 12065af3 mov edx, dword ptr [0x12091600] */
  EDX = (r32((uint32_t)(0x12091600)));
  /* 12065af9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065afc mov dword ptr [0x12091600], edx */
  w32((uint32_t)(0x12091600), (EDX));
  /* 12065b02 mov eax, dword ptr [0x12091608] */
  EAX = (r32((uint32_t)(0x12091608)));
  /* 12065b07 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065b0a mov dword ptr [0x12091608], eax */
  w32((uint32_t)(0x12091608), (EAX));
  /* 12065b0f mov ecx, dword ptr [0x12091608] */
  ECX = (r32((uint32_t)(0x12091608)));
  /* 12065b15 cmp ecx, dword ptr [0x1209160c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1209160c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065b1b jbe 0x12065b29 */
  if ((C.cf||C.zf)) goto L_12065b29;
  /* 12065b1d mov edx, dword ptr [0x12091608] */
  EDX = (r32((uint32_t)(0x12091608)));
  /* 12065b23 mov dword ptr [0x1209160c], edx */
  w32((uint32_t)(0x1209160c), (EDX));
L_12065b29:;
  /* 12065b29 cmp dword ptr [0x12091604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065b30 je 0x12065b3f */
  if (C.zf) goto L_12065b3f;
  /* 12065b32 mov eax, dword ptr [0x12091604] */
  EAX = (r32((uint32_t)(0x12091604)));
  /* 12065b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12065b3d jmp 0x12065b48 */
  goto L_12065b48;
L_12065b3f:;
  /* 12065b3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b42 mov dword ptr [0x120915fc], edx */
  w32((uint32_t)(0x120915fc), (EDX));
L_12065b48:;
  /* 12065b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b4b mov ecx, dword ptr [0x12091604] */
  ECX = (r32((uint32_t)(0x12091604)));
  /* 12065b51 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12065b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b56 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12065b5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065b63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12065b66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065b6c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12065b6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065b75 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12065b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065b7e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12065b81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065b87 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12065b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065b8d mov dword ptr [0x12091604], ecx */
  w32((uint32_t)(0x12091604), (ECX));
L_12065b93:;
  /* 12065b93 push 4 */
  push32((uint32_t)(0x4u));
  /* 12065b95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12065b97 mov dl, byte ptr [0x1208fa98] */
  DL = (r8((uint32_t)(0x1208fa98)));
  /* 12065b9d push edx */
  push32((uint32_t)(EDX));
  /* 12065b9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065ba1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12065ba5 call 0x12069580 */
  push32(0x12065baau); f_12069580();
  /* 12065baa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065bad push 4 */
  push32((uint32_t)(0x4u));
  /* 12065baf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12065bb1 mov cl, byte ptr [0x1208fa98] */
  CL = (r8((uint32_t)(0x1208fa98)));
  /* 12065bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12065bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065bbe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12065bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12065bc3 call 0x12069580 */
  push32(0x12065bc8u); f_12069580();
  /* 12065bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065bcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065bce push edx */
  push32((uint32_t)(EDX));
  /* 12065bcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065bd1 mov al, byte ptr [0x1208fa9a] */
  AL = (r8((uint32_t)(0x1208fa9a)));
  /* 12065bd6 push eax */
  push32((uint32_t)(EAX));
  /* 12065bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065bda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065bdd push ecx */
  push32((uint32_t)(ECX));
  /* 12065bde call 0x12069580 */
  push32(0x12065be3u); f_12069580();
  /* 12065be3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065be6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065be9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12065bec:;
  /* 12065bec pop edi */
  EDI = (pop32());
  /* 12065bed pop esi */
  ESI = (pop32());
  /* 12065bee pop ebx */
  EBX = (pop32());
  /* 12065bef mov esp, ebp */
  ESP = (EBP);
  /* 12065bf1 pop ebp */
  EBP = (pop32());
  /* 12065bf2 ret  */
  ESPCHK(0x120658e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c00 @ 0x12065c00 (27 bytes, 13 insns) */
void f_12065c00(void) {
  FTRACE(0x12065c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12065c01 mov ebp, esp */
  EBP = (ESP);
  /* 12065c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065c0c push eax */
  push32((uint32_t)(EAX));
  /* 12065c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065c10 push ecx */
  push32((uint32_t)(ECX));
  /* 12065c11 call 0x12065c20 */
  push32(0x12065c16u); f_12065c20();
  /* 12065c16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065c19 pop ebp */
  EBP = (pop32());
  /* 12065c1a ret  */
  ESPCHK(0x12065c00u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12065c20 (96 bytes, 37 insns) */
void f_12065c20(void) {
  FTRACE(0x12065c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12065c21 mov ebp, esp */
  EBP = (ESP);
  /* 12065c23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065c26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065c29 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12065c2d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12065c30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12065c33 push ecx */
  push32((uint32_t)(ECX));
  /* 12065c34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065c37 push edx */
  push32((uint32_t)(EDX));
  /* 12065c38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065c3b push eax */
  push32((uint32_t)(EAX));
  /* 12065c3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065c3f push ecx */
  push32((uint32_t)(ECX));
  /* 12065c40 call 0x12065810 */
  push32(0x12065c45u); f_12065810();
  /* 12065c45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065c48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12065c4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065c4f je 0x12065c79 */
  if (C.zf) goto L_12065c79;
  /* 12065c51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065c54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12065c57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12065c5a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065c5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12065c60:;
  /* 12065c60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12065c63 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065c66 jae 0x12065c79 */
  if (!C.cf) goto L_12065c79;
  /* 12065c68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12065c6b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12065c6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12065c71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065c74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12065c77 jmp 0x12065c60 */
  goto L_12065c60;
L_12065c79:;
  /* 12065c79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065c7c mov esp, ebp */
  ESP = (EBP);
  /* 12065c7e pop ebp */
  EBP = (pop32());
  /* 12065c7f ret  */
  ESPCHK(0x12065c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c80 @ 0x12065c80 (27 bytes, 13 insns) */
void f_12065c80(void) {
  FTRACE(0x12065c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12065c81 mov ebp, esp */
  EBP = (ESP);
  /* 12065c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065c89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065c8c push eax */
  push32((uint32_t)(EAX));
  /* 12065c8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065c90 push ecx */
  push32((uint32_t)(ECX));
  /* 12065c91 call 0x12065ca0 */
  push32(0x12065c96u); f_12065ca0();
  /* 12065c96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065c99 pop ebp */
  EBP = (pop32());
  /* 12065c9a ret  */
  ESPCHK(0x12065c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x12065ca0 (64 bytes, 27 insns) */
void f_12065ca0(void) {
  FTRACE(0x12065ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12065ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12065ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12065ca4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12065ca6 call 0x12069210 */
  push32(0x12065cabu); f_12069210();
  /* 12065cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065cae push 1 */
  push32((uint32_t)(0x1u));
  /* 12065cb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12065cb3 push eax */
  push32((uint32_t)(EAX));
  /* 12065cb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12065cb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065cbb push edx */
  push32((uint32_t)(EDX));
  /* 12065cbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065cbf push eax */
  push32((uint32_t)(EAX));
  /* 12065cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12065cc4 call 0x12065ce0 */
  push32(0x12065cc9u); f_12065ce0();
  /* 12065cc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065ccc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12065ccf push 9 */
  push32((uint32_t)(0x9u));
  /* 12065cd1 call 0x120692b0 */
  push32(0x12065cd6u); f_120692b0();
  /* 12065cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12065cdc mov esp, ebp */
  ESP = (EBP);
  /* 12065cde pop ebp */
  EBP = (pop32());
  /* 12065cdf ret  */
  ESPCHK(0x12065ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce0 @ 0x12065ce0 (1297 bytes, 431 insns) */
void f_12065ce0(void) {
  FTRACE(0x12065ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12065ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12065ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12065ce3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 12065ce7 push esi */
  push32((uint32_t)(ESI));
  /* 12065ce8 push edi */
  push32((uint32_t)(EDI));
  /* 12065ce9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12065cf0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065cf4 jne 0x12065d13 */
  if (!C.zf) goto L_12065d13;
  /* 12065cf6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12065cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12065cfa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065cfd push ecx */
  push32((uint32_t)(ECX));
  /* 12065cfe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065d01 push edx */
  push32((uint32_t)(EDX));
  /* 12065d02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065d05 push eax */
  push32((uint32_t)(EAX));
  /* 12065d06 call 0x12065810 */
  push32(0x12065d0bu); f_12065810();
  /* 12065d0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065d0e jmp 0x120661ea */
  goto L_120661ea;
L_12065d13:;
  /* 12065d13 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065d17 je 0x12065d36 */
  if (C.zf) goto L_12065d36;
  /* 12065d19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065d1d jne 0x12065d36 */
  if (!C.zf) goto L_12065d36;
  /* 12065d1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065d22 push ecx */
  push32((uint32_t)(ECX));
  /* 12065d23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065d26 push edx */
  push32((uint32_t)(EDX));
  /* 12065d27 call 0x120662a0 */
  push32(0x12065d2cu); f_120662a0();
  /* 12065d2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065d31 jmp 0x120661ea */
  goto L_120661ea;
L_12065d36:;
  /* 12065d36 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 12065d3b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12065d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065d40 je 0x12065d72 */
  if (C.zf) goto L_12065d72;
L_12065d42:;
  /* 12065d42 call 0x120669b0 */
  push32(0x12065d47u); f_120669b0();
  /* 12065d47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065d49 jne 0x12065d6c */
  if (!C.zf) goto L_12065d6c;
  /* 12065d4b push 0x1208c634 */
  push32((uint32_t)(0x1208c634u));
  /* 12065d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065d52 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12065d57 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12065d5c push 2 */
  push32((uint32_t)(0x2u));
  /* 12065d5e call 0x120648d0 */
  push32(0x12065d63u); f_120648d0();
  /* 12065d63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065d66 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065d69 jne 0x12065d6c */
  if (!C.zf) goto L_12065d6c;
  /* 12065d6b int3  */
  x86_unimpl("int3 @ 0x12065d6b");
L_12065d6c:;
  /* 12065d6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12065d6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12065d70 jne 0x12065d42 */
  if (!C.zf) goto L_12065d42;
L_12065d72:;
  /* 12065d72 mov edx, dword ptr [0x1208fa90] */
  EDX = (r32((uint32_t)(0x1208fa90)));
  /* 12065d78 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12065d7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12065d7e cmp eax, dword ptr [0x1208fa94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1208fa94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065d84 jne 0x12065d87 */
  if (!C.zf) goto L_12065d87;
  /* 12065d86 int3  */
  x86_unimpl("int3 @ 0x12065d86");
L_12065d87:;
  /* 12065d87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12065d8a push ecx */
  push32((uint32_t)(ECX));
  /* 12065d8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065d8e push edx */
  push32((uint32_t)(EDX));
  /* 12065d8f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12065d92 push eax */
  push32((uint32_t)(EAX));
  /* 12065d93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065d96 push ecx */
  push32((uint32_t)(ECX));
  /* 12065d97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065d9a push edx */
  push32((uint32_t)(EDX));
  /* 12065d9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065d9e push eax */
  push32((uint32_t)(EAX));
  /* 12065d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12065da1 call dword ptr [0x1208fca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1208fca0))), 0x12065da7u);
  /* 12065da7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065daa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065dac jne 0x12065e0c */
  if (!C.zf) goto L_12065e0c;
  /* 12065dae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065db2 je 0x12065ddf */
  if (C.zf) goto L_12065ddf;
L_12065db4:;
  /* 12065db4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12065db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12065db8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12065dbb push edx */
  push32((uint32_t)(EDX));
  /* 12065dbc push 0x1208c7b0 */
  push32((uint32_t)(0x1208c7b0u));
  /* 12065dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065dc9 call 0x120648d0 */
  push32(0x12065dceu); f_120648d0();
  /* 12065dce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065dd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065dd4 jne 0x12065dd7 */
  if (!C.zf) goto L_12065dd7;
  /* 12065dd6 int3  */
  x86_unimpl("int3 @ 0x12065dd6");
L_12065dd7:;
  /* 12065dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065ddb jne 0x12065db4 */
  if (!C.zf) goto L_12065db4;
  /* 12065ddd jmp 0x12065e05 */
  goto L_12065e05;
L_12065ddf:;
  /* 12065ddf push 0x1208c78c */
  push32((uint32_t)(0x1208c78cu));
  /* 12065de4 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12065de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065deb push 0 */
  push32((uint32_t)(0x0u));
  /* 12065ded push 0 */
  push32((uint32_t)(0x0u));
  /* 12065def push 0 */
  push32((uint32_t)(0x0u));
  /* 12065df1 call 0x120648d0 */
  push32(0x12065df6u); f_120648d0();
  /* 12065df6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065df9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065dfc jne 0x12065dff */
  if (!C.zf) goto L_12065dff;
  /* 12065dfe int3  */
  x86_unimpl("int3 @ 0x12065dfe");
L_12065dff:;
  /* 12065dff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12065e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12065e03 jne 0x12065ddf */
  if (!C.zf) goto L_12065ddf;
L_12065e05:;
  /* 12065e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065e07 jmp 0x120661ea */
  goto L_120661ea;
L_12065e0c:;
  /* 12065e0c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065e10 jbe 0x12065e3e */
  if ((C.cf||C.zf)) goto L_12065e3e;
L_12065e12:;
  /* 12065e12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065e15 push edx */
  push32((uint32_t)(EDX));
  /* 12065e16 push 0x1208c75c */
  push32((uint32_t)(0x1208c75cu));
  /* 12065e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065e23 call 0x120648d0 */
  push32(0x12065e28u); f_120648d0();
  /* 12065e28 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065e2b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065e2e jne 0x12065e31 */
  if (!C.zf) goto L_12065e31;
  /* 12065e30 int3  */
  x86_unimpl("int3 @ 0x12065e30");
L_12065e31:;
  /* 12065e31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065e35 jne 0x12065e12 */
  if (!C.zf) goto L_12065e12;
  /* 12065e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065e39 jmp 0x120661ea */
  goto L_120661ea;
L_12065e3e:;
  /* 12065e3e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065e42 je 0x12065e86 */
  if (C.zf) goto L_12065e86;
  /* 12065e44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065e47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12065e4d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065e50 je 0x12065e86 */
  if (C.zf) goto L_12065e86;
  /* 12065e52 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065e55 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12065e5b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065e5e je 0x12065e86 */
  if (C.zf) goto L_12065e86;
L_12065e60:;
  /* 12065e60 push 0x1208c570 */
  push32((uint32_t)(0x1208c570u));
  /* 12065e65 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12065e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12065e72 call 0x120648d0 */
  push32(0x12065e77u); f_120648d0();
  /* 12065e77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065e7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065e7d jne 0x12065e80 */
  if (!C.zf) goto L_12065e80;
  /* 12065e7f int3  */
  x86_unimpl("int3 @ 0x12065e7f");
L_12065e80:;
  /* 12065e80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065e84 jne 0x12065e60 */
  if (!C.zf) goto L_12065e60;
L_12065e86:;
  /* 12065e86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065e89 push ecx */
  push32((uint32_t)(ECX));
  /* 12065e8a call 0x12066e10 */
  push32(0x12065e8fu); f_12066e10();
  /* 12065e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12065e94 jne 0x12065eb7 */
  if (!C.zf) goto L_12065eb7;
  /* 12065e96 push 0x1208c738 */
  push32((uint32_t)(0x1208c738u));
  /* 12065e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12065e9d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12065ea2 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12065ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065ea9 call 0x120648d0 */
  push32(0x12065eaeu); f_120648d0();
  /* 12065eae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065eb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065eb4 jne 0x12065eb7 */
  if (!C.zf) goto L_12065eb7;
  /* 12065eb6 int3  */
  x86_unimpl("int3 @ 0x12065eb6");
L_12065eb7:;
  /* 12065eb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12065eb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12065ebb jne 0x12065e86 */
  if (!C.zf) goto L_12065e86;
  /* 12065ebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12065ec0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065ec3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12065ec6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065ec9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065ecd jne 0x12065ed6 */
  if (!C.zf) goto L_12065ed6;
  /* 12065ecf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12065ed6:;
  /* 12065ed6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065eda je 0x12065f1a */
  if (C.zf) goto L_12065f1a;
L_12065edc:;
  /* 12065edc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065edf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065ee6 jne 0x12065ef1 */
  if (!C.zf) goto L_12065ef1;
  /* 12065ee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065eeb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065eef je 0x12065f12 */
  if (C.zf) goto L_12065f12;
L_12065ef1:;
  /* 12065ef1 push 0x1208c6f0 */
  push32((uint32_t)(0x1208c6f0u));
  /* 12065ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12065ef8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12065efd push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12065f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065f04 call 0x120648d0 */
  push32(0x12065f09u); f_120648d0();
  /* 12065f09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065f0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f0f jne 0x12065f12 */
  if (!C.zf) goto L_12065f12;
  /* 12065f11 int3  */
  x86_unimpl("int3 @ 0x12065f11");
L_12065f12:;
  /* 12065f12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12065f14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12065f16 jne 0x12065edc */
  if (!C.zf) goto L_12065edc;
  /* 12065f18 jmp 0x12065f7e */
  goto L_12065f7e;
L_12065f1a:;
  /* 12065f1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065f1d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12065f20 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12065f25 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f28 jne 0x12065f3f */
  if (!C.zf) goto L_12065f3f;
  /* 12065f2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065f2d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12065f33 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f36 jne 0x12065f3f */
  if (!C.zf) goto L_12065f3f;
  /* 12065f38 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12065f3f:;
  /* 12065f3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065f42 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12065f45 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12065f4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12065f4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12065f53 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f55 je 0x12065f78 */
  if (C.zf) goto L_12065f78;
  /* 12065f57 push 0x1208c6b4 */
  push32((uint32_t)(0x1208c6b4u));
  /* 12065f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12065f5e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12065f63 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12065f68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12065f6a call 0x120648d0 */
  push32(0x12065f6fu); f_120648d0();
  /* 12065f6f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065f72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f75 jne 0x12065f78 */
  if (!C.zf) goto L_12065f78;
  /* 12065f77 int3  */
  x86_unimpl("int3 @ 0x12065f77");
L_12065f78:;
  /* 12065f78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12065f7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12065f7c jne 0x12065f3f */
  if (!C.zf) goto L_12065f3f;
L_12065f7e:;
  /* 12065f7e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f82 je 0x12065fa9 */
  if (C.zf) goto L_12065fa9;
  /* 12065f84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065f87 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065f8a push eax */
  push32((uint32_t)(EAX));
  /* 12065f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065f8e push ecx */
  push32((uint32_t)(ECX));
  /* 12065f8f call 0x12069790 */
  push32(0x12065f94u); f_12069790();
  /* 12065f94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065f97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12065f9a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065f9e jne 0x12065fa7 */
  if (!C.zf) goto L_12065fa7;
  /* 12065fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065fa2 jmp 0x120661ea */
  goto L_120661ea;
L_12065fa7:;
  /* 12065fa7 jmp 0x12065fcc */
  goto L_12065fcc;
L_12065fa9:;
  /* 12065fa9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12065fac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065faf push edx */
  push32((uint32_t)(EDX));
  /* 12065fb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12065fb3 push eax */
  push32((uint32_t)(EAX));
  /* 12065fb4 call 0x120696e0 */
  push32(0x12065fb9u); f_120696e0();
  /* 12065fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12065fbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12065fbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065fc3 jne 0x12065fcc */
  if (!C.zf) goto L_12065fcc;
  /* 12065fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12065fc7 jmp 0x120661ea */
  goto L_120661ea;
L_12065fcc:;
  /* 12065fcc mov ecx, dword ptr [0x1208fa90] */
  ECX = (r32((uint32_t)(0x1208fa90)));
  /* 12065fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065fd5 mov dword ptr [0x1208fa90], ecx */
  w32((uint32_t)(0x1208fa90), (ECX));
  /* 12065fdb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12065fdf jne 0x12066037 */
  if (!C.zf) goto L_12066037;
  /* 12065fe1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12065fe4 mov eax, dword ptr [0x12091600] */
  EAX = (r32((uint32_t)(0x12091600)));
  /* 12065fe9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12065fec mov dword ptr [0x12091600], eax */
  w32((uint32_t)(0x12091600), (EAX));
  /* 12065ff1 mov ecx, dword ptr [0x12091600] */
  ECX = (r32((uint32_t)(0x12091600)));
  /* 12065ff7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12065ffa mov dword ptr [0x12091600], ecx */
  w32((uint32_t)(0x12091600), (ECX));
  /* 12066000 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066003 mov eax, dword ptr [0x12091608] */
  EAX = (r32((uint32_t)(0x12091608)));
  /* 12066008 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206600b mov dword ptr [0x12091608], eax */
  w32((uint32_t)(0x12091608), (EAX));
  /* 12066010 mov ecx, dword ptr [0x12091608] */
  ECX = (r32((uint32_t)(0x12091608)));
  /* 12066016 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066019 mov dword ptr [0x12091608], ecx */
  w32((uint32_t)(0x12091608), (ECX));
  /* 1206601f mov edx, dword ptr [0x12091608] */
  EDX = (r32((uint32_t)(0x12091608)));
  /* 12066025 cmp edx, dword ptr [0x1209160c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1209160c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206602b jbe 0x12066037 */
  if ((C.cf||C.zf)) goto L_12066037;
  /* 1206602d mov eax, dword ptr [0x12091608] */
  EAX = (r32((uint32_t)(0x12091608)));
  /* 12066032 mov dword ptr [0x1209160c], eax */
  w32((uint32_t)(0x1209160c), (EAX));
L_12066037:;
  /* 12066037 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206603a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206603d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12066040 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066043 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066046 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066049 jbe 0x1206606f */
  if ((C.cf||C.zf)) goto L_1206606f;
  /* 1206604b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206604e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066051 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066054 push edx */
  push32((uint32_t)(EDX));
  /* 12066055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066057 mov al, byte ptr [0x1208fa9a] */
  AL = (r8((uint32_t)(0x1208fa9a)));
  /* 1206605c push eax */
  push32((uint32_t)(EAX));
  /* 1206605d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066060 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066063 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066066 push edx */
  push32((uint32_t)(EDX));
  /* 12066067 call 0x12069580 */
  push32(0x1206606cu); f_12069580();
  /* 1206606c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206606f:;
  /* 1206606f push 4 */
  push32((uint32_t)(0x4u));
  /* 12066071 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066073 mov al, byte ptr [0x1208fa98] */
  AL = (r8((uint32_t)(0x1208fa98)));
  /* 12066078 push eax */
  push32((uint32_t)(EAX));
  /* 12066079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206607c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206607f push ecx */
  push32((uint32_t)(ECX));
  /* 12066080 call 0x12069580 */
  push32(0x12066085u); f_12069580();
  /* 12066085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066088 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206608c jne 0x120660a9 */
  if (!C.zf) goto L_120660a9;
  /* 1206608e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066091 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12066094 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12066097 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206609a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1206609d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 120660a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120660a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120660a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_120660a9:;
  /* 120660a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120660ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120660af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_120660b2:;
  /* 120660b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120660b6 jne 0x120660e7 */
  if (!C.zf) goto L_120660e7;
  /* 120660b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120660bc jne 0x120660c6 */
  if (!C.zf) goto L_120660c6;
  /* 120660be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120660c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120660c4 je 0x120660e7 */
  if (C.zf) goto L_120660e7;
L_120660c6:;
  /* 120660c6 push 0x1208c680 */
  push32((uint32_t)(0x1208c680u));
  /* 120660cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120660cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 120660d2 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 120660d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120660d9 call 0x120648d0 */
  push32(0x120660deu); f_120648d0();
  /* 120660de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120660e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120660e4 jne 0x120660e7 */
  if (!C.zf) goto L_120660e7;
  /* 120660e6 int3  */
  x86_unimpl("int3 @ 0x120660e6");
L_120660e7:;
  /* 120660e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120660e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120660eb jne 0x120660b2 */
  if (!C.zf) goto L_120660b2;
  /* 120660ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120660f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120660f3 je 0x120660fb */
  if (C.zf) goto L_120660fb;
  /* 120660f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120660f9 je 0x12066103 */
  if (C.zf) goto L_12066103;
L_120660fb:;
  /* 120660fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120660fe jmp 0x120661ea */
  goto L_120661ea;
L_12066103:;
  /* 12066103 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066106 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066109 je 0x1206611b */
  if (C.zf) goto L_1206611b;
  /* 1206610b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206610e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12066110 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066113 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12066116 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12066119 jmp 0x12066157 */
  goto L_12066157;
L_1206611b:;
  /* 1206611b mov eax, dword ptr [0x120915fc] */
  EAX = (r32((uint32_t)(0x120915fc)));
  /* 12066120 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066123 je 0x12066146 */
  if (C.zf) goto L_12066146;
  /* 12066125 push 0x1208c664 */
  push32((uint32_t)(0x1208c664u));
  /* 1206612a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206612c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12066131 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12066136 push 2 */
  push32((uint32_t)(0x2u));
  /* 12066138 call 0x120648d0 */
  push32(0x1206613du); f_120648d0();
  /* 1206613d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066143 jne 0x12066146 */
  if (!C.zf) goto L_12066146;
  /* 12066145 int3  */
  x86_unimpl("int3 @ 0x12066145");
L_12066146:;
  /* 12066146 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066148 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206614a jne 0x1206611b */
  if (!C.zf) goto L_1206611b;
  /* 1206614c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206614f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12066152 mov dword ptr [0x120915fc], eax */
  w32((uint32_t)(0x120915fc), (EAX));
L_12066157:;
  /* 12066157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206615a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206615e je 0x1206616f */
  if (C.zf) goto L_1206616f;
  /* 12066160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066163 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12066166 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12066169 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206616b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1206616d jmp 0x120661aa */
  goto L_120661aa;
L_1206616f:;
  /* 1206616f mov eax, dword ptr [0x12091604] */
  EAX = (r32((uint32_t)(0x12091604)));
  /* 12066174 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066177 je 0x1206619a */
  if (C.zf) goto L_1206619a;
  /* 12066179 push 0x1208c648 */
  push32((uint32_t)(0x1208c648u));
  /* 1206617e push 0 */
  push32((uint32_t)(0x0u));
  /* 12066180 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12066185 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 1206618a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206618c call 0x120648d0 */
  push32(0x12066191u); f_120648d0();
  /* 12066191 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066197 jne 0x1206619a */
  if (!C.zf) goto L_1206619a;
  /* 12066199 int3  */
  x86_unimpl("int3 @ 0x12066199");
L_1206619a:;
  /* 1206619a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206619c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206619e jne 0x1206616f */
  if (!C.zf) goto L_1206616f;
  /* 120661a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120661a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120661a5 mov dword ptr [0x12091604], eax */
  w32((uint32_t)(0x12091604), (EAX));
L_120661aa:;
  /* 120661aa cmp dword ptr [0x12091604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120661b1 je 0x120661c1 */
  if (C.zf) goto L_120661c1;
  /* 120661b3 mov ecx, dword ptr [0x12091604] */
  ECX = (r32((uint32_t)(0x12091604)));
  /* 120661b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120661bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120661bf jmp 0x120661c9 */
  goto L_120661c9;
L_120661c1:;
  /* 120661c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120661c4 mov dword ptr [0x120915fc], eax */
  w32((uint32_t)(0x120915fc), (EAX));
L_120661c9:;
  /* 120661c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120661cc mov edx, dword ptr [0x12091604] */
  EDX = (r32((uint32_t)(0x12091604)));
  /* 120661d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120661d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120661d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120661de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120661e1 mov dword ptr [0x12091604], ecx */
  w32((uint32_t)(0x12091604), (ECX));
  /* 120661e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120661ea:;
  /* 120661ea pop edi */
  EDI = (pop32());
  /* 120661eb pop esi */
  ESI = (pop32());
  /* 120661ec pop ebx */
  EBX = (pop32());
  /* 120661ed mov esp, ebp */
  ESP = (EBP);
  /* 120661ef pop ebp */
  EBP = (pop32());
  /* 120661f0 ret  */
  ESPCHK(0x12065ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006200 @ 0x12066200 (27 bytes, 13 insns) */
void f_12066200(void) {
  FTRACE(0x12066200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066200 push ebp */
  push32((uint32_t)(EBP));
  /* 12066201 mov ebp, esp */
  EBP = (ESP);
  /* 12066203 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066205 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066207 push 1 */
  push32((uint32_t)(0x1u));
  /* 12066209 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206620c push eax */
  push32((uint32_t)(EAX));
  /* 1206620d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066210 push ecx */
  push32((uint32_t)(ECX));
  /* 12066211 call 0x12066220 */
  push32(0x12066216u); f_12066220();
  /* 12066216 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066219 pop ebp */
  EBP = (pop32());
  /* 1206621a ret  */
  ESPCHK(0x12066200u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12066220 (64 bytes, 27 insns) */
void f_12066220(void) {
  FTRACE(0x12066220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066220 push ebp */
  push32((uint32_t)(EBP));
  /* 12066221 mov ebp, esp */
  EBP = (ESP);
  /* 12066223 push ecx */
  push32((uint32_t)(ECX));
  /* 12066224 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066226 call 0x12069210 */
  push32(0x1206622bu); f_12069210();
  /* 1206622b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206622e push 0 */
  push32((uint32_t)(0x0u));
  /* 12066230 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12066233 push eax */
  push32((uint32_t)(EAX));
  /* 12066234 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12066237 push ecx */
  push32((uint32_t)(ECX));
  /* 12066238 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206623b push edx */
  push32((uint32_t)(EDX));
  /* 1206623c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206623f push eax */
  push32((uint32_t)(EAX));
  /* 12066240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066243 push ecx */
  push32((uint32_t)(ECX));
  /* 12066244 call 0x12065ce0 */
  push32(0x12066249u); f_12065ce0();
  /* 12066249 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206624c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206624f push 9 */
  push32((uint32_t)(0x9u));
  /* 12066251 call 0x120692b0 */
  push32(0x12066256u); f_120692b0();
  /* 12066256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206625c mov esp, ebp */
  ESP = (EBP);
  /* 1206625e pop ebp */
  EBP = (pop32());
  /* 1206625f ret  */
  ESPCHK(0x12066220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x12066260 (19 bytes, 9 insns) */
void f_12066260(void) {
  FTRACE(0x12066260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066260 push ebp */
  push32((uint32_t)(EBP));
  /* 12066261 mov ebp, esp */
  EBP = (ESP);
  /* 12066263 push 1 */
  push32((uint32_t)(0x1u));
  /* 12066265 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066268 push eax */
  push32((uint32_t)(EAX));
  /* 12066269 call 0x120662a0 */
  push32(0x1206626eu); f_120662a0();
  /* 1206626e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066271 pop ebp */
  EBP = (pop32());
  /* 12066272 ret  */
  ESPCHK(0x12066260u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x12066280 (19 bytes, 9 insns) */
void f_12066280(void) {
  FTRACE(0x12066280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066280 push ebp */
  push32((uint32_t)(EBP));
  /* 12066281 mov ebp, esp */
  EBP = (ESP);
  /* 12066283 push 1 */
  push32((uint32_t)(0x1u));
  /* 12066285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066288 push eax */
  push32((uint32_t)(EAX));
  /* 12066289 call 0x120662d0 */
  push32(0x1206628eu); f_120662d0();
  /* 1206628e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066291 pop ebp */
  EBP = (pop32());
  /* 12066292 ret  */
  ESPCHK(0x12066280u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x120662a0 (41 bytes, 16 insns) */
void f_120662a0(void) {
  FTRACE(0x120662a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120662a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120662a1 mov ebp, esp */
  EBP = (ESP);
  /* 120662a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120662a5 call 0x12069210 */
  push32(0x120662aau); f_12069210();
  /* 120662aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120662ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120662b0 push eax */
  push32((uint32_t)(EAX));
  /* 120662b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120662b4 push ecx */
  push32((uint32_t)(ECX));
  /* 120662b5 call 0x120662d0 */
  push32(0x120662bau); f_120662d0();
  /* 120662ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120662bd push 9 */
  push32((uint32_t)(0x9u));
  /* 120662bf call 0x120692b0 */
  push32(0x120662c4u); f_120692b0();
  /* 120662c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120662c7 pop ebp */
  EBP = (pop32());
  /* 120662c8 ret  */
  ESPCHK(0x120662a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x120662d0 (1004 bytes, 342 insns) */
void f_120662d0(void) {
  FTRACE(0x120662d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120662d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120662d1 mov ebp, esp */
  EBP = (ESP);
  /* 120662d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120662d4 push ebx */
  push32((uint32_t)(EBX));
  /* 120662d5 push esi */
  push32((uint32_t)(ESI));
  /* 120662d6 push edi */
  push32((uint32_t)(EDI));
  /* 120662d7 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 120662dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120662df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120662e1 je 0x12066313 */
  if (C.zf) goto L_12066313;
L_120662e3:;
  /* 120662e3 call 0x120669b0 */
  push32(0x120662e8u); f_120669b0();
  /* 120662e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120662ea jne 0x1206630d */
  if (!C.zf) goto L_1206630d;
  /* 120662ec push 0x1208c634 */
  push32((uint32_t)(0x1208c634u));
  /* 120662f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120662f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 120662f8 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 120662fd push 2 */
  push32((uint32_t)(0x2u));
  /* 120662ff call 0x120648d0 */
  push32(0x12066304u); f_120648d0();
  /* 12066304 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066307 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206630a jne 0x1206630d */
  if (!C.zf) goto L_1206630d;
  /* 1206630c int3  */
  x86_unimpl("int3 @ 0x1206630c");
L_1206630d:;
  /* 1206630d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206630f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066311 jne 0x120662e3 */
  if (!C.zf) goto L_120662e3;
L_12066313:;
  /* 12066313 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066317 jne 0x1206631e */
  if (!C.zf) goto L_1206631e;
  /* 12066319 jmp 0x120666b5 */
  goto L_120666b5;
L_1206631e:;
  /* 1206631e push 0 */
  push32((uint32_t)(0x0u));
  /* 12066320 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066322 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066324 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066327 push edx */
  push32((uint32_t)(EDX));
  /* 12066328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206632a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206632d push eax */
  push32((uint32_t)(EAX));
  /* 1206632e push 3 */
  push32((uint32_t)(0x3u));
  /* 12066330 call dword ptr [0x1208fca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1208fca0))), 0x12066336u);
  /* 12066336 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206633b jne 0x12066368 */
  if (!C.zf) goto L_12066368;
L_1206633d:;
  /* 1206633d push 0x1208c8f8 */
  push32((uint32_t)(0x1208c8f8u));
  /* 12066342 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206634b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206634d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206634f call 0x120648d0 */
  push32(0x12066354u); f_120648d0();
  /* 12066354 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066357 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206635a jne 0x1206635d */
  if (!C.zf) goto L_1206635d;
  /* 1206635c int3  */
  x86_unimpl("int3 @ 0x1206635c");
L_1206635d:;
  /* 1206635d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206635f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066361 jne 0x1206633d */
  if (!C.zf) goto L_1206633d;
  /* 12066363 jmp 0x120666b5 */
  goto L_120666b5;
L_12066368:;
  /* 12066368 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206636b push edx */
  push32((uint32_t)(EDX));
  /* 1206636c call 0x12066e10 */
  push32(0x12066371u); f_12066e10();
  /* 12066371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066374 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066376 jne 0x12066399 */
  if (!C.zf) goto L_12066399;
  /* 12066378 push 0x1208c738 */
  push32((uint32_t)(0x1208c738u));
  /* 1206637d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206637f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12066384 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12066389 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206638b call 0x120648d0 */
  push32(0x12066390u); f_120648d0();
  /* 12066390 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066393 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066396 jne 0x12066399 */
  if (!C.zf) goto L_12066399;
  /* 12066398 int3  */
  x86_unimpl("int3 @ 0x12066398");
L_12066399:;
  /* 12066399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206639b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206639d jne 0x12066368 */
  if (!C.zf) goto L_12066368;
  /* 1206639f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120663a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120663a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120663a8:;
  /* 120663a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120663ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120663ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120663b3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120663b6 je 0x120663fb */
  if (C.zf) goto L_120663fb;
  /* 120663b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120663bb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120663bf je 0x120663fb */
  if (C.zf) goto L_120663fb;
  /* 120663c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120663c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120663c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120663cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120663cf je 0x120663fb */
  if (C.zf) goto L_120663fb;
  /* 120663d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120663d4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120663d8 je 0x120663fb */
  if (C.zf) goto L_120663fb;
  /* 120663da push 0x1208c8d0 */
  push32((uint32_t)(0x1208c8d0u));
  /* 120663df push 0 */
  push32((uint32_t)(0x0u));
  /* 120663e1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 120663e6 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 120663eb push 2 */
  push32((uint32_t)(0x2u));
  /* 120663ed call 0x120648d0 */
  push32(0x120663f2u); f_120648d0();
  /* 120663f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120663f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120663f8 jne 0x120663fb */
  if (!C.zf) goto L_120663fb;
  /* 120663fa int3  */
  x86_unimpl("int3 @ 0x120663fa");
L_120663fb:;
  /* 120663fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120663fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120663ff jne 0x120663a8 */
  if (!C.zf) goto L_120663a8;
  /* 12066401 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 12066406 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12066409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206640b jne 0x120664d6 */
  if (!C.zf) goto L_120664d6;
  /* 12066411 push 4 */
  push32((uint32_t)(0x4u));
  /* 12066413 mov cl, byte ptr [0x1208fa98] */
  CL = (r8((uint32_t)(0x1208fa98)));
  /* 12066419 push ecx */
  push32((uint32_t)(ECX));
  /* 1206641a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206641d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066420 push edx */
  push32((uint32_t)(EDX));
  /* 12066421 call 0x12066920 */
  push32(0x12066426u); f_12066920();
  /* 12066426 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206642b jne 0x12066470 */
  if (!C.zf) goto L_12066470;
L_1206642d:;
  /* 1206642d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066430 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066433 push eax */
  push32((uint32_t)(EAX));
  /* 12066434 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066437 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1206643a push edx */
  push32((uint32_t)(EDX));
  /* 1206643b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206643e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12066441 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12066447 mov edx, dword ptr [ecx*4 + 0x1208fa9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa9c)));
  /* 1206644e push edx */
  push32((uint32_t)(EDX));
  /* 1206644f push 0x1208c8a4 */
  push32((uint32_t)(0x1208c8a4u));
  /* 12066454 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206645a push 1 */
  push32((uint32_t)(0x1u));
  /* 1206645c call 0x120648d0 */
  push32(0x12066461u); f_120648d0();
  /* 12066461 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066464 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066467 jne 0x1206646a */
  if (!C.zf) goto L_1206646a;
  /* 12066469 int3  */
  x86_unimpl("int3 @ 0x12066469");
L_1206646a:;
  /* 1206646a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206646c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206646e jne 0x1206642d */
  if (!C.zf) goto L_1206642d;
L_12066470:;
  /* 12066470 push 4 */
  push32((uint32_t)(0x4u));
  /* 12066472 mov cl, byte ptr [0x1208fa98] */
  CL = (r8((uint32_t)(0x1208fa98)));
  /* 12066478 push ecx */
  push32((uint32_t)(ECX));
  /* 12066479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206647c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206647f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066482 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12066486 push edx */
  push32((uint32_t)(EDX));
  /* 12066487 call 0x12066920 */
  push32(0x1206648cu); f_12066920();
  /* 1206648c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206648f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066491 jne 0x120664d6 */
  if (!C.zf) goto L_120664d6;
L_12066493:;
  /* 12066493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066496 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066499 push eax */
  push32((uint32_t)(EAX));
  /* 1206649a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206649d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120664a0 push edx */
  push32((uint32_t)(EDX));
  /* 120664a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120664a4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120664a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120664ad mov edx, dword ptr [ecx*4 + 0x1208fa9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa9c)));
  /* 120664b4 push edx */
  push32((uint32_t)(EDX));
  /* 120664b5 push 0x1208c878 */
  push32((uint32_t)(0x1208c878u));
  /* 120664ba push 0 */
  push32((uint32_t)(0x0u));
  /* 120664bc push 0 */
  push32((uint32_t)(0x0u));
  /* 120664be push 0 */
  push32((uint32_t)(0x0u));
  /* 120664c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120664c2 call 0x120648d0 */
  push32(0x120664c7u); f_120648d0();
  /* 120664c7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120664ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120664cd jne 0x120664d0 */
  if (!C.zf) goto L_120664d0;
  /* 120664cf int3  */
  x86_unimpl("int3 @ 0x120664cf");
L_120664d0:;
  /* 120664d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120664d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120664d4 jne 0x12066493 */
  if (!C.zf) goto L_12066493;
L_120664d6:;
  /* 120664d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120664d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120664dd jne 0x1206654b */
  if (!C.zf) goto L_1206654b;
L_120664df:;
  /* 120664df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120664e2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120664e9 jne 0x120664f4 */
  if (!C.zf) goto L_120664f4;
  /* 120664eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120664ee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120664f2 je 0x12066515 */
  if (C.zf) goto L_12066515;
L_120664f4:;
  /* 120664f4 push 0x1208c838 */
  push32((uint32_t)(0x1208c838u));
  /* 120664f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120664fb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12066500 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12066505 push 2 */
  push32((uint32_t)(0x2u));
  /* 12066507 call 0x120648d0 */
  push32(0x1206650cu); f_120648d0();
  /* 1206650c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206650f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066512 jne 0x12066515 */
  if (!C.zf) goto L_12066515;
  /* 12066514 int3  */
  x86_unimpl("int3 @ 0x12066514");
L_12066515:;
  /* 12066515 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066517 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066519 jne 0x120664df */
  if (!C.zf) goto L_120664df;
  /* 1206651b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206651e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12066521 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066524 push eax */
  push32((uint32_t)(EAX));
  /* 12066525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066527 mov cl, byte ptr [0x1208fa99] */
  CL = (r8((uint32_t)(0x1208fa99)));
  /* 1206652d push ecx */
  push32((uint32_t)(ECX));
  /* 1206652e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066531 push edx */
  push32((uint32_t)(EDX));
  /* 12066532 call 0x12069580 */
  push32(0x12066537u); f_12069580();
  /* 12066537 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206653a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206653d push eax */
  push32((uint32_t)(EAX));
  /* 1206653e call 0x12069980 */
  push32(0x12066543u); f_12069980();
  /* 12066543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066546 jmp 0x120666b5 */
  goto L_120666b5;
L_1206654b:;
  /* 1206654b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206654e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066552 jne 0x12066561 */
  if (!C.zf) goto L_12066561;
  /* 12066554 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066558 jne 0x12066561 */
  if (!C.zf) goto L_12066561;
  /* 1206655a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12066561:;
  /* 12066561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066564 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12066567 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206656a je 0x1206658d */
  if (C.zf) goto L_1206658d;
  /* 1206656c push 0x1208c818 */
  push32((uint32_t)(0x1208c818u));
  /* 12066571 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066573 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12066578 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 1206657d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206657f call 0x120648d0 */
  push32(0x12066584u); f_120648d0();
  /* 12066584 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206658a jne 0x1206658d */
  if (!C.zf) goto L_1206658d;
  /* 1206658c int3  */
  x86_unimpl("int3 @ 0x1206658c");
L_1206658d:;
  /* 1206658d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206658f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066591 jne 0x12066561 */
  if (!C.zf) goto L_12066561;
  /* 12066593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066596 mov eax, dword ptr [0x12091608] */
  EAX = (r32((uint32_t)(0x12091608)));
  /* 1206659b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206659e mov dword ptr [0x12091608], eax */
  w32((uint32_t)(0x12091608), (EAX));
  /* 120665a3 mov ecx, dword ptr [0x1208fa8c] */
  ECX = (r32((uint32_t)(0x1208fa8c)));
  /* 120665a9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120665ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120665ae jne 0x1206668c */
  if (!C.zf) goto L_1206668c;
  /* 120665b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120665b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120665ba je 0x120665cc */
  if (C.zf) goto L_120665cc;
  /* 120665bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120665bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120665c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120665c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120665c7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120665ca jmp 0x1206660a */
  goto L_1206660a;
L_120665cc:;
  /* 120665cc mov ecx, dword ptr [0x120915fc] */
  ECX = (r32((uint32_t)(0x120915fc)));
  /* 120665d2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120665d5 je 0x120665f8 */
  if (C.zf) goto L_120665f8;
  /* 120665d7 push 0x1208c800 */
  push32((uint32_t)(0x1208c800u));
  /* 120665dc push 0 */
  push32((uint32_t)(0x0u));
  /* 120665de push 0x42a */
  push32((uint32_t)(0x42au));
  /* 120665e3 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 120665e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120665ea call 0x120648d0 */
  push32(0x120665efu); f_120648d0();
  /* 120665ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120665f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120665f5 jne 0x120665f8 */
  if (!C.zf) goto L_120665f8;
  /* 120665f7 int3  */
  x86_unimpl("int3 @ 0x120665f7");
L_120665f8:;
  /* 120665f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120665fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120665fc jne 0x120665cc */
  if (!C.zf) goto L_120665cc;
  /* 120665fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066601 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12066604 mov dword ptr [0x120915fc], ecx */
  w32((uint32_t)(0x120915fc), (ECX));
L_1206660a:;
  /* 1206660a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206660d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066611 je 0x12066622 */
  if (C.zf) goto L_12066622;
  /* 12066613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066616 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12066619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206661c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206661e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12066620 jmp 0x1206665f */
  goto L_1206665f;
L_12066622:;
  /* 12066622 mov ecx, dword ptr [0x12091604] */
  ECX = (r32((uint32_t)(0x12091604)));
  /* 12066628 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206662b je 0x1206664e */
  if (C.zf) goto L_1206664e;
  /* 1206662d push 0x1208c7e8 */
  push32((uint32_t)(0x1208c7e8u));
  /* 12066632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066634 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12066639 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 1206663e push 2 */
  push32((uint32_t)(0x2u));
  /* 12066640 call 0x120648d0 */
  push32(0x12066645u); f_120648d0();
  /* 12066645 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066648 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206664b jne 0x1206664e */
  if (!C.zf) goto L_1206664e;
  /* 1206664d int3  */
  x86_unimpl("int3 @ 0x1206664d");
L_1206664e:;
  /* 1206664e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12066650 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12066652 jne 0x12066622 */
  if (!C.zf) goto L_12066622;
  /* 12066654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066657 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12066659 mov dword ptr [0x12091604], ecx */
  w32((uint32_t)(0x12091604), (ECX));
L_1206665f:;
  /* 1206665f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066662 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12066665 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066668 push eax */
  push32((uint32_t)(EAX));
  /* 12066669 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206666b mov cl, byte ptr [0x1208fa99] */
  CL = (r8((uint32_t)(0x1208fa99)));
  /* 12066671 push ecx */
  push32((uint32_t)(ECX));
  /* 12066672 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066675 push edx */
  push32((uint32_t)(EDX));
  /* 12066676 call 0x12069580 */
  push32(0x1206667bu); f_12069580();
  /* 1206667b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206667e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066681 push eax */
  push32((uint32_t)(EAX));
  /* 12066682 call 0x12069980 */
  push32(0x12066687u); f_12069980();
  /* 12066687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206668a jmp 0x120666b5 */
  goto L_120666b5;
L_1206668c:;
  /* 1206668c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206668f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12066696 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066699 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206669c push eax */
  push32((uint32_t)(EAX));
  /* 1206669d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206669f mov cl, byte ptr [0x1208fa99] */
  CL = (r8((uint32_t)(0x1208fa99)));
  /* 120666a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120666a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120666a9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120666ac push edx */
  push32((uint32_t)(EDX));
  /* 120666ad call 0x12069580 */
  push32(0x120666b2u); f_12069580();
  /* 120666b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120666b5:;
  /* 120666b5 pop edi */
  EDI = (pop32());
  /* 120666b6 pop esi */
  ESI = (pop32());
  /* 120666b7 pop ebx */
  EBX = (pop32());
  /* 120666b8 mov esp, ebp */
  ESP = (EBP);
  /* 120666ba pop ebp */
  EBP = (pop32());
  /* 120666bb ret  */
  ESPCHK(0x120662d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x120666c0 (19 bytes, 9 insns) */
void f_120666c0(void) {
  FTRACE(0x120666c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120666c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120666c1 mov ebp, esp */
  EBP = (ESP);
  /* 120666c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120666c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120666c8 push eax */
  push32((uint32_t)(EAX));
  /* 120666c9 call 0x120666e0 */
  push32(0x120666ceu); f_120666e0();
  /* 120666ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120666d1 pop ebp */
  EBP = (pop32());
  /* 120666d2 ret  */
  ESPCHK(0x120666c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x120666e0 (342 bytes, 119 insns) */
void f_120666e0(void) {
  FTRACE(0x120666e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120666e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120666e1 mov ebp, esp */
  EBP = (ESP);
  /* 120666e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120666e6 push ebx */
  push32((uint32_t)(EBX));
  /* 120666e7 push esi */
  push32((uint32_t)(ESI));
  /* 120666e8 push edi */
  push32((uint32_t)(EDI));
  /* 120666e9 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 120666ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120666f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120666f3 je 0x12066725 */
  if (C.zf) goto L_12066725;
L_120666f5:;
  /* 120666f5 call 0x120669b0 */
  push32(0x120666fau); f_120669b0();
  /* 120666fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120666fc jne 0x1206671f */
  if (!C.zf) goto L_1206671f;
  /* 120666fe push 0x1208c634 */
  push32((uint32_t)(0x1208c634u));
  /* 12066703 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066705 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1206670a push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 1206670f push 2 */
  push32((uint32_t)(0x2u));
  /* 12066711 call 0x120648d0 */
  push32(0x12066716u); f_120648d0();
  /* 12066716 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066719 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206671c jne 0x1206671f */
  if (!C.zf) goto L_1206671f;
  /* 1206671e int3  */
  x86_unimpl("int3 @ 0x1206671e");
L_1206671f:;
  /* 1206671f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066723 jne 0x120666f5 */
  if (!C.zf) goto L_120666f5;
L_12066725:;
  /* 12066725 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066727 call 0x12069210 */
  push32(0x1206672cu); f_12069210();
  /* 1206672c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206672f:;
  /* 1206672f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066732 push edx */
  push32((uint32_t)(EDX));
  /* 12066733 call 0x12066e10 */
  push32(0x12066738u); f_12066e10();
  /* 12066738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206673b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206673d jne 0x12066760 */
  if (!C.zf) goto L_12066760;
  /* 1206673f push 0x1208c738 */
  push32((uint32_t)(0x1208c738u));
  /* 12066744 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066746 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1206674b push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12066750 push 2 */
  push32((uint32_t)(0x2u));
  /* 12066752 call 0x120648d0 */
  push32(0x12066757u); f_120648d0();
  /* 12066757 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206675a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206675d jne 0x12066760 */
  if (!C.zf) goto L_12066760;
  /* 1206675f int3  */
  x86_unimpl("int3 @ 0x1206675f");
L_12066760:;
  /* 12066760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066764 jne 0x1206672f */
  if (!C.zf) goto L_1206672f;
  /* 12066766 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066769 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206676c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1206676f:;
  /* 1206676f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066772 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12066775 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206677a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206677d je 0x120667c2 */
  if (C.zf) goto L_120667c2;
  /* 1206677f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066782 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066786 je 0x120667c2 */
  if (C.zf) goto L_120667c2;
  /* 12066788 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206678b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1206678e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12066793 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066796 je 0x120667c2 */
  if (C.zf) goto L_120667c2;
  /* 12066798 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206679b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206679f je 0x120667c2 */
  if (C.zf) goto L_120667c2;
  /* 120667a1 push 0x1208c8d0 */
  push32((uint32_t)(0x1208c8d0u));
  /* 120667a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120667a8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 120667ad push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 120667b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120667b4 call 0x120648d0 */
  push32(0x120667b9u); f_120648d0();
  /* 120667b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120667bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120667bf jne 0x120667c2 */
  if (!C.zf) goto L_120667c2;
  /* 120667c1 int3  */
  x86_unimpl("int3 @ 0x120667c1");
L_120667c2:;
  /* 120667c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120667c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120667c6 jne 0x1206676f */
  if (!C.zf) goto L_1206676f;
  /* 120667c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120667cb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120667cf jne 0x120667de */
  if (!C.zf) goto L_120667de;
  /* 120667d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120667d5 jne 0x120667de */
  if (!C.zf) goto L_120667de;
  /* 120667d7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_120667de:;
  /* 120667de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120667e1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120667e5 je 0x12066819 */
  if (C.zf) goto L_12066819;
L_120667e7:;
  /* 120667e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120667ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120667ed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120667f0 je 0x12066813 */
  if (C.zf) goto L_12066813;
  /* 120667f2 push 0x1208c818 */
  push32((uint32_t)(0x1208c818u));
  /* 120667f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120667f9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 120667fe push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 12066803 push 2 */
  push32((uint32_t)(0x2u));
  /* 12066805 call 0x120648d0 */
  push32(0x1206680au); f_120648d0();
  /* 1206680a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206680d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066810 jne 0x12066813 */
  if (!C.zf) goto L_12066813;
  /* 12066812 int3  */
  x86_unimpl("int3 @ 0x12066812");
L_12066813:;
  /* 12066813 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066815 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066817 jne 0x120667e7 */
  if (!C.zf) goto L_120667e7;
L_12066819:;
  /* 12066819 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206681c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206681f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12066822 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066824 call 0x120692b0 */
  push32(0x12066829u); f_120692b0();
  /* 12066829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206682c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206682f pop edi */
  EDI = (pop32());
  /* 12066830 pop esi */
  ESI = (pop32());
  /* 12066831 pop ebx */
  EBX = (pop32());
  /* 12066832 mov esp, ebp */
  ESP = (EBP);
  /* 12066834 pop ebp */
  EBP = (pop32());
  /* 12066835 ret  */
  ESPCHK(0x120666e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x12066840 (28 bytes, 11 insns) */
void f_12066840(void) {
  FTRACE(0x12066840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066840 push ebp */
  push32((uint32_t)(EBP));
  /* 12066841 mov ebp, esp */
  EBP = (ESP);
  /* 12066843 push ecx */
  push32((uint32_t)(ECX));
  /* 12066844 mov eax, dword ptr [0x1208fa94] */
  EAX = (r32((uint32_t)(0x1208fa94)));
  /* 12066849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206684c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206684f mov dword ptr [0x1208fa94], ecx */
  w32((uint32_t)(0x1208fa94), (ECX));
  /* 12066855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066858 mov esp, ebp */
  ESP = (EBP);
  /* 1206685a pop ebp */
  EBP = (pop32());
  /* 1206685b ret  */
  ESPCHK(0x12066840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x12066860 (157 bytes, 59 insns) */
void f_12066860(void) {
  FTRACE(0x12066860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066860 push ebp */
  push32((uint32_t)(EBP));
  /* 12066861 mov ebp, esp */
  EBP = (ESP);
  /* 12066863 push ecx */
  push32((uint32_t)(ECX));
  /* 12066864 push ebx */
  push32((uint32_t)(EBX));
  /* 12066865 push esi */
  push32((uint32_t)(ESI));
  /* 12066866 push edi */
  push32((uint32_t)(EDI));
  /* 12066867 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066869 call 0x12069210 */
  push32(0x1206686eu); f_12069210();
  /* 1206686e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066874 push eax */
  push32((uint32_t)(EAX));
  /* 12066875 call 0x12066e10 */
  push32(0x1206687au); f_12066e10();
  /* 1206687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206687d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206687f je 0x120668ec */
  if (C.zf) goto L_120668ec;
  /* 12066881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066884 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066887 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206688a:;
  /* 1206688a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206688d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12066890 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12066895 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066898 je 0x120668dd */
  if (C.zf) goto L_120668dd;
  /* 1206689a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206689d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120668a1 je 0x120668dd */
  if (C.zf) goto L_120668dd;
  /* 120668a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120668a6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120668a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120668ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120668b1 je 0x120668dd */
  if (C.zf) goto L_120668dd;
  /* 120668b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120668b6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120668ba je 0x120668dd */
  if (C.zf) goto L_120668dd;
  /* 120668bc push 0x1208c8d0 */
  push32((uint32_t)(0x1208c8d0u));
  /* 120668c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120668c3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 120668c8 push 0x1208c628 */
  push32((uint32_t)(0x1208c628u));
  /* 120668cd push 2 */
  push32((uint32_t)(0x2u));
  /* 120668cf call 0x120648d0 */
  push32(0x120668d4u); f_120648d0();
  /* 120668d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120668d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120668da jne 0x120668dd */
  if (!C.zf) goto L_120668dd;
  /* 120668dc int3  */
  x86_unimpl("int3 @ 0x120668dc");
L_120668dd:;
  /* 120668dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120668df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120668e1 jne 0x1206688a */
  if (!C.zf) goto L_1206688a;
  /* 120668e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120668e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120668e9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_120668ec:;
  /* 120668ec push 9 */
  push32((uint32_t)(0x9u));
  /* 120668ee call 0x120692b0 */
  push32(0x120668f3u); f_120692b0();
  /* 120668f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120668f6 pop edi */
  EDI = (pop32());
  /* 120668f7 pop esi */
  ESI = (pop32());
  /* 120668f8 pop ebx */
  EBX = (pop32());
  /* 120668f9 mov esp, ebp */
  ESP = (EBP);
  /* 120668fb pop ebp */
  EBP = (pop32());
  /* 120668fc ret  */
  ESPCHK(0x12066860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x12066900 (28 bytes, 11 insns) */
void f_12066900(void) {
  FTRACE(0x12066900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066900 push ebp */
  push32((uint32_t)(EBP));
  /* 12066901 mov ebp, esp */
  EBP = (ESP);
  /* 12066903 push ecx */
  push32((uint32_t)(ECX));
  /* 12066904 mov eax, dword ptr [0x1208fca0] */
  EAX = (r32((uint32_t)(0x1208fca0)));
  /* 12066909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206690c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206690f mov dword ptr [0x1208fca0], ecx */
  w32((uint32_t)(0x1208fca0), (ECX));
  /* 12066915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066918 mov esp, ebp */
  ESP = (EBP);
  /* 1206691a pop ebp */
  EBP = (pop32());
  /* 1206691b ret  */
  ESPCHK(0x12066900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x12066920 (136 bytes, 55 insns) */
void f_12066920(void) {
  FTRACE(0x12066920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066920 push ebp */
  push32((uint32_t)(EBP));
  /* 12066921 mov ebp, esp */
  EBP = (ESP);
  /* 12066923 push ecx */
  push32((uint32_t)(ECX));
  /* 12066924 push ebx */
  push32((uint32_t)(EBX));
  /* 12066925 push esi */
  push32((uint32_t)(ESI));
  /* 12066926 push edi */
  push32((uint32_t)(EDI));
  /* 12066927 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1206692e:;
  /* 1206692e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12066931 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12066934 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066937 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1206693a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206693c je 0x1206699e */
  if (C.zf) goto L_1206699e;
  /* 1206693e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066941 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066943 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12066945 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066948 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206694e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066951 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066954 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12066957 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066959 je 0x1206699c */
  if (C.zf) goto L_1206699c;
L_1206695b:;
  /* 1206695b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206695e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12066963 push eax */
  push32((uint32_t)(EAX));
  /* 12066964 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066967 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12066969 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1206696c push edx */
  push32((uint32_t)(EDX));
  /* 1206696d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066970 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066973 push eax */
  push32((uint32_t)(EAX));
  /* 12066974 push 0x1208c914 */
  push32((uint32_t)(0x1208c914u));
  /* 12066979 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206697b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206697d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206697f push 0 */
  push32((uint32_t)(0x0u));
  /* 12066981 call 0x120648d0 */
  push32(0x12066986u); f_120648d0();
  /* 12066986 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066989 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206698c jne 0x1206698f */
  if (!C.zf) goto L_1206698f;
  /* 1206698e int3  */
  x86_unimpl("int3 @ 0x1206698e");
L_1206698f:;
  /* 1206698f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066991 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066993 jne 0x1206695b */
  if (!C.zf) goto L_1206695b;
  /* 12066995 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1206699c:;
  /* 1206699c jmp 0x1206692e */
  goto L_1206692e;
L_1206699e:;
  /* 1206699e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120669a1 pop edi */
  EDI = (pop32());
  /* 120669a2 pop esi */
  ESI = (pop32());
  /* 120669a3 pop ebx */
  EBX = (pop32());
  /* 120669a4 mov esp, ebp */
  ESP = (EBP);
  /* 120669a6 pop ebp */
  EBP = (pop32());
  /* 120669a7 ret  */
  ESPCHK(0x12066920u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x120669b0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_120669b0(void) {
  FTRACE(0x120669b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120669b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120669b1 mov ebp, esp */
  EBP = (ESP);
  /* 120669b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120669b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120669b7 push esi */
  push32((uint32_t)(ESI));
  /* 120669b8 push edi */
  push32((uint32_t)(EDI));
  /* 120669b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120669c0 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 120669c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120669c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120669ca jne 0x120669d6 */
  if (!C.zf) goto L_120669d6;
  /* 120669cc mov eax, 1 */
  EAX = (0x1u);
  /* 120669d1 jmp 0x12066d08 */
  goto L_12066d08;
L_120669d6:;
  /* 120669d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 120669d8 call 0x12069210 */
  push32(0x120669ddu); f_12069210();
  /* 120669dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120669e0 call 0x120699f0 */
  push32(0x120669e5u); f_120699f0();
  /* 120669e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120669e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120669ec je 0x12066af9 */
  if (C.zf) goto L_12066af9;
  /* 120669f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120669f6 je 0x12066af9 */
  if (C.zf) goto L_12066af9;
  /* 120669fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120669ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12066a02 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12066a05 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066a08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12066a0b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066a0f ja 0x12066ac2 */
  if ((!C.cf&&!C.zf)) goto L_12066ac2;
  /* 12066a15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12066a18 jmp dword ptr [eax*4 + 0x12066d0f] */
  switch (EAX) {
    case 0: goto L_12066a9a;
    case 1: goto L_12066a72;
    case 2: goto L_12066a4a;
    case 3: goto L_12066a1f;
    default: x86_unimpl("switch@0x12066a18 out of table"); return;
  }
L_12066a1f:;
  /* 12066a1f push 0x1208ca68 */
  push32((uint32_t)(0x1208ca68u));
  /* 12066a24 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a31 call 0x120648d0 */
  push32(0x12066a36u); f_120648d0();
  /* 12066a36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066a39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066a3c jne 0x12066a3f */
  if (!C.zf) goto L_12066a3f;
  /* 12066a3e int3  */
  x86_unimpl("int3 @ 0x12066a3e");
L_12066a3f:;
  /* 12066a3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066a41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066a43 jne 0x12066a1f */
  if (!C.zf) goto L_12066a1f;
  /* 12066a45 jmp 0x12066ae8 */
  goto L_12066ae8;
L_12066a4a:;
  /* 12066a4a push 0x1208ca44 */
  push32((uint32_t)(0x1208ca44u));
  /* 12066a4f push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a5c call 0x120648d0 */
  push32(0x12066a61u); f_120648d0();
  /* 12066a61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066a64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066a67 jne 0x12066a6a */
  if (!C.zf) goto L_12066a6a;
  /* 12066a69 int3  */
  x86_unimpl("int3 @ 0x12066a69");
L_12066a6a:;
  /* 12066a6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12066a6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12066a6e jne 0x12066a4a */
  if (!C.zf) goto L_12066a4a;
  /* 12066a70 jmp 0x12066ae8 */
  goto L_12066ae8;
L_12066a72:;
  /* 12066a72 push 0x1208ca20 */
  push32((uint32_t)(0x1208ca20u));
  /* 12066a77 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066a84 call 0x120648d0 */
  push32(0x12066a89u); f_120648d0();
  /* 12066a89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066a8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066a8f jne 0x12066a92 */
  if (!C.zf) goto L_12066a92;
  /* 12066a91 int3  */
  x86_unimpl("int3 @ 0x12066a91");
L_12066a92:;
  /* 12066a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066a96 jne 0x12066a72 */
  if (!C.zf) goto L_12066a72;
  /* 12066a98 jmp 0x12066ae8 */
  goto L_12066ae8;
L_12066a9a:;
  /* 12066a9a push 0x1208c9fc */
  push32((uint32_t)(0x1208c9fcu));
  /* 12066a9f push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12066aac call 0x120648d0 */
  push32(0x12066ab1u); f_120648d0();
  /* 12066ab1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066ab7 jne 0x12066aba */
  if (!C.zf) goto L_12066aba;
  /* 12066ab9 int3  */
  x86_unimpl("int3 @ 0x12066ab9");
L_12066aba:;
  /* 12066aba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066abe jne 0x12066a9a */
  if (!C.zf) goto L_12066a9a;
  /* 12066ac0 jmp 0x12066ae8 */
  goto L_12066ae8;
L_12066ac2:;
  /* 12066ac2 push 0x1208c9d0 */
  push32((uint32_t)(0x1208c9d0u));
  /* 12066ac7 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066acc push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ace push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ad4 call 0x120648d0 */
  push32(0x12066ad9u); f_120648d0();
  /* 12066ad9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066adc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066adf jne 0x12066ae2 */
  if (!C.zf) goto L_12066ae2;
  /* 12066ae1 int3  */
  x86_unimpl("int3 @ 0x12066ae1");
L_12066ae2:;
  /* 12066ae2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12066ae4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12066ae6 jne 0x12066ac2 */
  if (!C.zf) goto L_12066ac2;
L_12066ae8:;
  /* 12066ae8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066aea call 0x120692b0 */
  push32(0x12066aefu); f_120692b0();
  /* 12066aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066af2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066af4 jmp 0x12066d08 */
  goto L_12066d08;
L_12066af9:;
  /* 12066af9 mov eax, dword ptr [0x12091604] */
  EAX = (r32((uint32_t)(0x12091604)));
  /* 12066afe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12066b01 jmp 0x12066b0b */
  goto L_12066b0b;
L_12066b03:;
  /* 12066b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12066b08 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12066b0b:;
  /* 12066b0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066b0f je 0x12066cfb */
  if (C.zf) goto L_12066cfb;
  /* 12066b15 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12066b1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b1f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12066b22 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12066b28 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066b2b je 0x12066b50 */
  if (C.zf) goto L_12066b50;
  /* 12066b2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b30 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066b34 je 0x12066b50 */
  if (C.zf) goto L_12066b50;
  /* 12066b36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b39 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12066b3c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12066b42 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066b45 je 0x12066b50 */
  if (C.zf) goto L_12066b50;
  /* 12066b47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b4a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066b4e jne 0x12066b68 */
  if (!C.zf) goto L_12066b68;
L_12066b50:;
  /* 12066b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b53 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12066b56 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12066b5c mov edx, dword ptr [ecx*4 + 0x1208fa9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa9c)));
  /* 12066b63 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12066b66 jmp 0x12066b6f */
  goto L_12066b6f;
L_12066b68:;
  /* 12066b68 mov dword ptr [ebp - 0x14], 0x1208c9c8 */
  w32((uint32_t)(EBP + -0x14), (0x1208c9c8u));
L_12066b6f:;
  /* 12066b6f push 4 */
  push32((uint32_t)(0x4u));
  /* 12066b71 mov al, byte ptr [0x1208fa98] */
  AL = (r8((uint32_t)(0x1208fa98)));
  /* 12066b76 push eax */
  push32((uint32_t)(EAX));
  /* 12066b77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b7a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12066b7e call 0x12066920 */
  push32(0x12066b83u); f_12066920();
  /* 12066b83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066b88 jne 0x12066bc4 */
  if (!C.zf) goto L_12066bc4;
L_12066b8a:;
  /* 12066b8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b8d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066b90 push edx */
  push32((uint32_t)(EDX));
  /* 12066b91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066b94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12066b97 push ecx */
  push32((uint32_t)(ECX));
  /* 12066b98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12066b9b push edx */
  push32((uint32_t)(EDX));
  /* 12066b9c push 0x1208c8a4 */
  push32((uint32_t)(0x1208c8a4u));
  /* 12066ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ba9 call 0x120648d0 */
  push32(0x12066baeu); f_120648d0();
  /* 12066bae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066bb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066bb4 jne 0x12066bb7 */
  if (!C.zf) goto L_12066bb7;
  /* 12066bb6 int3  */
  x86_unimpl("int3 @ 0x12066bb6");
L_12066bb7:;
  /* 12066bb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066bbb jne 0x12066b8a */
  if (!C.zf) goto L_12066b8a;
  /* 12066bbd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12066bc4:;
  /* 12066bc4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12066bc6 mov cl, byte ptr [0x1208fa98] */
  CL = (r8((uint32_t)(0x1208fa98)));
  /* 12066bcc push ecx */
  push32((uint32_t)(ECX));
  /* 12066bcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066bd0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12066bd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066bd6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12066bda push edx */
  push32((uint32_t)(EDX));
  /* 12066bdb call 0x12066920 */
  push32(0x12066be0u); f_12066920();
  /* 12066be0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066be3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066be5 jne 0x12066c21 */
  if (!C.zf) goto L_12066c21;
L_12066be7:;
  /* 12066be7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066bea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066bed push eax */
  push32((uint32_t)(EAX));
  /* 12066bee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066bf1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12066bf4 push edx */
  push32((uint32_t)(EDX));
  /* 12066bf5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12066bf8 push eax */
  push32((uint32_t)(EAX));
  /* 12066bf9 push 0x1208c878 */
  push32((uint32_t)(0x1208c878u));
  /* 12066bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c06 call 0x120648d0 */
  push32(0x12066c0bu); f_120648d0();
  /* 12066c0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066c0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066c11 jne 0x12066c14 */
  if (!C.zf) goto L_12066c14;
  /* 12066c13 int3  */
  x86_unimpl("int3 @ 0x12066c13");
L_12066c14:;
  /* 12066c14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12066c16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066c18 jne 0x12066be7 */
  if (!C.zf) goto L_12066be7;
  /* 12066c1a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12066c21:;
  /* 12066c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c24 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066c28 jne 0x12066c7a */
  if (!C.zf) goto L_12066c7a;
  /* 12066c2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12066c30 push ecx */
  push32((uint32_t)(ECX));
  /* 12066c31 mov dl, byte ptr [0x1208fa99] */
  DL = (r8((uint32_t)(0x1208fa99)));
  /* 12066c37 push edx */
  push32((uint32_t)(EDX));
  /* 12066c38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c3b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066c3e push eax */
  push32((uint32_t)(EAX));
  /* 12066c3f call 0x12066920 */
  push32(0x12066c44u); f_12066920();
  /* 12066c44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066c49 jne 0x12066c7a */
  if (!C.zf) goto L_12066c7a;
L_12066c4b:;
  /* 12066c4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c4e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066c51 push ecx */
  push32((uint32_t)(ECX));
  /* 12066c52 push 0x1208c99c */
  push32((uint32_t)(0x1208c99cu));
  /* 12066c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12066c5f call 0x120648d0 */
  push32(0x12066c64u); f_120648d0();
  /* 12066c64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066c67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066c6a jne 0x12066c6d */
  if (!C.zf) goto L_12066c6d;
  /* 12066c6c int3  */
  x86_unimpl("int3 @ 0x12066c6c");
L_12066c6d:;
  /* 12066c6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12066c6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12066c71 jne 0x12066c4b */
  if (!C.zf) goto L_12066c4b;
  /* 12066c73 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12066c7a:;
  /* 12066c7a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066c7e jne 0x12066cf6 */
  if (!C.zf) goto L_12066cf6;
  /* 12066c80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066c87 je 0x12066cbc */
  if (C.zf) goto L_12066cbc;
L_12066c89:;
  /* 12066c89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12066c8f push edx */
  push32((uint32_t)(EDX));
  /* 12066c90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066c93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12066c96 push ecx */
  push32((uint32_t)(ECX));
  /* 12066c97 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12066c9a push edx */
  push32((uint32_t)(EDX));
  /* 12066c9b push 0x1208c97c */
  push32((uint32_t)(0x1208c97cu));
  /* 12066ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066ca8 call 0x120648d0 */
  push32(0x12066cadu); f_120648d0();
  /* 12066cad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066cb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066cb3 jne 0x12066cb6 */
  if (!C.zf) goto L_12066cb6;
  /* 12066cb5 int3  */
  x86_unimpl("int3 @ 0x12066cb5");
L_12066cb6:;
  /* 12066cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066cba jne 0x12066c89 */
  if (!C.zf) goto L_12066c89;
L_12066cbc:;
  /* 12066cbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066cbf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12066cc2 push edx */
  push32((uint32_t)(EDX));
  /* 12066cc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12066cc6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12066cca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12066ccd push ecx */
  push32((uint32_t)(ECX));
  /* 12066cce push 0x1208c950 */
  push32((uint32_t)(0x1208c950u));
  /* 12066cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066cdb call 0x120648d0 */
  push32(0x12066ce0u); f_120648d0();
  /* 12066ce0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066ce3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066ce6 jne 0x12066ce9 */
  if (!C.zf) goto L_12066ce9;
  /* 12066ce8 int3  */
  x86_unimpl("int3 @ 0x12066ce8");
L_12066ce9:;
  /* 12066ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12066ceb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12066ced jne 0x12066cbc */
  if (!C.zf) goto L_12066cbc;
  /* 12066cef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12066cf6:;
  /* 12066cf6 jmp 0x12066b03 */
  goto L_12066b03;
L_12066cfb:;
  /* 12066cfb push 9 */
  push32((uint32_t)(0x9u));
  /* 12066cfd call 0x120692b0 */
  push32(0x12066d02u); f_120692b0();
  /* 12066d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12066d08:;
  /* 12066d08 pop edi */
  EDI = (pop32());
  /* 12066d09 pop esi */
  ESI = (pop32());
  /* 12066d0a pop ebx */
  EBX = (pop32());
  /* 12066d0b mov esp, ebp */
  ESP = (EBP);
  /* 12066d0d pop ebp */
  EBP = (pop32());
  /* 12066d0e ret  */
  ESPCHK(0x120669b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x12066d20 (34 bytes, 13 insns) */
void f_12066d20(void) {
  FTRACE(0x12066d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12066d21 mov ebp, esp */
  EBP = (ESP);
  /* 12066d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12066d24 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 12066d29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12066d2c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066d30 je 0x12066d3b */
  if (C.zf) goto L_12066d3b;
  /* 12066d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066d35 mov dword ptr [0x1208fa8c], ecx */
  w32((uint32_t)(0x1208fa8c), (ECX));
L_12066d3b:;
  /* 12066d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066d3e mov esp, ebp */
  ESP = (EBP);
  /* 12066d40 pop ebp */
  EBP = (pop32());
  /* 12066d41 ret  */
  ESPCHK(0x12066d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x12066d50 (103 bytes, 38 insns) */
void f_12066d50(void) {
  FTRACE(0x12066d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12066d51 mov ebp, esp */
  EBP = (ESP);
  /* 12066d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12066d54 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 12066d59 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12066d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066d5e jne 0x12066d62 */
  if (!C.zf) goto L_12066d62;
  /* 12066d60 jmp 0x12066db3 */
  goto L_12066db3;
L_12066d62:;
  /* 12066d62 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066d64 call 0x12069210 */
  push32(0x12066d69u); f_12069210();
  /* 12066d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066d6c mov ecx, dword ptr [0x12091604] */
  ECX = (r32((uint32_t)(0x12091604)));
  /* 12066d72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12066d75 jmp 0x12066d7f */
  goto L_12066d7f;
L_12066d77:;
  /* 12066d77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066d7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12066d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12066d7f:;
  /* 12066d7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066d83 je 0x12066da9 */
  if (C.zf) goto L_12066da9;
  /* 12066d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066d88 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12066d8b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12066d91 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066d94 jne 0x12066da7 */
  if (!C.zf) goto L_12066da7;
  /* 12066d96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066d99 push eax */
  push32((uint32_t)(EAX));
  /* 12066d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066d9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12066da0 push ecx */
  push32((uint32_t)(ECX));
  /* 12066da1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12066da4u);
  /* 12066da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12066da7:;
  /* 12066da7 jmp 0x12066d77 */
  goto L_12066d77;
L_12066da9:;
  /* 12066da9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066dab call 0x120692b0 */
  push32(0x12066db0u); f_120692b0();
  /* 12066db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12066db3:;
  /* 12066db3 mov esp, ebp */
  ESP = (EBP);
  /* 12066db5 pop ebp */
  EBP = (pop32());
  /* 12066db6 ret  */
  ESPCHK(0x12066d50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12066dc0 (75 bytes, 28 insns) */
void f_12066dc0(void) {
  FTRACE(0x12066dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12066dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12066dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12066dc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066dc8 je 0x12066dfd */
  if (C.zf) goto L_12066dfd;
  /* 12066dca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066dcd push eax */
  push32((uint32_t)(EAX));
  /* 12066dce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12066dd2 call dword ptr [0x120943e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943e0))), 0x12066dd8u);
  /* 12066dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066dda jne 0x12066dfd */
  if (!C.zf) goto L_12066dfd;
  /* 12066ddc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066de0 je 0x12066df4 */
  if (C.zf) goto L_12066df4;
  /* 12066de2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066de5 push edx */
  push32((uint32_t)(EDX));
  /* 12066de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066de9 push eax */
  push32((uint32_t)(EAX));
  /* 12066dea call dword ptr [0x120943dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943dc))), 0x12066df0u);
  /* 12066df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066df2 jne 0x12066dfd */
  if (!C.zf) goto L_12066dfd;
L_12066df4:;
  /* 12066df4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12066dfb jmp 0x12066e04 */
  goto L_12066e04;
L_12066dfd:;
  /* 12066dfd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12066e04:;
  /* 12066e04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066e07 mov esp, ebp */
  ESP = (EBP);
  /* 12066e09 pop ebp */
  EBP = (pop32());
  /* 12066e0a ret  */
  ESPCHK(0x12066dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x12066e10 (134 bytes, 50 insns) */
void f_12066e10(void) {
  FTRACE(0x12066e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12066e11 mov ebp, esp */
  EBP = (ESP);
  /* 12066e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12066e14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066e18 jne 0x12066e1e */
  if (!C.zf) goto L_12066e1e;
  /* 12066e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066e1c jmp 0x12066e92 */
  goto L_12066e92;
L_12066e1e:;
  /* 12066e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 12066e20 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12066e22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066e25 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066e28 push eax */
  push32((uint32_t)(EAX));
  /* 12066e29 call 0x12066dc0 */
  push32(0x12066e2eu); f_12066dc0();
  /* 12066e2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066e33 jne 0x12066e39 */
  if (!C.zf) goto L_12066e39;
  /* 12066e35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066e37 jmp 0x12066e92 */
  goto L_12066e92;
L_12066e39:;
  /* 12066e39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066e3c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066e3f push ecx */
  push32((uint32_t)(ECX));
  /* 12066e40 call 0x12069b10 */
  push32(0x12066e45u); f_12069b10();
  /* 12066e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066e48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12066e4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066e4f je 0x12066e66 */
  if (C.zf) goto L_12066e66;
  /* 12066e51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066e54 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066e57 push edx */
  push32((uint32_t)(EDX));
  /* 12066e58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066e5b push eax */
  push32((uint32_t)(EAX));
  /* 12066e5c call 0x12069b70 */
  push32(0x12066e61u); f_12069b70();
  /* 12066e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066e64 jmp 0x12066e92 */
  goto L_12066e92;
L_12066e66:;
  /* 12066e66 mov ecx, dword ptr [0x120915b8] */
  ECX = (r32((uint32_t)(0x120915b8)));
  /* 12066e6c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12066e72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12066e74 je 0x12066e7d */
  if (C.zf) goto L_12066e7d;
  /* 12066e76 mov eax, 1 */
  EAX = (0x1u);
  /* 12066e7b jmp 0x12066e92 */
  goto L_12066e92;
L_12066e7d:;
  /* 12066e7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066e80 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066e83 push edx */
  push32((uint32_t)(EDX));
  /* 12066e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066e86 mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 12066e8b push eax */
  push32((uint32_t)(EAX));
  /* 12066e8c call dword ptr [0x12094374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094374))), 0x12066e92u);
L_12066e92:;
  /* 12066e92 mov esp, ebp */
  ESP = (EBP);
  /* 12066e94 pop ebp */
  EBP = (pop32());
  /* 12066e95 ret  */
  ESPCHK(0x12066e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x12066ea0 (227 bytes, 80 insns) */
void f_12066ea0(void) {
  FTRACE(0x12066ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12066ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12066ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12066ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066ea7 push eax */
  push32((uint32_t)(EAX));
  /* 12066ea8 call 0x12066e10 */
  push32(0x12066eadu); f_12066e10();
  /* 12066ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066eb2 jne 0x12066ebb */
  if (!C.zf) goto L_12066ebb;
  /* 12066eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066eb6 jmp 0x12066f7f */
  goto L_12066f7f;
L_12066ebb:;
  /* 12066ebb push 9 */
  push32((uint32_t)(0x9u));
  /* 12066ebd call 0x12069210 */
  push32(0x12066ec2u); f_12069210();
  /* 12066ec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066ec5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066ec8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066ecb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12066ece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066ed1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12066ed4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12066ed9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066edc je 0x12066f00 */
  if (C.zf) goto L_12066f00;
  /* 12066ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066ee1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066ee5 je 0x12066f00 */
  if (C.zf) goto L_12066f00;
  /* 12066ee7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066eea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12066eed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12066ef2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066ef5 je 0x12066f00 */
  if (C.zf) goto L_12066f00;
  /* 12066ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066efa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066efe jne 0x12066f73 */
  if (!C.zf) goto L_12066f73;
L_12066f00:;
  /* 12066f00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12066f02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12066f05 push edx */
  push32((uint32_t)(EDX));
  /* 12066f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066f09 push eax */
  push32((uint32_t)(EAX));
  /* 12066f0a call 0x12066dc0 */
  push32(0x12066f0fu); f_12066dc0();
  /* 12066f0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066f14 je 0x12066f73 */
  if (C.zf) goto L_12066f73;
  /* 12066f16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066f19 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12066f1c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066f1f jne 0x12066f73 */
  if (!C.zf) goto L_12066f73;
  /* 12066f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066f24 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12066f27 cmp ecx, dword ptr [0x1208fa90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1208fa90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066f2d jg 0x12066f73 */
  if ((!C.zf&&C.sf==C.of)) goto L_12066f73;
  /* 12066f2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066f33 je 0x12066f40 */
  if (C.zf) goto L_12066f40;
  /* 12066f35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12066f38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066f3b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12066f3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12066f40:;
  /* 12066f40 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066f44 je 0x12066f51 */
  if (C.zf) goto L_12066f51;
  /* 12066f46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12066f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066f4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12066f4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12066f51:;
  /* 12066f51 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066f55 je 0x12066f62 */
  if (C.zf) goto L_12066f62;
  /* 12066f57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12066f5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066f5d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12066f60 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12066f62:;
  /* 12066f62 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066f64 call 0x120692b0 */
  push32(0x12066f69u); f_120692b0();
  /* 12066f69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066f6c mov eax, 1 */
  EAX = (0x1u);
  /* 12066f71 jmp 0x12066f7f */
  goto L_12066f7f;
L_12066f73:;
  /* 12066f73 push 9 */
  push32((uint32_t)(0x9u));
  /* 12066f75 call 0x120692b0 */
  push32(0x12066f7au); f_120692b0();
  /* 12066f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12066f7f:;
  /* 12066f7f mov esp, ebp */
  ESP = (EBP);
  /* 12066f81 pop ebp */
  EBP = (pop32());
  /* 12066f82 ret  */
  ESPCHK(0x12066ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x12066f90 (28 bytes, 11 insns) */
void f_12066f90(void) {
  FTRACE(0x12066f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12066f91 mov ebp, esp */
  EBP = (ESP);
  /* 12066f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12066f94 mov eax, dword ptr [0x12092f78] */
  EAX = (r32((uint32_t)(0x12092f78)));
  /* 12066f99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12066f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066f9f mov dword ptr [0x12092f78], ecx */
  w32((uint32_t)(0x12092f78), (ECX));
  /* 12066fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12066fa8 mov esp, ebp */
  ESP = (EBP);
  /* 12066faa pop ebp */
  EBP = (pop32());
  /* 12066fab ret  */
  ESPCHK(0x12066f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb0 @ 0x12066fb0 (362 bytes, 116 insns) */
void f_12066fb0(void) {
  FTRACE(0x12066fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12066fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12066fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12066fb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12066fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12066fb7 push esi */
  push32((uint32_t)(ESI));
  /* 12066fb8 push edi */
  push32((uint32_t)(EDI));
  /* 12066fb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066fbd jne 0x12066fea */
  if (!C.zf) goto L_12066fea;
L_12066fbf:;
  /* 12066fbf push 0x1208cab0 */
  push32((uint32_t)(0x1208cab0u));
  /* 12066fc4 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12066fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12066fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12066fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12066fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12066fd1 call 0x120648d0 */
  push32(0x12066fd6u); f_120648d0();
  /* 12066fd6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066fd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12066fdc jne 0x12066fdf */
  if (!C.zf) goto L_12066fdf;
  /* 12066fde int3  */
  x86_unimpl("int3 @ 0x12066fde");
L_12066fdf:;
  /* 12066fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12066fe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12066fe3 jne 0x12066fbf */
  if (!C.zf) goto L_12066fbf;
  /* 12066fe5 jmp 0x12067113 */
  goto L_12067113;
L_12066fea:;
  /* 12066fea push 9 */
  push32((uint32_t)(0x9u));
  /* 12066fec call 0x12069210 */
  push32(0x12066ff1u); f_12069210();
  /* 12066ff1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12066ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12066ff7 mov edx, dword ptr [0x12091604] */
  EDX = (r32((uint32_t)(0x12091604)));
  /* 12066ffd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12066fff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12067006 jmp 0x12067011 */
  goto L_12067011;
L_12067008:;
  /* 12067008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206700b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206700e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12067011:;
  /* 12067011 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067015 jge 0x12067035 */
  if ((C.sf==C.of)) goto L_12067035;
  /* 12067017 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206701a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206701d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12067025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067028 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206702b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12067033 jmp 0x12067008 */
  goto L_12067008;
L_12067035:;
  /* 12067035 mov edx, dword ptr [0x12091604] */
  EDX = (r32((uint32_t)(0x12091604)));
  /* 1206703b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1206703e jmp 0x12067048 */
  goto L_12067048;
L_12067040:;
  /* 12067040 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067043 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067045 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12067048:;
  /* 12067048 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206704c je 0x120670f1 */
  if (C.zf) goto L_120670f1;
  /* 12067052 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067055 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12067058 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206705d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206705f jl 0x120670c7 */
  if ((C.sf!=C.of)) goto L_120670c7;
  /* 12067061 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067064 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12067067 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206706d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067070 jge 0x120670c7 */
  if ((C.sf==C.of)) goto L_120670c7;
  /* 12067072 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067075 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12067078 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206707e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067081 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12067085 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067088 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206708b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1206708e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12067094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067097 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1206709b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206709e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120670a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120670a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120670a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 120670ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120670b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120670b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120670b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 120670b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120670be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120670c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 120670c5 jmp 0x120670ec */
  goto L_120670ec;
L_120670c7:;
  /* 120670c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120670ca push edx */
  push32((uint32_t)(EDX));
  /* 120670cb push 0x1208ca8c */
  push32((uint32_t)(0x1208ca8cu));
  /* 120670d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120670d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120670d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120670d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120670d8 call 0x120648d0 */
  push32(0x120670ddu); f_120648d0();
  /* 120670dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120670e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120670e3 jne 0x120670e6 */
  if (!C.zf) goto L_120670e6;
  /* 120670e5 int3  */
  x86_unimpl("int3 @ 0x120670e5");
L_120670e6:;
  /* 120670e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120670e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120670ea jne 0x120670c7 */
  if (!C.zf) goto L_120670c7;
L_120670ec:;
  /* 120670ec jmp 0x12067040 */
  goto L_12067040;
L_120670f1:;
  /* 120670f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120670f4 mov edx, dword ptr [0x1209160c] */
  EDX = (r32((uint32_t)(0x1209160c)));
  /* 120670fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 120670fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067100 mov ecx, dword ptr [0x12091600] */
  ECX = (r32((uint32_t)(0x12091600)));
  /* 12067106 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12067109 push 9 */
  push32((uint32_t)(0x9u));
  /* 1206710b call 0x120692b0 */
  push32(0x12067110u); f_120692b0();
  /* 12067110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12067113:;
  /* 12067113 pop edi */
  EDI = (pop32());
  /* 12067114 pop esi */
  ESI = (pop32());
  /* 12067115 pop ebx */
  EBX = (pop32());
  /* 12067116 mov esp, ebp */
  ESP = (EBP);
  /* 12067118 pop ebp */
  EBP = (pop32());
  /* 12067119 ret  */
  ESPCHK(0x12066fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x12067120 (291 bytes, 95 insns) */
void f_12067120(void) {
  FTRACE(0x12067120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12067120 push ebp */
  push32((uint32_t)(EBP));
  /* 12067121 mov ebp, esp */
  EBP = (ESP);
  /* 12067123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067126 push ebx */
  push32((uint32_t)(EBX));
  /* 12067127 push esi */
  push32((uint32_t)(ESI));
  /* 12067128 push edi */
  push32((uint32_t)(EDI));
  /* 12067129 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12067130 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067134 je 0x12067142 */
  if (C.zf) goto L_12067142;
  /* 12067136 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206713a je 0x12067142 */
  if (C.zf) goto L_12067142;
  /* 1206713c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067140 jne 0x12067170 */
  if (!C.zf) goto L_12067170;
L_12067142:;
  /* 12067142 push 0x1208cad8 */
  push32((uint32_t)(0x1208cad8u));
  /* 12067147 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 1206714c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206714e push 0 */
  push32((uint32_t)(0x0u));
  /* 12067150 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067152 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067154 call 0x120648d0 */
  push32(0x12067159u); f_120648d0();
  /* 12067159 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206715c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206715f jne 0x12067162 */
  if (!C.zf) goto L_12067162;
  /* 12067161 int3  */
  x86_unimpl("int3 @ 0x12067161");
L_12067162:;
  /* 12067162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067166 jne 0x12067142 */
  if (!C.zf) goto L_12067142;
  /* 12067168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206716b jmp 0x1206723c */
  goto L_1206723c;
L_12067170:;
  /* 12067170 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12067177 jmp 0x12067182 */
  goto L_12067182;
L_12067179:;
  /* 12067179 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206717c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206717f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12067182:;
  /* 12067182 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067186 jge 0x1206720c */
  if ((C.sf==C.of)) goto L_1206720c;
  /* 1206718c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206718f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067195 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12067198 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1206719c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120671a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120671a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120671a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 120671aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120671ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120671b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120671b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120671b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 120671ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120671be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120671c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120671c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 120671c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120671cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120671ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120671d3 jne 0x120671e2 */
  if (!C.zf) goto L_120671e2;
  /* 120671d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120671d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120671db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120671e0 je 0x12067207 */
  if (C.zf) goto L_12067207;
L_120671e2:;
  /* 120671e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120671e6 je 0x12067207 */
  if (C.zf) goto L_12067207;
  /* 120671e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120671ec jne 0x12067200 */
  if (!C.zf) goto L_12067200;
  /* 120671ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120671f2 jne 0x12067207 */
  if (!C.zf) goto L_12067207;
  /* 120671f4 mov eax, dword ptr [0x1208fa8c] */
  EAX = (r32((uint32_t)(0x1208fa8c)));
  /* 120671f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120671fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120671fe je 0x12067207 */
  if (C.zf) goto L_12067207;
L_12067200:;
  /* 12067200 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12067207:;
  /* 12067207 jmp 0x12067179 */
  goto L_12067179;
L_1206720c:;
  /* 1206720c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206720f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12067212 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12067215 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067218 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206721b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1206721e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067221 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12067224 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12067227 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206722a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206722d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12067230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067233 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12067239 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1206723c:;
  /* 1206723c pop edi */
  EDI = (pop32());
  /* 1206723d pop esi */
  ESI = (pop32());
  /* 1206723e pop ebx */
  EBX = (pop32());
  /* 1206723f mov esp, ebp */
  ESP = (EBP);
  /* 12067241 pop ebp */
  EBP = (pop32());
  /* 12067242 ret  */
  ESPCHK(0x12067120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x12067250 (697 bytes, 253 insns) */
void f_12067250(void) {
  FTRACE(0x12067250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12067250 push ebp */
  push32((uint32_t)(EBP));
  /* 12067251 mov ebp, esp */
  EBP = (ESP);
  /* 12067253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067256 push ebx */
  push32((uint32_t)(EBX));
  /* 12067257 push esi */
  push32((uint32_t)(ESI));
  /* 12067258 push edi */
  push32((uint32_t)(EDI));
  /* 12067259 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12067260 push 9 */
  push32((uint32_t)(0x9u));
  /* 12067262 call 0x12069210 */
  push32(0x12067267u); f_12069210();
  /* 12067267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206726a:;
  /* 1206726a push 0x1208cbd0 */
  push32((uint32_t)(0x1208cbd0u));
  /* 1206726f push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 12067274 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067276 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206727a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206727c call 0x120648d0 */
  push32(0x12067281u); f_120648d0();
  /* 12067281 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067287 jne 0x1206728a */
  if (!C.zf) goto L_1206728a;
  /* 12067289 int3  */
  x86_unimpl("int3 @ 0x12067289");
L_1206728a:;
  /* 1206728a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206728c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206728e jne 0x1206726a */
  if (!C.zf) goto L_1206726a;
  /* 12067290 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067294 je 0x1206729e */
  if (C.zf) goto L_1206729e;
  /* 12067296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067299 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206729b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1206729e:;
  /* 1206729e mov eax, dword ptr [0x12091604] */
  EAX = (r32((uint32_t)(0x12091604)));
  /* 120672a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120672a6 jmp 0x120672b0 */
  goto L_120672b0;
L_120672a8:;
  /* 120672a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120672ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120672ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120672b0:;
  /* 120672b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120672b4 je 0x120674d2 */
  if (C.zf) goto L_120674d2;
  /* 120672ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120672bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120672c0 je 0x120674d2 */
  if (C.zf) goto L_120674d2;
  /* 120672c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120672c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120672cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120672d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120672d5 je 0x12067304 */
  if (C.zf) goto L_12067304;
  /* 120672d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120672da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120672dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120672e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120672e5 je 0x12067304 */
  if (C.zf) goto L_12067304;
  /* 120672e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120672ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120672ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120672f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120672f5 jne 0x12067309 */
  if (!C.zf) goto L_12067309;
  /* 120672f7 mov ecx, dword ptr [0x1208fa8c] */
  ECX = (r32((uint32_t)(0x1208fa8c)));
  /* 120672fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12067300 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12067302 jne 0x12067309 */
  if (!C.zf) goto L_12067309;
L_12067304:;
  /* 12067304 jmp 0x120674cd */
  goto L_120674cd;
L_12067309:;
  /* 12067309 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206730c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067310 je 0x12067382 */
  if (C.zf) goto L_12067382;
  /* 12067312 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067314 push 1 */
  push32((uint32_t)(0x1u));
  /* 12067316 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067319 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206731c push ecx */
  push32((uint32_t)(ECX));
  /* 1206731d call 0x12066dc0 */
  push32(0x12067322u); f_12066dc0();
  /* 12067322 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067327 jne 0x12067353 */
  if (!C.zf) goto L_12067353;
L_12067329:;
  /* 12067329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206732c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206732f push eax */
  push32((uint32_t)(EAX));
  /* 12067330 push 0x1208cbbc */
  push32((uint32_t)(0x1208cbbcu));
  /* 12067335 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067339 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206733b push 0 */
  push32((uint32_t)(0x0u));
  /* 1206733d call 0x120648d0 */
  push32(0x12067342u); f_120648d0();
  /* 12067342 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067345 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067348 jne 0x1206734b */
  if (!C.zf) goto L_1206734b;
  /* 1206734a int3  */
  x86_unimpl("int3 @ 0x1206734a");
L_1206734b:;
  /* 1206734b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206734d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206734f jne 0x12067329 */
  if (!C.zf) goto L_12067329;
  /* 12067351 jmp 0x12067382 */
  goto L_12067382;
L_12067353:;
  /* 12067353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067356 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12067359 push eax */
  push32((uint32_t)(EAX));
  /* 1206735a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206735d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12067360 push edx */
  push32((uint32_t)(EDX));
  /* 12067361 push 0x1208cbb0 */
  push32((uint32_t)(0x1208cbb0u));
  /* 12067366 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067368 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206736a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206736c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206736e call 0x120648d0 */
  push32(0x12067373u); f_120648d0();
  /* 12067373 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067379 jne 0x1206737c */
  if (!C.zf) goto L_1206737c;
  /* 1206737b int3  */
  x86_unimpl("int3 @ 0x1206737b");
L_1206737c:;
  /* 1206737c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206737e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067380 jne 0x12067353 */
  if (!C.zf) goto L_12067353;
L_12067382:;
  /* 12067382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067385 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12067388 push edx */
  push32((uint32_t)(EDX));
  /* 12067389 push 0x1208cba8 */
  push32((uint32_t)(0x1208cba8u));
  /* 1206738e push 0 */
  push32((uint32_t)(0x0u));
  /* 12067390 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067392 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067394 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067396 call 0x120648d0 */
  push32(0x1206739bu); f_120648d0();
  /* 1206739b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206739e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120673a1 jne 0x120673a4 */
  if (!C.zf) goto L_120673a4;
  /* 120673a3 int3  */
  x86_unimpl("int3 @ 0x120673a3");
L_120673a4:;
  /* 120673a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120673a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120673a8 jne 0x12067382 */
  if (!C.zf) goto L_12067382;
  /* 120673aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120673ad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120673b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120673b6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120673b9 jne 0x1206742c */
  if (!C.zf) goto L_1206742c;
L_120673bb:;
  /* 120673bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120673be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120673c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120673c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120673c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120673c8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120673cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120673d0 push eax */
  push32((uint32_t)(EAX));
  /* 120673d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120673d4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120673d7 push ecx */
  push32((uint32_t)(ECX));
  /* 120673d8 push 0x1208cb74 */
  push32((uint32_t)(0x1208cb74u));
  /* 120673dd push 0 */
  push32((uint32_t)(0x0u));
  /* 120673df push 0 */
  push32((uint32_t)(0x0u));
  /* 120673e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120673e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120673e5 call 0x120648d0 */
  push32(0x120673eau); f_120648d0();
  /* 120673ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120673ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120673f0 jne 0x120673f3 */
  if (!C.zf) goto L_120673f3;
  /* 120673f2 int3  */
  x86_unimpl("int3 @ 0x120673f2");
L_120673f3:;
  /* 120673f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120673f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120673f7 jne 0x120673bb */
  if (!C.zf) goto L_120673bb;
  /* 120673f9 cmp dword ptr [0x12092f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067400 je 0x1206741b */
  if (C.zf) goto L_1206741b;
  /* 12067402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067405 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12067408 push ecx */
  push32((uint32_t)(ECX));
  /* 12067409 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206740c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206740f push edx */
  push32((uint32_t)(EDX));
  /* 12067410 call dword ptr [0x12092f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x12092f78))), 0x12067416u);
  /* 12067416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067419 jmp 0x12067427 */
  goto L_12067427;
L_1206741b:;
  /* 1206741b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206741e push eax */
  push32((uint32_t)(EAX));
  /* 1206741f call 0x12067510 */
  push32(0x12067424u); f_12067510();
  /* 12067424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12067427:;
  /* 12067427 jmp 0x120674cd */
  goto L_120674cd;
L_1206742c:;
  /* 1206742c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206742f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067433 jne 0x12067472 */
  if (!C.zf) goto L_12067472;
L_12067435:;
  /* 12067435 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067438 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206743b push eax */
  push32((uint32_t)(EAX));
  /* 1206743c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206743f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067442 push ecx */
  push32((uint32_t)(ECX));
  /* 12067443 push 0x1208cb4c */
  push32((uint32_t)(0x1208cb4cu));
  /* 12067448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206744a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206744c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206744e push 0 */
  push32((uint32_t)(0x0u));
  /* 12067450 call 0x120648d0 */
  push32(0x12067455u); f_120648d0();
  /* 12067455 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067458 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206745b jne 0x1206745e */
  if (!C.zf) goto L_1206745e;
  /* 1206745d int3  */
  x86_unimpl("int3 @ 0x1206745d");
L_1206745e:;
  /* 1206745e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067460 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067462 jne 0x12067435 */
  if (!C.zf) goto L_12067435;
  /* 12067464 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067467 push eax */
  push32((uint32_t)(EAX));
  /* 12067468 call 0x12067510 */
  push32(0x1206746du); f_12067510();
  /* 1206746d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067470 jmp 0x120674cd */
  goto L_120674cd;
L_12067472:;
  /* 12067472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067475 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12067478 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206747e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067481 jne 0x120674cd */
  if (!C.zf) goto L_120674cd;
L_12067483:;
  /* 12067483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067486 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12067489 push ecx */
  push32((uint32_t)(ECX));
  /* 1206748a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206748d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12067490 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12067493 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12067498 push eax */
  push32((uint32_t)(EAX));
  /* 12067499 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206749c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206749f push ecx */
  push32((uint32_t)(ECX));
  /* 120674a0 push 0x1208cb18 */
  push32((uint32_t)(0x1208cb18u));
  /* 120674a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120674a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120674a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120674ab push 0 */
  push32((uint32_t)(0x0u));
  /* 120674ad call 0x120648d0 */
  push32(0x120674b2u); f_120648d0();
  /* 120674b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120674b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120674b8 jne 0x120674bb */
  if (!C.zf) goto L_120674bb;
  /* 120674ba int3  */
  x86_unimpl("int3 @ 0x120674ba");
L_120674bb:;
  /* 120674bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120674bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120674bf jne 0x12067483 */
  if (!C.zf) goto L_12067483;
  /* 120674c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120674c4 push eax */
  push32((uint32_t)(EAX));
  /* 120674c5 call 0x12067510 */
  push32(0x120674cau); f_12067510();
  /* 120674ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120674cd:;
  /* 120674cd jmp 0x120672a8 */
  goto L_120672a8;
L_120674d2:;
  /* 120674d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 120674d4 call 0x120692b0 */
  push32(0x120674d9u); f_120692b0();
  /* 120674d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120674dc:;
  /* 120674dc push 0x1208cb00 */
  push32((uint32_t)(0x1208cb00u));
  /* 120674e1 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 120674e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120674e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120674ea push 0 */
  push32((uint32_t)(0x0u));
  /* 120674ec push 0 */
  push32((uint32_t)(0x0u));
  /* 120674ee call 0x120648d0 */
  push32(0x120674f3u); f_120648d0();
  /* 120674f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120674f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120674f9 jne 0x120674fc */
  if (!C.zf) goto L_120674fc;
  /* 120674fb int3  */
  x86_unimpl("int3 @ 0x120674fb");
L_120674fc:;
  /* 120674fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120674fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12067500 jne 0x120674dc */
  if (!C.zf) goto L_120674dc;
  /* 12067502 pop edi */
  EDI = (pop32());
  /* 12067503 pop esi */
  ESI = (pop32());
  /* 12067504 pop ebx */
  EBX = (pop32());
  /* 12067505 mov esp, ebp */
  ESP = (EBP);
  /* 12067507 pop ebp */
  EBP = (pop32());
  /* 12067508 ret  */
  ESPCHK(0x12067250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007510 @ 0x12067510 (276 bytes, 89 insns) */
void f_12067510(void) {
  FTRACE(0x12067510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12067510 push ebp */
  push32((uint32_t)(EBP));
  /* 12067511 mov ebp, esp */
  EBP = (ESP);
  /* 12067513 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067516 push ebx */
  push32((uint32_t)(EBX));
  /* 12067517 push esi */
  push32((uint32_t)(ESI));
  /* 12067518 push edi */
  push32((uint32_t)(EDI));
  /* 12067519 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12067520 jmp 0x1206752b */
  goto L_1206752b;
L_12067522:;
  /* 12067522 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12067525 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067528 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1206752b:;
  /* 1206752b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206752e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067532 jge 0x1206753f */
  if ((C.sf==C.of)) goto L_1206753f;
  /* 12067534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067537 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206753a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1206753d jmp 0x12067546 */
  goto L_12067546;
L_1206753f:;
  /* 1206753f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12067546:;
  /* 12067546 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12067549 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206754c jge 0x120675ec */
  if ((C.sf==C.of)) goto L_120675ec;
  /* 12067552 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067555 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067558 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1206755b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1206755e cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067565 jle 0x12067583 */
  if ((C.zf||C.sf!=C.of)) goto L_12067583;
  /* 12067567 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1206756c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1206756f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12067575 push ecx */
  push32((uint32_t)(ECX));
  /* 12067576 call 0x1206b820 */
  push32(0x1206757bu); f_1206b820();
  /* 1206757b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206757e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12067581 jmp 0x120675a0 */
  goto L_120675a0;
L_12067583:;
  /* 12067583 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12067586 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206758c mov eax, dword ptr [0x1208fca8] */
  EAX = (r32((uint32_t)(0x1208fca8)));
  /* 12067591 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12067593 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12067597 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1206759d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_120675a0:;
  /* 120675a0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120675a4 je 0x120675b4 */
  if (C.zf) goto L_120675b4;
  /* 120675a6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120675a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120675af mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 120675b2 jmp 0x120675bb */
  goto L_120675bb;
L_120675b4:;
  /* 120675b4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_120675bb:;
  /* 120675bb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120675be mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 120675c1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 120675c5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120675c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120675ce push edx */
  push32((uint32_t)(EDX));
  /* 120675cf push 0x1208cbf4 */
  push32((uint32_t)(0x1208cbf4u));
  /* 120675d4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120675d7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120675da lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 120675de push ecx */
  push32((uint32_t)(ECX));
  /* 120675df call 0x1206b720 */
  push32(0x120675e4u); f_1206b720();
  /* 120675e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120675e7 jmp 0x12067522 */
  goto L_12067522;
L_120675ec:;
  /* 120675ec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120675ef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_120675f4:;
  /* 120675f4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 120675f7 push eax */
  push32((uint32_t)(EAX));
  /* 120675f8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 120675fb push ecx */
  push32((uint32_t)(ECX));
  /* 120675fc push 0x1208cbe4 */
  push32((uint32_t)(0x1208cbe4u));
  /* 12067601 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067609 call 0x120648d0 */
  push32(0x1206760eu); f_120648d0();
  /* 1206760e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067611 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067614 jne 0x12067617 */
  if (!C.zf) goto L_12067617;
  /* 12067616 int3  */
  x86_unimpl("int3 @ 0x12067616");
L_12067617:;
  /* 12067617 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067619 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206761b jne 0x120675f4 */
  if (!C.zf) goto L_120675f4;
  /* 1206761d pop edi */
  EDI = (pop32());
  /* 1206761e pop esi */
  ESI = (pop32());
  /* 1206761f pop ebx */
  EBX = (pop32());
  /* 12067620 mov esp, ebp */
  ESP = (EBP);
  /* 12067622 pop ebp */
  EBP = (pop32());
  /* 12067623 ret  */
  ESPCHK(0x12067510u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x12067630 (116 bytes, 46 insns) */
void f_12067630(void) {
  FTRACE(0x12067630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12067630 push ebp */
  push32((uint32_t)(EBP));
  /* 12067631 mov ebp, esp */
  EBP = (ESP);
  /* 12067633 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067636 push ebx */
  push32((uint32_t)(EBX));
  /* 12067637 push esi */
  push32((uint32_t)(ESI));
  /* 12067638 push edi */
  push32((uint32_t)(EDI));
  /* 12067639 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1206763c push eax */
  push32((uint32_t)(EAX));
  /* 1206763d call 0x12066fb0 */
  push32(0x12067642u); f_12066fb0();
  /* 12067642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067645 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067649 jne 0x12067664 */
  if (!C.zf) goto L_12067664;
  /* 1206764b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206764f jne 0x12067664 */
  if (!C.zf) goto L_12067664;
  /* 12067651 mov ecx, dword ptr [0x1208fa8c] */
  ECX = (r32((uint32_t)(0x1208fa8c)));
  /* 12067657 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1206765a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206765c je 0x1206769b */
  if (C.zf) goto L_1206769b;
  /* 1206765e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067662 je 0x1206769b */
  if (C.zf) goto L_1206769b;
L_12067664:;
  /* 12067664 push 0x1208cbfc */
  push32((uint32_t)(0x1208cbfcu));
  /* 12067669 push 0x1208c5c8 */
  push32((uint32_t)(0x1208c5c8u));
  /* 1206766e push 0 */
  push32((uint32_t)(0x0u));
  /* 12067670 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067672 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067674 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067676 call 0x120648d0 */
  push32(0x1206767bu); f_120648d0();
  /* 1206767b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206767e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067681 jne 0x12067684 */
  if (!C.zf) goto L_12067684;
  /* 12067683 int3  */
  x86_unimpl("int3 @ 0x12067683");
L_12067684:;
  /* 12067684 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067688 jne 0x12067664 */
  if (!C.zf) goto L_12067664;
  /* 1206768a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206768c call 0x12067250 */
  push32(0x12067691u); f_12067250();
  /* 12067691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067694 mov eax, 1 */
  EAX = (0x1u);
  /* 12067699 jmp 0x1206769d */
  goto L_1206769d;
L_1206769b:;
  /* 1206769b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206769d:;
  /* 1206769d pop edi */
  EDI = (pop32());
  /* 1206769e pop esi */
  ESI = (pop32());
  /* 1206769f pop ebx */
  EBX = (pop32());
  /* 120676a0 mov esp, ebp */
  ESP = (EBP);
  /* 120676a2 pop ebp */
  EBP = (pop32());
  /* 120676a3 ret  */
  ESPCHK(0x12067630u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x120676b0 (197 bytes, 79 insns) */
void f_120676b0(void) {
  FTRACE(0x120676b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120676b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120676b1 mov ebp, esp */
  EBP = (ESP);
  /* 120676b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120676b4 push ebx */
  push32((uint32_t)(EBX));
  /* 120676b5 push esi */
  push32((uint32_t)(ESI));
  /* 120676b6 push edi */
  push32((uint32_t)(EDI));
  /* 120676b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120676bb jne 0x120676c2 */
  if (!C.zf) goto L_120676c2;
  /* 120676bd jmp 0x1206776e */
  goto L_1206776e;
L_120676c2:;
  /* 120676c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120676c9 jmp 0x120676d4 */
  goto L_120676d4;
L_120676cb:;
  /* 120676cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120676ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120676d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120676d4:;
  /* 120676d4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120676d8 jge 0x1206771e */
  if ((C.sf==C.of)) goto L_1206771e;
L_120676da:;
  /* 120676da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120676dd mov edx, dword ptr [ecx*4 + 0x1208fa9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fa9c)));
  /* 120676e4 push edx */
  push32((uint32_t)(EDX));
  /* 120676e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120676e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120676eb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 120676ef push edx */
  push32((uint32_t)(EDX));
  /* 120676f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120676f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120676f6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 120676fa push edx */
  push32((uint32_t)(EDX));
  /* 120676fb push 0x1208cc58 */
  push32((uint32_t)(0x1208cc58u));
  /* 12067700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067702 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067704 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067706 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067708 call 0x120648d0 */
  push32(0x1206770du); f_120648d0();
  /* 1206770d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067710 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067713 jne 0x12067716 */
  if (!C.zf) goto L_12067716;
  /* 12067715 int3  */
  x86_unimpl("int3 @ 0x12067715");
L_12067716:;
  /* 12067716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206771a jne 0x120676da */
  if (!C.zf) goto L_120676da;
  /* 1206771c jmp 0x120676cb */
  goto L_120676cb;
L_1206771e:;
  /* 1206771e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067721 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12067724 push edx */
  push32((uint32_t)(EDX));
  /* 12067725 push 0x1208cc34 */
  push32((uint32_t)(0x1208cc34u));
  /* 1206772a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206772c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206772e push 0 */
  push32((uint32_t)(0x0u));
  /* 12067730 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067732 call 0x120648d0 */
  push32(0x12067737u); f_120648d0();
  /* 12067737 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206773a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206773d jne 0x12067740 */
  if (!C.zf) goto L_12067740;
  /* 1206773f int3  */
  x86_unimpl("int3 @ 0x1206773f");
L_12067740:;
  /* 12067740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067744 jne 0x1206771e */
  if (!C.zf) goto L_1206771e;
L_12067746:;
  /* 12067746 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12067749 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1206774c push edx */
  push32((uint32_t)(EDX));
  /* 1206774d push 0x1208cc14 */
  push32((uint32_t)(0x1208cc14u));
  /* 12067752 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067756 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206775a call 0x120648d0 */
  push32(0x1206775fu); f_120648d0();
  /* 1206775f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067762 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067765 jne 0x12067768 */
  if (!C.zf) goto L_12067768;
  /* 12067767 int3  */
  x86_unimpl("int3 @ 0x12067767");
L_12067768:;
  /* 12067768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206776a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206776c jne 0x12067746 */
  if (!C.zf) goto L_12067746;
L_1206776e:;
  /* 1206776e pop edi */
  EDI = (pop32());
  /* 1206776f pop esi */
  ESI = (pop32());
  /* 12067770 pop ebx */
  EBX = (pop32());
  /* 12067771 mov esp, ebp */
  ESP = (EBP);
  /* 12067773 pop ebp */
  EBP = (pop32());
  /* 12067774 ret  */
  ESPCHK(0x120676b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007780 @ 0x12067780 (329 bytes, 102 insns) */
void f_12067780(void) {
  FTRACE(0x12067780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12067780 push ebp */
  push32((uint32_t)(EBP));
  /* 12067781 mov ebp, esp */
  EBP = (ESP);
  /* 12067783 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067786 cmp dword ptr [0x120930f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120930f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206778d jne 0x12067794 */
  if (!C.zf) goto L_12067794;
  /* 1206778f call 0x1206c0c0 */
  push32(0x12067794u); f_1206c0c0();
L_12067794:;
  /* 12067794 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1206779b mov eax, dword ptr [0x120915a0] */
  EAX = (r32((uint32_t)(0x120915a0)));
  /* 120677a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120677a3:;
  /* 120677a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120677a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120677a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120677ab je 0x120677d9 */
  if (C.zf) goto L_120677d9;
  /* 120677ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120677b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120677b3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120677b6 je 0x120677c1 */
  if (C.zf) goto L_120677c1;
  /* 120677b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120677bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120677be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120677c1:;
  /* 120677c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120677c4 push eax */
  push32((uint32_t)(EAX));
  /* 120677c5 call 0x12068640 */
  push32(0x120677cau); f_12068640();
  /* 120677ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120677cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120677d0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120677d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120677d7 jmp 0x120677a3 */
  goto L_120677a3;
L_120677d9:;
  /* 120677d9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 120677db push 0x1208cc78 */
  push32((uint32_t)(0x1208cc78u));
  /* 120677e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120677e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120677e5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 120677ec push ecx */
  push32((uint32_t)(ECX));
  /* 120677ed call 0x12065810 */
  push32(0x120677f2u); f_12065810();
  /* 120677f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120677f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120677f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120677fb mov dword ptr [0x120915d4], edx */
  w32((uint32_t)(0x120915d4), (EDX));
  /* 12067801 cmp dword ptr [0x120915d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067808 jne 0x12067814 */
  if (!C.zf) goto L_12067814;
  /* 1206780a push 9 */
  push32((uint32_t)(0x9u));
  /* 1206780c call 0x12064780 */
  push32(0x12067811u); f_12064780();
  /* 12067811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12067814:;
  /* 12067814 mov eax, dword ptr [0x120915a0] */
  EAX = (r32((uint32_t)(0x120915a0)));
  /* 12067819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206781c jmp 0x12067827 */
  goto L_12067827;
L_1206781e:;
  /* 1206781e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067821 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067824 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12067827:;
  /* 12067827 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206782a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1206782d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206782f je 0x12067897 */
  if (C.zf) goto L_12067897;
  /* 12067831 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067834 push ecx */
  push32((uint32_t)(ECX));
  /* 12067835 call 0x12068640 */
  push32(0x1206783au); f_12068640();
  /* 1206783a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206783d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067840 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12067843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067846 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12067849 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206784c je 0x12067895 */
  if (C.zf) goto L_12067895;
  /* 1206784e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12067850 push 0x1208cc78 */
  push32((uint32_t)(0x1208cc78u));
  /* 12067855 push 2 */
  push32((uint32_t)(0x2u));
  /* 12067857 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206785a push ecx */
  push32((uint32_t)(ECX));
  /* 1206785b call 0x12065810 */
  push32(0x12067860u); f_12065810();
  /* 12067860 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067863 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067866 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12067868 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206786b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206786e jne 0x1206787a */
  if (!C.zf) goto L_1206787a;
  /* 12067870 push 9 */
  push32((uint32_t)(0x9u));
  /* 12067872 call 0x12064780 */
  push32(0x12067877u); f_12064780();
  /* 12067877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206787a:;
  /* 1206787a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206787d push ecx */
  push32((uint32_t)(ECX));
  /* 1206787e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067881 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12067883 push eax */
  push32((uint32_t)(EAX));
  /* 12067884 call 0x120687c0 */
  push32(0x12067889u); f_120687c0();
  /* 12067889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206788c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206788f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067892 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12067895:;
  /* 12067895 jmp 0x1206781e */
  goto L_1206781e;
L_12067897:;
  /* 12067897 push 2 */
  push32((uint32_t)(0x2u));
  /* 12067899 mov edx, dword ptr [0x120915a0] */
  EDX = (r32((uint32_t)(0x120915a0)));
  /* 1206789f push edx */
  push32((uint32_t)(EDX));
  /* 120678a0 call 0x120662a0 */
  push32(0x120678a5u); f_120662a0();
  /* 120678a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120678a8 mov dword ptr [0x120915a0], 0 */
  w32((uint32_t)(0x120915a0), (0x0u));
  /* 120678b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120678b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120678bb mov dword ptr [0x120930e0], 1 */
  w32((uint32_t)(0x120930e0), (0x1u));
  /* 120678c5 mov esp, ebp */
  ESP = (EBP);
  /* 120678c7 pop ebp */
  EBP = (pop32());
  /* 120678c8 ret  */
  ESPCHK(0x12067780u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x120678d0 (216 bytes, 69 insns) */
void f_120678d0(void) {
  FTRACE(0x120678d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120678d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120678d1 mov ebp, esp */
  EBP = (ESP);
  /* 120678d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120678d6 cmp dword ptr [0x120930f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120930f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120678dd jne 0x120678e4 */
  if (!C.zf) goto L_120678e4;
  /* 120678df call 0x1206c0c0 */
  push32(0x120678e4u); f_1206c0c0();
L_120678e4:;
  /* 120678e4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120678e9 push 0x12091610 */
  push32((uint32_t)(0x12091610u));
  /* 120678ee push 0 */
  push32((uint32_t)(0x0u));
  /* 120678f0 call dword ptr [0x120943a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943a0))), 0x120678f6u);
  /* 120678f6 mov dword ptr [0x120915e4], 0x12091610 */
  w32((uint32_t)(0x120915e4), (0x12091610u));
  /* 12067900 mov eax, dword ptr [0x1209310c] */
  EAX = (r32((uint32_t)(0x1209310c)));
  /* 12067905 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067908 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206790a jne 0x12067917 */
  if (!C.zf) goto L_12067917;
  /* 1206790c mov edx, dword ptr [0x120915e4] */
  EDX = (r32((uint32_t)(0x120915e4)));
  /* 12067912 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12067915 jmp 0x1206791f */
  goto L_1206791f;
L_12067917:;
  /* 12067917 mov eax, dword ptr [0x1209310c] */
  EAX = (r32((uint32_t)(0x1209310c)));
  /* 1206791c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1206791f:;
  /* 1206791f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12067922 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12067925 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12067928 push edx */
  push32((uint32_t)(EDX));
  /* 12067929 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1206792c push eax */
  push32((uint32_t)(EAX));
  /* 1206792d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206792f push 0 */
  push32((uint32_t)(0x0u));
  /* 12067931 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067934 push ecx */
  push32((uint32_t)(ECX));
  /* 12067935 call 0x120679b0 */
  push32(0x1206793au); f_120679b0();
  /* 1206793a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206793d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12067942 push 0x1208cc84 */
  push32((uint32_t)(0x1208cc84u));
  /* 12067947 push 2 */
  push32((uint32_t)(0x2u));
  /* 12067949 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206794c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206794f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12067952 push ecx */
  push32((uint32_t)(ECX));
  /* 12067953 call 0x12065810 */
  push32(0x12067958u); f_12065810();
  /* 12067958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206795b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206795e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067962 jne 0x1206796e */
  if (!C.zf) goto L_1206796e;
  /* 12067964 push 8 */
  push32((uint32_t)(0x8u));
  /* 12067966 call 0x12064780 */
  push32(0x1206796bu); f_12064780();
  /* 1206796b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206796e:;
  /* 1206796e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12067971 push edx */
  push32((uint32_t)(EDX));
  /* 12067972 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12067975 push eax */
  push32((uint32_t)(EAX));
  /* 12067976 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067979 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206797c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1206797f push eax */
  push32((uint32_t)(EAX));
  /* 12067980 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067983 push ecx */
  push32((uint32_t)(ECX));
  /* 12067984 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067987 push edx */
  push32((uint32_t)(EDX));
  /* 12067988 call 0x120679b0 */
  push32(0x1206798du); f_120679b0();
  /* 1206798d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067990 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067993 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067996 mov dword ptr [0x120915c8], eax */
  w32((uint32_t)(0x120915c8), (EAX));
  /* 1206799b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206799e mov dword ptr [0x120915cc], ecx */
  w32((uint32_t)(0x120915cc), (ECX));
  /* 120679a4 mov esp, ebp */
  ESP = (EBP);
  /* 120679a6 pop ebp */
  EBP = (pop32());
  /* 120679a7 ret  */
  ESPCHK(0x120678d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x120679b0 (1060 bytes, 360 insns) */
void f_120679b0(void) {
  FTRACE(0x120679b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120679b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120679b1 mov ebp, esp */
  EBP = (ESP);
  /* 120679b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120679b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120679b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120679bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120679c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 120679c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120679cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120679ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120679d2 je 0x120679e5 */
  if (C.zf) goto L_120679e5;
  /* 120679d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120679d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120679da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120679dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120679df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120679e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_120679e5:;
  /* 120679e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120679e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120679eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120679ee jne 0x12067abd */
  if (!C.zf) goto L_12067abd;
L_120679f4:;
  /* 120679f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120679f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120679fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120679fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067a00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067a03 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067a06 je 0x12067a82 */
  if (C.zf) goto L_12067a82;
  /* 12067a08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067a0b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12067a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067a10 je 0x12067a82 */
  if (C.zf) goto L_12067a82;
  /* 12067a12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067a15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067a17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12067a19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067a1b mov al, byte ptr [edx + 0x12092e41] */
  AL = (r8((uint32_t)(EDX + 0x12092e41)));
  /* 12067a21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12067a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067a26 je 0x12067a57 */
  if (C.zf) goto L_12067a57;
  /* 12067a28 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067a2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12067a2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067a30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067a33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12067a35 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067a39 je 0x12067a57 */
  if (C.zf) goto L_12067a57;
  /* 12067a3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067a3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067a41 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12067a43 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12067a45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067a48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067a4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12067a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067a51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067a54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12067a57:;
  /* 12067a57 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067a5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067a5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067a5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067a62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12067a64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067a68 je 0x12067a7d */
  if (C.zf) goto L_12067a7d;
  /* 12067a6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067a6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067a70 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12067a72 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12067a74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067a77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067a7a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12067a7d:;
  /* 12067a7d jmp 0x120679f4 */
  goto L_120679f4;
L_12067a82:;
  /* 12067a82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067a85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12067a87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067a8a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067a8d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12067a8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067a93 je 0x12067aa4 */
  if (C.zf) goto L_12067aa4;
  /* 12067a95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067a98 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12067a9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067a9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067aa1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12067aa4:;
  /* 12067aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067aa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067aaa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067aad jne 0x12067ab8 */
  if (!C.zf) goto L_12067ab8;
  /* 12067aaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067ab2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067ab5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12067ab8:;
  /* 12067ab8 jmp 0x12067b8c */
  goto L_12067b8c;
L_12067abd:;
  /* 12067abd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067ac0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067ac2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067ac5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067ac8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12067aca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067ace je 0x12067ae3 */
  if (C.zf) goto L_12067ae3;
  /* 12067ad0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067ad6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12067ad8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12067ada mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067add add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067ae0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12067ae3:;
  /* 12067ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067ae6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12067ae8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12067aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067aee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067af1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12067af4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067af7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12067afd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067aff mov dl, byte ptr [ecx + 0x12092e41] */
  DL = (r8((uint32_t)(ECX + 0x12092e41)));
  /* 12067b05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12067b08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067b0a je 0x12067b3b */
  if (C.zf) goto L_12067b3b;
  /* 12067b0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067b0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067b11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067b14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067b17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12067b19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067b1d je 0x12067b32 */
  if (C.zf) goto L_12067b32;
  /* 12067b1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067b25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12067b27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12067b29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067b2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067b2f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12067b32:;
  /* 12067b32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067b35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067b38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12067b3b:;
  /* 12067b3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067b3e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12067b44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067b47 je 0x12067b67 */
  if (C.zf) goto L_12067b67;
  /* 12067b49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067b4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12067b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067b53 je 0x12067b67 */
  if (C.zf) goto L_12067b67;
  /* 12067b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067b58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12067b5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067b61 jne 0x12067abd */
  if (!C.zf) goto L_12067abd;
L_12067b67:;
  /* 12067b67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067b6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12067b70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067b72 jne 0x12067b7f */
  if (!C.zf) goto L_12067b7f;
  /* 12067b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067b77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067b7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12067b7d jmp 0x12067b8c */
  goto L_12067b8c;
L_12067b7f:;
  /* 12067b7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067b83 je 0x12067b8c */
  if (C.zf) goto L_12067b8c;
  /* 12067b85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067b88 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12067b8c:;
  /* 12067b8c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12067b93:;
  /* 12067b93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067b96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12067b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067b9b je 0x12067bbe */
  if (C.zf) goto L_12067bbe;
L_12067b9d:;
  /* 12067b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067ba0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12067ba3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067ba6 je 0x12067bb3 */
  if (C.zf) goto L_12067bb3;
  /* 12067ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067bab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067bae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067bb1 jne 0x12067bbe */
  if (!C.zf) goto L_12067bbe;
L_12067bb3:;
  /* 12067bb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067bb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067bb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12067bbc jmp 0x12067b9d */
  goto L_12067b9d;
L_12067bbe:;
  /* 12067bbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067bc1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067bc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12067bc6 jne 0x12067bcd */
  if (!C.zf) goto L_12067bcd;
  /* 12067bc8 jmp 0x12067dab */
  goto L_12067dab;
L_12067bcd:;
  /* 12067bcd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067bd1 je 0x12067be4 */
  if (C.zf) goto L_12067be4;
  /* 12067bd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12067bd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067bd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12067bdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12067bde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067be1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12067be4:;
  /* 12067be4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12067be7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12067be9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067bec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12067bef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12067bf1:;
  /* 12067bf1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12067bf8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12067bff:;
  /* 12067bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067c02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12067c05 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067c08 jne 0x12067c1e */
  if (!C.zf) goto L_12067c1e;
  /* 12067c0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067c0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067c10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12067c13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067c16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067c19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12067c1c jmp 0x12067bff */
  goto L_12067bff;
L_12067c1e:;
  /* 12067c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067c21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067c24 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067c27 jne 0x12067c7a */
  if (!C.zf) goto L_12067c7a;
  /* 12067c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067c2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067c2e mov ecx, 2 */
  ECX = (0x2u);
  /* 12067c33 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12067c35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067c37 jne 0x12067c72 */
  if (!C.zf) goto L_12067c72;
  /* 12067c39 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067c3d je 0x12067c5f */
  if (C.zf) goto L_12067c5f;
  /* 12067c3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067c42 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12067c46 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067c49 jne 0x12067c56 */
  if (!C.zf) goto L_12067c56;
  /* 12067c4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067c4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067c51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12067c54 jmp 0x12067c5d */
  goto L_12067c5d;
L_12067c56:;
  /* 12067c56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12067c5d:;
  /* 12067c5d jmp 0x12067c66 */
  goto L_12067c66;
L_12067c5f:;
  /* 12067c5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12067c66:;
  /* 12067c66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067c68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067c6c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12067c6f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12067c72:;
  /* 12067c72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067c75 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12067c77 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12067c7a:;
  /* 12067c7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067c7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067c80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067c83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12067c86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12067c88 je 0x12067cae */
  if (C.zf) goto L_12067cae;
  /* 12067c8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067c8e je 0x12067c9f */
  if (C.zf) goto L_12067c9f;
  /* 12067c90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067c93 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12067c96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067c99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067c9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12067c9f:;
  /* 12067c9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067ca2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12067ca4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067ca7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067caa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12067cac jmp 0x12067c7a */
  goto L_12067c7a;
L_12067cae:;
  /* 12067cae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067cb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12067cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067cb6 je 0x12067cd4 */
  if (C.zf) goto L_12067cd4;
  /* 12067cb8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067cbc jne 0x12067cd9 */
  if (!C.zf) goto L_12067cd9;
  /* 12067cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067cc1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12067cc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067cc7 je 0x12067cd4 */
  if (C.zf) goto L_12067cd4;
  /* 12067cc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067ccc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12067ccf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067cd2 jne 0x12067cd9 */
  if (!C.zf) goto L_12067cd9;
L_12067cd4:;
  /* 12067cd4 jmp 0x12067d84 */
  goto L_12067d84;
L_12067cd9:;
  /* 12067cd9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067cdd je 0x12067d76 */
  if (C.zf) goto L_12067d76;
  /* 12067ce3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067ce7 je 0x12067d3d */
  if (C.zf) goto L_12067d3d;
  /* 12067ce9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067cee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12067cf0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12067cf2 mov cl, byte ptr [eax + 0x12092e41] */
  CL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 12067cf8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12067cfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12067cfd je 0x12067d28 */
  if (C.zf) goto L_12067d28;
  /* 12067cff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067d02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067d05 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12067d07 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12067d09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067d0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d0f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12067d12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067d15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12067d1b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12067d20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d26 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12067d28:;
  /* 12067d28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067d2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067d2e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12067d30 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12067d32 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067d35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d38 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12067d3b jmp 0x12067d69 */
  goto L_12067d69;
L_12067d3d:;
  /* 12067d3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067d42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12067d44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12067d46 mov cl, byte ptr [eax + 0x12092e41] */
  CL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 12067d4c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12067d4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12067d51 je 0x12067d69 */
  if (C.zf) goto L_12067d69;
  /* 12067d53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067d56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12067d5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067d61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d67 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12067d69:;
  /* 12067d69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067d6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12067d76:;
  /* 12067d76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067d79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12067d7f jmp 0x12067bf1 */
  goto L_12067bf1;
L_12067d84:;
  /* 12067d84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067d88 je 0x12067d99 */
  if (C.zf) goto L_12067d99;
  /* 12067d8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067d8d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12067d90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12067d93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067d96 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12067d99:;
  /* 12067d99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067d9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12067d9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067da1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12067da4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12067da6 jmp 0x12067b93 */
  goto L_12067b93;
L_12067dab:;
  /* 12067dab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067daf je 0x12067dc3 */
  if (C.zf) goto L_12067dc3;
  /* 12067db1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12067db4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12067dba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12067dbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067dc0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12067dc3:;
  /* 12067dc3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12067dc6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12067dc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067dcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12067dce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12067dd0 mov esp, ebp */
  ESP = (EBP);
  /* 12067dd2 pop ebp */
  EBP = (pop32());
  /* 12067dd3 ret  */
  ESPCHK(0x120679b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007de0 @ 0x12067de0 (537 bytes, 173 insns) */
void f_12067de0(void) {
  FTRACE(0x12067de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12067de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12067de1 mov ebp, esp */
  EBP = (ESP);
  /* 12067de3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067de6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12067ded mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12067df4 cmp dword ptr [0x12091714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067dfb jne 0x12067e3a */
  if (!C.zf) goto L_12067e3a;
  /* 12067dfd call dword ptr [0x1209436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209436c))), 0x12067e03u);
  /* 12067e03 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12067e06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067e0a je 0x12067e18 */
  if (C.zf) goto L_12067e18;
  /* 12067e0c mov dword ptr [0x12091714], 1 */
  w32((uint32_t)(0x12091714), (0x1u));
  /* 12067e16 jmp 0x12067e3a */
  goto L_12067e3a;
L_12067e18:;
  /* 12067e18 call dword ptr [0x12094364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094364))), 0x12067e1eu);
  /* 12067e1e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12067e21 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067e25 je 0x12067e33 */
  if (C.zf) goto L_12067e33;
  /* 12067e27 mov dword ptr [0x12091714], 2 */
  w32((uint32_t)(0x12091714), (0x2u));
  /* 12067e31 jmp 0x12067e3a */
  goto L_12067e3a;
L_12067e33:;
  /* 12067e33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067e35 jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067e3a:;
  /* 12067e3a cmp dword ptr [0x12091714], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12091714))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067e41 jne 0x12067f3e */
  if (!C.zf) goto L_12067f3e;
  /* 12067e47 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067e4b jne 0x12067e63 */
  if (!C.zf) goto L_12067e63;
  /* 12067e4d call dword ptr [0x1209436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209436c))), 0x12067e53u);
  /* 12067e53 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12067e56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067e5a jne 0x12067e63 */
  if (!C.zf) goto L_12067e63;
  /* 12067e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067e5e jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067e63:;
  /* 12067e63 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12067e66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12067e69:;
  /* 12067e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067e6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067e6e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12067e71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067e73 je 0x12067e95 */
  if (C.zf) goto L_12067e95;
  /* 12067e75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067e78 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067e7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12067e7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067e81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12067e83 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12067e86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067e88 jne 0x12067e93 */
  if (!C.zf) goto L_12067e93;
  /* 12067e8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067e8d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067e90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12067e93:;
  /* 12067e93 jmp 0x12067e69 */
  goto L_12067e69;
L_12067e95:;
  /* 12067e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12067e98 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067e9b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12067e9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067ea0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12067ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067eab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067eae push edx */
  push32((uint32_t)(EDX));
  /* 12067eaf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12067eb2 push eax */
  push32((uint32_t)(EAX));
  /* 12067eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067eb7 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12067ebdu);
  /* 12067ebd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12067ec0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067ec4 je 0x12067ee4 */
  if (C.zf) goto L_12067ee4;
  /* 12067ec6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12067ec8 push 0x1208cc90 */
  push32((uint32_t)(0x1208cc90u));
  /* 12067ecd push 2 */
  push32((uint32_t)(0x2u));
  /* 12067ecf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067ed2 push ecx */
  push32((uint32_t)(ECX));
  /* 12067ed3 call 0x12065810 */
  push32(0x12067ed8u); f_12065810();
  /* 12067ed8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067edb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12067ede cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067ee2 jne 0x12067ef5 */
  if (!C.zf) goto L_12067ef5;
L_12067ee4:;
  /* 12067ee4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12067ee7 push edx */
  push32((uint32_t)(EDX));
  /* 12067ee8 call dword ptr [0x120943b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943b0))), 0x12067eeeu);
  /* 12067eee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067ef0 jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067ef5:;
  /* 12067ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067ef9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067efc push eax */
  push32((uint32_t)(EAX));
  /* 12067efd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067f00 push ecx */
  push32((uint32_t)(ECX));
  /* 12067f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12067f04 push edx */
  push32((uint32_t)(EDX));
  /* 12067f05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12067f08 push eax */
  push32((uint32_t)(EAX));
  /* 12067f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12067f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12067f0d call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x12067f13u);
  /* 12067f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12067f15 jne 0x12067f2c */
  if (!C.zf) goto L_12067f2c;
  /* 12067f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12067f19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067f1c push ecx */
  push32((uint32_t)(ECX));
  /* 12067f1d call 0x120662a0 */
  push32(0x12067f22u); f_120662a0();
  /* 12067f22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067f25 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12067f2c:;
  /* 12067f2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12067f2f push edx */
  push32((uint32_t)(EDX));
  /* 12067f30 call dword ptr [0x120943b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943b0))), 0x12067f36u);
  /* 12067f36 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067f39 jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067f3e:;
  /* 12067f3e cmp dword ptr [0x12091714], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12091714))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067f45 jne 0x12067ff3 */
  if (!C.zf) goto L_12067ff3;
  /* 12067f4b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067f4f jne 0x12067f67 */
  if (!C.zf) goto L_12067f67;
  /* 12067f51 call dword ptr [0x12094364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094364))), 0x12067f57u);
  /* 12067f57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12067f5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067f5e jne 0x12067f67 */
  if (!C.zf) goto L_12067f67;
  /* 12067f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067f62 jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067f67:;
  /* 12067f67 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067f6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12067f6d:;
  /* 12067f6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067f70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12067f73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067f75 je 0x12067f95 */
  if (C.zf) goto L_12067f95;
  /* 12067f77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067f7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12067f80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067f83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12067f86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12067f88 jne 0x12067f93 */
  if (!C.zf) goto L_12067f93;
  /* 12067f8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067f8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067f90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12067f93:;
  /* 12067f93 jmp 0x12067f6d */
  goto L_12067f6d;
L_12067f95:;
  /* 12067f95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067f98 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12067f9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12067f9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12067fa1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12067fa6 push 0x1208cc90 */
  push32((uint32_t)(0x1208cc90u));
  /* 12067fab push 2 */
  push32((uint32_t)(0x2u));
  /* 12067fad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067fb0 push edx */
  push32((uint32_t)(EDX));
  /* 12067fb1 call 0x12065810 */
  push32(0x12067fb6u); f_12065810();
  /* 12067fb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067fb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12067fbc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12067fc0 jne 0x12067fd0 */
  if (!C.zf) goto L_12067fd0;
  /* 12067fc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12067fc6 call dword ptr [0x12094370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094370))), 0x12067fccu);
  /* 12067fcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12067fce jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067fd0:;
  /* 12067fd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12067fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12067fd4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067fd7 push edx */
  push32((uint32_t)(EDX));
  /* 12067fd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067fdb push eax */
  push32((uint32_t)(EAX));
  /* 12067fdc call 0x1206c0f0 */
  push32(0x12067fe1u); f_1206c0f0();
  /* 12067fe1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12067fe4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12067fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12067fe8 call dword ptr [0x12094370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094370))), 0x12067feeu);
  /* 12067fee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12067ff1 jmp 0x12067ff5 */
  goto L_12067ff5;
L_12067ff3:;
  /* 12067ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12067ff5:;
  /* 12067ff5 mov esp, ebp */
  ESP = (EBP);
  /* 12067ff7 pop ebp */
  EBP = (pop32());
  /* 12067ff8 ret  */
  ESPCHK(0x12067de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x12068000 (77 bytes, 25 insns) */
void f_12068000(void) {
  FTRACE(0x12068000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068000 push ebp */
  push32((uint32_t)(EBP));
  /* 12068001 mov ebp, esp */
  EBP = (ESP);
  /* 12068003 push 0 */
  push32((uint32_t)(0x0u));
  /* 12068005 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1206800a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206800c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068010 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12068013 push eax */
  push32((uint32_t)(EAX));
  /* 12068014 call dword ptr [0x12094358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094358))), 0x1206801au);
  /* 1206801a mov dword ptr [0x12092f6c], eax */
  w32((uint32_t)(0x12092f6c), (EAX));
  /* 1206801f cmp dword ptr [0x12092f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068026 jne 0x1206802c */
  if (!C.zf) goto L_1206802c;
  /* 12068028 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206802a jmp 0x1206804b */
  goto L_1206804b;
L_1206802c:;
  /* 1206802c call 0x12069ab0 */
  push32(0x12068031u); f_12069ab0();
  /* 12068031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12068033 jne 0x12068046 */
  if (!C.zf) goto L_12068046;
  /* 12068035 mov ecx, dword ptr [0x12092f6c] */
  ECX = (r32((uint32_t)(0x12092f6c)));
  /* 1206803b push ecx */
  push32((uint32_t)(ECX));
  /* 1206803c call dword ptr [0x1209435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209435c))), 0x12068042u);
  /* 12068042 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12068044 jmp 0x1206804b */
  goto L_1206804b;
L_12068046:;
  /* 12068046 mov eax, 1 */
  EAX = (0x1u);
L_1206804b:;
  /* 1206804b pop ebp */
  EBP = (pop32());
  /* 1206804c ret  */
  ESPCHK(0x12068000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x12068050 (156 bytes, 48 insns) */
void f_12068050(void) {
  FTRACE(0x12068050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068050 push ebp */
  push32((uint32_t)(EBP));
  /* 12068051 mov ebp, esp */
  EBP = (ESP);
  /* 12068053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068056 mov eax, dword ptr [0x12092f68] */
  EAX = (r32((uint32_t)(0x12092f68)));
  /* 1206805b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206805e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12068065 jmp 0x12068070 */
  goto L_12068070;
L_12068067:;
  /* 12068067 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206806a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206806d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12068070:;
  /* 12068070 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068073 cmp edx, dword ptr [0x12092f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12092f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068079 jge 0x120680c6 */
  if ((C.sf==C.of)) goto L_120680c6;
  /* 1206807b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12068080 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12068085 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068088 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206808b push ecx */
  push32((uint32_t)(ECX));
  /* 1206808c call dword ptr [0x12094350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094350))), 0x12068092u);
  /* 12068092 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12068097 push 0 */
  push32((uint32_t)(0x0u));
  /* 12068099 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206809c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206809f push eax */
  push32((uint32_t)(EAX));
  /* 120680a0 call dword ptr [0x12094350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094350))), 0x120680a6u);
  /* 120680a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120680a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120680ac push edx */
  push32((uint32_t)(EDX));
  /* 120680ad push 0 */
  push32((uint32_t)(0x0u));
  /* 120680af mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 120680b4 push eax */
  push32((uint32_t)(EAX));
  /* 120680b5 call dword ptr [0x12094360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094360))), 0x120680bbu);
  /* 120680bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120680be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120680c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120680c4 jmp 0x12068067 */
  goto L_12068067;
L_120680c6:;
  /* 120680c6 mov edx, dword ptr [0x12092f68] */
  EDX = (r32((uint32_t)(0x12092f68)));
  /* 120680cc push edx */
  push32((uint32_t)(EDX));
  /* 120680cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120680cf mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 120680d4 push eax */
  push32((uint32_t)(EAX));
  /* 120680d5 call dword ptr [0x12094360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094360))), 0x120680dbu);
  /* 120680db mov ecx, dword ptr [0x12092f6c] */
  ECX = (r32((uint32_t)(0x12092f6c)));
  /* 120680e1 push ecx */
  push32((uint32_t)(ECX));
  /* 120680e2 call dword ptr [0x1209435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209435c))), 0x120680e8u);
  /* 120680e8 mov esp, ebp */
  ESP = (EBP);
  /* 120680ea pop ebp */
  EBP = (pop32());
  /* 120680eb ret  */
  ESPCHK(0x12068050u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x120680f0 (73 bytes, 19 insns) */
void f_120680f0(void) {
  FTRACE(0x120680f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120680f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120680f1 mov ebp, esp */
  EBP = (ESP);
  /* 120680f3 cmp dword ptr [0x120915a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120680fa je 0x1206810e */
  if (C.zf) goto L_1206810e;
  /* 120680fc cmp dword ptr [0x120915a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068103 jne 0x12068137 */
  if (!C.zf) goto L_12068137;
  /* 12068105 cmp dword ptr [0x120915ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206810c jne 0x12068137 */
  if (!C.zf) goto L_12068137;
L_1206810e:;
  /* 1206810e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12068113 call 0x12068140 */
  push32(0x12068118u); f_12068140();
  /* 12068118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206811b cmp dword ptr [0x12091718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068122 je 0x1206812a */
  if (C.zf) goto L_1206812a;
  /* 12068124 call dword ptr [0x12091718] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091718))), 0x1206812au);
L_1206812a:;
  /* 1206812a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1206812f call 0x12068140 */
  push32(0x12068134u); f_12068140();
  /* 12068134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068137:;
  /* 12068137 pop ebp */
  EBP = (pop32());
  /* 12068138 ret  */
  ESPCHK(0x120680f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008140 @ 0x12068140 (447 bytes, 131 insns) */
void f_12068140(void) {
  FTRACE(0x12068140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068140 push ebp */
  push32((uint32_t)(EBP));
  /* 12068141 mov ebp, esp */
  EBP = (ESP);
  /* 12068143 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068149 push ebx */
  push32((uint32_t)(EBX));
  /* 1206814a push esi */
  push32((uint32_t)(ESI));
  /* 1206814b push edi */
  push32((uint32_t)(EDI));
  /* 1206814c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12068153 jmp 0x1206815e */
  goto L_1206815e;
L_12068155:;
  /* 12068155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068158 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206815b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1206815e:;
  /* 1206815e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068162 jae 0x12068177 */
  if (!C.cf) goto L_12068177;
  /* 12068164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206816a cmp edx, dword ptr [ecx*8 + 0x1208fab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1208fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068171 jne 0x12068175 */
  if (!C.zf) goto L_12068175;
  /* 12068173 jmp 0x12068177 */
  goto L_12068177;
L_12068175:;
  /* 12068175 jmp 0x12068155 */
  goto L_12068155;
L_12068177:;
  /* 12068177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206817a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206817d cmp ecx, dword ptr [eax*8 + 0x1208fab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1208fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068184 jne 0x120682f8 */
  if (!C.zf) goto L_120682f8;
  /* 1206818a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068191 je 0x120681b4 */
  if (C.zf) goto L_120681b4;
  /* 12068193 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068196 mov eax, dword ptr [edx*8 + 0x1208fabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1208fabc)));
  /* 1206819d push eax */
  push32((uint32_t)(EAX));
  /* 1206819e push 0 */
  push32((uint32_t)(0x0u));
  /* 120681a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120681a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120681a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120681a6 call 0x120648d0 */
  push32(0x120681abu); f_120648d0();
  /* 120681ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120681ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120681b1 jne 0x120681b4 */
  if (!C.zf) goto L_120681b4;
  /* 120681b3 int3  */
  x86_unimpl("int3 @ 0x120681b3");
L_120681b4:;
  /* 120681b4 cmp dword ptr [0x120915a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120681bb je 0x120681cf */
  if (C.zf) goto L_120681cf;
  /* 120681bd cmp dword ptr [0x120915a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120915a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120681c4 jne 0x12068208 */
  if (!C.zf) goto L_12068208;
  /* 120681c6 cmp dword ptr [0x120915ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120681cd jne 0x12068208 */
  if (!C.zf) goto L_12068208;
L_120681cf:;
  /* 120681cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120681d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 120681d4 push ecx */
  push32((uint32_t)(ECX));
  /* 120681d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120681d8 mov eax, dword ptr [edx*8 + 0x1208fabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1208fabc)));
  /* 120681df push eax */
  push32((uint32_t)(EAX));
  /* 120681e0 call 0x12068640 */
  push32(0x120681e5u); f_12068640();
  /* 120681e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120681e8 push eax */
  push32((uint32_t)(EAX));
  /* 120681e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120681ec mov edx, dword ptr [ecx*8 + 0x1208fabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1208fabc)));
  /* 120681f3 push edx */
  push32((uint32_t)(EDX));
  /* 120681f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120681f6 call dword ptr [0x12094384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094384))), 0x120681fcu);
  /* 120681fc push eax */
  push32((uint32_t)(EAX));
  /* 120681fd call dword ptr [0x12094388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094388))), 0x12068203u);
  /* 12068203 jmp 0x120682f8 */
  goto L_120682f8;
L_12068208:;
  /* 12068208 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206820f je 0x120682f8 */
  if (C.zf) goto L_120682f8;
  /* 12068215 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1206821a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12068220 push eax */
  push32((uint32_t)(EAX));
  /* 12068221 push 0 */
  push32((uint32_t)(0x0u));
  /* 12068223 call dword ptr [0x120943a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943a0))), 0x12068229u);
  /* 12068229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206822b jne 0x12068241 */
  if (!C.zf) goto L_12068241;
  /* 1206822d push 0x1208c4f8 */
  push32((uint32_t)(0x1208c4f8u));
  /* 12068232 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12068238 push ecx */
  push32((uint32_t)(ECX));
  /* 12068239 call 0x120687c0 */
  push32(0x1206823eu); f_120687c0();
  /* 1206823e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068241:;
  /* 12068241 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12068247 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1206824a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206824d push eax */
  push32((uint32_t)(EAX));
  /* 1206824e call 0x12068640 */
  push32(0x12068253u); f_12068640();
  /* 12068253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068256 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068259 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206825c jbe 0x1206828a */
  if ((C.cf||C.zf)) goto L_1206828a;
  /* 1206825e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12068264 push ecx */
  push32((uint32_t)(ECX));
  /* 12068265 call 0x12068640 */
  push32(0x1206826au); f_12068640();
  /* 1206826a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206826d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068270 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12068274 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068277 push 3 */
  push32((uint32_t)(0x3u));
  /* 12068279 push 0x1208c4f4 */
  push32((uint32_t)(0x1208c4f4u));
  /* 1206827e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068281 push ecx */
  push32((uint32_t)(ECX));
  /* 12068282 call 0x12069030 */
  push32(0x12068287u); f_12069030();
  /* 12068287 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206828a:;
  /* 1206828a push 0x1208cf4c */
  push32((uint32_t)(0x1208cf4cu));
  /* 1206828f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12068295 push edx */
  push32((uint32_t)(EDX));
  /* 12068296 call 0x120687c0 */
  push32(0x1206829bu); f_120687c0();
  /* 1206829b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206829e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120682a1 push eax */
  push32((uint32_t)(EAX));
  /* 120682a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 120682a8 push ecx */
  push32((uint32_t)(ECX));
  /* 120682a9 call 0x120687d0 */
  push32(0x120682aeu); f_120687d0();
  /* 120682ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120682b1 push 0x1208c46c */
  push32((uint32_t)(0x1208c46cu));
  /* 120682b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 120682bc push edx */
  push32((uint32_t)(EDX));
  /* 120682bd call 0x120687d0 */
  push32(0x120682c2u); f_120687d0();
  /* 120682c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120682c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120682c8 mov ecx, dword ptr [eax*8 + 0x1208fabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1208fabc)));
  /* 120682cf push ecx */
  push32((uint32_t)(ECX));
  /* 120682d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 120682d6 push edx */
  push32((uint32_t)(EDX));
  /* 120682d7 call 0x120687d0 */
  push32(0x120682dcu); f_120687d0();
  /* 120682dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120682df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 120682e4 push 0x1208cf24 */
  push32((uint32_t)(0x1208cf24u));
  /* 120682e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 120682ef push eax */
  push32((uint32_t)(EAX));
  /* 120682f0 call 0x12068f70 */
  push32(0x120682f5u); f_12068f70();
  /* 120682f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120682f8:;
  /* 120682f8 pop edi */
  EDI = (pop32());
  /* 120682f9 pop esi */
  ESI = (pop32());
  /* 120682fa pop ebx */
  EBX = (pop32());
  /* 120682fb mov esp, ebp */
  ESP = (EBP);
  /* 120682fd pop ebp */
  EBP = (pop32());
  /* 120682fe ret  */
  ESPCHK(0x12068140u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12068300 (80 bytes, 27 insns) */
void f_12068300(void) {
  FTRACE(0x12068300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068300 push ebp */
  push32((uint32_t)(EBP));
  /* 12068301 mov ebp, esp */
  EBP = (ESP);
  /* 12068303 push ecx */
  push32((uint32_t)(ECX));
  /* 12068304 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206830b jmp 0x12068316 */
  goto L_12068316;
L_1206830d:;
  /* 1206830d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12068316:;
  /* 12068316 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206831a jae 0x1206832f */
  if (!C.cf) goto L_1206832f;
  /* 1206831c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206831f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068322 cmp edx, dword ptr [ecx*8 + 0x1208fab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1208fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068329 jne 0x1206832d */
  if (!C.zf) goto L_1206832d;
  /* 1206832b jmp 0x1206832f */
  goto L_1206832f;
L_1206832d:;
  /* 1206832d jmp 0x1206830d */
  goto L_1206830d;
L_1206832f:;
  /* 1206832f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068335 cmp ecx, dword ptr [eax*8 + 0x1208fab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1208fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206833c jne 0x1206834a */
  if (!C.zf) goto L_1206834a;
  /* 1206833e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068341 mov eax, dword ptr [edx*8 + 0x1208fabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1208fabc)));
  /* 12068348 jmp 0x1206834c */
  goto L_1206834c;
L_1206834a:;
  /* 1206834a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206834c:;
  /* 1206834c mov esp, ebp */
  ESP = (EBP);
  /* 1206834e pop ebp */
  EBP = (pop32());
  /* 1206834f ret  */
  ESPCHK(0x12068300u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12068350 (66 bytes, 28 insns) */
void f_12068350(void) {
  FTRACE(0x12068350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068350 push ebp */
  push32((uint32_t)(EBP));
  /* 12068351 mov ebp, esp */
  EBP = (ESP);
  /* 12068353 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068357 jne 0x12068377 */
  if (!C.zf) goto L_12068377;
  /* 12068359 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206835d jge 0x12068377 */
  if ((C.sf==C.of)) goto L_12068377;
  /* 1206835f push 1 */
  push32((uint32_t)(0x1u));
  /* 12068361 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12068364 push eax */
  push32((uint32_t)(EAX));
  /* 12068365 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068368 push ecx */
  push32((uint32_t)(ECX));
  /* 12068369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206836c push edx */
  push32((uint32_t)(EDX));
  /* 1206836d call 0x120683a0 */
  push32(0x12068372u); f_120683a0();
  /* 12068372 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068375 jmp 0x1206838d */
  goto L_1206838d;
L_12068377:;
  /* 12068377 push 0 */
  push32((uint32_t)(0x0u));
  /* 12068379 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206837c push eax */
  push32((uint32_t)(EAX));
  /* 1206837d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068380 push ecx */
  push32((uint32_t)(ECX));
  /* 12068381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068384 push edx */
  push32((uint32_t)(EDX));
  /* 12068385 call 0x120683a0 */
  push32(0x1206838au); f_120683a0();
  /* 1206838a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206838d:;
  /* 1206838d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068390 pop ebp */
  EBP = (pop32());
  /* 12068391 ret  */
  ESPCHK(0x12068350u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x120683a0 (194 bytes, 71 insns) */
void f_120683a0(void) {
  FTRACE(0x120683a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120683a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120683a1 mov ebp, esp */
  EBP = (ESP);
  /* 120683a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120683a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120683a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120683ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120683b0 je 0x120683c9 */
  if (C.zf) goto L_120683c9;
  /* 120683b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120683b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 120683b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120683bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120683be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120683c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120683c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120683c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120683c9:;
  /* 120683c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120683cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120683cf:;
  /* 120683cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120683d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120683d4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120683d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120683da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120683dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120683df div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120683e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120683e5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120683e9 jbe 0x12068401 */
  if ((C.cf||C.zf)) goto L_12068401;
  /* 120683eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120683ee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120683f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120683f4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120683f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120683f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120683fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120683ff jmp 0x12068415 */
  goto L_12068415;
L_12068401:;
  /* 12068401 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068404 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206840a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1206840c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206840f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068412 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12068415:;
  /* 12068415 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068419 ja 0x120683cf */
  if ((!C.cf&&!C.zf)) goto L_120683cf;
  /* 1206841b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206841e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12068421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068424 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068427 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206842a:;
  /* 1206842a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206842d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206842f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12068432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068435 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068438 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206843a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1206843c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206843f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12068442 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12068444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068447 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206844a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206844d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068450 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068453 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12068456 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068459 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206845c jb 0x1206842a */
  if (C.cf) goto L_1206842a;
  /* 1206845e mov esp, ebp */
  ESP = (EBP);
  /* 12068460 pop ebp */
  EBP = (pop32());
  /* 12068461 ret  */
  ESPCHK(0x120683a0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12068470 (63 bytes, 24 insns) */
void f_12068470(void) {
  FTRACE(0x12068470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068470 push ebp */
  push32((uint32_t)(EBP));
  /* 12068471 mov ebp, esp */
  EBP = (ESP);
  /* 12068473 push ecx */
  push32((uint32_t)(ECX));
  /* 12068474 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068478 jne 0x12068489 */
  if (!C.zf) goto L_12068489;
  /* 1206847a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206847e jge 0x12068489 */
  if ((C.sf==C.of)) goto L_12068489;
  /* 12068480 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12068487 jmp 0x12068490 */
  goto L_12068490;
L_12068489:;
  /* 12068489 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12068490:;
  /* 12068490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068493 push eax */
  push32((uint32_t)(EAX));
  /* 12068494 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12068497 push ecx */
  push32((uint32_t)(ECX));
  /* 12068498 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206849b push edx */
  push32((uint32_t)(EDX));
  /* 1206849c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206849f push eax */
  push32((uint32_t)(EAX));
  /* 120684a0 call 0x120683a0 */
  push32(0x120684a5u); f_120683a0();
  /* 120684a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120684a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120684ab mov esp, ebp */
  ESP = (EBP);
  /* 120684ad pop ebp */
  EBP = (pop32());
  /* 120684ae ret  */
  ESPCHK(0x12068470u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x120684b0 (30 bytes, 14 insns) */
void f_120684b0(void) {
  FTRACE(0x120684b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120684b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120684b1 mov ebp, esp */
  EBP = (ESP);
  /* 120684b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120684b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120684b8 push eax */
  push32((uint32_t)(EAX));
  /* 120684b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120684bc push ecx */
  push32((uint32_t)(ECX));
  /* 120684bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120684c0 push edx */
  push32((uint32_t)(EDX));
  /* 120684c1 call 0x120683a0 */
  push32(0x120684c6u); f_120683a0();
  /* 120684c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120684c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120684cc pop ebp */
  EBP = (pop32());
  /* 120684cd ret  */
  ESPCHK(0x120684b0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x120684d0 (72 bytes, 28 insns) */
void f_120684d0(void) {
  FTRACE(0x120684d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120684d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120684d1 mov ebp, esp */
  EBP = (ESP);
  /* 120684d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120684d4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120684d8 jne 0x120684f1 */
  if (!C.zf) goto L_120684f1;
  /* 120684da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120684de jg 0x120684f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120684f1;
  /* 120684e0 jl 0x120684e8 */
  if ((C.sf!=C.of)) goto L_120684e8;
  /* 120684e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120684e6 jae 0x120684f1 */
  if (!C.cf) goto L_120684f1;
L_120684e8:;
  /* 120684e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120684ef jmp 0x120684f8 */
  goto L_120684f8;
L_120684f1:;
  /* 120684f1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120684f8:;
  /* 120684f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120684fb push eax */
  push32((uint32_t)(EAX));
  /* 120684fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120684ff push ecx */
  push32((uint32_t)(ECX));
  /* 12068500 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12068503 push edx */
  push32((uint32_t)(EDX));
  /* 12068504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068507 push eax */
  push32((uint32_t)(EAX));
  /* 12068508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206850b push ecx */
  push32((uint32_t)(ECX));
  /* 1206850c call 0x12068520 */
  push32(0x12068511u); f_12068520();
  /* 12068511 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12068514 mov esp, ebp */
  ESP = (EBP);
  /* 12068516 pop ebp */
  EBP = (pop32());
  /* 12068517 ret  */
  ESPCHK(0x120684d0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12068520 (242 bytes, 91 insns) */
void f_12068520(void) {
  FTRACE(0x12068520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068520 push ebp */
  push32((uint32_t)(EBP));
  /* 12068521 mov ebp, esp */
  EBP = (ESP);
  /* 12068523 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068526 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12068529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206852c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068530 je 0x12068554 */
  if (C.zf) goto L_12068554;
  /* 12068532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068535 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12068538 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206853b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206853e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12068541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068544 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12068546 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068549 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206854c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206854e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12068551 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12068554:;
  /* 12068554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068557 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1206855a:;
  /* 1206855a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206855d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206855f push ecx */
  push32((uint32_t)(ECX));
  /* 12068560 push eax */
  push32((uint32_t)(EAX));
  /* 12068561 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068564 push edx */
  push32((uint32_t)(EDX));
  /* 12068565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068568 push eax */
  push32((uint32_t)(EAX));
  /* 12068569 call 0x1206c4a0 */
  push32(0x1206856eu); f_1206c4a0();
  /* 1206856e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068571 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12068574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12068576 push edx */
  push32((uint32_t)(EDX));
  /* 12068577 push ecx */
  push32((uint32_t)(ECX));
  /* 12068578 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206857b push eax */
  push32((uint32_t)(EAX));
  /* 1206857c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206857f push ecx */
  push32((uint32_t)(ECX));
  /* 12068580 call 0x1206c430 */
  push32(0x12068585u); f_1206c430();
  /* 12068585 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12068588 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1206858b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206858f jbe 0x120685a7 */
  if ((C.cf||C.zf)) goto L_120685a7;
  /* 12068591 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068594 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068597 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206859a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1206859c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206859f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120685a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120685a5 jmp 0x120685bb */
  goto L_120685bb;
L_120685a7:;
  /* 120685a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120685aa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120685ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120685b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120685b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120685bb:;
  /* 120685bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120685bf ja 0x1206855a */
  if ((!C.cf&&!C.zf)) goto L_1206855a;
  /* 120685c1 jb 0x120685c9 */
  if (C.cf) goto L_120685c9;
  /* 120685c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120685c7 ja 0x1206855a */
  if ((!C.cf&&!C.zf)) goto L_1206855a;
L_120685c9:;
  /* 120685c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685cc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120685cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120685d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120685d8:;
  /* 120685d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120685dd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 120685e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120685e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120685e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120685ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120685ed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 120685f0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120685f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120685f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120685f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120685fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120685fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068601 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12068604 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068607 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206860a jb 0x120685d8 */
  if (C.cf) goto L_120685d8;
  /* 1206860c mov esp, ebp */
  ESP = (EBP);
  /* 1206860e pop ebp */
  EBP = (pop32());
  /* 1206860f ret 0x14 */
  ESPCHK(0x12068520u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12068620 (31 bytes, 15 insns) */
void f_12068620(void) {
  FTRACE(0x12068620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068620 push ebp */
  push32((uint32_t)(EBP));
  /* 12068621 mov ebp, esp */
  EBP = (ESP);
  /* 12068623 push 0 */
  push32((uint32_t)(0x0u));
  /* 12068625 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12068628 push eax */
  push32((uint32_t)(EAX));
  /* 12068629 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206862c push ecx */
  push32((uint32_t)(ECX));
  /* 1206862d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068630 push edx */
  push32((uint32_t)(EDX));
  /* 12068631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068634 push eax */
  push32((uint32_t)(EAX));
  /* 12068635 call 0x12068520 */
  push32(0x1206863au); f_12068520();
  /* 1206863a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206863d pop ebp */
  EBP = (pop32());
  /* 1206863e ret  */
  ESPCHK(0x12068620u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12068640 (123 bytes, 44 insns) */
void f_12068640(void) {
  FTRACE(0x12068640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068640 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12068644 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1206864a je 0x12068660 */
  if (C.zf) goto L_12068660;
L_1206864c:;
  /* 1206864c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1206864e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1206864f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12068651 je 0x12068693 */
  if (C.zf) goto L_12068693;
  /* 12068653 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12068659 jne 0x1206864c */
  if (!C.zf) goto L_1206864c;
  /* 1206865b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12068660:;
  /* 12068660 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12068662 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12068667 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068669 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206866c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206866e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068671 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12068676 je 0x12068660 */
  if (C.zf) goto L_12068660;
  /* 12068678 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1206867b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1206867d je 0x120686b1 */
  if (C.zf) goto L_120686b1;
  /* 1206867f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12068681 je 0x120686a7 */
  if (C.zf) goto L_120686a7;
  /* 12068683 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12068688 je 0x1206869d */
  if (C.zf) goto L_1206869d;
  /* 1206868a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1206868f je 0x12068693 */
  if (C.zf) goto L_12068693;
  /* 12068691 jmp 0x12068660 */
  goto L_12068660;
L_12068693:;
  /* 12068693 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12068696 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1206869a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206869c ret  */
  ESPCHK(0x12068640u, _esp0);
  ESP += 4; return;
L_1206869d:;
  /* 1206869d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 120686a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120686a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120686a6 ret  */
  ESPCHK(0x12068640u, _esp0);
  ESP += 4; return;
L_120686a7:;
  /* 120686a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 120686aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120686ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120686b0 ret  */
  ESPCHK(0x12068640u, _esp0);
  ESP += 4; return;
L_120686b1:;
  /* 120686b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 120686b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120686b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120686ba ret  */
  ESPCHK(0x12068640u, _esp0);
  ESP += 4; return;
}

/* FUN_100086c0 @ 0x120686c0 (249 bytes, 93 insns) */
void f_120686c0(void) {
  FTRACE(0x120686c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120686c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120686c1 mov ebp, esp */
  EBP = (ESP);
  /* 120686c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120686c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120686c7 push esi */
  push32((uint32_t)(ESI));
  /* 120686c8 push edi */
  push32((uint32_t)(EDI));
  /* 120686c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120686cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120686cf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 120686d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_120686d5:;
  /* 120686d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120686d9 jne 0x120686f9 */
  if (!C.zf) goto L_120686f9;
  /* 120686db push 0x1208cf84 */
  push32((uint32_t)(0x1208cf84u));
  /* 120686e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120686e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 120686e4 push 0x1208cf78 */
  push32((uint32_t)(0x1208cf78u));
  /* 120686e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120686eb call 0x120648d0 */
  push32(0x120686f0u); f_120648d0();
  /* 120686f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120686f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120686f6 jne 0x120686f9 */
  if (!C.zf) goto L_120686f9;
  /* 120686f8 int3  */
  x86_unimpl("int3 @ 0x120686f8");
L_120686f9:;
  /* 120686f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120686fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120686fd jne 0x120686d5 */
  if (!C.zf) goto L_120686d5;
L_120686ff:;
  /* 120686ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068703 jne 0x12068723 */
  if (!C.zf) goto L_12068723;
  /* 12068705 push 0x1208cf68 */
  push32((uint32_t)(0x1208cf68u));
  /* 1206870a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206870c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1206870e push 0x1208cf78 */
  push32((uint32_t)(0x1208cf78u));
  /* 12068713 push 2 */
  push32((uint32_t)(0x2u));
  /* 12068715 call 0x120648d0 */
  push32(0x1206871au); f_120648d0();
  /* 1206871a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206871d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068720 jne 0x12068723 */
  if (!C.zf) goto L_12068723;
  /* 12068722 int3  */
  x86_unimpl("int3 @ 0x12068722");
L_12068723:;
  /* 12068723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12068725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12068727 jne 0x120686ff */
  if (!C.zf) goto L_120686ff;
  /* 12068729 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206872c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12068733 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068739 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1206873c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206873f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068742 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12068744 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068747 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206874a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1206874d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12068750 push edx */
  push32((uint32_t)(EDX));
  /* 12068751 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12068754 push eax */
  push32((uint32_t)(EAX));
  /* 12068755 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068758 push ecx */
  push32((uint32_t)(ECX));
  /* 12068759 call 0x1206c7a0 */
  push32(0x1206875eu); f_1206c7a0();
  /* 1206875e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068761 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12068764 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068767 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206876a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206876d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068770 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12068773 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068776 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206877a jl 0x1206879e */
  if ((C.sf!=C.of)) goto L_1206879e;
  /* 1206877c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206877f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12068781 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12068784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12068786 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206878c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1206878f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068792 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12068794 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068797 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206879a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1206879c jmp 0x120687af */
  goto L_120687af;
L_1206879e:;
  /* 1206879e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120687a1 push eax */
  push32((uint32_t)(EAX));
  /* 120687a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120687a4 call 0x1206c520 */
  push32(0x120687a9u); f_1206c520();
  /* 120687a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120687ac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_120687af:;
  /* 120687af mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120687b2 pop edi */
  EDI = (pop32());
  /* 120687b3 pop esi */
  ESI = (pop32());
  /* 120687b4 pop ebx */
  EBX = (pop32());
  /* 120687b5 mov esp, ebp */
  ESP = (EBP);
  /* 120687b7 pop ebp */
  EBP = (pop32());
  /* 120687b8 ret  */
  ESPCHK(0x120686c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x120687c0 (7 bytes, 3 insns) */
void f_120687c0(void) {
  FTRACE(0x120687c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120687c0 push edi */
  push32((uint32_t)(EDI));
  /* 120687c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 120687c5 jmp 0x12068831 */
  jmp_ind(0x12068831u); return;
}

/* FUN_100087d0 @ 0x120687d0 (224 bytes, 84 insns) */
void f_120687d0(void) {
  FTRACE(0x120687d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120687d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120687d4 push edi */
  push32((uint32_t)(EDI));
  /* 120687d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120687db je 0x120687ec */
  if (C.zf) goto L_120687ec;
L_120687dd:;
  /* 120687dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120687df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120687e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120687e2 je 0x1206881f */
  if (C.zf) goto L_1206881f;
  /* 120687e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120687ea jne 0x120687dd */
  if (!C.zf) goto L_120687dd;
L_120687ec:;
  /* 120687ec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120687ee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120687f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120687f5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120687f8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120687fa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120687fd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12068802 je 0x120687ec */
  if (C.zf) goto L_120687ec;
  /* 12068804 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12068807 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12068809 je 0x1206882e */
  if (C.zf) goto L_1206882e;
  /* 1206880b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1206880d je 0x12068829 */
  if (C.zf) goto L_12068829;
  /* 1206880f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12068814 je 0x12068824 */
  if (C.zf) goto L_12068824;
  /* 12068816 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1206881b je 0x1206881f */
  if (C.zf) goto L_1206881f;
  /* 1206881d jmp 0x120687ec */
  goto L_120687ec;
L_1206881f:;
  /* 1206881f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12068822 jmp 0x12068831 */
  goto L_12068831;
L_12068824:;
  /* 12068824 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12068827 jmp 0x12068831 */
  goto L_12068831;
L_12068829:;
  /* 12068829 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1206882c jmp 0x12068831 */
  goto L_12068831;
L_1206882e:;
  /* 1206882e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12068831:;
  /* 12068831 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12068835 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1206883b je 0x12068856 */
  if (C.zf) goto L_12068856;
L_1206883d:;
  /* 1206883d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206883f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12068840 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12068842 je 0x120688a8 */
  if (C.zf) goto L_120688a8;
  /* 12068844 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12068846 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12068847 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1206884d jne 0x1206883d */
  if (!C.zf) goto L_1206883d;
  /* 1206884f jmp 0x12068856 */
  goto L_12068856;
L_12068851:;
  /* 12068851 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12068853 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12068856:;
  /* 12068856 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1206885b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1206885d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206885f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12068862 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12068864 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12068866 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068869 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1206886e je 0x12068851 */
  if (C.zf) goto L_12068851;
  /* 12068870 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12068872 je 0x120688a8 */
  if (C.zf) goto L_120688a8;
  /* 12068874 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12068876 je 0x1206889f */
  if (C.zf) goto L_1206889f;
  /* 12068878 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1206887e je 0x12068892 */
  if (C.zf) goto L_12068892;
  /* 12068880 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12068886 je 0x1206888a */
  if (C.zf) goto L_1206888a;
  /* 12068888 jmp 0x12068851 */
  goto L_12068851;
L_1206888a:;
  /* 1206888a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1206888c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12068890 pop edi */
  EDI = (pop32());
  /* 12068891 ret  */
  ESPCHK(0x120687d0u, _esp0);
  ESP += 4; return;
L_12068892:;
  /* 12068892 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12068895 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12068899 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1206889d pop edi */
  EDI = (pop32());
  /* 1206889e ret  */
  ESPCHK(0x120687d0u, _esp0);
  ESP += 4; return;
L_1206889f:;
  /* 1206889f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 120688a2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120688a6 pop edi */
  EDI = (pop32());
  /* 120688a7 ret  */
  ESPCHK(0x120687d0u, _esp0);
  ESP += 4; return;
L_120688a8:;
  /* 120688a8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 120688aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120688ae pop edi */
  EDI = (pop32());
  /* 120688af ret  */
  ESPCHK(0x120687d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088b0 @ 0x120688b0 (243 bytes, 91 insns) */
void f_120688b0(void) {
  FTRACE(0x120688b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120688b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120688b1 mov ebp, esp */
  EBP = (ESP);
  /* 120688b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120688b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120688b7 push esi */
  push32((uint32_t)(ESI));
  /* 120688b8 push edi */
  push32((uint32_t)(EDI));
  /* 120688b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120688bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120688bf:;
  /* 120688bf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120688c3 jne 0x120688e3 */
  if (!C.zf) goto L_120688e3;
  /* 120688c5 push 0x1208cf84 */
  push32((uint32_t)(0x1208cf84u));
  /* 120688ca push 0 */
  push32((uint32_t)(0x0u));
  /* 120688cc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 120688ce push 0x1208cf94 */
  push32((uint32_t)(0x1208cf94u));
  /* 120688d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120688d5 call 0x120648d0 */
  push32(0x120688dau); f_120648d0();
  /* 120688da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120688dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120688e0 jne 0x120688e3 */
  if (!C.zf) goto L_120688e3;
  /* 120688e2 int3  */
  x86_unimpl("int3 @ 0x120688e2");
L_120688e3:;
  /* 120688e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120688e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120688e7 jne 0x120688bf */
  if (!C.zf) goto L_120688bf;
L_120688e9:;
  /* 120688e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120688ed jne 0x1206890d */
  if (!C.zf) goto L_1206890d;
  /* 120688ef push 0x1208cf68 */
  push32((uint32_t)(0x1208cf68u));
  /* 120688f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120688f6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 120688f8 push 0x1208cf94 */
  push32((uint32_t)(0x1208cf94u));
  /* 120688fd push 2 */
  push32((uint32_t)(0x2u));
  /* 120688ff call 0x120648d0 */
  push32(0x12068904u); f_120648d0();
  /* 12068904 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068907 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206890a jne 0x1206890d */
  if (!C.zf) goto L_1206890d;
  /* 1206890c int3  */
  x86_unimpl("int3 @ 0x1206890c");
L_1206890d:;
  /* 1206890d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206890f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12068911 jne 0x120688e9 */
  if (!C.zf) goto L_120688e9;
  /* 12068913 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068916 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1206891d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068923 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12068926 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206892c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1206892e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068931 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068934 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12068937 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206893a push ecx */
  push32((uint32_t)(ECX));
  /* 1206893b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206893e push edx */
  push32((uint32_t)(EDX));
  /* 1206893f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068942 push eax */
  push32((uint32_t)(EAX));
  /* 12068943 call 0x1206c7a0 */
  push32(0x12068948u); f_1206c7a0();
  /* 12068948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206894b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206894e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068951 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12068954 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068957 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206895a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1206895d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068960 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068964 jl 0x12068988 */
  if ((C.sf!=C.of)) goto L_12068988;
  /* 12068966 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068969 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206896b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1206896e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12068970 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12068976 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12068979 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206897c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206897e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068981 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12068984 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12068986 jmp 0x12068999 */
  goto L_12068999;
L_12068988:;
  /* 12068988 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206898b push edx */
  push32((uint32_t)(EDX));
  /* 1206898c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206898e call 0x1206c520 */
  push32(0x12068993u); f_1206c520();
  /* 12068993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068996 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12068999:;
  /* 12068999 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206899c pop edi */
  EDI = (pop32());
  /* 1206899d pop esi */
  ESI = (pop32());
  /* 1206899e pop ebx */
  EBX = (pop32());
  /* 1206899f mov esp, ebp */
  ESP = (EBP);
  /* 120689a1 pop ebp */
  EBP = (pop32());
  /* 120689a2 ret  */
  ESPCHK(0x120688b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x120689b0 (47 bytes, 17 insns) */
void f_120689b0(void) {
  FTRACE(0x120689b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120689b0 push ecx */
  push32((uint32_t)(ECX));
  /* 120689b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120689b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 120689ba jb 0x120689d0 */
  if (C.cf) goto L_120689d0;
L_120689bc:;
  /* 120689bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120689c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120689c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 120689c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120689ce jae 0x120689bc */
  if (!C.cf) goto L_120689bc;
L_120689d0:;
  /* 120689d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120689d2 mov eax, esp */
  EAX = (ESP);
  /* 120689d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 120689d6 mov esp, ecx */
  ESP = (ECX);
  /* 120689d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120689da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 120689dd push eax */
  push32((uint32_t)(EAX));
  /* 120689de ret  */
  ESPCHK(0x120689b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x120689e0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_120689e0(void) {
  FTRACE(0x120689e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120689e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120689e1 mov ebp, esp */
  EBP = (ESP);
  /* 120689e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120689e6 push esi */
  push32((uint32_t)(ESI));
  /* 120689e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120689eb je 0x120689f3 */
  if (C.zf) goto L_120689f3;
  /* 120689ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120689f1 jne 0x120689f8 */
  if (!C.zf) goto L_120689f8;
L_120689f3:;
  /* 120689f3 jmp 0x12068bc8 */
  goto L_12068bc8;
L_120689f8:;
  /* 120689f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120689fc je 0x12068a14 */
  if (C.zf) goto L_12068a14;
  /* 120689fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a02 je 0x12068a14 */
  if (C.zf) goto L_12068a14;
  /* 12068a04 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a08 je 0x12068a14 */
  if (C.zf) goto L_12068a14;
  /* 12068a0a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a0e jne 0x12068af1 */
  if (!C.zf) goto L_12068af1;
L_12068a14:;
  /* 12068a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068a16 call 0x12069210 */
  push32(0x12068a1bu); f_12069210();
  /* 12068a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068a1e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a22 je 0x12068a2a */
  if (C.zf) goto L_12068a2a;
  /* 12068a24 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a28 jne 0x12068a6f */
  if (!C.zf) goto L_12068a6f;
L_12068a2a:;
  /* 12068a2a cmp dword ptr [0x1209172c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1209172c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a31 jne 0x12068a6f */
  if (!C.zf) goto L_12068a6f;
  /* 12068a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068a35 push 0x12068c10 */
  push32((uint32_t)(0x12068c10u));
  /* 12068a3a call dword ptr [0x1209434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209434c))), 0x12068a40u);
  /* 12068a40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a43 jne 0x12068a51 */
  if (!C.zf) goto L_12068a51;
  /* 12068a45 mov dword ptr [0x1209172c], 1 */
  w32((uint32_t)(0x1209172c), (0x1u));
  /* 12068a4f jmp 0x12068a6f */
  goto L_12068a6f;
L_12068a51:;
  /* 12068a51 call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x12068a57u);
  /* 12068a57 mov esi, eax */
  ESI = (EAX);
  /* 12068a59 call 0x1206d6f0 */
  push32(0x12068a5eu); f_1206d6f0();
  /* 12068a5e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12068a60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068a62 call 0x120692b0 */
  push32(0x12068a67u); f_120692b0();
  /* 12068a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068a6a jmp 0x12068bc8 */
  goto L_12068bc8;
L_12068a6f:;
  /* 12068a6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068a72 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12068a75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12068a78 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068a7b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12068a7e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068a82 ja 0x12068ae2 */
  if ((!C.cf&&!C.zf)) goto L_12068ae2;
  /* 12068a84 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12068a87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12068a89 mov dl, byte ptr [eax + 0x12068bef] */
  DL = (r8((uint32_t)(EAX + 0x12068bef)));
  /* 12068a8f jmp dword ptr [edx*4 + 0x12068bdb] */
  switch (EDX) {
    case 0: goto L_12068a96;
    case 1: goto L_12068ad0;
    case 2: goto L_12068aaa;
    case 3: goto L_12068abd;
    case 4: goto L_12068ae2;
    default: x86_unimpl("switch@0x12068a8f out of table"); return;
  }
L_12068a96:;
  /* 12068a96 mov ecx, dword ptr [0x1209171c] */
  ECX = (r32((uint32_t)(0x1209171c)));
  /* 12068a9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12068a9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068aa2 mov dword ptr [0x1209171c], edx */
  w32((uint32_t)(0x1209171c), (EDX));
  /* 12068aa8 jmp 0x12068ae2 */
  goto L_12068ae2;
L_12068aaa:;
  /* 12068aaa mov eax, dword ptr [0x12091720] */
  EAX = (r32((uint32_t)(0x12091720)));
  /* 12068aaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068ab2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068ab5 mov dword ptr [0x12091720], ecx */
  w32((uint32_t)(0x12091720), (ECX));
  /* 12068abb jmp 0x12068ae2 */
  goto L_12068ae2;
L_12068abd:;
  /* 12068abd mov edx, dword ptr [0x12091724] */
  EDX = (r32((uint32_t)(0x12091724)));
  /* 12068ac3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12068ac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068ac9 mov dword ptr [0x12091724], eax */
  w32((uint32_t)(0x12091724), (EAX));
  /* 12068ace jmp 0x12068ae2 */
  goto L_12068ae2;
L_12068ad0:;
  /* 12068ad0 mov ecx, dword ptr [0x12091728] */
  ECX = (r32((uint32_t)(0x12091728)));
  /* 12068ad6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12068ad9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068adc mov dword ptr [0x12091728], edx */
  w32((uint32_t)(0x12091728), (EDX));
L_12068ae2:;
  /* 12068ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068ae4 call 0x120692b0 */
  push32(0x12068ae9u); f_120692b0();
  /* 12068ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068aec jmp 0x12068bc3 */
  goto L_12068bc3;
L_12068af1:;
  /* 12068af1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068af5 je 0x12068b08 */
  if (C.zf) goto L_12068b08;
  /* 12068af7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068afb je 0x12068b08 */
  if (C.zf) goto L_12068b08;
  /* 12068afd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068b01 je 0x12068b08 */
  if (C.zf) goto L_12068b08;
  /* 12068b03 jmp 0x12068bc8 */
  goto L_12068bc8;
L_12068b08:;
  /* 12068b08 call 0x12065250 */
  push32(0x12068b0du); f_12065250();
  /* 12068b0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12068b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068b13 cmp dword ptr [eax + 0x50], 0x1208fc10 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1208fc10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068b1a jne 0x12068b65 */
  if (!C.zf) goto L_12068b65;
  /* 12068b1c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12068b21 push 0x1208cfa0 */
  push32((uint32_t)(0x1208cfa0u));
  /* 12068b26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12068b28 mov ecx, dword ptr [0x1208fc90] */
  ECX = (r32((uint32_t)(0x1208fc90)));
  /* 12068b2e push ecx */
  push32((uint32_t)(ECX));
  /* 12068b2f call 0x12065810 */
  push32(0x12068b34u); f_12065810();
  /* 12068b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068b37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068b3a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12068b3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068b40 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068b44 je 0x12068b63 */
  if (C.zf) goto L_12068b63;
  /* 12068b46 mov ecx, dword ptr [0x1208fc90] */
  ECX = (r32((uint32_t)(0x1208fc90)));
  /* 12068b4c push ecx */
  push32((uint32_t)(ECX));
  /* 12068b4d push 0x1208fc10 */
  push32((uint32_t)(0x1208fc10u));
  /* 12068b52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068b55 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12068b58 push eax */
  push32((uint32_t)(EAX));
  /* 12068b59 call 0x1206c0f0 */
  push32(0x12068b5eu); f_1206c0f0();
  /* 12068b5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068b61 jmp 0x12068b65 */
  goto L_12068b65;
L_12068b63:;
  /* 12068b63 jmp 0x12068bc8 */
  goto L_12068bc8;
L_12068b65:;
  /* 12068b65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068b68 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12068b6b push edx */
  push32((uint32_t)(EDX));
  /* 12068b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068b6f push eax */
  push32((uint32_t)(EAX));
  /* 12068b70 call 0x12068ef0 */
  push32(0x12068b75u); f_12068ef0();
  /* 12068b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068b78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12068b7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068b7f jne 0x12068b83 */
  if (!C.zf) goto L_12068b83;
  /* 12068b81 jmp 0x12068bc8 */
  goto L_12068bc8;
L_12068b83:;
  /* 12068b83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068b86 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12068b89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12068b8c:;
  /* 12068b8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068b8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12068b92 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068b95 jne 0x12068bc3 */
  if (!C.zf) goto L_12068bc3;
  /* 12068b97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068b9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068b9d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12068ba0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068ba3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068ba6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12068ba9 mov edx, dword ptr [0x1208fc94] */
  EDX = (r32((uint32_t)(0x1208fc94)));
  /* 12068baf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12068bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068bb5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12068bb8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068bba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068bbd jb 0x12068bc1 */
  if (C.cf) goto L_12068bc1;
  /* 12068bbf jmp 0x12068bc3 */
  goto L_12068bc3;
L_12068bc1:;
  /* 12068bc1 jmp 0x12068b8c */
  goto L_12068b8c;
L_12068bc3:;
  /* 12068bc3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068bc6 jmp 0x12068bd6 */
  goto L_12068bd6;
L_12068bc8:;
  /* 12068bc8 call 0x1206d6e0 */
  push32(0x12068bcdu); f_1206d6e0();
  /* 12068bcd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12068bd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12068bd6:;
  /* 12068bd6 pop esi */
  ESI = (pop32());
  /* 12068bd7 mov esp, ebp */
  ESP = (EBP);
  /* 12068bd9 pop ebp */
  EBP = (pop32());
  /* 12068bda ret  */
  ESPCHK(0x120689e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x12068c10 (146 bytes, 45 insns) */
void f_12068c10(void) {
  FTRACE(0x12068c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12068c11 mov ebp, esp */
  EBP = (ESP);
  /* 12068c13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068c16 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068c18 call 0x12069210 */
  push32(0x12068c1du); f_12069210();
  /* 12068c1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068c20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068c24 jne 0x12068c3e */
  if (!C.zf) goto L_12068c3e;
  /* 12068c26 mov dword ptr [ebp - 8], 0x1209171c */
  w32((uint32_t)(EBP + -0x8), (0x1209171cu));
  /* 12068c2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068c30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12068c32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12068c35 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12068c3c jmp 0x12068c54 */
  goto L_12068c54;
L_12068c3e:;
  /* 12068c3e mov dword ptr [ebp - 8], 0x12091720 */
  w32((uint32_t)(EBP + -0x8), (0x12091720u));
  /* 12068c45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068c48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12068c4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068c4d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12068c54:;
  /* 12068c54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068c58 jne 0x12068c68 */
  if (!C.zf) goto L_12068c68;
  /* 12068c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12068c5c call 0x120692b0 */
  push32(0x12068c61u); f_120692b0();
  /* 12068c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12068c66 jmp 0x12068c9c */
  goto L_12068c9c;
L_12068c68:;
  /* 12068c68 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068c6c je 0x12068c8d */
  if (C.zf) goto L_12068c8d;
  /* 12068c6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068c71 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12068c77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068c79 call 0x120692b0 */
  push32(0x12068c7eu); f_120692b0();
  /* 12068c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068c81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068c84 push edx */
  push32((uint32_t)(EDX));
  /* 12068c85 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12068c88u);
  /* 12068c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068c8b jmp 0x12068c97 */
  goto L_12068c97;
L_12068c8d:;
  /* 12068c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12068c8f call 0x120692b0 */
  push32(0x12068c94u); f_120692b0();
  /* 12068c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068c97:;
  /* 12068c97 mov eax, 1 */
  EAX = (0x1u);
L_12068c9c:;
  /* 12068c9c mov esp, ebp */
  ESP = (EBP);
  /* 12068c9e pop ebp */
  EBP = (pop32());
  /* 12068c9f ret 4 */
  ESPCHK(0x12068c10u, _esp0);
  ESP += 8; return;
}

/* FUN_10008cb0 @ 0x12068cb0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12068cb0(void) {
  FTRACE(0x12068cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12068cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12068cb3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068cb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12068cbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068cc0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12068cc3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12068cc6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068cc9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12068ccc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068cd0 ja 0x12068d7e */
  if ((!C.cf&&!C.zf)) goto L_12068d7e;
  /* 12068cd6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12068cd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12068cdb mov dl, byte ptr [eax + 0x12068ed2] */
  DL = (r8((uint32_t)(EAX + 0x12068ed2)));
  /* 12068ce1 jmp dword ptr [edx*4 + 0x12068eba] */
  switch (EDX) {
    case 0: goto L_12068ce8;
    case 1: goto L_12068d53;
    case 2: goto L_12068d39;
    case 3: goto L_12068d05;
    case 4: goto L_12068d1f;
    case 5: goto L_12068d7e;
    default: x86_unimpl("switch@0x12068ce1 out of table"); return;
  }
L_12068ce8:;
  /* 12068ce8 mov dword ptr [ebp - 0x18], 0x1209171c */
  w32((uint32_t)(EBP + -0x18), (0x1209171cu));
  /* 12068cef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12068cf2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12068cf4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12068cf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068cfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068cfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068d00 jmp 0x12068d86 */
  goto L_12068d86;
L_12068d05:;
  /* 12068d05 mov dword ptr [ebp - 0x18], 0x12091720 */
  w32((uint32_t)(EBP + -0x18), (0x12091720u));
  /* 12068d0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12068d0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12068d11 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12068d14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068d17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068d1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068d1d jmp 0x12068d86 */
  goto L_12068d86;
L_12068d1f:;
  /* 12068d1f mov dword ptr [ebp - 0x18], 0x12091724 */
  w32((uint32_t)(EBP + -0x18), (0x12091724u));
  /* 12068d26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12068d29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12068d2b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12068d2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068d31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068d34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068d37 jmp 0x12068d86 */
  goto L_12068d86;
L_12068d39:;
  /* 12068d39 mov dword ptr [ebp - 0x18], 0x12091728 */
  w32((uint32_t)(EBP + -0x18), (0x12091728u));
  /* 12068d40 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12068d43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12068d45 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12068d48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12068d4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068d4e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12068d51 jmp 0x12068d86 */
  goto L_12068d86;
L_12068d53:;
  /* 12068d53 call 0x12065250 */
  push32(0x12068d58u); f_12065250();
  /* 12068d58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12068d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068d5e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12068d61 push edx */
  push32((uint32_t)(EDX));
  /* 12068d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068d65 push eax */
  push32((uint32_t)(EAX));
  /* 12068d66 call 0x12068ef0 */
  push32(0x12068d6bu); f_12068ef0();
  /* 12068d6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068d6e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068d71 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12068d74 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12068d77 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12068d79 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12068d7c jmp 0x12068d86 */
  goto L_12068d86;
L_12068d7e:;
  /* 12068d7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12068d81 jmp 0x12068eb6 */
  goto L_12068eb6;
L_12068d86:;
  /* 12068d86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068d8a je 0x12068d96 */
  if (C.zf) goto L_12068d96;
  /* 12068d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12068d8e call 0x12069210 */
  push32(0x12068d93u); f_12069210();
  /* 12068d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068d96:;
  /* 12068d96 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068d9a jne 0x12068db3 */
  if (!C.zf) goto L_12068db3;
  /* 12068d9c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068da0 je 0x12068dac */
  if (C.zf) goto L_12068dac;
  /* 12068da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12068da4 call 0x120692b0 */
  push32(0x12068da9u); f_120692b0();
  /* 12068da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068dac:;
  /* 12068dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12068dae jmp 0x12068eb6 */
  goto L_12068eb6;
L_12068db3:;
  /* 12068db3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068db7 jne 0x12068dd0 */
  if (!C.zf) goto L_12068dd0;
  /* 12068db9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068dbd je 0x12068dc9 */
  if (C.zf) goto L_12068dc9;
  /* 12068dbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12068dc1 call 0x120692b0 */
  push32(0x12068dc6u); f_120692b0();
  /* 12068dc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068dc9:;
  /* 12068dc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12068dcb call 0x12064fd0 */
  push32(0x12068dd0u); f_12064fd0();
L_12068dd0:;
  /* 12068dd0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068dd4 je 0x12068de2 */
  if (C.zf) goto L_12068de2;
  /* 12068dd6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068dda je 0x12068de2 */
  if (C.zf) goto L_12068de2;
  /* 12068ddc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068de0 jne 0x12068e0e */
  if (!C.zf) goto L_12068e0e;
L_12068de2:;
  /* 12068de2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068de5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12068de8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12068deb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068dee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12068df5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068df9 jne 0x12068e0e */
  if (!C.zf) goto L_12068e0e;
  /* 12068dfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068dfe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12068e01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12068e04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068e07 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12068e0e:;
  /* 12068e0e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e12 jne 0x12068e50 */
  if (!C.zf) goto L_12068e50;
  /* 12068e14 mov eax, dword ptr [0x1208fc88] */
  EAX = (r32((uint32_t)(0x1208fc88)));
  /* 12068e19 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12068e1c jmp 0x12068e27 */
  goto L_12068e27;
L_12068e1e:;
  /* 12068e1e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12068e21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068e24 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12068e27:;
  /* 12068e27 mov edx, dword ptr [0x1208fc88] */
  EDX = (r32((uint32_t)(0x1208fc88)));
  /* 12068e2d add edx, dword ptr [0x1208fc8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1208fc8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068e33 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e36 jge 0x12068e4e */
  if ((C.sf==C.of)) goto L_12068e4e;
  /* 12068e38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12068e3b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12068e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068e41 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12068e44 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12068e4c jmp 0x12068e1e */
  goto L_12068e1e;
L_12068e4e:;
  /* 12068e4e jmp 0x12068e59 */
  goto L_12068e59;
L_12068e50:;
  /* 12068e50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12068e53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12068e59:;
  /* 12068e59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e5d je 0x12068e69 */
  if (C.zf) goto L_12068e69;
  /* 12068e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12068e61 call 0x120692b0 */
  push32(0x12068e66u); f_120692b0();
  /* 12068e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068e69:;
  /* 12068e69 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e6d jne 0x12068e80 */
  if (!C.zf) goto L_12068e80;
  /* 12068e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068e72 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12068e75 push edx */
  push32((uint32_t)(EDX));
  /* 12068e76 push 8 */
  push32((uint32_t)(0x8u));
  /* 12068e78 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12068e7bu);
  /* 12068e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12068e7e jmp 0x12068e8a */
  goto L_12068e8a;
L_12068e80:;
  /* 12068e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12068e83 push eax */
  push32((uint32_t)(EAX));
  /* 12068e84 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12068e87u);
  /* 12068e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12068e8a:;
  /* 12068e8a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e8e je 0x12068e9c */
  if (C.zf) goto L_12068e9c;
  /* 12068e90 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e94 je 0x12068e9c */
  if (C.zf) goto L_12068e9c;
  /* 12068e96 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068e9a jne 0x12068eb4 */
  if (!C.zf) goto L_12068eb4;
L_12068e9c:;
  /* 12068e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068e9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12068ea2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12068ea5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068ea9 jne 0x12068eb4 */
  if (!C.zf) goto L_12068eb4;
  /* 12068eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068eae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068eb1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12068eb4:;
  /* 12068eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12068eb6:;
  /* 12068eb6 mov esp, ebp */
  ESP = (EBP);
  /* 12068eb8 pop ebp */
  EBP = (pop32());
  /* 12068eb9 ret  */
  ESPCHK(0x12068cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x12068ef0 (91 bytes, 35 insns) */
void f_12068ef0(void) {
  FTRACE(0x12068ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12068ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12068ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12068ef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068ef7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12068efa:;
  /* 12068efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068efd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12068f00 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068f03 je 0x12068f23 */
  if (C.zf) goto L_12068f23;
  /* 12068f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068f08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068f0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12068f0e mov ecx, dword ptr [0x1208fc94] */
  ECX = (r32((uint32_t)(0x1208fc94)));
  /* 12068f14 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12068f17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068f1a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068f1c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068f1f jae 0x12068f23 */
  if (!C.cf) goto L_12068f23;
  /* 12068f21 jmp 0x12068efa */
  goto L_12068efa;
L_12068f23:;
  /* 12068f23 mov eax, dword ptr [0x1208fc94] */
  EAX = (r32((uint32_t)(0x1208fc94)));
  /* 12068f28 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12068f2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12068f2e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068f30 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068f33 jae 0x12068f45 */
  if (!C.cf) goto L_12068f45;
  /* 12068f35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068f38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12068f3b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068f3e jne 0x12068f45 */
  if (!C.zf) goto L_12068f45;
  /* 12068f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12068f43 jmp 0x12068f47 */
  goto L_12068f47;
L_12068f45:;
  /* 12068f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12068f47:;
  /* 12068f47 mov esp, ebp */
  ESP = (EBP);
  /* 12068f49 pop ebp */
  EBP = (pop32());
  /* 12068f4a ret  */
  ESPCHK(0x12068ef0u, _esp0);
  ESP += 4; return;
}

