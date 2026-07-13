#include "recomp.h"

/* thunk_FUN_10002690 @ 0x10721005 (5 bytes, 1 insns) */
void f_10721005(void) {
  FTRACE(0x10721005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10721005 jmp 0x10722690 */
  f_10722690(); return;
}

/* OnInit @ 0x1072100a (5 bytes, 1 insns) */
void f_1072100a(void) {
  FTRACE(0x1072100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072100a jmp 0x107210a0 */
  f_107210a0(); return;
}

/* thunk_FUN_100026e0 @ 0x1072100f (5 bytes, 1 insns) */
void f_1072100f(void) {
  FTRACE(0x1072100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072100f jmp 0x107226e0 */
  f_107226e0(); return;
}

/* thunk_FUN_10001040 @ 0x10721014 (5 bytes, 1 insns) */
void f_10721014(void) {
  FTRACE(0x10721014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10721014 jmp 0x10721040 */
  f_10721040(); return;
}

/* ProcessScenary @ 0x10721019 (5 bytes, 1 insns) */
void f_10721019(void) {
  FTRACE(0x10721019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10721019 jmp 0x107214d0 */
  f_107214d0(); return;
}

/* FUN_10001040 @ 0x10721040 (67 bytes, 26 insns) */
void f_10721040(void) {
  FTRACE(0x10721040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10721040 push ebp */
  push32((uint32_t)(EBP));
  /* 10721041 mov ebp, esp */
  EBP = (ESP);
  /* 10721043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10721046 push ebx */
  push32((uint32_t)(EBX));
  /* 10721047 push esi */
  push32((uint32_t)(ESI));
  /* 10721048 push edi */
  push32((uint32_t)(EDI));
  /* 10721049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1072104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10721051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10721056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10721058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721062 je 0x10721066 */
  if (C.zf) goto L_10721066;
  /* 10721064 jmp 0x1072106b */
  goto L_1072106b;
L_10721066:;
  /* 10721066 call 0x1072100a */
  push32(0x1072106bu); f_1072100a();
L_1072106b:;
  /* 1072106b mov eax, 1 */
  EAX = (0x1u);
  /* 10721070 pop edi */
  EDI = (pop32());
  /* 10721071 pop esi */
  ESI = (pop32());
  /* 10721072 pop ebx */
  EBX = (pop32());
  /* 10721073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721078 call 0x107227f0 */
  push32(0x1072107du); f_107227f0();
  /* 1072107d mov esp, ebp */
  ESP = (EBP);
  /* 1072107f pop ebp */
  EBP = (pop32());
  /* 10721080 ret 0xc */
  ESPCHK(0x10721040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x107210a0 (847 bytes, 222 insns) */
void f_107210a0(void) {
  FTRACE(0x107210a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107210a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107210a1 mov ebp, esp */
  EBP = (ESP);
  /* 107210a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107210a6 push ebx */
  push32((uint32_t)(EBX));
  /* 107210a7 push esi */
  push32((uint32_t)(ESI));
  /* 107210a8 push edi */
  push32((uint32_t)(EDI));
  /* 107210a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107210ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107210b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107210b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107210b8 mov esi, esp */
  ESI = (ESP);
  /* 107210ba push 0x1074a118 */
  push32((uint32_t)(0x1074a118u));
  /* 107210bf push 0x1074f450 */
  push32((uint32_t)(0x1074f450u));
  /* 107210c4 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x107210cau);
  /* 107210ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107210cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107210cf call 0x107227f0 */
  push32(0x107210d4u); f_107227f0();
  /* 107210d4 mov esi, esp */
  ESI = (ESP);
  /* 107210d6 push 0x1074a110 */
  push32((uint32_t)(0x1074a110u));
  /* 107210db push 0x1074f458 */
  push32((uint32_t)(0x1074f458u));
  /* 107210e0 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x107210e6u);
  /* 107210e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107210e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107210eb call 0x107227f0 */
  push32(0x107210f0u); f_107227f0();
  /* 107210f0 mov esi, esp */
  ESI = (ESP);
  /* 107210f2 push 0x1074a108 */
  push32((uint32_t)(0x1074a108u));
  /* 107210f7 push 0x1074f460 */
  push32((uint32_t)(0x1074f460u));
  /* 107210fc call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x10721102u);
  /* 10721102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721107 call 0x107227f0 */
  push32(0x1072110cu); f_107227f0();
  /* 1072110c mov esi, esp */
  ESI = (ESP);
  /* 1072110e push 0x1074a100 */
  push32((uint32_t)(0x1074a100u));
  /* 10721113 push 0x1074f468 */
  push32((uint32_t)(0x1074f468u));
  /* 10721118 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x1072111eu);
  /* 1072111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721123 call 0x107227f0 */
  push32(0x10721128u); f_107227f0();
  /* 10721128 mov esi, esp */
  ESI = (ESP);
  /* 1072112a push 0x1074a0f8 */
  push32((uint32_t)(0x1074a0f8u));
  /* 1072112f push 0x1074f470 */
  push32((uint32_t)(0x1074f470u));
  /* 10721134 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x1072113au);
  /* 1072113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072113f call 0x107227f0 */
  push32(0x10721144u); f_107227f0();
  /* 10721144 mov esi, esp */
  ESI = (ESP);
  /* 10721146 push 0x1074a0f0 */
  push32((uint32_t)(0x1074a0f0u));
  /* 1072114b push 0x1074f478 */
  push32((uint32_t)(0x1074f478u));
  /* 10721150 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x10721156u);
  /* 10721156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072115b call 0x107227f0 */
  push32(0x10721160u); f_107227f0();
  /* 10721160 mov esi, esp */
  ESI = (ESP);
  /* 10721162 push 0x1074a0e8 */
  push32((uint32_t)(0x1074a0e8u));
  /* 10721167 push 0x1074f480 */
  push32((uint32_t)(0x1074f480u));
  /* 1072116c call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x10721172u);
  /* 10721172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721177 call 0x107227f0 */
  push32(0x1072117cu); f_107227f0();
  /* 1072117c mov esi, esp */
  ESI = (ESP);
  /* 1072117e push 0x1074a0e0 */
  push32((uint32_t)(0x1074a0e0u));
  /* 10721183 push 0x1074f488 */
  push32((uint32_t)(0x1074f488u));
  /* 10721188 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x1072118eu);
  /* 1072118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721193 call 0x107227f0 */
  push32(0x10721198u); f_107227f0();
  /* 10721198 mov esi, esp */
  ESI = (ESP);
  /* 1072119a push 0x1074a0d8 */
  push32((uint32_t)(0x1074a0d8u));
  /* 1072119f push 0x1074f490 */
  push32((uint32_t)(0x1074f490u));
  /* 107211a4 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x107211aau);
  /* 107211aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107211ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107211af call 0x107227f0 */
  push32(0x107211b4u); f_107227f0();
  /* 107211b4 mov esi, esp */
  ESI = (ESP);
  /* 107211b6 push 0x1074a0d0 */
  push32((uint32_t)(0x1074a0d0u));
  /* 107211bb push 0x1074f430 */
  push32((uint32_t)(0x1074f430u));
  /* 107211c0 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x107211c6u);
  /* 107211c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107211c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107211cb call 0x107227f0 */
  push32(0x107211d0u); f_107227f0();
  /* 107211d0 mov esi, esp */
  ESI = (ESP);
  /* 107211d2 push 0x1074a0c8 */
  push32((uint32_t)(0x1074a0c8u));
  /* 107211d7 push 0x1074f428 */
  push32((uint32_t)(0x1074f428u));
  /* 107211dc call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x107211e2u);
  /* 107211e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107211e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107211e7 call 0x107227f0 */
  push32(0x107211ecu); f_107227f0();
  /* 107211ec mov esi, esp */
  ESI = (ESP);
  /* 107211ee push 0x1074a0c0 */
  push32((uint32_t)(0x1074a0c0u));
  /* 107211f3 push 0x1074f440 */
  push32((uint32_t)(0x1074f440u));
  /* 107211f8 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x107211feu);
  /* 107211fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721203 call 0x107227f0 */
  push32(0x10721208u); f_107227f0();
  /* 10721208 mov esi, esp */
  ESI = (ESP);
  /* 1072120a push 0x1074a0b8 */
  push32((uint32_t)(0x1074a0b8u));
  /* 1072120f push 0x1074f438 */
  push32((uint32_t)(0x1074f438u));
  /* 10721214 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x1072121au);
  /* 1072121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072121f call 0x107227f0 */
  push32(0x10721224u); f_107227f0();
  /* 10721224 mov esi, esp */
  ESI = (ESP);
  /* 10721226 push 0x1074a0b0 */
  push32((uint32_t)(0x1074a0b0u));
  /* 1072122b push 0x1074f448 */
  push32((uint32_t)(0x1074f448u));
  /* 10721230 call dword ptr [0x10752468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752468))), 0x10721236u);
  /* 10721236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072123b call 0x107227f0 */
  push32(0x10721240u); f_107227f0();
  /* 10721240 mov esi, esp */
  ESI = (ESP);
  /* 10721242 push 0x1074a0a8 */
  push32((uint32_t)(0x1074a0a8u));
  /* 10721247 push 0x1074f3e8 */
  push32((uint32_t)(0x1074f3e8u));
  /* 1072124c call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x10721252u);
  /* 10721252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721257 call 0x107227f0 */
  push32(0x1072125cu); f_107227f0();
  /* 1072125c mov esi, esp */
  ESI = (ESP);
  /* 1072125e push 0x1074a0a0 */
  push32((uint32_t)(0x1074a0a0u));
  /* 10721263 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 10721268 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x1072126eu);
  /* 1072126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721273 call 0x107227f0 */
  push32(0x10721278u); f_107227f0();
  /* 10721278 mov esi, esp */
  ESI = (ESP);
  /* 1072127a push 0x1074a098 */
  push32((uint32_t)(0x1074a098u));
  /* 1072127f push 0x1074f3f0 */
  push32((uint32_t)(0x1074f3f0u));
  /* 10721284 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x1072128au);
  /* 1072128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072128f call 0x107227f0 */
  push32(0x10721294u); f_107227f0();
  /* 10721294 mov esi, esp */
  ESI = (ESP);
  /* 10721296 push 0x1074a090 */
  push32((uint32_t)(0x1074a090u));
  /* 1072129b push 0x1074f408 */
  push32((uint32_t)(0x1074f408u));
  /* 107212a0 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x107212a6u);
  /* 107212a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107212a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107212ab call 0x107227f0 */
  push32(0x107212b0u); f_107227f0();
  /* 107212b0 mov esi, esp */
  ESI = (ESP);
  /* 107212b2 push 0x1074a088 */
  push32((uint32_t)(0x1074a088u));
  /* 107212b7 push 0x1074f400 */
  push32((uint32_t)(0x1074f400u));
  /* 107212bc call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x107212c2u);
  /* 107212c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107212c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107212c7 call 0x107227f0 */
  push32(0x107212ccu); f_107227f0();
  /* 107212cc mov esi, esp */
  ESI = (ESP);
  /* 107212ce push 0x1074a080 */
  push32((uint32_t)(0x1074a080u));
  /* 107212d3 push 0x1074f418 */
  push32((uint32_t)(0x1074f418u));
  /* 107212d8 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x107212deu);
  /* 107212de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107212e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107212e3 call 0x107227f0 */
  push32(0x107212e8u); f_107227f0();
  /* 107212e8 mov esi, esp */
  ESI = (ESP);
  /* 107212ea push 0x1074a078 */
  push32((uint32_t)(0x1074a078u));
  /* 107212ef push 0x1074f410 */
  push32((uint32_t)(0x1074f410u));
  /* 107212f4 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x107212fau);
  /* 107212fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107212fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107212ff call 0x107227f0 */
  push32(0x10721304u); f_107227f0();
  /* 10721304 mov esi, esp */
  ESI = (ESP);
  /* 10721306 push 0x1074a070 */
  push32((uint32_t)(0x1074a070u));
  /* 1072130b push 0x1074f420 */
  push32((uint32_t)(0x1074f420u));
  /* 10721310 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x10721316u);
  /* 10721316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072131b call 0x107227f0 */
  push32(0x10721320u); f_107227f0();
  /* 10721320 mov esi, esp */
  ESI = (ESP);
  /* 10721322 push 0x1074a064 */
  push32((uint32_t)(0x1074a064u));
  /* 10721327 push 0x1074f498 */
  push32((uint32_t)(0x1074f498u));
  /* 1072132c call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x10721332u);
  /* 10721332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721337 call 0x107227f0 */
  push32(0x1072133cu); f_107227f0();
  /* 1072133c mov esi, esp */
  ESI = (ESP);
  /* 1072133e push 0x1074a058 */
  push32((uint32_t)(0x1074a058u));
  /* 10721343 push 0x1074f4a0 */
  push32((uint32_t)(0x1074f4a0u));
  /* 10721348 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x1072134eu);
  /* 1072134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721353 call 0x107227f0 */
  push32(0x10721358u); f_107227f0();
  /* 10721358 mov esi, esp */
  ESI = (ESP);
  /* 1072135a push 0x1074a04c */
  push32((uint32_t)(0x1074a04cu));
  /* 1072135f push 0x1074f4a8 */
  push32((uint32_t)(0x1074f4a8u));
  /* 10721364 call dword ptr [0x10752478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752478))), 0x1072136au);
  /* 1072136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072136f call 0x107227f0 */
  push32(0x10721374u); f_107227f0();
  /* 10721374 mov esi, esp */
  ESI = (ESP);
  /* 10721376 push 0x1074a03c */
  push32((uint32_t)(0x1074a03cu));
  /* 1072137b push 0x1074f4b0 */
  push32((uint32_t)(0x1074f4b0u));
  /* 10721380 call dword ptr [0x1075247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075247c))), 0x10721386u);
  /* 10721386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072138b call 0x107227f0 */
  push32(0x10721390u); f_107227f0();
  /* 10721390 mov esi, esp */
  ESI = (ESP);
  /* 10721392 push 0x1074a02c */
  push32((uint32_t)(0x1074a02cu));
  /* 10721397 push 0x1074f3e0 */
  push32((uint32_t)(0x1074f3e0u));
  /* 1072139c call dword ptr [0x1075247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075247c))), 0x107213a2u);
  /* 107213a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107213a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107213a7 call 0x107227f0 */
  push32(0x107213acu); f_107227f0();
  /* 107213ac mov esi, esp */
  ESI = (ESP);
  /* 107213ae push 0x1074a024 */
  push32((uint32_t)(0x1074a024u));
  /* 107213b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107213b5 call dword ptr [0x10752474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752474))), 0x107213bbu);
  /* 107213bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107213be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107213c0 call 0x107227f0 */
  push32(0x107213c5u); f_107227f0();
  /* 107213c5 mov esi, esp */
  ESI = (ESP);
  /* 107213c7 push 0x1074a01c */
  push32((uint32_t)(0x1074a01cu));
  /* 107213cc push 4 */
  push32((uint32_t)(0x4u));
  /* 107213ce call dword ptr [0x10752474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752474))), 0x107213d4u);
  /* 107213d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107213d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107213d9 call 0x107227f0 */
  push32(0x107213deu); f_107227f0();
  /* 107213de pop edi */
  EDI = (pop32());
  /* 107213df pop esi */
  ESI = (pop32());
  /* 107213e0 pop ebx */
  EBX = (pop32());
  /* 107213e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107213e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107213e6 call 0x107227f0 */
  push32(0x107213ebu); f_107227f0();
  /* 107213eb mov esp, ebp */
  ESP = (EBP);
  /* 107213ed pop ebp */
  EBP = (pop32());
  /* 107213ee ret  */
  ESPCHK(0x107210a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014d0 @ 0x107214d0 (3633 bytes, 1090 insns) */
void f_107214d0(void) {
  FTRACE(0x107214d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107214d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107214d1 mov ebp, esp */
  EBP = (ESP);
  /* 107214d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107214d6 push ebx */
  push32((uint32_t)(EBX));
  /* 107214d7 push esi */
  push32((uint32_t)(ESI));
  /* 107214d8 push edi */
  push32((uint32_t)(EDI));
  /* 107214d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107214dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107214e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107214e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107214e8 mov esi, esp */
  ESI = (ESP);
  /* 107214ea push 1 */
  push32((uint32_t)(0x1u));
  /* 107214ec call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x107214f2u);
  /* 107214f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107214f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107214f7 call 0x107227f0 */
  push32(0x107214fcu); f_107227f0();
  /* 107214fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721503 je 0x107216b4 */
  if (C.zf) goto L_107216b4;
  /* 10721509 mov esi, esp */
  ESI = (ESP);
  /* 1072150b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072150d push 1 */
  push32((uint32_t)(0x1u));
  /* 1072150f call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721515u);
  /* 10721515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072151a call 0x107227f0 */
  push32(0x1072151fu); f_107227f0();
  /* 1072151f mov esi, esp */
  ESI = (ESP);
  /* 10721521 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10721523 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721525 call dword ptr [0x10752418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752418))), 0x1072152bu);
  /* 1072152b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072152e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721530 call 0x107227f0 */
  push32(0x10721535u); f_107227f0();
  /* 10721535 mov esi, esp */
  ESI = (ESP);
  /* 10721537 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10721539 push 4 */
  push32((uint32_t)(0x4u));
  /* 1072153b call dword ptr [0x10752418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752418))), 0x10721541u);
  /* 10721541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721544 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721546 call 0x107227f0 */
  push32(0x1072154bu); f_107227f0();
  /* 1072154b mov esi, esp */
  ESI = (ESP);
  /* 1072154d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10721552 push 3 */
  push32((uint32_t)(0x3u));
  /* 10721554 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721556 call dword ptr [0x1075241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075241c))), 0x1072155cu);
  /* 1072155c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072155f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721561 call 0x107227f0 */
  push32(0x10721566u); f_107227f0();
  /* 10721566 mov esi, esp */
  ESI = (ESP);
  /* 10721568 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1072156d push 1 */
  push32((uint32_t)(0x1u));
  /* 1072156f push 0 */
  push32((uint32_t)(0x0u));
  /* 10721571 call dword ptr [0x1075241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075241c))), 0x10721577u);
  /* 10721577 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072157a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072157c call 0x107227f0 */
  push32(0x10721581u); f_107227f0();
  /* 10721581 mov esi, esp */
  ESI = (ESP);
  /* 10721583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721585 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721589 call dword ptr [0x1075241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075241c))), 0x1072158fu);
  /* 1072158f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721592 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721594 call 0x107227f0 */
  push32(0x10721599u); f_107227f0();
  /* 10721599 mov esi, esp */
  ESI = (ESP);
  /* 1072159b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072159d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072159f push 0 */
  push32((uint32_t)(0x0u));
  /* 107215a1 call dword ptr [0x1075241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075241c))), 0x107215a7u);
  /* 107215a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107215aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107215ac call 0x107227f0 */
  push32(0x107215b1u); f_107227f0();
  /* 107215b1 mov esi, esp */
  ESI = (ESP);
  /* 107215b3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107215b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 107215ba push 0 */
  push32((uint32_t)(0x0u));
  /* 107215bc call dword ptr [0x1075241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075241c))), 0x107215c2u);
  /* 107215c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107215c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107215c7 call 0x107227f0 */
  push32(0x107215ccu); f_107227f0();
  /* 107215cc mov esi, esp */
  ESI = (ESP);
  /* 107215ce push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107215d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 107215d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107215d7 call dword ptr [0x1075241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075241c))), 0x107215ddu);
  /* 107215dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107215e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107215e2 call 0x107227f0 */
  push32(0x107215e7u); f_107227f0();
  /* 107215e7 mov esi, esp */
  ESI = (ESP);
  /* 107215e9 push 0x1074a19c */
  push32((uint32_t)(0x1074a19cu));
  /* 107215ee call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x107215f4u);
  /* 107215f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107215f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107215f9 call 0x107227f0 */
  push32(0x107215feu); f_107227f0();
  /* 107215fe mov esi, esp */
  ESI = (ESP);
  /* 10721600 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721602 push 0x1074f3f0 */
  push32((uint32_t)(0x1074f3f0u));
  /* 10721607 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x1072160du);
  /* 1072160d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721610 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721612 call 0x107227f0 */
  push32(0x10721617u); f_107227f0();
  /* 10721617 mov esi, esp */
  ESI = (ESP);
  /* 10721619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072161b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072161d push 0x1074f450 */
  push32((uint32_t)(0x1074f450u));
  /* 10721622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10721624 call dword ptr [0x10752428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752428))), 0x1072162au);
  /* 1072162a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072162d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072162f call 0x107227f0 */
  push32(0x10721634u); f_107227f0();
  /* 10721634 mov esi, esp */
  ESI = (ESP);
  /* 10721636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721638 push 0x1074f408 */
  push32((uint32_t)(0x1074f408u));
  /* 1072163d call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x10721643u);
  /* 10721643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721646 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721648 call 0x107227f0 */
  push32(0x1072164du); f_107227f0();
  /* 1072164d mov esi, esp */
  ESI = (ESP);
  /* 1072164f push 0 */
  push32((uint32_t)(0x0u));
  /* 10721651 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721653 push 0x1074f458 */
  push32((uint32_t)(0x1074f458u));
  /* 10721658 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072165a call dword ptr [0x10752428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752428))), 0x10721660u);
  /* 10721660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721663 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721665 call 0x107227f0 */
  push32(0x1072166au); f_107227f0();
  /* 1072166a mov esi, esp */
  ESI = (ESP);
  /* 1072166c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1072166e push 5 */
  push32((uint32_t)(0x5u));
  /* 10721670 call dword ptr [0x10752420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752420))), 0x10721676u);
  /* 10721676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072167b call 0x107227f0 */
  push32(0x10721680u); f_107227f0();
  /* 10721680 mov esi, esp */
  ESI = (ESP);
  /* 10721682 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721684 push 0x1074f420 */
  push32((uint32_t)(0x1074f420u));
  /* 10721689 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x1072168fu);
  /* 1072168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721694 call 0x107227f0 */
  push32(0x10721699u); f_107227f0();
  /* 10721699 mov esi, esp */
  ESI = (ESP);
  /* 1072169b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072169d push 0x1074f488 */
  push32((uint32_t)(0x1074f488u));
  /* 107216a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107216a4 call dword ptr [0x10752430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752430))), 0x107216aau);
  /* 107216aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107216ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107216af call 0x107227f0 */
  push32(0x107216b4u); f_107227f0();
L_107216b4:;
  /* 107216b4 mov esi, esp */
  ESI = (ESP);
  /* 107216b6 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107216b8 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x107216beu);
  /* 107216be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107216c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107216c3 call 0x107227f0 */
  push32(0x107216c8u); f_107227f0();
  /* 107216c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107216cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107216cf je 0x10721733 */
  if (C.zf) goto L_10721733;
  /* 107216d1 mov esi, esp */
  ESI = (ESP);
  /* 107216d3 call dword ptr [0x10752434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752434))), 0x107216d9u);
  /* 107216d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107216db call 0x107227f0 */
  push32(0x107216e0u); f_107227f0();
  /* 107216e0 cmp eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107216e5 jle 0x10721733 */
  if ((C.zf||C.sf!=C.of)) goto L_10721733;
  /* 107216e7 mov esi, esp */
  ESI = (ESP);
  /* 107216e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107216eb push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107216ed call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x107216f3u);
  /* 107216f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107216f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107216f8 call 0x107227f0 */
  push32(0x107216fdu); f_107227f0();
  /* 107216fd mov esi, esp */
  ESI = (ESP);
  /* 107216ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10721701 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 10721706 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x1072170cu);
  /* 1072170c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072170f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721711 call 0x107227f0 */
  push32(0x10721716u); f_107227f0();
  /* 10721716 mov esi, esp */
  ESI = (ESP);
  /* 10721718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072171a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072171c push 0x1074f458 */
  push32((uint32_t)(0x1074f458u));
  /* 10721721 push 4 */
  push32((uint32_t)(0x4u));
  /* 10721723 call dword ptr [0x1075242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075242c))), 0x10721729u);
  /* 10721729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072172c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072172e call 0x107227f0 */
  push32(0x10721733u); f_107227f0();
L_10721733:;
  /* 10721733 mov esi, esp */
  ESI = (ESP);
  /* 10721735 push 2 */
  push32((uint32_t)(0x2u));
  /* 10721737 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x1072173du);
  /* 1072173d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721742 call 0x107227f0 */
  push32(0x10721747u); f_107227f0();
  /* 10721747 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072174c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072174e je 0x1072179e */
  if (C.zf) goto L_1072179e;
  /* 10721750 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 10721755 call 0x10721005 */
  push32(0x1072175au); f_10721005();
  /* 1072175a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072175d cmp eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721760 jge 0x1072179e */
  if ((C.sf==C.of)) goto L_1072179e;
  /* 10721762 mov esi, esp */
  ESI = (ESP);
  /* 10721764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721766 push 2 */
  push32((uint32_t)(0x2u));
  /* 10721768 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x1072176eu);
  /* 1072176e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721771 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721773 call 0x107227f0 */
  push32(0x10721778u); f_107227f0();
  /* 10721778 mov esi, esp */
  ESI = (ESP);
  /* 1072177a push 0x1074a194 */
  push32((uint32_t)(0x1074a194u));
  /* 1072177f call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721785u);
  /* 10721785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072178a call 0x107227f0 */
  push32(0x1072178fu); f_107227f0();
  /* 1072178f mov esi, esp */
  ESI = (ESP);
  /* 10721791 call dword ptr [0x1075243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075243c))), 0x10721797u);
  /* 10721797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721799 call 0x107227f0 */
  push32(0x1072179eu); f_107227f0();
L_1072179e:;
  /* 1072179e mov esi, esp */
  ESI = (ESP);
  /* 107217a0 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 107217a2 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x107217a8u);
  /* 107217a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107217ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107217ad call 0x107227f0 */
  push32(0x107217b2u); f_107227f0();
  /* 107217b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107217b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107217b9 je 0x10721872 */
  if (C.zf) goto L_10721872;
  /* 107217bf mov esi, esp */
  ESI = (ESP);
  /* 107217c1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 107217c3 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x107217c9u);
  /* 107217c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107217cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107217ce call 0x107227f0 */
  push32(0x107217d3u); f_107227f0();
  /* 107217d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107217d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107217da je 0x10721872 */
  if (C.zf) goto L_10721872;
  /* 107217e0 mov esi, esp */
  ESI = (ESP);
  /* 107217e2 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 107217e7 push 0x1074f458 */
  push32((uint32_t)(0x1074f458u));
  /* 107217ec call dword ptr [0x10752440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752440))), 0x107217f2u);
  /* 107217f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107217f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107217f7 call 0x107227f0 */
  push32(0x107217fcu); f_107227f0();
  /* 107217fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107217fe jle 0x10721872 */
  if ((C.zf||C.sf!=C.of)) goto L_10721872;
  /* 10721800 mov esi, esp */
  ESI = (ESP);
  /* 10721802 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721804 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10721806 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x1072180cu);
  /* 1072180c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072180f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721811 call 0x107227f0 */
  push32(0x10721816u); f_107227f0();
  /* 10721816 mov esi, esp */
  ESI = (ESP);
  /* 10721818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072181a push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1072181c call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721822u);
  /* 10721822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721825 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721827 call 0x107227f0 */
  push32(0x1072182cu); f_107227f0();
  /* 1072182c mov esi, esp */
  ESI = (ESP);
  /* 1072182e push 0 */
  push32((uint32_t)(0x0u));
  /* 10721830 push 0x1074f498 */
  push32((uint32_t)(0x1074f498u));
  /* 10721835 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x1072183bu);
  /* 1072183b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072183e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721840 call 0x107227f0 */
  push32(0x10721845u); f_107227f0();
  /* 10721845 mov esi, esp */
  ESI = (ESP);
  /* 10721847 push 5 */
  push32((uint32_t)(0x5u));
  /* 10721849 call dword ptr [0x10752438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752438))), 0x1072184fu);
  /* 1072184f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721852 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721854 call 0x107227f0 */
  push32(0x10721859u); f_107227f0();
  /* 10721859 mov esi, esp */
  ESI = (ESP);
  /* 1072185b push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10721860 push 1 */
  push32((uint32_t)(0x1u));
  /* 10721862 call dword ptr [0x10752420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752420))), 0x10721868u);
  /* 10721868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072186b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072186d call 0x107227f0 */
  push32(0x10721872u); f_107227f0();
L_10721872:;
  /* 10721872 mov esi, esp */
  ESI = (ESP);
  /* 10721874 push 1 */
  push32((uint32_t)(0x1u));
  /* 10721876 call dword ptr [0x10752448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752448))), 0x1072187cu);
  /* 1072187c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072187f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721881 call 0x107227f0 */
  push32(0x10721886u); f_107227f0();
  /* 10721886 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072188b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072188d je 0x107218c5 */
  if (C.zf) goto L_107218c5;
  /* 1072188f mov esi, esp */
  ESI = (ESP);
  /* 10721891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721893 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 10721898 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x1072189eu);
  /* 1072189e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107218a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107218a3 call 0x107227f0 */
  push32(0x107218a8u); f_107227f0();
  /* 107218a8 mov esi, esp */
  ESI = (ESP);
  /* 107218aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107218ac push 0 */
  push32((uint32_t)(0x0u));
  /* 107218ae push 0x1074f470 */
  push32((uint32_t)(0x1074f470u));
  /* 107218b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 107218b5 call dword ptr [0x1075242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075242c))), 0x107218bbu);
  /* 107218bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107218be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107218c0 call 0x107227f0 */
  push32(0x107218c5u); f_107227f0();
L_107218c5:;
  /* 107218c5 mov esi, esp */
  ESI = (ESP);
  /* 107218c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 107218c9 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x107218cfu);
  /* 107218cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107218d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107218d4 call 0x107227f0 */
  push32(0x107218d9u); f_107227f0();
  /* 107218d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107218de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107218e0 je 0x10721958 */
  if (C.zf) goto L_10721958;
  /* 107218e2 mov esi, esp */
  ESI = (ESP);
  /* 107218e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 107218e6 call dword ptr [0x1075244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075244c))), 0x107218ecu);
  /* 107218ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107218ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107218f1 call 0x107227f0 */
  push32(0x107218f6u); f_107227f0();
  /* 107218f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107218fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107218fd je 0x10721958 */
  if (C.zf) goto L_10721958;
  /* 107218ff mov esi, esp */
  ESI = (ESP);
  /* 10721901 push 1 */
  push32((uint32_t)(0x1u));
  /* 10721903 call dword ptr [0x10752444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752444))), 0x10721909u);
  /* 10721909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072190c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072190e call 0x107227f0 */
  push32(0x10721913u); f_107227f0();
  /* 10721913 mov esi, esp */
  ESI = (ESP);
  /* 10721915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721917 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 1072191c push 1 */
  push32((uint32_t)(0x1u));
  /* 1072191e call dword ptr [0x10752454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752454))), 0x10721924u);
  /* 10721924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721927 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721929 call 0x107227f0 */
  push32(0x1072192eu); f_107227f0();
  /* 1072192e mov esi, esp */
  ESI = (ESP);
  /* 10721930 push 1 */
  push32((uint32_t)(0x1u));
  /* 10721932 call dword ptr [0x10752458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752458))), 0x10721938u);
  /* 10721938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072193b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072193d call 0x107227f0 */
  push32(0x10721942u); f_107227f0();
  /* 10721942 mov esi, esp */
  ESI = (ESP);
  /* 10721944 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10721946 push 5 */
  push32((uint32_t)(0x5u));
  /* 10721948 call dword ptr [0x10752420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752420))), 0x1072194eu);
  /* 1072194e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721953 call 0x107227f0 */
  push32(0x10721958u); f_107227f0();
L_10721958:;
  /* 10721958 mov esi, esp */
  ESI = (ESP);
  /* 1072195a push 3 */
  push32((uint32_t)(0x3u));
  /* 1072195c call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721962u);
  /* 10721962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721967 call 0x107227f0 */
  push32(0x1072196cu); f_107227f0();
  /* 1072196c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721973 je 0x10721a55 */
  if (C.zf) goto L_10721a55;
  /* 10721979 mov esi, esp */
  ESI = (ESP);
  /* 1072197b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072197d call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721983u);
  /* 10721983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721986 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721988 call 0x107227f0 */
  push32(0x1072198du); f_107227f0();
  /* 1072198d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721994 je 0x10721a55 */
  if (C.zf) goto L_10721a55;
  /* 1072199a mov esi, esp */
  ESI = (ESP);
  /* 1072199c push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 107219a1 push 0x1074f470 */
  push32((uint32_t)(0x1074f470u));
  /* 107219a6 call dword ptr [0x10752440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752440))), 0x107219acu);
  /* 107219ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107219af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107219b1 call 0x107227f0 */
  push32(0x107219b6u); f_107227f0();
  /* 107219b6 mov esi, eax */
  ESI = (EAX);
  /* 107219b8 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 107219bd call 0x10721005 */
  push32(0x107219c2u); f_10721005();
  /* 107219c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107219c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107219c7 jne 0x10721a55 */
  if (!C.zf) goto L_10721a55;
  /* 107219cd mov esi, esp */
  ESI = (ESP);
  /* 107219cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107219d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 107219d3 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x107219d9u);
  /* 107219d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107219dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107219de call 0x107227f0 */
  push32(0x107219e3u); f_107227f0();
  /* 107219e3 mov esi, esp */
  ESI = (ESP);
  /* 107219e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107219e7 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 107219e9 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x107219efu);
  /* 107219ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107219f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107219f4 call 0x107227f0 */
  push32(0x107219f9u); f_107227f0();
  /* 107219f9 mov esi, esp */
  ESI = (ESP);
  /* 107219fb push 0 */
  push32((uint32_t)(0x0u));
  /* 107219fd call dword ptr [0x10752444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752444))), 0x10721a03u);
  /* 10721a03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721a08 call 0x107227f0 */
  push32(0x10721a0du); f_107227f0();
  /* 10721a0d mov esi, esp */
  ESI = (ESP);
  /* 10721a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10721a11 push 0x1074f3f8 */
  push32((uint32_t)(0x1074f3f8u));
  /* 10721a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721a18 call dword ptr [0x10752454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752454))), 0x10721a1eu);
  /* 10721a1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721a23 call 0x107227f0 */
  push32(0x10721a28u); f_107227f0();
  /* 10721a28 mov esi, esp */
  ESI = (ESP);
  /* 10721a2a push 4 */
  push32((uint32_t)(0x4u));
  /* 10721a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10721a2e call dword ptr [0x10752450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752450))), 0x10721a34u);
  /* 10721a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721a39 call 0x107227f0 */
  push32(0x10721a3eu); f_107227f0();
  /* 10721a3e mov esi, esp */
  ESI = (ESP);
  /* 10721a40 push 0x1074a18c */
  push32((uint32_t)(0x1074a18cu));
  /* 10721a45 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721a4bu);
  /* 10721a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721a50 call 0x107227f0 */
  push32(0x10721a55u); f_107227f0();
L_10721a55:;
  /* 10721a55 mov esi, esp */
  ESI = (ESP);
  /* 10721a57 push 4 */
  push32((uint32_t)(0x4u));
  /* 10721a59 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721a5fu);
  /* 10721a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721a64 call 0x107227f0 */
  push32(0x10721a69u); f_107227f0();
  /* 10721a69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721a70 je 0x10721ad5 */
  if (C.zf) goto L_10721ad5;
  /* 10721a72 mov esi, esp */
  ESI = (ESP);
  /* 10721a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721a76 push 0x1074f460 */
  push32((uint32_t)(0x1074f460u));
  /* 10721a7b call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10721a81u);
  /* 10721a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721a86 call 0x107227f0 */
  push32(0x10721a8bu); f_107227f0();
  /* 10721a8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721a8d jle 0x10721ad5 */
  if ((C.zf||C.sf!=C.of)) goto L_10721ad5;
  /* 10721a8f mov esi, esp */
  ESI = (ESP);
  /* 10721a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721a93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10721a95 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721a9bu);
  /* 10721a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721a9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721aa0 call 0x107227f0 */
  push32(0x10721aa5u); f_107227f0();
  /* 10721aa5 mov esi, esp */
  ESI = (ESP);
  /* 10721aa7 push 0x1074a184 */
  push32((uint32_t)(0x1074a184u));
  /* 10721aac call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721ab2u);
  /* 10721ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ab7 call 0x107227f0 */
  push32(0x10721abcu); f_107227f0();
  /* 10721abc mov esi, esp */
  ESI = (ESP);
  /* 10721abe push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10721ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10721ac5 call dword ptr [0x10752420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752420))), 0x10721acbu);
  /* 10721acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ad0 call 0x107227f0 */
  push32(0x10721ad5u); f_107227f0();
L_10721ad5:;
  /* 10721ad5 mov esi, esp */
  ESI = (ESP);
  /* 10721ad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10721ad9 call dword ptr [0x10752448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752448))), 0x10721adfu);
  /* 10721adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ae4 call 0x107227f0 */
  push32(0x10721ae9u); f_107227f0();
  /* 10721ae9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721af0 je 0x10721b7f */
  if (C.zf) goto L_10721b7f;
  /* 10721af6 mov esi, esp */
  ESI = (ESP);
  /* 10721af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721afa push 0x1074f400 */
  push32((uint32_t)(0x1074f400u));
  /* 10721aff call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x10721b05u);
  /* 10721b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721b0a call 0x107227f0 */
  push32(0x10721b0fu); f_107227f0();
  /* 10721b0f mov esi, esp */
  ESI = (ESP);
  /* 10721b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721b15 push 0x1074f478 */
  push32((uint32_t)(0x1074f478u));
  /* 10721b1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10721b1c call dword ptr [0x10752428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752428))), 0x10721b22u);
  /* 10721b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721b27 call 0x107227f0 */
  push32(0x10721b2cu); f_107227f0();
  /* 10721b2c mov esi, esp */
  ESI = (ESP);
  /* 10721b2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10721b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721b32 push 0x1074f478 */
  push32((uint32_t)(0x1074f478u));
  /* 10721b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10721b39 call dword ptr [0x10752428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752428))), 0x10721b3fu);
  /* 10721b3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721b44 call 0x107227f0 */
  push32(0x10721b49u); f_107227f0();
  /* 10721b49 mov esi, esp */
  ESI = (ESP);
  /* 10721b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10721b4d push 0x1074f420 */
  push32((uint32_t)(0x1074f420u));
  /* 10721b52 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x10721b58u);
  /* 10721b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721b5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721b5d call 0x107227f0 */
  push32(0x10721b62u); f_107227f0();
  /* 10721b62 mov esi, esp */
  ESI = (ESP);
  /* 10721b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721b68 push 0x1074f488 */
  push32((uint32_t)(0x1074f488u));
  /* 10721b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10721b6f call dword ptr [0x1075242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075242c))), 0x10721b75u);
  /* 10721b75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721b7a call 0x107227f0 */
  push32(0x10721b7fu); f_107227f0();
L_10721b7f:;
  /* 10721b7f mov esi, esp */
  ESI = (ESP);
  /* 10721b81 push 5 */
  push32((uint32_t)(0x5u));
  /* 10721b83 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721b89u);
  /* 10721b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721b8e call 0x107227f0 */
  push32(0x10721b93u); f_107227f0();
  /* 10721b93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721b9a je 0x10721bdc */
  if (C.zf) goto L_10721bdc;
  /* 10721b9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10721b9e push 0x1074f3e0 */
  push32((uint32_t)(0x1074f3e0u));
  /* 10721ba3 call 0x1072100f */
  push32(0x10721ba8u); f_1072100f();
  /* 10721ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721bad jne 0x10721bdc */
  if (!C.zf) goto L_10721bdc;
  /* 10721baf mov esi, esp */
  ESI = (ESP);
  /* 10721bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721bb3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10721bb5 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721bbbu);
  /* 10721bbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721bc0 call 0x107227f0 */
  push32(0x10721bc5u); f_107227f0();
  /* 10721bc5 mov esi, esp */
  ESI = (ESP);
  /* 10721bc7 push 0x1074a17c */
  push32((uint32_t)(0x1074a17cu));
  /* 10721bcc call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721bd2u);
  /* 10721bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721bd7 call 0x107227f0 */
  push32(0x10721bdcu); f_107227f0();
L_10721bdc:;
  /* 10721bdc mov esi, esp */
  ESI = (ESP);
  /* 10721bde push 6 */
  push32((uint32_t)(0x6u));
  /* 10721be0 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721be6u);
  /* 10721be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721be9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721beb call 0x107227f0 */
  push32(0x10721bf0u); f_107227f0();
  /* 10721bf0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721bf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721bf7 je 0x10721c43 */
  if (C.zf) goto L_10721c43;
  /* 10721bf9 mov esi, esp */
  ESI = (ESP);
  /* 10721bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10721bfd push 0x1074f468 */
  push32((uint32_t)(0x1074f468u));
  /* 10721c02 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10721c08u);
  /* 10721c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c0d call 0x107227f0 */
  push32(0x10721c12u); f_107227f0();
  /* 10721c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721c14 jle 0x10721c43 */
  if ((C.zf||C.sf!=C.of)) goto L_10721c43;
  /* 10721c16 mov esi, esp */
  ESI = (ESP);
  /* 10721c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721c1a push 6 */
  push32((uint32_t)(0x6u));
  /* 10721c1c call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721c22u);
  /* 10721c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c27 call 0x107227f0 */
  push32(0x10721c2cu); f_107227f0();
  /* 10721c2c mov esi, esp */
  ESI = (ESP);
  /* 10721c2e push 0x1074a174 */
  push32((uint32_t)(0x1074a174u));
  /* 10721c33 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721c39u);
  /* 10721c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c3e call 0x107227f0 */
  push32(0x10721c43u); f_107227f0();
L_10721c43:;
  /* 10721c43 mov esi, esp */
  ESI = (ESP);
  /* 10721c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721c47 push 0x1074f418 */
  push32((uint32_t)(0x1074f418u));
  /* 10721c4c call dword ptr [0x10752464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752464))), 0x10721c52u);
  /* 10721c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c57 call 0x107227f0 */
  push32(0x10721c5cu); f_107227f0();
  /* 10721c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721c5e jle 0x10721ca3 */
  if ((C.zf||C.sf!=C.of)) goto L_10721ca3;
  /* 10721c60 mov esi, esp */
  ESI = (ESP);
  /* 10721c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721c64 call dword ptr [0x10752444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752444))), 0x10721c6au);
  /* 10721c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c6f call 0x107227f0 */
  push32(0x10721c74u); f_107227f0();
  /* 10721c74 mov esi, esp */
  ESI = (ESP);
  /* 10721c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721c78 push 0x1074f418 */
  push32((uint32_t)(0x1074f418u));
  /* 10721c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10721c7f call dword ptr [0x10752454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752454))), 0x10721c85u);
  /* 10721c85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c8a call 0x107227f0 */
  push32(0x10721c8fu); f_107227f0();
  /* 10721c8f mov esi, esp */
  ESI = (ESP);
  /* 10721c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721c93 call dword ptr [0x10752458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752458))), 0x10721c99u);
  /* 10721c99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721c9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721c9e call 0x107227f0 */
  push32(0x10721ca3u); f_107227f0();
L_10721ca3:;
  /* 10721ca3 mov esi, esp */
  ESI = (ESP);
  /* 10721ca5 push 7 */
  push32((uint32_t)(0x7u));
  /* 10721ca7 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721cadu);
  /* 10721cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721cb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721cb2 call 0x107227f0 */
  push32(0x10721cb7u); f_107227f0();
  /* 10721cb7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721cbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721cbe je 0x10721cfe */
  if (C.zf) goto L_10721cfe;
  /* 10721cc0 push 0x1074f418 */
  push32((uint32_t)(0x1074f418u));
  /* 10721cc5 call 0x10721005 */
  push32(0x10721ccau); f_10721005();
  /* 10721cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721ccf jne 0x10721cfe */
  if (!C.zf) goto L_10721cfe;
  /* 10721cd1 mov esi, esp */
  ESI = (ESP);
  /* 10721cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721cd5 push 7 */
  push32((uint32_t)(0x7u));
  /* 10721cd7 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721cddu);
  /* 10721cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ce2 call 0x107227f0 */
  push32(0x10721ce7u); f_107227f0();
  /* 10721ce7 mov esi, esp */
  ESI = (ESP);
  /* 10721ce9 push 0x1074a16c */
  push32((uint32_t)(0x1074a16cu));
  /* 10721cee call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721cf4u);
  /* 10721cf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721cf9 call 0x107227f0 */
  push32(0x10721cfeu); f_107227f0();
L_10721cfe:;
  /* 10721cfe mov esi, esp */
  ESI = (ESP);
  /* 10721d00 push 8 */
  push32((uint32_t)(0x8u));
  /* 10721d02 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721d08u);
  /* 10721d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721d0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721d0d call 0x107227f0 */
  push32(0x10721d12u); f_107227f0();
  /* 10721d12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721d19 je 0x10721db2 */
  if (C.zf) goto L_10721db2;
  /* 10721d1f mov esi, esp */
  ESI = (ESP);
  /* 10721d21 push 3 */
  push32((uint32_t)(0x3u));
  /* 10721d23 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721d29u);
  /* 10721d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721d2e call 0x107227f0 */
  push32(0x10721d33u); f_107227f0();
  /* 10721d33 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721d3a jne 0x10721db2 */
  if (!C.zf) goto L_10721db2;
  /* 10721d3c mov esi, esp */
  ESI = (ESP);
  /* 10721d3e push 5 */
  push32((uint32_t)(0x5u));
  /* 10721d40 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721d46u);
  /* 10721d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721d49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721d4b call 0x107227f0 */
  push32(0x10721d50u); f_107227f0();
  /* 10721d50 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721d57 jne 0x10721db2 */
  if (!C.zf) goto L_10721db2;
  /* 10721d59 mov esi, esp */
  ESI = (ESP);
  /* 10721d5b push 7 */
  push32((uint32_t)(0x7u));
  /* 10721d5d call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721d63u);
  /* 10721d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721d68 call 0x107227f0 */
  push32(0x10721d6du); f_107227f0();
  /* 10721d6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721d74 jne 0x10721db2 */
  if (!C.zf) goto L_10721db2;
  /* 10721d76 mov esi, esp */
  ESI = (ESP);
  /* 10721d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721d7a push 8 */
  push32((uint32_t)(0x8u));
  /* 10721d7c call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721d82u);
  /* 10721d82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721d87 call 0x107227f0 */
  push32(0x10721d8cu); f_107227f0();
  /* 10721d8c mov esi, esp */
  ESI = (ESP);
  /* 10721d8e push 0x1074a164 */
  push32((uint32_t)(0x1074a164u));
  /* 10721d93 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721d99u);
  /* 10721d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721d9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721d9e call 0x107227f0 */
  push32(0x10721da3u); f_107227f0();
  /* 10721da3 mov esi, esp */
  ESI = (ESP);
  /* 10721da5 call dword ptr [0x1075245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075245c))), 0x10721dabu);
  /* 10721dab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721dad call 0x107227f0 */
  push32(0x10721db2u); f_107227f0();
L_10721db2:;
  /* 10721db2 mov esi, esp */
  ESI = (ESP);
  /* 10721db4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10721db6 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721dbcu);
  /* 10721dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721dbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721dc1 call 0x107227f0 */
  push32(0x10721dc6u); f_107227f0();
  /* 10721dc6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721dcd je 0x10721e19 */
  if (C.zf) goto L_10721e19;
  /* 10721dcf mov esi, esp */
  ESI = (ESP);
  /* 10721dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721dd3 push 0x1074f490 */
  push32((uint32_t)(0x1074f490u));
  /* 10721dd8 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10721ddeu);
  /* 10721dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721de1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721de3 call 0x107227f0 */
  push32(0x10721de8u); f_107227f0();
  /* 10721de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721dea jle 0x10721e19 */
  if ((C.zf||C.sf!=C.of)) goto L_10721e19;
  /* 10721dec mov esi, esp */
  ESI = (ESP);
  /* 10721dee push 0 */
  push32((uint32_t)(0x0u));
  /* 10721df0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10721df2 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721df8u);
  /* 10721df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721dfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721dfd call 0x107227f0 */
  push32(0x10721e02u); f_107227f0();
  /* 10721e02 mov esi, esp */
  ESI = (ESP);
  /* 10721e04 push 0x1074a15c */
  push32((uint32_t)(0x1074a15cu));
  /* 10721e09 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721e0fu);
  /* 10721e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721e14 call 0x107227f0 */
  push32(0x10721e19u); f_107227f0();
L_10721e19:;
  /* 10721e19 mov esi, esp */
  ESI = (ESP);
  /* 10721e1b push 0xa */
  push32((uint32_t)(0xau));
  /* 10721e1d call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721e23u);
  /* 10721e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721e26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721e28 call 0x107227f0 */
  push32(0x10721e2du); f_107227f0();
  /* 10721e2d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721e34 je 0x10721eba */
  if (C.zf) goto L_10721eba;
  /* 10721e3a push 0x1074f3e8 */
  push32((uint32_t)(0x1074f3e8u));
  /* 10721e3f call 0x10721005 */
  push32(0x10721e44u); f_10721005();
  /* 10721e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721e49 jne 0x10721eba */
  if (!C.zf) goto L_10721eba;
  /* 10721e4b mov esi, esp */
  ESI = (ESP);
  /* 10721e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10721e4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10721e51 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721e57u);
  /* 10721e57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721e5c call 0x107227f0 */
  push32(0x10721e61u); f_107227f0();
  /* 10721e61 mov esi, esp */
  ESI = (ESP);
  /* 10721e63 push 3 */
  push32((uint32_t)(0x3u));
  /* 10721e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721e67 call dword ptr [0x1075246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075246c))), 0x10721e6du);
  /* 10721e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721e72 call 0x107227f0 */
  push32(0x10721e77u); f_107227f0();
  /* 10721e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721e79 jle 0x10721e94 */
  if ((C.zf||C.sf!=C.of)) goto L_10721e94;
  /* 10721e7b mov esi, esp */
  ESI = (ESP);
  /* 10721e7d push 0x1074a150 */
  push32((uint32_t)(0x1074a150u));
  /* 10721e82 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721e88u);
  /* 10721e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721e8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721e8d call 0x107227f0 */
  push32(0x10721e92u); f_107227f0();
  /* 10721e92 jmp 0x10721eab */
  goto L_10721eab;
L_10721e94:;
  /* 10721e94 mov esi, esp */
  ESI = (ESP);
  /* 10721e96 push 0x1074a144 */
  push32((uint32_t)(0x1074a144u));
  /* 10721e9b call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721ea1u);
  /* 10721ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ea4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ea6 call 0x107227f0 */
  push32(0x10721eabu); f_107227f0();
L_10721eab:;
  /* 10721eab mov esi, esp */
  ESI = (ESP);
  /* 10721ead call dword ptr [0x1075243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075243c))), 0x10721eb3u);
  /* 10721eb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721eb5 call 0x107227f0 */
  push32(0x10721ebau); f_107227f0();
L_10721eba:;
  /* 10721eba mov esi, esp */
  ESI = (ESP);
  /* 10721ebc push 0xb */
  push32((uint32_t)(0xbu));
  /* 10721ebe call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721ec4u);
  /* 10721ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ec9 call 0x107227f0 */
  push32(0x10721eceu); f_107227f0();
  /* 10721ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721ed5 je 0x10721f21 */
  if (C.zf) goto L_10721f21;
  /* 10721ed7 mov esi, esp */
  ESI = (ESP);
  /* 10721ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721edb push 0x1074f438 */
  push32((uint32_t)(0x1074f438u));
  /* 10721ee0 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10721ee6u);
  /* 10721ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ee9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721eeb call 0x107227f0 */
  push32(0x10721ef0u); f_107227f0();
  /* 10721ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721ef2 jle 0x10721f21 */
  if ((C.zf||C.sf!=C.of)) goto L_10721f21;
  /* 10721ef4 mov esi, esp */
  ESI = (ESP);
  /* 10721ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721ef8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10721efa call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721f00u);
  /* 10721f00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f05 call 0x107227f0 */
  push32(0x10721f0au); f_107227f0();
  /* 10721f0a mov esi, esp */
  ESI = (ESP);
  /* 10721f0c push 0x1074a138 */
  push32((uint32_t)(0x1074a138u));
  /* 10721f11 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721f17u);
  /* 10721f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f1c call 0x107227f0 */
  push32(0x10721f21u); f_107227f0();
L_10721f21:;
  /* 10721f21 mov esi, esp */
  ESI = (ESP);
  /* 10721f23 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10721f25 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721f2bu);
  /* 10721f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f30 call 0x107227f0 */
  push32(0x10721f35u); f_107227f0();
  /* 10721f35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721f3c je 0x10721f88 */
  if (C.zf) goto L_10721f88;
  /* 10721f3e mov esi, esp */
  ESI = (ESP);
  /* 10721f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721f42 push 0x1074f448 */
  push32((uint32_t)(0x1074f448u));
  /* 10721f47 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10721f4du);
  /* 10721f4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f52 call 0x107227f0 */
  push32(0x10721f57u); f_107227f0();
  /* 10721f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721f59 jle 0x10721f88 */
  if ((C.zf||C.sf!=C.of)) goto L_10721f88;
  /* 10721f5b mov esi, esp */
  ESI = (ESP);
  /* 10721f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10721f5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10721f61 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721f67u);
  /* 10721f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f6c call 0x107227f0 */
  push32(0x10721f71u); f_107227f0();
  /* 10721f71 mov esi, esp */
  ESI = (ESP);
  /* 10721f73 push 0x1074a12c */
  push32((uint32_t)(0x1074a12cu));
  /* 10721f78 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721f7eu);
  /* 10721f7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f83 call 0x107227f0 */
  push32(0x10721f88u); f_107227f0();
L_10721f88:;
  /* 10721f88 mov esi, esp */
  ESI = (ESP);
  /* 10721f8a push 0xd */
  push32((uint32_t)(0xdu));
  /* 10721f8c call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721f92u);
  /* 10721f92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721f95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721f97 call 0x107227f0 */
  push32(0x10721f9cu); f_107227f0();
  /* 10721f9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721fa3 je 0x10721fe5 */
  if (C.zf) goto L_10721fe5;
  /* 10721fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10721fa7 push 0x1074f4b0 */
  push32((uint32_t)(0x1074f4b0u));
  /* 10721fac call 0x1072100f */
  push32(0x10721fb1u); f_1072100f();
  /* 10721fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10721fb6 jle 0x10721fe5 */
  if ((C.zf||C.sf!=C.of)) goto L_10721fe5;
  /* 10721fb8 mov esi, esp */
  ESI = (ESP);
  /* 10721fba push 0 */
  push32((uint32_t)(0x0u));
  /* 10721fbc push 0xd */
  push32((uint32_t)(0xdu));
  /* 10721fbe call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10721fc4u);
  /* 10721fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721fc9 call 0x107227f0 */
  push32(0x10721fceu); f_107227f0();
  /* 10721fce mov esi, esp */
  ESI = (ESP);
  /* 10721fd0 push 0x1074a120 */
  push32((uint32_t)(0x1074a120u));
  /* 10721fd5 call dword ptr [0x10752414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752414))), 0x10721fdbu);
  /* 10721fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721fde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721fe0 call 0x107227f0 */
  push32(0x10721fe5u); f_107227f0();
L_10721fe5:;
  /* 10721fe5 mov esi, esp */
  ESI = (ESP);
  /* 10721fe7 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10721fe9 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10721fefu);
  /* 10721fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10721ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10721ff4 call 0x107227f0 */
  push32(0x10721ff9u); f_107227f0();
  /* 10721ff9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10721ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722000 je 0x10722062 */
  if (C.zf) goto L_10722062;
  /* 10722002 mov esi, esp */
  ESI = (ESP);
  /* 10722004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722006 push 0x1074f430 */
  push32((uint32_t)(0x1074f430u));
  /* 1072200b call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10722011u);
  /* 10722011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722014 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722016 call 0x107227f0 */
  push32(0x1072201bu); f_107227f0();
  /* 1072201b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072201d jle 0x10722062 */
  if ((C.zf||C.sf!=C.of)) goto L_10722062;
  /* 1072201f mov esi, esp */
  ESI = (ESP);
  /* 10722021 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722023 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10722025 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x1072202bu);
  /* 1072202b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072202e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722030 call 0x107227f0 */
  push32(0x10722035u); f_107227f0();
  /* 10722035 mov esi, esp */
  ESI = (ESP);
  /* 10722037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722039 push 0x1074f498 */
  push32((uint32_t)(0x1074f498u));
  /* 1072203e call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x10722044u);
  /* 10722044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722047 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722049 call 0x107227f0 */
  push32(0x1072204eu); f_107227f0();
  /* 1072204e mov esi, esp */
  ESI = (ESP);
  /* 10722050 push 5 */
  push32((uint32_t)(0x5u));
  /* 10722052 call dword ptr [0x10752438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752438))), 0x10722058u);
  /* 10722058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072205b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072205d call 0x107227f0 */
  push32(0x10722062u); f_107227f0();
L_10722062:;
  /* 10722062 mov esi, esp */
  ESI = (ESP);
  /* 10722064 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10722066 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x1072206cu);
  /* 1072206c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072206f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722071 call 0x107227f0 */
  push32(0x10722076u); f_107227f0();
  /* 10722076 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072207b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072207d jne 0x107220fc */
  if (!C.zf) goto L_107220fc;
  /* 1072207f mov esi, esp */
  ESI = (ESP);
  /* 10722081 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10722083 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10722089u);
  /* 10722089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072208c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072208e call 0x107227f0 */
  push32(0x10722093u); f_107227f0();
  /* 10722093 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072209a je 0x107220fc */
  if (C.zf) goto L_107220fc;
  /* 1072209c mov esi, esp */
  ESI = (ESP);
  /* 1072209e push 0 */
  push32((uint32_t)(0x0u));
  /* 107220a0 push 0x1074f430 */
  push32((uint32_t)(0x1074f430u));
  /* 107220a5 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x107220abu);
  /* 107220ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107220ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107220b0 call 0x107227f0 */
  push32(0x107220b5u); f_107227f0();
  /* 107220b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107220b7 jne 0x107220fc */
  if (!C.zf) goto L_107220fc;
  /* 107220b9 mov esi, esp */
  ESI = (ESP);
  /* 107220bb push 1 */
  push32((uint32_t)(0x1u));
  /* 107220bd push 0x28 */
  push32((uint32_t)(0x28u));
  /* 107220bf call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x107220c5u);
  /* 107220c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107220c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107220ca call 0x107227f0 */
  push32(0x107220cfu); f_107227f0();
  /* 107220cf mov esi, esp */
  ESI = (ESP);
  /* 107220d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107220d3 push 0x1074f498 */
  push32((uint32_t)(0x1074f498u));
  /* 107220d8 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x107220deu);
  /* 107220de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107220e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107220e3 call 0x107227f0 */
  push32(0x107220e8u); f_107227f0();
  /* 107220e8 mov esi, esp */
  ESI = (ESP);
  /* 107220ea push 5 */
  push32((uint32_t)(0x5u));
  /* 107220ec call dword ptr [0x10752470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752470))), 0x107220f2u);
  /* 107220f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107220f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107220f7 call 0x107227f0 */
  push32(0x107220fcu); f_107227f0();
L_107220fc:;
  /* 107220fc mov esi, esp */
  ESI = (ESP);
  /* 107220fe push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10722100 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10722106u);
  /* 10722106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072210b call 0x107227f0 */
  push32(0x10722110u); f_107227f0();
  /* 10722110 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722117 je 0x10722179 */
  if (C.zf) goto L_10722179;
  /* 10722119 mov esi, esp */
  ESI = (ESP);
  /* 1072211b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072211d push 0x1074f428 */
  push32((uint32_t)(0x1074f428u));
  /* 10722122 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10722128u);
  /* 10722128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072212b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072212d call 0x107227f0 */
  push32(0x10722132u); f_107227f0();
  /* 10722132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722134 jle 0x10722179 */
  if ((C.zf||C.sf!=C.of)) goto L_10722179;
  /* 10722136 mov esi, esp */
  ESI = (ESP);
  /* 10722138 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072213a push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1072213c call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x10722142u);
  /* 10722142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722145 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722147 call 0x107227f0 */
  push32(0x1072214cu); f_107227f0();
  /* 1072214c mov esi, esp */
  ESI = (ESP);
  /* 1072214e push 0 */
  push32((uint32_t)(0x0u));
  /* 10722150 push 0x1074f4a0 */
  push32((uint32_t)(0x1074f4a0u));
  /* 10722155 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x1072215bu);
  /* 1072215b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072215e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722160 call 0x107227f0 */
  push32(0x10722165u); f_107227f0();
  /* 10722165 mov esi, esp */
  ESI = (ESP);
  /* 10722167 push 5 */
  push32((uint32_t)(0x5u));
  /* 10722169 call dword ptr [0x10752438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752438))), 0x1072216fu);
  /* 1072216f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722172 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722174 call 0x107227f0 */
  push32(0x10722179u); f_107227f0();
L_10722179:;
  /* 10722179 mov esi, esp */
  ESI = (ESP);
  /* 1072217b push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1072217d call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10722183u);
  /* 10722183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722186 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722188 call 0x107227f0 */
  push32(0x1072218du); f_107227f0();
  /* 1072218d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722194 jne 0x107221f6 */
  if (!C.zf) goto L_107221f6;
  /* 10722196 mov esi, esp */
  ESI = (ESP);
  /* 10722198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072219a push 0x1074f428 */
  push32((uint32_t)(0x1074f428u));
  /* 1072219f call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x107221a5u);
  /* 107221a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107221a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107221aa call 0x107227f0 */
  push32(0x107221afu); f_107227f0();
  /* 107221af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107221b1 jne 0x107221f6 */
  if (!C.zf) goto L_107221f6;
  /* 107221b3 mov esi, esp */
  ESI = (ESP);
  /* 107221b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107221b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 107221b9 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x107221bfu);
  /* 107221bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107221c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107221c4 call 0x107227f0 */
  push32(0x107221c9u); f_107227f0();
  /* 107221c9 mov esi, esp */
  ESI = (ESP);
  /* 107221cb push 0 */
  push32((uint32_t)(0x0u));
  /* 107221cd push 0x1074f4a0 */
  push32((uint32_t)(0x1074f4a0u));
  /* 107221d2 call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x107221d8u);
  /* 107221d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107221db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107221dd call 0x107227f0 */
  push32(0x107221e2u); f_107227f0();
  /* 107221e2 mov esi, esp */
  ESI = (ESP);
  /* 107221e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 107221e6 call dword ptr [0x10752470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752470))), 0x107221ecu);
  /* 107221ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107221ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107221f1 call 0x107227f0 */
  push32(0x107221f6u); f_107227f0();
L_107221f6:;
  /* 107221f6 mov esi, esp */
  ESI = (ESP);
  /* 107221f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 107221fa call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x10722200u);
  /* 10722200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722203 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722205 call 0x107227f0 */
  push32(0x1072220au); f_107227f0();
  /* 1072220a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072220f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722211 je 0x10722273 */
  if (C.zf) goto L_10722273;
  /* 10722213 mov esi, esp */
  ESI = (ESP);
  /* 10722215 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722217 push 0x1074f440 */
  push32((uint32_t)(0x1074f440u));
  /* 1072221c call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x10722222u);
  /* 10722222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722227 call 0x107227f0 */
  push32(0x1072222cu); f_107227f0();
  /* 1072222c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072222e jle 0x10722273 */
  if ((C.zf||C.sf!=C.of)) goto L_10722273;
  /* 10722230 mov esi, esp */
  ESI = (ESP);
  /* 10722232 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722234 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10722236 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x1072223cu);
  /* 1072223c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072223f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722241 call 0x107227f0 */
  push32(0x10722246u); f_107227f0();
  /* 10722246 mov esi, esp */
  ESI = (ESP);
  /* 10722248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072224a push 0x1074f4a8 */
  push32((uint32_t)(0x1074f4a8u));
  /* 1072224f call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x10722255u);
  /* 10722255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722258 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072225a call 0x107227f0 */
  push32(0x1072225fu); f_107227f0();
  /* 1072225f mov esi, esp */
  ESI = (ESP);
  /* 10722261 push 5 */
  push32((uint32_t)(0x5u));
  /* 10722263 call dword ptr [0x10752438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752438))), 0x10722269u);
  /* 10722269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072226c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072226e call 0x107227f0 */
  push32(0x10722273u); f_107227f0();
L_10722273:;
  /* 10722273 mov esi, esp */
  ESI = (ESP);
  /* 10722275 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10722277 call dword ptr [0x10752410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752410))), 0x1072227du);
  /* 1072227d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722280 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722282 call 0x107227f0 */
  push32(0x10722287u); f_107227f0();
  /* 10722287 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072228c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072228e jne 0x107222f0 */
  if (!C.zf) goto L_107222f0;
  /* 10722290 mov esi, esp */
  ESI = (ESP);
  /* 10722292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722294 push 0x1074f440 */
  push32((uint32_t)(0x1074f440u));
  /* 10722299 call dword ptr [0x10752460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752460))), 0x1072229fu);
  /* 1072229f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107222a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107222a4 call 0x107227f0 */
  push32(0x107222a9u); f_107227f0();
  /* 107222a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107222ab jne 0x107222f0 */
  if (!C.zf) goto L_107222f0;
  /* 107222ad mov esi, esp */
  ESI = (ESP);
  /* 107222af push 1 */
  push32((uint32_t)(0x1u));
  /* 107222b1 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 107222b3 call dword ptr [0x10752408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752408))), 0x107222b9u);
  /* 107222b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107222bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107222be call 0x107227f0 */
  push32(0x107222c3u); f_107227f0();
  /* 107222c3 mov esi, esp */
  ESI = (ESP);
  /* 107222c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107222c7 push 0x1074f4a8 */
  push32((uint32_t)(0x1074f4a8u));
  /* 107222cc call dword ptr [0x10752424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752424))), 0x107222d2u);
  /* 107222d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107222d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107222d7 call 0x107227f0 */
  push32(0x107222dcu); f_107227f0();
  /* 107222dc mov esi, esp */
  ESI = (ESP);
  /* 107222de push 5 */
  push32((uint32_t)(0x5u));
  /* 107222e0 call dword ptr [0x10752470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752470))), 0x107222e6u);
  /* 107222e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107222e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107222eb call 0x107227f0 */
  push32(0x107222f0u); f_107227f0();
L_107222f0:;
  /* 107222f0 pop edi */
  EDI = (pop32());
  /* 107222f1 pop esi */
  ESI = (pop32());
  /* 107222f2 pop ebx */
  EBX = (pop32());
  /* 107222f3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107222f6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107222f8 call 0x107227f0 */
  push32(0x107222fdu); f_107227f0();
  /* 107222fd mov esp, ebp */
  ESP = (EBP);
  /* 107222ff pop ebp */
  EBP = (pop32());
  /* 10722300 ret  */
  ESPCHK(0x107214d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002690 @ 0x10722690 (63 bytes, 26 insns) */
void f_10722690(void) {
  FTRACE(0x10722690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722690 push ebp */
  push32((uint32_t)(EBP));
  /* 10722691 mov ebp, esp */
  EBP = (ESP);
  /* 10722693 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10722696 push ebx */
  push32((uint32_t)(EBX));
  /* 10722697 push esi */
  push32((uint32_t)(ESI));
  /* 10722698 push edi */
  push32((uint32_t)(EDI));
  /* 10722699 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1072269c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107226a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107226a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107226a8 mov esi, esp */
  ESI = (ESP);
  /* 107226aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107226ad push eax */
  push32((uint32_t)(EAX));
  /* 107226ae call dword ptr [0x1075240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075240c))), 0x107226b4u);
  /* 107226b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107226b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107226b9 call 0x107227f0 */
  push32(0x107226beu); f_107227f0();
  /* 107226be pop edi */
  EDI = (pop32());
  /* 107226bf pop esi */
  ESI = (pop32());
  /* 107226c0 pop ebx */
  EBX = (pop32());
  /* 107226c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107226c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107226c6 call 0x107227f0 */
  push32(0x107226cbu); f_107227f0();
  /* 107226cb mov esp, ebp */
  ESP = (EBP);
  /* 107226cd pop ebp */
  EBP = (pop32());
  /* 107226ce ret  */
  ESPCHK(0x10722690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x107226e0 (67 bytes, 28 insns) */
void f_107226e0(void) {
  FTRACE(0x107226e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107226e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107226e1 mov ebp, esp */
  EBP = (ESP);
  /* 107226e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107226e6 push ebx */
  push32((uint32_t)(EBX));
  /* 107226e7 push esi */
  push32((uint32_t)(ESI));
  /* 107226e8 push edi */
  push32((uint32_t)(EDI));
  /* 107226e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107226ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107226f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107226f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107226f8 mov esi, esp */
  ESI = (ESP);
  /* 107226fa mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 107226fd push eax */
  push32((uint32_t)(EAX));
  /* 107226fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722701 push ecx */
  push32((uint32_t)(ECX));
  /* 10722702 call dword ptr [0x10752404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752404))), 0x10722708u);
  /* 10722708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072270b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072270d call 0x107227f0 */
  push32(0x10722712u); f_107227f0();
  /* 10722712 pop edi */
  EDI = (pop32());
  /* 10722713 pop esi */
  ESI = (pop32());
  /* 10722714 pop ebx */
  EBX = (pop32());
  /* 10722715 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722718 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072271a call 0x107227f0 */
  push32(0x1072271fu); f_107227f0();
  /* 1072271f mov esp, ebp */
  ESP = (EBP);
  /* 10722721 pop ebp */
  EBP = (pop32());
  /* 10722722 ret  */
  ESPCHK(0x107226e0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x107227f0 (56 bytes, 28 insns) */
void f_107227f0(void) {
  FTRACE(0x107227f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107227f0 jne 0x107227f3 */
  if (!C.zf) goto L_107227f3;
  /* 107227f2 ret  */
  ESPCHK(0x107227f0u, _esp0);
  ESP += 4; return;
L_107227f3:;
  /* 107227f3 push ebp */
  push32((uint32_t)(EBP));
  /* 107227f4 mov ebp, esp */
  EBP = (ESP);
  /* 107227f6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107227f9 push eax */
  push32((uint32_t)(EAX));
  /* 107227fa push edx */
  push32((uint32_t)(EDX));
  /* 107227fb push ebx */
  push32((uint32_t)(EBX));
  /* 107227fc push esi */
  push32((uint32_t)(ESI));
  /* 107227fd push edi */
  push32((uint32_t)(EDI));
  /* 107227fe push 0x1074a1b8 */
  push32((uint32_t)(0x1074a1b8u));
  /* 10722803 push 0x1074a1b4 */
  push32((uint32_t)(0x1074a1b4u));
  /* 10722808 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1072280a push 0x1074a1a4 */
  push32((uint32_t)(0x1074a1a4u));
  /* 1072280f push 1 */
  push32((uint32_t)(0x1u));
  /* 10722811 call 0x10722bc0 */
  push32(0x10722816u); f_10722bc0();
  /* 10722816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722819 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072281c jne 0x1072281f */
  if (!C.zf) goto L_1072281f;
  /* 1072281e int3  */
  x86_unimpl("int3 @ 0x1072281e");
L_1072281f:;
  /* 1072281f pop edi */
  EDI = (pop32());
  /* 10722820 pop esi */
  ESI = (pop32());
  /* 10722821 pop ebx */
  EBX = (pop32());
  /* 10722822 pop edx */
  EDX = (pop32());
  /* 10722823 pop eax */
  EAX = (pop32());
  /* 10722824 mov esp, ebp */
  ESP = (EBP);
  /* 10722826 pop ebp */
  EBP = (pop32());
  /* 10722827 ret  */
  ESPCHK(0x107227f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10722830 (313 bytes, 78 insns) */
void f_10722830(void) {
  FTRACE(0x10722830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722830 push ebp */
  push32((uint32_t)(EBP));
  /* 10722831 mov ebp, esp */
  EBP = (ESP);
  /* 10722833 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722837 jne 0x107228f7 */
  if (!C.zf) goto L_107228f7;
  /* 1072283d call dword ptr [0x10752300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752300))), 0x10722843u);
  /* 10722843 mov dword ptr [0x1074f504], eax */
  w32((uint32_t)(0x1074f504), (EAX));
  /* 10722848 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072284a call 0x107262f0 */
  push32(0x1072284fu); f_107262f0();
  /* 1072284f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722854 jne 0x1072285d */
  if (!C.zf) goto L_1072285d;
  /* 10722856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10722858 jmp 0x10722965 */
  goto L_10722965;
L_1072285d:;
  /* 1072285d mov eax, dword ptr [0x1074f504] */
  EAX = (r32((uint32_t)(0x1074f504)));
  /* 10722862 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10722865 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072286a mov dword ptr [0x1074f510], eax */
  w32((uint32_t)(0x1074f510), (EAX));
  /* 1072286f mov ecx, dword ptr [0x1074f504] */
  ECX = (r32((uint32_t)(0x1074f504)));
  /* 10722875 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1072287b mov dword ptr [0x1074f50c], ecx */
  w32((uint32_t)(0x1074f50c), (ECX));
  /* 10722881 mov edx, dword ptr [0x1074f50c] */
  EDX = (r32((uint32_t)(0x1074f50c)));
  /* 10722887 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1072288a add edx, dword ptr [0x1074f510] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074f510))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10722890 mov dword ptr [0x1074f508], edx */
  w32((uint32_t)(0x1074f508), (EDX));
  /* 10722896 mov eax, dword ptr [0x1074f504] */
  EAX = (r32((uint32_t)(0x1074f504)));
  /* 1072289b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1072289e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107228a3 mov dword ptr [0x1074f504], eax */
  w32((uint32_t)(0x1074f504), (EAX));
  /* 107228a8 call 0x10723460 */
  push32(0x107228adu); f_10723460();
  /* 107228ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107228af jne 0x107228bd */
  if (!C.zf) goto L_107228bd;
  /* 107228b1 call 0x10726340 */
  push32(0x107228b6u); f_10726340();
  /* 107228b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107228b8 jmp 0x10722965 */
  goto L_10722965;
L_107228bd:;
  /* 107228bd call dword ptr [0x107522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522fc))), 0x107228c3u);
  /* 107228c3 mov dword ptr [0x1075104c], eax */
  w32((uint32_t)(0x1075104c), (EAX));
  /* 107228c8 call 0x107260d0 */
  push32(0x107228cdu); f_107260d0();
  /* 107228cd mov dword ptr [0x1074f4ec], eax */
  w32((uint32_t)(0x1074f4ec), (EAX));
  /* 107228d2 call 0x10723710 */
  push32(0x107228d7u); f_10723710();
  /* 107228d7 call 0x10725bc0 */
  push32(0x107228dcu); f_10725bc0();
  /* 107228dc call 0x10725a70 */
  push32(0x107228e1u); f_10725a70();
  /* 107228e1 call 0x10723260 */
  push32(0x107228e6u); f_10723260();
  /* 107228e6 mov ecx, dword ptr [0x1074f4e8] */
  ECX = (r32((uint32_t)(0x1074f4e8)));
  /* 107228ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107228ef mov dword ptr [0x1074f4e8], ecx */
  w32((uint32_t)(0x1074f4e8), (ECX));
  /* 107228f5 jmp 0x10722960 */
  goto L_10722960;
L_107228f7:;
  /* 107228f7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107228fb jne 0x10722950 */
  if (!C.zf) goto L_10722950;
  /* 107228fd cmp dword ptr [0x1074f4e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722904 jle 0x1072294a */
  if ((C.zf||C.sf!=C.of)) goto L_1072294a;
  /* 10722906 mov edx, dword ptr [0x1074f4e8] */
  EDX = (r32((uint32_t)(0x1074f4e8)));
  /* 1072290c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072290f mov dword ptr [0x1074f4e8], edx */
  w32((uint32_t)(0x1074f4e8), (EDX));
  /* 10722915 cmp dword ptr [0x1074f53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072291c jne 0x10722923 */
  if (!C.zf) goto L_10722923;
  /* 1072291e call 0x107232e0 */
  push32(0x10722923u); f_107232e0();
L_10722923:;
  /* 10722923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10722925 call 0x10725010 */
  push32(0x1072292au); f_10725010();
  /* 1072292a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072292d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10722930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722932 je 0x10722939 */
  if (C.zf) goto L_10722939;
  /* 10722934 call 0x10725920 */
  push32(0x10722939u); f_10725920();
L_10722939:;
  /* 10722939 call 0x10723a40 */
  push32(0x1072293eu); f_10723a40();
  /* 1072293e call 0x107234f0 */
  push32(0x10722943u); f_107234f0();
  /* 10722943 call 0x10726340 */
  push32(0x10722948u); f_10726340();
  /* 10722948 jmp 0x1072294e */
  goto L_1072294e;
L_1072294a:;
  /* 1072294a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072294c jmp 0x10722965 */
  goto L_10722965;
L_1072294e:;
  /* 1072294e jmp 0x10722960 */
  goto L_10722960;
L_10722950:;
  /* 10722950 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722954 jne 0x10722960 */
  if (!C.zf) goto L_10722960;
  /* 10722956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722958 call 0x107235e0 */
  push32(0x1072295du); f_107235e0();
  /* 1072295d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722960:;
  /* 10722960 mov eax, 1 */
  EAX = (0x1u);
L_10722965:;
  /* 10722965 pop ebp */
  EBP = (pop32());
  /* 10722966 ret 0xc */
  ESPCHK(0x10722830u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10722970 (243 bytes, 86 insns) */
void f_10722970(void) {
  FTRACE(0x10722970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722970 push ebp */
  push32((uint32_t)(EBP));
  /* 10722971 mov ebp, esp */
  EBP = (ESP);
  /* 10722973 push ecx */
  push32((uint32_t)(ECX));
  /* 10722974 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1072297b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072297f jne 0x10722991 */
  if (!C.zf) goto L_10722991;
  /* 10722981 cmp dword ptr [0x1074f4e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722988 jne 0x10722991 */
  if (!C.zf) goto L_10722991;
  /* 1072298a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072298c jmp 0x10722a5d */
  goto L_10722a5d;
L_10722991:;
  /* 10722991 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722995 je 0x1072299d */
  if (C.zf) goto L_1072299d;
  /* 10722997 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072299b jne 0x107229df */
  if (!C.zf) goto L_107229df;
L_1072299d:;
  /* 1072299d cmp dword ptr [0x1075105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1075105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107229a4 je 0x107229bb */
  if (C.zf) goto L_107229bb;
  /* 107229a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107229a9 push eax */
  push32((uint32_t)(EAX));
  /* 107229aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107229ad push ecx */
  push32((uint32_t)(ECX));
  /* 107229ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107229b1 push edx */
  push32((uint32_t)(EDX));
  /* 107229b2 call dword ptr [0x1075105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075105c))), 0x107229b8u);
  /* 107229b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107229bb:;
  /* 107229bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107229bf je 0x107229d5 */
  if (C.zf) goto L_107229d5;
  /* 107229c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107229c4 push eax */
  push32((uint32_t)(EAX));
  /* 107229c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107229c8 push ecx */
  push32((uint32_t)(ECX));
  /* 107229c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107229cc push edx */
  push32((uint32_t)(EDX));
  /* 107229cd call 0x10722830 */
  push32(0x107229d2u); f_10722830();
  /* 107229d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107229d5:;
  /* 107229d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107229d9 jne 0x107229df */
  if (!C.zf) goto L_107229df;
  /* 107229db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107229dd jmp 0x10722a5d */
  goto L_10722a5d;
L_107229df:;
  /* 107229df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107229e2 push eax */
  push32((uint32_t)(EAX));
  /* 107229e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107229e6 push ecx */
  push32((uint32_t)(ECX));
  /* 107229e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107229ea push edx */
  push32((uint32_t)(EDX));
  /* 107229eb call 0x10721014 */
  push32(0x107229f0u); f_10721014();
  /* 107229f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107229f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107229f7 jne 0x10722a0e */
  if (!C.zf) goto L_10722a0e;
  /* 107229f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107229fd jne 0x10722a0e */
  if (!C.zf) goto L_10722a0e;
  /* 107229ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10722a02 push eax */
  push32((uint32_t)(EAX));
  /* 10722a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722a08 push ecx */
  push32((uint32_t)(ECX));
  /* 10722a09 call 0x10722830 */
  push32(0x10722a0eu); f_10722830();
L_10722a0e:;
  /* 10722a0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a12 je 0x10722a1a */
  if (C.zf) goto L_10722a1a;
  /* 10722a14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a18 jne 0x10722a5a */
  if (!C.zf) goto L_10722a5a;
L_10722a1a:;
  /* 10722a1a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10722a1d push edx */
  push32((uint32_t)(EDX));
  /* 10722a1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722a21 push eax */
  push32((uint32_t)(EAX));
  /* 10722a22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722a25 push ecx */
  push32((uint32_t)(ECX));
  /* 10722a26 call 0x10722830 */
  push32(0x10722a2bu); f_10722830();
  /* 10722a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722a2d jne 0x10722a36 */
  if (!C.zf) goto L_10722a36;
  /* 10722a2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10722a36:;
  /* 10722a36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a3a je 0x10722a5a */
  if (C.zf) goto L_10722a5a;
  /* 10722a3c cmp dword ptr [0x1075105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1075105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a43 je 0x10722a5a */
  if (C.zf) goto L_10722a5a;
  /* 10722a45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10722a48 push edx */
  push32((uint32_t)(EDX));
  /* 10722a49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722a4c push eax */
  push32((uint32_t)(EAX));
  /* 10722a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722a50 push ecx */
  push32((uint32_t)(ECX));
  /* 10722a51 call dword ptr [0x1075105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075105c))), 0x10722a57u);
  /* 10722a57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10722a5a:;
  /* 10722a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10722a5d:;
  /* 10722a5d mov esp, ebp */
  ESP = (EBP);
  /* 10722a5f pop ebp */
  EBP = (pop32());
  /* 10722a60 ret 0xc */
  ESPCHK(0x10722970u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10722a70 (58 bytes, 18 insns) */
void f_10722a70(void) {
  FTRACE(0x10722a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10722a71 mov ebp, esp */
  EBP = (ESP);
  /* 10722a73 cmp dword ptr [0x1074f4f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a7a je 0x10722a8e */
  if (C.zf) goto L_10722a8e;
  /* 10722a7c cmp dword ptr [0x1074f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a83 jne 0x10722a93 */
  if (!C.zf) goto L_10722a93;
  /* 10722a85 cmp dword ptr [0x1074f4f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722a8c jne 0x10722a93 */
  if (!C.zf) goto L_10722a93;
L_10722a8e:;
  /* 10722a8e call 0x107263e0 */
  push32(0x10722a93u); f_107263e0();
L_10722a93:;
  /* 10722a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722a96 push eax */
  push32((uint32_t)(EAX));
  /* 10722a97 call 0x10726430 */
  push32(0x10722a9cu); f_10726430();
  /* 10722a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722a9f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10722aa4 call dword ptr [0x1074da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074da30))), 0x10722aaau);
  /* 10722aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722aad pop ebp */
  EBP = (pop32());
  /* 10722aae ret  */
  ESPCHK(0x10722a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab0 @ 0x10722ab0 (11 bytes, 5 insns) */
void f_10722ab0(void) {
  FTRACE(0x10722ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10722ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10722ab3 call dword ptr [0x10752304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752304))), 0x10722ab9u);
  /* 10722ab9 pop ebp */
  EBP = (pop32());
  /* 10722aba ret  */
  ESPCHK(0x10722ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac0 @ 0x10722ac0 (87 bytes, 30 insns) */
void f_10722ac0(void) {
  FTRACE(0x10722ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10722ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10722ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10722ac4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722ac8 jl 0x10722ad0 */
  if ((C.sf!=C.of)) goto L_10722ad0;
  /* 10722aca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722ace jl 0x10722ad5 */
  if ((C.sf!=C.of)) goto L_10722ad5;
L_10722ad0:;
  /* 10722ad0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722ad3 jmp 0x10722b13 */
  goto L_10722b13;
L_10722ad5:;
  /* 10722ad5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722ad9 jne 0x10722ae7 */
  if (!C.zf) goto L_10722ae7;
  /* 10722adb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722ade mov eax, dword ptr [eax*4 + 0x1074da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1074da38)));
  /* 10722ae5 jmp 0x10722b13 */
  goto L_10722b13;
L_10722ae7:;
  /* 10722ae7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722aea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10722aed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10722aef je 0x10722af6 */
  if (C.zf) goto L_10722af6;
  /* 10722af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722af4 jmp 0x10722b13 */
  goto L_10722b13;
L_10722af6:;
  /* 10722af6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722af9 mov eax, dword ptr [edx*4 + 0x1074da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1074da38)));
  /* 10722b00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10722b03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722b06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722b09 mov dword ptr [ecx*4 + 0x1074da38], edx */
  w32((uint32_t)(ECX*4 + 0x1074da38), (EDX));
  /* 10722b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10722b13:;
  /* 10722b13 mov esp, ebp */
  ESP = (EBP);
  /* 10722b15 pop ebp */
  EBP = (pop32());
  /* 10722b16 ret  */
  ESPCHK(0x10722ac0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10722b20 (126 bytes, 38 insns) */
void f_10722b20(void) {
  FTRACE(0x10722b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10722b21 mov ebp, esp */
  EBP = (ESP);
  /* 10722b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10722b24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722b28 jl 0x10722b30 */
  if ((C.sf!=C.of)) goto L_10722b30;
  /* 10722b2a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722b2e jl 0x10722b37 */
  if ((C.sf!=C.of)) goto L_10722b37;
L_10722b30:;
  /* 10722b30 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10722b35 jmp 0x10722b9a */
  goto L_10722b9a;
L_10722b37:;
  /* 10722b37 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722b3b jne 0x10722b49 */
  if (!C.zf) goto L_10722b49;
  /* 10722b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722b40 mov eax, dword ptr [eax*4 + 0x1074da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1074da44)));
  /* 10722b47 jmp 0x10722b9a */
  goto L_10722b9a;
L_10722b49:;
  /* 10722b49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722b4c mov edx, dword ptr [ecx*4 + 0x1074da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da44)));
  /* 10722b53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10722b56 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722b5a jne 0x10722b70 */
  if (!C.zf) goto L_10722b70;
  /* 10722b5c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10722b5e call dword ptr [0x10752308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752308))), 0x10722b64u);
  /* 10722b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722b67 mov dword ptr [ecx*4 + 0x1074da44], eax */
  w32((uint32_t)(ECX*4 + 0x1074da44), (EAX));
  /* 10722b6e jmp 0x10722b97 */
  goto L_10722b97;
L_10722b70:;
  /* 10722b70 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722b74 jne 0x10722b8a */
  if (!C.zf) goto L_10722b8a;
  /* 10722b76 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10722b78 call dword ptr [0x10752308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752308))), 0x10722b7eu);
  /* 10722b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722b81 mov dword ptr [edx*4 + 0x1074da44], eax */
  w32((uint32_t)(EDX*4 + 0x1074da44), (EAX));
  /* 10722b88 jmp 0x10722b97 */
  goto L_10722b97;
L_10722b8a:;
  /* 10722b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722b8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722b90 mov dword ptr [eax*4 + 0x1074da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1074da44), (ECX));
L_10722b97:;
  /* 10722b97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10722b9a:;
  /* 10722b9a mov esp, ebp */
  ESP = (EBP);
  /* 10722b9c pop ebp */
  EBP = (pop32());
  /* 10722b9d ret  */
  ESPCHK(0x10722b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x10722ba0 (28 bytes, 11 insns) */
void f_10722ba0(void) {
  FTRACE(0x10722ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10722ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10722ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10722ba4 mov eax, dword ptr [0x10751040] */
  EAX = (r32((uint32_t)(0x10751040)));
  /* 10722ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10722bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722baf mov dword ptr [0x10751040], ecx */
  w32((uint32_t)(0x10751040), (ECX));
  /* 10722bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10722bb8 mov esp, ebp */
  ESP = (EBP);
  /* 10722bba pop ebp */
  EBP = (pop32());
  /* 10722bbb ret  */
  ESPCHK(0x10722ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc0 @ 0x10722bc0 (912 bytes, 248 insns) */
void f_10722bc0(void) {
  FTRACE(0x10722bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10722bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10722bc3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10722bc8 call 0x10726ca0 */
  push32(0x10722bcdu); f_10726ca0();
  /* 10722bcd push edi */
  push32((uint32_t)(EDI));
  /* 10722bce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10722bd5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10722bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10722bdc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10722be2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10722be4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10722be6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10722be7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10722bee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10722bf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10722bf5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10722bfb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10722bfd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10722bff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10722c00 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10722c07 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10722c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10722c0e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10722c14 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10722c16 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10722c18 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10722c19 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10722c1c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10722c22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722c26 jl 0x10722c2e */
  if ((C.sf!=C.of)) goto L_10722c2e;
  /* 10722c28 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722c2c jl 0x10722c36 */
  if ((C.sf!=C.of)) goto L_10722c36;
L_10722c2e:;
  /* 10722c2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722c31 jmp 0x10722f4b */
  goto L_10722f4b;
L_10722c36:;
  /* 10722c36 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722c3a jne 0x10722ce0 */
  if (!C.zf) goto L_10722ce0;
  /* 10722c40 push 0x1074da34 */
  push32((uint32_t)(0x1074da34u));
  /* 10722c45 call dword ptr [0x10752320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752320))), 0x10722c4bu);
  /* 10722c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722c4d jle 0x10722ce0 */
  if ((C.zf||C.sf!=C.of)) goto L_10722ce0;
  /* 10722c53 cmp dword ptr [0x1074f4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722c5a jne 0x10722c9e */
  if (!C.zf) goto L_10722c9e;
  /* 10722c5c push 0x1074a360 */
  push32((uint32_t)(0x1074a360u));
  /* 10722c61 call dword ptr [0x1075231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075231c))), 0x10722c67u);
  /* 10722c67 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10722c6d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722c74 je 0x10722c96 */
  if (C.zf) goto L_10722c96;
  /* 10722c76 push 0x1074a354 */
  push32((uint32_t)(0x1074a354u));
  /* 10722c7b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10722c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10722c82 call dword ptr [0x10752318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752318))), 0x10722c88u);
  /* 10722c88 mov dword ptr [0x1074f4fc], eax */
  w32((uint32_t)(0x1074f4fc), (EAX));
  /* 10722c8d cmp dword ptr [0x1074f4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722c94 jne 0x10722c9e */
  if (!C.zf) goto L_10722c9e;
L_10722c96:;
  /* 10722c96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722c99 jmp 0x10722f4b */
  goto L_10722f4b;
L_10722c9e:;
  /* 10722c9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10722ca1 push edx */
  push32((uint32_t)(EDX));
  /* 10722ca2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722ca5 push eax */
  push32((uint32_t)(EAX));
  /* 10722ca6 push 0x1074a320 */
  push32((uint32_t)(0x1074a320u));
  /* 10722cab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10722cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10722cb2 call dword ptr [0x1074f4fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f4fc))), 0x10722cb8u);
  /* 10722cb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722cbb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10722cc1 push edx */
  push32((uint32_t)(EDX));
  /* 10722cc2 call dword ptr [0x10752314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752314))), 0x10722cc8u);
  /* 10722cc8 push 0x1074da34 */
  push32((uint32_t)(0x1074da34u));
  /* 10722ccd call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x10722cd3u);
  /* 10722cd3 call 0x10722ab0 */
  push32(0x10722cd8u); f_10722ab0();
  /* 10722cd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10722cdb jmp 0x10722f4b */
  goto L_10722f4b;
L_10722ce0:;
  /* 10722ce0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722ce4 je 0x10722d1d */
  if (C.zf) goto L_10722d1d;
  /* 10722ce6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10722cec push eax */
  push32((uint32_t)(EAX));
  /* 10722ced mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10722cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10722cf1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10722cf6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10722cfc push edx */
  push32((uint32_t)(EDX));
  /* 10722cfd call 0x10726ba0 */
  push32(0x10722d02u); f_10726ba0();
  /* 10722d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722d05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722d07 jge 0x10722d1d */
  if ((C.sf==C.of)) goto L_10722d1d;
  /* 10722d09 push 0x1074a2f4 */
  push32((uint32_t)(0x1074a2f4u));
  /* 10722d0e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10722d14 push eax */
  push32((uint32_t)(EAX));
  /* 10722d15 call 0x10726ab0 */
  push32(0x10722d1au); f_10726ab0();
  /* 10722d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722d1d:;
  /* 10722d1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722d21 jne 0x10722d55 */
  if (!C.zf) goto L_10722d55;
  /* 10722d23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722d27 je 0x10722d35 */
  if (C.zf) goto L_10722d35;
  /* 10722d29 mov dword ptr [ebp - 0x3028], 0x1074a2e0 */
  w32((uint32_t)(EBP + -0x3028), (0x1074a2e0u));
  /* 10722d33 jmp 0x10722d3f */
  goto L_10722d3f;
L_10722d35:;
  /* 10722d35 mov dword ptr [ebp - 0x3028], 0x1074a2cc */
  w32((uint32_t)(EBP + -0x3028), (0x1074a2ccu));
L_10722d3f:;
  /* 10722d3f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10722d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10722d46 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10722d4c push edx */
  push32((uint32_t)(EDX));
  /* 10722d4d call 0x10726ab0 */
  push32(0x10722d52u); f_10726ab0();
  /* 10722d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722d55:;
  /* 10722d55 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10722d5b push eax */
  push32((uint32_t)(EAX));
  /* 10722d5c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10722d62 push ecx */
  push32((uint32_t)(ECX));
  /* 10722d63 call 0x10726ac0 */
  push32(0x10722d68u); f_10726ac0();
  /* 10722d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722d6b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722d6f jne 0x10722daa */
  if (!C.zf) goto L_10722daa;
  /* 10722d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722d74 mov eax, dword ptr [edx*4 + 0x1074da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1074da38)));
  /* 10722d7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10722d7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722d80 je 0x10722d96 */
  if (C.zf) goto L_10722d96;
  /* 10722d82 push 0x1074a2c8 */
  push32((uint32_t)(0x1074a2c8u));
  /* 10722d87 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10722d8d push ecx */
  push32((uint32_t)(ECX));
  /* 10722d8e call 0x10726ac0 */
  push32(0x10722d93u); f_10726ac0();
  /* 10722d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722d96:;
  /* 10722d96 push 0x1074a2c4 */
  push32((uint32_t)(0x1074a2c4u));
  /* 10722d9b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10722da1 push edx */
  push32((uint32_t)(EDX));
  /* 10722da2 call 0x10726ac0 */
  push32(0x10722da7u); f_10726ac0();
  /* 10722da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722daa:;
  /* 10722daa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722dae je 0x10722df2 */
  if (C.zf) goto L_10722df2;
  /* 10722db0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10722db6 push eax */
  push32((uint32_t)(EAX));
  /* 10722db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10722dba push ecx */
  push32((uint32_t)(ECX));
  /* 10722dbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722dbe push edx */
  push32((uint32_t)(EDX));
  /* 10722dbf push 0x1074a2b8 */
  push32((uint32_t)(0x1074a2b8u));
  /* 10722dc4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10722dc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10722dcf push eax */
  push32((uint32_t)(EAX));
  /* 10722dd0 call 0x107269b0 */
  push32(0x10722dd5u); f_107269b0();
  /* 10722dd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722dda jge 0x10722df0 */
  if ((C.sf==C.of)) goto L_10722df0;
  /* 10722ddc push 0x1074a2f4 */
  push32((uint32_t)(0x1074a2f4u));
  /* 10722de1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10722de7 push ecx */
  push32((uint32_t)(ECX));
  /* 10722de8 call 0x10726ab0 */
  push32(0x10722dedu); f_10726ab0();
  /* 10722ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722df0:;
  /* 10722df0 jmp 0x10722e08 */
  goto L_10722e08;
L_10722df2:;
  /* 10722df2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10722df8 push edx */
  push32((uint32_t)(EDX));
  /* 10722df9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10722dff push eax */
  push32((uint32_t)(EAX));
  /* 10722e00 call 0x10726ab0 */
  push32(0x10722e05u); f_10726ab0();
  /* 10722e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722e08:;
  /* 10722e08 cmp dword ptr [0x10751040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10751040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722e0f je 0x10722e4c */
  if (C.zf) goto L_10722e4c;
  /* 10722e11 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10722e17 push ecx */
  push32((uint32_t)(ECX));
  /* 10722e18 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10722e1e push edx */
  push32((uint32_t)(EDX));
  /* 10722e1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722e22 push eax */
  push32((uint32_t)(EAX));
  /* 10722e23 call dword ptr [0x10751040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10751040))), 0x10722e29u);
  /* 10722e29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722e2e je 0x10722e4c */
  if (C.zf) goto L_10722e4c;
  /* 10722e30 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722e34 jne 0x10722e41 */
  if (!C.zf) goto L_10722e41;
  /* 10722e36 push 0x1074da34 */
  push32((uint32_t)(0x1074da34u));
  /* 10722e3b call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x10722e41u);
L_10722e41:;
  /* 10722e41 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10722e47 jmp 0x10722f4b */
  goto L_10722f4b;
L_10722e4c:;
  /* 10722e4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722e4f mov edx, dword ptr [ecx*4 + 0x1074da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da38)));
  /* 10722e56 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10722e59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10722e5b je 0x10722e9b */
  if (C.zf) goto L_10722e9b;
  /* 10722e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722e60 cmp dword ptr [eax*4 + 0x1074da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1074da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722e68 je 0x10722e9b */
  if (C.zf) goto L_10722e9b;
  /* 10722e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10722e6c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10722e72 push ecx */
  push32((uint32_t)(ECX));
  /* 10722e73 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10722e79 push edx */
  push32((uint32_t)(EDX));
  /* 10722e7a call 0x10726930 */
  push32(0x10722e7fu); f_10726930();
  /* 10722e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722e82 push eax */
  push32((uint32_t)(EAX));
  /* 10722e83 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10722e89 push eax */
  push32((uint32_t)(EAX));
  /* 10722e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722e8d mov edx, dword ptr [ecx*4 + 0x1074da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da44)));
  /* 10722e94 push edx */
  push32((uint32_t)(EDX));
  /* 10722e95 call dword ptr [0x1075230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075230c))), 0x10722e9bu);
L_10722e9b:;
  /* 10722e9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722e9e mov ecx, dword ptr [eax*4 + 0x1074da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074da38)));
  /* 10722ea5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10722ea8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10722eaa je 0x10722eb9 */
  if (C.zf) goto L_10722eb9;
  /* 10722eac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10722eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10722eb3 call dword ptr [0x10752314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752314))), 0x10722eb9u);
L_10722eb9:;
  /* 10722eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722ebc mov ecx, dword ptr [eax*4 + 0x1074da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074da38)));
  /* 10722ec3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10722ec6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10722ec8 je 0x10722f38 */
  if (C.zf) goto L_10722f38;
  /* 10722eca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722ece je 0x10722eed */
  if (C.zf) goto L_10722eed;
  /* 10722ed0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10722ed2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10722ed8 push edx */
  push32((uint32_t)(EDX));
  /* 10722ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10722edc push eax */
  push32((uint32_t)(EAX));
  /* 10722edd call 0x10726640 */
  push32(0x10722ee2u); f_10726640();
  /* 10722ee2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722ee5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10722eeb jmp 0x10722ef7 */
  goto L_10722ef7;
L_10722eed:;
  /* 10722eed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10722ef7:;
  /* 10722ef7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10722efd push ecx */
  push32((uint32_t)(ECX));
  /* 10722efe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10722f01 push edx */
  push32((uint32_t)(EDX));
  /* 10722f02 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10722f08 push eax */
  push32((uint32_t)(EAX));
  /* 10722f09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10722f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10722f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10722f10 push edx */
  push32((uint32_t)(EDX));
  /* 10722f11 call 0x10722f50 */
  push32(0x10722f16u); f_10722f50();
  /* 10722f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722f19 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10722f1f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722f23 jne 0x10722f30 */
  if (!C.zf) goto L_10722f30;
  /* 10722f25 push 0x1074da34 */
  push32((uint32_t)(0x1074da34u));
  /* 10722f2a call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x10722f30u);
L_10722f30:;
  /* 10722f30 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10722f36 jmp 0x10722f4b */
  goto L_10722f4b;
L_10722f38:;
  /* 10722f38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722f3c jne 0x10722f49 */
  if (!C.zf) goto L_10722f49;
  /* 10722f3e push 0x1074da34 */
  push32((uint32_t)(0x1074da34u));
  /* 10722f43 call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x10722f49u);
L_10722f49:;
  /* 10722f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10722f4b:;
  /* 10722f4b pop edi */
  EDI = (pop32());
  /* 10722f4c mov esp, ebp */
  ESP = (EBP);
  /* 10722f4e pop ebp */
  EBP = (pop32());
  /* 10722f4f ret  */
  ESPCHK(0x10722bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f50 @ 0x10722f50 (780 bytes, 197 insns) */
void f_10722f50(void) {
  FTRACE(0x10722f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10722f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10722f51 mov ebp, esp */
  EBP = (ESP);
  /* 10722f53 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10722f58 call 0x10726ca0 */
  push32(0x10722f5du); f_10726ca0();
L_10722f5d:;
  /* 10722f5d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722f61 jne 0x10722f88 */
  if (!C.zf) goto L_10722f88;
  /* 10722f63 push 0x1074a4b0 */
  push32((uint32_t)(0x1074a4b0u));
  /* 10722f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10722f6a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10722f6f push 0x1074a4a4 */
  push32((uint32_t)(0x1074a4a4u));
  /* 10722f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10722f76 call 0x10722bc0 */
  push32(0x10722f7bu); f_10722bc0();
  /* 10722f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722f81 jne 0x10722f88 */
  if (!C.zf) goto L_10722f88;
  /* 10722f83 call 0x10722ab0 */
  push32(0x10722f88u); f_10722ab0();
L_10722f88:;
  /* 10722f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10722f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722f8c jne 0x10722f5d */
  if (!C.zf) goto L_10722f5d;
  /* 10722f8e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10722f93 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10722f99 push ecx */
  push32((uint32_t)(ECX));
  /* 10722f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10722f9c call dword ptr [0x10752324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752324))), 0x10722fa2u);
  /* 10722fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10722fa4 jne 0x10722fba */
  if (!C.zf) goto L_10722fba;
  /* 10722fa6 push 0x1074a48c */
  push32((uint32_t)(0x1074a48cu));
  /* 10722fab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10722fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10722fb2 call 0x10726ab0 */
  push32(0x10722fb7u); f_10726ab0();
  /* 10722fb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722fba:;
  /* 10722fba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10722fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10722fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10722fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10722fc7 call 0x10726930 */
  push32(0x10722fccu); f_10726930();
  /* 10722fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722fcf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10722fd2 jbe 0x10722ffd */
  if ((C.cf||C.zf)) goto L_10722ffd;
  /* 10722fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10722fd7 push edx */
  push32((uint32_t)(EDX));
  /* 10722fd8 call 0x10726930 */
  push32(0x10722fddu); f_10726930();
  /* 10722fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10722fe0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10722fe3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10722fe7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10722fea push 3 */
  push32((uint32_t)(0x3u));
  /* 10722fec push 0x1074a488 */
  push32((uint32_t)(0x1074a488u));
  /* 10722ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10722ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10722ff5 call 0x10727320 */
  push32(0x10722ffau); f_10727320();
  /* 10722ffa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10722ffd:;
  /* 10722ffd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723000 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10723006 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072300d je 0x10723058 */
  if (C.zf) goto L_10723058;
  /* 1072300f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10723015 push edx */
  push32((uint32_t)(EDX));
  /* 10723016 call 0x10726930 */
  push32(0x1072301bu); f_10726930();
  /* 1072301b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072301e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723021 jbe 0x10723058 */
  if ((C.cf||C.zf)) goto L_10723058;
  /* 10723023 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10723029 push eax */
  push32((uint32_t)(EAX));
  /* 1072302a call 0x10726930 */
  push32(0x1072302fu); f_10726930();
  /* 1072302f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723032 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10723038 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1072303c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10723042 push 3 */
  push32((uint32_t)(0x3u));
  /* 10723044 push 0x1074a488 */
  push32((uint32_t)(0x1074a488u));
  /* 10723049 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1072304f push eax */
  push32((uint32_t)(EAX));
  /* 10723050 call 0x10727320 */
  push32(0x10723055u); f_10727320();
  /* 10723055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10723058:;
  /* 10723058 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072305c jne 0x1072306a */
  if (!C.zf) goto L_1072306a;
  /* 1072305e mov dword ptr [ebp - 0x1114], 0x1074a414 */
  w32((uint32_t)(EBP + -0x1114), (0x1074a414u));
  /* 10723068 jmp 0x10723074 */
  goto L_10723074;
L_1072306a:;
  /* 1072306a mov dword ptr [ebp - 0x1114], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1114), (0x1074a1b4u));
L_10723074:;
  /* 10723074 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723077 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072307a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072307c je 0x10723089 */
  if (C.zf) goto L_10723089;
  /* 1072307e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723081 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10723087 jmp 0x10723093 */
  goto L_10723093;
L_10723089:;
  /* 10723089 mov dword ptr [ebp - 0x1118], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1118), (0x1074a1b4u));
L_10723093:;
  /* 10723093 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723096 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10723099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072309b je 0x107230af */
  if (C.zf) goto L_107230af;
  /* 1072309d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107230a1 jne 0x107230af */
  if (!C.zf) goto L_107230af;
  /* 107230a3 mov dword ptr [ebp - 0x111c], 0x1074a404 */
  w32((uint32_t)(EBP + -0x111c), (0x1074a404u));
  /* 107230ad jmp 0x107230b9 */
  goto L_107230b9;
L_107230af:;
  /* 107230af mov dword ptr [ebp - 0x111c], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x111c), (0x1074a1b4u));
L_107230b9:;
  /* 107230b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107230bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107230bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107230c1 je 0x107230cf */
  if (C.zf) goto L_107230cf;
  /* 107230c3 mov dword ptr [ebp - 0x1120], 0x1074a400 */
  w32((uint32_t)(EBP + -0x1120), (0x1074a400u));
  /* 107230cd jmp 0x107230d9 */
  goto L_107230d9;
L_107230cf:;
  /* 107230cf mov dword ptr [ebp - 0x1120], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1120), (0x1074a1b4u));
L_107230d9:;
  /* 107230d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107230dd je 0x107230ea */
  if (C.zf) goto L_107230ea;
  /* 107230df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107230e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 107230e8 jmp 0x107230f4 */
  goto L_107230f4;
L_107230ea:;
  /* 107230ea mov dword ptr [ebp - 0x1124], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1124), (0x1074a1b4u));
L_107230f4:;
  /* 107230f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107230f8 je 0x10723106 */
  if (C.zf) goto L_10723106;
  /* 107230fa mov dword ptr [ebp - 0x1128], 0x1074a3f8 */
  w32((uint32_t)(EBP + -0x1128), (0x1074a3f8u));
  /* 10723104 jmp 0x10723110 */
  goto L_10723110;
L_10723106:;
  /* 10723106 mov dword ptr [ebp - 0x1128], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1128), (0x1074a1b4u));
L_10723110:;
  /* 10723110 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723114 je 0x10723121 */
  if (C.zf) goto L_10723121;
  /* 10723116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723119 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1072311f jmp 0x1072312b */
  goto L_1072312b;
L_10723121:;
  /* 10723121 mov dword ptr [ebp - 0x112c], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x112c), (0x1074a1b4u));
L_1072312b:;
  /* 1072312b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072312f je 0x1072313d */
  if (C.zf) goto L_1072313d;
  /* 10723131 mov dword ptr [ebp - 0x1130], 0x1074a3f0 */
  w32((uint32_t)(EBP + -0x1130), (0x1074a3f0u));
  /* 1072313b jmp 0x10723147 */
  goto L_10723147;
L_1072313d:;
  /* 1072313d mov dword ptr [ebp - 0x1130], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1130), (0x1074a1b4u));
L_10723147:;
  /* 10723147 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072314e je 0x1072315e */
  if (C.zf) goto L_1072315e;
  /* 10723150 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10723156 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1072315c jmp 0x10723168 */
  goto L_10723168;
L_1072315e:;
  /* 1072315e mov dword ptr [ebp - 0x1134], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1134), (0x1074a1b4u));
L_10723168:;
  /* 10723168 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072316f je 0x1072317d */
  if (C.zf) goto L_1072317d;
  /* 10723171 mov dword ptr [ebp - 0x1138], 0x1074a3e4 */
  w32((uint32_t)(EBP + -0x1138), (0x1074a3e4u));
  /* 1072317b jmp 0x10723187 */
  goto L_10723187;
L_1072317d:;
  /* 1072317d mov dword ptr [ebp - 0x1138], 0x1074a1b4 */
  w32((uint32_t)(EBP + -0x1138), (0x1074a1b4u));
L_10723187:;
  /* 10723187 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1072318d push edx */
  push32((uint32_t)(EDX));
  /* 1072318e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10723194 push eax */
  push32((uint32_t)(EAX));
  /* 10723195 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1072319b push ecx */
  push32((uint32_t)(ECX));
  /* 1072319c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 107231a2 push edx */
  push32((uint32_t)(EDX));
  /* 107231a3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 107231a9 push eax */
  push32((uint32_t)(EAX));
  /* 107231aa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 107231b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107231b1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 107231b7 push edx */
  push32((uint32_t)(EDX));
  /* 107231b8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 107231be push eax */
  push32((uint32_t)(EAX));
  /* 107231bf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 107231c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107231c6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 107231cc push edx */
  push32((uint32_t)(EDX));
  /* 107231cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107231d0 push eax */
  push32((uint32_t)(EAX));
  /* 107231d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107231d4 mov edx, dword ptr [ecx*4 + 0x1074da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da50)));
  /* 107231db push edx */
  push32((uint32_t)(EDX));
  /* 107231dc push 0x1074a390 */
  push32((uint32_t)(0x1074a390u));
  /* 107231e1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107231e6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 107231ec push eax */
  push32((uint32_t)(EAX));
  /* 107231ed call 0x107269b0 */
  push32(0x107231f2u); f_107269b0();
  /* 107231f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107231f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107231f7 jge 0x1072320d */
  if ((C.sf==C.of)) goto L_1072320d;
  /* 107231f9 push 0x1074a2f4 */
  push32((uint32_t)(0x1074a2f4u));
  /* 107231fe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10723204 push ecx */
  push32((uint32_t)(ECX));
  /* 10723205 call 0x10726ab0 */
  push32(0x1072320au); f_10726ab0();
  /* 1072320a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072320d:;
  /* 1072320d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10723212 push 0x1074a36c */
  push32((uint32_t)(0x1074a36cu));
  /* 10723217 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1072321d push edx */
  push32((uint32_t)(EDX));
  /* 1072321e call 0x10727260 */
  push32(0x10723223u); f_10727260();
  /* 10723223 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723226 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1072322c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723233 jne 0x10723246 */
  if (!C.zf) goto L_10723246;
  /* 10723235 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10723237 call 0x10726fa0 */
  push32(0x1072323cu); f_10726fa0();
  /* 1072323c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072323f push 3 */
  push32((uint32_t)(0x3u));
  /* 10723241 call 0x107232c0 */
  push32(0x10723246u); f_107232c0();
L_10723246:;
  /* 10723246 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072324d jne 0x10723256 */
  if (!C.zf) goto L_10723256;
  /* 1072324f mov eax, 1 */
  EAX = (0x1u);
  /* 10723254 jmp 0x10723258 */
  goto L_10723258;
L_10723256:;
  /* 10723256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10723258:;
  /* 10723258 mov esp, ebp */
  ESP = (EBP);
  /* 1072325a pop ebp */
  EBP = (pop32());
  /* 1072325b ret  */
  ESPCHK(0x10722f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003260 @ 0x10723260 (56 bytes, 15 insns) */
void f_10723260(void) {
  FTRACE(0x10723260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723260 push ebp */
  push32((uint32_t)(EBP));
  /* 10723261 mov ebp, esp */
  EBP = (ESP);
  /* 10723263 cmp dword ptr [0x1075103c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1075103c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072326a je 0x10723272 */
  if (C.zf) goto L_10723272;
  /* 1072326c call dword ptr [0x1075103c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075103c))), 0x10723272u);
L_10723272:;
  /* 10723272 push 0x1074d418 */
  push32((uint32_t)(0x1074d418u));
  /* 10723277 push 0x1074d208 */
  push32((uint32_t)(0x1074d208u));
  /* 1072327c call 0x10723430 */
  push32(0x10723281u); f_10723430();
  /* 10723281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723284 push 0x1074d104 */
  push32((uint32_t)(0x1074d104u));
  /* 10723289 push 0x1074d000 */
  push32((uint32_t)(0x1074d000u));
  /* 1072328e call 0x10723430 */
  push32(0x10723293u); f_10723430();
  /* 10723293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723296 pop ebp */
  EBP = (pop32());
  /* 10723297 ret  */
  ESPCHK(0x10723260u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a0 @ 0x107232a0 (21 bytes, 10 insns) */
void f_107232a0(void) {
  FTRACE(0x107232a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107232a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107232a1 mov ebp, esp */
  EBP = (ESP);
  /* 107232a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107232a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107232a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107232aa push eax */
  push32((uint32_t)(EAX));
  /* 107232ab call 0x10723320 */
  push32(0x107232b0u); f_10723320();
  /* 107232b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107232b3 pop ebp */
  EBP = (pop32());
  /* 107232b4 ret  */
  ESPCHK(0x107232a0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x107232c0 (21 bytes, 10 insns) */
void f_107232c0(void) {
  FTRACE(0x107232c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107232c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107232c1 mov ebp, esp */
  EBP = (ESP);
  /* 107232c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107232c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107232c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107232ca push eax */
  push32((uint32_t)(EAX));
  /* 107232cb call 0x10723320 */
  push32(0x107232d0u); f_10723320();
  /* 107232d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107232d3 pop ebp */
  EBP = (pop32());
  /* 107232d4 ret  */
  ESPCHK(0x107232c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x107232e0 (19 bytes, 9 insns) */
void f_107232e0(void) {
  FTRACE(0x107232e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107232e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107232e1 mov ebp, esp */
  EBP = (ESP);
  /* 107232e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107232e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107232e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107232e9 call 0x10723320 */
  push32(0x107232eeu); f_10723320();
  /* 107232ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107232f1 pop ebp */
  EBP = (pop32());
  /* 107232f2 ret  */
  ESPCHK(0x107232e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x10723300 (19 bytes, 9 insns) */
void f_10723300(void) {
  FTRACE(0x10723300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723300 push ebp */
  push32((uint32_t)(EBP));
  /* 10723301 mov ebp, esp */
  EBP = (ESP);
  /* 10723303 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723305 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723307 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723309 call 0x10723320 */
  push32(0x1072330eu); f_10723320();
  /* 1072330e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723311 pop ebp */
  EBP = (pop32());
  /* 10723312 ret  */
  ESPCHK(0x10723300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10723320 (227 bytes, 61 insns) */
void f_10723320(void) {
  FTRACE(0x10723320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723320 push ebp */
  push32((uint32_t)(EBP));
  /* 10723321 mov ebp, esp */
  EBP = (ESP);
  /* 10723323 push ecx */
  push32((uint32_t)(ECX));
  /* 10723324 call 0x10723410 */
  push32(0x10723329u); f_10723410();
  /* 10723329 cmp dword ptr [0x1074f540], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f540))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723330 jne 0x10723343 */
  if (!C.zf) goto L_10723343;
  /* 10723332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723335 push eax */
  push32((uint32_t)(EAX));
  /* 10723336 call dword ptr [0x10752330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752330))), 0x1072333cu);
  /* 1072333c push eax */
  push32((uint32_t)(EAX));
  /* 1072333d call dword ptr [0x1075232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075232c))), 0x10723343u);
L_10723343:;
  /* 10723343 mov dword ptr [0x1074f53c], 1 */
  w32((uint32_t)(0x1074f53c), (0x1u));
  /* 1072334d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10723350 mov byte ptr [0x1074f538], cl */
  w8((uint32_t)(0x1074f538), (CL));
  /* 10723356 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072335a jne 0x107233a3 */
  if (!C.zf) goto L_107233a3;
  /* 1072335c cmp dword ptr [0x10751038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10751038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723363 je 0x10723391 */
  if (C.zf) goto L_10723391;
  /* 10723365 mov edx, dword ptr [0x10751034] */
  EDX = (r32((uint32_t)(0x10751034)));
  /* 1072336b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072336e:;
  /* 1072336e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723371 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10723377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072337a cmp ecx, dword ptr [0x10751038] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10751038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723380 jb 0x10723391 */
  if (C.cf) goto L_10723391;
  /* 10723382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723385 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723388 je 0x1072338f */
  if (C.zf) goto L_1072338f;
  /* 1072338a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072338d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1072338fu);
L_1072338f:;
  /* 1072338f jmp 0x1072336e */
  goto L_1072336e;
L_10723391:;
  /* 10723391 push 0x1074d724 */
  push32((uint32_t)(0x1074d724u));
  /* 10723396 push 0x1074d51c */
  push32((uint32_t)(0x1074d51cu));
  /* 1072339b call 0x10723430 */
  push32(0x107233a0u); f_10723430();
  /* 107233a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107233a3:;
  /* 107233a3 push 0x1074d92c */
  push32((uint32_t)(0x1074d92cu));
  /* 107233a8 push 0x1074d828 */
  push32((uint32_t)(0x1074d828u));
  /* 107233ad call 0x10723430 */
  push32(0x107233b2u); f_10723430();
  /* 107233b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107233b5 cmp dword ptr [0x1074f544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107233bc jne 0x107233de */
  if (!C.zf) goto L_107233de;
  /* 107233be push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107233c0 call 0x10725010 */
  push32(0x107233c5u); f_10725010();
  /* 107233c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107233c8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107233cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107233cd je 0x107233de */
  if (C.zf) goto L_107233de;
  /* 107233cf mov dword ptr [0x1074f544], 1 */
  w32((uint32_t)(0x1074f544), (0x1u));
  /* 107233d9 call 0x10725920 */
  push32(0x107233deu); f_10725920();
L_107233de:;
  /* 107233de cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107233e2 je 0x107233eb */
  if (C.zf) goto L_107233eb;
  /* 107233e4 call 0x10723420 */
  push32(0x107233e9u); f_10723420();
  /* 107233e9 jmp 0x107233ff */
  goto L_107233ff;
L_107233eb:;
  /* 107233eb mov dword ptr [0x1074f540], 1 */
  w32((uint32_t)(0x1074f540), (0x1u));
  /* 107233f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107233f8 push ecx */
  push32((uint32_t)(ECX));
  /* 107233f9 call dword ptr [0x10752328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752328))), 0x107233ffu);
L_107233ff:;
  /* 107233ff mov esp, ebp */
  ESP = (EBP);
  /* 10723401 pop ebp */
  EBP = (pop32());
  /* 10723402 ret  */
  ESPCHK(0x10723320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003410 @ 0x10723410 (15 bytes, 7 insns) */
void f_10723410(void) {
  FTRACE(0x10723410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723410 push ebp */
  push32((uint32_t)(EBP));
  /* 10723411 mov ebp, esp */
  EBP = (ESP);
  /* 10723413 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10723415 call 0x10727500 */
  push32(0x1072341au); f_10727500();
  /* 1072341a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072341d pop ebp */
  EBP = (pop32());
  /* 1072341e ret  */
  ESPCHK(0x10723410u, _esp0);
  ESP += 4; return;
}

/* FUN_10003420 @ 0x10723420 (15 bytes, 7 insns) */
void f_10723420(void) {
  FTRACE(0x10723420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723420 push ebp */
  push32((uint32_t)(EBP));
  /* 10723421 mov ebp, esp */
  EBP = (ESP);
  /* 10723423 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10723425 call 0x107275a0 */
  push32(0x1072342au); f_107275a0();
  /* 1072342a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072342d pop ebp */
  EBP = (pop32());
  /* 1072342e ret  */
  ESPCHK(0x10723420u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10723430 (37 bytes, 16 insns) */
void f_10723430(void) {
  FTRACE(0x10723430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723430 push ebp */
  push32((uint32_t)(EBP));
  /* 10723431 mov ebp, esp */
  EBP = (ESP);
L_10723433:;
  /* 10723433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723436 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723439 jae 0x10723453 */
  if (!C.cf) goto L_10723453;
  /* 1072343b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072343e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723441 je 0x10723448 */
  if (C.zf) goto L_10723448;
  /* 10723443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723446 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10723448u);
L_10723448:;
  /* 10723448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072344b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072344e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10723451 jmp 0x10723433 */
  goto L_10723433;
L_10723453:;
  /* 10723453 pop ebp */
  EBP = (pop32());
  /* 10723454 ret  */
  ESPCHK(0x10723430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003460 @ 0x10723460 (130 bytes, 42 insns) */
void f_10723460(void) {
  FTRACE(0x10723460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723460 push ebp */
  push32((uint32_t)(EBP));
  /* 10723461 mov ebp, esp */
  EBP = (ESP);
  /* 10723463 push ecx */
  push32((uint32_t)(ECX));
  /* 10723464 call 0x10727420 */
  push32(0x10723469u); f_10727420();
  /* 10723469 call dword ptr [0x1075233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075233c))), 0x1072346fu);
  /* 1072346f mov dword ptr [0x1074da5c], eax */
  w32((uint32_t)(0x1074da5c), (EAX));
  /* 10723474 cmp dword ptr [0x1074da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1074da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072347b jne 0x10723481 */
  if (!C.zf) goto L_10723481;
  /* 1072347d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072347f jmp 0x107234de */
  goto L_107234de;
L_10723481:;
  /* 10723481 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10723483 push 0x1074a4c8 */
  push32((uint32_t)(0x1074a4c8u));
  /* 10723488 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072348a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1072348c push 1 */
  push32((uint32_t)(0x1u));
  /* 1072348e call 0x10723f10 */
  push32(0x10723493u); f_10723f10();
  /* 10723493 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723496 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10723499 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072349d je 0x107234b4 */
  if (C.zf) goto L_107234b4;
  /* 1072349f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107234a2 push eax */
  push32((uint32_t)(EAX));
  /* 107234a3 mov ecx, dword ptr [0x1074da5c] */
  ECX = (r32((uint32_t)(0x1074da5c)));
  /* 107234a9 push ecx */
  push32((uint32_t)(ECX));
  /* 107234aa call dword ptr [0x10752338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752338))), 0x107234b0u);
  /* 107234b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107234b2 jne 0x107234b8 */
  if (!C.zf) goto L_107234b8;
L_107234b4:;
  /* 107234b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107234b6 jmp 0x107234de */
  goto L_107234de;
L_107234b8:;
  /* 107234b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107234bb push edx */
  push32((uint32_t)(EDX));
  /* 107234bc call 0x10723520 */
  push32(0x107234c1u); f_10723520();
  /* 107234c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107234c4 call dword ptr [0x10752334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752334))), 0x107234cau);
  /* 107234ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107234cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107234cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107234d2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107234d9 mov eax, 1 */
  EAX = (0x1u);
L_107234de:;
  /* 107234de mov esp, ebp */
  ESP = (EBP);
  /* 107234e0 pop ebp */
  EBP = (pop32());
  /* 107234e1 ret  */
  ESPCHK(0x10723460u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x107234f0 (41 bytes, 11 insns) */
void f_107234f0(void) {
  FTRACE(0x107234f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107234f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107234f1 mov ebp, esp */
  EBP = (ESP);
  /* 107234f3 call 0x10727460 */
  push32(0x107234f8u); f_10727460();
  /* 107234f8 cmp dword ptr [0x1074da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1074da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107234ff je 0x10723517 */
  if (C.zf) goto L_10723517;
  /* 10723501 mov eax, dword ptr [0x1074da5c] */
  EAX = (r32((uint32_t)(0x1074da5c)));
  /* 10723506 push eax */
  push32((uint32_t)(EAX));
  /* 10723507 call dword ptr [0x10752340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752340))), 0x1072350du);
  /* 1072350d mov dword ptr [0x1074da5c], 0xffffffff */
  w32((uint32_t)(0x1074da5c), (0xffffffffu));
L_10723517:;
  /* 10723517 pop ebp */
  EBP = (pop32());
  /* 10723518 ret  */
  ESPCHK(0x107234f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x10723520 (25 bytes, 8 insns) */
void f_10723520(void) {
  FTRACE(0x10723520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723520 push ebp */
  push32((uint32_t)(EBP));
  /* 10723521 mov ebp, esp */
  EBP = (ESP);
  /* 10723523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723526 mov dword ptr [eax + 0x50], 0x1074dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1074dc00u));
  /* 1072352d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723530 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10723537 pop ebp */
  EBP = (pop32());
  /* 10723538 ret  */
  ESPCHK(0x10723520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x10723540 (152 bytes, 48 insns) */
void f_10723540(void) {
  FTRACE(0x10723540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723540 push ebp */
  push32((uint32_t)(EBP));
  /* 10723541 mov ebp, esp */
  EBP = (ESP);
  /* 10723543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723546 call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x1072354cu);
  /* 1072354c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072354f mov eax, dword ptr [0x1074da5c] */
  EAX = (r32((uint32_t)(0x1074da5c)));
  /* 10723554 push eax */
  push32((uint32_t)(EAX));
  /* 10723555 call dword ptr [0x10752348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752348))), 0x1072355bu);
  /* 1072355b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072355e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723562 jne 0x107235c7 */
  if (!C.zf) goto L_107235c7;
  /* 10723564 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10723569 push 0x1074a4c8 */
  push32((uint32_t)(0x1074a4c8u));
  /* 1072356e push 2 */
  push32((uint32_t)(0x2u));
  /* 10723570 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10723572 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723574 call 0x10723f10 */
  push32(0x10723579u); f_10723f10();
  /* 10723579 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072357c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072357f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723583 je 0x107235bd */
  if (C.zf) goto L_107235bd;
  /* 10723585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723588 push ecx */
  push32((uint32_t)(ECX));
  /* 10723589 mov edx, dword ptr [0x1074da5c] */
  EDX = (r32((uint32_t)(0x1074da5c)));
  /* 1072358f push edx */
  push32((uint32_t)(EDX));
  /* 10723590 call dword ptr [0x10752338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752338))), 0x10723596u);
  /* 10723596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10723598 je 0x107235bd */
  if (C.zf) goto L_107235bd;
  /* 1072359a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072359d push eax */
  push32((uint32_t)(EAX));
  /* 1072359e call 0x10723520 */
  push32(0x107235a3u); f_10723520();
  /* 107235a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107235a6 call dword ptr [0x10752334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752334))), 0x107235acu);
  /* 107235ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107235af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107235b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107235b4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107235bb jmp 0x107235c7 */
  goto L_107235c7;
L_107235bd:;
  /* 107235bd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107235bf call 0x10722a70 */
  push32(0x107235c4u); f_10722a70();
  /* 107235c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107235c7:;
  /* 107235c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107235ca push eax */
  push32((uint32_t)(EAX));
  /* 107235cb call dword ptr [0x10752344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752344))), 0x107235d1u);
  /* 107235d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107235d4 mov esp, ebp */
  ESP = (EBP);
  /* 107235d6 pop ebp */
  EBP = (pop32());
  /* 107235d7 ret  */
  ESPCHK(0x10723540u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x107235e0 (263 bytes, 86 insns) */
void f_107235e0(void) {
  FTRACE(0x107235e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107235e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107235e1 mov ebp, esp */
  EBP = (ESP);
  /* 107235e3 cmp dword ptr [0x1074da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1074da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107235ea je 0x107236e5 */
  if (C.zf) goto L_107236e5;
  /* 107235f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107235f4 jne 0x10723605 */
  if (!C.zf) goto L_10723605;
  /* 107235f6 mov eax, dword ptr [0x1074da5c] */
  EAX = (r32((uint32_t)(0x1074da5c)));
  /* 107235fb push eax */
  push32((uint32_t)(EAX));
  /* 107235fc call dword ptr [0x10752348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752348))), 0x10723602u);
  /* 10723602 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10723605:;
  /* 10723605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723609 je 0x107236d6 */
  if (C.zf) goto L_107236d6;
  /* 1072360f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723612 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723616 je 0x10723629 */
  if (C.zf) goto L_10723629;
  /* 10723618 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072361a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072361d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10723620 push eax */
  push32((uint32_t)(EAX));
  /* 10723621 call 0x10724590 */
  push32(0x10723626u); f_10724590();
  /* 10723626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10723629:;
  /* 10723629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072362c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723630 je 0x10723643 */
  if (C.zf) goto L_10723643;
  /* 10723632 push 2 */
  push32((uint32_t)(0x2u));
  /* 10723634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723637 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1072363a push eax */
  push32((uint32_t)(EAX));
  /* 1072363b call 0x10724590 */
  push32(0x10723640u); f_10724590();
  /* 10723640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10723643:;
  /* 10723643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723646 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072364a je 0x1072365d */
  if (C.zf) goto L_1072365d;
  /* 1072364c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072364e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723651 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10723654 push eax */
  push32((uint32_t)(EAX));
  /* 10723655 call 0x10724590 */
  push32(0x1072365au); f_10724590();
  /* 1072365a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072365d:;
  /* 1072365d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723660 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723664 je 0x10723677 */
  if (C.zf) goto L_10723677;
  /* 10723666 push 2 */
  push32((uint32_t)(0x2u));
  /* 10723668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072366b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1072366e push eax */
  push32((uint32_t)(EAX));
  /* 1072366f call 0x10724590 */
  push32(0x10723674u); f_10724590();
  /* 10723674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10723677:;
  /* 10723677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072367a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072367e je 0x10723691 */
  if (C.zf) goto L_10723691;
  /* 10723680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10723682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723685 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10723688 push eax */
  push32((uint32_t)(EAX));
  /* 10723689 call 0x10724590 */
  push32(0x1072368eu); f_10724590();
  /* 1072368e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10723691:;
  /* 10723691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723694 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723698 je 0x107236ab */
  if (C.zf) goto L_107236ab;
  /* 1072369a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072369c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072369f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 107236a2 push eax */
  push32((uint32_t)(EAX));
  /* 107236a3 call 0x10724590 */
  push32(0x107236a8u); f_10724590();
  /* 107236a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107236ab:;
  /* 107236ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107236ae cmp dword ptr [ecx + 0x50], 0x1074dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1074dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107236b5 je 0x107236c8 */
  if (C.zf) goto L_107236c8;
  /* 107236b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107236b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107236bc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 107236bf push eax */
  push32((uint32_t)(EAX));
  /* 107236c0 call 0x10724590 */
  push32(0x107236c5u); f_10724590();
  /* 107236c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107236c8:;
  /* 107236c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107236ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107236cd push ecx */
  push32((uint32_t)(ECX));
  /* 107236ce call 0x10724590 */
  push32(0x107236d3u); f_10724590();
  /* 107236d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107236d6:;
  /* 107236d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107236d8 mov edx, dword ptr [0x1074da5c] */
  EDX = (r32((uint32_t)(0x1074da5c)));
  /* 107236de push edx */
  push32((uint32_t)(EDX));
  /* 107236df call dword ptr [0x10752338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752338))), 0x107236e5u);
L_107236e5:;
  /* 107236e5 pop ebp */
  EBP = (pop32());
  /* 107236e6 ret  */
  ESPCHK(0x107235e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f0 @ 0x107236f0 (11 bytes, 5 insns) */
void f_107236f0(void) {
  FTRACE(0x107236f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107236f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107236f1 mov ebp, esp */
  EBP = (ESP);
  /* 107236f3 call dword ptr [0x10752334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752334))), 0x107236f9u);
  /* 107236f9 pop ebp */
  EBP = (pop32());
  /* 107236fa ret  */
  ESPCHK(0x107236f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003700 @ 0x10723700 (11 bytes, 5 insns) */
void f_10723700(void) {
  FTRACE(0x10723700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723700 push ebp */
  push32((uint32_t)(EBP));
  /* 10723701 mov ebp, esp */
  EBP = (ESP);
  /* 10723703 call dword ptr [0x10752284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752284))), 0x10723709u);
  /* 10723709 pop ebp */
  EBP = (pop32());
  /* 1072370a ret  */
  ESPCHK(0x10723700u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x10723710 (804 bytes, 236 insns) */
void f_10723710(void) {
  FTRACE(0x10723710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723710 push ebp */
  push32((uint32_t)(EBP));
  /* 10723711 mov ebp, esp */
  EBP = (ESP);
  /* 10723713 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723716 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1072371b push 0x1074a4d4 */
  push32((uint32_t)(0x1074a4d4u));
  /* 10723720 push 2 */
  push32((uint32_t)(0x2u));
  /* 10723722 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10723727 call 0x10723b00 */
  push32(0x1072372cu); f_10723b00();
  /* 1072372c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072372f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10723732 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723736 jne 0x10723742 */
  if (!C.zf) goto L_10723742;
  /* 10723738 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1072373a call 0x10722a70 */
  push32(0x1072373fu); f_10722a70();
  /* 1072373f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10723742:;
  /* 10723742 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723745 mov dword ptr [0x10750ee0], eax */
  w32((uint32_t)(0x10750ee0), (EAX));
  /* 1072374a mov dword ptr [0x1075101c], 0x20 */
  w32((uint32_t)(0x1075101c), (0x20u));
  /* 10723754 jmp 0x1072375f */
  goto L_1072375f;
L_10723756:;
  /* 10723756 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723759 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072375c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1072375f:;
  /* 1072375f mov edx, dword ptr [0x10750ee0] */
  EDX = (r32((uint32_t)(0x10750ee0)));
  /* 10723765 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072376b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072376e jae 0x10723793 */
  if (!C.cf) goto L_10723793;
  /* 10723770 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723773 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10723777 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072377a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10723780 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723783 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10723787 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072378a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10723791 jmp 0x10723756 */
  goto L_10723756;
L_10723793:;
  /* 10723793 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10723796 push ecx */
  push32((uint32_t)(ECX));
  /* 10723797 call dword ptr [0x1075235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075235c))), 0x1072379du);
  /* 1072379d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 107237a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107237a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107237a8 je 0x10723935 */
  if (C.zf) goto L_10723935;
  /* 107237ae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107237b2 je 0x10723935 */
  if (C.zf) goto L_10723935;
  /* 107237b8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107237bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107237bd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 107237c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107237c3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107237c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107237c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107237cc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107237cf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 107237d2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107237d9 jge 0x107237e3 */
  if ((C.sf==C.of)) goto L_107237e3;
  /* 107237db mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 107237de mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 107237e1 jmp 0x107237ea */
  goto L_107237ea;
L_107237e3:;
  /* 107237e3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_107237ea:;
  /* 107237ea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 107237ed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 107237f0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 107237f7 jmp 0x10723802 */
  goto L_10723802;
L_107237f9:;
  /* 107237f9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107237fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107237ff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10723802:;
  /* 10723802 mov ecx, dword ptr [0x1075101c] */
  ECX = (r32((uint32_t)(0x1075101c)));
  /* 10723808 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072380b jge 0x107238a2 */
  if ((C.sf==C.of)) goto L_107238a2;
  /* 10723811 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10723816 push 0x1074a4d4 */
  push32((uint32_t)(0x1074a4d4u));
  /* 1072381b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072381d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10723822 call 0x10723b00 */
  push32(0x10723827u); f_10723b00();
  /* 10723827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072382a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1072382d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723831 jne 0x1072383e */
  if (!C.zf) goto L_1072383e;
  /* 10723833 mov edx, dword ptr [0x1075101c] */
  EDX = (r32((uint32_t)(0x1075101c)));
  /* 10723839 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1072383c jmp 0x107238a2 */
  goto L_107238a2;
L_1072383e:;
  /* 1072383e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10723841 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723844 mov dword ptr [eax*4 + 0x10750ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x10750ee0), (ECX));
  /* 1072384b mov edx, dword ptr [0x1075101c] */
  EDX = (r32((uint32_t)(0x1075101c)));
  /* 10723851 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723854 mov dword ptr [0x1075101c], edx */
  w32((uint32_t)(0x1075101c), (EDX));
  /* 1072385a jmp 0x10723865 */
  goto L_10723865;
L_1072385c:;
  /* 1072385c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072385f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723862 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10723865:;
  /* 10723865 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10723868 mov edx, dword ptr [ecx*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072386f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723875 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723878 jae 0x1072389d */
  if (!C.cf) goto L_1072389d;
  /* 1072387a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072387d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10723881 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723884 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1072388a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072388d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10723891 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723894 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1072389b jmp 0x1072385c */
  goto L_1072385c;
L_1072389d:;
  /* 1072389d jmp 0x107237f9 */
  goto L_107237f9;
L_107238a2:;
  /* 107238a2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 107238a9 jmp 0x107238c6 */
  goto L_107238c6;
L_107238ab:;
  /* 107238ab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107238ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107238b1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 107238b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107238b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107238ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107238bd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 107238c0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107238c3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_107238c6:;
  /* 107238c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107238c9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107238cc jge 0x10723935 */
  if ((C.sf==C.of)) goto L_10723935;
  /* 107238ce mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 107238d1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107238d4 je 0x10723930 */
  if (C.zf) goto L_10723930;
  /* 107238d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107238d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107238dc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107238df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107238e1 je 0x10723930 */
  if (C.zf) goto L_10723930;
  /* 107238e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107238e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107238e9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 107238ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107238ee jne 0x10723900 */
  if (!C.zf) goto L_10723900;
  /* 107238f0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 107238f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107238f5 push edx */
  push32((uint32_t)(EDX));
  /* 107238f6 call dword ptr [0x10752358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752358))), 0x107238fcu);
  /* 107238fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107238fe je 0x10723930 */
  if (C.zf) goto L_10723930;
L_10723900:;
  /* 10723900 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10723903 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10723906 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10723909 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072390c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072390f mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 10723916 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723918 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1072391b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072391e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10723921 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10723923 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10723925 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072392b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1072392d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10723930:;
  /* 10723930 jmp 0x107238ab */
  goto L_107238ab;
L_10723935:;
  /* 10723935 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1072393c jmp 0x10723947 */
  goto L_10723947;
L_1072393e:;
  /* 1072393e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10723941 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723944 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10723947:;
  /* 10723947 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072394b jge 0x10723a24 */
  if ((C.sf==C.of)) goto L_10723a24;
  /* 10723951 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10723954 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10723957 mov edx, dword ptr [0x10750ee0] */
  EDX = (r32((uint32_t)(0x10750ee0)));
  /* 1072395d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072395f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10723962 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723965 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723968 jne 0x10723a10 */
  if (!C.zf) goto L_10723a10;
  /* 1072396e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723971 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10723975 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723979 jne 0x10723984 */
  if (!C.zf) goto L_10723984;
  /* 1072397b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10723982 jmp 0x10723994 */
  goto L_10723994;
L_10723984:;
  /* 10723984 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10723987 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072398a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072398c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072398e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723991 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10723994:;
  /* 10723994 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10723997 push eax */
  push32((uint32_t)(EAX));
  /* 10723998 call dword ptr [0x10752308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752308))), 0x1072399eu);
  /* 1072399e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 107239a1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107239a5 je 0x107239ff */
  if (C.zf) goto L_107239ff;
  /* 107239a7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107239aa push ecx */
  push32((uint32_t)(ECX));
  /* 107239ab call dword ptr [0x10752358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752358))), 0x107239b1u);
  /* 107239b1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 107239b4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107239b8 je 0x107239ff */
  if (C.zf) goto L_107239ff;
  /* 107239ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107239bd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107239c0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107239c2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 107239c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107239cb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107239ce jne 0x107239e0 */
  if (!C.zf) goto L_107239e0;
  /* 107239d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107239d3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107239d6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 107239d8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107239db mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 107239de jmp 0x107239fd */
  goto L_107239fd;
L_107239e0:;
  /* 107239e0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 107239e3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107239e9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107239ec jne 0x107239fd */
  if (!C.zf) goto L_107239fd;
  /* 107239ee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107239f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107239f4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 107239f7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107239fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107239fd:;
  /* 107239fd jmp 0x10723a0e */
  goto L_10723a0e;
L_107239ff:;
  /* 107239ff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723a02 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10723a05 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10723a08 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723a0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10723a0e:;
  /* 10723a0e jmp 0x10723a1f */
  goto L_10723a1f;
L_10723a10:;
  /* 10723a10 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723a13 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10723a16 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10723a19 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10723a1c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10723a1f:;
  /* 10723a1f jmp 0x1072393e */
  goto L_1072393e;
L_10723a24:;
  /* 10723a24 mov eax, dword ptr [0x1075101c] */
  EAX = (r32((uint32_t)(0x1075101c)));
  /* 10723a29 push eax */
  push32((uint32_t)(EAX));
  /* 10723a2a call dword ptr [0x10752354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752354))), 0x10723a30u);
  /* 10723a30 mov esp, ebp */
  ESP = (EBP);
  /* 10723a32 pop ebp */
  EBP = (pop32());
  /* 10723a33 ret  */
  ESPCHK(0x10723710u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10723a40 (155 bytes, 45 insns) */
void f_10723a40(void) {
  FTRACE(0x10723a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10723a41 mov ebp, esp */
  EBP = (ESP);
  /* 10723a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10723a4d jmp 0x10723a58 */
  goto L_10723a58;
L_10723a4f:;
  /* 10723a4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723a52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723a55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10723a58:;
  /* 10723a58 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723a5c jge 0x10723ad7 */
  if ((C.sf==C.of)) goto L_10723ad7;
  /* 10723a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723a61 cmp dword ptr [ecx*4 + 0x10750ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10750ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723a69 je 0x10723ad2 */
  if (C.zf) goto L_10723ad2;
  /* 10723a6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723a6e mov eax, dword ptr [edx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 10723a75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10723a78 jmp 0x10723a83 */
  goto L_10723a83;
L_10723a7a:;
  /* 10723a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723a7d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723a80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10723a83:;
  /* 10723a83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723a86 mov eax, dword ptr [edx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 10723a8d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723a92 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723a95 jae 0x10723aaf */
  if (!C.cf) goto L_10723aaf;
  /* 10723a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723a9a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723a9e je 0x10723aad */
  if (C.zf) goto L_10723aad;
  /* 10723aa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723aa3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723aa6 push edx */
  push32((uint32_t)(EDX));
  /* 10723aa7 call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x10723aadu);
L_10723aad:;
  /* 10723aad jmp 0x10723a7a */
  goto L_10723a7a;
L_10723aaf:;
  /* 10723aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10723ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723ab4 mov ecx, dword ptr [eax*4 + 0x10750ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 10723abb push ecx */
  push32((uint32_t)(ECX));
  /* 10723abc call 0x10724590 */
  push32(0x10723ac1u); f_10724590();
  /* 10723ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ac4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723ac7 mov dword ptr [edx*4 + 0x10750ee0], 0 */
  w32((uint32_t)(EDX*4 + 0x10750ee0), (0x0u));
L_10723ad2:;
  /* 10723ad2 jmp 0x10723a4f */
  goto L_10723a4f;
L_10723ad7:;
  /* 10723ad7 mov esp, ebp */
  ESP = (EBP);
  /* 10723ad9 pop ebp */
  EBP = (pop32());
  /* 10723ada ret  */
  ESPCHK(0x10723a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x10723ae0 (29 bytes, 13 insns) */
void f_10723ae0(void) {
  FTRACE(0x10723ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10723ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10723ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723ae9 mov eax, dword ptr [0x1074f6e8] */
  EAX = (r32((uint32_t)(0x1074f6e8)));
  /* 10723aee push eax */
  push32((uint32_t)(EAX));
  /* 10723aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723af2 push ecx */
  push32((uint32_t)(ECX));
  /* 10723af3 call 0x10723b50 */
  push32(0x10723af8u); f_10723b50();
  /* 10723af8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723afb pop ebp */
  EBP = (pop32());
  /* 10723afc ret  */
  ESPCHK(0x10723ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b00 @ 0x10723b00 (35 bytes, 16 insns) */
void f_10723b00(void) {
  FTRACE(0x10723b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10723b01 mov ebp, esp */
  EBP = (ESP);
  /* 10723b03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723b06 push eax */
  push32((uint32_t)(EAX));
  /* 10723b07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723b0a push ecx */
  push32((uint32_t)(ECX));
  /* 10723b0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723b0e push edx */
  push32((uint32_t)(EDX));
  /* 10723b0f mov eax, dword ptr [0x1074f6e8] */
  EAX = (r32((uint32_t)(0x1074f6e8)));
  /* 10723b14 push eax */
  push32((uint32_t)(EAX));
  /* 10723b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723b18 push ecx */
  push32((uint32_t)(ECX));
  /* 10723b19 call 0x10723b50 */
  push32(0x10723b1eu); f_10723b50();
  /* 10723b1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723b21 pop ebp */
  EBP = (pop32());
  /* 10723b22 ret  */
  ESPCHK(0x10723b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10723b30 (27 bytes, 13 insns) */
void f_10723b30(void) {
  FTRACE(0x10723b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10723b31 mov ebp, esp */
  EBP = (ESP);
  /* 10723b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723b3c push eax */
  push32((uint32_t)(EAX));
  /* 10723b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10723b41 call 0x10723b50 */
  push32(0x10723b46u); f_10723b50();
  /* 10723b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723b49 pop ebp */
  EBP = (pop32());
  /* 10723b4a ret  */
  ESPCHK(0x10723b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x10723b50 (94 bytes, 38 insns) */
void f_10723b50(void) {
  FTRACE(0x10723b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10723b51 mov ebp, esp */
  EBP = (ESP);
  /* 10723b53 push ecx */
  push32((uint32_t)(ECX));
L_10723b54:;
  /* 10723b54 push 9 */
  push32((uint32_t)(0x9u));
  /* 10723b56 call 0x10727500 */
  push32(0x10723b5bu); f_10727500();
  /* 10723b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723b5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723b61 push eax */
  push32((uint32_t)(EAX));
  /* 10723b62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10723b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723b69 push edx */
  push32((uint32_t)(EDX));
  /* 10723b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723b6d push eax */
  push32((uint32_t)(EAX));
  /* 10723b6e call 0x10723bd0 */
  push32(0x10723b73u); f_10723bd0();
  /* 10723b73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723b76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10723b79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10723b7b call 0x107275a0 */
  push32(0x10723b80u); f_107275a0();
  /* 10723b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723b83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723b87 jne 0x10723b8f */
  if (!C.zf) goto L_10723b8f;
  /* 10723b89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723b8d jne 0x10723b94 */
  if (!C.zf) goto L_10723b94;
L_10723b8f:;
  /* 10723b8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723b92 jmp 0x10723baa */
  goto L_10723baa;
L_10723b94:;
  /* 10723b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723b97 push ecx */
  push32((uint32_t)(ECX));
  /* 10723b98 call 0x10727840 */
  push32(0x10723b9du); f_10727840();
  /* 10723b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10723ba2 jne 0x10723ba8 */
  if (!C.zf) goto L_10723ba8;
  /* 10723ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10723ba6 jmp 0x10723baa */
  goto L_10723baa;
L_10723ba8:;
  /* 10723ba8 jmp 0x10723b54 */
  goto L_10723b54;
L_10723baa:;
  /* 10723baa mov esp, ebp */
  ESP = (EBP);
  /* 10723bac pop ebp */
  EBP = (pop32());
  /* 10723bad ret  */
  ESPCHK(0x10723b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x10723bb0 (23 bytes, 11 insns) */
void f_10723bb0(void) {
  FTRACE(0x10723bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10723bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10723bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723bbc push eax */
  push32((uint32_t)(EAX));
  /* 10723bbd call 0x10723bd0 */
  push32(0x10723bc2u); f_10723bd0();
  /* 10723bc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723bc5 pop ebp */
  EBP = (pop32());
  /* 10723bc6 ret  */
  ESPCHK(0x10723bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x10723bd0 (787 bytes, 254 insns) */
void f_10723bd0(void) {
  FTRACE(0x10723bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10723bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10723bd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10723bd7 push esi */
  push32((uint32_t)(ESI));
  /* 10723bd8 push edi */
  push32((uint32_t)(EDI));
  /* 10723bd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10723be0 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 10723be5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10723be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10723bea je 0x10723c1c */
  if (C.zf) goto L_10723c1c;
L_10723bec:;
  /* 10723bec call 0x10724ca0 */
  push32(0x10723bf1u); f_10724ca0();
  /* 10723bf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10723bf3 jne 0x10723c16 */
  if (!C.zf) goto L_10723c16;
  /* 10723bf5 push 0x1074a5c8 */
  push32((uint32_t)(0x1074a5c8u));
  /* 10723bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10723bfc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10723c01 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10723c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10723c08 call 0x10722bc0 */
  push32(0x10723c0du); f_10722bc0();
  /* 10723c0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723c10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723c13 jne 0x10723c16 */
  if (!C.zf) goto L_10723c16;
  /* 10723c15 int3  */
  x86_unimpl("int3 @ 0x10723c15");
L_10723c16:;
  /* 10723c16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10723c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10723c1a jne 0x10723bec */
  if (!C.zf) goto L_10723bec;
L_10723c1c:;
  /* 10723c1c mov edx, dword ptr [0x1074da88] */
  EDX = (r32((uint32_t)(0x1074da88)));
  /* 10723c22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10723c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723c28 cmp eax, dword ptr [0x1074da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723c2e jne 0x10723c31 */
  if (!C.zf) goto L_10723c31;
  /* 10723c30 int3  */
  x86_unimpl("int3 @ 0x10723c30");
L_10723c31:;
  /* 10723c31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10723c35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723c38 push edx */
  push32((uint32_t)(EDX));
  /* 10723c39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723c3c push eax */
  push32((uint32_t)(EAX));
  /* 10723c3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723c40 push ecx */
  push32((uint32_t)(ECX));
  /* 10723c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723c44 push edx */
  push32((uint32_t)(EDX));
  /* 10723c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723c49 call dword ptr [0x1074dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074dc90))), 0x10723c4fu);
  /* 10723c4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10723c54 jne 0x10723cb4 */
  if (!C.zf) goto L_10723cb4;
  /* 10723c56 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723c5a je 0x10723c87 */
  if (C.zf) goto L_10723c87;
L_10723c5c:;
  /* 10723c5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723c5f push eax */
  push32((uint32_t)(EAX));
  /* 10723c60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10723c64 push 0x1074a584 */
  push32((uint32_t)(0x1074a584u));
  /* 10723c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c71 call 0x10722bc0 */
  push32(0x10723c76u); f_10722bc0();
  /* 10723c76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723c7c jne 0x10723c7f */
  if (!C.zf) goto L_10723c7f;
  /* 10723c7e int3  */
  x86_unimpl("int3 @ 0x10723c7e");
L_10723c7f:;
  /* 10723c7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10723c81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10723c83 jne 0x10723c5c */
  if (!C.zf) goto L_10723c5c;
  /* 10723c85 jmp 0x10723cad */
  goto L_10723cad;
L_10723c87:;
  /* 10723c87 push 0x1074a560 */
  push32((uint32_t)(0x1074a560u));
  /* 10723c8c push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10723c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723c99 call 0x10722bc0 */
  push32(0x10723c9eu); f_10722bc0();
  /* 10723c9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723ca4 jne 0x10723ca7 */
  if (!C.zf) goto L_10723ca7;
  /* 10723ca6 int3  */
  x86_unimpl("int3 @ 0x10723ca6");
L_10723ca7:;
  /* 10723ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10723ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10723cab jne 0x10723c87 */
  if (!C.zf) goto L_10723c87;
L_10723cad:;
  /* 10723cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10723caf jmp 0x10723edc */
  goto L_10723edc;
L_10723cb4:;
  /* 10723cb4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723cb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10723cbd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723cc0 je 0x10723cd6 */
  if (C.zf) goto L_10723cd6;
  /* 10723cc2 mov edx, dword ptr [0x1074da84] */
  EDX = (r32((uint32_t)(0x1074da84)));
  /* 10723cc8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10723ccb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10723ccd jne 0x10723cd6 */
  if (!C.zf) goto L_10723cd6;
  /* 10723ccf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10723cd6:;
  /* 10723cd6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723cda ja 0x10723ce7 */
  if ((!C.cf&&!C.zf)) goto L_10723ce7;
  /* 10723cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723cdf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ce2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723ce5 jbe 0x10723d13 */
  if ((C.cf||C.zf)) goto L_10723d13;
L_10723ce7:;
  /* 10723ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723cea push ecx */
  push32((uint32_t)(ECX));
  /* 10723ceb push 0x1074a538 */
  push32((uint32_t)(0x1074a538u));
  /* 10723cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723cf8 call 0x10722bc0 */
  push32(0x10723cfdu); f_10722bc0();
  /* 10723cfd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d03 jne 0x10723d06 */
  if (!C.zf) goto L_10723d06;
  /* 10723d05 int3  */
  x86_unimpl("int3 @ 0x10723d05");
L_10723d06:;
  /* 10723d06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10723d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10723d0a jne 0x10723ce7 */
  if (!C.zf) goto L_10723ce7;
  /* 10723d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10723d0e jmp 0x10723edc */
  goto L_10723edc;
L_10723d13:;
  /* 10723d13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723d16 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10723d1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d1e je 0x10723d60 */
  if (C.zf) goto L_10723d60;
  /* 10723d20 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d24 je 0x10723d60 */
  if (C.zf) goto L_10723d60;
  /* 10723d26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723d29 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10723d2f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d32 je 0x10723d60 */
  if (C.zf) goto L_10723d60;
  /* 10723d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d38 je 0x10723d60 */
  if (C.zf) goto L_10723d60;
L_10723d3a:;
  /* 10723d3a push 0x1074a504 */
  push32((uint32_t)(0x1074a504u));
  /* 10723d3f push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10723d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10723d4c call 0x10722bc0 */
  push32(0x10723d51u); f_10722bc0();
  /* 10723d51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723d54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d57 jne 0x10723d5a */
  if (!C.zf) goto L_10723d5a;
  /* 10723d59 int3  */
  x86_unimpl("int3 @ 0x10723d59");
L_10723d5a:;
  /* 10723d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10723d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10723d5e jne 0x10723d3a */
  if (!C.zf) goto L_10723d3a;
L_10723d60:;
  /* 10723d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723d63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723d66 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10723d69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10723d6c push ecx */
  push32((uint32_t)(ECX));
  /* 10723d6d call 0x10727950 */
  push32(0x10723d72u); f_10727950();
  /* 10723d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723d75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10723d78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d7c jne 0x10723d85 */
  if (!C.zf) goto L_10723d85;
  /* 10723d7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10723d80 jmp 0x10723edc */
  goto L_10723edc;
L_10723d85:;
  /* 10723d85 mov edx, dword ptr [0x1074da88] */
  EDX = (r32((uint32_t)(0x1074da88)));
  /* 10723d8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723d8e mov dword ptr [0x1074da88], edx */
  w32((uint32_t)(0x1074da88), (EDX));
  /* 10723d94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723d98 je 0x10723de3 */
  if (C.zf) goto L_10723de3;
  /* 10723d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723d9d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10723da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723da6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10723dad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723db0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10723db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723dba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10723dc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723dc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723dc7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10723dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723dcd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10723dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723dd7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10723dde jmp 0x10723e83 */
  goto L_10723e83;
L_10723de3:;
  /* 10723de3 mov edx, dword ptr [0x1074f54c] */
  EDX = (r32((uint32_t)(0x1074f54c)));
  /* 10723de9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723dec mov dword ptr [0x1074f54c], edx */
  w32((uint32_t)(0x1074f54c), (EDX));
  /* 10723df2 mov eax, dword ptr [0x1074f554] */
  EAX = (r32((uint32_t)(0x1074f554)));
  /* 10723df7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723dfa mov dword ptr [0x1074f554], eax */
  w32((uint32_t)(0x1074f554), (EAX));
  /* 10723dff mov ecx, dword ptr [0x1074f554] */
  ECX = (r32((uint32_t)(0x1074f554)));
  /* 10723e05 cmp ecx, dword ptr [0x1074f558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074f558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723e0b jbe 0x10723e19 */
  if ((C.cf||C.zf)) goto L_10723e19;
  /* 10723e0d mov edx, dword ptr [0x1074f554] */
  EDX = (r32((uint32_t)(0x1074f554)));
  /* 10723e13 mov dword ptr [0x1074f558], edx */
  w32((uint32_t)(0x1074f558), (EDX));
L_10723e19:;
  /* 10723e19 cmp dword ptr [0x1074f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723e20 je 0x10723e2f */
  if (C.zf) goto L_10723e2f;
  /* 10723e22 mov eax, dword ptr [0x1074f550] */
  EAX = (r32((uint32_t)(0x1074f550)));
  /* 10723e27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10723e2d jmp 0x10723e38 */
  goto L_10723e38;
L_10723e2f:;
  /* 10723e2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e32 mov dword ptr [0x1074f548], edx */
  w32((uint32_t)(0x1074f548), (EDX));
L_10723e38:;
  /* 10723e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e3b mov ecx, dword ptr [0x1074f550] */
  ECX = (r32((uint32_t)(0x1074f550)));
  /* 10723e41 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10723e43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e46 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10723e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723e53 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10723e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723e5c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10723e5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723e65 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10723e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723e6e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10723e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723e77 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10723e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e7d mov dword ptr [0x1074f550], ecx */
  w32((uint32_t)(0x1074f550), (ECX));
L_10723e83:;
  /* 10723e83 push 4 */
  push32((uint32_t)(0x4u));
  /* 10723e85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10723e87 mov dl, byte ptr [0x1074da90] */
  DL = (r8((uint32_t)(0x1074da90)));
  /* 10723e8d push edx */
  push32((uint32_t)(EDX));
  /* 10723e8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723e91 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723e94 push eax */
  push32((uint32_t)(EAX));
  /* 10723e95 call 0x10727870 */
  push32(0x10723e9au); f_10727870();
  /* 10723e9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723e9d push 4 */
  push32((uint32_t)(0x4u));
  /* 10723e9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10723ea1 mov cl, byte ptr [0x1074da90] */
  CL = (r8((uint32_t)(0x1074da90)));
  /* 10723ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 10723ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723eae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10723eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10723eb3 call 0x10727870 */
  push32(0x10723eb8u); f_10727870();
  /* 10723eb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723ebe push edx */
  push32((uint32_t)(EDX));
  /* 10723ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10723ec1 mov al, byte ptr [0x1074da92] */
  AL = (r8((uint32_t)(0x1074da92)));
  /* 10723ec6 push eax */
  push32((uint32_t)(EAX));
  /* 10723ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723eca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ecd push ecx */
  push32((uint32_t)(ECX));
  /* 10723ece call 0x10727870 */
  push32(0x10723ed3u); f_10727870();
  /* 10723ed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723ed9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10723edc:;
  /* 10723edc pop edi */
  EDI = (pop32());
  /* 10723edd pop esi */
  ESI = (pop32());
  /* 10723ede pop ebx */
  EBX = (pop32());
  /* 10723edf mov esp, ebp */
  ESP = (EBP);
  /* 10723ee1 pop ebp */
  EBP = (pop32());
  /* 10723ee2 ret  */
  ESPCHK(0x10723bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef0 @ 0x10723ef0 (27 bytes, 13 insns) */
void f_10723ef0(void) {
  FTRACE(0x10723ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10723ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10723ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723efc push eax */
  push32((uint32_t)(EAX));
  /* 10723efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723f00 push ecx */
  push32((uint32_t)(ECX));
  /* 10723f01 call 0x10723f10 */
  push32(0x10723f06u); f_10723f10();
  /* 10723f06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723f09 pop ebp */
  EBP = (pop32());
  /* 10723f0a ret  */
  ESPCHK(0x10723ef0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10723f10 (96 bytes, 37 insns) */
void f_10723f10(void) {
  FTRACE(0x10723f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10723f11 mov ebp, esp */
  EBP = (ESP);
  /* 10723f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723f19 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10723f1d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10723f20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10723f24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723f27 push edx */
  push32((uint32_t)(EDX));
  /* 10723f28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723f2b push eax */
  push32((uint32_t)(EAX));
  /* 10723f2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723f2f push ecx */
  push32((uint32_t)(ECX));
  /* 10723f30 call 0x10723b00 */
  push32(0x10723f35u); f_10723b00();
  /* 10723f35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723f38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10723f3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723f3f je 0x10723f69 */
  if (C.zf) goto L_10723f69;
  /* 10723f41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723f44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10723f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10723f4a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723f4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10723f50:;
  /* 10723f50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10723f53 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723f56 jae 0x10723f69 */
  if (!C.cf) goto L_10723f69;
  /* 10723f58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10723f5b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10723f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10723f61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10723f64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10723f67 jmp 0x10723f50 */
  goto L_10723f50;
L_10723f69:;
  /* 10723f69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10723f6c mov esp, ebp */
  ESP = (EBP);
  /* 10723f6e pop ebp */
  EBP = (pop32());
  /* 10723f6f ret  */
  ESPCHK(0x10723f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x10723f70 (27 bytes, 13 insns) */
void f_10723f70(void) {
  FTRACE(0x10723f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10723f71 mov ebp, esp */
  EBP = (ESP);
  /* 10723f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10723f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10723f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723f7c push eax */
  push32((uint32_t)(EAX));
  /* 10723f7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723f80 push ecx */
  push32((uint32_t)(ECX));
  /* 10723f81 call 0x10723f90 */
  push32(0x10723f86u); f_10723f90();
  /* 10723f86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723f89 pop ebp */
  EBP = (pop32());
  /* 10723f8a ret  */
  ESPCHK(0x10723f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x10723f90 (64 bytes, 27 insns) */
void f_10723f90(void) {
  FTRACE(0x10723f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10723f91 mov ebp, esp */
  EBP = (ESP);
  /* 10723f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10723f94 push 9 */
  push32((uint32_t)(0x9u));
  /* 10723f96 call 0x10727500 */
  push32(0x10723f9bu); f_10727500();
  /* 10723f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723f9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10723fa0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723fa3 push eax */
  push32((uint32_t)(EAX));
  /* 10723fa4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10723fa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723fab push edx */
  push32((uint32_t)(EDX));
  /* 10723fac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723faf push eax */
  push32((uint32_t)(EAX));
  /* 10723fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10723fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10723fb4 call 0x10723fd0 */
  push32(0x10723fb9u); f_10723fd0();
  /* 10723fb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723fbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10723fbf push 9 */
  push32((uint32_t)(0x9u));
  /* 10723fc1 call 0x107275a0 */
  push32(0x10723fc6u); f_107275a0();
  /* 10723fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10723fcc mov esp, ebp */
  ESP = (EBP);
  /* 10723fce pop ebp */
  EBP = (pop32());
  /* 10723fcf ret  */
  ESPCHK(0x10723f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x10723fd0 (1297 bytes, 431 insns) */
void f_10723fd0(void) {
  FTRACE(0x10723fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10723fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10723fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10723fd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10723fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10723fd7 push esi */
  push32((uint32_t)(ESI));
  /* 10723fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10723fd9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10723fe0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10723fe4 jne 0x10724003 */
  if (!C.zf) goto L_10724003;
  /* 10723fe6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10723fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10723fea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10723fed push ecx */
  push32((uint32_t)(ECX));
  /* 10723fee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10723ff1 push edx */
  push32((uint32_t)(EDX));
  /* 10723ff2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10723ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10723ff6 call 0x10723b00 */
  push32(0x10723ffbu); f_10723b00();
  /* 10723ffb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10723ffe jmp 0x107244da */
  goto L_107244da;
L_10724003:;
  /* 10724003 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724007 je 0x10724026 */
  if (C.zf) goto L_10724026;
  /* 10724009 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072400d jne 0x10724026 */
  if (!C.zf) goto L_10724026;
  /* 1072400f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10724012 push ecx */
  push32((uint32_t)(ECX));
  /* 10724013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724016 push edx */
  push32((uint32_t)(EDX));
  /* 10724017 call 0x10724590 */
  push32(0x1072401cu); f_10724590();
  /* 1072401c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072401f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724021 jmp 0x107244da */
  goto L_107244da;
L_10724026:;
  /* 10724026 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 1072402b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1072402e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724030 je 0x10724062 */
  if (C.zf) goto L_10724062;
L_10724032:;
  /* 10724032 call 0x10724ca0 */
  push32(0x10724037u); f_10724ca0();
  /* 10724037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724039 jne 0x1072405c */
  if (!C.zf) goto L_1072405c;
  /* 1072403b push 0x1074a5c8 */
  push32((uint32_t)(0x1074a5c8u));
  /* 10724040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724042 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10724047 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 1072404c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072404e call 0x10722bc0 */
  push32(0x10724053u); f_10722bc0();
  /* 10724053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724056 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724059 jne 0x1072405c */
  if (!C.zf) goto L_1072405c;
  /* 1072405b int3  */
  x86_unimpl("int3 @ 0x1072405b");
L_1072405c:;
  /* 1072405c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072405e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724060 jne 0x10724032 */
  if (!C.zf) goto L_10724032;
L_10724062:;
  /* 10724062 mov edx, dword ptr [0x1074da88] */
  EDX = (r32((uint32_t)(0x1074da88)));
  /* 10724068 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1072406b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072406e cmp eax, dword ptr [0x1074da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724074 jne 0x10724077 */
  if (!C.zf) goto L_10724077;
  /* 10724076 int3  */
  x86_unimpl("int3 @ 0x10724076");
L_10724077:;
  /* 10724077 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072407a push ecx */
  push32((uint32_t)(ECX));
  /* 1072407b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072407e push edx */
  push32((uint32_t)(EDX));
  /* 1072407f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10724082 push eax */
  push32((uint32_t)(EAX));
  /* 10724083 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10724086 push ecx */
  push32((uint32_t)(ECX));
  /* 10724087 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072408a push edx */
  push32((uint32_t)(EDX));
  /* 1072408b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072408e push eax */
  push32((uint32_t)(EAX));
  /* 1072408f push 2 */
  push32((uint32_t)(0x2u));
  /* 10724091 call dword ptr [0x1074dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074dc90))), 0x10724097u);
  /* 10724097 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072409a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072409c jne 0x107240fc */
  if (!C.zf) goto L_107240fc;
  /* 1072409e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107240a2 je 0x107240cf */
  if (C.zf) goto L_107240cf;
L_107240a4:;
  /* 107240a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107240a7 push ecx */
  push32((uint32_t)(ECX));
  /* 107240a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107240ab push edx */
  push32((uint32_t)(EDX));
  /* 107240ac push 0x1074a744 */
  push32((uint32_t)(0x1074a744u));
  /* 107240b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107240b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107240b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107240b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107240b9 call 0x10722bc0 */
  push32(0x107240beu); f_10722bc0();
  /* 107240be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107240c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107240c4 jne 0x107240c7 */
  if (!C.zf) goto L_107240c7;
  /* 107240c6 int3  */
  x86_unimpl("int3 @ 0x107240c6");
L_107240c7:;
  /* 107240c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107240c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107240cb jne 0x107240a4 */
  if (!C.zf) goto L_107240a4;
  /* 107240cd jmp 0x107240f5 */
  goto L_107240f5;
L_107240cf:;
  /* 107240cf push 0x1074a720 */
  push32((uint32_t)(0x1074a720u));
  /* 107240d4 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 107240d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107240db push 0 */
  push32((uint32_t)(0x0u));
  /* 107240dd push 0 */
  push32((uint32_t)(0x0u));
  /* 107240df push 0 */
  push32((uint32_t)(0x0u));
  /* 107240e1 call 0x10722bc0 */
  push32(0x107240e6u); f_10722bc0();
  /* 107240e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107240e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107240ec jne 0x107240ef */
  if (!C.zf) goto L_107240ef;
  /* 107240ee int3  */
  x86_unimpl("int3 @ 0x107240ee");
L_107240ef:;
  /* 107240ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107240f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107240f3 jne 0x107240cf */
  if (!C.zf) goto L_107240cf;
L_107240f5:;
  /* 107240f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107240f7 jmp 0x107244da */
  goto L_107244da;
L_107240fc:;
  /* 107240fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724100 jbe 0x1072412e */
  if ((C.cf||C.zf)) goto L_1072412e;
L_10724102:;
  /* 10724102 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724105 push edx */
  push32((uint32_t)(EDX));
  /* 10724106 push 0x1074a6f0 */
  push32((uint32_t)(0x1074a6f0u));
  /* 1072410b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072410d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072410f push 0 */
  push32((uint32_t)(0x0u));
  /* 10724111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10724113 call 0x10722bc0 */
  push32(0x10724118u); f_10722bc0();
  /* 10724118 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072411b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072411e jne 0x10724121 */
  if (!C.zf) goto L_10724121;
  /* 10724120 int3  */
  x86_unimpl("int3 @ 0x10724120");
L_10724121:;
  /* 10724121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724125 jne 0x10724102 */
  if (!C.zf) goto L_10724102;
  /* 10724127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724129 jmp 0x107244da */
  goto L_107244da;
L_1072412e:;
  /* 1072412e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724132 je 0x10724176 */
  if (C.zf) goto L_10724176;
  /* 10724134 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10724137 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1072413d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724140 je 0x10724176 */
  if (C.zf) goto L_10724176;
  /* 10724142 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10724145 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072414b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072414e je 0x10724176 */
  if (C.zf) goto L_10724176;
L_10724150:;
  /* 10724150 push 0x1074a504 */
  push32((uint32_t)(0x1074a504u));
  /* 10724155 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 1072415a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072415c push 0 */
  push32((uint32_t)(0x0u));
  /* 1072415e push 0 */
  push32((uint32_t)(0x0u));
  /* 10724160 push 1 */
  push32((uint32_t)(0x1u));
  /* 10724162 call 0x10722bc0 */
  push32(0x10724167u); f_10722bc0();
  /* 10724167 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072416a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072416d jne 0x10724170 */
  if (!C.zf) goto L_10724170;
  /* 1072416f int3  */
  x86_unimpl("int3 @ 0x1072416f");
L_10724170:;
  /* 10724170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724174 jne 0x10724150 */
  if (!C.zf) goto L_10724150;
L_10724176:;
  /* 10724176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724179 push ecx */
  push32((uint32_t)(ECX));
  /* 1072417a call 0x10725100 */
  push32(0x1072417fu); f_10725100();
  /* 1072417f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724184 jne 0x107241a7 */
  if (!C.zf) goto L_107241a7;
  /* 10724186 push 0x1074a6cc */
  push32((uint32_t)(0x1074a6ccu));
  /* 1072418b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072418d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10724192 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10724199 call 0x10722bc0 */
  push32(0x1072419eu); f_10722bc0();
  /* 1072419e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107241a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107241a4 jne 0x107241a7 */
  if (!C.zf) goto L_107241a7;
  /* 107241a6 int3  */
  x86_unimpl("int3 @ 0x107241a6");
L_107241a7:;
  /* 107241a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107241a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107241ab jne 0x10724176 */
  if (!C.zf) goto L_10724176;
  /* 107241ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107241b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107241b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107241b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107241b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107241bd jne 0x107241c6 */
  if (!C.zf) goto L_107241c6;
  /* 107241bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_107241c6:;
  /* 107241c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107241ca je 0x1072420a */
  if (C.zf) goto L_1072420a;
L_107241cc:;
  /* 107241cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107241cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107241d6 jne 0x107241e1 */
  if (!C.zf) goto L_107241e1;
  /* 107241d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107241db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107241df je 0x10724202 */
  if (C.zf) goto L_10724202;
L_107241e1:;
  /* 107241e1 push 0x1074a684 */
  push32((uint32_t)(0x1074a684u));
  /* 107241e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107241e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 107241ed push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107241f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107241f4 call 0x10722bc0 */
  push32(0x107241f9u); f_10722bc0();
  /* 107241f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107241fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107241ff jne 0x10724202 */
  if (!C.zf) goto L_10724202;
  /* 10724201 int3  */
  x86_unimpl("int3 @ 0x10724201");
L_10724202:;
  /* 10724202 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724204 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724206 jne 0x107241cc */
  if (!C.zf) goto L_107241cc;
  /* 10724208 jmp 0x1072426e */
  goto L_1072426e;
L_1072420a:;
  /* 1072420a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072420d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724210 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10724215 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724218 jne 0x1072422f */
  if (!C.zf) goto L_1072422f;
  /* 1072421a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072421d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724223 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724226 jne 0x1072422f */
  if (!C.zf) goto L_1072422f;
  /* 10724228 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1072422f:;
  /* 1072422f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724232 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724235 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072423a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072423d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724243 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724245 je 0x10724268 */
  if (C.zf) goto L_10724268;
  /* 10724247 push 0x1074a648 */
  push32((uint32_t)(0x1074a648u));
  /* 1072424c push 0 */
  push32((uint32_t)(0x0u));
  /* 1072424e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10724253 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072425a call 0x10722bc0 */
  push32(0x1072425fu); f_10722bc0();
  /* 1072425f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724262 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724265 jne 0x10724268 */
  if (!C.zf) goto L_10724268;
  /* 10724267 int3  */
  x86_unimpl("int3 @ 0x10724267");
L_10724268:;
  /* 10724268 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072426a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072426c jne 0x1072422f */
  if (!C.zf) goto L_1072422f;
L_1072426e:;
  /* 1072426e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724272 je 0x10724299 */
  if (C.zf) goto L_10724299;
  /* 10724274 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724277 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072427a push eax */
  push32((uint32_t)(EAX));
  /* 1072427b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072427e push ecx */
  push32((uint32_t)(ECX));
  /* 1072427f call 0x10727a80 */
  push32(0x10724284u); f_10727a80();
  /* 10724284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724287 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1072428a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072428e jne 0x10724297 */
  if (!C.zf) goto L_10724297;
  /* 10724290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724292 jmp 0x107244da */
  goto L_107244da;
L_10724297:;
  /* 10724297 jmp 0x107242bc */
  goto L_107242bc;
L_10724299:;
  /* 10724299 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072429c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072429f push edx */
  push32((uint32_t)(EDX));
  /* 107242a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107242a3 push eax */
  push32((uint32_t)(EAX));
  /* 107242a4 call 0x107279d0 */
  push32(0x107242a9u); f_107279d0();
  /* 107242a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107242ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107242af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107242b3 jne 0x107242bc */
  if (!C.zf) goto L_107242bc;
  /* 107242b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107242b7 jmp 0x107244da */
  goto L_107244da;
L_107242bc:;
  /* 107242bc mov ecx, dword ptr [0x1074da88] */
  ECX = (r32((uint32_t)(0x1074da88)));
  /* 107242c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107242c5 mov dword ptr [0x1074da88], ecx */
  w32((uint32_t)(0x1074da88), (ECX));
  /* 107242cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107242cf jne 0x10724327 */
  if (!C.zf) goto L_10724327;
  /* 107242d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107242d4 mov eax, dword ptr [0x1074f54c] */
  EAX = (r32((uint32_t)(0x1074f54c)));
  /* 107242d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107242dc mov dword ptr [0x1074f54c], eax */
  w32((uint32_t)(0x1074f54c), (EAX));
  /* 107242e1 mov ecx, dword ptr [0x1074f54c] */
  ECX = (r32((uint32_t)(0x1074f54c)));
  /* 107242e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107242ea mov dword ptr [0x1074f54c], ecx */
  w32((uint32_t)(0x1074f54c), (ECX));
  /* 107242f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107242f3 mov eax, dword ptr [0x1074f554] */
  EAX = (r32((uint32_t)(0x1074f554)));
  /* 107242f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107242fb mov dword ptr [0x1074f554], eax */
  w32((uint32_t)(0x1074f554), (EAX));
  /* 10724300 mov ecx, dword ptr [0x1074f554] */
  ECX = (r32((uint32_t)(0x1074f554)));
  /* 10724306 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724309 mov dword ptr [0x1074f554], ecx */
  w32((uint32_t)(0x1074f554), (ECX));
  /* 1072430f mov edx, dword ptr [0x1074f554] */
  EDX = (r32((uint32_t)(0x1074f554)));
  /* 10724315 cmp edx, dword ptr [0x1074f558] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074f558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072431b jbe 0x10724327 */
  if ((C.cf||C.zf)) goto L_10724327;
  /* 1072431d mov eax, dword ptr [0x1074f554] */
  EAX = (r32((uint32_t)(0x1074f554)));
  /* 10724322 mov dword ptr [0x1074f558], eax */
  w32((uint32_t)(0x1074f558), (EAX));
L_10724327:;
  /* 10724327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072432a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072432d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10724330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724333 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724336 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724339 jbe 0x1072435f */
  if ((C.cf||C.zf)) goto L_1072435f;
  /* 1072433b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072433e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724341 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724344 push edx */
  push32((uint32_t)(EDX));
  /* 10724345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724347 mov al, byte ptr [0x1074da92] */
  AL = (r8((uint32_t)(0x1074da92)));
  /* 1072434c push eax */
  push32((uint32_t)(EAX));
  /* 1072434d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724350 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724353 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724356 push edx */
  push32((uint32_t)(EDX));
  /* 10724357 call 0x10727870 */
  push32(0x1072435cu); f_10727870();
  /* 1072435c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072435f:;
  /* 1072435f push 4 */
  push32((uint32_t)(0x4u));
  /* 10724361 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724363 mov al, byte ptr [0x1074da90] */
  AL = (r8((uint32_t)(0x1074da90)));
  /* 10724368 push eax */
  push32((uint32_t)(EAX));
  /* 10724369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072436c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072436f push ecx */
  push32((uint32_t)(ECX));
  /* 10724370 call 0x10727870 */
  push32(0x10724375u); f_10727870();
  /* 10724375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724378 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072437c jne 0x10724399 */
  if (!C.zf) goto L_10724399;
  /* 1072437e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724381 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10724384 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10724387 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072438a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072438d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10724390 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724393 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10724396 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10724399:;
  /* 10724399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072439c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072439f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_107243a2:;
  /* 107243a2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243a6 jne 0x107243d7 */
  if (!C.zf) goto L_107243d7;
  /* 107243a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243ac jne 0x107243b6 */
  if (!C.zf) goto L_107243b6;
  /* 107243ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107243b1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243b4 je 0x107243d7 */
  if (C.zf) goto L_107243d7;
L_107243b6:;
  /* 107243b6 push 0x1074a614 */
  push32((uint32_t)(0x1074a614u));
  /* 107243bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107243bd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 107243c2 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107243c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107243c9 call 0x10722bc0 */
  push32(0x107243ceu); f_10722bc0();
  /* 107243ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107243d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243d4 jne 0x107243d7 */
  if (!C.zf) goto L_107243d7;
  /* 107243d6 int3  */
  x86_unimpl("int3 @ 0x107243d6");
L_107243d7:;
  /* 107243d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107243d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107243db jne 0x107243a2 */
  if (!C.zf) goto L_107243a2;
  /* 107243dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107243e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243e3 je 0x107243eb */
  if (C.zf) goto L_107243eb;
  /* 107243e5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243e9 je 0x107243f3 */
  if (C.zf) goto L_107243f3;
L_107243eb:;
  /* 107243eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107243ee jmp 0x107244da */
  goto L_107244da;
L_107243f3:;
  /* 107243f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107243f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107243f9 je 0x1072440b */
  if (C.zf) goto L_1072440b;
  /* 107243fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107243fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10724400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724403 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10724406 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10724409 jmp 0x10724447 */
  goto L_10724447;
L_1072440b:;
  /* 1072440b mov eax, dword ptr [0x1074f548] */
  EAX = (r32((uint32_t)(0x1074f548)));
  /* 10724410 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724413 je 0x10724436 */
  if (C.zf) goto L_10724436;
  /* 10724415 push 0x1074a5f8 */
  push32((uint32_t)(0x1074a5f8u));
  /* 1072441a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072441c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10724421 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724426 push 2 */
  push32((uint32_t)(0x2u));
  /* 10724428 call 0x10722bc0 */
  push32(0x1072442du); f_10722bc0();
  /* 1072442d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724430 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724433 jne 0x10724436 */
  if (!C.zf) goto L_10724436;
  /* 10724435 int3  */
  x86_unimpl("int3 @ 0x10724435");
L_10724436:;
  /* 10724436 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724438 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072443a jne 0x1072440b */
  if (!C.zf) goto L_1072440b;
  /* 1072443c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072443f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10724442 mov dword ptr [0x1074f548], eax */
  w32((uint32_t)(0x1074f548), (EAX));
L_10724447:;
  /* 10724447 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072444a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072444e je 0x1072445f */
  if (C.zf) goto L_1072445f;
  /* 10724450 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724453 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10724456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724459 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072445b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1072445d jmp 0x1072449a */
  goto L_1072449a;
L_1072445f:;
  /* 1072445f mov eax, dword ptr [0x1074f550] */
  EAX = (r32((uint32_t)(0x1074f550)));
  /* 10724464 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724467 je 0x1072448a */
  if (C.zf) goto L_1072448a;
  /* 10724469 push 0x1074a5dc */
  push32((uint32_t)(0x1074a5dcu));
  /* 1072446e push 0 */
  push32((uint32_t)(0x0u));
  /* 10724470 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10724475 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 1072447a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072447c call 0x10722bc0 */
  push32(0x10724481u); f_10722bc0();
  /* 10724481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724487 jne 0x1072448a */
  if (!C.zf) goto L_1072448a;
  /* 10724489 int3  */
  x86_unimpl("int3 @ 0x10724489");
L_1072448a:;
  /* 1072448a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072448c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072448e jne 0x1072445f */
  if (!C.zf) goto L_1072445f;
  /* 10724490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724493 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10724495 mov dword ptr [0x1074f550], eax */
  w32((uint32_t)(0x1074f550), (EAX));
L_1072449a:;
  /* 1072449a cmp dword ptr [0x1074f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107244a1 je 0x107244b1 */
  if (C.zf) goto L_107244b1;
  /* 107244a3 mov ecx, dword ptr [0x1074f550] */
  ECX = (r32((uint32_t)(0x1074f550)));
  /* 107244a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107244ac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107244af jmp 0x107244b9 */
  goto L_107244b9;
L_107244b1:;
  /* 107244b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107244b4 mov dword ptr [0x1074f548], eax */
  w32((uint32_t)(0x1074f548), (EAX));
L_107244b9:;
  /* 107244b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107244bc mov edx, dword ptr [0x1074f550] */
  EDX = (r32((uint32_t)(0x1074f550)));
  /* 107244c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107244c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107244c7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 107244ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107244d1 mov dword ptr [0x1074f550], ecx */
  w32((uint32_t)(0x1074f550), (ECX));
  /* 107244d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107244da:;
  /* 107244da pop edi */
  EDI = (pop32());
  /* 107244db pop esi */
  ESI = (pop32());
  /* 107244dc pop ebx */
  EBX = (pop32());
  /* 107244dd mov esp, ebp */
  ESP = (EBP);
  /* 107244df pop ebp */
  EBP = (pop32());
  /* 107244e0 ret  */
  ESPCHK(0x10723fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f0 @ 0x107244f0 (27 bytes, 13 insns) */
void f_107244f0(void) {
  FTRACE(0x107244f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107244f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107244f1 mov ebp, esp */
  EBP = (ESP);
  /* 107244f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107244f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107244f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107244f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107244fc push eax */
  push32((uint32_t)(EAX));
  /* 107244fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724500 push ecx */
  push32((uint32_t)(ECX));
  /* 10724501 call 0x10724510 */
  push32(0x10724506u); f_10724510();
  /* 10724506 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724509 pop ebp */
  EBP = (pop32());
  /* 1072450a ret  */
  ESPCHK(0x107244f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004510 @ 0x10724510 (64 bytes, 27 insns) */
void f_10724510(void) {
  FTRACE(0x10724510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724510 push ebp */
  push32((uint32_t)(EBP));
  /* 10724511 mov ebp, esp */
  EBP = (ESP);
  /* 10724513 push ecx */
  push32((uint32_t)(ECX));
  /* 10724514 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724516 call 0x10727500 */
  push32(0x1072451bu); f_10727500();
  /* 1072451b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072451e push 0 */
  push32((uint32_t)(0x0u));
  /* 10724520 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10724523 push eax */
  push32((uint32_t)(EAX));
  /* 10724524 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10724527 push ecx */
  push32((uint32_t)(ECX));
  /* 10724528 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072452b push edx */
  push32((uint32_t)(EDX));
  /* 1072452c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072452f push eax */
  push32((uint32_t)(EAX));
  /* 10724530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724533 push ecx */
  push32((uint32_t)(ECX));
  /* 10724534 call 0x10723fd0 */
  push32(0x10724539u); f_10723fd0();
  /* 10724539 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072453c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072453f push 9 */
  push32((uint32_t)(0x9u));
  /* 10724541 call 0x107275a0 */
  push32(0x10724546u); f_107275a0();
  /* 10724546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072454c mov esp, ebp */
  ESP = (EBP);
  /* 1072454e pop ebp */
  EBP = (pop32());
  /* 1072454f ret  */
  ESPCHK(0x10724510u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x10724550 (19 bytes, 9 insns) */
void f_10724550(void) {
  FTRACE(0x10724550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724550 push ebp */
  push32((uint32_t)(EBP));
  /* 10724551 mov ebp, esp */
  EBP = (ESP);
  /* 10724553 push 1 */
  push32((uint32_t)(0x1u));
  /* 10724555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724558 push eax */
  push32((uint32_t)(EAX));
  /* 10724559 call 0x10724590 */
  push32(0x1072455eu); f_10724590();
  /* 1072455e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724561 pop ebp */
  EBP = (pop32());
  /* 10724562 ret  */
  ESPCHK(0x10724550u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x10724570 (19 bytes, 9 insns) */
void f_10724570(void) {
  FTRACE(0x10724570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724570 push ebp */
  push32((uint32_t)(EBP));
  /* 10724571 mov ebp, esp */
  EBP = (ESP);
  /* 10724573 push 1 */
  push32((uint32_t)(0x1u));
  /* 10724575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724578 push eax */
  push32((uint32_t)(EAX));
  /* 10724579 call 0x107245c0 */
  push32(0x1072457eu); f_107245c0();
  /* 1072457e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724581 pop ebp */
  EBP = (pop32());
  /* 10724582 ret  */
  ESPCHK(0x10724570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x10724590 (41 bytes, 16 insns) */
void f_10724590(void) {
  FTRACE(0x10724590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724590 push ebp */
  push32((uint32_t)(EBP));
  /* 10724591 mov ebp, esp */
  EBP = (ESP);
  /* 10724593 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724595 call 0x10727500 */
  push32(0x1072459au); f_10727500();
  /* 1072459a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072459d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107245a0 push eax */
  push32((uint32_t)(EAX));
  /* 107245a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107245a4 push ecx */
  push32((uint32_t)(ECX));
  /* 107245a5 call 0x107245c0 */
  push32(0x107245aau); f_107245c0();
  /* 107245aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107245ad push 9 */
  push32((uint32_t)(0x9u));
  /* 107245af call 0x107275a0 */
  push32(0x107245b4u); f_107275a0();
  /* 107245b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107245b7 pop ebp */
  EBP = (pop32());
  /* 107245b8 ret  */
  ESPCHK(0x10724590u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x107245c0 (1004 bytes, 342 insns) */
void f_107245c0(void) {
  FTRACE(0x107245c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107245c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107245c1 mov ebp, esp */
  EBP = (ESP);
  /* 107245c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107245c4 push ebx */
  push32((uint32_t)(EBX));
  /* 107245c5 push esi */
  push32((uint32_t)(ESI));
  /* 107245c6 push edi */
  push32((uint32_t)(EDI));
  /* 107245c7 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 107245cc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107245cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107245d1 je 0x10724603 */
  if (C.zf) goto L_10724603;
L_107245d3:;
  /* 107245d3 call 0x10724ca0 */
  push32(0x107245d8u); f_10724ca0();
  /* 107245d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107245da jne 0x107245fd */
  if (!C.zf) goto L_107245fd;
  /* 107245dc push 0x1074a5c8 */
  push32((uint32_t)(0x1074a5c8u));
  /* 107245e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107245e3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 107245e8 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107245ed push 2 */
  push32((uint32_t)(0x2u));
  /* 107245ef call 0x10722bc0 */
  push32(0x107245f4u); f_10722bc0();
  /* 107245f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107245f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107245fa jne 0x107245fd */
  if (!C.zf) goto L_107245fd;
  /* 107245fc int3  */
  x86_unimpl("int3 @ 0x107245fc");
L_107245fd:;
  /* 107245fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107245ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724601 jne 0x107245d3 */
  if (!C.zf) goto L_107245d3;
L_10724603:;
  /* 10724603 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724607 jne 0x1072460e */
  if (!C.zf) goto L_1072460e;
  /* 10724609 jmp 0x107249a5 */
  goto L_107249a5;
L_1072460e:;
  /* 1072460e push 0 */
  push32((uint32_t)(0x0u));
  /* 10724610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724614 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724617 push edx */
  push32((uint32_t)(EDX));
  /* 10724618 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072461a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072461d push eax */
  push32((uint32_t)(EAX));
  /* 1072461e push 3 */
  push32((uint32_t)(0x3u));
  /* 10724620 call dword ptr [0x1074dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074dc90))), 0x10724626u);
  /* 10724626 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072462b jne 0x10724658 */
  if (!C.zf) goto L_10724658;
L_1072462d:;
  /* 1072462d push 0x1074a88c */
  push32((uint32_t)(0x1074a88cu));
  /* 10724632 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10724637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072463b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072463d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072463f call 0x10722bc0 */
  push32(0x10724644u); f_10722bc0();
  /* 10724644 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072464a jne 0x1072464d */
  if (!C.zf) goto L_1072464d;
  /* 1072464c int3  */
  x86_unimpl("int3 @ 0x1072464c");
L_1072464d:;
  /* 1072464d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072464f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724651 jne 0x1072462d */
  if (!C.zf) goto L_1072462d;
  /* 10724653 jmp 0x107249a5 */
  goto L_107249a5;
L_10724658:;
  /* 10724658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072465b push edx */
  push32((uint32_t)(EDX));
  /* 1072465c call 0x10725100 */
  push32(0x10724661u); f_10725100();
  /* 10724661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724666 jne 0x10724689 */
  if (!C.zf) goto L_10724689;
  /* 10724668 push 0x1074a6cc */
  push32((uint32_t)(0x1074a6ccu));
  /* 1072466d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072466f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10724674 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724679 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072467b call 0x10722bc0 */
  push32(0x10724680u); f_10722bc0();
  /* 10724680 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724683 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724686 jne 0x10724689 */
  if (!C.zf) goto L_10724689;
  /* 10724688 int3  */
  x86_unimpl("int3 @ 0x10724688");
L_10724689:;
  /* 10724689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072468b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072468d jne 0x10724658 */
  if (!C.zf) goto L_10724658;
  /* 1072468f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724692 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724695 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10724698:;
  /* 10724698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072469b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1072469e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107246a3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107246a6 je 0x107246eb */
  if (C.zf) goto L_107246eb;
  /* 107246a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107246ab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107246af je 0x107246eb */
  if (C.zf) goto L_107246eb;
  /* 107246b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107246b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107246b7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107246bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107246bf je 0x107246eb */
  if (C.zf) goto L_107246eb;
  /* 107246c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107246c4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107246c8 je 0x107246eb */
  if (C.zf) goto L_107246eb;
  /* 107246ca push 0x1074a864 */
  push32((uint32_t)(0x1074a864u));
  /* 107246cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107246d1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 107246d6 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107246db push 2 */
  push32((uint32_t)(0x2u));
  /* 107246dd call 0x10722bc0 */
  push32(0x107246e2u); f_10722bc0();
  /* 107246e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107246e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107246e8 jne 0x107246eb */
  if (!C.zf) goto L_107246eb;
  /* 107246ea int3  */
  x86_unimpl("int3 @ 0x107246ea");
L_107246eb:;
  /* 107246eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107246ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107246ef jne 0x10724698 */
  if (!C.zf) goto L_10724698;
  /* 107246f1 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 107246f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107246f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107246fb jne 0x107247c6 */
  if (!C.zf) goto L_107247c6;
  /* 10724701 push 4 */
  push32((uint32_t)(0x4u));
  /* 10724703 mov cl, byte ptr [0x1074da90] */
  CL = (r8((uint32_t)(0x1074da90)));
  /* 10724709 push ecx */
  push32((uint32_t)(ECX));
  /* 1072470a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072470d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724710 push edx */
  push32((uint32_t)(EDX));
  /* 10724711 call 0x10724c10 */
  push32(0x10724716u); f_10724c10();
  /* 10724716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072471b jne 0x10724760 */
  if (!C.zf) goto L_10724760;
L_1072471d:;
  /* 1072471d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724720 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724723 push eax */
  push32((uint32_t)(EAX));
  /* 10724724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724727 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1072472a push edx */
  push32((uint32_t)(EDX));
  /* 1072472b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072472e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10724731 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724737 mov edx, dword ptr [ecx*4 + 0x1074da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da94)));
  /* 1072473e push edx */
  push32((uint32_t)(EDX));
  /* 1072473f push 0x1074a838 */
  push32((uint32_t)(0x1074a838u));
  /* 10724744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072474a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072474c call 0x10722bc0 */
  push32(0x10724751u); f_10722bc0();
  /* 10724751 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724754 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724757 jne 0x1072475a */
  if (!C.zf) goto L_1072475a;
  /* 10724759 int3  */
  x86_unimpl("int3 @ 0x10724759");
L_1072475a:;
  /* 1072475a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072475c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072475e jne 0x1072471d */
  if (!C.zf) goto L_1072471d;
L_10724760:;
  /* 10724760 push 4 */
  push32((uint32_t)(0x4u));
  /* 10724762 mov cl, byte ptr [0x1074da90] */
  CL = (r8((uint32_t)(0x1074da90)));
  /* 10724768 push ecx */
  push32((uint32_t)(ECX));
  /* 10724769 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072476c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072476f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724772 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10724776 push edx */
  push32((uint32_t)(EDX));
  /* 10724777 call 0x10724c10 */
  push32(0x1072477cu); f_10724c10();
  /* 1072477c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072477f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724781 jne 0x107247c6 */
  if (!C.zf) goto L_107247c6;
L_10724783:;
  /* 10724783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724786 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724789 push eax */
  push32((uint32_t)(EAX));
  /* 1072478a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072478d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10724790 push edx */
  push32((uint32_t)(EDX));
  /* 10724791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724794 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10724797 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1072479d mov edx, dword ptr [ecx*4 + 0x1074da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da94)));
  /* 107247a4 push edx */
  push32((uint32_t)(EDX));
  /* 107247a5 push 0x1074a80c */
  push32((uint32_t)(0x1074a80cu));
  /* 107247aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107247ac push 0 */
  push32((uint32_t)(0x0u));
  /* 107247ae push 0 */
  push32((uint32_t)(0x0u));
  /* 107247b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107247b2 call 0x10722bc0 */
  push32(0x107247b7u); f_10722bc0();
  /* 107247b7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107247ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107247bd jne 0x107247c0 */
  if (!C.zf) goto L_107247c0;
  /* 107247bf int3  */
  x86_unimpl("int3 @ 0x107247bf");
L_107247c0:;
  /* 107247c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107247c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107247c4 jne 0x10724783 */
  if (!C.zf) goto L_10724783;
L_107247c6:;
  /* 107247c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107247c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107247cd jne 0x1072483b */
  if (!C.zf) goto L_1072483b;
L_107247cf:;
  /* 107247cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107247d2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107247d9 jne 0x107247e4 */
  if (!C.zf) goto L_107247e4;
  /* 107247db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107247de cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107247e2 je 0x10724805 */
  if (C.zf) goto L_10724805;
L_107247e4:;
  /* 107247e4 push 0x1074a7cc */
  push32((uint32_t)(0x1074a7ccu));
  /* 107247e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107247eb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 107247f0 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107247f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107247f7 call 0x10722bc0 */
  push32(0x107247fcu); f_10722bc0();
  /* 107247fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107247ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724802 jne 0x10724805 */
  if (!C.zf) goto L_10724805;
  /* 10724804 int3  */
  x86_unimpl("int3 @ 0x10724804");
L_10724805:;
  /* 10724805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724809 jne 0x107247cf */
  if (!C.zf) goto L_107247cf;
  /* 1072480b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072480e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10724811 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724814 push eax */
  push32((uint32_t)(EAX));
  /* 10724815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724817 mov cl, byte ptr [0x1074da91] */
  CL = (r8((uint32_t)(0x1074da91)));
  /* 1072481d push ecx */
  push32((uint32_t)(ECX));
  /* 1072481e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724821 push edx */
  push32((uint32_t)(EDX));
  /* 10724822 call 0x10727870 */
  push32(0x10724827u); f_10727870();
  /* 10724827 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072482a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072482d push eax */
  push32((uint32_t)(EAX));
  /* 1072482e call 0x10727c70 */
  push32(0x10724833u); f_10727c70();
  /* 10724833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724836 jmp 0x107249a5 */
  goto L_107249a5;
L_1072483b:;
  /* 1072483b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072483e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724842 jne 0x10724851 */
  if (!C.zf) goto L_10724851;
  /* 10724844 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724848 jne 0x10724851 */
  if (!C.zf) goto L_10724851;
  /* 1072484a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10724851:;
  /* 10724851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724854 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724857 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072485a je 0x1072487d */
  if (C.zf) goto L_1072487d;
  /* 1072485c push 0x1074a7ac */
  push32((uint32_t)(0x1074a7acu));
  /* 10724861 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724863 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10724868 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 1072486d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072486f call 0x10722bc0 */
  push32(0x10724874u); f_10722bc0();
  /* 10724874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072487a jne 0x1072487d */
  if (!C.zf) goto L_1072487d;
  /* 1072487c int3  */
  x86_unimpl("int3 @ 0x1072487c");
L_1072487d:;
  /* 1072487d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072487f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724881 jne 0x10724851 */
  if (!C.zf) goto L_10724851;
  /* 10724883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724886 mov eax, dword ptr [0x1074f554] */
  EAX = (r32((uint32_t)(0x1074f554)));
  /* 1072488b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072488e mov dword ptr [0x1074f554], eax */
  w32((uint32_t)(0x1074f554), (EAX));
  /* 10724893 mov ecx, dword ptr [0x1074da84] */
  ECX = (r32((uint32_t)(0x1074da84)));
  /* 10724899 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1072489c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072489e jne 0x1072497c */
  if (!C.zf) goto L_1072497c;
  /* 107248a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107248a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107248aa je 0x107248bc */
  if (C.zf) goto L_107248bc;
  /* 107248ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107248af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107248b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107248b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107248b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107248ba jmp 0x107248fa */
  goto L_107248fa;
L_107248bc:;
  /* 107248bc mov ecx, dword ptr [0x1074f548] */
  ECX = (r32((uint32_t)(0x1074f548)));
  /* 107248c2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107248c5 je 0x107248e8 */
  if (C.zf) goto L_107248e8;
  /* 107248c7 push 0x1074a794 */
  push32((uint32_t)(0x1074a794u));
  /* 107248cc push 0 */
  push32((uint32_t)(0x0u));
  /* 107248ce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 107248d3 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107248d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107248da call 0x10722bc0 */
  push32(0x107248dfu); f_10722bc0();
  /* 107248df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107248e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107248e5 jne 0x107248e8 */
  if (!C.zf) goto L_107248e8;
  /* 107248e7 int3  */
  x86_unimpl("int3 @ 0x107248e7");
L_107248e8:;
  /* 107248e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107248ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107248ec jne 0x107248bc */
  if (!C.zf) goto L_107248bc;
  /* 107248ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107248f1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107248f4 mov dword ptr [0x1074f548], ecx */
  w32((uint32_t)(0x1074f548), (ECX));
L_107248fa:;
  /* 107248fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107248fd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724901 je 0x10724912 */
  if (C.zf) goto L_10724912;
  /* 10724903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724906 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10724909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072490c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1072490e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10724910 jmp 0x1072494f */
  goto L_1072494f;
L_10724912:;
  /* 10724912 mov ecx, dword ptr [0x1074f550] */
  ECX = (r32((uint32_t)(0x1074f550)));
  /* 10724918 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072491b je 0x1072493e */
  if (C.zf) goto L_1072493e;
  /* 1072491d push 0x1074a77c */
  push32((uint32_t)(0x1074a77cu));
  /* 10724922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724924 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10724929 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 1072492e push 2 */
  push32((uint32_t)(0x2u));
  /* 10724930 call 0x10722bc0 */
  push32(0x10724935u); f_10722bc0();
  /* 10724935 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724938 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072493b jne 0x1072493e */
  if (!C.zf) goto L_1072493e;
  /* 1072493d int3  */
  x86_unimpl("int3 @ 0x1072493d");
L_1072493e:;
  /* 1072493e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724942 jne 0x10724912 */
  if (!C.zf) goto L_10724912;
  /* 10724944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724947 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10724949 mov dword ptr [0x1074f550], ecx */
  w32((uint32_t)(0x1074f550), (ECX));
L_1072494f:;
  /* 1072494f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724952 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10724955 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724958 push eax */
  push32((uint32_t)(EAX));
  /* 10724959 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072495b mov cl, byte ptr [0x1074da91] */
  CL = (r8((uint32_t)(0x1074da91)));
  /* 10724961 push ecx */
  push32((uint32_t)(ECX));
  /* 10724962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724965 push edx */
  push32((uint32_t)(EDX));
  /* 10724966 call 0x10727870 */
  push32(0x1072496bu); f_10727870();
  /* 1072496b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072496e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724971 push eax */
  push32((uint32_t)(EAX));
  /* 10724972 call 0x10727c70 */
  push32(0x10724977u); f_10727c70();
  /* 10724977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072497a jmp 0x107249a5 */
  goto L_107249a5;
L_1072497c:;
  /* 1072497c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072497f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10724986 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724989 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072498c push eax */
  push32((uint32_t)(EAX));
  /* 1072498d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072498f mov cl, byte ptr [0x1074da91] */
  CL = (r8((uint32_t)(0x1074da91)));
  /* 10724995 push ecx */
  push32((uint32_t)(ECX));
  /* 10724996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724999 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072499c push edx */
  push32((uint32_t)(EDX));
  /* 1072499d call 0x10727870 */
  push32(0x107249a2u); f_10727870();
  /* 107249a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107249a5:;
  /* 107249a5 pop edi */
  EDI = (pop32());
  /* 107249a6 pop esi */
  ESI = (pop32());
  /* 107249a7 pop ebx */
  EBX = (pop32());
  /* 107249a8 mov esp, ebp */
  ESP = (EBP);
  /* 107249aa pop ebp */
  EBP = (pop32());
  /* 107249ab ret  */
  ESPCHK(0x107245c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049b0 @ 0x107249b0 (19 bytes, 9 insns) */
void f_107249b0(void) {
  FTRACE(0x107249b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107249b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107249b1 mov ebp, esp */
  EBP = (ESP);
  /* 107249b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107249b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107249b8 push eax */
  push32((uint32_t)(EAX));
  /* 107249b9 call 0x107249d0 */
  push32(0x107249beu); f_107249d0();
  /* 107249be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107249c1 pop ebp */
  EBP = (pop32());
  /* 107249c2 ret  */
  ESPCHK(0x107249b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d0 @ 0x107249d0 (342 bytes, 119 insns) */
void f_107249d0(void) {
  FTRACE(0x107249d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107249d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107249d1 mov ebp, esp */
  EBP = (ESP);
  /* 107249d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107249d6 push ebx */
  push32((uint32_t)(EBX));
  /* 107249d7 push esi */
  push32((uint32_t)(ESI));
  /* 107249d8 push edi */
  push32((uint32_t)(EDI));
  /* 107249d9 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 107249de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107249e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107249e3 je 0x10724a15 */
  if (C.zf) goto L_10724a15;
L_107249e5:;
  /* 107249e5 call 0x10724ca0 */
  push32(0x107249eau); f_10724ca0();
  /* 107249ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107249ec jne 0x10724a0f */
  if (!C.zf) goto L_10724a0f;
  /* 107249ee push 0x1074a5c8 */
  push32((uint32_t)(0x1074a5c8u));
  /* 107249f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107249f5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 107249fa push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 107249ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10724a01 call 0x10722bc0 */
  push32(0x10724a06u); f_10722bc0();
  /* 10724a06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724a0c jne 0x10724a0f */
  if (!C.zf) goto L_10724a0f;
  /* 10724a0e int3  */
  x86_unimpl("int3 @ 0x10724a0e");
L_10724a0f:;
  /* 10724a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724a11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724a13 jne 0x107249e5 */
  if (!C.zf) goto L_107249e5;
L_10724a15:;
  /* 10724a15 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724a17 call 0x10727500 */
  push32(0x10724a1cu); f_10727500();
  /* 10724a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10724a1f:;
  /* 10724a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724a22 push edx */
  push32((uint32_t)(EDX));
  /* 10724a23 call 0x10725100 */
  push32(0x10724a28u); f_10725100();
  /* 10724a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724a2d jne 0x10724a50 */
  if (!C.zf) goto L_10724a50;
  /* 10724a2f push 0x1074a6cc */
  push32((uint32_t)(0x1074a6ccu));
  /* 10724a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724a36 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10724a3b push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10724a42 call 0x10722bc0 */
  push32(0x10724a47u); f_10722bc0();
  /* 10724a47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724a4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724a4d jne 0x10724a50 */
  if (!C.zf) goto L_10724a50;
  /* 10724a4f int3  */
  x86_unimpl("int3 @ 0x10724a4f");
L_10724a50:;
  /* 10724a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724a54 jne 0x10724a1f */
  if (!C.zf) goto L_10724a1f;
  /* 10724a56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724a59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724a5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10724a5f:;
  /* 10724a5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724a62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724a65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10724a6a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724a6d je 0x10724ab2 */
  if (C.zf) goto L_10724ab2;
  /* 10724a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724a72 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724a76 je 0x10724ab2 */
  if (C.zf) goto L_10724ab2;
  /* 10724a78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724a7b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724a7e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10724a83 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724a86 je 0x10724ab2 */
  if (C.zf) goto L_10724ab2;
  /* 10724a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724a8b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724a8f je 0x10724ab2 */
  if (C.zf) goto L_10724ab2;
  /* 10724a91 push 0x1074a864 */
  push32((uint32_t)(0x1074a864u));
  /* 10724a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724a98 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10724a9d push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10724aa4 call 0x10722bc0 */
  push32(0x10724aa9u); f_10722bc0();
  /* 10724aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724aaf jne 0x10724ab2 */
  if (!C.zf) goto L_10724ab2;
  /* 10724ab1 int3  */
  x86_unimpl("int3 @ 0x10724ab1");
L_10724ab2:;
  /* 10724ab2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724ab6 jne 0x10724a5f */
  if (!C.zf) goto L_10724a5f;
  /* 10724ab8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724abb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724abf jne 0x10724ace */
  if (!C.zf) goto L_10724ace;
  /* 10724ac1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724ac5 jne 0x10724ace */
  if (!C.zf) goto L_10724ace;
  /* 10724ac7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10724ace:;
  /* 10724ace mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724ad1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724ad5 je 0x10724b09 */
  if (C.zf) goto L_10724b09;
L_10724ad7:;
  /* 10724ad7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724ada mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724add cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724ae0 je 0x10724b03 */
  if (C.zf) goto L_10724b03;
  /* 10724ae2 push 0x1074a7ac */
  push32((uint32_t)(0x1074a7acu));
  /* 10724ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724ae9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10724aee push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10724af5 call 0x10722bc0 */
  push32(0x10724afau); f_10722bc0();
  /* 10724afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724afd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724b00 jne 0x10724b03 */
  if (!C.zf) goto L_10724b03;
  /* 10724b02 int3  */
  x86_unimpl("int3 @ 0x10724b02");
L_10724b03:;
  /* 10724b03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724b05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724b07 jne 0x10724ad7 */
  if (!C.zf) goto L_10724ad7;
L_10724b09:;
  /* 10724b09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724b0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10724b0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10724b12 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724b14 call 0x107275a0 */
  push32(0x10724b19u); f_107275a0();
  /* 10724b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724b1f pop edi */
  EDI = (pop32());
  /* 10724b20 pop esi */
  ESI = (pop32());
  /* 10724b21 pop ebx */
  EBX = (pop32());
  /* 10724b22 mov esp, ebp */
  ESP = (EBP);
  /* 10724b24 pop ebp */
  EBP = (pop32());
  /* 10724b25 ret  */
  ESPCHK(0x107249d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b30 @ 0x10724b30 (28 bytes, 11 insns) */
void f_10724b30(void) {
  FTRACE(0x10724b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10724b31 mov ebp, esp */
  EBP = (ESP);
  /* 10724b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10724b34 mov eax, dword ptr [0x1074da8c] */
  EAX = (r32((uint32_t)(0x1074da8c)));
  /* 10724b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10724b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724b3f mov dword ptr [0x1074da8c], ecx */
  w32((uint32_t)(0x1074da8c), (ECX));
  /* 10724b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724b48 mov esp, ebp */
  ESP = (EBP);
  /* 10724b4a pop ebp */
  EBP = (pop32());
  /* 10724b4b ret  */
  ESPCHK(0x10724b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x10724b50 (157 bytes, 59 insns) */
void f_10724b50(void) {
  FTRACE(0x10724b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10724b51 mov ebp, esp */
  EBP = (ESP);
  /* 10724b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10724b54 push ebx */
  push32((uint32_t)(EBX));
  /* 10724b55 push esi */
  push32((uint32_t)(ESI));
  /* 10724b56 push edi */
  push32((uint32_t)(EDI));
  /* 10724b57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724b59 call 0x10727500 */
  push32(0x10724b5eu); f_10727500();
  /* 10724b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724b64 push eax */
  push32((uint32_t)(EAX));
  /* 10724b65 call 0x10725100 */
  push32(0x10724b6au); f_10725100();
  /* 10724b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724b6f je 0x10724bdc */
  if (C.zf) goto L_10724bdc;
  /* 10724b71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724b74 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724b77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10724b7a:;
  /* 10724b7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724b7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724b80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10724b85 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724b88 je 0x10724bcd */
  if (C.zf) goto L_10724bcd;
  /* 10724b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724b8d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724b91 je 0x10724bcd */
  if (C.zf) goto L_10724bcd;
  /* 10724b93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724b96 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10724b99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10724b9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724ba1 je 0x10724bcd */
  if (C.zf) goto L_10724bcd;
  /* 10724ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724ba6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724baa je 0x10724bcd */
  if (C.zf) goto L_10724bcd;
  /* 10724bac push 0x1074a864 */
  push32((uint32_t)(0x1074a864u));
  /* 10724bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724bb3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10724bb8 push 0x1074a5bc */
  push32((uint32_t)(0x1074a5bcu));
  /* 10724bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10724bbf call 0x10722bc0 */
  push32(0x10724bc4u); f_10722bc0();
  /* 10724bc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724bc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724bca jne 0x10724bcd */
  if (!C.zf) goto L_10724bcd;
  /* 10724bcc int3  */
  x86_unimpl("int3 @ 0x10724bcc");
L_10724bcd:;
  /* 10724bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724bd1 jne 0x10724b7a */
  if (!C.zf) goto L_10724b7a;
  /* 10724bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724bd9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10724bdc:;
  /* 10724bdc push 9 */
  push32((uint32_t)(0x9u));
  /* 10724bde call 0x107275a0 */
  push32(0x10724be3u); f_107275a0();
  /* 10724be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724be6 pop edi */
  EDI = (pop32());
  /* 10724be7 pop esi */
  ESI = (pop32());
  /* 10724be8 pop ebx */
  EBX = (pop32());
  /* 10724be9 mov esp, ebp */
  ESP = (EBP);
  /* 10724beb pop ebp */
  EBP = (pop32());
  /* 10724bec ret  */
  ESPCHK(0x10724b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bf0 @ 0x10724bf0 (28 bytes, 11 insns) */
void f_10724bf0(void) {
  FTRACE(0x10724bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10724bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10724bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10724bf4 mov eax, dword ptr [0x1074dc90] */
  EAX = (r32((uint32_t)(0x1074dc90)));
  /* 10724bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10724bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724bff mov dword ptr [0x1074dc90], ecx */
  w32((uint32_t)(0x1074dc90), (ECX));
  /* 10724c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724c08 mov esp, ebp */
  ESP = (EBP);
  /* 10724c0a pop ebp */
  EBP = (pop32());
  /* 10724c0b ret  */
  ESPCHK(0x10724bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x10724c10 (136 bytes, 55 insns) */
void f_10724c10(void) {
  FTRACE(0x10724c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10724c11 mov ebp, esp */
  EBP = (ESP);
  /* 10724c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10724c14 push ebx */
  push32((uint32_t)(EBX));
  /* 10724c15 push esi */
  push32((uint32_t)(ESI));
  /* 10724c16 push edi */
  push32((uint32_t)(EDI));
  /* 10724c17 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10724c1e:;
  /* 10724c1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10724c21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10724c24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724c27 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10724c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724c2c je 0x10724c8e */
  if (C.zf) goto L_10724c8e;
  /* 10724c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724c31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724c33 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10724c35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724c38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724c3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724c41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724c44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10724c47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724c49 je 0x10724c8c */
  if (C.zf) goto L_10724c8c;
L_10724c4b:;
  /* 10724c4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10724c4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10724c53 push eax */
  push32((uint32_t)(EAX));
  /* 10724c54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724c59 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10724c5c push edx */
  push32((uint32_t)(EDX));
  /* 10724c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10724c60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724c63 push eax */
  push32((uint32_t)(EAX));
  /* 10724c64 push 0x1074a8a8 */
  push32((uint32_t)(0x1074a8a8u));
  /* 10724c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10724c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10724c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10724c71 call 0x10722bc0 */
  push32(0x10724c76u); f_10722bc0();
  /* 10724c76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724c7c jne 0x10724c7f */
  if (!C.zf) goto L_10724c7f;
  /* 10724c7e int3  */
  x86_unimpl("int3 @ 0x10724c7e");
L_10724c7f:;
  /* 10724c7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724c81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724c83 jne 0x10724c4b */
  if (!C.zf) goto L_10724c4b;
  /* 10724c85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10724c8c:;
  /* 10724c8c jmp 0x10724c1e */
  goto L_10724c1e;
L_10724c8e:;
  /* 10724c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10724c91 pop edi */
  EDI = (pop32());
  /* 10724c92 pop esi */
  ESI = (pop32());
  /* 10724c93 pop ebx */
  EBX = (pop32());
  /* 10724c94 mov esp, ebp */
  ESP = (EBP);
  /* 10724c96 pop ebp */
  EBP = (pop32());
  /* 10724c97 ret  */
  ESPCHK(0x10724c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca0 @ 0x10724ca0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10724ca0(void) {
  FTRACE(0x10724ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10724ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10724ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10724ca3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10724ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10724ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10724ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10724ca9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10724cb0 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 10724cb5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10724cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724cba jne 0x10724cc6 */
  if (!C.zf) goto L_10724cc6;
  /* 10724cbc mov eax, 1 */
  EAX = (0x1u);
  /* 10724cc1 jmp 0x10724ff8 */
  goto L_10724ff8;
L_10724cc6:;
  /* 10724cc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724cc8 call 0x10727500 */
  push32(0x10724ccdu); f_10727500();
  /* 10724ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724cd0 call 0x10727ce0 */
  push32(0x10724cd5u); f_10727ce0();
  /* 10724cd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10724cd8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724cdc je 0x10724de9 */
  if (C.zf) goto L_10724de9;
  /* 10724ce2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724ce6 je 0x10724de9 */
  if (C.zf) goto L_10724de9;
  /* 10724cec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10724cef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10724cf2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10724cf5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724cf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10724cfb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724cff ja 0x10724db2 */
  if ((!C.cf&&!C.zf)) goto L_10724db2;
  /* 10724d05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10724d08 jmp dword ptr [eax*4 + 0x10724fff] */
  switch (EAX) {
    case 0: goto L_10724d8a;
    case 1: goto L_10724d62;
    case 2: goto L_10724d3a;
    case 3: goto L_10724d0f;
    default: x86_unimpl("switch@0x10724d08 out of table"); return;
  }
L_10724d0f:;
  /* 10724d0f push 0x1074a9fc */
  push32((uint32_t)(0x1074a9fcu));
  /* 10724d14 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10724d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d21 call 0x10722bc0 */
  push32(0x10724d26u); f_10722bc0();
  /* 10724d26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724d2c jne 0x10724d2f */
  if (!C.zf) goto L_10724d2f;
  /* 10724d2e int3  */
  x86_unimpl("int3 @ 0x10724d2e");
L_10724d2f:;
  /* 10724d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724d33 jne 0x10724d0f */
  if (!C.zf) goto L_10724d0f;
  /* 10724d35 jmp 0x10724dd8 */
  goto L_10724dd8;
L_10724d3a:;
  /* 10724d3a push 0x1074a9d8 */
  push32((uint32_t)(0x1074a9d8u));
  /* 10724d3f push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10724d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d4c call 0x10722bc0 */
  push32(0x10724d51u); f_10722bc0();
  /* 10724d51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724d54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724d57 jne 0x10724d5a */
  if (!C.zf) goto L_10724d5a;
  /* 10724d59 int3  */
  x86_unimpl("int3 @ 0x10724d59");
L_10724d5a:;
  /* 10724d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724d5e jne 0x10724d3a */
  if (!C.zf) goto L_10724d3a;
  /* 10724d60 jmp 0x10724dd8 */
  goto L_10724dd8;
L_10724d62:;
  /* 10724d62 push 0x1074a9b4 */
  push32((uint32_t)(0x1074a9b4u));
  /* 10724d67 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10724d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d74 call 0x10722bc0 */
  push32(0x10724d79u); f_10722bc0();
  /* 10724d79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724d7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724d7f jne 0x10724d82 */
  if (!C.zf) goto L_10724d82;
  /* 10724d81 int3  */
  x86_unimpl("int3 @ 0x10724d81");
L_10724d82:;
  /* 10724d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724d86 jne 0x10724d62 */
  if (!C.zf) goto L_10724d62;
  /* 10724d88 jmp 0x10724dd8 */
  goto L_10724dd8;
L_10724d8a:;
  /* 10724d8a push 0x1074a990 */
  push32((uint32_t)(0x1074a990u));
  /* 10724d8f push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10724d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10724d9c call 0x10722bc0 */
  push32(0x10724da1u); f_10722bc0();
  /* 10724da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724da7 jne 0x10724daa */
  if (!C.zf) goto L_10724daa;
  /* 10724da9 int3  */
  x86_unimpl("int3 @ 0x10724da9");
L_10724daa:;
  /* 10724daa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724dac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724dae jne 0x10724d8a */
  if (!C.zf) goto L_10724d8a;
  /* 10724db0 jmp 0x10724dd8 */
  goto L_10724dd8;
L_10724db2:;
  /* 10724db2 push 0x1074a964 */
  push32((uint32_t)(0x1074a964u));
  /* 10724db7 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10724dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10724dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10724dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724dc4 call 0x10722bc0 */
  push32(0x10724dc9u); f_10722bc0();
  /* 10724dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724dcf jne 0x10724dd2 */
  if (!C.zf) goto L_10724dd2;
  /* 10724dd1 int3  */
  x86_unimpl("int3 @ 0x10724dd1");
L_10724dd2:;
  /* 10724dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724dd6 jne 0x10724db2 */
  if (!C.zf) goto L_10724db2;
L_10724dd8:;
  /* 10724dd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10724dda call 0x107275a0 */
  push32(0x10724ddfu); f_107275a0();
  /* 10724ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724de4 jmp 0x10724ff8 */
  goto L_10724ff8;
L_10724de9:;
  /* 10724de9 mov eax, dword ptr [0x1074f550] */
  EAX = (r32((uint32_t)(0x1074f550)));
  /* 10724dee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10724df1 jmp 0x10724dfb */
  goto L_10724dfb;
L_10724df3:;
  /* 10724df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724df6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10724df8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10724dfb:;
  /* 10724dfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724dff je 0x10724feb */
  if (C.zf) goto L_10724feb;
  /* 10724e05 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10724e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e0f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10724e12 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724e18 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724e1b je 0x10724e40 */
  if (C.zf) goto L_10724e40;
  /* 10724e1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e20 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724e24 je 0x10724e40 */
  if (C.zf) goto L_10724e40;
  /* 10724e26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e29 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10724e2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724e32 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724e35 je 0x10724e40 */
  if (C.zf) goto L_10724e40;
  /* 10724e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e3a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724e3e jne 0x10724e58 */
  if (!C.zf) goto L_10724e58;
L_10724e40:;
  /* 10724e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e43 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10724e46 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10724e4c mov edx, dword ptr [ecx*4 + 0x1074da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da94)));
  /* 10724e53 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10724e56 jmp 0x10724e5f */
  goto L_10724e5f;
L_10724e58:;
  /* 10724e58 mov dword ptr [ebp - 0x14], 0x1074a95c */
  w32((uint32_t)(EBP + -0x14), (0x1074a95cu));
L_10724e5f:;
  /* 10724e5f push 4 */
  push32((uint32_t)(0x4u));
  /* 10724e61 mov al, byte ptr [0x1074da90] */
  AL = (r8((uint32_t)(0x1074da90)));
  /* 10724e66 push eax */
  push32((uint32_t)(EAX));
  /* 10724e67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e6a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724e6d push ecx */
  push32((uint32_t)(ECX));
  /* 10724e6e call 0x10724c10 */
  push32(0x10724e73u); f_10724c10();
  /* 10724e73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724e76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724e78 jne 0x10724eb4 */
  if (!C.zf) goto L_10724eb4;
L_10724e7a:;
  /* 10724e7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e7d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724e80 push edx */
  push32((uint32_t)(EDX));
  /* 10724e81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724e84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10724e87 push ecx */
  push32((uint32_t)(ECX));
  /* 10724e88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10724e8b push edx */
  push32((uint32_t)(EDX));
  /* 10724e8c push 0x1074a838 */
  push32((uint32_t)(0x1074a838u));
  /* 10724e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724e99 call 0x10722bc0 */
  push32(0x10724e9eu); f_10722bc0();
  /* 10724e9e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724ea1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724ea4 jne 0x10724ea7 */
  if (!C.zf) goto L_10724ea7;
  /* 10724ea6 int3  */
  x86_unimpl("int3 @ 0x10724ea6");
L_10724ea7:;
  /* 10724ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724eab jne 0x10724e7a */
  if (!C.zf) goto L_10724e7a;
  /* 10724ead mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10724eb4:;
  /* 10724eb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10724eb6 mov cl, byte ptr [0x1074da90] */
  CL = (r8((uint32_t)(0x1074da90)));
  /* 10724ebc push ecx */
  push32((uint32_t)(ECX));
  /* 10724ebd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724ec0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10724ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724ec6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10724eca push edx */
  push32((uint32_t)(EDX));
  /* 10724ecb call 0x10724c10 */
  push32(0x10724ed0u); f_10724c10();
  /* 10724ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724ed5 jne 0x10724f11 */
  if (!C.zf) goto L_10724f11;
L_10724ed7:;
  /* 10724ed7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724eda add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724edd push eax */
  push32((uint32_t)(EAX));
  /* 10724ede mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724ee1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10724ee4 push edx */
  push32((uint32_t)(EDX));
  /* 10724ee5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10724ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10724ee9 push 0x1074a80c */
  push32((uint32_t)(0x1074a80cu));
  /* 10724eee push 0 */
  push32((uint32_t)(0x0u));
  /* 10724ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724ef6 call 0x10722bc0 */
  push32(0x10724efbu); f_10722bc0();
  /* 10724efb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724efe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724f01 jne 0x10724f04 */
  if (!C.zf) goto L_10724f04;
  /* 10724f03 int3  */
  x86_unimpl("int3 @ 0x10724f03");
L_10724f04:;
  /* 10724f04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10724f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10724f08 jne 0x10724ed7 */
  if (!C.zf) goto L_10724ed7;
  /* 10724f0a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10724f11:;
  /* 10724f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f14 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724f18 jne 0x10724f6a */
  if (!C.zf) goto L_10724f6a;
  /* 10724f1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10724f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10724f21 mov dl, byte ptr [0x1074da91] */
  DL = (r8((uint32_t)(0x1074da91)));
  /* 10724f27 push edx */
  push32((uint32_t)(EDX));
  /* 10724f28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f2b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724f2e push eax */
  push32((uint32_t)(EAX));
  /* 10724f2f call 0x10724c10 */
  push32(0x10724f34u); f_10724c10();
  /* 10724f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724f39 jne 0x10724f6a */
  if (!C.zf) goto L_10724f6a;
L_10724f3b:;
  /* 10724f3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f3e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10724f42 push 0x1074a930 */
  push32((uint32_t)(0x1074a930u));
  /* 10724f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f4f call 0x10722bc0 */
  push32(0x10724f54u); f_10722bc0();
  /* 10724f54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724f57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724f5a jne 0x10724f5d */
  if (!C.zf) goto L_10724f5d;
  /* 10724f5c int3  */
  x86_unimpl("int3 @ 0x10724f5c");
L_10724f5d:;
  /* 10724f5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724f5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724f61 jne 0x10724f3b */
  if (!C.zf) goto L_10724f3b;
  /* 10724f63 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10724f6a:;
  /* 10724f6a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724f6e jne 0x10724fe6 */
  if (!C.zf) goto L_10724fe6;
  /* 10724f70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f73 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724f77 je 0x10724fac */
  if (C.zf) goto L_10724fac;
L_10724f79:;
  /* 10724f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f7c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10724f7f push edx */
  push32((uint32_t)(EDX));
  /* 10724f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724f83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10724f86 push ecx */
  push32((uint32_t)(ECX));
  /* 10724f87 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10724f8a push edx */
  push32((uint32_t)(EDX));
  /* 10724f8b push 0x1074a910 */
  push32((uint32_t)(0x1074a910u));
  /* 10724f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724f98 call 0x10722bc0 */
  push32(0x10724f9du); f_10722bc0();
  /* 10724f9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724fa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724fa3 jne 0x10724fa6 */
  if (!C.zf) goto L_10724fa6;
  /* 10724fa5 int3  */
  x86_unimpl("int3 @ 0x10724fa5");
L_10724fa6:;
  /* 10724fa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10724fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10724faa jne 0x10724f79 */
  if (!C.zf) goto L_10724f79;
L_10724fac:;
  /* 10724fac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724faf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10724fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10724fb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10724fb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10724fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10724fba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10724fbd push ecx */
  push32((uint32_t)(ECX));
  /* 10724fbe push 0x1074a8e4 */
  push32((uint32_t)(0x1074a8e4u));
  /* 10724fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10724fcb call 0x10722bc0 */
  push32(0x10724fd0u); f_10722bc0();
  /* 10724fd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724fd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10724fd6 jne 0x10724fd9 */
  if (!C.zf) goto L_10724fd9;
  /* 10724fd8 int3  */
  x86_unimpl("int3 @ 0x10724fd8");
L_10724fd9:;
  /* 10724fd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10724fdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10724fdd jne 0x10724fac */
  if (!C.zf) goto L_10724fac;
  /* 10724fdf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10724fe6:;
  /* 10724fe6 jmp 0x10724df3 */
  goto L_10724df3;
L_10724feb:;
  /* 10724feb push 9 */
  push32((uint32_t)(0x9u));
  /* 10724fed call 0x107275a0 */
  push32(0x10724ff2u); f_107275a0();
  /* 10724ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10724ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10724ff8:;
  /* 10724ff8 pop edi */
  EDI = (pop32());
  /* 10724ff9 pop esi */
  ESI = (pop32());
  /* 10724ffa pop ebx */
  EBX = (pop32());
  /* 10724ffb mov esp, ebp */
  ESP = (EBP);
  /* 10724ffd pop ebp */
  EBP = (pop32());
  /* 10724ffe ret  */
  ESPCHK(0x10724ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x10725010 (34 bytes, 13 insns) */
void f_10725010(void) {
  FTRACE(0x10725010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725010 push ebp */
  push32((uint32_t)(EBP));
  /* 10725011 mov ebp, esp */
  EBP = (ESP);
  /* 10725013 push ecx */
  push32((uint32_t)(ECX));
  /* 10725014 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 10725019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072501c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725020 je 0x1072502b */
  if (C.zf) goto L_1072502b;
  /* 10725022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725025 mov dword ptr [0x1074da84], ecx */
  w32((uint32_t)(0x1074da84), (ECX));
L_1072502b:;
  /* 1072502b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072502e mov esp, ebp */
  ESP = (EBP);
  /* 10725030 pop ebp */
  EBP = (pop32());
  /* 10725031 ret  */
  ESPCHK(0x10725010u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x10725040 (103 bytes, 38 insns) */
void f_10725040(void) {
  FTRACE(0x10725040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725040 push ebp */
  push32((uint32_t)(EBP));
  /* 10725041 mov ebp, esp */
  EBP = (ESP);
  /* 10725043 push ecx */
  push32((uint32_t)(ECX));
  /* 10725044 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 10725049 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1072504c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072504e jne 0x10725052 */
  if (!C.zf) goto L_10725052;
  /* 10725050 jmp 0x107250a3 */
  goto L_107250a3;
L_10725052:;
  /* 10725052 push 9 */
  push32((uint32_t)(0x9u));
  /* 10725054 call 0x10727500 */
  push32(0x10725059u); f_10727500();
  /* 10725059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072505c mov ecx, dword ptr [0x1074f550] */
  ECX = (r32((uint32_t)(0x1074f550)));
  /* 10725062 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10725065 jmp 0x1072506f */
  goto L_1072506f;
L_10725067:;
  /* 10725067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072506a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1072506c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072506f:;
  /* 1072506f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725073 je 0x10725099 */
  if (C.zf) goto L_10725099;
  /* 10725075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725078 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1072507b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10725081 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725084 jne 0x10725097 */
  if (!C.zf) goto L_10725097;
  /* 10725086 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725089 push eax */
  push32((uint32_t)(EAX));
  /* 1072508a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072508d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725090 push ecx */
  push32((uint32_t)(ECX));
  /* 10725091 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10725094u);
  /* 10725094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10725097:;
  /* 10725097 jmp 0x10725067 */
  goto L_10725067;
L_10725099:;
  /* 10725099 push 9 */
  push32((uint32_t)(0x9u));
  /* 1072509b call 0x107275a0 */
  push32(0x107250a0u); f_107275a0();
  /* 107250a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107250a3:;
  /* 107250a3 mov esp, ebp */
  ESP = (EBP);
  /* 107250a5 pop ebp */
  EBP = (pop32());
  /* 107250a6 ret  */
  ESPCHK(0x10725040u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x107250b0 (75 bytes, 28 insns) */
void f_107250b0(void) {
  FTRACE(0x107250b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107250b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107250b1 mov ebp, esp */
  EBP = (ESP);
  /* 107250b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107250b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107250b8 je 0x107250ed */
  if (C.zf) goto L_107250ed;
  /* 107250ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107250bd push eax */
  push32((uint32_t)(EAX));
  /* 107250be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107250c1 push ecx */
  push32((uint32_t)(ECX));
  /* 107250c2 call dword ptr [0x10752368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752368))), 0x107250c8u);
  /* 107250c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107250ca jne 0x107250ed */
  if (!C.zf) goto L_107250ed;
  /* 107250cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107250d0 je 0x107250e4 */
  if (C.zf) goto L_107250e4;
  /* 107250d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107250d5 push edx */
  push32((uint32_t)(EDX));
  /* 107250d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107250d9 push eax */
  push32((uint32_t)(EAX));
  /* 107250da call dword ptr [0x10752364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752364))), 0x107250e0u);
  /* 107250e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107250e2 jne 0x107250ed */
  if (!C.zf) goto L_107250ed;
L_107250e4:;
  /* 107250e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107250eb jmp 0x107250f4 */
  goto L_107250f4;
L_107250ed:;
  /* 107250ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107250f4:;
  /* 107250f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107250f7 mov esp, ebp */
  ESP = (EBP);
  /* 107250f9 pop ebp */
  EBP = (pop32());
  /* 107250fa ret  */
  ESPCHK(0x107250b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005100 @ 0x10725100 (134 bytes, 50 insns) */
void f_10725100(void) {
  FTRACE(0x10725100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725100 push ebp */
  push32((uint32_t)(EBP));
  /* 10725101 mov ebp, esp */
  EBP = (ESP);
  /* 10725103 push ecx */
  push32((uint32_t)(ECX));
  /* 10725104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725108 jne 0x1072510e */
  if (!C.zf) goto L_1072510e;
  /* 1072510a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072510c jmp 0x10725182 */
  goto L_10725182;
L_1072510e:;
  /* 1072510e push 1 */
  push32((uint32_t)(0x1u));
  /* 10725110 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10725112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725115 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725118 push eax */
  push32((uint32_t)(EAX));
  /* 10725119 call 0x107250b0 */
  push32(0x1072511eu); f_107250b0();
  /* 1072511e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725123 jne 0x10725129 */
  if (!C.zf) goto L_10725129;
  /* 10725125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725127 jmp 0x10725182 */
  goto L_10725182;
L_10725129:;
  /* 10725129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072512c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072512f push ecx */
  push32((uint32_t)(ECX));
  /* 10725130 call 0x10727e00 */
  push32(0x10725135u); f_10727e00();
  /* 10725135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072513b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072513f je 0x10725156 */
  if (C.zf) goto L_10725156;
  /* 10725141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725144 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725147 push edx */
  push32((uint32_t)(EDX));
  /* 10725148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072514b push eax */
  push32((uint32_t)(EAX));
  /* 1072514c call 0x10727e60 */
  push32(0x10725151u); f_10727e60();
  /* 10725151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725154 jmp 0x10725182 */
  goto L_10725182;
L_10725156:;
  /* 10725156 mov ecx, dword ptr [0x1074f504] */
  ECX = (r32((uint32_t)(0x1074f504)));
  /* 1072515c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10725162 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10725164 je 0x1072516d */
  if (C.zf) goto L_1072516d;
  /* 10725166 mov eax, 1 */
  EAX = (0x1u);
  /* 1072516b jmp 0x10725182 */
  goto L_10725182;
L_1072516d:;
  /* 1072516d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725170 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725173 push edx */
  push32((uint32_t)(EDX));
  /* 10725174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725176 mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 1072517b push eax */
  push32((uint32_t)(EAX));
  /* 1072517c call dword ptr [0x1075236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075236c))), 0x10725182u);
L_10725182:;
  /* 10725182 mov esp, ebp */
  ESP = (EBP);
  /* 10725184 pop ebp */
  EBP = (pop32());
  /* 10725185 ret  */
  ESPCHK(0x10725100u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x10725190 (227 bytes, 80 insns) */
void f_10725190(void) {
  FTRACE(0x10725190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725190 push ebp */
  push32((uint32_t)(EBP));
  /* 10725191 mov ebp, esp */
  EBP = (ESP);
  /* 10725193 push ecx */
  push32((uint32_t)(ECX));
  /* 10725194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725197 push eax */
  push32((uint32_t)(EAX));
  /* 10725198 call 0x10725100 */
  push32(0x1072519du); f_10725100();
  /* 1072519d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107251a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107251a2 jne 0x107251ab */
  if (!C.zf) goto L_107251ab;
  /* 107251a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107251a6 jmp 0x1072526f */
  goto L_1072526f;
L_107251ab:;
  /* 107251ab push 9 */
  push32((uint32_t)(0x9u));
  /* 107251ad call 0x10727500 */
  push32(0x107251b2u); f_10727500();
  /* 107251b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107251b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107251b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107251bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107251be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107251c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107251c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107251c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107251cc je 0x107251f0 */
  if (C.zf) goto L_107251f0;
  /* 107251ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107251d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107251d5 je 0x107251f0 */
  if (C.zf) goto L_107251f0;
  /* 107251d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107251da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107251dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107251e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107251e5 je 0x107251f0 */
  if (C.zf) goto L_107251f0;
  /* 107251e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107251ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107251ee jne 0x10725263 */
  if (!C.zf) goto L_10725263;
L_107251f0:;
  /* 107251f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107251f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107251f5 push edx */
  push32((uint32_t)(EDX));
  /* 107251f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107251f9 push eax */
  push32((uint32_t)(EAX));
  /* 107251fa call 0x107250b0 */
  push32(0x107251ffu); f_107250b0();
  /* 107251ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725204 je 0x10725263 */
  if (C.zf) goto L_10725263;
  /* 10725206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725209 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1072520c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072520f jne 0x10725263 */
  if (!C.zf) goto L_10725263;
  /* 10725211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725214 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10725217 cmp ecx, dword ptr [0x1074da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072521d jg 0x10725263 */
  if ((!C.zf&&C.sf==C.of)) goto L_10725263;
  /* 1072521f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725223 je 0x10725230 */
  if (C.zf) goto L_10725230;
  /* 10725225 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072522b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1072522e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10725230:;
  /* 10725230 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725234 je 0x10725241 */
  if (C.zf) goto L_10725241;
  /* 10725236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10725239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072523c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072523f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10725241:;
  /* 10725241 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725245 je 0x10725252 */
  if (C.zf) goto L_10725252;
  /* 10725247 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072524a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072524d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10725250 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10725252:;
  /* 10725252 push 9 */
  push32((uint32_t)(0x9u));
  /* 10725254 call 0x107275a0 */
  push32(0x10725259u); f_107275a0();
  /* 10725259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072525c mov eax, 1 */
  EAX = (0x1u);
  /* 10725261 jmp 0x1072526f */
  goto L_1072526f;
L_10725263:;
  /* 10725263 push 9 */
  push32((uint32_t)(0x9u));
  /* 10725265 call 0x107275a0 */
  push32(0x1072526au); f_107275a0();
  /* 1072526a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072526d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072526f:;
  /* 1072526f mov esp, ebp */
  ESP = (EBP);
  /* 10725271 pop ebp */
  EBP = (pop32());
  /* 10725272 ret  */
  ESPCHK(0x10725190u, _esp0);
  ESP += 4; return;
}

/* FUN_10005280 @ 0x10725280 (28 bytes, 11 insns) */
void f_10725280(void) {
  FTRACE(0x10725280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725280 push ebp */
  push32((uint32_t)(EBP));
  /* 10725281 mov ebp, esp */
  EBP = (ESP);
  /* 10725283 push ecx */
  push32((uint32_t)(ECX));
  /* 10725284 mov eax, dword ptr [0x10750eb8] */
  EAX = (r32((uint32_t)(0x10750eb8)));
  /* 10725289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072528c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072528f mov dword ptr [0x10750eb8], ecx */
  w32((uint32_t)(0x10750eb8), (ECX));
  /* 10725295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725298 mov esp, ebp */
  ESP = (EBP);
  /* 1072529a pop ebp */
  EBP = (pop32());
  /* 1072529b ret  */
  ESPCHK(0x10725280u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x107252a0 (362 bytes, 116 insns) */
void f_107252a0(void) {
  FTRACE(0x107252a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107252a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107252a1 mov ebp, esp */
  EBP = (ESP);
  /* 107252a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107252a6 push ebx */
  push32((uint32_t)(EBX));
  /* 107252a7 push esi */
  push32((uint32_t)(ESI));
  /* 107252a8 push edi */
  push32((uint32_t)(EDI));
  /* 107252a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107252ad jne 0x107252da */
  if (!C.zf) goto L_107252da;
L_107252af:;
  /* 107252af push 0x1074aa44 */
  push32((uint32_t)(0x1074aa44u));
  /* 107252b4 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 107252b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107252bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107252bd push 0 */
  push32((uint32_t)(0x0u));
  /* 107252bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107252c1 call 0x10722bc0 */
  push32(0x107252c6u); f_10722bc0();
  /* 107252c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107252c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107252cc jne 0x107252cf */
  if (!C.zf) goto L_107252cf;
  /* 107252ce int3  */
  x86_unimpl("int3 @ 0x107252ce");
L_107252cf:;
  /* 107252cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107252d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107252d3 jne 0x107252af */
  if (!C.zf) goto L_107252af;
  /* 107252d5 jmp 0x10725403 */
  goto L_10725403;
L_107252da:;
  /* 107252da push 9 */
  push32((uint32_t)(0x9u));
  /* 107252dc call 0x10727500 */
  push32(0x107252e1u); f_10727500();
  /* 107252e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107252e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107252e7 mov edx, dword ptr [0x1074f550] */
  EDX = (r32((uint32_t)(0x1074f550)));
  /* 107252ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107252ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107252f6 jmp 0x10725301 */
  goto L_10725301;
L_107252f8:;
  /* 107252f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107252fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107252fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10725301:;
  /* 10725301 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725305 jge 0x10725325 */
  if ((C.sf==C.of)) goto L_10725325;
  /* 10725307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072530a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072530d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10725315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072531b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10725323 jmp 0x107252f8 */
  goto L_107252f8;
L_10725325:;
  /* 10725325 mov edx, dword ptr [0x1074f550] */
  EDX = (r32((uint32_t)(0x1074f550)));
  /* 1072532b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1072532e jmp 0x10725338 */
  goto L_10725338;
L_10725330:;
  /* 10725330 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725333 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10725335 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10725338:;
  /* 10725338 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072533c je 0x107253e1 */
  if (C.zf) goto L_107253e1;
  /* 10725342 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725345 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10725348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072534d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072534f jl 0x107253b7 */
  if ((C.sf!=C.of)) goto L_107253b7;
  /* 10725351 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725354 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10725357 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072535d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725360 jge 0x107253b7 */
  if ((C.sf==C.of)) goto L_107253b7;
  /* 10725362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725365 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10725368 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1072536e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725371 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10725375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725378 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072537b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1072537e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10725384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725387 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1072538b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072538e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10725391 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10725396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725399 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1072539d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107253a0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107253a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107253a6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107253a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107253ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107253b1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107253b5 jmp 0x107253dc */
  goto L_107253dc;
L_107253b7:;
  /* 107253b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107253ba push edx */
  push32((uint32_t)(EDX));
  /* 107253bb push 0x1074aa20 */
  push32((uint32_t)(0x1074aa20u));
  /* 107253c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107253c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107253c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107253c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107253c8 call 0x10722bc0 */
  push32(0x107253cdu); f_10722bc0();
  /* 107253cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107253d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107253d3 jne 0x107253d6 */
  if (!C.zf) goto L_107253d6;
  /* 107253d5 int3  */
  x86_unimpl("int3 @ 0x107253d5");
L_107253d6:;
  /* 107253d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107253d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107253da jne 0x107253b7 */
  if (!C.zf) goto L_107253b7;
L_107253dc:;
  /* 107253dc jmp 0x10725330 */
  goto L_10725330;
L_107253e1:;
  /* 107253e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107253e4 mov edx, dword ptr [0x1074f558] */
  EDX = (r32((uint32_t)(0x1074f558)));
  /* 107253ea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 107253ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107253f0 mov ecx, dword ptr [0x1074f54c] */
  ECX = (r32((uint32_t)(0x1074f54c)));
  /* 107253f6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 107253f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 107253fb call 0x107275a0 */
  push32(0x10725400u); f_107275a0();
  /* 10725400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10725403:;
  /* 10725403 pop edi */
  EDI = (pop32());
  /* 10725404 pop esi */
  ESI = (pop32());
  /* 10725405 pop ebx */
  EBX = (pop32());
  /* 10725406 mov esp, ebp */
  ESP = (EBP);
  /* 10725408 pop ebp */
  EBP = (pop32());
  /* 10725409 ret  */
  ESPCHK(0x107252a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x10725410 (291 bytes, 95 insns) */
void f_10725410(void) {
  FTRACE(0x10725410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725410 push ebp */
  push32((uint32_t)(EBP));
  /* 10725411 mov ebp, esp */
  EBP = (ESP);
  /* 10725413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725416 push ebx */
  push32((uint32_t)(EBX));
  /* 10725417 push esi */
  push32((uint32_t)(ESI));
  /* 10725418 push edi */
  push32((uint32_t)(EDI));
  /* 10725419 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10725420 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725424 je 0x10725432 */
  if (C.zf) goto L_10725432;
  /* 10725426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072542a je 0x10725432 */
  if (C.zf) goto L_10725432;
  /* 1072542c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725430 jne 0x10725460 */
  if (!C.zf) goto L_10725460;
L_10725432:;
  /* 10725432 push 0x1074aa6c */
  push32((uint32_t)(0x1074aa6cu));
  /* 10725437 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 1072543c push 0 */
  push32((uint32_t)(0x0u));
  /* 1072543e push 0 */
  push32((uint32_t)(0x0u));
  /* 10725440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725442 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725444 call 0x10722bc0 */
  push32(0x10725449u); f_10722bc0();
  /* 10725449 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072544c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072544f jne 0x10725452 */
  if (!C.zf) goto L_10725452;
  /* 10725451 int3  */
  x86_unimpl("int3 @ 0x10725451");
L_10725452:;
  /* 10725452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725456 jne 0x10725432 */
  if (!C.zf) goto L_10725432;
  /* 10725458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072545b jmp 0x1072552c */
  goto L_1072552c;
L_10725460:;
  /* 10725460 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10725467 jmp 0x10725472 */
  goto L_10725472;
L_10725469:;
  /* 10725469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072546c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072546f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10725472:;
  /* 10725472 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725476 jge 0x107254fc */
  if ((C.sf==C.of)) goto L_107254fc;
  /* 1072547c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072547f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725485 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10725488 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1072548c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725493 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725496 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1072549a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072549d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107254a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107254a3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107254a6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 107254aa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107254ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107254b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107254b4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 107254b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107254bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107254be cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107254c3 jne 0x107254d2 */
  if (!C.zf) goto L_107254d2;
  /* 107254c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107254c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107254cb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107254d0 je 0x107254f7 */
  if (C.zf) goto L_107254f7;
L_107254d2:;
  /* 107254d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107254d6 je 0x107254f7 */
  if (C.zf) goto L_107254f7;
  /* 107254d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107254dc jne 0x107254f0 */
  if (!C.zf) goto L_107254f0;
  /* 107254de cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107254e2 jne 0x107254f7 */
  if (!C.zf) goto L_107254f7;
  /* 107254e4 mov eax, dword ptr [0x1074da84] */
  EAX = (r32((uint32_t)(0x1074da84)));
  /* 107254e9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 107254ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107254ee je 0x107254f7 */
  if (C.zf) goto L_107254f7;
L_107254f0:;
  /* 107254f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_107254f7:;
  /* 107254f7 jmp 0x10725469 */
  goto L_10725469;
L_107254fc:;
  /* 107254fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107254ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725502 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10725505 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072550b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1072550e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725511 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725514 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10725517 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072551a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072551d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10725520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725523 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10725529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1072552c:;
  /* 1072552c pop edi */
  EDI = (pop32());
  /* 1072552d pop esi */
  ESI = (pop32());
  /* 1072552e pop ebx */
  EBX = (pop32());
  /* 1072552f mov esp, ebp */
  ESP = (EBP);
  /* 10725531 pop ebp */
  EBP = (pop32());
  /* 10725532 ret  */
  ESPCHK(0x10725410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x10725540 (697 bytes, 253 insns) */
void f_10725540(void) {
  FTRACE(0x10725540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725540 push ebp */
  push32((uint32_t)(EBP));
  /* 10725541 mov ebp, esp */
  EBP = (ESP);
  /* 10725543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725546 push ebx */
  push32((uint32_t)(EBX));
  /* 10725547 push esi */
  push32((uint32_t)(ESI));
  /* 10725548 push edi */
  push32((uint32_t)(EDI));
  /* 10725549 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10725550 push 9 */
  push32((uint32_t)(0x9u));
  /* 10725552 call 0x10727500 */
  push32(0x10725557u); f_10727500();
  /* 10725557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072555a:;
  /* 1072555a push 0x1074ab64 */
  push32((uint32_t)(0x1074ab64u));
  /* 1072555f push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 10725564 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725566 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725568 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072556a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072556c call 0x10722bc0 */
  push32(0x10725571u); f_10722bc0();
  /* 10725571 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725577 jne 0x1072557a */
  if (!C.zf) goto L_1072557a;
  /* 10725579 int3  */
  x86_unimpl("int3 @ 0x10725579");
L_1072557a:;
  /* 1072557a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072557c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072557e jne 0x1072555a */
  if (!C.zf) goto L_1072555a;
  /* 10725580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725584 je 0x1072558e */
  if (C.zf) goto L_1072558e;
  /* 10725586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725589 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072558b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1072558e:;
  /* 1072558e mov eax, dword ptr [0x1074f550] */
  EAX = (r32((uint32_t)(0x1074f550)));
  /* 10725593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10725596 jmp 0x107255a0 */
  goto L_107255a0;
L_10725598:;
  /* 10725598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072559b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072559d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107255a0:;
  /* 107255a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107255a4 je 0x107257c2 */
  if (C.zf) goto L_107257c2;
  /* 107255aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107255ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107255b0 je 0x107257c2 */
  if (C.zf) goto L_107257c2;
  /* 107255b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107255b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107255bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107255c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107255c5 je 0x107255f4 */
  if (C.zf) goto L_107255f4;
  /* 107255c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107255ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107255cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107255d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107255d5 je 0x107255f4 */
  if (C.zf) goto L_107255f4;
  /* 107255d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107255da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107255dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107255e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107255e5 jne 0x107255f9 */
  if (!C.zf) goto L_107255f9;
  /* 107255e7 mov ecx, dword ptr [0x1074da84] */
  ECX = (r32((uint32_t)(0x1074da84)));
  /* 107255ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 107255f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107255f2 jne 0x107255f9 */
  if (!C.zf) goto L_107255f9;
L_107255f4:;
  /* 107255f4 jmp 0x107257bd */
  goto L_107257bd;
L_107255f9:;
  /* 107255f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107255fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725600 je 0x10725672 */
  if (C.zf) goto L_10725672;
  /* 10725602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725604 push 1 */
  push32((uint32_t)(0x1u));
  /* 10725606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725609 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072560c push ecx */
  push32((uint32_t)(ECX));
  /* 1072560d call 0x107250b0 */
  push32(0x10725612u); f_107250b0();
  /* 10725612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725617 jne 0x10725643 */
  if (!C.zf) goto L_10725643;
L_10725619:;
  /* 10725619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072561c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072561f push eax */
  push32((uint32_t)(EAX));
  /* 10725620 push 0x1074ab50 */
  push32((uint32_t)(0x1074ab50u));
  /* 10725625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725629 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072562b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072562d call 0x10722bc0 */
  push32(0x10725632u); f_10722bc0();
  /* 10725632 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725635 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725638 jne 0x1072563b */
  if (!C.zf) goto L_1072563b;
  /* 1072563a int3  */
  x86_unimpl("int3 @ 0x1072563a");
L_1072563b:;
  /* 1072563b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072563d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072563f jne 0x10725619 */
  if (!C.zf) goto L_10725619;
  /* 10725641 jmp 0x10725672 */
  goto L_10725672;
L_10725643:;
  /* 10725643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725646 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10725649 push eax */
  push32((uint32_t)(EAX));
  /* 1072564a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072564d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10725650 push edx */
  push32((uint32_t)(EDX));
  /* 10725651 push 0x1074ab44 */
  push32((uint32_t)(0x1074ab44u));
  /* 10725656 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072565a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072565c push 0 */
  push32((uint32_t)(0x0u));
  /* 1072565e call 0x10722bc0 */
  push32(0x10725663u); f_10722bc0();
  /* 10725663 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725666 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725669 jne 0x1072566c */
  if (!C.zf) goto L_1072566c;
  /* 1072566b int3  */
  x86_unimpl("int3 @ 0x1072566b");
L_1072566c:;
  /* 1072566c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072566e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725670 jne 0x10725643 */
  if (!C.zf) goto L_10725643;
L_10725672:;
  /* 10725672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725675 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10725678 push edx */
  push32((uint32_t)(EDX));
  /* 10725679 push 0x1074ab3c */
  push32((uint32_t)(0x1074ab3cu));
  /* 1072567e push 0 */
  push32((uint32_t)(0x0u));
  /* 10725680 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725682 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725684 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725686 call 0x10722bc0 */
  push32(0x1072568bu); f_10722bc0();
  /* 1072568b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072568e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725691 jne 0x10725694 */
  if (!C.zf) goto L_10725694;
  /* 10725693 int3  */
  x86_unimpl("int3 @ 0x10725693");
L_10725694:;
  /* 10725694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725698 jne 0x10725672 */
  if (!C.zf) goto L_10725672;
  /* 1072569a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072569d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107256a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107256a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107256a9 jne 0x1072571c */
  if (!C.zf) goto L_1072571c;
L_107256ab:;
  /* 107256ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107256ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107256b1 push ecx */
  push32((uint32_t)(ECX));
  /* 107256b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107256b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107256b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107256bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107256c0 push eax */
  push32((uint32_t)(EAX));
  /* 107256c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107256c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107256c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107256c8 push 0x1074ab08 */
  push32((uint32_t)(0x1074ab08u));
  /* 107256cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107256cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107256d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107256d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107256d5 call 0x10722bc0 */
  push32(0x107256dau); f_10722bc0();
  /* 107256da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107256dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107256e0 jne 0x107256e3 */
  if (!C.zf) goto L_107256e3;
  /* 107256e2 int3  */
  x86_unimpl("int3 @ 0x107256e2");
L_107256e3:;
  /* 107256e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107256e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107256e7 jne 0x107256ab */
  if (!C.zf) goto L_107256ab;
  /* 107256e9 cmp dword ptr [0x10750eb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750eb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107256f0 je 0x1072570b */
  if (C.zf) goto L_1072570b;
  /* 107256f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107256f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107256f8 push ecx */
  push32((uint32_t)(ECX));
  /* 107256f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107256fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107256ff push edx */
  push32((uint32_t)(EDX));
  /* 10725700 call dword ptr [0x10750eb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10750eb8))), 0x10725706u);
  /* 10725706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725709 jmp 0x10725717 */
  goto L_10725717;
L_1072570b:;
  /* 1072570b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072570e push eax */
  push32((uint32_t)(EAX));
  /* 1072570f call 0x10725800 */
  push32(0x10725714u); f_10725800();
  /* 10725714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10725717:;
  /* 10725717 jmp 0x107257bd */
  goto L_107257bd;
L_1072571c:;
  /* 1072571c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072571f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725723 jne 0x10725762 */
  if (!C.zf) goto L_10725762;
L_10725725:;
  /* 10725725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725728 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072572b push eax */
  push32((uint32_t)(EAX));
  /* 1072572c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072572f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725732 push ecx */
  push32((uint32_t)(ECX));
  /* 10725733 push 0x1074aae0 */
  push32((uint32_t)(0x1074aae0u));
  /* 10725738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072573a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072573c push 0 */
  push32((uint32_t)(0x0u));
  /* 1072573e push 0 */
  push32((uint32_t)(0x0u));
  /* 10725740 call 0x10722bc0 */
  push32(0x10725745u); f_10722bc0();
  /* 10725745 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725748 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072574b jne 0x1072574e */
  if (!C.zf) goto L_1072574e;
  /* 1072574d int3  */
  x86_unimpl("int3 @ 0x1072574d");
L_1072574e:;
  /* 1072574e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725750 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10725752 jne 0x10725725 */
  if (!C.zf) goto L_10725725;
  /* 10725754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725757 push eax */
  push32((uint32_t)(EAX));
  /* 10725758 call 0x10725800 */
  push32(0x1072575du); f_10725800();
  /* 1072575d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725760 jmp 0x107257bd */
  goto L_107257bd;
L_10725762:;
  /* 10725762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725765 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10725768 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072576e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725771 jne 0x107257bd */
  if (!C.zf) goto L_107257bd;
L_10725773:;
  /* 10725773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725776 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10725779 push ecx */
  push32((uint32_t)(ECX));
  /* 1072577a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072577d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10725780 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10725783 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10725788 push eax */
  push32((uint32_t)(EAX));
  /* 10725789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072578c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072578f push ecx */
  push32((uint32_t)(ECX));
  /* 10725790 push 0x1074aaac */
  push32((uint32_t)(0x1074aaacu));
  /* 10725795 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725799 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072579b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072579d call 0x10722bc0 */
  push32(0x107257a2u); f_10722bc0();
  /* 107257a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107257a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107257a8 jne 0x107257ab */
  if (!C.zf) goto L_107257ab;
  /* 107257aa int3  */
  x86_unimpl("int3 @ 0x107257aa");
L_107257ab:;
  /* 107257ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107257ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107257af jne 0x10725773 */
  if (!C.zf) goto L_10725773;
  /* 107257b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107257b4 push eax */
  push32((uint32_t)(EAX));
  /* 107257b5 call 0x10725800 */
  push32(0x107257bau); f_10725800();
  /* 107257ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107257bd:;
  /* 107257bd jmp 0x10725598 */
  goto L_10725598;
L_107257c2:;
  /* 107257c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 107257c4 call 0x107275a0 */
  push32(0x107257c9u); f_107275a0();
  /* 107257c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107257cc:;
  /* 107257cc push 0x1074aa94 */
  push32((uint32_t)(0x1074aa94u));
  /* 107257d1 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 107257d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107257d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107257da push 0 */
  push32((uint32_t)(0x0u));
  /* 107257dc push 0 */
  push32((uint32_t)(0x0u));
  /* 107257de call 0x10722bc0 */
  push32(0x107257e3u); f_10722bc0();
  /* 107257e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107257e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107257e9 jne 0x107257ec */
  if (!C.zf) goto L_107257ec;
  /* 107257eb int3  */
  x86_unimpl("int3 @ 0x107257eb");
L_107257ec:;
  /* 107257ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107257ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107257f0 jne 0x107257cc */
  if (!C.zf) goto L_107257cc;
  /* 107257f2 pop edi */
  EDI = (pop32());
  /* 107257f3 pop esi */
  ESI = (pop32());
  /* 107257f4 pop ebx */
  EBX = (pop32());
  /* 107257f5 mov esp, ebp */
  ESP = (EBP);
  /* 107257f7 pop ebp */
  EBP = (pop32());
  /* 107257f8 ret  */
  ESPCHK(0x10725540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x10725800 (276 bytes, 89 insns) */
void f_10725800(void) {
  FTRACE(0x10725800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725800 push ebp */
  push32((uint32_t)(EBP));
  /* 10725801 mov ebp, esp */
  EBP = (ESP);
  /* 10725803 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725806 push ebx */
  push32((uint32_t)(EBX));
  /* 10725807 push esi */
  push32((uint32_t)(ESI));
  /* 10725808 push edi */
  push32((uint32_t)(EDI));
  /* 10725809 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10725810 jmp 0x1072581b */
  goto L_1072581b;
L_10725812:;
  /* 10725812 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10725815 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725818 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1072581b:;
  /* 1072581b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072581e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725822 jge 0x1072582f */
  if ((C.sf==C.of)) goto L_1072582f;
  /* 10725824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725827 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072582a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1072582d jmp 0x10725836 */
  goto L_10725836;
L_1072582f:;
  /* 1072582f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10725836:;
  /* 10725836 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10725839 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072583c jge 0x107258dc */
  if ((C.sf==C.of)) goto L_107258dc;
  /* 10725842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725845 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725848 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1072584b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1072584e cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725855 jle 0x10725873 */
  if ((C.zf||C.sf!=C.of)) goto L_10725873;
  /* 10725857 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1072585c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1072585f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10725865 push ecx */
  push32((uint32_t)(ECX));
  /* 10725866 call 0x10729b10 */
  push32(0x1072586bu); f_10729b10();
  /* 1072586b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072586e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10725871 jmp 0x10725890 */
  goto L_10725890;
L_10725873:;
  /* 10725873 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10725876 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072587c mov eax, dword ptr [0x1074dc98] */
  EAX = (r32((uint32_t)(0x1074dc98)));
  /* 10725881 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10725883 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10725887 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1072588d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10725890:;
  /* 10725890 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725894 je 0x107258a4 */
  if (C.zf) goto L_107258a4;
  /* 10725896 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10725899 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072589f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 107258a2 jmp 0x107258ab */
  goto L_107258ab;
L_107258a4:;
  /* 107258a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_107258ab:;
  /* 107258ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107258ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 107258b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 107258b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107258b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107258be push edx */
  push32((uint32_t)(EDX));
  /* 107258bf push 0x1074ab88 */
  push32((uint32_t)(0x1074ab88u));
  /* 107258c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107258c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107258ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 107258ce push ecx */
  push32((uint32_t)(ECX));
  /* 107258cf call 0x10729a10 */
  push32(0x107258d4u); f_10729a10();
  /* 107258d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107258d7 jmp 0x10725812 */
  goto L_10725812;
L_107258dc:;
  /* 107258dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107258df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_107258e4:;
  /* 107258e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 107258e7 push eax */
  push32((uint32_t)(EAX));
  /* 107258e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 107258eb push ecx */
  push32((uint32_t)(ECX));
  /* 107258ec push 0x1074ab78 */
  push32((uint32_t)(0x1074ab78u));
  /* 107258f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107258f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107258f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107258f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107258f9 call 0x10722bc0 */
  push32(0x107258feu); f_10722bc0();
  /* 107258fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725904 jne 0x10725907 */
  if (!C.zf) goto L_10725907;
  /* 10725906 int3  */
  x86_unimpl("int3 @ 0x10725906");
L_10725907:;
  /* 10725907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072590b jne 0x107258e4 */
  if (!C.zf) goto L_107258e4;
  /* 1072590d pop edi */
  EDI = (pop32());
  /* 1072590e pop esi */
  ESI = (pop32());
  /* 1072590f pop ebx */
  EBX = (pop32());
  /* 10725910 mov esp, ebp */
  ESP = (EBP);
  /* 10725912 pop ebp */
  EBP = (pop32());
  /* 10725913 ret  */
  ESPCHK(0x10725800u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x10725920 (116 bytes, 46 insns) */
void f_10725920(void) {
  FTRACE(0x10725920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725920 push ebp */
  push32((uint32_t)(EBP));
  /* 10725921 mov ebp, esp */
  EBP = (ESP);
  /* 10725923 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725926 push ebx */
  push32((uint32_t)(EBX));
  /* 10725927 push esi */
  push32((uint32_t)(ESI));
  /* 10725928 push edi */
  push32((uint32_t)(EDI));
  /* 10725929 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1072592c push eax */
  push32((uint32_t)(EAX));
  /* 1072592d call 0x107252a0 */
  push32(0x10725932u); f_107252a0();
  /* 10725932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725935 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725939 jne 0x10725954 */
  if (!C.zf) goto L_10725954;
  /* 1072593b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072593f jne 0x10725954 */
  if (!C.zf) goto L_10725954;
  /* 10725941 mov ecx, dword ptr [0x1074da84] */
  ECX = (r32((uint32_t)(0x1074da84)));
  /* 10725947 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1072594a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072594c je 0x1072598b */
  if (C.zf) goto L_1072598b;
  /* 1072594e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725952 je 0x1072598b */
  if (C.zf) goto L_1072598b;
L_10725954:;
  /* 10725954 push 0x1074ab90 */
  push32((uint32_t)(0x1074ab90u));
  /* 10725959 push 0x1074a55c */
  push32((uint32_t)(0x1074a55cu));
  /* 1072595e push 0 */
  push32((uint32_t)(0x0u));
  /* 10725960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725962 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725966 call 0x10722bc0 */
  push32(0x1072596bu); f_10722bc0();
  /* 1072596b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072596e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725971 jne 0x10725974 */
  if (!C.zf) goto L_10725974;
  /* 10725973 int3  */
  x86_unimpl("int3 @ 0x10725973");
L_10725974:;
  /* 10725974 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725976 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10725978 jne 0x10725954 */
  if (!C.zf) goto L_10725954;
  /* 1072597a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072597c call 0x10725540 */
  push32(0x10725981u); f_10725540();
  /* 10725981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725984 mov eax, 1 */
  EAX = (0x1u);
  /* 10725989 jmp 0x1072598d */
  goto L_1072598d;
L_1072598b:;
  /* 1072598b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072598d:;
  /* 1072598d pop edi */
  EDI = (pop32());
  /* 1072598e pop esi */
  ESI = (pop32());
  /* 1072598f pop ebx */
  EBX = (pop32());
  /* 10725990 mov esp, ebp */
  ESP = (EBP);
  /* 10725992 pop ebp */
  EBP = (pop32());
  /* 10725993 ret  */
  ESPCHK(0x10725920u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a0 @ 0x107259a0 (197 bytes, 79 insns) */
void f_107259a0(void) {
  FTRACE(0x107259a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107259a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107259a1 mov ebp, esp */
  EBP = (ESP);
  /* 107259a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107259a4 push ebx */
  push32((uint32_t)(EBX));
  /* 107259a5 push esi */
  push32((uint32_t)(ESI));
  /* 107259a6 push edi */
  push32((uint32_t)(EDI));
  /* 107259a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107259ab jne 0x107259b2 */
  if (!C.zf) goto L_107259b2;
  /* 107259ad jmp 0x10725a5e */
  goto L_10725a5e;
L_107259b2:;
  /* 107259b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107259b9 jmp 0x107259c4 */
  goto L_107259c4;
L_107259bb:;
  /* 107259bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107259be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107259c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107259c4:;
  /* 107259c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107259c8 jge 0x10725a0e */
  if ((C.sf==C.of)) goto L_10725a0e;
L_107259ca:;
  /* 107259ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107259cd mov edx, dword ptr [ecx*4 + 0x1074da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074da94)));
  /* 107259d4 push edx */
  push32((uint32_t)(EDX));
  /* 107259d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107259d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107259db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 107259df push edx */
  push32((uint32_t)(EDX));
  /* 107259e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107259e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107259e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 107259ea push edx */
  push32((uint32_t)(EDX));
  /* 107259eb push 0x1074abec */
  push32((uint32_t)(0x1074abecu));
  /* 107259f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107259f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107259f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107259f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107259f8 call 0x10722bc0 */
  push32(0x107259fdu); f_10722bc0();
  /* 107259fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725a03 jne 0x10725a06 */
  if (!C.zf) goto L_10725a06;
  /* 10725a05 int3  */
  x86_unimpl("int3 @ 0x10725a05");
L_10725a06:;
  /* 10725a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725a0a jne 0x107259ca */
  if (!C.zf) goto L_107259ca;
  /* 10725a0c jmp 0x107259bb */
  goto L_107259bb;
L_10725a0e:;
  /* 10725a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725a11 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10725a14 push edx */
  push32((uint32_t)(EDX));
  /* 10725a15 push 0x1074abc8 */
  push32((uint32_t)(0x1074abc8u));
  /* 10725a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a22 call 0x10722bc0 */
  push32(0x10725a27u); f_10722bc0();
  /* 10725a27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725a2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725a2d jne 0x10725a30 */
  if (!C.zf) goto L_10725a30;
  /* 10725a2f int3  */
  x86_unimpl("int3 @ 0x10725a2f");
L_10725a30:;
  /* 10725a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725a34 jne 0x10725a0e */
  if (!C.zf) goto L_10725a0e;
L_10725a36:;
  /* 10725a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725a39 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10725a3c push edx */
  push32((uint32_t)(EDX));
  /* 10725a3d push 0x1074aba8 */
  push32((uint32_t)(0x1074aba8u));
  /* 10725a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10725a4a call 0x10722bc0 */
  push32(0x10725a4fu); f_10722bc0();
  /* 10725a4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725a52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725a55 jne 0x10725a58 */
  if (!C.zf) goto L_10725a58;
  /* 10725a57 int3  */
  x86_unimpl("int3 @ 0x10725a57");
L_10725a58:;
  /* 10725a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725a5c jne 0x10725a36 */
  if (!C.zf) goto L_10725a36;
L_10725a5e:;
  /* 10725a5e pop edi */
  EDI = (pop32());
  /* 10725a5f pop esi */
  ESI = (pop32());
  /* 10725a60 pop ebx */
  EBX = (pop32());
  /* 10725a61 mov esp, ebp */
  ESP = (EBP);
  /* 10725a63 pop ebp */
  EBP = (pop32());
  /* 10725a64 ret  */
  ESPCHK(0x107259a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10725a70 (329 bytes, 102 insns) */
void f_10725a70(void) {
  FTRACE(0x10725a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10725a71 mov ebp, esp */
  EBP = (ESP);
  /* 10725a73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725a76 cmp dword ptr [0x10751030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10751030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725a7d jne 0x10725a84 */
  if (!C.zf) goto L_10725a84;
  /* 10725a7f call 0x1072a3b0 */
  push32(0x10725a84u); f_1072a3b0();
L_10725a84:;
  /* 10725a84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10725a8b mov eax, dword ptr [0x1074f4ec] */
  EAX = (r32((uint32_t)(0x1074f4ec)));
  /* 10725a90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10725a93:;
  /* 10725a93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725a96 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10725a99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10725a9b je 0x10725ac9 */
  if (C.zf) goto L_10725ac9;
  /* 10725a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725aa0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725aa3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725aa6 je 0x10725ab1 */
  if (C.zf) goto L_10725ab1;
  /* 10725aa8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725aab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725aae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10725ab1:;
  /* 10725ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10725ab5 call 0x10726930 */
  push32(0x10725abau); f_10726930();
  /* 10725aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725ac0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10725ac4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10725ac7 jmp 0x10725a93 */
  goto L_10725a93;
L_10725ac9:;
  /* 10725ac9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10725acb push 0x1074ac0c */
  push32((uint32_t)(0x1074ac0cu));
  /* 10725ad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10725ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725ad5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10725adc push ecx */
  push32((uint32_t)(ECX));
  /* 10725add call 0x10723b00 */
  push32(0x10725ae2u); f_10723b00();
  /* 10725ae2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725ae5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10725ae8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725aeb mov dword ptr [0x1074f520], edx */
  w32((uint32_t)(0x1074f520), (EDX));
  /* 10725af1 cmp dword ptr [0x1074f520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725af8 jne 0x10725b04 */
  if (!C.zf) goto L_10725b04;
  /* 10725afa push 9 */
  push32((uint32_t)(0x9u));
  /* 10725afc call 0x10722a70 */
  push32(0x10725b01u); f_10722a70();
  /* 10725b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10725b04:;
  /* 10725b04 mov eax, dword ptr [0x1074f4ec] */
  EAX = (r32((uint32_t)(0x1074f4ec)));
  /* 10725b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10725b0c jmp 0x10725b17 */
  goto L_10725b17;
L_10725b0e:;
  /* 10725b0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725b11 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10725b17:;
  /* 10725b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725b1a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10725b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725b1f je 0x10725b87 */
  if (C.zf) goto L_10725b87;
  /* 10725b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725b24 push ecx */
  push32((uint32_t)(ECX));
  /* 10725b25 call 0x10726930 */
  push32(0x10725b2au); f_10726930();
  /* 10725b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10725b33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725b36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10725b39 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725b3c je 0x10725b85 */
  if (C.zf) goto L_10725b85;
  /* 10725b3e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10725b40 push 0x1074ac0c */
  push32((uint32_t)(0x1074ac0cu));
  /* 10725b45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10725b47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10725b4b call 0x10723b00 */
  push32(0x10725b50u); f_10723b00();
  /* 10725b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725b56 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10725b58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725b5b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725b5e jne 0x10725b6a */
  if (!C.zf) goto L_10725b6a;
  /* 10725b60 push 9 */
  push32((uint32_t)(0x9u));
  /* 10725b62 call 0x10722a70 */
  push32(0x10725b67u); f_10722a70();
  /* 10725b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10725b6a:;
  /* 10725b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725b6d push ecx */
  push32((uint32_t)(ECX));
  /* 10725b6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725b71 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10725b73 push eax */
  push32((uint32_t)(EAX));
  /* 10725b74 call 0x10726ab0 */
  push32(0x10725b79u); f_10726ab0();
  /* 10725b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725b7f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10725b85:;
  /* 10725b85 jmp 0x10725b0e */
  goto L_10725b0e;
L_10725b87:;
  /* 10725b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10725b89 mov edx, dword ptr [0x1074f4ec] */
  EDX = (r32((uint32_t)(0x1074f4ec)));
  /* 10725b8f push edx */
  push32((uint32_t)(EDX));
  /* 10725b90 call 0x10724590 */
  push32(0x10725b95u); f_10724590();
  /* 10725b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725b98 mov dword ptr [0x1074f4ec], 0 */
  w32((uint32_t)(0x1074f4ec), (0x0u));
  /* 10725ba2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725ba5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10725bab mov dword ptr [0x10751020], 1 */
  w32((uint32_t)(0x10751020), (0x1u));
  /* 10725bb5 mov esp, ebp */
  ESP = (EBP);
  /* 10725bb7 pop ebp */
  EBP = (pop32());
  /* 10725bb8 ret  */
  ESPCHK(0x10725a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bc0 @ 0x10725bc0 (216 bytes, 69 insns) */
void f_10725bc0(void) {
  FTRACE(0x10725bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10725bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10725bc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725bc6 cmp dword ptr [0x10751030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10751030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725bcd jne 0x10725bd4 */
  if (!C.zf) goto L_10725bd4;
  /* 10725bcf call 0x1072a3b0 */
  push32(0x10725bd4u); f_1072a3b0();
L_10725bd4:;
  /* 10725bd4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10725bd9 push 0x1074f55c */
  push32((uint32_t)(0x1074f55cu));
  /* 10725bde push 0 */
  push32((uint32_t)(0x0u));
  /* 10725be0 call dword ptr [0x10752324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752324))), 0x10725be6u);
  /* 10725be6 mov dword ptr [0x1074f530], 0x1074f55c */
  w32((uint32_t)(0x1074f530), (0x1074f55cu));
  /* 10725bf0 mov eax, dword ptr [0x1075104c] */
  EAX = (r32((uint32_t)(0x1075104c)));
  /* 10725bf5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725bf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10725bfa jne 0x10725c07 */
  if (!C.zf) goto L_10725c07;
  /* 10725bfc mov edx, dword ptr [0x1074f530] */
  EDX = (r32((uint32_t)(0x1074f530)));
  /* 10725c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10725c05 jmp 0x10725c0f */
  goto L_10725c0f;
L_10725c07:;
  /* 10725c07 mov eax, dword ptr [0x1075104c] */
  EAX = (r32((uint32_t)(0x1075104c)));
  /* 10725c0c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10725c0f:;
  /* 10725c0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10725c12 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10725c15 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10725c18 push edx */
  push32((uint32_t)(EDX));
  /* 10725c19 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10725c1c push eax */
  push32((uint32_t)(EAX));
  /* 10725c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10725c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10725c21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725c24 push ecx */
  push32((uint32_t)(ECX));
  /* 10725c25 call 0x10725ca0 */
  push32(0x10725c2au); f_10725ca0();
  /* 10725c2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725c2d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10725c32 push 0x1074ac18 */
  push32((uint32_t)(0x1074ac18u));
  /* 10725c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10725c39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725c3f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10725c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10725c43 call 0x10723b00 */
  push32(0x10725c48u); f_10723b00();
  /* 10725c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10725c4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725c52 jne 0x10725c5e */
  if (!C.zf) goto L_10725c5e;
  /* 10725c54 push 8 */
  push32((uint32_t)(0x8u));
  /* 10725c56 call 0x10722a70 */
  push32(0x10725c5bu); f_10722a70();
  /* 10725c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10725c5e:;
  /* 10725c5e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10725c61 push edx */
  push32((uint32_t)(EDX));
  /* 10725c62 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10725c65 push eax */
  push32((uint32_t)(EAX));
  /* 10725c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725c69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725c6c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10725c6f push eax */
  push32((uint32_t)(EAX));
  /* 10725c70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10725c74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725c77 push edx */
  push32((uint32_t)(EDX));
  /* 10725c78 call 0x10725ca0 */
  push32(0x10725c7du); f_10725ca0();
  /* 10725c7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10725c80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725c83 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725c86 mov dword ptr [0x1074f514], eax */
  w32((uint32_t)(0x1074f514), (EAX));
  /* 10725c8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10725c8e mov dword ptr [0x1074f518], ecx */
  w32((uint32_t)(0x1074f518), (ECX));
  /* 10725c94 mov esp, ebp */
  ESP = (EBP);
  /* 10725c96 pop ebp */
  EBP = (pop32());
  /* 10725c97 ret  */
  ESPCHK(0x10725bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10725ca0 (1060 bytes, 360 insns) */
void f_10725ca0(void) {
  FTRACE(0x10725ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10725ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10725ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10725ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725ca6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725ca9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10725caf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10725cb2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10725cb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10725cbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10725cbe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725cc2 je 0x10725cd5 */
  if (C.zf) goto L_10725cd5;
  /* 10725cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725cc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725cca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10725ccc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725ccf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725cd2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10725cd5:;
  /* 10725cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725cd8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725cdb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725cde jne 0x10725dad */
  if (!C.zf) goto L_10725dad;
L_10725ce4:;
  /* 10725ce4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725ce7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725cea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10725ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725cf0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725cf3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725cf6 je 0x10725d72 */
  if (C.zf) goto L_10725d72;
  /* 10725cf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725cfb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10725cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725d00 je 0x10725d72 */
  if (C.zf) goto L_10725d72;
  /* 10725d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725d05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725d07 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10725d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725d0b mov al, byte ptr [edx + 0x10750d81] */
  AL = (r8((uint32_t)(EDX + 0x10750d81)));
  /* 10725d11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10725d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725d16 je 0x10725d47 */
  if (C.zf) goto L_10725d47;
  /* 10725d18 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725d1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10725d1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725d23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10725d25 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725d29 je 0x10725d47 */
  if (C.zf) goto L_10725d47;
  /* 10725d2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725d31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10725d33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10725d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725d38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10725d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725d41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10725d47:;
  /* 10725d47 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725d4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10725d4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725d52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10725d54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725d58 je 0x10725d6d */
  if (C.zf) goto L_10725d6d;
  /* 10725d5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725d60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10725d62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10725d64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725d67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d6a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10725d6d:;
  /* 10725d6d jmp 0x10725ce4 */
  goto L_10725ce4;
L_10725d72:;
  /* 10725d72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725d75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10725d77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d7a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725d7d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10725d7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725d83 je 0x10725d94 */
  if (C.zf) goto L_10725d94;
  /* 10725d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725d88 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10725d8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725d8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725d91 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10725d94:;
  /* 10725d94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725d97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725d9a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725d9d jne 0x10725da8 */
  if (!C.zf) goto L_10725da8;
  /* 10725d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725da2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10725da8:;
  /* 10725da8 jmp 0x10725e7c */
  goto L_10725e7c;
L_10725dad:;
  /* 10725dad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725db0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10725db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725db5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725db8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10725dba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725dbe je 0x10725dd3 */
  if (C.zf) goto L_10725dd3;
  /* 10725dc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725dc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10725dc8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10725dca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725dcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725dd0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10725dd3:;
  /* 10725dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10725dd8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10725ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725dde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725de1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10725de4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725de7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10725ded xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725def mov dl, byte ptr [ecx + 0x10750d81] */
  DL = (r8((uint32_t)(ECX + 0x10750d81)));
  /* 10725df5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10725df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10725dfa je 0x10725e2b */
  if (C.zf) goto L_10725e2b;
  /* 10725dfc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725dff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10725e01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725e04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725e07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10725e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725e0d je 0x10725e22 */
  if (C.zf) goto L_10725e22;
  /* 10725e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725e15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10725e17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10725e19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725e1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725e1f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10725e22:;
  /* 10725e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725e28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10725e2b:;
  /* 10725e2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725e2e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10725e34 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725e37 je 0x10725e57 */
  if (C.zf) goto L_10725e57;
  /* 10725e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725e3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10725e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725e43 je 0x10725e57 */
  if (C.zf) goto L_10725e57;
  /* 10725e45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725e48 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10725e4e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725e51 jne 0x10725dad */
  if (!C.zf) goto L_10725dad;
L_10725e57:;
  /* 10725e57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10725e5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10725e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10725e62 jne 0x10725e6f */
  if (!C.zf) goto L_10725e6f;
  /* 10725e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725e67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10725e6d jmp 0x10725e7c */
  goto L_10725e7c;
L_10725e6f:;
  /* 10725e6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725e73 je 0x10725e7c */
  if (C.zf) goto L_10725e7c;
  /* 10725e75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725e78 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10725e7c:;
  /* 10725e7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10725e83:;
  /* 10725e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725e86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10725e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725e8b je 0x10725eae */
  if (C.zf) goto L_10725eae;
L_10725e8d:;
  /* 10725e8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725e90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10725e93 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725e96 je 0x10725ea3 */
  if (C.zf) goto L_10725ea3;
  /* 10725e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725e9b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725e9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725ea1 jne 0x10725eae */
  if (!C.zf) goto L_10725eae;
L_10725ea3:;
  /* 10725ea3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725ea6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725ea9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10725eac jmp 0x10725e8d */
  goto L_10725e8d;
L_10725eae:;
  /* 10725eae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725eb1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725eb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10725eb6 jne 0x10725ebd */
  if (!C.zf) goto L_10725ebd;
  /* 10725eb8 jmp 0x1072609b */
  goto L_1072609b;
L_10725ebd:;
  /* 10725ebd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725ec1 je 0x10725ed4 */
  if (C.zf) goto L_10725ed4;
  /* 10725ec3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725ec9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10725ecb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10725ece add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725ed1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10725ed4:;
  /* 10725ed4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10725ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10725ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725edc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10725edf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10725ee1:;
  /* 10725ee1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10725ee8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10725eef:;
  /* 10725eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725ef2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10725ef5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725ef8 jne 0x10725f0e */
  if (!C.zf) goto L_10725f0e;
  /* 10725efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725efd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725f00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10725f03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725f06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725f09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10725f0c jmp 0x10725eef */
  goto L_10725eef;
L_10725f0e:;
  /* 10725f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725f11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725f14 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725f17 jne 0x10725f6a */
  if (!C.zf) goto L_10725f6a;
  /* 10725f19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725f1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725f1e mov ecx, 2 */
  ECX = (0x2u);
  /* 10725f23 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10725f25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10725f27 jne 0x10725f62 */
  if (!C.zf) goto L_10725f62;
  /* 10725f29 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725f2d je 0x10725f4f */
  if (C.zf) goto L_10725f4f;
  /* 10725f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725f32 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10725f36 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725f39 jne 0x10725f46 */
  if (!C.zf) goto L_10725f46;
  /* 10725f3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725f3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725f41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10725f44 jmp 0x10725f4d */
  goto L_10725f4d;
L_10725f46:;
  /* 10725f46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10725f4d:;
  /* 10725f4d jmp 0x10725f56 */
  goto L_10725f56;
L_10725f4f:;
  /* 10725f4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10725f56:;
  /* 10725f56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10725f58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725f5c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10725f5f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10725f62:;
  /* 10725f62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725f65 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10725f67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10725f6a:;
  /* 10725f6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725f6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10725f70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10725f73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10725f76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10725f78 je 0x10725f9e */
  if (C.zf) goto L_10725f9e;
  /* 10725f7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725f7e je 0x10725f8f */
  if (C.zf) goto L_10725f8f;
  /* 10725f80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725f83 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10725f86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725f89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725f8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10725f8f:;
  /* 10725f8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725f92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10725f94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725f97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10725f9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10725f9c jmp 0x10725f6a */
  goto L_10725f6a;
L_10725f9e:;
  /* 10725f9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725fa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10725fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10725fa6 je 0x10725fc4 */
  if (C.zf) goto L_10725fc4;
  /* 10725fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725fac jne 0x10725fc9 */
  if (!C.zf) goto L_10725fc9;
  /* 10725fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725fb1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10725fb4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725fb7 je 0x10725fc4 */
  if (C.zf) goto L_10725fc4;
  /* 10725fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725fbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10725fbf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725fc2 jne 0x10725fc9 */
  if (!C.zf) goto L_10725fc9;
L_10725fc4:;
  /* 10725fc4 jmp 0x10726074 */
  goto L_10726074;
L_10725fc9:;
  /* 10725fc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725fcd je 0x10726066 */
  if (C.zf) goto L_10726066;
  /* 10725fd3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10725fd7 je 0x1072602d */
  if (C.zf) goto L_1072602d;
  /* 10725fd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10725fde mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10725fe0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10725fe2 mov cl, byte ptr [eax + 0x10750d81] */
  CL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 10725fe8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10725feb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10725fed je 0x10726018 */
  if (C.zf) goto L_10726018;
  /* 10725fef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10725ff5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10725ff7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10725ff9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10725ffc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10725fff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10726002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726008 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072600b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072600e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10726010 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726013 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10726016 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10726018:;
  /* 10726018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072601b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072601e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10726020 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10726022 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726028 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1072602b jmp 0x10726059 */
  goto L_10726059;
L_1072602d:;
  /* 1072602d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10726032 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10726034 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10726036 mov cl, byte ptr [eax + 0x10750d81] */
  CL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 1072603c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1072603f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10726041 je 0x10726059 */
  if (C.zf) goto L_10726059;
  /* 10726043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726046 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726049 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072604c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072604f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10726051 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726054 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10726057 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10726059:;
  /* 10726059 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072605c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072605e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10726064 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10726066:;
  /* 10726066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072606c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072606f jmp 0x10725ee1 */
  goto L_10725ee1;
L_10726074:;
  /* 10726074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726078 je 0x10726089 */
  if (C.zf) goto L_10726089;
  /* 1072607a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072607d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10726080 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726083 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726086 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10726089:;
  /* 10726089 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072608c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072608e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726091 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10726094 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10726096 jmp 0x10725e83 */
  goto L_10725e83;
L_1072609b:;
  /* 1072609b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072609f je 0x107260b3 */
  if (C.zf) goto L_107260b3;
  /* 107260a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107260a4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107260aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107260ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107260b0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107260b3:;
  /* 107260b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107260b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107260b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107260bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107260be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107260c0 mov esp, ebp */
  ESP = (EBP);
  /* 107260c2 pop ebp */
  EBP = (pop32());
  /* 107260c3 ret  */
  ESPCHK(0x10725ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x107260d0 (537 bytes, 173 insns) */
void f_107260d0(void) {
  FTRACE(0x107260d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107260d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107260d1 mov ebp, esp */
  EBP = (ESP);
  /* 107260d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107260d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107260dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 107260e4 cmp dword ptr [0x1074f660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107260eb jne 0x1072612a */
  if (!C.zf) goto L_1072612a;
  /* 107260ed call dword ptr [0x10752380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752380))), 0x107260f3u);
  /* 107260f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107260f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107260fa je 0x10726108 */
  if (C.zf) goto L_10726108;
  /* 107260fc mov dword ptr [0x1074f660], 1 */
  w32((uint32_t)(0x1074f660), (0x1u));
  /* 10726106 jmp 0x1072612a */
  goto L_1072612a;
L_10726108:;
  /* 10726108 call dword ptr [0x10752350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752350))), 0x1072610eu);
  /* 1072610e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10726111 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726115 je 0x10726123 */
  if (C.zf) goto L_10726123;
  /* 10726117 mov dword ptr [0x1074f660], 2 */
  w32((uint32_t)(0x1074f660), (0x2u));
  /* 10726121 jmp 0x1072612a */
  goto L_1072612a;
L_10726123:;
  /* 10726123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10726125 jmp 0x107262e5 */
  goto L_107262e5;
L_1072612a:;
  /* 1072612a cmp dword ptr [0x1074f660], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f660))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726131 jne 0x1072622e */
  if (!C.zf) goto L_1072622e;
  /* 10726137 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072613b jne 0x10726153 */
  if (!C.zf) goto L_10726153;
  /* 1072613d call dword ptr [0x10752380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752380))), 0x10726143u);
  /* 10726143 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10726146 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072614a jne 0x10726153 */
  if (!C.zf) goto L_10726153;
  /* 1072614c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072614e jmp 0x107262e5 */
  goto L_107262e5;
L_10726153:;
  /* 10726153 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10726156 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10726159:;
  /* 10726159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072615c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072615e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10726161 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10726163 je 0x10726185 */
  if (C.zf) goto L_10726185;
  /* 10726165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726168 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072616b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072616e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726171 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10726173 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10726176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10726178 jne 0x10726183 */
  if (!C.zf) goto L_10726183;
  /* 1072617a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072617d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726180 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10726183:;
  /* 10726183 jmp 0x10726159 */
  goto L_10726159;
L_10726185:;
  /* 10726185 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726188 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072618b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1072618d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726190 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10726193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726195 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726197 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072619b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072619e push edx */
  push32((uint32_t)(EDX));
  /* 1072619f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107261a2 push eax */
  push32((uint32_t)(EAX));
  /* 107261a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107261a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107261a7 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x107261adu);
  /* 107261ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107261b0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107261b4 je 0x107261d4 */
  if (C.zf) goto L_107261d4;
  /* 107261b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 107261b8 push 0x1074ac24 */
  push32((uint32_t)(0x1074ac24u));
  /* 107261bd push 2 */
  push32((uint32_t)(0x2u));
  /* 107261bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107261c2 push ecx */
  push32((uint32_t)(ECX));
  /* 107261c3 call 0x10723b00 */
  push32(0x107261c8u); f_10723b00();
  /* 107261c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107261cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107261ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107261d2 jne 0x107261e5 */
  if (!C.zf) goto L_107261e5;
L_107261d4:;
  /* 107261d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107261d7 push edx */
  push32((uint32_t)(EDX));
  /* 107261d8 call dword ptr [0x10752374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752374))), 0x107261deu);
  /* 107261de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107261e0 jmp 0x107262e5 */
  goto L_107262e5;
L_107261e5:;
  /* 107261e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107261e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107261e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107261ec push eax */
  push32((uint32_t)(EAX));
  /* 107261ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107261f0 push ecx */
  push32((uint32_t)(ECX));
  /* 107261f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107261f4 push edx */
  push32((uint32_t)(EDX));
  /* 107261f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107261f8 push eax */
  push32((uint32_t)(EAX));
  /* 107261f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107261fb push 0 */
  push32((uint32_t)(0x0u));
  /* 107261fd call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x10726203u);
  /* 10726203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10726205 jne 0x1072621c */
  if (!C.zf) goto L_1072621c;
  /* 10726207 push 2 */
  push32((uint32_t)(0x2u));
  /* 10726209 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072620c push ecx */
  push32((uint32_t)(ECX));
  /* 1072620d call 0x10724590 */
  push32(0x10726212u); f_10724590();
  /* 10726212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726215 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1072621c:;
  /* 1072621c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072621f push edx */
  push32((uint32_t)(EDX));
  /* 10726220 call dword ptr [0x10752374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752374))), 0x10726226u);
  /* 10726226 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10726229 jmp 0x107262e5 */
  goto L_107262e5;
L_1072622e:;
  /* 1072622e cmp dword ptr [0x1074f660], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f660))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726235 jne 0x107262e3 */
  if (!C.zf) goto L_107262e3;
  /* 1072623b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072623f jne 0x10726257 */
  if (!C.zf) goto L_10726257;
  /* 10726241 call dword ptr [0x10752350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752350))), 0x10726247u);
  /* 10726247 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1072624a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072624e jne 0x10726257 */
  if (!C.zf) goto L_10726257;
  /* 10726250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10726252 jmp 0x107262e5 */
  goto L_107262e5;
L_10726257:;
  /* 10726257 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072625a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072625d:;
  /* 1072625d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10726263 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10726265 je 0x10726285 */
  if (C.zf) goto L_10726285;
  /* 10726267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072626a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072626d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10726270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726273 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10726276 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10726278 jne 0x10726283 */
  if (!C.zf) goto L_10726283;
  /* 1072627a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072627d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726280 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10726283:;
  /* 10726283 jmp 0x1072625d */
  goto L_1072625d;
L_10726285:;
  /* 10726285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726288 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072628b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072628e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10726291 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10726296 push 0x1074ac24 */
  push32((uint32_t)(0x1074ac24u));
  /* 1072629b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072629d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107262a0 push edx */
  push32((uint32_t)(EDX));
  /* 107262a1 call 0x10723b00 */
  push32(0x107262a6u); f_10723b00();
  /* 107262a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107262a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107262ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107262b0 jne 0x107262c0 */
  if (!C.zf) goto L_107262c0;
  /* 107262b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107262b5 push eax */
  push32((uint32_t)(EAX));
  /* 107262b6 call dword ptr [0x10752370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752370))), 0x107262bcu);
  /* 107262bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107262be jmp 0x107262e5 */
  goto L_107262e5;
L_107262c0:;
  /* 107262c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107262c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107262c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107262c7 push edx */
  push32((uint32_t)(EDX));
  /* 107262c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107262cb push eax */
  push32((uint32_t)(EAX));
  /* 107262cc call 0x1072a3e0 */
  push32(0x107262d1u); f_1072a3e0();
  /* 107262d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107262d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107262d7 push ecx */
  push32((uint32_t)(ECX));
  /* 107262d8 call dword ptr [0x10752370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752370))), 0x107262deu);
  /* 107262de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107262e1 jmp 0x107262e5 */
  goto L_107262e5;
L_107262e3:;
  /* 107262e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107262e5:;
  /* 107262e5 mov esp, ebp */
  ESP = (EBP);
  /* 107262e7 pop ebp */
  EBP = (pop32());
  /* 107262e8 ret  */
  ESPCHK(0x107260d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x107262f0 (77 bytes, 25 insns) */
void f_107262f0(void) {
  FTRACE(0x107262f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107262f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107262f1 mov ebp, esp */
  EBP = (ESP);
  /* 107262f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107262f5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107262fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107262fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726300 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10726303 push eax */
  push32((uint32_t)(EAX));
  /* 10726304 call dword ptr [0x10752388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752388))), 0x1072630au);
  /* 1072630a mov dword ptr [0x10750eac], eax */
  w32((uint32_t)(0x10750eac), (EAX));
  /* 1072630f cmp dword ptr [0x10750eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726316 jne 0x1072631c */
  if (!C.zf) goto L_1072631c;
  /* 10726318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072631a jmp 0x1072633b */
  goto L_1072633b;
L_1072631c:;
  /* 1072631c call 0x10727da0 */
  push32(0x10726321u); f_10727da0();
  /* 10726321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10726323 jne 0x10726336 */
  if (!C.zf) goto L_10726336;
  /* 10726325 mov ecx, dword ptr [0x10750eac] */
  ECX = (r32((uint32_t)(0x10750eac)));
  /* 1072632b push ecx */
  push32((uint32_t)(ECX));
  /* 1072632c call dword ptr [0x10752384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752384))), 0x10726332u);
  /* 10726332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10726334 jmp 0x1072633b */
  goto L_1072633b;
L_10726336:;
  /* 10726336 mov eax, 1 */
  EAX = (0x1u);
L_1072633b:;
  /* 1072633b pop ebp */
  EBP = (pop32());
  /* 1072633c ret  */
  ESPCHK(0x107262f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006340 @ 0x10726340 (156 bytes, 48 insns) */
void f_10726340(void) {
  FTRACE(0x10726340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726340 push ebp */
  push32((uint32_t)(EBP));
  /* 10726341 mov ebp, esp */
  EBP = (ESP);
  /* 10726343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726346 mov eax, dword ptr [0x10750ea8] */
  EAX = (r32((uint32_t)(0x10750ea8)));
  /* 1072634b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072634e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10726355 jmp 0x10726360 */
  goto L_10726360;
L_10726357:;
  /* 10726357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072635a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072635d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10726360:;
  /* 10726360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726363 cmp edx, dword ptr [0x10750ea4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10750ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726369 jge 0x107263b6 */
  if ((C.sf==C.of)) goto L_107263b6;
  /* 1072636b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10726370 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10726375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726378 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072637b push ecx */
  push32((uint32_t)(ECX));
  /* 1072637c call dword ptr [0x10752378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752378))), 0x10726382u);
  /* 10726382 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10726387 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072638c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072638f push eax */
  push32((uint32_t)(EAX));
  /* 10726390 call dword ptr [0x10752378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752378))), 0x10726396u);
  /* 10726396 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726399 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1072639c push edx */
  push32((uint32_t)(EDX));
  /* 1072639d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072639f mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 107263a4 push eax */
  push32((uint32_t)(EAX));
  /* 107263a5 call dword ptr [0x1075237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075237c))), 0x107263abu);
  /* 107263ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107263ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107263b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107263b4 jmp 0x10726357 */
  goto L_10726357;
L_107263b6:;
  /* 107263b6 mov edx, dword ptr [0x10750ea8] */
  EDX = (r32((uint32_t)(0x10750ea8)));
  /* 107263bc push edx */
  push32((uint32_t)(EDX));
  /* 107263bd push 0 */
  push32((uint32_t)(0x0u));
  /* 107263bf mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 107263c4 push eax */
  push32((uint32_t)(EAX));
  /* 107263c5 call dword ptr [0x1075237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075237c))), 0x107263cbu);
  /* 107263cb mov ecx, dword ptr [0x10750eac] */
  ECX = (r32((uint32_t)(0x10750eac)));
  /* 107263d1 push ecx */
  push32((uint32_t)(ECX));
  /* 107263d2 call dword ptr [0x10752384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752384))), 0x107263d8u);
  /* 107263d8 mov esp, ebp */
  ESP = (EBP);
  /* 107263da pop ebp */
  EBP = (pop32());
  /* 107263db ret  */
  ESPCHK(0x10726340u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x107263e0 (73 bytes, 19 insns) */
void f_107263e0(void) {
  FTRACE(0x107263e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107263e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107263e1 mov ebp, esp */
  EBP = (ESP);
  /* 107263e3 cmp dword ptr [0x1074f4f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107263ea je 0x107263fe */
  if (C.zf) goto L_107263fe;
  /* 107263ec cmp dword ptr [0x1074f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107263f3 jne 0x10726427 */
  if (!C.zf) goto L_10726427;
  /* 107263f5 cmp dword ptr [0x1074f4f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107263fc jne 0x10726427 */
  if (!C.zf) goto L_10726427;
L_107263fe:;
  /* 107263fe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10726403 call 0x10726430 */
  push32(0x10726408u); f_10726430();
  /* 10726408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072640b cmp dword ptr [0x1074f664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726412 je 0x1072641a */
  if (C.zf) goto L_1072641a;
  /* 10726414 call dword ptr [0x1074f664] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f664))), 0x1072641au);
L_1072641a:;
  /* 1072641a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1072641f call 0x10726430 */
  push32(0x10726424u); f_10726430();
  /* 10726424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10726427:;
  /* 10726427 pop ebp */
  EBP = (pop32());
  /* 10726428 ret  */
  ESPCHK(0x107263e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x10726430 (447 bytes, 131 insns) */
void f_10726430(void) {
  FTRACE(0x10726430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726430 push ebp */
  push32((uint32_t)(EBP));
  /* 10726431 mov ebp, esp */
  EBP = (ESP);
  /* 10726433 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726439 push ebx */
  push32((uint32_t)(EBX));
  /* 1072643a push esi */
  push32((uint32_t)(ESI));
  /* 1072643b push edi */
  push32((uint32_t)(EDI));
  /* 1072643c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10726443 jmp 0x1072644e */
  goto L_1072644e;
L_10726445:;
  /* 10726445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072644b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1072644e:;
  /* 1072644e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726452 jae 0x10726467 */
  if (!C.cf) goto L_10726467;
  /* 10726454 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072645a cmp edx, dword ptr [ecx*8 + 0x1074dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1074dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726461 jne 0x10726465 */
  if (!C.zf) goto L_10726465;
  /* 10726463 jmp 0x10726467 */
  goto L_10726467;
L_10726465:;
  /* 10726465 jmp 0x10726445 */
  goto L_10726445;
L_10726467:;
  /* 10726467 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072646a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072646d cmp ecx, dword ptr [eax*8 + 0x1074dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1074dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726474 jne 0x107265e8 */
  if (!C.zf) goto L_107265e8;
  /* 1072647a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726481 je 0x107264a4 */
  if (C.zf) goto L_107264a4;
  /* 10726483 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726486 mov eax, dword ptr [edx*8 + 0x1074dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1074dab4)));
  /* 1072648d push eax */
  push32((uint32_t)(EAX));
  /* 1072648e push 0 */
  push32((uint32_t)(0x0u));
  /* 10726490 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726494 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726496 call 0x10722bc0 */
  push32(0x1072649bu); f_10722bc0();
  /* 1072649b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072649e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107264a1 jne 0x107264a4 */
  if (!C.zf) goto L_107264a4;
  /* 107264a3 int3  */
  x86_unimpl("int3 @ 0x107264a3");
L_107264a4:;
  /* 107264a4 cmp dword ptr [0x1074f4f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107264ab je 0x107264bf */
  if (C.zf) goto L_107264bf;
  /* 107264ad cmp dword ptr [0x1074f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107264b4 jne 0x107264f8 */
  if (!C.zf) goto L_107264f8;
  /* 107264b6 cmp dword ptr [0x1074f4f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107264bd jne 0x107264f8 */
  if (!C.zf) goto L_107264f8;
L_107264bf:;
  /* 107264bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107264c1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 107264c4 push ecx */
  push32((uint32_t)(ECX));
  /* 107264c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107264c8 mov eax, dword ptr [edx*8 + 0x1074dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1074dab4)));
  /* 107264cf push eax */
  push32((uint32_t)(EAX));
  /* 107264d0 call 0x10726930 */
  push32(0x107264d5u); f_10726930();
  /* 107264d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107264d8 push eax */
  push32((uint32_t)(EAX));
  /* 107264d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107264dc mov edx, dword ptr [ecx*8 + 0x1074dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1074dab4)));
  /* 107264e3 push edx */
  push32((uint32_t)(EDX));
  /* 107264e4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107264e6 call dword ptr [0x10752308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752308))), 0x107264ecu);
  /* 107264ec push eax */
  push32((uint32_t)(EAX));
  /* 107264ed call dword ptr [0x1075230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075230c))), 0x107264f3u);
  /* 107264f3 jmp 0x107265e8 */
  goto L_107265e8;
L_107264f8:;
  /* 107264f8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107264ff je 0x107265e8 */
  if (C.zf) goto L_107265e8;
  /* 10726505 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1072650a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10726510 push eax */
  push32((uint32_t)(EAX));
  /* 10726511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726513 call dword ptr [0x10752324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752324))), 0x10726519u);
  /* 10726519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072651b jne 0x10726531 */
  if (!C.zf) goto L_10726531;
  /* 1072651d push 0x1074a48c */
  push32((uint32_t)(0x1074a48cu));
  /* 10726522 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10726528 push ecx */
  push32((uint32_t)(ECX));
  /* 10726529 call 0x10726ab0 */
  push32(0x1072652eu); f_10726ab0();
  /* 1072652e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10726531:;
  /* 10726531 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10726537 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1072653a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072653d push eax */
  push32((uint32_t)(EAX));
  /* 1072653e call 0x10726930 */
  push32(0x10726543u); f_10726930();
  /* 10726543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726546 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726549 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072654c jbe 0x1072657a */
  if ((C.cf||C.zf)) goto L_1072657a;
  /* 1072654e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10726554 push ecx */
  push32((uint32_t)(ECX));
  /* 10726555 call 0x10726930 */
  push32(0x1072655au); f_10726930();
  /* 1072655a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072655d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726560 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10726564 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10726567 push 3 */
  push32((uint32_t)(0x3u));
  /* 10726569 push 0x1074a488 */
  push32((uint32_t)(0x1074a488u));
  /* 1072656e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726571 push ecx */
  push32((uint32_t)(ECX));
  /* 10726572 call 0x10727320 */
  push32(0x10726577u); f_10727320();
  /* 10726577 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072657a:;
  /* 1072657a push 0x1074aee0 */
  push32((uint32_t)(0x1074aee0u));
  /* 1072657f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10726585 push edx */
  push32((uint32_t)(EDX));
  /* 10726586 call 0x10726ab0 */
  push32(0x1072658bu); f_10726ab0();
  /* 1072658b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072658e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726591 push eax */
  push32((uint32_t)(EAX));
  /* 10726592 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10726598 push ecx */
  push32((uint32_t)(ECX));
  /* 10726599 call 0x10726ac0 */
  push32(0x1072659eu); f_10726ac0();
  /* 1072659e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107265a1 push 0x1074a400 */
  push32((uint32_t)(0x1074a400u));
  /* 107265a6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107265ac push edx */
  push32((uint32_t)(EDX));
  /* 107265ad call 0x10726ac0 */
  push32(0x107265b2u); f_10726ac0();
  /* 107265b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107265b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107265b8 mov ecx, dword ptr [eax*8 + 0x1074dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1074dab4)));
  /* 107265bf push ecx */
  push32((uint32_t)(ECX));
  /* 107265c0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107265c6 push edx */
  push32((uint32_t)(EDX));
  /* 107265c7 call 0x10726ac0 */
  push32(0x107265ccu); f_10726ac0();
  /* 107265cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107265cf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 107265d4 push 0x1074aeb8 */
  push32((uint32_t)(0x1074aeb8u));
  /* 107265d9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 107265df push eax */
  push32((uint32_t)(EAX));
  /* 107265e0 call 0x10727260 */
  push32(0x107265e5u); f_10727260();
  /* 107265e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107265e8:;
  /* 107265e8 pop edi */
  EDI = (pop32());
  /* 107265e9 pop esi */
  ESI = (pop32());
  /* 107265ea pop ebx */
  EBX = (pop32());
  /* 107265eb mov esp, ebp */
  ESP = (EBP);
  /* 107265ed pop ebp */
  EBP = (pop32());
  /* 107265ee ret  */
  ESPCHK(0x10726430u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x107265f0 (80 bytes, 27 insns) */
void f_107265f0(void) {
  FTRACE(0x107265f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107265f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107265f1 mov ebp, esp */
  EBP = (ESP);
  /* 107265f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107265f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107265fb jmp 0x10726606 */
  goto L_10726606;
L_107265fd:;
  /* 107265fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726603 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10726606:;
  /* 10726606 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072660a jae 0x1072661f */
  if (!C.cf) goto L_1072661f;
  /* 1072660c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072660f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726612 cmp edx, dword ptr [ecx*8 + 0x1074dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1074dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726619 jne 0x1072661d */
  if (!C.zf) goto L_1072661d;
  /* 1072661b jmp 0x1072661f */
  goto L_1072661f;
L_1072661d:;
  /* 1072661d jmp 0x107265fd */
  goto L_107265fd;
L_1072661f:;
  /* 1072661f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726625 cmp ecx, dword ptr [eax*8 + 0x1074dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1074dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072662c jne 0x1072663a */
  if (!C.zf) goto L_1072663a;
  /* 1072662e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726631 mov eax, dword ptr [edx*8 + 0x1074dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1074dab4)));
  /* 10726638 jmp 0x1072663c */
  goto L_1072663c;
L_1072663a:;
  /* 1072663a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072663c:;
  /* 1072663c mov esp, ebp */
  ESP = (EBP);
  /* 1072663e pop ebp */
  EBP = (pop32());
  /* 1072663f ret  */
  ESPCHK(0x107265f0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10726640 (66 bytes, 28 insns) */
void f_10726640(void) {
  FTRACE(0x10726640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726640 push ebp */
  push32((uint32_t)(EBP));
  /* 10726641 mov ebp, esp */
  EBP = (ESP);
  /* 10726643 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726647 jne 0x10726667 */
  if (!C.zf) goto L_10726667;
  /* 10726649 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072664d jge 0x10726667 */
  if ((C.sf==C.of)) goto L_10726667;
  /* 1072664f push 1 */
  push32((uint32_t)(0x1u));
  /* 10726651 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726654 push eax */
  push32((uint32_t)(EAX));
  /* 10726655 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726658 push ecx */
  push32((uint32_t)(ECX));
  /* 10726659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072665c push edx */
  push32((uint32_t)(EDX));
  /* 1072665d call 0x10726690 */
  push32(0x10726662u); f_10726690();
  /* 10726662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726665 jmp 0x1072667d */
  goto L_1072667d;
L_10726667:;
  /* 10726667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072666c push eax */
  push32((uint32_t)(EAX));
  /* 1072666d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726670 push ecx */
  push32((uint32_t)(ECX));
  /* 10726671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726674 push edx */
  push32((uint32_t)(EDX));
  /* 10726675 call 0x10726690 */
  push32(0x1072667au); f_10726690();
  /* 1072667a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072667d:;
  /* 1072667d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726680 pop ebp */
  EBP = (pop32());
  /* 10726681 ret  */
  ESPCHK(0x10726640u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10726690 (194 bytes, 71 insns) */
void f_10726690(void) {
  FTRACE(0x10726690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726690 push ebp */
  push32((uint32_t)(EBP));
  /* 10726691 mov ebp, esp */
  EBP = (ESP);
  /* 10726693 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072669c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107266a0 je 0x107266b9 */
  if (C.zf) goto L_107266b9;
  /* 107266a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 107266a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107266ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107266b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107266b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107266b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107266b9:;
  /* 107266b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107266bf:;
  /* 107266bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107266c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107266c4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107266c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107266ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107266cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107266cf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107266d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107266d5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107266d9 jbe 0x107266f1 */
  if ((C.cf||C.zf)) goto L_107266f1;
  /* 107266db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107266de add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107266e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107266e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107266ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107266ef jmp 0x10726705 */
  goto L_10726705;
L_107266f1:;
  /* 107266f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107266f4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107266f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107266fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107266ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726702 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10726705:;
  /* 10726705 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726709 ja 0x107266bf */
  if ((!C.cf&&!C.zf)) goto L_107266bf;
  /* 1072670b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072670e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10726711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726714 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072671a:;
  /* 1072671a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072671d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1072671f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10726722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726725 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726728 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1072672a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1072672c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072672f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10726732 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10726734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726737 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072673a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072673d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726740 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726743 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10726746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726749 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072674c jb 0x1072671a */
  if (C.cf) goto L_1072671a;
  /* 1072674e mov esp, ebp */
  ESP = (EBP);
  /* 10726750 pop ebp */
  EBP = (pop32());
  /* 10726751 ret  */
  ESPCHK(0x10726690u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10726760 (63 bytes, 24 insns) */
void f_10726760(void) {
  FTRACE(0x10726760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726760 push ebp */
  push32((uint32_t)(EBP));
  /* 10726761 mov ebp, esp */
  EBP = (ESP);
  /* 10726763 push ecx */
  push32((uint32_t)(ECX));
  /* 10726764 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726768 jne 0x10726779 */
  if (!C.zf) goto L_10726779;
  /* 1072676a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072676e jge 0x10726779 */
  if ((C.sf==C.of)) goto L_10726779;
  /* 10726770 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10726777 jmp 0x10726780 */
  goto L_10726780;
L_10726779:;
  /* 10726779 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10726780:;
  /* 10726780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726783 push eax */
  push32((uint32_t)(EAX));
  /* 10726784 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726787 push ecx */
  push32((uint32_t)(ECX));
  /* 10726788 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072678b push edx */
  push32((uint32_t)(EDX));
  /* 1072678c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072678f push eax */
  push32((uint32_t)(EAX));
  /* 10726790 call 0x10726690 */
  push32(0x10726795u); f_10726690();
  /* 10726795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072679b mov esp, ebp */
  ESP = (EBP);
  /* 1072679d pop ebp */
  EBP = (pop32());
  /* 1072679e ret  */
  ESPCHK(0x10726760u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x107267a0 (30 bytes, 14 insns) */
void f_107267a0(void) {
  FTRACE(0x107267a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107267a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107267a1 mov ebp, esp */
  EBP = (ESP);
  /* 107267a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107267a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107267a8 push eax */
  push32((uint32_t)(EAX));
  /* 107267a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107267ac push ecx */
  push32((uint32_t)(ECX));
  /* 107267ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107267b0 push edx */
  push32((uint32_t)(EDX));
  /* 107267b1 call 0x10726690 */
  push32(0x107267b6u); f_10726690();
  /* 107267b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107267b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107267bc pop ebp */
  EBP = (pop32());
  /* 107267bd ret  */
  ESPCHK(0x107267a0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x107267c0 (72 bytes, 28 insns) */
void f_107267c0(void) {
  FTRACE(0x107267c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107267c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107267c1 mov ebp, esp */
  EBP = (ESP);
  /* 107267c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107267c4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107267c8 jne 0x107267e1 */
  if (!C.zf) goto L_107267e1;
  /* 107267ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107267ce jg 0x107267e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_107267e1;
  /* 107267d0 jl 0x107267d8 */
  if ((C.sf!=C.of)) goto L_107267d8;
  /* 107267d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107267d6 jae 0x107267e1 */
  if (!C.cf) goto L_107267e1;
L_107267d8:;
  /* 107267d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107267df jmp 0x107267e8 */
  goto L_107267e8;
L_107267e1:;
  /* 107267e1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107267e8:;
  /* 107267e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107267eb push eax */
  push32((uint32_t)(EAX));
  /* 107267ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107267ef push ecx */
  push32((uint32_t)(ECX));
  /* 107267f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107267f3 push edx */
  push32((uint32_t)(EDX));
  /* 107267f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107267f7 push eax */
  push32((uint32_t)(EAX));
  /* 107267f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107267fb push ecx */
  push32((uint32_t)(ECX));
  /* 107267fc call 0x10726810 */
  push32(0x10726801u); f_10726810();
  /* 10726801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726804 mov esp, ebp */
  ESP = (EBP);
  /* 10726806 pop ebp */
  EBP = (pop32());
  /* 10726807 ret  */
  ESPCHK(0x107267c0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10726810 (242 bytes, 91 insns) */
void f_10726810(void) {
  FTRACE(0x10726810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726810 push ebp */
  push32((uint32_t)(EBP));
  /* 10726811 mov ebp, esp */
  EBP = (ESP);
  /* 10726813 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726816 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072681c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726820 je 0x10726844 */
  if (C.zf) goto L_10726844;
  /* 10726822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726825 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10726828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072682b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072682e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10726831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726834 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10726836 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726839 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072683c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072683e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10726841 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10726844:;
  /* 10726844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726847 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1072684a:;
  /* 1072684a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072684d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072684f push ecx */
  push32((uint32_t)(ECX));
  /* 10726850 push eax */
  push32((uint32_t)(EAX));
  /* 10726851 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726854 push edx */
  push32((uint32_t)(EDX));
  /* 10726855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726858 push eax */
  push32((uint32_t)(EAX));
  /* 10726859 call 0x1072a790 */
  push32(0x1072685eu); f_1072a790();
  /* 1072685e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10726861 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10726864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10726866 push edx */
  push32((uint32_t)(EDX));
  /* 10726867 push ecx */
  push32((uint32_t)(ECX));
  /* 10726868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072686b push eax */
  push32((uint32_t)(EAX));
  /* 1072686c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072686f push ecx */
  push32((uint32_t)(ECX));
  /* 10726870 call 0x1072a720 */
  push32(0x10726875u); f_1072a720();
  /* 10726875 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10726878 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1072687b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072687f jbe 0x10726897 */
  if ((C.cf||C.zf)) goto L_10726897;
  /* 10726881 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726884 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726887 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072688a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1072688c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072688f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726892 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10726895 jmp 0x107268ab */
  goto L_107268ab;
L_10726897:;
  /* 10726897 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072689a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072689d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107268a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107268a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107268ab:;
  /* 107268ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107268af ja 0x1072684a */
  if ((!C.cf&&!C.zf)) goto L_1072684a;
  /* 107268b1 jb 0x107268b9 */
  if (C.cf) goto L_107268b9;
  /* 107268b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107268b7 ja 0x1072684a */
  if ((!C.cf&&!C.zf)) goto L_1072684a;
L_107268b9:;
  /* 107268b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107268bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107268c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107268c8:;
  /* 107268c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107268cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 107268d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107268d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107268d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107268da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107268dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 107268e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107268e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107268e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107268e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107268eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107268ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107268f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107268f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107268f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107268fa jb 0x107268c8 */
  if (C.cf) goto L_107268c8;
  /* 107268fc mov esp, ebp */
  ESP = (EBP);
  /* 107268fe pop ebp */
  EBP = (pop32());
  /* 107268ff ret 0x14 */
  ESPCHK(0x10726810u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10726910 (31 bytes, 15 insns) */
void f_10726910(void) {
  FTRACE(0x10726910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726910 push ebp */
  push32((uint32_t)(EBP));
  /* 10726911 mov ebp, esp */
  EBP = (ESP);
  /* 10726913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726915 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10726918 push eax */
  push32((uint32_t)(EAX));
  /* 10726919 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072691c push ecx */
  push32((uint32_t)(ECX));
  /* 1072691d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726920 push edx */
  push32((uint32_t)(EDX));
  /* 10726921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726924 push eax */
  push32((uint32_t)(EAX));
  /* 10726925 call 0x10726810 */
  push32(0x1072692au); f_10726810();
  /* 1072692a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072692d pop ebp */
  EBP = (pop32());
  /* 1072692e ret  */
  ESPCHK(0x10726910u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10726930 (123 bytes, 44 insns) */
void f_10726930(void) {
  FTRACE(0x10726930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726930 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10726934 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1072693a je 0x10726950 */
  if (C.zf) goto L_10726950;
L_1072693c:;
  /* 1072693c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1072693e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1072693f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10726941 je 0x10726983 */
  if (C.zf) goto L_10726983;
  /* 10726943 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10726949 jne 0x1072693c */
  if (!C.zf) goto L_1072693c;
  /* 1072694b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10726950:;
  /* 10726950 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10726952 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10726957 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726959 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072695c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1072695e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726961 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10726966 je 0x10726950 */
  if (C.zf) goto L_10726950;
  /* 10726968 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1072696b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1072696d je 0x107269a1 */
  if (C.zf) goto L_107269a1;
  /* 1072696f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10726971 je 0x10726997 */
  if (C.zf) goto L_10726997;
  /* 10726973 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10726978 je 0x1072698d */
  if (C.zf) goto L_1072698d;
  /* 1072697a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1072697f je 0x10726983 */
  if (C.zf) goto L_10726983;
  /* 10726981 jmp 0x10726950 */
  goto L_10726950;
L_10726983:;
  /* 10726983 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10726986 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1072698a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072698c ret  */
  ESPCHK(0x10726930u, _esp0);
  ESP += 4; return;
L_1072698d:;
  /* 1072698d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10726990 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10726994 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726996 ret  */
  ESPCHK(0x10726930u, _esp0);
  ESP += 4; return;
L_10726997:;
  /* 10726997 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1072699a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1072699e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107269a0 ret  */
  ESPCHK(0x10726930u, _esp0);
  ESP += 4; return;
L_107269a1:;
  /* 107269a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 107269a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107269a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107269aa ret  */
  ESPCHK(0x10726930u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x107269b0 (249 bytes, 93 insns) */
void f_107269b0(void) {
  FTRACE(0x107269b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107269b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107269b1 mov ebp, esp */
  EBP = (ESP);
  /* 107269b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107269b6 push ebx */
  push32((uint32_t)(EBX));
  /* 107269b7 push esi */
  push32((uint32_t)(ESI));
  /* 107269b8 push edi */
  push32((uint32_t)(EDI));
  /* 107269b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107269bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107269bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 107269c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_107269c5:;
  /* 107269c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107269c9 jne 0x107269e9 */
  if (!C.zf) goto L_107269e9;
  /* 107269cb push 0x1074af18 */
  push32((uint32_t)(0x1074af18u));
  /* 107269d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107269d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 107269d4 push 0x1074af0c */
  push32((uint32_t)(0x1074af0cu));
  /* 107269d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107269db call 0x10722bc0 */
  push32(0x107269e0u); f_10722bc0();
  /* 107269e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107269e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107269e6 jne 0x107269e9 */
  if (!C.zf) goto L_107269e9;
  /* 107269e8 int3  */
  x86_unimpl("int3 @ 0x107269e8");
L_107269e9:;
  /* 107269e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107269eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107269ed jne 0x107269c5 */
  if (!C.zf) goto L_107269c5;
L_107269ef:;
  /* 107269ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107269f3 jne 0x10726a13 */
  if (!C.zf) goto L_10726a13;
  /* 107269f5 push 0x1074aefc */
  push32((uint32_t)(0x1074aefcu));
  /* 107269fa push 0 */
  push32((uint32_t)(0x0u));
  /* 107269fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107269fe push 0x1074af0c */
  push32((uint32_t)(0x1074af0cu));
  /* 10726a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10726a05 call 0x10722bc0 */
  push32(0x10726a0au); f_10722bc0();
  /* 10726a0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726a0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726a10 jne 0x10726a13 */
  if (!C.zf) goto L_10726a13;
  /* 10726a12 int3  */
  x86_unimpl("int3 @ 0x10726a12");
L_10726a13:;
  /* 10726a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10726a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10726a17 jne 0x107269ef */
  if (!C.zf) goto L_107269ef;
  /* 10726a19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a1c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10726a23 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726a29 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10726a2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726a32 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10726a34 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726a3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10726a3d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10726a40 push edx */
  push32((uint32_t)(EDX));
  /* 10726a41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726a44 push eax */
  push32((uint32_t)(EAX));
  /* 10726a45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10726a49 call 0x1072aa90 */
  push32(0x10726a4eu); f_1072aa90();
  /* 10726a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726a51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10726a54 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a57 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10726a5a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726a5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a60 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10726a63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a66 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726a6a jl 0x10726a8e */
  if ((C.sf!=C.of)) goto L_10726a8e;
  /* 10726a6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10726a71 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10726a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10726a76 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10726a7c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10726a7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a82 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10726a84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726a87 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a8a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10726a8c jmp 0x10726a9f */
  goto L_10726a9f;
L_10726a8e:;
  /* 10726a8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726a91 push eax */
  push32((uint32_t)(EAX));
  /* 10726a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726a94 call 0x1072a810 */
  push32(0x10726a99u); f_1072a810();
  /* 10726a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726a9c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10726a9f:;
  /* 10726a9f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10726aa2 pop edi */
  EDI = (pop32());
  /* 10726aa3 pop esi */
  ESI = (pop32());
  /* 10726aa4 pop ebx */
  EBX = (pop32());
  /* 10726aa5 mov esp, ebp */
  ESP = (EBP);
  /* 10726aa7 pop ebp */
  EBP = (pop32());
  /* 10726aa8 ret  */
  ESPCHK(0x107269b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x10726ab0 (7 bytes, 3 insns) */
void f_10726ab0(void) {
  FTRACE(0x10726ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726ab0 push edi */
  push32((uint32_t)(EDI));
  /* 10726ab1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10726ab5 jmp 0x10726b21 */
  jmp_ind(0x10726b21u); return;
}

/* FUN_10006ac0 @ 0x10726ac0 (224 bytes, 84 insns) */
void f_10726ac0(void) {
  FTRACE(0x10726ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726ac0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10726ac4 push edi */
  push32((uint32_t)(EDI));
  /* 10726ac5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10726acb je 0x10726adc */
  if (C.zf) goto L_10726adc;
L_10726acd:;
  /* 10726acd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10726acf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10726ad0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10726ad2 je 0x10726b0f */
  if (C.zf) goto L_10726b0f;
  /* 10726ad4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10726ada jne 0x10726acd */
  if (!C.zf) goto L_10726acd;
L_10726adc:;
  /* 10726adc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10726ade mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10726ae3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726ae5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10726ae8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10726aea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726aed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10726af2 je 0x10726adc */
  if (C.zf) goto L_10726adc;
  /* 10726af4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10726af7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10726af9 je 0x10726b1e */
  if (C.zf) goto L_10726b1e;
  /* 10726afb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10726afd je 0x10726b19 */
  if (C.zf) goto L_10726b19;
  /* 10726aff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10726b04 je 0x10726b14 */
  if (C.zf) goto L_10726b14;
  /* 10726b06 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10726b0b je 0x10726b0f */
  if (C.zf) goto L_10726b0f;
  /* 10726b0d jmp 0x10726adc */
  goto L_10726adc;
L_10726b0f:;
  /* 10726b0f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10726b12 jmp 0x10726b21 */
  goto L_10726b21;
L_10726b14:;
  /* 10726b14 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10726b17 jmp 0x10726b21 */
  goto L_10726b21;
L_10726b19:;
  /* 10726b19 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10726b1c jmp 0x10726b21 */
  goto L_10726b21;
L_10726b1e:;
  /* 10726b1e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10726b21:;
  /* 10726b21 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10726b25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10726b2b je 0x10726b46 */
  if (C.zf) goto L_10726b46;
L_10726b2d:;
  /* 10726b2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10726b2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10726b30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10726b32 je 0x10726b98 */
  if (C.zf) goto L_10726b98;
  /* 10726b34 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10726b36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10726b37 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10726b3d jne 0x10726b2d */
  if (!C.zf) goto L_10726b2d;
  /* 10726b3f jmp 0x10726b46 */
  goto L_10726b46;
L_10726b41:;
  /* 10726b41 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10726b43 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10726b46:;
  /* 10726b46 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10726b4b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10726b4d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726b4f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10726b52 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10726b54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10726b56 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726b59 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10726b5e je 0x10726b41 */
  if (C.zf) goto L_10726b41;
  /* 10726b60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10726b62 je 0x10726b98 */
  if (C.zf) goto L_10726b98;
  /* 10726b64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10726b66 je 0x10726b8f */
  if (C.zf) goto L_10726b8f;
  /* 10726b68 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10726b6e je 0x10726b82 */
  if (C.zf) goto L_10726b82;
  /* 10726b70 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10726b76 je 0x10726b7a */
  if (C.zf) goto L_10726b7a;
  /* 10726b78 jmp 0x10726b41 */
  goto L_10726b41;
L_10726b7a:;
  /* 10726b7a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10726b7c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10726b80 pop edi */
  EDI = (pop32());
  /* 10726b81 ret  */
  ESPCHK(0x10726ac0u, _esp0);
  ESP += 4; return;
L_10726b82:;
  /* 10726b82 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10726b85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10726b89 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10726b8d pop edi */
  EDI = (pop32());
  /* 10726b8e ret  */
  ESPCHK(0x10726ac0u, _esp0);
  ESP += 4; return;
L_10726b8f:;
  /* 10726b8f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10726b92 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10726b96 pop edi */
  EDI = (pop32());
  /* 10726b97 ret  */
  ESPCHK(0x10726ac0u, _esp0);
  ESP += 4; return;
L_10726b98:;
  /* 10726b98 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10726b9a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10726b9e pop edi */
  EDI = (pop32());
  /* 10726b9f ret  */
  ESPCHK(0x10726ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x10726ba0 (243 bytes, 91 insns) */
void f_10726ba0(void) {
  FTRACE(0x10726ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10726ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10726ba3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 10726ba7 push esi */
  push32((uint32_t)(ESI));
  /* 10726ba8 push edi */
  push32((uint32_t)(EDI));
  /* 10726ba9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10726bac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10726baf:;
  /* 10726baf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726bb3 jne 0x10726bd3 */
  if (!C.zf) goto L_10726bd3;
  /* 10726bb5 push 0x1074af18 */
  push32((uint32_t)(0x1074af18u));
  /* 10726bba push 0 */
  push32((uint32_t)(0x0u));
  /* 10726bbc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10726bbe push 0x1074af28 */
  push32((uint32_t)(0x1074af28u));
  /* 10726bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10726bc5 call 0x10722bc0 */
  push32(0x10726bcau); f_10722bc0();
  /* 10726bca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726bcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726bd0 jne 0x10726bd3 */
  if (!C.zf) goto L_10726bd3;
  /* 10726bd2 int3  */
  x86_unimpl("int3 @ 0x10726bd2");
L_10726bd3:;
  /* 10726bd3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10726bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10726bd7 jne 0x10726baf */
  if (!C.zf) goto L_10726baf;
L_10726bd9:;
  /* 10726bd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726bdd jne 0x10726bfd */
  if (!C.zf) goto L_10726bfd;
  /* 10726bdf push 0x1074aefc */
  push32((uint32_t)(0x1074aefcu));
  /* 10726be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10726be6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10726be8 push 0x1074af28 */
  push32((uint32_t)(0x1074af28u));
  /* 10726bed push 2 */
  push32((uint32_t)(0x2u));
  /* 10726bef call 0x10722bc0 */
  push32(0x10726bf4u); f_10722bc0();
  /* 10726bf4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726bf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726bfa jne 0x10726bfd */
  if (!C.zf) goto L_10726bfd;
  /* 10726bfc int3  */
  x86_unimpl("int3 @ 0x10726bfc");
L_10726bfd:;
  /* 10726bfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10726bff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10726c01 jne 0x10726bd9 */
  if (!C.zf) goto L_10726bd9;
  /* 10726c03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c06 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10726c0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726c13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10726c16 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726c1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10726c1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726c24 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10726c27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10726c2a push ecx */
  push32((uint32_t)(ECX));
  /* 10726c2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10726c2e push edx */
  push32((uint32_t)(EDX));
  /* 10726c2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c32 push eax */
  push32((uint32_t)(EAX));
  /* 10726c33 call 0x1072aa90 */
  push32(0x10726c38u); f_1072aa90();
  /* 10726c38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726c3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10726c3e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c41 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10726c44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726c47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10726c4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c50 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726c54 jl 0x10726c78 */
  if ((C.sf!=C.of)) goto L_10726c78;
  /* 10726c56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10726c5b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10726c5e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10726c60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10726c66 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10726c69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10726c6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726c71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10726c76 jmp 0x10726c89 */
  goto L_10726c89;
L_10726c78:;
  /* 10726c78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10726c7b push edx */
  push32((uint32_t)(EDX));
  /* 10726c7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10726c7e call 0x1072a810 */
  push32(0x10726c83u); f_1072a810();
  /* 10726c83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726c86 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10726c89:;
  /* 10726c89 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10726c8c pop edi */
  EDI = (pop32());
  /* 10726c8d pop esi */
  ESI = (pop32());
  /* 10726c8e pop ebx */
  EBX = (pop32());
  /* 10726c8f mov esp, ebp */
  ESP = (EBP);
  /* 10726c91 pop ebp */
  EBP = (pop32());
  /* 10726c92 ret  */
  ESPCHK(0x10726ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x10726ca0 (47 bytes, 17 insns) */
void f_10726ca0(void) {
  FTRACE(0x10726ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 10726ca1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726ca6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10726caa jb 0x10726cc0 */
  if (C.cf) goto L_10726cc0;
L_10726cac:;
  /* 10726cac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726cb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726cb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10726cb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726cbe jae 0x10726cac */
  if (!C.cf) goto L_10726cac;
L_10726cc0:;
  /* 10726cc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726cc2 mov eax, esp */
  EAX = (ESP);
  /* 10726cc4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10726cc6 mov esp, ecx */
  ESP = (ECX);
  /* 10726cc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10726cca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10726ccd push eax */
  push32((uint32_t)(EAX));
  /* 10726cce ret  */
  ESPCHK(0x10726ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x10726cd0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10726cd0(void) {
  FTRACE(0x10726cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10726cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10726cd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726cd6 push esi */
  push32((uint32_t)(ESI));
  /* 10726cd7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726cdb je 0x10726ce3 */
  if (C.zf) goto L_10726ce3;
  /* 10726cdd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726ce1 jne 0x10726ce8 */
  if (!C.zf) goto L_10726ce8;
L_10726ce3:;
  /* 10726ce3 jmp 0x10726eb8 */
  goto L_10726eb8;
L_10726ce8:;
  /* 10726ce8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726cec je 0x10726d04 */
  if (C.zf) goto L_10726d04;
  /* 10726cee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726cf2 je 0x10726d04 */
  if (C.zf) goto L_10726d04;
  /* 10726cf4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726cf8 je 0x10726d04 */
  if (C.zf) goto L_10726d04;
  /* 10726cfa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726cfe jne 0x10726de1 */
  if (!C.zf) goto L_10726de1;
L_10726d04:;
  /* 10726d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726d06 call 0x10727500 */
  push32(0x10726d0bu); f_10727500();
  /* 10726d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726d0e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726d12 je 0x10726d1a */
  if (C.zf) goto L_10726d1a;
  /* 10726d14 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726d18 jne 0x10726d5f */
  if (!C.zf) goto L_10726d5f;
L_10726d1a:;
  /* 10726d1a cmp dword ptr [0x1074f678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726d21 jne 0x10726d5f */
  if (!C.zf) goto L_10726d5f;
  /* 10726d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726d25 push 0x10726f00 */
  push32((uint32_t)(0x10726f00u));
  /* 10726d2a call dword ptr [0x10752394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752394))), 0x10726d30u);
  /* 10726d30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726d33 jne 0x10726d41 */
  if (!C.zf) goto L_10726d41;
  /* 10726d35 mov dword ptr [0x1074f678], 1 */
  w32((uint32_t)(0x1074f678), (0x1u));
  /* 10726d3f jmp 0x10726d5f */
  goto L_10726d5f;
L_10726d41:;
  /* 10726d41 call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x10726d47u);
  /* 10726d47 mov esi, eax */
  ESI = (EAX);
  /* 10726d49 call 0x1072b9e0 */
  push32(0x10726d4eu); f_1072b9e0();
  /* 10726d4e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10726d50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726d52 call 0x107275a0 */
  push32(0x10726d57u); f_107275a0();
  /* 10726d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726d5a jmp 0x10726eb8 */
  goto L_10726eb8;
L_10726d5f:;
  /* 10726d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726d62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10726d65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10726d68 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726d6b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10726d6e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726d72 ja 0x10726dd2 */
  if ((!C.cf&&!C.zf)) goto L_10726dd2;
  /* 10726d74 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10726d77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10726d79 mov dl, byte ptr [eax + 0x10726edf] */
  DL = (r8((uint32_t)(EAX + 0x10726edf)));
  /* 10726d7f jmp dword ptr [edx*4 + 0x10726ecb] */
  switch (EDX) {
    case 0: goto L_10726d86;
    case 1: goto L_10726dc0;
    case 2: goto L_10726d9a;
    case 3: goto L_10726dad;
    case 4: goto L_10726dd2;
    default: x86_unimpl("switch@0x10726d7f out of table"); return;
  }
L_10726d86:;
  /* 10726d86 mov ecx, dword ptr [0x1074f668] */
  ECX = (r32((uint32_t)(0x1074f668)));
  /* 10726d8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10726d8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726d92 mov dword ptr [0x1074f668], edx */
  w32((uint32_t)(0x1074f668), (EDX));
  /* 10726d98 jmp 0x10726dd2 */
  goto L_10726dd2;
L_10726d9a:;
  /* 10726d9a mov eax, dword ptr [0x1074f66c] */
  EAX = (r32((uint32_t)(0x1074f66c)));
  /* 10726d9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10726da2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726da5 mov dword ptr [0x1074f66c], ecx */
  w32((uint32_t)(0x1074f66c), (ECX));
  /* 10726dab jmp 0x10726dd2 */
  goto L_10726dd2;
L_10726dad:;
  /* 10726dad mov edx, dword ptr [0x1074f670] */
  EDX = (r32((uint32_t)(0x1074f670)));
  /* 10726db3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10726db6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726db9 mov dword ptr [0x1074f670], eax */
  w32((uint32_t)(0x1074f670), (EAX));
  /* 10726dbe jmp 0x10726dd2 */
  goto L_10726dd2;
L_10726dc0:;
  /* 10726dc0 mov ecx, dword ptr [0x1074f674] */
  ECX = (r32((uint32_t)(0x1074f674)));
  /* 10726dc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10726dc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726dcc mov dword ptr [0x1074f674], edx */
  w32((uint32_t)(0x1074f674), (EDX));
L_10726dd2:;
  /* 10726dd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726dd4 call 0x107275a0 */
  push32(0x10726dd9u); f_107275a0();
  /* 10726dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726ddc jmp 0x10726eb3 */
  goto L_10726eb3;
L_10726de1:;
  /* 10726de1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726de5 je 0x10726df8 */
  if (C.zf) goto L_10726df8;
  /* 10726de7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726deb je 0x10726df8 */
  if (C.zf) goto L_10726df8;
  /* 10726ded cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726df1 je 0x10726df8 */
  if (C.zf) goto L_10726df8;
  /* 10726df3 jmp 0x10726eb8 */
  goto L_10726eb8;
L_10726df8:;
  /* 10726df8 call 0x10723540 */
  push32(0x10726dfdu); f_10723540();
  /* 10726dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10726e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726e03 cmp dword ptr [eax + 0x50], 0x1074dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1074dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726e0a jne 0x10726e55 */
  if (!C.zf) goto L_10726e55;
  /* 10726e0c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10726e11 push 0x1074af34 */
  push32((uint32_t)(0x1074af34u));
  /* 10726e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10726e18 mov ecx, dword ptr [0x1074dc80] */
  ECX = (r32((uint32_t)(0x1074dc80)));
  /* 10726e1e push ecx */
  push32((uint32_t)(ECX));
  /* 10726e1f call 0x10723b00 */
  push32(0x10726e24u); f_10723b00();
  /* 10726e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726e2a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10726e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726e30 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726e34 je 0x10726e53 */
  if (C.zf) goto L_10726e53;
  /* 10726e36 mov ecx, dword ptr [0x1074dc80] */
  ECX = (r32((uint32_t)(0x1074dc80)));
  /* 10726e3c push ecx */
  push32((uint32_t)(ECX));
  /* 10726e3d push 0x1074dc00 */
  push32((uint32_t)(0x1074dc00u));
  /* 10726e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726e45 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10726e48 push eax */
  push32((uint32_t)(EAX));
  /* 10726e49 call 0x1072a3e0 */
  push32(0x10726e4eu); f_1072a3e0();
  /* 10726e4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726e51 jmp 0x10726e55 */
  goto L_10726e55;
L_10726e53:;
  /* 10726e53 jmp 0x10726eb8 */
  goto L_10726eb8;
L_10726e55:;
  /* 10726e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726e58 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10726e5b push edx */
  push32((uint32_t)(EDX));
  /* 10726e5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726e5f push eax */
  push32((uint32_t)(EAX));
  /* 10726e60 call 0x107271e0 */
  push32(0x10726e65u); f_107271e0();
  /* 10726e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726e68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10726e6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726e6f jne 0x10726e73 */
  if (!C.zf) goto L_10726e73;
  /* 10726e71 jmp 0x10726eb8 */
  goto L_10726eb8;
L_10726e73:;
  /* 10726e73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726e76 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10726e79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10726e7c:;
  /* 10726e7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726e7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10726e82 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726e85 jne 0x10726eb3 */
  if (!C.zf) goto L_10726eb3;
  /* 10726e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726e8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10726e8d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10726e90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726e93 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726e96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10726e99 mov edx, dword ptr [0x1074dc84] */
  EDX = (r32((uint32_t)(0x1074dc84)));
  /* 10726e9f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10726ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726ea5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10726ea8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726eaa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726ead jb 0x10726eb1 */
  if (C.cf) goto L_10726eb1;
  /* 10726eaf jmp 0x10726eb3 */
  goto L_10726eb3;
L_10726eb1:;
  /* 10726eb1 jmp 0x10726e7c */
  goto L_10726e7c;
L_10726eb3:;
  /* 10726eb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726eb6 jmp 0x10726ec6 */
  goto L_10726ec6;
L_10726eb8:;
  /* 10726eb8 call 0x1072b9d0 */
  push32(0x10726ebdu); f_1072b9d0();
  /* 10726ebd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10726ec3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10726ec6:;
  /* 10726ec6 pop esi */
  ESI = (pop32());
  /* 10726ec7 mov esp, ebp */
  ESP = (EBP);
  /* 10726ec9 pop ebp */
  EBP = (pop32());
  /* 10726eca ret  */
  ESPCHK(0x10726cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x10726f00 (146 bytes, 45 insns) */
void f_10726f00(void) {
  FTRACE(0x10726f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10726f01 mov ebp, esp */
  EBP = (ESP);
  /* 10726f03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726f08 call 0x10727500 */
  push32(0x10726f0du); f_10727500();
  /* 10726f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726f10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726f14 jne 0x10726f2e */
  if (!C.zf) goto L_10726f2e;
  /* 10726f16 mov dword ptr [ebp - 8], 0x1074f668 */
  w32((uint32_t)(EBP + -0x8), (0x1074f668u));
  /* 10726f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726f20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10726f22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10726f25 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10726f2c jmp 0x10726f44 */
  goto L_10726f44;
L_10726f2e:;
  /* 10726f2e mov dword ptr [ebp - 8], 0x1074f66c */
  w32((uint32_t)(EBP + -0x8), (0x1074f66cu));
  /* 10726f35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726f38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10726f3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10726f3d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10726f44:;
  /* 10726f44 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726f48 jne 0x10726f58 */
  if (!C.zf) goto L_10726f58;
  /* 10726f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10726f4c call 0x107275a0 */
  push32(0x10726f51u); f_107275a0();
  /* 10726f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10726f56 jmp 0x10726f8c */
  goto L_10726f8c;
L_10726f58:;
  /* 10726f58 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726f5c je 0x10726f7d */
  if (C.zf) goto L_10726f7d;
  /* 10726f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10726f61 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10726f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10726f69 call 0x107275a0 */
  push32(0x10726f6eu); f_107275a0();
  /* 10726f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10726f74 push edx */
  push32((uint32_t)(EDX));
  /* 10726f75 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10726f78u);
  /* 10726f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10726f7b jmp 0x10726f87 */
  goto L_10726f87;
L_10726f7d:;
  /* 10726f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10726f7f call 0x107275a0 */
  push32(0x10726f84u); f_107275a0();
  /* 10726f84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10726f87:;
  /* 10726f87 mov eax, 1 */
  EAX = (0x1u);
L_10726f8c:;
  /* 10726f8c mov esp, ebp */
  ESP = (EBP);
  /* 10726f8e pop ebp */
  EBP = (pop32());
  /* 10726f8f ret 4 */
  ESPCHK(0x10726f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10006fa0 @ 0x10726fa0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10726fa0(void) {
  FTRACE(0x10726fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10726fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10726fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10726fa3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726fa6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10726fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10726fb0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10726fb3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10726fb6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10726fb9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10726fbc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10726fc0 ja 0x1072706e */
  if ((!C.cf&&!C.zf)) goto L_1072706e;
  /* 10726fc6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10726fc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10726fcb mov dl, byte ptr [eax + 0x107271c2] */
  DL = (r8((uint32_t)(EAX + 0x107271c2)));
  /* 10726fd1 jmp dword ptr [edx*4 + 0x107271aa] */
  switch (EDX) {
    case 0: goto L_10726fd8;
    case 1: goto L_10727043;
    case 2: goto L_10727029;
    case 3: goto L_10726ff5;
    case 4: goto L_1072700f;
    case 5: goto L_1072706e;
    default: x86_unimpl("switch@0x10726fd1 out of table"); return;
  }
L_10726fd8:;
  /* 10726fd8 mov dword ptr [ebp - 0x18], 0x1074f668 */
  w32((uint32_t)(EBP + -0x18), (0x1074f668u));
  /* 10726fdf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10726fe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10726fe4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10726fe7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10726fea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10726fed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10726ff0 jmp 0x10727076 */
  goto L_10727076;
L_10726ff5:;
  /* 10726ff5 mov dword ptr [ebp - 0x18], 0x1074f66c */
  w32((uint32_t)(EBP + -0x18), (0x1074f66cu));
  /* 10726ffc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10726fff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10727001 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10727004 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727007 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072700a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1072700d jmp 0x10727076 */
  goto L_10727076;
L_1072700f:;
  /* 1072700f mov dword ptr [ebp - 0x18], 0x1074f670 */
  w32((uint32_t)(EBP + -0x18), (0x1074f670u));
  /* 10727016 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10727019 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072701b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1072701e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727021 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727024 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10727027 jmp 0x10727076 */
  goto L_10727076;
L_10727029:;
  /* 10727029 mov dword ptr [ebp - 0x18], 0x1074f674 */
  w32((uint32_t)(EBP + -0x18), (0x1074f674u));
  /* 10727030 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10727033 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10727035 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10727038 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072703b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072703e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10727041 jmp 0x10727076 */
  goto L_10727076;
L_10727043:;
  /* 10727043 call 0x10723540 */
  push32(0x10727048u); f_10723540();
  /* 10727048 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072704b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072704e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10727051 push edx */
  push32((uint32_t)(EDX));
  /* 10727052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727055 push eax */
  push32((uint32_t)(EAX));
  /* 10727056 call 0x107271e0 */
  push32(0x1072705bu); f_107271e0();
  /* 1072705b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072705e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727061 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10727064 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10727067 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10727069 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1072706c jmp 0x10727076 */
  goto L_10727076;
L_1072706e:;
  /* 1072706e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10727071 jmp 0x107271a6 */
  goto L_107271a6;
L_10727076:;
  /* 10727076 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072707a je 0x10727086 */
  if (C.zf) goto L_10727086;
  /* 1072707c push 1 */
  push32((uint32_t)(0x1u));
  /* 1072707e call 0x10727500 */
  push32(0x10727083u); f_10727500();
  /* 10727083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10727086:;
  /* 10727086 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072708a jne 0x107270a3 */
  if (!C.zf) goto L_107270a3;
  /* 1072708c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727090 je 0x1072709c */
  if (C.zf) goto L_1072709c;
  /* 10727092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10727094 call 0x107275a0 */
  push32(0x10727099u); f_107275a0();
  /* 10727099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072709c:;
  /* 1072709c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072709e jmp 0x107271a6 */
  goto L_107271a6;
L_107270a3:;
  /* 107270a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107270a7 jne 0x107270c0 */
  if (!C.zf) goto L_107270c0;
  /* 107270a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107270ad je 0x107270b9 */
  if (C.zf) goto L_107270b9;
  /* 107270af push 1 */
  push32((uint32_t)(0x1u));
  /* 107270b1 call 0x107275a0 */
  push32(0x107270b6u); f_107275a0();
  /* 107270b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107270b9:;
  /* 107270b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 107270bb call 0x107232c0 */
  push32(0x107270c0u); f_107232c0();
L_107270c0:;
  /* 107270c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107270c4 je 0x107270d2 */
  if (C.zf) goto L_107270d2;
  /* 107270c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107270ca je 0x107270d2 */
  if (C.zf) goto L_107270d2;
  /* 107270cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107270d0 jne 0x107270fe */
  if (!C.zf) goto L_107270fe;
L_107270d2:;
  /* 107270d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107270d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 107270d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107270db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107270de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 107270e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107270e9 jne 0x107270fe */
  if (!C.zf) goto L_107270fe;
  /* 107270eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107270ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107270f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107270f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107270f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_107270fe:;
  /* 107270fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727102 jne 0x10727140 */
  if (!C.zf) goto L_10727140;
  /* 10727104 mov eax, dword ptr [0x1074dc78] */
  EAX = (r32((uint32_t)(0x1074dc78)));
  /* 10727109 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1072710c jmp 0x10727117 */
  goto L_10727117;
L_1072710e:;
  /* 1072710e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727111 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727114 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10727117:;
  /* 10727117 mov edx, dword ptr [0x1074dc78] */
  EDX = (r32((uint32_t)(0x1074dc78)));
  /* 1072711d add edx, dword ptr [0x1074dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727123 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727126 jge 0x1072713e */
  if ((C.sf==C.of)) goto L_1072713e;
  /* 10727128 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072712b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072712e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727131 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10727134 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1072713c jmp 0x1072710e */
  goto L_1072710e;
L_1072713e:;
  /* 1072713e jmp 0x10727149 */
  goto L_10727149;
L_10727140:;
  /* 10727140 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10727143 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10727149:;
  /* 10727149 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072714d je 0x10727159 */
  if (C.zf) goto L_10727159;
  /* 1072714f push 1 */
  push32((uint32_t)(0x1u));
  /* 10727151 call 0x107275a0 */
  push32(0x10727156u); f_107275a0();
  /* 10727156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10727159:;
  /* 10727159 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072715d jne 0x10727170 */
  if (!C.zf) goto L_10727170;
  /* 1072715f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727162 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10727165 push edx */
  push32((uint32_t)(EDX));
  /* 10727166 push 8 */
  push32((uint32_t)(0x8u));
  /* 10727168 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1072716bu);
  /* 1072716b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072716e jmp 0x1072717a */
  goto L_1072717a;
L_10727170:;
  /* 10727170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727173 push eax */
  push32((uint32_t)(EAX));
  /* 10727174 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10727177u);
  /* 10727177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072717a:;
  /* 1072717a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072717e je 0x1072718c */
  if (C.zf) goto L_1072718c;
  /* 10727180 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727184 je 0x1072718c */
  if (C.zf) goto L_1072718c;
  /* 10727186 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072718a jne 0x107271a4 */
  if (!C.zf) goto L_107271a4;
L_1072718c:;
  /* 1072718c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072718f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10727192 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10727195 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727199 jne 0x107271a4 */
  if (!C.zf) goto L_107271a4;
  /* 1072719b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072719e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107271a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_107271a4:;
  /* 107271a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107271a6:;
  /* 107271a6 mov esp, ebp */
  ESP = (EBP);
  /* 107271a8 pop ebp */
  EBP = (pop32());
  /* 107271a9 ret  */
  ESPCHK(0x10726fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x107271e0 (91 bytes, 35 insns) */
void f_107271e0(void) {
  FTRACE(0x107271e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107271e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107271e1 mov ebp, esp */
  EBP = (ESP);
  /* 107271e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107271e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107271e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107271ea:;
  /* 107271ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107271ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107271f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107271f3 je 0x10727213 */
  if (C.zf) goto L_10727213;
  /* 107271f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107271f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107271fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107271fe mov ecx, dword ptr [0x1074dc84] */
  ECX = (r32((uint32_t)(0x1074dc84)));
  /* 10727204 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10727207 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072720a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072720c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072720f jae 0x10727213 */
  if (!C.cf) goto L_10727213;
  /* 10727211 jmp 0x107271ea */
  goto L_107271ea;
L_10727213:;
  /* 10727213 mov eax, dword ptr [0x1074dc84] */
  EAX = (r32((uint32_t)(0x1074dc84)));
  /* 10727218 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072721b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072721e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727220 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727223 jae 0x10727235 */
  if (!C.cf) goto L_10727235;
  /* 10727225 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727228 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1072722b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072722e jne 0x10727235 */
  if (!C.zf) goto L_10727235;
  /* 10727230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727233 jmp 0x10727237 */
  goto L_10727237;
L_10727235:;
  /* 10727235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10727237:;
  /* 10727237 mov esp, ebp */
  ESP = (EBP);
  /* 10727239 pop ebp */
  EBP = (pop32());
  /* 1072723a ret  */
  ESPCHK(0x107271e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x10727240 (13 bytes, 6 insns) */
void f_10727240(void) {
  FTRACE(0x10727240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727240 push ebp */
  push32((uint32_t)(EBP));
  /* 10727241 mov ebp, esp */
  EBP = (ESP);
  /* 10727243 call 0x10723540 */
  push32(0x10727248u); f_10723540();
  /* 10727248 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072724b pop ebp */
  EBP = (pop32());
  /* 1072724c ret  */
  ESPCHK(0x10727240u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x10727250 (13 bytes, 6 insns) */
void f_10727250(void) {
  FTRACE(0x10727250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727250 push ebp */
  push32((uint32_t)(EBP));
  /* 10727251 mov ebp, esp */
  EBP = (ESP);
  /* 10727253 call 0x10723540 */
  push32(0x10727258u); f_10723540();
  /* 10727258 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072725b pop ebp */
  EBP = (pop32());
  /* 1072725c ret  */
  ESPCHK(0x10727250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x10727260 (187 bytes, 54 insns) */
void f_10727260(void) {
  FTRACE(0x10727260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727260 push ebp */
  push32((uint32_t)(EBP));
  /* 10727261 mov ebp, esp */
  EBP = (ESP);
  /* 10727263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072726d cmp dword ptr [0x1074f67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727274 jne 0x107272d3 */
  if (!C.zf) goto L_107272d3;
  /* 10727276 push 0x1074a360 */
  push32((uint32_t)(0x1074a360u));
  /* 1072727b call dword ptr [0x1075231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075231c))), 0x10727281u);
  /* 10727281 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10727284 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727288 je 0x107272a7 */
  if (C.zf) goto L_107272a7;
  /* 1072728a push 0x1074af64 */
  push32((uint32_t)(0x1074af64u));
  /* 1072728f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727292 push eax */
  push32((uint32_t)(EAX));
  /* 10727293 call dword ptr [0x10752318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752318))), 0x10727299u);
  /* 10727299 mov dword ptr [0x1074f67c], eax */
  w32((uint32_t)(0x1074f67c), (EAX));
  /* 1072729e cmp dword ptr [0x1074f67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107272a5 jne 0x107272ab */
  if (!C.zf) goto L_107272ab;
L_107272a7:;
  /* 107272a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107272a9 jmp 0x10727317 */
  goto L_10727317;
L_107272ab:;
  /* 107272ab push 0x1074af54 */
  push32((uint32_t)(0x1074af54u));
  /* 107272b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107272b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107272b4 call dword ptr [0x10752318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752318))), 0x107272bau);
  /* 107272ba mov dword ptr [0x1074f680], eax */
  w32((uint32_t)(0x1074f680), (EAX));
  /* 107272bf push 0x1074af40 */
  push32((uint32_t)(0x1074af40u));
  /* 107272c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107272c7 push edx */
  push32((uint32_t)(EDX));
  /* 107272c8 call dword ptr [0x10752318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752318))), 0x107272ceu);
  /* 107272ce mov dword ptr [0x1074f684], eax */
  w32((uint32_t)(0x1074f684), (EAX));
L_107272d3:;
  /* 107272d3 cmp dword ptr [0x1074f680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107272da je 0x107272e5 */
  if (C.zf) goto L_107272e5;
  /* 107272dc call dword ptr [0x1074f680] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f680))), 0x107272e2u);
  /* 107272e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107272e5:;
  /* 107272e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107272e9 je 0x10727301 */
  if (C.zf) goto L_10727301;
  /* 107272eb cmp dword ptr [0x1074f684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107272f2 je 0x10727301 */
  if (C.zf) goto L_10727301;
  /* 107272f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107272f7 push eax */
  push32((uint32_t)(EAX));
  /* 107272f8 call dword ptr [0x1074f684] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f684))), 0x107272feu);
  /* 107272fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10727301:;
  /* 10727301 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10727304 push ecx */
  push32((uint32_t)(ECX));
  /* 10727305 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727308 push edx */
  push32((uint32_t)(EDX));
  /* 10727309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072730c push eax */
  push32((uint32_t)(EAX));
  /* 1072730d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727310 push ecx */
  push32((uint32_t)(ECX));
  /* 10727311 call dword ptr [0x1074f67c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f67c))), 0x10727317u);
L_10727317:;
  /* 10727317 mov esp, ebp */
  ESP = (EBP);
  /* 10727319 pop ebp */
  EBP = (pop32());
  /* 1072731a ret  */
  ESPCHK(0x10727260u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10727320 (254 bytes, 109 insns) */
void f_10727320(void) {
  FTRACE(0x10727320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727320 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10727324 push edi */
  push32((uint32_t)(EDI));
  /* 10727325 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10727327 je 0x107273a3 */
  if (C.zf) goto L_107273a3;
  /* 10727329 push esi */
  push32((uint32_t)(ESI));
  /* 1072732a push ebx */
  push32((uint32_t)(EBX));
  /* 1072732b mov ebx, ecx */
  EBX = (ECX);
  /* 1072732d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10727331 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10727337 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1072733b jne 0x10727344 */
  if (!C.zf) goto L_10727344;
  /* 1072733d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10727340 jne 0x107273b1 */
  if (!C.zf) goto L_107273b1;
  /* 10727342 jmp 0x10727365 */
  goto L_10727365;
L_10727344:;
  /* 10727344 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10727346 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10727347 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10727349 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1072734a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1072734b je 0x10727372 */
  if (C.zf) goto L_10727372;
  /* 1072734d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1072734f je 0x1072737a */
  if (C.zf) goto L_1072737a;
  /* 10727351 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10727357 jne 0x10727344 */
  if (!C.zf) goto L_10727344;
  /* 10727359 mov ebx, ecx */
  EBX = (ECX);
  /* 1072735b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072735e jne 0x107273b1 */
  if (!C.zf) goto L_107273b1;
L_10727360:;
  /* 10727360 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10727363 je 0x10727372 */
  if (C.zf) goto L_10727372;
L_10727365:;
  /* 10727365 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10727367 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10727368 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072736a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1072736b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1072736d je 0x1072739e */
  if (C.zf) goto L_1072739e;
  /* 1072736f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10727370 jne 0x10727365 */
  if (!C.zf) goto L_10727365;
L_10727372:;
  /* 10727372 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10727376 pop ebx */
  EBX = (pop32());
  /* 10727377 pop esi */
  ESI = (pop32());
  /* 10727378 pop edi */
  EDI = (pop32());
  /* 10727379 ret  */
  ESPCHK(0x10727320u, _esp0);
  ESP += 4; return;
L_1072737a:;
  /* 1072737a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10727380 je 0x10727394 */
  if (C.zf) goto L_10727394;
L_10727382:;
  /* 10727382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10727384 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10727385 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10727386 je 0x10727416 */
  if (C.zf) goto L_10727416;
  /* 1072738c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10727392 jne 0x10727382 */
  if (!C.zf) goto L_10727382;
L_10727394:;
  /* 10727394 mov ebx, ecx */
  EBX = (ECX);
  /* 10727396 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10727399 jne 0x10727407 */
  if (!C.zf) goto L_10727407;
L_1072739b:;
  /* 1072739b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072739d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1072739e:;
  /* 1072739e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1072739f jne 0x1072739b */
  if (!C.zf) goto L_1072739b;
  /* 107273a1 pop ebx */
  EBX = (pop32());
  /* 107273a2 pop esi */
  ESI = (pop32());
L_107273a3:;
  /* 107273a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107273a7 pop edi */
  EDI = (pop32());
  /* 107273a8 ret  */
  ESPCHK(0x10727320u, _esp0);
  ESP += 4; return;
L_107273a9:;
  /* 107273a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107273ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107273ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107273af je 0x10727360 */
  if (C.zf) goto L_10727360;
L_107273b1:;
  /* 107273b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107273b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 107273b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107273ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107273bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107273bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 107273c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107273c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107273c9 je 0x107273a9 */
  if (C.zf) goto L_107273a9;
  /* 107273cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107273cd je 0x107273fb */
  if (C.zf) goto L_107273fb;
  /* 107273cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 107273d1 je 0x107273f1 */
  if (C.zf) goto L_107273f1;
  /* 107273d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 107273d9 je 0x107273e7 */
  if (C.zf) goto L_107273e7;
  /* 107273db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 107273e1 jne 0x107273a9 */
  if (!C.zf) goto L_107273a9;
  /* 107273e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107273e5 jmp 0x107273ff */
  goto L_107273ff;
L_107273e7:;
  /* 107273e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107273ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107273ef jmp 0x107273ff */
  goto L_107273ff;
L_107273f1:;
  /* 107273f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107273f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107273f9 jmp 0x107273ff */
  goto L_107273ff;
L_107273fb:;
  /* 107273fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107273fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_107273ff:;
  /* 107273ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10727402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10727404 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10727405 je 0x10727411 */
  if (C.zf) goto L_10727411;
L_10727407:;
  /* 10727407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10727409:;
  /* 10727409 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1072740b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072740e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1072740f jne 0x10727409 */
  if (!C.zf) goto L_10727409;
L_10727411:;
  /* 10727411 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10727414 jne 0x1072739b */
  if (!C.zf) goto L_1072739b;
L_10727416:;
  /* 10727416 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1072741a pop ebx */
  EBX = (pop32());
  /* 1072741b pop esi */
  ESI = (pop32());
  /* 1072741c pop edi */
  EDI = (pop32());
  /* 1072741d ret  */
  ESPCHK(0x10727320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x10727420 (55 bytes, 16 insns) */
void f_10727420(void) {
  FTRACE(0x10727420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727420 push ebp */
  push32((uint32_t)(EBP));
  /* 10727421 mov ebp, esp */
  EBP = (ESP);
  /* 10727423 mov eax, dword ptr [0x1074db84] */
  EAX = (r32((uint32_t)(0x1074db84)));
  /* 10727428 push eax */
  push32((uint32_t)(EAX));
  /* 10727429 call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x1072742fu);
  /* 1072742f mov ecx, dword ptr [0x1074db74] */
  ECX = (r32((uint32_t)(0x1074db74)));
  /* 10727435 push ecx */
  push32((uint32_t)(ECX));
  /* 10727436 call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x1072743cu);
  /* 1072743c mov edx, dword ptr [0x1074db64] */
  EDX = (r32((uint32_t)(0x1074db64)));
  /* 10727442 push edx */
  push32((uint32_t)(EDX));
  /* 10727443 call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x10727449u);
  /* 10727449 mov eax, dword ptr [0x1074db44] */
  EAX = (r32((uint32_t)(0x1074db44)));
  /* 1072744e push eax */
  push32((uint32_t)(EAX));
  /* 1072744f call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x10727455u);
  /* 10727455 pop ebp */
  EBP = (pop32());
  /* 10727456 ret  */
  ESPCHK(0x10727420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007460 @ 0x10727460 (159 bytes, 47 insns) */
void f_10727460(void) {
  FTRACE(0x10727460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727460 push ebp */
  push32((uint32_t)(EBP));
  /* 10727461 mov ebp, esp */
  EBP = (ESP);
  /* 10727463 push ecx */
  push32((uint32_t)(ECX));
  /* 10727464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072746b jmp 0x10727476 */
  goto L_10727476;
L_1072746d:;
  /* 1072746d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10727476:;
  /* 10727476 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072747a jge 0x107274c9 */
  if ((C.sf==C.of)) goto L_107274c9;
  /* 1072747c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072747f cmp dword ptr [ecx*4 + 0x1074db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1074db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727487 je 0x107274c7 */
  if (C.zf) goto L_107274c7;
  /* 10727489 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072748d je 0x107274c7 */
  if (C.zf) goto L_107274c7;
  /* 1072748f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727493 je 0x107274c7 */
  if (C.zf) goto L_107274c7;
  /* 10727495 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727499 je 0x107274c7 */
  if (C.zf) goto L_107274c7;
  /* 1072749b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072749f je 0x107274c7 */
  if (C.zf) goto L_107274c7;
  /* 107274a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107274a4 mov eax, dword ptr [edx*4 + 0x1074db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1074db40)));
  /* 107274ab push eax */
  push32((uint32_t)(EAX));
  /* 107274ac call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x107274b2u);
  /* 107274b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107274b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107274b7 mov edx, dword ptr [ecx*4 + 0x1074db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1074db40)));
  /* 107274be push edx */
  push32((uint32_t)(EDX));
  /* 107274bf call 0x10724590 */
  push32(0x107274c4u); f_10724590();
  /* 107274c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107274c7:;
  /* 107274c7 jmp 0x1072746d */
  goto L_1072746d;
L_107274c9:;
  /* 107274c9 mov eax, dword ptr [0x1074db64] */
  EAX = (r32((uint32_t)(0x1074db64)));
  /* 107274ce push eax */
  push32((uint32_t)(EAX));
  /* 107274cf call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x107274d5u);
  /* 107274d5 mov ecx, dword ptr [0x1074db74] */
  ECX = (r32((uint32_t)(0x1074db74)));
  /* 107274db push ecx */
  push32((uint32_t)(ECX));
  /* 107274dc call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x107274e2u);
  /* 107274e2 mov edx, dword ptr [0x1074db84] */
  EDX = (r32((uint32_t)(0x1074db84)));
  /* 107274e8 push edx */
  push32((uint32_t)(EDX));
  /* 107274e9 call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x107274efu);
  /* 107274ef mov eax, dword ptr [0x1074db44] */
  EAX = (r32((uint32_t)(0x1074db44)));
  /* 107274f4 push eax */
  push32((uint32_t)(EAX));
  /* 107274f5 call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x107274fbu);
  /* 107274fb mov esp, ebp */
  ESP = (EBP);
  /* 107274fd pop ebp */
  EBP = (pop32());
  /* 107274fe ret  */
  ESPCHK(0x10727460u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x10727500 (151 bytes, 46 insns) */
void f_10727500(void) {
  FTRACE(0x10727500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727500 push ebp */
  push32((uint32_t)(EBP));
  /* 10727501 mov ebp, esp */
  EBP = (ESP);
  /* 10727503 push ecx */
  push32((uint32_t)(ECX));
  /* 10727504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727507 cmp dword ptr [eax*4 + 0x1074db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1074db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072750f jne 0x10727582 */
  if (!C.zf) goto L_10727582;
  /* 10727511 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10727516 push 0x1074af70 */
  push32((uint32_t)(0x1074af70u));
  /* 1072751b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072751d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1072751f call 0x10723b00 */
  push32(0x10727524u); f_10723b00();
  /* 10727524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727527 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072752a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072752e jne 0x1072753a */
  if (!C.zf) goto L_1072753a;
  /* 10727530 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10727532 call 0x10722a70 */
  push32(0x10727537u); f_10722a70();
  /* 10727537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072753a:;
  /* 1072753a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1072753c call 0x10727500 */
  push32(0x10727541u); f_10727500();
  /* 10727541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727544 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727547 cmp dword ptr [ecx*4 + 0x1074db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1074db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072754f jne 0x1072756a */
  if (!C.zf) goto L_1072756a;
  /* 10727551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727554 push edx */
  push32((uint32_t)(EDX));
  /* 10727555 call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x1072755bu);
  /* 1072755b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072755e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727561 mov dword ptr [eax*4 + 0x1074db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1074db40), (ECX));
  /* 10727568 jmp 0x10727578 */
  goto L_10727578;
L_1072756a:;
  /* 1072756a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072756c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072756f push edx */
  push32((uint32_t)(EDX));
  /* 10727570 call 0x10724590 */
  push32(0x10727575u); f_10724590();
  /* 10727575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10727578:;
  /* 10727578 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1072757a call 0x107275a0 */
  push32(0x1072757fu); f_107275a0();
  /* 1072757f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10727582:;
  /* 10727582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727585 mov ecx, dword ptr [eax*4 + 0x1074db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074db40)));
  /* 1072758c push ecx */
  push32((uint32_t)(ECX));
  /* 1072758d call dword ptr [0x1075239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075239c))), 0x10727593u);
  /* 10727593 mov esp, ebp */
  ESP = (EBP);
  /* 10727595 pop ebp */
  EBP = (pop32());
  /* 10727596 ret  */
  ESPCHK(0x10727500u, _esp0);
  ESP += 4; return;
}

/* FUN_100075a0 @ 0x107275a0 (22 bytes, 8 insns) */
void f_107275a0(void) {
  FTRACE(0x107275a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107275a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107275a1 mov ebp, esp */
  EBP = (ESP);
  /* 107275a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107275a6 mov ecx, dword ptr [eax*4 + 0x1074db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1074db40)));
  /* 107275ad push ecx */
  push32((uint32_t)(ECX));
  /* 107275ae call dword ptr [0x1075238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075238c))), 0x107275b4u);
  /* 107275b4 pop ebp */
  EBP = (pop32());
  /* 107275b5 ret  */
  ESPCHK(0x107275a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075c0 @ 0x107275c0 (26 bytes, 10 insns) */
void f_107275c0(void) {
  FTRACE(0x107275c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107275c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107275c1 mov ebp, esp */
  EBP = (ESP);
  /* 107275c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107275c6 push eax */
  push32((uint32_t)(EAX));
  /* 107275c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107275c9 call dword ptr [0x10752390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752390))), 0x107275cfu);
  /* 107275cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 107275d4 call dword ptr [0x10752328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752328))), 0x107275dau);
  /* 107275da pop ebp */
  EBP = (pop32());
  /* 107275db ret  */
  ESPCHK(0x107275c0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x107275e0 (446 bytes, 130 insns) */
void f_107275e0(void) {
  FTRACE(0x107275e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107275e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107275e1 mov ebp, esp */
  EBP = (ESP);
  /* 107275e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107275e6 call 0x10723540 */
  push32(0x107275ebu); f_10723540();
  /* 107275eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107275ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107275f1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 107275f4 push ecx */
  push32((uint32_t)(ECX));
  /* 107275f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107275f8 push edx */
  push32((uint32_t)(EDX));
  /* 107275f9 call 0x107277a0 */
  push32(0x107275feu); f_107277a0();
  /* 107275fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727601 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10727604 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727608 je 0x10727613 */
  if (C.zf) goto L_10727613;
  /* 1072760a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072760d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727611 jne 0x10727622 */
  if (!C.zf) goto L_10727622;
L_10727613:;
  /* 10727613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727616 push ecx */
  push32((uint32_t)(ECX));
  /* 10727617 call dword ptr [0x107522f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f4))), 0x1072761du);
  /* 1072761d jmp 0x1072779a */
  goto L_1072779a;
L_10727622:;
  /* 10727622 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727625 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727629 jne 0x1072763f */
  if (!C.zf) goto L_1072763f;
  /* 1072762b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072762e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10727635 mov eax, 1 */
  EAX = (0x1u);
  /* 1072763a jmp 0x1072779a */
  goto L_1072779a;
L_1072763f:;
  /* 1072763f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727642 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727646 jne 0x10727650 */
  if (!C.zf) goto L_10727650;
  /* 10727648 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072764b jmp 0x1072779a */
  goto L_1072779a;
L_10727650:;
  /* 10727650 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727653 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10727656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10727659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072765c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1072765f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10727662 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727668 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1072766b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072766e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727672 jne 0x10727777 */
  if (!C.zf) goto L_10727777;
  /* 10727678 mov eax, dword ptr [0x1074dc78] */
  EAX = (r32((uint32_t)(0x1074dc78)));
  /* 1072767d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10727680 jmp 0x1072768b */
  goto L_1072768b;
L_10727682:;
  /* 10727682 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10727685 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727688 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1072768b:;
  /* 1072768b mov edx, dword ptr [0x1074dc78] */
  EDX = (r32((uint32_t)(0x1074dc78)));
  /* 10727691 add edx, dword ptr [0x1074dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1074dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727697 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072769a jge 0x107276b2 */
  if ((C.sf==C.of)) goto L_107276b2;
  /* 1072769c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072769f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107276a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107276a5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107276a8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 107276b0 jmp 0x10727682 */
  goto L_10727682;
L_107276b2:;
  /* 107276b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107276b5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107276b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107276bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107276be cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107276c4 jne 0x107276d5 */
  if (!C.zf) goto L_107276d5;
  /* 107276c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107276c9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 107276d0 jmp 0x1072775d */
  goto L_1072775d;
L_107276d5:;
  /* 107276d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107276d8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107276de jne 0x107276ec */
  if (!C.zf) goto L_107276ec;
  /* 107276e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107276e3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 107276ea jmp 0x1072775d */
  goto L_1072775d;
L_107276ec:;
  /* 107276ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107276ef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107276f5 jne 0x10727703 */
  if (!C.zf) goto L_10727703;
  /* 107276f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107276fa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10727701 jmp 0x1072775d */
  goto L_1072775d;
L_10727703:;
  /* 10727703 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727706 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072770c jne 0x1072771a */
  if (!C.zf) goto L_1072771a;
  /* 1072770e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727711 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10727718 jmp 0x1072775d */
  goto L_1072775d;
L_1072771a:;
  /* 1072771a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072771d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727723 jne 0x10727731 */
  if (!C.zf) goto L_10727731;
  /* 10727725 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727728 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1072772f jmp 0x1072775d */
  goto L_1072775d;
L_10727731:;
  /* 10727731 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727734 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072773a jne 0x10727748 */
  if (!C.zf) goto L_10727748;
  /* 1072773c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072773f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10727746 jmp 0x1072775d */
  goto L_1072775d;
L_10727748:;
  /* 10727748 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072774b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727751 jne 0x1072775d */
  if (!C.zf) goto L_1072775d;
  /* 10727753 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727756 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1072775d:;
  /* 1072775d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727760 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10727763 push edx */
  push32((uint32_t)(EDX));
  /* 10727764 push 8 */
  push32((uint32_t)(0x8u));
  /* 10727766 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10727769u);
  /* 10727769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072776c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072776f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727772 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10727775 jmp 0x1072778e */
  goto L_1072778e;
L_10727777:;
  /* 10727777 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072777a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10727781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727784 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10727787 push ecx */
  push32((uint32_t)(ECX));
  /* 10727788 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1072778bu);
  /* 1072778b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072778e:;
  /* 1072778e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727791 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10727794 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10727797 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1072779a:;
  /* 1072779a mov esp, ebp */
  ESP = (EBP);
  /* 1072779c pop ebp */
  EBP = (pop32());
  /* 1072779d ret  */
  ESPCHK(0x107275e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x107277a0 (89 bytes, 35 insns) */
void f_107277a0(void) {
  FTRACE(0x107277a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107277a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107277a1 mov ebp, esp */
  EBP = (ESP);
  /* 107277a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107277a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107277a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107277aa:;
  /* 107277aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107277ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107277af cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107277b2 je 0x107277d2 */
  if (C.zf) goto L_107277d2;
  /* 107277b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107277b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107277ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107277bd mov ecx, dword ptr [0x1074dc84] */
  ECX = (r32((uint32_t)(0x1074dc84)));
  /* 107277c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107277c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107277c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107277cb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107277ce jae 0x107277d2 */
  if (!C.cf) goto L_107277d2;
  /* 107277d0 jmp 0x107277aa */
  goto L_107277aa;
L_107277d2:;
  /* 107277d2 mov eax, dword ptr [0x1074dc84] */
  EAX = (r32((uint32_t)(0x1074dc84)));
  /* 107277d7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107277da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107277dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107277df cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107277e2 jae 0x107277ee */
  if (!C.cf) goto L_107277ee;
  /* 107277e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107277e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107277e9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107277ec je 0x107277f2 */
  if (C.zf) goto L_107277f2;
L_107277ee:;
  /* 107277ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107277f0 jmp 0x107277f5 */
  goto L_107277f5;
L_107277f2:;
  /* 107277f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107277f5:;
  /* 107277f5 mov esp, ebp */
  ESP = (EBP);
  /* 107277f7 pop ebp */
  EBP = (pop32());
  /* 107277f8 ret  */
  ESPCHK(0x107277a0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10727800 (48 bytes, 17 insns) */
void f_10727800(void) {
  FTRACE(0x10727800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727800 push ebp */
  push32((uint32_t)(EBP));
  /* 10727801 mov ebp, esp */
  EBP = (ESP);
  /* 10727803 push ecx */
  push32((uint32_t)(ECX));
  /* 10727804 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727806 call 0x10727500 */
  push32(0x1072780bu); f_10727500();
  /* 1072780b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072780e mov eax, dword ptr [0x1074f6ec] */
  EAX = (r32((uint32_t)(0x1074f6ec)));
  /* 10727813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10727816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727819 mov dword ptr [0x1074f6ec], ecx */
  w32((uint32_t)(0x1074f6ec), (ECX));
  /* 1072781f push 9 */
  push32((uint32_t)(0x9u));
  /* 10727821 call 0x107275a0 */
  push32(0x10727826u); f_107275a0();
  /* 10727826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072782c mov esp, ebp */
  ESP = (EBP);
  /* 1072782e pop ebp */
  EBP = (pop32());
  /* 1072782f ret  */
  ESPCHK(0x10727800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007830 @ 0x10727830 (10 bytes, 5 insns) */
void f_10727830(void) {
  FTRACE(0x10727830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727830 push ebp */
  push32((uint32_t)(EBP));
  /* 10727831 mov ebp, esp */
  EBP = (ESP);
  /* 10727833 mov eax, dword ptr [0x1074f6ec] */
  EAX = (r32((uint32_t)(0x1074f6ec)));
  /* 10727838 pop ebp */
  EBP = (pop32());
  /* 10727839 ret  */
  ESPCHK(0x10727830u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10727840 (45 bytes, 19 insns) */
void f_10727840(void) {
  FTRACE(0x10727840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727840 push ebp */
  push32((uint32_t)(EBP));
  /* 10727841 mov ebp, esp */
  EBP = (ESP);
  /* 10727843 push ecx */
  push32((uint32_t)(ECX));
  /* 10727844 mov eax, dword ptr [0x1074f6ec] */
  EAX = (r32((uint32_t)(0x1074f6ec)));
  /* 10727849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072784c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727850 je 0x10727860 */
  if (C.zf) goto L_10727860;
  /* 10727852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727855 push ecx */
  push32((uint32_t)(ECX));
  /* 10727856 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10727859u);
  /* 10727859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072785c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072785e jne 0x10727864 */
  if (!C.zf) goto L_10727864;
L_10727860:;
  /* 10727860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10727862 jmp 0x10727869 */
  goto L_10727869;
L_10727864:;
  /* 10727864 mov eax, 1 */
  EAX = (0x1u);
L_10727869:;
  /* 10727869 mov esp, ebp */
  ESP = (EBP);
  /* 1072786b pop ebp */
  EBP = (pop32());
  /* 1072786c ret  */
  ESPCHK(0x10727840u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10727870 (88 bytes, 40 insns) */
void f_10727870(void) {
  FTRACE(0x10727870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727870 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10727874 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10727878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072787a je 0x107278c3 */
  if (C.zf) goto L_107278c3;
  /* 1072787c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072787e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10727882 push edi */
  push32((uint32_t)(EDI));
  /* 10727883 mov edi, ecx */
  EDI = (ECX);
  /* 10727885 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727888 jb 0x107278b7 */
  if (C.cf) goto L_107278b7;
  /* 1072788a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072788c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1072788f je 0x10727899 */
  if (C.zf) goto L_10727899;
  /* 10727891 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10727893:;
  /* 10727893 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10727895 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10727896 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10727897 jne 0x10727893 */
  if (!C.zf) goto L_10727893;
L_10727899:;
  /* 10727899 mov ecx, eax */
  ECX = (EAX);
  /* 1072789b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1072789e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107278a0 mov ecx, eax */
  ECX = (EAX);
  /* 107278a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107278a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107278a7 mov ecx, edx */
  ECX = (EDX);
  /* 107278a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107278ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107278af je 0x107278b7 */
  if (C.zf) goto L_107278b7;
  /* 107278b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107278b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107278b5 je 0x107278bd */
  if (C.zf) goto L_107278bd;
L_107278b7:;
  /* 107278b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107278b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107278ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 107278bb jne 0x107278b7 */
  if (!C.zf) goto L_107278b7;
L_107278bd:;
  /* 107278bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107278c1 pop edi */
  EDI = (pop32());
  /* 107278c2 ret  */
  ESPCHK(0x10727870u, _esp0);
  ESP += 4; return;
L_107278c3:;
  /* 107278c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 107278c7 ret  */
  ESPCHK(0x10727870u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x107278d0 (23 bytes, 10 insns) */
void f_107278d0(void) {
  FTRACE(0x107278d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107278d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107278d1 mov ebp, esp */
  EBP = (ESP);
  /* 107278d3 mov eax, dword ptr [0x1074f6e8] */
  EAX = (r32((uint32_t)(0x1074f6e8)));
  /* 107278d8 push eax */
  push32((uint32_t)(EAX));
  /* 107278d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107278dc push ecx */
  push32((uint32_t)(ECX));
  /* 107278dd call 0x107278f0 */
  push32(0x107278e2u); f_107278f0();
  /* 107278e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107278e5 pop ebp */
  EBP = (pop32());
  /* 107278e6 ret  */
  ESPCHK(0x107278d0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x107278f0 (87 bytes, 34 insns) */
void f_107278f0(void) {
  FTRACE(0x107278f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107278f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107278f1 mov ebp, esp */
  EBP = (ESP);
  /* 107278f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107278f4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107278f8 jbe 0x107278fe */
  if ((C.cf||C.zf)) goto L_107278fe;
  /* 107278fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107278fc jmp 0x10727943 */
  goto L_10727943;
L_107278fe:;
  /* 107278fe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727902 ja 0x10727915 */
  if ((!C.cf&&!C.zf)) goto L_10727915;
  /* 10727904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727907 push eax */
  push32((uint32_t)(EAX));
  /* 10727908 call 0x10727950 */
  push32(0x1072790du); f_10727950();
  /* 1072790d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10727913 jmp 0x1072791c */
  goto L_1072791c;
L_10727915:;
  /* 10727915 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1072791c:;
  /* 1072791c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727920 jne 0x10727928 */
  if (!C.zf) goto L_10727928;
  /* 10727922 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727926 jne 0x1072792d */
  if (!C.zf) goto L_1072792d;
L_10727928:;
  /* 10727928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072792b jmp 0x10727943 */
  goto L_10727943;
L_1072792d:;
  /* 1072792d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727930 push ecx */
  push32((uint32_t)(ECX));
  /* 10727931 call 0x10727840 */
  push32(0x10727936u); f_10727840();
  /* 10727936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072793b jne 0x10727941 */
  if (!C.zf) goto L_10727941;
  /* 1072793d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072793f jmp 0x10727943 */
  goto L_10727943;
L_10727941:;
  /* 10727941 jmp 0x107278fe */
  goto L_107278fe;
L_10727943:;
  /* 10727943 mov esp, ebp */
  ESP = (EBP);
  /* 10727945 pop ebp */
  EBP = (pop32());
  /* 10727946 ret  */
  ESPCHK(0x107278f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x10727950 (109 bytes, 37 insns) */
void f_10727950(void) {
  FTRACE(0x10727950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727950 push ebp */
  push32((uint32_t)(EBP));
  /* 10727951 mov ebp, esp */
  EBP = (ESP);
  /* 10727953 push ecx */
  push32((uint32_t)(ECX));
  /* 10727954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727957 cmp eax, dword ptr [0x1074dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072795d ja 0x1072798d */
  if ((!C.cf&&!C.zf)) goto L_1072798d;
  /* 1072795f push 9 */
  push32((uint32_t)(0x9u));
  /* 10727961 call 0x10727500 */
  push32(0x10727966u); f_10727500();
  /* 10727966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072796c push ecx */
  push32((uint32_t)(ECX));
  /* 1072796d call 0x10728490 */
  push32(0x10727972u); f_10728490();
  /* 10727972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10727978 push 9 */
  push32((uint32_t)(0x9u));
  /* 1072797a call 0x107275a0 */
  push32(0x1072797fu); f_107275a0();
  /* 1072797f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727986 je 0x1072798d */
  if (C.zf) goto L_1072798d;
  /* 10727988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072798b jmp 0x107279b9 */
  goto L_107279b9;
L_1072798d:;
  /* 1072798d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727991 jne 0x1072799a */
  if (!C.zf) goto L_1072799a;
  /* 10727993 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1072799a:;
  /* 1072799a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072799d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107279a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107279a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107279a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107279a9 push eax */
  push32((uint32_t)(EAX));
  /* 107279aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107279ac mov ecx, dword ptr [0x10750eac] */
  ECX = (r32((uint32_t)(0x10750eac)));
  /* 107279b2 push ecx */
  push32((uint32_t)(ECX));
  /* 107279b3 call dword ptr [0x107522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f0))), 0x107279b9u);
L_107279b9:;
  /* 107279b9 mov esp, ebp */
  ESP = (EBP);
  /* 107279bb pop ebp */
  EBP = (pop32());
  /* 107279bc ret  */
  ESPCHK(0x10727950u, _esp0);
  ESP += 4; return;
}

/* FUN_100079c0 @ 0x107279c0 (10 bytes, 5 insns) */
void f_107279c0(void) {
  FTRACE(0x107279c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107279c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107279c1 mov ebp, esp */
  EBP = (ESP);
  /* 107279c3 mov eax, 1 */
  EAX = (0x1u);
  /* 107279c8 pop ebp */
  EBP = (pop32());
  /* 107279c9 ret  */
  ESPCHK(0x107279c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x107279d0 (173 bytes, 59 insns) */
void f_107279d0(void) {
  FTRACE(0x107279d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107279d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107279d1 mov ebp, esp */
  EBP = (ESP);
  /* 107279d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107279d6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107279da jbe 0x107279e3 */
  if ((C.cf||C.zf)) goto L_107279e3;
  /* 107279dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107279de jmp 0x10727a79 */
  goto L_10727a79;
L_107279e3:;
  /* 107279e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 107279e5 call 0x10727500 */
  push32(0x107279eau); f_10727500();
  /* 107279ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107279ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107279f0 push eax */
  push32((uint32_t)(EAX));
  /* 107279f1 call 0x10727e00 */
  push32(0x107279f6u); f_10727e00();
  /* 107279f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107279f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107279fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727a00 je 0x10727a41 */
  if (C.zf) goto L_10727a41;
  /* 10727a02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10727a09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727a0c cmp ecx, dword ptr [0x1074dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1074dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727a12 ja 0x10727a32 */
  if ((!C.cf&&!C.zf)) goto L_10727a32;
  /* 10727a14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727a17 push edx */
  push32((uint32_t)(EDX));
  /* 10727a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727a1b push eax */
  push32((uint32_t)(EAX));
  /* 10727a1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727a1f push ecx */
  push32((uint32_t)(ECX));
  /* 10727a20 call 0x10728cd0 */
  push32(0x10727a25u); f_10728cd0();
  /* 10727a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10727a2a je 0x10727a32 */
  if (C.zf) goto L_10727a32;
  /* 10727a2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727a2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10727a32:;
  /* 10727a32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727a34 call 0x107275a0 */
  push32(0x10727a39u); f_107275a0();
  /* 10727a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727a3f jmp 0x10727a79 */
  goto L_10727a79;
L_10727a41:;
  /* 10727a41 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727a43 call 0x107275a0 */
  push32(0x10727a48u); f_107275a0();
  /* 10727a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727a4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727a4f jne 0x10727a58 */
  if (!C.zf) goto L_10727a58;
  /* 10727a51 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10727a58:;
  /* 10727a58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727a5b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727a5e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10727a60 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10727a63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727a66 push ecx */
  push32((uint32_t)(ECX));
  /* 10727a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727a6a push edx */
  push32((uint32_t)(EDX));
  /* 10727a6b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10727a6d mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 10727a72 push eax */
  push32((uint32_t)(EAX));
  /* 10727a73 call dword ptr [0x107522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f8))), 0x10727a79u);
L_10727a79:;
  /* 10727a79 mov esp, ebp */
  ESP = (EBP);
  /* 10727a7b pop ebp */
  EBP = (pop32());
  /* 10727a7c ret  */
  ESPCHK(0x107279d0u, _esp0);
  ESP += 4; return;
}

