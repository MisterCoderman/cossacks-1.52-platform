#include "recomp.h"

/* thunk_FUN_100017a0 @ 0x12c41005 (5 bytes, 1 insns) */
void f_12c41005(void) {
  FTRACE(0x12c41005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41005 jmp 0x12c417a0 */
  f_12c417a0(); return;
}

/* OnInit @ 0x12c4100a (5 bytes, 1 insns) */
void f_12c4100a(void) {
  FTRACE(0x12c4100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4100a jmp 0x12c411b0 */
  f_12c411b0(); return;
}

/* thunk_FUN_10001130 @ 0x12c4100f (5 bytes, 1 insns) */
void f_12c4100f(void) {
  FTRACE(0x12c4100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4100f jmp 0x12c41130 */
  f_12c41130(); return;
}

/* thunk_FUN_10001050 @ 0x12c41014 (5 bytes, 1 insns) */
void f_12c41014(void) {
  FTRACE(0x12c41014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41014 jmp 0x12c41050 */
  f_12c41050(); return;
}

/* thunk_FUN_100010b0 @ 0x12c41019 (5 bytes, 1 insns) */
void f_12c41019(void) {
  FTRACE(0x12c41019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41019 jmp 0x12c410b0 */
  f_12c410b0(); return;
}

/* ProcessScenary @ 0x12c4101e (5 bytes, 1 insns) */
void f_12c4101e(void) {
  FTRACE(0x12c4101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4101e jmp 0x12c41390 */
  f_12c41390(); return;
}

/* FUN_10001050 @ 0x12c41050 (67 bytes, 26 insns) */
void f_12c41050(void) {
  FTRACE(0x12c41050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41050 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41051 mov ebp, esp */
  EBP = (ESP);
  /* 12c41053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c41056 push ebx */
  push32((uint32_t)(EBX));
  /* 12c41057 push esi */
  push32((uint32_t)(ESI));
  /* 12c41058 push edi */
  push32((uint32_t)(EDI));
  /* 12c41059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12c4105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12c41061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c41066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c41068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41072 je 0x12c41076 */
  if (C.zf) goto L_12c41076;
  /* 12c41074 jmp 0x12c4107b */
  goto L_12c4107b;
L_12c41076:;
  /* 12c41076 call 0x12c4100a */
  push32(0x12c4107bu); f_12c4100a();
L_12c4107b:;
  /* 12c4107b mov eax, 1 */
  EAX = (0x1u);
  /* 12c41080 pop edi */
  EDI = (pop32());
  /* 12c41081 pop esi */
  ESI = (pop32());
  /* 12c41082 pop ebx */
  EBX = (pop32());
  /* 12c41083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41088 call 0x12c41840 */
  push32(0x12c4108du); f_12c41840();
  /* 12c4108d mov esp, ebp */
  ESP = (EBP);
  /* 12c4108f pop ebp */
  EBP = (pop32());
  /* 12c41090 ret 0xc */
  ESPCHK(0x12c41050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x12c410b0 (92 bytes, 34 insns) */
void f_12c410b0(void) {
  FTRACE(0x12c410b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c410b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c410b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c410b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c410b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c410b7 push esi */
  push32((uint32_t)(ESI));
  /* 12c410b8 push edi */
  push32((uint32_t)(EDI));
  /* 12c410b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c410bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c410c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c410c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c410c8 mov esi, esp */
  ESI = (ESP);
  /* 12c410ca call dword ptr [0x12c703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703cc))), 0x12c410d0u);
  /* 12c410d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c410d2 call 0x12c41840 */
  push32(0x12c410d7u); f_12c41840();
  /* 12c410d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c410d9 jne 0x12c410ec */
  if (!C.zf) goto L_12c410ec;
  /* 12c410db mov esi, esp */
  ESI = (ESP);
  /* 12c410dd call dword ptr [0x12c703d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703d0))), 0x12c410e3u);
  /* 12c410e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c410e5 call 0x12c41840 */
  push32(0x12c410eau); f_12c41840();
  /* 12c410ea jmp 0x12c410fb */
  goto L_12c410fb;
L_12c410ec:;
  /* 12c410ec mov esi, esp */
  ESI = (ESP);
  /* 12c410ee call dword ptr [0x12c703d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703d4))), 0x12c410f4u);
  /* 12c410f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c410f6 call 0x12c41840 */
  push32(0x12c410fbu); f_12c41840();
L_12c410fb:;
  /* 12c410fb pop edi */
  EDI = (pop32());
  /* 12c410fc pop esi */
  ESI = (pop32());
  /* 12c410fd pop ebx */
  EBX = (pop32());
  /* 12c410fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41103 call 0x12c41840 */
  push32(0x12c41108u); f_12c41840();
  /* 12c41108 mov esp, ebp */
  ESP = (EBP);
  /* 12c4110a pop ebp */
  EBP = (pop32());
  /* 12c4110b ret  */
  ESPCHK(0x12c410b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12c41130 (93 bytes, 34 insns) */
void f_12c41130(void) {
  FTRACE(0x12c41130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41130 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41131 mov ebp, esp */
  EBP = (ESP);
  /* 12c41133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c41136 push ebx */
  push32((uint32_t)(EBX));
  /* 12c41137 push esi */
  push32((uint32_t)(ESI));
  /* 12c41138 push edi */
  push32((uint32_t)(EDI));
  /* 12c41139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c4113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c41141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c41146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c41148 mov esi, esp */
  ESI = (ESP);
  /* 12c4114a call dword ptr [0x12c703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703cc))), 0x12c41150u);
  /* 12c41150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41152 call 0x12c41840 */
  push32(0x12c41157u); f_12c41840();
  /* 12c41157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4115a jne 0x12c4116d */
  if (!C.zf) goto L_12c4116d;
  /* 12c4115c mov esi, esp */
  ESI = (ESP);
  /* 12c4115e call dword ptr [0x12c703d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703d0))), 0x12c41164u);
  /* 12c41164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41166 call 0x12c41840 */
  push32(0x12c4116bu); f_12c41840();
  /* 12c4116b jmp 0x12c4117c */
  goto L_12c4117c;
L_12c4116d:;
  /* 12c4116d mov esi, esp */
  ESI = (ESP);
  /* 12c4116f call dword ptr [0x12c703d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703d4))), 0x12c41175u);
  /* 12c41175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41177 call 0x12c41840 */
  push32(0x12c4117cu); f_12c41840();
L_12c4117c:;
  /* 12c4117c pop edi */
  EDI = (pop32());
  /* 12c4117d pop esi */
  ESI = (pop32());
  /* 12c4117e pop ebx */
  EBX = (pop32());
  /* 12c4117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41184 call 0x12c41840 */
  push32(0x12c41189u); f_12c41840();
  /* 12c41189 mov esp, ebp */
  ESP = (EBP);
  /* 12c4118b pop ebp */
  EBP = (pop32());
  /* 12c4118c ret  */
  ESPCHK(0x12c41130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x12c411b0 (376 bytes, 101 insns) */
void f_12c411b0(void) {
  FTRACE(0x12c411b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c411b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c411b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c411b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c411b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c411b7 push esi */
  push32((uint32_t)(ESI));
  /* 12c411b8 push edi */
  push32((uint32_t)(EDI));
  /* 12c411b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c411bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c411c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c411c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c411c8 mov esi, esp */
  ESI = (ESP);
  /* 12c411ca push 0x12c6904c */
  push32((uint32_t)(0x12c6904cu));
  /* 12c411cf push 0x12c6e420 */
  push32((uint32_t)(0x12c6e420u));
  /* 12c411d4 call dword ptr [0x12c703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c0))), 0x12c411dau);
  /* 12c411da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c411dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c411df call 0x12c41840 */
  push32(0x12c411e4u); f_12c41840();
  /* 12c411e4 mov esi, esp */
  ESI = (ESP);
  /* 12c411e6 push 0x12c69044 */
  push32((uint32_t)(0x12c69044u));
  /* 12c411eb push 0x12c6e428 */
  push32((uint32_t)(0x12c6e428u));
  /* 12c411f0 call dword ptr [0x12c703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c0))), 0x12c411f6u);
  /* 12c411f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c411f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c411fb call 0x12c41840 */
  push32(0x12c41200u); f_12c41840();
  /* 12c41200 mov esi, esp */
  ESI = (ESP);
  /* 12c41202 push 0x12c6903c */
  push32((uint32_t)(0x12c6903cu));
  /* 12c41207 push 0x12c6e430 */
  push32((uint32_t)(0x12c6e430u));
  /* 12c4120c call dword ptr [0x12c703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c0))), 0x12c41212u);
  /* 12c41212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41217 call 0x12c41840 */
  push32(0x12c4121cu); f_12c41840();
  /* 12c4121c mov esi, esp */
  ESI = (ESP);
  /* 12c4121e push 0x12c69034 */
  push32((uint32_t)(0x12c69034u));
  /* 12c41223 push 0x12c6e438 */
  push32((uint32_t)(0x12c6e438u));
  /* 12c41228 call dword ptr [0x12c703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c0))), 0x12c4122eu);
  /* 12c4122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41233 call 0x12c41840 */
  push32(0x12c41238u); f_12c41840();
  /* 12c41238 mov esi, esp */
  ESI = (ESP);
  /* 12c4123a push 0x12c6902c */
  push32((uint32_t)(0x12c6902cu));
  /* 12c4123f push 0x12c6e440 */
  push32((uint32_t)(0x12c6e440u));
  /* 12c41244 call dword ptr [0x12c703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c0))), 0x12c4124au);
  /* 12c4124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4124f call 0x12c41840 */
  push32(0x12c41254u); f_12c41840();
  /* 12c41254 mov esi, esp */
  ESI = (ESP);
  /* 12c41256 push 0x12c69024 */
  push32((uint32_t)(0x12c69024u));
  /* 12c4125b push 0x12c6e410 */
  push32((uint32_t)(0x12c6e410u));
  /* 12c41260 call dword ptr [0x12c703c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c4))), 0x12c41266u);
  /* 12c41266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4126b call 0x12c41840 */
  push32(0x12c41270u); f_12c41840();
  /* 12c41270 mov esi, esp */
  ESI = (ESP);
  /* 12c41272 push 0x12c6901c */
  push32((uint32_t)(0x12c6901cu));
  /* 12c41277 push 0x12c6e418 */
  push32((uint32_t)(0x12c6e418u));
  /* 12c4127c call dword ptr [0x12c703c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c4))), 0x12c41282u);
  /* 12c41282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41287 call 0x12c41840 */
  push32(0x12c4128cu); f_12c41840();
  /* 12c4128c mov esi, esp */
  ESI = (ESP);
  /* 12c4128e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c41290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41292 call dword ptr [0x12c703c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c8))), 0x12c41298u);
  /* 12c41298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4129d call 0x12c41840 */
  push32(0x12c412a2u); f_12c41840();
  /* 12c412a2 mov esi, esp */
  ESI = (ESP);
  /* 12c412a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c412a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c412a8 call dword ptr [0x12c703c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c8))), 0x12c412aeu);
  /* 12c412ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c412b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c412b3 call 0x12c41840 */
  push32(0x12c412b8u); f_12c41840();
  /* 12c412b8 mov esi, esp */
  ESI = (ESP);
  /* 12c412ba push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12c412bf push 7 */
  push32((uint32_t)(0x7u));
  /* 12c412c1 call dword ptr [0x12c703c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703c8))), 0x12c412c7u);
  /* 12c412c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c412ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c412cc call 0x12c41840 */
  push32(0x12c412d1u); f_12c41840();
  /* 12c412d1 mov dword ptr [0x12c6e3e0], 0 */
  w32((uint32_t)(0x12c6e3e0), (0x0u));
  /* 12c412db jmp 0x12c412ea */
  goto L_12c412ea;
L_12c412dd:;
  /* 12c412dd mov eax, dword ptr [0x12c6e3e0] */
  EAX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c412e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c412e5 mov dword ptr [0x12c6e3e0], eax */
  w32((uint32_t)(0x12c6e3e0), (EAX));
L_12c412ea:;
  /* 12c412ea cmp dword ptr [0x12c6e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c412f1 jge 0x12c41317 */
  if ((C.sf==C.of)) goto L_12c41317;
  /* 12c412f3 mov ecx, dword ptr [0x12c6e3e0] */
  ECX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c412f9 mov dword ptr [ecx*4 + 0x12c6e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x12c6e3e4), (0x0u));
  /* 12c41304 mov edx, dword ptr [0x12c6e3e0] */
  EDX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c4130a mov dword ptr [edx*4 + 0x12c6e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x12c6e3f8), (0x0u));
  /* 12c41315 jmp 0x12c412dd */
  goto L_12c412dd;
L_12c41317:;
  /* 12c41317 pop edi */
  EDI = (pop32());
  /* 12c41318 pop esi */
  ESI = (pop32());
  /* 12c41319 pop ebx */
  EBX = (pop32());
  /* 12c4131a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4131d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4131f call 0x12c41840 */
  push32(0x12c41324u); f_12c41840();
  /* 12c41324 mov esp, ebp */
  ESP = (EBP);
  /* 12c41326 pop ebp */
  EBP = (pop32());
  /* 12c41327 ret  */
  ESPCHK(0x12c411b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x12c41390 (830 bytes, 219 insns) */
void f_12c41390(void) {
  FTRACE(0x12c41390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41390 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41391 mov ebp, esp */
  EBP = (ESP);
  /* 12c41393 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c41396 push ebx */
  push32((uint32_t)(EBX));
  /* 12c41397 push esi */
  push32((uint32_t)(ESI));
  /* 12c41398 push edi */
  push32((uint32_t)(EDI));
  /* 12c41399 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c4139c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c413a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c413a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c413a8 mov dword ptr [0x12c6e3e0], 0 */
  w32((uint32_t)(0x12c6e3e0), (0x0u));
  /* 12c413b2 jmp 0x12c413c1 */
  goto L_12c413c1;
L_12c413b4:;
  /* 12c413b4 mov eax, dword ptr [0x12c6e3e0] */
  EAX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c413b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c413bc mov dword ptr [0x12c6e3e0], eax */
  w32((uint32_t)(0x12c6e3e0), (EAX));
L_12c413c1:;
  /* 12c413c1 cmp dword ptr [0x12c6e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c413c8 jge 0x12c414ab */
  if ((C.sf==C.of)) goto L_12c414ab;
  /* 12c413ce mov esi, esp */
  ESI = (ESP);
  /* 12c413d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c413d2 mov ecx, dword ptr [0x12c6e3e0] */
  ECX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c413d8 lea edx, [ecx*8 + 0x12c6e420] */
  EDX = ((uint32_t)(ECX*8 + 0x12c6e420));
  /* 12c413df push edx */
  push32((uint32_t)(EDX));
  /* 12c413e0 call dword ptr [0x12c703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703ac))), 0x12c413e6u);
  /* 12c413e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c413e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c413eb call 0x12c41840 */
  push32(0x12c413f0u); f_12c41840();
  /* 12c413f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c413f2 jle 0x12c4143a */
  if ((C.zf||C.sf!=C.of)) goto L_12c4143a;
  /* 12c413f4 mov esi, esp */
  ESI = (ESP);
  /* 12c413f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c413f8 mov eax, dword ptr [0x12c6e3e0] */
  EAX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c413fd lea ecx, [eax*8 + 0x12c6e420] */
  ECX = ((uint32_t)(EAX*8 + 0x12c6e420));
  /* 12c41404 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41405 call dword ptr [0x12c703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703ac))), 0x12c4140bu);
  /* 12c4140b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4140e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41410 call 0x12c41840 */
  push32(0x12c41415u); f_12c41840();
  /* 12c41415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41417 jne 0x12c4143a */
  if (!C.zf) goto L_12c4143a;
  /* 12c41419 mov edx, dword ptr [0x12c6e3e0] */
  EDX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c4141f mov dword ptr [edx*4 + 0x12c6e3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x12c6e3e4), (0x1u));
  /* 12c4142a mov eax, dword ptr [0x12c6e3e0] */
  EAX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c4142f mov dword ptr [eax*4 + 0x12c6e3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x12c6e3f8), (0x0u));
L_12c4143a:;
  /* 12c4143a mov esi, esp */
  ESI = (ESP);
  /* 12c4143c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4143e mov ecx, dword ptr [0x12c6e3e0] */
  ECX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c41444 lea edx, [ecx*8 + 0x12c6e420] */
  EDX = ((uint32_t)(ECX*8 + 0x12c6e420));
  /* 12c4144b push edx */
  push32((uint32_t)(EDX));
  /* 12c4144c call dword ptr [0x12c703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703ac))), 0x12c41452u);
  /* 12c41452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41457 call 0x12c41840 */
  push32(0x12c4145cu); f_12c41840();
  /* 12c4145c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4145e jle 0x12c414a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12c414a6;
  /* 12c41460 mov esi, esp */
  ESI = (ESP);
  /* 12c41462 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41464 mov eax, dword ptr [0x12c6e3e0] */
  EAX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c41469 lea ecx, [eax*8 + 0x12c6e420] */
  ECX = ((uint32_t)(EAX*8 + 0x12c6e420));
  /* 12c41470 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41471 call dword ptr [0x12c703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703ac))), 0x12c41477u);
  /* 12c41477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4147a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4147c call 0x12c41840 */
  push32(0x12c41481u); f_12c41840();
  /* 12c41481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41483 jne 0x12c414a6 */
  if (!C.zf) goto L_12c414a6;
  /* 12c41485 mov edx, dword ptr [0x12c6e3e0] */
  EDX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c4148b mov dword ptr [edx*4 + 0x12c6e3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x12c6e3e4), (0x0u));
  /* 12c41496 mov eax, dword ptr [0x12c6e3e0] */
  EAX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c4149b mov dword ptr [eax*4 + 0x12c6e3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x12c6e3f8), (0x1u));
L_12c414a6:;
  /* 12c414a6 jmp 0x12c413b4 */
  goto L_12c413b4;
L_12c414ab:;
  /* 12c414ab mov dword ptr [0x12c6e448], 0 */
  w32((uint32_t)(0x12c6e448), (0x0u));
  /* 12c414b5 mov dword ptr [0x12c6e44c], 0 */
  w32((uint32_t)(0x12c6e44c), (0x0u));
  /* 12c414bf mov dword ptr [0x12c6e3e0], 0 */
  w32((uint32_t)(0x12c6e3e0), (0x0u));
  /* 12c414c9 jmp 0x12c414da */
  goto L_12c414da;
L_12c414cb:;
  /* 12c414cb mov ecx, dword ptr [0x12c6e3e0] */
  ECX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c414d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c414d4 mov dword ptr [0x12c6e3e0], ecx */
  w32((uint32_t)(0x12c6e3e0), (ECX));
L_12c414da:;
  /* 12c414da cmp dword ptr [0x12c6e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c414e1 jge 0x12c41515 */
  if ((C.sf==C.of)) goto L_12c41515;
  /* 12c414e3 mov edx, dword ptr [0x12c6e3e0] */
  EDX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c414e9 mov eax, dword ptr [0x12c6e448] */
  EAX = (r32((uint32_t)(0x12c6e448)));
  /* 12c414ee add eax, dword ptr [edx*4 + 0x12c6e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12c6e3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c414f5 mov dword ptr [0x12c6e448], eax */
  w32((uint32_t)(0x12c6e448), (EAX));
  /* 12c414fa mov ecx, dword ptr [0x12c6e3e0] */
  ECX = (r32((uint32_t)(0x12c6e3e0)));
  /* 12c41500 mov edx, dword ptr [0x12c6e44c] */
  EDX = (r32((uint32_t)(0x12c6e44c)));
  /* 12c41506 add edx, dword ptr [ecx*4 + 0x12c6e3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x12c6e3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4150d mov dword ptr [0x12c6e44c], edx */
  w32((uint32_t)(0x12c6e44c), (EDX));
  /* 12c41513 jmp 0x12c414cb */
  goto L_12c414cb;
L_12c41515:;
  /* 12c41515 cmp dword ptr [0x12c6e448], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e448))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4151c jl 0x12c41520 */
  if ((C.sf!=C.of)) goto L_12c41520;
  /* 12c4151e jmp 0x12c4152e */
  goto L_12c4152e;
L_12c41520:;
  /* 12c41520 cmp dword ptr [0x12c6e44c], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e44c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41527 jl 0x12c4152e */
  if ((C.sf!=C.of)) goto L_12c4152e;
  /* 12c41529 call 0x12c4100f */
  push32(0x12c4152eu); f_12c4100f();
L_12c4152e:;
  /* 12c4152e mov esi, esp */
  ESI = (ESP);
  /* 12c41530 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c41532 call dword ptr [0x12c703b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b0))), 0x12c41538u);
  /* 12c41538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4153b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4153d call 0x12c41840 */
  push32(0x12c41542u); f_12c41840();
  /* 12c41542 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41549 je 0x12c41593 */
  if (C.zf) goto L_12c41593;
  /* 12c4154b mov esi, esp */
  ESI = (ESP);
  /* 12c4154d call dword ptr [0x12c703b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b4))), 0x12c41553u);
  /* 12c41553 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41555 call 0x12c41840 */
  push32(0x12c4155au); f_12c41840();
  /* 12c4155a cmp eax, 0x6d60 */
  { uint32_t _a=(EAX),_b=(0x6d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4155f jle 0x12c41593 */
  if ((C.zf||C.sf!=C.of)) goto L_12c41593;
  /* 12c41561 mov esi, esp */
  ESI = (ESP);
  /* 12c41563 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41565 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c41567 call dword ptr [0x12c703b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b8))), 0x12c4156du);
  /* 12c4156d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41570 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41572 call 0x12c41840 */
  push32(0x12c41577u); f_12c41840();
  /* 12c41577 mov esi, esp */
  ESI = (ESP);
  /* 12c41579 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12c4157e push 0x12c6905c */
  push32((uint32_t)(0x12c6905cu));
  /* 12c41583 call dword ptr [0x12c703bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703bc))), 0x12c41589u);
  /* 12c41589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4158c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4158e call 0x12c41840 */
  push32(0x12c41593u); f_12c41840();
L_12c41593:;
  /* 12c41593 mov esi, esp */
  ESI = (ESP);
  /* 12c41595 call dword ptr [0x12c703b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b4))), 0x12c4159bu);
  /* 12c4159b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4159d call 0x12c41840 */
  push32(0x12c415a2u); f_12c41840();
  /* 12c415a2 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c415a7 jle 0x12c415ae */
  if ((C.zf||C.sf!=C.of)) goto L_12c415ae;
  /* 12c415a9 call 0x12c41019 */
  push32(0x12c415aeu); f_12c41019();
L_12c415ae:;
  /* 12c415ae mov esi, esp */
  ESI = (ESP);
  /* 12c415b0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12c415b2 call dword ptr [0x12c703b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b0))), 0x12c415b8u);
  /* 12c415b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c415bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c415bd call 0x12c41840 */
  push32(0x12c415c2u); f_12c41840();
  /* 12c415c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c415c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c415c9 je 0x12c41620 */
  if (C.zf) goto L_12c41620;
  /* 12c415cb push 0x12c6e410 */
  push32((uint32_t)(0x12c6e410u));
  /* 12c415d0 call 0x12c41005 */
  push32(0x12c415d5u); f_12c41005();
  /* 12c415d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c415d8 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c415db jge 0x12c41620 */
  if ((C.sf==C.of)) goto L_12c41620;
  /* 12c415dd mov esi, esp */
  ESI = (ESP);
  /* 12c415df push 0 */
  push32((uint32_t)(0x0u));
  /* 12c415e1 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12c415e3 call dword ptr [0x12c703b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b8))), 0x12c415e9u);
  /* 12c415e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c415ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c415ee call 0x12c41840 */
  push32(0x12c415f3u); f_12c41840();
  /* 12c415f3 mov esi, esp */
  ESI = (ESP);
  /* 12c415f5 call dword ptr [0x12c703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703cc))), 0x12c415fbu);
  /* 12c415fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c415fd call 0x12c41840 */
  push32(0x12c41602u); f_12c41840();
  /* 12c41602 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41605 jne 0x12c41620 */
  if (!C.zf) goto L_12c41620;
  /* 12c41607 mov esi, esp */
  ESI = (ESP);
  /* 12c41609 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c4160b push 0x12c69054 */
  push32((uint32_t)(0x12c69054u));
  /* 12c41610 call dword ptr [0x12c703bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703bc))), 0x12c41616u);
  /* 12c41616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4161b call 0x12c41840 */
  push32(0x12c41620u); f_12c41840();
L_12c41620:;
  /* 12c41620 mov esi, esp */
  ESI = (ESP);
  /* 12c41622 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c41624 call dword ptr [0x12c703b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b0))), 0x12c4162au);
  /* 12c4162a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4162d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4162f call 0x12c41840 */
  push32(0x12c41634u); f_12c41840();
  /* 12c41634 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4163b je 0x12c41691 */
  if (C.zf) goto L_12c41691;
  /* 12c4163d push 0x12c6e418 */
  push32((uint32_t)(0x12c6e418u));
  /* 12c41642 call 0x12c41005 */
  push32(0x12c41647u); f_12c41005();
  /* 12c41647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4164a cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4164d jge 0x12c41691 */
  if ((C.sf==C.of)) goto L_12c41691;
  /* 12c4164f mov esi, esp */
  ESI = (ESP);
  /* 12c41651 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41653 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c41655 call dword ptr [0x12c703b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703b8))), 0x12c4165bu);
  /* 12c4165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41660 call 0x12c41840 */
  push32(0x12c41665u); f_12c41840();
  /* 12c41665 mov esi, esp */
  ESI = (ESP);
  /* 12c41667 call dword ptr [0x12c703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703cc))), 0x12c4166du);
  /* 12c4166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4166f call 0x12c41840 */
  push32(0x12c41674u); f_12c41840();
  /* 12c41674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41676 jne 0x12c41691 */
  if (!C.zf) goto L_12c41691;
  /* 12c41678 mov esi, esp */
  ESI = (ESP);
  /* 12c4167a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c4167c push 0x12c69054 */
  push32((uint32_t)(0x12c69054u));
  /* 12c41681 call dword ptr [0x12c703bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703bc))), 0x12c41687u);
  /* 12c41687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4168a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4168c call 0x12c41840 */
  push32(0x12c41691u); f_12c41840();
L_12c41691:;
  /* 12c41691 push 0x12c6e410 */
  push32((uint32_t)(0x12c6e410u));
  /* 12c41696 call 0x12c41005 */
  push32(0x12c4169bu); f_12c41005();
  /* 12c4169b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4169e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c416a0 jne 0x12c416a7 */
  if (!C.zf) goto L_12c416a7;
  /* 12c416a2 call 0x12c4100f */
  push32(0x12c416a7u); f_12c4100f();
L_12c416a7:;
  /* 12c416a7 push 0x12c6e418 */
  push32((uint32_t)(0x12c6e418u));
  /* 12c416ac call 0x12c41005 */
  push32(0x12c416b1u); f_12c41005();
  /* 12c416b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c416b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c416b6 jne 0x12c416bd */
  if (!C.zf) goto L_12c416bd;
  /* 12c416b8 call 0x12c41019 */
  push32(0x12c416bdu); f_12c41019();
L_12c416bd:;
  /* 12c416bd pop edi */
  EDI = (pop32());
  /* 12c416be pop esi */
  ESI = (pop32());
  /* 12c416bf pop ebx */
  EBX = (pop32());
  /* 12c416c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c416c3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c416c5 call 0x12c41840 */
  push32(0x12c416cau); f_12c41840();
  /* 12c416ca mov esp, ebp */
  ESP = (EBP);
  /* 12c416cc pop ebp */
  EBP = (pop32());
  /* 12c416cd ret  */
  ESPCHK(0x12c41390u, _esp0);
  ESP += 4; return;
}

/* FUN_100017a0 @ 0x12c417a0 (63 bytes, 26 insns) */
void f_12c417a0(void) {
  FTRACE(0x12c417a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c417a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c417a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c417a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c417a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c417a7 push esi */
  push32((uint32_t)(ESI));
  /* 12c417a8 push edi */
  push32((uint32_t)(EDI));
  /* 12c417a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c417ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c417b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c417b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c417b8 mov esi, esp */
  ESI = (ESP);
  /* 12c417ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c417bd push eax */
  push32((uint32_t)(EAX));
  /* 12c417be call dword ptr [0x12c703a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c703a8))), 0x12c417c4u);
  /* 12c417c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c417c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c417c9 call 0x12c41840 */
  push32(0x12c417ceu); f_12c41840();
  /* 12c417ce pop edi */
  EDI = (pop32());
  /* 12c417cf pop esi */
  ESI = (pop32());
  /* 12c417d0 pop ebx */
  EBX = (pop32());
  /* 12c417d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c417d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c417d6 call 0x12c41840 */
  push32(0x12c417dbu); f_12c41840();
  /* 12c417db mov esp, ebp */
  ESP = (EBP);
  /* 12c417dd pop ebp */
  EBP = (pop32());
  /* 12c417de ret  */
  ESPCHK(0x12c417a0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12c41840 (56 bytes, 28 insns) */
void f_12c41840(void) {
  FTRACE(0x12c41840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41840 jne 0x12c41843 */
  if (!C.zf) goto L_12c41843;
  /* 12c41842 ret  */
  ESPCHK(0x12c41840u, _esp0);
  ESP += 4; return;
L_12c41843:;
  /* 12c41843 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41844 mov ebp, esp */
  EBP = (ESP);
  /* 12c41846 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c41849 push eax */
  push32((uint32_t)(EAX));
  /* 12c4184a push edx */
  push32((uint32_t)(EDX));
  /* 12c4184b push ebx */
  push32((uint32_t)(EBX));
  /* 12c4184c push esi */
  push32((uint32_t)(ESI));
  /* 12c4184d push edi */
  push32((uint32_t)(EDI));
  /* 12c4184e push 0x12c69078 */
  push32((uint32_t)(0x12c69078u));
  /* 12c41853 push 0x12c69074 */
  push32((uint32_t)(0x12c69074u));
  /* 12c41858 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12c4185a push 0x12c69064 */
  push32((uint32_t)(0x12c69064u));
  /* 12c4185f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c41861 call 0x12c41c10 */
  push32(0x12c41866u); f_12c41c10();
  /* 12c41866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41869 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4186c jne 0x12c4186f */
  if (!C.zf) goto L_12c4186f;
  /* 12c4186e int3  */
  x86_unimpl("int3 @ 0x12c4186e");
L_12c4186f:;
  /* 12c4186f pop edi */
  EDI = (pop32());
  /* 12c41870 pop esi */
  ESI = (pop32());
  /* 12c41871 pop ebx */
  EBX = (pop32());
  /* 12c41872 pop edx */
  EDX = (pop32());
  /* 12c41873 pop eax */
  EAX = (pop32());
  /* 12c41874 mov esp, ebp */
  ESP = (EBP);
  /* 12c41876 pop ebp */
  EBP = (pop32());
  /* 12c41877 ret  */
  ESPCHK(0x12c41840u, _esp0);
  ESP += 4; return;
}

/* FUN_10001880 @ 0x12c41880 (313 bytes, 78 insns) */
void f_12c41880(void) {
  FTRACE(0x12c41880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41880 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41881 mov ebp, esp */
  EBP = (ESP);
  /* 12c41883 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41887 jne 0x12c41947 */
  if (!C.zf) goto L_12c41947;
  /* 12c4188d call dword ptr [0x12c70258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70258))), 0x12c41893u);
  /* 12c41893 mov dword ptr [0x12c6e488], eax */
  w32((uint32_t)(0x12c6e488), (EAX));
  /* 12c41898 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4189a call 0x12c45340 */
  push32(0x12c4189fu); f_12c45340();
  /* 12c4189f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c418a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c418a4 jne 0x12c418ad */
  if (!C.zf) goto L_12c418ad;
  /* 12c418a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c418a8 jmp 0x12c419b5 */
  goto L_12c419b5;
L_12c418ad:;
  /* 12c418ad mov eax, dword ptr [0x12c6e488] */
  EAX = (r32((uint32_t)(0x12c6e488)));
  /* 12c418b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c418b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c418ba mov dword ptr [0x12c6e494], eax */
  w32((uint32_t)(0x12c6e494), (EAX));
  /* 12c418bf mov ecx, dword ptr [0x12c6e488] */
  ECX = (r32((uint32_t)(0x12c6e488)));
  /* 12c418c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c418cb mov dword ptr [0x12c6e490], ecx */
  w32((uint32_t)(0x12c6e490), (ECX));
  /* 12c418d1 mov edx, dword ptr [0x12c6e490] */
  EDX = (r32((uint32_t)(0x12c6e490)));
  /* 12c418d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c418da add edx, dword ptr [0x12c6e494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6e494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c418e0 mov dword ptr [0x12c6e48c], edx */
  w32((uint32_t)(0x12c6e48c), (EDX));
  /* 12c418e6 mov eax, dword ptr [0x12c6e488] */
  EAX = (r32((uint32_t)(0x12c6e488)));
  /* 12c418eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c418ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c418f3 mov dword ptr [0x12c6e488], eax */
  w32((uint32_t)(0x12c6e488), (EAX));
  /* 12c418f8 call 0x12c424b0 */
  push32(0x12c418fdu); f_12c424b0();
  /* 12c418fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c418ff jne 0x12c4190d */
  if (!C.zf) goto L_12c4190d;
  /* 12c41901 call 0x12c45390 */
  push32(0x12c41906u); f_12c45390();
  /* 12c41906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c41908 jmp 0x12c419b5 */
  goto L_12c419b5;
L_12c4190d:;
  /* 12c4190d call dword ptr [0x12c70254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70254))), 0x12c41913u);
  /* 12c41913 mov dword ptr [0x12c6ffcc], eax */
  w32((uint32_t)(0x12c6ffcc), (EAX));
  /* 12c41918 call 0x12c45120 */
  push32(0x12c4191du); f_12c45120();
  /* 12c4191d mov dword ptr [0x12c6e470], eax */
  w32((uint32_t)(0x12c6e470), (EAX));
  /* 12c41922 call 0x12c42760 */
  push32(0x12c41927u); f_12c42760();
  /* 12c41927 call 0x12c44c10 */
  push32(0x12c4192cu); f_12c44c10();
  /* 12c4192c call 0x12c44ac0 */
  push32(0x12c41931u); f_12c44ac0();
  /* 12c41931 call 0x12c422b0 */
  push32(0x12c41936u); f_12c422b0();
  /* 12c41936 mov ecx, dword ptr [0x12c6e46c] */
  ECX = (r32((uint32_t)(0x12c6e46c)));
  /* 12c4193c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4193f mov dword ptr [0x12c6e46c], ecx */
  w32((uint32_t)(0x12c6e46c), (ECX));
  /* 12c41945 jmp 0x12c419b0 */
  goto L_12c419b0;
L_12c41947:;
  /* 12c41947 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4194b jne 0x12c419a0 */
  if (!C.zf) goto L_12c419a0;
  /* 12c4194d cmp dword ptr [0x12c6e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41954 jle 0x12c4199a */
  if ((C.zf||C.sf!=C.of)) goto L_12c4199a;
  /* 12c41956 mov edx, dword ptr [0x12c6e46c] */
  EDX = (r32((uint32_t)(0x12c6e46c)));
  /* 12c4195c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4195f mov dword ptr [0x12c6e46c], edx */
  w32((uint32_t)(0x12c6e46c), (EDX));
  /* 12c41965 cmp dword ptr [0x12c6e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4196c jne 0x12c41973 */
  if (!C.zf) goto L_12c41973;
  /* 12c4196e call 0x12c42330 */
  push32(0x12c41973u); f_12c42330();
L_12c41973:;
  /* 12c41973 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c41975 call 0x12c44060 */
  push32(0x12c4197au); f_12c44060();
  /* 12c4197a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4197d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c41980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41982 je 0x12c41989 */
  if (C.zf) goto L_12c41989;
  /* 12c41984 call 0x12c44970 */
  push32(0x12c41989u); f_12c44970();
L_12c41989:;
  /* 12c41989 call 0x12c42a90 */
  push32(0x12c4198eu); f_12c42a90();
  /* 12c4198e call 0x12c42540 */
  push32(0x12c41993u); f_12c42540();
  /* 12c41993 call 0x12c45390 */
  push32(0x12c41998u); f_12c45390();
  /* 12c41998 jmp 0x12c4199e */
  goto L_12c4199e;
L_12c4199a:;
  /* 12c4199a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4199c jmp 0x12c419b5 */
  goto L_12c419b5;
L_12c4199e:;
  /* 12c4199e jmp 0x12c419b0 */
  goto L_12c419b0;
L_12c419a0:;
  /* 12c419a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c419a4 jne 0x12c419b0 */
  if (!C.zf) goto L_12c419b0;
  /* 12c419a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c419a8 call 0x12c42630 */
  push32(0x12c419adu); f_12c42630();
  /* 12c419ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c419b0:;
  /* 12c419b0 mov eax, 1 */
  EAX = (0x1u);
L_12c419b5:;
  /* 12c419b5 pop ebp */
  EBP = (pop32());
  /* 12c419b6 ret 0xc */
  ESPCHK(0x12c41880u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12c419c0 (243 bytes, 86 insns) */
void f_12c419c0(void) {
  FTRACE(0x12c419c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c419c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c419c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c419c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c419c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c419cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c419cf jne 0x12c419e1 */
  if (!C.zf) goto L_12c419e1;
  /* 12c419d1 cmp dword ptr [0x12c6e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c419d8 jne 0x12c419e1 */
  if (!C.zf) goto L_12c419e1;
  /* 12c419da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c419dc jmp 0x12c41aad */
  goto L_12c41aad;
L_12c419e1:;
  /* 12c419e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c419e5 je 0x12c419ed */
  if (C.zf) goto L_12c419ed;
  /* 12c419e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c419eb jne 0x12c41a2f */
  if (!C.zf) goto L_12c41a2f;
L_12c419ed:;
  /* 12c419ed cmp dword ptr [0x12c6ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c419f4 je 0x12c41a0b */
  if (C.zf) goto L_12c41a0b;
  /* 12c419f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c419f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c419fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c419fd push ecx */
  push32((uint32_t)(ECX));
  /* 12c419fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41a01 push edx */
  push32((uint32_t)(EDX));
  /* 12c41a02 call dword ptr [0x12c6ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6ffdc))), 0x12c41a08u);
  /* 12c41a08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c41a0b:;
  /* 12c41a0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a0f je 0x12c41a25 */
  if (C.zf) goto L_12c41a25;
  /* 12c41a11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41a14 push eax */
  push32((uint32_t)(EAX));
  /* 12c41a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41a19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41a1c push edx */
  push32((uint32_t)(EDX));
  /* 12c41a1d call 0x12c41880 */
  push32(0x12c41a22u); f_12c41880();
  /* 12c41a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c41a25:;
  /* 12c41a25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a29 jne 0x12c41a2f */
  if (!C.zf) goto L_12c41a2f;
  /* 12c41a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c41a2d jmp 0x12c41aad */
  goto L_12c41aad;
L_12c41a2f:;
  /* 12c41a2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41a32 push eax */
  push32((uint32_t)(EAX));
  /* 12c41a33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41a36 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41a37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41a3a push edx */
  push32((uint32_t)(EDX));
  /* 12c41a3b call 0x12c41014 */
  push32(0x12c41a40u); f_12c41014();
  /* 12c41a40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c41a43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a47 jne 0x12c41a5e */
  if (!C.zf) goto L_12c41a5e;
  /* 12c41a49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a4d jne 0x12c41a5e */
  if (!C.zf) goto L_12c41a5e;
  /* 12c41a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41a52 push eax */
  push32((uint32_t)(EAX));
  /* 12c41a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41a55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41a58 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41a59 call 0x12c41880 */
  push32(0x12c41a5eu); f_12c41880();
L_12c41a5e:;
  /* 12c41a5e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a62 je 0x12c41a6a */
  if (C.zf) goto L_12c41a6a;
  /* 12c41a64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a68 jne 0x12c41aaa */
  if (!C.zf) goto L_12c41aaa;
L_12c41a6a:;
  /* 12c41a6a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41a6d push edx */
  push32((uint32_t)(EDX));
  /* 12c41a6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41a71 push eax */
  push32((uint32_t)(EAX));
  /* 12c41a72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41a76 call 0x12c41880 */
  push32(0x12c41a7bu); f_12c41880();
  /* 12c41a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41a7d jne 0x12c41a86 */
  if (!C.zf) goto L_12c41a86;
  /* 12c41a7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c41a86:;
  /* 12c41a86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a8a je 0x12c41aaa */
  if (C.zf) goto L_12c41aaa;
  /* 12c41a8c cmp dword ptr [0x12c6ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41a93 je 0x12c41aaa */
  if (C.zf) goto L_12c41aaa;
  /* 12c41a95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41a98 push edx */
  push32((uint32_t)(EDX));
  /* 12c41a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41a9c push eax */
  push32((uint32_t)(EAX));
  /* 12c41a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41aa1 call dword ptr [0x12c6ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6ffdc))), 0x12c41aa7u);
  /* 12c41aa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c41aaa:;
  /* 12c41aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c41aad:;
  /* 12c41aad mov esp, ebp */
  ESP = (EBP);
  /* 12c41aaf pop ebp */
  EBP = (pop32());
  /* 12c41ab0 ret 0xc */
  ESPCHK(0x12c419c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12c41ac0 (58 bytes, 18 insns) */
void f_12c41ac0(void) {
  FTRACE(0x12c41ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12c41ac3 cmp dword ptr [0x12c6e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41aca je 0x12c41ade */
  if (C.zf) goto L_12c41ade;
  /* 12c41acc cmp dword ptr [0x12c6e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41ad3 jne 0x12c41ae3 */
  if (!C.zf) goto L_12c41ae3;
  /* 12c41ad5 cmp dword ptr [0x12c6e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41adc jne 0x12c41ae3 */
  if (!C.zf) goto L_12c41ae3;
L_12c41ade:;
  /* 12c41ade call 0x12c45430 */
  push32(0x12c41ae3u); f_12c45430();
L_12c41ae3:;
  /* 12c41ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12c41ae7 call 0x12c45480 */
  push32(0x12c41aecu); f_12c45480();
  /* 12c41aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41aef push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c41af4 call dword ptr [0x12c6ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6ca30))), 0x12c41afau);
  /* 12c41afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41afd pop ebp */
  EBP = (pop32());
  /* 12c41afe ret  */
  ESPCHK(0x12c41ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b00 @ 0x12c41b00 (11 bytes, 5 insns) */
void f_12c41b00(void) {
  FTRACE(0x12c41b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41b01 mov ebp, esp */
  EBP = (ESP);
  /* 12c41b03 call dword ptr [0x12c7025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7025c))), 0x12c41b09u);
  /* 12c41b09 pop ebp */
  EBP = (pop32());
  /* 12c41b0a ret  */
  ESPCHK(0x12c41b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b10 @ 0x12c41b10 (87 bytes, 30 insns) */
void f_12c41b10(void) {
  FTRACE(0x12c41b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41b11 mov ebp, esp */
  EBP = (ESP);
  /* 12c41b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41b14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41b18 jl 0x12c41b20 */
  if ((C.sf!=C.of)) goto L_12c41b20;
  /* 12c41b1a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41b1e jl 0x12c41b25 */
  if ((C.sf!=C.of)) goto L_12c41b25;
L_12c41b20:;
  /* 12c41b20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41b23 jmp 0x12c41b63 */
  goto L_12c41b63;
L_12c41b25:;
  /* 12c41b25 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41b29 jne 0x12c41b37 */
  if (!C.zf) goto L_12c41b37;
  /* 12c41b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41b2e mov eax, dword ptr [eax*4 + 0x12c6ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12c6ca38)));
  /* 12c41b35 jmp 0x12c41b63 */
  goto L_12c41b63;
L_12c41b37:;
  /* 12c41b37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41b3a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c41b3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c41b3f je 0x12c41b46 */
  if (C.zf) goto L_12c41b46;
  /* 12c41b41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41b44 jmp 0x12c41b63 */
  goto L_12c41b63;
L_12c41b46:;
  /* 12c41b46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41b49 mov eax, dword ptr [edx*4 + 0x12c6ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6ca38)));
  /* 12c41b50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c41b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41b59 mov dword ptr [ecx*4 + 0x12c6ca38], edx */
  w32((uint32_t)(ECX*4 + 0x12c6ca38), (EDX));
  /* 12c41b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c41b63:;
  /* 12c41b63 mov esp, ebp */
  ESP = (EBP);
  /* 12c41b65 pop ebp */
  EBP = (pop32());
  /* 12c41b66 ret  */
  ESPCHK(0x12c41b10u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12c41b70 (126 bytes, 38 insns) */
void f_12c41b70(void) {
  FTRACE(0x12c41b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41b71 mov ebp, esp */
  EBP = (ESP);
  /* 12c41b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41b74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41b78 jl 0x12c41b80 */
  if ((C.sf!=C.of)) goto L_12c41b80;
  /* 12c41b7a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41b7e jl 0x12c41b87 */
  if ((C.sf!=C.of)) goto L_12c41b87;
L_12c41b80:;
  /* 12c41b80 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12c41b85 jmp 0x12c41bea */
  goto L_12c41bea;
L_12c41b87:;
  /* 12c41b87 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41b8b jne 0x12c41b99 */
  if (!C.zf) goto L_12c41b99;
  /* 12c41b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41b90 mov eax, dword ptr [eax*4 + 0x12c6ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12c6ca44)));
  /* 12c41b97 jmp 0x12c41bea */
  goto L_12c41bea;
L_12c41b99:;
  /* 12c41b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41b9c mov edx, dword ptr [ecx*4 + 0x12c6ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca44)));
  /* 12c41ba3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c41ba6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41baa jne 0x12c41bc0 */
  if (!C.zf) goto L_12c41bc0;
  /* 12c41bac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c41bae call dword ptr [0x12c70260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70260))), 0x12c41bb4u);
  /* 12c41bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41bb7 mov dword ptr [ecx*4 + 0x12c6ca44], eax */
  w32((uint32_t)(ECX*4 + 0x12c6ca44), (EAX));
  /* 12c41bbe jmp 0x12c41be7 */
  goto L_12c41be7;
L_12c41bc0:;
  /* 12c41bc0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41bc4 jne 0x12c41bda */
  if (!C.zf) goto L_12c41bda;
  /* 12c41bc6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c41bc8 call dword ptr [0x12c70260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70260))), 0x12c41bceu);
  /* 12c41bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41bd1 mov dword ptr [edx*4 + 0x12c6ca44], eax */
  w32((uint32_t)(EDX*4 + 0x12c6ca44), (EAX));
  /* 12c41bd8 jmp 0x12c41be7 */
  goto L_12c41be7;
L_12c41bda:;
  /* 12c41bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41bdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41be0 mov dword ptr [eax*4 + 0x12c6ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x12c6ca44), (ECX));
L_12c41be7:;
  /* 12c41be7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c41bea:;
  /* 12c41bea mov esp, ebp */
  ESP = (EBP);
  /* 12c41bec pop ebp */
  EBP = (pop32());
  /* 12c41bed ret  */
  ESPCHK(0x12c41b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf0 @ 0x12c41bf0 (28 bytes, 11 insns) */
void f_12c41bf0(void) {
  FTRACE(0x12c41bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c41bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41bf4 mov eax, dword ptr [0x12c6ffc0] */
  EAX = (r32((uint32_t)(0x12c6ffc0)));
  /* 12c41bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c41bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41bff mov dword ptr [0x12c6ffc0], ecx */
  w32((uint32_t)(0x12c6ffc0), (ECX));
  /* 12c41c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c41c08 mov esp, ebp */
  ESP = (EBP);
  /* 12c41c0a pop ebp */
  EBP = (pop32());
  /* 12c41c0b ret  */
  ESPCHK(0x12c41bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c10 @ 0x12c41c10 (912 bytes, 248 insns) */
void f_12c41c10(void) {
  FTRACE(0x12c41c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41c11 mov ebp, esp */
  EBP = (ESP);
  /* 12c41c13 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12c41c18 call 0x12c45cf0 */
  push32(0x12c41c1du); f_12c45cf0();
  /* 12c41c1d push edi */
  push32((uint32_t)(EDI));
  /* 12c41c1e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12c41c25 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12c41c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c41c2c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12c41c32 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c41c34 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12c41c36 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c41c37 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12c41c3e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12c41c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c41c45 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12c41c4b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c41c4d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12c41c4f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c41c50 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12c41c57 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12c41c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c41c5e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12c41c64 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c41c66 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12c41c68 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c41c69 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12c41c6c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12c41c72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41c76 jl 0x12c41c7e */
  if ((C.sf!=C.of)) goto L_12c41c7e;
  /* 12c41c78 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41c7c jl 0x12c41c86 */
  if ((C.sf!=C.of)) goto L_12c41c86;
L_12c41c7e:;
  /* 12c41c7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41c81 jmp 0x12c41f9b */
  goto L_12c41f9b;
L_12c41c86:;
  /* 12c41c86 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41c8a jne 0x12c41d30 */
  if (!C.zf) goto L_12c41d30;
  /* 12c41c90 push 0x12c6ca34 */
  push32((uint32_t)(0x12c6ca34u));
  /* 12c41c95 call dword ptr [0x12c70278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70278))), 0x12c41c9bu);
  /* 12c41c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41c9d jle 0x12c41d30 */
  if ((C.zf||C.sf!=C.of)) goto L_12c41d30;
  /* 12c41ca3 cmp dword ptr [0x12c6e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41caa jne 0x12c41cee */
  if (!C.zf) goto L_12c41cee;
  /* 12c41cac push 0x12c69220 */
  push32((uint32_t)(0x12c69220u));
  /* 12c41cb1 call dword ptr [0x12c70274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70274))), 0x12c41cb7u);
  /* 12c41cb7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12c41cbd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41cc4 je 0x12c41ce6 */
  if (C.zf) goto L_12c41ce6;
  /* 12c41cc6 push 0x12c69214 */
  push32((uint32_t)(0x12c69214u));
  /* 12c41ccb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12c41cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41cd2 call dword ptr [0x12c70270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70270))), 0x12c41cd8u);
  /* 12c41cd8 mov dword ptr [0x12c6e480], eax */
  w32((uint32_t)(0x12c6e480), (EAX));
  /* 12c41cdd cmp dword ptr [0x12c6e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41ce4 jne 0x12c41cee */
  if (!C.zf) goto L_12c41cee;
L_12c41ce6:;
  /* 12c41ce6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41ce9 jmp 0x12c41f9b */
  goto L_12c41f9b;
L_12c41cee:;
  /* 12c41cee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41cf1 push edx */
  push32((uint32_t)(EDX));
  /* 12c41cf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41cf5 push eax */
  push32((uint32_t)(EAX));
  /* 12c41cf6 push 0x12c691e0 */
  push32((uint32_t)(0x12c691e0u));
  /* 12c41cfb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12c41d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41d02 call dword ptr [0x12c6e480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e480))), 0x12c41d08u);
  /* 12c41d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41d0b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c41d11 push edx */
  push32((uint32_t)(EDX));
  /* 12c41d12 call dword ptr [0x12c7026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7026c))), 0x12c41d18u);
  /* 12c41d18 push 0x12c6ca34 */
  push32((uint32_t)(0x12c6ca34u));
  /* 12c41d1d call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c41d23u);
  /* 12c41d23 call 0x12c41b00 */
  push32(0x12c41d28u); f_12c41b00();
  /* 12c41d28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c41d2b jmp 0x12c41f9b */
  goto L_12c41f9b;
L_12c41d30:;
  /* 12c41d30 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41d34 je 0x12c41d6d */
  if (C.zf) goto L_12c41d6d;
  /* 12c41d36 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12c41d3c push eax */
  push32((uint32_t)(EAX));
  /* 12c41d3d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c41d40 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41d41 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12c41d46 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12c41d4c push edx */
  push32((uint32_t)(EDX));
  /* 12c41d4d call 0x12c45bf0 */
  push32(0x12c41d52u); f_12c45bf0();
  /* 12c41d52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41d57 jge 0x12c41d6d */
  if ((C.sf==C.of)) goto L_12c41d6d;
  /* 12c41d59 push 0x12c691b4 */
  push32((uint32_t)(0x12c691b4u));
  /* 12c41d5e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12c41d64 push eax */
  push32((uint32_t)(EAX));
  /* 12c41d65 call 0x12c45b00 */
  push32(0x12c41d6au); f_12c45b00();
  /* 12c41d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c41d6d:;
  /* 12c41d6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41d71 jne 0x12c41da5 */
  if (!C.zf) goto L_12c41da5;
  /* 12c41d73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41d77 je 0x12c41d85 */
  if (C.zf) goto L_12c41d85;
  /* 12c41d79 mov dword ptr [ebp - 0x3028], 0x12c691a0 */
  w32((uint32_t)(EBP + -0x3028), (0x12c691a0u));
  /* 12c41d83 jmp 0x12c41d8f */
  goto L_12c41d8f;
L_12c41d85:;
  /* 12c41d85 mov dword ptr [ebp - 0x3028], 0x12c6918c */
  w32((uint32_t)(EBP + -0x3028), (0x12c6918cu));
L_12c41d8f:;
  /* 12c41d8f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12c41d95 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41d96 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12c41d9c push edx */
  push32((uint32_t)(EDX));
  /* 12c41d9d call 0x12c45b00 */
  push32(0x12c41da2u); f_12c45b00();
  /* 12c41da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c41da5:;
  /* 12c41da5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12c41dab push eax */
  push32((uint32_t)(EAX));
  /* 12c41dac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12c41db2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41db3 call 0x12c45b10 */
  push32(0x12c41db8u); f_12c45b10();
  /* 12c41db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41dbb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41dbf jne 0x12c41dfa */
  if (!C.zf) goto L_12c41dfa;
  /* 12c41dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41dc4 mov eax, dword ptr [edx*4 + 0x12c6ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6ca38)));
  /* 12c41dcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c41dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41dd0 je 0x12c41de6 */
  if (C.zf) goto L_12c41de6;
  /* 12c41dd2 push 0x12c69188 */
  push32((uint32_t)(0x12c69188u));
  /* 12c41dd7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12c41ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12c41dde call 0x12c45b10 */
  push32(0x12c41de3u); f_12c45b10();
  /* 12c41de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c41de6:;
  /* 12c41de6 push 0x12c69184 */
  push32((uint32_t)(0x12c69184u));
  /* 12c41deb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12c41df1 push edx */
  push32((uint32_t)(EDX));
  /* 12c41df2 call 0x12c45b10 */
  push32(0x12c41df7u); f_12c45b10();
  /* 12c41df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c41dfa:;
  /* 12c41dfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41dfe je 0x12c41e42 */
  if (C.zf) goto L_12c41e42;
  /* 12c41e00 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12c41e06 push eax */
  push32((uint32_t)(EAX));
  /* 12c41e07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41e0a push ecx */
  push32((uint32_t)(ECX));
  /* 12c41e0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41e0e push edx */
  push32((uint32_t)(EDX));
  /* 12c41e0f push 0x12c69178 */
  push32((uint32_t)(0x12c69178u));
  /* 12c41e14 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c41e19 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12c41e1f push eax */
  push32((uint32_t)(EAX));
  /* 12c41e20 call 0x12c45a00 */
  push32(0x12c41e25u); f_12c45a00();
  /* 12c41e25 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41e2a jge 0x12c41e40 */
  if ((C.sf==C.of)) goto L_12c41e40;
  /* 12c41e2c push 0x12c691b4 */
  push32((uint32_t)(0x12c691b4u));
  /* 12c41e31 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12c41e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41e38 call 0x12c45b00 */
  push32(0x12c41e3du); f_12c45b00();
  /* 12c41e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c41e40:;
  /* 12c41e40 jmp 0x12c41e58 */
  goto L_12c41e58;
L_12c41e42:;
  /* 12c41e42 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12c41e48 push edx */
  push32((uint32_t)(EDX));
  /* 12c41e49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12c41e4f push eax */
  push32((uint32_t)(EAX));
  /* 12c41e50 call 0x12c45b00 */
  push32(0x12c41e55u); f_12c45b00();
  /* 12c41e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c41e58:;
  /* 12c41e58 cmp dword ptr [0x12c6ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41e5f je 0x12c41e9c */
  if (C.zf) goto L_12c41e9c;
  /* 12c41e61 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12c41e67 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41e68 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c41e6e push edx */
  push32((uint32_t)(EDX));
  /* 12c41e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41e72 push eax */
  push32((uint32_t)(EAX));
  /* 12c41e73 call dword ptr [0x12c6ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6ffc0))), 0x12c41e79u);
  /* 12c41e79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41e7e je 0x12c41e9c */
  if (C.zf) goto L_12c41e9c;
  /* 12c41e80 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41e84 jne 0x12c41e91 */
  if (!C.zf) goto L_12c41e91;
  /* 12c41e86 push 0x12c6ca34 */
  push32((uint32_t)(0x12c6ca34u));
  /* 12c41e8b call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c41e91u);
L_12c41e91:;
  /* 12c41e91 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12c41e97 jmp 0x12c41f9b */
  goto L_12c41f9b;
L_12c41e9c:;
  /* 12c41e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41e9f mov edx, dword ptr [ecx*4 + 0x12c6ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca38)));
  /* 12c41ea6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c41ea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c41eab je 0x12c41eeb */
  if (C.zf) goto L_12c41eeb;
  /* 12c41ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41eb0 cmp dword ptr [eax*4 + 0x12c6ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12c6ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41eb8 je 0x12c41eeb */
  if (C.zf) goto L_12c41eeb;
  /* 12c41eba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41ebc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12c41ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41ec3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c41ec9 push edx */
  push32((uint32_t)(EDX));
  /* 12c41eca call 0x12c45980 */
  push32(0x12c41ecfu); f_12c45980();
  /* 12c41ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41ed2 push eax */
  push32((uint32_t)(EAX));
  /* 12c41ed3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12c41ed9 push eax */
  push32((uint32_t)(EAX));
  /* 12c41eda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41edd mov edx, dword ptr [ecx*4 + 0x12c6ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca44)));
  /* 12c41ee4 push edx */
  push32((uint32_t)(EDX));
  /* 12c41ee5 call dword ptr [0x12c70264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70264))), 0x12c41eebu);
L_12c41eeb:;
  /* 12c41eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41eee mov ecx, dword ptr [eax*4 + 0x12c6ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6ca38)));
  /* 12c41ef5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c41ef8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c41efa je 0x12c41f09 */
  if (C.zf) goto L_12c41f09;
  /* 12c41efc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c41f02 push edx */
  push32((uint32_t)(EDX));
  /* 12c41f03 call dword ptr [0x12c7026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7026c))), 0x12c41f09u);
L_12c41f09:;
  /* 12c41f09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41f0c mov ecx, dword ptr [eax*4 + 0x12c6ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6ca38)));
  /* 12c41f13 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c41f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c41f18 je 0x12c41f88 */
  if (C.zf) goto L_12c41f88;
  /* 12c41f1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41f1e je 0x12c41f3d */
  if (C.zf) goto L_12c41f3d;
  /* 12c41f20 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c41f22 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12c41f28 push edx */
  push32((uint32_t)(EDX));
  /* 12c41f29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c41f2c push eax */
  push32((uint32_t)(EAX));
  /* 12c41f2d call 0x12c45690 */
  push32(0x12c41f32u); f_12c45690();
  /* 12c41f32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41f35 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12c41f3b jmp 0x12c41f47 */
  goto L_12c41f47;
L_12c41f3d:;
  /* 12c41f3d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12c41f47:;
  /* 12c41f47 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12c41f4d push ecx */
  push32((uint32_t)(ECX));
  /* 12c41f4e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c41f51 push edx */
  push32((uint32_t)(EDX));
  /* 12c41f52 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12c41f58 push eax */
  push32((uint32_t)(EAX));
  /* 12c41f59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c41f5c push ecx */
  push32((uint32_t)(ECX));
  /* 12c41f5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c41f60 push edx */
  push32((uint32_t)(EDX));
  /* 12c41f61 call 0x12c41fa0 */
  push32(0x12c41f66u); f_12c41fa0();
  /* 12c41f66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41f69 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12c41f6f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41f73 jne 0x12c41f80 */
  if (!C.zf) goto L_12c41f80;
  /* 12c41f75 push 0x12c6ca34 */
  push32((uint32_t)(0x12c6ca34u));
  /* 12c41f7a call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c41f80u);
L_12c41f80:;
  /* 12c41f80 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12c41f86 jmp 0x12c41f9b */
  goto L_12c41f9b;
L_12c41f88:;
  /* 12c41f88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41f8c jne 0x12c41f99 */
  if (!C.zf) goto L_12c41f99;
  /* 12c41f8e push 0x12c6ca34 */
  push32((uint32_t)(0x12c6ca34u));
  /* 12c41f93 call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c41f99u);
L_12c41f99:;
  /* 12c41f99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c41f9b:;
  /* 12c41f9b pop edi */
  EDI = (pop32());
  /* 12c41f9c mov esp, ebp */
  ESP = (EBP);
  /* 12c41f9e pop ebp */
  EBP = (pop32());
  /* 12c41f9f ret  */
  ESPCHK(0x12c41c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fa0 @ 0x12c41fa0 (780 bytes, 197 insns) */
void f_12c41fa0(void) {
  FTRACE(0x12c41fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c41fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c41fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12c41fa3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12c41fa8 call 0x12c45cf0 */
  push32(0x12c41fadu); f_12c45cf0();
L_12c41fad:;
  /* 12c41fad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41fb1 jne 0x12c41fd8 */
  if (!C.zf) goto L_12c41fd8;
  /* 12c41fb3 push 0x12c69370 */
  push32((uint32_t)(0x12c69370u));
  /* 12c41fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41fba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12c41fbf push 0x12c69364 */
  push32((uint32_t)(0x12c69364u));
  /* 12c41fc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c41fc6 call 0x12c41c10 */
  push32(0x12c41fcbu); f_12c41c10();
  /* 12c41fcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c41fce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c41fd1 jne 0x12c41fd8 */
  if (!C.zf) goto L_12c41fd8;
  /* 12c41fd3 call 0x12c41b00 */
  push32(0x12c41fd8u); f_12c41b00();
L_12c41fd8:;
  /* 12c41fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c41fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41fdc jne 0x12c41fad */
  if (!C.zf) goto L_12c41fad;
  /* 12c41fde push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c41fe3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12c41fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c41fea push 0 */
  push32((uint32_t)(0x0u));
  /* 12c41fec call dword ptr [0x12c7027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7027c))), 0x12c41ff2u);
  /* 12c41ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c41ff4 jne 0x12c4200a */
  if (!C.zf) goto L_12c4200a;
  /* 12c41ff6 push 0x12c6934c */
  push32((uint32_t)(0x12c6934cu));
  /* 12c41ffb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12c42001 push edx */
  push32((uint32_t)(EDX));
  /* 12c42002 call 0x12c45b00 */
  push32(0x12c42007u); f_12c45b00();
  /* 12c42007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4200a:;
  /* 12c4200a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12c42010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c42013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42016 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42017 call 0x12c45980 */
  push32(0x12c4201cu); f_12c45980();
  /* 12c4201c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4201f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42022 jbe 0x12c4204d */
  if ((C.cf||C.zf)) goto L_12c4204d;
  /* 12c42024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42027 push edx */
  push32((uint32_t)(EDX));
  /* 12c42028 call 0x12c45980 */
  push32(0x12c4202du); f_12c45980();
  /* 12c4202d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42033 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12c42037 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4203a push 3 */
  push32((uint32_t)(0x3u));
  /* 12c4203c push 0x12c69348 */
  push32((uint32_t)(0x12c69348u));
  /* 12c42041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42044 push eax */
  push32((uint32_t)(EAX));
  /* 12c42045 call 0x12c46370 */
  push32(0x12c4204au); f_12c46370();
  /* 12c4204a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4204d:;
  /* 12c4204d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42050 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12c42056 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4205d je 0x12c420a8 */
  if (C.zf) goto L_12c420a8;
  /* 12c4205f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c42065 push edx */
  push32((uint32_t)(EDX));
  /* 12c42066 call 0x12c45980 */
  push32(0x12c4206bu); f_12c45980();
  /* 12c4206b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4206e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42071 jbe 0x12c420a8 */
  if ((C.cf||C.zf)) goto L_12c420a8;
  /* 12c42073 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c42079 push eax */
  push32((uint32_t)(EAX));
  /* 12c4207a call 0x12c45980 */
  push32(0x12c4207fu); f_12c45980();
  /* 12c4207f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42082 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c42088 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12c4208c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12c42092 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c42094 push 0x12c69348 */
  push32((uint32_t)(0x12c69348u));
  /* 12c42099 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c4209f push eax */
  push32((uint32_t)(EAX));
  /* 12c420a0 call 0x12c46370 */
  push32(0x12c420a5u); f_12c46370();
  /* 12c420a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c420a8:;
  /* 12c420a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c420ac jne 0x12c420ba */
  if (!C.zf) goto L_12c420ba;
  /* 12c420ae mov dword ptr [ebp - 0x1114], 0x12c692d4 */
  w32((uint32_t)(EBP + -0x1114), (0x12c692d4u));
  /* 12c420b8 jmp 0x12c420c4 */
  goto L_12c420c4;
L_12c420ba:;
  /* 12c420ba mov dword ptr [ebp - 0x1114], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1114), (0x12c69074u));
L_12c420c4:;
  /* 12c420c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c420c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c420ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c420cc je 0x12c420d9 */
  if (C.zf) goto L_12c420d9;
  /* 12c420ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c420d1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12c420d7 jmp 0x12c420e3 */
  goto L_12c420e3;
L_12c420d9:;
  /* 12c420d9 mov dword ptr [ebp - 0x1118], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1118), (0x12c69074u));
L_12c420e3:;
  /* 12c420e3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c420e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c420e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c420eb je 0x12c420ff */
  if (C.zf) goto L_12c420ff;
  /* 12c420ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c420f1 jne 0x12c420ff */
  if (!C.zf) goto L_12c420ff;
  /* 12c420f3 mov dword ptr [ebp - 0x111c], 0x12c692c4 */
  w32((uint32_t)(EBP + -0x111c), (0x12c692c4u));
  /* 12c420fd jmp 0x12c42109 */
  goto L_12c42109;
L_12c420ff:;
  /* 12c420ff mov dword ptr [ebp - 0x111c], 0x12c69074 */
  w32((uint32_t)(EBP + -0x111c), (0x12c69074u));
L_12c42109:;
  /* 12c42109 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4210c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4210f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c42111 je 0x12c4211f */
  if (C.zf) goto L_12c4211f;
  /* 12c42113 mov dword ptr [ebp - 0x1120], 0x12c692c0 */
  w32((uint32_t)(EBP + -0x1120), (0x12c692c0u));
  /* 12c4211d jmp 0x12c42129 */
  goto L_12c42129;
L_12c4211f:;
  /* 12c4211f mov dword ptr [ebp - 0x1120], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1120), (0x12c69074u));
L_12c42129:;
  /* 12c42129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4212d je 0x12c4213a */
  if (C.zf) goto L_12c4213a;
  /* 12c4212f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42132 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12c42138 jmp 0x12c42144 */
  goto L_12c42144;
L_12c4213a:;
  /* 12c4213a mov dword ptr [ebp - 0x1124], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1124), (0x12c69074u));
L_12c42144:;
  /* 12c42144 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42148 je 0x12c42156 */
  if (C.zf) goto L_12c42156;
  /* 12c4214a mov dword ptr [ebp - 0x1128], 0x12c692b8 */
  w32((uint32_t)(EBP + -0x1128), (0x12c692b8u));
  /* 12c42154 jmp 0x12c42160 */
  goto L_12c42160;
L_12c42156:;
  /* 12c42156 mov dword ptr [ebp - 0x1128], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1128), (0x12c69074u));
L_12c42160:;
  /* 12c42160 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42164 je 0x12c42171 */
  if (C.zf) goto L_12c42171;
  /* 12c42166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42169 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12c4216f jmp 0x12c4217b */
  goto L_12c4217b;
L_12c42171:;
  /* 12c42171 mov dword ptr [ebp - 0x112c], 0x12c69074 */
  w32((uint32_t)(EBP + -0x112c), (0x12c69074u));
L_12c4217b:;
  /* 12c4217b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4217f je 0x12c4218d */
  if (C.zf) goto L_12c4218d;
  /* 12c42181 mov dword ptr [ebp - 0x1130], 0x12c692b0 */
  w32((uint32_t)(EBP + -0x1130), (0x12c692b0u));
  /* 12c4218b jmp 0x12c42197 */
  goto L_12c42197;
L_12c4218d:;
  /* 12c4218d mov dword ptr [ebp - 0x1130], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1130), (0x12c69074u));
L_12c42197:;
  /* 12c42197 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4219e je 0x12c421ae */
  if (C.zf) goto L_12c421ae;
  /* 12c421a0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c421a6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12c421ac jmp 0x12c421b8 */
  goto L_12c421b8;
L_12c421ae:;
  /* 12c421ae mov dword ptr [ebp - 0x1134], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1134), (0x12c69074u));
L_12c421b8:;
  /* 12c421b8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c421bf je 0x12c421cd */
  if (C.zf) goto L_12c421cd;
  /* 12c421c1 mov dword ptr [ebp - 0x1138], 0x12c692a4 */
  w32((uint32_t)(EBP + -0x1138), (0x12c692a4u));
  /* 12c421cb jmp 0x12c421d7 */
  goto L_12c421d7;
L_12c421cd:;
  /* 12c421cd mov dword ptr [ebp - 0x1138], 0x12c69074 */
  w32((uint32_t)(EBP + -0x1138), (0x12c69074u));
L_12c421d7:;
  /* 12c421d7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12c421dd push edx */
  push32((uint32_t)(EDX));
  /* 12c421de mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12c421e4 push eax */
  push32((uint32_t)(EAX));
  /* 12c421e5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12c421eb push ecx */
  push32((uint32_t)(ECX));
  /* 12c421ec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12c421f2 push edx */
  push32((uint32_t)(EDX));
  /* 12c421f3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12c421f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c421fa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12c42200 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42201 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12c42207 push edx */
  push32((uint32_t)(EDX));
  /* 12c42208 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12c4220e push eax */
  push32((uint32_t)(EAX));
  /* 12c4220f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12c42215 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42216 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12c4221c push edx */
  push32((uint32_t)(EDX));
  /* 12c4221d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42220 push eax */
  push32((uint32_t)(EAX));
  /* 12c42221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42224 mov edx, dword ptr [ecx*4 + 0x12c6ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca50)));
  /* 12c4222b push edx */
  push32((uint32_t)(EDX));
  /* 12c4222c push 0x12c69250 */
  push32((uint32_t)(0x12c69250u));
  /* 12c42231 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c42236 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12c4223c push eax */
  push32((uint32_t)(EAX));
  /* 12c4223d call 0x12c45a00 */
  push32(0x12c42242u); f_12c45a00();
  /* 12c42242 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42247 jge 0x12c4225d */
  if ((C.sf==C.of)) goto L_12c4225d;
  /* 12c42249 push 0x12c691b4 */
  push32((uint32_t)(0x12c691b4u));
  /* 12c4224e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12c42254 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42255 call 0x12c45b00 */
  push32(0x12c4225au); f_12c45b00();
  /* 12c4225a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4225d:;
  /* 12c4225d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12c42262 push 0x12c6922c */
  push32((uint32_t)(0x12c6922cu));
  /* 12c42267 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12c4226d push edx */
  push32((uint32_t)(EDX));
  /* 12c4226e call 0x12c462b0 */
  push32(0x12c42273u); f_12c462b0();
  /* 12c42273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42276 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12c4227c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42283 jne 0x12c42296 */
  if (!C.zf) goto L_12c42296;
  /* 12c42285 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c42287 call 0x12c45ff0 */
  push32(0x12c4228cu); f_12c45ff0();
  /* 12c4228c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4228f push 3 */
  push32((uint32_t)(0x3u));
  /* 12c42291 call 0x12c42310 */
  push32(0x12c42296u); f_12c42310();
L_12c42296:;
  /* 12c42296 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4229d jne 0x12c422a6 */
  if (!C.zf) goto L_12c422a6;
  /* 12c4229f mov eax, 1 */
  EAX = (0x1u);
  /* 12c422a4 jmp 0x12c422a8 */
  goto L_12c422a8;
L_12c422a6:;
  /* 12c422a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c422a8:;
  /* 12c422a8 mov esp, ebp */
  ESP = (EBP);
  /* 12c422aa pop ebp */
  EBP = (pop32());
  /* 12c422ab ret  */
  ESPCHK(0x12c41fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022b0 @ 0x12c422b0 (56 bytes, 15 insns) */
void f_12c422b0(void) {
  FTRACE(0x12c422b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c422b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c422b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c422b3 cmp dword ptr [0x12c6ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c422ba je 0x12c422c2 */
  if (C.zf) goto L_12c422c2;
  /* 12c422bc call dword ptr [0x12c6ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6ffbc))), 0x12c422c2u);
L_12c422c2:;
  /* 12c422c2 push 0x12c6c418 */
  push32((uint32_t)(0x12c6c418u));
  /* 12c422c7 push 0x12c6c208 */
  push32((uint32_t)(0x12c6c208u));
  /* 12c422cc call 0x12c42480 */
  push32(0x12c422d1u); f_12c42480();
  /* 12c422d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c422d4 push 0x12c6c104 */
  push32((uint32_t)(0x12c6c104u));
  /* 12c422d9 push 0x12c6c000 */
  push32((uint32_t)(0x12c6c000u));
  /* 12c422de call 0x12c42480 */
  push32(0x12c422e3u); f_12c42480();
  /* 12c422e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c422e6 pop ebp */
  EBP = (pop32());
  /* 12c422e7 ret  */
  ESPCHK(0x12c422b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f0 @ 0x12c422f0 (21 bytes, 10 insns) */
void f_12c422f0(void) {
  FTRACE(0x12c422f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c422f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c422f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c422f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c422f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c422f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c422fa push eax */
  push32((uint32_t)(EAX));
  /* 12c422fb call 0x12c42370 */
  push32(0x12c42300u); f_12c42370();
  /* 12c42300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42303 pop ebp */
  EBP = (pop32());
  /* 12c42304 ret  */
  ESPCHK(0x12c422f0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12c42310 (21 bytes, 10 insns) */
void f_12c42310(void) {
  FTRACE(0x12c42310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42310 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42311 mov ebp, esp */
  EBP = (ESP);
  /* 12c42313 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42315 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42317 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4231a push eax */
  push32((uint32_t)(EAX));
  /* 12c4231b call 0x12c42370 */
  push32(0x12c42320u); f_12c42370();
  /* 12c42320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42323 pop ebp */
  EBP = (pop32());
  /* 12c42324 ret  */
  ESPCHK(0x12c42310u, _esp0);
  ESP += 4; return;
}

/* FUN_10002330 @ 0x12c42330 (19 bytes, 9 insns) */
void f_12c42330(void) {
  FTRACE(0x12c42330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42330 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42331 mov ebp, esp */
  EBP = (ESP);
  /* 12c42333 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42335 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42339 call 0x12c42370 */
  push32(0x12c4233eu); f_12c42370();
  /* 12c4233e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42341 pop ebp */
  EBP = (pop32());
  /* 12c42342 ret  */
  ESPCHK(0x12c42330u, _esp0);
  ESP += 4; return;
}

/* FUN_10002350 @ 0x12c42350 (19 bytes, 9 insns) */
void f_12c42350(void) {
  FTRACE(0x12c42350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42350 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42351 mov ebp, esp */
  EBP = (ESP);
  /* 12c42353 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42355 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42357 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42359 call 0x12c42370 */
  push32(0x12c4235eu); f_12c42370();
  /* 12c4235e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42361 pop ebp */
  EBP = (pop32());
  /* 12c42362 ret  */
  ESPCHK(0x12c42350u, _esp0);
  ESP += 4; return;
}

/* FUN_10002370 @ 0x12c42370 (227 bytes, 61 insns) */
void f_12c42370(void) {
  FTRACE(0x12c42370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42370 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42371 mov ebp, esp */
  EBP = (ESP);
  /* 12c42373 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42374 call 0x12c42460 */
  push32(0x12c42379u); f_12c42460();
  /* 12c42379 cmp dword ptr [0x12c6e4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42380 jne 0x12c42393 */
  if (!C.zf) goto L_12c42393;
  /* 12c42382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42385 push eax */
  push32((uint32_t)(EAX));
  /* 12c42386 call dword ptr [0x12c70288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70288))), 0x12c4238cu);
  /* 12c4238c push eax */
  push32((uint32_t)(EAX));
  /* 12c4238d call dword ptr [0x12c70284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70284))), 0x12c42393u);
L_12c42393:;
  /* 12c42393 mov dword ptr [0x12c6e4c0], 1 */
  w32((uint32_t)(0x12c6e4c0), (0x1u));
  /* 12c4239d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12c423a0 mov byte ptr [0x12c6e4bc], cl */
  w8((uint32_t)(0x12c6e4bc), (CL));
  /* 12c423a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c423aa jne 0x12c423f3 */
  if (!C.zf) goto L_12c423f3;
  /* 12c423ac cmp dword ptr [0x12c6ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c423b3 je 0x12c423e1 */
  if (C.zf) goto L_12c423e1;
  /* 12c423b5 mov edx, dword ptr [0x12c6ffb4] */
  EDX = (r32((uint32_t)(0x12c6ffb4)));
  /* 12c423bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c423be:;
  /* 12c423be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c423c1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c423c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c423c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c423ca cmp ecx, dword ptr [0x12c6ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c423d0 jb 0x12c423e1 */
  if (C.cf) goto L_12c423e1;
  /* 12c423d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c423d5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c423d8 je 0x12c423df */
  if (C.zf) goto L_12c423df;
  /* 12c423da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c423dd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12c423dfu);
L_12c423df:;
  /* 12c423df jmp 0x12c423be */
  goto L_12c423be;
L_12c423e1:;
  /* 12c423e1 push 0x12c6c724 */
  push32((uint32_t)(0x12c6c724u));
  /* 12c423e6 push 0x12c6c51c */
  push32((uint32_t)(0x12c6c51cu));
  /* 12c423eb call 0x12c42480 */
  push32(0x12c423f0u); f_12c42480();
  /* 12c423f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c423f3:;
  /* 12c423f3 push 0x12c6c92c */
  push32((uint32_t)(0x12c6c92cu));
  /* 12c423f8 push 0x12c6c828 */
  push32((uint32_t)(0x12c6c828u));
  /* 12c423fd call 0x12c42480 */
  push32(0x12c42402u); f_12c42480();
  /* 12c42402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42405 cmp dword ptr [0x12c6e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4240c jne 0x12c4242e */
  if (!C.zf) goto L_12c4242e;
  /* 12c4240e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c42410 call 0x12c44060 */
  push32(0x12c42415u); f_12c44060();
  /* 12c42415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42418 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4241b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4241d je 0x12c4242e */
  if (C.zf) goto L_12c4242e;
  /* 12c4241f mov dword ptr [0x12c6e4c8], 1 */
  w32((uint32_t)(0x12c6e4c8), (0x1u));
  /* 12c42429 call 0x12c44970 */
  push32(0x12c4242eu); f_12c44970();
L_12c4242e:;
  /* 12c4242e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42432 je 0x12c4243b */
  if (C.zf) goto L_12c4243b;
  /* 12c42434 call 0x12c42470 */
  push32(0x12c42439u); f_12c42470();
  /* 12c42439 jmp 0x12c4244f */
  goto L_12c4244f;
L_12c4243b:;
  /* 12c4243b mov dword ptr [0x12c6e4c4], 1 */
  w32((uint32_t)(0x12c6e4c4), (0x1u));
  /* 12c42445 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42448 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42449 call dword ptr [0x12c70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70280))), 0x12c4244fu);
L_12c4244f:;
  /* 12c4244f mov esp, ebp */
  ESP = (EBP);
  /* 12c42451 pop ebp */
  EBP = (pop32());
  /* 12c42452 ret  */
  ESPCHK(0x12c42370u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x12c42460 (15 bytes, 7 insns) */
void f_12c42460(void) {
  FTRACE(0x12c42460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42460 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42461 mov ebp, esp */
  EBP = (ESP);
  /* 12c42463 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c42465 call 0x12c46550 */
  push32(0x12c4246au); f_12c46550();
  /* 12c4246a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4246d pop ebp */
  EBP = (pop32());
  /* 12c4246e ret  */
  ESPCHK(0x12c42460u, _esp0);
  ESP += 4; return;
}

/* FUN_10002470 @ 0x12c42470 (15 bytes, 7 insns) */
void f_12c42470(void) {
  FTRACE(0x12c42470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42470 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42471 mov ebp, esp */
  EBP = (ESP);
  /* 12c42473 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c42475 call 0x12c465f0 */
  push32(0x12c4247au); f_12c465f0();
  /* 12c4247a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4247d pop ebp */
  EBP = (pop32());
  /* 12c4247e ret  */
  ESPCHK(0x12c42470u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12c42480 (37 bytes, 16 insns) */
void f_12c42480(void) {
  FTRACE(0x12c42480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42480 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42481 mov ebp, esp */
  EBP = (ESP);
L_12c42483:;
  /* 12c42483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42486 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42489 jae 0x12c424a3 */
  if (!C.cf) goto L_12c424a3;
  /* 12c4248b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4248e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42491 je 0x12c42498 */
  if (C.zf) goto L_12c42498;
  /* 12c42493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42496 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12c42498u);
L_12c42498:;
  /* 12c42498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4249b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4249e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c424a1 jmp 0x12c42483 */
  goto L_12c42483;
L_12c424a3:;
  /* 12c424a3 pop ebp */
  EBP = (pop32());
  /* 12c424a4 ret  */
  ESPCHK(0x12c42480u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b0 @ 0x12c424b0 (130 bytes, 42 insns) */
void f_12c424b0(void) {
  FTRACE(0x12c424b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c424b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c424b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c424b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c424b4 call 0x12c46470 */
  push32(0x12c424b9u); f_12c46470();
  /* 12c424b9 call dword ptr [0x12c70294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70294))), 0x12c424bfu);
  /* 12c424bf mov dword ptr [0x12c6ca5c], eax */
  w32((uint32_t)(0x12c6ca5c), (EAX));
  /* 12c424c4 cmp dword ptr [0x12c6ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c424cb jne 0x12c424d1 */
  if (!C.zf) goto L_12c424d1;
  /* 12c424cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c424cf jmp 0x12c4252e */
  goto L_12c4252e;
L_12c424d1:;
  /* 12c424d1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12c424d3 push 0x12c69388 */
  push32((uint32_t)(0x12c69388u));
  /* 12c424d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c424da push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12c424dc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c424de call 0x12c42f60 */
  push32(0x12c424e3u); f_12c42f60();
  /* 12c424e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c424e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c424e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c424ed je 0x12c42504 */
  if (C.zf) goto L_12c42504;
  /* 12c424ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c424f2 push eax */
  push32((uint32_t)(EAX));
  /* 12c424f3 mov ecx, dword ptr [0x12c6ca5c] */
  ECX = (r32((uint32_t)(0x12c6ca5c)));
  /* 12c424f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c424fa call dword ptr [0x12c70290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70290))), 0x12c42500u);
  /* 12c42500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42502 jne 0x12c42508 */
  if (!C.zf) goto L_12c42508;
L_12c42504:;
  /* 12c42504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42506 jmp 0x12c4252e */
  goto L_12c4252e;
L_12c42508:;
  /* 12c42508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4250b push edx */
  push32((uint32_t)(EDX));
  /* 12c4250c call 0x12c42570 */
  push32(0x12c42511u); f_12c42570();
  /* 12c42511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42514 call dword ptr [0x12c7028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7028c))), 0x12c4251au);
  /* 12c4251a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4251d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c4251f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42522 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12c42529 mov eax, 1 */
  EAX = (0x1u);
L_12c4252e:;
  /* 12c4252e mov esp, ebp */
  ESP = (EBP);
  /* 12c42530 pop ebp */
  EBP = (pop32());
  /* 12c42531 ret  */
  ESPCHK(0x12c424b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x12c42540 (41 bytes, 11 insns) */
void f_12c42540(void) {
  FTRACE(0x12c42540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42540 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42541 mov ebp, esp */
  EBP = (ESP);
  /* 12c42543 call 0x12c464b0 */
  push32(0x12c42548u); f_12c464b0();
  /* 12c42548 cmp dword ptr [0x12c6ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4254f je 0x12c42567 */
  if (C.zf) goto L_12c42567;
  /* 12c42551 mov eax, dword ptr [0x12c6ca5c] */
  EAX = (r32((uint32_t)(0x12c6ca5c)));
  /* 12c42556 push eax */
  push32((uint32_t)(EAX));
  /* 12c42557 call dword ptr [0x12c70298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70298))), 0x12c4255du);
  /* 12c4255d mov dword ptr [0x12c6ca5c], 0xffffffff */
  w32((uint32_t)(0x12c6ca5c), (0xffffffffu));
L_12c42567:;
  /* 12c42567 pop ebp */
  EBP = (pop32());
  /* 12c42568 ret  */
  ESPCHK(0x12c42540u, _esp0);
  ESP += 4; return;
}

/* FUN_10002570 @ 0x12c42570 (25 bytes, 8 insns) */
void f_12c42570(void) {
  FTRACE(0x12c42570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42570 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42571 mov ebp, esp */
  EBP = (ESP);
  /* 12c42573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42576 mov dword ptr [eax + 0x50], 0x12c6cc00 */
  w32((uint32_t)(EAX + 0x50), (0x12c6cc00u));
  /* 12c4257d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42580 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12c42587 pop ebp */
  EBP = (pop32());
  /* 12c42588 ret  */
  ESPCHK(0x12c42570u, _esp0);
  ESP += 4; return;
}

/* FUN_10002590 @ 0x12c42590 (152 bytes, 48 insns) */
void f_12c42590(void) {
  FTRACE(0x12c42590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42590 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42591 mov ebp, esp */
  EBP = (ESP);
  /* 12c42593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c42596 call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4259cu);
  /* 12c4259c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4259f mov eax, dword ptr [0x12c6ca5c] */
  EAX = (r32((uint32_t)(0x12c6ca5c)));
  /* 12c425a4 push eax */
  push32((uint32_t)(EAX));
  /* 12c425a5 call dword ptr [0x12c702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a0))), 0x12c425abu);
  /* 12c425ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c425ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c425b2 jne 0x12c42617 */
  if (!C.zf) goto L_12c42617;
  /* 12c425b4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12c425b9 push 0x12c69388 */
  push32((uint32_t)(0x12c69388u));
  /* 12c425be push 2 */
  push32((uint32_t)(0x2u));
  /* 12c425c0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12c425c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c425c4 call 0x12c42f60 */
  push32(0x12c425c9u); f_12c42f60();
  /* 12c425c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c425cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c425cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c425d3 je 0x12c4260d */
  if (C.zf) goto L_12c4260d;
  /* 12c425d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c425d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c425d9 mov edx, dword ptr [0x12c6ca5c] */
  EDX = (r32((uint32_t)(0x12c6ca5c)));
  /* 12c425df push edx */
  push32((uint32_t)(EDX));
  /* 12c425e0 call dword ptr [0x12c70290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70290))), 0x12c425e6u);
  /* 12c425e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c425e8 je 0x12c4260d */
  if (C.zf) goto L_12c4260d;
  /* 12c425ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c425ed push eax */
  push32((uint32_t)(EAX));
  /* 12c425ee call 0x12c42570 */
  push32(0x12c425f3u); f_12c42570();
  /* 12c425f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c425f6 call dword ptr [0x12c7028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7028c))), 0x12c425fcu);
  /* 12c425fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c425ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c42601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42604 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12c4260b jmp 0x12c42617 */
  goto L_12c42617;
L_12c4260d:;
  /* 12c4260d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c4260f call 0x12c41ac0 */
  push32(0x12c42614u); f_12c41ac0();
  /* 12c42614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c42617:;
  /* 12c42617 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4261a push eax */
  push32((uint32_t)(EAX));
  /* 12c4261b call dword ptr [0x12c7029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7029c))), 0x12c42621u);
  /* 12c42621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42624 mov esp, ebp */
  ESP = (EBP);
  /* 12c42626 pop ebp */
  EBP = (pop32());
  /* 12c42627 ret  */
  ESPCHK(0x12c42590u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x12c42630 (263 bytes, 86 insns) */
void f_12c42630(void) {
  FTRACE(0x12c42630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42630 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42631 mov ebp, esp */
  EBP = (ESP);
  /* 12c42633 cmp dword ptr [0x12c6ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4263a je 0x12c42735 */
  if (C.zf) goto L_12c42735;
  /* 12c42640 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42644 jne 0x12c42655 */
  if (!C.zf) goto L_12c42655;
  /* 12c42646 mov eax, dword ptr [0x12c6ca5c] */
  EAX = (r32((uint32_t)(0x12c6ca5c)));
  /* 12c4264b push eax */
  push32((uint32_t)(EAX));
  /* 12c4264c call dword ptr [0x12c702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a0))), 0x12c42652u);
  /* 12c42652 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c42655:;
  /* 12c42655 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42659 je 0x12c42726 */
  if (C.zf) goto L_12c42726;
  /* 12c4265f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42662 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42666 je 0x12c42679 */
  if (C.zf) goto L_12c42679;
  /* 12c42668 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4266a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4266d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12c42670 push eax */
  push32((uint32_t)(EAX));
  /* 12c42671 call 0x12c435e0 */
  push32(0x12c42676u); f_12c435e0();
  /* 12c42676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c42679:;
  /* 12c42679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4267c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42680 je 0x12c42693 */
  if (C.zf) goto L_12c42693;
  /* 12c42682 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c42684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42687 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12c4268a push eax */
  push32((uint32_t)(EAX));
  /* 12c4268b call 0x12c435e0 */
  push32(0x12c42690u); f_12c435e0();
  /* 12c42690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c42693:;
  /* 12c42693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42696 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4269a je 0x12c426ad */
  if (C.zf) goto L_12c426ad;
  /* 12c4269c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4269e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426a1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12c426a4 push eax */
  push32((uint32_t)(EAX));
  /* 12c426a5 call 0x12c435e0 */
  push32(0x12c426aau); f_12c435e0();
  /* 12c426aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c426ad:;
  /* 12c426ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426b0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c426b4 je 0x12c426c7 */
  if (C.zf) goto L_12c426c7;
  /* 12c426b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c426b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426bb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12c426be push eax */
  push32((uint32_t)(EAX));
  /* 12c426bf call 0x12c435e0 */
  push32(0x12c426c4u); f_12c435e0();
  /* 12c426c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c426c7:;
  /* 12c426c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426ca cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c426ce je 0x12c426e1 */
  if (C.zf) goto L_12c426e1;
  /* 12c426d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c426d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426d5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12c426d8 push eax */
  push32((uint32_t)(EAX));
  /* 12c426d9 call 0x12c435e0 */
  push32(0x12c426deu); f_12c435e0();
  /* 12c426de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c426e1:;
  /* 12c426e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426e4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c426e8 je 0x12c426fb */
  if (C.zf) goto L_12c426fb;
  /* 12c426ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12c426ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426ef mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12c426f2 push eax */
  push32((uint32_t)(EAX));
  /* 12c426f3 call 0x12c435e0 */
  push32(0x12c426f8u); f_12c435e0();
  /* 12c426f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c426fb:;
  /* 12c426fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c426fe cmp dword ptr [ecx + 0x50], 0x12c6cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12c6cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42705 je 0x12c42718 */
  if (C.zf) goto L_12c42718;
  /* 12c42707 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c42709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4270c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12c4270f push eax */
  push32((uint32_t)(EAX));
  /* 12c42710 call 0x12c435e0 */
  push32(0x12c42715u); f_12c435e0();
  /* 12c42715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c42718:;
  /* 12c42718 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4271a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4271d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4271e call 0x12c435e0 */
  push32(0x12c42723u); f_12c435e0();
  /* 12c42723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c42726:;
  /* 12c42726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42728 mov edx, dword ptr [0x12c6ca5c] */
  EDX = (r32((uint32_t)(0x12c6ca5c)));
  /* 12c4272e push edx */
  push32((uint32_t)(EDX));
  /* 12c4272f call dword ptr [0x12c70290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70290))), 0x12c42735u);
L_12c42735:;
  /* 12c42735 pop ebp */
  EBP = (pop32());
  /* 12c42736 ret  */
  ESPCHK(0x12c42630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x12c42740 (11 bytes, 5 insns) */
void f_12c42740(void) {
  FTRACE(0x12c42740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42740 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42741 mov ebp, esp */
  EBP = (ESP);
  /* 12c42743 call dword ptr [0x12c7028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7028c))), 0x12c42749u);
  /* 12c42749 pop ebp */
  EBP = (pop32());
  /* 12c4274a ret  */
  ESPCHK(0x12c42740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x12c42750 (11 bytes, 5 insns) */
void f_12c42750(void) {
  FTRACE(0x12c42750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42750 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42751 mov ebp, esp */
  EBP = (ESP);
  /* 12c42753 call dword ptr [0x12c702a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a8))), 0x12c42759u);
  /* 12c42759 pop ebp */
  EBP = (pop32());
  /* 12c4275a ret  */
  ESPCHK(0x12c42750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x12c42760 (804 bytes, 236 insns) */
void f_12c42760(void) {
  FTRACE(0x12c42760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42760 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42761 mov ebp, esp */
  EBP = (ESP);
  /* 12c42763 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c42766 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12c4276b push 0x12c69394 */
  push32((uint32_t)(0x12c69394u));
  /* 12c42770 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c42772 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c42777 call 0x12c42b50 */
  push32(0x12c4277cu); f_12c42b50();
  /* 12c4277c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4277f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12c42782 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42786 jne 0x12c42792 */
  if (!C.zf) goto L_12c42792;
  /* 12c42788 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12c4278a call 0x12c41ac0 */
  push32(0x12c4278fu); f_12c41ac0();
  /* 12c4278f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c42792:;
  /* 12c42792 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42795 mov dword ptr [0x12c6fe60], eax */
  w32((uint32_t)(0x12c6fe60), (EAX));
  /* 12c4279a mov dword ptr [0x12c6ff9c], 0x20 */
  w32((uint32_t)(0x12c6ff9c), (0x20u));
  /* 12c427a4 jmp 0x12c427af */
  goto L_12c427af;
L_12c427a6:;
  /* 12c427a6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c427a9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c427ac mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12c427af:;
  /* 12c427af mov edx, dword ptr [0x12c6fe60] */
  EDX = (r32((uint32_t)(0x12c6fe60)));
  /* 12c427b5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c427bb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c427be jae 0x12c427e3 */
  if (!C.cf) goto L_12c427e3;
  /* 12c427c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c427c3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c427c7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c427ca mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c427d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c427d3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12c427d7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c427da mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c427e1 jmp 0x12c427a6 */
  goto L_12c427a6;
L_12c427e3:;
  /* 12c427e3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12c427e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c427e7 call dword ptr [0x12c702b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b4))), 0x12c427edu);
  /* 12c427ed mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12c427f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c427f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c427f8 je 0x12c42985 */
  if (C.zf) goto L_12c42985;
  /* 12c427fe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42802 je 0x12c42985 */
  if (C.zf) goto L_12c42985;
  /* 12c42808 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4280b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4280d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12c42810 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c42813 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42816 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c42819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4281c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4281f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12c42822 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42829 jge 0x12c42833 */
  if ((C.sf==C.of)) goto L_12c42833;
  /* 12c4282b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12c4282e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12c42831 jmp 0x12c4283a */
  goto L_12c4283a;
L_12c42833:;
  /* 12c42833 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12c4283a:;
  /* 12c4283a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12c4283d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12c42840 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12c42847 jmp 0x12c42852 */
  goto L_12c42852;
L_12c42849:;
  /* 12c42849 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12c4284c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4284f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12c42852:;
  /* 12c42852 mov ecx, dword ptr [0x12c6ff9c] */
  ECX = (r32((uint32_t)(0x12c6ff9c)));
  /* 12c42858 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4285b jge 0x12c428f2 */
  if ((C.sf==C.of)) goto L_12c428f2;
  /* 12c42861 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12c42866 push 0x12c69394 */
  push32((uint32_t)(0x12c69394u));
  /* 12c4286b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4286d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c42872 call 0x12c42b50 */
  push32(0x12c42877u); f_12c42b50();
  /* 12c42877 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4287a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12c4287d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42881 jne 0x12c4288e */
  if (!C.zf) goto L_12c4288e;
  /* 12c42883 mov edx, dword ptr [0x12c6ff9c] */
  EDX = (r32((uint32_t)(0x12c6ff9c)));
  /* 12c42889 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12c4288c jmp 0x12c428f2 */
  goto L_12c428f2;
L_12c4288e:;
  /* 12c4288e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12c42891 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42894 mov dword ptr [eax*4 + 0x12c6fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12c6fe60), (ECX));
  /* 12c4289b mov edx, dword ptr [0x12c6ff9c] */
  EDX = (r32((uint32_t)(0x12c6ff9c)));
  /* 12c428a1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c428a4 mov dword ptr [0x12c6ff9c], edx */
  w32((uint32_t)(0x12c6ff9c), (EDX));
  /* 12c428aa jmp 0x12c428b5 */
  goto L_12c428b5;
L_12c428ac:;
  /* 12c428ac mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c428af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c428b2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12c428b5:;
  /* 12c428b5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12c428b8 mov edx, dword ptr [ecx*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c428bf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c428c5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c428c8 jae 0x12c428ed */
  if (!C.cf) goto L_12c428ed;
  /* 12c428ca mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c428cd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c428d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c428d4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c428da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c428dd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12c428e1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c428e4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c428eb jmp 0x12c428ac */
  goto L_12c428ac;
L_12c428ed:;
  /* 12c428ed jmp 0x12c42849 */
  goto L_12c42849;
L_12c428f2:;
  /* 12c428f2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12c428f9 jmp 0x12c42916 */
  goto L_12c42916;
L_12c428fb:;
  /* 12c428fb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c428fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42901 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12c42904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42907 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4290a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4290d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c42910 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42913 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12c42916:;
  /* 12c42916 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c42919 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4291c jge 0x12c42985 */
  if ((C.sf==C.of)) goto L_12c42985;
  /* 12c4291e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c42921 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42924 je 0x12c42980 */
  if (C.zf) goto L_12c42980;
  /* 12c42926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42929 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4292c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4292f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c42931 je 0x12c42980 */
  if (C.zf) goto L_12c42980;
  /* 12c42933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42936 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c42939 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4293c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4293e jne 0x12c42950 */
  if (!C.zf) goto L_12c42950;
  /* 12c42940 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c42943 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c42945 push edx */
  push32((uint32_t)(EDX));
  /* 12c42946 call dword ptr [0x12c702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b0))), 0x12c4294cu);
  /* 12c4294c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4294e je 0x12c42980 */
  if (C.zf) goto L_12c42980;
L_12c42950:;
  /* 12c42950 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c42953 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c42956 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c42959 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4295c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4295f mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c42966 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42968 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12c4296b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c4296e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c42971 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c42973 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c42975 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4297b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4297d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12c42980:;
  /* 12c42980 jmp 0x12c428fb */
  goto L_12c428fb;
L_12c42985:;
  /* 12c42985 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12c4298c jmp 0x12c42997 */
  goto L_12c42997;
L_12c4298e:;
  /* 12c4298e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c42991 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42994 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12c42997:;
  /* 12c42997 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4299b jge 0x12c42a74 */
  if ((C.sf==C.of)) goto L_12c42a74;
  /* 12c429a1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c429a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c429a7 mov edx, dword ptr [0x12c6fe60] */
  EDX = (r32((uint32_t)(0x12c6fe60)));
  /* 12c429ad add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c429af mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12c429b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c429b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c429b8 jne 0x12c42a60 */
  if (!C.zf) goto L_12c42a60;
  /* 12c429be mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c429c1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12c429c5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c429c9 jne 0x12c429d4 */
  if (!C.zf) goto L_12c429d4;
  /* 12c429cb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12c429d2 jmp 0x12c429e4 */
  goto L_12c429e4;
L_12c429d4:;
  /* 12c429d4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c429d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c429da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c429dc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c429de add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c429e1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12c429e4:;
  /* 12c429e4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12c429e7 push eax */
  push32((uint32_t)(EAX));
  /* 12c429e8 call dword ptr [0x12c70260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70260))), 0x12c429eeu);
  /* 12c429ee mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12c429f1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c429f5 je 0x12c42a4f */
  if (C.zf) goto L_12c42a4f;
  /* 12c429f7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c429fa push ecx */
  push32((uint32_t)(ECX));
  /* 12c429fb call dword ptr [0x12c702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b0))), 0x12c42a01u);
  /* 12c42a01 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12c42a04 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42a08 je 0x12c42a4f */
  if (C.zf) goto L_12c42a4f;
  /* 12c42a0a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a0d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c42a10 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c42a12 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12c42a15 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c42a1b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42a1e jne 0x12c42a30 */
  if (!C.zf) goto L_12c42a30;
  /* 12c42a20 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a23 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c42a26 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12c42a28 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a2b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12c42a2e jmp 0x12c42a4d */
  goto L_12c42a4d;
L_12c42a30:;
  /* 12c42a30 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12c42a33 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c42a39 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42a3c jne 0x12c42a4d */
  if (!C.zf) goto L_12c42a4d;
  /* 12c42a3e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c42a44 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12c42a47 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a4a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12c42a4d:;
  /* 12c42a4d jmp 0x12c42a5e */
  goto L_12c42a5e;
L_12c42a4f:;
  /* 12c42a4f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a52 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c42a55 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12c42a58 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a5b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12c42a5e:;
  /* 12c42a5e jmp 0x12c42a6f */
  goto L_12c42a6f;
L_12c42a60:;
  /* 12c42a60 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a63 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c42a66 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12c42a69 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c42a6c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12c42a6f:;
  /* 12c42a6f jmp 0x12c4298e */
  goto L_12c4298e;
L_12c42a74:;
  /* 12c42a74 mov eax, dword ptr [0x12c6ff9c] */
  EAX = (r32((uint32_t)(0x12c6ff9c)));
  /* 12c42a79 push eax */
  push32((uint32_t)(EAX));
  /* 12c42a7a call dword ptr [0x12c702ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702ac))), 0x12c42a80u);
  /* 12c42a80 mov esp, ebp */
  ESP = (EBP);
  /* 12c42a82 pop ebp */
  EBP = (pop32());
  /* 12c42a83 ret  */
  ESPCHK(0x12c42760u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12c42a90 (155 bytes, 45 insns) */
void f_12c42a90(void) {
  FTRACE(0x12c42a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42a91 mov ebp, esp */
  EBP = (ESP);
  /* 12c42a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c42a96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c42a9d jmp 0x12c42aa8 */
  goto L_12c42aa8;
L_12c42a9f:;
  /* 12c42a9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42aa2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42aa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c42aa8:;
  /* 12c42aa8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42aac jge 0x12c42b27 */
  if ((C.sf==C.of)) goto L_12c42b27;
  /* 12c42aae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42ab1 cmp dword ptr [ecx*4 + 0x12c6fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c6fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42ab9 je 0x12c42b22 */
  if (C.zf) goto L_12c42b22;
  /* 12c42abb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42abe mov eax, dword ptr [edx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c42ac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c42ac8 jmp 0x12c42ad3 */
  goto L_12c42ad3;
L_12c42aca:;
  /* 12c42aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42acd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42ad0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c42ad3:;
  /* 12c42ad3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42ad6 mov eax, dword ptr [edx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c42add add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42ae2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42ae5 jae 0x12c42aff */
  if (!C.cf) goto L_12c42aff;
  /* 12c42ae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42aea cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42aee je 0x12c42afd */
  if (C.zf) goto L_12c42afd;
  /* 12c42af0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42af3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42af6 push edx */
  push32((uint32_t)(EDX));
  /* 12c42af7 call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c42afdu);
L_12c42afd:;
  /* 12c42afd jmp 0x12c42aca */
  goto L_12c42aca;
L_12c42aff:;
  /* 12c42aff push 2 */
  push32((uint32_t)(0x2u));
  /* 12c42b01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42b04 mov ecx, dword ptr [eax*4 + 0x12c6fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c42b0b push ecx */
  push32((uint32_t)(ECX));
  /* 12c42b0c call 0x12c435e0 */
  push32(0x12c42b11u); f_12c435e0();
  /* 12c42b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42b17 mov dword ptr [edx*4 + 0x12c6fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x12c6fe60), (0x0u));
L_12c42b22:;
  /* 12c42b22 jmp 0x12c42a9f */
  goto L_12c42a9f;
L_12c42b27:;
  /* 12c42b27 mov esp, ebp */
  ESP = (EBP);
  /* 12c42b29 pop ebp */
  EBP = (pop32());
  /* 12c42b2a ret  */
  ESPCHK(0x12c42a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x12c42b30 (29 bytes, 13 insns) */
void f_12c42b30(void) {
  FTRACE(0x12c42b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42b31 mov ebp, esp */
  EBP = (ESP);
  /* 12c42b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42b39 mov eax, dword ptr [0x12c6e670] */
  EAX = (r32((uint32_t)(0x12c6e670)));
  /* 12c42b3e push eax */
  push32((uint32_t)(EAX));
  /* 12c42b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42b42 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42b43 call 0x12c42ba0 */
  push32(0x12c42b48u); f_12c42ba0();
  /* 12c42b48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42b4b pop ebp */
  EBP = (pop32());
  /* 12c42b4c ret  */
  ESPCHK(0x12c42b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x12c42b50 (35 bytes, 16 insns) */
void f_12c42b50(void) {
  FTRACE(0x12c42b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42b51 mov ebp, esp */
  EBP = (ESP);
  /* 12c42b53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42b56 push eax */
  push32((uint32_t)(EAX));
  /* 12c42b57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42b5a push ecx */
  push32((uint32_t)(ECX));
  /* 12c42b5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42b5e push edx */
  push32((uint32_t)(EDX));
  /* 12c42b5f mov eax, dword ptr [0x12c6e670] */
  EAX = (r32((uint32_t)(0x12c6e670)));
  /* 12c42b64 push eax */
  push32((uint32_t)(EAX));
  /* 12c42b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42b68 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42b69 call 0x12c42ba0 */
  push32(0x12c42b6eu); f_12c42ba0();
  /* 12c42b6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42b71 pop ebp */
  EBP = (pop32());
  /* 12c42b72 ret  */
  ESPCHK(0x12c42b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x12c42b80 (27 bytes, 13 insns) */
void f_12c42b80(void) {
  FTRACE(0x12c42b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42b81 mov ebp, esp */
  EBP = (ESP);
  /* 12c42b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42b89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42b8c push eax */
  push32((uint32_t)(EAX));
  /* 12c42b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42b90 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42b91 call 0x12c42ba0 */
  push32(0x12c42b96u); f_12c42ba0();
  /* 12c42b96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42b99 pop ebp */
  EBP = (pop32());
  /* 12c42b9a ret  */
  ESPCHK(0x12c42b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x12c42ba0 (94 bytes, 38 insns) */
void f_12c42ba0(void) {
  FTRACE(0x12c42ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12c42ba3 push ecx */
  push32((uint32_t)(ECX));
L_12c42ba4:;
  /* 12c42ba4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c42ba6 call 0x12c46550 */
  push32(0x12c42babu); f_12c46550();
  /* 12c42bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42bae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c42bb1 push eax */
  push32((uint32_t)(EAX));
  /* 12c42bb2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42bb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42bb9 push edx */
  push32((uint32_t)(EDX));
  /* 12c42bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42bbd push eax */
  push32((uint32_t)(EAX));
  /* 12c42bbe call 0x12c42c20 */
  push32(0x12c42bc3u); f_12c42c20();
  /* 12c42bc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42bc6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c42bc9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c42bcb call 0x12c465f0 */
  push32(0x12c42bd0u); f_12c465f0();
  /* 12c42bd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42bd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42bd7 jne 0x12c42bdf */
  if (!C.zf) goto L_12c42bdf;
  /* 12c42bd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42bdd jne 0x12c42be4 */
  if (!C.zf) goto L_12c42be4;
L_12c42bdf:;
  /* 12c42bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42be2 jmp 0x12c42bfa */
  goto L_12c42bfa;
L_12c42be4:;
  /* 12c42be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42be7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42be8 call 0x12c46890 */
  push32(0x12c42bedu); f_12c46890();
  /* 12c42bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42bf2 jne 0x12c42bf8 */
  if (!C.zf) goto L_12c42bf8;
  /* 12c42bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42bf6 jmp 0x12c42bfa */
  goto L_12c42bfa;
L_12c42bf8:;
  /* 12c42bf8 jmp 0x12c42ba4 */
  goto L_12c42ba4;
L_12c42bfa:;
  /* 12c42bfa mov esp, ebp */
  ESP = (EBP);
  /* 12c42bfc pop ebp */
  EBP = (pop32());
  /* 12c42bfd ret  */
  ESPCHK(0x12c42ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c00 @ 0x12c42c00 (23 bytes, 11 insns) */
void f_12c42c00(void) {
  FTRACE(0x12c42c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42c01 mov ebp, esp */
  EBP = (ESP);
  /* 12c42c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42c09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42c0c push eax */
  push32((uint32_t)(EAX));
  /* 12c42c0d call 0x12c42c20 */
  push32(0x12c42c12u); f_12c42c20();
  /* 12c42c12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42c15 pop ebp */
  EBP = (pop32());
  /* 12c42c16 ret  */
  ESPCHK(0x12c42c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x12c42c20 (787 bytes, 254 insns) */
void f_12c42c20(void) {
  FTRACE(0x12c42c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42c21 mov ebp, esp */
  EBP = (ESP);
  /* 12c42c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c42c26 push ebx */
  push32((uint32_t)(EBX));
  /* 12c42c27 push esi */
  push32((uint32_t)(ESI));
  /* 12c42c28 push edi */
  push32((uint32_t)(EDI));
  /* 12c42c29 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c42c30 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c42c35 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c42c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42c3a je 0x12c42c6c */
  if (C.zf) goto L_12c42c6c;
L_12c42c3c:;
  /* 12c42c3c call 0x12c43cf0 */
  push32(0x12c42c41u); f_12c43cf0();
  /* 12c42c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42c43 jne 0x12c42c66 */
  if (!C.zf) goto L_12c42c66;
  /* 12c42c45 push 0x12c69488 */
  push32((uint32_t)(0x12c69488u));
  /* 12c42c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42c4c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12c42c51 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c42c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c42c58 call 0x12c41c10 */
  push32(0x12c42c5du); f_12c41c10();
  /* 12c42c5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42c60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42c63 jne 0x12c42c66 */
  if (!C.zf) goto L_12c42c66;
  /* 12c42c65 int3  */
  x86_unimpl("int3 @ 0x12c42c65");
L_12c42c66:;
  /* 12c42c66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c42c68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c42c6a jne 0x12c42c3c */
  if (!C.zf) goto L_12c42c3c;
L_12c42c6c:;
  /* 12c42c6c mov edx, dword ptr [0x12c6ca88] */
  EDX = (r32((uint32_t)(0x12c6ca88)));
  /* 12c42c72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c42c75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42c78 cmp eax, dword ptr [0x12c6ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42c7e jne 0x12c42c81 */
  if (!C.zf) goto L_12c42c81;
  /* 12c42c80 int3  */
  x86_unimpl("int3 @ 0x12c42c80");
L_12c42c81:;
  /* 12c42c81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42c84 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42c85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42c88 push edx */
  push32((uint32_t)(EDX));
  /* 12c42c89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42c8c push eax */
  push32((uint32_t)(EAX));
  /* 12c42c8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42c90 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42c94 push edx */
  push32((uint32_t)(EDX));
  /* 12c42c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42c99 call dword ptr [0x12c6cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6cc90))), 0x12c42c9fu);
  /* 12c42c9f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42ca4 jne 0x12c42d04 */
  if (!C.zf) goto L_12c42d04;
  /* 12c42ca6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42caa je 0x12c42cd7 */
  if (C.zf) goto L_12c42cd7;
L_12c42cac:;
  /* 12c42cac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42caf push eax */
  push32((uint32_t)(EAX));
  /* 12c42cb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42cb4 push 0x12c69444 */
  push32((uint32_t)(0x12c69444u));
  /* 12c42cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42cc1 call 0x12c41c10 */
  push32(0x12c42cc6u); f_12c41c10();
  /* 12c42cc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42ccc jne 0x12c42ccf */
  if (!C.zf) goto L_12c42ccf;
  /* 12c42cce int3  */
  x86_unimpl("int3 @ 0x12c42cce");
L_12c42ccf:;
  /* 12c42ccf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c42cd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c42cd3 jne 0x12c42cac */
  if (!C.zf) goto L_12c42cac;
  /* 12c42cd5 jmp 0x12c42cfd */
  goto L_12c42cfd;
L_12c42cd7:;
  /* 12c42cd7 push 0x12c69420 */
  push32((uint32_t)(0x12c69420u));
  /* 12c42cdc push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c42ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42ce9 call 0x12c41c10 */
  push32(0x12c42ceeu); f_12c41c10();
  /* 12c42cee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42cf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42cf4 jne 0x12c42cf7 */
  if (!C.zf) goto L_12c42cf7;
  /* 12c42cf6 int3  */
  x86_unimpl("int3 @ 0x12c42cf6");
L_12c42cf7:;
  /* 12c42cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c42cfb jne 0x12c42cd7 */
  if (!C.zf) goto L_12c42cd7;
L_12c42cfd:;
  /* 12c42cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42cff jmp 0x12c42f2c */
  goto L_12c42f2c;
L_12c42d04:;
  /* 12c42d04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42d07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c42d0d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d10 je 0x12c42d26 */
  if (C.zf) goto L_12c42d26;
  /* 12c42d12 mov edx, dword ptr [0x12c6ca84] */
  EDX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c42d18 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c42d1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c42d1d jne 0x12c42d26 */
  if (!C.zf) goto L_12c42d26;
  /* 12c42d1f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12c42d26:;
  /* 12c42d26 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d2a ja 0x12c42d37 */
  if ((!C.cf&&!C.zf)) goto L_12c42d37;
  /* 12c42d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42d2f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42d32 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d35 jbe 0x12c42d63 */
  if ((C.cf||C.zf)) goto L_12c42d63;
L_12c42d37:;
  /* 12c42d37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42d3a push ecx */
  push32((uint32_t)(ECX));
  /* 12c42d3b push 0x12c693f8 */
  push32((uint32_t)(0x12c693f8u));
  /* 12c42d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42d48 call 0x12c41c10 */
  push32(0x12c42d4du); f_12c41c10();
  /* 12c42d4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42d50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d53 jne 0x12c42d56 */
  if (!C.zf) goto L_12c42d56;
  /* 12c42d55 int3  */
  x86_unimpl("int3 @ 0x12c42d55");
L_12c42d56:;
  /* 12c42d56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c42d58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c42d5a jne 0x12c42d37 */
  if (!C.zf) goto L_12c42d37;
  /* 12c42d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42d5e jmp 0x12c42f2c */
  goto L_12c42f2c;
L_12c42d63:;
  /* 12c42d63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42d66 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c42d6b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d6e je 0x12c42db0 */
  if (C.zf) goto L_12c42db0;
  /* 12c42d70 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d74 je 0x12c42db0 */
  if (C.zf) goto L_12c42db0;
  /* 12c42d76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42d79 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c42d7f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d82 je 0x12c42db0 */
  if (C.zf) goto L_12c42db0;
  /* 12c42d84 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42d88 je 0x12c42db0 */
  if (C.zf) goto L_12c42db0;
L_12c42d8a:;
  /* 12c42d8a push 0x12c693c4 */
  push32((uint32_t)(0x12c693c4u));
  /* 12c42d8f push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c42d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42d9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42d9c call 0x12c41c10 */
  push32(0x12c42da1u); f_12c41c10();
  /* 12c42da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42da7 jne 0x12c42daa */
  if (!C.zf) goto L_12c42daa;
  /* 12c42da9 int3  */
  x86_unimpl("int3 @ 0x12c42da9");
L_12c42daa:;
  /* 12c42daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c42dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c42dae jne 0x12c42d8a */
  if (!C.zf) goto L_12c42d8a;
L_12c42db0:;
  /* 12c42db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42db3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42db6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c42db9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c42dbc push ecx */
  push32((uint32_t)(ECX));
  /* 12c42dbd call 0x12c469a0 */
  push32(0x12c42dc2u); f_12c469a0();
  /* 12c42dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42dc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c42dc8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42dcc jne 0x12c42dd5 */
  if (!C.zf) goto L_12c42dd5;
  /* 12c42dce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42dd0 jmp 0x12c42f2c */
  goto L_12c42f2c;
L_12c42dd5:;
  /* 12c42dd5 mov edx, dword ptr [0x12c6ca88] */
  EDX = (r32((uint32_t)(0x12c6ca88)));
  /* 12c42ddb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42dde mov dword ptr [0x12c6ca88], edx */
  w32((uint32_t)(0x12c6ca88), (EDX));
  /* 12c42de4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42de8 je 0x12c42e33 */
  if (C.zf) goto L_12c42e33;
  /* 12c42dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ded mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c42df3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42df6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c42dfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e00 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12c42e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e0a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12c42e11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42e17 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12c42e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e1d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12c42e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e27 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12c42e2e jmp 0x12c42ed3 */
  goto L_12c42ed3;
L_12c42e33:;
  /* 12c42e33 mov edx, dword ptr [0x12c6e4d0] */
  EDX = (r32((uint32_t)(0x12c6e4d0)));
  /* 12c42e39 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42e3c mov dword ptr [0x12c6e4d0], edx */
  w32((uint32_t)(0x12c6e4d0), (EDX));
  /* 12c42e42 mov eax, dword ptr [0x12c6e4d8] */
  EAX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c42e47 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42e4a mov dword ptr [0x12c6e4d8], eax */
  w32((uint32_t)(0x12c6e4d8), (EAX));
  /* 12c42e4f mov ecx, dword ptr [0x12c6e4d8] */
  ECX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c42e55 cmp ecx, dword ptr [0x12c6e4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42e5b jbe 0x12c42e69 */
  if ((C.cf||C.zf)) goto L_12c42e69;
  /* 12c42e5d mov edx, dword ptr [0x12c6e4d8] */
  EDX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c42e63 mov dword ptr [0x12c6e4dc], edx */
  w32((uint32_t)(0x12c6e4dc), (EDX));
L_12c42e69:;
  /* 12c42e69 cmp dword ptr [0x12c6e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42e70 je 0x12c42e7f */
  if (C.zf) goto L_12c42e7f;
  /* 12c42e72 mov eax, dword ptr [0x12c6e4d4] */
  EAX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c42e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c42e7d jmp 0x12c42e88 */
  goto L_12c42e88;
L_12c42e7f:;
  /* 12c42e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e82 mov dword ptr [0x12c6e4cc], edx */
  w32((uint32_t)(0x12c6e4cc), (EDX));
L_12c42e88:;
  /* 12c42e88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e8b mov ecx, dword ptr [0x12c6e4d4] */
  ECX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c42e91 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c42e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42e96 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12c42e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42ea3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c42ea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ea9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42eac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12c42eaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42eb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42eb5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12c42eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ebb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42ebe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12c42ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42ec7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12c42eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ecd mov dword ptr [0x12c6e4d4], ecx */
  w32((uint32_t)(0x12c6e4d4), (ECX));
L_12c42ed3:;
  /* 12c42ed3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c42ed5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c42ed7 mov dl, byte ptr [0x12c6ca90] */
  DL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c42edd push edx */
  push32((uint32_t)(EDX));
  /* 12c42ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42ee1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42ee4 push eax */
  push32((uint32_t)(EAX));
  /* 12c42ee5 call 0x12c468c0 */
  push32(0x12c42eeau); f_12c468c0();
  /* 12c42eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42eed push 4 */
  push32((uint32_t)(0x4u));
  /* 12c42eef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c42ef1 mov cl, byte ptr [0x12c6ca90] */
  CL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c42ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42ef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42efe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12c42f02 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42f03 call 0x12c468c0 */
  push32(0x12c42f08u); f_12c468c0();
  /* 12c42f08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42f0e push edx */
  push32((uint32_t)(EDX));
  /* 12c42f0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c42f11 mov al, byte ptr [0x12c6ca92] */
  AL = (r8((uint32_t)(0x12c6ca92)));
  /* 12c42f16 push eax */
  push32((uint32_t)(EAX));
  /* 12c42f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42f1a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42f1d push ecx */
  push32((uint32_t)(ECX));
  /* 12c42f1e call 0x12c468c0 */
  push32(0x12c42f23u); f_12c468c0();
  /* 12c42f23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42f26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c42f29 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c42f2c:;
  /* 12c42f2c pop edi */
  EDI = (pop32());
  /* 12c42f2d pop esi */
  ESI = (pop32());
  /* 12c42f2e pop ebx */
  EBX = (pop32());
  /* 12c42f2f mov esp, ebp */
  ESP = (EBP);
  /* 12c42f31 pop ebp */
  EBP = (pop32());
  /* 12c42f32 ret  */
  ESPCHK(0x12c42c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x12c42f40 (27 bytes, 13 insns) */
void f_12c42f40(void) {
  FTRACE(0x12c42f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42f41 mov ebp, esp */
  EBP = (ESP);
  /* 12c42f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42f4c push eax */
  push32((uint32_t)(EAX));
  /* 12c42f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42f50 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42f51 call 0x12c42f60 */
  push32(0x12c42f56u); f_12c42f60();
  /* 12c42f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42f59 pop ebp */
  EBP = (pop32());
  /* 12c42f5a ret  */
  ESPCHK(0x12c42f40u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12c42f60 (96 bytes, 37 insns) */
void f_12c42f60(void) {
  FTRACE(0x12c42f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42f61 mov ebp, esp */
  EBP = (ESP);
  /* 12c42f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c42f66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42f69 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c42f6d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c42f70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c42f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42f74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42f77 push edx */
  push32((uint32_t)(EDX));
  /* 12c42f78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42f7b push eax */
  push32((uint32_t)(EAX));
  /* 12c42f7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42f7f push ecx */
  push32((uint32_t)(ECX));
  /* 12c42f80 call 0x12c42b50 */
  push32(0x12c42f85u); f_12c42b50();
  /* 12c42f85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c42f8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42f8f je 0x12c42fb9 */
  if (C.zf) goto L_12c42fb9;
  /* 12c42f91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42f94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c42f97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c42f9a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42f9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c42fa0:;
  /* 12c42fa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c42fa3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c42fa6 jae 0x12c42fb9 */
  if (!C.cf) goto L_12c42fb9;
  /* 12c42fa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c42fab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c42fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c42fb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c42fb7 jmp 0x12c42fa0 */
  goto L_12c42fa0;
L_12c42fb9:;
  /* 12c42fb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c42fbc mov esp, ebp */
  ESP = (EBP);
  /* 12c42fbe pop ebp */
  EBP = (pop32());
  /* 12c42fbf ret  */
  ESPCHK(0x12c42f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc0 @ 0x12c42fc0 (27 bytes, 13 insns) */
void f_12c42fc0(void) {
  FTRACE(0x12c42fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c42fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c42fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42fcc push eax */
  push32((uint32_t)(EAX));
  /* 12c42fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c42fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42fd1 call 0x12c42fe0 */
  push32(0x12c42fd6u); f_12c42fe0();
  /* 12c42fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42fd9 pop ebp */
  EBP = (pop32());
  /* 12c42fda ret  */
  ESPCHK(0x12c42fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x12c42fe0 (64 bytes, 27 insns) */
void f_12c42fe0(void) {
  FTRACE(0x12c42fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c42fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c42fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12c42fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42fe4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c42fe6 call 0x12c46550 */
  push32(0x12c42febu); f_12c46550();
  /* 12c42feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c42fee push 1 */
  push32((uint32_t)(0x1u));
  /* 12c42ff0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c42ff3 push eax */
  push32((uint32_t)(EAX));
  /* 12c42ff4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c42ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c42ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c42ffb push edx */
  push32((uint32_t)(EDX));
  /* 12c42ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c42fff push eax */
  push32((uint32_t)(EAX));
  /* 12c43000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43003 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43004 call 0x12c43020 */
  push32(0x12c43009u); f_12c43020();
  /* 12c43009 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4300c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4300f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43011 call 0x12c465f0 */
  push32(0x12c43016u); f_12c465f0();
  /* 12c43016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4301c mov esp, ebp */
  ESP = (EBP);
  /* 12c4301e pop ebp */
  EBP = (pop32());
  /* 12c4301f ret  */
  ESPCHK(0x12c42fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x12c43020 (1297 bytes, 431 insns) */
void f_12c43020(void) {
  FTRACE(0x12c43020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43020 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43021 mov ebp, esp */
  EBP = (ESP);
  /* 12c43023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43026 push ebx */
  push32((uint32_t)(EBX));
  /* 12c43027 push esi */
  push32((uint32_t)(ESI));
  /* 12c43028 push edi */
  push32((uint32_t)(EDI));
  /* 12c43029 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12c43030 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43034 jne 0x12c43053 */
  if (!C.zf) goto L_12c43053;
  /* 12c43036 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c43039 push eax */
  push32((uint32_t)(EAX));
  /* 12c4303a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4303d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4303e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c43041 push edx */
  push32((uint32_t)(EDX));
  /* 12c43042 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43045 push eax */
  push32((uint32_t)(EAX));
  /* 12c43046 call 0x12c42b50 */
  push32(0x12c4304bu); f_12c42b50();
  /* 12c4304b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4304e jmp 0x12c4352a */
  goto L_12c4352a;
L_12c43053:;
  /* 12c43053 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43057 je 0x12c43076 */
  if (C.zf) goto L_12c43076;
  /* 12c43059 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4305d jne 0x12c43076 */
  if (!C.zf) goto L_12c43076;
  /* 12c4305f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c43062 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43066 push edx */
  push32((uint32_t)(EDX));
  /* 12c43067 call 0x12c435e0 */
  push32(0x12c4306cu); f_12c435e0();
  /* 12c4306c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4306f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43071 jmp 0x12c4352a */
  goto L_12c4352a;
L_12c43076:;
  /* 12c43076 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c4307b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4307e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43080 je 0x12c430b2 */
  if (C.zf) goto L_12c430b2;
L_12c43082:;
  /* 12c43082 call 0x12c43cf0 */
  push32(0x12c43087u); f_12c43cf0();
  /* 12c43087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43089 jne 0x12c430ac */
  if (!C.zf) goto L_12c430ac;
  /* 12c4308b push 0x12c69488 */
  push32((uint32_t)(0x12c69488u));
  /* 12c43090 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43092 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12c43097 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c4309c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4309e call 0x12c41c10 */
  push32(0x12c430a3u); f_12c41c10();
  /* 12c430a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c430a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c430a9 jne 0x12c430ac */
  if (!C.zf) goto L_12c430ac;
  /* 12c430ab int3  */
  x86_unimpl("int3 @ 0x12c430ab");
L_12c430ac:;
  /* 12c430ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c430ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c430b0 jne 0x12c43082 */
  if (!C.zf) goto L_12c43082;
L_12c430b2:;
  /* 12c430b2 mov edx, dword ptr [0x12c6ca88] */
  EDX = (r32((uint32_t)(0x12c6ca88)));
  /* 12c430b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c430bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c430be cmp eax, dword ptr [0x12c6ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c430c4 jne 0x12c430c7 */
  if (!C.zf) goto L_12c430c7;
  /* 12c430c6 int3  */
  x86_unimpl("int3 @ 0x12c430c6");
L_12c430c7:;
  /* 12c430c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c430ca push ecx */
  push32((uint32_t)(ECX));
  /* 12c430cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c430ce push edx */
  push32((uint32_t)(EDX));
  /* 12c430cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c430d2 push eax */
  push32((uint32_t)(EAX));
  /* 12c430d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c430d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c430d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c430da push edx */
  push32((uint32_t)(EDX));
  /* 12c430db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c430de push eax */
  push32((uint32_t)(EAX));
  /* 12c430df push 2 */
  push32((uint32_t)(0x2u));
  /* 12c430e1 call dword ptr [0x12c6cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6cc90))), 0x12c430e7u);
  /* 12c430e7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c430ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c430ec jne 0x12c4314c */
  if (!C.zf) goto L_12c4314c;
  /* 12c430ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c430f2 je 0x12c4311f */
  if (C.zf) goto L_12c4311f;
L_12c430f4:;
  /* 12c430f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c430f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c430f8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c430fb push edx */
  push32((uint32_t)(EDX));
  /* 12c430fc push 0x12c69604 */
  push32((uint32_t)(0x12c69604u));
  /* 12c43101 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43103 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43105 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43107 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43109 call 0x12c41c10 */
  push32(0x12c4310eu); f_12c41c10();
  /* 12c4310e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43111 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43114 jne 0x12c43117 */
  if (!C.zf) goto L_12c43117;
  /* 12c43116 int3  */
  x86_unimpl("int3 @ 0x12c43116");
L_12c43117:;
  /* 12c43117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4311b jne 0x12c430f4 */
  if (!C.zf) goto L_12c430f4;
  /* 12c4311d jmp 0x12c43145 */
  goto L_12c43145;
L_12c4311f:;
  /* 12c4311f push 0x12c695e0 */
  push32((uint32_t)(0x12c695e0u));
  /* 12c43124 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43129 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4312b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4312d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4312f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43131 call 0x12c41c10 */
  push32(0x12c43136u); f_12c41c10();
  /* 12c43136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43139 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4313c jne 0x12c4313f */
  if (!C.zf) goto L_12c4313f;
  /* 12c4313e int3  */
  x86_unimpl("int3 @ 0x12c4313e");
L_12c4313f:;
  /* 12c4313f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43141 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43143 jne 0x12c4311f */
  if (!C.zf) goto L_12c4311f;
L_12c43145:;
  /* 12c43145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43147 jmp 0x12c4352a */
  goto L_12c4352a;
L_12c4314c:;
  /* 12c4314c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43150 jbe 0x12c4317e */
  if ((C.cf||C.zf)) goto L_12c4317e;
L_12c43152:;
  /* 12c43152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43155 push edx */
  push32((uint32_t)(EDX));
  /* 12c43156 push 0x12c695b0 */
  push32((uint32_t)(0x12c695b0u));
  /* 12c4315b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4315d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4315f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43161 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c43163 call 0x12c41c10 */
  push32(0x12c43168u); f_12c41c10();
  /* 12c43168 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4316b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4316e jne 0x12c43171 */
  if (!C.zf) goto L_12c43171;
  /* 12c43170 int3  */
  x86_unimpl("int3 @ 0x12c43170");
L_12c43171:;
  /* 12c43171 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43175 jne 0x12c43152 */
  if (!C.zf) goto L_12c43152;
  /* 12c43177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43179 jmp 0x12c4352a */
  goto L_12c4352a;
L_12c4317e:;
  /* 12c4317e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43182 je 0x12c431c6 */
  if (C.zf) goto L_12c431c6;
  /* 12c43184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c43187 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4318d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43190 je 0x12c431c6 */
  if (C.zf) goto L_12c431c6;
  /* 12c43192 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c43195 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4319b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4319e je 0x12c431c6 */
  if (C.zf) goto L_12c431c6;
L_12c431a0:;
  /* 12c431a0 push 0x12c693c4 */
  push32((uint32_t)(0x12c693c4u));
  /* 12c431a5 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c431aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c431ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12c431ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12c431b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c431b2 call 0x12c41c10 */
  push32(0x12c431b7u); f_12c41c10();
  /* 12c431b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c431ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c431bd jne 0x12c431c0 */
  if (!C.zf) goto L_12c431c0;
  /* 12c431bf int3  */
  x86_unimpl("int3 @ 0x12c431bf");
L_12c431c0:;
  /* 12c431c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c431c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c431c4 jne 0x12c431a0 */
  if (!C.zf) goto L_12c431a0;
L_12c431c6:;
  /* 12c431c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c431c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c431ca call 0x12c44150 */
  push32(0x12c431cfu); f_12c44150();
  /* 12c431cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c431d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c431d4 jne 0x12c431f7 */
  if (!C.zf) goto L_12c431f7;
  /* 12c431d6 push 0x12c6958c */
  push32((uint32_t)(0x12c6958cu));
  /* 12c431db push 0 */
  push32((uint32_t)(0x0u));
  /* 12c431dd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12c431e2 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c431e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c431e9 call 0x12c41c10 */
  push32(0x12c431eeu); f_12c41c10();
  /* 12c431ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c431f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c431f4 jne 0x12c431f7 */
  if (!C.zf) goto L_12c431f7;
  /* 12c431f6 int3  */
  x86_unimpl("int3 @ 0x12c431f6");
L_12c431f7:;
  /* 12c431f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c431f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c431fb jne 0x12c431c6 */
  if (!C.zf) goto L_12c431c6;
  /* 12c431fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43200 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43203 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c43206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43209 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4320d jne 0x12c43216 */
  if (!C.zf) goto L_12c43216;
  /* 12c4320f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12c43216:;
  /* 12c43216 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4321a je 0x12c4325a */
  if (C.zf) goto L_12c4325a;
L_12c4321c:;
  /* 12c4321c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4321f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43226 jne 0x12c43231 */
  if (!C.zf) goto L_12c43231;
  /* 12c43228 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4322b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4322f je 0x12c43252 */
  if (C.zf) goto L_12c43252;
L_12c43231:;
  /* 12c43231 push 0x12c69544 */
  push32((uint32_t)(0x12c69544u));
  /* 12c43236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43238 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12c4323d push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43242 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43244 call 0x12c41c10 */
  push32(0x12c43249u); f_12c41c10();
  /* 12c43249 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4324c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4324f jne 0x12c43252 */
  if (!C.zf) goto L_12c43252;
  /* 12c43251 int3  */
  x86_unimpl("int3 @ 0x12c43251");
L_12c43252:;
  /* 12c43252 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43254 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43256 jne 0x12c4321c */
  if (!C.zf) goto L_12c4321c;
  /* 12c43258 jmp 0x12c432be */
  goto L_12c432be;
L_12c4325a:;
  /* 12c4325a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4325d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43260 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c43265 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43268 jne 0x12c4327f */
  if (!C.zf) goto L_12c4327f;
  /* 12c4326a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4326d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43273 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43276 jne 0x12c4327f */
  if (!C.zf) goto L_12c4327f;
  /* 12c43278 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12c4327f:;
  /* 12c4327f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43282 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43285 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4328a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4328d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43293 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43295 je 0x12c432b8 */
  if (C.zf) goto L_12c432b8;
  /* 12c43297 push 0x12c69508 */
  push32((uint32_t)(0x12c69508u));
  /* 12c4329c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4329e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12c432a3 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c432a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c432aa call 0x12c41c10 */
  push32(0x12c432afu); f_12c41c10();
  /* 12c432af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c432b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c432b5 jne 0x12c432b8 */
  if (!C.zf) goto L_12c432b8;
  /* 12c432b7 int3  */
  x86_unimpl("int3 @ 0x12c432b7");
L_12c432b8:;
  /* 12c432b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c432ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c432bc jne 0x12c4327f */
  if (!C.zf) goto L_12c4327f;
L_12c432be:;
  /* 12c432be cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c432c2 je 0x12c432e9 */
  if (C.zf) goto L_12c432e9;
  /* 12c432c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c432c7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c432ca push eax */
  push32((uint32_t)(EAX));
  /* 12c432cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c432ce push ecx */
  push32((uint32_t)(ECX));
  /* 12c432cf call 0x12c46ad0 */
  push32(0x12c432d4u); f_12c46ad0();
  /* 12c432d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c432d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c432da cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c432de jne 0x12c432e7 */
  if (!C.zf) goto L_12c432e7;
  /* 12c432e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c432e2 jmp 0x12c4352a */
  goto L_12c4352a;
L_12c432e7:;
  /* 12c432e7 jmp 0x12c4330c */
  goto L_12c4330c;
L_12c432e9:;
  /* 12c432e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c432ec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c432ef push edx */
  push32((uint32_t)(EDX));
  /* 12c432f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c432f3 push eax */
  push32((uint32_t)(EAX));
  /* 12c432f4 call 0x12c46a20 */
  push32(0x12c432f9u); f_12c46a20();
  /* 12c432f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c432fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c432ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43303 jne 0x12c4330c */
  if (!C.zf) goto L_12c4330c;
  /* 12c43305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43307 jmp 0x12c4352a */
  goto L_12c4352a;
L_12c4330c:;
  /* 12c4330c mov ecx, dword ptr [0x12c6ca88] */
  ECX = (r32((uint32_t)(0x12c6ca88)));
  /* 12c43312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43315 mov dword ptr [0x12c6ca88], ecx */
  w32((uint32_t)(0x12c6ca88), (ECX));
  /* 12c4331b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4331f jne 0x12c43377 */
  if (!C.zf) goto L_12c43377;
  /* 12c43321 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43324 mov eax, dword ptr [0x12c6e4d0] */
  EAX = (r32((uint32_t)(0x12c6e4d0)));
  /* 12c43329 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4332c mov dword ptr [0x12c6e4d0], eax */
  w32((uint32_t)(0x12c6e4d0), (EAX));
  /* 12c43331 mov ecx, dword ptr [0x12c6e4d0] */
  ECX = (r32((uint32_t)(0x12c6e4d0)));
  /* 12c43337 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4333a mov dword ptr [0x12c6e4d0], ecx */
  w32((uint32_t)(0x12c6e4d0), (ECX));
  /* 12c43340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43343 mov eax, dword ptr [0x12c6e4d8] */
  EAX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c43348 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4334b mov dword ptr [0x12c6e4d8], eax */
  w32((uint32_t)(0x12c6e4d8), (EAX));
  /* 12c43350 mov ecx, dword ptr [0x12c6e4d8] */
  ECX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c43356 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43359 mov dword ptr [0x12c6e4d8], ecx */
  w32((uint32_t)(0x12c6e4d8), (ECX));
  /* 12c4335f mov edx, dword ptr [0x12c6e4d8] */
  EDX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c43365 cmp edx, dword ptr [0x12c6e4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4336b jbe 0x12c43377 */
  if ((C.cf||C.zf)) goto L_12c43377;
  /* 12c4336d mov eax, dword ptr [0x12c6e4d8] */
  EAX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c43372 mov dword ptr [0x12c6e4dc], eax */
  w32((uint32_t)(0x12c6e4dc), (EAX));
L_12c43377:;
  /* 12c43377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4337a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4337d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c43380 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43386 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43389 jbe 0x12c433af */
  if ((C.cf||C.zf)) goto L_12c433af;
  /* 12c4338b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4338e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43391 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43394 push edx */
  push32((uint32_t)(EDX));
  /* 12c43395 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43397 mov al, byte ptr [0x12c6ca92] */
  AL = (r8((uint32_t)(0x12c6ca92)));
  /* 12c4339c push eax */
  push32((uint32_t)(EAX));
  /* 12c4339d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c433a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c433a3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c433a6 push edx */
  push32((uint32_t)(EDX));
  /* 12c433a7 call 0x12c468c0 */
  push32(0x12c433acu); f_12c468c0();
  /* 12c433ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c433af:;
  /* 12c433af push 4 */
  push32((uint32_t)(0x4u));
  /* 12c433b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c433b3 mov al, byte ptr [0x12c6ca90] */
  AL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c433b8 push eax */
  push32((uint32_t)(EAX));
  /* 12c433b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c433bc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c433bf push ecx */
  push32((uint32_t)(ECX));
  /* 12c433c0 call 0x12c468c0 */
  push32(0x12c433c5u); f_12c468c0();
  /* 12c433c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c433c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c433cc jne 0x12c433e9 */
  if (!C.zf) goto L_12c433e9;
  /* 12c433ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c433d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c433d4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c433d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c433da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c433dd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12c433e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c433e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c433e6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12c433e9:;
  /* 12c433e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c433ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c433ef mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12c433f2:;
  /* 12c433f2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c433f6 jne 0x12c43427 */
  if (!C.zf) goto L_12c43427;
  /* 12c433f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c433fc jne 0x12c43406 */
  if (!C.zf) goto L_12c43406;
  /* 12c433fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43401 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43404 je 0x12c43427 */
  if (C.zf) goto L_12c43427;
L_12c43406:;
  /* 12c43406 push 0x12c694d4 */
  push32((uint32_t)(0x12c694d4u));
  /* 12c4340b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4340d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12c43412 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43417 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43419 call 0x12c41c10 */
  push32(0x12c4341eu); f_12c41c10();
  /* 12c4341e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43421 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43424 jne 0x12c43427 */
  if (!C.zf) goto L_12c43427;
  /* 12c43426 int3  */
  x86_unimpl("int3 @ 0x12c43426");
L_12c43427:;
  /* 12c43427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4342b jne 0x12c433f2 */
  if (!C.zf) goto L_12c433f2;
  /* 12c4342d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43430 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43433 je 0x12c4343b */
  if (C.zf) goto L_12c4343b;
  /* 12c43435 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43439 je 0x12c43443 */
  if (C.zf) goto L_12c43443;
L_12c4343b:;
  /* 12c4343b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4343e jmp 0x12c4352a */
  goto L_12c4352a;
L_12c43443:;
  /* 12c43443 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43446 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43449 je 0x12c4345b */
  if (C.zf) goto L_12c4345b;
  /* 12c4344b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4344e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c43450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43453 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c43456 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c43459 jmp 0x12c43497 */
  goto L_12c43497;
L_12c4345b:;
  /* 12c4345b mov eax, dword ptr [0x12c6e4cc] */
  EAX = (r32((uint32_t)(0x12c6e4cc)));
  /* 12c43460 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43463 je 0x12c43486 */
  if (C.zf) goto L_12c43486;
  /* 12c43465 push 0x12c694b8 */
  push32((uint32_t)(0x12c694b8u));
  /* 12c4346a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4346c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12c43471 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43476 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43478 call 0x12c41c10 */
  push32(0x12c4347du); f_12c41c10();
  /* 12c4347d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43480 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43483 jne 0x12c43486 */
  if (!C.zf) goto L_12c43486;
  /* 12c43485 int3  */
  x86_unimpl("int3 @ 0x12c43485");
L_12c43486:;
  /* 12c43486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43488 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4348a jne 0x12c4345b */
  if (!C.zf) goto L_12c4345b;
  /* 12c4348c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4348f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c43492 mov dword ptr [0x12c6e4cc], eax */
  w32((uint32_t)(0x12c6e4cc), (EAX));
L_12c43497:;
  /* 12c43497 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4349a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4349e je 0x12c434af */
  if (C.zf) goto L_12c434af;
  /* 12c434a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c434a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c434a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c434a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c434ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c434ad jmp 0x12c434ea */
  goto L_12c434ea;
L_12c434af:;
  /* 12c434af mov eax, dword ptr [0x12c6e4d4] */
  EAX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c434b4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c434b7 je 0x12c434da */
  if (C.zf) goto L_12c434da;
  /* 12c434b9 push 0x12c6949c */
  push32((uint32_t)(0x12c6949cu));
  /* 12c434be push 0 */
  push32((uint32_t)(0x0u));
  /* 12c434c0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12c434c5 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c434ca push 2 */
  push32((uint32_t)(0x2u));
  /* 12c434cc call 0x12c41c10 */
  push32(0x12c434d1u); f_12c41c10();
  /* 12c434d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c434d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c434d7 jne 0x12c434da */
  if (!C.zf) goto L_12c434da;
  /* 12c434d9 int3  */
  x86_unimpl("int3 @ 0x12c434d9");
L_12c434da:;
  /* 12c434da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c434dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c434de jne 0x12c434af */
  if (!C.zf) goto L_12c434af;
  /* 12c434e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c434e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c434e5 mov dword ptr [0x12c6e4d4], eax */
  w32((uint32_t)(0x12c6e4d4), (EAX));
L_12c434ea:;
  /* 12c434ea cmp dword ptr [0x12c6e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c434f1 je 0x12c43501 */
  if (C.zf) goto L_12c43501;
  /* 12c434f3 mov ecx, dword ptr [0x12c6e4d4] */
  ECX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c434f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c434fc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c434ff jmp 0x12c43509 */
  goto L_12c43509;
L_12c43501:;
  /* 12c43501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43504 mov dword ptr [0x12c6e4cc], eax */
  w32((uint32_t)(0x12c6e4cc), (EAX));
L_12c43509:;
  /* 12c43509 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4350c mov edx, dword ptr [0x12c6e4d4] */
  EDX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c43512 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c43514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43517 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c4351e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43521 mov dword ptr [0x12c6e4d4], ecx */
  w32((uint32_t)(0x12c6e4d4), (ECX));
  /* 12c43527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4352a:;
  /* 12c4352a pop edi */
  EDI = (pop32());
  /* 12c4352b pop esi */
  ESI = (pop32());
  /* 12c4352c pop ebx */
  EBX = (pop32());
  /* 12c4352d mov esp, ebp */
  ESP = (EBP);
  /* 12c4352f pop ebp */
  EBP = (pop32());
  /* 12c43530 ret  */
  ESPCHK(0x12c43020u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x12c43540 (27 bytes, 13 insns) */
void f_12c43540(void) {
  FTRACE(0x12c43540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43540 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43541 mov ebp, esp */
  EBP = (ESP);
  /* 12c43543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43547 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c43549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4354c push eax */
  push32((uint32_t)(EAX));
  /* 12c4354d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43550 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43551 call 0x12c43560 */
  push32(0x12c43556u); f_12c43560();
  /* 12c43556 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43559 pop ebp */
  EBP = (pop32());
  /* 12c4355a ret  */
  ESPCHK(0x12c43540u, _esp0);
  ESP += 4; return;
}

/* FUN_10003560 @ 0x12c43560 (64 bytes, 27 insns) */
void f_12c43560(void) {
  FTRACE(0x12c43560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43560 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43561 mov ebp, esp */
  EBP = (ESP);
  /* 12c43563 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43564 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43566 call 0x12c46550 */
  push32(0x12c4356bu); f_12c46550();
  /* 12c4356b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4356e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43570 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c43573 push eax */
  push32((uint32_t)(EAX));
  /* 12c43574 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c43577 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43578 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4357b push edx */
  push32((uint32_t)(EDX));
  /* 12c4357c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4357f push eax */
  push32((uint32_t)(EAX));
  /* 12c43580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43583 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43584 call 0x12c43020 */
  push32(0x12c43589u); f_12c43020();
  /* 12c43589 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4358c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4358f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43591 call 0x12c465f0 */
  push32(0x12c43596u); f_12c465f0();
  /* 12c43596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4359c mov esp, ebp */
  ESP = (EBP);
  /* 12c4359e pop ebp */
  EBP = (pop32());
  /* 12c4359f ret  */
  ESPCHK(0x12c43560u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a0 @ 0x12c435a0 (19 bytes, 9 insns) */
void f_12c435a0(void) {
  FTRACE(0x12c435a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c435a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c435a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c435a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c435a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c435a8 push eax */
  push32((uint32_t)(EAX));
  /* 12c435a9 call 0x12c435e0 */
  push32(0x12c435aeu); f_12c435e0();
  /* 12c435ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c435b1 pop ebp */
  EBP = (pop32());
  /* 12c435b2 ret  */
  ESPCHK(0x12c435a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x12c435c0 (19 bytes, 9 insns) */
void f_12c435c0(void) {
  FTRACE(0x12c435c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c435c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c435c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c435c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c435c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c435c8 push eax */
  push32((uint32_t)(EAX));
  /* 12c435c9 call 0x12c43610 */
  push32(0x12c435ceu); f_12c43610();
  /* 12c435ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c435d1 pop ebp */
  EBP = (pop32());
  /* 12c435d2 ret  */
  ESPCHK(0x12c435c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x12c435e0 (41 bytes, 16 insns) */
void f_12c435e0(void) {
  FTRACE(0x12c435e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c435e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c435e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c435e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c435e5 call 0x12c46550 */
  push32(0x12c435eau); f_12c46550();
  /* 12c435ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c435ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c435f0 push eax */
  push32((uint32_t)(EAX));
  /* 12c435f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c435f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c435f5 call 0x12c43610 */
  push32(0x12c435fau); f_12c43610();
  /* 12c435fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c435fd push 9 */
  push32((uint32_t)(0x9u));
  /* 12c435ff call 0x12c465f0 */
  push32(0x12c43604u); f_12c465f0();
  /* 12c43604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43607 pop ebp */
  EBP = (pop32());
  /* 12c43608 ret  */
  ESPCHK(0x12c435e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x12c43610 (1004 bytes, 342 insns) */
void f_12c43610(void) {
  FTRACE(0x12c43610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43610 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43611 mov ebp, esp */
  EBP = (ESP);
  /* 12c43613 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43614 push ebx */
  push32((uint32_t)(EBX));
  /* 12c43615 push esi */
  push32((uint32_t)(ESI));
  /* 12c43616 push edi */
  push32((uint32_t)(EDI));
  /* 12c43617 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c4361c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4361f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43621 je 0x12c43653 */
  if (C.zf) goto L_12c43653;
L_12c43623:;
  /* 12c43623 call 0x12c43cf0 */
  push32(0x12c43628u); f_12c43cf0();
  /* 12c43628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4362a jne 0x12c4364d */
  if (!C.zf) goto L_12c4364d;
  /* 12c4362c push 0x12c69488 */
  push32((uint32_t)(0x12c69488u));
  /* 12c43631 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43633 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12c43638 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c4363d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4363f call 0x12c41c10 */
  push32(0x12c43644u); f_12c41c10();
  /* 12c43644 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4364a jne 0x12c4364d */
  if (!C.zf) goto L_12c4364d;
  /* 12c4364c int3  */
  x86_unimpl("int3 @ 0x12c4364c");
L_12c4364d:;
  /* 12c4364d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4364f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43651 jne 0x12c43623 */
  if (!C.zf) goto L_12c43623;
L_12c43653:;
  /* 12c43653 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43657 jne 0x12c4365e */
  if (!C.zf) goto L_12c4365e;
  /* 12c43659 jmp 0x12c439f5 */
  goto L_12c439f5;
L_12c4365e:;
  /* 12c4365e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43660 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43662 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43664 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43667 push edx */
  push32((uint32_t)(EDX));
  /* 12c43668 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4366a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4366d push eax */
  push32((uint32_t)(EAX));
  /* 12c4366e push 3 */
  push32((uint32_t)(0x3u));
  /* 12c43670 call dword ptr [0x12c6cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6cc90))), 0x12c43676u);
  /* 12c43676 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4367b jne 0x12c436a8 */
  if (!C.zf) goto L_12c436a8;
L_12c4367d:;
  /* 12c4367d push 0x12c6974c */
  push32((uint32_t)(0x12c6974cu));
  /* 12c43682 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43687 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43689 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4368b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4368d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4368f call 0x12c41c10 */
  push32(0x12c43694u); f_12c41c10();
  /* 12c43694 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43697 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4369a jne 0x12c4369d */
  if (!C.zf) goto L_12c4369d;
  /* 12c4369c int3  */
  x86_unimpl("int3 @ 0x12c4369c");
L_12c4369d:;
  /* 12c4369d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4369f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c436a1 jne 0x12c4367d */
  if (!C.zf) goto L_12c4367d;
  /* 12c436a3 jmp 0x12c439f5 */
  goto L_12c439f5;
L_12c436a8:;
  /* 12c436a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c436ab push edx */
  push32((uint32_t)(EDX));
  /* 12c436ac call 0x12c44150 */
  push32(0x12c436b1u); f_12c44150();
  /* 12c436b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c436b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c436b6 jne 0x12c436d9 */
  if (!C.zf) goto L_12c436d9;
  /* 12c436b8 push 0x12c6958c */
  push32((uint32_t)(0x12c6958cu));
  /* 12c436bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c436bf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12c436c4 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c436c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c436cb call 0x12c41c10 */
  push32(0x12c436d0u); f_12c41c10();
  /* 12c436d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c436d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c436d6 jne 0x12c436d9 */
  if (!C.zf) goto L_12c436d9;
  /* 12c436d8 int3  */
  x86_unimpl("int3 @ 0x12c436d8");
L_12c436d9:;
  /* 12c436d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c436db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c436dd jne 0x12c436a8 */
  if (!C.zf) goto L_12c436a8;
  /* 12c436df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c436e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c436e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c436e8:;
  /* 12c436e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c436eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c436ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c436f3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c436f6 je 0x12c4373b */
  if (C.zf) goto L_12c4373b;
  /* 12c436f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c436fb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c436ff je 0x12c4373b */
  if (C.zf) goto L_12c4373b;
  /* 12c43701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43704 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43707 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4370c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4370f je 0x12c4373b */
  if (C.zf) goto L_12c4373b;
  /* 12c43711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43714 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43718 je 0x12c4373b */
  if (C.zf) goto L_12c4373b;
  /* 12c4371a push 0x12c69724 */
  push32((uint32_t)(0x12c69724u));
  /* 12c4371f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43721 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12c43726 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c4372b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4372d call 0x12c41c10 */
  push32(0x12c43732u); f_12c41c10();
  /* 12c43732 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43738 jne 0x12c4373b */
  if (!C.zf) goto L_12c4373b;
  /* 12c4373a int3  */
  x86_unimpl("int3 @ 0x12c4373a");
L_12c4373b:;
  /* 12c4373b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4373d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4373f jne 0x12c436e8 */
  if (!C.zf) goto L_12c436e8;
  /* 12c43741 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c43746 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c43749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4374b jne 0x12c43816 */
  if (!C.zf) goto L_12c43816;
  /* 12c43751 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c43753 mov cl, byte ptr [0x12c6ca90] */
  CL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c43759 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4375a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4375d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43760 push edx */
  push32((uint32_t)(EDX));
  /* 12c43761 call 0x12c43c60 */
  push32(0x12c43766u); f_12c43c60();
  /* 12c43766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4376b jne 0x12c437b0 */
  if (!C.zf) goto L_12c437b0;
L_12c4376d:;
  /* 12c4376d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43770 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43773 push eax */
  push32((uint32_t)(EAX));
  /* 12c43774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43777 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c4377a push edx */
  push32((uint32_t)(EDX));
  /* 12c4377b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4377e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c43781 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43787 mov edx, dword ptr [ecx*4 + 0x12c6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca94)));
  /* 12c4378e push edx */
  push32((uint32_t)(EDX));
  /* 12c4378f push 0x12c696f8 */
  push32((uint32_t)(0x12c696f8u));
  /* 12c43794 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43796 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43798 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4379a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4379c call 0x12c41c10 */
  push32(0x12c437a1u); f_12c41c10();
  /* 12c437a1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c437a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c437a7 jne 0x12c437aa */
  if (!C.zf) goto L_12c437aa;
  /* 12c437a9 int3  */
  x86_unimpl("int3 @ 0x12c437a9");
L_12c437aa:;
  /* 12c437aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c437ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c437ae jne 0x12c4376d */
  if (!C.zf) goto L_12c4376d;
L_12c437b0:;
  /* 12c437b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c437b2 mov cl, byte ptr [0x12c6ca90] */
  CL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c437b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c437b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c437bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c437bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c437c2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12c437c6 push edx */
  push32((uint32_t)(EDX));
  /* 12c437c7 call 0x12c43c60 */
  push32(0x12c437ccu); f_12c43c60();
  /* 12c437cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c437cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c437d1 jne 0x12c43816 */
  if (!C.zf) goto L_12c43816;
L_12c437d3:;
  /* 12c437d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c437d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c437d9 push eax */
  push32((uint32_t)(EAX));
  /* 12c437da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c437dd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c437e0 push edx */
  push32((uint32_t)(EDX));
  /* 12c437e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c437e4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c437e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c437ed mov edx, dword ptr [ecx*4 + 0x12c6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca94)));
  /* 12c437f4 push edx */
  push32((uint32_t)(EDX));
  /* 12c437f5 push 0x12c696cc */
  push32((uint32_t)(0x12c696ccu));
  /* 12c437fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c437fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c437fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43800 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c43802 call 0x12c41c10 */
  push32(0x12c43807u); f_12c41c10();
  /* 12c43807 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4380a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4380d jne 0x12c43810 */
  if (!C.zf) goto L_12c43810;
  /* 12c4380f int3  */
  x86_unimpl("int3 @ 0x12c4380f");
L_12c43810:;
  /* 12c43810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43814 jne 0x12c437d3 */
  if (!C.zf) goto L_12c437d3;
L_12c43816:;
  /* 12c43816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43819 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4381d jne 0x12c4388b */
  if (!C.zf) goto L_12c4388b;
L_12c4381f:;
  /* 12c4381f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43822 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43829 jne 0x12c43834 */
  if (!C.zf) goto L_12c43834;
  /* 12c4382b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4382e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43832 je 0x12c43855 */
  if (C.zf) goto L_12c43855;
L_12c43834:;
  /* 12c43834 push 0x12c6968c */
  push32((uint32_t)(0x12c6968cu));
  /* 12c43839 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4383b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12c43840 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43845 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43847 call 0x12c41c10 */
  push32(0x12c4384cu); f_12c41c10();
  /* 12c4384c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4384f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43852 jne 0x12c43855 */
  if (!C.zf) goto L_12c43855;
  /* 12c43854 int3  */
  x86_unimpl("int3 @ 0x12c43854");
L_12c43855:;
  /* 12c43855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43857 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43859 jne 0x12c4381f */
  if (!C.zf) goto L_12c4381f;
  /* 12c4385b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4385e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c43861 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43864 push eax */
  push32((uint32_t)(EAX));
  /* 12c43865 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43867 mov cl, byte ptr [0x12c6ca91] */
  CL = (r8((uint32_t)(0x12c6ca91)));
  /* 12c4386d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4386e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43871 push edx */
  push32((uint32_t)(EDX));
  /* 12c43872 call 0x12c468c0 */
  push32(0x12c43877u); f_12c468c0();
  /* 12c43877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4387a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4387d push eax */
  push32((uint32_t)(EAX));
  /* 12c4387e call 0x12c46cc0 */
  push32(0x12c43883u); f_12c46cc0();
  /* 12c43883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43886 jmp 0x12c439f5 */
  goto L_12c439f5;
L_12c4388b:;
  /* 12c4388b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4388e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43892 jne 0x12c438a1 */
  if (!C.zf) goto L_12c438a1;
  /* 12c43894 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43898 jne 0x12c438a1 */
  if (!C.zf) goto L_12c438a1;
  /* 12c4389a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12c438a1:;
  /* 12c438a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c438a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c438a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c438aa je 0x12c438cd */
  if (C.zf) goto L_12c438cd;
  /* 12c438ac push 0x12c6966c */
  push32((uint32_t)(0x12c6966cu));
  /* 12c438b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c438b3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12c438b8 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c438bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c438bf call 0x12c41c10 */
  push32(0x12c438c4u); f_12c41c10();
  /* 12c438c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c438c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c438ca jne 0x12c438cd */
  if (!C.zf) goto L_12c438cd;
  /* 12c438cc int3  */
  x86_unimpl("int3 @ 0x12c438cc");
L_12c438cd:;
  /* 12c438cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c438cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c438d1 jne 0x12c438a1 */
  if (!C.zf) goto L_12c438a1;
  /* 12c438d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c438d6 mov eax, dword ptr [0x12c6e4d8] */
  EAX = (r32((uint32_t)(0x12c6e4d8)));
  /* 12c438db sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c438de mov dword ptr [0x12c6e4d8], eax */
  w32((uint32_t)(0x12c6e4d8), (EAX));
  /* 12c438e3 mov ecx, dword ptr [0x12c6ca84] */
  ECX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c438e9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c438ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c438ee jne 0x12c439cc */
  if (!C.zf) goto L_12c439cc;
  /* 12c438f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c438f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c438fa je 0x12c4390c */
  if (C.zf) goto L_12c4390c;
  /* 12c438fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c438ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c43901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43904 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c43907 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c4390a jmp 0x12c4394a */
  goto L_12c4394a;
L_12c4390c:;
  /* 12c4390c mov ecx, dword ptr [0x12c6e4cc] */
  ECX = (r32((uint32_t)(0x12c6e4cc)));
  /* 12c43912 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43915 je 0x12c43938 */
  if (C.zf) goto L_12c43938;
  /* 12c43917 push 0x12c69654 */
  push32((uint32_t)(0x12c69654u));
  /* 12c4391c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4391e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12c43923 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43928 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4392a call 0x12c41c10 */
  push32(0x12c4392fu); f_12c41c10();
  /* 12c4392f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43932 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43935 jne 0x12c43938 */
  if (!C.zf) goto L_12c43938;
  /* 12c43937 int3  */
  x86_unimpl("int3 @ 0x12c43937");
L_12c43938:;
  /* 12c43938 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4393a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4393c jne 0x12c4390c */
  if (!C.zf) goto L_12c4390c;
  /* 12c4393e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43941 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c43944 mov dword ptr [0x12c6e4cc], ecx */
  w32((uint32_t)(0x12c6e4cc), (ECX));
L_12c4394a:;
  /* 12c4394a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4394d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43951 je 0x12c43962 */
  if (C.zf) goto L_12c43962;
  /* 12c43953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43956 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c43959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4395c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c4395e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c43960 jmp 0x12c4399f */
  goto L_12c4399f;
L_12c43962:;
  /* 12c43962 mov ecx, dword ptr [0x12c6e4d4] */
  ECX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c43968 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4396b je 0x12c4398e */
  if (C.zf) goto L_12c4398e;
  /* 12c4396d push 0x12c6963c */
  push32((uint32_t)(0x12c6963cu));
  /* 12c43972 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43974 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12c43979 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c4397e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43980 call 0x12c41c10 */
  push32(0x12c43985u); f_12c41c10();
  /* 12c43985 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43988 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4398b jne 0x12c4398e */
  if (!C.zf) goto L_12c4398e;
  /* 12c4398d int3  */
  x86_unimpl("int3 @ 0x12c4398d");
L_12c4398e:;
  /* 12c4398e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43990 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c43992 jne 0x12c43962 */
  if (!C.zf) goto L_12c43962;
  /* 12c43994 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43997 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c43999 mov dword ptr [0x12c6e4d4], ecx */
  w32((uint32_t)(0x12c6e4d4), (ECX));
L_12c4399f:;
  /* 12c4399f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c439a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c439a5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c439a8 push eax */
  push32((uint32_t)(EAX));
  /* 12c439a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c439ab mov cl, byte ptr [0x12c6ca91] */
  CL = (r8((uint32_t)(0x12c6ca91)));
  /* 12c439b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c439b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c439b5 push edx */
  push32((uint32_t)(EDX));
  /* 12c439b6 call 0x12c468c0 */
  push32(0x12c439bbu); f_12c468c0();
  /* 12c439bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c439be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c439c1 push eax */
  push32((uint32_t)(EAX));
  /* 12c439c2 call 0x12c46cc0 */
  push32(0x12c439c7u); f_12c46cc0();
  /* 12c439c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c439ca jmp 0x12c439f5 */
  goto L_12c439f5;
L_12c439cc:;
  /* 12c439cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c439cf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12c439d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c439d9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c439dc push eax */
  push32((uint32_t)(EAX));
  /* 12c439dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c439df mov cl, byte ptr [0x12c6ca91] */
  CL = (r8((uint32_t)(0x12c6ca91)));
  /* 12c439e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c439e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c439e9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c439ec push edx */
  push32((uint32_t)(EDX));
  /* 12c439ed call 0x12c468c0 */
  push32(0x12c439f2u); f_12c468c0();
  /* 12c439f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c439f5:;
  /* 12c439f5 pop edi */
  EDI = (pop32());
  /* 12c439f6 pop esi */
  ESI = (pop32());
  /* 12c439f7 pop ebx */
  EBX = (pop32());
  /* 12c439f8 mov esp, ebp */
  ESP = (EBP);
  /* 12c439fa pop ebp */
  EBP = (pop32());
  /* 12c439fb ret  */
  ESPCHK(0x12c43610u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a00 @ 0x12c43a00 (19 bytes, 9 insns) */
void f_12c43a00(void) {
  FTRACE(0x12c43a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43a01 mov ebp, esp */
  EBP = (ESP);
  /* 12c43a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c43a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43a08 push eax */
  push32((uint32_t)(EAX));
  /* 12c43a09 call 0x12c43a20 */
  push32(0x12c43a0eu); f_12c43a20();
  /* 12c43a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43a11 pop ebp */
  EBP = (pop32());
  /* 12c43a12 ret  */
  ESPCHK(0x12c43a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x12c43a20 (342 bytes, 119 insns) */
void f_12c43a20(void) {
  FTRACE(0x12c43a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43a21 mov ebp, esp */
  EBP = (ESP);
  /* 12c43a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43a26 push ebx */
  push32((uint32_t)(EBX));
  /* 12c43a27 push esi */
  push32((uint32_t)(ESI));
  /* 12c43a28 push edi */
  push32((uint32_t)(EDI));
  /* 12c43a29 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c43a2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c43a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43a33 je 0x12c43a65 */
  if (C.zf) goto L_12c43a65;
L_12c43a35:;
  /* 12c43a35 call 0x12c43cf0 */
  push32(0x12c43a3au); f_12c43cf0();
  /* 12c43a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43a3c jne 0x12c43a5f */
  if (!C.zf) goto L_12c43a5f;
  /* 12c43a3e push 0x12c69488 */
  push32((uint32_t)(0x12c69488u));
  /* 12c43a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43a45 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12c43a4a push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43a51 call 0x12c41c10 */
  push32(0x12c43a56u); f_12c41c10();
  /* 12c43a56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43a59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43a5c jne 0x12c43a5f */
  if (!C.zf) goto L_12c43a5f;
  /* 12c43a5e int3  */
  x86_unimpl("int3 @ 0x12c43a5e");
L_12c43a5f:;
  /* 12c43a5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43a63 jne 0x12c43a35 */
  if (!C.zf) goto L_12c43a35;
L_12c43a65:;
  /* 12c43a65 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43a67 call 0x12c46550 */
  push32(0x12c43a6cu); f_12c46550();
  /* 12c43a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c43a6f:;
  /* 12c43a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43a72 push edx */
  push32((uint32_t)(EDX));
  /* 12c43a73 call 0x12c44150 */
  push32(0x12c43a78u); f_12c44150();
  /* 12c43a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43a7d jne 0x12c43aa0 */
  if (!C.zf) goto L_12c43aa0;
  /* 12c43a7f push 0x12c6958c */
  push32((uint32_t)(0x12c6958cu));
  /* 12c43a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43a86 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12c43a8b push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43a90 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43a92 call 0x12c41c10 */
  push32(0x12c43a97u); f_12c41c10();
  /* 12c43a97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43a9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43a9d jne 0x12c43aa0 */
  if (!C.zf) goto L_12c43aa0;
  /* 12c43a9f int3  */
  x86_unimpl("int3 @ 0x12c43a9f");
L_12c43aa0:;
  /* 12c43aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43aa4 jne 0x12c43a6f */
  if (!C.zf) goto L_12c43a6f;
  /* 12c43aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43aa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43aac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c43aaf:;
  /* 12c43aaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43ab2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43ab5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c43aba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43abd je 0x12c43b02 */
  if (C.zf) goto L_12c43b02;
  /* 12c43abf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43ac2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43ac6 je 0x12c43b02 */
  if (C.zf) goto L_12c43b02;
  /* 12c43ac8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43acb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43ace and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c43ad3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43ad6 je 0x12c43b02 */
  if (C.zf) goto L_12c43b02;
  /* 12c43ad8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43adb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43adf je 0x12c43b02 */
  if (C.zf) goto L_12c43b02;
  /* 12c43ae1 push 0x12c69724 */
  push32((uint32_t)(0x12c69724u));
  /* 12c43ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43ae8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12c43aed push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43af4 call 0x12c41c10 */
  push32(0x12c43af9u); f_12c41c10();
  /* 12c43af9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43afc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43aff jne 0x12c43b02 */
  if (!C.zf) goto L_12c43b02;
  /* 12c43b01 int3  */
  x86_unimpl("int3 @ 0x12c43b01");
L_12c43b02:;
  /* 12c43b02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43b04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c43b06 jne 0x12c43aaf */
  if (!C.zf) goto L_12c43aaf;
  /* 12c43b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43b0b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43b0f jne 0x12c43b1e */
  if (!C.zf) goto L_12c43b1e;
  /* 12c43b11 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43b15 jne 0x12c43b1e */
  if (!C.zf) goto L_12c43b1e;
  /* 12c43b17 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12c43b1e:;
  /* 12c43b1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43b21 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43b25 je 0x12c43b59 */
  if (C.zf) goto L_12c43b59;
L_12c43b27:;
  /* 12c43b27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43b2d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43b30 je 0x12c43b53 */
  if (C.zf) goto L_12c43b53;
  /* 12c43b32 push 0x12c6966c */
  push32((uint32_t)(0x12c6966cu));
  /* 12c43b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43b39 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12c43b3e push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43b43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43b45 call 0x12c41c10 */
  push32(0x12c43b4au); f_12c41c10();
  /* 12c43b4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43b4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43b50 jne 0x12c43b53 */
  if (!C.zf) goto L_12c43b53;
  /* 12c43b52 int3  */
  x86_unimpl("int3 @ 0x12c43b52");
L_12c43b53:;
  /* 12c43b53 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43b55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43b57 jne 0x12c43b27 */
  if (!C.zf) goto L_12c43b27;
L_12c43b59:;
  /* 12c43b59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43b5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c43b5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c43b62 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43b64 call 0x12c465f0 */
  push32(0x12c43b69u); f_12c465f0();
  /* 12c43b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43b6f pop edi */
  EDI = (pop32());
  /* 12c43b70 pop esi */
  ESI = (pop32());
  /* 12c43b71 pop ebx */
  EBX = (pop32());
  /* 12c43b72 mov esp, ebp */
  ESP = (EBP);
  /* 12c43b74 pop ebp */
  EBP = (pop32());
  /* 12c43b75 ret  */
  ESPCHK(0x12c43a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b80 @ 0x12c43b80 (28 bytes, 11 insns) */
void f_12c43b80(void) {
  FTRACE(0x12c43b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43b81 mov ebp, esp */
  EBP = (ESP);
  /* 12c43b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43b84 mov eax, dword ptr [0x12c6ca8c] */
  EAX = (r32((uint32_t)(0x12c6ca8c)));
  /* 12c43b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c43b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43b8f mov dword ptr [0x12c6ca8c], ecx */
  w32((uint32_t)(0x12c6ca8c), (ECX));
  /* 12c43b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43b98 mov esp, ebp */
  ESP = (EBP);
  /* 12c43b9a pop ebp */
  EBP = (pop32());
  /* 12c43b9b ret  */
  ESPCHK(0x12c43b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x12c43ba0 (157 bytes, 59 insns) */
void f_12c43ba0(void) {
  FTRACE(0x12c43ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12c43ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c43ba5 push esi */
  push32((uint32_t)(ESI));
  /* 12c43ba6 push edi */
  push32((uint32_t)(EDI));
  /* 12c43ba7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43ba9 call 0x12c46550 */
  push32(0x12c43baeu); f_12c46550();
  /* 12c43bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43bb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43bb4 push eax */
  push32((uint32_t)(EAX));
  /* 12c43bb5 call 0x12c44150 */
  push32(0x12c43bbau); f_12c44150();
  /* 12c43bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43bbf je 0x12c43c2c */
  if (C.zf) goto L_12c43c2c;
  /* 12c43bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43bc4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43bc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c43bca:;
  /* 12c43bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43bcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43bd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c43bd5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43bd8 je 0x12c43c1d */
  if (C.zf) goto L_12c43c1d;
  /* 12c43bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43bdd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43be1 je 0x12c43c1d */
  if (C.zf) goto L_12c43c1d;
  /* 12c43be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43be6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c43be9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c43bee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43bf1 je 0x12c43c1d */
  if (C.zf) goto L_12c43c1d;
  /* 12c43bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43bf6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43bfa je 0x12c43c1d */
  if (C.zf) goto L_12c43c1d;
  /* 12c43bfc push 0x12c69724 */
  push32((uint32_t)(0x12c69724u));
  /* 12c43c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43c03 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12c43c08 push 0x12c6947c */
  push32((uint32_t)(0x12c6947cu));
  /* 12c43c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c43c0f call 0x12c41c10 */
  push32(0x12c43c14u); f_12c41c10();
  /* 12c43c14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43c17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43c1a jne 0x12c43c1d */
  if (!C.zf) goto L_12c43c1d;
  /* 12c43c1c int3  */
  x86_unimpl("int3 @ 0x12c43c1c");
L_12c43c1d:;
  /* 12c43c1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c43c21 jne 0x12c43bca */
  if (!C.zf) goto L_12c43bca;
  /* 12c43c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43c26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43c29 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12c43c2c:;
  /* 12c43c2c push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43c2e call 0x12c465f0 */
  push32(0x12c43c33u); f_12c465f0();
  /* 12c43c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43c36 pop edi */
  EDI = (pop32());
  /* 12c43c37 pop esi */
  ESI = (pop32());
  /* 12c43c38 pop ebx */
  EBX = (pop32());
  /* 12c43c39 mov esp, ebp */
  ESP = (EBP);
  /* 12c43c3b pop ebp */
  EBP = (pop32());
  /* 12c43c3c ret  */
  ESPCHK(0x12c43ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x12c43c40 (28 bytes, 11 insns) */
void f_12c43c40(void) {
  FTRACE(0x12c43c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43c41 mov ebp, esp */
  EBP = (ESP);
  /* 12c43c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43c44 mov eax, dword ptr [0x12c6cc90] */
  EAX = (r32((uint32_t)(0x12c6cc90)));
  /* 12c43c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c43c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43c4f mov dword ptr [0x12c6cc90], ecx */
  w32((uint32_t)(0x12c6cc90), (ECX));
  /* 12c43c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43c58 mov esp, ebp */
  ESP = (EBP);
  /* 12c43c5a pop ebp */
  EBP = (pop32());
  /* 12c43c5b ret  */
  ESPCHK(0x12c43c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c60 @ 0x12c43c60 (136 bytes, 55 insns) */
void f_12c43c60(void) {
  FTRACE(0x12c43c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43c61 mov ebp, esp */
  EBP = (ESP);
  /* 12c43c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43c64 push ebx */
  push32((uint32_t)(EBX));
  /* 12c43c65 push esi */
  push32((uint32_t)(ESI));
  /* 12c43c66 push edi */
  push32((uint32_t)(EDI));
  /* 12c43c67 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12c43c6e:;
  /* 12c43c6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c43c71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c43c74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43c77 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c43c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43c7c je 0x12c43cde */
  if (C.zf) goto L_12c43cde;
  /* 12c43c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43c81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43c83 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c43c85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43c88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43c91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43c94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c43c97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43c99 je 0x12c43cdc */
  if (C.zf) goto L_12c43cdc;
L_12c43c9b:;
  /* 12c43c9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c43c9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c43ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12c43ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43ca7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43ca9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12c43cac push edx */
  push32((uint32_t)(EDX));
  /* 12c43cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c43cb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43cb3 push eax */
  push32((uint32_t)(EAX));
  /* 12c43cb4 push 0x12c69768 */
  push32((uint32_t)(0x12c69768u));
  /* 12c43cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43cc1 call 0x12c41c10 */
  push32(0x12c43cc6u); f_12c41c10();
  /* 12c43cc6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43ccc jne 0x12c43ccf */
  if (!C.zf) goto L_12c43ccf;
  /* 12c43cce int3  */
  x86_unimpl("int3 @ 0x12c43cce");
L_12c43ccf:;
  /* 12c43ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43cd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43cd3 jne 0x12c43c9b */
  if (!C.zf) goto L_12c43c9b;
  /* 12c43cd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c43cdc:;
  /* 12c43cdc jmp 0x12c43c6e */
  goto L_12c43c6e;
L_12c43cde:;
  /* 12c43cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c43ce1 pop edi */
  EDI = (pop32());
  /* 12c43ce2 pop esi */
  ESI = (pop32());
  /* 12c43ce3 pop ebx */
  EBX = (pop32());
  /* 12c43ce4 mov esp, ebp */
  ESP = (EBP);
  /* 12c43ce6 pop ebp */
  EBP = (pop32());
  /* 12c43ce7 ret  */
  ESPCHK(0x12c43c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x12c43cf0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12c43cf0(void) {
  FTRACE(0x12c43cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c43cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c43cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c43cf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c43cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c43cf7 push esi */
  push32((uint32_t)(ESI));
  /* 12c43cf8 push edi */
  push32((uint32_t)(EDI));
  /* 12c43cf9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c43d00 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c43d05 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c43d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43d0a jne 0x12c43d16 */
  if (!C.zf) goto L_12c43d16;
  /* 12c43d0c mov eax, 1 */
  EAX = (0x1u);
  /* 12c43d11 jmp 0x12c44048 */
  goto L_12c44048;
L_12c43d16:;
  /* 12c43d16 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43d18 call 0x12c46550 */
  push32(0x12c43d1du); f_12c46550();
  /* 12c43d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43d20 call 0x12c46d30 */
  push32(0x12c43d25u); f_12c46d30();
  /* 12c43d25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c43d28 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43d2c je 0x12c43e39 */
  if (C.zf) goto L_12c43e39;
  /* 12c43d32 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43d36 je 0x12c43e39 */
  if (C.zf) goto L_12c43e39;
  /* 12c43d3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c43d3f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c43d42 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c43d45 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43d48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c43d4b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43d4f ja 0x12c43e02 */
  if ((!C.cf&&!C.zf)) goto L_12c43e02;
  /* 12c43d55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c43d58 jmp dword ptr [eax*4 + 0x12c4404f] */
  switch (EAX) {
    case 0: goto L_12c43dda;
    case 1: goto L_12c43db2;
    case 2: goto L_12c43d8a;
    case 3: goto L_12c43d5f;
    default: x86_unimpl("switch@0x12c43d58 out of table"); return;
  }
L_12c43d5f:;
  /* 12c43d5f push 0x12c698bc */
  push32((uint32_t)(0x12c698bcu));
  /* 12c43d64 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d71 call 0x12c41c10 */
  push32(0x12c43d76u); f_12c41c10();
  /* 12c43d76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43d79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43d7c jne 0x12c43d7f */
  if (!C.zf) goto L_12c43d7f;
  /* 12c43d7e int3  */
  x86_unimpl("int3 @ 0x12c43d7e");
L_12c43d7f:;
  /* 12c43d7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43d81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43d83 jne 0x12c43d5f */
  if (!C.zf) goto L_12c43d5f;
  /* 12c43d85 jmp 0x12c43e28 */
  goto L_12c43e28;
L_12c43d8a:;
  /* 12c43d8a push 0x12c69898 */
  push32((uint32_t)(0x12c69898u));
  /* 12c43d8f push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43d9c call 0x12c41c10 */
  push32(0x12c43da1u); f_12c41c10();
  /* 12c43da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43da7 jne 0x12c43daa */
  if (!C.zf) goto L_12c43daa;
  /* 12c43da9 int3  */
  x86_unimpl("int3 @ 0x12c43da9");
L_12c43daa:;
  /* 12c43daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c43dae jne 0x12c43d8a */
  if (!C.zf) goto L_12c43d8a;
  /* 12c43db0 jmp 0x12c43e28 */
  goto L_12c43e28;
L_12c43db2:;
  /* 12c43db2 push 0x12c69874 */
  push32((uint32_t)(0x12c69874u));
  /* 12c43db7 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43dc4 call 0x12c41c10 */
  push32(0x12c43dc9u); f_12c41c10();
  /* 12c43dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43dcf jne 0x12c43dd2 */
  if (!C.zf) goto L_12c43dd2;
  /* 12c43dd1 int3  */
  x86_unimpl("int3 @ 0x12c43dd1");
L_12c43dd2:;
  /* 12c43dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43dd6 jne 0x12c43db2 */
  if (!C.zf) goto L_12c43db2;
  /* 12c43dd8 jmp 0x12c43e28 */
  goto L_12c43e28;
L_12c43dda:;
  /* 12c43dda push 0x12c69850 */
  push32((uint32_t)(0x12c69850u));
  /* 12c43ddf push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43dec call 0x12c41c10 */
  push32(0x12c43df1u); f_12c41c10();
  /* 12c43df1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43df4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43df7 jne 0x12c43dfa */
  if (!C.zf) goto L_12c43dfa;
  /* 12c43df9 int3  */
  x86_unimpl("int3 @ 0x12c43df9");
L_12c43dfa:;
  /* 12c43dfa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43dfe jne 0x12c43dda */
  if (!C.zf) goto L_12c43dda;
  /* 12c43e00 jmp 0x12c43e28 */
  goto L_12c43e28;
L_12c43e02:;
  /* 12c43e02 push 0x12c69824 */
  push32((uint32_t)(0x12c69824u));
  /* 12c43e07 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c43e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43e14 call 0x12c41c10 */
  push32(0x12c43e19u); f_12c41c10();
  /* 12c43e19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43e1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43e1f jne 0x12c43e22 */
  if (!C.zf) goto L_12c43e22;
  /* 12c43e21 int3  */
  x86_unimpl("int3 @ 0x12c43e21");
L_12c43e22:;
  /* 12c43e22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43e24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c43e26 jne 0x12c43e02 */
  if (!C.zf) goto L_12c43e02;
L_12c43e28:;
  /* 12c43e28 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c43e2a call 0x12c465f0 */
  push32(0x12c43e2fu); f_12c465f0();
  /* 12c43e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43e34 jmp 0x12c44048 */
  goto L_12c44048;
L_12c43e39:;
  /* 12c43e39 mov eax, dword ptr [0x12c6e4d4] */
  EAX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c43e3e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c43e41 jmp 0x12c43e4b */
  goto L_12c43e4b;
L_12c43e43:;
  /* 12c43e43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43e46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c43e48 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c43e4b:;
  /* 12c43e4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43e4f je 0x12c4403b */
  if (C.zf) goto L_12c4403b;
  /* 12c43e55 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c43e5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43e5f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c43e62 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43e68 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43e6b je 0x12c43e90 */
  if (C.zf) goto L_12c43e90;
  /* 12c43e6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43e70 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43e74 je 0x12c43e90 */
  if (C.zf) goto L_12c43e90;
  /* 12c43e76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43e79 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c43e7c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43e82 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43e85 je 0x12c43e90 */
  if (C.zf) goto L_12c43e90;
  /* 12c43e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43e8a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43e8e jne 0x12c43ea8 */
  if (!C.zf) goto L_12c43ea8;
L_12c43e90:;
  /* 12c43e90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43e93 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c43e96 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c43e9c mov edx, dword ptr [ecx*4 + 0x12c6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca94)));
  /* 12c43ea3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c43ea6 jmp 0x12c43eaf */
  goto L_12c43eaf;
L_12c43ea8:;
  /* 12c43ea8 mov dword ptr [ebp - 0x14], 0x12c6981c */
  w32((uint32_t)(EBP + -0x14), (0x12c6981cu));
L_12c43eaf:;
  /* 12c43eaf push 4 */
  push32((uint32_t)(0x4u));
  /* 12c43eb1 mov al, byte ptr [0x12c6ca90] */
  AL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c43eb6 push eax */
  push32((uint32_t)(EAX));
  /* 12c43eb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43eba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43ebd push ecx */
  push32((uint32_t)(ECX));
  /* 12c43ebe call 0x12c43c60 */
  push32(0x12c43ec3u); f_12c43c60();
  /* 12c43ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43ec8 jne 0x12c43f04 */
  if (!C.zf) goto L_12c43f04;
L_12c43eca:;
  /* 12c43eca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43ecd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43ed0 push edx */
  push32((uint32_t)(EDX));
  /* 12c43ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43ed4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c43ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43ed8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c43edb push edx */
  push32((uint32_t)(EDX));
  /* 12c43edc push 0x12c696f8 */
  push32((uint32_t)(0x12c696f8u));
  /* 12c43ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43ee9 call 0x12c41c10 */
  push32(0x12c43eeeu); f_12c41c10();
  /* 12c43eee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43ef4 jne 0x12c43ef7 */
  if (!C.zf) goto L_12c43ef7;
  /* 12c43ef6 int3  */
  x86_unimpl("int3 @ 0x12c43ef6");
L_12c43ef7:;
  /* 12c43ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43efb jne 0x12c43eca */
  if (!C.zf) goto L_12c43eca;
  /* 12c43efd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c43f04:;
  /* 12c43f04 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c43f06 mov cl, byte ptr [0x12c6ca90] */
  CL = (r8((uint32_t)(0x12c6ca90)));
  /* 12c43f0c push ecx */
  push32((uint32_t)(ECX));
  /* 12c43f0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f10 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c43f13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f16 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12c43f1a push edx */
  push32((uint32_t)(EDX));
  /* 12c43f1b call 0x12c43c60 */
  push32(0x12c43f20u); f_12c43c60();
  /* 12c43f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43f25 jne 0x12c43f61 */
  if (!C.zf) goto L_12c43f61;
L_12c43f27:;
  /* 12c43f27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f2a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43f2d push eax */
  push32((uint32_t)(EAX));
  /* 12c43f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f31 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c43f34 push edx */
  push32((uint32_t)(EDX));
  /* 12c43f35 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c43f38 push eax */
  push32((uint32_t)(EAX));
  /* 12c43f39 push 0x12c696cc */
  push32((uint32_t)(0x12c696ccu));
  /* 12c43f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f46 call 0x12c41c10 */
  push32(0x12c43f4bu); f_12c41c10();
  /* 12c43f4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43f4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43f51 jne 0x12c43f54 */
  if (!C.zf) goto L_12c43f54;
  /* 12c43f53 int3  */
  x86_unimpl("int3 @ 0x12c43f53");
L_12c43f54:;
  /* 12c43f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c43f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c43f58 jne 0x12c43f27 */
  if (!C.zf) goto L_12c43f27;
  /* 12c43f5a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c43f61:;
  /* 12c43f61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f64 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43f68 jne 0x12c43fba */
  if (!C.zf) goto L_12c43fba;
  /* 12c43f6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f6d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c43f70 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43f71 mov dl, byte ptr [0x12c6ca91] */
  DL = (r8((uint32_t)(0x12c6ca91)));
  /* 12c43f77 push edx */
  push32((uint32_t)(EDX));
  /* 12c43f78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f7b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43f7e push eax */
  push32((uint32_t)(EAX));
  /* 12c43f7f call 0x12c43c60 */
  push32(0x12c43f84u); f_12c43c60();
  /* 12c43f84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43f89 jne 0x12c43fba */
  if (!C.zf) goto L_12c43fba;
L_12c43f8b:;
  /* 12c43f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43f8e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43f91 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43f92 push 0x12c697f0 */
  push32((uint32_t)(0x12c697f0u));
  /* 12c43f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43f9f call 0x12c41c10 */
  push32(0x12c43fa4u); f_12c41c10();
  /* 12c43fa4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43fa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43faa jne 0x12c43fad */
  if (!C.zf) goto L_12c43fad;
  /* 12c43fac int3  */
  x86_unimpl("int3 @ 0x12c43fac");
L_12c43fad:;
  /* 12c43fad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c43faf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c43fb1 jne 0x12c43f8b */
  if (!C.zf) goto L_12c43f8b;
  /* 12c43fb3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c43fba:;
  /* 12c43fba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43fbe jne 0x12c44036 */
  if (!C.zf) goto L_12c44036;
  /* 12c43fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43fc3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43fc7 je 0x12c43ffc */
  if (C.zf) goto L_12c43ffc;
L_12c43fc9:;
  /* 12c43fc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43fcc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c43fcf push edx */
  push32((uint32_t)(EDX));
  /* 12c43fd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43fd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c43fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c43fd7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c43fda push edx */
  push32((uint32_t)(EDX));
  /* 12c43fdb push 0x12c697d0 */
  push32((uint32_t)(0x12c697d0u));
  /* 12c43fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c43fe8 call 0x12c41c10 */
  push32(0x12c43fedu); f_12c41c10();
  /* 12c43fed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c43ff0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c43ff3 jne 0x12c43ff6 */
  if (!C.zf) goto L_12c43ff6;
  /* 12c43ff5 int3  */
  x86_unimpl("int3 @ 0x12c43ff5");
L_12c43ff6:;
  /* 12c43ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c43ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c43ffa jne 0x12c43fc9 */
  if (!C.zf) goto L_12c43fc9;
L_12c43ffc:;
  /* 12c43ffc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c43fff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c44002 push edx */
  push32((uint32_t)(EDX));
  /* 12c44003 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44006 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44009 push eax */
  push32((uint32_t)(EAX));
  /* 12c4400a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4400d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4400e push 0x12c697a4 */
  push32((uint32_t)(0x12c697a4u));
  /* 12c44013 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44015 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44017 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44019 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4401b call 0x12c41c10 */
  push32(0x12c44020u); f_12c41c10();
  /* 12c44020 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44023 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44026 jne 0x12c44029 */
  if (!C.zf) goto L_12c44029;
  /* 12c44028 int3  */
  x86_unimpl("int3 @ 0x12c44028");
L_12c44029:;
  /* 12c44029 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4402b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4402d jne 0x12c43ffc */
  if (!C.zf) goto L_12c43ffc;
  /* 12c4402f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c44036:;
  /* 12c44036 jmp 0x12c43e43 */
  goto L_12c43e43;
L_12c4403b:;
  /* 12c4403b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c4403d call 0x12c465f0 */
  push32(0x12c44042u); f_12c465f0();
  /* 12c44042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c44048:;
  /* 12c44048 pop edi */
  EDI = (pop32());
  /* 12c44049 pop esi */
  ESI = (pop32());
  /* 12c4404a pop ebx */
  EBX = (pop32());
  /* 12c4404b mov esp, ebp */
  ESP = (EBP);
  /* 12c4404d pop ebp */
  EBP = (pop32());
  /* 12c4404e ret  */
  ESPCHK(0x12c43cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x12c44060 (34 bytes, 13 insns) */
void f_12c44060(void) {
  FTRACE(0x12c44060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44060 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44061 mov ebp, esp */
  EBP = (ESP);
  /* 12c44063 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44064 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c44069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4406c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44070 je 0x12c4407b */
  if (C.zf) goto L_12c4407b;
  /* 12c44072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44075 mov dword ptr [0x12c6ca84], ecx */
  w32((uint32_t)(0x12c6ca84), (ECX));
L_12c4407b:;
  /* 12c4407b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4407e mov esp, ebp */
  ESP = (EBP);
  /* 12c44080 pop ebp */
  EBP = (pop32());
  /* 12c44081 ret  */
  ESPCHK(0x12c44060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004090 @ 0x12c44090 (103 bytes, 38 insns) */
void f_12c44090(void) {
  FTRACE(0x12c44090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44090 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44091 mov ebp, esp */
  EBP = (ESP);
  /* 12c44093 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44094 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c44099 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4409c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4409e jne 0x12c440a2 */
  if (!C.zf) goto L_12c440a2;
  /* 12c440a0 jmp 0x12c440f3 */
  goto L_12c440f3;
L_12c440a2:;
  /* 12c440a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c440a4 call 0x12c46550 */
  push32(0x12c440a9u); f_12c46550();
  /* 12c440a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c440ac mov ecx, dword ptr [0x12c6e4d4] */
  ECX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c440b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c440b5 jmp 0x12c440bf */
  goto L_12c440bf;
L_12c440b7:;
  /* 12c440b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c440ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c440bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c440bf:;
  /* 12c440bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c440c3 je 0x12c440e9 */
  if (C.zf) goto L_12c440e9;
  /* 12c440c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c440c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c440cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c440d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c440d4 jne 0x12c440e7 */
  if (!C.zf) goto L_12c440e7;
  /* 12c440d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c440d9 push eax */
  push32((uint32_t)(EAX));
  /* 12c440da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c440dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c440e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c440e1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12c440e4u);
  /* 12c440e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c440e7:;
  /* 12c440e7 jmp 0x12c440b7 */
  goto L_12c440b7;
L_12c440e9:;
  /* 12c440e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c440eb call 0x12c465f0 */
  push32(0x12c440f0u); f_12c465f0();
  /* 12c440f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c440f3:;
  /* 12c440f3 mov esp, ebp */
  ESP = (EBP);
  /* 12c440f5 pop ebp */
  EBP = (pop32());
  /* 12c440f6 ret  */
  ESPCHK(0x12c44090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12c44100 (75 bytes, 28 insns) */
void f_12c44100(void) {
  FTRACE(0x12c44100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44100 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44101 mov ebp, esp */
  EBP = (ESP);
  /* 12c44103 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44108 je 0x12c4413d */
  if (C.zf) goto L_12c4413d;
  /* 12c4410a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4410d push eax */
  push32((uint32_t)(EAX));
  /* 12c4410e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44111 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44112 call dword ptr [0x12c702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702c0))), 0x12c44118u);
  /* 12c44118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4411a jne 0x12c4413d */
  if (!C.zf) goto L_12c4413d;
  /* 12c4411c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44120 je 0x12c44134 */
  if (C.zf) goto L_12c44134;
  /* 12c44122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44125 push edx */
  push32((uint32_t)(EDX));
  /* 12c44126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44129 push eax */
  push32((uint32_t)(EAX));
  /* 12c4412a call dword ptr [0x12c702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702bc))), 0x12c44130u);
  /* 12c44130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44132 jne 0x12c4413d */
  if (!C.zf) goto L_12c4413d;
L_12c44134:;
  /* 12c44134 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c4413b jmp 0x12c44144 */
  goto L_12c44144;
L_12c4413d:;
  /* 12c4413d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c44144:;
  /* 12c44144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44147 mov esp, ebp */
  ESP = (EBP);
  /* 12c44149 pop ebp */
  EBP = (pop32());
  /* 12c4414a ret  */
  ESPCHK(0x12c44100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004150 @ 0x12c44150 (134 bytes, 50 insns) */
void f_12c44150(void) {
  FTRACE(0x12c44150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44150 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44151 mov ebp, esp */
  EBP = (ESP);
  /* 12c44153 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44154 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44158 jne 0x12c4415e */
  if (!C.zf) goto L_12c4415e;
  /* 12c4415a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4415c jmp 0x12c441d2 */
  goto L_12c441d2;
L_12c4415e:;
  /* 12c4415e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c44160 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c44162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44165 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44168 push eax */
  push32((uint32_t)(EAX));
  /* 12c44169 call 0x12c44100 */
  push32(0x12c4416eu); f_12c44100();
  /* 12c4416e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44173 jne 0x12c44179 */
  if (!C.zf) goto L_12c44179;
  /* 12c44175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44177 jmp 0x12c441d2 */
  goto L_12c441d2;
L_12c44179:;
  /* 12c44179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4417c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4417f push ecx */
  push32((uint32_t)(ECX));
  /* 12c44180 call 0x12c46e50 */
  push32(0x12c44185u); f_12c46e50();
  /* 12c44185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44188 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4418b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4418f je 0x12c441a6 */
  if (C.zf) goto L_12c441a6;
  /* 12c44191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44194 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44197 push edx */
  push32((uint32_t)(EDX));
  /* 12c44198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4419b push eax */
  push32((uint32_t)(EAX));
  /* 12c4419c call 0x12c46eb0 */
  push32(0x12c441a1u); f_12c46eb0();
  /* 12c441a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c441a4 jmp 0x12c441d2 */
  goto L_12c441d2;
L_12c441a6:;
  /* 12c441a6 mov ecx, dword ptr [0x12c6e488] */
  ECX = (r32((uint32_t)(0x12c6e488)));
  /* 12c441ac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c441b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c441b4 je 0x12c441bd */
  if (C.zf) goto L_12c441bd;
  /* 12c441b6 mov eax, 1 */
  EAX = (0x1u);
  /* 12c441bb jmp 0x12c441d2 */
  goto L_12c441d2;
L_12c441bd:;
  /* 12c441bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c441c0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c441c3 push edx */
  push32((uint32_t)(EDX));
  /* 12c441c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c441c6 mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c441cb push eax */
  push32((uint32_t)(EAX));
  /* 12c441cc call dword ptr [0x12c702c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702c4))), 0x12c441d2u);
L_12c441d2:;
  /* 12c441d2 mov esp, ebp */
  ESP = (EBP);
  /* 12c441d4 pop ebp */
  EBP = (pop32());
  /* 12c441d5 ret  */
  ESPCHK(0x12c44150u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x12c441e0 (227 bytes, 80 insns) */
void f_12c441e0(void) {
  FTRACE(0x12c441e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c441e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c441e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c441e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c441e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c441e7 push eax */
  push32((uint32_t)(EAX));
  /* 12c441e8 call 0x12c44150 */
  push32(0x12c441edu); f_12c44150();
  /* 12c441ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c441f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c441f2 jne 0x12c441fb */
  if (!C.zf) goto L_12c441fb;
  /* 12c441f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c441f6 jmp 0x12c442bf */
  goto L_12c442bf;
L_12c441fb:;
  /* 12c441fb push 9 */
  push32((uint32_t)(0x9u));
  /* 12c441fd call 0x12c46550 */
  push32(0x12c44202u); f_12c46550();
  /* 12c44202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4420b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4420e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44211 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c44214 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c44219 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4421c je 0x12c44240 */
  if (C.zf) goto L_12c44240;
  /* 12c4421e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44221 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44225 je 0x12c44240 */
  if (C.zf) goto L_12c44240;
  /* 12c44227 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4422a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c4422d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c44232 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44235 je 0x12c44240 */
  if (C.zf) goto L_12c44240;
  /* 12c44237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4423a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4423e jne 0x12c442b3 */
  if (!C.zf) goto L_12c442b3;
L_12c44240:;
  /* 12c44240 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c44242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44245 push edx */
  push32((uint32_t)(EDX));
  /* 12c44246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44249 push eax */
  push32((uint32_t)(EAX));
  /* 12c4424a call 0x12c44100 */
  push32(0x12c4424fu); f_12c44100();
  /* 12c4424f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44254 je 0x12c442b3 */
  if (C.zf) goto L_12c442b3;
  /* 12c44256 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44259 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c4425c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4425f jne 0x12c442b3 */
  if (!C.zf) goto L_12c442b3;
  /* 12c44261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44264 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c44267 cmp ecx, dword ptr [0x12c6ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4426d jg 0x12c442b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c442b3;
  /* 12c4426f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44273 je 0x12c44280 */
  if (C.zf) goto L_12c44280;
  /* 12c44275 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4427b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c4427e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c44280:;
  /* 12c44280 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44284 je 0x12c44291 */
  if (C.zf) goto L_12c44291;
  /* 12c44286 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c44289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4428c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4428f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c44291:;
  /* 12c44291 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44295 je 0x12c442a2 */
  if (C.zf) goto L_12c442a2;
  /* 12c44297 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4429a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4429d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c442a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c442a2:;
  /* 12c442a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c442a4 call 0x12c465f0 */
  push32(0x12c442a9u); f_12c465f0();
  /* 12c442a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c442ac mov eax, 1 */
  EAX = (0x1u);
  /* 12c442b1 jmp 0x12c442bf */
  goto L_12c442bf;
L_12c442b3:;
  /* 12c442b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c442b5 call 0x12c465f0 */
  push32(0x12c442bau); f_12c465f0();
  /* 12c442ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c442bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c442bf:;
  /* 12c442bf mov esp, ebp */
  ESP = (EBP);
  /* 12c442c1 pop ebp */
  EBP = (pop32());
  /* 12c442c2 ret  */
  ESPCHK(0x12c441e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x12c442d0 (28 bytes, 11 insns) */
void f_12c442d0(void) {
  FTRACE(0x12c442d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c442d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c442d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c442d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c442d4 mov eax, dword ptr [0x12c6fe38] */
  EAX = (r32((uint32_t)(0x12c6fe38)));
  /* 12c442d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c442dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c442df mov dword ptr [0x12c6fe38], ecx */
  w32((uint32_t)(0x12c6fe38), (ECX));
  /* 12c442e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c442e8 mov esp, ebp */
  ESP = (EBP);
  /* 12c442ea pop ebp */
  EBP = (pop32());
  /* 12c442eb ret  */
  ESPCHK(0x12c442d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x12c442f0 (362 bytes, 116 insns) */
void f_12c442f0(void) {
  FTRACE(0x12c442f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c442f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c442f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c442f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c442f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c442f7 push esi */
  push32((uint32_t)(ESI));
  /* 12c442f8 push edi */
  push32((uint32_t)(EDI));
  /* 12c442f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c442fd jne 0x12c4432a */
  if (!C.zf) goto L_12c4432a;
L_12c442ff:;
  /* 12c442ff push 0x12c69904 */
  push32((uint32_t)(0x12c69904u));
  /* 12c44304 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c44309 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4430b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4430d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4430f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44311 call 0x12c41c10 */
  push32(0x12c44316u); f_12c41c10();
  /* 12c44316 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44319 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4431c jne 0x12c4431f */
  if (!C.zf) goto L_12c4431f;
  /* 12c4431e int3  */
  x86_unimpl("int3 @ 0x12c4431e");
L_12c4431f:;
  /* 12c4431f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44323 jne 0x12c442ff */
  if (!C.zf) goto L_12c442ff;
  /* 12c44325 jmp 0x12c44453 */
  goto L_12c44453;
L_12c4432a:;
  /* 12c4432a push 9 */
  push32((uint32_t)(0x9u));
  /* 12c4432c call 0x12c46550 */
  push32(0x12c44331u); f_12c46550();
  /* 12c44331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44337 mov edx, dword ptr [0x12c6e4d4] */
  EDX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c4433d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c4433f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c44346 jmp 0x12c44351 */
  goto L_12c44351;
L_12c44348:;
  /* 12c44348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4434b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4434e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c44351:;
  /* 12c44351 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44355 jge 0x12c44375 */
  if ((C.sf==C.of)) goto L_12c44375;
  /* 12c44357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4435a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4435d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12c44365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4436b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12c44373 jmp 0x12c44348 */
  goto L_12c44348;
L_12c44375:;
  /* 12c44375 mov edx, dword ptr [0x12c6e4d4] */
  EDX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c4437b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4437e jmp 0x12c44388 */
  goto L_12c44388;
L_12c44380:;
  /* 12c44380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c44385 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c44388:;
  /* 12c44388 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4438c je 0x12c44431 */
  if (C.zf) goto L_12c44431;
  /* 12c44392 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44395 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c44398 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4439d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4439f jl 0x12c44407 */
  if ((C.sf!=C.of)) goto L_12c44407;
  /* 12c443a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c443a4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c443a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c443ad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c443b0 jge 0x12c44407 */
  if ((C.sf==C.of)) goto L_12c44407;
  /* 12c443b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c443b5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c443b8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c443be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c443c1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12c443c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c443c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c443cb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c443ce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c443d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c443d7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12c443db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c443de mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c443e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c443e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c443e9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12c443ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c443f0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c443f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c443f6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c443f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c443fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44401 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12c44405 jmp 0x12c4442c */
  goto L_12c4442c;
L_12c44407:;
  /* 12c44407 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4440a push edx */
  push32((uint32_t)(EDX));
  /* 12c4440b push 0x12c698e0 */
  push32((uint32_t)(0x12c698e0u));
  /* 12c44410 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44414 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44416 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44418 call 0x12c41c10 */
  push32(0x12c4441du); f_12c41c10();
  /* 12c4441d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44423 jne 0x12c44426 */
  if (!C.zf) goto L_12c44426;
  /* 12c44425 int3  */
  x86_unimpl("int3 @ 0x12c44425");
L_12c44426:;
  /* 12c44426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4442a jne 0x12c44407 */
  if (!C.zf) goto L_12c44407;
L_12c4442c:;
  /* 12c4442c jmp 0x12c44380 */
  goto L_12c44380;
L_12c44431:;
  /* 12c44431 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44434 mov edx, dword ptr [0x12c6e4dc] */
  EDX = (r32((uint32_t)(0x12c6e4dc)));
  /* 12c4443a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12c4443d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44440 mov ecx, dword ptr [0x12c6e4d0] */
  ECX = (r32((uint32_t)(0x12c6e4d0)));
  /* 12c44446 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12c44449 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c4444b call 0x12c465f0 */
  push32(0x12c44450u); f_12c465f0();
  /* 12c44450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c44453:;
  /* 12c44453 pop edi */
  EDI = (pop32());
  /* 12c44454 pop esi */
  ESI = (pop32());
  /* 12c44455 pop ebx */
  EBX = (pop32());
  /* 12c44456 mov esp, ebp */
  ESP = (EBP);
  /* 12c44458 pop ebp */
  EBP = (pop32());
  /* 12c44459 ret  */
  ESPCHK(0x12c442f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x12c44460 (291 bytes, 95 insns) */
void f_12c44460(void) {
  FTRACE(0x12c44460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44460 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44461 mov ebp, esp */
  EBP = (ESP);
  /* 12c44463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44466 push ebx */
  push32((uint32_t)(EBX));
  /* 12c44467 push esi */
  push32((uint32_t)(ESI));
  /* 12c44468 push edi */
  push32((uint32_t)(EDI));
  /* 12c44469 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c44470 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44474 je 0x12c44482 */
  if (C.zf) goto L_12c44482;
  /* 12c44476 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4447a je 0x12c44482 */
  if (C.zf) goto L_12c44482;
  /* 12c4447c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44480 jne 0x12c444b0 */
  if (!C.zf) goto L_12c444b0;
L_12c44482:;
  /* 12c44482 push 0x12c6992c */
  push32((uint32_t)(0x12c6992cu));
  /* 12c44487 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c4448c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4448e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44490 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44492 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44494 call 0x12c41c10 */
  push32(0x12c44499u); f_12c41c10();
  /* 12c44499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4449c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4449f jne 0x12c444a2 */
  if (!C.zf) goto L_12c444a2;
  /* 12c444a1 int3  */
  x86_unimpl("int3 @ 0x12c444a1");
L_12c444a2:;
  /* 12c444a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c444a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c444a6 jne 0x12c44482 */
  if (!C.zf) goto L_12c44482;
  /* 12c444a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c444ab jmp 0x12c4457c */
  goto L_12c4457c;
L_12c444b0:;
  /* 12c444b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c444b7 jmp 0x12c444c2 */
  goto L_12c444c2;
L_12c444b9:;
  /* 12c444b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c444bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c444bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c444c2:;
  /* 12c444c2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c444c6 jge 0x12c4454c */
  if ((C.sf==C.of)) goto L_12c4454c;
  /* 12c444cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c444cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c444d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c444d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c444d8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12c444dc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c444e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c444e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c444e6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12c444ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c444ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c444f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c444f3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c444f6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12c444fa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c444fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44504 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12c44508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4450b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4450e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44513 jne 0x12c44522 */
  if (!C.zf) goto L_12c44522;
  /* 12c44515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44518 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4451b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44520 je 0x12c44547 */
  if (C.zf) goto L_12c44547;
L_12c44522:;
  /* 12c44522 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44526 je 0x12c44547 */
  if (C.zf) goto L_12c44547;
  /* 12c44528 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4452c jne 0x12c44540 */
  if (!C.zf) goto L_12c44540;
  /* 12c4452e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44532 jne 0x12c44547 */
  if (!C.zf) goto L_12c44547;
  /* 12c44534 mov eax, dword ptr [0x12c6ca84] */
  EAX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c44539 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4453c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4453e je 0x12c44547 */
  if (C.zf) goto L_12c44547;
L_12c44540:;
  /* 12c44540 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12c44547:;
  /* 12c44547 jmp 0x12c444b9 */
  goto L_12c444b9;
L_12c4454c:;
  /* 12c4454c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4454f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44552 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12c44555 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4455b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12c4455e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44561 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44564 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12c44567 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4456a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4456d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12c44570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44573 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c44579 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c4457c:;
  /* 12c4457c pop edi */
  EDI = (pop32());
  /* 12c4457d pop esi */
  ESI = (pop32());
  /* 12c4457e pop ebx */
  EBX = (pop32());
  /* 12c4457f mov esp, ebp */
  ESP = (EBP);
  /* 12c44581 pop ebp */
  EBP = (pop32());
  /* 12c44582 ret  */
  ESPCHK(0x12c44460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x12c44590 (697 bytes, 253 insns) */
void f_12c44590(void) {
  FTRACE(0x12c44590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44590 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44591 mov ebp, esp */
  EBP = (ESP);
  /* 12c44593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44596 push ebx */
  push32((uint32_t)(EBX));
  /* 12c44597 push esi */
  push32((uint32_t)(ESI));
  /* 12c44598 push edi */
  push32((uint32_t)(EDI));
  /* 12c44599 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c445a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c445a2 call 0x12c46550 */
  push32(0x12c445a7u); f_12c46550();
  /* 12c445a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c445aa:;
  /* 12c445aa push 0x12c69a24 */
  push32((uint32_t)(0x12c69a24u));
  /* 12c445af push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c445b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c445b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c445b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c445ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c445bc call 0x12c41c10 */
  push32(0x12c445c1u); f_12c41c10();
  /* 12c445c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c445c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c445c7 jne 0x12c445ca */
  if (!C.zf) goto L_12c445ca;
  /* 12c445c9 int3  */
  x86_unimpl("int3 @ 0x12c445c9");
L_12c445ca:;
  /* 12c445ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c445cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c445ce jne 0x12c445aa */
  if (!C.zf) goto L_12c445aa;
  /* 12c445d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c445d4 je 0x12c445de */
  if (C.zf) goto L_12c445de;
  /* 12c445d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c445d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c445db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c445de:;
  /* 12c445de mov eax, dword ptr [0x12c6e4d4] */
  EAX = (r32((uint32_t)(0x12c6e4d4)));
  /* 12c445e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c445e6 jmp 0x12c445f0 */
  goto L_12c445f0;
L_12c445e8:;
  /* 12c445e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c445eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c445ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c445f0:;
  /* 12c445f0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c445f4 je 0x12c44812 */
  if (C.zf) goto L_12c44812;
  /* 12c445fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c445fd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44600 je 0x12c44812 */
  if (C.zf) goto L_12c44812;
  /* 12c44606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44609 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c4460c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c44612 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44615 je 0x12c44644 */
  if (C.zf) goto L_12c44644;
  /* 12c44617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4461a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c4461d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c44623 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c44625 je 0x12c44644 */
  if (C.zf) goto L_12c44644;
  /* 12c44627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4462a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c4462d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c44632 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44635 jne 0x12c44649 */
  if (!C.zf) goto L_12c44649;
  /* 12c44637 mov ecx, dword ptr [0x12c6ca84] */
  ECX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c4463d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12c44640 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c44642 jne 0x12c44649 */
  if (!C.zf) goto L_12c44649;
L_12c44644:;
  /* 12c44644 jmp 0x12c4480d */
  goto L_12c4480d;
L_12c44649:;
  /* 12c44649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4464c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44650 je 0x12c446c2 */
  if (C.zf) goto L_12c446c2;
  /* 12c44652 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44654 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c44656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44659 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4465c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4465d call 0x12c44100 */
  push32(0x12c44662u); f_12c44100();
  /* 12c44662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44667 jne 0x12c44693 */
  if (!C.zf) goto L_12c44693;
L_12c44669:;
  /* 12c44669 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4466c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c4466f push eax */
  push32((uint32_t)(EAX));
  /* 12c44670 push 0x12c69a10 */
  push32((uint32_t)(0x12c69a10u));
  /* 12c44675 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44679 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4467b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4467d call 0x12c41c10 */
  push32(0x12c44682u); f_12c41c10();
  /* 12c44682 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44685 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44688 jne 0x12c4468b */
  if (!C.zf) goto L_12c4468b;
  /* 12c4468a int3  */
  x86_unimpl("int3 @ 0x12c4468a");
L_12c4468b:;
  /* 12c4468b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4468d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4468f jne 0x12c44669 */
  if (!C.zf) goto L_12c44669;
  /* 12c44691 jmp 0x12c446c2 */
  goto L_12c446c2;
L_12c44693:;
  /* 12c44693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44696 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c44699 push eax */
  push32((uint32_t)(EAX));
  /* 12c4469a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4469d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c446a0 push edx */
  push32((uint32_t)(EDX));
  /* 12c446a1 push 0x12c69a04 */
  push32((uint32_t)(0x12c69a04u));
  /* 12c446a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446ae call 0x12c41c10 */
  push32(0x12c446b3u); f_12c41c10();
  /* 12c446b3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c446b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c446b9 jne 0x12c446bc */
  if (!C.zf) goto L_12c446bc;
  /* 12c446bb int3  */
  x86_unimpl("int3 @ 0x12c446bb");
L_12c446bc:;
  /* 12c446bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c446be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c446c0 jne 0x12c44693 */
  if (!C.zf) goto L_12c44693;
L_12c446c2:;
  /* 12c446c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c446c5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c446c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c446c9 push 0x12c699fc */
  push32((uint32_t)(0x12c699fcu));
  /* 12c446ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c446d6 call 0x12c41c10 */
  push32(0x12c446dbu); f_12c41c10();
  /* 12c446db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c446de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c446e1 jne 0x12c446e4 */
  if (!C.zf) goto L_12c446e4;
  /* 12c446e3 int3  */
  x86_unimpl("int3 @ 0x12c446e3");
L_12c446e4:;
  /* 12c446e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c446e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c446e8 jne 0x12c446c2 */
  if (!C.zf) goto L_12c446c2;
  /* 12c446ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c446ed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c446f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c446f6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c446f9 jne 0x12c4476c */
  if (!C.zf) goto L_12c4476c;
L_12c446fb:;
  /* 12c446fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c446fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c44701 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44705 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c44708 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c4470b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c44710 push eax */
  push32((uint32_t)(EAX));
  /* 12c44711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44714 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44717 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44718 push 0x12c699c8 */
  push32((uint32_t)(0x12c699c8u));
  /* 12c4471d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4471f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44721 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44723 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44725 call 0x12c41c10 */
  push32(0x12c4472au); f_12c41c10();
  /* 12c4472a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4472d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44730 jne 0x12c44733 */
  if (!C.zf) goto L_12c44733;
  /* 12c44732 int3  */
  x86_unimpl("int3 @ 0x12c44732");
L_12c44733:;
  /* 12c44733 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c44735 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c44737 jne 0x12c446fb */
  if (!C.zf) goto L_12c446fb;
  /* 12c44739 cmp dword ptr [0x12c6fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44740 je 0x12c4475b */
  if (C.zf) goto L_12c4475b;
  /* 12c44742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44745 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c44748 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4474c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4474f push edx */
  push32((uint32_t)(EDX));
  /* 12c44750 call dword ptr [0x12c6fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6fe38))), 0x12c44756u);
  /* 12c44756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44759 jmp 0x12c44767 */
  goto L_12c44767;
L_12c4475b:;
  /* 12c4475b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4475e push eax */
  push32((uint32_t)(EAX));
  /* 12c4475f call 0x12c44850 */
  push32(0x12c44764u); f_12c44850();
  /* 12c44764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c44767:;
  /* 12c44767 jmp 0x12c4480d */
  goto L_12c4480d;
L_12c4476c:;
  /* 12c4476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4476f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44773 jne 0x12c447b2 */
  if (!C.zf) goto L_12c447b2;
L_12c44775:;
  /* 12c44775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44778 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c4477b push eax */
  push32((uint32_t)(EAX));
  /* 12c4477c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4477f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44782 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44783 push 0x12c699a0 */
  push32((uint32_t)(0x12c699a0u));
  /* 12c44788 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4478a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4478c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4478e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44790 call 0x12c41c10 */
  push32(0x12c44795u); f_12c41c10();
  /* 12c44795 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44798 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4479b jne 0x12c4479e */
  if (!C.zf) goto L_12c4479e;
  /* 12c4479d int3  */
  x86_unimpl("int3 @ 0x12c4479d");
L_12c4479e:;
  /* 12c4479e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c447a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c447a2 jne 0x12c44775 */
  if (!C.zf) goto L_12c44775;
  /* 12c447a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c447a7 push eax */
  push32((uint32_t)(EAX));
  /* 12c447a8 call 0x12c44850 */
  push32(0x12c447adu); f_12c44850();
  /* 12c447ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c447b0 jmp 0x12c4480d */
  goto L_12c4480d;
L_12c447b2:;
  /* 12c447b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c447b5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c447b8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c447be cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c447c1 jne 0x12c4480d */
  if (!C.zf) goto L_12c4480d;
L_12c447c3:;
  /* 12c447c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c447c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c447c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c447ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c447cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c447d0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c447d3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c447d8 push eax */
  push32((uint32_t)(EAX));
  /* 12c447d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c447dc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c447df push ecx */
  push32((uint32_t)(ECX));
  /* 12c447e0 push 0x12c6996c */
  push32((uint32_t)(0x12c6996cu));
  /* 12c447e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c447e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c447e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c447eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c447ed call 0x12c41c10 */
  push32(0x12c447f2u); f_12c41c10();
  /* 12c447f2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c447f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c447f8 jne 0x12c447fb */
  if (!C.zf) goto L_12c447fb;
  /* 12c447fa int3  */
  x86_unimpl("int3 @ 0x12c447fa");
L_12c447fb:;
  /* 12c447fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c447fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c447ff jne 0x12c447c3 */
  if (!C.zf) goto L_12c447c3;
  /* 12c44801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44804 push eax */
  push32((uint32_t)(EAX));
  /* 12c44805 call 0x12c44850 */
  push32(0x12c4480au); f_12c44850();
  /* 12c4480a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4480d:;
  /* 12c4480d jmp 0x12c445e8 */
  goto L_12c445e8;
L_12c44812:;
  /* 12c44812 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c44814 call 0x12c465f0 */
  push32(0x12c44819u); f_12c465f0();
  /* 12c44819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4481c:;
  /* 12c4481c push 0x12c69954 */
  push32((uint32_t)(0x12c69954u));
  /* 12c44821 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c44826 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44828 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4482a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4482c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4482e call 0x12c41c10 */
  push32(0x12c44833u); f_12c41c10();
  /* 12c44833 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44836 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44839 jne 0x12c4483c */
  if (!C.zf) goto L_12c4483c;
  /* 12c4483b int3  */
  x86_unimpl("int3 @ 0x12c4483b");
L_12c4483c:;
  /* 12c4483c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4483e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c44840 jne 0x12c4481c */
  if (!C.zf) goto L_12c4481c;
  /* 12c44842 pop edi */
  EDI = (pop32());
  /* 12c44843 pop esi */
  ESI = (pop32());
  /* 12c44844 pop ebx */
  EBX = (pop32());
  /* 12c44845 mov esp, ebp */
  ESP = (EBP);
  /* 12c44847 pop ebp */
  EBP = (pop32());
  /* 12c44848 ret  */
  ESPCHK(0x12c44590u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x12c44850 (276 bytes, 89 insns) */
void f_12c44850(void) {
  FTRACE(0x12c44850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44850 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44851 mov ebp, esp */
  EBP = (ESP);
  /* 12c44853 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44856 push ebx */
  push32((uint32_t)(EBX));
  /* 12c44857 push esi */
  push32((uint32_t)(ESI));
  /* 12c44858 push edi */
  push32((uint32_t)(EDI));
  /* 12c44859 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12c44860 jmp 0x12c4486b */
  goto L_12c4486b;
L_12c44862:;
  /* 12c44862 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c44865 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44868 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12c4486b:;
  /* 12c4486b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4486e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44872 jge 0x12c4487f */
  if ((C.sf==C.of)) goto L_12c4487f;
  /* 12c44874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44877 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c4487a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12c4487d jmp 0x12c44886 */
  goto L_12c44886;
L_12c4487f:;
  /* 12c4487f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12c44886:;
  /* 12c44886 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c44889 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4488c jge 0x12c4492c */
  if ((C.sf==C.of)) goto L_12c4492c;
  /* 12c44892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44895 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44898 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12c4489b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12c4489e cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c448a5 jle 0x12c448c3 */
  if ((C.zf||C.sf!=C.of)) goto L_12c448c3;
  /* 12c448a7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12c448ac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c448af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c448b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c448b6 call 0x12c48b60 */
  push32(0x12c448bbu); f_12c48b60();
  /* 12c448bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c448be mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12c448c1 jmp 0x12c448e0 */
  goto L_12c448e0;
L_12c448c3:;
  /* 12c448c3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c448c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c448cc mov eax, dword ptr [0x12c6cc98] */
  EAX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c448d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c448d3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c448d7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12c448dd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12c448e0:;
  /* 12c448e0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c448e4 je 0x12c448f4 */
  if (C.zf) goto L_12c448f4;
  /* 12c448e6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c448e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c448ef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12c448f2 jmp 0x12c448fb */
  goto L_12c448fb;
L_12c448f4:;
  /* 12c448f4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12c448fb:;
  /* 12c448fb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c448fe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12c44901 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12c44905 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c44908 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4490e push edx */
  push32((uint32_t)(EDX));
  /* 12c4490f push 0x12c69a48 */
  push32((uint32_t)(0x12c69a48u));
  /* 12c44914 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c44917 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4491a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12c4491e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4491f call 0x12c48a60 */
  push32(0x12c44924u); f_12c48a60();
  /* 12c44924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44927 jmp 0x12c44862 */
  goto L_12c44862;
L_12c4492c:;
  /* 12c4492c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c4492f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12c44934:;
  /* 12c44934 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12c44937 push eax */
  push32((uint32_t)(EAX));
  /* 12c44938 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12c4493b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4493c push 0x12c69a38 */
  push32((uint32_t)(0x12c69a38u));
  /* 12c44941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44943 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44947 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44949 call 0x12c41c10 */
  push32(0x12c4494eu); f_12c41c10();
  /* 12c4494e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44951 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44954 jne 0x12c44957 */
  if (!C.zf) goto L_12c44957;
  /* 12c44956 int3  */
  x86_unimpl("int3 @ 0x12c44956");
L_12c44957:;
  /* 12c44957 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c44959 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4495b jne 0x12c44934 */
  if (!C.zf) goto L_12c44934;
  /* 12c4495d pop edi */
  EDI = (pop32());
  /* 12c4495e pop esi */
  ESI = (pop32());
  /* 12c4495f pop ebx */
  EBX = (pop32());
  /* 12c44960 mov esp, ebp */
  ESP = (EBP);
  /* 12c44962 pop ebp */
  EBP = (pop32());
  /* 12c44963 ret  */
  ESPCHK(0x12c44850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x12c44970 (116 bytes, 46 insns) */
void f_12c44970(void) {
  FTRACE(0x12c44970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44970 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44971 mov ebp, esp */
  EBP = (ESP);
  /* 12c44973 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44976 push ebx */
  push32((uint32_t)(EBX));
  /* 12c44977 push esi */
  push32((uint32_t)(ESI));
  /* 12c44978 push edi */
  push32((uint32_t)(EDI));
  /* 12c44979 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12c4497c push eax */
  push32((uint32_t)(EAX));
  /* 12c4497d call 0x12c442f0 */
  push32(0x12c44982u); f_12c442f0();
  /* 12c44982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44985 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44989 jne 0x12c449a4 */
  if (!C.zf) goto L_12c449a4;
  /* 12c4498b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4498f jne 0x12c449a4 */
  if (!C.zf) goto L_12c449a4;
  /* 12c44991 mov ecx, dword ptr [0x12c6ca84] */
  ECX = (r32((uint32_t)(0x12c6ca84)));
  /* 12c44997 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4499a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4499c je 0x12c449db */
  if (C.zf) goto L_12c449db;
  /* 12c4499e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c449a2 je 0x12c449db */
  if (C.zf) goto L_12c449db;
L_12c449a4:;
  /* 12c449a4 push 0x12c69a50 */
  push32((uint32_t)(0x12c69a50u));
  /* 12c449a9 push 0x12c6941c */
  push32((uint32_t)(0x12c6941cu));
  /* 12c449ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12c449b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c449b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c449b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c449b6 call 0x12c41c10 */
  push32(0x12c449bbu); f_12c41c10();
  /* 12c449bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c449be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c449c1 jne 0x12c449c4 */
  if (!C.zf) goto L_12c449c4;
  /* 12c449c3 int3  */
  x86_unimpl("int3 @ 0x12c449c3");
L_12c449c4:;
  /* 12c449c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c449c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c449c8 jne 0x12c449a4 */
  if (!C.zf) goto L_12c449a4;
  /* 12c449ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12c449cc call 0x12c44590 */
  push32(0x12c449d1u); f_12c44590();
  /* 12c449d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c449d4 mov eax, 1 */
  EAX = (0x1u);
  /* 12c449d9 jmp 0x12c449dd */
  goto L_12c449dd;
L_12c449db:;
  /* 12c449db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c449dd:;
  /* 12c449dd pop edi */
  EDI = (pop32());
  /* 12c449de pop esi */
  ESI = (pop32());
  /* 12c449df pop ebx */
  EBX = (pop32());
  /* 12c449e0 mov esp, ebp */
  ESP = (EBP);
  /* 12c449e2 pop ebp */
  EBP = (pop32());
  /* 12c449e3 ret  */
  ESPCHK(0x12c44970u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x12c449f0 (197 bytes, 79 insns) */
void f_12c449f0(void) {
  FTRACE(0x12c449f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c449f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c449f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c449f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c449f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c449f5 push esi */
  push32((uint32_t)(ESI));
  /* 12c449f6 push edi */
  push32((uint32_t)(EDI));
  /* 12c449f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c449fb jne 0x12c44a02 */
  if (!C.zf) goto L_12c44a02;
  /* 12c449fd jmp 0x12c44aae */
  goto L_12c44aae;
L_12c44a02:;
  /* 12c44a02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c44a09 jmp 0x12c44a14 */
  goto L_12c44a14;
L_12c44a0b:;
  /* 12c44a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44a0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44a11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c44a14:;
  /* 12c44a14 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44a18 jge 0x12c44a5e */
  if ((C.sf==C.of)) goto L_12c44a5e;
L_12c44a1a:;
  /* 12c44a1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44a1d mov edx, dword ptr [ecx*4 + 0x12c6ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6ca94)));
  /* 12c44a24 push edx */
  push32((uint32_t)(EDX));
  /* 12c44a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44a2b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12c44a2f push edx */
  push32((uint32_t)(EDX));
  /* 12c44a30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44a36 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12c44a3a push edx */
  push32((uint32_t)(EDX));
  /* 12c44a3b push 0x12c69aac */
  push32((uint32_t)(0x12c69aacu));
  /* 12c44a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a48 call 0x12c41c10 */
  push32(0x12c44a4du); f_12c41c10();
  /* 12c44a4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44a50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44a53 jne 0x12c44a56 */
  if (!C.zf) goto L_12c44a56;
  /* 12c44a55 int3  */
  x86_unimpl("int3 @ 0x12c44a55");
L_12c44a56:;
  /* 12c44a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44a5a jne 0x12c44a1a */
  if (!C.zf) goto L_12c44a1a;
  /* 12c44a5c jmp 0x12c44a0b */
  goto L_12c44a0b;
L_12c44a5e:;
  /* 12c44a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44a61 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12c44a64 push edx */
  push32((uint32_t)(EDX));
  /* 12c44a65 push 0x12c69a88 */
  push32((uint32_t)(0x12c69a88u));
  /* 12c44a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a72 call 0x12c41c10 */
  push32(0x12c44a77u); f_12c41c10();
  /* 12c44a77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44a7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44a7d jne 0x12c44a80 */
  if (!C.zf) goto L_12c44a80;
  /* 12c44a7f int3  */
  x86_unimpl("int3 @ 0x12c44a7f");
L_12c44a80:;
  /* 12c44a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44a84 jne 0x12c44a5e */
  if (!C.zf) goto L_12c44a5e;
L_12c44a86:;
  /* 12c44a86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44a89 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12c44a8c push edx */
  push32((uint32_t)(EDX));
  /* 12c44a8d push 0x12c69a68 */
  push32((uint32_t)(0x12c69a68u));
  /* 12c44a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44a9a call 0x12c41c10 */
  push32(0x12c44a9fu); f_12c41c10();
  /* 12c44a9f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44aa2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44aa5 jne 0x12c44aa8 */
  if (!C.zf) goto L_12c44aa8;
  /* 12c44aa7 int3  */
  x86_unimpl("int3 @ 0x12c44aa7");
L_12c44aa8:;
  /* 12c44aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44aac jne 0x12c44a86 */
  if (!C.zf) goto L_12c44a86;
L_12c44aae:;
  /* 12c44aae pop edi */
  EDI = (pop32());
  /* 12c44aaf pop esi */
  ESI = (pop32());
  /* 12c44ab0 pop ebx */
  EBX = (pop32());
  /* 12c44ab1 mov esp, ebp */
  ESP = (EBP);
  /* 12c44ab3 pop ebp */
  EBP = (pop32());
  /* 12c44ab4 ret  */
  ESPCHK(0x12c449f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x12c44ac0 (329 bytes, 102 insns) */
void f_12c44ac0(void) {
  FTRACE(0x12c44ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12c44ac3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44ac6 cmp dword ptr [0x12c6ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44acd jne 0x12c44ad4 */
  if (!C.zf) goto L_12c44ad4;
  /* 12c44acf call 0x12c49400 */
  push32(0x12c44ad4u); f_12c49400();
L_12c44ad4:;
  /* 12c44ad4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c44adb mov eax, dword ptr [0x12c6e470] */
  EAX = (r32((uint32_t)(0x12c6e470)));
  /* 12c44ae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c44ae3:;
  /* 12c44ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44ae6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c44ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c44aeb je 0x12c44b19 */
  if (C.zf) goto L_12c44b19;
  /* 12c44aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44af0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44af3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44af6 je 0x12c44b01 */
  if (C.zf) goto L_12c44b01;
  /* 12c44af8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44afb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44afe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c44b01:;
  /* 12c44b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44b04 push eax */
  push32((uint32_t)(EAX));
  /* 12c44b05 call 0x12c45980 */
  push32(0x12c44b0au); f_12c45980();
  /* 12c44b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44b10 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c44b14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c44b17 jmp 0x12c44ae3 */
  goto L_12c44ae3;
L_12c44b19:;
  /* 12c44b19 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12c44b1b push 0x12c69acc */
  push32((uint32_t)(0x12c69accu));
  /* 12c44b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c44b22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44b25 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12c44b2c push ecx */
  push32((uint32_t)(ECX));
  /* 12c44b2d call 0x12c42b50 */
  push32(0x12c44b32u); f_12c42b50();
  /* 12c44b32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44b35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c44b38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44b3b mov dword ptr [0x12c6e4a4], edx */
  w32((uint32_t)(0x12c6e4a4), (EDX));
  /* 12c44b41 cmp dword ptr [0x12c6e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44b48 jne 0x12c44b54 */
  if (!C.zf) goto L_12c44b54;
  /* 12c44b4a push 9 */
  push32((uint32_t)(0x9u));
  /* 12c44b4c call 0x12c41ac0 */
  push32(0x12c44b51u); f_12c41ac0();
  /* 12c44b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c44b54:;
  /* 12c44b54 mov eax, dword ptr [0x12c6e470] */
  EAX = (r32((uint32_t)(0x12c6e470)));
  /* 12c44b59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c44b5c jmp 0x12c44b67 */
  goto L_12c44b67;
L_12c44b5e:;
  /* 12c44b5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44b61 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44b64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c44b67:;
  /* 12c44b67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44b6a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c44b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44b6f je 0x12c44bd7 */
  if (C.zf) goto L_12c44bd7;
  /* 12c44b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44b74 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44b75 call 0x12c45980 */
  push32(0x12c44b7au); f_12c45980();
  /* 12c44b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44b80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c44b83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44b86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c44b89 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44b8c je 0x12c44bd5 */
  if (C.zf) goto L_12c44bd5;
  /* 12c44b8e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12c44b90 push 0x12c69acc */
  push32((uint32_t)(0x12c69accu));
  /* 12c44b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c44b97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44b9a push ecx */
  push32((uint32_t)(ECX));
  /* 12c44b9b call 0x12c42b50 */
  push32(0x12c44ba0u); f_12c42b50();
  /* 12c44ba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44ba3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44ba6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c44ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44bab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44bae jne 0x12c44bba */
  if (!C.zf) goto L_12c44bba;
  /* 12c44bb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c44bb2 call 0x12c41ac0 */
  push32(0x12c44bb7u); f_12c41ac0();
  /* 12c44bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c44bba:;
  /* 12c44bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44bbd push ecx */
  push32((uint32_t)(ECX));
  /* 12c44bbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44bc1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c44bc3 push eax */
  push32((uint32_t)(EAX));
  /* 12c44bc4 call 0x12c45b00 */
  push32(0x12c44bc9u); f_12c45b00();
  /* 12c44bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44bcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44bcf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44bd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c44bd5:;
  /* 12c44bd5 jmp 0x12c44b5e */
  goto L_12c44b5e;
L_12c44bd7:;
  /* 12c44bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c44bd9 mov edx, dword ptr [0x12c6e470] */
  EDX = (r32((uint32_t)(0x12c6e470)));
  /* 12c44bdf push edx */
  push32((uint32_t)(EDX));
  /* 12c44be0 call 0x12c435e0 */
  push32(0x12c44be5u); f_12c435e0();
  /* 12c44be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44be8 mov dword ptr [0x12c6e470], 0 */
  w32((uint32_t)(0x12c6e470), (0x0u));
  /* 12c44bf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44bf5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c44bfb mov dword ptr [0x12c6ffa0], 1 */
  w32((uint32_t)(0x12c6ffa0), (0x1u));
  /* 12c44c05 mov esp, ebp */
  ESP = (EBP);
  /* 12c44c07 pop ebp */
  EBP = (pop32());
  /* 12c44c08 ret  */
  ESPCHK(0x12c44ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x12c44c10 (216 bytes, 69 insns) */
void f_12c44c10(void) {
  FTRACE(0x12c44c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44c11 mov ebp, esp */
  EBP = (ESP);
  /* 12c44c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44c16 cmp dword ptr [0x12c6ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44c1d jne 0x12c44c24 */
  if (!C.zf) goto L_12c44c24;
  /* 12c44c1f call 0x12c49400 */
  push32(0x12c44c24u); f_12c49400();
L_12c44c24:;
  /* 12c44c24 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c44c29 push 0x12c6e4e0 */
  push32((uint32_t)(0x12c6e4e0u));
  /* 12c44c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44c30 call dword ptr [0x12c7027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7027c))), 0x12c44c36u);
  /* 12c44c36 mov dword ptr [0x12c6e4b4], 0x12c6e4e0 */
  w32((uint32_t)(0x12c6e4b4), (0x12c6e4e0u));
  /* 12c44c40 mov eax, dword ptr [0x12c6ffcc] */
  EAX = (r32((uint32_t)(0x12c6ffcc)));
  /* 12c44c45 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44c48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c44c4a jne 0x12c44c57 */
  if (!C.zf) goto L_12c44c57;
  /* 12c44c4c mov edx, dword ptr [0x12c6e4b4] */
  EDX = (r32((uint32_t)(0x12c6e4b4)));
  /* 12c44c52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c44c55 jmp 0x12c44c5f */
  goto L_12c44c5f;
L_12c44c57:;
  /* 12c44c57 mov eax, dword ptr [0x12c6ffcc] */
  EAX = (r32((uint32_t)(0x12c6ffcc)));
  /* 12c44c5c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12c44c5f:;
  /* 12c44c5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c44c62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c44c65 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12c44c68 push edx */
  push32((uint32_t)(EDX));
  /* 12c44c69 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c44c6c push eax */
  push32((uint32_t)(EAX));
  /* 12c44c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c44c71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44c74 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44c75 call 0x12c44cf0 */
  push32(0x12c44c7au); f_12c44cf0();
  /* 12c44c7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44c7d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12c44c82 push 0x12c69ad8 */
  push32((uint32_t)(0x12c69ad8u));
  /* 12c44c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c44c89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44c8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44c8f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12c44c92 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44c93 call 0x12c42b50 */
  push32(0x12c44c98u); f_12c42b50();
  /* 12c44c98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c44c9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ca2 jne 0x12c44cae */
  if (!C.zf) goto L_12c44cae;
  /* 12c44ca4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c44ca6 call 0x12c41ac0 */
  push32(0x12c44cabu); f_12c41ac0();
  /* 12c44cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c44cae:;
  /* 12c44cae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12c44cb1 push edx */
  push32((uint32_t)(EDX));
  /* 12c44cb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c44cb5 push eax */
  push32((uint32_t)(EAX));
  /* 12c44cb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44cb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44cbc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12c44cbf push eax */
  push32((uint32_t)(EAX));
  /* 12c44cc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c44cc4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44cc7 push edx */
  push32((uint32_t)(EDX));
  /* 12c44cc8 call 0x12c44cf0 */
  push32(0x12c44ccdu); f_12c44cf0();
  /* 12c44ccd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44cd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44cd3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44cd6 mov dword ptr [0x12c6e498], eax */
  w32((uint32_t)(0x12c6e498), (EAX));
  /* 12c44cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c44cde mov dword ptr [0x12c6e49c], ecx */
  w32((uint32_t)(0x12c6e49c), (ECX));
  /* 12c44ce4 mov esp, ebp */
  ESP = (EBP);
  /* 12c44ce6 pop ebp */
  EBP = (pop32());
  /* 12c44ce7 ret  */
  ESPCHK(0x12c44c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf0 @ 0x12c44cf0 (1060 bytes, 360 insns) */
void f_12c44cf0(void) {
  FTRACE(0x12c44cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c44cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c44cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c44cf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44cf6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44cf9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c44cff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c44d02 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12c44d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c44d0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c44d0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44d12 je 0x12c44d25 */
  if (C.zf) goto L_12c44d25;
  /* 12c44d14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44d17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44d1a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c44d1c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44d1f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44d22 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12c44d25:;
  /* 12c44d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d28 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44d2b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44d2e jne 0x12c44dfd */
  if (!C.zf) goto L_12c44dfd;
L_12c44d34:;
  /* 12c44d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44d3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c44d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d40 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44d43 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44d46 je 0x12c44dc2 */
  if (C.zf) goto L_12c44dc2;
  /* 12c44d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d4b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c44d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44d50 je 0x12c44dc2 */
  if (C.zf) goto L_12c44dc2;
  /* 12c44d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c44d57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c44d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c44d5b mov al, byte ptr [edx + 0x12c6fd01] */
  AL = (r8((uint32_t)(EDX + 0x12c6fd01)));
  /* 12c44d61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c44d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44d66 je 0x12c44d97 */
  if (C.zf) goto L_12c44d97;
  /* 12c44d68 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44d6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c44d6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44d70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44d73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c44d75 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44d79 je 0x12c44d97 */
  if (C.zf) goto L_12c44d97;
  /* 12c44d7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c44d83 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c44d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44d88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44d8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c44d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44d91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44d94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c44d97:;
  /* 12c44d97 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44d9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c44d9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44d9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44da2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c44da4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44da8 je 0x12c44dbd */
  if (C.zf) goto L_12c44dbd;
  /* 12c44daa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44dad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44db0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c44db2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c44db4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44db7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44dba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c44dbd:;
  /* 12c44dbd jmp 0x12c44d34 */
  goto L_12c44d34;
L_12c44dc2:;
  /* 12c44dc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44dc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c44dc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44dca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44dcd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c44dcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44dd3 je 0x12c44de4 */
  if (C.zf) goto L_12c44de4;
  /* 12c44dd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44dd8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c44ddb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44dde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44de1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12c44de4:;
  /* 12c44de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44dea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ded jne 0x12c44df8 */
  if (!C.zf) goto L_12c44df8;
  /* 12c44def mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44df2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44df5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c44df8:;
  /* 12c44df8 jmp 0x12c44ecc */
  goto L_12c44ecc;
L_12c44dfd:;
  /* 12c44dfd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44e00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c44e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44e05 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44e08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c44e0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44e0e je 0x12c44e23 */
  if (C.zf) goto L_12c44e23;
  /* 12c44e10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c44e18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c44e1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44e1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44e20 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c44e23:;
  /* 12c44e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44e26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c44e28 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12c44e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44e2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44e31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c44e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44e37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c44e3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c44e3f mov dl, byte ptr [ecx + 0x12c6fd01] */
  DL = (r8((uint32_t)(ECX + 0x12c6fd01)));
  /* 12c44e45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c44e48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c44e4a je 0x12c44e7b */
  if (C.zf) goto L_12c44e7b;
  /* 12c44e4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44e4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c44e51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44e54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44e57 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c44e59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44e5d je 0x12c44e72 */
  if (C.zf) goto L_12c44e72;
  /* 12c44e5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44e65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c44e67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c44e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44e6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44e6f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c44e72:;
  /* 12c44e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44e75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44e78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c44e7b:;
  /* 12c44e7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44e7e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c44e84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44e87 je 0x12c44ea7 */
  if (C.zf) goto L_12c44ea7;
  /* 12c44e89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44e8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c44e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44e93 je 0x12c44ea7 */
  if (C.zf) goto L_12c44ea7;
  /* 12c44e95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44e98 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c44e9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ea1 jne 0x12c44dfd */
  if (!C.zf) goto L_12c44dfd;
L_12c44ea7:;
  /* 12c44ea7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c44eaa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c44eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c44eb2 jne 0x12c44ebf */
  if (!C.zf) goto L_12c44ebf;
  /* 12c44eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44eb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44eba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c44ebd jmp 0x12c44ecc */
  goto L_12c44ecc;
L_12c44ebf:;
  /* 12c44ebf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ec3 je 0x12c44ecc */
  if (C.zf) goto L_12c44ecc;
  /* 12c44ec5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44ec8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12c44ecc:;
  /* 12c44ecc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12c44ed3:;
  /* 12c44ed3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44ed6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c44ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44edb je 0x12c44efe */
  if (C.zf) goto L_12c44efe;
L_12c44edd:;
  /* 12c44edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44ee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c44ee3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ee6 je 0x12c44ef3 */
  if (C.zf) goto L_12c44ef3;
  /* 12c44ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44eeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44eee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ef1 jne 0x12c44efe */
  if (!C.zf) goto L_12c44efe;
L_12c44ef3:;
  /* 12c44ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44ef6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44ef9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c44efc jmp 0x12c44edd */
  goto L_12c44edd;
L_12c44efe:;
  /* 12c44efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44f01 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44f04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c44f06 jne 0x12c44f0d */
  if (!C.zf) goto L_12c44f0d;
  /* 12c44f08 jmp 0x12c450eb */
  goto L_12c450eb;
L_12c44f0d:;
  /* 12c44f0d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44f11 je 0x12c44f24 */
  if (C.zf) goto L_12c44f24;
  /* 12c44f13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44f16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44f19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c44f1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c44f1e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44f21 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c44f24:;
  /* 12c44f24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c44f27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c44f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44f2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c44f2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c44f31:;
  /* 12c44f31 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c44f38 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c44f3f:;
  /* 12c44f3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44f42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c44f45 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44f48 jne 0x12c44f5e */
  if (!C.zf) goto L_12c44f5e;
  /* 12c44f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44f4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c44f53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44f56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44f59 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c44f5c jmp 0x12c44f3f */
  goto L_12c44f3f;
L_12c44f5e:;
  /* 12c44f5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44f61 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c44f64 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44f67 jne 0x12c44fba */
  if (!C.zf) goto L_12c44fba;
  /* 12c44f69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44f6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c44f6e mov ecx, 2 */
  ECX = (0x2u);
  /* 12c44f73 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c44f75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c44f77 jne 0x12c44fb2 */
  if (!C.zf) goto L_12c44fb2;
  /* 12c44f79 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44f7d je 0x12c44f9f */
  if (C.zf) goto L_12c44f9f;
  /* 12c44f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44f82 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c44f86 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44f89 jne 0x12c44f96 */
  if (!C.zf) goto L_12c44f96;
  /* 12c44f8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44f8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44f91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c44f94 jmp 0x12c44f9d */
  goto L_12c44f9d;
L_12c44f96:;
  /* 12c44f96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c44f9d:;
  /* 12c44f9d jmp 0x12c44fa6 */
  goto L_12c44fa6;
L_12c44f9f:;
  /* 12c44f9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c44fa6:;
  /* 12c44fa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c44fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44fac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12c44faf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c44fb2:;
  /* 12c44fb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44fb5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c44fb7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c44fba:;
  /* 12c44fba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44fbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c44fc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c44fc3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c44fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c44fc8 je 0x12c44fee */
  if (C.zf) goto L_12c44fee;
  /* 12c44fca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44fce je 0x12c44fdf */
  if (C.zf) goto L_12c44fdf;
  /* 12c44fd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44fd3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12c44fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c44fd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44fdc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12c44fdf:;
  /* 12c44fdf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44fe2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c44fe4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c44fe7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c44fea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c44fec jmp 0x12c44fba */
  goto L_12c44fba;
L_12c44fee:;
  /* 12c44fee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c44ff1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c44ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c44ff6 je 0x12c45014 */
  if (C.zf) goto L_12c45014;
  /* 12c44ff8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c44ffc jne 0x12c45019 */
  if (!C.zf) goto L_12c45019;
  /* 12c44ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45001 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c45004 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45007 je 0x12c45014 */
  if (C.zf) goto L_12c45014;
  /* 12c45009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4500c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4500f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45012 jne 0x12c45019 */
  if (!C.zf) goto L_12c45019;
L_12c45014:;
  /* 12c45014 jmp 0x12c450c4 */
  goto L_12c450c4;
L_12c45019:;
  /* 12c45019 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4501d je 0x12c450b6 */
  if (C.zf) goto L_12c450b6;
  /* 12c45023 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45027 je 0x12c4507d */
  if (C.zf) goto L_12c4507d;
  /* 12c45029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4502c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4502e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c45030 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c45032 mov cl, byte ptr [eax + 0x12c6fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c45038 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4503b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4503d je 0x12c45068 */
  if (C.zf) goto L_12c45068;
  /* 12c4503f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45045 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c45047 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c45049 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4504c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4504f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12c45052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4505b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4505e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c45060 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45063 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c45066 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c45068:;
  /* 12c45068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4506b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4506e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c45070 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c45072 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45078 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c4507b jmp 0x12c450a9 */
  goto L_12c450a9;
L_12c4507d:;
  /* 12c4507d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45082 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c45084 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c45086 mov cl, byte ptr [eax + 0x12c6fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c4508c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4508f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c45091 je 0x12c450a9 */
  if (C.zf) goto L_12c450a9;
  /* 12c45093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45096 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45099 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4509c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4509f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c450a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c450a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c450a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c450a9:;
  /* 12c450a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c450ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c450ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c450b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c450b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c450b6:;
  /* 12c450b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c450b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c450bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c450bf jmp 0x12c44f31 */
  goto L_12c44f31;
L_12c450c4:;
  /* 12c450c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c450c8 je 0x12c450d9 */
  if (C.zf) goto L_12c450d9;
  /* 12c450ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c450cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c450d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c450d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c450d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12c450d9:;
  /* 12c450d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c450dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c450de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c450e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c450e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c450e6 jmp 0x12c44ed3 */
  goto L_12c44ed3;
L_12c450eb:;
  /* 12c450eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c450ef je 0x12c45103 */
  if (C.zf) goto L_12c45103;
  /* 12c450f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c450f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c450fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c450fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45100 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c45103:;
  /* 12c45103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c45106 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c45108 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4510b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4510e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c45110 mov esp, ebp */
  ESP = (EBP);
  /* 12c45112 pop ebp */
  EBP = (pop32());
  /* 12c45113 ret  */
  ESPCHK(0x12c44cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x12c45120 (537 bytes, 173 insns) */
void f_12c45120(void) {
  FTRACE(0x12c45120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45120 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45121 mov ebp, esp */
  EBP = (ESP);
  /* 12c45123 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45126 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12c4512d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12c45134 cmp dword ptr [0x12c6e5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4513b jne 0x12c4517a */
  if (!C.zf) goto L_12c4517a;
  /* 12c4513d call dword ptr [0x12c702d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d8))), 0x12c45143u);
  /* 12c45143 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c45146 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4514a je 0x12c45158 */
  if (C.zf) goto L_12c45158;
  /* 12c4514c mov dword ptr [0x12c6e5e4], 1 */
  w32((uint32_t)(0x12c6e5e4), (0x1u));
  /* 12c45156 jmp 0x12c4517a */
  goto L_12c4517a;
L_12c45158:;
  /* 12c45158 call dword ptr [0x12c702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d4))), 0x12c4515eu);
  /* 12c4515e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c45161 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45165 je 0x12c45173 */
  if (C.zf) goto L_12c45173;
  /* 12c45167 mov dword ptr [0x12c6e5e4], 2 */
  w32((uint32_t)(0x12c6e5e4), (0x2u));
  /* 12c45171 jmp 0x12c4517a */
  goto L_12c4517a;
L_12c45173:;
  /* 12c45173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45175 jmp 0x12c45335 */
  goto L_12c45335;
L_12c4517a:;
  /* 12c4517a cmp dword ptr [0x12c6e5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45181 jne 0x12c4527e */
  if (!C.zf) goto L_12c4527e;
  /* 12c45187 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4518b jne 0x12c451a3 */
  if (!C.zf) goto L_12c451a3;
  /* 12c4518d call dword ptr [0x12c702d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d8))), 0x12c45193u);
  /* 12c45193 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c45196 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4519a jne 0x12c451a3 */
  if (!C.zf) goto L_12c451a3;
  /* 12c4519c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4519e jmp 0x12c45335 */
  goto L_12c45335;
L_12c451a3:;
  /* 12c451a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c451a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c451a9:;
  /* 12c451a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c451ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c451ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c451b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c451b3 je 0x12c451d5 */
  if (C.zf) goto L_12c451d5;
  /* 12c451b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c451b8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c451bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c451be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c451c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c451c3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c451c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c451c8 jne 0x12c451d3 */
  if (!C.zf) goto L_12c451d3;
  /* 12c451ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c451cd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c451d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c451d3:;
  /* 12c451d3 jmp 0x12c451a9 */
  goto L_12c451a9;
L_12c451d5:;
  /* 12c451d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c451d8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c451db sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c451dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c451e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c451e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c451e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c451e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c451e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c451eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c451ee push edx */
  push32((uint32_t)(EDX));
  /* 12c451ef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c451f2 push eax */
  push32((uint32_t)(EAX));
  /* 12c451f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c451f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c451f7 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c451fdu);
  /* 12c451fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c45200 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45204 je 0x12c45224 */
  if (C.zf) goto L_12c45224;
  /* 12c45206 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c45208 push 0x12c69ae4 */
  push32((uint32_t)(0x12c69ae4u));
  /* 12c4520d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4520f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c45212 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45213 call 0x12c42b50 */
  push32(0x12c45218u); f_12c42b50();
  /* 12c45218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4521b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c4521e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45222 jne 0x12c45235 */
  if (!C.zf) goto L_12c45235;
L_12c45224:;
  /* 12c45224 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c45227 push edx */
  push32((uint32_t)(EDX));
  /* 12c45228 call dword ptr [0x12c70224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70224))), 0x12c4522eu);
  /* 12c4522e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45230 jmp 0x12c45335 */
  goto L_12c45335;
L_12c45235:;
  /* 12c45235 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45237 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4523c push eax */
  push32((uint32_t)(EAX));
  /* 12c4523d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c45240 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45244 push edx */
  push32((uint32_t)(EDX));
  /* 12c45245 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c45248 push eax */
  push32((uint32_t)(EAX));
  /* 12c45249 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4524b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4524d call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c45253u);
  /* 12c45253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c45255 jne 0x12c4526c */
  if (!C.zf) goto L_12c4526c;
  /* 12c45257 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c45259 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4525c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4525d call 0x12c435e0 */
  push32(0x12c45262u); f_12c435e0();
  /* 12c45262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45265 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12c4526c:;
  /* 12c4526c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4526f push edx */
  push32((uint32_t)(EDX));
  /* 12c45270 call dword ptr [0x12c70224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70224))), 0x12c45276u);
  /* 12c45276 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c45279 jmp 0x12c45335 */
  goto L_12c45335;
L_12c4527e:;
  /* 12c4527e cmp dword ptr [0x12c6e5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45285 jne 0x12c45333 */
  if (!C.zf) goto L_12c45333;
  /* 12c4528b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4528f jne 0x12c452a7 */
  if (!C.zf) goto L_12c452a7;
  /* 12c45291 call dword ptr [0x12c702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d4))), 0x12c45297u);
  /* 12c45297 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c4529a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4529e jne 0x12c452a7 */
  if (!C.zf) goto L_12c452a7;
  /* 12c452a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c452a2 jmp 0x12c45335 */
  goto L_12c45335;
L_12c452a7:;
  /* 12c452a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c452aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c452ad:;
  /* 12c452ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c452b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c452b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c452b5 je 0x12c452d5 */
  if (C.zf) goto L_12c452d5;
  /* 12c452b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c452ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c452bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c452c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c452c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c452c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c452c8 jne 0x12c452d3 */
  if (!C.zf) goto L_12c452d3;
  /* 12c452ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c452cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c452d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c452d3:;
  /* 12c452d3 jmp 0x12c452ad */
  goto L_12c452ad;
L_12c452d5:;
  /* 12c452d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c452d8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c452db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c452de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c452e1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12c452e6 push 0x12c69ae4 */
  push32((uint32_t)(0x12c69ae4u));
  /* 12c452eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c452ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c452f0 push edx */
  push32((uint32_t)(EDX));
  /* 12c452f1 call 0x12c42b50 */
  push32(0x12c452f6u); f_12c42b50();
  /* 12c452f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c452f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c452fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45300 jne 0x12c45310 */
  if (!C.zf) goto L_12c45310;
  /* 12c45302 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c45305 push eax */
  push32((uint32_t)(EAX));
  /* 12c45306 call dword ptr [0x12c70228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70228))), 0x12c4530cu);
  /* 12c4530c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4530e jmp 0x12c45335 */
  goto L_12c45335;
L_12c45310:;
  /* 12c45310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c45313 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45314 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c45317 push edx */
  push32((uint32_t)(EDX));
  /* 12c45318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4531b push eax */
  push32((uint32_t)(EAX));
  /* 12c4531c call 0x12c49430 */
  push32(0x12c45321u); f_12c49430();
  /* 12c45321 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45324 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c45327 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45328 call dword ptr [0x12c70228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70228))), 0x12c4532eu);
  /* 12c4532e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c45331 jmp 0x12c45335 */
  goto L_12c45335;
L_12c45333:;
  /* 12c45333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c45335:;
  /* 12c45335 mov esp, ebp */
  ESP = (EBP);
  /* 12c45337 pop ebp */
  EBP = (pop32());
  /* 12c45338 ret  */
  ESPCHK(0x12c45120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005340 @ 0x12c45340 (77 bytes, 25 insns) */
void f_12c45340(void) {
  FTRACE(0x12c45340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45340 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45341 mov ebp, esp */
  EBP = (ESP);
  /* 12c45343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45345 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c4534a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4534c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45350 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12c45353 push eax */
  push32((uint32_t)(EAX));
  /* 12c45354 call dword ptr [0x12c702e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e0))), 0x12c4535au);
  /* 12c4535a mov dword ptr [0x12c6fe2c], eax */
  w32((uint32_t)(0x12c6fe2c), (EAX));
  /* 12c4535f cmp dword ptr [0x12c6fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45366 jne 0x12c4536c */
  if (!C.zf) goto L_12c4536c;
  /* 12c45368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4536a jmp 0x12c4538b */
  goto L_12c4538b;
L_12c4536c:;
  /* 12c4536c call 0x12c46df0 */
  push32(0x12c45371u); f_12c46df0();
  /* 12c45371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c45373 jne 0x12c45386 */
  if (!C.zf) goto L_12c45386;
  /* 12c45375 mov ecx, dword ptr [0x12c6fe2c] */
  ECX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c4537b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4537c call dword ptr [0x12c702dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702dc))), 0x12c45382u);
  /* 12c45382 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45384 jmp 0x12c4538b */
  goto L_12c4538b;
L_12c45386:;
  /* 12c45386 mov eax, 1 */
  EAX = (0x1u);
L_12c4538b:;
  /* 12c4538b pop ebp */
  EBP = (pop32());
  /* 12c4538c ret  */
  ESPCHK(0x12c45340u, _esp0);
  ESP += 4; return;
}

/* FUN_10005390 @ 0x12c45390 (156 bytes, 48 insns) */
void f_12c45390(void) {
  FTRACE(0x12c45390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45390 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45391 mov ebp, esp */
  EBP = (ESP);
  /* 12c45393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45396 mov eax, dword ptr [0x12c6fe28] */
  EAX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c4539b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4539e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c453a5 jmp 0x12c453b0 */
  goto L_12c453b0;
L_12c453a7:;
  /* 12c453a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c453aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c453ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c453b0:;
  /* 12c453b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c453b3 cmp edx, dword ptr [0x12c6fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c453b9 jge 0x12c45406 */
  if ((C.sf==C.of)) goto L_12c45406;
  /* 12c453bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c453c0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12c453c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c453c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c453cb push ecx */
  push32((uint32_t)(ECX));
  /* 12c453cc call dword ptr [0x12c702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e8))), 0x12c453d2u);
  /* 12c453d2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c453d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c453d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c453dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c453df push eax */
  push32((uint32_t)(EAX));
  /* 12c453e0 call dword ptr [0x12c702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e8))), 0x12c453e6u);
  /* 12c453e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c453e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c453ec push edx */
  push32((uint32_t)(EDX));
  /* 12c453ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12c453ef mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c453f4 push eax */
  push32((uint32_t)(EAX));
  /* 12c453f5 call dword ptr [0x12c702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e4))), 0x12c453fbu);
  /* 12c453fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c453fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45401 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c45404 jmp 0x12c453a7 */
  goto L_12c453a7;
L_12c45406:;
  /* 12c45406 mov edx, dword ptr [0x12c6fe28] */
  EDX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c4540c push edx */
  push32((uint32_t)(EDX));
  /* 12c4540d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4540f mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c45414 push eax */
  push32((uint32_t)(EAX));
  /* 12c45415 call dword ptr [0x12c702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e4))), 0x12c4541bu);
  /* 12c4541b mov ecx, dword ptr [0x12c6fe2c] */
  ECX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c45421 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45422 call dword ptr [0x12c702dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702dc))), 0x12c45428u);
  /* 12c45428 mov esp, ebp */
  ESP = (EBP);
  /* 12c4542a pop ebp */
  EBP = (pop32());
  /* 12c4542b ret  */
  ESPCHK(0x12c45390u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12c45430 (73 bytes, 19 insns) */
void f_12c45430(void) {
  FTRACE(0x12c45430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45430 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45431 mov ebp, esp */
  EBP = (ESP);
  /* 12c45433 cmp dword ptr [0x12c6e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4543a je 0x12c4544e */
  if (C.zf) goto L_12c4544e;
  /* 12c4543c cmp dword ptr [0x12c6e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45443 jne 0x12c45477 */
  if (!C.zf) goto L_12c45477;
  /* 12c45445 cmp dword ptr [0x12c6e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4544c jne 0x12c45477 */
  if (!C.zf) goto L_12c45477;
L_12c4544e:;
  /* 12c4544e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12c45453 call 0x12c45480 */
  push32(0x12c45458u); f_12c45480();
  /* 12c45458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4545b cmp dword ptr [0x12c6e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45462 je 0x12c4546a */
  if (C.zf) goto L_12c4546a;
  /* 12c45464 call dword ptr [0x12c6e5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e5e8))), 0x12c4546au);
L_12c4546a:;
  /* 12c4546a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c4546f call 0x12c45480 */
  push32(0x12c45474u); f_12c45480();
  /* 12c45474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c45477:;
  /* 12c45477 pop ebp */
  EBP = (pop32());
  /* 12c45478 ret  */
  ESPCHK(0x12c45430u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x12c45480 (447 bytes, 131 insns) */
void f_12c45480(void) {
  FTRACE(0x12c45480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45480 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45481 mov ebp, esp */
  EBP = (ESP);
  /* 12c45483 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45489 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4548a push esi */
  push32((uint32_t)(ESI));
  /* 12c4548b push edi */
  push32((uint32_t)(EDI));
  /* 12c4548c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c45493 jmp 0x12c4549e */
  goto L_12c4549e;
L_12c45495:;
  /* 12c45495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45498 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4549b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c4549e:;
  /* 12c4549e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c454a2 jae 0x12c454b7 */
  if (!C.cf) goto L_12c454b7;
  /* 12c454a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c454a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c454aa cmp edx, dword ptr [ecx*8 + 0x12c6cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12c6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c454b1 jne 0x12c454b5 */
  if (!C.zf) goto L_12c454b5;
  /* 12c454b3 jmp 0x12c454b7 */
  goto L_12c454b7;
L_12c454b5:;
  /* 12c454b5 jmp 0x12c45495 */
  goto L_12c45495;
L_12c454b7:;
  /* 12c454b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c454ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c454bd cmp ecx, dword ptr [eax*8 + 0x12c6cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12c6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c454c4 jne 0x12c45638 */
  if (!C.zf) goto L_12c45638;
  /* 12c454ca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c454d1 je 0x12c454f4 */
  if (C.zf) goto L_12c454f4;
  /* 12c454d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c454d6 mov eax, dword ptr [edx*8 + 0x12c6cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12c6cab4)));
  /* 12c454dd push eax */
  push32((uint32_t)(EAX));
  /* 12c454de push 0 */
  push32((uint32_t)(0x0u));
  /* 12c454e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c454e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c454e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c454e6 call 0x12c41c10 */
  push32(0x12c454ebu); f_12c41c10();
  /* 12c454eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c454ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c454f1 jne 0x12c454f4 */
  if (!C.zf) goto L_12c454f4;
  /* 12c454f3 int3  */
  x86_unimpl("int3 @ 0x12c454f3");
L_12c454f4:;
  /* 12c454f4 cmp dword ptr [0x12c6e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c454fb je 0x12c4550f */
  if (C.zf) goto L_12c4550f;
  /* 12c454fd cmp dword ptr [0x12c6e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45504 jne 0x12c45548 */
  if (!C.zf) goto L_12c45548;
  /* 12c45506 cmp dword ptr [0x12c6e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4550d jne 0x12c45548 */
  if (!C.zf) goto L_12c45548;
L_12c4550f:;
  /* 12c4550f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45511 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12c45514 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45518 mov eax, dword ptr [edx*8 + 0x12c6cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12c6cab4)));
  /* 12c4551f push eax */
  push32((uint32_t)(EAX));
  /* 12c45520 call 0x12c45980 */
  push32(0x12c45525u); f_12c45980();
  /* 12c45525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45528 push eax */
  push32((uint32_t)(EAX));
  /* 12c45529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4552c mov edx, dword ptr [ecx*8 + 0x12c6cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12c6cab4)));
  /* 12c45533 push edx */
  push32((uint32_t)(EDX));
  /* 12c45534 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c45536 call dword ptr [0x12c70260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70260))), 0x12c4553cu);
  /* 12c4553c push eax */
  push32((uint32_t)(EAX));
  /* 12c4553d call dword ptr [0x12c70264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70264))), 0x12c45543u);
  /* 12c45543 jmp 0x12c45638 */
  goto L_12c45638;
L_12c45548:;
  /* 12c45548 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4554f je 0x12c45638 */
  if (C.zf) goto L_12c45638;
  /* 12c45555 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c4555a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12c45560 push eax */
  push32((uint32_t)(EAX));
  /* 12c45561 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45563 call dword ptr [0x12c7027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7027c))), 0x12c45569u);
  /* 12c45569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4556b jne 0x12c45581 */
  if (!C.zf) goto L_12c45581;
  /* 12c4556d push 0x12c6934c */
  push32((uint32_t)(0x12c6934cu));
  /* 12c45572 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12c45578 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45579 call 0x12c45b00 */
  push32(0x12c4557eu); f_12c45b00();
  /* 12c4557e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c45581:;
  /* 12c45581 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12c45587 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c4558a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4558d push eax */
  push32((uint32_t)(EAX));
  /* 12c4558e call 0x12c45980 */
  push32(0x12c45593u); f_12c45980();
  /* 12c45593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45596 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45599 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4559c jbe 0x12c455ca */
  if ((C.cf||C.zf)) goto L_12c455ca;
  /* 12c4559e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12c455a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c455a5 call 0x12c45980 */
  push32(0x12c455aau); f_12c45980();
  /* 12c455aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c455ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c455b0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12c455b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c455b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c455b9 push 0x12c69348 */
  push32((uint32_t)(0x12c69348u));
  /* 12c455be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c455c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c455c2 call 0x12c46370 */
  push32(0x12c455c7u); f_12c46370();
  /* 12c455c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c455ca:;
  /* 12c455ca push 0x12c69da0 */
  push32((uint32_t)(0x12c69da0u));
  /* 12c455cf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12c455d5 push edx */
  push32((uint32_t)(EDX));
  /* 12c455d6 call 0x12c45b00 */
  push32(0x12c455dbu); f_12c45b00();
  /* 12c455db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c455de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c455e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c455e2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12c455e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c455e9 call 0x12c45b10 */
  push32(0x12c455eeu); f_12c45b10();
  /* 12c455ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c455f1 push 0x12c692c0 */
  push32((uint32_t)(0x12c692c0u));
  /* 12c455f6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12c455fc push edx */
  push32((uint32_t)(EDX));
  /* 12c455fd call 0x12c45b10 */
  push32(0x12c45602u); f_12c45b10();
  /* 12c45602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45608 mov ecx, dword ptr [eax*8 + 0x12c6cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12c6cab4)));
  /* 12c4560f push ecx */
  push32((uint32_t)(ECX));
  /* 12c45610 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12c45616 push edx */
  push32((uint32_t)(EDX));
  /* 12c45617 call 0x12c45b10 */
  push32(0x12c4561cu); f_12c45b10();
  /* 12c4561c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4561f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12c45624 push 0x12c69d78 */
  push32((uint32_t)(0x12c69d78u));
  /* 12c45629 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12c4562f push eax */
  push32((uint32_t)(EAX));
  /* 12c45630 call 0x12c462b0 */
  push32(0x12c45635u); f_12c462b0();
  /* 12c45635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c45638:;
  /* 12c45638 pop edi */
  EDI = (pop32());
  /* 12c45639 pop esi */
  ESI = (pop32());
  /* 12c4563a pop ebx */
  EBX = (pop32());
  /* 12c4563b mov esp, ebp */
  ESP = (EBP);
  /* 12c4563d pop ebp */
  EBP = (pop32());
  /* 12c4563e ret  */
  ESPCHK(0x12c45480u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12c45640 (80 bytes, 27 insns) */
void f_12c45640(void) {
  FTRACE(0x12c45640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45640 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45641 mov ebp, esp */
  EBP = (ESP);
  /* 12c45643 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4564b jmp 0x12c45656 */
  goto L_12c45656;
L_12c4564d:;
  /* 12c4564d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45653 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c45656:;
  /* 12c45656 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4565a jae 0x12c4566f */
  if (!C.cf) goto L_12c4566f;
  /* 12c4565c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4565f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45662 cmp edx, dword ptr [ecx*8 + 0x12c6cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12c6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45669 jne 0x12c4566d */
  if (!C.zf) goto L_12c4566d;
  /* 12c4566b jmp 0x12c4566f */
  goto L_12c4566f;
L_12c4566d:;
  /* 12c4566d jmp 0x12c4564d */
  goto L_12c4564d;
L_12c4566f:;
  /* 12c4566f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45675 cmp ecx, dword ptr [eax*8 + 0x12c6cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12c6cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4567c jne 0x12c4568a */
  if (!C.zf) goto L_12c4568a;
  /* 12c4567e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45681 mov eax, dword ptr [edx*8 + 0x12c6cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12c6cab4)));
  /* 12c45688 jmp 0x12c4568c */
  goto L_12c4568c;
L_12c4568a:;
  /* 12c4568a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4568c:;
  /* 12c4568c mov esp, ebp */
  ESP = (EBP);
  /* 12c4568e pop ebp */
  EBP = (pop32());
  /* 12c4568f ret  */
  ESPCHK(0x12c45640u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12c45690 (66 bytes, 28 insns) */
void f_12c45690(void) {
  FTRACE(0x12c45690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45690 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45691 mov ebp, esp */
  EBP = (ESP);
  /* 12c45693 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45697 jne 0x12c456b7 */
  if (!C.zf) goto L_12c456b7;
  /* 12c45699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4569d jge 0x12c456b7 */
  if ((C.sf==C.of)) goto L_12c456b7;
  /* 12c4569f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c456a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c456a4 push eax */
  push32((uint32_t)(EAX));
  /* 12c456a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c456a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c456a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c456ac push edx */
  push32((uint32_t)(EDX));
  /* 12c456ad call 0x12c456e0 */
  push32(0x12c456b2u); f_12c456e0();
  /* 12c456b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c456b5 jmp 0x12c456cd */
  goto L_12c456cd;
L_12c456b7:;
  /* 12c456b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c456b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c456bc push eax */
  push32((uint32_t)(EAX));
  /* 12c456bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c456c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c456c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c456c4 push edx */
  push32((uint32_t)(EDX));
  /* 12c456c5 call 0x12c456e0 */
  push32(0x12c456cau); f_12c456e0();
  /* 12c456ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c456cd:;
  /* 12c456cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c456d0 pop ebp */
  EBP = (pop32());
  /* 12c456d1 ret  */
  ESPCHK(0x12c45690u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12c456e0 (194 bytes, 71 insns) */
void f_12c456e0(void) {
  FTRACE(0x12c456e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c456e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c456e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c456e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c456e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c456e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c456ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c456f0 je 0x12c45709 */
  if (C.zf) goto L_12c45709;
  /* 12c456f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c456f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12c456f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c456fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c456fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c45701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45704 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c45706 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c45709:;
  /* 12c45709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4570c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c4570f:;
  /* 12c4570f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45712 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c45714 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c45717 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c4571a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4571d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4571f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c45722 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c45725 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45729 jbe 0x12c45741 */
  if ((C.cf||C.zf)) goto L_12c45741;
  /* 12c4572b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4572e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45734 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c45736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45739 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4573c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4573f jmp 0x12c45755 */
  goto L_12c45755;
L_12c45741:;
  /* 12c45741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c45744 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4574a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c4574c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4574f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45752 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c45755:;
  /* 12c45755 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45759 ja 0x12c4570f */
  if ((!C.cf&&!C.zf)) goto L_12c4570f;
  /* 12c4575b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4575e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c45761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45764 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45767 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4576a:;
  /* 12c4576a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4576d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4576f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12c45772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45775 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45778 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4577a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c4577c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4577f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12c45782 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c45784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45787 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4578a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4578d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45793 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c45796 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45799 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4579c jb 0x12c4576a */
  if (C.cf) goto L_12c4576a;
  /* 12c4579e mov esp, ebp */
  ESP = (EBP);
  /* 12c457a0 pop ebp */
  EBP = (pop32());
  /* 12c457a1 ret  */
  ESPCHK(0x12c456e0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12c457b0 (63 bytes, 24 insns) */
void f_12c457b0(void) {
  FTRACE(0x12c457b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c457b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c457b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c457b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c457b4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c457b8 jne 0x12c457c9 */
  if (!C.zf) goto L_12c457c9;
  /* 12c457ba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c457be jge 0x12c457c9 */
  if ((C.sf==C.of)) goto L_12c457c9;
  /* 12c457c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c457c7 jmp 0x12c457d0 */
  goto L_12c457d0;
L_12c457c9:;
  /* 12c457c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c457d0:;
  /* 12c457d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c457d3 push eax */
  push32((uint32_t)(EAX));
  /* 12c457d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c457d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c457d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c457db push edx */
  push32((uint32_t)(EDX));
  /* 12c457dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c457df push eax */
  push32((uint32_t)(EAX));
  /* 12c457e0 call 0x12c456e0 */
  push32(0x12c457e5u); f_12c456e0();
  /* 12c457e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c457e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c457eb mov esp, ebp */
  ESP = (EBP);
  /* 12c457ed pop ebp */
  EBP = (pop32());
  /* 12c457ee ret  */
  ESPCHK(0x12c457b0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12c457f0 (30 bytes, 14 insns) */
void f_12c457f0(void) {
  FTRACE(0x12c457f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c457f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c457f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c457f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c457f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c457f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c457f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c457fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c457fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45800 push edx */
  push32((uint32_t)(EDX));
  /* 12c45801 call 0x12c456e0 */
  push32(0x12c45806u); f_12c456e0();
  /* 12c45806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4580c pop ebp */
  EBP = (pop32());
  /* 12c4580d ret  */
  ESPCHK(0x12c457f0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12c45810 (72 bytes, 28 insns) */
void f_12c45810(void) {
  FTRACE(0x12c45810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45810 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45811 mov ebp, esp */
  EBP = (ESP);
  /* 12c45813 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45814 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45818 jne 0x12c45831 */
  if (!C.zf) goto L_12c45831;
  /* 12c4581a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4581e jg 0x12c45831 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c45831;
  /* 12c45820 jl 0x12c45828 */
  if ((C.sf!=C.of)) goto L_12c45828;
  /* 12c45822 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45826 jae 0x12c45831 */
  if (!C.cf) goto L_12c45831;
L_12c45828:;
  /* 12c45828 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c4582f jmp 0x12c45838 */
  goto L_12c45838;
L_12c45831:;
  /* 12c45831 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c45838:;
  /* 12c45838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4583b push eax */
  push32((uint32_t)(EAX));
  /* 12c4583c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4583f push ecx */
  push32((uint32_t)(ECX));
  /* 12c45840 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45843 push edx */
  push32((uint32_t)(EDX));
  /* 12c45844 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45847 push eax */
  push32((uint32_t)(EAX));
  /* 12c45848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4584b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4584c call 0x12c45860 */
  push32(0x12c45851u); f_12c45860();
  /* 12c45851 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45854 mov esp, ebp */
  ESP = (EBP);
  /* 12c45856 pop ebp */
  EBP = (pop32());
  /* 12c45857 ret  */
  ESPCHK(0x12c45810u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12c45860 (242 bytes, 91 insns) */
void f_12c45860(void) {
  FTRACE(0x12c45860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45860 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45861 mov ebp, esp */
  EBP = (ESP);
  /* 12c45863 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45866 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4586c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45870 je 0x12c45894 */
  if (C.zf) goto L_12c45894;
  /* 12c45872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45875 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12c45878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4587b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4587e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c45881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45884 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c45886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45889 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4588c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4588e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c45891 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c45894:;
  /* 12c45894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45897 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c4589a:;
  /* 12c4589a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4589d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4589f push ecx */
  push32((uint32_t)(ECX));
  /* 12c458a0 push eax */
  push32((uint32_t)(EAX));
  /* 12c458a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c458a4 push edx */
  push32((uint32_t)(EDX));
  /* 12c458a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c458a8 push eax */
  push32((uint32_t)(EAX));
  /* 12c458a9 call 0x12c497e0 */
  push32(0x12c458aeu); f_12c497e0();
  /* 12c458ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c458b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c458b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c458b6 push edx */
  push32((uint32_t)(EDX));
  /* 12c458b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c458b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c458bb push eax */
  push32((uint32_t)(EAX));
  /* 12c458bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c458bf push ecx */
  push32((uint32_t)(ECX));
  /* 12c458c0 call 0x12c49770 */
  push32(0x12c458c5u); f_12c49770();
  /* 12c458c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c458c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c458cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c458cf jbe 0x12c458e7 */
  if ((C.cf||C.zf)) goto L_12c458e7;
  /* 12c458d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c458d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c458d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c458da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c458dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c458df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c458e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c458e5 jmp 0x12c458fb */
  goto L_12c458fb;
L_12c458e7:;
  /* 12c458e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c458ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c458ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c458f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c458f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c458f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c458f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c458fb:;
  /* 12c458fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c458ff ja 0x12c4589a */
  if ((!C.cf&&!C.zf)) goto L_12c4589a;
  /* 12c45901 jb 0x12c45909 */
  if (C.cf) goto L_12c45909;
  /* 12c45903 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45907 ja 0x12c4589a */
  if ((!C.cf&&!C.zf)) goto L_12c4589a;
L_12c45909:;
  /* 12c45909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4590c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c4590f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45912 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c45918:;
  /* 12c45918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4591b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4591d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12c45920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45923 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45926 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c45928 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c4592a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4592d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12c45930 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c45932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45935 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45938 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4593b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4593e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45941 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c45944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45947 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4594a jb 0x12c45918 */
  if (C.cf) goto L_12c45918;
  /* 12c4594c mov esp, ebp */
  ESP = (EBP);
  /* 12c4594e pop ebp */
  EBP = (pop32());
  /* 12c4594f ret 0x14 */
  ESPCHK(0x12c45860u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12c45960 (31 bytes, 15 insns) */
void f_12c45960(void) {
  FTRACE(0x12c45960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45961 mov ebp, esp */
  EBP = (ESP);
  /* 12c45963 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45965 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c45968 push eax */
  push32((uint32_t)(EAX));
  /* 12c45969 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4596c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4596d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45970 push edx */
  push32((uint32_t)(EDX));
  /* 12c45971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45974 push eax */
  push32((uint32_t)(EAX));
  /* 12c45975 call 0x12c45860 */
  push32(0x12c4597au); f_12c45860();
  /* 12c4597a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4597d pop ebp */
  EBP = (pop32());
  /* 12c4597e ret  */
  ESPCHK(0x12c45960u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12c45980 (123 bytes, 44 insns) */
void f_12c45980(void) {
  FTRACE(0x12c45980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45980 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c45984 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c4598a je 0x12c459a0 */
  if (C.zf) goto L_12c459a0;
L_12c4598c:;
  /* 12c4598c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c4598e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c4598f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c45991 je 0x12c459d3 */
  if (C.zf) goto L_12c459d3;
  /* 12c45993 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c45999 jne 0x12c4598c */
  if (!C.zf) goto L_12c4598c;
  /* 12c4599b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c459a0:;
  /* 12c459a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c459a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c459a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c459a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c459ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c459ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c459b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c459b6 je 0x12c459a0 */
  if (C.zf) goto L_12c459a0;
  /* 12c459b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c459bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c459bd je 0x12c459f1 */
  if (C.zf) goto L_12c459f1;
  /* 12c459bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c459c1 je 0x12c459e7 */
  if (C.zf) goto L_12c459e7;
  /* 12c459c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c459c8 je 0x12c459dd */
  if (C.zf) goto L_12c459dd;
  /* 12c459ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c459cf je 0x12c459d3 */
  if (C.zf) goto L_12c459d3;
  /* 12c459d1 jmp 0x12c459a0 */
  goto L_12c459a0;
L_12c459d3:;
  /* 12c459d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12c459d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c459da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c459dc ret  */
  ESPCHK(0x12c45980u, _esp0);
  ESP += 4; return;
L_12c459dd:;
  /* 12c459dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12c459e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c459e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c459e6 ret  */
  ESPCHK(0x12c45980u, _esp0);
  ESP += 4; return;
L_12c459e7:;
  /* 12c459e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12c459ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c459ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c459f0 ret  */
  ESPCHK(0x12c45980u, _esp0);
  ESP += 4; return;
L_12c459f1:;
  /* 12c459f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12c459f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c459f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c459fa ret  */
  ESPCHK(0x12c45980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x12c45a00 (249 bytes, 93 insns) */
void f_12c45a00(void) {
  FTRACE(0x12c45a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45a01 mov ebp, esp */
  EBP = (ESP);
  /* 12c45a03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45a06 push ebx */
  push32((uint32_t)(EBX));
  /* 12c45a07 push esi */
  push32((uint32_t)(ESI));
  /* 12c45a08 push edi */
  push32((uint32_t)(EDI));
  /* 12c45a09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c45a0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c45a0f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12c45a12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12c45a15:;
  /* 12c45a15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45a19 jne 0x12c45a39 */
  if (!C.zf) goto L_12c45a39;
  /* 12c45a1b push 0x12c69dd8 */
  push32((uint32_t)(0x12c69dd8u));
  /* 12c45a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45a22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12c45a24 push 0x12c69dcc */
  push32((uint32_t)(0x12c69dccu));
  /* 12c45a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c45a2b call 0x12c41c10 */
  push32(0x12c45a30u); f_12c41c10();
  /* 12c45a30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45a33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45a36 jne 0x12c45a39 */
  if (!C.zf) goto L_12c45a39;
  /* 12c45a38 int3  */
  x86_unimpl("int3 @ 0x12c45a38");
L_12c45a39:;
  /* 12c45a39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c45a3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c45a3d jne 0x12c45a15 */
  if (!C.zf) goto L_12c45a15;
L_12c45a3f:;
  /* 12c45a3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45a43 jne 0x12c45a63 */
  if (!C.zf) goto L_12c45a63;
  /* 12c45a45 push 0x12c69dbc */
  push32((uint32_t)(0x12c69dbcu));
  /* 12c45a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45a4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12c45a4e push 0x12c69dcc */
  push32((uint32_t)(0x12c69dccu));
  /* 12c45a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c45a55 call 0x12c41c10 */
  push32(0x12c45a5au); f_12c41c10();
  /* 12c45a5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45a5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45a60 jne 0x12c45a63 */
  if (!C.zf) goto L_12c45a63;
  /* 12c45a62 int3  */
  x86_unimpl("int3 @ 0x12c45a62");
L_12c45a63:;
  /* 12c45a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c45a67 jne 0x12c45a3f */
  if (!C.zf) goto L_12c45a3f;
  /* 12c45a69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45a6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12c45a73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45a79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c45a7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45a82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c45a84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45a87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45a8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c45a8d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c45a90 push edx */
  push32((uint32_t)(EDX));
  /* 12c45a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45a94 push eax */
  push32((uint32_t)(EAX));
  /* 12c45a95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45a98 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45a99 call 0x12c49ae0 */
  push32(0x12c45a9eu); f_12c49ae0();
  /* 12c45a9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45aa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c45aa4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45aa7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c45aaa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45aad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ab0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c45ab3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ab6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45aba jl 0x12c45ade */
  if ((C.sf!=C.of)) goto L_12c45ade;
  /* 12c45abc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45abf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c45ac1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c45ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c45ac6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c45acc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12c45acf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ad2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c45ad4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45ad7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ada mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c45adc jmp 0x12c45aef */
  goto L_12c45aef;
L_12c45ade:;
  /* 12c45ade mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ae1 push eax */
  push32((uint32_t)(EAX));
  /* 12c45ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45ae4 call 0x12c49860 */
  push32(0x12c45ae9u); f_12c49860();
  /* 12c45ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45aec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12c45aef:;
  /* 12c45aef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c45af2 pop edi */
  EDI = (pop32());
  /* 12c45af3 pop esi */
  ESI = (pop32());
  /* 12c45af4 pop ebx */
  EBX = (pop32());
  /* 12c45af5 mov esp, ebp */
  ESP = (EBP);
  /* 12c45af7 pop ebp */
  EBP = (pop32());
  /* 12c45af8 ret  */
  ESPCHK(0x12c45a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x12c45b00 (7 bytes, 3 insns) */
void f_12c45b00(void) {
  FTRACE(0x12c45b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45b00 push edi */
  push32((uint32_t)(EDI));
  /* 12c45b01 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c45b05 jmp 0x12c45b71 */
  jmp_ind(0x12c45b71u); return;
}

/* FUN_10005b10 @ 0x12c45b10 (224 bytes, 84 insns) */
void f_12c45b10(void) {
  FTRACE(0x12c45b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45b10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c45b14 push edi */
  push32((uint32_t)(EDI));
  /* 12c45b15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c45b1b je 0x12c45b2c */
  if (C.zf) goto L_12c45b2c;
L_12c45b1d:;
  /* 12c45b1d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c45b1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c45b20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c45b22 je 0x12c45b5f */
  if (C.zf) goto L_12c45b5f;
  /* 12c45b24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c45b2a jne 0x12c45b1d */
  if (!C.zf) goto L_12c45b1d;
L_12c45b2c:;
  /* 12c45b2c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c45b2e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c45b33 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45b35 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c45b38 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45b3a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45b3d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c45b42 je 0x12c45b2c */
  if (C.zf) goto L_12c45b2c;
  /* 12c45b44 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c45b47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c45b49 je 0x12c45b6e */
  if (C.zf) goto L_12c45b6e;
  /* 12c45b4b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c45b4d je 0x12c45b69 */
  if (C.zf) goto L_12c45b69;
  /* 12c45b4f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c45b54 je 0x12c45b64 */
  if (C.zf) goto L_12c45b64;
  /* 12c45b56 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c45b5b je 0x12c45b5f */
  if (C.zf) goto L_12c45b5f;
  /* 12c45b5d jmp 0x12c45b2c */
  goto L_12c45b2c;
L_12c45b5f:;
  /* 12c45b5f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12c45b62 jmp 0x12c45b71 */
  goto L_12c45b71;
L_12c45b64:;
  /* 12c45b64 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12c45b67 jmp 0x12c45b71 */
  goto L_12c45b71;
L_12c45b69:;
  /* 12c45b69 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12c45b6c jmp 0x12c45b71 */
  goto L_12c45b71;
L_12c45b6e:;
  /* 12c45b6e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12c45b71:;
  /* 12c45b71 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c45b75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c45b7b je 0x12c45b96 */
  if (C.zf) goto L_12c45b96;
L_12c45b7d:;
  /* 12c45b7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c45b7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c45b80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c45b82 je 0x12c45be8 */
  if (C.zf) goto L_12c45be8;
  /* 12c45b84 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c45b86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c45b87 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c45b8d jne 0x12c45b7d */
  if (!C.zf) goto L_12c45b7d;
  /* 12c45b8f jmp 0x12c45b96 */
  goto L_12c45b96;
L_12c45b91:;
  /* 12c45b91 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c45b93 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c45b96:;
  /* 12c45b96 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c45b9b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c45b9d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45b9f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c45ba2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45ba4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c45ba6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45ba9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c45bae je 0x12c45b91 */
  if (C.zf) goto L_12c45b91;
  /* 12c45bb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c45bb2 je 0x12c45be8 */
  if (C.zf) goto L_12c45be8;
  /* 12c45bb4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c45bb6 je 0x12c45bdf */
  if (C.zf) goto L_12c45bdf;
  /* 12c45bb8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c45bbe je 0x12c45bd2 */
  if (C.zf) goto L_12c45bd2;
  /* 12c45bc0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c45bc6 je 0x12c45bca */
  if (C.zf) goto L_12c45bca;
  /* 12c45bc8 jmp 0x12c45b91 */
  goto L_12c45b91;
L_12c45bca:;
  /* 12c45bca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c45bcc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c45bd0 pop edi */
  EDI = (pop32());
  /* 12c45bd1 ret  */
  ESPCHK(0x12c45b10u, _esp0);
  ESP += 4; return;
L_12c45bd2:;
  /* 12c45bd2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12c45bd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c45bd9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12c45bdd pop edi */
  EDI = (pop32());
  /* 12c45bde ret  */
  ESPCHK(0x12c45b10u, _esp0);
  ESP += 4; return;
L_12c45bdf:;
  /* 12c45bdf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12c45be2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c45be6 pop edi */
  EDI = (pop32());
  /* 12c45be7 ret  */
  ESPCHK(0x12c45b10u, _esp0);
  ESP += 4; return;
L_12c45be8:;
  /* 12c45be8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c45bea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c45bee pop edi */
  EDI = (pop32());
  /* 12c45bef ret  */
  ESPCHK(0x12c45b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x12c45bf0 (243 bytes, 91 insns) */
void f_12c45bf0(void) {
  FTRACE(0x12c45bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c45bf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c45bf7 push esi */
  push32((uint32_t)(ESI));
  /* 12c45bf8 push edi */
  push32((uint32_t)(EDI));
  /* 12c45bf9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c45bfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c45bff:;
  /* 12c45bff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45c03 jne 0x12c45c23 */
  if (!C.zf) goto L_12c45c23;
  /* 12c45c05 push 0x12c69dd8 */
  push32((uint32_t)(0x12c69dd8u));
  /* 12c45c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45c0c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12c45c0e push 0x12c69de8 */
  push32((uint32_t)(0x12c69de8u));
  /* 12c45c13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c45c15 call 0x12c41c10 */
  push32(0x12c45c1au); f_12c41c10();
  /* 12c45c1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45c1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45c20 jne 0x12c45c23 */
  if (!C.zf) goto L_12c45c23;
  /* 12c45c22 int3  */
  x86_unimpl("int3 @ 0x12c45c22");
L_12c45c23:;
  /* 12c45c23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c45c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c45c27 jne 0x12c45bff */
  if (!C.zf) goto L_12c45bff;
L_12c45c29:;
  /* 12c45c29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45c2d jne 0x12c45c4d */
  if (!C.zf) goto L_12c45c4d;
  /* 12c45c2f push 0x12c69dbc */
  push32((uint32_t)(0x12c69dbcu));
  /* 12c45c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45c36 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12c45c38 push 0x12c69de8 */
  push32((uint32_t)(0x12c69de8u));
  /* 12c45c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c45c3f call 0x12c41c10 */
  push32(0x12c45c44u); f_12c41c10();
  /* 12c45c44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45c47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45c4a jne 0x12c45c4d */
  if (!C.zf) goto L_12c45c4d;
  /* 12c45c4c int3  */
  x86_unimpl("int3 @ 0x12c45c4c");
L_12c45c4d:;
  /* 12c45c4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c45c4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c45c51 jne 0x12c45c29 */
  if (!C.zf) goto L_12c45c29;
  /* 12c45c53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c56 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12c45c5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45c63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c45c66 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c45c6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45c74 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c45c77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c45c7a push ecx */
  push32((uint32_t)(ECX));
  /* 12c45c7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c45c7e push edx */
  push32((uint32_t)(EDX));
  /* 12c45c7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c82 push eax */
  push32((uint32_t)(EAX));
  /* 12c45c83 call 0x12c49ae0 */
  push32(0x12c45c88u); f_12c49ae0();
  /* 12c45c88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45c8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c45c8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c45c94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45c97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45c9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c45c9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ca0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45ca4 jl 0x12c45cc8 */
  if ((C.sf!=C.of)) goto L_12c45cc8;
  /* 12c45ca6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ca9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c45cab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c45cae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c45cb0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c45cb6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c45cb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45cbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c45cbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45cc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45cc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c45cc6 jmp 0x12c45cd9 */
  goto L_12c45cd9;
L_12c45cc8:;
  /* 12c45cc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c45ccb push edx */
  push32((uint32_t)(EDX));
  /* 12c45ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c45cce call 0x12c49860 */
  push32(0x12c45cd3u); f_12c49860();
  /* 12c45cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45cd6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12c45cd9:;
  /* 12c45cd9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c45cdc pop edi */
  EDI = (pop32());
  /* 12c45cdd pop esi */
  ESI = (pop32());
  /* 12c45cde pop ebx */
  EBX = (pop32());
  /* 12c45cdf mov esp, ebp */
  ESP = (EBP);
  /* 12c45ce1 pop ebp */
  EBP = (pop32());
  /* 12c45ce2 ret  */
  ESPCHK(0x12c45bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cf0 @ 0x12c45cf0 (47 bytes, 17 insns) */
void f_12c45cf0(void) {
  FTRACE(0x12c45cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c45cf1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45cf6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12c45cfa jb 0x12c45d10 */
  if (C.cf) goto L_12c45d10;
L_12c45cfc:;
  /* 12c45cfc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45d02 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45d07 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12c45d09 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d0e jae 0x12c45cfc */
  if (!C.cf) goto L_12c45cfc;
L_12c45d10:;
  /* 12c45d10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45d12 mov eax, esp */
  EAX = (ESP);
  /* 12c45d14 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12c45d16 mov esp, ecx */
  ESP = (ECX);
  /* 12c45d18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c45d1a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c45d1d push eax */
  push32((uint32_t)(EAX));
  /* 12c45d1e ret  */
  ESPCHK(0x12c45cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d20 @ 0x12c45d20 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12c45d20(void) {
  FTRACE(0x12c45d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45d21 mov ebp, esp */
  EBP = (ESP);
  /* 12c45d23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45d26 push esi */
  push32((uint32_t)(ESI));
  /* 12c45d27 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d2b je 0x12c45d33 */
  if (C.zf) goto L_12c45d33;
  /* 12c45d2d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d31 jne 0x12c45d38 */
  if (!C.zf) goto L_12c45d38;
L_12c45d33:;
  /* 12c45d33 jmp 0x12c45f08 */
  goto L_12c45f08;
L_12c45d38:;
  /* 12c45d38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d3c je 0x12c45d54 */
  if (C.zf) goto L_12c45d54;
  /* 12c45d3e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d42 je 0x12c45d54 */
  if (C.zf) goto L_12c45d54;
  /* 12c45d44 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d48 je 0x12c45d54 */
  if (C.zf) goto L_12c45d54;
  /* 12c45d4a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d4e jne 0x12c45e31 */
  if (!C.zf) goto L_12c45e31;
L_12c45d54:;
  /* 12c45d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45d56 call 0x12c46550 */
  push32(0x12c45d5bu); f_12c46550();
  /* 12c45d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45d5e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d62 je 0x12c45d6a */
  if (C.zf) goto L_12c45d6a;
  /* 12c45d64 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d68 jne 0x12c45daf */
  if (!C.zf) goto L_12c45daf;
L_12c45d6a:;
  /* 12c45d6a cmp dword ptr [0x12c6e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d71 jne 0x12c45daf */
  if (!C.zf) goto L_12c45daf;
  /* 12c45d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45d75 push 0x12c45f50 */
  push32((uint32_t)(0x12c45f50u));
  /* 12c45d7a call dword ptr [0x12c702ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702ec))), 0x12c45d80u);
  /* 12c45d80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45d83 jne 0x12c45d91 */
  if (!C.zf) goto L_12c45d91;
  /* 12c45d85 mov dword ptr [0x12c6e5fc], 1 */
  w32((uint32_t)(0x12c6e5fc), (0x1u));
  /* 12c45d8f jmp 0x12c45daf */
  goto L_12c45daf;
L_12c45d91:;
  /* 12c45d91 call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c45d97u);
  /* 12c45d97 mov esi, eax */
  ESI = (EAX);
  /* 12c45d99 call 0x12c4aa30 */
  push32(0x12c45d9eu); f_12c4aa30();
  /* 12c45d9e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12c45da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45da2 call 0x12c465f0 */
  push32(0x12c45da7u); f_12c465f0();
  /* 12c45da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45daa jmp 0x12c45f08 */
  goto L_12c45f08;
L_12c45daf:;
  /* 12c45daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45db2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c45db5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c45db8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45dbb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c45dbe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45dc2 ja 0x12c45e22 */
  if ((!C.cf&&!C.zf)) goto L_12c45e22;
  /* 12c45dc4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c45dc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c45dc9 mov dl, byte ptr [eax + 0x12c45f2f] */
  DL = (r8((uint32_t)(EAX + 0x12c45f2f)));
  /* 12c45dcf jmp dword ptr [edx*4 + 0x12c45f1b] */
  switch (EDX) {
    case 0: goto L_12c45dd6;
    case 1: goto L_12c45e10;
    case 2: goto L_12c45dea;
    case 3: goto L_12c45dfd;
    case 4: goto L_12c45e22;
    default: x86_unimpl("switch@0x12c45dcf out of table"); return;
  }
L_12c45dd6:;
  /* 12c45dd6 mov ecx, dword ptr [0x12c6e5ec] */
  ECX = (r32((uint32_t)(0x12c6e5ec)));
  /* 12c45ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c45ddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45de2 mov dword ptr [0x12c6e5ec], edx */
  w32((uint32_t)(0x12c6e5ec), (EDX));
  /* 12c45de8 jmp 0x12c45e22 */
  goto L_12c45e22;
L_12c45dea:;
  /* 12c45dea mov eax, dword ptr [0x12c6e5f0] */
  EAX = (r32((uint32_t)(0x12c6e5f0)));
  /* 12c45def mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c45df2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45df5 mov dword ptr [0x12c6e5f0], ecx */
  w32((uint32_t)(0x12c6e5f0), (ECX));
  /* 12c45dfb jmp 0x12c45e22 */
  goto L_12c45e22;
L_12c45dfd:;
  /* 12c45dfd mov edx, dword ptr [0x12c6e5f4] */
  EDX = (r32((uint32_t)(0x12c6e5f4)));
  /* 12c45e03 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c45e06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45e09 mov dword ptr [0x12c6e5f4], eax */
  w32((uint32_t)(0x12c6e5f4), (EAX));
  /* 12c45e0e jmp 0x12c45e22 */
  goto L_12c45e22;
L_12c45e10:;
  /* 12c45e10 mov ecx, dword ptr [0x12c6e5f8] */
  ECX = (r32((uint32_t)(0x12c6e5f8)));
  /* 12c45e16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c45e19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45e1c mov dword ptr [0x12c6e5f8], edx */
  w32((uint32_t)(0x12c6e5f8), (EDX));
L_12c45e22:;
  /* 12c45e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45e24 call 0x12c465f0 */
  push32(0x12c45e29u); f_12c465f0();
  /* 12c45e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45e2c jmp 0x12c45f03 */
  goto L_12c45f03;
L_12c45e31:;
  /* 12c45e31 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45e35 je 0x12c45e48 */
  if (C.zf) goto L_12c45e48;
  /* 12c45e37 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45e3b je 0x12c45e48 */
  if (C.zf) goto L_12c45e48;
  /* 12c45e3d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45e41 je 0x12c45e48 */
  if (C.zf) goto L_12c45e48;
  /* 12c45e43 jmp 0x12c45f08 */
  goto L_12c45f08;
L_12c45e48:;
  /* 12c45e48 call 0x12c42590 */
  push32(0x12c45e4du); f_12c42590();
  /* 12c45e4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c45e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45e53 cmp dword ptr [eax + 0x50], 0x12c6cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12c6cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45e5a jne 0x12c45ea5 */
  if (!C.zf) goto L_12c45ea5;
  /* 12c45e5c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12c45e61 push 0x12c69df4 */
  push32((uint32_t)(0x12c69df4u));
  /* 12c45e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c45e68 mov ecx, dword ptr [0x12c6cc80] */
  ECX = (r32((uint32_t)(0x12c6cc80)));
  /* 12c45e6e push ecx */
  push32((uint32_t)(ECX));
  /* 12c45e6f call 0x12c42b50 */
  push32(0x12c45e74u); f_12c42b50();
  /* 12c45e74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45e77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45e7a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12c45e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45e80 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45e84 je 0x12c45ea3 */
  if (C.zf) goto L_12c45ea3;
  /* 12c45e86 mov ecx, dword ptr [0x12c6cc80] */
  ECX = (r32((uint32_t)(0x12c6cc80)));
  /* 12c45e8c push ecx */
  push32((uint32_t)(ECX));
  /* 12c45e8d push 0x12c6cc00 */
  push32((uint32_t)(0x12c6cc00u));
  /* 12c45e92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45e95 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12c45e98 push eax */
  push32((uint32_t)(EAX));
  /* 12c45e99 call 0x12c49430 */
  push32(0x12c45e9eu); f_12c49430();
  /* 12c45e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45ea1 jmp 0x12c45ea5 */
  goto L_12c45ea5;
L_12c45ea3:;
  /* 12c45ea3 jmp 0x12c45f08 */
  goto L_12c45f08;
L_12c45ea5:;
  /* 12c45ea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45ea8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c45eab push edx */
  push32((uint32_t)(EDX));
  /* 12c45eac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c45eaf push eax */
  push32((uint32_t)(EAX));
  /* 12c45eb0 call 0x12c46230 */
  push32(0x12c45eb5u); f_12c46230();
  /* 12c45eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45eb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c45ebb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45ebf jne 0x12c45ec3 */
  if (!C.zf) goto L_12c45ec3;
  /* 12c45ec1 jmp 0x12c45f08 */
  goto L_12c45f08;
L_12c45ec3:;
  /* 12c45ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45ec6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c45ec9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c45ecc:;
  /* 12c45ecc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45ecf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c45ed2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45ed5 jne 0x12c45f03 */
  if (!C.zf) goto L_12c45f03;
  /* 12c45ed7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45eda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c45edd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c45ee0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45ee3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45ee6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c45ee9 mov edx, dword ptr [0x12c6cc84] */
  EDX = (r32((uint32_t)(0x12c6cc84)));
  /* 12c45eef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c45ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45ef5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12c45ef8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45efa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45efd jb 0x12c45f01 */
  if (C.cf) goto L_12c45f01;
  /* 12c45eff jmp 0x12c45f03 */
  goto L_12c45f03;
L_12c45f01:;
  /* 12c45f01 jmp 0x12c45ecc */
  goto L_12c45ecc;
L_12c45f03:;
  /* 12c45f03 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c45f06 jmp 0x12c45f16 */
  goto L_12c45f16;
L_12c45f08:;
  /* 12c45f08 call 0x12c4aa20 */
  push32(0x12c45f0du); f_12c4aa20();
  /* 12c45f0d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12c45f13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c45f16:;
  /* 12c45f16 pop esi */
  ESI = (pop32());
  /* 12c45f17 mov esp, ebp */
  ESP = (EBP);
  /* 12c45f19 pop ebp */
  EBP = (pop32());
  /* 12c45f1a ret  */
  ESPCHK(0x12c45d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x12c45f50 (146 bytes, 45 insns) */
void f_12c45f50(void) {
  FTRACE(0x12c45f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45f51 mov ebp, esp */
  EBP = (ESP);
  /* 12c45f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45f58 call 0x12c46550 */
  push32(0x12c45f5du); f_12c46550();
  /* 12c45f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45f60 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45f64 jne 0x12c45f7e */
  if (!C.zf) goto L_12c45f7e;
  /* 12c45f66 mov dword ptr [ebp - 8], 0x12c6e5ec */
  w32((uint32_t)(EBP + -0x8), (0x12c6e5ecu));
  /* 12c45f6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45f70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c45f72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c45f75 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c45f7c jmp 0x12c45f94 */
  goto L_12c45f94;
L_12c45f7e:;
  /* 12c45f7e mov dword ptr [ebp - 8], 0x12c6e5f0 */
  w32((uint32_t)(EBP + -0x8), (0x12c6e5f0u));
  /* 12c45f85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45f88 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c45f8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c45f8d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12c45f94:;
  /* 12c45f94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45f98 jne 0x12c45fa8 */
  if (!C.zf) goto L_12c45fa8;
  /* 12c45f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45f9c call 0x12c465f0 */
  push32(0x12c45fa1u); f_12c465f0();
  /* 12c45fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c45fa6 jmp 0x12c45fdc */
  goto L_12c45fdc;
L_12c45fa8:;
  /* 12c45fa8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c45fac je 0x12c45fcd */
  if (C.zf) goto L_12c45fcd;
  /* 12c45fae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c45fb1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12c45fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45fb9 call 0x12c465f0 */
  push32(0x12c45fbeu); f_12c465f0();
  /* 12c45fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45fc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c45fc4 push edx */
  push32((uint32_t)(EDX));
  /* 12c45fc5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12c45fc8u);
  /* 12c45fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c45fcb jmp 0x12c45fd7 */
  goto L_12c45fd7;
L_12c45fcd:;
  /* 12c45fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c45fcf call 0x12c465f0 */
  push32(0x12c45fd4u); f_12c465f0();
  /* 12c45fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c45fd7:;
  /* 12c45fd7 mov eax, 1 */
  EAX = (0x1u);
L_12c45fdc:;
  /* 12c45fdc mov esp, ebp */
  ESP = (EBP);
  /* 12c45fde pop ebp */
  EBP = (pop32());
  /* 12c45fdf ret 4 */
  ESPCHK(0x12c45f50u, _esp0);
  ESP += 8; return;
}

/* FUN_10005ff0 @ 0x12c45ff0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12c45ff0(void) {
  FTRACE(0x12c45ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c45ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c45ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12c45ff3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c45ff6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c45ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46000 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c46003 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c46006 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46009 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c4600c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46010 ja 0x12c460be */
  if ((!C.cf&&!C.zf)) goto L_12c460be;
  /* 12c46016 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c46019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4601b mov dl, byte ptr [eax + 0x12c46212] */
  DL = (r8((uint32_t)(EAX + 0x12c46212)));
  /* 12c46021 jmp dword ptr [edx*4 + 0x12c461fa] */
  switch (EDX) {
    case 0: goto L_12c46028;
    case 1: goto L_12c46093;
    case 2: goto L_12c46079;
    case 3: goto L_12c46045;
    case 4: goto L_12c4605f;
    case 5: goto L_12c460be;
    default: x86_unimpl("switch@0x12c46021 out of table"); return;
  }
L_12c46028:;
  /* 12c46028 mov dword ptr [ebp - 0x18], 0x12c6e5ec */
  w32((uint32_t)(EBP + -0x18), (0x12c6e5ecu));
  /* 12c4602f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c46032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c46034 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c46037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4603a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4603d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c46040 jmp 0x12c460c6 */
  goto L_12c460c6;
L_12c46045:;
  /* 12c46045 mov dword ptr [ebp - 0x18], 0x12c6e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x12c6e5f0u));
  /* 12c4604c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4604f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c46051 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c46054 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c46057 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4605a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4605d jmp 0x12c460c6 */
  goto L_12c460c6;
L_12c4605f:;
  /* 12c4605f mov dword ptr [ebp - 0x18], 0x12c6e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x12c6e5f4u));
  /* 12c46066 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c46069 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4606b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c4606e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c46071 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46074 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c46077 jmp 0x12c460c6 */
  goto L_12c460c6;
L_12c46079:;
  /* 12c46079 mov dword ptr [ebp - 0x18], 0x12c6e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x12c6e5f8u));
  /* 12c46080 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c46083 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c46085 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c46088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4608b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4608e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c46091 jmp 0x12c460c6 */
  goto L_12c460c6;
L_12c46093:;
  /* 12c46093 call 0x12c42590 */
  push32(0x12c46098u); f_12c42590();
  /* 12c46098 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4609b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4609e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c460a1 push edx */
  push32((uint32_t)(EDX));
  /* 12c460a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c460a5 push eax */
  push32((uint32_t)(EAX));
  /* 12c460a6 call 0x12c46230 */
  push32(0x12c460abu); f_12c46230();
  /* 12c460ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c460ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c460b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c460b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c460b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c460b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c460bc jmp 0x12c460c6 */
  goto L_12c460c6;
L_12c460be:;
  /* 12c460be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c460c1 jmp 0x12c461f6 */
  goto L_12c461f6;
L_12c460c6:;
  /* 12c460c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c460ca je 0x12c460d6 */
  if (C.zf) goto L_12c460d6;
  /* 12c460cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c460ce call 0x12c46550 */
  push32(0x12c460d3u); f_12c46550();
  /* 12c460d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c460d6:;
  /* 12c460d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c460da jne 0x12c460f3 */
  if (!C.zf) goto L_12c460f3;
  /* 12c460dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c460e0 je 0x12c460ec */
  if (C.zf) goto L_12c460ec;
  /* 12c460e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c460e4 call 0x12c465f0 */
  push32(0x12c460e9u); f_12c465f0();
  /* 12c460e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c460ec:;
  /* 12c460ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c460ee jmp 0x12c461f6 */
  goto L_12c461f6;
L_12c460f3:;
  /* 12c460f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c460f7 jne 0x12c46110 */
  if (!C.zf) goto L_12c46110;
  /* 12c460f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c460fd je 0x12c46109 */
  if (C.zf) goto L_12c46109;
  /* 12c460ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12c46101 call 0x12c465f0 */
  push32(0x12c46106u); f_12c465f0();
  /* 12c46106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c46109:;
  /* 12c46109 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c4610b call 0x12c42310 */
  push32(0x12c46110u); f_12c42310();
L_12c46110:;
  /* 12c46110 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46114 je 0x12c46122 */
  if (C.zf) goto L_12c46122;
  /* 12c46116 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4611a je 0x12c46122 */
  if (C.zf) goto L_12c46122;
  /* 12c4611c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46120 jne 0x12c4614e */
  if (!C.zf) goto L_12c4614e;
L_12c46122:;
  /* 12c46122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46125 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12c46128 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4612b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4612e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12c46135 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46139 jne 0x12c4614e */
  if (!C.zf) goto L_12c4614e;
  /* 12c4613b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4613e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12c46141 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c46144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46147 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12c4614e:;
  /* 12c4614e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46152 jne 0x12c46190 */
  if (!C.zf) goto L_12c46190;
  /* 12c46154 mov eax, dword ptr [0x12c6cc78] */
  EAX = (r32((uint32_t)(0x12c6cc78)));
  /* 12c46159 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c4615c jmp 0x12c46167 */
  goto L_12c46167;
L_12c4615e:;
  /* 12c4615e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46164 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c46167:;
  /* 12c46167 mov edx, dword ptr [0x12c6cc78] */
  EDX = (r32((uint32_t)(0x12c6cc78)));
  /* 12c4616d add edx, dword ptr [0x12c6cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46173 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46176 jge 0x12c4618e */
  if ((C.sf==C.of)) goto L_12c4618e;
  /* 12c46178 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4617b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4617e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46181 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c46184 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12c4618c jmp 0x12c4615e */
  goto L_12c4615e;
L_12c4618e:;
  /* 12c4618e jmp 0x12c46199 */
  goto L_12c46199;
L_12c46190:;
  /* 12c46190 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c46193 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c46199:;
  /* 12c46199 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4619d je 0x12c461a9 */
  if (C.zf) goto L_12c461a9;
  /* 12c4619f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c461a1 call 0x12c465f0 */
  push32(0x12c461a6u); f_12c465f0();
  /* 12c461a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c461a9:;
  /* 12c461a9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c461ad jne 0x12c461c0 */
  if (!C.zf) goto L_12c461c0;
  /* 12c461af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c461b2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12c461b5 push edx */
  push32((uint32_t)(EDX));
  /* 12c461b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c461b8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12c461bbu);
  /* 12c461bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c461be jmp 0x12c461ca */
  goto L_12c461ca;
L_12c461c0:;
  /* 12c461c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c461c3 push eax */
  push32((uint32_t)(EAX));
  /* 12c461c4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12c461c7u);
  /* 12c461c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c461ca:;
  /* 12c461ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c461ce je 0x12c461dc */
  if (C.zf) goto L_12c461dc;
  /* 12c461d0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c461d4 je 0x12c461dc */
  if (C.zf) goto L_12c461dc;
  /* 12c461d6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c461da jne 0x12c461f4 */
  if (!C.zf) goto L_12c461f4;
L_12c461dc:;
  /* 12c461dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c461df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c461e2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12c461e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c461e9 jne 0x12c461f4 */
  if (!C.zf) goto L_12c461f4;
  /* 12c461eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c461ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c461f1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12c461f4:;
  /* 12c461f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c461f6:;
  /* 12c461f6 mov esp, ebp */
  ESP = (EBP);
  /* 12c461f8 pop ebp */
  EBP = (pop32());
  /* 12c461f9 ret  */
  ESPCHK(0x12c45ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x12c46230 (91 bytes, 35 insns) */
void f_12c46230(void) {
  FTRACE(0x12c46230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46230 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46231 mov ebp, esp */
  EBP = (ESP);
  /* 12c46233 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4623a:;
  /* 12c4623a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4623d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c46240 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46243 je 0x12c46263 */
  if (C.zf) goto L_12c46263;
  /* 12c46245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46248 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4624b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4624e mov ecx, dword ptr [0x12c6cc84] */
  ECX = (r32((uint32_t)(0x12c6cc84)));
  /* 12c46254 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c46257 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4625a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4625c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4625f jae 0x12c46263 */
  if (!C.cf) goto L_12c46263;
  /* 12c46261 jmp 0x12c4623a */
  goto L_12c4623a;
L_12c46263:;
  /* 12c46263 mov eax, dword ptr [0x12c6cc84] */
  EAX = (r32((uint32_t)(0x12c6cc84)));
  /* 12c46268 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4626b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4626e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46270 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46273 jae 0x12c46285 */
  if (!C.cf) goto L_12c46285;
  /* 12c46275 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46278 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c4627b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4627e jne 0x12c46285 */
  if (!C.zf) goto L_12c46285;
  /* 12c46280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46283 jmp 0x12c46287 */
  goto L_12c46287;
L_12c46285:;
  /* 12c46285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c46287:;
  /* 12c46287 mov esp, ebp */
  ESP = (EBP);
  /* 12c46289 pop ebp */
  EBP = (pop32());
  /* 12c4628a ret  */
  ESPCHK(0x12c46230u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x12c46290 (13 bytes, 6 insns) */
void f_12c46290(void) {
  FTRACE(0x12c46290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46290 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46291 mov ebp, esp */
  EBP = (ESP);
  /* 12c46293 call 0x12c42590 */
  push32(0x12c46298u); f_12c42590();
  /* 12c46298 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4629b pop ebp */
  EBP = (pop32());
  /* 12c4629c ret  */
  ESPCHK(0x12c46290u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x12c462a0 (13 bytes, 6 insns) */
void f_12c462a0(void) {
  FTRACE(0x12c462a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c462a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c462a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c462a3 call 0x12c42590 */
  push32(0x12c462a8u); f_12c42590();
  /* 12c462a8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c462ab pop ebp */
  EBP = (pop32());
  /* 12c462ac ret  */
  ESPCHK(0x12c462a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x12c462b0 (187 bytes, 54 insns) */
void f_12c462b0(void) {
  FTRACE(0x12c462b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c462b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c462b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c462b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c462b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c462bd cmp dword ptr [0x12c6e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c462c4 jne 0x12c46323 */
  if (!C.zf) goto L_12c46323;
  /* 12c462c6 push 0x12c69220 */
  push32((uint32_t)(0x12c69220u));
  /* 12c462cb call dword ptr [0x12c70274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70274))), 0x12c462d1u);
  /* 12c462d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c462d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c462d8 je 0x12c462f7 */
  if (C.zf) goto L_12c462f7;
  /* 12c462da push 0x12c69e24 */
  push32((uint32_t)(0x12c69e24u));
  /* 12c462df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c462e2 push eax */
  push32((uint32_t)(EAX));
  /* 12c462e3 call dword ptr [0x12c70270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70270))), 0x12c462e9u);
  /* 12c462e9 mov dword ptr [0x12c6e600], eax */
  w32((uint32_t)(0x12c6e600), (EAX));
  /* 12c462ee cmp dword ptr [0x12c6e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c462f5 jne 0x12c462fb */
  if (!C.zf) goto L_12c462fb;
L_12c462f7:;
  /* 12c462f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c462f9 jmp 0x12c46367 */
  goto L_12c46367;
L_12c462fb:;
  /* 12c462fb push 0x12c69e14 */
  push32((uint32_t)(0x12c69e14u));
  /* 12c46300 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46303 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46304 call dword ptr [0x12c70270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70270))), 0x12c4630au);
  /* 12c4630a mov dword ptr [0x12c6e604], eax */
  w32((uint32_t)(0x12c6e604), (EAX));
  /* 12c4630f push 0x12c69e00 */
  push32((uint32_t)(0x12c69e00u));
  /* 12c46314 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46317 push edx */
  push32((uint32_t)(EDX));
  /* 12c46318 call dword ptr [0x12c70270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70270))), 0x12c4631eu);
  /* 12c4631e mov dword ptr [0x12c6e608], eax */
  w32((uint32_t)(0x12c6e608), (EAX));
L_12c46323:;
  /* 12c46323 cmp dword ptr [0x12c6e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4632a je 0x12c46335 */
  if (C.zf) goto L_12c46335;
  /* 12c4632c call dword ptr [0x12c6e604] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e604))), 0x12c46332u);
  /* 12c46332 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c46335:;
  /* 12c46335 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46339 je 0x12c46351 */
  if (C.zf) goto L_12c46351;
  /* 12c4633b cmp dword ptr [0x12c6e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46342 je 0x12c46351 */
  if (C.zf) goto L_12c46351;
  /* 12c46344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46347 push eax */
  push32((uint32_t)(EAX));
  /* 12c46348 call dword ptr [0x12c6e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e608))), 0x12c4634eu);
  /* 12c4634e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c46351:;
  /* 12c46351 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c46354 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46355 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46358 push edx */
  push32((uint32_t)(EDX));
  /* 12c46359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4635c push eax */
  push32((uint32_t)(EAX));
  /* 12c4635d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46360 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46361 call dword ptr [0x12c6e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e600))), 0x12c46367u);
L_12c46367:;
  /* 12c46367 mov esp, ebp */
  ESP = (EBP);
  /* 12c46369 pop ebp */
  EBP = (pop32());
  /* 12c4636a ret  */
  ESPCHK(0x12c462b0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12c46370 (254 bytes, 109 insns) */
void f_12c46370(void) {
  FTRACE(0x12c46370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46370 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c46374 push edi */
  push32((uint32_t)(EDI));
  /* 12c46375 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c46377 je 0x12c463f3 */
  if (C.zf) goto L_12c463f3;
  /* 12c46379 push esi */
  push32((uint32_t)(ESI));
  /* 12c4637a push ebx */
  push32((uint32_t)(EBX));
  /* 12c4637b mov ebx, ecx */
  EBX = (ECX);
  /* 12c4637d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c46381 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12c46387 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c4638b jne 0x12c46394 */
  if (!C.zf) goto L_12c46394;
  /* 12c4638d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c46390 jne 0x12c46401 */
  if (!C.zf) goto L_12c46401;
  /* 12c46392 jmp 0x12c463b5 */
  goto L_12c463b5;
L_12c46394:;
  /* 12c46394 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c46396 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c46397 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c46399 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c4639a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c4639b je 0x12c463c2 */
  if (C.zf) goto L_12c463c2;
  /* 12c4639d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c4639f je 0x12c463ca */
  if (C.zf) goto L_12c463ca;
  /* 12c463a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12c463a7 jne 0x12c46394 */
  if (!C.zf) goto L_12c46394;
  /* 12c463a9 mov ebx, ecx */
  EBX = (ECX);
  /* 12c463ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c463ae jne 0x12c46401 */
  if (!C.zf) goto L_12c46401;
L_12c463b0:;
  /* 12c463b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12c463b3 je 0x12c463c2 */
  if (C.zf) goto L_12c463c2;
L_12c463b5:;
  /* 12c463b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c463b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c463b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c463ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c463bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c463bd je 0x12c463ee */
  if (C.zf) goto L_12c463ee;
  /* 12c463bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c463c0 jne 0x12c463b5 */
  if (!C.zf) goto L_12c463b5;
L_12c463c2:;
  /* 12c463c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c463c6 pop ebx */
  EBX = (pop32());
  /* 12c463c7 pop esi */
  ESI = (pop32());
  /* 12c463c8 pop edi */
  EDI = (pop32());
  /* 12c463c9 ret  */
  ESPCHK(0x12c46370u, _esp0);
  ESP += 4; return;
L_12c463ca:;
  /* 12c463ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c463d0 je 0x12c463e4 */
  if (C.zf) goto L_12c463e4;
L_12c463d2:;
  /* 12c463d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c463d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c463d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c463d6 je 0x12c46466 */
  if (C.zf) goto L_12c46466;
  /* 12c463dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c463e2 jne 0x12c463d2 */
  if (!C.zf) goto L_12c463d2;
L_12c463e4:;
  /* 12c463e4 mov ebx, ecx */
  EBX = (ECX);
  /* 12c463e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c463e9 jne 0x12c46457 */
  if (!C.zf) goto L_12c46457;
L_12c463eb:;
  /* 12c463eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c463ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12c463ee:;
  /* 12c463ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c463ef jne 0x12c463eb */
  if (!C.zf) goto L_12c463eb;
  /* 12c463f1 pop ebx */
  EBX = (pop32());
  /* 12c463f2 pop esi */
  ESI = (pop32());
L_12c463f3:;
  /* 12c463f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c463f7 pop edi */
  EDI = (pop32());
  /* 12c463f8 ret  */
  ESPCHK(0x12c46370u, _esp0);
  ESP += 4; return;
L_12c463f9:;
  /* 12c463f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c463fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c463fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c463ff je 0x12c463b0 */
  if (C.zf) goto L_12c463b0;
L_12c46401:;
  /* 12c46401 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c46406 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c46408 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4640a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4640d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4640f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12c46411 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46414 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c46419 je 0x12c463f9 */
  if (C.zf) goto L_12c463f9;
  /* 12c4641b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c4641d je 0x12c4644b */
  if (C.zf) goto L_12c4644b;
  /* 12c4641f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c46421 je 0x12c46441 */
  if (C.zf) goto L_12c46441;
  /* 12c46423 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c46429 je 0x12c46437 */
  if (C.zf) goto L_12c46437;
  /* 12c4642b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c46431 jne 0x12c463f9 */
  if (!C.zf) goto L_12c463f9;
  /* 12c46433 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c46435 jmp 0x12c4644f */
  goto L_12c4644f;
L_12c46437:;
  /* 12c46437 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4643d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c4643f jmp 0x12c4644f */
  goto L_12c4644f;
L_12c46441:;
  /* 12c46441 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c46447 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c46449 jmp 0x12c4644f */
  goto L_12c4644f;
L_12c4644b:;
  /* 12c4644b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4644d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12c4644f:;
  /* 12c4644f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46454 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c46455 je 0x12c46461 */
  if (C.zf) goto L_12c46461;
L_12c46457:;
  /* 12c46457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c46459:;
  /* 12c46459 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c4645b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4645e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c4645f jne 0x12c46459 */
  if (!C.zf) goto L_12c46459;
L_12c46461:;
  /* 12c46461 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12c46464 jne 0x12c463eb */
  if (!C.zf) goto L_12c463eb;
L_12c46466:;
  /* 12c46466 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c4646a pop ebx */
  EBX = (pop32());
  /* 12c4646b pop esi */
  ESI = (pop32());
  /* 12c4646c pop edi */
  EDI = (pop32());
  /* 12c4646d ret  */
  ESPCHK(0x12c46370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x12c46470 (55 bytes, 16 insns) */
void f_12c46470(void) {
  FTRACE(0x12c46470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46470 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46471 mov ebp, esp */
  EBP = (ESP);
  /* 12c46473 mov eax, dword ptr [0x12c6cb84] */
  EAX = (r32((uint32_t)(0x12c6cb84)));
  /* 12c46478 push eax */
  push32((uint32_t)(EAX));
  /* 12c46479 call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c4647fu);
  /* 12c4647f mov ecx, dword ptr [0x12c6cb74] */
  ECX = (r32((uint32_t)(0x12c6cb74)));
  /* 12c46485 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46486 call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c4648cu);
  /* 12c4648c mov edx, dword ptr [0x12c6cb64] */
  EDX = (r32((uint32_t)(0x12c6cb64)));
  /* 12c46492 push edx */
  push32((uint32_t)(EDX));
  /* 12c46493 call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c46499u);
  /* 12c46499 mov eax, dword ptr [0x12c6cb44] */
  EAX = (r32((uint32_t)(0x12c6cb44)));
  /* 12c4649e push eax */
  push32((uint32_t)(EAX));
  /* 12c4649f call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c464a5u);
  /* 12c464a5 pop ebp */
  EBP = (pop32());
  /* 12c464a6 ret  */
  ESPCHK(0x12c46470u, _esp0);
  ESP += 4; return;
}

/* FUN_100064b0 @ 0x12c464b0 (159 bytes, 47 insns) */
void f_12c464b0(void) {
  FTRACE(0x12c464b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c464b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c464b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c464b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c464b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c464bb jmp 0x12c464c6 */
  goto L_12c464c6;
L_12c464bd:;
  /* 12c464bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c464c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c464c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c464c6:;
  /* 12c464c6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c464ca jge 0x12c46519 */
  if ((C.sf==C.of)) goto L_12c46519;
  /* 12c464cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c464cf cmp dword ptr [ecx*4 + 0x12c6cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c6cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c464d7 je 0x12c46517 */
  if (C.zf) goto L_12c46517;
  /* 12c464d9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c464dd je 0x12c46517 */
  if (C.zf) goto L_12c46517;
  /* 12c464df cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c464e3 je 0x12c46517 */
  if (C.zf) goto L_12c46517;
  /* 12c464e5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c464e9 je 0x12c46517 */
  if (C.zf) goto L_12c46517;
  /* 12c464eb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c464ef je 0x12c46517 */
  if (C.zf) goto L_12c46517;
  /* 12c464f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c464f4 mov eax, dword ptr [edx*4 + 0x12c6cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6cb40)));
  /* 12c464fb push eax */
  push32((uint32_t)(EAX));
  /* 12c464fc call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c46502u);
  /* 12c46502 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c46504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46507 mov edx, dword ptr [ecx*4 + 0x12c6cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6cb40)));
  /* 12c4650e push edx */
  push32((uint32_t)(EDX));
  /* 12c4650f call 0x12c435e0 */
  push32(0x12c46514u); f_12c435e0();
  /* 12c46514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c46517:;
  /* 12c46517 jmp 0x12c464bd */
  goto L_12c464bd;
L_12c46519:;
  /* 12c46519 mov eax, dword ptr [0x12c6cb64] */
  EAX = (r32((uint32_t)(0x12c6cb64)));
  /* 12c4651e push eax */
  push32((uint32_t)(EAX));
  /* 12c4651f call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c46525u);
  /* 12c46525 mov ecx, dword ptr [0x12c6cb74] */
  ECX = (r32((uint32_t)(0x12c6cb74)));
  /* 12c4652b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4652c call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c46532u);
  /* 12c46532 mov edx, dword ptr [0x12c6cb84] */
  EDX = (r32((uint32_t)(0x12c6cb84)));
  /* 12c46538 push edx */
  push32((uint32_t)(EDX));
  /* 12c46539 call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c4653fu);
  /* 12c4653f mov eax, dword ptr [0x12c6cb44] */
  EAX = (r32((uint32_t)(0x12c6cb44)));
  /* 12c46544 push eax */
  push32((uint32_t)(EAX));
  /* 12c46545 call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c4654bu);
  /* 12c4654b mov esp, ebp */
  ESP = (EBP);
  /* 12c4654d pop ebp */
  EBP = (pop32());
  /* 12c4654e ret  */
  ESPCHK(0x12c464b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x12c46550 (151 bytes, 46 insns) */
void f_12c46550(void) {
  FTRACE(0x12c46550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46550 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46551 mov ebp, esp */
  EBP = (ESP);
  /* 12c46553 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46557 cmp dword ptr [eax*4 + 0x12c6cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12c6cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4655f jne 0x12c465d2 */
  if (!C.zf) goto L_12c465d2;
  /* 12c46561 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12c46566 push 0x12c69e30 */
  push32((uint32_t)(0x12c69e30u));
  /* 12c4656b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4656d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12c4656f call 0x12c42b50 */
  push32(0x12c46574u); f_12c42b50();
  /* 12c46574 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46577 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4657a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4657e jne 0x12c4658a */
  if (!C.zf) goto L_12c4658a;
  /* 12c46580 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c46582 call 0x12c41ac0 */
  push32(0x12c46587u); f_12c41ac0();
  /* 12c46587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4658a:;
  /* 12c4658a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c4658c call 0x12c46550 */
  push32(0x12c46591u); f_12c46550();
  /* 12c46591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46594 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46597 cmp dword ptr [ecx*4 + 0x12c6cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c6cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4659f jne 0x12c465ba */
  if (!C.zf) goto L_12c465ba;
  /* 12c465a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c465a4 push edx */
  push32((uint32_t)(EDX));
  /* 12c465a5 call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c465abu);
  /* 12c465ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c465ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c465b1 mov dword ptr [eax*4 + 0x12c6cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12c6cb40), (ECX));
  /* 12c465b8 jmp 0x12c465c8 */
  goto L_12c465c8;
L_12c465ba:;
  /* 12c465ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12c465bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c465bf push edx */
  push32((uint32_t)(EDX));
  /* 12c465c0 call 0x12c435e0 */
  push32(0x12c465c5u); f_12c435e0();
  /* 12c465c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c465c8:;
  /* 12c465c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c465ca call 0x12c465f0 */
  push32(0x12c465cfu); f_12c465f0();
  /* 12c465cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c465d2:;
  /* 12c465d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c465d5 mov ecx, dword ptr [eax*4 + 0x12c6cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6cb40)));
  /* 12c465dc push ecx */
  push32((uint32_t)(ECX));
  /* 12c465dd call dword ptr [0x12c702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f4))), 0x12c465e3u);
  /* 12c465e3 mov esp, ebp */
  ESP = (EBP);
  /* 12c465e5 pop ebp */
  EBP = (pop32());
  /* 12c465e6 ret  */
  ESPCHK(0x12c46550u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x12c465f0 (22 bytes, 8 insns) */
void f_12c465f0(void) {
  FTRACE(0x12c465f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c465f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c465f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c465f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c465f6 mov ecx, dword ptr [eax*4 + 0x12c6cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c6cb40)));
  /* 12c465fd push ecx */
  push32((uint32_t)(ECX));
  /* 12c465fe call dword ptr [0x12c702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f8))), 0x12c46604u);
  /* 12c46604 pop ebp */
  EBP = (pop32());
  /* 12c46605 ret  */
  ESPCHK(0x12c465f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x12c46610 (26 bytes, 10 insns) */
void f_12c46610(void) {
  FTRACE(0x12c46610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46610 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46611 mov ebp, esp */
  EBP = (ESP);
  /* 12c46613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46616 push eax */
  push32((uint32_t)(EAX));
  /* 12c46617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46619 call dword ptr [0x12c702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702fc))), 0x12c4661fu);
  /* 12c4661f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c46624 call dword ptr [0x12c70280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70280))), 0x12c4662au);
  /* 12c4662a pop ebp */
  EBP = (pop32());
  /* 12c4662b ret  */
  ESPCHK(0x12c46610u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12c46630 (446 bytes, 130 insns) */
void f_12c46630(void) {
  FTRACE(0x12c46630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46630 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46631 mov ebp, esp */
  EBP = (ESP);
  /* 12c46633 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46636 call 0x12c42590 */
  push32(0x12c4663bu); f_12c42590();
  /* 12c4663b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4663e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46641 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12c46644 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46648 push edx */
  push32((uint32_t)(EDX));
  /* 12c46649 call 0x12c467f0 */
  push32(0x12c4664eu); f_12c467f0();
  /* 12c4664e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c46654 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46658 je 0x12c46663 */
  if (C.zf) goto L_12c46663;
  /* 12c4665a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4665d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46661 jne 0x12c46672 */
  if (!C.zf) goto L_12c46672;
L_12c46663:;
  /* 12c46663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46666 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46667 call dword ptr [0x12c70300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70300))), 0x12c4666du);
  /* 12c4666d jmp 0x12c467ea */
  goto L_12c467ea;
L_12c46672:;
  /* 12c46672 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46675 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46679 jne 0x12c4668f */
  if (!C.zf) goto L_12c4668f;
  /* 12c4667b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4667e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c46685 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4668a jmp 0x12c467ea */
  goto L_12c467ea;
L_12c4668f:;
  /* 12c4668f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46692 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46696 jne 0x12c466a0 */
  if (!C.zf) goto L_12c466a0;
  /* 12c46698 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4669b jmp 0x12c467ea */
  goto L_12c467ea;
L_12c466a0:;
  /* 12c466a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c466a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c466a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c466a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c466ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12c466af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c466b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c466b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c466b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12c466bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c466be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c466c2 jne 0x12c467c7 */
  if (!C.zf) goto L_12c467c7;
  /* 12c466c8 mov eax, dword ptr [0x12c6cc78] */
  EAX = (r32((uint32_t)(0x12c6cc78)));
  /* 12c466cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c466d0 jmp 0x12c466db */
  goto L_12c466db;
L_12c466d2:;
  /* 12c466d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c466d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c466d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c466db:;
  /* 12c466db mov edx, dword ptr [0x12c6cc78] */
  EDX = (r32((uint32_t)(0x12c6cc78)));
  /* 12c466e1 add edx, dword ptr [0x12c6cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c466e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c466ea jge 0x12c46702 */
  if ((C.sf==C.of)) goto L_12c46702;
  /* 12c466ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c466ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c466f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c466f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c466f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12c46700 jmp 0x12c466d2 */
  goto L_12c466d2;
L_12c46702:;
  /* 12c46702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46705 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12c46708 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4670b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4670e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46714 jne 0x12c46725 */
  if (!C.zf) goto L_12c46725;
  /* 12c46716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46719 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12c46720 jmp 0x12c467ad */
  goto L_12c467ad;
L_12c46725:;
  /* 12c46725 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46728 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4672e jne 0x12c4673c */
  if (!C.zf) goto L_12c4673c;
  /* 12c46730 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46733 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12c4673a jmp 0x12c467ad */
  goto L_12c467ad;
L_12c4673c:;
  /* 12c4673c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4673f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46745 jne 0x12c46753 */
  if (!C.zf) goto L_12c46753;
  /* 12c46747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4674a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12c46751 jmp 0x12c467ad */
  goto L_12c467ad;
L_12c46753:;
  /* 12c46753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46756 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4675c jne 0x12c4676a */
  if (!C.zf) goto L_12c4676a;
  /* 12c4675e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46761 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12c46768 jmp 0x12c467ad */
  goto L_12c467ad;
L_12c4676a:;
  /* 12c4676a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4676d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46773 jne 0x12c46781 */
  if (!C.zf) goto L_12c46781;
  /* 12c46775 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46778 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12c4677f jmp 0x12c467ad */
  goto L_12c467ad;
L_12c46781:;
  /* 12c46781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46784 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4678a jne 0x12c46798 */
  if (!C.zf) goto L_12c46798;
  /* 12c4678c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4678f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12c46796 jmp 0x12c467ad */
  goto L_12c467ad;
L_12c46798:;
  /* 12c46798 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4679b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c467a1 jne 0x12c467ad */
  if (!C.zf) goto L_12c467ad;
  /* 12c467a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c467a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12c467ad:;
  /* 12c467ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c467b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12c467b3 push edx */
  push32((uint32_t)(EDX));
  /* 12c467b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c467b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12c467b9u);
  /* 12c467b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c467bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c467bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c467c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12c467c5 jmp 0x12c467de */
  goto L_12c467de;
L_12c467c7:;
  /* 12c467c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c467ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12c467d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c467d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c467d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c467d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12c467dbu);
  /* 12c467db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c467de:;
  /* 12c467de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c467e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c467e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12c467e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c467ea:;
  /* 12c467ea mov esp, ebp */
  ESP = (EBP);
  /* 12c467ec pop ebp */
  EBP = (pop32());
  /* 12c467ed ret  */
  ESPCHK(0x12c46630u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f0 @ 0x12c467f0 (89 bytes, 35 insns) */
void f_12c467f0(void) {
  FTRACE(0x12c467f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c467f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c467f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c467f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c467f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c467f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c467fa:;
  /* 12c467fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c467fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c467ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46802 je 0x12c46822 */
  if (C.zf) goto L_12c46822;
  /* 12c46804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46807 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4680a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4680d mov ecx, dword ptr [0x12c6cc84] */
  ECX = (r32((uint32_t)(0x12c6cc84)));
  /* 12c46813 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c46816 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46819 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4681b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4681e jae 0x12c46822 */
  if (!C.cf) goto L_12c46822;
  /* 12c46820 jmp 0x12c467fa */
  goto L_12c467fa;
L_12c46822:;
  /* 12c46822 mov eax, dword ptr [0x12c6cc84] */
  EAX = (r32((uint32_t)(0x12c6cc84)));
  /* 12c46827 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4682a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4682d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4682f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46832 jae 0x12c4683e */
  if (!C.cf) goto L_12c4683e;
  /* 12c46834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46837 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c46839 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4683c je 0x12c46842 */
  if (C.zf) goto L_12c46842;
L_12c4683e:;
  /* 12c4683e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46840 jmp 0x12c46845 */
  goto L_12c46845;
L_12c46842:;
  /* 12c46842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c46845:;
  /* 12c46845 mov esp, ebp */
  ESP = (EBP);
  /* 12c46847 pop ebp */
  EBP = (pop32());
  /* 12c46848 ret  */
  ESPCHK(0x12c467f0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12c46850 (48 bytes, 17 insns) */
void f_12c46850(void) {
  FTRACE(0x12c46850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46850 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46851 mov ebp, esp */
  EBP = (ESP);
  /* 12c46853 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46854 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46856 call 0x12c46550 */
  push32(0x12c4685bu); f_12c46550();
  /* 12c4685b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4685e mov eax, dword ptr [0x12c6e674] */
  EAX = (r32((uint32_t)(0x12c6e674)));
  /* 12c46863 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c46866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46869 mov dword ptr [0x12c6e674], ecx */
  w32((uint32_t)(0x12c6e674), (ECX));
  /* 12c4686f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46871 call 0x12c465f0 */
  push32(0x12c46876u); f_12c465f0();
  /* 12c46876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4687c mov esp, ebp */
  ESP = (EBP);
  /* 12c4687e pop ebp */
  EBP = (pop32());
  /* 12c4687f ret  */
  ESPCHK(0x12c46850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x12c46880 (10 bytes, 5 insns) */
void f_12c46880(void) {
  FTRACE(0x12c46880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46880 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46881 mov ebp, esp */
  EBP = (ESP);
  /* 12c46883 mov eax, dword ptr [0x12c6e674] */
  EAX = (r32((uint32_t)(0x12c6e674)));
  /* 12c46888 pop ebp */
  EBP = (pop32());
  /* 12c46889 ret  */
  ESPCHK(0x12c46880u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12c46890 (45 bytes, 19 insns) */
void f_12c46890(void) {
  FTRACE(0x12c46890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46890 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46891 mov ebp, esp */
  EBP = (ESP);
  /* 12c46893 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46894 mov eax, dword ptr [0x12c6e674] */
  EAX = (r32((uint32_t)(0x12c6e674)));
  /* 12c46899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4689c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c468a0 je 0x12c468b0 */
  if (C.zf) goto L_12c468b0;
  /* 12c468a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c468a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c468a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12c468a9u);
  /* 12c468a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c468ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c468ae jne 0x12c468b4 */
  if (!C.zf) goto L_12c468b4;
L_12c468b0:;
  /* 12c468b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c468b2 jmp 0x12c468b9 */
  goto L_12c468b9;
L_12c468b4:;
  /* 12c468b4 mov eax, 1 */
  EAX = (0x1u);
L_12c468b9:;
  /* 12c468b9 mov esp, ebp */
  ESP = (EBP);
  /* 12c468bb pop ebp */
  EBP = (pop32());
  /* 12c468bc ret  */
  ESPCHK(0x12c46890u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12c468c0 (88 bytes, 40 insns) */
void f_12c468c0(void) {
  FTRACE(0x12c468c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c468c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c468c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c468c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c468ca je 0x12c46913 */
  if (C.zf) goto L_12c46913;
  /* 12c468cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c468ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c468d2 push edi */
  push32((uint32_t)(EDI));
  /* 12c468d3 mov edi, ecx */
  EDI = (ECX);
  /* 12c468d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c468d8 jb 0x12c46907 */
  if (C.cf) goto L_12c46907;
  /* 12c468da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c468dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c468df je 0x12c468e9 */
  if (C.zf) goto L_12c468e9;
  /* 12c468e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c468e3:;
  /* 12c468e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c468e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c468e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c468e7 jne 0x12c468e3 */
  if (!C.zf) goto L_12c468e3;
L_12c468e9:;
  /* 12c468e9 mov ecx, eax */
  ECX = (EAX);
  /* 12c468eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c468ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c468f0 mov ecx, eax */
  ECX = (EAX);
  /* 12c468f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c468f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c468f7 mov ecx, edx */
  ECX = (EDX);
  /* 12c468f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c468fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c468ff je 0x12c46907 */
  if (C.zf) goto L_12c46907;
  /* 12c46901 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c46903 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c46905 je 0x12c4690d */
  if (C.zf) goto L_12c4690d;
L_12c46907:;
  /* 12c46907 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c46909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c4690a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c4690b jne 0x12c46907 */
  if (!C.zf) goto L_12c46907;
L_12c4690d:;
  /* 12c4690d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c46911 pop edi */
  EDI = (pop32());
  /* 12c46912 ret  */
  ESPCHK(0x12c468c0u, _esp0);
  ESP += 4; return;
L_12c46913:;
  /* 12c46913 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c46917 ret  */
  ESPCHK(0x12c468c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x12c46920 (23 bytes, 10 insns) */
void f_12c46920(void) {
  FTRACE(0x12c46920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46920 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46921 mov ebp, esp */
  EBP = (ESP);
  /* 12c46923 mov eax, dword ptr [0x12c6e670] */
  EAX = (r32((uint32_t)(0x12c6e670)));
  /* 12c46928 push eax */
  push32((uint32_t)(EAX));
  /* 12c46929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4692c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4692d call 0x12c46940 */
  push32(0x12c46932u); f_12c46940();
  /* 12c46932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46935 pop ebp */
  EBP = (pop32());
  /* 12c46936 ret  */
  ESPCHK(0x12c46920u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12c46940 (87 bytes, 34 insns) */
void f_12c46940(void) {
  FTRACE(0x12c46940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46940 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46941 mov ebp, esp */
  EBP = (ESP);
  /* 12c46943 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46944 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46948 jbe 0x12c4694e */
  if ((C.cf||C.zf)) goto L_12c4694e;
  /* 12c4694a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4694c jmp 0x12c46993 */
  goto L_12c46993;
L_12c4694e:;
  /* 12c4694e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46952 ja 0x12c46965 */
  if ((!C.cf&&!C.zf)) goto L_12c46965;
  /* 12c46954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46957 push eax */
  push32((uint32_t)(EAX));
  /* 12c46958 call 0x12c469a0 */
  push32(0x12c4695du); f_12c469a0();
  /* 12c4695d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46960 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c46963 jmp 0x12c4696c */
  goto L_12c4696c;
L_12c46965:;
  /* 12c46965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c4696c:;
  /* 12c4696c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46970 jne 0x12c46978 */
  if (!C.zf) goto L_12c46978;
  /* 12c46972 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46976 jne 0x12c4697d */
  if (!C.zf) goto L_12c4697d;
L_12c46978:;
  /* 12c46978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4697b jmp 0x12c46993 */
  goto L_12c46993;
L_12c4697d:;
  /* 12c4697d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46980 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46981 call 0x12c46890 */
  push32(0x12c46986u); f_12c46890();
  /* 12c46986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4698b jne 0x12c46991 */
  if (!C.zf) goto L_12c46991;
  /* 12c4698d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4698f jmp 0x12c46993 */
  goto L_12c46993;
L_12c46991:;
  /* 12c46991 jmp 0x12c4694e */
  goto L_12c4694e;
L_12c46993:;
  /* 12c46993 mov esp, ebp */
  ESP = (EBP);
  /* 12c46995 pop ebp */
  EBP = (pop32());
  /* 12c46996 ret  */
  ESPCHK(0x12c46940u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x12c469a0 (109 bytes, 37 insns) */
void f_12c469a0(void) {
  FTRACE(0x12c469a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c469a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c469a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c469a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c469a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c469a7 cmp eax, dword ptr [0x12c6cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c469ad ja 0x12c469dd */
  if ((!C.cf&&!C.zf)) goto L_12c469dd;
  /* 12c469af push 9 */
  push32((uint32_t)(0x9u));
  /* 12c469b1 call 0x12c46550 */
  push32(0x12c469b6u); f_12c46550();
  /* 12c469b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c469b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c469bc push ecx */
  push32((uint32_t)(ECX));
  /* 12c469bd call 0x12c474e0 */
  push32(0x12c469c2u); f_12c474e0();
  /* 12c469c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c469c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c469c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c469ca call 0x12c465f0 */
  push32(0x12c469cfu); f_12c465f0();
  /* 12c469cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c469d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c469d6 je 0x12c469dd */
  if (C.zf) goto L_12c469dd;
  /* 12c469d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c469db jmp 0x12c46a09 */
  goto L_12c46a09;
L_12c469dd:;
  /* 12c469dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c469e1 jne 0x12c469ea */
  if (!C.zf) goto L_12c469ea;
  /* 12c469e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12c469ea:;
  /* 12c469ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c469ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c469f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12c469f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c469f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c469f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c469fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c469fc mov ecx, dword ptr [0x12c6fe2c] */
  ECX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46a03 call dword ptr [0x12c70304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70304))), 0x12c46a09u);
L_12c46a09:;
  /* 12c46a09 mov esp, ebp */
  ESP = (EBP);
  /* 12c46a0b pop ebp */
  EBP = (pop32());
  /* 12c46a0c ret  */
  ESPCHK(0x12c469a0u, _esp0);
  ESP += 4; return;
}

