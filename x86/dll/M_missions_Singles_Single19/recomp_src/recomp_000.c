#include "recomp.h"

/* OnInit @ 0x11201005 (5 bytes, 1 insns) */
void f_11201005(void) {
  FTRACE(0x11201005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11201005 jmp 0x11201090 */
  f_11201090(); return;
}

/* thunk_FUN_10001030 @ 0x1120100a (5 bytes, 1 insns) */
void f_1120100a(void) {
  FTRACE(0x1120100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120100a jmp 0x11201030 */
  f_11201030(); return;
}

/* ProcessScenary @ 0x1120100f (5 bytes, 1 insns) */
void f_1120100f(void) {
  FTRACE(0x1120100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120100f jmp 0x11201260 */
  f_11201260(); return;
}

/* FUN_10001030 @ 0x11201030 (67 bytes, 26 insns) */
void f_11201030(void) {
  FTRACE(0x11201030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11201030 push ebp */
  push32((uint32_t)(EBP));
  /* 11201031 mov ebp, esp */
  EBP = (ESP);
  /* 11201033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201036 push ebx */
  push32((uint32_t)(EBX));
  /* 11201037 push esi */
  push32((uint32_t)(ESI));
  /* 11201038 push edi */
  push32((uint32_t)(EDI));
  /* 11201039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1120103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11201041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11201046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11201048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201052 je 0x11201056 */
  if (C.zf) goto L_11201056;
  /* 11201054 jmp 0x1120105b */
  goto L_1120105b;
L_11201056:;
  /* 11201056 call 0x11201005 */
  push32(0x1120105bu); f_11201005();
L_1120105b:;
  /* 1120105b mov eax, 1 */
  EAX = (0x1u);
  /* 11201060 pop edi */
  EDI = (pop32());
  /* 11201061 pop esi */
  ESI = (pop32());
  /* 11201062 pop ebx */
  EBX = (pop32());
  /* 11201063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201068 call 0x11202240 */
  push32(0x1120106du); f_11202240();
  /* 1120106d mov esp, ebp */
  ESP = (EBP);
  /* 1120106f pop ebp */
  EBP = (pop32());
  /* 11201070 ret 0xc */
  ESPCHK(0x11201030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x11201090 (362 bytes, 103 insns) */
void f_11201090(void) {
  FTRACE(0x11201090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11201090 push ebp */
  push32((uint32_t)(EBP));
  /* 11201091 mov ebp, esp */
  EBP = (ESP);
  /* 11201093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201096 push ebx */
  push32((uint32_t)(EBX));
  /* 11201097 push esi */
  push32((uint32_t)(ESI));
  /* 11201098 push edi */
  push32((uint32_t)(EDI));
  /* 11201099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1120109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 112010a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112010a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112010a8 mov esi, esp */
  ESI = (ESP);
  /* 112010aa push 0x1122a074 */
  push32((uint32_t)(0x1122a074u));
  /* 112010af push 1 */
  push32((uint32_t)(0x1u));
  /* 112010b1 call dword ptr [0x11231464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231464))), 0x112010b7u);
  /* 112010b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112010ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112010bc call 0x11202240 */
  push32(0x112010c1u); f_11202240();
  /* 112010c1 mov esi, esp */
  ESI = (ESP);
  /* 112010c3 push 0x1122a06c */
  push32((uint32_t)(0x1122a06cu));
  /* 112010c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112010ca call dword ptr [0x11231464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231464))), 0x112010d0u);
  /* 112010d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112010d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112010d5 call 0x11202240 */
  push32(0x112010dau); f_11202240();
  /* 112010da mov esi, esp */
  ESI = (ESP);
  /* 112010dc push 0x1122a064 */
  push32((uint32_t)(0x1122a064u));
  /* 112010e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 112010e3 call dword ptr [0x11231464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231464))), 0x112010e9u);
  /* 112010e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112010ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112010ee call 0x11202240 */
  push32(0x112010f3u); f_11202240();
  /* 112010f3 mov esi, esp */
  ESI = (ESP);
  /* 112010f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 112010f7 push 0x1122f410 */
  push32((uint32_t)(0x1122f410u));
  /* 112010fc call dword ptr [0x11231468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231468))), 0x11201102u);
  /* 11201102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201107 call 0x11202240 */
  push32(0x1120110cu); f_11202240();
  /* 1120110c mov esi, esp */
  ESI = (ESP);
  /* 1120110e push 4 */
  push32((uint32_t)(0x4u));
  /* 11201110 push 0x1122f3f8 */
  push32((uint32_t)(0x1122f3f8u));
  /* 11201115 call dword ptr [0x11231468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231468))), 0x1120111bu);
  /* 1120111b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120111e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201120 call 0x11202240 */
  push32(0x11201125u); f_11202240();
  /* 11201125 mov esi, esp */
  ESI = (ESP);
  /* 11201127 push 0x1122a054 */
  push32((uint32_t)(0x1122a054u));
  /* 1120112c push 0x1122f418 */
  push32((uint32_t)(0x1122f418u));
  /* 11201131 call dword ptr [0x1123146c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123146c))), 0x11201137u);
  /* 11201137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120113a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120113c call 0x11202240 */
  push32(0x11201141u); f_11202240();
  /* 11201141 mov esi, esp */
  ESI = (ESP);
  /* 11201143 push 0x1122a044 */
  push32((uint32_t)(0x1122a044u));
  /* 11201148 push 0x1122f420 */
  push32((uint32_t)(0x1122f420u));
  /* 1120114d call dword ptr [0x1123146c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123146c))), 0x11201153u);
  /* 11201153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201156 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201158 call 0x11202240 */
  push32(0x1120115du); f_11202240();
  /* 1120115d mov esi, esp */
  ESI = (ESP);
  /* 1120115f push 0x1122a03c */
  push32((uint32_t)(0x1122a03cu));
  /* 11201164 push 0x1122f400 */
  push32((uint32_t)(0x1122f400u));
  /* 11201169 call dword ptr [0x11231470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231470))), 0x1120116fu);
  /* 1120116f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201172 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201174 call 0x11202240 */
  push32(0x11201179u); f_11202240();
  /* 11201179 mov esi, esp */
  ESI = (ESP);
  /* 1120117b push 0x1122a034 */
  push32((uint32_t)(0x1122a034u));
  /* 11201180 push 0x1122f408 */
  push32((uint32_t)(0x1122f408u));
  /* 11201185 call dword ptr [0x11231470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231470))), 0x1120118bu);
  /* 1120118b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120118e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201190 call 0x11202240 */
  push32(0x11201195u); f_11202240();
  /* 11201195 mov esi, esp */
  ESI = (ESP);
  /* 11201197 push 0x1122a02c */
  push32((uint32_t)(0x1122a02cu));
  /* 1120119c push 0x1122f3e0 */
  push32((uint32_t)(0x1122f3e0u));
  /* 112011a1 call dword ptr [0x11231474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231474))), 0x112011a7u);
  /* 112011a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112011aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112011ac call 0x11202240 */
  push32(0x112011b1u); f_11202240();
  /* 112011b1 mov esi, esp */
  ESI = (ESP);
  /* 112011b3 push 0x1122a024 */
  push32((uint32_t)(0x1122a024u));
  /* 112011b8 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 112011bd call dword ptr [0x11231474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231474))), 0x112011c3u);
  /* 112011c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112011c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112011c8 call 0x11202240 */
  push32(0x112011cdu); f_11202240();
  /* 112011cd mov esi, esp */
  ESI = (ESP);
  /* 112011cf push 0x1122a01c */
  push32((uint32_t)(0x1122a01cu));
  /* 112011d4 push 0x1122f3e8 */
  push32((uint32_t)(0x1122f3e8u));
  /* 112011d9 call dword ptr [0x11231474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231474))), 0x112011dfu);
  /* 112011df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112011e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112011e4 call 0x11202240 */
  push32(0x112011e9u); f_11202240();
  /* 112011e9 pop edi */
  EDI = (pop32());
  /* 112011ea pop esi */
  ESI = (pop32());
  /* 112011eb pop ebx */
  EBX = (pop32());
  /* 112011ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112011ef cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112011f1 call 0x11202240 */
  push32(0x112011f6u); f_11202240();
  /* 112011f6 mov esp, ebp */
  ESP = (EBP);
  /* 112011f8 pop ebp */
  EBP = (pop32());
  /* 112011f9 ret  */
  ESPCHK(0x11201090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001260 @ 0x11201260 (3097 bytes, 916 insns) */
void f_11201260(void) {
  FTRACE(0x11201260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11201260 push ebp */
  push32((uint32_t)(EBP));
  /* 11201261 mov ebp, esp */
  EBP = (ESP);
  /* 11201263 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201266 push ebx */
  push32((uint32_t)(EBX));
  /* 11201267 push esi */
  push32((uint32_t)(ESI));
  /* 11201268 push edi */
  push32((uint32_t)(EDI));
  /* 11201269 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1120126c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11201271 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11201276 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11201278 mov esi, esp */
  ESI = (ESP);
  /* 1120127a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1120127c call dword ptr [0x11231400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231400))), 0x11201282u);
  /* 11201282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201287 call 0x11202240 */
  push32(0x1120128cu); f_11202240();
  /* 1120128c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201293 je 0x112017c2 */
  if (C.zf) goto L_112017c2;
  /* 11201299 mov esi, esp */
  ESI = (ESP);
  /* 1120129b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120129d call dword ptr [0x11231404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231404))), 0x112012a3u);
  /* 112012a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112012a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112012a8 call 0x11202240 */
  push32(0x112012adu); f_11202240();
  /* 112012ad mov dword ptr [0x1122f410], eax */
  w32((uint32_t)(0x1122f410), (EAX));
  /* 112012b2 mov eax, dword ptr [0x1122f410] */
  EAX = (r32((uint32_t)(0x1122f410)));
  /* 112012b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112012ba imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112012c0 mov dword ptr [0x1122f3f8], eax */
  w32((uint32_t)(0x1122f3f8), (EAX));
  /* 112012c5 mov ecx, dword ptr [0x1122f410] */
  ECX = (r32((uint32_t)(0x1122f410)));
  /* 112012cb imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112012d1 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 112012d6 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112012d8 mov esi, esp */
  ESI = (ESP);
  /* 112012da push edx */
  push32((uint32_t)(EDX));
  /* 112012db push 3 */
  push32((uint32_t)(0x3u));
  /* 112012dd push 0 */
  push32((uint32_t)(0x0u));
  /* 112012df call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112012e5u);
  /* 112012e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112012e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112012ea call 0x11202240 */
  push32(0x112012efu); f_11202240();
  /* 112012ef mov eax, dword ptr [0x1122f410] */
  EAX = (r32((uint32_t)(0x1122f410)));
  /* 112012f4 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112012fa mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 112012ff sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201301 mov esi, esp */
  ESI = (ESP);
  /* 11201303 push ecx */
  push32((uint32_t)(ECX));
  /* 11201304 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201306 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201308 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120130eu);
  /* 1120130e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201311 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201313 call 0x11202240 */
  push32(0x11201318u); f_11202240();
  /* 11201318 mov edx, dword ptr [0x1122f410] */
  EDX = (r32((uint32_t)(0x1122f410)));
  /* 1120131e imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11201324 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11201329 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120132b mov esi, esp */
  ESI = (ESP);
  /* 1120132d push eax */
  push32((uint32_t)(EAX));
  /* 1120132e push 0 */
  push32((uint32_t)(0x0u));
  /* 11201330 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201332 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201338u);
  /* 11201338 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120133b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120133d call 0x11202240 */
  push32(0x11201342u); f_11202240();
  /* 11201342 mov ecx, dword ptr [0x1122f410] */
  ECX = (r32((uint32_t)(0x1122f410)));
  /* 11201348 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120134e mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 11201353 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201355 mov esi, esp */
  ESI = (ESP);
  /* 11201357 push edx */
  push32((uint32_t)(EDX));
  /* 11201358 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120135a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120135c call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201362u);
  /* 11201362 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201365 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201367 call 0x11202240 */
  push32(0x1120136cu); f_11202240();
  /* 1120136c mov eax, dword ptr [0x1122f410] */
  EAX = (r32((uint32_t)(0x1122f410)));
  /* 11201371 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11201377 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 1120137c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120137e mov esi, esp */
  ESI = (ESP);
  /* 11201380 push ecx */
  push32((uint32_t)(ECX));
  /* 11201381 push 5 */
  push32((uint32_t)(0x5u));
  /* 11201383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201385 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120138bu);
  /* 1120138b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120138e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201390 call 0x11202240 */
  push32(0x11201395u); f_11202240();
  /* 11201395 mov edx, dword ptr [0x1122f410] */
  EDX = (r32((uint32_t)(0x1122f410)));
  /* 1120139b imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112013a1 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 112013a6 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112013a8 mov esi, esp */
  ESI = (ESP);
  /* 112013aa push eax */
  push32((uint32_t)(EAX));
  /* 112013ab push 4 */
  push32((uint32_t)(0x4u));
  /* 112013ad push 0 */
  push32((uint32_t)(0x0u));
  /* 112013af call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112013b5u);
  /* 112013b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112013b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112013ba call 0x11202240 */
  push32(0x112013bfu); f_11202240();
  /* 112013bf mov esi, esp */
  ESI = (ESP);
  /* 112013c1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112013c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 112013c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112013ca call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112013d0u);
  /* 112013d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112013d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112013d5 call 0x11202240 */
  push32(0x112013dau); f_11202240();
  /* 112013da mov esi, esp */
  ESI = (ESP);
  /* 112013dc push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112013e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112013e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112013e5 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112013ebu);
  /* 112013eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112013ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112013f0 call 0x11202240 */
  push32(0x112013f5u); f_11202240();
  /* 112013f5 mov esi, esp */
  ESI = (ESP);
  /* 112013f7 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112013fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112013fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11201400 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201406u);
  /* 11201406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120140b call 0x11202240 */
  push32(0x11201410u); f_11202240();
  /* 11201410 mov esi, esp */
  ESI = (ESP);
  /* 11201412 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201417 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201419 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120141b call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201421u);
  /* 11201421 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201426 call 0x11202240 */
  push32(0x1120142bu); f_11202240();
  /* 1120142b mov esi, esp */
  ESI = (ESP);
  /* 1120142d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201432 push 5 */
  push32((uint32_t)(0x5u));
  /* 11201434 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201436 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120143cu);
  /* 1120143c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120143f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201441 call 0x11202240 */
  push32(0x11201446u); f_11202240();
  /* 11201446 mov esi, esp */
  ESI = (ESP);
  /* 11201448 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1120144d push 4 */
  push32((uint32_t)(0x4u));
  /* 1120144f push 1 */
  push32((uint32_t)(0x1u));
  /* 11201451 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201457u);
  /* 11201457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120145a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120145c call 0x11202240 */
  push32(0x11201461u); f_11202240();
  /* 11201461 mov esi, esp */
  ESI = (ESP);
  /* 11201463 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1120146a push 2 */
  push32((uint32_t)(0x2u));
  /* 1120146c call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201472u);
  /* 11201472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201477 call 0x11202240 */
  push32(0x1120147cu); f_11202240();
  /* 1120147c mov esi, esp */
  ESI = (ESP);
  /* 1120147e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201483 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201485 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201487 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120148du);
  /* 1120148d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201492 call 0x11202240 */
  push32(0x11201497u); f_11202240();
  /* 11201497 mov esi, esp */
  ESI = (ESP);
  /* 11201499 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1120149e push 0 */
  push32((uint32_t)(0x0u));
  /* 112014a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112014a2 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112014a8u);
  /* 112014a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112014ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112014ad call 0x11202240 */
  push32(0x112014b2u); f_11202240();
  /* 112014b2 mov esi, esp */
  ESI = (ESP);
  /* 112014b4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112014b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112014bb push 2 */
  push32((uint32_t)(0x2u));
  /* 112014bd call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112014c3u);
  /* 112014c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112014c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112014c8 call 0x11202240 */
  push32(0x112014cdu); f_11202240();
  /* 112014cd mov esi, esp */
  ESI = (ESP);
  /* 112014cf push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112014d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 112014d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112014d8 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112014deu);
  /* 112014de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112014e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112014e3 call 0x11202240 */
  push32(0x112014e8u); f_11202240();
  /* 112014e8 mov esi, esp */
  ESI = (ESP);
  /* 112014ea push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112014ef push 4 */
  push32((uint32_t)(0x4u));
  /* 112014f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112014f3 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x112014f9u);
  /* 112014f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112014fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112014fe call 0x11202240 */
  push32(0x11201503u); f_11202240();
  /* 11201503 mov esi, esp */
  ESI = (ESP);
  /* 11201505 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1120150a push 3 */
  push32((uint32_t)(0x3u));
  /* 1120150c push 3 */
  push32((uint32_t)(0x3u));
  /* 1120150e call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201514u);
  /* 11201514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201519 call 0x11202240 */
  push32(0x1120151eu); f_11202240();
  /* 1120151e mov esi, esp */
  ESI = (ESP);
  /* 11201520 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201525 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201527 push 3 */
  push32((uint32_t)(0x3u));
  /* 11201529 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120152fu);
  /* 1120152f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201534 call 0x11202240 */
  push32(0x11201539u); f_11202240();
  /* 11201539 mov esi, esp */
  ESI = (ESP);
  /* 1120153b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201542 push 3 */
  push32((uint32_t)(0x3u));
  /* 11201544 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120154au);
  /* 1120154a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120154d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120154f call 0x11202240 */
  push32(0x11201554u); f_11202240();
  /* 11201554 mov esi, esp */
  ESI = (ESP);
  /* 11201556 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1120155b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120155d push 3 */
  push32((uint32_t)(0x3u));
  /* 1120155f call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201565u);
  /* 11201565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201568 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120156a call 0x11202240 */
  push32(0x1120156fu); f_11202240();
  /* 1120156f mov esi, esp */
  ESI = (ESP);
  /* 11201571 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201576 push 5 */
  push32((uint32_t)(0x5u));
  /* 11201578 push 3 */
  push32((uint32_t)(0x3u));
  /* 1120157a call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x11201580u);
  /* 11201580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201585 call 0x11202240 */
  push32(0x1120158au); f_11202240();
  /* 1120158a mov esi, esp */
  ESI = (ESP);
  /* 1120158c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11201591 push 4 */
  push32((uint32_t)(0x4u));
  /* 11201593 push 3 */
  push32((uint32_t)(0x3u));
  /* 11201595 call dword ptr [0x11231408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231408))), 0x1120159bu);
  /* 1120159b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120159e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112015a0 call 0x11202240 */
  push32(0x112015a5u); f_11202240();
  /* 112015a5 mov esi, esp */
  ESI = (ESP);
  /* 112015a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112015a9 push 0x1122f418 */
  push32((uint32_t)(0x1122f418u));
  /* 112015ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112015b0 call dword ptr [0x1123140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123140c))), 0x112015b6u);
  /* 112015b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112015b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112015bb call 0x11202240 */
  push32(0x112015c0u); f_11202240();
  /* 112015c0 mov esi, esp */
  ESI = (ESP);
  /* 112015c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112015c4 push 0x1122f420 */
  push32((uint32_t)(0x1122f420u));
  /* 112015c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112015cb call dword ptr [0x1123140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123140c))), 0x112015d1u);
  /* 112015d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112015d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112015d6 call 0x11202240 */
  push32(0x112015dbu); f_11202240();
  /* 112015db mov esi, esp */
  ESI = (ESP);
  /* 112015dd push 0xf */
  push32((uint32_t)(0xfu));
  /* 112015df push 1 */
  push32((uint32_t)(0x1u));
  /* 112015e1 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x112015e7u);
  /* 112015e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112015ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112015ec call 0x11202240 */
  push32(0x112015f1u); f_11202240();
  /* 112015f1 mov esi, esp */
  ESI = (ESP);
  /* 112015f3 push 0xe */
  push32((uint32_t)(0xeu));
  /* 112015f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 112015f7 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x112015fdu);
  /* 112015fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201600 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201602 call 0x11202240 */
  push32(0x11201607u); f_11202240();
  /* 11201607 mov esi, esp */
  ESI = (ESP);
  /* 11201609 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1120160b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120160d call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201613u);
  /* 11201613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201616 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201618 call 0x11202240 */
  push32(0x1120161du); f_11202240();
  /* 1120161d mov esi, esp */
  ESI = (ESP);
  /* 1120161f push 0 */
  push32((uint32_t)(0x0u));
  /* 11201621 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 11201626 call dword ptr [0x11231414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231414))), 0x1120162cu);
  /* 1120162c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120162f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201631 call 0x11202240 */
  push32(0x11201636u); f_11202240();
  /* 11201636 mov esi, esp */
  ESI = (ESP);
  /* 11201638 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120163a call dword ptr [0x11231418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231418))), 0x11201640u);
  /* 11201640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201645 call 0x11202240 */
  push32(0x1120164au); f_11202240();
  /* 1120164a mov esi, esp */
  ESI = (ESP);
  /* 1120164c mov ecx, dword ptr [0x1122f410] */
  ECX = (r32((uint32_t)(0x1122f410)));
  /* 11201652 push ecx */
  push32((uint32_t)(ECX));
  /* 11201653 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201657 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201659 push 0x1122a0e8 */
  push32((uint32_t)(0x1122a0e8u));
  /* 1120165e push 1 */
  push32((uint32_t)(0x1u));
  /* 11201660 call dword ptr [0x1123141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123141c))), 0x11201666u);
  /* 11201666 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120166b call 0x11202240 */
  push32(0x11201670u); f_11202240();
  /* 11201670 mov esi, esp */
  ESI = (ESP);
  /* 11201672 mov edx, dword ptr [0x1122f410] */
  EDX = (r32((uint32_t)(0x1122f410)));
  /* 11201678 push edx */
  push32((uint32_t)(EDX));
  /* 11201679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120167b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120167d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120167f push 0x1122a0dc */
  push32((uint32_t)(0x1122a0dcu));
  /* 11201684 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201686 call dword ptr [0x1123141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123141c))), 0x1120168cu);
  /* 1120168c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120168f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201691 call 0x11202240 */
  push32(0x11201696u); f_11202240();
  /* 11201696 mov esi, esp */
  ESI = (ESP);
  /* 11201698 mov eax, dword ptr [0x1122f410] */
  EAX = (r32((uint32_t)(0x1122f410)));
  /* 1120169d push eax */
  push32((uint32_t)(EAX));
  /* 1120169e push 0 */
  push32((uint32_t)(0x0u));
  /* 112016a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112016a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112016a4 push 0x1122a0d0 */
  push32((uint32_t)(0x1122a0d0u));
  /* 112016a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112016ab call dword ptr [0x1123141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123141c))), 0x112016b1u);
  /* 112016b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112016b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112016b6 call 0x11202240 */
  push32(0x112016bbu); f_11202240();
  /* 112016bb mov esi, esp */
  ESI = (ESP);
  /* 112016bd push 0 */
  push32((uint32_t)(0x0u));
  /* 112016bf push 1 */
  push32((uint32_t)(0x1u));
  /* 112016c1 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x112016c7u);
  /* 112016c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112016ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112016cc call 0x11202240 */
  push32(0x112016d1u); f_11202240();
  /* 112016d1 mov esi, esp */
  ESI = (ESP);
  /* 112016d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112016d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112016d7 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x112016ddu);
  /* 112016dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112016e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112016e2 call 0x11202240 */
  push32(0x112016e7u); f_11202240();
  /* 112016e7 mov esi, esp */
  ESI = (ESP);
  /* 112016e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112016eb push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 112016f0 call dword ptr [0x11231414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231414))), 0x112016f6u);
  /* 112016f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112016f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112016fb call 0x11202240 */
  push32(0x11201700u); f_11202240();
  /* 11201700 mov esi, esp */
  ESI = (ESP);
  /* 11201702 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201704 call dword ptr [0x11231418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231418))), 0x1120170au);
  /* 1120170a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120170f call 0x11202240 */
  push32(0x11201714u); f_11202240();
  /* 11201714 mov esi, esp */
  ESI = (ESP);
  /* 11201716 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11201718 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120171a call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201720u);
  /* 11201720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201725 call 0x11202240 */
  push32(0x1120172au); f_11202240();
  /* 1120172a mov esi, esp */
  ESI = (ESP);
  /* 1120172c push 0xe */
  push32((uint32_t)(0xeu));
  /* 1120172e push 5 */
  push32((uint32_t)(0x5u));
  /* 11201730 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201736u);
  /* 11201736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120173b call 0x11202240 */
  push32(0x11201740u); f_11202240();
  /* 11201740 mov esi, esp */
  ESI = (ESP);
  /* 11201742 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201744 push 0x1122f3e0 */
  push32((uint32_t)(0x1122f3e0u));
  /* 11201749 call dword ptr [0x11231414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231414))), 0x1120174fu);
  /* 1120174f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201754 call 0x11202240 */
  push32(0x11201759u); f_11202240();
  /* 11201759 mov esi, esp */
  ESI = (ESP);
  /* 1120175b push 5 */
  push32((uint32_t)(0x5u));
  /* 1120175d call dword ptr [0x11231424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231424))), 0x11201763u);
  /* 11201763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201768 call 0x11202240 */
  push32(0x1120176du); f_11202240();
  /* 1120176d mov esi, esp */
  ESI = (ESP);
  /* 1120176f push 0x1122a0c8 */
  push32((uint32_t)(0x1122a0c8u));
  /* 11201774 call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x1120177au);
  /* 1120177a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120177d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120177f call 0x11202240 */
  push32(0x11201784u); f_11202240();
  /* 11201784 mov ecx, dword ptr [0x1122f410] */
  ECX = (r32((uint32_t)(0x1122f410)));
  /* 1120178a imul ecx, ecx, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2bcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11201790 mov edx, 0xbb8 */
  EDX = (0xbb8u);
  /* 11201795 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201797 mov esi, esp */
  ESI = (ESP);
  /* 11201799 push edx */
  push32((uint32_t)(EDX));
  /* 1120179a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120179c call dword ptr [0x1123142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123142c))), 0x112017a2u);
  /* 112017a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112017a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112017a7 call 0x11202240 */
  push32(0x112017acu); f_11202240();
  /* 112017ac mov esi, esp */
  ESI = (ESP);
  /* 112017ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112017b0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 112017b2 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x112017b8u);
  /* 112017b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112017bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112017bd call 0x11202240 */
  push32(0x112017c2u); f_11202240();
L_112017c2:;
  /* 112017c2 mov esi, esp */
  ESI = (ESP);
  /* 112017c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112017c6 call dword ptr [0x11231430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231430))), 0x112017ccu);
  /* 112017cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112017cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112017d1 call 0x11202240 */
  push32(0x112017d6u); f_11202240();
  /* 112017d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112017db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112017dd je 0x11201842 */
  if (C.zf) goto L_11201842;
  /* 112017df mov esi, esp */
  ESI = (ESP);
  /* 112017e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112017e3 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 112017e8 call dword ptr [0x11231414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231414))), 0x112017eeu);
  /* 112017ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112017f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112017f3 call 0x11202240 */
  push32(0x112017f8u); f_11202240();
  /* 112017f8 mov esi, esp */
  ESI = (ESP);
  /* 112017fa push 0 */
  push32((uint32_t)(0x0u));
  /* 112017fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112017fe push 0x1122f400 */
  push32((uint32_t)(0x1122f400u));
  /* 11201803 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201805 call dword ptr [0x11231434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231434))), 0x1120180bu);
  /* 1120180b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120180e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201810 call 0x11202240 */
  push32(0x11201815u); f_11202240();
  /* 11201815 mov esi, esp */
  ESI = (ESP);
  /* 11201817 push 0x1122a0c0 */
  push32((uint32_t)(0x1122a0c0u));
  /* 1120181c call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201822u);
  /* 11201822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201825 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201827 call 0x11202240 */
  push32(0x1120182cu); f_11202240();
  /* 1120182c mov esi, esp */
  ESI = (ESP);
  /* 1120182e push 1 */
  push32((uint32_t)(0x1u));
  /* 11201830 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201832 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x11201838u);
  /* 11201838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120183b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120183d call 0x11202240 */
  push32(0x11201842u); f_11202240();
L_11201842:;
  /* 11201842 mov esi, esp */
  ESI = (ESP);
  /* 11201844 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201846 call dword ptr [0x11231400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231400))), 0x1120184cu);
  /* 1120184c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120184f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201851 call 0x11202240 */
  push32(0x11201856u); f_11202240();
  /* 11201856 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120185b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120185d je 0x112018fa */
  if (C.zf) goto L_112018fa;
  /* 11201863 mov esi, esp */
  ESI = (ESP);
  /* 11201865 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 1120186a push 0x1122f400 */
  push32((uint32_t)(0x1122f400u));
  /* 1120186f call dword ptr [0x11231438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231438))), 0x11201875u);
  /* 11201875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120187a call 0x11202240 */
  push32(0x1120187fu); f_11202240();
  /* 1120187f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201881 jle 0x112018fa */
  if ((C.zf||C.sf!=C.of)) goto L_112018fa;
  /* 11201883 mov esi, esp */
  ESI = (ESP);
  /* 11201885 push 0x1122a0b8 */
  push32((uint32_t)(0x1122a0b8u));
  /* 1120188a call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201890u);
  /* 11201890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201893 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201895 call 0x11202240 */
  push32(0x1120189au); f_11202240();
  /* 1120189a mov esi, esp */
  ESI = (ESP);
  /* 1120189c push 1 */
  push32((uint32_t)(0x1u));
  /* 1120189e push 1 */
  push32((uint32_t)(0x1u));
  /* 112018a0 push 0x1122f400 */
  push32((uint32_t)(0x1122f400u));
  /* 112018a5 call dword ptr [0x1123143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123143c))), 0x112018abu);
  /* 112018ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112018ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112018b0 call 0x11202240 */
  push32(0x112018b5u); f_11202240();
  /* 112018b5 mov esi, esp */
  ESI = (ESP);
  /* 112018b7 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112018bc push 2 */
  push32((uint32_t)(0x2u));
  /* 112018be call dword ptr [0x1123142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123142c))), 0x112018c4u);
  /* 112018c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112018c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112018c9 call 0x11202240 */
  push32(0x112018ceu); f_11202240();
  /* 112018ce mov esi, esp */
  ESI = (ESP);
  /* 112018d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112018d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112018d4 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x112018dau);
  /* 112018da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112018dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112018df call 0x11202240 */
  push32(0x112018e4u); f_11202240();
  /* 112018e4 mov esi, esp */
  ESI = (ESP);
  /* 112018e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112018e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112018ea call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x112018f0u);
  /* 112018f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112018f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112018f5 call 0x11202240 */
  push32(0x112018fau); f_11202240();
L_112018fa:;
  /* 112018fa mov esi, esp */
  ESI = (ESP);
  /* 112018fc push 2 */
  push32((uint32_t)(0x2u));
  /* 112018fe call dword ptr [0x11231400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231400))), 0x11201904u);
  /* 11201904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201909 call 0x11202240 */
  push32(0x1120190eu); f_11202240();
  /* 1120190e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201915 je 0x11201c54 */
  if (C.zf) goto L_11201c54;
  /* 1120191b mov esi, esp */
  ESI = (ESP);
  /* 1120191d push 0x1122f3e8 */
  push32((uint32_t)(0x1122f3e8u));
  /* 11201922 push 0x1122f400 */
  push32((uint32_t)(0x1122f400u));
  /* 11201927 call dword ptr [0x11231438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231438))), 0x1120192du);
  /* 1120192d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201930 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201932 call 0x11202240 */
  push32(0x11201937u); f_11202240();
  /* 11201937 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201939 jle 0x11201c54 */
  if ((C.zf||C.sf!=C.of)) goto L_11201c54;
  /* 1120193f mov esi, esp */
  ESI = (ESP);
  /* 11201941 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 11201946 push 0x1122f400 */
  push32((uint32_t)(0x1122f400u));
  /* 1120194b call dword ptr [0x11231438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231438))), 0x11201951u);
  /* 11201951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201954 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201956 call 0x11202240 */
  push32(0x1120195bu); f_11202240();
  /* 1120195b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120195d jle 0x11201c54 */
  if ((C.zf||C.sf!=C.of)) goto L_11201c54;
  /* 11201963 mov esi, esp */
  ESI = (ESP);
  /* 11201965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201967 call dword ptr [0x11231440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231440))), 0x1120196du);
  /* 1120196d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201970 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201972 call 0x11202240 */
  push32(0x11201977u); f_11202240();
  /* 11201977 mov esi, esp */
  ESI = (ESP);
  /* 11201979 push 0x1122a0b0 */
  push32((uint32_t)(0x1122a0b0u));
  /* 1120197e call dword ptr [0x11231444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231444))), 0x11201984u);
  /* 11201984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201989 call 0x11202240 */
  push32(0x1120198eu); f_11202240();
  /* 1120198e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201995 je 0x11201bae */
  if (C.zf) goto L_11201bae;
  /* 1120199b mov esi, esp */
  ESI = (ESP);
  /* 1120199d push 1 */
  push32((uint32_t)(0x1u));
  /* 1120199f push 0 */
  push32((uint32_t)(0x0u));
  /* 112019a1 call dword ptr [0x11231448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231448))), 0x112019a7u);
  /* 112019a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112019aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112019ac call 0x11202240 */
  push32(0x112019b1u); f_11202240();
  /* 112019b1 cmp eax, 0x3e7 */
  { uint32_t _a=(EAX),_b=(0x3e7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112019b6 jle 0x11201af2 */
  if ((C.zf||C.sf!=C.of)) goto L_11201af2;
  /* 112019bc mov esi, esp */
  ESI = (ESP);
  /* 112019be push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 112019c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112019c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112019c7 call dword ptr [0x1123144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123144c))), 0x112019cdu);
  /* 112019cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112019d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112019d2 call 0x11202240 */
  push32(0x112019d7u); f_11202240();
  /* 112019d7 mov esi, esp */
  ESI = (ESP);
  /* 112019d9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 112019de push 1 */
  push32((uint32_t)(0x1u));
  /* 112019e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112019e2 call dword ptr [0x1123144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123144c))), 0x112019e8u);
  /* 112019e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112019eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112019ed call 0x11202240 */
  push32(0x112019f2u); f_11202240();
  /* 112019f2 mov esi, esp */
  ESI = (ESP);
  /* 112019f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112019f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112019f8 call dword ptr [0x11231448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231448))), 0x112019feu);
  /* 112019fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a03 call 0x11202240 */
  push32(0x11201a08u); f_11202240();
  /* 11201a08 cmp eax, 0x3e7 */
  { uint32_t _a=(EAX),_b=(0x3e7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a0d jle 0x11201a99 */
  if ((C.zf||C.sf!=C.of)) goto L_11201a99;
  /* 11201a13 mov esi, esp */
  ESI = (ESP);
  /* 11201a15 push 0x1122a0a8 */
  push32((uint32_t)(0x1122a0a8u));
  /* 11201a1a call dword ptr [0x11231444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231444))), 0x11201a20u);
  /* 11201a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a25 call 0x11202240 */
  push32(0x11201a2au); f_11202240();
  /* 11201a2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201a31 je 0x11201a81 */
  if (C.zf) goto L_11201a81;
  /* 11201a33 mov esi, esp */
  ESI = (ESP);
  /* 11201a35 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 11201a3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11201a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11201a3e call dword ptr [0x1123144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123144c))), 0x11201a44u);
  /* 11201a44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201a47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a49 call 0x11202240 */
  push32(0x11201a4eu); f_11202240();
  /* 11201a4e mov esi, esp */
  ESI = (ESP);
  /* 11201a50 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11201a55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201a59 call dword ptr [0x1123144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123144c))), 0x11201a5fu);
  /* 11201a5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a64 call 0x11202240 */
  push32(0x11201a69u); f_11202240();
  /* 11201a69 mov esi, esp */
  ESI = (ESP);
  /* 11201a6b push 0xf */
  push32((uint32_t)(0xfu));
  /* 11201a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11201a6f call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201a75u);
  /* 11201a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a7a call 0x11202240 */
  push32(0x11201a7fu); f_11202240();
  /* 11201a7f jmp 0x11201a97 */
  goto L_11201a97;
L_11201a81:;
  /* 11201a81 mov esi, esp */
  ESI = (ESP);
  /* 11201a83 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201a85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201a87 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201a8du);
  /* 11201a8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201a90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201a92 call 0x11202240 */
  push32(0x11201a97u); f_11202240();
L_11201a97:;
  /* 11201a97 jmp 0x11201aaf */
  goto L_11201aaf;
L_11201a99:;
  /* 11201a99 mov esi, esp */
  ESI = (ESP);
  /* 11201a9b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11201a9f call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201aa5u);
  /* 11201aa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201aaa call 0x11202240 */
  push32(0x11201aafu); f_11202240();
L_11201aaf:;
  /* 11201aaf mov esi, esp */
  ESI = (ESP);
  /* 11201ab1 push 0x1122a0a0 */
  push32((uint32_t)(0x1122a0a0u));
  /* 11201ab6 call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201abcu);
  /* 11201abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201ac1 call 0x11202240 */
  push32(0x11201ac6u); f_11202240();
  /* 11201ac6 mov eax, dword ptr [0x1122f410] */
  EAX = (r32((uint32_t)(0x1122f410)));
  /* 11201acb imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11201ad1 mov ecx, 0x3a98 */
  ECX = (0x3a98u);
  /* 11201ad6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201ad8 mov esi, esp */
  ESI = (ESP);
  /* 11201ada push ecx */
  push32((uint32_t)(ECX));
  /* 11201adb push 1 */
  push32((uint32_t)(0x1u));
  /* 11201add call dword ptr [0x1123142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123142c))), 0x11201ae3u);
  /* 11201ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201ae8 call 0x11202240 */
  push32(0x11201aedu); f_11202240();
  /* 11201aed jmp 0x11201bac */
  goto L_11201bac;
L_11201af2:;
  /* 11201af2 mov esi, esp */
  ESI = (ESP);
  /* 11201af4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11201af6 call dword ptr [0x11231400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231400))), 0x11201afcu);
  /* 11201afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201aff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201b01 call 0x11202240 */
  push32(0x11201b06u); f_11202240();
  /* 11201b06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201b0d je 0x11201b66 */
  if (C.zf) goto L_11201b66;
  /* 11201b0f mov esi, esp */
  ESI = (ESP);
  /* 11201b11 push 0x1122a098 */
  push32((uint32_t)(0x1122a098u));
  /* 11201b16 call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201b1cu);
  /* 11201b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201b21 call 0x11202240 */
  push32(0x11201b26u); f_11202240();
  /* 11201b26 mov esi, esp */
  ESI = (ESP);
  /* 11201b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201b2a push 3 */
  push32((uint32_t)(0x3u));
  /* 11201b2c call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x11201b32u);
  /* 11201b32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201b35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201b37 call 0x11202240 */
  push32(0x11201b3cu); f_11202240();
  /* 11201b3c mov edx, dword ptr [0x1122f410] */
  EDX = (r32((uint32_t)(0x1122f410)));
  /* 11201b42 imul edx, edx, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2bcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11201b48 mov eax, 0x1388 */
  EAX = (0x1388u);
  /* 11201b4d sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11201b4f mov esi, esp */
  ESI = (ESP);
  /* 11201b51 push eax */
  push32((uint32_t)(EAX));
  /* 11201b52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201b54 call dword ptr [0x1123142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123142c))), 0x11201b5au);
  /* 11201b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201b5f call 0x11202240 */
  push32(0x11201b64u); f_11202240();
  /* 11201b64 jmp 0x11201bac */
  goto L_11201bac;
L_11201b66:;
  /* 11201b66 mov esi, esp */
  ESI = (ESP);
  /* 11201b68 push 0x1122a090 */
  push32((uint32_t)(0x1122a090u));
  /* 11201b6d call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201b73u);
  /* 11201b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201b76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201b78 call 0x11202240 */
  push32(0x11201b7du); f_11202240();
  /* 11201b7d mov esi, esp */
  ESI = (ESP);
  /* 11201b7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11201b84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201b86 call dword ptr [0x1123142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123142c))), 0x11201b8cu);
  /* 11201b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201b8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201b91 call 0x11202240 */
  push32(0x11201b96u); f_11202240();
  /* 11201b96 mov esi, esp */
  ESI = (ESP);
  /* 11201b98 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201b9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11201b9c call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201ba2u);
  /* 11201ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201ba5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201ba7 call 0x11202240 */
  push32(0x11201bacu); f_11202240();
L_11201bac:;
  /* 11201bac jmp 0x11201bf4 */
  goto L_11201bf4;
L_11201bae:;
  /* 11201bae mov esi, esp */
  ESI = (ESP);
  /* 11201bb0 push 0x1122a088 */
  push32((uint32_t)(0x1122a088u));
  /* 11201bb5 call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201bbbu);
  /* 11201bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201bc0 call 0x11202240 */
  push32(0x11201bc5u); f_11202240();
  /* 11201bc5 mov esi, esp */
  ESI = (ESP);
  /* 11201bc7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11201bcc push 2 */
  push32((uint32_t)(0x2u));
  /* 11201bce call dword ptr [0x1123142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123142c))), 0x11201bd4u);
  /* 11201bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201bd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201bd9 call 0x11202240 */
  push32(0x11201bdeu); f_11202240();
  /* 11201bde mov esi, esp */
  ESI = (ESP);
  /* 11201be0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201be2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201be4 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201beau);
  /* 11201bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201bef call 0x11202240 */
  push32(0x11201bf4u); f_11202240();
L_11201bf4:;
  /* 11201bf4 mov esi, esp */
  ESI = (ESP);
  /* 11201bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201bfa call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x11201c00u);
  /* 11201c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201c05 call 0x11202240 */
  push32(0x11201c0au); f_11202240();
  /* 11201c0a mov esi, esp */
  ESI = (ESP);
  /* 11201c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11201c0e push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 11201c13 call dword ptr [0x11231414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231414))), 0x11201c19u);
  /* 11201c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201c1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201c1e call 0x11202240 */
  push32(0x11201c23u); f_11202240();
  /* 11201c23 mov esi, esp */
  ESI = (ESP);
  /* 11201c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201c29 push 0x1122f408 */
  push32((uint32_t)(0x1122f408u));
  /* 11201c2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11201c30 call dword ptr [0x11231434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231434))), 0x11201c36u);
  /* 11201c36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201c3b call 0x11202240 */
  push32(0x11201c40u); f_11202240();
  /* 11201c40 mov esi, esp */
  ESI = (ESP);
  /* 11201c42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201c44 call dword ptr [0x11231450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231450))), 0x11201c4au);
  /* 11201c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201c4f call 0x11202240 */
  push32(0x11201c54u); f_11202240();
L_11201c54:;
  /* 11201c54 mov esi, esp */
  ESI = (ESP);
  /* 11201c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201c58 call dword ptr [0x11231430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231430))), 0x11201c5eu);
  /* 11201c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201c63 call 0x11202240 */
  push32(0x11201c68u); f_11202240();
  /* 11201c68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201c6f je 0x11201cd3 */
  if (C.zf) goto L_11201cd3;
  /* 11201c71 mov esi, esp */
  ESI = (ESP);
  /* 11201c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201c75 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 11201c7a call dword ptr [0x11231414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231414))), 0x11201c80u);
  /* 11201c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201c85 call 0x11202240 */
  push32(0x11201c8au); f_11202240();
  /* 11201c8a mov esi, esp */
  ESI = (ESP);
  /* 11201c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11201c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11201c90 push 0x1122f408 */
  push32((uint32_t)(0x1122f408u));
  /* 11201c95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201c97 call dword ptr [0x11231434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231434))), 0x11201c9du);
  /* 11201c9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201ca2 call 0x11202240 */
  push32(0x11201ca7u); f_11202240();
  /* 11201ca7 mov esi, esp */
  ESI = (ESP);
  /* 11201ca9 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201cab push 1 */
  push32((uint32_t)(0x1u));
  /* 11201cad call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201cb3u);
  /* 11201cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201cb8 call 0x11202240 */
  push32(0x11201cbdu); f_11202240();
  /* 11201cbd mov esi, esp */
  ESI = (ESP);
  /* 11201cbf push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201cc3 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201cc9u);
  /* 11201cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201cce call 0x11202240 */
  push32(0x11201cd3u); f_11202240();
L_11201cd3:;
  /* 11201cd3 mov esi, esp */
  ESI = (ESP);
  /* 11201cd5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11201cd7 call dword ptr [0x11231454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231454))), 0x11201cddu);
  /* 11201cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201ce2 call 0x11202240 */
  push32(0x11201ce7u); f_11202240();
  /* 11201ce7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201cec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201cee je 0x11201d7c */
  if (C.zf) goto L_11201d7c;
  /* 11201cf4 mov esi, esp */
  ESI = (ESP);
  /* 11201cf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201cf8 call dword ptr [0x11231454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231454))), 0x11201cfeu);
  /* 11201cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d03 call 0x11202240 */
  push32(0x11201d08u); f_11202240();
  /* 11201d08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201d0f je 0x11201d7c */
  if (C.zf) goto L_11201d7c;
  /* 11201d11 mov esi, esp */
  ESI = (ESP);
  /* 11201d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201d15 call dword ptr [0x11231454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231454))), 0x11201d1bu);
  /* 11201d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201d1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d20 call 0x11202240 */
  push32(0x11201d25u); f_11202240();
  /* 11201d25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201d2c je 0x11201d7c */
  if (C.zf) goto L_11201d7c;
  /* 11201d2e mov esi, esp */
  ESI = (ESP);
  /* 11201d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201d32 call dword ptr [0x11231440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231440))), 0x11201d38u);
  /* 11201d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d3d call 0x11202240 */
  push32(0x11201d42u); f_11202240();
  /* 11201d42 mov esi, esp */
  ESI = (ESP);
  /* 11201d44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11201d46 call dword ptr [0x11231440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231440))), 0x11201d4cu);
  /* 11201d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d51 call 0x11202240 */
  push32(0x11201d56u); f_11202240();
  /* 11201d56 mov esi, esp */
  ESI = (ESP);
  /* 11201d58 push 0x1122a080 */
  push32((uint32_t)(0x1122a080u));
  /* 11201d5d call dword ptr [0x11231428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231428))), 0x11201d63u);
  /* 11201d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d68 call 0x11202240 */
  push32(0x11201d6du); f_11202240();
  /* 11201d6d mov esi, esp */
  ESI = (ESP);
  /* 11201d6f call dword ptr [0x11231458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231458))), 0x11201d75u);
  /* 11201d75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d77 call 0x11202240 */
  push32(0x11201d7cu); f_11202240();
L_11201d7c:;
  /* 11201d7c mov esi, esp */
  ESI = (ESP);
  /* 11201d7e push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11201d80 call dword ptr [0x11231400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231400))), 0x11201d86u);
  /* 11201d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201d8b call 0x11202240 */
  push32(0x11201d90u); f_11202240();
  /* 11201d90 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201d97 je 0x11201e03 */
  if (C.zf) goto L_11201e03;
  /* 11201d99 mov esi, esp */
  ESI = (ESP);
  /* 11201d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11201d9d call dword ptr [0x11231454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231454))), 0x11201da3u);
  /* 11201da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201da6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201da8 call 0x11202240 */
  push32(0x11201dadu); f_11202240();
  /* 11201dad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201db4 je 0x11201e03 */
  if (C.zf) goto L_11201e03;
  /* 11201db6 mov esi, esp */
  ESI = (ESP);
  /* 11201db8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201dba call dword ptr [0x11231440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231440))), 0x11201dc0u);
  /* 11201dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201dc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201dc5 call 0x11202240 */
  push32(0x11201dcau); f_11202240();
  /* 11201dca mov esi, esp */
  ESI = (ESP);
  /* 11201dcc push 2 */
  push32((uint32_t)(0x2u));
  /* 11201dce call dword ptr [0x11231440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231440))), 0x11201dd4u);
  /* 11201dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201dd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201dd9 call 0x11202240 */
  push32(0x11201ddeu); f_11202240();
  /* 11201dde mov esi, esp */
  ESI = (ESP);
  /* 11201de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201de2 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11201de4 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x11201deau);
  /* 11201dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201ded cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201def call 0x11202240 */
  push32(0x11201df4u); f_11202240();
  /* 11201df4 mov esi, esp */
  ESI = (ESP);
  /* 11201df6 call dword ptr [0x1123145c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123145c))), 0x11201dfcu);
  /* 11201dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201dfe call 0x11202240 */
  push32(0x11201e03u); f_11202240();
L_11201e03:;
  /* 11201e03 mov esi, esp */
  ESI = (ESP);
  /* 11201e05 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11201e07 call dword ptr [0x11231400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231400))), 0x11201e0du);
  /* 11201e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201e10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201e12 call 0x11202240 */
  push32(0x11201e17u); f_11202240();
  /* 11201e17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11201e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11201e1e je 0x11201e68 */
  if (C.zf) goto L_11201e68;
  /* 11201e20 mov esi, esp */
  ESI = (ESP);
  /* 11201e22 push 0x1122f3f0 */
  push32((uint32_t)(0x1122f3f0u));
  /* 11201e27 call dword ptr [0x11231460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231460))), 0x11201e2du);
  /* 11201e2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201e30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201e32 call 0x11202240 */
  push32(0x11201e37u); f_11202240();
  /* 11201e37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201e3a jge 0x11201e68 */
  if ((C.sf==C.of)) goto L_11201e68;
  /* 11201e3c mov esi, esp */
  ESI = (ESP);
  /* 11201e3e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11201e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11201e42 call dword ptr [0x11231410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231410))), 0x11201e48u);
  /* 11201e48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201e4d call 0x11202240 */
  push32(0x11201e52u); f_11202240();
  /* 11201e52 mov esi, esp */
  ESI = (ESP);
  /* 11201e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11201e56 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11201e58 call dword ptr [0x11231420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231420))), 0x11201e5eu);
  /* 11201e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201e61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201e63 call 0x11202240 */
  push32(0x11201e68u); f_11202240();
L_11201e68:;
  /* 11201e68 pop edi */
  EDI = (pop32());
  /* 11201e69 pop esi */
  ESI = (pop32());
  /* 11201e6a pop ebx */
  EBX = (pop32());
  /* 11201e6b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11201e6e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11201e70 call 0x11202240 */
  push32(0x11201e75u); f_11202240();
  /* 11201e75 mov esp, ebp */
  ESP = (EBP);
  /* 11201e77 pop ebp */
  EBP = (pop32());
  /* 11201e78 ret  */
  ESPCHK(0x11201260u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11202240 (56 bytes, 28 insns) */
void f_11202240(void) {
  FTRACE(0x11202240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202240 jne 0x11202243 */
  if (!C.zf) goto L_11202243;
  /* 11202242 ret  */
  ESPCHK(0x11202240u, _esp0);
  ESP += 4; return;
L_11202243:;
  /* 11202243 push ebp */
  push32((uint32_t)(EBP));
  /* 11202244 mov ebp, esp */
  EBP = (ESP);
  /* 11202246 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11202249 push eax */
  push32((uint32_t)(EAX));
  /* 1120224a push edx */
  push32((uint32_t)(EDX));
  /* 1120224b push ebx */
  push32((uint32_t)(EBX));
  /* 1120224c push esi */
  push32((uint32_t)(ESI));
  /* 1120224d push edi */
  push32((uint32_t)(EDI));
  /* 1120224e push 0x1122a108 */
  push32((uint32_t)(0x1122a108u));
  /* 11202253 push 0x1122a104 */
  push32((uint32_t)(0x1122a104u));
  /* 11202258 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1120225a push 0x1122a0f4 */
  push32((uint32_t)(0x1122a0f4u));
  /* 1120225f push 1 */
  push32((uint32_t)(0x1u));
  /* 11202261 call 0x11202610 */
  push32(0x11202266u); f_11202610();
  /* 11202266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202269 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120226c jne 0x1120226f */
  if (!C.zf) goto L_1120226f;
  /* 1120226e int3  */
  x86_unimpl("int3 @ 0x1120226e");
L_1120226f:;
  /* 1120226f pop edi */
  EDI = (pop32());
  /* 11202270 pop esi */
  ESI = (pop32());
  /* 11202271 pop ebx */
  EBX = (pop32());
  /* 11202272 pop edx */
  EDX = (pop32());
  /* 11202273 pop eax */
  EAX = (pop32());
  /* 11202274 mov esp, ebp */
  ESP = (EBP);
  /* 11202276 pop ebp */
  EBP = (pop32());
  /* 11202277 ret  */
  ESPCHK(0x11202240u, _esp0);
  ESP += 4; return;
}

/* FUN_10002280 @ 0x11202280 (313 bytes, 78 insns) */
void f_11202280(void) {
  FTRACE(0x11202280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202280 push ebp */
  push32((uint32_t)(EBP));
  /* 11202281 mov ebp, esp */
  EBP = (ESP);
  /* 11202283 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202287 jne 0x11202347 */
  if (!C.zf) goto L_11202347;
  /* 1120228d call dword ptr [0x112312f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312f8))), 0x11202293u);
  /* 11202293 mov dword ptr [0x1122f458], eax */
  w32((uint32_t)(0x1122f458), (EAX));
  /* 11202298 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120229a call 0x11205d40 */
  push32(0x1120229fu); f_11205d40();
  /* 1120229f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112022a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112022a4 jne 0x112022ad */
  if (!C.zf) goto L_112022ad;
  /* 112022a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112022a8 jmp 0x112023b5 */
  goto L_112023b5;
L_112022ad:;
  /* 112022ad mov eax, dword ptr [0x1122f458] */
  EAX = (r32((uint32_t)(0x1122f458)));
  /* 112022b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112022b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112022ba mov dword ptr [0x1122f464], eax */
  w32((uint32_t)(0x1122f464), (EAX));
  /* 112022bf mov ecx, dword ptr [0x1122f458] */
  ECX = (r32((uint32_t)(0x1122f458)));
  /* 112022c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112022cb mov dword ptr [0x1122f460], ecx */
  w32((uint32_t)(0x1122f460), (ECX));
  /* 112022d1 mov edx, dword ptr [0x1122f460] */
  EDX = (r32((uint32_t)(0x1122f460)));
  /* 112022d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112022da add edx, dword ptr [0x1122f464] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122f464))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112022e0 mov dword ptr [0x1122f45c], edx */
  w32((uint32_t)(0x1122f45c), (EDX));
  /* 112022e6 mov eax, dword ptr [0x1122f458] */
  EAX = (r32((uint32_t)(0x1122f458)));
  /* 112022eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112022ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112022f3 mov dword ptr [0x1122f458], eax */
  w32((uint32_t)(0x1122f458), (EAX));
  /* 112022f8 call 0x11202eb0 */
  push32(0x112022fdu); f_11202eb0();
  /* 112022fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112022ff jne 0x1120230d */
  if (!C.zf) goto L_1120230d;
  /* 11202301 call 0x11205d90 */
  push32(0x11202306u); f_11205d90();
  /* 11202306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11202308 jmp 0x112023b5 */
  goto L_112023b5;
L_1120230d:;
  /* 1120230d call dword ptr [0x112312f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312f4))), 0x11202313u);
  /* 11202313 mov dword ptr [0x11230fac], eax */
  w32((uint32_t)(0x11230fac), (EAX));
  /* 11202318 call 0x11205b20 */
  push32(0x1120231du); f_11205b20();
  /* 1120231d mov dword ptr [0x1122f440], eax */
  w32((uint32_t)(0x1122f440), (EAX));
  /* 11202322 call 0x11203160 */
  push32(0x11202327u); f_11203160();
  /* 11202327 call 0x11205610 */
  push32(0x1120232cu); f_11205610();
  /* 1120232c call 0x112054c0 */
  push32(0x11202331u); f_112054c0();
  /* 11202331 call 0x11202cb0 */
  push32(0x11202336u); f_11202cb0();
  /* 11202336 mov ecx, dword ptr [0x1122f43c] */
  ECX = (r32((uint32_t)(0x1122f43c)));
  /* 1120233c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120233f mov dword ptr [0x1122f43c], ecx */
  w32((uint32_t)(0x1122f43c), (ECX));
  /* 11202345 jmp 0x112023b0 */
  goto L_112023b0;
L_11202347:;
  /* 11202347 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120234b jne 0x112023a0 */
  if (!C.zf) goto L_112023a0;
  /* 1120234d cmp dword ptr [0x1122f43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202354 jle 0x1120239a */
  if ((C.zf||C.sf!=C.of)) goto L_1120239a;
  /* 11202356 mov edx, dword ptr [0x1122f43c] */
  EDX = (r32((uint32_t)(0x1122f43c)));
  /* 1120235c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120235f mov dword ptr [0x1122f43c], edx */
  w32((uint32_t)(0x1122f43c), (EDX));
  /* 11202365 cmp dword ptr [0x1122f490], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f490))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120236c jne 0x11202373 */
  if (!C.zf) goto L_11202373;
  /* 1120236e call 0x11202d30 */
  push32(0x11202373u); f_11202d30();
L_11202373:;
  /* 11202373 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11202375 call 0x11204a60 */
  push32(0x1120237au); f_11204a60();
  /* 1120237a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120237d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11202380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11202382 je 0x11202389 */
  if (C.zf) goto L_11202389;
  /* 11202384 call 0x11205370 */
  push32(0x11202389u); f_11205370();
L_11202389:;
  /* 11202389 call 0x11203490 */
  push32(0x1120238eu); f_11203490();
  /* 1120238e call 0x11202f40 */
  push32(0x11202393u); f_11202f40();
  /* 11202393 call 0x11205d90 */
  push32(0x11202398u); f_11205d90();
  /* 11202398 jmp 0x1120239e */
  goto L_1120239e;
L_1120239a:;
  /* 1120239a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120239c jmp 0x112023b5 */
  goto L_112023b5;
L_1120239e:;
  /* 1120239e jmp 0x112023b0 */
  goto L_112023b0;
L_112023a0:;
  /* 112023a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112023a4 jne 0x112023b0 */
  if (!C.zf) goto L_112023b0;
  /* 112023a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112023a8 call 0x11203030 */
  push32(0x112023adu); f_11203030();
  /* 112023ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112023b0:;
  /* 112023b0 mov eax, 1 */
  EAX = (0x1u);
L_112023b5:;
  /* 112023b5 pop ebp */
  EBP = (pop32());
  /* 112023b6 ret 0xc */
  ESPCHK(0x11202280u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x112023c0 (243 bytes, 86 insns) */
void f_112023c0(void) {
  FTRACE(0x112023c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112023c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112023c1 mov ebp, esp */
  EBP = (ESP);
  /* 112023c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112023c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112023cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112023cf jne 0x112023e1 */
  if (!C.zf) goto L_112023e1;
  /* 112023d1 cmp dword ptr [0x1122f43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112023d8 jne 0x112023e1 */
  if (!C.zf) goto L_112023e1;
  /* 112023da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112023dc jmp 0x112024ad */
  goto L_112024ad;
L_112023e1:;
  /* 112023e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112023e5 je 0x112023ed */
  if (C.zf) goto L_112023ed;
  /* 112023e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112023eb jne 0x1120242f */
  if (!C.zf) goto L_1120242f;
L_112023ed:;
  /* 112023ed cmp dword ptr [0x11230fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112023f4 je 0x1120240b */
  if (C.zf) goto L_1120240b;
  /* 112023f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112023f9 push eax */
  push32((uint32_t)(EAX));
  /* 112023fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112023fd push ecx */
  push32((uint32_t)(ECX));
  /* 112023fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202401 push edx */
  push32((uint32_t)(EDX));
  /* 11202402 call dword ptr [0x11230fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11230fbc))), 0x11202408u);
  /* 11202408 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120240b:;
  /* 1120240b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120240f je 0x11202425 */
  if (C.zf) goto L_11202425;
  /* 11202411 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11202414 push eax */
  push32((uint32_t)(EAX));
  /* 11202415 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11202418 push ecx */
  push32((uint32_t)(ECX));
  /* 11202419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120241c push edx */
  push32((uint32_t)(EDX));
  /* 1120241d call 0x11202280 */
  push32(0x11202422u); f_11202280();
  /* 11202422 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11202425:;
  /* 11202425 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202429 jne 0x1120242f */
  if (!C.zf) goto L_1120242f;
  /* 1120242b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120242d jmp 0x112024ad */
  goto L_112024ad;
L_1120242f:;
  /* 1120242f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11202432 push eax */
  push32((uint32_t)(EAX));
  /* 11202433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11202436 push ecx */
  push32((uint32_t)(ECX));
  /* 11202437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120243a push edx */
  push32((uint32_t)(EDX));
  /* 1120243b call 0x1120100a */
  push32(0x11202440u); f_1120100a();
  /* 11202440 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202443 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202447 jne 0x1120245e */
  if (!C.zf) goto L_1120245e;
  /* 11202449 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120244d jne 0x1120245e */
  if (!C.zf) goto L_1120245e;
  /* 1120244f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11202452 push eax */
  push32((uint32_t)(EAX));
  /* 11202453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202455 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202458 push ecx */
  push32((uint32_t)(ECX));
  /* 11202459 call 0x11202280 */
  push32(0x1120245eu); f_11202280();
L_1120245e:;
  /* 1120245e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202462 je 0x1120246a */
  if (C.zf) goto L_1120246a;
  /* 11202464 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202468 jne 0x112024aa */
  if (!C.zf) goto L_112024aa;
L_1120246a:;
  /* 1120246a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120246d push edx */
  push32((uint32_t)(EDX));
  /* 1120246e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11202471 push eax */
  push32((uint32_t)(EAX));
  /* 11202472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202475 push ecx */
  push32((uint32_t)(ECX));
  /* 11202476 call 0x11202280 */
  push32(0x1120247bu); f_11202280();
  /* 1120247b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120247d jne 0x11202486 */
  if (!C.zf) goto L_11202486;
  /* 1120247f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11202486:;
  /* 11202486 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120248a je 0x112024aa */
  if (C.zf) goto L_112024aa;
  /* 1120248c cmp dword ptr [0x11230fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202493 je 0x112024aa */
  if (C.zf) goto L_112024aa;
  /* 11202495 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11202498 push edx */
  push32((uint32_t)(EDX));
  /* 11202499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120249c push eax */
  push32((uint32_t)(EAX));
  /* 1120249d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112024a0 push ecx */
  push32((uint32_t)(ECX));
  /* 112024a1 call dword ptr [0x11230fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11230fbc))), 0x112024a7u);
  /* 112024a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112024aa:;
  /* 112024aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112024ad:;
  /* 112024ad mov esp, ebp */
  ESP = (EBP);
  /* 112024af pop ebp */
  EBP = (pop32());
  /* 112024b0 ret 0xc */
  ESPCHK(0x112023c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x112024c0 (58 bytes, 18 insns) */
void f_112024c0(void) {
  FTRACE(0x112024c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112024c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112024c1 mov ebp, esp */
  EBP = (ESP);
  /* 112024c3 cmp dword ptr [0x1122f448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112024ca je 0x112024de */
  if (C.zf) goto L_112024de;
  /* 112024cc cmp dword ptr [0x1122f448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112024d3 jne 0x112024e3 */
  if (!C.zf) goto L_112024e3;
  /* 112024d5 cmp dword ptr [0x1122f44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112024dc jne 0x112024e3 */
  if (!C.zf) goto L_112024e3;
L_112024de:;
  /* 112024de call 0x11205e30 */
  push32(0x112024e3u); f_11205e30();
L_112024e3:;
  /* 112024e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112024e6 push eax */
  push32((uint32_t)(EAX));
  /* 112024e7 call 0x11205e80 */
  push32(0x112024ecu); f_11205e80();
  /* 112024ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112024ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 112024f4 call dword ptr [0x1122da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122da30))), 0x112024fau);
  /* 112024fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112024fd pop ebp */
  EBP = (pop32());
  /* 112024fe ret  */
  ESPCHK(0x112024c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002500 @ 0x11202500 (11 bytes, 5 insns) */
void f_11202500(void) {
  FTRACE(0x11202500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202500 push ebp */
  push32((uint32_t)(EBP));
  /* 11202501 mov ebp, esp */
  EBP = (ESP);
  /* 11202503 call dword ptr [0x112312fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312fc))), 0x11202509u);
  /* 11202509 pop ebp */
  EBP = (pop32());
  /* 1120250a ret  */
  ESPCHK(0x11202500u, _esp0);
  ESP += 4; return;
}

/* FUN_10002510 @ 0x11202510 (87 bytes, 30 insns) */
void f_11202510(void) {
  FTRACE(0x11202510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202510 push ebp */
  push32((uint32_t)(EBP));
  /* 11202511 mov ebp, esp */
  EBP = (ESP);
  /* 11202513 push ecx */
  push32((uint32_t)(ECX));
  /* 11202514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202518 jl 0x11202520 */
  if ((C.sf!=C.of)) goto L_11202520;
  /* 1120251a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120251e jl 0x11202525 */
  if ((C.sf!=C.of)) goto L_11202525;
L_11202520:;
  /* 11202520 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11202523 jmp 0x11202563 */
  goto L_11202563;
L_11202525:;
  /* 11202525 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202529 jne 0x11202537 */
  if (!C.zf) goto L_11202537;
  /* 1120252b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120252e mov eax, dword ptr [eax*4 + 0x1122da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1122da38)));
  /* 11202535 jmp 0x11202563 */
  goto L_11202563;
L_11202537:;
  /* 11202537 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120253a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1120253d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120253f je 0x11202546 */
  if (C.zf) goto L_11202546;
  /* 11202541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11202544 jmp 0x11202563 */
  goto L_11202563;
L_11202546:;
  /* 11202546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202549 mov eax, dword ptr [edx*4 + 0x1122da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1122da38)));
  /* 11202550 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202556 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11202559 mov dword ptr [ecx*4 + 0x1122da38], edx */
  w32((uint32_t)(ECX*4 + 0x1122da38), (EDX));
  /* 11202560 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11202563:;
  /* 11202563 mov esp, ebp */
  ESP = (EBP);
  /* 11202565 pop ebp */
  EBP = (pop32());
  /* 11202566 ret  */
  ESPCHK(0x11202510u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11202570 (126 bytes, 38 insns) */
void f_11202570(void) {
  FTRACE(0x11202570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202570 push ebp */
  push32((uint32_t)(EBP));
  /* 11202571 mov ebp, esp */
  EBP = (ESP);
  /* 11202573 push ecx */
  push32((uint32_t)(ECX));
  /* 11202574 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202578 jl 0x11202580 */
  if ((C.sf!=C.of)) goto L_11202580;
  /* 1120257a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120257e jl 0x11202587 */
  if ((C.sf!=C.of)) goto L_11202587;
L_11202580:;
  /* 11202580 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11202585 jmp 0x112025ea */
  goto L_112025ea;
L_11202587:;
  /* 11202587 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120258b jne 0x11202599 */
  if (!C.zf) goto L_11202599;
  /* 1120258d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202590 mov eax, dword ptr [eax*4 + 0x1122da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1122da44)));
  /* 11202597 jmp 0x112025ea */
  goto L_112025ea;
L_11202599:;
  /* 11202599 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120259c mov edx, dword ptr [ecx*4 + 0x1122da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da44)));
  /* 112025a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112025a6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112025aa jne 0x112025c0 */
  if (!C.zf) goto L_112025c0;
  /* 112025ac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 112025ae call dword ptr [0x11231300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231300))), 0x112025b4u);
  /* 112025b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112025b7 mov dword ptr [ecx*4 + 0x1122da44], eax */
  w32((uint32_t)(ECX*4 + 0x1122da44), (EAX));
  /* 112025be jmp 0x112025e7 */
  goto L_112025e7;
L_112025c0:;
  /* 112025c0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112025c4 jne 0x112025da */
  if (!C.zf) goto L_112025da;
  /* 112025c6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112025c8 call dword ptr [0x11231300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231300))), 0x112025ceu);
  /* 112025ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112025d1 mov dword ptr [edx*4 + 0x1122da44], eax */
  w32((uint32_t)(EDX*4 + 0x1122da44), (EAX));
  /* 112025d8 jmp 0x112025e7 */
  goto L_112025e7;
L_112025da:;
  /* 112025da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112025dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112025e0 mov dword ptr [eax*4 + 0x1122da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1122da44), (ECX));
L_112025e7:;
  /* 112025e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112025ea:;
  /* 112025ea mov esp, ebp */
  ESP = (EBP);
  /* 112025ec pop ebp */
  EBP = (pop32());
  /* 112025ed ret  */
  ESPCHK(0x11202570u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x112025f0 (28 bytes, 11 insns) */
void f_112025f0(void) {
  FTRACE(0x112025f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112025f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112025f1 mov ebp, esp */
  EBP = (ESP);
  /* 112025f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112025f4 mov eax, dword ptr [0x11230fa0] */
  EAX = (r32((uint32_t)(0x11230fa0)));
  /* 112025f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112025fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112025ff mov dword ptr [0x11230fa0], ecx */
  w32((uint32_t)(0x11230fa0), (ECX));
  /* 11202605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202608 mov esp, ebp */
  ESP = (EBP);
  /* 1120260a pop ebp */
  EBP = (pop32());
  /* 1120260b ret  */
  ESPCHK(0x112025f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x11202610 (912 bytes, 248 insns) */
void f_11202610(void) {
  FTRACE(0x11202610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202610 push ebp */
  push32((uint32_t)(EBP));
  /* 11202611 mov ebp, esp */
  EBP = (ESP);
  /* 11202613 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11202618 call 0x112066f0 */
  push32(0x1120261du); f_112066f0();
  /* 1120261d push edi */
  push32((uint32_t)(EDI));
  /* 1120261e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11202625 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1120262a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120262c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11202632 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11202634 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11202636 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11202637 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1120263e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11202643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11202645 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1120264b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1120264d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1120264f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11202650 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11202657 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1120265c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120265e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11202664 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11202666 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11202668 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11202669 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1120266c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11202672 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202676 jl 0x1120267e */
  if ((C.sf!=C.of)) goto L_1120267e;
  /* 11202678 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120267c jl 0x11202686 */
  if ((C.sf!=C.of)) goto L_11202686;
L_1120267e:;
  /* 1120267e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11202681 jmp 0x1120299b */
  goto L_1120299b;
L_11202686:;
  /* 11202686 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120268a jne 0x11202730 */
  if (!C.zf) goto L_11202730;
  /* 11202690 push 0x1122da34 */
  push32((uint32_t)(0x1122da34u));
  /* 11202695 call dword ptr [0x11231318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231318))), 0x1120269bu);
  /* 1120269b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120269d jle 0x11202730 */
  if ((C.zf||C.sf!=C.of)) goto L_11202730;
  /* 112026a3 cmp dword ptr [0x1122f450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112026aa jne 0x112026ee */
  if (!C.zf) goto L_112026ee;
  /* 112026ac push 0x1122a2b0 */
  push32((uint32_t)(0x1122a2b0u));
  /* 112026b1 call dword ptr [0x11231314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231314))), 0x112026b7u);
  /* 112026b7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 112026bd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112026c4 je 0x112026e6 */
  if (C.zf) goto L_112026e6;
  /* 112026c6 push 0x1122a2a4 */
  push32((uint32_t)(0x1122a2a4u));
  /* 112026cb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 112026d1 push ecx */
  push32((uint32_t)(ECX));
  /* 112026d2 call dword ptr [0x11231310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231310))), 0x112026d8u);
  /* 112026d8 mov dword ptr [0x1122f450], eax */
  w32((uint32_t)(0x1122f450), (EAX));
  /* 112026dd cmp dword ptr [0x1122f450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112026e4 jne 0x112026ee */
  if (!C.zf) goto L_112026ee;
L_112026e6:;
  /* 112026e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112026e9 jmp 0x1120299b */
  goto L_1120299b;
L_112026ee:;
  /* 112026ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112026f1 push edx */
  push32((uint32_t)(EDX));
  /* 112026f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112026f5 push eax */
  push32((uint32_t)(EAX));
  /* 112026f6 push 0x1122a270 */
  push32((uint32_t)(0x1122a270u));
  /* 112026fb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11202701 push ecx */
  push32((uint32_t)(ECX));
  /* 11202702 call dword ptr [0x1122f450] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f450))), 0x11202708u);
  /* 11202708 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120270b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11202711 push edx */
  push32((uint32_t)(EDX));
  /* 11202712 call dword ptr [0x1123130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123130c))), 0x11202718u);
  /* 11202718 push 0x1122da34 */
  push32((uint32_t)(0x1122da34u));
  /* 1120271d call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x11202723u);
  /* 11202723 call 0x11202500 */
  push32(0x11202728u); f_11202500();
  /* 11202728 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120272b jmp 0x1120299b */
  goto L_1120299b;
L_11202730:;
  /* 11202730 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202734 je 0x1120276d */
  if (C.zf) goto L_1120276d;
  /* 11202736 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1120273c push eax */
  push32((uint32_t)(EAX));
  /* 1120273d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11202740 push ecx */
  push32((uint32_t)(ECX));
  /* 11202741 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11202746 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1120274c push edx */
  push32((uint32_t)(EDX));
  /* 1120274d call 0x112065f0 */
  push32(0x11202752u); f_112065f0();
  /* 11202752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11202757 jge 0x1120276d */
  if ((C.sf==C.of)) goto L_1120276d;
  /* 11202759 push 0x1122a244 */
  push32((uint32_t)(0x1122a244u));
  /* 1120275e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11202764 push eax */
  push32((uint32_t)(EAX));
  /* 11202765 call 0x11206500 */
  push32(0x1120276au); f_11206500();
  /* 1120276a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120276d:;
  /* 1120276d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202771 jne 0x112027a5 */
  if (!C.zf) goto L_112027a5;
  /* 11202773 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202777 je 0x11202785 */
  if (C.zf) goto L_11202785;
  /* 11202779 mov dword ptr [ebp - 0x3028], 0x1122a230 */
  w32((uint32_t)(EBP + -0x3028), (0x1122a230u));
  /* 11202783 jmp 0x1120278f */
  goto L_1120278f;
L_11202785:;
  /* 11202785 mov dword ptr [ebp - 0x3028], 0x1122a21c */
  w32((uint32_t)(EBP + -0x3028), (0x1122a21cu));
L_1120278f:;
  /* 1120278f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11202795 push ecx */
  push32((uint32_t)(ECX));
  /* 11202796 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1120279c push edx */
  push32((uint32_t)(EDX));
  /* 1120279d call 0x11206500 */
  push32(0x112027a2u); f_11206500();
  /* 112027a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112027a5:;
  /* 112027a5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 112027ab push eax */
  push32((uint32_t)(EAX));
  /* 112027ac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 112027b2 push ecx */
  push32((uint32_t)(ECX));
  /* 112027b3 call 0x11206510 */
  push32(0x112027b8u); f_11206510();
  /* 112027b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112027bb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112027bf jne 0x112027fa */
  if (!C.zf) goto L_112027fa;
  /* 112027c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112027c4 mov eax, dword ptr [edx*4 + 0x1122da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1122da38)));
  /* 112027cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112027ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112027d0 je 0x112027e6 */
  if (C.zf) goto L_112027e6;
  /* 112027d2 push 0x1122a218 */
  push32((uint32_t)(0x1122a218u));
  /* 112027d7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 112027dd push ecx */
  push32((uint32_t)(ECX));
  /* 112027de call 0x11206510 */
  push32(0x112027e3u); f_11206510();
  /* 112027e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112027e6:;
  /* 112027e6 push 0x1122a214 */
  push32((uint32_t)(0x1122a214u));
  /* 112027eb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 112027f1 push edx */
  push32((uint32_t)(EDX));
  /* 112027f2 call 0x11206510 */
  push32(0x112027f7u); f_11206510();
  /* 112027f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112027fa:;
  /* 112027fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112027fe je 0x11202842 */
  if (C.zf) goto L_11202842;
  /* 11202800 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11202806 push eax */
  push32((uint32_t)(EAX));
  /* 11202807 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120280a push ecx */
  push32((uint32_t)(ECX));
  /* 1120280b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120280e push edx */
  push32((uint32_t)(EDX));
  /* 1120280f push 0x1122a208 */
  push32((uint32_t)(0x1122a208u));
  /* 11202814 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11202819 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1120281f push eax */
  push32((uint32_t)(EAX));
  /* 11202820 call 0x11206400 */
  push32(0x11202825u); f_11206400();
  /* 11202825 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120282a jge 0x11202840 */
  if ((C.sf==C.of)) goto L_11202840;
  /* 1120282c push 0x1122a244 */
  push32((uint32_t)(0x1122a244u));
  /* 11202831 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11202837 push ecx */
  push32((uint32_t)(ECX));
  /* 11202838 call 0x11206500 */
  push32(0x1120283du); f_11206500();
  /* 1120283d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202840:;
  /* 11202840 jmp 0x11202858 */
  goto L_11202858;
L_11202842:;
  /* 11202842 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11202848 push edx */
  push32((uint32_t)(EDX));
  /* 11202849 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1120284f push eax */
  push32((uint32_t)(EAX));
  /* 11202850 call 0x11206500 */
  push32(0x11202855u); f_11206500();
  /* 11202855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202858:;
  /* 11202858 cmp dword ptr [0x11230fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120285f je 0x1120289c */
  if (C.zf) goto L_1120289c;
  /* 11202861 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11202867 push ecx */
  push32((uint32_t)(ECX));
  /* 11202868 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1120286e push edx */
  push32((uint32_t)(EDX));
  /* 1120286f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202872 push eax */
  push32((uint32_t)(EAX));
  /* 11202873 call dword ptr [0x11230fa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11230fa0))), 0x11202879u);
  /* 11202879 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120287c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120287e je 0x1120289c */
  if (C.zf) goto L_1120289c;
  /* 11202880 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202884 jne 0x11202891 */
  if (!C.zf) goto L_11202891;
  /* 11202886 push 0x1122da34 */
  push32((uint32_t)(0x1122da34u));
  /* 1120288b call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x11202891u);
L_11202891:;
  /* 11202891 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11202897 jmp 0x1120299b */
  goto L_1120299b;
L_1120289c:;
  /* 1120289c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120289f mov edx, dword ptr [ecx*4 + 0x1122da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da38)));
  /* 112028a6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112028a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112028ab je 0x112028eb */
  if (C.zf) goto L_112028eb;
  /* 112028ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112028b0 cmp dword ptr [eax*4 + 0x1122da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1122da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112028b8 je 0x112028eb */
  if (C.zf) goto L_112028eb;
  /* 112028ba push 0 */
  push32((uint32_t)(0x0u));
  /* 112028bc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 112028c2 push ecx */
  push32((uint32_t)(ECX));
  /* 112028c3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 112028c9 push edx */
  push32((uint32_t)(EDX));
  /* 112028ca call 0x11206380 */
  push32(0x112028cfu); f_11206380();
  /* 112028cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112028d2 push eax */
  push32((uint32_t)(EAX));
  /* 112028d3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 112028d9 push eax */
  push32((uint32_t)(EAX));
  /* 112028da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112028dd mov edx, dword ptr [ecx*4 + 0x1122da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da44)));
  /* 112028e4 push edx */
  push32((uint32_t)(EDX));
  /* 112028e5 call dword ptr [0x11231304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231304))), 0x112028ebu);
L_112028eb:;
  /* 112028eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112028ee mov ecx, dword ptr [eax*4 + 0x1122da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122da38)));
  /* 112028f5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112028f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112028fa je 0x11202909 */
  if (C.zf) goto L_11202909;
  /* 112028fc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11202902 push edx */
  push32((uint32_t)(EDX));
  /* 11202903 call dword ptr [0x1123130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123130c))), 0x11202909u);
L_11202909:;
  /* 11202909 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120290c mov ecx, dword ptr [eax*4 + 0x1122da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122da38)));
  /* 11202913 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11202916 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11202918 je 0x11202988 */
  if (C.zf) goto L_11202988;
  /* 1120291a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120291e je 0x1120293d */
  if (C.zf) goto L_1120293d;
  /* 11202920 push 0xa */
  push32((uint32_t)(0xau));
  /* 11202922 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11202928 push edx */
  push32((uint32_t)(EDX));
  /* 11202929 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120292c push eax */
  push32((uint32_t)(EAX));
  /* 1120292d call 0x11206090 */
  push32(0x11202932u); f_11206090();
  /* 11202932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202935 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1120293b jmp 0x11202947 */
  goto L_11202947;
L_1120293d:;
  /* 1120293d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11202947:;
  /* 11202947 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1120294d push ecx */
  push32((uint32_t)(ECX));
  /* 1120294e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11202951 push edx */
  push32((uint32_t)(EDX));
  /* 11202952 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11202958 push eax */
  push32((uint32_t)(EAX));
  /* 11202959 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120295c push ecx */
  push32((uint32_t)(ECX));
  /* 1120295d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202960 push edx */
  push32((uint32_t)(EDX));
  /* 11202961 call 0x112029a0 */
  push32(0x11202966u); f_112029a0();
  /* 11202966 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202969 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1120296f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202973 jne 0x11202980 */
  if (!C.zf) goto L_11202980;
  /* 11202975 push 0x1122da34 */
  push32((uint32_t)(0x1122da34u));
  /* 1120297a call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x11202980u);
L_11202980:;
  /* 11202980 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11202986 jmp 0x1120299b */
  goto L_1120299b;
L_11202988:;
  /* 11202988 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120298c jne 0x11202999 */
  if (!C.zf) goto L_11202999;
  /* 1120298e push 0x1122da34 */
  push32((uint32_t)(0x1122da34u));
  /* 11202993 call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x11202999u);
L_11202999:;
  /* 11202999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120299b:;
  /* 1120299b pop edi */
  EDI = (pop32());
  /* 1120299c mov esp, ebp */
  ESP = (EBP);
  /* 1120299e pop ebp */
  EBP = (pop32());
  /* 1120299f ret  */
  ESPCHK(0x11202610u, _esp0);
  ESP += 4; return;
}

/* FUN_100029a0 @ 0x112029a0 (780 bytes, 197 insns) */
void f_112029a0(void) {
  FTRACE(0x112029a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112029a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112029a1 mov ebp, esp */
  EBP = (ESP);
  /* 112029a3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 112029a8 call 0x112066f0 */
  push32(0x112029adu); f_112066f0();
L_112029ad:;
  /* 112029ad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112029b1 jne 0x112029d8 */
  if (!C.zf) goto L_112029d8;
  /* 112029b3 push 0x1122a400 */
  push32((uint32_t)(0x1122a400u));
  /* 112029b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112029ba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 112029bf push 0x1122a3f4 */
  push32((uint32_t)(0x1122a3f4u));
  /* 112029c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112029c6 call 0x11202610 */
  push32(0x112029cbu); f_11202610();
  /* 112029cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112029ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112029d1 jne 0x112029d8 */
  if (!C.zf) goto L_112029d8;
  /* 112029d3 call 0x11202500 */
  push32(0x112029d8u); f_11202500();
L_112029d8:;
  /* 112029d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112029da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112029dc jne 0x112029ad */
  if (!C.zf) goto L_112029ad;
  /* 112029de push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112029e3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 112029e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112029ea push 0 */
  push32((uint32_t)(0x0u));
  /* 112029ec call dword ptr [0x1123131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123131c))), 0x112029f2u);
  /* 112029f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112029f4 jne 0x11202a0a */
  if (!C.zf) goto L_11202a0a;
  /* 112029f6 push 0x1122a3dc */
  push32((uint32_t)(0x1122a3dcu));
  /* 112029fb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11202a01 push edx */
  push32((uint32_t)(EDX));
  /* 11202a02 call 0x11206500 */
  push32(0x11202a07u); f_11206500();
  /* 11202a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202a0a:;
  /* 11202a0a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11202a10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202a16 push ecx */
  push32((uint32_t)(ECX));
  /* 11202a17 call 0x11206380 */
  push32(0x11202a1cu); f_11206380();
  /* 11202a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202a1f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202a22 jbe 0x11202a4d */
  if ((C.cf||C.zf)) goto L_11202a4d;
  /* 11202a24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202a27 push edx */
  push32((uint32_t)(EDX));
  /* 11202a28 call 0x11206380 */
  push32(0x11202a2du); f_11206380();
  /* 11202a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202a30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202a33 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11202a37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11202a3a push 3 */
  push32((uint32_t)(0x3u));
  /* 11202a3c push 0x1122a3d8 */
  push32((uint32_t)(0x1122a3d8u));
  /* 11202a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202a44 push eax */
  push32((uint32_t)(EAX));
  /* 11202a45 call 0x11206d70 */
  push32(0x11202a4au); f_11206d70();
  /* 11202a4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202a4d:;
  /* 11202a4d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11202a50 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11202a56 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202a5d je 0x11202aa8 */
  if (C.zf) goto L_11202aa8;
  /* 11202a5f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11202a65 push edx */
  push32((uint32_t)(EDX));
  /* 11202a66 call 0x11206380 */
  push32(0x11202a6bu); f_11206380();
  /* 11202a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202a6e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202a71 jbe 0x11202aa8 */
  if ((C.cf||C.zf)) goto L_11202aa8;
  /* 11202a73 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11202a79 push eax */
  push32((uint32_t)(EAX));
  /* 11202a7a call 0x11206380 */
  push32(0x11202a7fu); f_11206380();
  /* 11202a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202a82 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11202a88 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11202a8c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11202a92 push 3 */
  push32((uint32_t)(0x3u));
  /* 11202a94 push 0x1122a3d8 */
  push32((uint32_t)(0x1122a3d8u));
  /* 11202a99 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11202a9f push eax */
  push32((uint32_t)(EAX));
  /* 11202aa0 call 0x11206d70 */
  push32(0x11202aa5u); f_11206d70();
  /* 11202aa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202aa8:;
  /* 11202aa8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202aac jne 0x11202aba */
  if (!C.zf) goto L_11202aba;
  /* 11202aae mov dword ptr [ebp - 0x1114], 0x1122a364 */
  w32((uint32_t)(EBP + -0x1114), (0x1122a364u));
  /* 11202ab8 jmp 0x11202ac4 */
  goto L_11202ac4;
L_11202aba:;
  /* 11202aba mov dword ptr [ebp - 0x1114], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1114), (0x1122a104u));
L_11202ac4:;
  /* 11202ac4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11202ac7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11202aca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11202acc je 0x11202ad9 */
  if (C.zf) goto L_11202ad9;
  /* 11202ace mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11202ad1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11202ad7 jmp 0x11202ae3 */
  goto L_11202ae3;
L_11202ad9:;
  /* 11202ad9 mov dword ptr [ebp - 0x1118], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1118), (0x1122a104u));
L_11202ae3:;
  /* 11202ae3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11202ae6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11202ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11202aeb je 0x11202aff */
  if (C.zf) goto L_11202aff;
  /* 11202aed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202af1 jne 0x11202aff */
  if (!C.zf) goto L_11202aff;
  /* 11202af3 mov dword ptr [ebp - 0x111c], 0x1122a354 */
  w32((uint32_t)(EBP + -0x111c), (0x1122a354u));
  /* 11202afd jmp 0x11202b09 */
  goto L_11202b09;
L_11202aff:;
  /* 11202aff mov dword ptr [ebp - 0x111c], 0x1122a104 */
  w32((uint32_t)(EBP + -0x111c), (0x1122a104u));
L_11202b09:;
  /* 11202b09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11202b0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11202b0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11202b11 je 0x11202b1f */
  if (C.zf) goto L_11202b1f;
  /* 11202b13 mov dword ptr [ebp - 0x1120], 0x1122a350 */
  w32((uint32_t)(EBP + -0x1120), (0x1122a350u));
  /* 11202b1d jmp 0x11202b29 */
  goto L_11202b29;
L_11202b1f:;
  /* 11202b1f mov dword ptr [ebp - 0x1120], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1120), (0x1122a104u));
L_11202b29:;
  /* 11202b29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202b2d je 0x11202b3a */
  if (C.zf) goto L_11202b3a;
  /* 11202b2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11202b32 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11202b38 jmp 0x11202b44 */
  goto L_11202b44;
L_11202b3a:;
  /* 11202b3a mov dword ptr [ebp - 0x1124], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1124), (0x1122a104u));
L_11202b44:;
  /* 11202b44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202b48 je 0x11202b56 */
  if (C.zf) goto L_11202b56;
  /* 11202b4a mov dword ptr [ebp - 0x1128], 0x1122a348 */
  w32((uint32_t)(EBP + -0x1128), (0x1122a348u));
  /* 11202b54 jmp 0x11202b60 */
  goto L_11202b60;
L_11202b56:;
  /* 11202b56 mov dword ptr [ebp - 0x1128], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1128), (0x1122a104u));
L_11202b60:;
  /* 11202b60 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202b64 je 0x11202b71 */
  if (C.zf) goto L_11202b71;
  /* 11202b66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11202b69 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11202b6f jmp 0x11202b7b */
  goto L_11202b7b;
L_11202b71:;
  /* 11202b71 mov dword ptr [ebp - 0x112c], 0x1122a104 */
  w32((uint32_t)(EBP + -0x112c), (0x1122a104u));
L_11202b7b:;
  /* 11202b7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202b7f je 0x11202b8d */
  if (C.zf) goto L_11202b8d;
  /* 11202b81 mov dword ptr [ebp - 0x1130], 0x1122a340 */
  w32((uint32_t)(EBP + -0x1130), (0x1122a340u));
  /* 11202b8b jmp 0x11202b97 */
  goto L_11202b97;
L_11202b8d:;
  /* 11202b8d mov dword ptr [ebp - 0x1130], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1130), (0x1122a104u));
L_11202b97:;
  /* 11202b97 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202b9e je 0x11202bae */
  if (C.zf) goto L_11202bae;
  /* 11202ba0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11202ba6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11202bac jmp 0x11202bb8 */
  goto L_11202bb8;
L_11202bae:;
  /* 11202bae mov dword ptr [ebp - 0x1134], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1134), (0x1122a104u));
L_11202bb8:;
  /* 11202bb8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202bbf je 0x11202bcd */
  if (C.zf) goto L_11202bcd;
  /* 11202bc1 mov dword ptr [ebp - 0x1138], 0x1122a334 */
  w32((uint32_t)(EBP + -0x1138), (0x1122a334u));
  /* 11202bcb jmp 0x11202bd7 */
  goto L_11202bd7;
L_11202bcd:;
  /* 11202bcd mov dword ptr [ebp - 0x1138], 0x1122a104 */
  w32((uint32_t)(EBP + -0x1138), (0x1122a104u));
L_11202bd7:;
  /* 11202bd7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11202bdd push edx */
  push32((uint32_t)(EDX));
  /* 11202bde mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11202be4 push eax */
  push32((uint32_t)(EAX));
  /* 11202be5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11202beb push ecx */
  push32((uint32_t)(ECX));
  /* 11202bec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11202bf2 push edx */
  push32((uint32_t)(EDX));
  /* 11202bf3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11202bf9 push eax */
  push32((uint32_t)(EAX));
  /* 11202bfa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11202c00 push ecx */
  push32((uint32_t)(ECX));
  /* 11202c01 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11202c07 push edx */
  push32((uint32_t)(EDX));
  /* 11202c08 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11202c0e push eax */
  push32((uint32_t)(EAX));
  /* 11202c0f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11202c15 push ecx */
  push32((uint32_t)(ECX));
  /* 11202c16 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11202c1c push edx */
  push32((uint32_t)(EDX));
  /* 11202c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202c20 push eax */
  push32((uint32_t)(EAX));
  /* 11202c21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202c24 mov edx, dword ptr [ecx*4 + 0x1122da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da50)));
  /* 11202c2b push edx */
  push32((uint32_t)(EDX));
  /* 11202c2c push 0x1122a2e0 */
  push32((uint32_t)(0x1122a2e0u));
  /* 11202c31 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11202c36 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11202c3c push eax */
  push32((uint32_t)(EAX));
  /* 11202c3d call 0x11206400 */
  push32(0x11202c42u); f_11206400();
  /* 11202c42 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11202c47 jge 0x11202c5d */
  if ((C.sf==C.of)) goto L_11202c5d;
  /* 11202c49 push 0x1122a244 */
  push32((uint32_t)(0x1122a244u));
  /* 11202c4e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11202c54 push ecx */
  push32((uint32_t)(ECX));
  /* 11202c55 call 0x11206500 */
  push32(0x11202c5au); f_11206500();
  /* 11202c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202c5d:;
  /* 11202c5d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11202c62 push 0x1122a2bc */
  push32((uint32_t)(0x1122a2bcu));
  /* 11202c67 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11202c6d push edx */
  push32((uint32_t)(EDX));
  /* 11202c6e call 0x11206cb0 */
  push32(0x11202c73u); f_11206cb0();
  /* 11202c73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202c76 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11202c7c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202c83 jne 0x11202c96 */
  if (!C.zf) goto L_11202c96;
  /* 11202c85 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11202c87 call 0x112069f0 */
  push32(0x11202c8cu); f_112069f0();
  /* 11202c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202c8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11202c91 call 0x11202d10 */
  push32(0x11202c96u); f_11202d10();
L_11202c96:;
  /* 11202c96 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202c9d jne 0x11202ca6 */
  if (!C.zf) goto L_11202ca6;
  /* 11202c9f mov eax, 1 */
  EAX = (0x1u);
  /* 11202ca4 jmp 0x11202ca8 */
  goto L_11202ca8;
L_11202ca6:;
  /* 11202ca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11202ca8:;
  /* 11202ca8 mov esp, ebp */
  ESP = (EBP);
  /* 11202caa pop ebp */
  EBP = (pop32());
  /* 11202cab ret  */
  ESPCHK(0x112029a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x11202cb0 (56 bytes, 15 insns) */
void f_11202cb0(void) {
  FTRACE(0x11202cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11202cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11202cb3 cmp dword ptr [0x11230f9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230f9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202cba je 0x11202cc2 */
  if (C.zf) goto L_11202cc2;
  /* 11202cbc call dword ptr [0x11230f9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11230f9c))), 0x11202cc2u);
L_11202cc2:;
  /* 11202cc2 push 0x1122d418 */
  push32((uint32_t)(0x1122d418u));
  /* 11202cc7 push 0x1122d208 */
  push32((uint32_t)(0x1122d208u));
  /* 11202ccc call 0x11202e80 */
  push32(0x11202cd1u); f_11202e80();
  /* 11202cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202cd4 push 0x1122d104 */
  push32((uint32_t)(0x1122d104u));
  /* 11202cd9 push 0x1122d000 */
  push32((uint32_t)(0x1122d000u));
  /* 11202cde call 0x11202e80 */
  push32(0x11202ce3u); f_11202e80();
  /* 11202ce3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202ce6 pop ebp */
  EBP = (pop32());
  /* 11202ce7 ret  */
  ESPCHK(0x11202cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf0 @ 0x11202cf0 (21 bytes, 10 insns) */
void f_11202cf0(void) {
  FTRACE(0x11202cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11202cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11202cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202cfa push eax */
  push32((uint32_t)(EAX));
  /* 11202cfb call 0x11202d70 */
  push32(0x11202d00u); f_11202d70();
  /* 11202d00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202d03 pop ebp */
  EBP = (pop32());
  /* 11202d04 ret  */
  ESPCHK(0x11202cf0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11202d10 (21 bytes, 10 insns) */
void f_11202d10(void) {
  FTRACE(0x11202d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11202d11 mov ebp, esp */
  EBP = (ESP);
  /* 11202d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202d15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11202d17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202d1a push eax */
  push32((uint32_t)(EAX));
  /* 11202d1b call 0x11202d70 */
  push32(0x11202d20u); f_11202d70();
  /* 11202d20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202d23 pop ebp */
  EBP = (pop32());
  /* 11202d24 ret  */
  ESPCHK(0x11202d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d30 @ 0x11202d30 (19 bytes, 9 insns) */
void f_11202d30(void) {
  FTRACE(0x11202d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11202d31 mov ebp, esp */
  EBP = (ESP);
  /* 11202d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11202d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202d39 call 0x11202d70 */
  push32(0x11202d3eu); f_11202d70();
  /* 11202d3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202d41 pop ebp */
  EBP = (pop32());
  /* 11202d42 ret  */
  ESPCHK(0x11202d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d50 @ 0x11202d50 (19 bytes, 9 insns) */
void f_11202d50(void) {
  FTRACE(0x11202d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11202d51 mov ebp, esp */
  EBP = (ESP);
  /* 11202d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11202d55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11202d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11202d59 call 0x11202d70 */
  push32(0x11202d5eu); f_11202d70();
  /* 11202d5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202d61 pop ebp */
  EBP = (pop32());
  /* 11202d62 ret  */
  ESPCHK(0x11202d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d70 @ 0x11202d70 (227 bytes, 61 insns) */
void f_11202d70(void) {
  FTRACE(0x11202d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11202d71 mov ebp, esp */
  EBP = (ESP);
  /* 11202d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11202d74 call 0x11202e60 */
  push32(0x11202d79u); f_11202e60();
  /* 11202d79 cmp dword ptr [0x1122f494], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f494))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202d80 jne 0x11202d93 */
  if (!C.zf) goto L_11202d93;
  /* 11202d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202d85 push eax */
  push32((uint32_t)(EAX));
  /* 11202d86 call dword ptr [0x11231328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231328))), 0x11202d8cu);
  /* 11202d8c push eax */
  push32((uint32_t)(EAX));
  /* 11202d8d call dword ptr [0x11231324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231324))), 0x11202d93u);
L_11202d93:;
  /* 11202d93 mov dword ptr [0x1122f490], 1 */
  w32((uint32_t)(0x1122f490), (0x1u));
  /* 11202d9d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11202da0 mov byte ptr [0x1122f48c], cl */
  w8((uint32_t)(0x1122f48c), (CL));
  /* 11202da6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202daa jne 0x11202df3 */
  if (!C.zf) goto L_11202df3;
  /* 11202dac cmp dword ptr [0x11230f98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230f98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202db3 je 0x11202de1 */
  if (C.zf) goto L_11202de1;
  /* 11202db5 mov edx, dword ptr [0x11230f94] */
  EDX = (r32((uint32_t)(0x11230f94)));
  /* 11202dbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11202dbe:;
  /* 11202dbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202dc1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11202dc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202dca cmp ecx, dword ptr [0x11230f98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202dd0 jb 0x11202de1 */
  if (C.cf) goto L_11202de1;
  /* 11202dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202dd5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202dd8 je 0x11202ddf */
  if (C.zf) goto L_11202ddf;
  /* 11202dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202ddd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11202ddfu);
L_11202ddf:;
  /* 11202ddf jmp 0x11202dbe */
  goto L_11202dbe;
L_11202de1:;
  /* 11202de1 push 0x1122d724 */
  push32((uint32_t)(0x1122d724u));
  /* 11202de6 push 0x1122d51c */
  push32((uint32_t)(0x1122d51cu));
  /* 11202deb call 0x11202e80 */
  push32(0x11202df0u); f_11202e80();
  /* 11202df0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11202df3:;
  /* 11202df3 push 0x1122d92c */
  push32((uint32_t)(0x1122d92cu));
  /* 11202df8 push 0x1122d828 */
  push32((uint32_t)(0x1122d828u));
  /* 11202dfd call 0x11202e80 */
  push32(0x11202e02u); f_11202e80();
  /* 11202e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202e05 cmp dword ptr [0x1122f498], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f498))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202e0c jne 0x11202e2e */
  if (!C.zf) goto L_11202e2e;
  /* 11202e0e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11202e10 call 0x11204a60 */
  push32(0x11202e15u); f_11204a60();
  /* 11202e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202e18 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11202e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11202e1d je 0x11202e2e */
  if (C.zf) goto L_11202e2e;
  /* 11202e1f mov dword ptr [0x1122f498], 1 */
  w32((uint32_t)(0x1122f498), (0x1u));
  /* 11202e29 call 0x11205370 */
  push32(0x11202e2eu); f_11205370();
L_11202e2e:;
  /* 11202e2e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202e32 je 0x11202e3b */
  if (C.zf) goto L_11202e3b;
  /* 11202e34 call 0x11202e70 */
  push32(0x11202e39u); f_11202e70();
  /* 11202e39 jmp 0x11202e4f */
  goto L_11202e4f;
L_11202e3b:;
  /* 11202e3b mov dword ptr [0x1122f494], 1 */
  w32((uint32_t)(0x1122f494), (0x1u));
  /* 11202e45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202e48 push ecx */
  push32((uint32_t)(ECX));
  /* 11202e49 call dword ptr [0x11231320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231320))), 0x11202e4fu);
L_11202e4f:;
  /* 11202e4f mov esp, ebp */
  ESP = (EBP);
  /* 11202e51 pop ebp */
  EBP = (pop32());
  /* 11202e52 ret  */
  ESPCHK(0x11202d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e60 @ 0x11202e60 (15 bytes, 7 insns) */
void f_11202e60(void) {
  FTRACE(0x11202e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11202e61 mov ebp, esp */
  EBP = (ESP);
  /* 11202e63 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11202e65 call 0x11206f50 */
  push32(0x11202e6au); f_11206f50();
  /* 11202e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202e6d pop ebp */
  EBP = (pop32());
  /* 11202e6e ret  */
  ESPCHK(0x11202e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x11202e70 (15 bytes, 7 insns) */
void f_11202e70(void) {
  FTRACE(0x11202e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11202e71 mov ebp, esp */
  EBP = (ESP);
  /* 11202e73 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11202e75 call 0x11206ff0 */
  push32(0x11202e7au); f_11206ff0();
  /* 11202e7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202e7d pop ebp */
  EBP = (pop32());
  /* 11202e7e ret  */
  ESPCHK(0x11202e70u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11202e80 (37 bytes, 16 insns) */
void f_11202e80(void) {
  FTRACE(0x11202e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11202e81 mov ebp, esp */
  EBP = (ESP);
L_11202e83:;
  /* 11202e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202e86 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202e89 jae 0x11202ea3 */
  if (!C.cf) goto L_11202ea3;
  /* 11202e8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202e8e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202e91 je 0x11202e98 */
  if (C.zf) goto L_11202e98;
  /* 11202e93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202e96 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11202e98u);
L_11202e98:;
  /* 11202e98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202e9b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11202e9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11202ea1 jmp 0x11202e83 */
  goto L_11202e83;
L_11202ea3:;
  /* 11202ea3 pop ebp */
  EBP = (pop32());
  /* 11202ea4 ret  */
  ESPCHK(0x11202e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eb0 @ 0x11202eb0 (130 bytes, 42 insns) */
void f_11202eb0(void) {
  FTRACE(0x11202eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11202eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11202eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11202eb4 call 0x11206e70 */
  push32(0x11202eb9u); f_11206e70();
  /* 11202eb9 call dword ptr [0x11231334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231334))), 0x11202ebfu);
  /* 11202ebf mov dword ptr [0x1122da5c], eax */
  w32((uint32_t)(0x1122da5c), (EAX));
  /* 11202ec4 cmp dword ptr [0x1122da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1122da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202ecb jne 0x11202ed1 */
  if (!C.zf) goto L_11202ed1;
  /* 11202ecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11202ecf jmp 0x11202f2e */
  goto L_11202f2e;
L_11202ed1:;
  /* 11202ed1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11202ed3 push 0x1122a418 */
  push32((uint32_t)(0x1122a418u));
  /* 11202ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11202eda push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11202edc push 1 */
  push32((uint32_t)(0x1u));
  /* 11202ede call 0x11203960 */
  push32(0x11202ee3u); f_11203960();
  /* 11202ee3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202ee6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202ee9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202eed je 0x11202f04 */
  if (C.zf) goto L_11202f04;
  /* 11202eef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11202ef3 mov ecx, dword ptr [0x1122da5c] */
  ECX = (r32((uint32_t)(0x1122da5c)));
  /* 11202ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11202efa call dword ptr [0x11231330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231330))), 0x11202f00u);
  /* 11202f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11202f02 jne 0x11202f08 */
  if (!C.zf) goto L_11202f08;
L_11202f04:;
  /* 11202f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11202f06 jmp 0x11202f2e */
  goto L_11202f2e;
L_11202f08:;
  /* 11202f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202f0b push edx */
  push32((uint32_t)(EDX));
  /* 11202f0c call 0x11202f70 */
  push32(0x11202f11u); f_11202f70();
  /* 11202f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202f14 call dword ptr [0x1123132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123132c))), 0x11202f1au);
  /* 11202f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202f1d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11202f1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202f22 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11202f29 mov eax, 1 */
  EAX = (0x1u);
L_11202f2e:;
  /* 11202f2e mov esp, ebp */
  ESP = (EBP);
  /* 11202f30 pop ebp */
  EBP = (pop32());
  /* 11202f31 ret  */
  ESPCHK(0x11202eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x11202f40 (41 bytes, 11 insns) */
void f_11202f40(void) {
  FTRACE(0x11202f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11202f41 mov ebp, esp */
  EBP = (ESP);
  /* 11202f43 call 0x11206eb0 */
  push32(0x11202f48u); f_11206eb0();
  /* 11202f48 cmp dword ptr [0x1122da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1122da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202f4f je 0x11202f67 */
  if (C.zf) goto L_11202f67;
  /* 11202f51 mov eax, dword ptr [0x1122da5c] */
  EAX = (r32((uint32_t)(0x1122da5c)));
  /* 11202f56 push eax */
  push32((uint32_t)(EAX));
  /* 11202f57 call dword ptr [0x11231338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231338))), 0x11202f5du);
  /* 11202f5d mov dword ptr [0x1122da5c], 0xffffffff */
  w32((uint32_t)(0x1122da5c), (0xffffffffu));
L_11202f67:;
  /* 11202f67 pop ebp */
  EBP = (pop32());
  /* 11202f68 ret  */
  ESPCHK(0x11202f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x11202f70 (25 bytes, 8 insns) */
void f_11202f70(void) {
  FTRACE(0x11202f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11202f71 mov ebp, esp */
  EBP = (ESP);
  /* 11202f73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202f76 mov dword ptr [eax + 0x50], 0x1122dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1122dc00u));
  /* 11202f7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11202f80 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11202f87 pop ebp */
  EBP = (pop32());
  /* 11202f88 ret  */
  ESPCHK(0x11202f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x11202f90 (152 bytes, 48 insns) */
void f_11202f90(void) {
  FTRACE(0x11202f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11202f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11202f91 mov ebp, esp */
  EBP = (ESP);
  /* 11202f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11202f96 call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x11202f9cu);
  /* 11202f9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11202f9f mov eax, dword ptr [0x1122da5c] */
  EAX = (r32((uint32_t)(0x1122da5c)));
  /* 11202fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11202fa5 call dword ptr [0x11231340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231340))), 0x11202fabu);
  /* 11202fab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202fae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202fb2 jne 0x11203017 */
  if (!C.zf) goto L_11203017;
  /* 11202fb4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11202fb9 push 0x1122a418 */
  push32((uint32_t)(0x1122a418u));
  /* 11202fbe push 2 */
  push32((uint32_t)(0x2u));
  /* 11202fc0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11202fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11202fc4 call 0x11203960 */
  push32(0x11202fc9u); f_11203960();
  /* 11202fc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11202fcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11202fd3 je 0x1120300d */
  if (C.zf) goto L_1120300d;
  /* 11202fd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11202fd9 mov edx, dword ptr [0x1122da5c] */
  EDX = (r32((uint32_t)(0x1122da5c)));
  /* 11202fdf push edx */
  push32((uint32_t)(EDX));
  /* 11202fe0 call dword ptr [0x11231330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231330))), 0x11202fe6u);
  /* 11202fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11202fe8 je 0x1120300d */
  if (C.zf) goto L_1120300d;
  /* 11202fea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202fed push eax */
  push32((uint32_t)(EAX));
  /* 11202fee call 0x11202f70 */
  push32(0x11202ff3u); f_11202f70();
  /* 11202ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11202ff6 call dword ptr [0x1123132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123132c))), 0x11202ffcu);
  /* 11202ffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11202fff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11203001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203004 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1120300b jmp 0x11203017 */
  goto L_11203017;
L_1120300d:;
  /* 1120300d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1120300f call 0x112024c0 */
  push32(0x11203014u); f_112024c0();
  /* 11203014 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203017:;
  /* 11203017 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120301a push eax */
  push32((uint32_t)(EAX));
  /* 1120301b call dword ptr [0x1123133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123133c))), 0x11203021u);
  /* 11203021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203024 mov esp, ebp */
  ESP = (EBP);
  /* 11203026 pop ebp */
  EBP = (pop32());
  /* 11203027 ret  */
  ESPCHK(0x11202f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003030 @ 0x11203030 (263 bytes, 86 insns) */
void f_11203030(void) {
  FTRACE(0x11203030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203030 push ebp */
  push32((uint32_t)(EBP));
  /* 11203031 mov ebp, esp */
  EBP = (ESP);
  /* 11203033 cmp dword ptr [0x1122da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1122da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120303a je 0x11203135 */
  if (C.zf) goto L_11203135;
  /* 11203040 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203044 jne 0x11203055 */
  if (!C.zf) goto L_11203055;
  /* 11203046 mov eax, dword ptr [0x1122da5c] */
  EAX = (r32((uint32_t)(0x1122da5c)));
  /* 1120304b push eax */
  push32((uint32_t)(EAX));
  /* 1120304c call dword ptr [0x11231340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231340))), 0x11203052u);
  /* 11203052 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11203055:;
  /* 11203055 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203059 je 0x11203126 */
  if (C.zf) goto L_11203126;
  /* 1120305f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203062 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203066 je 0x11203079 */
  if (C.zf) goto L_11203079;
  /* 11203068 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120306a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120306d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11203070 push eax */
  push32((uint32_t)(EAX));
  /* 11203071 call 0x11203fe0 */
  push32(0x11203076u); f_11203fe0();
  /* 11203076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203079:;
  /* 11203079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120307c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203080 je 0x11203093 */
  if (C.zf) goto L_11203093;
  /* 11203082 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203087 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1120308a push eax */
  push32((uint32_t)(EAX));
  /* 1120308b call 0x11203fe0 */
  push32(0x11203090u); f_11203fe0();
  /* 11203090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203093:;
  /* 11203093 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203096 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120309a je 0x112030ad */
  if (C.zf) goto L_112030ad;
  /* 1120309c push 2 */
  push32((uint32_t)(0x2u));
  /* 1120309e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030a1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 112030a4 push eax */
  push32((uint32_t)(EAX));
  /* 112030a5 call 0x11203fe0 */
  push32(0x112030aau); f_11203fe0();
  /* 112030aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112030ad:;
  /* 112030ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030b0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112030b4 je 0x112030c7 */
  if (C.zf) goto L_112030c7;
  /* 112030b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112030b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030bb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 112030be push eax */
  push32((uint32_t)(EAX));
  /* 112030bf call 0x11203fe0 */
  push32(0x112030c4u); f_11203fe0();
  /* 112030c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112030c7:;
  /* 112030c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030ca cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112030ce je 0x112030e1 */
  if (C.zf) goto L_112030e1;
  /* 112030d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112030d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030d5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 112030d8 push eax */
  push32((uint32_t)(EAX));
  /* 112030d9 call 0x11203fe0 */
  push32(0x112030deu); f_11203fe0();
  /* 112030de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112030e1:;
  /* 112030e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030e4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112030e8 je 0x112030fb */
  if (C.zf) goto L_112030fb;
  /* 112030ea push 2 */
  push32((uint32_t)(0x2u));
  /* 112030ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030ef mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 112030f2 push eax */
  push32((uint32_t)(EAX));
  /* 112030f3 call 0x11203fe0 */
  push32(0x112030f8u); f_11203fe0();
  /* 112030f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112030fb:;
  /* 112030fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112030fe cmp dword ptr [ecx + 0x50], 0x1122dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1122dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203105 je 0x11203118 */
  if (C.zf) goto L_11203118;
  /* 11203107 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120310c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1120310f push eax */
  push32((uint32_t)(EAX));
  /* 11203110 call 0x11203fe0 */
  push32(0x11203115u); f_11203fe0();
  /* 11203115 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203118:;
  /* 11203118 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120311a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120311d push ecx */
  push32((uint32_t)(ECX));
  /* 1120311e call 0x11203fe0 */
  push32(0x11203123u); f_11203fe0();
  /* 11203123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203126:;
  /* 11203126 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203128 mov edx, dword ptr [0x1122da5c] */
  EDX = (r32((uint32_t)(0x1122da5c)));
  /* 1120312e push edx */
  push32((uint32_t)(EDX));
  /* 1120312f call dword ptr [0x11231330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231330))), 0x11203135u);
L_11203135:;
  /* 11203135 pop ebp */
  EBP = (pop32());
  /* 11203136 ret  */
  ESPCHK(0x11203030u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x11203140 (11 bytes, 5 insns) */
void f_11203140(void) {
  FTRACE(0x11203140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203140 push ebp */
  push32((uint32_t)(EBP));
  /* 11203141 mov ebp, esp */
  EBP = (ESP);
  /* 11203143 call dword ptr [0x1123132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123132c))), 0x11203149u);
  /* 11203149 pop ebp */
  EBP = (pop32());
  /* 1120314a ret  */
  ESPCHK(0x11203140u, _esp0);
  ESP += 4; return;
}

/* FUN_10003150 @ 0x11203150 (11 bytes, 5 insns) */
void f_11203150(void) {
  FTRACE(0x11203150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203150 push ebp */
  push32((uint32_t)(EBP));
  /* 11203151 mov ebp, esp */
  EBP = (ESP);
  /* 11203153 call dword ptr [0x1123127c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123127c))), 0x11203159u);
  /* 11203159 pop ebp */
  EBP = (pop32());
  /* 1120315a ret  */
  ESPCHK(0x11203150u, _esp0);
  ESP += 4; return;
}

/* FUN_10003160 @ 0x11203160 (804 bytes, 236 insns) */
void f_11203160(void) {
  FTRACE(0x11203160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203160 push ebp */
  push32((uint32_t)(EBP));
  /* 11203161 mov ebp, esp */
  EBP = (ESP);
  /* 11203163 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203166 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1120316b push 0x1122a424 */
  push32((uint32_t)(0x1122a424u));
  /* 11203170 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203172 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11203177 call 0x11203550 */
  push32(0x1120317cu); f_11203550();
  /* 1120317c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120317f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11203182 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203186 jne 0x11203192 */
  if (!C.zf) goto L_11203192;
  /* 11203188 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1120318a call 0x112024c0 */
  push32(0x1120318fu); f_112024c0();
  /* 1120318f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203192:;
  /* 11203192 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203195 mov dword ptr [0x11230e40], eax */
  w32((uint32_t)(0x11230e40), (EAX));
  /* 1120319a mov dword ptr [0x11230f7c], 0x20 */
  w32((uint32_t)(0x11230f7c), (0x20u));
  /* 112031a4 jmp 0x112031af */
  goto L_112031af;
L_112031a6:;
  /* 112031a6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112031a9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112031ac mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_112031af:;
  /* 112031af mov edx, dword ptr [0x11230e40] */
  EDX = (r32((uint32_t)(0x11230e40)));
  /* 112031b5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112031bb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112031be jae 0x112031e3 */
  if (!C.cf) goto L_112031e3;
  /* 112031c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112031c3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 112031c7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112031ca mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112031d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112031d3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 112031d7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112031da mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 112031e1 jmp 0x112031a6 */
  goto L_112031a6;
L_112031e3:;
  /* 112031e3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 112031e6 push ecx */
  push32((uint32_t)(ECX));
  /* 112031e7 call dword ptr [0x11231354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231354))), 0x112031edu);
  /* 112031ed mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 112031f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112031f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112031f8 je 0x11203385 */
  if (C.zf) goto L_11203385;
  /* 112031fe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203202 je 0x11203385 */
  if (C.zf) goto L_11203385;
  /* 11203208 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120320b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120320d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11203210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11203213 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203216 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11203219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120321c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120321f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11203222 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203229 jge 0x11203233 */
  if ((C.sf==C.of)) goto L_11203233;
  /* 1120322b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1120322e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11203231 jmp 0x1120323a */
  goto L_1120323a;
L_11203233:;
  /* 11203233 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1120323a:;
  /* 1120323a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1120323d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11203240 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11203247 jmp 0x11203252 */
  goto L_11203252;
L_11203249:;
  /* 11203249 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1120324c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120324f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11203252:;
  /* 11203252 mov ecx, dword ptr [0x11230f7c] */
  ECX = (r32((uint32_t)(0x11230f7c)));
  /* 11203258 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120325b jge 0x112032f2 */
  if ((C.sf==C.of)) goto L_112032f2;
  /* 11203261 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11203266 push 0x1122a424 */
  push32((uint32_t)(0x1122a424u));
  /* 1120326b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120326d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11203272 call 0x11203550 */
  push32(0x11203277u); f_11203550();
  /* 11203277 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120327a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1120327d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203281 jne 0x1120328e */
  if (!C.zf) goto L_1120328e;
  /* 11203283 mov edx, dword ptr [0x11230f7c] */
  EDX = (r32((uint32_t)(0x11230f7c)));
  /* 11203289 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1120328c jmp 0x112032f2 */
  goto L_112032f2;
L_1120328e:;
  /* 1120328e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11203291 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203294 mov dword ptr [eax*4 + 0x11230e40], ecx */
  w32((uint32_t)(EAX*4 + 0x11230e40), (ECX));
  /* 1120329b mov edx, dword ptr [0x11230f7c] */
  EDX = (r32((uint32_t)(0x11230f7c)));
  /* 112032a1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112032a4 mov dword ptr [0x11230f7c], edx */
  w32((uint32_t)(0x11230f7c), (EDX));
  /* 112032aa jmp 0x112032b5 */
  goto L_112032b5;
L_112032ac:;
  /* 112032ac mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112032af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112032b2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_112032b5:;
  /* 112032b5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 112032b8 mov edx, dword ptr [ecx*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 112032bf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112032c5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112032c8 jae 0x112032ed */
  if (!C.cf) goto L_112032ed;
  /* 112032ca mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112032cd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 112032d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112032d4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112032da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112032dd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 112032e1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112032e4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 112032eb jmp 0x112032ac */
  goto L_112032ac;
L_112032ed:;
  /* 112032ed jmp 0x11203249 */
  goto L_11203249;
L_112032f2:;
  /* 112032f2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 112032f9 jmp 0x11203316 */
  goto L_11203316;
L_112032fb:;
  /* 112032fb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 112032fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203301 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11203304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203307 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120330a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120330d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11203310 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203313 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11203316:;
  /* 11203316 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11203319 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120331c jge 0x11203385 */
  if ((C.sf==C.of)) goto L_11203385;
  /* 1120331e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11203321 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203324 je 0x11203380 */
  if (C.zf) goto L_11203380;
  /* 11203326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203329 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120332c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120332f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11203331 je 0x11203380 */
  if (C.zf) goto L_11203380;
  /* 11203333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203336 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11203339 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1120333c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120333e jne 0x11203350 */
  if (!C.zf) goto L_11203350;
  /* 11203340 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11203343 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11203345 push edx */
  push32((uint32_t)(EDX));
  /* 11203346 call dword ptr [0x11231350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231350))), 0x1120334cu);
  /* 1120334c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120334e je 0x11203380 */
  if (C.zf) goto L_11203380;
L_11203350:;
  /* 11203350 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11203353 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11203356 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11203359 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120335c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120335f mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 11203366 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203368 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1120336b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1120336e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11203371 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11203373 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11203375 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120337b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120337d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11203380:;
  /* 11203380 jmp 0x112032fb */
  goto L_112032fb;
L_11203385:;
  /* 11203385 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1120338c jmp 0x11203397 */
  goto L_11203397;
L_1120338e:;
  /* 1120338e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11203391 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203394 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11203397:;
  /* 11203397 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120339b jge 0x11203474 */
  if ((C.sf==C.of)) goto L_11203474;
  /* 112033a1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 112033a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112033a7 mov edx, dword ptr [0x11230e40] */
  EDX = (r32((uint32_t)(0x11230e40)));
  /* 112033ad add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112033af mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 112033b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112033b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112033b8 jne 0x11203460 */
  if (!C.zf) goto L_11203460;
  /* 112033be mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112033c1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 112033c5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112033c9 jne 0x112033d4 */
  if (!C.zf) goto L_112033d4;
  /* 112033cb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 112033d2 jmp 0x112033e4 */
  goto L_112033e4;
L_112033d4:;
  /* 112033d4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 112033d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112033da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112033dc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112033de add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112033e1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_112033e4:;
  /* 112033e4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 112033e7 push eax */
  push32((uint32_t)(EAX));
  /* 112033e8 call dword ptr [0x11231300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231300))), 0x112033eeu);
  /* 112033ee mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 112033f1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112033f5 je 0x1120344f */
  if (C.zf) goto L_1120344f;
  /* 112033f7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112033fa push ecx */
  push32((uint32_t)(ECX));
  /* 112033fb call dword ptr [0x11231350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231350))), 0x11203401u);
  /* 11203401 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11203404 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203408 je 0x1120344f */
  if (C.zf) goto L_1120344f;
  /* 1120340a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1120340d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11203410 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11203412 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11203415 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120341b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120341e jne 0x11203430 */
  if (!C.zf) goto L_11203430;
  /* 11203420 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203423 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11203426 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11203428 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1120342b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1120342e jmp 0x1120344d */
  goto L_1120344d;
L_11203430:;
  /* 11203430 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11203433 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11203439 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120343c jne 0x1120344d */
  if (!C.zf) goto L_1120344d;
  /* 1120343e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203441 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11203444 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11203447 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1120344a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1120344d:;
  /* 1120344d jmp 0x1120345e */
  goto L_1120345e;
L_1120344f:;
  /* 1120344f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203452 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11203455 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11203458 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1120345b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1120345e:;
  /* 1120345e jmp 0x1120346f */
  goto L_1120346f;
L_11203460:;
  /* 11203460 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11203463 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11203466 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11203469 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1120346c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1120346f:;
  /* 1120346f jmp 0x1120338e */
  goto L_1120338e;
L_11203474:;
  /* 11203474 mov eax, dword ptr [0x11230f7c] */
  EAX = (r32((uint32_t)(0x11230f7c)));
  /* 11203479 push eax */
  push32((uint32_t)(EAX));
  /* 1120347a call dword ptr [0x1123134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123134c))), 0x11203480u);
  /* 11203480 mov esp, ebp */
  ESP = (EBP);
  /* 11203482 pop ebp */
  EBP = (pop32());
  /* 11203483 ret  */
  ESPCHK(0x11203160u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11203490 (155 bytes, 45 insns) */
void f_11203490(void) {
  FTRACE(0x11203490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203490 push ebp */
  push32((uint32_t)(EBP));
  /* 11203491 mov ebp, esp */
  EBP = (ESP);
  /* 11203493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203496 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120349d jmp 0x112034a8 */
  goto L_112034a8;
L_1120349f:;
  /* 1120349f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112034a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112034a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112034a8:;
  /* 112034a8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112034ac jge 0x11203527 */
  if ((C.sf==C.of)) goto L_11203527;
  /* 112034ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112034b1 cmp dword ptr [ecx*4 + 0x11230e40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11230e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112034b9 je 0x11203522 */
  if (C.zf) goto L_11203522;
  /* 112034bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112034be mov eax, dword ptr [edx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 112034c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112034c8 jmp 0x112034d3 */
  goto L_112034d3;
L_112034ca:;
  /* 112034ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112034cd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112034d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112034d3:;
  /* 112034d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112034d6 mov eax, dword ptr [edx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 112034dd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112034e2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112034e5 jae 0x112034ff */
  if (!C.cf) goto L_112034ff;
  /* 112034e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112034ea cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112034ee je 0x112034fd */
  if (C.zf) goto L_112034fd;
  /* 112034f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112034f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112034f6 push edx */
  push32((uint32_t)(EDX));
  /* 112034f7 call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x112034fdu);
L_112034fd:;
  /* 112034fd jmp 0x112034ca */
  goto L_112034ca;
L_112034ff:;
  /* 112034ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11203501 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203504 mov ecx, dword ptr [eax*4 + 0x11230e40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120350b push ecx */
  push32((uint32_t)(ECX));
  /* 1120350c call 0x11203fe0 */
  push32(0x11203511u); f_11203fe0();
  /* 11203511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203514 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203517 mov dword ptr [edx*4 + 0x11230e40], 0 */
  w32((uint32_t)(EDX*4 + 0x11230e40), (0x0u));
L_11203522:;
  /* 11203522 jmp 0x1120349f */
  goto L_1120349f;
L_11203527:;
  /* 11203527 mov esp, ebp */
  ESP = (EBP);
  /* 11203529 pop ebp */
  EBP = (pop32());
  /* 1120352a ret  */
  ESPCHK(0x11203490u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x11203530 (29 bytes, 13 insns) */
void f_11203530(void) {
  FTRACE(0x11203530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203530 push ebp */
  push32((uint32_t)(EBP));
  /* 11203531 mov ebp, esp */
  EBP = (ESP);
  /* 11203533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203535 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203537 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203539 mov eax, dword ptr [0x1122f640] */
  EAX = (r32((uint32_t)(0x1122f640)));
  /* 1120353e push eax */
  push32((uint32_t)(EAX));
  /* 1120353f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203542 push ecx */
  push32((uint32_t)(ECX));
  /* 11203543 call 0x112035a0 */
  push32(0x11203548u); f_112035a0();
  /* 11203548 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120354b pop ebp */
  EBP = (pop32());
  /* 1120354c ret  */
  ESPCHK(0x11203530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x11203550 (35 bytes, 16 insns) */
void f_11203550(void) {
  FTRACE(0x11203550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203550 push ebp */
  push32((uint32_t)(EBP));
  /* 11203551 mov ebp, esp */
  EBP = (ESP);
  /* 11203553 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203556 push eax */
  push32((uint32_t)(EAX));
  /* 11203557 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120355a push ecx */
  push32((uint32_t)(ECX));
  /* 1120355b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120355e push edx */
  push32((uint32_t)(EDX));
  /* 1120355f mov eax, dword ptr [0x1122f640] */
  EAX = (r32((uint32_t)(0x1122f640)));
  /* 11203564 push eax */
  push32((uint32_t)(EAX));
  /* 11203565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203568 push ecx */
  push32((uint32_t)(ECX));
  /* 11203569 call 0x112035a0 */
  push32(0x1120356eu); f_112035a0();
  /* 1120356e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203571 pop ebp */
  EBP = (pop32());
  /* 11203572 ret  */
  ESPCHK(0x11203550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003580 @ 0x11203580 (27 bytes, 13 insns) */
void f_11203580(void) {
  FTRACE(0x11203580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203580 push ebp */
  push32((uint32_t)(EBP));
  /* 11203581 mov ebp, esp */
  EBP = (ESP);
  /* 11203583 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203585 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203587 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203589 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120358c push eax */
  push32((uint32_t)(EAX));
  /* 1120358d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203590 push ecx */
  push32((uint32_t)(ECX));
  /* 11203591 call 0x112035a0 */
  push32(0x11203596u); f_112035a0();
  /* 11203596 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203599 pop ebp */
  EBP = (pop32());
  /* 1120359a ret  */
  ESPCHK(0x11203580u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a0 @ 0x112035a0 (94 bytes, 38 insns) */
void f_112035a0(void) {
  FTRACE(0x112035a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112035a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112035a1 mov ebp, esp */
  EBP = (ESP);
  /* 112035a3 push ecx */
  push32((uint32_t)(ECX));
L_112035a4:;
  /* 112035a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 112035a6 call 0x11206f50 */
  push32(0x112035abu); f_11206f50();
  /* 112035ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112035ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112035b1 push eax */
  push32((uint32_t)(EAX));
  /* 112035b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112035b5 push ecx */
  push32((uint32_t)(ECX));
  /* 112035b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112035b9 push edx */
  push32((uint32_t)(EDX));
  /* 112035ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112035bd push eax */
  push32((uint32_t)(EAX));
  /* 112035be call 0x11203620 */
  push32(0x112035c3u); f_11203620();
  /* 112035c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112035c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112035c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 112035cb call 0x11206ff0 */
  push32(0x112035d0u); f_11206ff0();
  /* 112035d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112035d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112035d7 jne 0x112035df */
  if (!C.zf) goto L_112035df;
  /* 112035d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112035dd jne 0x112035e4 */
  if (!C.zf) goto L_112035e4;
L_112035df:;
  /* 112035df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112035e2 jmp 0x112035fa */
  goto L_112035fa;
L_112035e4:;
  /* 112035e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112035e7 push ecx */
  push32((uint32_t)(ECX));
  /* 112035e8 call 0x11207290 */
  push32(0x112035edu); f_11207290();
  /* 112035ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112035f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112035f2 jne 0x112035f8 */
  if (!C.zf) goto L_112035f8;
  /* 112035f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112035f6 jmp 0x112035fa */
  goto L_112035fa;
L_112035f8:;
  /* 112035f8 jmp 0x112035a4 */
  goto L_112035a4;
L_112035fa:;
  /* 112035fa mov esp, ebp */
  ESP = (EBP);
  /* 112035fc pop ebp */
  EBP = (pop32());
  /* 112035fd ret  */
  ESPCHK(0x112035a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x11203600 (23 bytes, 11 insns) */
void f_11203600(void) {
  FTRACE(0x11203600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203600 push ebp */
  push32((uint32_t)(EBP));
  /* 11203601 mov ebp, esp */
  EBP = (ESP);
  /* 11203603 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203605 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203607 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120360c push eax */
  push32((uint32_t)(EAX));
  /* 1120360d call 0x11203620 */
  push32(0x11203612u); f_11203620();
  /* 11203612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203615 pop ebp */
  EBP = (pop32());
  /* 11203616 ret  */
  ESPCHK(0x11203600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003620 @ 0x11203620 (787 bytes, 254 insns) */
void f_11203620(void) {
  FTRACE(0x11203620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203620 push ebp */
  push32((uint32_t)(EBP));
  /* 11203621 mov ebp, esp */
  EBP = (ESP);
  /* 11203623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203626 push ebx */
  push32((uint32_t)(EBX));
  /* 11203627 push esi */
  push32((uint32_t)(ESI));
  /* 11203628 push edi */
  push32((uint32_t)(EDI));
  /* 11203629 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11203630 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11203635 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11203638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120363a je 0x1120366c */
  if (C.zf) goto L_1120366c;
L_1120363c:;
  /* 1120363c call 0x112046f0 */
  push32(0x11203641u); f_112046f0();
  /* 11203641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203643 jne 0x11203666 */
  if (!C.zf) goto L_11203666;
  /* 11203645 push 0x1122a518 */
  push32((uint32_t)(0x1122a518u));
  /* 1120364a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120364c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11203651 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203656 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203658 call 0x11202610 */
  push32(0x1120365du); f_11202610();
  /* 1120365d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203663 jne 0x11203666 */
  if (!C.zf) goto L_11203666;
  /* 11203665 int3  */
  x86_unimpl("int3 @ 0x11203665");
L_11203666:;
  /* 11203666 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11203668 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120366a jne 0x1120363c */
  if (!C.zf) goto L_1120363c;
L_1120366c:;
  /* 1120366c mov edx, dword ptr [0x1122da88] */
  EDX = (r32((uint32_t)(0x1122da88)));
  /* 11203672 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11203675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203678 cmp eax, dword ptr [0x1122da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120367e jne 0x11203681 */
  if (!C.zf) goto L_11203681;
  /* 11203680 int3  */
  x86_unimpl("int3 @ 0x11203680");
L_11203681:;
  /* 11203681 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203684 push ecx */
  push32((uint32_t)(ECX));
  /* 11203685 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203688 push edx */
  push32((uint32_t)(EDX));
  /* 11203689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120368c push eax */
  push32((uint32_t)(EAX));
  /* 1120368d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203690 push ecx */
  push32((uint32_t)(ECX));
  /* 11203691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203694 push edx */
  push32((uint32_t)(EDX));
  /* 11203695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203697 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203699 call dword ptr [0x1122dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122dc90))), 0x1120369fu);
  /* 1120369f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112036a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112036a4 jne 0x11203704 */
  if (!C.zf) goto L_11203704;
  /* 112036a6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112036aa je 0x112036d7 */
  if (C.zf) goto L_112036d7;
L_112036ac:;
  /* 112036ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112036af push eax */
  push32((uint32_t)(EAX));
  /* 112036b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112036b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112036b4 push 0x1122a4d4 */
  push32((uint32_t)(0x1122a4d4u));
  /* 112036b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112036bb push 0 */
  push32((uint32_t)(0x0u));
  /* 112036bd push 0 */
  push32((uint32_t)(0x0u));
  /* 112036bf push 0 */
  push32((uint32_t)(0x0u));
  /* 112036c1 call 0x11202610 */
  push32(0x112036c6u); f_11202610();
  /* 112036c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112036c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112036cc jne 0x112036cf */
  if (!C.zf) goto L_112036cf;
  /* 112036ce int3  */
  x86_unimpl("int3 @ 0x112036ce");
L_112036cf:;
  /* 112036cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112036d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112036d3 jne 0x112036ac */
  if (!C.zf) goto L_112036ac;
  /* 112036d5 jmp 0x112036fd */
  goto L_112036fd;
L_112036d7:;
  /* 112036d7 push 0x1122a4b0 */
  push32((uint32_t)(0x1122a4b0u));
  /* 112036dc push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 112036e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112036e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112036e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112036e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112036e9 call 0x11202610 */
  push32(0x112036eeu); f_11202610();
  /* 112036ee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112036f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112036f4 jne 0x112036f7 */
  if (!C.zf) goto L_112036f7;
  /* 112036f6 int3  */
  x86_unimpl("int3 @ 0x112036f6");
L_112036f7:;
  /* 112036f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112036f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112036fb jne 0x112036d7 */
  if (!C.zf) goto L_112036d7;
L_112036fd:;
  /* 112036fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112036ff jmp 0x1120392c */
  goto L_1120392c;
L_11203704:;
  /* 11203704 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203707 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120370d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203710 je 0x11203726 */
  if (C.zf) goto L_11203726;
  /* 11203712 mov edx, dword ptr [0x1122da84] */
  EDX = (r32((uint32_t)(0x1122da84)));
  /* 11203718 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1120371b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120371d jne 0x11203726 */
  if (!C.zf) goto L_11203726;
  /* 1120371f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11203726:;
  /* 11203726 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120372a ja 0x11203737 */
  if ((!C.cf&&!C.zf)) goto L_11203737;
  /* 1120372c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120372f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203732 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203735 jbe 0x11203763 */
  if ((C.cf||C.zf)) goto L_11203763;
L_11203737:;
  /* 11203737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120373a push ecx */
  push32((uint32_t)(ECX));
  /* 1120373b push 0x1122a488 */
  push32((uint32_t)(0x1122a488u));
  /* 11203740 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203742 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203746 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203748 call 0x11202610 */
  push32(0x1120374du); f_11202610();
  /* 1120374d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203753 jne 0x11203756 */
  if (!C.zf) goto L_11203756;
  /* 11203755 int3  */
  x86_unimpl("int3 @ 0x11203755");
L_11203756:;
  /* 11203756 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11203758 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120375a jne 0x11203737 */
  if (!C.zf) goto L_11203737;
  /* 1120375c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120375e jmp 0x1120392c */
  goto L_1120392c;
L_11203763:;
  /* 11203763 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203766 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120376b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120376e je 0x112037b0 */
  if (C.zf) goto L_112037b0;
  /* 11203770 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203774 je 0x112037b0 */
  if (C.zf) goto L_112037b0;
  /* 11203776 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203779 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120377f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203782 je 0x112037b0 */
  if (C.zf) goto L_112037b0;
  /* 11203784 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203788 je 0x112037b0 */
  if (C.zf) goto L_112037b0;
L_1120378a:;
  /* 1120378a push 0x1122a454 */
  push32((uint32_t)(0x1122a454u));
  /* 1120378f push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11203794 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120379a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120379c call 0x11202610 */
  push32(0x112037a1u); f_11202610();
  /* 112037a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112037a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112037a7 jne 0x112037aa */
  if (!C.zf) goto L_112037aa;
  /* 112037a9 int3  */
  x86_unimpl("int3 @ 0x112037a9");
L_112037aa:;
  /* 112037aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112037ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112037ae jne 0x1120378a */
  if (!C.zf) goto L_1120378a;
L_112037b0:;
  /* 112037b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112037b3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112037b6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112037b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112037bc push ecx */
  push32((uint32_t)(ECX));
  /* 112037bd call 0x112073a0 */
  push32(0x112037c2u); f_112073a0();
  /* 112037c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112037c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112037c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112037cc jne 0x112037d5 */
  if (!C.zf) goto L_112037d5;
  /* 112037ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112037d0 jmp 0x1120392c */
  goto L_1120392c;
L_112037d5:;
  /* 112037d5 mov edx, dword ptr [0x1122da88] */
  EDX = (r32((uint32_t)(0x1122da88)));
  /* 112037db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112037de mov dword ptr [0x1122da88], edx */
  w32((uint32_t)(0x1122da88), (EDX));
  /* 112037e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112037e8 je 0x11203833 */
  if (C.zf) goto L_11203833;
  /* 112037ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112037ed mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112037f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112037f6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 112037fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203800 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11203807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120380a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11203811 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203817 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1120381a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120381d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11203824 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203827 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1120382e jmp 0x112038d3 */
  goto L_112038d3;
L_11203833:;
  /* 11203833 mov edx, dword ptr [0x1122f4a0] */
  EDX = (r32((uint32_t)(0x1122f4a0)));
  /* 11203839 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120383c mov dword ptr [0x1122f4a0], edx */
  w32((uint32_t)(0x1122f4a0), (EDX));
  /* 11203842 mov eax, dword ptr [0x1122f4a8] */
  EAX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203847 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120384a mov dword ptr [0x1122f4a8], eax */
  w32((uint32_t)(0x1122f4a8), (EAX));
  /* 1120384f mov ecx, dword ptr [0x1122f4a8] */
  ECX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203855 cmp ecx, dword ptr [0x1122f4ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122f4ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120385b jbe 0x11203869 */
  if ((C.cf||C.zf)) goto L_11203869;
  /* 1120385d mov edx, dword ptr [0x1122f4a8] */
  EDX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203863 mov dword ptr [0x1122f4ac], edx */
  w32((uint32_t)(0x1122f4ac), (EDX));
L_11203869:;
  /* 11203869 cmp dword ptr [0x1122f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203870 je 0x1120387f */
  if (C.zf) goto L_1120387f;
  /* 11203872 mov eax, dword ptr [0x1122f4a4] */
  EAX = (r32((uint32_t)(0x1122f4a4)));
  /* 11203877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120387a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1120387d jmp 0x11203888 */
  goto L_11203888;
L_1120387f:;
  /* 1120387f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203882 mov dword ptr [0x1122f49c], edx */
  w32((uint32_t)(0x1122f49c), (EDX));
L_11203888:;
  /* 11203888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120388b mov ecx, dword ptr [0x1122f4a4] */
  ECX = (r32((uint32_t)(0x1122f4a4)));
  /* 11203891 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11203893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203896 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1120389d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112038a3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 112038a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112038ac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 112038af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112038b5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 112038b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112038be mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 112038c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112038c7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 112038ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038cd mov dword ptr [0x1122f4a4], ecx */
  w32((uint32_t)(0x1122f4a4), (ECX));
L_112038d3:;
  /* 112038d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 112038d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112038d7 mov dl, byte ptr [0x1122da90] */
  DL = (r8((uint32_t)(0x1122da90)));
  /* 112038dd push edx */
  push32((uint32_t)(EDX));
  /* 112038de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038e1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112038e4 push eax */
  push32((uint32_t)(EAX));
  /* 112038e5 call 0x112072c0 */
  push32(0x112038eau); f_112072c0();
  /* 112038ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112038ed push 4 */
  push32((uint32_t)(0x4u));
  /* 112038ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112038f1 mov cl, byte ptr [0x1122da90] */
  CL = (r8((uint32_t)(0x1122da90)));
  /* 112038f7 push ecx */
  push32((uint32_t)(ECX));
  /* 112038f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112038fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112038fe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11203902 push ecx */
  push32((uint32_t)(ECX));
  /* 11203903 call 0x112072c0 */
  push32(0x11203908u); f_112072c0();
  /* 11203908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120390b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120390e push edx */
  push32((uint32_t)(EDX));
  /* 1120390f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203911 mov al, byte ptr [0x1122da92] */
  AL = (r8((uint32_t)(0x1122da92)));
  /* 11203916 push eax */
  push32((uint32_t)(EAX));
  /* 11203917 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120391a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120391d push ecx */
  push32((uint32_t)(ECX));
  /* 1120391e call 0x112072c0 */
  push32(0x11203923u); f_112072c0();
  /* 11203923 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203929 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1120392c:;
  /* 1120392c pop edi */
  EDI = (pop32());
  /* 1120392d pop esi */
  ESI = (pop32());
  /* 1120392e pop ebx */
  EBX = (pop32());
  /* 1120392f mov esp, ebp */
  ESP = (EBP);
  /* 11203931 pop ebp */
  EBP = (pop32());
  /* 11203932 ret  */
  ESPCHK(0x11203620u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x11203940 (27 bytes, 13 insns) */
void f_11203940(void) {
  FTRACE(0x11203940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203940 push ebp */
  push32((uint32_t)(EBP));
  /* 11203941 mov ebp, esp */
  EBP = (ESP);
  /* 11203943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203945 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203947 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203949 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120394c push eax */
  push32((uint32_t)(EAX));
  /* 1120394d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203950 push ecx */
  push32((uint32_t)(ECX));
  /* 11203951 call 0x11203960 */
  push32(0x11203956u); f_11203960();
  /* 11203956 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203959 pop ebp */
  EBP = (pop32());
  /* 1120395a ret  */
  ESPCHK(0x11203940u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11203960 (96 bytes, 37 insns) */
void f_11203960(void) {
  FTRACE(0x11203960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203960 push ebp */
  push32((uint32_t)(EBP));
  /* 11203961 mov ebp, esp */
  EBP = (ESP);
  /* 11203963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203969 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120396d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11203970 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11203973 push ecx */
  push32((uint32_t)(ECX));
  /* 11203974 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203977 push edx */
  push32((uint32_t)(EDX));
  /* 11203978 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120397b push eax */
  push32((uint32_t)(EAX));
  /* 1120397c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120397f push ecx */
  push32((uint32_t)(ECX));
  /* 11203980 call 0x11203550 */
  push32(0x11203985u); f_11203550();
  /* 11203985 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203988 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120398b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120398f je 0x112039b9 */
  if (C.zf) goto L_112039b9;
  /* 11203991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203994 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11203997 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120399a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120399d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112039a0:;
  /* 112039a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112039a3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112039a6 jae 0x112039b9 */
  if (!C.cf) goto L_112039b9;
  /* 112039a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112039ab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112039ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112039b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112039b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112039b7 jmp 0x112039a0 */
  goto L_112039a0;
L_112039b9:;
  /* 112039b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112039bc mov esp, ebp */
  ESP = (EBP);
  /* 112039be pop ebp */
  EBP = (pop32());
  /* 112039bf ret  */
  ESPCHK(0x11203960u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c0 @ 0x112039c0 (27 bytes, 13 insns) */
void f_112039c0(void) {
  FTRACE(0x112039c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112039c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112039c1 mov ebp, esp */
  EBP = (ESP);
  /* 112039c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112039c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112039c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112039c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112039cc push eax */
  push32((uint32_t)(EAX));
  /* 112039cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112039d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112039d1 call 0x112039e0 */
  push32(0x112039d6u); f_112039e0();
  /* 112039d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112039d9 pop ebp */
  EBP = (pop32());
  /* 112039da ret  */
  ESPCHK(0x112039c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e0 @ 0x112039e0 (64 bytes, 27 insns) */
void f_112039e0(void) {
  FTRACE(0x112039e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112039e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112039e1 mov ebp, esp */
  EBP = (ESP);
  /* 112039e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112039e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 112039e6 call 0x11206f50 */
  push32(0x112039ebu); f_11206f50();
  /* 112039eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112039ee push 1 */
  push32((uint32_t)(0x1u));
  /* 112039f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112039f3 push eax */
  push32((uint32_t)(EAX));
  /* 112039f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112039f7 push ecx */
  push32((uint32_t)(ECX));
  /* 112039f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112039fb push edx */
  push32((uint32_t)(EDX));
  /* 112039fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112039ff push eax */
  push32((uint32_t)(EAX));
  /* 11203a00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11203a04 call 0x11203a20 */
  push32(0x11203a09u); f_11203a20();
  /* 11203a09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203a0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11203a0f push 9 */
  push32((uint32_t)(0x9u));
  /* 11203a11 call 0x11206ff0 */
  push32(0x11203a16u); f_11206ff0();
  /* 11203a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203a1c mov esp, ebp */
  ESP = (EBP);
  /* 11203a1e pop ebp */
  EBP = (pop32());
  /* 11203a1f ret  */
  ESPCHK(0x112039e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x11203a20 (1297 bytes, 431 insns) */
void f_11203a20(void) {
  FTRACE(0x11203a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11203a21 mov ebp, esp */
  EBP = (ESP);
  /* 11203a23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11203a27 push esi */
  push32((uint32_t)(ESI));
  /* 11203a28 push edi */
  push32((uint32_t)(EDI));
  /* 11203a29 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11203a30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203a34 jne 0x11203a53 */
  if (!C.zf) goto L_11203a53;
  /* 11203a36 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11203a39 push eax */
  push32((uint32_t)(EAX));
  /* 11203a3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203a3d push ecx */
  push32((uint32_t)(ECX));
  /* 11203a3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203a41 push edx */
  push32((uint32_t)(EDX));
  /* 11203a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203a45 push eax */
  push32((uint32_t)(EAX));
  /* 11203a46 call 0x11203550 */
  push32(0x11203a4bu); f_11203550();
  /* 11203a4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203a4e jmp 0x11203f2a */
  goto L_11203f2a;
L_11203a53:;
  /* 11203a53 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203a57 je 0x11203a76 */
  if (C.zf) goto L_11203a76;
  /* 11203a59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203a5d jne 0x11203a76 */
  if (!C.zf) goto L_11203a76;
  /* 11203a5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203a62 push ecx */
  push32((uint32_t)(ECX));
  /* 11203a63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203a66 push edx */
  push32((uint32_t)(EDX));
  /* 11203a67 call 0x11203fe0 */
  push32(0x11203a6cu); f_11203fe0();
  /* 11203a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203a71 jmp 0x11203f2a */
  goto L_11203f2a;
L_11203a76:;
  /* 11203a76 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11203a7b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11203a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203a80 je 0x11203ab2 */
  if (C.zf) goto L_11203ab2;
L_11203a82:;
  /* 11203a82 call 0x112046f0 */
  push32(0x11203a87u); f_112046f0();
  /* 11203a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203a89 jne 0x11203aac */
  if (!C.zf) goto L_11203aac;
  /* 11203a8b push 0x1122a518 */
  push32((uint32_t)(0x1122a518u));
  /* 11203a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203a92 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11203a97 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203a9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11203a9e call 0x11202610 */
  push32(0x11203aa3u); f_11202610();
  /* 11203aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203aa6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203aa9 jne 0x11203aac */
  if (!C.zf) goto L_11203aac;
  /* 11203aab int3  */
  x86_unimpl("int3 @ 0x11203aab");
L_11203aac:;
  /* 11203aac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11203aae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11203ab0 jne 0x11203a82 */
  if (!C.zf) goto L_11203a82;
L_11203ab2:;
  /* 11203ab2 mov edx, dword ptr [0x1122da88] */
  EDX = (r32((uint32_t)(0x1122da88)));
  /* 11203ab8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11203abb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11203abe cmp eax, dword ptr [0x1122da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203ac4 jne 0x11203ac7 */
  if (!C.zf) goto L_11203ac7;
  /* 11203ac6 int3  */
  x86_unimpl("int3 @ 0x11203ac6");
L_11203ac7:;
  /* 11203ac7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11203aca push ecx */
  push32((uint32_t)(ECX));
  /* 11203acb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203ace push edx */
  push32((uint32_t)(EDX));
  /* 11203acf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11203ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11203ad3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11203ad7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203ada push edx */
  push32((uint32_t)(EDX));
  /* 11203adb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203ade push eax */
  push32((uint32_t)(EAX));
  /* 11203adf push 2 */
  push32((uint32_t)(0x2u));
  /* 11203ae1 call dword ptr [0x1122dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122dc90))), 0x11203ae7u);
  /* 11203ae7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203aec jne 0x11203b4c */
  if (!C.zf) goto L_11203b4c;
  /* 11203aee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203af2 je 0x11203b1f */
  if (C.zf) goto L_11203b1f;
L_11203af4:;
  /* 11203af4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11203af7 push ecx */
  push32((uint32_t)(ECX));
  /* 11203af8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203afb push edx */
  push32((uint32_t)(EDX));
  /* 11203afc push 0x1122a694 */
  push32((uint32_t)(0x1122a694u));
  /* 11203b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b09 call 0x11202610 */
  push32(0x11203b0eu); f_11202610();
  /* 11203b0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203b11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b14 jne 0x11203b17 */
  if (!C.zf) goto L_11203b17;
  /* 11203b16 int3  */
  x86_unimpl("int3 @ 0x11203b16");
L_11203b17:;
  /* 11203b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203b19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203b1b jne 0x11203af4 */
  if (!C.zf) goto L_11203af4;
  /* 11203b1d jmp 0x11203b45 */
  goto L_11203b45;
L_11203b1f:;
  /* 11203b1f push 0x1122a670 */
  push32((uint32_t)(0x1122a670u));
  /* 11203b24 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11203b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b31 call 0x11202610 */
  push32(0x11203b36u); f_11202610();
  /* 11203b36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203b39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b3c jne 0x11203b3f */
  if (!C.zf) goto L_11203b3f;
  /* 11203b3e int3  */
  x86_unimpl("int3 @ 0x11203b3e");
L_11203b3f:;
  /* 11203b3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11203b41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11203b43 jne 0x11203b1f */
  if (!C.zf) goto L_11203b1f;
L_11203b45:;
  /* 11203b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203b47 jmp 0x11203f2a */
  goto L_11203f2a;
L_11203b4c:;
  /* 11203b4c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b50 jbe 0x11203b7e */
  if ((C.cf||C.zf)) goto L_11203b7e;
L_11203b52:;
  /* 11203b52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203b55 push edx */
  push32((uint32_t)(EDX));
  /* 11203b56 push 0x1122a640 */
  push32((uint32_t)(0x1122a640u));
  /* 11203b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11203b61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203b63 call 0x11202610 */
  push32(0x11203b68u); f_11202610();
  /* 11203b68 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203b6b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b6e jne 0x11203b71 */
  if (!C.zf) goto L_11203b71;
  /* 11203b70 int3  */
  x86_unimpl("int3 @ 0x11203b70");
L_11203b71:;
  /* 11203b71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203b75 jne 0x11203b52 */
  if (!C.zf) goto L_11203b52;
  /* 11203b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203b79 jmp 0x11203f2a */
  goto L_11203f2a;
L_11203b7e:;
  /* 11203b7e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b82 je 0x11203bc6 */
  if (C.zf) goto L_11203bc6;
  /* 11203b84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203b87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11203b8d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b90 je 0x11203bc6 */
  if (C.zf) goto L_11203bc6;
  /* 11203b92 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203b95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11203b9b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203b9e je 0x11203bc6 */
  if (C.zf) goto L_11203bc6;
L_11203ba0:;
  /* 11203ba0 push 0x1122a454 */
  push32((uint32_t)(0x1122a454u));
  /* 11203ba5 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11203baa push 0 */
  push32((uint32_t)(0x0u));
  /* 11203bac push 0 */
  push32((uint32_t)(0x0u));
  /* 11203bae push 0 */
  push32((uint32_t)(0x0u));
  /* 11203bb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203bb2 call 0x11202610 */
  push32(0x11203bb7u); f_11202610();
  /* 11203bb7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203bba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203bbd jne 0x11203bc0 */
  if (!C.zf) goto L_11203bc0;
  /* 11203bbf int3  */
  x86_unimpl("int3 @ 0x11203bbf");
L_11203bc0:;
  /* 11203bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203bc4 jne 0x11203ba0 */
  if (!C.zf) goto L_11203ba0;
L_11203bc6:;
  /* 11203bc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11203bca call 0x11204b50 */
  push32(0x11203bcfu); f_11204b50();
  /* 11203bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11203bd4 jne 0x11203bf7 */
  if (!C.zf) goto L_11203bf7;
  /* 11203bd6 push 0x1122a61c */
  push32((uint32_t)(0x1122a61cu));
  /* 11203bdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11203bdd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11203be2 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203be7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203be9 call 0x11202610 */
  push32(0x11203beeu); f_11202610();
  /* 11203bee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203bf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203bf4 jne 0x11203bf7 */
  if (!C.zf) goto L_11203bf7;
  /* 11203bf6 int3  */
  x86_unimpl("int3 @ 0x11203bf6");
L_11203bf7:;
  /* 11203bf7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11203bf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11203bfb jne 0x11203bc6 */
  if (!C.zf) goto L_11203bc6;
  /* 11203bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203c00 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203c03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11203c06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203c09 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c0d jne 0x11203c16 */
  if (!C.zf) goto L_11203c16;
  /* 11203c0f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11203c16:;
  /* 11203c16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c1a je 0x11203c5a */
  if (C.zf) goto L_11203c5a;
L_11203c1c:;
  /* 11203c1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203c1f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c26 jne 0x11203c31 */
  if (!C.zf) goto L_11203c31;
  /* 11203c28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203c2b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c2f je 0x11203c52 */
  if (C.zf) goto L_11203c52;
L_11203c31:;
  /* 11203c31 push 0x1122a5d4 */
  push32((uint32_t)(0x1122a5d4u));
  /* 11203c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203c38 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11203c3d push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203c42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203c44 call 0x11202610 */
  push32(0x11203c49u); f_11202610();
  /* 11203c49 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203c4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c4f jne 0x11203c52 */
  if (!C.zf) goto L_11203c52;
  /* 11203c51 int3  */
  x86_unimpl("int3 @ 0x11203c51");
L_11203c52:;
  /* 11203c52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11203c54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11203c56 jne 0x11203c1c */
  if (!C.zf) goto L_11203c1c;
  /* 11203c58 jmp 0x11203cbe */
  goto L_11203cbe;
L_11203c5a:;
  /* 11203c5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203c5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11203c60 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11203c65 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c68 jne 0x11203c7f */
  if (!C.zf) goto L_11203c7f;
  /* 11203c6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203c6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11203c73 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c76 jne 0x11203c7f */
  if (!C.zf) goto L_11203c7f;
  /* 11203c78 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11203c7f:;
  /* 11203c7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203c82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11203c85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11203c8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203c8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11203c93 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203c95 je 0x11203cb8 */
  if (C.zf) goto L_11203cb8;
  /* 11203c97 push 0x1122a598 */
  push32((uint32_t)(0x1122a598u));
  /* 11203c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11203c9e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11203ca3 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203caa call 0x11202610 */
  push32(0x11203cafu); f_11202610();
  /* 11203caf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203cb2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203cb5 jne 0x11203cb8 */
  if (!C.zf) goto L_11203cb8;
  /* 11203cb7 int3  */
  x86_unimpl("int3 @ 0x11203cb7");
L_11203cb8:;
  /* 11203cb8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11203cba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11203cbc jne 0x11203c7f */
  if (!C.zf) goto L_11203c7f;
L_11203cbe:;
  /* 11203cbe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203cc2 je 0x11203ce9 */
  if (C.zf) goto L_11203ce9;
  /* 11203cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203cc7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203cca push eax */
  push32((uint32_t)(EAX));
  /* 11203ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203cce push ecx */
  push32((uint32_t)(ECX));
  /* 11203ccf call 0x112074d0 */
  push32(0x11203cd4u); f_112074d0();
  /* 11203cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203cd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11203cda cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203cde jne 0x11203ce7 */
  if (!C.zf) goto L_11203ce7;
  /* 11203ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203ce2 jmp 0x11203f2a */
  goto L_11203f2a;
L_11203ce7:;
  /* 11203ce7 jmp 0x11203d0c */
  goto L_11203d0c;
L_11203ce9:;
  /* 11203ce9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203cec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203cef push edx */
  push32((uint32_t)(EDX));
  /* 11203cf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11203cf3 push eax */
  push32((uint32_t)(EAX));
  /* 11203cf4 call 0x11207420 */
  push32(0x11203cf9u); f_11207420();
  /* 11203cf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203cfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11203cff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203d03 jne 0x11203d0c */
  if (!C.zf) goto L_11203d0c;
  /* 11203d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203d07 jmp 0x11203f2a */
  goto L_11203f2a;
L_11203d0c:;
  /* 11203d0c mov ecx, dword ptr [0x1122da88] */
  ECX = (r32((uint32_t)(0x1122da88)));
  /* 11203d12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203d15 mov dword ptr [0x1122da88], ecx */
  w32((uint32_t)(0x1122da88), (ECX));
  /* 11203d1b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203d1f jne 0x11203d77 */
  if (!C.zf) goto L_11203d77;
  /* 11203d21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203d24 mov eax, dword ptr [0x1122f4a0] */
  EAX = (r32((uint32_t)(0x1122f4a0)));
  /* 11203d29 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203d2c mov dword ptr [0x1122f4a0], eax */
  w32((uint32_t)(0x1122f4a0), (EAX));
  /* 11203d31 mov ecx, dword ptr [0x1122f4a0] */
  ECX = (r32((uint32_t)(0x1122f4a0)));
  /* 11203d37 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203d3a mov dword ptr [0x1122f4a0], ecx */
  w32((uint32_t)(0x1122f4a0), (ECX));
  /* 11203d40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203d43 mov eax, dword ptr [0x1122f4a8] */
  EAX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203d48 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203d4b mov dword ptr [0x1122f4a8], eax */
  w32((uint32_t)(0x1122f4a8), (EAX));
  /* 11203d50 mov ecx, dword ptr [0x1122f4a8] */
  ECX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203d56 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203d59 mov dword ptr [0x1122f4a8], ecx */
  w32((uint32_t)(0x1122f4a8), (ECX));
  /* 11203d5f mov edx, dword ptr [0x1122f4a8] */
  EDX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203d65 cmp edx, dword ptr [0x1122f4ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122f4ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203d6b jbe 0x11203d77 */
  if ((C.cf||C.zf)) goto L_11203d77;
  /* 11203d6d mov eax, dword ptr [0x1122f4a8] */
  EAX = (r32((uint32_t)(0x1122f4a8)));
  /* 11203d72 mov dword ptr [0x1122f4ac], eax */
  w32((uint32_t)(0x1122f4ac), (EAX));
L_11203d77:;
  /* 11203d77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203d7a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203d7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11203d80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203d83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203d86 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203d89 jbe 0x11203daf */
  if ((C.cf||C.zf)) goto L_11203daf;
  /* 11203d8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203d8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203d91 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11203d94 push edx */
  push32((uint32_t)(EDX));
  /* 11203d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203d97 mov al, byte ptr [0x1122da92] */
  AL = (r8((uint32_t)(0x1122da92)));
  /* 11203d9c push eax */
  push32((uint32_t)(EAX));
  /* 11203d9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203da0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203da3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203da6 push edx */
  push32((uint32_t)(EDX));
  /* 11203da7 call 0x112072c0 */
  push32(0x11203dacu); f_112072c0();
  /* 11203dac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11203daf:;
  /* 11203daf push 4 */
  push32((uint32_t)(0x4u));
  /* 11203db1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11203db3 mov al, byte ptr [0x1122da90] */
  AL = (r8((uint32_t)(0x1122da90)));
  /* 11203db8 push eax */
  push32((uint32_t)(EAX));
  /* 11203db9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203dbc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11203dbf push ecx */
  push32((uint32_t)(ECX));
  /* 11203dc0 call 0x112072c0 */
  push32(0x11203dc5u); f_112072c0();
  /* 11203dc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203dc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203dcc jne 0x11203de9 */
  if (!C.zf) goto L_11203de9;
  /* 11203dce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203dd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203dd4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11203dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203dda mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11203ddd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11203de0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203de3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11203de6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11203de9:;
  /* 11203de9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203dec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203def mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11203df2:;
  /* 11203df2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203df6 jne 0x11203e27 */
  if (!C.zf) goto L_11203e27;
  /* 11203df8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203dfc jne 0x11203e06 */
  if (!C.zf) goto L_11203e06;
  /* 11203dfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e01 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e04 je 0x11203e27 */
  if (C.zf) goto L_11203e27;
L_11203e06:;
  /* 11203e06 push 0x1122a564 */
  push32((uint32_t)(0x1122a564u));
  /* 11203e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11203e0d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11203e12 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203e19 call 0x11202610 */
  push32(0x11203e1eu); f_11202610();
  /* 11203e1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203e21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e24 jne 0x11203e27 */
  if (!C.zf) goto L_11203e27;
  /* 11203e26 int3  */
  x86_unimpl("int3 @ 0x11203e26");
L_11203e27:;
  /* 11203e27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11203e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11203e2b jne 0x11203df2 */
  if (!C.zf) goto L_11203df2;
  /* 11203e2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e30 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e33 je 0x11203e3b */
  if (C.zf) goto L_11203e3b;
  /* 11203e35 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e39 je 0x11203e43 */
  if (C.zf) goto L_11203e43;
L_11203e3b:;
  /* 11203e3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203e3e jmp 0x11203f2a */
  goto L_11203f2a;
L_11203e43:;
  /* 11203e43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e46 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e49 je 0x11203e5b */
  if (C.zf) goto L_11203e5b;
  /* 11203e4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11203e50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11203e56 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11203e59 jmp 0x11203e97 */
  goto L_11203e97;
L_11203e5b:;
  /* 11203e5b mov eax, dword ptr [0x1122f49c] */
  EAX = (r32((uint32_t)(0x1122f49c)));
  /* 11203e60 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e63 je 0x11203e86 */
  if (C.zf) goto L_11203e86;
  /* 11203e65 push 0x1122a548 */
  push32((uint32_t)(0x1122a548u));
  /* 11203e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11203e6c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11203e71 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203e76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11203e78 call 0x11202610 */
  push32(0x11203e7du); f_11202610();
  /* 11203e7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203e80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e83 jne 0x11203e86 */
  if (!C.zf) goto L_11203e86;
  /* 11203e85 int3  */
  x86_unimpl("int3 @ 0x11203e85");
L_11203e86:;
  /* 11203e86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11203e88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11203e8a jne 0x11203e5b */
  if (!C.zf) goto L_11203e5b;
  /* 11203e8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11203e92 mov dword ptr [0x1122f49c], eax */
  w32((uint32_t)(0x1122f49c), (EAX));
L_11203e97:;
  /* 11203e97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203e9a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203e9e je 0x11203eaf */
  if (C.zf) goto L_11203eaf;
  /* 11203ea0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203ea3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11203ea6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203ea9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11203eab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11203ead jmp 0x11203eea */
  goto L_11203eea;
L_11203eaf:;
  /* 11203eaf mov eax, dword ptr [0x1122f4a4] */
  EAX = (r32((uint32_t)(0x1122f4a4)));
  /* 11203eb4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203eb7 je 0x11203eda */
  if (C.zf) goto L_11203eda;
  /* 11203eb9 push 0x1122a52c */
  push32((uint32_t)(0x1122a52cu));
  /* 11203ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11203ec0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11203ec5 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11203eca push 2 */
  push32((uint32_t)(0x2u));
  /* 11203ecc call 0x11202610 */
  push32(0x11203ed1u); f_11202610();
  /* 11203ed1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203ed4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203ed7 jne 0x11203eda */
  if (!C.zf) goto L_11203eda;
  /* 11203ed9 int3  */
  x86_unimpl("int3 @ 0x11203ed9");
L_11203eda:;
  /* 11203eda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11203edc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11203ede jne 0x11203eaf */
  if (!C.zf) goto L_11203eaf;
  /* 11203ee0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203ee3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11203ee5 mov dword ptr [0x1122f4a4], eax */
  w32((uint32_t)(0x1122f4a4), (EAX));
L_11203eea:;
  /* 11203eea cmp dword ptr [0x1122f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11203ef1 je 0x11203f01 */
  if (C.zf) goto L_11203f01;
  /* 11203ef3 mov ecx, dword ptr [0x1122f4a4] */
  ECX = (r32((uint32_t)(0x1122f4a4)));
  /* 11203ef9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203efc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11203eff jmp 0x11203f09 */
  goto L_11203f09;
L_11203f01:;
  /* 11203f01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203f04 mov dword ptr [0x1122f49c], eax */
  w32((uint32_t)(0x1122f49c), (EAX));
L_11203f09:;
  /* 11203f09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203f0c mov edx, dword ptr [0x1122f4a4] */
  EDX = (r32((uint32_t)(0x1122f4a4)));
  /* 11203f12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11203f14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203f17 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11203f1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11203f21 mov dword ptr [0x1122f4a4], ecx */
  w32((uint32_t)(0x1122f4a4), (ECX));
  /* 11203f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11203f2a:;
  /* 11203f2a pop edi */
  EDI = (pop32());
  /* 11203f2b pop esi */
  ESI = (pop32());
  /* 11203f2c pop ebx */
  EBX = (pop32());
  /* 11203f2d mov esp, ebp */
  ESP = (EBP);
  /* 11203f2f pop ebp */
  EBP = (pop32());
  /* 11203f30 ret  */
  ESPCHK(0x11203a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f40 @ 0x11203f40 (27 bytes, 13 insns) */
void f_11203f40(void) {
  FTRACE(0x11203f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11203f41 mov ebp, esp */
  EBP = (ESP);
  /* 11203f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11203f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203f4c push eax */
  push32((uint32_t)(EAX));
  /* 11203f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203f50 push ecx */
  push32((uint32_t)(ECX));
  /* 11203f51 call 0x11203f60 */
  push32(0x11203f56u); f_11203f60();
  /* 11203f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203f59 pop ebp */
  EBP = (pop32());
  /* 11203f5a ret  */
  ESPCHK(0x11203f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x11203f60 (64 bytes, 27 insns) */
void f_11203f60(void) {
  FTRACE(0x11203f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11203f61 mov ebp, esp */
  EBP = (ESP);
  /* 11203f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11203f64 push 9 */
  push32((uint32_t)(0x9u));
  /* 11203f66 call 0x11206f50 */
  push32(0x11203f6bu); f_11206f50();
  /* 11203f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11203f70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11203f73 push eax */
  push32((uint32_t)(EAX));
  /* 11203f74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11203f77 push ecx */
  push32((uint32_t)(ECX));
  /* 11203f78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11203f7b push edx */
  push32((uint32_t)(EDX));
  /* 11203f7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203f7f push eax */
  push32((uint32_t)(EAX));
  /* 11203f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11203f84 call 0x11203a20 */
  push32(0x11203f89u); f_11203a20();
  /* 11203f89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203f8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11203f8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11203f91 call 0x11206ff0 */
  push32(0x11203f96u); f_11206ff0();
  /* 11203f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11203f9c mov esp, ebp */
  ESP = (EBP);
  /* 11203f9e pop ebp */
  EBP = (pop32());
  /* 11203f9f ret  */
  ESPCHK(0x11203f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x11203fa0 (19 bytes, 9 insns) */
void f_11203fa0(void) {
  FTRACE(0x11203fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11203fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11203fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203fa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203fa8 push eax */
  push32((uint32_t)(EAX));
  /* 11203fa9 call 0x11203fe0 */
  push32(0x11203faeu); f_11203fe0();
  /* 11203fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203fb1 pop ebp */
  EBP = (pop32());
  /* 11203fb2 ret  */
  ESPCHK(0x11203fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x11203fc0 (19 bytes, 9 insns) */
void f_11203fc0(void) {
  FTRACE(0x11203fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11203fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11203fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11203fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203fc8 push eax */
  push32((uint32_t)(EAX));
  /* 11203fc9 call 0x11204010 */
  push32(0x11203fceu); f_11204010();
  /* 11203fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203fd1 pop ebp */
  EBP = (pop32());
  /* 11203fd2 ret  */
  ESPCHK(0x11203fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe0 @ 0x11203fe0 (41 bytes, 16 insns) */
void f_11203fe0(void) {
  FTRACE(0x11203fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11203fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11203fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11203fe3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11203fe5 call 0x11206f50 */
  push32(0x11203feau); f_11206f50();
  /* 11203fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203fed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11203ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11203ff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11203ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11203ff5 call 0x11204010 */
  push32(0x11203ffau); f_11204010();
  /* 11203ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11203ffd push 9 */
  push32((uint32_t)(0x9u));
  /* 11203fff call 0x11206ff0 */
  push32(0x11204004u); f_11206ff0();
  /* 11204004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204007 pop ebp */
  EBP = (pop32());
  /* 11204008 ret  */
  ESPCHK(0x11203fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004010 @ 0x11204010 (1004 bytes, 342 insns) */
void f_11204010(void) {
  FTRACE(0x11204010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204010 push ebp */
  push32((uint32_t)(EBP));
  /* 11204011 mov ebp, esp */
  EBP = (ESP);
  /* 11204013 push ecx */
  push32((uint32_t)(ECX));
  /* 11204014 push ebx */
  push32((uint32_t)(EBX));
  /* 11204015 push esi */
  push32((uint32_t)(ESI));
  /* 11204016 push edi */
  push32((uint32_t)(EDI));
  /* 11204017 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 1120401c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1120401f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204021 je 0x11204053 */
  if (C.zf) goto L_11204053;
L_11204023:;
  /* 11204023 call 0x112046f0 */
  push32(0x11204028u); f_112046f0();
  /* 11204028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120402a jne 0x1120404d */
  if (!C.zf) goto L_1120404d;
  /* 1120402c push 0x1122a518 */
  push32((uint32_t)(0x1122a518u));
  /* 11204031 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204033 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11204038 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 1120403d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120403f call 0x11202610 */
  push32(0x11204044u); f_11202610();
  /* 11204044 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204047 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120404a jne 0x1120404d */
  if (!C.zf) goto L_1120404d;
  /* 1120404c int3  */
  x86_unimpl("int3 @ 0x1120404c");
L_1120404d:;
  /* 1120404d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120404f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204051 jne 0x11204023 */
  if (!C.zf) goto L_11204023;
L_11204053:;
  /* 11204053 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204057 jne 0x1120405e */
  if (!C.zf) goto L_1120405e;
  /* 11204059 jmp 0x112043f5 */
  goto L_112043f5;
L_1120405e:;
  /* 1120405e push 0 */
  push32((uint32_t)(0x0u));
  /* 11204060 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204062 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204064 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204067 push edx */
  push32((uint32_t)(EDX));
  /* 11204068 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120406a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120406d push eax */
  push32((uint32_t)(EAX));
  /* 1120406e push 3 */
  push32((uint32_t)(0x3u));
  /* 11204070 call dword ptr [0x1122dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122dc90))), 0x11204076u);
  /* 11204076 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120407b jne 0x112040a8 */
  if (!C.zf) goto L_112040a8;
L_1120407d:;
  /* 1120407d push 0x1122a7dc */
  push32((uint32_t)(0x1122a7dcu));
  /* 11204082 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11204087 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120408b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120408d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120408f call 0x11202610 */
  push32(0x11204094u); f_11202610();
  /* 11204094 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204097 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120409a jne 0x1120409d */
  if (!C.zf) goto L_1120409d;
  /* 1120409c int3  */
  x86_unimpl("int3 @ 0x1120409c");
L_1120409d:;
  /* 1120409d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120409f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112040a1 jne 0x1120407d */
  if (!C.zf) goto L_1120407d;
  /* 112040a3 jmp 0x112043f5 */
  goto L_112043f5;
L_112040a8:;
  /* 112040a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112040ab push edx */
  push32((uint32_t)(EDX));
  /* 112040ac call 0x11204b50 */
  push32(0x112040b1u); f_11204b50();
  /* 112040b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112040b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112040b6 jne 0x112040d9 */
  if (!C.zf) goto L_112040d9;
  /* 112040b8 push 0x1122a61c */
  push32((uint32_t)(0x1122a61cu));
  /* 112040bd push 0 */
  push32((uint32_t)(0x0u));
  /* 112040bf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 112040c4 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 112040c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112040cb call 0x11202610 */
  push32(0x112040d0u); f_11202610();
  /* 112040d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112040d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112040d6 jne 0x112040d9 */
  if (!C.zf) goto L_112040d9;
  /* 112040d8 int3  */
  x86_unimpl("int3 @ 0x112040d8");
L_112040d9:;
  /* 112040d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112040db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112040dd jne 0x112040a8 */
  if (!C.zf) goto L_112040a8;
  /* 112040df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112040e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112040e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112040e8:;
  /* 112040e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112040eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112040ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112040f3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112040f6 je 0x1120413b */
  if (C.zf) goto L_1120413b;
  /* 112040f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112040fb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112040ff je 0x1120413b */
  if (C.zf) goto L_1120413b;
  /* 11204101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204104 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11204107 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120410c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120410f je 0x1120413b */
  if (C.zf) goto L_1120413b;
  /* 11204111 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204114 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204118 je 0x1120413b */
  if (C.zf) goto L_1120413b;
  /* 1120411a push 0x1122a7b4 */
  push32((uint32_t)(0x1122a7b4u));
  /* 1120411f push 0 */
  push32((uint32_t)(0x0u));
  /* 11204121 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11204126 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 1120412b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120412d call 0x11202610 */
  push32(0x11204132u); f_11202610();
  /* 11204132 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204135 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204138 jne 0x1120413b */
  if (!C.zf) goto L_1120413b;
  /* 1120413a int3  */
  x86_unimpl("int3 @ 0x1120413a");
L_1120413b:;
  /* 1120413b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120413d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120413f jne 0x112040e8 */
  if (!C.zf) goto L_112040e8;
  /* 11204141 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11204146 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11204149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120414b jne 0x11204216 */
  if (!C.zf) goto L_11204216;
  /* 11204151 push 4 */
  push32((uint32_t)(0x4u));
  /* 11204153 mov cl, byte ptr [0x1122da90] */
  CL = (r8((uint32_t)(0x1122da90)));
  /* 11204159 push ecx */
  push32((uint32_t)(ECX));
  /* 1120415a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120415d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204160 push edx */
  push32((uint32_t)(EDX));
  /* 11204161 call 0x11204660 */
  push32(0x11204166u); f_11204660();
  /* 11204166 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120416b jne 0x112041b0 */
  if (!C.zf) goto L_112041b0;
L_1120416d:;
  /* 1120416d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204170 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204173 push eax */
  push32((uint32_t)(EAX));
  /* 11204174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204177 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1120417a push edx */
  push32((uint32_t)(EDX));
  /* 1120417b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120417e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11204181 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11204187 mov edx, dword ptr [ecx*4 + 0x1122da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da94)));
  /* 1120418e push edx */
  push32((uint32_t)(EDX));
  /* 1120418f push 0x1122a788 */
  push32((uint32_t)(0x1122a788u));
  /* 11204194 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120419a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120419c call 0x11202610 */
  push32(0x112041a1u); f_11202610();
  /* 112041a1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112041a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112041a7 jne 0x112041aa */
  if (!C.zf) goto L_112041aa;
  /* 112041a9 int3  */
  x86_unimpl("int3 @ 0x112041a9");
L_112041aa:;
  /* 112041aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112041ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112041ae jne 0x1120416d */
  if (!C.zf) goto L_1120416d;
L_112041b0:;
  /* 112041b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 112041b2 mov cl, byte ptr [0x1122da90] */
  CL = (r8((uint32_t)(0x1122da90)));
  /* 112041b8 push ecx */
  push32((uint32_t)(ECX));
  /* 112041b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112041bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112041bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112041c2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 112041c6 push edx */
  push32((uint32_t)(EDX));
  /* 112041c7 call 0x11204660 */
  push32(0x112041ccu); f_11204660();
  /* 112041cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112041cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112041d1 jne 0x11204216 */
  if (!C.zf) goto L_11204216;
L_112041d3:;
  /* 112041d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112041d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112041d9 push eax */
  push32((uint32_t)(EAX));
  /* 112041da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112041dd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112041e0 push edx */
  push32((uint32_t)(EDX));
  /* 112041e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112041e4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112041e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112041ed mov edx, dword ptr [ecx*4 + 0x1122da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da94)));
  /* 112041f4 push edx */
  push32((uint32_t)(EDX));
  /* 112041f5 push 0x1122a75c */
  push32((uint32_t)(0x1122a75cu));
  /* 112041fa push 0 */
  push32((uint32_t)(0x0u));
  /* 112041fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112041fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11204200 push 1 */
  push32((uint32_t)(0x1u));
  /* 11204202 call 0x11202610 */
  push32(0x11204207u); f_11202610();
  /* 11204207 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120420a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120420d jne 0x11204210 */
  if (!C.zf) goto L_11204210;
  /* 1120420f int3  */
  x86_unimpl("int3 @ 0x1120420f");
L_11204210:;
  /* 11204210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204214 jne 0x112041d3 */
  if (!C.zf) goto L_112041d3;
L_11204216:;
  /* 11204216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204219 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120421d jne 0x1120428b */
  if (!C.zf) goto L_1120428b;
L_1120421f:;
  /* 1120421f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204222 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204229 jne 0x11204234 */
  if (!C.zf) goto L_11204234;
  /* 1120422b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120422e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204232 je 0x11204255 */
  if (C.zf) goto L_11204255;
L_11204234:;
  /* 11204234 push 0x1122a71c */
  push32((uint32_t)(0x1122a71cu));
  /* 11204239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120423b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11204240 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11204245 push 2 */
  push32((uint32_t)(0x2u));
  /* 11204247 call 0x11202610 */
  push32(0x1120424cu); f_11202610();
  /* 1120424c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120424f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204252 jne 0x11204255 */
  if (!C.zf) goto L_11204255;
  /* 11204254 int3  */
  x86_unimpl("int3 @ 0x11204254");
L_11204255:;
  /* 11204255 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11204257 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204259 jne 0x1120421f */
  if (!C.zf) goto L_1120421f;
  /* 1120425b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120425e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11204261 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204264 push eax */
  push32((uint32_t)(EAX));
  /* 11204265 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11204267 mov cl, byte ptr [0x1122da91] */
  CL = (r8((uint32_t)(0x1122da91)));
  /* 1120426d push ecx */
  push32((uint32_t)(ECX));
  /* 1120426e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204271 push edx */
  push32((uint32_t)(EDX));
  /* 11204272 call 0x112072c0 */
  push32(0x11204277u); f_112072c0();
  /* 11204277 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120427a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120427d push eax */
  push32((uint32_t)(EAX));
  /* 1120427e call 0x112076c0 */
  push32(0x11204283u); f_112076c0();
  /* 11204283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204286 jmp 0x112043f5 */
  goto L_112043f5;
L_1120428b:;
  /* 1120428b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120428e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204292 jne 0x112042a1 */
  if (!C.zf) goto L_112042a1;
  /* 11204294 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204298 jne 0x112042a1 */
  if (!C.zf) goto L_112042a1;
  /* 1120429a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_112042a1:;
  /* 112042a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112042a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112042a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112042aa je 0x112042cd */
  if (C.zf) goto L_112042cd;
  /* 112042ac push 0x1122a6fc */
  push32((uint32_t)(0x1122a6fcu));
  /* 112042b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112042b3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 112042b8 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 112042bd push 2 */
  push32((uint32_t)(0x2u));
  /* 112042bf call 0x11202610 */
  push32(0x112042c4u); f_11202610();
  /* 112042c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112042c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112042ca jne 0x112042cd */
  if (!C.zf) goto L_112042cd;
  /* 112042cc int3  */
  x86_unimpl("int3 @ 0x112042cc");
L_112042cd:;
  /* 112042cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112042cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112042d1 jne 0x112042a1 */
  if (!C.zf) goto L_112042a1;
  /* 112042d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112042d6 mov eax, dword ptr [0x1122f4a8] */
  EAX = (r32((uint32_t)(0x1122f4a8)));
  /* 112042db sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112042de mov dword ptr [0x1122f4a8], eax */
  w32((uint32_t)(0x1122f4a8), (EAX));
  /* 112042e3 mov ecx, dword ptr [0x1122da84] */
  ECX = (r32((uint32_t)(0x1122da84)));
  /* 112042e9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112042ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112042ee jne 0x112043cc */
  if (!C.zf) goto L_112043cc;
  /* 112042f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112042f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112042fa je 0x1120430c */
  if (C.zf) goto L_1120430c;
  /* 112042fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112042ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11204301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204304 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11204307 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1120430a jmp 0x1120434a */
  goto L_1120434a;
L_1120430c:;
  /* 1120430c mov ecx, dword ptr [0x1122f49c] */
  ECX = (r32((uint32_t)(0x1122f49c)));
  /* 11204312 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204315 je 0x11204338 */
  if (C.zf) goto L_11204338;
  /* 11204317 push 0x1122a6e4 */
  push32((uint32_t)(0x1122a6e4u));
  /* 1120431c push 0 */
  push32((uint32_t)(0x0u));
  /* 1120431e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11204323 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11204328 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120432a call 0x11202610 */
  push32(0x1120432fu); f_11202610();
  /* 1120432f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204332 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204335 jne 0x11204338 */
  if (!C.zf) goto L_11204338;
  /* 11204337 int3  */
  x86_unimpl("int3 @ 0x11204337");
L_11204338:;
  /* 11204338 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120433a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120433c jne 0x1120430c */
  if (!C.zf) goto L_1120430c;
  /* 1120433e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204341 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11204344 mov dword ptr [0x1122f49c], ecx */
  w32((uint32_t)(0x1122f49c), (ECX));
L_1120434a:;
  /* 1120434a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120434d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204351 je 0x11204362 */
  if (C.zf) goto L_11204362;
  /* 11204353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204356 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11204359 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120435c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120435e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11204360 jmp 0x1120439f */
  goto L_1120439f;
L_11204362:;
  /* 11204362 mov ecx, dword ptr [0x1122f4a4] */
  ECX = (r32((uint32_t)(0x1122f4a4)));
  /* 11204368 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120436b je 0x1120438e */
  if (C.zf) goto L_1120438e;
  /* 1120436d push 0x1122a6cc */
  push32((uint32_t)(0x1122a6ccu));
  /* 11204372 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204374 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11204379 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 1120437e push 2 */
  push32((uint32_t)(0x2u));
  /* 11204380 call 0x11202610 */
  push32(0x11204385u); f_11202610();
  /* 11204385 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204388 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120438b jne 0x1120438e */
  if (!C.zf) goto L_1120438e;
  /* 1120438d int3  */
  x86_unimpl("int3 @ 0x1120438d");
L_1120438e:;
  /* 1120438e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11204390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11204392 jne 0x11204362 */
  if (!C.zf) goto L_11204362;
  /* 11204394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204397 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11204399 mov dword ptr [0x1122f4a4], ecx */
  w32((uint32_t)(0x1122f4a4), (ECX));
L_1120439f:;
  /* 1120439f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112043a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112043a5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112043a8 push eax */
  push32((uint32_t)(EAX));
  /* 112043a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112043ab mov cl, byte ptr [0x1122da91] */
  CL = (r8((uint32_t)(0x1122da91)));
  /* 112043b1 push ecx */
  push32((uint32_t)(ECX));
  /* 112043b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112043b5 push edx */
  push32((uint32_t)(EDX));
  /* 112043b6 call 0x112072c0 */
  push32(0x112043bbu); f_112072c0();
  /* 112043bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112043be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112043c1 push eax */
  push32((uint32_t)(EAX));
  /* 112043c2 call 0x112076c0 */
  push32(0x112043c7u); f_112076c0();
  /* 112043c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112043ca jmp 0x112043f5 */
  goto L_112043f5;
L_112043cc:;
  /* 112043cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112043cf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 112043d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112043d9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112043dc push eax */
  push32((uint32_t)(EAX));
  /* 112043dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112043df mov cl, byte ptr [0x1122da91] */
  CL = (r8((uint32_t)(0x1122da91)));
  /* 112043e5 push ecx */
  push32((uint32_t)(ECX));
  /* 112043e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112043e9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112043ec push edx */
  push32((uint32_t)(EDX));
  /* 112043ed call 0x112072c0 */
  push32(0x112043f2u); f_112072c0();
  /* 112043f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112043f5:;
  /* 112043f5 pop edi */
  EDI = (pop32());
  /* 112043f6 pop esi */
  ESI = (pop32());
  /* 112043f7 pop ebx */
  EBX = (pop32());
  /* 112043f8 mov esp, ebp */
  ESP = (EBP);
  /* 112043fa pop ebp */
  EBP = (pop32());
  /* 112043fb ret  */
  ESPCHK(0x11204010u, _esp0);
  ESP += 4; return;
}

/* FUN_10004400 @ 0x11204400 (19 bytes, 9 insns) */
void f_11204400(void) {
  FTRACE(0x11204400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204400 push ebp */
  push32((uint32_t)(EBP));
  /* 11204401 mov ebp, esp */
  EBP = (ESP);
  /* 11204403 push 1 */
  push32((uint32_t)(0x1u));
  /* 11204405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204408 push eax */
  push32((uint32_t)(EAX));
  /* 11204409 call 0x11204420 */
  push32(0x1120440eu); f_11204420();
  /* 1120440e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204411 pop ebp */
  EBP = (pop32());
  /* 11204412 ret  */
  ESPCHK(0x11204400u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x11204420 (342 bytes, 119 insns) */
void f_11204420(void) {
  FTRACE(0x11204420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204420 push ebp */
  push32((uint32_t)(EBP));
  /* 11204421 mov ebp, esp */
  EBP = (ESP);
  /* 11204423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204426 push ebx */
  push32((uint32_t)(EBX));
  /* 11204427 push esi */
  push32((uint32_t)(ESI));
  /* 11204428 push edi */
  push32((uint32_t)(EDI));
  /* 11204429 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 1120442e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11204431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204433 je 0x11204465 */
  if (C.zf) goto L_11204465;
L_11204435:;
  /* 11204435 call 0x112046f0 */
  push32(0x1120443au); f_112046f0();
  /* 1120443a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120443c jne 0x1120445f */
  if (!C.zf) goto L_1120445f;
  /* 1120443e push 0x1122a518 */
  push32((uint32_t)(0x1122a518u));
  /* 11204443 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204445 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1120444a push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 1120444f push 2 */
  push32((uint32_t)(0x2u));
  /* 11204451 call 0x11202610 */
  push32(0x11204456u); f_11202610();
  /* 11204456 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204459 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120445c jne 0x1120445f */
  if (!C.zf) goto L_1120445f;
  /* 1120445e int3  */
  x86_unimpl("int3 @ 0x1120445e");
L_1120445f:;
  /* 1120445f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11204461 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204463 jne 0x11204435 */
  if (!C.zf) goto L_11204435;
L_11204465:;
  /* 11204465 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204467 call 0x11206f50 */
  push32(0x1120446cu); f_11206f50();
  /* 1120446c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120446f:;
  /* 1120446f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204472 push edx */
  push32((uint32_t)(EDX));
  /* 11204473 call 0x11204b50 */
  push32(0x11204478u); f_11204b50();
  /* 11204478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120447b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120447d jne 0x112044a0 */
  if (!C.zf) goto L_112044a0;
  /* 1120447f push 0x1122a61c */
  push32((uint32_t)(0x1122a61cu));
  /* 11204484 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204486 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1120448b push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11204490 push 2 */
  push32((uint32_t)(0x2u));
  /* 11204492 call 0x11202610 */
  push32(0x11204497u); f_11202610();
  /* 11204497 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120449a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120449d jne 0x112044a0 */
  if (!C.zf) goto L_112044a0;
  /* 1120449f int3  */
  x86_unimpl("int3 @ 0x1120449f");
L_112044a0:;
  /* 112044a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112044a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112044a4 jne 0x1120446f */
  if (!C.zf) goto L_1120446f;
  /* 112044a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112044a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112044ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112044af:;
  /* 112044af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112044b2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112044b5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112044ba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112044bd je 0x11204502 */
  if (C.zf) goto L_11204502;
  /* 112044bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112044c2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112044c6 je 0x11204502 */
  if (C.zf) goto L_11204502;
  /* 112044c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112044cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112044ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112044d3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112044d6 je 0x11204502 */
  if (C.zf) goto L_11204502;
  /* 112044d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112044db cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112044df je 0x11204502 */
  if (C.zf) goto L_11204502;
  /* 112044e1 push 0x1122a7b4 */
  push32((uint32_t)(0x1122a7b4u));
  /* 112044e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112044e8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 112044ed push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 112044f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112044f4 call 0x11202610 */
  push32(0x112044f9u); f_11202610();
  /* 112044f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112044fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112044ff jne 0x11204502 */
  if (!C.zf) goto L_11204502;
  /* 11204501 int3  */
  x86_unimpl("int3 @ 0x11204501");
L_11204502:;
  /* 11204502 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11204504 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11204506 jne 0x112044af */
  if (!C.zf) goto L_112044af;
  /* 11204508 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120450b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120450f jne 0x1120451e */
  if (!C.zf) goto L_1120451e;
  /* 11204511 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204515 jne 0x1120451e */
  if (!C.zf) goto L_1120451e;
  /* 11204517 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1120451e:;
  /* 1120451e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204521 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204525 je 0x11204559 */
  if (C.zf) goto L_11204559;
L_11204527:;
  /* 11204527 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120452a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1120452d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204530 je 0x11204553 */
  if (C.zf) goto L_11204553;
  /* 11204532 push 0x1122a6fc */
  push32((uint32_t)(0x1122a6fcu));
  /* 11204537 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204539 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1120453e push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 11204543 push 2 */
  push32((uint32_t)(0x2u));
  /* 11204545 call 0x11202610 */
  push32(0x1120454au); f_11202610();
  /* 1120454a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120454d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204550 jne 0x11204553 */
  if (!C.zf) goto L_11204553;
  /* 11204552 int3  */
  x86_unimpl("int3 @ 0x11204552");
L_11204553:;
  /* 11204553 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11204555 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204557 jne 0x11204527 */
  if (!C.zf) goto L_11204527;
L_11204559:;
  /* 11204559 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120455c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1120455f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11204562 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204564 call 0x11206ff0 */
  push32(0x11204569u); f_11206ff0();
  /* 11204569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120456c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120456f pop edi */
  EDI = (pop32());
  /* 11204570 pop esi */
  ESI = (pop32());
  /* 11204571 pop ebx */
  EBX = (pop32());
  /* 11204572 mov esp, ebp */
  ESP = (EBP);
  /* 11204574 pop ebp */
  EBP = (pop32());
  /* 11204575 ret  */
  ESPCHK(0x11204420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x11204580 (28 bytes, 11 insns) */
void f_11204580(void) {
  FTRACE(0x11204580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204580 push ebp */
  push32((uint32_t)(EBP));
  /* 11204581 mov ebp, esp */
  EBP = (ESP);
  /* 11204583 push ecx */
  push32((uint32_t)(ECX));
  /* 11204584 mov eax, dword ptr [0x1122da8c] */
  EAX = (r32((uint32_t)(0x1122da8c)));
  /* 11204589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120458c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120458f mov dword ptr [0x1122da8c], ecx */
  w32((uint32_t)(0x1122da8c), (ECX));
  /* 11204595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204598 mov esp, ebp */
  ESP = (EBP);
  /* 1120459a pop ebp */
  EBP = (pop32());
  /* 1120459b ret  */
  ESPCHK(0x11204580u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x112045a0 (157 bytes, 59 insns) */
void f_112045a0(void) {
  FTRACE(0x112045a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112045a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112045a1 mov ebp, esp */
  EBP = (ESP);
  /* 112045a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112045a4 push ebx */
  push32((uint32_t)(EBX));
  /* 112045a5 push esi */
  push32((uint32_t)(ESI));
  /* 112045a6 push edi */
  push32((uint32_t)(EDI));
  /* 112045a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 112045a9 call 0x11206f50 */
  push32(0x112045aeu); f_11206f50();
  /* 112045ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112045b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112045b4 push eax */
  push32((uint32_t)(EAX));
  /* 112045b5 call 0x11204b50 */
  push32(0x112045bau); f_11204b50();
  /* 112045ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112045bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112045bf je 0x1120462c */
  if (C.zf) goto L_1120462c;
  /* 112045c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112045c4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112045c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112045ca:;
  /* 112045ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112045cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112045d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112045d5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112045d8 je 0x1120461d */
  if (C.zf) goto L_1120461d;
  /* 112045da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112045dd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112045e1 je 0x1120461d */
  if (C.zf) goto L_1120461d;
  /* 112045e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112045e6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112045e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112045ee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112045f1 je 0x1120461d */
  if (C.zf) goto L_1120461d;
  /* 112045f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112045f6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112045fa je 0x1120461d */
  if (C.zf) goto L_1120461d;
  /* 112045fc push 0x1122a7b4 */
  push32((uint32_t)(0x1122a7b4u));
  /* 11204601 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204603 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11204608 push 0x1122a50c */
  push32((uint32_t)(0x1122a50cu));
  /* 1120460d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120460f call 0x11202610 */
  push32(0x11204614u); f_11202610();
  /* 11204614 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120461a jne 0x1120461d */
  if (!C.zf) goto L_1120461d;
  /* 1120461c int3  */
  x86_unimpl("int3 @ 0x1120461c");
L_1120461d:;
  /* 1120461d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120461f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11204621 jne 0x112045ca */
  if (!C.zf) goto L_112045ca;
  /* 11204623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204626 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204629 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1120462c:;
  /* 1120462c push 9 */
  push32((uint32_t)(0x9u));
  /* 1120462e call 0x11206ff0 */
  push32(0x11204633u); f_11206ff0();
  /* 11204633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204636 pop edi */
  EDI = (pop32());
  /* 11204637 pop esi */
  ESI = (pop32());
  /* 11204638 pop ebx */
  EBX = (pop32());
  /* 11204639 mov esp, ebp */
  ESP = (EBP);
  /* 1120463b pop ebp */
  EBP = (pop32());
  /* 1120463c ret  */
  ESPCHK(0x112045a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x11204640 (28 bytes, 11 insns) */
void f_11204640(void) {
  FTRACE(0x11204640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204640 push ebp */
  push32((uint32_t)(EBP));
  /* 11204641 mov ebp, esp */
  EBP = (ESP);
  /* 11204643 push ecx */
  push32((uint32_t)(ECX));
  /* 11204644 mov eax, dword ptr [0x1122dc90] */
  EAX = (r32((uint32_t)(0x1122dc90)));
  /* 11204649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120464c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120464f mov dword ptr [0x1122dc90], ecx */
  w32((uint32_t)(0x1122dc90), (ECX));
  /* 11204655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204658 mov esp, ebp */
  ESP = (EBP);
  /* 1120465a pop ebp */
  EBP = (pop32());
  /* 1120465b ret  */
  ESPCHK(0x11204640u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x11204660 (136 bytes, 55 insns) */
void f_11204660(void) {
  FTRACE(0x11204660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204660 push ebp */
  push32((uint32_t)(EBP));
  /* 11204661 mov ebp, esp */
  EBP = (ESP);
  /* 11204663 push ecx */
  push32((uint32_t)(ECX));
  /* 11204664 push ebx */
  push32((uint32_t)(EBX));
  /* 11204665 push esi */
  push32((uint32_t)(ESI));
  /* 11204666 push edi */
  push32((uint32_t)(EDI));
  /* 11204667 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1120466e:;
  /* 1120466e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204671 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204674 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204677 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1120467a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120467c je 0x112046de */
  if (C.zf) goto L_112046de;
  /* 1120467e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204683 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11204685 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204688 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120468e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204691 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204694 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11204697 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204699 je 0x112046dc */
  if (C.zf) goto L_112046dc;
L_1120469b:;
  /* 1120469b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120469e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112046a3 push eax */
  push32((uint32_t)(EAX));
  /* 112046a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112046a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112046a9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 112046ac push edx */
  push32((uint32_t)(EDX));
  /* 112046ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112046b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112046b3 push eax */
  push32((uint32_t)(EAX));
  /* 112046b4 push 0x1122a7f8 */
  push32((uint32_t)(0x1122a7f8u));
  /* 112046b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112046bb push 0 */
  push32((uint32_t)(0x0u));
  /* 112046bd push 0 */
  push32((uint32_t)(0x0u));
  /* 112046bf push 0 */
  push32((uint32_t)(0x0u));
  /* 112046c1 call 0x11202610 */
  push32(0x112046c6u); f_11202610();
  /* 112046c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112046c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112046cc jne 0x112046cf */
  if (!C.zf) goto L_112046cf;
  /* 112046ce int3  */
  x86_unimpl("int3 @ 0x112046ce");
L_112046cf:;
  /* 112046cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112046d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112046d3 jne 0x1120469b */
  if (!C.zf) goto L_1120469b;
  /* 112046d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112046dc:;
  /* 112046dc jmp 0x1120466e */
  goto L_1120466e;
L_112046de:;
  /* 112046de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112046e1 pop edi */
  EDI = (pop32());
  /* 112046e2 pop esi */
  ESI = (pop32());
  /* 112046e3 pop ebx */
  EBX = (pop32());
  /* 112046e4 mov esp, ebp */
  ESP = (EBP);
  /* 112046e6 pop ebp */
  EBP = (pop32());
  /* 112046e7 ret  */
  ESPCHK(0x11204660u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f0 @ 0x112046f0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_112046f0(void) {
  FTRACE(0x112046f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112046f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112046f1 mov ebp, esp */
  EBP = (ESP);
  /* 112046f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112046f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112046f7 push esi */
  push32((uint32_t)(ESI));
  /* 112046f8 push edi */
  push32((uint32_t)(EDI));
  /* 112046f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11204700 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11204705 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11204708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120470a jne 0x11204716 */
  if (!C.zf) goto L_11204716;
  /* 1120470c mov eax, 1 */
  EAX = (0x1u);
  /* 11204711 jmp 0x11204a48 */
  goto L_11204a48;
L_11204716:;
  /* 11204716 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204718 call 0x11206f50 */
  push32(0x1120471du); f_11206f50();
  /* 1120471d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204720 call 0x11207730 */
  push32(0x11204725u); f_11207730();
  /* 11204725 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11204728 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120472c je 0x11204839 */
  if (C.zf) goto L_11204839;
  /* 11204732 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204736 je 0x11204839 */
  if (C.zf) goto L_11204839;
  /* 1120473c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120473f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11204742 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11204745 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204748 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1120474b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120474f ja 0x11204802 */
  if ((!C.cf&&!C.zf)) goto L_11204802;
  /* 11204755 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11204758 jmp dword ptr [eax*4 + 0x11204a4f] */
  switch (EAX) {
    case 0: goto L_112047da;
    case 1: goto L_112047b2;
    case 2: goto L_1120478a;
    case 3: goto L_1120475f;
    default: x86_unimpl("switch@0x11204758 out of table"); return;
  }
L_1120475f:;
  /* 1120475f push 0x1122a94c */
  push32((uint32_t)(0x1122a94cu));
  /* 11204764 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11204769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120476b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120476d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120476f push 0 */
  push32((uint32_t)(0x0u));
  /* 11204771 call 0x11202610 */
  push32(0x11204776u); f_11202610();
  /* 11204776 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204779 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120477c jne 0x1120477f */
  if (!C.zf) goto L_1120477f;
  /* 1120477e int3  */
  x86_unimpl("int3 @ 0x1120477e");
L_1120477f:;
  /* 1120477f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11204781 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204783 jne 0x1120475f */
  if (!C.zf) goto L_1120475f;
  /* 11204785 jmp 0x11204828 */
  goto L_11204828;
L_1120478a:;
  /* 1120478a push 0x1122a928 */
  push32((uint32_t)(0x1122a928u));
  /* 1120478f push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11204794 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120479a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120479c call 0x11202610 */
  push32(0x112047a1u); f_11202610();
  /* 112047a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112047a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112047a7 jne 0x112047aa */
  if (!C.zf) goto L_112047aa;
  /* 112047a9 int3  */
  x86_unimpl("int3 @ 0x112047a9");
L_112047aa:;
  /* 112047aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112047ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112047ae jne 0x1120478a */
  if (!C.zf) goto L_1120478a;
  /* 112047b0 jmp 0x11204828 */
  goto L_11204828;
L_112047b2:;
  /* 112047b2 push 0x1122a904 */
  push32((uint32_t)(0x1122a904u));
  /* 112047b7 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 112047bc push 0 */
  push32((uint32_t)(0x0u));
  /* 112047be push 0 */
  push32((uint32_t)(0x0u));
  /* 112047c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112047c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112047c4 call 0x11202610 */
  push32(0x112047c9u); f_11202610();
  /* 112047c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112047cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112047cf jne 0x112047d2 */
  if (!C.zf) goto L_112047d2;
  /* 112047d1 int3  */
  x86_unimpl("int3 @ 0x112047d1");
L_112047d2:;
  /* 112047d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112047d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112047d6 jne 0x112047b2 */
  if (!C.zf) goto L_112047b2;
  /* 112047d8 jmp 0x11204828 */
  goto L_11204828;
L_112047da:;
  /* 112047da push 0x1122a8e0 */
  push32((uint32_t)(0x1122a8e0u));
  /* 112047df push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 112047e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112047e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112047e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112047ea push 0 */
  push32((uint32_t)(0x0u));
  /* 112047ec call 0x11202610 */
  push32(0x112047f1u); f_11202610();
  /* 112047f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112047f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112047f7 jne 0x112047fa */
  if (!C.zf) goto L_112047fa;
  /* 112047f9 int3  */
  x86_unimpl("int3 @ 0x112047f9");
L_112047fa:;
  /* 112047fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112047fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112047fe jne 0x112047da */
  if (!C.zf) goto L_112047da;
  /* 11204800 jmp 0x11204828 */
  goto L_11204828;
L_11204802:;
  /* 11204802 push 0x1122a8b4 */
  push32((uint32_t)(0x1122a8b4u));
  /* 11204807 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 1120480c push 0 */
  push32((uint32_t)(0x0u));
  /* 1120480e push 0 */
  push32((uint32_t)(0x0u));
  /* 11204810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204812 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204814 call 0x11202610 */
  push32(0x11204819u); f_11202610();
  /* 11204819 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120481c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120481f jne 0x11204822 */
  if (!C.zf) goto L_11204822;
  /* 11204821 int3  */
  x86_unimpl("int3 @ 0x11204821");
L_11204822:;
  /* 11204822 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11204824 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11204826 jne 0x11204802 */
  if (!C.zf) goto L_11204802;
L_11204828:;
  /* 11204828 push 9 */
  push32((uint32_t)(0x9u));
  /* 1120482a call 0x11206ff0 */
  push32(0x1120482fu); f_11206ff0();
  /* 1120482f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204834 jmp 0x11204a48 */
  goto L_11204a48;
L_11204839:;
  /* 11204839 mov eax, dword ptr [0x1122f4a4] */
  EAX = (r32((uint32_t)(0x1122f4a4)));
  /* 1120483e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11204841 jmp 0x1120484b */
  goto L_1120484b;
L_11204843:;
  /* 11204843 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204846 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11204848 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1120484b:;
  /* 1120484b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120484f je 0x11204a3b */
  if (C.zf) goto L_11204a3b;
  /* 11204855 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1120485c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120485f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11204862 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11204868 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120486b je 0x11204890 */
  if (C.zf) goto L_11204890;
  /* 1120486d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204870 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204874 je 0x11204890 */
  if (C.zf) goto L_11204890;
  /* 11204876 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204879 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1120487c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11204882 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204885 je 0x11204890 */
  if (C.zf) goto L_11204890;
  /* 11204887 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120488a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120488e jne 0x112048a8 */
  if (!C.zf) goto L_112048a8;
L_11204890:;
  /* 11204890 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204893 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11204896 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120489c mov edx, dword ptr [ecx*4 + 0x1122da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da94)));
  /* 112048a3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112048a6 jmp 0x112048af */
  goto L_112048af;
L_112048a8:;
  /* 112048a8 mov dword ptr [ebp - 0x14], 0x1122a8ac */
  w32((uint32_t)(EBP + -0x14), (0x1122a8acu));
L_112048af:;
  /* 112048af push 4 */
  push32((uint32_t)(0x4u));
  /* 112048b1 mov al, byte ptr [0x1122da90] */
  AL = (r8((uint32_t)(0x1122da90)));
  /* 112048b6 push eax */
  push32((uint32_t)(EAX));
  /* 112048b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112048ba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112048bd push ecx */
  push32((uint32_t)(ECX));
  /* 112048be call 0x11204660 */
  push32(0x112048c3u); f_11204660();
  /* 112048c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112048c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112048c8 jne 0x11204904 */
  if (!C.zf) goto L_11204904;
L_112048ca:;
  /* 112048ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112048cd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112048d0 push edx */
  push32((uint32_t)(EDX));
  /* 112048d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112048d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 112048d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112048d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112048db push edx */
  push32((uint32_t)(EDX));
  /* 112048dc push 0x1122a788 */
  push32((uint32_t)(0x1122a788u));
  /* 112048e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112048e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112048e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112048e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112048e9 call 0x11202610 */
  push32(0x112048eeu); f_11202610();
  /* 112048ee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112048f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112048f4 jne 0x112048f7 */
  if (!C.zf) goto L_112048f7;
  /* 112048f6 int3  */
  x86_unimpl("int3 @ 0x112048f6");
L_112048f7:;
  /* 112048f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112048f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112048fb jne 0x112048ca */
  if (!C.zf) goto L_112048ca;
  /* 112048fd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11204904:;
  /* 11204904 push 4 */
  push32((uint32_t)(0x4u));
  /* 11204906 mov cl, byte ptr [0x1122da90] */
  CL = (r8((uint32_t)(0x1122da90)));
  /* 1120490c push ecx */
  push32((uint32_t)(ECX));
  /* 1120490d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204910 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11204913 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204916 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1120491a push edx */
  push32((uint32_t)(EDX));
  /* 1120491b call 0x11204660 */
  push32(0x11204920u); f_11204660();
  /* 11204920 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204925 jne 0x11204961 */
  if (!C.zf) goto L_11204961;
L_11204927:;
  /* 11204927 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120492a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120492d push eax */
  push32((uint32_t)(EAX));
  /* 1120492e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204931 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11204934 push edx */
  push32((uint32_t)(EDX));
  /* 11204935 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11204938 push eax */
  push32((uint32_t)(EAX));
  /* 11204939 push 0x1122a75c */
  push32((uint32_t)(0x1122a75cu));
  /* 1120493e push 0 */
  push32((uint32_t)(0x0u));
  /* 11204940 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204942 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204944 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204946 call 0x11202610 */
  push32(0x1120494bu); f_11202610();
  /* 1120494b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120494e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204951 jne 0x11204954 */
  if (!C.zf) goto L_11204954;
  /* 11204953 int3  */
  x86_unimpl("int3 @ 0x11204953");
L_11204954:;
  /* 11204954 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11204956 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204958 jne 0x11204927 */
  if (!C.zf) goto L_11204927;
  /* 1120495a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11204961:;
  /* 11204961 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204964 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204968 jne 0x112049ba */
  if (!C.zf) goto L_112049ba;
  /* 1120496a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120496d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11204970 push ecx */
  push32((uint32_t)(ECX));
  /* 11204971 mov dl, byte ptr [0x1122da91] */
  DL = (r8((uint32_t)(0x1122da91)));
  /* 11204977 push edx */
  push32((uint32_t)(EDX));
  /* 11204978 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120497b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120497e push eax */
  push32((uint32_t)(EAX));
  /* 1120497f call 0x11204660 */
  push32(0x11204984u); f_11204660();
  /* 11204984 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204989 jne 0x112049ba */
  if (!C.zf) goto L_112049ba;
L_1120498b:;
  /* 1120498b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120498e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204991 push ecx */
  push32((uint32_t)(ECX));
  /* 11204992 push 0x1122a880 */
  push32((uint32_t)(0x1122a880u));
  /* 11204997 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120499b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120499d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120499f call 0x11202610 */
  push32(0x112049a4u); f_11202610();
  /* 112049a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112049a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112049aa jne 0x112049ad */
  if (!C.zf) goto L_112049ad;
  /* 112049ac int3  */
  x86_unimpl("int3 @ 0x112049ac");
L_112049ad:;
  /* 112049ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112049af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112049b1 jne 0x1120498b */
  if (!C.zf) goto L_1120498b;
  /* 112049b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112049ba:;
  /* 112049ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112049be jne 0x11204a36 */
  if (!C.zf) goto L_11204a36;
  /* 112049c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112049c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112049c7 je 0x112049fc */
  if (C.zf) goto L_112049fc;
L_112049c9:;
  /* 112049c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112049cc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112049cf push edx */
  push32((uint32_t)(EDX));
  /* 112049d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112049d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112049d6 push ecx */
  push32((uint32_t)(ECX));
  /* 112049d7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112049da push edx */
  push32((uint32_t)(EDX));
  /* 112049db push 0x1122a860 */
  push32((uint32_t)(0x1122a860u));
  /* 112049e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112049e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112049e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112049e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112049e8 call 0x11202610 */
  push32(0x112049edu); f_11202610();
  /* 112049ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112049f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112049f3 jne 0x112049f6 */
  if (!C.zf) goto L_112049f6;
  /* 112049f5 int3  */
  x86_unimpl("int3 @ 0x112049f5");
L_112049f6:;
  /* 112049f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112049f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112049fa jne 0x112049c9 */
  if (!C.zf) goto L_112049c9;
L_112049fc:;
  /* 112049fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112049ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11204a02 push edx */
  push32((uint32_t)(EDX));
  /* 11204a03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204a06 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204a09 push eax */
  push32((uint32_t)(EAX));
  /* 11204a0a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11204a0d push ecx */
  push32((uint32_t)(ECX));
  /* 11204a0e push 0x1122a834 */
  push32((uint32_t)(0x1122a834u));
  /* 11204a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204a1b call 0x11202610 */
  push32(0x11204a20u); f_11202610();
  /* 11204a20 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204a23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204a26 jne 0x11204a29 */
  if (!C.zf) goto L_11204a29;
  /* 11204a28 int3  */
  x86_unimpl("int3 @ 0x11204a28");
L_11204a29:;
  /* 11204a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11204a2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11204a2d jne 0x112049fc */
  if (!C.zf) goto L_112049fc;
  /* 11204a2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11204a36:;
  /* 11204a36 jmp 0x11204843 */
  goto L_11204843;
L_11204a3b:;
  /* 11204a3b push 9 */
  push32((uint32_t)(0x9u));
  /* 11204a3d call 0x11206ff0 */
  push32(0x11204a42u); f_11206ff0();
  /* 11204a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204a45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11204a48:;
  /* 11204a48 pop edi */
  EDI = (pop32());
  /* 11204a49 pop esi */
  ESI = (pop32());
  /* 11204a4a pop ebx */
  EBX = (pop32());
  /* 11204a4b mov esp, ebp */
  ESP = (EBP);
  /* 11204a4d pop ebp */
  EBP = (pop32());
  /* 11204a4e ret  */
  ESPCHK(0x112046f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x11204a60 (34 bytes, 13 insns) */
void f_11204a60(void) {
  FTRACE(0x11204a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11204a61 mov ebp, esp */
  EBP = (ESP);
  /* 11204a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11204a64 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11204a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11204a6c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204a70 je 0x11204a7b */
  if (C.zf) goto L_11204a7b;
  /* 11204a72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204a75 mov dword ptr [0x1122da84], ecx */
  w32((uint32_t)(0x1122da84), (ECX));
L_11204a7b:;
  /* 11204a7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204a7e mov esp, ebp */
  ESP = (EBP);
  /* 11204a80 pop ebp */
  EBP = (pop32());
  /* 11204a81 ret  */
  ESPCHK(0x11204a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x11204a90 (103 bytes, 38 insns) */
void f_11204a90(void) {
  FTRACE(0x11204a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11204a91 mov ebp, esp */
  EBP = (ESP);
  /* 11204a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11204a94 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11204a99 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11204a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204a9e jne 0x11204aa2 */
  if (!C.zf) goto L_11204aa2;
  /* 11204aa0 jmp 0x11204af3 */
  goto L_11204af3;
L_11204aa2:;
  /* 11204aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204aa4 call 0x11206f50 */
  push32(0x11204aa9u); f_11206f50();
  /* 11204aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204aac mov ecx, dword ptr [0x1122f4a4] */
  ECX = (r32((uint32_t)(0x1122f4a4)));
  /* 11204ab2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11204ab5 jmp 0x11204abf */
  goto L_11204abf;
L_11204ab7:;
  /* 11204ab7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204aba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11204abc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11204abf:;
  /* 11204abf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204ac3 je 0x11204ae9 */
  if (C.zf) goto L_11204ae9;
  /* 11204ac5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ac8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11204acb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11204ad1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204ad4 jne 0x11204ae7 */
  if (!C.zf) goto L_11204ae7;
  /* 11204ad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11204ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204add add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 11204ae1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11204ae4u);
  /* 11204ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11204ae7:;
  /* 11204ae7 jmp 0x11204ab7 */
  goto L_11204ab7;
L_11204ae9:;
  /* 11204ae9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204aeb call 0x11206ff0 */
  push32(0x11204af0u); f_11206ff0();
  /* 11204af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11204af3:;
  /* 11204af3 mov esp, ebp */
  ESP = (EBP);
  /* 11204af5 pop ebp */
  EBP = (pop32());
  /* 11204af6 ret  */
  ESPCHK(0x11204a90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11204b00 (75 bytes, 28 insns) */
void f_11204b00(void) {
  FTRACE(0x11204b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11204b01 mov ebp, esp */
  EBP = (ESP);
  /* 11204b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11204b04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204b08 je 0x11204b3d */
  if (C.zf) goto L_11204b3d;
  /* 11204b0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204b0d push eax */
  push32((uint32_t)(EAX));
  /* 11204b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204b11 push ecx */
  push32((uint32_t)(ECX));
  /* 11204b12 call dword ptr [0x11231360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231360))), 0x11204b18u);
  /* 11204b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204b1a jne 0x11204b3d */
  if (!C.zf) goto L_11204b3d;
  /* 11204b1c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204b20 je 0x11204b34 */
  if (C.zf) goto L_11204b34;
  /* 11204b22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204b25 push edx */
  push32((uint32_t)(EDX));
  /* 11204b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204b29 push eax */
  push32((uint32_t)(EAX));
  /* 11204b2a call dword ptr [0x1123135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123135c))), 0x11204b30u);
  /* 11204b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204b32 jne 0x11204b3d */
  if (!C.zf) goto L_11204b3d;
L_11204b34:;
  /* 11204b34 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11204b3b jmp 0x11204b44 */
  goto L_11204b44;
L_11204b3d:;
  /* 11204b3d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11204b44:;
  /* 11204b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204b47 mov esp, ebp */
  ESP = (EBP);
  /* 11204b49 pop ebp */
  EBP = (pop32());
  /* 11204b4a ret  */
  ESPCHK(0x11204b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x11204b50 (134 bytes, 50 insns) */
void f_11204b50(void) {
  FTRACE(0x11204b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11204b51 mov ebp, esp */
  EBP = (ESP);
  /* 11204b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11204b54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204b58 jne 0x11204b5e */
  if (!C.zf) goto L_11204b5e;
  /* 11204b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204b5c jmp 0x11204bd2 */
  goto L_11204bd2;
L_11204b5e:;
  /* 11204b5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11204b60 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11204b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204b65 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204b68 push eax */
  push32((uint32_t)(EAX));
  /* 11204b69 call 0x11204b00 */
  push32(0x11204b6eu); f_11204b00();
  /* 11204b6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204b73 jne 0x11204b79 */
  if (!C.zf) goto L_11204b79;
  /* 11204b75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204b77 jmp 0x11204bd2 */
  goto L_11204bd2;
L_11204b79:;
  /* 11204b79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204b7c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204b7f push ecx */
  push32((uint32_t)(ECX));
  /* 11204b80 call 0x11207850 */
  push32(0x11204b85u); f_11207850();
  /* 11204b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204b88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11204b8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204b8f je 0x11204ba6 */
  if (C.zf) goto L_11204ba6;
  /* 11204b91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204b94 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204b97 push edx */
  push32((uint32_t)(EDX));
  /* 11204b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204b9b push eax */
  push32((uint32_t)(EAX));
  /* 11204b9c call 0x112078b0 */
  push32(0x11204ba1u); f_112078b0();
  /* 11204ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204ba4 jmp 0x11204bd2 */
  goto L_11204bd2;
L_11204ba6:;
  /* 11204ba6 mov ecx, dword ptr [0x1122f458] */
  ECX = (r32((uint32_t)(0x1122f458)));
  /* 11204bac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11204bb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11204bb4 je 0x11204bbd */
  if (C.zf) goto L_11204bbd;
  /* 11204bb6 mov eax, 1 */
  EAX = (0x1u);
  /* 11204bbb jmp 0x11204bd2 */
  goto L_11204bd2;
L_11204bbd:;
  /* 11204bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204bc0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204bc3 push edx */
  push32((uint32_t)(EDX));
  /* 11204bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204bc6 mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 11204bcb push eax */
  push32((uint32_t)(EAX));
  /* 11204bcc call dword ptr [0x11231364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231364))), 0x11204bd2u);
L_11204bd2:;
  /* 11204bd2 mov esp, ebp */
  ESP = (EBP);
  /* 11204bd4 pop ebp */
  EBP = (pop32());
  /* 11204bd5 ret  */
  ESPCHK(0x11204b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004be0 @ 0x11204be0 (227 bytes, 80 insns) */
void f_11204be0(void) {
  FTRACE(0x11204be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11204be1 mov ebp, esp */
  EBP = (ESP);
  /* 11204be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11204be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204be7 push eax */
  push32((uint32_t)(EAX));
  /* 11204be8 call 0x11204b50 */
  push32(0x11204bedu); f_11204b50();
  /* 11204bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204bf2 jne 0x11204bfb */
  if (!C.zf) goto L_11204bfb;
  /* 11204bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204bf6 jmp 0x11204cbf */
  goto L_11204cbf;
L_11204bfb:;
  /* 11204bfb push 9 */
  push32((uint32_t)(0x9u));
  /* 11204bfd call 0x11206f50 */
  push32(0x11204c02u); f_11206f50();
  /* 11204c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204c08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204c0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11204c0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c11 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11204c14 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11204c19 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c1c je 0x11204c40 */
  if (C.zf) goto L_11204c40;
  /* 11204c1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c21 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c25 je 0x11204c40 */
  if (C.zf) goto L_11204c40;
  /* 11204c27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11204c2d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11204c32 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c35 je 0x11204c40 */
  if (C.zf) goto L_11204c40;
  /* 11204c37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c3a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c3e jne 0x11204cb3 */
  if (!C.zf) goto L_11204cb3;
L_11204c40:;
  /* 11204c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11204c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204c45 push edx */
  push32((uint32_t)(EDX));
  /* 11204c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204c49 push eax */
  push32((uint32_t)(EAX));
  /* 11204c4a call 0x11204b00 */
  push32(0x11204c4fu); f_11204b00();
  /* 11204c4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204c54 je 0x11204cb3 */
  if (C.zf) goto L_11204cb3;
  /* 11204c56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c59 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11204c5c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c5f jne 0x11204cb3 */
  if (!C.zf) goto L_11204cb3;
  /* 11204c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11204c67 cmp ecx, dword ptr [0x1122da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c6d jg 0x11204cb3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11204cb3;
  /* 11204c6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c73 je 0x11204c80 */
  if (C.zf) goto L_11204c80;
  /* 11204c75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204c78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c7b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11204c7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11204c80:;
  /* 11204c80 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c84 je 0x11204c91 */
  if (C.zf) goto L_11204c91;
  /* 11204c86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11204c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11204c8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11204c91:;
  /* 11204c91 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204c95 je 0x11204ca2 */
  if (C.zf) goto L_11204ca2;
  /* 11204c97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11204c9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204c9d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11204ca0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11204ca2:;
  /* 11204ca2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204ca4 call 0x11206ff0 */
  push32(0x11204ca9u); f_11206ff0();
  /* 11204ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204cac mov eax, 1 */
  EAX = (0x1u);
  /* 11204cb1 jmp 0x11204cbf */
  goto L_11204cbf;
L_11204cb3:;
  /* 11204cb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204cb5 call 0x11206ff0 */
  push32(0x11204cbau); f_11206ff0();
  /* 11204cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11204cbf:;
  /* 11204cbf mov esp, ebp */
  ESP = (EBP);
  /* 11204cc1 pop ebp */
  EBP = (pop32());
  /* 11204cc2 ret  */
  ESPCHK(0x11204be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd0 @ 0x11204cd0 (28 bytes, 11 insns) */
void f_11204cd0(void) {
  FTRACE(0x11204cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11204cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11204cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11204cd4 mov eax, dword ptr [0x11230e18] */
  EAX = (r32((uint32_t)(0x11230e18)));
  /* 11204cd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11204cdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204cdf mov dword ptr [0x11230e18], ecx */
  w32((uint32_t)(0x11230e18), (ECX));
  /* 11204ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ce8 mov esp, ebp */
  ESP = (EBP);
  /* 11204cea pop ebp */
  EBP = (pop32());
  /* 11204ceb ret  */
  ESPCHK(0x11204cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf0 @ 0x11204cf0 (362 bytes, 116 insns) */
void f_11204cf0(void) {
  FTRACE(0x11204cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11204cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11204cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11204cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11204cf8 push edi */
  push32((uint32_t)(EDI));
  /* 11204cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204cfd jne 0x11204d2a */
  if (!C.zf) goto L_11204d2a;
L_11204cff:;
  /* 11204cff push 0x1122a994 */
  push32((uint32_t)(0x1122a994u));
  /* 11204d04 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11204d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11204d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11204d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11204d11 call 0x11202610 */
  push32(0x11204d16u); f_11202610();
  /* 11204d16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204d19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204d1c jne 0x11204d1f */
  if (!C.zf) goto L_11204d1f;
  /* 11204d1e int3  */
  x86_unimpl("int3 @ 0x11204d1e");
L_11204d1f:;
  /* 11204d1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204d23 jne 0x11204cff */
  if (!C.zf) goto L_11204cff;
  /* 11204d25 jmp 0x11204e53 */
  goto L_11204e53;
L_11204d2a:;
  /* 11204d2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11204d2c call 0x11206f50 */
  push32(0x11204d31u); f_11206f50();
  /* 11204d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204d34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204d37 mov edx, dword ptr [0x1122f4a4] */
  EDX = (r32((uint32_t)(0x1122f4a4)));
  /* 11204d3d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11204d3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11204d46 jmp 0x11204d51 */
  goto L_11204d51;
L_11204d48:;
  /* 11204d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204d4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204d4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11204d51:;
  /* 11204d51 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204d55 jge 0x11204d75 */
  if ((C.sf==C.of)) goto L_11204d75;
  /* 11204d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204d5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204d5d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11204d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204d6b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11204d73 jmp 0x11204d48 */
  goto L_11204d48;
L_11204d75:;
  /* 11204d75 mov edx, dword ptr [0x1122f4a4] */
  EDX = (r32((uint32_t)(0x1122f4a4)));
  /* 11204d7b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11204d7e jmp 0x11204d88 */
  goto L_11204d88;
L_11204d80:;
  /* 11204d80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204d83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11204d85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11204d88:;
  /* 11204d88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204d8c je 0x11204e31 */
  if (C.zf) goto L_11204e31;
  /* 11204d92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204d95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11204d98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11204d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204d9f jl 0x11204e07 */
  if ((C.sf!=C.of)) goto L_11204e07;
  /* 11204da1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204da4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11204da7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11204dad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204db0 jge 0x11204e07 */
  if ((C.sf==C.of)) goto L_11204e07;
  /* 11204db2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204db5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11204db8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11204dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204dc1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11204dc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204dc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204dcb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11204dce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11204dd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204dd7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11204ddb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204dde mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11204de1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11204de6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204de9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11204ded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204df0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204df6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11204df9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11204dfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204e01 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11204e05 jmp 0x11204e2c */
  goto L_11204e2c;
L_11204e07:;
  /* 11204e07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204e0a push edx */
  push32((uint32_t)(EDX));
  /* 11204e0b push 0x1122a970 */
  push32((uint32_t)(0x1122a970u));
  /* 11204e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e18 call 0x11202610 */
  push32(0x11204e1du); f_11202610();
  /* 11204e1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204e20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204e23 jne 0x11204e26 */
  if (!C.zf) goto L_11204e26;
  /* 11204e25 int3  */
  x86_unimpl("int3 @ 0x11204e25");
L_11204e26:;
  /* 11204e26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204e2a jne 0x11204e07 */
  if (!C.zf) goto L_11204e07;
L_11204e2c:;
  /* 11204e2c jmp 0x11204d80 */
  goto L_11204d80;
L_11204e31:;
  /* 11204e31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204e34 mov edx, dword ptr [0x1122f4ac] */
  EDX = (r32((uint32_t)(0x1122f4ac)));
  /* 11204e3a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11204e3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204e40 mov ecx, dword ptr [0x1122f4a0] */
  ECX = (r32((uint32_t)(0x1122f4a0)));
  /* 11204e46 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11204e49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204e4b call 0x11206ff0 */
  push32(0x11204e50u); f_11206ff0();
  /* 11204e50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11204e53:;
  /* 11204e53 pop edi */
  EDI = (pop32());
  /* 11204e54 pop esi */
  ESI = (pop32());
  /* 11204e55 pop ebx */
  EBX = (pop32());
  /* 11204e56 mov esp, ebp */
  ESP = (EBP);
  /* 11204e58 pop ebp */
  EBP = (pop32());
  /* 11204e59 ret  */
  ESPCHK(0x11204cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x11204e60 (291 bytes, 95 insns) */
void f_11204e60(void) {
  FTRACE(0x11204e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11204e61 mov ebp, esp */
  EBP = (ESP);
  /* 11204e63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204e66 push ebx */
  push32((uint32_t)(EBX));
  /* 11204e67 push esi */
  push32((uint32_t)(ESI));
  /* 11204e68 push edi */
  push32((uint32_t)(EDI));
  /* 11204e69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11204e70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204e74 je 0x11204e82 */
  if (C.zf) goto L_11204e82;
  /* 11204e76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204e7a je 0x11204e82 */
  if (C.zf) goto L_11204e82;
  /* 11204e7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204e80 jne 0x11204eb0 */
  if (!C.zf) goto L_11204eb0;
L_11204e82:;
  /* 11204e82 push 0x1122a9bc */
  push32((uint32_t)(0x1122a9bcu));
  /* 11204e87 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11204e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204e94 call 0x11202610 */
  push32(0x11204e99u); f_11202610();
  /* 11204e99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204e9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204e9f jne 0x11204ea2 */
  if (!C.zf) goto L_11204ea2;
  /* 11204ea1 int3  */
  x86_unimpl("int3 @ 0x11204ea1");
L_11204ea2:;
  /* 11204ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204ea6 jne 0x11204e82 */
  if (!C.zf) goto L_11204e82;
  /* 11204ea8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11204eab jmp 0x11204f7c */
  goto L_11204f7c;
L_11204eb0:;
  /* 11204eb0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11204eb7 jmp 0x11204ec2 */
  goto L_11204ec2;
L_11204eb9:;
  /* 11204eb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11204ebf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11204ec2:;
  /* 11204ec2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204ec6 jge 0x11204f4c */
  if ((C.sf==C.of)) goto L_11204f4c;
  /* 11204ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ecf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ed5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11204ed8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11204edc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204ee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204ee6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11204eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204ef0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ef3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11204ef6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11204efa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204f01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204f04 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11204f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204f0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204f0e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204f13 jne 0x11204f22 */
  if (!C.zf) goto L_11204f22;
  /* 11204f15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204f1b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204f20 je 0x11204f47 */
  if (C.zf) goto L_11204f47;
L_11204f22:;
  /* 11204f22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204f26 je 0x11204f47 */
  if (C.zf) goto L_11204f47;
  /* 11204f28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204f2c jne 0x11204f40 */
  if (!C.zf) goto L_11204f40;
  /* 11204f2e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204f32 jne 0x11204f47 */
  if (!C.zf) goto L_11204f47;
  /* 11204f34 mov eax, dword ptr [0x1122da84] */
  EAX = (r32((uint32_t)(0x1122da84)));
  /* 11204f39 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11204f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204f3e je 0x11204f47 */
  if (C.zf) goto L_11204f47;
L_11204f40:;
  /* 11204f40 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11204f47:;
  /* 11204f47 jmp 0x11204eb9 */
  goto L_11204eb9;
L_11204f4c:;
  /* 11204f4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204f4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204f52 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11204f55 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204f58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204f5b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11204f5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11204f61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11204f64 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11204f67 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204f6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204f6d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11204f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204f73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11204f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11204f7c:;
  /* 11204f7c pop edi */
  EDI = (pop32());
  /* 11204f7d pop esi */
  ESI = (pop32());
  /* 11204f7e pop ebx */
  EBX = (pop32());
  /* 11204f7f mov esp, ebp */
  ESP = (EBP);
  /* 11204f81 pop ebp */
  EBP = (pop32());
  /* 11204f82 ret  */
  ESPCHK(0x11204e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x11204f90 (697 bytes, 253 insns) */
void f_11204f90(void) {
  FTRACE(0x11204f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11204f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11204f91 mov ebp, esp */
  EBP = (ESP);
  /* 11204f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11204f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11204f97 push esi */
  push32((uint32_t)(ESI));
  /* 11204f98 push edi */
  push32((uint32_t)(EDI));
  /* 11204f99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11204fa0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11204fa2 call 0x11206f50 */
  push32(0x11204fa7u); f_11206f50();
  /* 11204fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11204faa:;
  /* 11204faa push 0x1122aab4 */
  push32((uint32_t)(0x1122aab4u));
  /* 11204faf push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11204fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11204fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11204fbc call 0x11202610 */
  push32(0x11204fc1u); f_11202610();
  /* 11204fc1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11204fc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204fc7 jne 0x11204fca */
  if (!C.zf) goto L_11204fca;
  /* 11204fc9 int3  */
  x86_unimpl("int3 @ 0x11204fc9");
L_11204fca:;
  /* 11204fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11204fcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11204fce jne 0x11204faa */
  if (!C.zf) goto L_11204faa;
  /* 11204fd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204fd4 je 0x11204fde */
  if (C.zf) goto L_11204fde;
  /* 11204fd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11204fd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11204fdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11204fde:;
  /* 11204fde mov eax, dword ptr [0x1122f4a4] */
  EAX = (r32((uint32_t)(0x1122f4a4)));
  /* 11204fe3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11204fe6 jmp 0x11204ff0 */
  goto L_11204ff0;
L_11204fe8:;
  /* 11204fe8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204feb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11204fed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11204ff0:;
  /* 11204ff0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11204ff4 je 0x11205212 */
  if (C.zf) goto L_11205212;
  /* 11204ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11204ffd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205000 je 0x11205212 */
  if (C.zf) goto L_11205212;
  /* 11205006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205009 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1120500c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11205012 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205015 je 0x11205044 */
  if (C.zf) goto L_11205044;
  /* 11205017 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120501a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1120501d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11205023 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11205025 je 0x11205044 */
  if (C.zf) goto L_11205044;
  /* 11205027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120502a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1120502d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11205032 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205035 jne 0x11205049 */
  if (!C.zf) goto L_11205049;
  /* 11205037 mov ecx, dword ptr [0x1122da84] */
  ECX = (r32((uint32_t)(0x1122da84)));
  /* 1120503d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11205040 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11205042 jne 0x11205049 */
  if (!C.zf) goto L_11205049;
L_11205044:;
  /* 11205044 jmp 0x1120520d */
  goto L_1120520d;
L_11205049:;
  /* 11205049 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120504c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205050 je 0x112050c2 */
  if (C.zf) goto L_112050c2;
  /* 11205052 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205054 push 1 */
  push32((uint32_t)(0x1u));
  /* 11205056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205059 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120505c push ecx */
  push32((uint32_t)(ECX));
  /* 1120505d call 0x11204b00 */
  push32(0x11205062u); f_11204b00();
  /* 11205062 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205067 jne 0x11205093 */
  if (!C.zf) goto L_11205093;
L_11205069:;
  /* 11205069 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120506c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1120506f push eax */
  push32((uint32_t)(EAX));
  /* 11205070 push 0x1122aaa0 */
  push32((uint32_t)(0x1122aaa0u));
  /* 11205075 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120507b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120507d call 0x11202610 */
  push32(0x11205082u); f_11202610();
  /* 11205082 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205085 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205088 jne 0x1120508b */
  if (!C.zf) goto L_1120508b;
  /* 1120508a int3  */
  x86_unimpl("int3 @ 0x1120508a");
L_1120508b:;
  /* 1120508b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120508d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120508f jne 0x11205069 */
  if (!C.zf) goto L_11205069;
  /* 11205091 jmp 0x112050c2 */
  goto L_112050c2;
L_11205093:;
  /* 11205093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205096 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11205099 push eax */
  push32((uint32_t)(EAX));
  /* 1120509a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120509d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112050a0 push edx */
  push32((uint32_t)(EDX));
  /* 112050a1 push 0x1122aa94 */
  push32((uint32_t)(0x1122aa94u));
  /* 112050a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112050a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112050aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112050ac push 0 */
  push32((uint32_t)(0x0u));
  /* 112050ae call 0x11202610 */
  push32(0x112050b3u); f_11202610();
  /* 112050b3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112050b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112050b9 jne 0x112050bc */
  if (!C.zf) goto L_112050bc;
  /* 112050bb int3  */
  x86_unimpl("int3 @ 0x112050bb");
L_112050bc:;
  /* 112050bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112050be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112050c0 jne 0x11205093 */
  if (!C.zf) goto L_11205093;
L_112050c2:;
  /* 112050c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112050c5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112050c8 push edx */
  push32((uint32_t)(EDX));
  /* 112050c9 push 0x1122aa8c */
  push32((uint32_t)(0x1122aa8cu));
  /* 112050ce push 0 */
  push32((uint32_t)(0x0u));
  /* 112050d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112050d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112050d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112050d6 call 0x11202610 */
  push32(0x112050dbu); f_11202610();
  /* 112050db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112050de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112050e1 jne 0x112050e4 */
  if (!C.zf) goto L_112050e4;
  /* 112050e3 int3  */
  x86_unimpl("int3 @ 0x112050e3");
L_112050e4:;
  /* 112050e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112050e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112050e8 jne 0x112050c2 */
  if (!C.zf) goto L_112050c2;
  /* 112050ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112050ed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112050f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112050f6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112050f9 jne 0x1120516c */
  if (!C.zf) goto L_1120516c;
L_112050fb:;
  /* 112050fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112050fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11205101 push ecx */
  push32((uint32_t)(ECX));
  /* 11205102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205105 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11205108 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1120510b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11205110 push eax */
  push32((uint32_t)(EAX));
  /* 11205111 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205114 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205117 push ecx */
  push32((uint32_t)(ECX));
  /* 11205118 push 0x1122aa58 */
  push32((uint32_t)(0x1122aa58u));
  /* 1120511d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120511f push 0 */
  push32((uint32_t)(0x0u));
  /* 11205121 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205123 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205125 call 0x11202610 */
  push32(0x1120512au); f_11202610();
  /* 1120512a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120512d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205130 jne 0x11205133 */
  if (!C.zf) goto L_11205133;
  /* 11205132 int3  */
  x86_unimpl("int3 @ 0x11205132");
L_11205133:;
  /* 11205133 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11205135 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11205137 jne 0x112050fb */
  if (!C.zf) goto L_112050fb;
  /* 11205139 cmp dword ptr [0x11230e18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230e18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205140 je 0x1120515b */
  if (C.zf) goto L_1120515b;
  /* 11205142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205145 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11205148 push ecx */
  push32((uint32_t)(ECX));
  /* 11205149 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120514c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120514f push edx */
  push32((uint32_t)(EDX));
  /* 11205150 call dword ptr [0x11230e18] */
  call_ind((uint32_t)(r32((uint32_t)(0x11230e18))), 0x11205156u);
  /* 11205156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205159 jmp 0x11205167 */
  goto L_11205167;
L_1120515b:;
  /* 1120515b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120515e push eax */
  push32((uint32_t)(EAX));
  /* 1120515f call 0x11205250 */
  push32(0x11205164u); f_11205250();
  /* 11205164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11205167:;
  /* 11205167 jmp 0x1120520d */
  goto L_1120520d;
L_1120516c:;
  /* 1120516c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120516f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205173 jne 0x112051b2 */
  if (!C.zf) goto L_112051b2;
L_11205175:;
  /* 11205175 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205178 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1120517b push eax */
  push32((uint32_t)(EAX));
  /* 1120517c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120517f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205182 push ecx */
  push32((uint32_t)(ECX));
  /* 11205183 push 0x1122aa30 */
  push32((uint32_t)(0x1122aa30u));
  /* 11205188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120518a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120518c push 0 */
  push32((uint32_t)(0x0u));
  /* 1120518e push 0 */
  push32((uint32_t)(0x0u));
  /* 11205190 call 0x11202610 */
  push32(0x11205195u); f_11202610();
  /* 11205195 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205198 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120519b jne 0x1120519e */
  if (!C.zf) goto L_1120519e;
  /* 1120519d int3  */
  x86_unimpl("int3 @ 0x1120519d");
L_1120519e:;
  /* 1120519e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112051a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112051a2 jne 0x11205175 */
  if (!C.zf) goto L_11205175;
  /* 112051a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112051a7 push eax */
  push32((uint32_t)(EAX));
  /* 112051a8 call 0x11205250 */
  push32(0x112051adu); f_11205250();
  /* 112051ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112051b0 jmp 0x1120520d */
  goto L_1120520d;
L_112051b2:;
  /* 112051b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112051b5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112051b8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112051be cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112051c1 jne 0x1120520d */
  if (!C.zf) goto L_1120520d;
L_112051c3:;
  /* 112051c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112051c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112051c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112051ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112051cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112051d0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112051d3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112051d8 push eax */
  push32((uint32_t)(EAX));
  /* 112051d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112051dc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112051df push ecx */
  push32((uint32_t)(ECX));
  /* 112051e0 push 0x1122a9fc */
  push32((uint32_t)(0x1122a9fcu));
  /* 112051e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112051e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112051e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112051eb push 0 */
  push32((uint32_t)(0x0u));
  /* 112051ed call 0x11202610 */
  push32(0x112051f2u); f_11202610();
  /* 112051f2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112051f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112051f8 jne 0x112051fb */
  if (!C.zf) goto L_112051fb;
  /* 112051fa int3  */
  x86_unimpl("int3 @ 0x112051fa");
L_112051fb:;
  /* 112051fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112051fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112051ff jne 0x112051c3 */
  if (!C.zf) goto L_112051c3;
  /* 11205201 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205204 push eax */
  push32((uint32_t)(EAX));
  /* 11205205 call 0x11205250 */
  push32(0x1120520au); f_11205250();
  /* 1120520a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120520d:;
  /* 1120520d jmp 0x11204fe8 */
  goto L_11204fe8;
L_11205212:;
  /* 11205212 push 9 */
  push32((uint32_t)(0x9u));
  /* 11205214 call 0x11206ff0 */
  push32(0x11205219u); f_11206ff0();
  /* 11205219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120521c:;
  /* 1120521c push 0x1122a9e4 */
  push32((uint32_t)(0x1122a9e4u));
  /* 11205221 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 11205226 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120522a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120522c push 0 */
  push32((uint32_t)(0x0u));
  /* 1120522e call 0x11202610 */
  push32(0x11205233u); f_11202610();
  /* 11205233 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205236 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205239 jne 0x1120523c */
  if (!C.zf) goto L_1120523c;
  /* 1120523b int3  */
  x86_unimpl("int3 @ 0x1120523b");
L_1120523c:;
  /* 1120523c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120523e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11205240 jne 0x1120521c */
  if (!C.zf) goto L_1120521c;
  /* 11205242 pop edi */
  EDI = (pop32());
  /* 11205243 pop esi */
  ESI = (pop32());
  /* 11205244 pop ebx */
  EBX = (pop32());
  /* 11205245 mov esp, ebp */
  ESP = (EBP);
  /* 11205247 pop ebp */
  EBP = (pop32());
  /* 11205248 ret  */
  ESPCHK(0x11204f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x11205250 (276 bytes, 89 insns) */
void f_11205250(void) {
  FTRACE(0x11205250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205250 push ebp */
  push32((uint32_t)(EBP));
  /* 11205251 mov ebp, esp */
  EBP = (ESP);
  /* 11205253 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205256 push ebx */
  push32((uint32_t)(EBX));
  /* 11205257 push esi */
  push32((uint32_t)(ESI));
  /* 11205258 push edi */
  push32((uint32_t)(EDI));
  /* 11205259 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11205260 jmp 0x1120526b */
  goto L_1120526b;
L_11205262:;
  /* 11205262 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11205265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205268 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1120526b:;
  /* 1120526b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120526e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205272 jge 0x1120527f */
  if ((C.sf==C.of)) goto L_1120527f;
  /* 11205274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205277 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1120527a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1120527d jmp 0x11205286 */
  goto L_11205286;
L_1120527f:;
  /* 1120527f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11205286:;
  /* 11205286 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11205289 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120528c jge 0x1120532c */
  if ((C.sf==C.of)) goto L_1120532c;
  /* 11205292 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205295 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205298 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1120529b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1120529e cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112052a5 jle 0x112052c3 */
  if ((C.zf||C.sf!=C.of)) goto L_112052c3;
  /* 112052a7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 112052ac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112052af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112052b5 push ecx */
  push32((uint32_t)(ECX));
  /* 112052b6 call 0x11209560 */
  push32(0x112052bbu); f_11209560();
  /* 112052bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112052be mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 112052c1 jmp 0x112052e0 */
  goto L_112052e0;
L_112052c3:;
  /* 112052c3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112052c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112052cc mov eax, dword ptr [0x1122dc98] */
  EAX = (r32((uint32_t)(0x1122dc98)));
  /* 112052d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112052d3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 112052d7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 112052dd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_112052e0:;
  /* 112052e0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112052e4 je 0x112052f4 */
  if (C.zf) goto L_112052f4;
  /* 112052e6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112052e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112052ef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 112052f2 jmp 0x112052fb */
  goto L_112052fb;
L_112052f4:;
  /* 112052f4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_112052fb:;
  /* 112052fb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112052fe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11205301 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11205305 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11205308 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1120530e push edx */
  push32((uint32_t)(EDX));
  /* 1120530f push 0x1122aad8 */
  push32((uint32_t)(0x1122aad8u));
  /* 11205314 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11205317 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120531a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1120531e push ecx */
  push32((uint32_t)(ECX));
  /* 1120531f call 0x11209460 */
  push32(0x11205324u); f_11209460();
  /* 11205324 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205327 jmp 0x11205262 */
  goto L_11205262;
L_1120532c:;
  /* 1120532c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1120532f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11205334:;
  /* 11205334 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11205337 push eax */
  push32((uint32_t)(EAX));
  /* 11205338 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1120533b push ecx */
  push32((uint32_t)(ECX));
  /* 1120533c push 0x1122aac8 */
  push32((uint32_t)(0x1122aac8u));
  /* 11205341 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205345 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205347 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205349 call 0x11202610 */
  push32(0x1120534eu); f_11202610();
  /* 1120534e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205351 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205354 jne 0x11205357 */
  if (!C.zf) goto L_11205357;
  /* 11205356 int3  */
  x86_unimpl("int3 @ 0x11205356");
L_11205357:;
  /* 11205357 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11205359 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120535b jne 0x11205334 */
  if (!C.zf) goto L_11205334;
  /* 1120535d pop edi */
  EDI = (pop32());
  /* 1120535e pop esi */
  ESI = (pop32());
  /* 1120535f pop ebx */
  EBX = (pop32());
  /* 11205360 mov esp, ebp */
  ESP = (EBP);
  /* 11205362 pop ebp */
  EBP = (pop32());
  /* 11205363 ret  */
  ESPCHK(0x11205250u, _esp0);
  ESP += 4; return;
}

/* FUN_10005370 @ 0x11205370 (116 bytes, 46 insns) */
void f_11205370(void) {
  FTRACE(0x11205370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205370 push ebp */
  push32((uint32_t)(EBP));
  /* 11205371 mov ebp, esp */
  EBP = (ESP);
  /* 11205373 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205376 push ebx */
  push32((uint32_t)(EBX));
  /* 11205377 push esi */
  push32((uint32_t)(ESI));
  /* 11205378 push edi */
  push32((uint32_t)(EDI));
  /* 11205379 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1120537c push eax */
  push32((uint32_t)(EAX));
  /* 1120537d call 0x11204cf0 */
  push32(0x11205382u); f_11204cf0();
  /* 11205382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205385 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205389 jne 0x112053a4 */
  if (!C.zf) goto L_112053a4;
  /* 1120538b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120538f jne 0x112053a4 */
  if (!C.zf) goto L_112053a4;
  /* 11205391 mov ecx, dword ptr [0x1122da84] */
  ECX = (r32((uint32_t)(0x1122da84)));
  /* 11205397 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1120539a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120539c je 0x112053db */
  if (C.zf) goto L_112053db;
  /* 1120539e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112053a2 je 0x112053db */
  if (C.zf) goto L_112053db;
L_112053a4:;
  /* 112053a4 push 0x1122aae0 */
  push32((uint32_t)(0x1122aae0u));
  /* 112053a9 push 0x1122a4ac */
  push32((uint32_t)(0x1122a4acu));
  /* 112053ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112053b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112053b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112053b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112053b6 call 0x11202610 */
  push32(0x112053bbu); f_11202610();
  /* 112053bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112053be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112053c1 jne 0x112053c4 */
  if (!C.zf) goto L_112053c4;
  /* 112053c3 int3  */
  x86_unimpl("int3 @ 0x112053c3");
L_112053c4:;
  /* 112053c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112053c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112053c8 jne 0x112053a4 */
  if (!C.zf) goto L_112053a4;
  /* 112053ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112053cc call 0x11204f90 */
  push32(0x112053d1u); f_11204f90();
  /* 112053d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112053d4 mov eax, 1 */
  EAX = (0x1u);
  /* 112053d9 jmp 0x112053dd */
  goto L_112053dd;
L_112053db:;
  /* 112053db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112053dd:;
  /* 112053dd pop edi */
  EDI = (pop32());
  /* 112053de pop esi */
  ESI = (pop32());
  /* 112053df pop ebx */
  EBX = (pop32());
  /* 112053e0 mov esp, ebp */
  ESP = (EBP);
  /* 112053e2 pop ebp */
  EBP = (pop32());
  /* 112053e3 ret  */
  ESPCHK(0x11205370u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x112053f0 (197 bytes, 79 insns) */
void f_112053f0(void) {
  FTRACE(0x112053f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112053f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112053f1 mov ebp, esp */
  EBP = (ESP);
  /* 112053f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112053f4 push ebx */
  push32((uint32_t)(EBX));
  /* 112053f5 push esi */
  push32((uint32_t)(ESI));
  /* 112053f6 push edi */
  push32((uint32_t)(EDI));
  /* 112053f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112053fb jne 0x11205402 */
  if (!C.zf) goto L_11205402;
  /* 112053fd jmp 0x112054ae */
  goto L_112054ae;
L_11205402:;
  /* 11205402 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11205409 jmp 0x11205414 */
  goto L_11205414;
L_1120540b:;
  /* 1120540b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120540e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205411 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11205414:;
  /* 11205414 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205418 jge 0x1120545e */
  if ((C.sf==C.of)) goto L_1120545e;
L_1120541a:;
  /* 1120541a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120541d mov edx, dword ptr [ecx*4 + 0x1122da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122da94)));
  /* 11205424 push edx */
  push32((uint32_t)(EDX));
  /* 11205425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205428 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120542b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1120542f push edx */
  push32((uint32_t)(EDX));
  /* 11205430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205436 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1120543a push edx */
  push32((uint32_t)(EDX));
  /* 1120543b push 0x1122ab3c */
  push32((uint32_t)(0x1122ab3cu));
  /* 11205440 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205446 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205448 call 0x11202610 */
  push32(0x1120544du); f_11202610();
  /* 1120544d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205450 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205453 jne 0x11205456 */
  if (!C.zf) goto L_11205456;
  /* 11205455 int3  */
  x86_unimpl("int3 @ 0x11205455");
L_11205456:;
  /* 11205456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120545a jne 0x1120541a */
  if (!C.zf) goto L_1120541a;
  /* 1120545c jmp 0x1120540b */
  goto L_1120540b;
L_1120545e:;
  /* 1120545e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205461 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11205464 push edx */
  push32((uint32_t)(EDX));
  /* 11205465 push 0x1122ab18 */
  push32((uint32_t)(0x1122ab18u));
  /* 1120546a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120546c push 0 */
  push32((uint32_t)(0x0u));
  /* 1120546e push 0 */
  push32((uint32_t)(0x0u));
  /* 11205470 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205472 call 0x11202610 */
  push32(0x11205477u); f_11202610();
  /* 11205477 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120547a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120547d jne 0x11205480 */
  if (!C.zf) goto L_11205480;
  /* 1120547f int3  */
  x86_unimpl("int3 @ 0x1120547f");
L_11205480:;
  /* 11205480 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205484 jne 0x1120545e */
  if (!C.zf) goto L_1120545e;
L_11205486:;
  /* 11205486 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205489 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1120548c push edx */
  push32((uint32_t)(EDX));
  /* 1120548d push 0x1122aaf8 */
  push32((uint32_t)(0x1122aaf8u));
  /* 11205492 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120549a call 0x11202610 */
  push32(0x1120549fu); f_11202610();
  /* 1120549f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112054a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112054a5 jne 0x112054a8 */
  if (!C.zf) goto L_112054a8;
  /* 112054a7 int3  */
  x86_unimpl("int3 @ 0x112054a7");
L_112054a8:;
  /* 112054a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112054aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112054ac jne 0x11205486 */
  if (!C.zf) goto L_11205486;
L_112054ae:;
  /* 112054ae pop edi */
  EDI = (pop32());
  /* 112054af pop esi */
  ESI = (pop32());
  /* 112054b0 pop ebx */
  EBX = (pop32());
  /* 112054b1 mov esp, ebp */
  ESP = (EBP);
  /* 112054b3 pop ebp */
  EBP = (pop32());
  /* 112054b4 ret  */
  ESPCHK(0x112053f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c0 @ 0x112054c0 (329 bytes, 102 insns) */
void f_112054c0(void) {
  FTRACE(0x112054c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112054c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112054c1 mov ebp, esp */
  EBP = (ESP);
  /* 112054c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112054c6 cmp dword ptr [0x11230f90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230f90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112054cd jne 0x112054d4 */
  if (!C.zf) goto L_112054d4;
  /* 112054cf call 0x11209e00 */
  push32(0x112054d4u); f_11209e00();
L_112054d4:;
  /* 112054d4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112054db mov eax, dword ptr [0x1122f440] */
  EAX = (r32((uint32_t)(0x1122f440)));
  /* 112054e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112054e3:;
  /* 112054e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112054e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112054e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112054eb je 0x11205519 */
  if (C.zf) goto L_11205519;
  /* 112054ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112054f0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112054f3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112054f6 je 0x11205501 */
  if (C.zf) goto L_11205501;
  /* 112054f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112054fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112054fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11205501:;
  /* 11205501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205504 push eax */
  push32((uint32_t)(EAX));
  /* 11205505 call 0x11206380 */
  push32(0x1120550au); f_11206380();
  /* 1120550a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120550d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205510 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11205514 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11205517 jmp 0x112054e3 */
  goto L_112054e3;
L_11205519:;
  /* 11205519 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1120551b push 0x1122ab5c */
  push32((uint32_t)(0x1122ab5cu));
  /* 11205520 push 2 */
  push32((uint32_t)(0x2u));
  /* 11205522 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205525 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1120552c push ecx */
  push32((uint32_t)(ECX));
  /* 1120552d call 0x11203550 */
  push32(0x11205532u); f_11203550();
  /* 11205532 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205535 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11205538 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120553b mov dword ptr [0x1122f474], edx */
  w32((uint32_t)(0x1122f474), (EDX));
  /* 11205541 cmp dword ptr [0x1122f474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205548 jne 0x11205554 */
  if (!C.zf) goto L_11205554;
  /* 1120554a push 9 */
  push32((uint32_t)(0x9u));
  /* 1120554c call 0x112024c0 */
  push32(0x11205551u); f_112024c0();
  /* 11205551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11205554:;
  /* 11205554 mov eax, dword ptr [0x1122f440] */
  EAX = (r32((uint32_t)(0x1122f440)));
  /* 11205559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120555c jmp 0x11205567 */
  goto L_11205567;
L_1120555e:;
  /* 1120555e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205561 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205564 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11205567:;
  /* 11205567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120556a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120556d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120556f je 0x112055d7 */
  if (C.zf) goto L_112055d7;
  /* 11205571 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205574 push ecx */
  push32((uint32_t)(ECX));
  /* 11205575 call 0x11206380 */
  push32(0x1120557au); f_11206380();
  /* 1120557a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120557d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205580 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11205583 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205586 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11205589 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120558c je 0x112055d5 */
  if (C.zf) goto L_112055d5;
  /* 1120558e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11205590 push 0x1122ab5c */
  push32((uint32_t)(0x1122ab5cu));
  /* 11205595 push 2 */
  push32((uint32_t)(0x2u));
  /* 11205597 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120559a push ecx */
  push32((uint32_t)(ECX));
  /* 1120559b call 0x11203550 */
  push32(0x112055a0u); f_11203550();
  /* 112055a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112055a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112055a6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112055a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112055ab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112055ae jne 0x112055ba */
  if (!C.zf) goto L_112055ba;
  /* 112055b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 112055b2 call 0x112024c0 */
  push32(0x112055b7u); f_112024c0();
  /* 112055b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112055ba:;
  /* 112055ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112055bd push ecx */
  push32((uint32_t)(ECX));
  /* 112055be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112055c1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112055c3 push eax */
  push32((uint32_t)(EAX));
  /* 112055c4 call 0x11206500 */
  push32(0x112055c9u); f_11206500();
  /* 112055c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112055cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112055cf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112055d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112055d5:;
  /* 112055d5 jmp 0x1120555e */
  goto L_1120555e;
L_112055d7:;
  /* 112055d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112055d9 mov edx, dword ptr [0x1122f440] */
  EDX = (r32((uint32_t)(0x1122f440)));
  /* 112055df push edx */
  push32((uint32_t)(EDX));
  /* 112055e0 call 0x11203fe0 */
  push32(0x112055e5u); f_11203fe0();
  /* 112055e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112055e8 mov dword ptr [0x1122f440], 0 */
  w32((uint32_t)(0x1122f440), (0x0u));
  /* 112055f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112055f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112055fb mov dword ptr [0x11230f80], 1 */
  w32((uint32_t)(0x11230f80), (0x1u));
  /* 11205605 mov esp, ebp */
  ESP = (EBP);
  /* 11205607 pop ebp */
  EBP = (pop32());
  /* 11205608 ret  */
  ESPCHK(0x112054c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x11205610 (216 bytes, 69 insns) */
void f_11205610(void) {
  FTRACE(0x11205610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205610 push ebp */
  push32((uint32_t)(EBP));
  /* 11205611 mov ebp, esp */
  EBP = (ESP);
  /* 11205613 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205616 cmp dword ptr [0x11230f90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230f90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120561d jne 0x11205624 */
  if (!C.zf) goto L_11205624;
  /* 1120561f call 0x11209e00 */
  push32(0x11205624u); f_11209e00();
L_11205624:;
  /* 11205624 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11205629 push 0x1122f4b0 */
  push32((uint32_t)(0x1122f4b0u));
  /* 1120562e push 0 */
  push32((uint32_t)(0x0u));
  /* 11205630 call dword ptr [0x1123131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123131c))), 0x11205636u);
  /* 11205636 mov dword ptr [0x1122f484], 0x1122f4b0 */
  w32((uint32_t)(0x1122f484), (0x1122f4b0u));
  /* 11205640 mov eax, dword ptr [0x11230fac] */
  EAX = (r32((uint32_t)(0x11230fac)));
  /* 11205645 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11205648 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120564a jne 0x11205657 */
  if (!C.zf) goto L_11205657;
  /* 1120564c mov edx, dword ptr [0x1122f484] */
  EDX = (r32((uint32_t)(0x1122f484)));
  /* 11205652 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11205655 jmp 0x1120565f */
  goto L_1120565f;
L_11205657:;
  /* 11205657 mov eax, dword ptr [0x11230fac] */
  EAX = (r32((uint32_t)(0x11230fac)));
  /* 1120565c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1120565f:;
  /* 1120565f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11205662 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11205665 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11205668 push edx */
  push32((uint32_t)(EDX));
  /* 11205669 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1120566c push eax */
  push32((uint32_t)(EAX));
  /* 1120566d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120566f push 0 */
  push32((uint32_t)(0x0u));
  /* 11205671 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11205674 push ecx */
  push32((uint32_t)(ECX));
  /* 11205675 call 0x112056f0 */
  push32(0x1120567au); f_112056f0();
  /* 1120567a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120567d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11205682 push 0x1122ab68 */
  push32((uint32_t)(0x1122ab68u));
  /* 11205687 push 2 */
  push32((uint32_t)(0x2u));
  /* 11205689 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120568c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120568f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11205692 push ecx */
  push32((uint32_t)(ECX));
  /* 11205693 call 0x11203550 */
  push32(0x11205698u); f_11203550();
  /* 11205698 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120569b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120569e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112056a2 jne 0x112056ae */
  if (!C.zf) goto L_112056ae;
  /* 112056a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 112056a6 call 0x112024c0 */
  push32(0x112056abu); f_112024c0();
  /* 112056ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112056ae:;
  /* 112056ae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 112056b1 push edx */
  push32((uint32_t)(EDX));
  /* 112056b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112056b5 push eax */
  push32((uint32_t)(EAX));
  /* 112056b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112056b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112056bc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 112056bf push eax */
  push32((uint32_t)(EAX));
  /* 112056c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112056c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112056c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112056c7 push edx */
  push32((uint32_t)(EDX));
  /* 112056c8 call 0x112056f0 */
  push32(0x112056cdu); f_112056f0();
  /* 112056cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112056d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112056d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112056d6 mov dword ptr [0x1122f468], eax */
  w32((uint32_t)(0x1122f468), (EAX));
  /* 112056db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112056de mov dword ptr [0x1122f46c], ecx */
  w32((uint32_t)(0x1122f46c), (ECX));
  /* 112056e4 mov esp, ebp */
  ESP = (EBP);
  /* 112056e6 pop ebp */
  EBP = (pop32());
  /* 112056e7 ret  */
  ESPCHK(0x11205610u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f0 @ 0x112056f0 (1060 bytes, 360 insns) */
void f_112056f0(void) {
  FTRACE(0x112056f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112056f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112056f1 mov ebp, esp */
  EBP = (ESP);
  /* 112056f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112056f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112056f9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112056ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11205702 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11205708 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120570b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120570e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205712 je 0x11205725 */
  if (C.zf) goto L_11205725;
  /* 11205714 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11205717 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120571a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1120571c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120571f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205722 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11205725:;
  /* 11205725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205728 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120572b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120572e jne 0x112057fd */
  if (!C.zf) goto L_112057fd;
L_11205734:;
  /* 11205734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205737 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120573a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120573d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205740 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11205743 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205746 je 0x112057c2 */
  if (C.zf) goto L_112057c2;
  /* 11205748 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120574b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120574e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205750 je 0x112057c2 */
  if (C.zf) goto L_112057c2;
  /* 11205752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205755 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11205757 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11205759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120575b mov al, byte ptr [edx + 0x11230ce1] */
  AL = (r8((uint32_t)(EDX + 0x11230ce1)));
  /* 11205761 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11205764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205766 je 0x11205797 */
  if (C.zf) goto L_11205797;
  /* 11205768 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120576b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120576d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205770 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205773 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11205775 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205779 je 0x11205797 */
  if (C.zf) goto L_11205797;
  /* 1120577b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120577e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205781 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11205783 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11205785 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205788 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120578b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1120578e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205791 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205794 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11205797:;
  /* 11205797 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120579a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120579c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120579f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112057a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112057a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112057a8 je 0x112057bd */
  if (C.zf) goto L_112057bd;
  /* 112057aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112057ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112057b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112057b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112057b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112057b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112057ba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112057bd:;
  /* 112057bd jmp 0x11205734 */
  goto L_11205734;
L_112057c2:;
  /* 112057c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112057c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112057c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112057ca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112057cd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112057cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112057d3 je 0x112057e4 */
  if (C.zf) goto L_112057e4;
  /* 112057d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112057d8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 112057db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112057de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112057e1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_112057e4:;
  /* 112057e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112057e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112057ea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112057ed jne 0x112057f8 */
  if (!C.zf) goto L_112057f8;
  /* 112057ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112057f2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112057f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112057f8:;
  /* 112057f8 jmp 0x112058cc */
  goto L_112058cc;
L_112057fd:;
  /* 112057fd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205800 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11205802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205805 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205808 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1120580a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120580e je 0x11205823 */
  if (C.zf) goto L_11205823;
  /* 11205810 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11205818 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1120581a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120581d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205820 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11205823:;
  /* 11205823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205826 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11205828 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1120582b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120582e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205831 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11205834 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205837 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120583d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120583f mov dl, byte ptr [ecx + 0x11230ce1] */
  DL = (r8((uint32_t)(ECX + 0x11230ce1)));
  /* 11205845 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11205848 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120584a je 0x1120587b */
  if (C.zf) goto L_1120587b;
  /* 1120584c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120584f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11205851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205854 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205857 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11205859 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120585d je 0x11205872 */
  if (C.zf) goto L_11205872;
  /* 1120585f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205865 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11205867 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11205869 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120586c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120586f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11205872:;
  /* 11205872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205878 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120587b:;
  /* 1120587b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120587e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11205884 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205887 je 0x112058a7 */
  if (C.zf) goto L_112058a7;
  /* 11205889 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120588c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11205891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205893 je 0x112058a7 */
  if (C.zf) goto L_112058a7;
  /* 11205895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205898 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120589e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112058a1 jne 0x112057fd */
  if (!C.zf) goto L_112057fd;
L_112058a7:;
  /* 112058a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112058aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112058b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112058b2 jne 0x112058bf */
  if (!C.zf) goto L_112058bf;
  /* 112058b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112058b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112058ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112058bd jmp 0x112058cc */
  goto L_112058cc;
L_112058bf:;
  /* 112058bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112058c3 je 0x112058cc */
  if (C.zf) goto L_112058cc;
  /* 112058c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112058c8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_112058cc:;
  /* 112058cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_112058d3:;
  /* 112058d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112058d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112058d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112058db je 0x112058fe */
  if (C.zf) goto L_112058fe;
L_112058dd:;
  /* 112058dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112058e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112058e3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112058e6 je 0x112058f3 */
  if (C.zf) goto L_112058f3;
  /* 112058e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112058eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112058ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112058f1 jne 0x112058fe */
  if (!C.zf) goto L_112058fe;
L_112058f3:;
  /* 112058f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112058f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112058f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112058fc jmp 0x112058dd */
  goto L_112058dd;
L_112058fe:;
  /* 112058fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205901 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11205904 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11205906 jne 0x1120590d */
  if (!C.zf) goto L_1120590d;
  /* 11205908 jmp 0x11205aeb */
  goto L_11205aeb;
L_1120590d:;
  /* 1120590d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205911 je 0x11205924 */
  if (C.zf) goto L_11205924;
  /* 11205913 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11205916 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1120591b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120591e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205921 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11205924:;
  /* 11205924 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11205927 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11205929 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120592c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120592f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11205931:;
  /* 11205931 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11205938 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1120593f:;
  /* 1120593f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205942 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11205945 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205948 jne 0x1120595e */
  if (!C.zf) goto L_1120595e;
  /* 1120594a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120594d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205950 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11205953 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11205956 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205959 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1120595c jmp 0x1120593f */
  goto L_1120593f;
L_1120595e:;
  /* 1120595e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205961 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11205964 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205967 jne 0x112059ba */
  if (!C.zf) goto L_112059ba;
  /* 11205969 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120596c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120596e mov ecx, 2 */
  ECX = (0x2u);
  /* 11205973 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11205975 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11205977 jne 0x112059b2 */
  if (!C.zf) goto L_112059b2;
  /* 11205979 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120597d je 0x1120599f */
  if (C.zf) goto L_1120599f;
  /* 1120597f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205982 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11205986 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205989 jne 0x11205996 */
  if (!C.zf) goto L_11205996;
  /* 1120598b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120598e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11205994 jmp 0x1120599d */
  goto L_1120599d;
L_11205996:;
  /* 11205996 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1120599d:;
  /* 1120599d jmp 0x112059a6 */
  goto L_112059a6;
L_1120599f:;
  /* 1120599f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112059a6:;
  /* 112059a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112059a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112059ac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 112059af mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112059b2:;
  /* 112059b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112059b5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112059b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112059ba:;
  /* 112059ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112059bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112059c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112059c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112059c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112059c8 je 0x112059ee */
  if (C.zf) goto L_112059ee;
  /* 112059ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112059ce je 0x112059df */
  if (C.zf) goto L_112059df;
  /* 112059d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112059d3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 112059d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112059d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112059dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_112059df:;
  /* 112059df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112059e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112059e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112059e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112059ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112059ec jmp 0x112059ba */
  goto L_112059ba;
L_112059ee:;
  /* 112059ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112059f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112059f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112059f6 je 0x11205a14 */
  if (C.zf) goto L_11205a14;
  /* 112059f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112059fc jne 0x11205a19 */
  if (!C.zf) goto L_11205a19;
  /* 112059fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a01 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11205a04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205a07 je 0x11205a14 */
  if (C.zf) goto L_11205a14;
  /* 11205a09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11205a0f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205a12 jne 0x11205a19 */
  if (!C.zf) goto L_11205a19;
L_11205a14:;
  /* 11205a14 jmp 0x11205ac4 */
  goto L_11205ac4;
L_11205a19:;
  /* 11205a19 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205a1d je 0x11205ab6 */
  if (C.zf) goto L_11205ab6;
  /* 11205a23 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205a27 je 0x11205a7d */
  if (C.zf) goto L_11205a7d;
  /* 11205a29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205a2e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11205a30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11205a32 mov cl, byte ptr [eax + 0x11230ce1] */
  CL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 11205a38 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11205a3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11205a3d je 0x11205a68 */
  if (C.zf) goto L_11205a68;
  /* 11205a3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a45 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11205a47 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11205a49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205a4c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205a4f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11205a52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205a58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11205a5b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205a5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11205a60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205a63 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205a66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11205a68:;
  /* 11205a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205a6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11205a70 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11205a72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205a78 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11205a7b jmp 0x11205aa9 */
  goto L_11205aa9;
L_11205a7d:;
  /* 11205a7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205a82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11205a84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11205a86 mov cl, byte ptr [eax + 0x11230ce1] */
  CL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 11205a8c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11205a8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11205a91 je 0x11205aa9 */
  if (C.zf) goto L_11205aa9;
  /* 11205a93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205a96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205a99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11205a9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205a9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11205aa1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205aa4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205aa7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11205aa9:;
  /* 11205aa9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205aac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11205aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205ab1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205ab4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11205ab6:;
  /* 11205ab6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205abc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11205abf jmp 0x11205931 */
  goto L_11205931;
L_11205ac4:;
  /* 11205ac4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205ac8 je 0x11205ad9 */
  if (C.zf) goto L_11205ad9;
  /* 11205aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205acd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11205ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11205ad3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205ad6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11205ad9:;
  /* 11205ad9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205adc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11205ade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205ae1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11205ae4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11205ae6 jmp 0x112058d3 */
  goto L_112058d3;
L_11205aeb:;
  /* 11205aeb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205aef je 0x11205b03 */
  if (C.zf) goto L_11205b03;
  /* 11205af1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11205af4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11205afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11205afd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205b00 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11205b03:;
  /* 11205b03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11205b06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11205b08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205b0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11205b0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11205b10 mov esp, ebp */
  ESP = (EBP);
  /* 11205b12 pop ebp */
  EBP = (pop32());
  /* 11205b13 ret  */
  ESPCHK(0x112056f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x11205b20 (537 bytes, 173 insns) */
void f_11205b20(void) {
  FTRACE(0x11205b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11205b21 mov ebp, esp */
  EBP = (ESP);
  /* 11205b23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205b26 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11205b2d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11205b34 cmp dword ptr [0x1122f5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205b3b jne 0x11205b7a */
  if (!C.zf) goto L_11205b7a;
  /* 11205b3d call dword ptr [0x11231378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231378))), 0x11205b43u);
  /* 11205b43 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11205b46 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205b4a je 0x11205b58 */
  if (C.zf) goto L_11205b58;
  /* 11205b4c mov dword ptr [0x1122f5b4], 1 */
  w32((uint32_t)(0x1122f5b4), (0x1u));
  /* 11205b56 jmp 0x11205b7a */
  goto L_11205b7a;
L_11205b58:;
  /* 11205b58 call dword ptr [0x11231348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231348))), 0x11205b5eu);
  /* 11205b5e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11205b61 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205b65 je 0x11205b73 */
  if (C.zf) goto L_11205b73;
  /* 11205b67 mov dword ptr [0x1122f5b4], 2 */
  w32((uint32_t)(0x1122f5b4), (0x2u));
  /* 11205b71 jmp 0x11205b7a */
  goto L_11205b7a;
L_11205b73:;
  /* 11205b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205b75 jmp 0x11205d35 */
  goto L_11205d35;
L_11205b7a:;
  /* 11205b7a cmp dword ptr [0x1122f5b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205b81 jne 0x11205c7e */
  if (!C.zf) goto L_11205c7e;
  /* 11205b87 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205b8b jne 0x11205ba3 */
  if (!C.zf) goto L_11205ba3;
  /* 11205b8d call dword ptr [0x11231378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231378))), 0x11205b93u);
  /* 11205b93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11205b96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205b9a jne 0x11205ba3 */
  if (!C.zf) goto L_11205ba3;
  /* 11205b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205b9e jmp 0x11205d35 */
  goto L_11205d35;
L_11205ba3:;
  /* 11205ba3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11205ba6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11205ba9:;
  /* 11205ba9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205bac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11205bae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11205bb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11205bb3 je 0x11205bd5 */
  if (C.zf) goto L_11205bd5;
  /* 11205bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205bb8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205bbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11205bbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205bc1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11205bc3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11205bc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11205bc8 jne 0x11205bd3 */
  if (!C.zf) goto L_11205bd3;
  /* 11205bca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205bcd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205bd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11205bd3:;
  /* 11205bd3 jmp 0x11205ba9 */
  goto L_11205ba9;
L_11205bd5:;
  /* 11205bd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205bd8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205bdb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11205bdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205be0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11205be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205beb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205bee push edx */
  push32((uint32_t)(EDX));
  /* 11205bef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11205bf2 push eax */
  push32((uint32_t)(EAX));
  /* 11205bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205bf7 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11205bfdu);
  /* 11205bfd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11205c00 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205c04 je 0x11205c24 */
  if (C.zf) goto L_11205c24;
  /* 11205c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11205c08 push 0x1122ab74 */
  push32((uint32_t)(0x1122ab74u));
  /* 11205c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11205c0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11205c12 push ecx */
  push32((uint32_t)(ECX));
  /* 11205c13 call 0x11203550 */
  push32(0x11205c18u); f_11203550();
  /* 11205c18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205c1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11205c1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205c22 jne 0x11205c35 */
  if (!C.zf) goto L_11205c35;
L_11205c24:;
  /* 11205c24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11205c27 push edx */
  push32((uint32_t)(EDX));
  /* 11205c28 call dword ptr [0x1123136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123136c))), 0x11205c2eu);
  /* 11205c2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205c30 jmp 0x11205d35 */
  goto L_11205d35;
L_11205c35:;
  /* 11205c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205c39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11205c3c push eax */
  push32((uint32_t)(EAX));
  /* 11205c3d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205c40 push ecx */
  push32((uint32_t)(ECX));
  /* 11205c41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205c44 push edx */
  push32((uint32_t)(EDX));
  /* 11205c45 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11205c48 push eax */
  push32((uint32_t)(EAX));
  /* 11205c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11205c4d call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11205c53u);
  /* 11205c53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205c55 jne 0x11205c6c */
  if (!C.zf) goto L_11205c6c;
  /* 11205c57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11205c59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205c5c push ecx */
  push32((uint32_t)(ECX));
  /* 11205c5d call 0x11203fe0 */
  push32(0x11205c62u); f_11203fe0();
  /* 11205c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205c65 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11205c6c:;
  /* 11205c6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11205c6f push edx */
  push32((uint32_t)(EDX));
  /* 11205c70 call dword ptr [0x1123136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123136c))), 0x11205c76u);
  /* 11205c76 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205c79 jmp 0x11205d35 */
  goto L_11205d35;
L_11205c7e:;
  /* 11205c7e cmp dword ptr [0x1122f5b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205c85 jne 0x11205d33 */
  if (!C.zf) goto L_11205d33;
  /* 11205c8b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205c8f jne 0x11205ca7 */
  if (!C.zf) goto L_11205ca7;
  /* 11205c91 call dword ptr [0x11231348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231348))), 0x11205c97u);
  /* 11205c97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11205c9a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205c9e jne 0x11205ca7 */
  if (!C.zf) goto L_11205ca7;
  /* 11205ca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205ca2 jmp 0x11205d35 */
  goto L_11205d35;
L_11205ca7:;
  /* 11205ca7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205caa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11205cad:;
  /* 11205cad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205cb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11205cb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11205cb5 je 0x11205cd5 */
  if (C.zf) goto L_11205cd5;
  /* 11205cb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205cba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205cbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11205cc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205cc3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11205cc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11205cc8 jne 0x11205cd3 */
  if (!C.zf) goto L_11205cd3;
  /* 11205cca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205ccd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205cd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11205cd3:;
  /* 11205cd3 jmp 0x11205cad */
  goto L_11205cad;
L_11205cd5:;
  /* 11205cd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205cd8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205cdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205cde mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11205ce1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11205ce6 push 0x1122ab74 */
  push32((uint32_t)(0x1122ab74u));
  /* 11205ceb push 2 */
  push32((uint32_t)(0x2u));
  /* 11205ced mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11205cf0 push edx */
  push32((uint32_t)(EDX));
  /* 11205cf1 call 0x11203550 */
  push32(0x11205cf6u); f_11203550();
  /* 11205cf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205cf9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11205cfc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205d00 jne 0x11205d10 */
  if (!C.zf) goto L_11205d10;
  /* 11205d02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205d05 push eax */
  push32((uint32_t)(EAX));
  /* 11205d06 call dword ptr [0x11231368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231368))), 0x11205d0cu);
  /* 11205d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205d0e jmp 0x11205d35 */
  goto L_11205d35;
L_11205d10:;
  /* 11205d10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11205d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11205d14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205d17 push edx */
  push32((uint32_t)(EDX));
  /* 11205d18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205d1b push eax */
  push32((uint32_t)(EAX));
  /* 11205d1c call 0x11209e30 */
  push32(0x11205d21u); f_11209e30();
  /* 11205d21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205d24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11205d27 push ecx */
  push32((uint32_t)(ECX));
  /* 11205d28 call dword ptr [0x11231368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231368))), 0x11205d2eu);
  /* 11205d2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205d31 jmp 0x11205d35 */
  goto L_11205d35;
L_11205d33:;
  /* 11205d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11205d35:;
  /* 11205d35 mov esp, ebp */
  ESP = (EBP);
  /* 11205d37 pop ebp */
  EBP = (pop32());
  /* 11205d38 ret  */
  ESPCHK(0x11205b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d40 @ 0x11205d40 (77 bytes, 25 insns) */
void f_11205d40(void) {
  FTRACE(0x11205d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11205d41 mov ebp, esp */
  EBP = (ESP);
  /* 11205d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205d45 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11205d4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205d4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205d50 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11205d53 push eax */
  push32((uint32_t)(EAX));
  /* 11205d54 call dword ptr [0x11231380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231380))), 0x11205d5au);
  /* 11205d5a mov dword ptr [0x11230e0c], eax */
  w32((uint32_t)(0x11230e0c), (EAX));
  /* 11205d5f cmp dword ptr [0x11230e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205d66 jne 0x11205d6c */
  if (!C.zf) goto L_11205d6c;
  /* 11205d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205d6a jmp 0x11205d8b */
  goto L_11205d8b;
L_11205d6c:;
  /* 11205d6c call 0x112077f0 */
  push32(0x11205d71u); f_112077f0();
  /* 11205d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205d73 jne 0x11205d86 */
  if (!C.zf) goto L_11205d86;
  /* 11205d75 mov ecx, dword ptr [0x11230e0c] */
  ECX = (r32((uint32_t)(0x11230e0c)));
  /* 11205d7b push ecx */
  push32((uint32_t)(ECX));
  /* 11205d7c call dword ptr [0x1123137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123137c))), 0x11205d82u);
  /* 11205d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11205d84 jmp 0x11205d8b */
  goto L_11205d8b;
L_11205d86:;
  /* 11205d86 mov eax, 1 */
  EAX = (0x1u);
L_11205d8b:;
  /* 11205d8b pop ebp */
  EBP = (pop32());
  /* 11205d8c ret  */
  ESPCHK(0x11205d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d90 @ 0x11205d90 (156 bytes, 48 insns) */
void f_11205d90(void) {
  FTRACE(0x11205d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11205d91 mov ebp, esp */
  EBP = (ESP);
  /* 11205d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205d96 mov eax, dword ptr [0x11230e08] */
  EAX = (r32((uint32_t)(0x11230e08)));
  /* 11205d9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11205d9e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11205da5 jmp 0x11205db0 */
  goto L_11205db0;
L_11205da7:;
  /* 11205da7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205daa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205dad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11205db0:;
  /* 11205db0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11205db3 cmp edx, dword ptr [0x11230e04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11230e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205db9 jge 0x11205e06 */
  if ((C.sf==C.of)) goto L_11205e06;
  /* 11205dbb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11205dc0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11205dc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205dc8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11205dcb push ecx */
  push32((uint32_t)(ECX));
  /* 11205dcc call dword ptr [0x11231374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231374))), 0x11205dd2u);
  /* 11205dd2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11205dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205dd9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205ddc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11205ddf push eax */
  push32((uint32_t)(EAX));
  /* 11205de0 call dword ptr [0x11231374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231374))), 0x11205de6u);
  /* 11205de6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205de9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11205dec push edx */
  push32((uint32_t)(EDX));
  /* 11205ded push 0 */
  push32((uint32_t)(0x0u));
  /* 11205def mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 11205df4 push eax */
  push32((uint32_t)(EAX));
  /* 11205df5 call dword ptr [0x11231384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231384))), 0x11205dfbu);
  /* 11205dfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205dfe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205e01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11205e04 jmp 0x11205da7 */
  goto L_11205da7;
L_11205e06:;
  /* 11205e06 mov edx, dword ptr [0x11230e08] */
  EDX = (r32((uint32_t)(0x11230e08)));
  /* 11205e0c push edx */
  push32((uint32_t)(EDX));
  /* 11205e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11205e0f mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 11205e14 push eax */
  push32((uint32_t)(EAX));
  /* 11205e15 call dword ptr [0x11231384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231384))), 0x11205e1bu);
  /* 11205e1b mov ecx, dword ptr [0x11230e0c] */
  ECX = (r32((uint32_t)(0x11230e0c)));
  /* 11205e21 push ecx */
  push32((uint32_t)(ECX));
  /* 11205e22 call dword ptr [0x1123137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123137c))), 0x11205e28u);
  /* 11205e28 mov esp, ebp */
  ESP = (EBP);
  /* 11205e2a pop ebp */
  EBP = (pop32());
  /* 11205e2b ret  */
  ESPCHK(0x11205d90u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11205e30 (73 bytes, 19 insns) */
void f_11205e30(void) {
  FTRACE(0x11205e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11205e31 mov ebp, esp */
  EBP = (ESP);
  /* 11205e33 cmp dword ptr [0x1122f448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205e3a je 0x11205e4e */
  if (C.zf) goto L_11205e4e;
  /* 11205e3c cmp dword ptr [0x1122f448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205e43 jne 0x11205e77 */
  if (!C.zf) goto L_11205e77;
  /* 11205e45 cmp dword ptr [0x1122f44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205e4c jne 0x11205e77 */
  if (!C.zf) goto L_11205e77;
L_11205e4e:;
  /* 11205e4e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11205e53 call 0x11205e80 */
  push32(0x11205e58u); f_11205e80();
  /* 11205e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205e5b cmp dword ptr [0x1122f5b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205e62 je 0x11205e6a */
  if (C.zf) goto L_11205e6a;
  /* 11205e64 call dword ptr [0x1122f5b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f5b8))), 0x11205e6au);
L_11205e6a:;
  /* 11205e6a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11205e6f call 0x11205e80 */
  push32(0x11205e74u); f_11205e80();
  /* 11205e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11205e77:;
  /* 11205e77 pop ebp */
  EBP = (pop32());
  /* 11205e78 ret  */
  ESPCHK(0x11205e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e80 @ 0x11205e80 (447 bytes, 131 insns) */
void f_11205e80(void) {
  FTRACE(0x11205e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11205e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11205e81 mov ebp, esp */
  EBP = (ESP);
  /* 11205e83 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11205e89 push ebx */
  push32((uint32_t)(EBX));
  /* 11205e8a push esi */
  push32((uint32_t)(ESI));
  /* 11205e8b push edi */
  push32((uint32_t)(EDI));
  /* 11205e8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11205e93 jmp 0x11205e9e */
  goto L_11205e9e;
L_11205e95:;
  /* 11205e95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205e98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205e9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11205e9e:;
  /* 11205e9e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205ea2 jae 0x11205eb7 */
  if (!C.cf) goto L_11205eb7;
  /* 11205ea4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205ea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205eaa cmp edx, dword ptr [ecx*8 + 0x1122dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1122dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205eb1 jne 0x11205eb5 */
  if (!C.zf) goto L_11205eb5;
  /* 11205eb3 jmp 0x11205eb7 */
  goto L_11205eb7;
L_11205eb5:;
  /* 11205eb5 jmp 0x11205e95 */
  goto L_11205e95;
L_11205eb7:;
  /* 11205eb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205eba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11205ebd cmp ecx, dword ptr [eax*8 + 0x1122dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1122dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205ec4 jne 0x11206038 */
  if (!C.zf) goto L_11206038;
  /* 11205eca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205ed1 je 0x11205ef4 */
  if (C.zf) goto L_11205ef4;
  /* 11205ed3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205ed6 mov eax, dword ptr [edx*8 + 0x1122dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1122dab4)));
  /* 11205edd push eax */
  push32((uint32_t)(EAX));
  /* 11205ede push 0 */
  push32((uint32_t)(0x0u));
  /* 11205ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205ee4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11205ee6 call 0x11202610 */
  push32(0x11205eebu); f_11202610();
  /* 11205eeb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205eee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205ef1 jne 0x11205ef4 */
  if (!C.zf) goto L_11205ef4;
  /* 11205ef3 int3  */
  x86_unimpl("int3 @ 0x11205ef3");
L_11205ef4:;
  /* 11205ef4 cmp dword ptr [0x1122f448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205efb je 0x11205f0f */
  if (C.zf) goto L_11205f0f;
  /* 11205efd cmp dword ptr [0x1122f448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205f04 jne 0x11205f48 */
  if (!C.zf) goto L_11205f48;
  /* 11205f06 cmp dword ptr [0x1122f44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205f0d jne 0x11205f48 */
  if (!C.zf) goto L_11205f48;
L_11205f0f:;
  /* 11205f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11205f11 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11205f14 push ecx */
  push32((uint32_t)(ECX));
  /* 11205f15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205f18 mov eax, dword ptr [edx*8 + 0x1122dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1122dab4)));
  /* 11205f1f push eax */
  push32((uint32_t)(EAX));
  /* 11205f20 call 0x11206380 */
  push32(0x11205f25u); f_11206380();
  /* 11205f25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205f28 push eax */
  push32((uint32_t)(EAX));
  /* 11205f29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11205f2c mov edx, dword ptr [ecx*8 + 0x1122dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1122dab4)));
  /* 11205f33 push edx */
  push32((uint32_t)(EDX));
  /* 11205f34 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11205f36 call dword ptr [0x11231300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231300))), 0x11205f3cu);
  /* 11205f3c push eax */
  push32((uint32_t)(EAX));
  /* 11205f3d call dword ptr [0x11231304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231304))), 0x11205f43u);
  /* 11205f43 jmp 0x11206038 */
  goto L_11206038;
L_11205f48:;
  /* 11205f48 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205f4f je 0x11206038 */
  if (C.zf) goto L_11206038;
  /* 11205f55 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11205f5a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11205f60 push eax */
  push32((uint32_t)(EAX));
  /* 11205f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11205f63 call dword ptr [0x1123131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123131c))), 0x11205f69u);
  /* 11205f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11205f6b jne 0x11205f81 */
  if (!C.zf) goto L_11205f81;
  /* 11205f6d push 0x1122a3dc */
  push32((uint32_t)(0x1122a3dcu));
  /* 11205f72 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11205f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11205f79 call 0x11206500 */
  push32(0x11205f7eu); f_11206500();
  /* 11205f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11205f81:;
  /* 11205f81 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11205f87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11205f8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205f8d push eax */
  push32((uint32_t)(EAX));
  /* 11205f8e call 0x11206380 */
  push32(0x11205f93u); f_11206380();
  /* 11205f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205f96 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11205f99 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11205f9c jbe 0x11205fca */
  if ((C.cf||C.zf)) goto L_11205fca;
  /* 11205f9e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11205fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11205fa5 call 0x11206380 */
  push32(0x11205faau); f_11206380();
  /* 11205faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205fad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205fb0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11205fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11205fb7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11205fb9 push 0x1122a3d8 */
  push32((uint32_t)(0x1122a3d8u));
  /* 11205fbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11205fc2 call 0x11206d70 */
  push32(0x11205fc7u); f_11206d70();
  /* 11205fc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11205fca:;
  /* 11205fca push 0x1122ae30 */
  push32((uint32_t)(0x1122ae30u));
  /* 11205fcf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11205fd5 push edx */
  push32((uint32_t)(EDX));
  /* 11205fd6 call 0x11206500 */
  push32(0x11205fdbu); f_11206500();
  /* 11205fdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205fde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11205fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11205fe2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11205fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 11205fe9 call 0x11206510 */
  push32(0x11205feeu); f_11206510();
  /* 11205fee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11205ff1 push 0x1122a350 */
  push32((uint32_t)(0x1122a350u));
  /* 11205ff6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11205ffc push edx */
  push32((uint32_t)(EDX));
  /* 11205ffd call 0x11206510 */
  push32(0x11206002u); f_11206510();
  /* 11206002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206005 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206008 mov ecx, dword ptr [eax*8 + 0x1122dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1122dab4)));
  /* 1120600f push ecx */
  push32((uint32_t)(ECX));
  /* 11206010 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11206016 push edx */
  push32((uint32_t)(EDX));
  /* 11206017 call 0x11206510 */
  push32(0x1120601cu); f_11206510();
  /* 1120601c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120601f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11206024 push 0x1122ae08 */
  push32((uint32_t)(0x1122ae08u));
  /* 11206029 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1120602f push eax */
  push32((uint32_t)(EAX));
  /* 11206030 call 0x11206cb0 */
  push32(0x11206035u); f_11206cb0();
  /* 11206035 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206038:;
  /* 11206038 pop edi */
  EDI = (pop32());
  /* 11206039 pop esi */
  ESI = (pop32());
  /* 1120603a pop ebx */
  EBX = (pop32());
  /* 1120603b mov esp, ebp */
  ESP = (EBP);
  /* 1120603d pop ebp */
  EBP = (pop32());
  /* 1120603e ret  */
  ESPCHK(0x11205e80u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11206040 (80 bytes, 27 insns) */
void f_11206040(void) {
  FTRACE(0x11206040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206040 push ebp */
  push32((uint32_t)(EBP));
  /* 11206041 mov ebp, esp */
  EBP = (ESP);
  /* 11206043 push ecx */
  push32((uint32_t)(ECX));
  /* 11206044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120604b jmp 0x11206056 */
  goto L_11206056;
L_1120604d:;
  /* 1120604d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206053 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11206056:;
  /* 11206056 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120605a jae 0x1120606f */
  if (!C.cf) goto L_1120606f;
  /* 1120605c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120605f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206062 cmp edx, dword ptr [ecx*8 + 0x1122dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1122dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206069 jne 0x1120606d */
  if (!C.zf) goto L_1120606d;
  /* 1120606b jmp 0x1120606f */
  goto L_1120606f;
L_1120606d:;
  /* 1120606d jmp 0x1120604d */
  goto L_1120604d;
L_1120606f:;
  /* 1120606f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206075 cmp ecx, dword ptr [eax*8 + 0x1122dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1122dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120607c jne 0x1120608a */
  if (!C.zf) goto L_1120608a;
  /* 1120607e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206081 mov eax, dword ptr [edx*8 + 0x1122dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1122dab4)));
  /* 11206088 jmp 0x1120608c */
  goto L_1120608c;
L_1120608a:;
  /* 1120608a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120608c:;
  /* 1120608c mov esp, ebp */
  ESP = (EBP);
  /* 1120608e pop ebp */
  EBP = (pop32());
  /* 1120608f ret  */
  ESPCHK(0x11206040u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11206090 (66 bytes, 28 insns) */
void f_11206090(void) {
  FTRACE(0x11206090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206090 push ebp */
  push32((uint32_t)(EBP));
  /* 11206091 mov ebp, esp */
  EBP = (ESP);
  /* 11206093 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206097 jne 0x112060b7 */
  if (!C.zf) goto L_112060b7;
  /* 11206099 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120609d jge 0x112060b7 */
  if ((C.sf==C.of)) goto L_112060b7;
  /* 1120609f push 1 */
  push32((uint32_t)(0x1u));
  /* 112060a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112060a4 push eax */
  push32((uint32_t)(EAX));
  /* 112060a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112060a8 push ecx */
  push32((uint32_t)(ECX));
  /* 112060a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112060ac push edx */
  push32((uint32_t)(EDX));
  /* 112060ad call 0x112060e0 */
  push32(0x112060b2u); f_112060e0();
  /* 112060b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112060b5 jmp 0x112060cd */
  goto L_112060cd;
L_112060b7:;
  /* 112060b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112060b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112060bc push eax */
  push32((uint32_t)(EAX));
  /* 112060bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112060c0 push ecx */
  push32((uint32_t)(ECX));
  /* 112060c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112060c4 push edx */
  push32((uint32_t)(EDX));
  /* 112060c5 call 0x112060e0 */
  push32(0x112060cau); f_112060e0();
  /* 112060ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112060cd:;
  /* 112060cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112060d0 pop ebp */
  EBP = (pop32());
  /* 112060d1 ret  */
  ESPCHK(0x11206090u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x112060e0 (194 bytes, 71 insns) */
void f_112060e0(void) {
  FTRACE(0x112060e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112060e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112060e1 mov ebp, esp */
  EBP = (ESP);
  /* 112060e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112060e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112060e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112060ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112060f0 je 0x11206109 */
  if (C.zf) goto L_11206109;
  /* 112060f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112060f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 112060f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112060fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112060fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11206101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206104 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11206106 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11206109:;
  /* 11206109 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120610c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1120610f:;
  /* 1120610f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206112 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11206114 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11206117 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1120611a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120611d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120611f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11206122 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11206125 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206129 jbe 0x11206141 */
  if ((C.cf||C.zf)) goto L_11206141;
  /* 1120612b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120612e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206134 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11206136 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206139 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120613c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120613f jmp 0x11206155 */
  goto L_11206155;
L_11206141:;
  /* 11206141 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11206144 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120614a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1120614c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120614f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206152 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11206155:;
  /* 11206155 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206159 ja 0x1120610f */
  if ((!C.cf&&!C.zf)) goto L_1120610f;
  /* 1120615b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120615e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11206161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206164 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206167 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120616a:;
  /* 1120616a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120616d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120616f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11206172 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206178 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120617a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1120617c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120617f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11206182 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11206184 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206187 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120618a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120618d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206190 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206193 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11206196 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206199 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120619c jb 0x1120616a */
  if (C.cf) goto L_1120616a;
  /* 1120619e mov esp, ebp */
  ESP = (EBP);
  /* 112061a0 pop ebp */
  EBP = (pop32());
  /* 112061a1 ret  */
  ESPCHK(0x112060e0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x112061b0 (63 bytes, 24 insns) */
void f_112061b0(void) {
  FTRACE(0x112061b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112061b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112061b1 mov ebp, esp */
  EBP = (ESP);
  /* 112061b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112061b4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112061b8 jne 0x112061c9 */
  if (!C.zf) goto L_112061c9;
  /* 112061ba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112061be jge 0x112061c9 */
  if ((C.sf==C.of)) goto L_112061c9;
  /* 112061c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112061c7 jmp 0x112061d0 */
  goto L_112061d0;
L_112061c9:;
  /* 112061c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112061d0:;
  /* 112061d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112061d3 push eax */
  push32((uint32_t)(EAX));
  /* 112061d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112061d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112061d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112061db push edx */
  push32((uint32_t)(EDX));
  /* 112061dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112061df push eax */
  push32((uint32_t)(EAX));
  /* 112061e0 call 0x112060e0 */
  push32(0x112061e5u); f_112060e0();
  /* 112061e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112061e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112061eb mov esp, ebp */
  ESP = (EBP);
  /* 112061ed pop ebp */
  EBP = (pop32());
  /* 112061ee ret  */
  ESPCHK(0x112061b0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x112061f0 (30 bytes, 14 insns) */
void f_112061f0(void) {
  FTRACE(0x112061f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112061f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112061f1 mov ebp, esp */
  EBP = (ESP);
  /* 112061f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112061f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112061f8 push eax */
  push32((uint32_t)(EAX));
  /* 112061f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112061fc push ecx */
  push32((uint32_t)(ECX));
  /* 112061fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206200 push edx */
  push32((uint32_t)(EDX));
  /* 11206201 call 0x112060e0 */
  push32(0x11206206u); f_112060e0();
  /* 11206206 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206209 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120620c pop ebp */
  EBP = (pop32());
  /* 1120620d ret  */
  ESPCHK(0x112061f0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11206210 (72 bytes, 28 insns) */
void f_11206210(void) {
  FTRACE(0x11206210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206210 push ebp */
  push32((uint32_t)(EBP));
  /* 11206211 mov ebp, esp */
  EBP = (ESP);
  /* 11206213 push ecx */
  push32((uint32_t)(ECX));
  /* 11206214 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206218 jne 0x11206231 */
  if (!C.zf) goto L_11206231;
  /* 1120621a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120621e jg 0x11206231 */
  if ((!C.zf&&C.sf==C.of)) goto L_11206231;
  /* 11206220 jl 0x11206228 */
  if ((C.sf!=C.of)) goto L_11206228;
  /* 11206222 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206226 jae 0x11206231 */
  if (!C.cf) goto L_11206231;
L_11206228:;
  /* 11206228 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1120622f jmp 0x11206238 */
  goto L_11206238;
L_11206231:;
  /* 11206231 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11206238:;
  /* 11206238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120623b push eax */
  push32((uint32_t)(EAX));
  /* 1120623c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120623f push ecx */
  push32((uint32_t)(ECX));
  /* 11206240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11206243 push edx */
  push32((uint32_t)(EDX));
  /* 11206244 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206247 push eax */
  push32((uint32_t)(EAX));
  /* 11206248 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120624b push ecx */
  push32((uint32_t)(ECX));
  /* 1120624c call 0x11206260 */
  push32(0x11206251u); f_11206260();
  /* 11206251 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11206254 mov esp, ebp */
  ESP = (EBP);
  /* 11206256 pop ebp */
  EBP = (pop32());
  /* 11206257 ret  */
  ESPCHK(0x11206210u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11206260 (242 bytes, 91 insns) */
void f_11206260(void) {
  FTRACE(0x11206260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206260 push ebp */
  push32((uint32_t)(EBP));
  /* 11206261 mov ebp, esp */
  EBP = (ESP);
  /* 11206263 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11206269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120626c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206270 je 0x11206294 */
  if (C.zf) goto L_11206294;
  /* 11206272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206275 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11206278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120627b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120627e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11206281 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206284 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11206286 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206289 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120628c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120628e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11206291 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11206294:;
  /* 11206294 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206297 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1120629a:;
  /* 1120629a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120629d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120629f push ecx */
  push32((uint32_t)(ECX));
  /* 112062a0 push eax */
  push32((uint32_t)(EAX));
  /* 112062a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112062a4 push edx */
  push32((uint32_t)(EDX));
  /* 112062a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112062a8 push eax */
  push32((uint32_t)(EAX));
  /* 112062a9 call 0x1120a1e0 */
  push32(0x112062aeu); f_1120a1e0();
  /* 112062ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112062b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112062b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112062b6 push edx */
  push32((uint32_t)(EDX));
  /* 112062b7 push ecx */
  push32((uint32_t)(ECX));
  /* 112062b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112062bb push eax */
  push32((uint32_t)(EAX));
  /* 112062bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112062bf push ecx */
  push32((uint32_t)(ECX));
  /* 112062c0 call 0x1120a170 */
  push32(0x112062c5u); f_1120a170();
  /* 112062c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112062c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 112062cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112062cf jbe 0x112062e7 */
  if ((C.cf||C.zf)) goto L_112062e7;
  /* 112062d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112062d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112062d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112062da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112062dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112062df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112062e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112062e5 jmp 0x112062fb */
  goto L_112062fb;
L_112062e7:;
  /* 112062e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112062ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112062ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112062f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112062f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112062f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112062f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112062fb:;
  /* 112062fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112062ff ja 0x1120629a */
  if ((!C.cf&&!C.zf)) goto L_1120629a;
  /* 11206301 jb 0x11206309 */
  if (C.cf) goto L_11206309;
  /* 11206303 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206307 ja 0x1120629a */
  if ((!C.cf&&!C.zf)) goto L_1120629a;
L_11206309:;
  /* 11206309 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120630c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1120630f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206312 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206315 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11206318:;
  /* 11206318 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120631b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120631d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11206320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206326 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11206328 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1120632a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120632d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11206330 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11206332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206335 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206338 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120633b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120633e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206341 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11206344 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206347 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120634a jb 0x11206318 */
  if (C.cf) goto L_11206318;
  /* 1120634c mov esp, ebp */
  ESP = (EBP);
  /* 1120634e pop ebp */
  EBP = (pop32());
  /* 1120634f ret 0x14 */
  ESPCHK(0x11206260u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11206360 (31 bytes, 15 insns) */
void f_11206360(void) {
  FTRACE(0x11206360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206360 push ebp */
  push32((uint32_t)(EBP));
  /* 11206361 mov ebp, esp */
  EBP = (ESP);
  /* 11206363 push 0 */
  push32((uint32_t)(0x0u));
  /* 11206365 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11206368 push eax */
  push32((uint32_t)(EAX));
  /* 11206369 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120636c push ecx */
  push32((uint32_t)(ECX));
  /* 1120636d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206370 push edx */
  push32((uint32_t)(EDX));
  /* 11206371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206374 push eax */
  push32((uint32_t)(EAX));
  /* 11206375 call 0x11206260 */
  push32(0x1120637au); f_11206260();
  /* 1120637a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120637d pop ebp */
  EBP = (pop32());
  /* 1120637e ret  */
  ESPCHK(0x11206360u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11206380 (123 bytes, 44 insns) */
void f_11206380(void) {
  FTRACE(0x11206380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206380 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11206384 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1120638a je 0x112063a0 */
  if (C.zf) goto L_112063a0;
L_1120638c:;
  /* 1120638c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1120638e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1120638f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11206391 je 0x112063d3 */
  if (C.zf) goto L_112063d3;
  /* 11206393 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11206399 jne 0x1120638c */
  if (!C.zf) goto L_1120638c;
  /* 1120639b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112063a0:;
  /* 112063a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112063a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112063a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112063a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112063ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112063ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112063b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112063b6 je 0x112063a0 */
  if (C.zf) goto L_112063a0;
  /* 112063b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 112063bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112063bd je 0x112063f1 */
  if (C.zf) goto L_112063f1;
  /* 112063bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112063c1 je 0x112063e7 */
  if (C.zf) goto L_112063e7;
  /* 112063c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 112063c8 je 0x112063dd */
  if (C.zf) goto L_112063dd;
  /* 112063ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 112063cf je 0x112063d3 */
  if (C.zf) goto L_112063d3;
  /* 112063d1 jmp 0x112063a0 */
  goto L_112063a0;
L_112063d3:;
  /* 112063d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 112063d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112063da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112063dc ret  */
  ESPCHK(0x11206380u, _esp0);
  ESP += 4; return;
L_112063dd:;
  /* 112063dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 112063e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112063e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112063e6 ret  */
  ESPCHK(0x11206380u, _esp0);
  ESP += 4; return;
L_112063e7:;
  /* 112063e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 112063ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112063ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112063f0 ret  */
  ESPCHK(0x11206380u, _esp0);
  ESP += 4; return;
L_112063f1:;
  /* 112063f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 112063f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112063f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112063fa ret  */
  ESPCHK(0x11206380u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x11206400 (249 bytes, 93 insns) */
void f_11206400(void) {
  FTRACE(0x11206400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206400 push ebp */
  push32((uint32_t)(EBP));
  /* 11206401 mov ebp, esp */
  EBP = (ESP);
  /* 11206403 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206406 push ebx */
  push32((uint32_t)(EBX));
  /* 11206407 push esi */
  push32((uint32_t)(ESI));
  /* 11206408 push edi */
  push32((uint32_t)(EDI));
  /* 11206409 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1120640c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1120640f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11206412 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11206415:;
  /* 11206415 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206419 jne 0x11206439 */
  if (!C.zf) goto L_11206439;
  /* 1120641b push 0x1122ae68 */
  push32((uint32_t)(0x1122ae68u));
  /* 11206420 push 0 */
  push32((uint32_t)(0x0u));
  /* 11206422 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11206424 push 0x1122ae5c */
  push32((uint32_t)(0x1122ae5cu));
  /* 11206429 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120642b call 0x11202610 */
  push32(0x11206430u); f_11202610();
  /* 11206430 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206433 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206436 jne 0x11206439 */
  if (!C.zf) goto L_11206439;
  /* 11206438 int3  */
  x86_unimpl("int3 @ 0x11206438");
L_11206439:;
  /* 11206439 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120643b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120643d jne 0x11206415 */
  if (!C.zf) goto L_11206415;
L_1120643f:;
  /* 1120643f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206443 jne 0x11206463 */
  if (!C.zf) goto L_11206463;
  /* 11206445 push 0x1122ae4c */
  push32((uint32_t)(0x1122ae4cu));
  /* 1120644a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120644c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1120644e push 0x1122ae5c */
  push32((uint32_t)(0x1122ae5cu));
  /* 11206453 push 2 */
  push32((uint32_t)(0x2u));
  /* 11206455 call 0x11202610 */
  push32(0x1120645au); f_11202610();
  /* 1120645a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120645d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206460 jne 0x11206463 */
  if (!C.zf) goto L_11206463;
  /* 11206462 int3  */
  x86_unimpl("int3 @ 0x11206462");
L_11206463:;
  /* 11206463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11206465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11206467 jne 0x1120643f */
  if (!C.zf) goto L_1120643f;
  /* 11206469 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120646c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11206473 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206479 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1120647c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120647f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206482 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11206484 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206487 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120648a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1120648d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11206490 push edx */
  push32((uint32_t)(EDX));
  /* 11206491 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11206494 push eax */
  push32((uint32_t)(EAX));
  /* 11206495 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206498 push ecx */
  push32((uint32_t)(ECX));
  /* 11206499 call 0x1120a4e0 */
  push32(0x1120649eu); f_1120a4e0();
  /* 1120649e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112064a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112064a4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064a7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112064aa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112064ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064b0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112064b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064b6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112064ba jl 0x112064de */
  if ((C.sf!=C.of)) goto L_112064de;
  /* 112064bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112064c1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 112064c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112064c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112064cc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 112064cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064d2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112064d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112064d7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064da mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112064dc jmp 0x112064ef */
  goto L_112064ef;
L_112064de:;
  /* 112064de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112064e1 push eax */
  push32((uint32_t)(EAX));
  /* 112064e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112064e4 call 0x1120a260 */
  push32(0x112064e9u); f_1120a260();
  /* 112064e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112064ec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_112064ef:;
  /* 112064ef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112064f2 pop edi */
  EDI = (pop32());
  /* 112064f3 pop esi */
  ESI = (pop32());
  /* 112064f4 pop ebx */
  EBX = (pop32());
  /* 112064f5 mov esp, ebp */
  ESP = (EBP);
  /* 112064f7 pop ebp */
  EBP = (pop32());
  /* 112064f8 ret  */
  ESPCHK(0x11206400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x11206500 (7 bytes, 3 insns) */
void f_11206500(void) {
  FTRACE(0x11206500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206500 push edi */
  push32((uint32_t)(EDI));
  /* 11206501 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11206505 jmp 0x11206571 */
  jmp_ind(0x11206571u); return;
}

/* FUN_10006510 @ 0x11206510 (224 bytes, 84 insns) */
void f_11206510(void) {
  FTRACE(0x11206510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206510 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11206514 push edi */
  push32((uint32_t)(EDI));
  /* 11206515 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1120651b je 0x1120652c */
  if (C.zf) goto L_1120652c;
L_1120651d:;
  /* 1120651d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1120651f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11206520 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11206522 je 0x1120655f */
  if (C.zf) goto L_1120655f;
  /* 11206524 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1120652a jne 0x1120651d */
  if (!C.zf) goto L_1120651d;
L_1120652c:;
  /* 1120652c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1120652e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11206533 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206535 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11206538 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1120653a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120653d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11206542 je 0x1120652c */
  if (C.zf) goto L_1120652c;
  /* 11206544 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11206547 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11206549 je 0x1120656e */
  if (C.zf) goto L_1120656e;
  /* 1120654b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1120654d je 0x11206569 */
  if (C.zf) goto L_11206569;
  /* 1120654f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11206554 je 0x11206564 */
  if (C.zf) goto L_11206564;
  /* 11206556 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1120655b je 0x1120655f */
  if (C.zf) goto L_1120655f;
  /* 1120655d jmp 0x1120652c */
  goto L_1120652c;
L_1120655f:;
  /* 1120655f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11206562 jmp 0x11206571 */
  goto L_11206571;
L_11206564:;
  /* 11206564 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11206567 jmp 0x11206571 */
  goto L_11206571;
L_11206569:;
  /* 11206569 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1120656c jmp 0x11206571 */
  goto L_11206571;
L_1120656e:;
  /* 1120656e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11206571:;
  /* 11206571 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11206575 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1120657b je 0x11206596 */
  if (C.zf) goto L_11206596;
L_1120657d:;
  /* 1120657d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120657f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11206580 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11206582 je 0x112065e8 */
  if (C.zf) goto L_112065e8;
  /* 11206584 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11206586 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11206587 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1120658d jne 0x1120657d */
  if (!C.zf) goto L_1120657d;
  /* 1120658f jmp 0x11206596 */
  goto L_11206596;
L_11206591:;
  /* 11206591 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11206593 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11206596:;
  /* 11206596 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1120659b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1120659d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120659f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112065a2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112065a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112065a6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112065a9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112065ae je 0x11206591 */
  if (C.zf) goto L_11206591;
  /* 112065b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112065b2 je 0x112065e8 */
  if (C.zf) goto L_112065e8;
  /* 112065b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112065b6 je 0x112065df */
  if (C.zf) goto L_112065df;
  /* 112065b8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 112065be je 0x112065d2 */
  if (C.zf) goto L_112065d2;
  /* 112065c0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 112065c6 je 0x112065ca */
  if (C.zf) goto L_112065ca;
  /* 112065c8 jmp 0x11206591 */
  goto L_11206591;
L_112065ca:;
  /* 112065ca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112065cc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112065d0 pop edi */
  EDI = (pop32());
  /* 112065d1 ret  */
  ESPCHK(0x11206510u, _esp0);
  ESP += 4; return;
L_112065d2:;
  /* 112065d2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112065d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112065d9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 112065dd pop edi */
  EDI = (pop32());
  /* 112065de ret  */
  ESPCHK(0x11206510u, _esp0);
  ESP += 4; return;
L_112065df:;
  /* 112065df mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112065e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112065e6 pop edi */
  EDI = (pop32());
  /* 112065e7 ret  */
  ESPCHK(0x11206510u, _esp0);
  ESP += 4; return;
L_112065e8:;
  /* 112065e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112065ea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112065ee pop edi */
  EDI = (pop32());
  /* 112065ef ret  */
  ESPCHK(0x11206510u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x112065f0 (243 bytes, 91 insns) */
void f_112065f0(void) {
  FTRACE(0x112065f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112065f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112065f1 mov ebp, esp */
  EBP = (ESP);
  /* 112065f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112065f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112065f7 push esi */
  push32((uint32_t)(ESI));
  /* 112065f8 push edi */
  push32((uint32_t)(EDI));
  /* 112065f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 112065fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112065ff:;
  /* 112065ff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206603 jne 0x11206623 */
  if (!C.zf) goto L_11206623;
  /* 11206605 push 0x1122ae68 */
  push32((uint32_t)(0x1122ae68u));
  /* 1120660a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120660c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1120660e push 0x1122ae78 */
  push32((uint32_t)(0x1122ae78u));
  /* 11206613 push 2 */
  push32((uint32_t)(0x2u));
  /* 11206615 call 0x11202610 */
  push32(0x1120661au); f_11202610();
  /* 1120661a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120661d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206620 jne 0x11206623 */
  if (!C.zf) goto L_11206623;
  /* 11206622 int3  */
  x86_unimpl("int3 @ 0x11206622");
L_11206623:;
  /* 11206623 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11206625 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11206627 jne 0x112065ff */
  if (!C.zf) goto L_112065ff;
L_11206629:;
  /* 11206629 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120662d jne 0x1120664d */
  if (!C.zf) goto L_1120664d;
  /* 1120662f push 0x1122ae4c */
  push32((uint32_t)(0x1122ae4cu));
  /* 11206634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11206636 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11206638 push 0x1122ae78 */
  push32((uint32_t)(0x1122ae78u));
  /* 1120663d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120663f call 0x11202610 */
  push32(0x11206644u); f_11202610();
  /* 11206644 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120664a jne 0x1120664d */
  if (!C.zf) goto L_1120664d;
  /* 1120664c int3  */
  x86_unimpl("int3 @ 0x1120664c");
L_1120664d:;
  /* 1120664d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120664f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11206651 jne 0x11206629 */
  if (!C.zf) goto L_11206629;
  /* 11206653 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206656 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1120665d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206660 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206663 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11206666 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120666c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1120666e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206671 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206674 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11206677 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120667a push ecx */
  push32((uint32_t)(ECX));
  /* 1120667b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120667e push edx */
  push32((uint32_t)(EDX));
  /* 1120667f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206682 push eax */
  push32((uint32_t)(EAX));
  /* 11206683 call 0x1120a4e0 */
  push32(0x11206688u); f_1120a4e0();
  /* 11206688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120668b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1120668e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11206691 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11206694 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206697 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120669a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1120669d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112066a0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112066a4 jl 0x112066c8 */
  if ((C.sf!=C.of)) goto L_112066c8;
  /* 112066a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112066a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112066ab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112066ae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112066b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112066b6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112066b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112066bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112066be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112066c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112066c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112066c6 jmp 0x112066d9 */
  goto L_112066d9;
L_112066c8:;
  /* 112066c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112066cb push edx */
  push32((uint32_t)(EDX));
  /* 112066cc push 0 */
  push32((uint32_t)(0x0u));
  /* 112066ce call 0x1120a260 */
  push32(0x112066d3u); f_1120a260();
  /* 112066d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112066d6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_112066d9:;
  /* 112066d9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112066dc pop edi */
  EDI = (pop32());
  /* 112066dd pop esi */
  ESI = (pop32());
  /* 112066de pop ebx */
  EBX = (pop32());
  /* 112066df mov esp, ebp */
  ESP = (EBP);
  /* 112066e1 pop ebp */
  EBP = (pop32());
  /* 112066e2 ret  */
  ESPCHK(0x112065f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x112066f0 (47 bytes, 17 insns) */
void f_112066f0(void) {
  FTRACE(0x112066f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112066f0 push ecx */
  push32((uint32_t)(ECX));
  /* 112066f1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112066f6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 112066fa jb 0x11206710 */
  if (C.cf) goto L_11206710;
L_112066fc:;
  /* 112066fc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206702 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206707 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11206709 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120670e jae 0x112066fc */
  if (!C.cf) goto L_112066fc;
L_11206710:;
  /* 11206710 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206712 mov eax, esp */
  EAX = (ESP);
  /* 11206714 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11206716 mov esp, ecx */
  ESP = (ECX);
  /* 11206718 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120671a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1120671d push eax */
  push32((uint32_t)(EAX));
  /* 1120671e ret  */
  ESPCHK(0x112066f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006720 @ 0x11206720 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11206720(void) {
  FTRACE(0x11206720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206720 push ebp */
  push32((uint32_t)(EBP));
  /* 11206721 mov ebp, esp */
  EBP = (ESP);
  /* 11206723 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206726 push esi */
  push32((uint32_t)(ESI));
  /* 11206727 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120672b je 0x11206733 */
  if (C.zf) goto L_11206733;
  /* 1120672d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206731 jne 0x11206738 */
  if (!C.zf) goto L_11206738;
L_11206733:;
  /* 11206733 jmp 0x11206908 */
  goto L_11206908;
L_11206738:;
  /* 11206738 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120673c je 0x11206754 */
  if (C.zf) goto L_11206754;
  /* 1120673e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206742 je 0x11206754 */
  if (C.zf) goto L_11206754;
  /* 11206744 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206748 je 0x11206754 */
  if (C.zf) goto L_11206754;
  /* 1120674a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120674e jne 0x11206831 */
  if (!C.zf) goto L_11206831;
L_11206754:;
  /* 11206754 push 1 */
  push32((uint32_t)(0x1u));
  /* 11206756 call 0x11206f50 */
  push32(0x1120675bu); f_11206f50();
  /* 1120675b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120675e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206762 je 0x1120676a */
  if (C.zf) goto L_1120676a;
  /* 11206764 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206768 jne 0x112067af */
  if (!C.zf) goto L_112067af;
L_1120676a:;
  /* 1120676a cmp dword ptr [0x1122f5cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206771 jne 0x112067af */
  if (!C.zf) goto L_112067af;
  /* 11206773 push 1 */
  push32((uint32_t)(0x1u));
  /* 11206775 push 0x11206950 */
  push32((uint32_t)(0x11206950u));
  /* 1120677a call dword ptr [0x11231388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231388))), 0x11206780u);
  /* 11206780 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206783 jne 0x11206791 */
  if (!C.zf) goto L_11206791;
  /* 11206785 mov dword ptr [0x1122f5cc], 1 */
  w32((uint32_t)(0x1122f5cc), (0x1u));
  /* 1120678f jmp 0x112067af */
  goto L_112067af;
L_11206791:;
  /* 11206791 call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x11206797u);
  /* 11206797 mov esi, eax */
  ESI = (EAX);
  /* 11206799 call 0x1120b430 */
  push32(0x1120679eu); f_1120b430();
  /* 1120679e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 112067a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112067a2 call 0x11206ff0 */
  push32(0x112067a7u); f_11206ff0();
  /* 112067a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112067aa jmp 0x11206908 */
  goto L_11206908;
L_112067af:;
  /* 112067af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112067b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112067b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112067b8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112067bb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112067be cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112067c2 ja 0x11206822 */
  if ((!C.cf&&!C.zf)) goto L_11206822;
  /* 112067c4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112067c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112067c9 mov dl, byte ptr [eax + 0x1120692f] */
  DL = (r8((uint32_t)(EAX + 0x1120692f)));
  /* 112067cf jmp dword ptr [edx*4 + 0x1120691b] */
  switch (EDX) {
    case 0: goto L_112067d6;
    case 1: goto L_11206810;
    case 2: goto L_112067ea;
    case 3: goto L_112067fd;
    case 4: goto L_11206822;
    default: x86_unimpl("switch@0x112067cf out of table"); return;
  }
L_112067d6:;
  /* 112067d6 mov ecx, dword ptr [0x1122f5bc] */
  ECX = (r32((uint32_t)(0x1122f5bc)));
  /* 112067dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112067df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112067e2 mov dword ptr [0x1122f5bc], edx */
  w32((uint32_t)(0x1122f5bc), (EDX));
  /* 112067e8 jmp 0x11206822 */
  goto L_11206822;
L_112067ea:;
  /* 112067ea mov eax, dword ptr [0x1122f5c0] */
  EAX = (r32((uint32_t)(0x1122f5c0)));
  /* 112067ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112067f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112067f5 mov dword ptr [0x1122f5c0], ecx */
  w32((uint32_t)(0x1122f5c0), (ECX));
  /* 112067fb jmp 0x11206822 */
  goto L_11206822;
L_112067fd:;
  /* 112067fd mov edx, dword ptr [0x1122f5c4] */
  EDX = (r32((uint32_t)(0x1122f5c4)));
  /* 11206803 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11206806 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206809 mov dword ptr [0x1122f5c4], eax */
  w32((uint32_t)(0x1122f5c4), (EAX));
  /* 1120680e jmp 0x11206822 */
  goto L_11206822;
L_11206810:;
  /* 11206810 mov ecx, dword ptr [0x1122f5c8] */
  ECX = (r32((uint32_t)(0x1122f5c8)));
  /* 11206816 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11206819 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120681c mov dword ptr [0x1122f5c8], edx */
  w32((uint32_t)(0x1122f5c8), (EDX));
L_11206822:;
  /* 11206822 push 1 */
  push32((uint32_t)(0x1u));
  /* 11206824 call 0x11206ff0 */
  push32(0x11206829u); f_11206ff0();
  /* 11206829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120682c jmp 0x11206903 */
  goto L_11206903;
L_11206831:;
  /* 11206831 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206835 je 0x11206848 */
  if (C.zf) goto L_11206848;
  /* 11206837 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120683b je 0x11206848 */
  if (C.zf) goto L_11206848;
  /* 1120683d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206841 je 0x11206848 */
  if (C.zf) goto L_11206848;
  /* 11206843 jmp 0x11206908 */
  goto L_11206908;
L_11206848:;
  /* 11206848 call 0x11202f90 */
  push32(0x1120684du); f_11202f90();
  /* 1120684d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11206850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206853 cmp dword ptr [eax + 0x50], 0x1122dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1122dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120685a jne 0x112068a5 */
  if (!C.zf) goto L_112068a5;
  /* 1120685c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11206861 push 0x1122ae84 */
  push32((uint32_t)(0x1122ae84u));
  /* 11206866 push 2 */
  push32((uint32_t)(0x2u));
  /* 11206868 mov ecx, dword ptr [0x1122dc80] */
  ECX = (r32((uint32_t)(0x1122dc80)));
  /* 1120686e push ecx */
  push32((uint32_t)(ECX));
  /* 1120686f call 0x11203550 */
  push32(0x11206874u); f_11203550();
  /* 11206874 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206877 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120687a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1120687d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206880 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206884 je 0x112068a3 */
  if (C.zf) goto L_112068a3;
  /* 11206886 mov ecx, dword ptr [0x1122dc80] */
  ECX = (r32((uint32_t)(0x1122dc80)));
  /* 1120688c push ecx */
  push32((uint32_t)(ECX));
  /* 1120688d push 0x1122dc00 */
  push32((uint32_t)(0x1122dc00u));
  /* 11206892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206895 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11206898 push eax */
  push32((uint32_t)(EAX));
  /* 11206899 call 0x11209e30 */
  push32(0x1120689eu); f_11209e30();
  /* 1120689e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112068a1 jmp 0x112068a5 */
  goto L_112068a5;
L_112068a3:;
  /* 112068a3 jmp 0x11206908 */
  goto L_11206908;
L_112068a5:;
  /* 112068a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112068a8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112068ab push edx */
  push32((uint32_t)(EDX));
  /* 112068ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112068af push eax */
  push32((uint32_t)(EAX));
  /* 112068b0 call 0x11206c30 */
  push32(0x112068b5u); f_11206c30();
  /* 112068b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112068b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112068bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112068bf jne 0x112068c3 */
  if (!C.zf) goto L_112068c3;
  /* 112068c1 jmp 0x11206908 */
  goto L_11206908;
L_112068c3:;
  /* 112068c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112068c6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112068c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112068cc:;
  /* 112068cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112068cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112068d2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112068d5 jne 0x11206903 */
  if (!C.zf) goto L_11206903;
  /* 112068d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112068da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112068dd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112068e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112068e3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112068e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112068e9 mov edx, dword ptr [0x1122dc84] */
  EDX = (r32((uint32_t)(0x1122dc84)));
  /* 112068ef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112068f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112068f5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 112068f8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112068fa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112068fd jb 0x11206901 */
  if (C.cf) goto L_11206901;
  /* 112068ff jmp 0x11206903 */
  goto L_11206903;
L_11206901:;
  /* 11206901 jmp 0x112068cc */
  goto L_112068cc;
L_11206903:;
  /* 11206903 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11206906 jmp 0x11206916 */
  goto L_11206916;
L_11206908:;
  /* 11206908 call 0x1120b420 */
  push32(0x1120690du); f_1120b420();
  /* 1120690d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11206913 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11206916:;
  /* 11206916 pop esi */
  ESI = (pop32());
  /* 11206917 mov esp, ebp */
  ESP = (EBP);
  /* 11206919 pop ebp */
  EBP = (pop32());
  /* 1120691a ret  */
  ESPCHK(0x11206720u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x11206950 (146 bytes, 45 insns) */
void f_11206950(void) {
  FTRACE(0x11206950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206950 push ebp */
  push32((uint32_t)(EBP));
  /* 11206951 mov ebp, esp */
  EBP = (ESP);
  /* 11206953 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206956 push 1 */
  push32((uint32_t)(0x1u));
  /* 11206958 call 0x11206f50 */
  push32(0x1120695du); f_11206f50();
  /* 1120695d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206960 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206964 jne 0x1120697e */
  if (!C.zf) goto L_1120697e;
  /* 11206966 mov dword ptr [ebp - 8], 0x1122f5bc */
  w32((uint32_t)(EBP + -0x8), (0x1122f5bcu));
  /* 1120696d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206970 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11206972 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11206975 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1120697c jmp 0x11206994 */
  goto L_11206994;
L_1120697e:;
  /* 1120697e mov dword ptr [ebp - 8], 0x1122f5c0 */
  w32((uint32_t)(EBP + -0x8), (0x1122f5c0u));
  /* 11206985 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206988 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120698a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1120698d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11206994:;
  /* 11206994 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206998 jne 0x112069a8 */
  if (!C.zf) goto L_112069a8;
  /* 1120699a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120699c call 0x11206ff0 */
  push32(0x112069a1u); f_11206ff0();
  /* 112069a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112069a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112069a6 jmp 0x112069dc */
  goto L_112069dc;
L_112069a8:;
  /* 112069a8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112069ac je 0x112069cd */
  if (C.zf) goto L_112069cd;
  /* 112069ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112069b1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 112069b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112069b9 call 0x11206ff0 */
  push32(0x112069beu); f_11206ff0();
  /* 112069be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112069c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112069c4 push edx */
  push32((uint32_t)(EDX));
  /* 112069c5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x112069c8u);
  /* 112069c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112069cb jmp 0x112069d7 */
  goto L_112069d7;
L_112069cd:;
  /* 112069cd push 1 */
  push32((uint32_t)(0x1u));
  /* 112069cf call 0x11206ff0 */
  push32(0x112069d4u); f_11206ff0();
  /* 112069d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112069d7:;
  /* 112069d7 mov eax, 1 */
  EAX = (0x1u);
L_112069dc:;
  /* 112069dc mov esp, ebp */
  ESP = (EBP);
  /* 112069de pop ebp */
  EBP = (pop32());
  /* 112069df ret 4 */
  ESPCHK(0x11206950u, _esp0);
  ESP += 8; return;
}

/* FUN_100069f0 @ 0x112069f0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_112069f0(void) {
  FTRACE(0x112069f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112069f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112069f1 mov ebp, esp */
  EBP = (ESP);
  /* 112069f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112069f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112069fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206a00 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11206a03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11206a06 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206a09 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11206a0c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206a10 ja 0x11206abe */
  if ((!C.cf&&!C.zf)) goto L_11206abe;
  /* 11206a16 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11206a19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11206a1b mov dl, byte ptr [eax + 0x11206c12] */
  DL = (r8((uint32_t)(EAX + 0x11206c12)));
  /* 11206a21 jmp dword ptr [edx*4 + 0x11206bfa] */
  switch (EDX) {
    case 0: goto L_11206a28;
    case 1: goto L_11206a93;
    case 2: goto L_11206a79;
    case 3: goto L_11206a45;
    case 4: goto L_11206a5f;
    case 5: goto L_11206abe;
    default: x86_unimpl("switch@0x11206a21 out of table"); return;
  }
L_11206a28:;
  /* 11206a28 mov dword ptr [ebp - 0x18], 0x1122f5bc */
  w32((uint32_t)(EBP + -0x18), (0x1122f5bcu));
  /* 11206a2f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11206a32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11206a34 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11206a37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11206a3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206a3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11206a40 jmp 0x11206ac6 */
  goto L_11206ac6;
L_11206a45:;
  /* 11206a45 mov dword ptr [ebp - 0x18], 0x1122f5c0 */
  w32((uint32_t)(EBP + -0x18), (0x1122f5c0u));
  /* 11206a4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11206a4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11206a51 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11206a54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11206a57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206a5a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11206a5d jmp 0x11206ac6 */
  goto L_11206ac6;
L_11206a5f:;
  /* 11206a5f mov dword ptr [ebp - 0x18], 0x1122f5c4 */
  w32((uint32_t)(EBP + -0x18), (0x1122f5c4u));
  /* 11206a66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11206a69 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11206a6b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11206a6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11206a71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206a74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11206a77 jmp 0x11206ac6 */
  goto L_11206ac6;
L_11206a79:;
  /* 11206a79 mov dword ptr [ebp - 0x18], 0x1122f5c8 */
  w32((uint32_t)(EBP + -0x18), (0x1122f5c8u));
  /* 11206a80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11206a83 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11206a85 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11206a88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11206a8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206a8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11206a91 jmp 0x11206ac6 */
  goto L_11206ac6;
L_11206a93:;
  /* 11206a93 call 0x11202f90 */
  push32(0x11206a98u); f_11202f90();
  /* 11206a98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11206a9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206a9e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11206aa1 push edx */
  push32((uint32_t)(EDX));
  /* 11206aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206aa5 push eax */
  push32((uint32_t)(EAX));
  /* 11206aa6 call 0x11206c30 */
  push32(0x11206aabu); f_11206c30();
  /* 11206aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206aae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206ab1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11206ab4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11206ab7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11206ab9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11206abc jmp 0x11206ac6 */
  goto L_11206ac6;
L_11206abe:;
  /* 11206abe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11206ac1 jmp 0x11206bf6 */
  goto L_11206bf6;
L_11206ac6:;
  /* 11206ac6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206aca je 0x11206ad6 */
  if (C.zf) goto L_11206ad6;
  /* 11206acc push 1 */
  push32((uint32_t)(0x1u));
  /* 11206ace call 0x11206f50 */
  push32(0x11206ad3u); f_11206f50();
  /* 11206ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206ad6:;
  /* 11206ad6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206ada jne 0x11206af3 */
  if (!C.zf) goto L_11206af3;
  /* 11206adc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206ae0 je 0x11206aec */
  if (C.zf) goto L_11206aec;
  /* 11206ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11206ae4 call 0x11206ff0 */
  push32(0x11206ae9u); f_11206ff0();
  /* 11206ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206aec:;
  /* 11206aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11206aee jmp 0x11206bf6 */
  goto L_11206bf6;
L_11206af3:;
  /* 11206af3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206af7 jne 0x11206b10 */
  if (!C.zf) goto L_11206b10;
  /* 11206af9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206afd je 0x11206b09 */
  if (C.zf) goto L_11206b09;
  /* 11206aff push 1 */
  push32((uint32_t)(0x1u));
  /* 11206b01 call 0x11206ff0 */
  push32(0x11206b06u); f_11206ff0();
  /* 11206b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206b09:;
  /* 11206b09 push 3 */
  push32((uint32_t)(0x3u));
  /* 11206b0b call 0x11202d10 */
  push32(0x11206b10u); f_11202d10();
L_11206b10:;
  /* 11206b10 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b14 je 0x11206b22 */
  if (C.zf) goto L_11206b22;
  /* 11206b16 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b1a je 0x11206b22 */
  if (C.zf) goto L_11206b22;
  /* 11206b1c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b20 jne 0x11206b4e */
  if (!C.zf) goto L_11206b4e;
L_11206b22:;
  /* 11206b22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206b25 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11206b28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11206b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206b2e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11206b35 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b39 jne 0x11206b4e */
  if (!C.zf) goto L_11206b4e;
  /* 11206b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206b3e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11206b41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11206b44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206b47 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11206b4e:;
  /* 11206b4e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b52 jne 0x11206b90 */
  if (!C.zf) goto L_11206b90;
  /* 11206b54 mov eax, dword ptr [0x1122dc78] */
  EAX = (r32((uint32_t)(0x1122dc78)));
  /* 11206b59 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11206b5c jmp 0x11206b67 */
  goto L_11206b67;
L_11206b5e:;
  /* 11206b5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11206b61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206b64 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11206b67:;
  /* 11206b67 mov edx, dword ptr [0x1122dc78] */
  EDX = (r32((uint32_t)(0x1122dc78)));
  /* 11206b6d add edx, dword ptr [0x1122dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206b73 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b76 jge 0x11206b8e */
  if ((C.sf==C.of)) goto L_11206b8e;
  /* 11206b78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11206b7b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11206b7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206b81 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11206b84 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11206b8c jmp 0x11206b5e */
  goto L_11206b5e;
L_11206b8e:;
  /* 11206b8e jmp 0x11206b99 */
  goto L_11206b99;
L_11206b90:;
  /* 11206b90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11206b93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11206b99:;
  /* 11206b99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206b9d je 0x11206ba9 */
  if (C.zf) goto L_11206ba9;
  /* 11206b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11206ba1 call 0x11206ff0 */
  push32(0x11206ba6u); f_11206ff0();
  /* 11206ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206ba9:;
  /* 11206ba9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206bad jne 0x11206bc0 */
  if (!C.zf) goto L_11206bc0;
  /* 11206baf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206bb2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11206bb5 push edx */
  push32((uint32_t)(EDX));
  /* 11206bb6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11206bb8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11206bbbu);
  /* 11206bbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206bbe jmp 0x11206bca */
  goto L_11206bca;
L_11206bc0:;
  /* 11206bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206bc3 push eax */
  push32((uint32_t)(EAX));
  /* 11206bc4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11206bc7u);
  /* 11206bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206bca:;
  /* 11206bca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206bce je 0x11206bdc */
  if (C.zf) goto L_11206bdc;
  /* 11206bd0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206bd4 je 0x11206bdc */
  if (C.zf) goto L_11206bdc;
  /* 11206bd6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206bda jne 0x11206bf4 */
  if (!C.zf) goto L_11206bf4;
L_11206bdc:;
  /* 11206bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206bdf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11206be2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11206be5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206be9 jne 0x11206bf4 */
  if (!C.zf) goto L_11206bf4;
  /* 11206beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206bee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206bf1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11206bf4:;
  /* 11206bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11206bf6:;
  /* 11206bf6 mov esp, ebp */
  ESP = (EBP);
  /* 11206bf8 pop ebp */
  EBP = (pop32());
  /* 11206bf9 ret  */
  ESPCHK(0x112069f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x11206c30 (91 bytes, 35 insns) */
void f_11206c30(void) {
  FTRACE(0x11206c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11206c31 mov ebp, esp */
  EBP = (ESP);
  /* 11206c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11206c34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206c37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11206c3a:;
  /* 11206c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206c3d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11206c40 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206c43 je 0x11206c63 */
  if (C.zf) goto L_11206c63;
  /* 11206c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206c48 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206c4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11206c4e mov ecx, dword ptr [0x1122dc84] */
  ECX = (r32((uint32_t)(0x1122dc84)));
  /* 11206c54 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11206c57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206c5a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206c5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206c5f jae 0x11206c63 */
  if (!C.cf) goto L_11206c63;
  /* 11206c61 jmp 0x11206c3a */
  goto L_11206c3a;
L_11206c63:;
  /* 11206c63 mov eax, dword ptr [0x1122dc84] */
  EAX = (r32((uint32_t)(0x1122dc84)));
  /* 11206c68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11206c6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206c6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206c70 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206c73 jae 0x11206c85 */
  if (!C.cf) goto L_11206c85;
  /* 11206c75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206c78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11206c7b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206c7e jne 0x11206c85 */
  if (!C.zf) goto L_11206c85;
  /* 11206c80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206c83 jmp 0x11206c87 */
  goto L_11206c87;
L_11206c85:;
  /* 11206c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11206c87:;
  /* 11206c87 mov esp, ebp */
  ESP = (EBP);
  /* 11206c89 pop ebp */
  EBP = (pop32());
  /* 11206c8a ret  */
  ESPCHK(0x11206c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x11206c90 (13 bytes, 6 insns) */
void f_11206c90(void) {
  FTRACE(0x11206c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11206c91 mov ebp, esp */
  EBP = (ESP);
  /* 11206c93 call 0x11202f90 */
  push32(0x11206c98u); f_11202f90();
  /* 11206c98 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206c9b pop ebp */
  EBP = (pop32());
  /* 11206c9c ret  */
  ESPCHK(0x11206c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x11206ca0 (13 bytes, 6 insns) */
void f_11206ca0(void) {
  FTRACE(0x11206ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11206ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11206ca3 call 0x11202f90 */
  push32(0x11206ca8u); f_11202f90();
  /* 11206ca8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206cab pop ebp */
  EBP = (pop32());
  /* 11206cac ret  */
  ESPCHK(0x11206ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x11206cb0 (187 bytes, 54 insns) */
void f_11206cb0(void) {
  FTRACE(0x11206cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11206cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11206cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11206cb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11206cbd cmp dword ptr [0x1122f5d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206cc4 jne 0x11206d23 */
  if (!C.zf) goto L_11206d23;
  /* 11206cc6 push 0x1122a2b0 */
  push32((uint32_t)(0x1122a2b0u));
  /* 11206ccb call dword ptr [0x11231314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231314))), 0x11206cd1u);
  /* 11206cd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11206cd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206cd8 je 0x11206cf7 */
  if (C.zf) goto L_11206cf7;
  /* 11206cda push 0x1122aeb4 */
  push32((uint32_t)(0x1122aeb4u));
  /* 11206cdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206ce2 push eax */
  push32((uint32_t)(EAX));
  /* 11206ce3 call dword ptr [0x11231310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231310))), 0x11206ce9u);
  /* 11206ce9 mov dword ptr [0x1122f5d0], eax */
  w32((uint32_t)(0x1122f5d0), (EAX));
  /* 11206cee cmp dword ptr [0x1122f5d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206cf5 jne 0x11206cfb */
  if (!C.zf) goto L_11206cfb;
L_11206cf7:;
  /* 11206cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11206cf9 jmp 0x11206d67 */
  goto L_11206d67;
L_11206cfb:;
  /* 11206cfb push 0x1122aea4 */
  push32((uint32_t)(0x1122aea4u));
  /* 11206d00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11206d04 call dword ptr [0x11231310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231310))), 0x11206d0au);
  /* 11206d0a mov dword ptr [0x1122f5d4], eax */
  w32((uint32_t)(0x1122f5d4), (EAX));
  /* 11206d0f push 0x1122ae90 */
  push32((uint32_t)(0x1122ae90u));
  /* 11206d14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11206d17 push edx */
  push32((uint32_t)(EDX));
  /* 11206d18 call dword ptr [0x11231310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231310))), 0x11206d1eu);
  /* 11206d1e mov dword ptr [0x1122f5d8], eax */
  w32((uint32_t)(0x1122f5d8), (EAX));
L_11206d23:;
  /* 11206d23 cmp dword ptr [0x1122f5d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206d2a je 0x11206d35 */
  if (C.zf) goto L_11206d35;
  /* 11206d2c call dword ptr [0x1122f5d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f5d4))), 0x11206d32u);
  /* 11206d32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11206d35:;
  /* 11206d35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206d39 je 0x11206d51 */
  if (C.zf) goto L_11206d51;
  /* 11206d3b cmp dword ptr [0x1122f5d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f5d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206d42 je 0x11206d51 */
  if (C.zf) goto L_11206d51;
  /* 11206d44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206d47 push eax */
  push32((uint32_t)(EAX));
  /* 11206d48 call dword ptr [0x1122f5d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f5d8))), 0x11206d4eu);
  /* 11206d4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11206d51:;
  /* 11206d51 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11206d54 push ecx */
  push32((uint32_t)(ECX));
  /* 11206d55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11206d58 push edx */
  push32((uint32_t)(EDX));
  /* 11206d59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206d5c push eax */
  push32((uint32_t)(EAX));
  /* 11206d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206d60 push ecx */
  push32((uint32_t)(ECX));
  /* 11206d61 call dword ptr [0x1122f5d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f5d0))), 0x11206d67u);
L_11206d67:;
  /* 11206d67 mov esp, ebp */
  ESP = (EBP);
  /* 11206d69 pop ebp */
  EBP = (pop32());
  /* 11206d6a ret  */
  ESPCHK(0x11206cb0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11206d70 (254 bytes, 109 insns) */
void f_11206d70(void) {
  FTRACE(0x11206d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206d70 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11206d74 push edi */
  push32((uint32_t)(EDI));
  /* 11206d75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11206d77 je 0x11206df3 */
  if (C.zf) goto L_11206df3;
  /* 11206d79 push esi */
  push32((uint32_t)(ESI));
  /* 11206d7a push ebx */
  push32((uint32_t)(EBX));
  /* 11206d7b mov ebx, ecx */
  EBX = (ECX);
  /* 11206d7d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11206d81 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11206d87 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11206d8b jne 0x11206d94 */
  if (!C.zf) goto L_11206d94;
  /* 11206d8d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11206d90 jne 0x11206e01 */
  if (!C.zf) goto L_11206e01;
  /* 11206d92 jmp 0x11206db5 */
  goto L_11206db5;
L_11206d94:;
  /* 11206d94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11206d96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11206d97 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11206d99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11206d9a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11206d9b je 0x11206dc2 */
  if (C.zf) goto L_11206dc2;
  /* 11206d9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11206d9f je 0x11206dca */
  if (C.zf) goto L_11206dca;
  /* 11206da1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11206da7 jne 0x11206d94 */
  if (!C.zf) goto L_11206d94;
  /* 11206da9 mov ebx, ecx */
  EBX = (ECX);
  /* 11206dab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11206dae jne 0x11206e01 */
  if (!C.zf) goto L_11206e01;
L_11206db0:;
  /* 11206db0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11206db3 je 0x11206dc2 */
  if (C.zf) goto L_11206dc2;
L_11206db5:;
  /* 11206db5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11206db7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11206db8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11206dba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11206dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11206dbd je 0x11206dee */
  if (C.zf) goto L_11206dee;
  /* 11206dbf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11206dc0 jne 0x11206db5 */
  if (!C.zf) goto L_11206db5;
L_11206dc2:;
  /* 11206dc2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11206dc6 pop ebx */
  EBX = (pop32());
  /* 11206dc7 pop esi */
  ESI = (pop32());
  /* 11206dc8 pop edi */
  EDI = (pop32());
  /* 11206dc9 ret  */
  ESPCHK(0x11206d70u, _esp0);
  ESP += 4; return;
L_11206dca:;
  /* 11206dca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11206dd0 je 0x11206de4 */
  if (C.zf) goto L_11206de4;
L_11206dd2:;
  /* 11206dd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11206dd4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11206dd5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11206dd6 je 0x11206e66 */
  if (C.zf) goto L_11206e66;
  /* 11206ddc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11206de2 jne 0x11206dd2 */
  if (!C.zf) goto L_11206dd2;
L_11206de4:;
  /* 11206de4 mov ebx, ecx */
  EBX = (ECX);
  /* 11206de6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11206de9 jne 0x11206e57 */
  if (!C.zf) goto L_11206e57;
L_11206deb:;
  /* 11206deb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11206ded inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11206dee:;
  /* 11206dee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11206def jne 0x11206deb */
  if (!C.zf) goto L_11206deb;
  /* 11206df1 pop ebx */
  EBX = (pop32());
  /* 11206df2 pop esi */
  ESI = (pop32());
L_11206df3:;
  /* 11206df3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11206df7 pop edi */
  EDI = (pop32());
  /* 11206df8 ret  */
  ESPCHK(0x11206d70u, _esp0);
  ESP += 4; return;
L_11206df9:;
  /* 11206df9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11206dfb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11206dfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11206dff je 0x11206db0 */
  if (C.zf) goto L_11206db0;
L_11206e01:;
  /* 11206e01 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11206e06 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11206e08 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206e0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11206e0d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11206e0f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11206e11 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11206e14 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11206e19 je 0x11206df9 */
  if (C.zf) goto L_11206df9;
  /* 11206e1b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11206e1d je 0x11206e4b */
  if (C.zf) goto L_11206e4b;
  /* 11206e1f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11206e21 je 0x11206e41 */
  if (C.zf) goto L_11206e41;
  /* 11206e23 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11206e29 je 0x11206e37 */
  if (C.zf) goto L_11206e37;
  /* 11206e2b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11206e31 jne 0x11206df9 */
  if (!C.zf) goto L_11206df9;
  /* 11206e33 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11206e35 jmp 0x11206e4f */
  goto L_11206e4f;
L_11206e37:;
  /* 11206e37 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11206e3d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11206e3f jmp 0x11206e4f */
  goto L_11206e4f;
L_11206e41:;
  /* 11206e41 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11206e47 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11206e49 jmp 0x11206e4f */
  goto L_11206e4f;
L_11206e4b:;
  /* 11206e4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11206e4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11206e4f:;
  /* 11206e4f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11206e52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11206e54 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11206e55 je 0x11206e61 */
  if (C.zf) goto L_11206e61;
L_11206e57:;
  /* 11206e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11206e59:;
  /* 11206e59 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11206e5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11206e5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11206e5f jne 0x11206e59 */
  if (!C.zf) goto L_11206e59;
L_11206e61:;
  /* 11206e61 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11206e64 jne 0x11206deb */
  if (!C.zf) goto L_11206deb;
L_11206e66:;
  /* 11206e66 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11206e6a pop ebx */
  EBX = (pop32());
  /* 11206e6b pop esi */
  ESI = (pop32());
  /* 11206e6c pop edi */
  EDI = (pop32());
  /* 11206e6d ret  */
  ESPCHK(0x11206d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e70 @ 0x11206e70 (55 bytes, 16 insns) */
void f_11206e70(void) {
  FTRACE(0x11206e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11206e71 mov ebp, esp */
  EBP = (ESP);
  /* 11206e73 mov eax, dword ptr [0x1122db84] */
  EAX = (r32((uint32_t)(0x1122db84)));
  /* 11206e78 push eax */
  push32((uint32_t)(EAX));
  /* 11206e79 call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x11206e7fu);
  /* 11206e7f mov ecx, dword ptr [0x1122db74] */
  ECX = (r32((uint32_t)(0x1122db74)));
  /* 11206e85 push ecx */
  push32((uint32_t)(ECX));
  /* 11206e86 call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x11206e8cu);
  /* 11206e8c mov edx, dword ptr [0x1122db64] */
  EDX = (r32((uint32_t)(0x1122db64)));
  /* 11206e92 push edx */
  push32((uint32_t)(EDX));
  /* 11206e93 call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x11206e99u);
  /* 11206e99 mov eax, dword ptr [0x1122db44] */
  EAX = (r32((uint32_t)(0x1122db44)));
  /* 11206e9e push eax */
  push32((uint32_t)(EAX));
  /* 11206e9f call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x11206ea5u);
  /* 11206ea5 pop ebp */
  EBP = (pop32());
  /* 11206ea6 ret  */
  ESPCHK(0x11206e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x11206eb0 (159 bytes, 47 insns) */
void f_11206eb0(void) {
  FTRACE(0x11206eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11206eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11206eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11206eb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11206ebb jmp 0x11206ec6 */
  goto L_11206ec6;
L_11206ebd:;
  /* 11206ebd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206ec0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11206ec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11206ec6:;
  /* 11206ec6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206eca jge 0x11206f19 */
  if ((C.sf==C.of)) goto L_11206f19;
  /* 11206ecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206ecf cmp dword ptr [ecx*4 + 0x1122db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1122db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206ed7 je 0x11206f17 */
  if (C.zf) goto L_11206f17;
  /* 11206ed9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206edd je 0x11206f17 */
  if (C.zf) goto L_11206f17;
  /* 11206edf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206ee3 je 0x11206f17 */
  if (C.zf) goto L_11206f17;
  /* 11206ee5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206ee9 je 0x11206f17 */
  if (C.zf) goto L_11206f17;
  /* 11206eeb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206eef je 0x11206f17 */
  if (C.zf) goto L_11206f17;
  /* 11206ef1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206ef4 mov eax, dword ptr [edx*4 + 0x1122db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1122db40)));
  /* 11206efb push eax */
  push32((uint32_t)(EAX));
  /* 11206efc call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x11206f02u);
  /* 11206f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11206f04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206f07 mov edx, dword ptr [ecx*4 + 0x1122db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122db40)));
  /* 11206f0e push edx */
  push32((uint32_t)(EDX));
  /* 11206f0f call 0x11203fe0 */
  push32(0x11206f14u); f_11203fe0();
  /* 11206f14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206f17:;
  /* 11206f17 jmp 0x11206ebd */
  goto L_11206ebd;
L_11206f19:;
  /* 11206f19 mov eax, dword ptr [0x1122db64] */
  EAX = (r32((uint32_t)(0x1122db64)));
  /* 11206f1e push eax */
  push32((uint32_t)(EAX));
  /* 11206f1f call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x11206f25u);
  /* 11206f25 mov ecx, dword ptr [0x1122db74] */
  ECX = (r32((uint32_t)(0x1122db74)));
  /* 11206f2b push ecx */
  push32((uint32_t)(ECX));
  /* 11206f2c call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x11206f32u);
  /* 11206f32 mov edx, dword ptr [0x1122db84] */
  EDX = (r32((uint32_t)(0x1122db84)));
  /* 11206f38 push edx */
  push32((uint32_t)(EDX));
  /* 11206f39 call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x11206f3fu);
  /* 11206f3f mov eax, dword ptr [0x1122db44] */
  EAX = (r32((uint32_t)(0x1122db44)));
  /* 11206f44 push eax */
  push32((uint32_t)(EAX));
  /* 11206f45 call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x11206f4bu);
  /* 11206f4b mov esp, ebp */
  ESP = (EBP);
  /* 11206f4d pop ebp */
  EBP = (pop32());
  /* 11206f4e ret  */
  ESPCHK(0x11206eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x11206f50 (151 bytes, 46 insns) */
void f_11206f50(void) {
  FTRACE(0x11206f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11206f51 mov ebp, esp */
  EBP = (ESP);
  /* 11206f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11206f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206f57 cmp dword ptr [eax*4 + 0x1122db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1122db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206f5f jne 0x11206fd2 */
  if (!C.zf) goto L_11206fd2;
  /* 11206f61 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11206f66 push 0x1122aec0 */
  push32((uint32_t)(0x1122aec0u));
  /* 11206f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11206f6d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11206f6f call 0x11203550 */
  push32(0x11206f74u); f_11203550();
  /* 11206f74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206f77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11206f7a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206f7e jne 0x11206f8a */
  if (!C.zf) goto L_11206f8a;
  /* 11206f80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11206f82 call 0x112024c0 */
  push32(0x11206f87u); f_112024c0();
  /* 11206f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206f8a:;
  /* 11206f8a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11206f8c call 0x11206f50 */
  push32(0x11206f91u); f_11206f50();
  /* 11206f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11206f94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206f97 cmp dword ptr [ecx*4 + 0x1122db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1122db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11206f9f jne 0x11206fba */
  if (!C.zf) goto L_11206fba;
  /* 11206fa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206fa4 push edx */
  push32((uint32_t)(EDX));
  /* 11206fa5 call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x11206fabu);
  /* 11206fab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206fb1 mov dword ptr [eax*4 + 0x1122db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1122db40), (ECX));
  /* 11206fb8 jmp 0x11206fc8 */
  goto L_11206fc8;
L_11206fba:;
  /* 11206fba push 2 */
  push32((uint32_t)(0x2u));
  /* 11206fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11206fbf push edx */
  push32((uint32_t)(EDX));
  /* 11206fc0 call 0x11203fe0 */
  push32(0x11206fc5u); f_11203fe0();
  /* 11206fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206fc8:;
  /* 11206fc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11206fca call 0x11206ff0 */
  push32(0x11206fcfu); f_11206ff0();
  /* 11206fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11206fd2:;
  /* 11206fd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206fd5 mov ecx, dword ptr [eax*4 + 0x1122db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122db40)));
  /* 11206fdc push ecx */
  push32((uint32_t)(ECX));
  /* 11206fdd call dword ptr [0x11231390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231390))), 0x11206fe3u);
  /* 11206fe3 mov esp, ebp */
  ESP = (EBP);
  /* 11206fe5 pop ebp */
  EBP = (pop32());
  /* 11206fe6 ret  */
  ESPCHK(0x11206f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x11206ff0 (22 bytes, 8 insns) */
void f_11206ff0(void) {
  FTRACE(0x11206ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11206ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11206ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11206ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11206ff6 mov ecx, dword ptr [eax*4 + 0x1122db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122db40)));
  /* 11206ffd push ecx */
  push32((uint32_t)(ECX));
  /* 11206ffe call dword ptr [0x11231394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231394))), 0x11207004u);
  /* 11207004 pop ebp */
  EBP = (pop32());
  /* 11207005 ret  */
  ESPCHK(0x11206ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007010 @ 0x11207010 (26 bytes, 10 insns) */
void f_11207010(void) {
  FTRACE(0x11207010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207010 push ebp */
  push32((uint32_t)(EBP));
  /* 11207011 mov ebp, esp */
  EBP = (ESP);
  /* 11207013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207016 push eax */
  push32((uint32_t)(EAX));
  /* 11207017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11207019 call dword ptr [0x11231398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231398))), 0x1120701fu);
  /* 1120701f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11207024 call dword ptr [0x11231320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231320))), 0x1120702au);
  /* 1120702a pop ebp */
  EBP = (pop32());
  /* 1120702b ret  */
  ESPCHK(0x11207010u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11207030 (446 bytes, 130 insns) */
void f_11207030(void) {
  FTRACE(0x11207030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207030 push ebp */
  push32((uint32_t)(EBP));
  /* 11207031 mov ebp, esp */
  EBP = (ESP);
  /* 11207033 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207036 call 0x11202f90 */
  push32(0x1120703bu); f_11202f90();
  /* 1120703b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120703e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207041 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11207044 push ecx */
  push32((uint32_t)(ECX));
  /* 11207045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207048 push edx */
  push32((uint32_t)(EDX));
  /* 11207049 call 0x112071f0 */
  push32(0x1120704eu); f_112071f0();
  /* 1120704e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207051 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11207054 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207058 je 0x11207063 */
  if (C.zf) goto L_11207063;
  /* 1120705a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120705d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207061 jne 0x11207072 */
  if (!C.zf) goto L_11207072;
L_11207063:;
  /* 11207063 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207066 push ecx */
  push32((uint32_t)(ECX));
  /* 11207067 call dword ptr [0x11231344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231344))), 0x1120706du);
  /* 1120706d jmp 0x112071ea */
  goto L_112071ea;
L_11207072:;
  /* 11207072 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11207075 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207079 jne 0x1120708f */
  if (!C.zf) goto L_1120708f;
  /* 1120707b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120707e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11207085 mov eax, 1 */
  EAX = (0x1u);
  /* 1120708a jmp 0x112071ea */
  goto L_112071ea;
L_1120708f:;
  /* 1120708f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11207092 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207096 jne 0x112070a0 */
  if (!C.zf) goto L_112070a0;
  /* 11207098 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120709b jmp 0x112071ea */
  goto L_112071ea;
L_112070a0:;
  /* 112070a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112070a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112070a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112070a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112070ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 112070af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112070b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112070b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112070b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 112070bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112070be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112070c2 jne 0x112071c7 */
  if (!C.zf) goto L_112071c7;
  /* 112070c8 mov eax, dword ptr [0x1122dc78] */
  EAX = (r32((uint32_t)(0x1122dc78)));
  /* 112070cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112070d0 jmp 0x112070db */
  goto L_112070db;
L_112070d2:;
  /* 112070d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112070d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112070d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112070db:;
  /* 112070db mov edx, dword ptr [0x1122dc78] */
  EDX = (r32((uint32_t)(0x1122dc78)));
  /* 112070e1 add edx, dword ptr [0x1122dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112070e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112070ea jge 0x11207102 */
  if ((C.sf==C.of)) goto L_11207102;
  /* 112070ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112070ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112070f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112070f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112070f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11207100 jmp 0x112070d2 */
  goto L_112070d2;
L_11207102:;
  /* 11207102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207105 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11207108 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120710b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120710e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207114 jne 0x11207125 */
  if (!C.zf) goto L_11207125;
  /* 11207116 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207119 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11207120 jmp 0x112071ad */
  goto L_112071ad;
L_11207125:;
  /* 11207125 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11207128 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120712e jne 0x1120713c */
  if (!C.zf) goto L_1120713c;
  /* 11207130 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207133 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1120713a jmp 0x112071ad */
  goto L_112071ad;
L_1120713c:;
  /* 1120713c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120713f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207145 jne 0x11207153 */
  if (!C.zf) goto L_11207153;
  /* 11207147 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120714a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11207151 jmp 0x112071ad */
  goto L_112071ad;
L_11207153:;
  /* 11207153 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11207156 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120715c jne 0x1120716a */
  if (!C.zf) goto L_1120716a;
  /* 1120715e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207161 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11207168 jmp 0x112071ad */
  goto L_112071ad;
L_1120716a:;
  /* 1120716a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120716d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207173 jne 0x11207181 */
  if (!C.zf) goto L_11207181;
  /* 11207175 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207178 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1120717f jmp 0x112071ad */
  goto L_112071ad;
L_11207181:;
  /* 11207181 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11207184 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120718a jne 0x11207198 */
  if (!C.zf) goto L_11207198;
  /* 1120718c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120718f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11207196 jmp 0x112071ad */
  goto L_112071ad;
L_11207198:;
  /* 11207198 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120719b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112071a1 jne 0x112071ad */
  if (!C.zf) goto L_112071ad;
  /* 112071a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112071a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_112071ad:;
  /* 112071ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112071b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 112071b3 push edx */
  push32((uint32_t)(EDX));
  /* 112071b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 112071b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112071b9u);
  /* 112071b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112071bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112071bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112071c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 112071c5 jmp 0x112071de */
  goto L_112071de;
L_112071c7:;
  /* 112071c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112071ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 112071d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112071d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112071d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112071d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112071dbu);
  /* 112071db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112071de:;
  /* 112071de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112071e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112071e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 112071e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112071ea:;
  /* 112071ea mov esp, ebp */
  ESP = (EBP);
  /* 112071ec pop ebp */
  EBP = (pop32());
  /* 112071ed ret  */
  ESPCHK(0x11207030u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x112071f0 (89 bytes, 35 insns) */
void f_112071f0(void) {
  FTRACE(0x112071f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112071f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112071f1 mov ebp, esp */
  EBP = (ESP);
  /* 112071f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112071f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112071f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112071fa:;
  /* 112071fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112071fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112071ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207202 je 0x11207222 */
  if (C.zf) goto L_11207222;
  /* 11207204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207207 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120720a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120720d mov ecx, dword ptr [0x1122dc84] */
  ECX = (r32((uint32_t)(0x1122dc84)));
  /* 11207213 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11207216 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207219 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120721b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120721e jae 0x11207222 */
  if (!C.cf) goto L_11207222;
  /* 11207220 jmp 0x112071fa */
  goto L_112071fa;
L_11207222:;
  /* 11207222 mov eax, dword ptr [0x1122dc84] */
  EAX = (r32((uint32_t)(0x1122dc84)));
  /* 11207227 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120722a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120722d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120722f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207232 jae 0x1120723e */
  if (!C.cf) goto L_1120723e;
  /* 11207234 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207237 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11207239 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120723c je 0x11207242 */
  if (C.zf) goto L_11207242;
L_1120723e:;
  /* 1120723e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11207240 jmp 0x11207245 */
  goto L_11207245;
L_11207242:;
  /* 11207242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11207245:;
  /* 11207245 mov esp, ebp */
  ESP = (EBP);
  /* 11207247 pop ebp */
  EBP = (pop32());
  /* 11207248 ret  */
  ESPCHK(0x112071f0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11207250 (48 bytes, 17 insns) */
void f_11207250(void) {
  FTRACE(0x11207250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207250 push ebp */
  push32((uint32_t)(EBP));
  /* 11207251 mov ebp, esp */
  EBP = (ESP);
  /* 11207253 push ecx */
  push32((uint32_t)(ECX));
  /* 11207254 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207256 call 0x11206f50 */
  push32(0x1120725bu); f_11206f50();
  /* 1120725b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120725e mov eax, dword ptr [0x1122f644] */
  EAX = (r32((uint32_t)(0x1122f644)));
  /* 11207263 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11207266 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207269 mov dword ptr [0x1122f644], ecx */
  w32((uint32_t)(0x1122f644), (ECX));
  /* 1120726f push 9 */
  push32((uint32_t)(0x9u));
  /* 11207271 call 0x11206ff0 */
  push32(0x11207276u); f_11206ff0();
  /* 11207276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120727c mov esp, ebp */
  ESP = (EBP);
  /* 1120727e pop ebp */
  EBP = (pop32());
  /* 1120727f ret  */
  ESPCHK(0x11207250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x11207280 (10 bytes, 5 insns) */
void f_11207280(void) {
  FTRACE(0x11207280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207280 push ebp */
  push32((uint32_t)(EBP));
  /* 11207281 mov ebp, esp */
  EBP = (ESP);
  /* 11207283 mov eax, dword ptr [0x1122f644] */
  EAX = (r32((uint32_t)(0x1122f644)));
  /* 11207288 pop ebp */
  EBP = (pop32());
  /* 11207289 ret  */
  ESPCHK(0x11207280u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11207290 (45 bytes, 19 insns) */
void f_11207290(void) {
  FTRACE(0x11207290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207290 push ebp */
  push32((uint32_t)(EBP));
  /* 11207291 mov ebp, esp */
  EBP = (ESP);
  /* 11207293 push ecx */
  push32((uint32_t)(ECX));
  /* 11207294 mov eax, dword ptr [0x1122f644] */
  EAX = (r32((uint32_t)(0x1122f644)));
  /* 11207299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120729c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112072a0 je 0x112072b0 */
  if (C.zf) goto L_112072b0;
  /* 112072a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112072a5 push ecx */
  push32((uint32_t)(ECX));
  /* 112072a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112072a9u);
  /* 112072a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112072ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112072ae jne 0x112072b4 */
  if (!C.zf) goto L_112072b4;
L_112072b0:;
  /* 112072b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112072b2 jmp 0x112072b9 */
  goto L_112072b9;
L_112072b4:;
  /* 112072b4 mov eax, 1 */
  EAX = (0x1u);
L_112072b9:;
  /* 112072b9 mov esp, ebp */
  ESP = (EBP);
  /* 112072bb pop ebp */
  EBP = (pop32());
  /* 112072bc ret  */
  ESPCHK(0x11207290u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x112072c0 (88 bytes, 40 insns) */
void f_112072c0(void) {
  FTRACE(0x112072c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112072c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 112072c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112072c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112072ca je 0x11207313 */
  if (C.zf) goto L_11207313;
  /* 112072cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112072ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 112072d2 push edi */
  push32((uint32_t)(EDI));
  /* 112072d3 mov edi, ecx */
  EDI = (ECX);
  /* 112072d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112072d8 jb 0x11207307 */
  if (C.cf) goto L_11207307;
  /* 112072da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112072dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112072df je 0x112072e9 */
  if (C.zf) goto L_112072e9;
  /* 112072e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_112072e3:;
  /* 112072e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112072e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112072e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112072e7 jne 0x112072e3 */
  if (!C.zf) goto L_112072e3;
L_112072e9:;
  /* 112072e9 mov ecx, eax */
  ECX = (EAX);
  /* 112072eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112072ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112072f0 mov ecx, eax */
  ECX = (EAX);
  /* 112072f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112072f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112072f7 mov ecx, edx */
  ECX = (EDX);
  /* 112072f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112072fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112072ff je 0x11207307 */
  if (C.zf) goto L_11207307;
  /* 11207301 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11207303 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11207305 je 0x1120730d */
  if (C.zf) goto L_1120730d;
L_11207307:;
  /* 11207307 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11207309 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1120730a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1120730b jne 0x11207307 */
  if (!C.zf) goto L_11207307;
L_1120730d:;
  /* 1120730d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11207311 pop edi */
  EDI = (pop32());
  /* 11207312 ret  */
  ESPCHK(0x112072c0u, _esp0);
  ESP += 4; return;
L_11207313:;
  /* 11207313 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11207317 ret  */
  ESPCHK(0x112072c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x11207320 (23 bytes, 10 insns) */
void f_11207320(void) {
  FTRACE(0x11207320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207320 push ebp */
  push32((uint32_t)(EBP));
  /* 11207321 mov ebp, esp */
  EBP = (ESP);
  /* 11207323 mov eax, dword ptr [0x1122f640] */
  EAX = (r32((uint32_t)(0x1122f640)));
  /* 11207328 push eax */
  push32((uint32_t)(EAX));
  /* 11207329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120732c push ecx */
  push32((uint32_t)(ECX));
  /* 1120732d call 0x11207340 */
  push32(0x11207332u); f_11207340();
  /* 11207332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207335 pop ebp */
  EBP = (pop32());
  /* 11207336 ret  */
  ESPCHK(0x11207320u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11207340 (87 bytes, 34 insns) */
void f_11207340(void) {
  FTRACE(0x11207340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207340 push ebp */
  push32((uint32_t)(EBP));
  /* 11207341 mov ebp, esp */
  EBP = (ESP);
  /* 11207343 push ecx */
  push32((uint32_t)(ECX));
  /* 11207344 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207348 jbe 0x1120734e */
  if ((C.cf||C.zf)) goto L_1120734e;
  /* 1120734a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120734c jmp 0x11207393 */
  goto L_11207393;
L_1120734e:;
  /* 1120734e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207352 ja 0x11207365 */
  if ((!C.cf&&!C.zf)) goto L_11207365;
  /* 11207354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207357 push eax */
  push32((uint32_t)(EAX));
  /* 11207358 call 0x112073a0 */
  push32(0x1120735du); f_112073a0();
  /* 1120735d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207360 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11207363 jmp 0x1120736c */
  goto L_1120736c;
L_11207365:;
  /* 11207365 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1120736c:;
  /* 1120736c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207370 jne 0x11207378 */
  if (!C.zf) goto L_11207378;
  /* 11207372 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207376 jne 0x1120737d */
  if (!C.zf) goto L_1120737d;
L_11207378:;
  /* 11207378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120737b jmp 0x11207393 */
  goto L_11207393;
L_1120737d:;
  /* 1120737d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207380 push ecx */
  push32((uint32_t)(ECX));
  /* 11207381 call 0x11207290 */
  push32(0x11207386u); f_11207290();
  /* 11207386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120738b jne 0x11207391 */
  if (!C.zf) goto L_11207391;
  /* 1120738d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120738f jmp 0x11207393 */
  goto L_11207393;
L_11207391:;
  /* 11207391 jmp 0x1120734e */
  goto L_1120734e;
L_11207393:;
  /* 11207393 mov esp, ebp */
  ESP = (EBP);
  /* 11207395 pop ebp */
  EBP = (pop32());
  /* 11207396 ret  */
  ESPCHK(0x11207340u, _esp0);
  ESP += 4; return;
}

/* FUN_100073a0 @ 0x112073a0 (109 bytes, 37 insns) */
void f_112073a0(void) {
  FTRACE(0x112073a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112073a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112073a1 mov ebp, esp */
  EBP = (ESP);
  /* 112073a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112073a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112073a7 cmp eax, dword ptr [0x1122dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112073ad ja 0x112073dd */
  if ((!C.cf&&!C.zf)) goto L_112073dd;
  /* 112073af push 9 */
  push32((uint32_t)(0x9u));
  /* 112073b1 call 0x11206f50 */
  push32(0x112073b6u); f_11206f50();
  /* 112073b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112073b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112073bc push ecx */
  push32((uint32_t)(ECX));
  /* 112073bd call 0x11207ee0 */
  push32(0x112073c2u); f_11207ee0();
  /* 112073c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112073c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112073c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 112073ca call 0x11206ff0 */
  push32(0x112073cfu); f_11206ff0();
  /* 112073cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112073d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112073d6 je 0x112073dd */
  if (C.zf) goto L_112073dd;
  /* 112073d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112073db jmp 0x11207409 */
  goto L_11207409;
L_112073dd:;
  /* 112073dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112073e1 jne 0x112073ea */
  if (!C.zf) goto L_112073ea;
  /* 112073e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_112073ea:;
  /* 112073ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112073ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112073f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 112073f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112073f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112073f9 push eax */
  push32((uint32_t)(EAX));
  /* 112073fa push 0 */
  push32((uint32_t)(0x0u));
  /* 112073fc mov ecx, dword ptr [0x11230e0c] */
  ECX = (r32((uint32_t)(0x11230e0c)));
  /* 11207402 push ecx */
  push32((uint32_t)(ECX));
  /* 11207403 call dword ptr [0x112312f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312f0))), 0x11207409u);
L_11207409:;
  /* 11207409 mov esp, ebp */
  ESP = (EBP);
  /* 1120740b pop ebp */
  EBP = (pop32());
  /* 1120740c ret  */
  ESPCHK(0x112073a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x11207410 (10 bytes, 5 insns) */
void f_11207410(void) {
  FTRACE(0x11207410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207410 push ebp */
  push32((uint32_t)(EBP));
  /* 11207411 mov ebp, esp */
  EBP = (ESP);
  /* 11207413 mov eax, 1 */
  EAX = (0x1u);
  /* 11207418 pop ebp */
  EBP = (pop32());
  /* 11207419 ret  */
  ESPCHK(0x11207410u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x11207420 (173 bytes, 59 insns) */
void f_11207420(void) {
  FTRACE(0x11207420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207420 push ebp */
  push32((uint32_t)(EBP));
  /* 11207421 mov ebp, esp */
  EBP = (ESP);
  /* 11207423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207426 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120742a jbe 0x11207433 */
  if ((C.cf||C.zf)) goto L_11207433;
  /* 1120742c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120742e jmp 0x112074c9 */
  goto L_112074c9;
L_11207433:;
  /* 11207433 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207435 call 0x11206f50 */
  push32(0x1120743au); f_11206f50();
  /* 1120743a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120743d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207440 push eax */
  push32((uint32_t)(EAX));
  /* 11207441 call 0x11207850 */
  push32(0x11207446u); f_11207850();
  /* 11207446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207449 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120744c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207450 je 0x11207491 */
  if (C.zf) goto L_11207491;
  /* 11207452 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11207459 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120745c cmp ecx, dword ptr [0x1122dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207462 ja 0x11207482 */
  if ((!C.cf&&!C.zf)) goto L_11207482;
  /* 11207464 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207467 push edx */
  push32((uint32_t)(EDX));
  /* 11207468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120746b push eax */
  push32((uint32_t)(EAX));
  /* 1120746c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120746f push ecx */
  push32((uint32_t)(ECX));
  /* 11207470 call 0x11208720 */
  push32(0x11207475u); f_11208720();
  /* 11207475 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120747a je 0x11207482 */
  if (C.zf) goto L_11207482;
  /* 1120747c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120747f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11207482:;
  /* 11207482 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207484 call 0x11206ff0 */
  push32(0x11207489u); f_11206ff0();
  /* 11207489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120748c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120748f jmp 0x112074c9 */
  goto L_112074c9;
L_11207491:;
  /* 11207491 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207493 call 0x11206ff0 */
  push32(0x11207498u); f_11206ff0();
  /* 11207498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120749b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120749f jne 0x112074a8 */
  if (!C.zf) goto L_112074a8;
  /* 112074a1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_112074a8:;
  /* 112074a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112074ab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112074ae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 112074b0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112074b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112074b6 push ecx */
  push32((uint32_t)(ECX));
  /* 112074b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112074ba push edx */
  push32((uint32_t)(EDX));
  /* 112074bb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112074bd mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 112074c2 push eax */
  push32((uint32_t)(EAX));
  /* 112074c3 call dword ptr [0x112312ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312ec))), 0x112074c9u);
L_112074c9:;
  /* 112074c9 mov esp, ebp */
  ESP = (EBP);
  /* 112074cb pop ebp */
  EBP = (pop32());
  /* 112074cc ret  */
  ESPCHK(0x11207420u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x112074d0 (490 bytes, 165 insns) */
void f_112074d0(void) {
  FTRACE(0x112074d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112074d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112074d1 mov ebp, esp */
  EBP = (ESP);
  /* 112074d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112074d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112074da jne 0x112074ed */
  if (!C.zf) goto L_112074ed;
  /* 112074dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112074df push eax */
  push32((uint32_t)(EAX));
  /* 112074e0 call 0x11207320 */
  push32(0x112074e5u); f_11207320();
  /* 112074e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112074e8 jmp 0x112076b6 */
  goto L_112076b6;
L_112074ed:;
  /* 112074ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112074f1 jne 0x11207506 */
  if (!C.zf) goto L_11207506;
  /* 112074f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112074f6 push ecx */
  push32((uint32_t)(ECX));
  /* 112074f7 call 0x112076c0 */
  push32(0x112074fcu); f_112076c0();
  /* 112074fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112074ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11207501 jmp 0x112076b6 */
  goto L_112076b6;
L_11207506:;
  /* 11207506 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120750d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207511 ja 0x11207689 */
  if ((!C.cf&&!C.zf)) goto L_11207689;
  /* 11207517 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207519 call 0x11206f50 */
  push32(0x1120751eu); f_11206f50();
  /* 1120751e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207524 push edx */
  push32((uint32_t)(EDX));
  /* 11207525 call 0x11207850 */
  push32(0x1120752au); f_11207850();
  /* 1120752a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120752d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11207530 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207534 je 0x1120764c */
  if (C.zf) goto L_1120764c;
  /* 1120753a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120753d cmp eax, dword ptr [0x1122dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207543 ja 0x112075c0 */
  if ((!C.cf&&!C.zf)) goto L_112075c0;
  /* 11207545 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207548 push ecx */
  push32((uint32_t)(ECX));
  /* 11207549 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120754c push edx */
  push32((uint32_t)(EDX));
  /* 1120754d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11207550 push eax */
  push32((uint32_t)(EAX));
  /* 11207551 call 0x11208720 */
  push32(0x11207556u); f_11208720();
  /* 11207556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120755b je 0x11207565 */
  if (C.zf) goto L_11207565;
  /* 1120755d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207560 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11207563 jmp 0x112075c0 */
  goto L_112075c0;
L_11207565:;
  /* 11207565 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207568 push edx */
  push32((uint32_t)(EDX));
  /* 11207569 call 0x11207ee0 */
  push32(0x1120756eu); f_11207ee0();
  /* 1120756e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207571 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11207574 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207578 je 0x112075c0 */
  if (C.zf) goto L_112075c0;
  /* 1120757a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120757d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11207580 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207583 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11207586 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207589 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120758c jae 0x11207596 */
  if (!C.cf) goto L_11207596;
  /* 1120758e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207591 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11207594 jmp 0x1120759c */
  goto L_1120759c;
L_11207596:;
  /* 11207596 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207599 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1120759c:;
  /* 1120759c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120759f push edx */
  push32((uint32_t)(EDX));
  /* 112075a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112075a3 push eax */
  push32((uint32_t)(EAX));
  /* 112075a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112075a7 push ecx */
  push32((uint32_t)(ECX));
  /* 112075a8 call 0x11209e30 */
  push32(0x112075adu); f_11209e30();
  /* 112075ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112075b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112075b3 push edx */
  push32((uint32_t)(EDX));
  /* 112075b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112075b7 push eax */
  push32((uint32_t)(EAX));
  /* 112075b8 call 0x11207910 */
  push32(0x112075bdu); f_11207910();
  /* 112075bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112075c0:;
  /* 112075c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112075c4 jne 0x11207640 */
  if (!C.zf) goto L_11207640;
  /* 112075c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112075ca jne 0x112075d3 */
  if (!C.zf) goto L_112075d3;
  /* 112075cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_112075d3:;
  /* 112075d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112075d6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112075d9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 112075dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112075df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112075e2 push edx */
  push32((uint32_t)(EDX));
  /* 112075e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112075e5 mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 112075ea push eax */
  push32((uint32_t)(EAX));
  /* 112075eb call dword ptr [0x112312f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312f0))), 0x112075f1u);
  /* 112075f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112075f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112075f8 je 0x11207640 */
  if (C.zf) goto L_11207640;
  /* 112075fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112075fd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11207600 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207603 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11207606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207609 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120760c jae 0x11207616 */
  if (!C.cf) goto L_11207616;
  /* 1120760e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207611 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11207614 jmp 0x1120761c */
  goto L_1120761c;
L_11207616:;
  /* 11207616 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207619 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1120761c:;
  /* 1120761c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120761f push eax */
  push32((uint32_t)(EAX));
  /* 11207620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207623 push ecx */
  push32((uint32_t)(ECX));
  /* 11207624 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207627 push edx */
  push32((uint32_t)(EDX));
  /* 11207628 call 0x11209e30 */
  push32(0x1120762du); f_11209e30();
  /* 1120762d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207633 push eax */
  push32((uint32_t)(EAX));
  /* 11207634 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11207637 push ecx */
  push32((uint32_t)(ECX));
  /* 11207638 call 0x11207910 */
  push32(0x1120763du); f_11207910();
  /* 1120763d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11207640:;
  /* 11207640 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207642 call 0x11206ff0 */
  push32(0x11207647u); f_11206ff0();
  /* 11207647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120764a jmp 0x11207689 */
  goto L_11207689;
L_1120764c:;
  /* 1120764c push 9 */
  push32((uint32_t)(0x9u));
  /* 1120764e call 0x11206ff0 */
  push32(0x11207653u); f_11206ff0();
  /* 11207653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207656 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120765a jne 0x11207663 */
  if (!C.zf) goto L_11207663;
  /* 1120765c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11207663:;
  /* 11207663 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207666 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207669 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1120766c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1120766f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207672 push eax */
  push32((uint32_t)(EAX));
  /* 11207673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207676 push ecx */
  push32((uint32_t)(ECX));
  /* 11207677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11207679 mov edx, dword ptr [0x11230e0c] */
  EDX = (r32((uint32_t)(0x11230e0c)));
  /* 1120767f push edx */
  push32((uint32_t)(EDX));
  /* 11207680 call dword ptr [0x112312ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312ec))), 0x11207686u);
  /* 11207686 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11207689:;
  /* 11207689 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120768d jne 0x11207698 */
  if (!C.zf) goto L_11207698;
  /* 1120768f cmp dword ptr [0x1122f640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207696 jne 0x1120769d */
  if (!C.zf) goto L_1120769d;
L_11207698:;
  /* 11207698 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120769b jmp 0x112076b6 */
  goto L_112076b6;
L_1120769d:;
  /* 1120769d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112076a0 push eax */
  push32((uint32_t)(EAX));
  /* 112076a1 call 0x11207290 */
  push32(0x112076a6u); f_11207290();
  /* 112076a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112076a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112076ab jne 0x112076b1 */
  if (!C.zf) goto L_112076b1;
  /* 112076ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112076af jmp 0x112076b6 */
  goto L_112076b6;
L_112076b1:;
  /* 112076b1 jmp 0x11207506 */
  goto L_11207506;
L_112076b6:;
  /* 112076b6 mov esp, ebp */
  ESP = (EBP);
  /* 112076b8 pop ebp */
  EBP = (pop32());
  /* 112076b9 ret  */
  ESPCHK(0x112074d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x112076c0 (104 bytes, 38 insns) */
void f_112076c0(void) {
  FTRACE(0x112076c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112076c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112076c1 mov ebp, esp */
  EBP = (ESP);
  /* 112076c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112076c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112076c8 jne 0x112076cc */
  if (!C.zf) goto L_112076cc;
  /* 112076ca jmp 0x11207724 */
  goto L_11207724;
L_112076cc:;
  /* 112076cc push 9 */
  push32((uint32_t)(0x9u));
  /* 112076ce call 0x11206f50 */
  push32(0x112076d3u); f_11206f50();
  /* 112076d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112076d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112076d9 push eax */
  push32((uint32_t)(EAX));
  /* 112076da call 0x11207850 */
  push32(0x112076dfu); f_11207850();
  /* 112076df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112076e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112076e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112076e9 je 0x11207707 */
  if (C.zf) goto L_11207707;
  /* 112076eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112076ee push ecx */
  push32((uint32_t)(ECX));
  /* 112076ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112076f2 push edx */
  push32((uint32_t)(EDX));
  /* 112076f3 call 0x11207910 */
  push32(0x112076f8u); f_11207910();
  /* 112076f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112076fb push 9 */
  push32((uint32_t)(0x9u));
  /* 112076fd call 0x11206ff0 */
  push32(0x11207702u); f_11206ff0();
  /* 11207702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207705 jmp 0x11207724 */
  goto L_11207724;
L_11207707:;
  /* 11207707 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207709 call 0x11206ff0 */
  push32(0x1120770eu); f_11206ff0();
  /* 1120770e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207714 push eax */
  push32((uint32_t)(EAX));
  /* 11207715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11207717 mov ecx, dword ptr [0x11230e0c] */
  ECX = (r32((uint32_t)(0x11230e0c)));
  /* 1120771d push ecx */
  push32((uint32_t)(ECX));
  /* 1120771e call dword ptr [0x11231384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231384))), 0x11207724u);
L_11207724:;
  /* 11207724 mov esp, ebp */
  ESP = (EBP);
  /* 11207726 pop ebp */
  EBP = (pop32());
  /* 11207727 ret  */
  ESPCHK(0x112076c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x11207730 (116 bytes, 34 insns) */
void f_11207730(void) {
  FTRACE(0x11207730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207730 push ebp */
  push32((uint32_t)(EBP));
  /* 11207731 mov ebp, esp */
  EBP = (ESP);
  /* 11207733 push ecx */
  push32((uint32_t)(ECX));
  /* 11207734 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1120773b push 9 */
  push32((uint32_t)(0x9u));
  /* 1120773d call 0x11206f50 */
  push32(0x11207742u); f_11206f50();
  /* 11207742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207745 call 0x11208e40 */
  push32(0x1120774au); f_11208e40();
  /* 1120774a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120774c jge 0x11207755 */
  if ((C.sf==C.of)) goto L_11207755;
  /* 1120774e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11207755:;
  /* 11207755 push 9 */
  push32((uint32_t)(0x9u));
  /* 11207757 call 0x11206ff0 */
  push32(0x1120775cu); f_11206ff0();
  /* 1120775c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120775f push 0 */
  push32((uint32_t)(0x0u));
  /* 11207761 push 0 */
  push32((uint32_t)(0x0u));
  /* 11207763 mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 11207768 push eax */
  push32((uint32_t)(EAX));
  /* 11207769 call dword ptr [0x11231364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231364))), 0x1120776fu);
  /* 1120776f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11207771 jne 0x1120779d */
  if (!C.zf) goto L_1120779d;
  /* 11207773 call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x11207779u);
  /* 11207779 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120777c jne 0x11207796 */
  if (!C.zf) goto L_11207796;
  /* 1120777e call 0x1120b430 */
  push32(0x11207783u); f_1120b430();
  /* 11207783 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11207789 call 0x1120b420 */
  push32(0x1120778eu); f_1120b420();
  /* 1120778e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11207794 jmp 0x1120779d */
  goto L_1120779d;
L_11207796:;
  /* 11207796 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1120779d:;
  /* 1120779d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112077a0 mov esp, ebp */
  ESP = (EBP);
  /* 112077a2 pop ebp */
  EBP = (pop32());
  /* 112077a3 ret  */
  ESPCHK(0x11207730u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x112077b0 (10 bytes, 5 insns) */
void f_112077b0(void) {
  FTRACE(0x112077b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112077b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112077b1 mov ebp, esp */
  EBP = (ESP);
  /* 112077b3 call 0x11207730 */
  push32(0x112077b8u); f_11207730();
  /* 112077b8 pop ebp */
  EBP = (pop32());
  /* 112077b9 ret  */
  ESPCHK(0x112077b0u, _esp0);
  ESP += 4; return;
}

