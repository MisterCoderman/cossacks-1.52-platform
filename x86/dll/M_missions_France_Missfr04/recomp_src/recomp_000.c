#include "recomp.h"

/* thunk_FUN_10002060 @ 0x10661005 (5 bytes, 1 insns) */
void f_10661005(void) {
  FTRACE(0x10661005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10661005 jmp 0x10662060 */
  f_10662060(); return;
}

/* OnInit @ 0x1066100a (5 bytes, 1 insns) */
void f_1066100a(void) {
  FTRACE(0x1066100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066100a jmp 0x106610a0 */
  f_106610a0(); return;
}

/* thunk_FUN_100020b0 @ 0x1066100f (5 bytes, 1 insns) */
void f_1066100f(void) {
  FTRACE(0x1066100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1066100f jmp 0x106620b0 */
  f_106620b0(); return;
}

/* thunk_FUN_10001040 @ 0x10661014 (5 bytes, 1 insns) */
void f_10661014(void) {
  FTRACE(0x10661014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10661014 jmp 0x10661040 */
  f_10661040(); return;
}

/* ProcessScenary @ 0x10661019 (5 bytes, 1 insns) */
void f_10661019(void) {
  FTRACE(0x10661019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10661019 jmp 0x10661370 */
  f_10661370(); return;
}

/* FUN_10001040 @ 0x10661040 (67 bytes, 26 insns) */
void f_10661040(void) {
  FTRACE(0x10661040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10661040 push ebp */
  push32((uint32_t)(EBP));
  /* 10661041 mov ebp, esp */
  EBP = (ESP);
  /* 10661043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10661046 push ebx */
  push32((uint32_t)(EBX));
  /* 10661047 push esi */
  push32((uint32_t)(ESI));
  /* 10661048 push edi */
  push32((uint32_t)(EDI));
  /* 10661049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1066104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10661051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10661056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10661058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661062 je 0x10661066 */
  if (C.zf) goto L_10661066;
  /* 10661064 jmp 0x1066106b */
  goto L_1066106b;
L_10661066:;
  /* 10661066 call 0x1066100a */
  push32(0x1066106bu); f_1066100a();
L_1066106b:;
  /* 1066106b mov eax, 1 */
  EAX = (0x1u);
  /* 10661070 pop edi */
  EDI = (pop32());
  /* 10661071 pop esi */
  ESI = (pop32());
  /* 10661072 pop ebx */
  EBX = (pop32());
  /* 10661073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661078 call 0x10662190 */
  push32(0x1066107du); f_10662190();
  /* 1066107d mov esp, ebp */
  ESP = (EBP);
  /* 1066107f pop ebp */
  EBP = (pop32());
  /* 10661080 ret 0xc */
  ESPCHK(0x10661040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x106610a0 (571 bytes, 159 insns) */
void f_106610a0(void) {
  FTRACE(0x106610a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106610a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106610a1 mov ebp, esp */
  EBP = (ESP);
  /* 106610a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106610a6 push ebx */
  push32((uint32_t)(EBX));
  /* 106610a7 push esi */
  push32((uint32_t)(ESI));
  /* 106610a8 push edi */
  push32((uint32_t)(EDI));
  /* 106610a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106610ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106610b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106610b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106610b8 mov esi, esp */
  ESI = (ESP);
  /* 106610ba push 0x1068a0d8 */
  push32((uint32_t)(0x1068a0d8u));
  /* 106610bf push 0x1068f410 */
  push32((uint32_t)(0x1068f410u));
  /* 106610c4 call dword ptr [0x10691418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691418))), 0x106610cau);
  /* 106610ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106610cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106610cf call 0x10662190 */
  push32(0x106610d4u); f_10662190();
  /* 106610d4 mov esi, esp */
  ESI = (ESP);
  /* 106610d6 push 0x1068a0d0 */
  push32((uint32_t)(0x1068a0d0u));
  /* 106610db push 0x1068f418 */
  push32((uint32_t)(0x1068f418u));
  /* 106610e0 call dword ptr [0x10691418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691418))), 0x106610e6u);
  /* 106610e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106610e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106610eb call 0x10662190 */
  push32(0x106610f0u); f_10662190();
  /* 106610f0 mov esi, esp */
  ESI = (ESP);
  /* 106610f2 push 0x1068a0c8 */
  push32((uint32_t)(0x1068a0c8u));
  /* 106610f7 push 0x1068f420 */
  push32((uint32_t)(0x1068f420u));
  /* 106610fc call dword ptr [0x10691418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691418))), 0x10661102u);
  /* 10661102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661107 call 0x10662190 */
  push32(0x1066110cu); f_10662190();
  /* 1066110c mov esi, esp */
  ESI = (ESP);
  /* 1066110e push 0x1068a0c0 */
  push32((uint32_t)(0x1068a0c0u));
  /* 10661113 push 0x1068f428 */
  push32((uint32_t)(0x1068f428u));
  /* 10661118 call dword ptr [0x10691418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691418))), 0x1066111eu);
  /* 1066111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661123 call 0x10662190 */
  push32(0x10661128u); f_10662190();
  /* 10661128 mov esi, esp */
  ESI = (ESP);
  /* 1066112a push 0x1068a0b8 */
  push32((uint32_t)(0x1068a0b8u));
  /* 1066112f push 0x1068f3f0 */
  push32((uint32_t)(0x1068f3f0u));
  /* 10661134 call dword ptr [0x10691410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691410))), 0x1066113au);
  /* 1066113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066113f call 0x10662190 */
  push32(0x10661144u); f_10662190();
  /* 10661144 mov esi, esp */
  ESI = (ESP);
  /* 10661146 push 0x1068a0ac */
  push32((uint32_t)(0x1068a0acu));
  /* 1066114b push 0x1068f440 */
  push32((uint32_t)(0x1068f440u));
  /* 10661150 call dword ptr [0x10691410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691410))), 0x10661156u);
  /* 10661156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066115b call 0x10662190 */
  push32(0x10661160u); f_10662190();
  /* 10661160 mov esi, esp */
  ESI = (ESP);
  /* 10661162 push 0x1068a0a4 */
  push32((uint32_t)(0x1068a0a4u));
  /* 10661167 push 0x1068f400 */
  push32((uint32_t)(0x1068f400u));
  /* 1066116c call dword ptr [0x10691410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691410))), 0x10661172u);
  /* 10661172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661177 call 0x10662190 */
  push32(0x1066117cu); f_10662190();
  /* 1066117c mov esi, esp */
  ESI = (ESP);
  /* 1066117e push 0x1068a098 */
  push32((uint32_t)(0x1068a098u));
  /* 10661183 push 0x1068f438 */
  push32((uint32_t)(0x1068f438u));
  /* 10661188 call dword ptr [0x10691410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691410))), 0x1066118eu);
  /* 1066118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661193 call 0x10662190 */
  push32(0x10661198u); f_10662190();
  /* 10661198 mov esi, esp */
  ESI = (ESP);
  /* 1066119a push 0x1068a090 */
  push32((uint32_t)(0x1068a090u));
  /* 1066119f push 0x1068f3f8 */
  push32((uint32_t)(0x1068f3f8u));
  /* 106611a4 call dword ptr [0x10691410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691410))), 0x106611aau);
  /* 106611aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106611ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106611af call 0x10662190 */
  push32(0x106611b4u); f_10662190();
  /* 106611b4 mov esi, esp */
  ESI = (ESP);
  /* 106611b6 push 0x1068a088 */
  push32((uint32_t)(0x1068a088u));
  /* 106611bb push 0x1068f408 */
  push32((uint32_t)(0x1068f408u));
  /* 106611c0 call dword ptr [0x10691410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691410))), 0x106611c6u);
  /* 106611c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106611c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106611cb call 0x10662190 */
  push32(0x106611d0u); f_10662190();
  /* 106611d0 mov esi, esp */
  ESI = (ESP);
  /* 106611d2 push 0x1068a070 */
  push32((uint32_t)(0x1068a070u));
  /* 106611d7 push 0x1068f430 */
  push32((uint32_t)(0x1068f430u));
  /* 106611dc call dword ptr [0x10691420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691420))), 0x106611e2u);
  /* 106611e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106611e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106611e7 call 0x10662190 */
  push32(0x106611ecu); f_10662190();
  /* 106611ec mov esi, esp */
  ESI = (ESP);
  /* 106611ee push 0x1068a054 */
  push32((uint32_t)(0x1068a054u));
  /* 106611f3 push 0x1068f3e0 */
  push32((uint32_t)(0x1068f3e0u));
  /* 106611f8 call dword ptr [0x10691420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691420))), 0x106611feu);
  /* 106611fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661203 call 0x10662190 */
  push32(0x10661208u); f_10662190();
  /* 10661208 mov esi, esp */
  ESI = (ESP);
  /* 1066120a push 0x1068a03c */
  push32((uint32_t)(0x1068a03cu));
  /* 1066120f push 0x1068f3e8 */
  push32((uint32_t)(0x1068f3e8u));
  /* 10661214 call dword ptr [0x10691420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691420))), 0x1066121au);
  /* 1066121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066121f call 0x10662190 */
  push32(0x10661224u); f_10662190();
  /* 10661224 mov esi, esp */
  ESI = (ESP);
  /* 10661226 push 0x89 */
  push32((uint32_t)(0x89u));
  /* 1066122b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066122d call dword ptr [0x10691424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691424))), 0x10661233u);
  /* 10661233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661238 call 0x10662190 */
  push32(0x1066123du); f_10662190();
  /* 1066123d mov esi, esp */
  ESI = (ESP);
  /* 1066123f push 6 */
  push32((uint32_t)(0x6u));
  /* 10661241 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661243 call dword ptr [0x10691424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691424))), 0x10661249u);
  /* 10661249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066124c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066124e call 0x10662190 */
  push32(0x10661253u); f_10662190();
  /* 10661253 mov esi, esp */
  ESI = (ESP);
  /* 10661255 push 6 */
  push32((uint32_t)(0x6u));
  /* 10661257 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661259 call dword ptr [0x10691424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691424))), 0x1066125fu);
  /* 1066125f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661264 call 0x10662190 */
  push32(0x10661269u); f_10662190();
  /* 10661269 mov esi, esp */
  ESI = (ESP);
  /* 1066126b push 9 */
  push32((uint32_t)(0x9u));
  /* 1066126d push 3 */
  push32((uint32_t)(0x3u));
  /* 1066126f call dword ptr [0x10691424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691424))), 0x10661275u);
  /* 10661275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661278 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066127a call 0x10662190 */
  push32(0x1066127fu); f_10662190();
  /* 1066127f mov esi, esp */
  ESI = (ESP);
  /* 10661281 push 0x1068a030 */
  push32((uint32_t)(0x1068a030u));
  /* 10661286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661288 call dword ptr [0x1069141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069141c))), 0x1066128eu);
  /* 1066128e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661293 call 0x10662190 */
  push32(0x10661298u); f_10662190();
  /* 10661298 mov esi, esp */
  ESI = (ESP);
  /* 1066129a push 0x1068a028 */
  push32((uint32_t)(0x1068a028u));
  /* 1066129f push 2 */
  push32((uint32_t)(0x2u));
  /* 106612a1 call dword ptr [0x1069141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069141c))), 0x106612a7u);
  /* 106612a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106612aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106612ac call 0x10662190 */
  push32(0x106612b1u); f_10662190();
  /* 106612b1 mov esi, esp */
  ESI = (ESP);
  /* 106612b3 push 0x1068a01c */
  push32((uint32_t)(0x1068a01cu));
  /* 106612b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 106612ba call dword ptr [0x1069141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069141c))), 0x106612c0u);
  /* 106612c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106612c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106612c5 call 0x10662190 */
  push32(0x106612cau); f_10662190();
  /* 106612ca pop edi */
  EDI = (pop32());
  /* 106612cb pop esi */
  ESI = (pop32());
  /* 106612cc pop ebx */
  EBX = (pop32());
  /* 106612cd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106612d0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106612d2 call 0x10662190 */
  push32(0x106612d7u); f_10662190();
  /* 106612d7 mov esp, ebp */
  ESP = (EBP);
  /* 106612d9 pop ebp */
  EBP = (pop32());
  /* 106612da ret  */
  ESPCHK(0x106610a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001370 @ 0x10661370 (2642 bytes, 786 insns) */
void f_10661370(void) {
  FTRACE(0x10661370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10661370 push ebp */
  push32((uint32_t)(EBP));
  /* 10661371 mov ebp, esp */
  EBP = (ESP);
  /* 10661373 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10661376 push ebx */
  push32((uint32_t)(EBX));
  /* 10661377 push esi */
  push32((uint32_t)(ESI));
  /* 10661378 push edi */
  push32((uint32_t)(EDI));
  /* 10661379 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1066137c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10661381 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10661386 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10661388 mov esi, esp */
  ESI = (ESP);
  /* 1066138a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066138c call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661392u);
  /* 10661392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661397 call 0x10662190 */
  push32(0x1066139cu); f_10662190();
  /* 1066139c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106613a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106613a3 je 0x10661648 */
  if (C.zf) goto L_10661648;
  /* 106613a9 mov esi, esp */
  ESI = (ESP);
  /* 106613ab push 0 */
  push32((uint32_t)(0x0u));
  /* 106613ad push 1 */
  push32((uint32_t)(0x1u));
  /* 106613af call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x106613b5u);
  /* 106613b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106613b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106613ba call 0x10662190 */
  push32(0x106613bfu); f_10662190();
  /* 106613bf mov esi, esp */
  ESI = (ESP);
  /* 106613c1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106613c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 106613c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106613ca call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106613d0u);
  /* 106613d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106613d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106613d5 call 0x10662190 */
  push32(0x106613dau); f_10662190();
  /* 106613da mov esi, esp */
  ESI = (ESP);
  /* 106613dc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106613e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106613e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106613e5 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106613ebu);
  /* 106613eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106613ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106613f0 call 0x10662190 */
  push32(0x106613f5u); f_10662190();
  /* 106613f5 mov esi, esp */
  ESI = (ESP);
  /* 106613f7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106613fc push 0 */
  push32((uint32_t)(0x0u));
  /* 106613fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10661400 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661406u);
  /* 10661406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066140b call 0x10662190 */
  push32(0x10661410u); f_10662190();
  /* 10661410 mov esi, esp */
  ESI = (ESP);
  /* 10661412 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661417 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066141b call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661421u);
  /* 10661421 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661426 call 0x10662190 */
  push32(0x1066142bu); f_10662190();
  /* 1066142b mov esi, esp */
  ESI = (ESP);
  /* 1066142d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661432 push 5 */
  push32((uint32_t)(0x5u));
  /* 10661434 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661436 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x1066143cu);
  /* 1066143c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066143f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661441 call 0x10662190 */
  push32(0x10661446u); f_10662190();
  /* 10661446 mov esi, esp */
  ESI = (ESP);
  /* 10661448 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1066144d push 4 */
  push32((uint32_t)(0x4u));
  /* 1066144f push 0 */
  push32((uint32_t)(0x0u));
  /* 10661451 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661457u);
  /* 10661457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066145a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066145c call 0x10662190 */
  push32(0x10661461u); f_10662190();
  /* 10661461 mov esi, esp */
  ESI = (ESP);
  /* 10661463 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1066146a push 1 */
  push32((uint32_t)(0x1u));
  /* 1066146c call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661472u);
  /* 10661472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661477 call 0x10662190 */
  push32(0x1066147cu); f_10662190();
  /* 1066147c mov esi, esp */
  ESI = (ESP);
  /* 1066147e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10661483 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661487 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x1066148du);
  /* 1066148d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661492 call 0x10662190 */
  push32(0x10661497u); f_10662190();
  /* 10661497 mov esi, esp */
  ESI = (ESP);
  /* 10661499 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1066149e push 0 */
  push32((uint32_t)(0x0u));
  /* 106614a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106614a2 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106614a8u);
  /* 106614a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106614ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106614ad call 0x10662190 */
  push32(0x106614b2u); f_10662190();
  /* 106614b2 mov esi, esp */
  ESI = (ESP);
  /* 106614b4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106614b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106614bb push 1 */
  push32((uint32_t)(0x1u));
  /* 106614bd call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106614c3u);
  /* 106614c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106614c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106614c8 call 0x10662190 */
  push32(0x106614cdu); f_10662190();
  /* 106614cd mov esi, esp */
  ESI = (ESP);
  /* 106614cf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106614d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 106614d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106614d8 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106614deu);
  /* 106614de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106614e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106614e3 call 0x10662190 */
  push32(0x106614e8u); f_10662190();
  /* 106614e8 mov esi, esp */
  ESI = (ESP);
  /* 106614ea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106614ef push 4 */
  push32((uint32_t)(0x4u));
  /* 106614f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106614f3 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106614f9u);
  /* 106614f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106614fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106614fe call 0x10662190 */
  push32(0x10661503u); f_10662190();
  /* 10661503 mov esi, esp */
  ESI = (ESP);
  /* 10661505 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1066150a push 3 */
  push32((uint32_t)(0x3u));
  /* 1066150c push 2 */
  push32((uint32_t)(0x2u));
  /* 1066150e call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661514u);
  /* 10661514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661519 call 0x10662190 */
  push32(0x1066151eu); f_10662190();
  /* 1066151e mov esi, esp */
  ESI = (ESP);
  /* 10661520 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10661525 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661529 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x1066152fu);
  /* 1066152f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661534 call 0x10662190 */
  push32(0x10661539u); f_10662190();
  /* 10661539 mov esi, esp */
  ESI = (ESP);
  /* 1066153b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661540 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661542 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661544 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x1066154au);
  /* 1066154a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066154d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066154f call 0x10662190 */
  push32(0x10661554u); f_10662190();
  /* 10661554 mov esi, esp */
  ESI = (ESP);
  /* 10661556 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1066155b push 2 */
  push32((uint32_t)(0x2u));
  /* 1066155d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066155f call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661565u);
  /* 10661565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661568 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066156a call 0x10662190 */
  push32(0x1066156fu); f_10662190();
  /* 1066156f mov esi, esp */
  ESI = (ESP);
  /* 10661571 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661576 push 5 */
  push32((uint32_t)(0x5u));
  /* 10661578 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066157a call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x10661580u);
  /* 10661580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661585 call 0x10662190 */
  push32(0x1066158au); f_10662190();
  /* 1066158a mov esi, esp */
  ESI = (ESP);
  /* 1066158c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661591 push 4 */
  push32((uint32_t)(0x4u));
  /* 10661593 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661595 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x1066159bu);
  /* 1066159b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066159e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106615a0 call 0x10662190 */
  push32(0x106615a5u); f_10662190();
  /* 106615a5 mov esi, esp */
  ESI = (ESP);
  /* 106615a7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 106615ac push 3 */
  push32((uint32_t)(0x3u));
  /* 106615ae push 3 */
  push32((uint32_t)(0x3u));
  /* 106615b0 call dword ptr [0x106913e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e8))), 0x106615b6u);
  /* 106615b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106615b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106615bb call 0x10662190 */
  push32(0x106615c0u); f_10662190();
  /* 106615c0 mov esi, esp */
  ESI = (ESP);
  /* 106615c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106615c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106615c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106615c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106615ca push 0x1068a134 */
  push32((uint32_t)(0x1068a134u));
  /* 106615cf push 1 */
  push32((uint32_t)(0x1u));
  /* 106615d1 call dword ptr [0x106913e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e0))), 0x106615d7u);
  /* 106615d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106615da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106615dc call 0x10662190 */
  push32(0x106615e1u); f_10662190();
  /* 106615e1 mov esi, esp */
  ESI = (ESP);
  /* 106615e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106615e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106615e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106615e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106615eb push 0x1068a128 */
  push32((uint32_t)(0x1068a128u));
  /* 106615f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106615f2 call dword ptr [0x106913e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e0))), 0x106615f8u);
  /* 106615f8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106615fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106615fd call 0x10662190 */
  push32(0x10661602u); f_10662190();
  /* 10661602 mov esi, esp */
  ESI = (ESP);
  /* 10661604 push 0x1068a120 */
  push32((uint32_t)(0x1068a120u));
  /* 10661609 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x1066160fu);
  /* 1066160f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661614 call 0x10662190 */
  push32(0x10661619u); f_10662190();
  /* 10661619 mov esi, esp */
  ESI = (ESP);
  /* 1066161b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10661620 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661622 call dword ptr [0x106913f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f4))), 0x10661628u);
  /* 10661628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066162b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066162d call 0x10662190 */
  push32(0x10661632u); f_10662190();
  /* 10661632 mov esi, esp */
  ESI = (ESP);
  /* 10661634 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10661636 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661638 call dword ptr [0x106913f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f4))), 0x1066163eu);
  /* 1066163e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661643 call 0x10662190 */
  push32(0x10661648u); f_10662190();
L_10661648:;
  /* 10661648 mov esi, esp */
  ESI = (ESP);
  /* 1066164a push 2 */
  push32((uint32_t)(0x2u));
  /* 1066164c call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661652u);
  /* 10661652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661657 call 0x10662190 */
  push32(0x1066165cu); f_10662190();
  /* 1066165c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661663 je 0x1066172c */
  if (C.zf) goto L_1066172c;
  /* 10661669 mov esi, esp */
  ESI = (ESP);
  /* 1066166b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066166d push 0x1068f410 */
  push32((uint32_t)(0x1068f410u));
  /* 10661672 call dword ptr [0x106913ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913ec))), 0x10661678u);
  /* 10661678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066167b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066167d call 0x10662190 */
  push32(0x10661682u); f_10662190();
  /* 10661682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661684 jle 0x1066172c */
  if ((C.zf||C.sf!=C.of)) goto L_1066172c;
  /* 1066168a push 0x1068f440 */
  push32((uint32_t)(0x1068f440u));
  /* 1066168f call 0x10661005 */
  push32(0x10661694u); f_10661005();
  /* 10661694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661699 jle 0x1066172c */
  if ((C.zf||C.sf!=C.of)) goto L_1066172c;
  /* 1066169f mov esi, esp */
  ESI = (ESP);
  /* 106616a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106616a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106616a5 call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x106616abu);
  /* 106616ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106616ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106616b0 call 0x10662190 */
  push32(0x106616b5u); f_10662190();
  /* 106616b5 mov esi, esp */
  ESI = (ESP);
  /* 106616b7 push 0x1068a118 */
  push32((uint32_t)(0x1068a118u));
  /* 106616bc call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x106616c2u);
  /* 106616c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106616c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106616c7 call 0x10662190 */
  push32(0x106616ccu); f_10662190();
  /* 106616cc mov esi, esp */
  ESI = (ESP);
  /* 106616ce push 3 */
  push32((uint32_t)(0x3u));
  /* 106616d0 call dword ptr [0x106913fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913fc))), 0x106616d6u);
  /* 106616d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106616d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106616db call 0x10662190 */
  push32(0x106616e0u); f_10662190();
  /* 106616e0 mov esi, esp */
  ESI = (ESP);
  /* 106616e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106616e4 push 0x1068f3f0 */
  push32((uint32_t)(0x1068f3f0u));
  /* 106616e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 106616eb call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x106616f1u);
  /* 106616f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106616f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106616f6 call 0x10662190 */
  push32(0x106616fbu); f_10662190();
  /* 106616fb mov esi, esp */
  ESI = (ESP);
  /* 106616fd push 1 */
  push32((uint32_t)(0x1u));
  /* 106616ff push 0x1068f440 */
  push32((uint32_t)(0x1068f440u));
  /* 10661704 push 3 */
  push32((uint32_t)(0x3u));
  /* 10661706 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x1066170cu);
  /* 1066170c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066170f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661711 call 0x10662190 */
  push32(0x10661716u); f_10662190();
  /* 10661716 mov esi, esp */
  ESI = (ESP);
  /* 10661718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066171a push 3 */
  push32((uint32_t)(0x3u));
  /* 1066171c call dword ptr [0x106913f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f8))), 0x10661722u);
  /* 10661722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661727 call 0x10662190 */
  push32(0x1066172cu); f_10662190();
L_1066172c:;
  /* 1066172c mov esi, esp */
  ESI = (ESP);
  /* 1066172e push 3 */
  push32((uint32_t)(0x3u));
  /* 10661730 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661736u);
  /* 10661736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066173b call 0x10662190 */
  push32(0x10661740u); f_10662190();
  /* 10661740 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661747 je 0x10661810 */
  if (C.zf) goto L_10661810;
  /* 1066174d mov esi, esp */
  ESI = (ESP);
  /* 1066174f push 0 */
  push32((uint32_t)(0x0u));
  /* 10661751 push 0x1068f418 */
  push32((uint32_t)(0x1068f418u));
  /* 10661756 call dword ptr [0x106913ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913ec))), 0x1066175cu);
  /* 1066175c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066175f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661761 call 0x10662190 */
  push32(0x10661766u); f_10662190();
  /* 10661766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661768 jle 0x10661810 */
  if ((C.zf||C.sf!=C.of)) goto L_10661810;
  /* 1066176e push 0x1068f438 */
  push32((uint32_t)(0x1068f438u));
  /* 10661773 call 0x10661005 */
  push32(0x10661778u); f_10661005();
  /* 10661778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066177b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066177d jle 0x10661810 */
  if ((C.zf||C.sf!=C.of)) goto L_10661810;
  /* 10661783 mov esi, esp */
  ESI = (ESP);
  /* 10661785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661787 push 3 */
  push32((uint32_t)(0x3u));
  /* 10661789 call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x1066178fu);
  /* 1066178f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661794 call 0x10662190 */
  push32(0x10661799u); f_10662190();
  /* 10661799 mov esi, esp */
  ESI = (ESP);
  /* 1066179b push 0x1068a110 */
  push32((uint32_t)(0x1068a110u));
  /* 106617a0 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x106617a6u);
  /* 106617a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106617a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106617ab call 0x10662190 */
  push32(0x106617b0u); f_10662190();
  /* 106617b0 mov esi, esp */
  ESI = (ESP);
  /* 106617b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 106617b4 call dword ptr [0x106913fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913fc))), 0x106617bau);
  /* 106617ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106617bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106617bf call 0x10662190 */
  push32(0x106617c4u); f_10662190();
  /* 106617c4 mov esi, esp */
  ESI = (ESP);
  /* 106617c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106617c8 push 0x1068f400 */
  push32((uint32_t)(0x1068f400u));
  /* 106617cd push 3 */
  push32((uint32_t)(0x3u));
  /* 106617cf call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x106617d5u);
  /* 106617d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106617d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106617da call 0x10662190 */
  push32(0x106617dfu); f_10662190();
  /* 106617df mov esi, esp */
  ESI = (ESP);
  /* 106617e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106617e3 push 0x1068f438 */
  push32((uint32_t)(0x1068f438u));
  /* 106617e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 106617ea call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x106617f0u);
  /* 106617f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106617f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106617f5 call 0x10662190 */
  push32(0x106617fau); f_10662190();
  /* 106617fa mov esi, esp */
  ESI = (ESP);
  /* 106617fc push 0 */
  push32((uint32_t)(0x0u));
  /* 106617fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10661800 call dword ptr [0x106913f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f8))), 0x10661806u);
  /* 10661806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661809 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066180b call 0x10662190 */
  push32(0x10661810u); f_10662190();
L_10661810:;
  /* 10661810 mov esi, esp */
  ESI = (ESP);
  /* 10661812 push 4 */
  push32((uint32_t)(0x4u));
  /* 10661814 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x1066181au);
  /* 1066181a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066181d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066181f call 0x10662190 */
  push32(0x10661824u); f_10662190();
  /* 10661824 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066182b je 0x106618d5 */
  if (C.zf) goto L_106618d5;
  /* 10661831 mov esi, esp */
  ESI = (ESP);
  /* 10661833 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661835 push 0x1068f420 */
  push32((uint32_t)(0x1068f420u));
  /* 1066183a call dword ptr [0x106913ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913ec))), 0x10661840u);
  /* 10661840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661845 call 0x10662190 */
  push32(0x1066184au); f_10662190();
  /* 1066184a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066184c jle 0x106618d5 */
  if ((C.zf||C.sf!=C.of)) goto L_106618d5;
  /* 10661852 push 0x1068f3f8 */
  push32((uint32_t)(0x1068f3f8u));
  /* 10661857 call 0x10661005 */
  push32(0x1066185cu); f_10661005();
  /* 1066185c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066185f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661861 jle 0x106618d5 */
  if ((C.zf||C.sf!=C.of)) goto L_106618d5;
  /* 10661863 mov esi, esp */
  ESI = (ESP);
  /* 10661865 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661867 push 4 */
  push32((uint32_t)(0x4u));
  /* 10661869 call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x1066186fu);
  /* 1066186f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661872 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661874 call 0x10662190 */
  push32(0x10661879u); f_10662190();
  /* 10661879 mov esi, esp */
  ESI = (ESP);
  /* 1066187b push 0x1068a108 */
  push32((uint32_t)(0x1068a108u));
  /* 10661880 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x10661886u);
  /* 10661886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066188b call 0x10662190 */
  push32(0x10661890u); f_10662190();
  /* 10661890 mov esi, esp */
  ESI = (ESP);
  /* 10661892 push 3 */
  push32((uint32_t)(0x3u));
  /* 10661894 call dword ptr [0x106913fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913fc))), 0x1066189au);
  /* 1066189a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066189f call 0x10662190 */
  push32(0x106618a4u); f_10662190();
  /* 106618a4 mov esi, esp */
  ESI = (ESP);
  /* 106618a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106618a8 push 0x1068f3f8 */
  push32((uint32_t)(0x1068f3f8u));
  /* 106618ad push 3 */
  push32((uint32_t)(0x3u));
  /* 106618af call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x106618b5u);
  /* 106618b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106618b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106618ba call 0x10662190 */
  push32(0x106618bfu); f_10662190();
  /* 106618bf mov esi, esp */
  ESI = (ESP);
  /* 106618c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106618c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 106618c5 call dword ptr [0x106913f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f8))), 0x106618cbu);
  /* 106618cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106618ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106618d0 call 0x10662190 */
  push32(0x106618d5u); f_10662190();
L_106618d5:;
  /* 106618d5 mov esi, esp */
  ESI = (ESP);
  /* 106618d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 106618d9 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x106618dfu);
  /* 106618df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106618e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106618e4 call 0x10662190 */
  push32(0x106618e9u); f_10662190();
  /* 106618e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106618ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106618f0 je 0x1066199a */
  if (C.zf) goto L_1066199a;
  /* 106618f6 mov esi, esp */
  ESI = (ESP);
  /* 106618f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106618fa push 0x1068f428 */
  push32((uint32_t)(0x1068f428u));
  /* 106618ff call dword ptr [0x106913ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913ec))), 0x10661905u);
  /* 10661905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661908 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066190a call 0x10662190 */
  push32(0x1066190fu); f_10662190();
  /* 1066190f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661911 jle 0x1066199a */
  if ((C.zf||C.sf!=C.of)) goto L_1066199a;
  /* 10661917 push 0x1068f408 */
  push32((uint32_t)(0x1068f408u));
  /* 1066191c call 0x10661005 */
  push32(0x10661921u); f_10661005();
  /* 10661921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661926 jle 0x1066199a */
  if ((C.zf||C.sf!=C.of)) goto L_1066199a;
  /* 10661928 mov esi, esp */
  ESI = (ESP);
  /* 1066192a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066192c push 5 */
  push32((uint32_t)(0x5u));
  /* 1066192e call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x10661934u);
  /* 10661934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661939 call 0x10662190 */
  push32(0x1066193eu); f_10662190();
  /* 1066193e mov esi, esp */
  ESI = (ESP);
  /* 10661940 push 0x1068a100 */
  push32((uint32_t)(0x1068a100u));
  /* 10661945 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x1066194bu);
  /* 1066194b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066194e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661950 call 0x10662190 */
  push32(0x10661955u); f_10662190();
  /* 10661955 mov esi, esp */
  ESI = (ESP);
  /* 10661957 push 3 */
  push32((uint32_t)(0x3u));
  /* 10661959 call dword ptr [0x106913fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913fc))), 0x1066195fu);
  /* 1066195f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661964 call 0x10662190 */
  push32(0x10661969u); f_10662190();
  /* 10661969 mov esi, esp */
  ESI = (ESP);
  /* 1066196b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066196d push 0x1068f408 */
  push32((uint32_t)(0x1068f408u));
  /* 10661972 push 3 */
  push32((uint32_t)(0x3u));
  /* 10661974 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x1066197au);
  /* 1066197a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066197f call 0x10662190 */
  push32(0x10661984u); f_10662190();
  /* 10661984 mov esi, esp */
  ESI = (ESP);
  /* 10661986 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661988 push 3 */
  push32((uint32_t)(0x3u));
  /* 1066198a call dword ptr [0x106913f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f8))), 0x10661990u);
  /* 10661990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661993 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661995 call 0x10662190 */
  push32(0x1066199au); f_10662190();
L_1066199a:;
  /* 1066199a mov esi, esp */
  ESI = (ESP);
  /* 1066199c push 2 */
  push32((uint32_t)(0x2u));
  /* 1066199e call dword ptr [0x10691408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691408))), 0x106619a4u);
  /* 106619a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106619a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106619a9 call 0x10662190 */
  push32(0x106619aeu); f_10662190();
  /* 106619ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106619b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106619b5 je 0x10661b53 */
  if (C.zf) goto L_10661b53;
  /* 106619bb mov esi, esp */
  ESI = (ESP);
  /* 106619bd push 6 */
  push32((uint32_t)(0x6u));
  /* 106619bf call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x106619c5u);
  /* 106619c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106619c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106619ca call 0x10662190 */
  push32(0x106619cfu); f_10662190();
  /* 106619cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106619d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106619d6 je 0x10661a4d */
  if (C.zf) goto L_10661a4d;
  /* 106619d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106619da push 0x1068f430 */
  push32((uint32_t)(0x1068f430u));
  /* 106619df call 0x1066100f */
  push32(0x106619e4u); f_1066100f();
  /* 106619e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106619e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106619e9 jne 0x10661a4d */
  if (!C.zf) goto L_10661a4d;
  /* 106619eb push 0 */
  push32((uint32_t)(0x0u));
  /* 106619ed push 0x1068f3e0 */
  push32((uint32_t)(0x1068f3e0u));
  /* 106619f2 call 0x1066100f */
  push32(0x106619f7u); f_1066100f();
  /* 106619f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106619fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106619fc jne 0x10661a4d */
  if (!C.zf) goto L_10661a4d;
  /* 106619fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10661a00 push 0x1068f3e8 */
  push32((uint32_t)(0x1068f3e8u));
  /* 10661a05 call 0x1066100f */
  push32(0x10661a0au); f_1066100f();
  /* 10661a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661a0f jne 0x10661a4d */
  if (!C.zf) goto L_10661a4d;
  /* 10661a11 mov esi, esp */
  ESI = (ESP);
  /* 10661a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661a15 push 6 */
  push32((uint32_t)(0x6u));
  /* 10661a17 call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x10661a1du);
  /* 10661a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661a22 call 0x10662190 */
  push32(0x10661a27u); f_10662190();
  /* 10661a27 mov esi, esp */
  ESI = (ESP);
  /* 10661a29 push 0x1068a0f8 */
  push32((uint32_t)(0x1068a0f8u));
  /* 10661a2e call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x10661a34u);
  /* 10661a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661a39 call 0x10662190 */
  push32(0x10661a3eu); f_10662190();
  /* 10661a3e mov esi, esp */
  ESI = (ESP);
  /* 10661a40 call dword ptr [0x1069140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069140c))), 0x10661a46u);
  /* 10661a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661a48 call 0x10662190 */
  push32(0x10661a4du); f_10662190();
L_10661a4d:;
  /* 10661a4d mov esi, esp */
  ESI = (ESP);
  /* 10661a4f push 7 */
  push32((uint32_t)(0x7u));
  /* 10661a51 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661a57u);
  /* 10661a57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661a5c call 0x10662190 */
  push32(0x10661a61u); f_10662190();
  /* 10661a61 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661a68 je 0x10661ad0 */
  if (C.zf) goto L_10661ad0;
  /* 10661a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10661a6c push 0x1068f430 */
  push32((uint32_t)(0x1068f430u));
  /* 10661a71 call 0x1066100f */
  push32(0x10661a76u); f_1066100f();
  /* 10661a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661a7b jne 0x10661ad0 */
  if (!C.zf) goto L_10661ad0;
  /* 10661a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10661a7f push 0x1068f3e0 */
  push32((uint32_t)(0x1068f3e0u));
  /* 10661a84 call 0x1066100f */
  push32(0x10661a89u); f_1066100f();
  /* 10661a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661a8e jne 0x10661ad0 */
  if (!C.zf) goto L_10661ad0;
  /* 10661a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661a92 push 0x1068f3e8 */
  push32((uint32_t)(0x1068f3e8u));
  /* 10661a97 call 0x1066100f */
  push32(0x10661a9cu); f_1066100f();
  /* 10661a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661aa1 jne 0x10661ad0 */
  if (!C.zf) goto L_10661ad0;
  /* 10661aa3 mov esi, esp */
  ESI = (ESP);
  /* 10661aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661aa7 push 7 */
  push32((uint32_t)(0x7u));
  /* 10661aa9 call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x10661aafu);
  /* 10661aaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661ab2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661ab4 call 0x10662190 */
  push32(0x10661ab9u); f_10662190();
  /* 10661ab9 mov esi, esp */
  ESI = (ESP);
  /* 10661abb push 0x1068a0f0 */
  push32((uint32_t)(0x1068a0f0u));
  /* 10661ac0 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x10661ac6u);
  /* 10661ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661acb call 0x10662190 */
  push32(0x10661ad0u); f_10662190();
L_10661ad0:;
  /* 10661ad0 mov esi, esp */
  ESI = (ESP);
  /* 10661ad2 push 8 */
  push32((uint32_t)(0x8u));
  /* 10661ad4 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661adau);
  /* 10661ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661adf call 0x10662190 */
  push32(0x10661ae4u); f_10662190();
  /* 10661ae4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661aeb je 0x10661b53 */
  if (C.zf) goto L_10661b53;
  /* 10661aed push 2 */
  push32((uint32_t)(0x2u));
  /* 10661aef push 0x1068f430 */
  push32((uint32_t)(0x1068f430u));
  /* 10661af4 call 0x1066100f */
  push32(0x10661af9u); f_1066100f();
  /* 10661af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661afe jne 0x10661b53 */
  if (!C.zf) goto L_10661b53;
  /* 10661b00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661b02 push 0x1068f3e0 */
  push32((uint32_t)(0x1068f3e0u));
  /* 10661b07 call 0x1066100f */
  push32(0x10661b0cu); f_1066100f();
  /* 10661b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661b11 jne 0x10661b53 */
  if (!C.zf) goto L_10661b53;
  /* 10661b13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661b15 push 0x1068f3e8 */
  push32((uint32_t)(0x1068f3e8u));
  /* 10661b1a call 0x1066100f */
  push32(0x10661b1fu); f_1066100f();
  /* 10661b1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661b24 jne 0x10661b53 */
  if (!C.zf) goto L_10661b53;
  /* 10661b26 mov esi, esp */
  ESI = (ESP);
  /* 10661b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661b2a push 8 */
  push32((uint32_t)(0x8u));
  /* 10661b2c call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x10661b32u);
  /* 10661b32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661b37 call 0x10662190 */
  push32(0x10661b3cu); f_10662190();
  /* 10661b3c mov esi, esp */
  ESI = (ESP);
  /* 10661b3e push 0x1068a0e8 */
  push32((uint32_t)(0x1068a0e8u));
  /* 10661b43 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x10661b49u);
  /* 10661b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661b4e call 0x10662190 */
  push32(0x10661b53u); f_10662190();
L_10661b53:;
  /* 10661b53 mov esi, esp */
  ESI = (ESP);
  /* 10661b55 push 9 */
  push32((uint32_t)(0x9u));
  /* 10661b57 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661b5du);
  /* 10661b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661b62 call 0x10662190 */
  push32(0x10661b67u); f_10662190();
  /* 10661b67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661b6e je 0x10661be6 */
  if (C.zf) goto L_10661be6;
  /* 10661b70 mov esi, esp */
  ESI = (ESP);
  /* 10661b72 push 7 */
  push32((uint32_t)(0x7u));
  /* 10661b74 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661b7au);
  /* 10661b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661b7f call 0x10662190 */
  push32(0x10661b84u); f_10662190();
  /* 10661b84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661b8b jne 0x10661be6 */
  if (!C.zf) goto L_10661be6;
  /* 10661b8d mov esi, esp */
  ESI = (ESP);
  /* 10661b8f push 8 */
  push32((uint32_t)(0x8u));
  /* 10661b91 call dword ptr [0x106913d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d4))), 0x10661b97u);
  /* 10661b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661b9c call 0x10662190 */
  push32(0x10661ba1u); f_10662190();
  /* 10661ba1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661ba8 jne 0x10661be6 */
  if (!C.zf) goto L_10661be6;
  /* 10661baa mov esi, esp */
  ESI = (ESP);
  /* 10661bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10661bae push 9 */
  push32((uint32_t)(0x9u));
  /* 10661bb0 call dword ptr [0x106913e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913e4))), 0x10661bb6u);
  /* 10661bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661bb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661bbb call 0x10662190 */
  push32(0x10661bc0u); f_10662190();
  /* 10661bc0 mov esi, esp */
  ESI = (ESP);
  /* 10661bc2 push 0x1068a0e0 */
  push32((uint32_t)(0x1068a0e0u));
  /* 10661bc7 call dword ptr [0x106913f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f0))), 0x10661bcdu);
  /* 10661bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661bd2 call 0x10662190 */
  push32(0x10661bd7u); f_10662190();
  /* 10661bd7 mov esi, esp */
  ESI = (ESP);
  /* 10661bd9 call dword ptr [0x10691404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691404))), 0x10661bdfu);
  /* 10661bdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661be1 call 0x10662190 */
  push32(0x10661be6u); f_10662190();
L_10661be6:;
  /* 10661be6 mov esi, esp */
  ESI = (ESP);
  /* 10661be8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661bea call dword ptr [0x10691408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691408))), 0x10661bf0u);
  /* 10661bf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661bf5 call 0x10662190 */
  push32(0x10661bfau); f_10662190();
  /* 10661bfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10661bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10661c01 je 0x10661db1 */
  if (C.zf) goto L_10661db1;
  /* 10661c07 mov esi, esp */
  ESI = (ESP);
  /* 10661c09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c0b call dword ptr [0x106913fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913fc))), 0x10661c11u);
  /* 10661c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661c16 call 0x10662190 */
  push32(0x10661c1bu); f_10662190();
  /* 10661c1b mov esi, esp */
  ESI = (ESP);
  /* 10661c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10661c1f push 0x1068f3f0 */
  push32((uint32_t)(0x1068f3f0u));
  /* 10661c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c26 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661c2cu);
  /* 10661c2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661c31 call 0x10662190 */
  push32(0x10661c36u); f_10662190();
  /* 10661c36 mov esi, esp */
  ESI = (ESP);
  /* 10661c38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c3a push 0x1068f440 */
  push32((uint32_t)(0x1068f440u));
  /* 10661c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c41 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661c47u);
  /* 10661c47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661c4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661c4c call 0x10662190 */
  push32(0x10661c51u); f_10662190();
  /* 10661c51 mov esi, esp */
  ESI = (ESP);
  /* 10661c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c55 push 0x1068f400 */
  push32((uint32_t)(0x1068f400u));
  /* 10661c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c5c call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661c62u);
  /* 10661c62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661c67 call 0x10662190 */
  push32(0x10661c6cu); f_10662190();
  /* 10661c6c mov esi, esp */
  ESI = (ESP);
  /* 10661c6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c70 push 0x1068f438 */
  push32((uint32_t)(0x1068f438u));
  /* 10661c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c77 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661c7du);
  /* 10661c7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661c80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661c82 call 0x10662190 */
  push32(0x10661c87u); f_10662190();
  /* 10661c87 mov esi, esp */
  ESI = (ESP);
  /* 10661c89 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c8b push 0x1068f3f8 */
  push32((uint32_t)(0x1068f3f8u));
  /* 10661c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661c92 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661c98u);
  /* 10661c98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661c9d call 0x10662190 */
  push32(0x10661ca2u); f_10662190();
  /* 10661ca2 mov esi, esp */
  ESI = (ESP);
  /* 10661ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661ca6 push 0x1068f408 */
  push32((uint32_t)(0x1068f408u));
  /* 10661cab push 1 */
  push32((uint32_t)(0x1u));
  /* 10661cad call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661cb3u);
  /* 10661cb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661cb8 call 0x10662190 */
  push32(0x10661cbdu); f_10662190();
  /* 10661cbd mov esi, esp */
  ESI = (ESP);
  /* 10661cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10661cc1 call dword ptr [0x10691414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691414))), 0x10661cc7u);
  /* 10661cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661ccc call 0x10662190 */
  push32(0x10661cd1u); f_10662190();
  /* 10661cd1 mov esi, esp */
  ESI = (ESP);
  /* 10661cd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661cd5 call dword ptr [0x106913fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913fc))), 0x10661cdbu);
  /* 10661cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661ce0 call 0x10662190 */
  push32(0x10661ce5u); f_10662190();
  /* 10661ce5 mov esi, esp */
  ESI = (ESP);
  /* 10661ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10661ce9 push 0x1068f3f0 */
  push32((uint32_t)(0x1068f3f0u));
  /* 10661cee push 2 */
  push32((uint32_t)(0x2u));
  /* 10661cf0 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661cf6u);
  /* 10661cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661cf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661cfb call 0x10662190 */
  push32(0x10661d00u); f_10662190();
  /* 10661d00 mov esi, esp */
  ESI = (ESP);
  /* 10661d02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661d04 push 0x1068f440 */
  push32((uint32_t)(0x1068f440u));
  /* 10661d09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661d0b call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661d11u);
  /* 10661d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661d16 call 0x10662190 */
  push32(0x10661d1bu); f_10662190();
  /* 10661d1b mov esi, esp */
  ESI = (ESP);
  /* 10661d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10661d1f push 0x1068f400 */
  push32((uint32_t)(0x1068f400u));
  /* 10661d24 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661d26 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661d2cu);
  /* 10661d2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661d2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661d31 call 0x10662190 */
  push32(0x10661d36u); f_10662190();
  /* 10661d36 mov esi, esp */
  ESI = (ESP);
  /* 10661d38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661d3a push 0x1068f438 */
  push32((uint32_t)(0x1068f438u));
  /* 10661d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10661d41 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661d47u);
  /* 10661d47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661d4c call 0x10662190 */
  push32(0x10661d51u); f_10662190();
  /* 10661d51 mov esi, esp */
  ESI = (ESP);
  /* 10661d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10661d55 push 0x1068f3f8 */
  push32((uint32_t)(0x1068f3f8u));
  /* 10661d5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10661d5c call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661d62u);
  /* 10661d62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661d65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661d67 call 0x10662190 */
  push32(0x10661d6cu); f_10662190();
  /* 10661d6c mov esi, esp */
  ESI = (ESP);
  /* 10661d6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10661d70 push 0x1068f408 */
  push32((uint32_t)(0x1068f408u));
  /* 10661d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661d77 call dword ptr [0x10691400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691400))), 0x10661d7du);
  /* 10661d7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661d80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661d82 call 0x10662190 */
  push32(0x10661d87u); f_10662190();
  /* 10661d87 mov esi, esp */
  ESI = (ESP);
  /* 10661d89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10661d8b call dword ptr [0x10691414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691414))), 0x10661d91u);
  /* 10661d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661d94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661d96 call 0x10662190 */
  push32(0x10661d9bu); f_10662190();
  /* 10661d9b mov esi, esp */
  ESI = (ESP);
  /* 10661d9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10661d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10661da1 call dword ptr [0x106913f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913f4))), 0x10661da7u);
  /* 10661da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661dac call 0x10662190 */
  push32(0x10661db1u); f_10662190();
L_10661db1:;
  /* 10661db1 pop edi */
  EDI = (pop32());
  /* 10661db2 pop esi */
  ESI = (pop32());
  /* 10661db3 pop ebx */
  EBX = (pop32());
  /* 10661db4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10661db7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10661db9 call 0x10662190 */
  push32(0x10661dbeu); f_10662190();
  /* 10661dbe mov esp, ebp */
  ESP = (EBP);
  /* 10661dc0 pop ebp */
  EBP = (pop32());
  /* 10661dc1 ret  */
  ESPCHK(0x10661370u, _esp0);
  ESP += 4; return;
}

/* FUN_10002060 @ 0x10662060 (63 bytes, 26 insns) */
void f_10662060(void) {
  FTRACE(0x10662060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662060 push ebp */
  push32((uint32_t)(EBP));
  /* 10662061 mov ebp, esp */
  EBP = (ESP);
  /* 10662063 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10662066 push ebx */
  push32((uint32_t)(EBX));
  /* 10662067 push esi */
  push32((uint32_t)(ESI));
  /* 10662068 push edi */
  push32((uint32_t)(EDI));
  /* 10662069 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1066206c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10662071 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10662076 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10662078 mov esi, esp */
  ESI = (ESP);
  /* 1066207a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066207d push eax */
  push32((uint32_t)(EAX));
  /* 1066207e call dword ptr [0x106913dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913dc))), 0x10662084u);
  /* 10662084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662087 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662089 call 0x10662190 */
  push32(0x1066208eu); f_10662190();
  /* 1066208e pop edi */
  EDI = (pop32());
  /* 1066208f pop esi */
  ESI = (pop32());
  /* 10662090 pop ebx */
  EBX = (pop32());
  /* 10662091 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662094 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662096 call 0x10662190 */
  push32(0x1066209bu); f_10662190();
  /* 1066209b mov esp, ebp */
  ESP = (EBP);
  /* 1066209d pop ebp */
  EBP = (pop32());
  /* 1066209e ret  */
  ESPCHK(0x10662060u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b0 @ 0x106620b0 (67 bytes, 28 insns) */
void f_106620b0(void) {
  FTRACE(0x106620b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106620b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106620b1 mov ebp, esp */
  EBP = (ESP);
  /* 106620b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106620b6 push ebx */
  push32((uint32_t)(EBX));
  /* 106620b7 push esi */
  push32((uint32_t)(ESI));
  /* 106620b8 push edi */
  push32((uint32_t)(EDI));
  /* 106620b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106620bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106620c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106620c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106620c8 mov esi, esp */
  ESI = (ESP);
  /* 106620ca mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 106620cd push eax */
  push32((uint32_t)(EAX));
  /* 106620ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106620d1 push ecx */
  push32((uint32_t)(ECX));
  /* 106620d2 call dword ptr [0x106913d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106913d8))), 0x106620d8u);
  /* 106620d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106620db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106620dd call 0x10662190 */
  push32(0x106620e2u); f_10662190();
  /* 106620e2 pop edi */
  EDI = (pop32());
  /* 106620e3 pop esi */
  ESI = (pop32());
  /* 106620e4 pop ebx */
  EBX = (pop32());
  /* 106620e5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106620e8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106620ea call 0x10662190 */
  push32(0x106620efu); f_10662190();
  /* 106620ef mov esp, ebp */
  ESP = (EBP);
  /* 106620f1 pop ebp */
  EBP = (pop32());
  /* 106620f2 ret  */
  ESPCHK(0x106620b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10662190 (56 bytes, 28 insns) */
void f_10662190(void) {
  FTRACE(0x10662190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662190 jne 0x10662193 */
  if (!C.zf) goto L_10662193;
  /* 10662192 ret  */
  ESPCHK(0x10662190u, _esp0);
  ESP += 4; return;
L_10662193:;
  /* 10662193 push ebp */
  push32((uint32_t)(EBP));
  /* 10662194 mov ebp, esp */
  EBP = (ESP);
  /* 10662196 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10662199 push eax */
  push32((uint32_t)(EAX));
  /* 1066219a push edx */
  push32((uint32_t)(EDX));
  /* 1066219b push ebx */
  push32((uint32_t)(EBX));
  /* 1066219c push esi */
  push32((uint32_t)(ESI));
  /* 1066219d push edi */
  push32((uint32_t)(EDI));
  /* 1066219e push 0x1068a154 */
  push32((uint32_t)(0x1068a154u));
  /* 106621a3 push 0x1068a150 */
  push32((uint32_t)(0x1068a150u));
  /* 106621a8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 106621aa push 0x1068a140 */
  push32((uint32_t)(0x1068a140u));
  /* 106621af push 1 */
  push32((uint32_t)(0x1u));
  /* 106621b1 call 0x10662560 */
  push32(0x106621b6u); f_10662560();
  /* 106621b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106621b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106621bc jne 0x106621bf */
  if (!C.zf) goto L_106621bf;
  /* 106621be int3  */
  x86_unimpl("int3 @ 0x106621be");
L_106621bf:;
  /* 106621bf pop edi */
  EDI = (pop32());
  /* 106621c0 pop esi */
  ESI = (pop32());
  /* 106621c1 pop ebx */
  EBX = (pop32());
  /* 106621c2 pop edx */
  EDX = (pop32());
  /* 106621c3 pop eax */
  EAX = (pop32());
  /* 106621c4 mov esp, ebp */
  ESP = (EBP);
  /* 106621c6 pop ebp */
  EBP = (pop32());
  /* 106621c7 ret  */
  ESPCHK(0x10662190u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d0 @ 0x106621d0 (313 bytes, 78 insns) */
void f_106621d0(void) {
  FTRACE(0x106621d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106621d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106621d1 mov ebp, esp */
  EBP = (ESP);
  /* 106621d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106621d7 jne 0x10662297 */
  if (!C.zf) goto L_10662297;
  /* 106621dd call dword ptr [0x106912a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912a8))), 0x106621e3u);
  /* 106621e3 mov dword ptr [0x1068f480], eax */
  w32((uint32_t)(0x1068f480), (EAX));
  /* 106621e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 106621ea call 0x10665c90 */
  push32(0x106621efu); f_10665c90();
  /* 106621ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106621f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106621f4 jne 0x106621fd */
  if (!C.zf) goto L_106621fd;
  /* 106621f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106621f8 jmp 0x10662305 */
  goto L_10662305;
L_106621fd:;
  /* 106621fd mov eax, dword ptr [0x1068f480] */
  EAX = (r32((uint32_t)(0x1068f480)));
  /* 10662202 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10662205 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066220a mov dword ptr [0x1068f48c], eax */
  w32((uint32_t)(0x1068f48c), (EAX));
  /* 1066220f mov ecx, dword ptr [0x1068f480] */
  ECX = (r32((uint32_t)(0x1068f480)));
  /* 10662215 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066221b mov dword ptr [0x1068f488], ecx */
  w32((uint32_t)(0x1068f488), (ECX));
  /* 10662221 mov edx, dword ptr [0x1068f488] */
  EDX = (r32((uint32_t)(0x1068f488)));
  /* 10662227 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1066222a add edx, dword ptr [0x1068f48c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068f48c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10662230 mov dword ptr [0x1068f484], edx */
  w32((uint32_t)(0x1068f484), (EDX));
  /* 10662236 mov eax, dword ptr [0x1068f480] */
  EAX = (r32((uint32_t)(0x1068f480)));
  /* 1066223b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1066223e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10662243 mov dword ptr [0x1068f480], eax */
  w32((uint32_t)(0x1068f480), (EAX));
  /* 10662248 call 0x10662e00 */
  push32(0x1066224du); f_10662e00();
  /* 1066224d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066224f jne 0x1066225d */
  if (!C.zf) goto L_1066225d;
  /* 10662251 call 0x10665ce0 */
  push32(0x10662256u); f_10665ce0();
  /* 10662256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10662258 jmp 0x10662305 */
  goto L_10662305;
L_1066225d:;
  /* 1066225d call dword ptr [0x106912a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912a4))), 0x10662263u);
  /* 10662263 mov dword ptr [0x10690fcc], eax */
  w32((uint32_t)(0x10690fcc), (EAX));
  /* 10662268 call 0x10665a70 */
  push32(0x1066226du); f_10665a70();
  /* 1066226d mov dword ptr [0x1068f468], eax */
  w32((uint32_t)(0x1068f468), (EAX));
  /* 10662272 call 0x106630b0 */
  push32(0x10662277u); f_106630b0();
  /* 10662277 call 0x10665560 */
  push32(0x1066227cu); f_10665560();
  /* 1066227c call 0x10665410 */
  push32(0x10662281u); f_10665410();
  /* 10662281 call 0x10662c00 */
  push32(0x10662286u); f_10662c00();
  /* 10662286 mov ecx, dword ptr [0x1068f464] */
  ECX = (r32((uint32_t)(0x1068f464)));
  /* 1066228c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066228f mov dword ptr [0x1068f464], ecx */
  w32((uint32_t)(0x1068f464), (ECX));
  /* 10662295 jmp 0x10662300 */
  goto L_10662300;
L_10662297:;
  /* 10662297 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066229b jne 0x106622f0 */
  if (!C.zf) goto L_106622f0;
  /* 1066229d cmp dword ptr [0x1068f464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106622a4 jle 0x106622ea */
  if ((C.zf||C.sf!=C.of)) goto L_106622ea;
  /* 106622a6 mov edx, dword ptr [0x1068f464] */
  EDX = (r32((uint32_t)(0x1068f464)));
  /* 106622ac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106622af mov dword ptr [0x1068f464], edx */
  w32((uint32_t)(0x1068f464), (EDX));
  /* 106622b5 cmp dword ptr [0x1068f4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106622bc jne 0x106622c3 */
  if (!C.zf) goto L_106622c3;
  /* 106622be call 0x10662c80 */
  push32(0x106622c3u); f_10662c80();
L_106622c3:;
  /* 106622c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106622c5 call 0x106649b0 */
  push32(0x106622cau); f_106649b0();
  /* 106622ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106622cd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106622d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106622d2 je 0x106622d9 */
  if (C.zf) goto L_106622d9;
  /* 106622d4 call 0x106652c0 */
  push32(0x106622d9u); f_106652c0();
L_106622d9:;
  /* 106622d9 call 0x106633e0 */
  push32(0x106622deu); f_106633e0();
  /* 106622de call 0x10662e90 */
  push32(0x106622e3u); f_10662e90();
  /* 106622e3 call 0x10665ce0 */
  push32(0x106622e8u); f_10665ce0();
  /* 106622e8 jmp 0x106622ee */
  goto L_106622ee;
L_106622ea:;
  /* 106622ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106622ec jmp 0x10662305 */
  goto L_10662305;
L_106622ee:;
  /* 106622ee jmp 0x10662300 */
  goto L_10662300;
L_106622f0:;
  /* 106622f0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106622f4 jne 0x10662300 */
  if (!C.zf) goto L_10662300;
  /* 106622f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106622f8 call 0x10662f80 */
  push32(0x106622fdu); f_10662f80();
  /* 106622fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662300:;
  /* 10662300 mov eax, 1 */
  EAX = (0x1u);
L_10662305:;
  /* 10662305 pop ebp */
  EBP = (pop32());
  /* 10662306 ret 0xc */
  ESPCHK(0x106621d0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10662310 (243 bytes, 86 insns) */
void f_10662310(void) {
  FTRACE(0x10662310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662310 push ebp */
  push32((uint32_t)(EBP));
  /* 10662311 mov ebp, esp */
  EBP = (ESP);
  /* 10662313 push ecx */
  push32((uint32_t)(ECX));
  /* 10662314 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066231b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066231f jne 0x10662331 */
  if (!C.zf) goto L_10662331;
  /* 10662321 cmp dword ptr [0x1068f464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662328 jne 0x10662331 */
  if (!C.zf) goto L_10662331;
  /* 1066232a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066232c jmp 0x106623fd */
  goto L_106623fd;
L_10662331:;
  /* 10662331 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662335 je 0x1066233d */
  if (C.zf) goto L_1066233d;
  /* 10662337 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066233b jne 0x1066237f */
  if (!C.zf) goto L_1066237f;
L_1066233d:;
  /* 1066233d cmp dword ptr [0x10690fdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662344 je 0x1066235b */
  if (C.zf) goto L_1066235b;
  /* 10662346 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10662349 push eax */
  push32((uint32_t)(EAX));
  /* 1066234a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066234d push ecx */
  push32((uint32_t)(ECX));
  /* 1066234e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662351 push edx */
  push32((uint32_t)(EDX));
  /* 10662352 call dword ptr [0x10690fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10690fdc))), 0x10662358u);
  /* 10662358 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066235b:;
  /* 1066235b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066235f je 0x10662375 */
  if (C.zf) goto L_10662375;
  /* 10662361 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10662364 push eax */
  push32((uint32_t)(EAX));
  /* 10662365 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10662368 push ecx */
  push32((uint32_t)(ECX));
  /* 10662369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066236c push edx */
  push32((uint32_t)(EDX));
  /* 1066236d call 0x106621d0 */
  push32(0x10662372u); f_106621d0();
  /* 10662372 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10662375:;
  /* 10662375 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662379 jne 0x1066237f */
  if (!C.zf) goto L_1066237f;
  /* 1066237b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066237d jmp 0x106623fd */
  goto L_106623fd;
L_1066237f:;
  /* 1066237f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10662382 push eax */
  push32((uint32_t)(EAX));
  /* 10662383 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10662386 push ecx */
  push32((uint32_t)(ECX));
  /* 10662387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066238a push edx */
  push32((uint32_t)(EDX));
  /* 1066238b call 0x10661014 */
  push32(0x10662390u); f_10661014();
  /* 10662390 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10662393 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662397 jne 0x106623ae */
  if (!C.zf) goto L_106623ae;
  /* 10662399 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066239d jne 0x106623ae */
  if (!C.zf) goto L_106623ae;
  /* 1066239f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106623a2 push eax */
  push32((uint32_t)(EAX));
  /* 106623a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106623a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106623a8 push ecx */
  push32((uint32_t)(ECX));
  /* 106623a9 call 0x106621d0 */
  push32(0x106623aeu); f_106621d0();
L_106623ae:;
  /* 106623ae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106623b2 je 0x106623ba */
  if (C.zf) goto L_106623ba;
  /* 106623b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106623b8 jne 0x106623fa */
  if (!C.zf) goto L_106623fa;
L_106623ba:;
  /* 106623ba mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106623bd push edx */
  push32((uint32_t)(EDX));
  /* 106623be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106623c1 push eax */
  push32((uint32_t)(EAX));
  /* 106623c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106623c5 push ecx */
  push32((uint32_t)(ECX));
  /* 106623c6 call 0x106621d0 */
  push32(0x106623cbu); f_106621d0();
  /* 106623cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106623cd jne 0x106623d6 */
  if (!C.zf) goto L_106623d6;
  /* 106623cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106623d6:;
  /* 106623d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106623da je 0x106623fa */
  if (C.zf) goto L_106623fa;
  /* 106623dc cmp dword ptr [0x10690fdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106623e3 je 0x106623fa */
  if (C.zf) goto L_106623fa;
  /* 106623e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106623e8 push edx */
  push32((uint32_t)(EDX));
  /* 106623e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106623ec push eax */
  push32((uint32_t)(EAX));
  /* 106623ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106623f0 push ecx */
  push32((uint32_t)(ECX));
  /* 106623f1 call dword ptr [0x10690fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10690fdc))), 0x106623f7u);
  /* 106623f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106623fa:;
  /* 106623fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106623fd:;
  /* 106623fd mov esp, ebp */
  ESP = (EBP);
  /* 106623ff pop ebp */
  EBP = (pop32());
  /* 10662400 ret 0xc */
  ESPCHK(0x10662310u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10662410 (58 bytes, 18 insns) */
void f_10662410(void) {
  FTRACE(0x10662410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662410 push ebp */
  push32((uint32_t)(EBP));
  /* 10662411 mov ebp, esp */
  EBP = (ESP);
  /* 10662413 cmp dword ptr [0x1068f470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066241a je 0x1066242e */
  if (C.zf) goto L_1066242e;
  /* 1066241c cmp dword ptr [0x1068f470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662423 jne 0x10662433 */
  if (!C.zf) goto L_10662433;
  /* 10662425 cmp dword ptr [0x1068f474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066242c jne 0x10662433 */
  if (!C.zf) goto L_10662433;
L_1066242e:;
  /* 1066242e call 0x10665d80 */
  push32(0x10662433u); f_10665d80();
L_10662433:;
  /* 10662433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662436 push eax */
  push32((uint32_t)(EAX));
  /* 10662437 call 0x10665dd0 */
  push32(0x1066243cu); f_10665dd0();
  /* 1066243c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066243f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10662444 call dword ptr [0x1068da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068da30))), 0x1066244au);
  /* 1066244a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066244d pop ebp */
  EBP = (pop32());
  /* 1066244e ret  */
  ESPCHK(0x10662410u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x10662450 (11 bytes, 5 insns) */
void f_10662450(void) {
  FTRACE(0x10662450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662450 push ebp */
  push32((uint32_t)(EBP));
  /* 10662451 mov ebp, esp */
  EBP = (ESP);
  /* 10662453 call dword ptr [0x106912ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912ac))), 0x10662459u);
  /* 10662459 pop ebp */
  EBP = (pop32());
  /* 1066245a ret  */
  ESPCHK(0x10662450u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x10662460 (87 bytes, 30 insns) */
void f_10662460(void) {
  FTRACE(0x10662460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662460 push ebp */
  push32((uint32_t)(EBP));
  /* 10662461 mov ebp, esp */
  EBP = (ESP);
  /* 10662463 push ecx */
  push32((uint32_t)(ECX));
  /* 10662464 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662468 jl 0x10662470 */
  if ((C.sf!=C.of)) goto L_10662470;
  /* 1066246a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066246e jl 0x10662475 */
  if ((C.sf!=C.of)) goto L_10662475;
L_10662470:;
  /* 10662470 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10662473 jmp 0x106624b3 */
  goto L_106624b3;
L_10662475:;
  /* 10662475 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662479 jne 0x10662487 */
  if (!C.zf) goto L_10662487;
  /* 1066247b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066247e mov eax, dword ptr [eax*4 + 0x1068da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1068da38)));
  /* 10662485 jmp 0x106624b3 */
  goto L_106624b3;
L_10662487:;
  /* 10662487 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066248a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1066248d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066248f je 0x10662496 */
  if (C.zf) goto L_10662496;
  /* 10662491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10662494 jmp 0x106624b3 */
  goto L_106624b3;
L_10662496:;
  /* 10662496 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662499 mov eax, dword ptr [edx*4 + 0x1068da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1068da38)));
  /* 106624a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106624a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106624a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106624a9 mov dword ptr [ecx*4 + 0x1068da38], edx */
  w32((uint32_t)(ECX*4 + 0x1068da38), (EDX));
  /* 106624b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106624b3:;
  /* 106624b3 mov esp, ebp */
  ESP = (EBP);
  /* 106624b5 pop ebp */
  EBP = (pop32());
  /* 106624b6 ret  */
  ESPCHK(0x10662460u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x106624c0 (126 bytes, 38 insns) */
void f_106624c0(void) {
  FTRACE(0x106624c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106624c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106624c1 mov ebp, esp */
  EBP = (ESP);
  /* 106624c3 push ecx */
  push32((uint32_t)(ECX));
  /* 106624c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106624c8 jl 0x106624d0 */
  if ((C.sf!=C.of)) goto L_106624d0;
  /* 106624ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106624ce jl 0x106624d7 */
  if ((C.sf!=C.of)) goto L_106624d7;
L_106624d0:;
  /* 106624d0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 106624d5 jmp 0x1066253a */
  goto L_1066253a;
L_106624d7:;
  /* 106624d7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106624db jne 0x106624e9 */
  if (!C.zf) goto L_106624e9;
  /* 106624dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106624e0 mov eax, dword ptr [eax*4 + 0x1068da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1068da44)));
  /* 106624e7 jmp 0x1066253a */
  goto L_1066253a;
L_106624e9:;
  /* 106624e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106624ec mov edx, dword ptr [ecx*4 + 0x1068da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da44)));
  /* 106624f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106624f6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106624fa jne 0x10662510 */
  if (!C.zf) goto L_10662510;
  /* 106624fc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106624fe call dword ptr [0x106912b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b0))), 0x10662504u);
  /* 10662504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662507 mov dword ptr [ecx*4 + 0x1068da44], eax */
  w32((uint32_t)(ECX*4 + 0x1068da44), (EAX));
  /* 1066250e jmp 0x10662537 */
  goto L_10662537;
L_10662510:;
  /* 10662510 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662514 jne 0x1066252a */
  if (!C.zf) goto L_1066252a;
  /* 10662516 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10662518 call dword ptr [0x106912b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b0))), 0x1066251eu);
  /* 1066251e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662521 mov dword ptr [edx*4 + 0x1068da44], eax */
  w32((uint32_t)(EDX*4 + 0x1068da44), (EAX));
  /* 10662528 jmp 0x10662537 */
  goto L_10662537;
L_1066252a:;
  /* 1066252a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066252d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10662530 mov dword ptr [eax*4 + 0x1068da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1068da44), (ECX));
L_10662537:;
  /* 10662537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1066253a:;
  /* 1066253a mov esp, ebp */
  ESP = (EBP);
  /* 1066253c pop ebp */
  EBP = (pop32());
  /* 1066253d ret  */
  ESPCHK(0x106624c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x10662540 (28 bytes, 11 insns) */
void f_10662540(void) {
  FTRACE(0x10662540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662540 push ebp */
  push32((uint32_t)(EBP));
  /* 10662541 mov ebp, esp */
  EBP = (ESP);
  /* 10662543 push ecx */
  push32((uint32_t)(ECX));
  /* 10662544 mov eax, dword ptr [0x10690fc0] */
  EAX = (r32((uint32_t)(0x10690fc0)));
  /* 10662549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066254c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066254f mov dword ptr [0x10690fc0], ecx */
  w32((uint32_t)(0x10690fc0), (ECX));
  /* 10662555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662558 mov esp, ebp */
  ESP = (EBP);
  /* 1066255a pop ebp */
  EBP = (pop32());
  /* 1066255b ret  */
  ESPCHK(0x10662540u, _esp0);
  ESP += 4; return;
}

/* FUN_10002560 @ 0x10662560 (912 bytes, 248 insns) */
void f_10662560(void) {
  FTRACE(0x10662560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662560 push ebp */
  push32((uint32_t)(EBP));
  /* 10662561 mov ebp, esp */
  EBP = (ESP);
  /* 10662563 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10662568 call 0x10666640 */
  push32(0x1066256du); f_10666640();
  /* 1066256d push edi */
  push32((uint32_t)(EDI));
  /* 1066256e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10662575 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1066257a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066257c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10662582 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10662584 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10662586 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10662587 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1066258e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10662593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10662595 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1066259b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1066259d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1066259f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106625a0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 106625a7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106625ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106625ae lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 106625b4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106625b6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106625b8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106625b9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 106625bc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 106625c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106625c6 jl 0x106625ce */
  if ((C.sf!=C.of)) goto L_106625ce;
  /* 106625c8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106625cc jl 0x106625d6 */
  if ((C.sf!=C.of)) goto L_106625d6;
L_106625ce:;
  /* 106625ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106625d1 jmp 0x106628eb */
  goto L_106628eb;
L_106625d6:;
  /* 106625d6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106625da jne 0x10662680 */
  if (!C.zf) goto L_10662680;
  /* 106625e0 push 0x1068da34 */
  push32((uint32_t)(0x1068da34u));
  /* 106625e5 call dword ptr [0x106912c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c8))), 0x106625ebu);
  /* 106625eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106625ed jle 0x10662680 */
  if ((C.zf||C.sf!=C.of)) goto L_10662680;
  /* 106625f3 cmp dword ptr [0x1068f478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106625fa jne 0x1066263e */
  if (!C.zf) goto L_1066263e;
  /* 106625fc push 0x1068a2fc */
  push32((uint32_t)(0x1068a2fcu));
  /* 10662601 call dword ptr [0x106912c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c4))), 0x10662607u);
  /* 10662607 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1066260d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662614 je 0x10662636 */
  if (C.zf) goto L_10662636;
  /* 10662616 push 0x1068a2f0 */
  push32((uint32_t)(0x1068a2f0u));
  /* 1066261b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10662621 push ecx */
  push32((uint32_t)(ECX));
  /* 10662622 call dword ptr [0x106912c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c0))), 0x10662628u);
  /* 10662628 mov dword ptr [0x1068f478], eax */
  w32((uint32_t)(0x1068f478), (EAX));
  /* 1066262d cmp dword ptr [0x1068f478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662634 jne 0x1066263e */
  if (!C.zf) goto L_1066263e;
L_10662636:;
  /* 10662636 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10662639 jmp 0x106628eb */
  goto L_106628eb;
L_1066263e:;
  /* 1066263e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10662641 push edx */
  push32((uint32_t)(EDX));
  /* 10662642 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10662645 push eax */
  push32((uint32_t)(EAX));
  /* 10662646 push 0x1068a2bc */
  push32((uint32_t)(0x1068a2bcu));
  /* 1066264b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10662651 push ecx */
  push32((uint32_t)(ECX));
  /* 10662652 call dword ptr [0x1068f478] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f478))), 0x10662658u);
  /* 10662658 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066265b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10662661 push edx */
  push32((uint32_t)(EDX));
  /* 10662662 call dword ptr [0x106912bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912bc))), 0x10662668u);
  /* 10662668 push 0x1068da34 */
  push32((uint32_t)(0x1068da34u));
  /* 1066266d call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x10662673u);
  /* 10662673 call 0x10662450 */
  push32(0x10662678u); f_10662450();
  /* 10662678 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066267b jmp 0x106628eb */
  goto L_106628eb;
L_10662680:;
  /* 10662680 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662684 je 0x106626bd */
  if (C.zf) goto L_106626bd;
  /* 10662686 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1066268c push eax */
  push32((uint32_t)(EAX));
  /* 1066268d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10662690 push ecx */
  push32((uint32_t)(ECX));
  /* 10662691 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10662696 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1066269c push edx */
  push32((uint32_t)(EDX));
  /* 1066269d call 0x10666540 */
  push32(0x106626a2u); f_10666540();
  /* 106626a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106626a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106626a7 jge 0x106626bd */
  if ((C.sf==C.of)) goto L_106626bd;
  /* 106626a9 push 0x1068a290 */
  push32((uint32_t)(0x1068a290u));
  /* 106626ae lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 106626b4 push eax */
  push32((uint32_t)(EAX));
  /* 106626b5 call 0x10666450 */
  push32(0x106626bau); f_10666450();
  /* 106626ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106626bd:;
  /* 106626bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106626c1 jne 0x106626f5 */
  if (!C.zf) goto L_106626f5;
  /* 106626c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106626c7 je 0x106626d5 */
  if (C.zf) goto L_106626d5;
  /* 106626c9 mov dword ptr [ebp - 0x3028], 0x1068a27c */
  w32((uint32_t)(EBP + -0x3028), (0x1068a27cu));
  /* 106626d3 jmp 0x106626df */
  goto L_106626df;
L_106626d5:;
  /* 106626d5 mov dword ptr [ebp - 0x3028], 0x1068a268 */
  w32((uint32_t)(EBP + -0x3028), (0x1068a268u));
L_106626df:;
  /* 106626df mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 106626e5 push ecx */
  push32((uint32_t)(ECX));
  /* 106626e6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106626ec push edx */
  push32((uint32_t)(EDX));
  /* 106626ed call 0x10666450 */
  push32(0x106626f2u); f_10666450();
  /* 106626f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106626f5:;
  /* 106626f5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 106626fb push eax */
  push32((uint32_t)(EAX));
  /* 106626fc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10662702 push ecx */
  push32((uint32_t)(ECX));
  /* 10662703 call 0x10666460 */
  push32(0x10662708u); f_10666460();
  /* 10662708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066270b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066270f jne 0x1066274a */
  if (!C.zf) goto L_1066274a;
  /* 10662711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662714 mov eax, dword ptr [edx*4 + 0x1068da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1068da38)));
  /* 1066271b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1066271e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10662720 je 0x10662736 */
  if (C.zf) goto L_10662736;
  /* 10662722 push 0x1068a264 */
  push32((uint32_t)(0x1068a264u));
  /* 10662727 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1066272d push ecx */
  push32((uint32_t)(ECX));
  /* 1066272e call 0x10666460 */
  push32(0x10662733u); f_10666460();
  /* 10662733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662736:;
  /* 10662736 push 0x1068a260 */
  push32((uint32_t)(0x1068a260u));
  /* 1066273b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10662741 push edx */
  push32((uint32_t)(EDX));
  /* 10662742 call 0x10666460 */
  push32(0x10662747u); f_10666460();
  /* 10662747 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066274a:;
  /* 1066274a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066274e je 0x10662792 */
  if (C.zf) goto L_10662792;
  /* 10662750 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10662756 push eax */
  push32((uint32_t)(EAX));
  /* 10662757 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066275a push ecx */
  push32((uint32_t)(ECX));
  /* 1066275b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066275e push edx */
  push32((uint32_t)(EDX));
  /* 1066275f push 0x1068a254 */
  push32((uint32_t)(0x1068a254u));
  /* 10662764 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10662769 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1066276f push eax */
  push32((uint32_t)(EAX));
  /* 10662770 call 0x10666350 */
  push32(0x10662775u); f_10666350();
  /* 10662775 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066277a jge 0x10662790 */
  if ((C.sf==C.of)) goto L_10662790;
  /* 1066277c push 0x1068a290 */
  push32((uint32_t)(0x1068a290u));
  /* 10662781 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10662787 push ecx */
  push32((uint32_t)(ECX));
  /* 10662788 call 0x10666450 */
  push32(0x1066278du); f_10666450();
  /* 1066278d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662790:;
  /* 10662790 jmp 0x106627a8 */
  goto L_106627a8;
L_10662792:;
  /* 10662792 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10662798 push edx */
  push32((uint32_t)(EDX));
  /* 10662799 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1066279f push eax */
  push32((uint32_t)(EAX));
  /* 106627a0 call 0x10666450 */
  push32(0x106627a5u); f_10666450();
  /* 106627a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106627a8:;
  /* 106627a8 cmp dword ptr [0x10690fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106627af je 0x106627ec */
  if (C.zf) goto L_106627ec;
  /* 106627b1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 106627b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106627b8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106627be push edx */
  push32((uint32_t)(EDX));
  /* 106627bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106627c2 push eax */
  push32((uint32_t)(EAX));
  /* 106627c3 call dword ptr [0x10690fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10690fc0))), 0x106627c9u);
  /* 106627c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106627cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106627ce je 0x106627ec */
  if (C.zf) goto L_106627ec;
  /* 106627d0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106627d4 jne 0x106627e1 */
  if (!C.zf) goto L_106627e1;
  /* 106627d6 push 0x1068da34 */
  push32((uint32_t)(0x1068da34u));
  /* 106627db call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x106627e1u);
L_106627e1:;
  /* 106627e1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 106627e7 jmp 0x106628eb */
  goto L_106628eb;
L_106627ec:;
  /* 106627ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106627ef mov edx, dword ptr [ecx*4 + 0x1068da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da38)));
  /* 106627f6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106627f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106627fb je 0x1066283b */
  if (C.zf) goto L_1066283b;
  /* 106627fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662800 cmp dword ptr [eax*4 + 0x1068da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1068da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662808 je 0x1066283b */
  if (C.zf) goto L_1066283b;
  /* 1066280a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066280c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10662812 push ecx */
  push32((uint32_t)(ECX));
  /* 10662813 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10662819 push edx */
  push32((uint32_t)(EDX));
  /* 1066281a call 0x106662d0 */
  push32(0x1066281fu); f_106662d0();
  /* 1066281f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662822 push eax */
  push32((uint32_t)(EAX));
  /* 10662823 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10662829 push eax */
  push32((uint32_t)(EAX));
  /* 1066282a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066282d mov edx, dword ptr [ecx*4 + 0x1068da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da44)));
  /* 10662834 push edx */
  push32((uint32_t)(EDX));
  /* 10662835 call dword ptr [0x106912b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b4))), 0x1066283bu);
L_1066283b:;
  /* 1066283b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066283e mov ecx, dword ptr [eax*4 + 0x1068da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068da38)));
  /* 10662845 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10662848 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066284a je 0x10662859 */
  if (C.zf) goto L_10662859;
  /* 1066284c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10662852 push edx */
  push32((uint32_t)(EDX));
  /* 10662853 call dword ptr [0x106912bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912bc))), 0x10662859u);
L_10662859:;
  /* 10662859 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066285c mov ecx, dword ptr [eax*4 + 0x1068da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068da38)));
  /* 10662863 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10662866 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10662868 je 0x106628d8 */
  if (C.zf) goto L_106628d8;
  /* 1066286a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066286e je 0x1066288d */
  if (C.zf) goto L_1066288d;
  /* 10662870 push 0xa */
  push32((uint32_t)(0xau));
  /* 10662872 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10662878 push edx */
  push32((uint32_t)(EDX));
  /* 10662879 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066287c push eax */
  push32((uint32_t)(EAX));
  /* 1066287d call 0x10665fe0 */
  push32(0x10662882u); f_10665fe0();
  /* 10662882 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662885 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1066288b jmp 0x10662897 */
  goto L_10662897;
L_1066288d:;
  /* 1066288d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10662897:;
  /* 10662897 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1066289d push ecx */
  push32((uint32_t)(ECX));
  /* 1066289e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106628a1 push edx */
  push32((uint32_t)(EDX));
  /* 106628a2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 106628a8 push eax */
  push32((uint32_t)(EAX));
  /* 106628a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106628ac push ecx */
  push32((uint32_t)(ECX));
  /* 106628ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106628b0 push edx */
  push32((uint32_t)(EDX));
  /* 106628b1 call 0x106628f0 */
  push32(0x106628b6u); f_106628f0();
  /* 106628b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106628b9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 106628bf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106628c3 jne 0x106628d0 */
  if (!C.zf) goto L_106628d0;
  /* 106628c5 push 0x1068da34 */
  push32((uint32_t)(0x1068da34u));
  /* 106628ca call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x106628d0u);
L_106628d0:;
  /* 106628d0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 106628d6 jmp 0x106628eb */
  goto L_106628eb;
L_106628d8:;
  /* 106628d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106628dc jne 0x106628e9 */
  if (!C.zf) goto L_106628e9;
  /* 106628de push 0x1068da34 */
  push32((uint32_t)(0x1068da34u));
  /* 106628e3 call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x106628e9u);
L_106628e9:;
  /* 106628e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106628eb:;
  /* 106628eb pop edi */
  EDI = (pop32());
  /* 106628ec mov esp, ebp */
  ESP = (EBP);
  /* 106628ee pop ebp */
  EBP = (pop32());
  /* 106628ef ret  */
  ESPCHK(0x10662560u, _esp0);
  ESP += 4; return;
}

/* FUN_100028f0 @ 0x106628f0 (780 bytes, 197 insns) */
void f_106628f0(void) {
  FTRACE(0x106628f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106628f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106628f1 mov ebp, esp */
  EBP = (ESP);
  /* 106628f3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 106628f8 call 0x10666640 */
  push32(0x106628fdu); f_10666640();
L_106628fd:;
  /* 106628fd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662901 jne 0x10662928 */
  if (!C.zf) goto L_10662928;
  /* 10662903 push 0x1068a44c */
  push32((uint32_t)(0x1068a44cu));
  /* 10662908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066290a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1066290f push 0x1068a440 */
  push32((uint32_t)(0x1068a440u));
  /* 10662914 push 2 */
  push32((uint32_t)(0x2u));
  /* 10662916 call 0x10662560 */
  push32(0x1066291bu); f_10662560();
  /* 1066291b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066291e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662921 jne 0x10662928 */
  if (!C.zf) goto L_10662928;
  /* 10662923 call 0x10662450 */
  push32(0x10662928u); f_10662450();
L_10662928:;
  /* 10662928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066292a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066292c jne 0x106628fd */
  if (!C.zf) goto L_106628fd;
  /* 1066292e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10662933 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10662939 push ecx */
  push32((uint32_t)(ECX));
  /* 1066293a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066293c call dword ptr [0x106912cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912cc))), 0x10662942u);
  /* 10662942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10662944 jne 0x1066295a */
  if (!C.zf) goto L_1066295a;
  /* 10662946 push 0x1068a428 */
  push32((uint32_t)(0x1068a428u));
  /* 1066294b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10662951 push edx */
  push32((uint32_t)(EDX));
  /* 10662952 call 0x10666450 */
  push32(0x10662957u); f_10666450();
  /* 10662957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066295a:;
  /* 1066295a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10662960 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10662963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662966 push ecx */
  push32((uint32_t)(ECX));
  /* 10662967 call 0x106662d0 */
  push32(0x1066296cu); f_106662d0();
  /* 1066296c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066296f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662972 jbe 0x1066299d */
  if ((C.cf||C.zf)) goto L_1066299d;
  /* 10662974 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662977 push edx */
  push32((uint32_t)(EDX));
  /* 10662978 call 0x106662d0 */
  push32(0x1066297du); f_106662d0();
  /* 1066297d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662980 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662983 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10662987 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066298a push 3 */
  push32((uint32_t)(0x3u));
  /* 1066298c push 0x1068a424 */
  push32((uint32_t)(0x1068a424u));
  /* 10662991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662994 push eax */
  push32((uint32_t)(EAX));
  /* 10662995 call 0x10666cc0 */
  push32(0x1066299au); f_10666cc0();
  /* 1066299a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066299d:;
  /* 1066299d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106629a0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 106629a6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106629ad je 0x106629f8 */
  if (C.zf) goto L_106629f8;
  /* 106629af mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106629b5 push edx */
  push32((uint32_t)(EDX));
  /* 106629b6 call 0x106662d0 */
  push32(0x106629bbu); f_106662d0();
  /* 106629bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106629be cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106629c1 jbe 0x106629f8 */
  if ((C.cf||C.zf)) goto L_106629f8;
  /* 106629c3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106629c9 push eax */
  push32((uint32_t)(EAX));
  /* 106629ca call 0x106662d0 */
  push32(0x106629cfu); f_106662d0();
  /* 106629cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106629d2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106629d8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 106629dc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 106629e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 106629e4 push 0x1068a424 */
  push32((uint32_t)(0x1068a424u));
  /* 106629e9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106629ef push eax */
  push32((uint32_t)(EAX));
  /* 106629f0 call 0x10666cc0 */
  push32(0x106629f5u); f_10666cc0();
  /* 106629f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106629f8:;
  /* 106629f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106629fc jne 0x10662a0a */
  if (!C.zf) goto L_10662a0a;
  /* 106629fe mov dword ptr [ebp - 0x1114], 0x1068a3b0 */
  w32((uint32_t)(EBP + -0x1114), (0x1068a3b0u));
  /* 10662a08 jmp 0x10662a14 */
  goto L_10662a14;
L_10662a0a:;
  /* 10662a0a mov dword ptr [ebp - 0x1114], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1114), (0x1068a150u));
L_10662a14:;
  /* 10662a14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10662a17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10662a1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10662a1c je 0x10662a29 */
  if (C.zf) goto L_10662a29;
  /* 10662a1e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10662a21 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10662a27 jmp 0x10662a33 */
  goto L_10662a33;
L_10662a29:;
  /* 10662a29 mov dword ptr [ebp - 0x1118], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1118), (0x1068a150u));
L_10662a33:;
  /* 10662a33 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10662a36 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10662a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10662a3b je 0x10662a4f */
  if (C.zf) goto L_10662a4f;
  /* 10662a3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662a41 jne 0x10662a4f */
  if (!C.zf) goto L_10662a4f;
  /* 10662a43 mov dword ptr [ebp - 0x111c], 0x1068a3a0 */
  w32((uint32_t)(EBP + -0x111c), (0x1068a3a0u));
  /* 10662a4d jmp 0x10662a59 */
  goto L_10662a59;
L_10662a4f:;
  /* 10662a4f mov dword ptr [ebp - 0x111c], 0x1068a150 */
  w32((uint32_t)(EBP + -0x111c), (0x1068a150u));
L_10662a59:;
  /* 10662a59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10662a5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10662a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10662a61 je 0x10662a6f */
  if (C.zf) goto L_10662a6f;
  /* 10662a63 mov dword ptr [ebp - 0x1120], 0x1068a39c */
  w32((uint32_t)(EBP + -0x1120), (0x1068a39cu));
  /* 10662a6d jmp 0x10662a79 */
  goto L_10662a79;
L_10662a6f:;
  /* 10662a6f mov dword ptr [ebp - 0x1120], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1120), (0x1068a150u));
L_10662a79:;
  /* 10662a79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662a7d je 0x10662a8a */
  if (C.zf) goto L_10662a8a;
  /* 10662a7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10662a82 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10662a88 jmp 0x10662a94 */
  goto L_10662a94;
L_10662a8a:;
  /* 10662a8a mov dword ptr [ebp - 0x1124], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1124), (0x1068a150u));
L_10662a94:;
  /* 10662a94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662a98 je 0x10662aa6 */
  if (C.zf) goto L_10662aa6;
  /* 10662a9a mov dword ptr [ebp - 0x1128], 0x1068a394 */
  w32((uint32_t)(EBP + -0x1128), (0x1068a394u));
  /* 10662aa4 jmp 0x10662ab0 */
  goto L_10662ab0;
L_10662aa6:;
  /* 10662aa6 mov dword ptr [ebp - 0x1128], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1128), (0x1068a150u));
L_10662ab0:;
  /* 10662ab0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662ab4 je 0x10662ac1 */
  if (C.zf) goto L_10662ac1;
  /* 10662ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10662ab9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10662abf jmp 0x10662acb */
  goto L_10662acb;
L_10662ac1:;
  /* 10662ac1 mov dword ptr [ebp - 0x112c], 0x1068a150 */
  w32((uint32_t)(EBP + -0x112c), (0x1068a150u));
L_10662acb:;
  /* 10662acb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662acf je 0x10662add */
  if (C.zf) goto L_10662add;
  /* 10662ad1 mov dword ptr [ebp - 0x1130], 0x1068a38c */
  w32((uint32_t)(EBP + -0x1130), (0x1068a38cu));
  /* 10662adb jmp 0x10662ae7 */
  goto L_10662ae7;
L_10662add:;
  /* 10662add mov dword ptr [ebp - 0x1130], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1130), (0x1068a150u));
L_10662ae7:;
  /* 10662ae7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662aee je 0x10662afe */
  if (C.zf) goto L_10662afe;
  /* 10662af0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10662af6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10662afc jmp 0x10662b08 */
  goto L_10662b08;
L_10662afe:;
  /* 10662afe mov dword ptr [ebp - 0x1134], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1134), (0x1068a150u));
L_10662b08:;
  /* 10662b08 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662b0f je 0x10662b1d */
  if (C.zf) goto L_10662b1d;
  /* 10662b11 mov dword ptr [ebp - 0x1138], 0x1068a380 */
  w32((uint32_t)(EBP + -0x1138), (0x1068a380u));
  /* 10662b1b jmp 0x10662b27 */
  goto L_10662b27;
L_10662b1d:;
  /* 10662b1d mov dword ptr [ebp - 0x1138], 0x1068a150 */
  w32((uint32_t)(EBP + -0x1138), (0x1068a150u));
L_10662b27:;
  /* 10662b27 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10662b2d push edx */
  push32((uint32_t)(EDX));
  /* 10662b2e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10662b34 push eax */
  push32((uint32_t)(EAX));
  /* 10662b35 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10662b3b push ecx */
  push32((uint32_t)(ECX));
  /* 10662b3c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10662b42 push edx */
  push32((uint32_t)(EDX));
  /* 10662b43 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10662b49 push eax */
  push32((uint32_t)(EAX));
  /* 10662b4a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10662b50 push ecx */
  push32((uint32_t)(ECX));
  /* 10662b51 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10662b57 push edx */
  push32((uint32_t)(EDX));
  /* 10662b58 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10662b5e push eax */
  push32((uint32_t)(EAX));
  /* 10662b5f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10662b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10662b66 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10662b6c push edx */
  push32((uint32_t)(EDX));
  /* 10662b6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662b70 push eax */
  push32((uint32_t)(EAX));
  /* 10662b71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662b74 mov edx, dword ptr [ecx*4 + 0x1068da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da50)));
  /* 10662b7b push edx */
  push32((uint32_t)(EDX));
  /* 10662b7c push 0x1068a32c */
  push32((uint32_t)(0x1068a32cu));
  /* 10662b81 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10662b86 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10662b8c push eax */
  push32((uint32_t)(EAX));
  /* 10662b8d call 0x10666350 */
  push32(0x10662b92u); f_10666350();
  /* 10662b92 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662b95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10662b97 jge 0x10662bad */
  if ((C.sf==C.of)) goto L_10662bad;
  /* 10662b99 push 0x1068a290 */
  push32((uint32_t)(0x1068a290u));
  /* 10662b9e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10662ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 10662ba5 call 0x10666450 */
  push32(0x10662baau); f_10666450();
  /* 10662baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662bad:;
  /* 10662bad push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10662bb2 push 0x1068a308 */
  push32((uint32_t)(0x1068a308u));
  /* 10662bb7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10662bbd push edx */
  push32((uint32_t)(EDX));
  /* 10662bbe call 0x10666c00 */
  push32(0x10662bc3u); f_10666c00();
  /* 10662bc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662bc6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10662bcc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662bd3 jne 0x10662be6 */
  if (!C.zf) goto L_10662be6;
  /* 10662bd5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10662bd7 call 0x10666940 */
  push32(0x10662bdcu); f_10666940();
  /* 10662bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662bdf push 3 */
  push32((uint32_t)(0x3u));
  /* 10662be1 call 0x10662c60 */
  push32(0x10662be6u); f_10662c60();
L_10662be6:;
  /* 10662be6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662bed jne 0x10662bf6 */
  if (!C.zf) goto L_10662bf6;
  /* 10662bef mov eax, 1 */
  EAX = (0x1u);
  /* 10662bf4 jmp 0x10662bf8 */
  goto L_10662bf8;
L_10662bf6:;
  /* 10662bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10662bf8:;
  /* 10662bf8 mov esp, ebp */
  ESP = (EBP);
  /* 10662bfa pop ebp */
  EBP = (pop32());
  /* 10662bfb ret  */
  ESPCHK(0x106628f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c00 @ 0x10662c00 (56 bytes, 15 insns) */
void f_10662c00(void) {
  FTRACE(0x10662c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10662c01 mov ebp, esp */
  EBP = (ESP);
  /* 10662c03 cmp dword ptr [0x10690fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662c0a je 0x10662c12 */
  if (C.zf) goto L_10662c12;
  /* 10662c0c call dword ptr [0x10690fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10690fbc))), 0x10662c12u);
L_10662c12:;
  /* 10662c12 push 0x1068d418 */
  push32((uint32_t)(0x1068d418u));
  /* 10662c17 push 0x1068d208 */
  push32((uint32_t)(0x1068d208u));
  /* 10662c1c call 0x10662dd0 */
  push32(0x10662c21u); f_10662dd0();
  /* 10662c21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662c24 push 0x1068d104 */
  push32((uint32_t)(0x1068d104u));
  /* 10662c29 push 0x1068d000 */
  push32((uint32_t)(0x1068d000u));
  /* 10662c2e call 0x10662dd0 */
  push32(0x10662c33u); f_10662dd0();
  /* 10662c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662c36 pop ebp */
  EBP = (pop32());
  /* 10662c37 ret  */
  ESPCHK(0x10662c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c40 @ 0x10662c40 (21 bytes, 10 insns) */
void f_10662c40(void) {
  FTRACE(0x10662c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10662c41 mov ebp, esp */
  EBP = (ESP);
  /* 10662c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10662c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10662c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662c4a push eax */
  push32((uint32_t)(EAX));
  /* 10662c4b call 0x10662cc0 */
  push32(0x10662c50u); f_10662cc0();
  /* 10662c50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662c53 pop ebp */
  EBP = (pop32());
  /* 10662c54 ret  */
  ESPCHK(0x10662c40u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10662c60 (21 bytes, 10 insns) */
void f_10662c60(void) {
  FTRACE(0x10662c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10662c61 mov ebp, esp */
  EBP = (ESP);
  /* 10662c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10662c65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10662c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662c6a push eax */
  push32((uint32_t)(EAX));
  /* 10662c6b call 0x10662cc0 */
  push32(0x10662c70u); f_10662cc0();
  /* 10662c70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662c73 pop ebp */
  EBP = (pop32());
  /* 10662c74 ret  */
  ESPCHK(0x10662c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c80 @ 0x10662c80 (19 bytes, 9 insns) */
void f_10662c80(void) {
  FTRACE(0x10662c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10662c81 mov ebp, esp */
  EBP = (ESP);
  /* 10662c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10662c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10662c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10662c89 call 0x10662cc0 */
  push32(0x10662c8eu); f_10662cc0();
  /* 10662c8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662c91 pop ebp */
  EBP = (pop32());
  /* 10662c92 ret  */
  ESPCHK(0x10662c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x10662ca0 (19 bytes, 9 insns) */
void f_10662ca0(void) {
  FTRACE(0x10662ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10662ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10662ca5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10662ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10662ca9 call 0x10662cc0 */
  push32(0x10662caeu); f_10662cc0();
  /* 10662cae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662cb1 pop ebp */
  EBP = (pop32());
  /* 10662cb2 ret  */
  ESPCHK(0x10662ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cc0 @ 0x10662cc0 (227 bytes, 61 insns) */
void f_10662cc0(void) {
  FTRACE(0x10662cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10662cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10662cc4 call 0x10662db0 */
  push32(0x10662cc9u); f_10662db0();
  /* 10662cc9 cmp dword ptr [0x1068f4bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662cd0 jne 0x10662ce3 */
  if (!C.zf) goto L_10662ce3;
  /* 10662cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662cd5 push eax */
  push32((uint32_t)(EAX));
  /* 10662cd6 call dword ptr [0x106912d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912d8))), 0x10662cdcu);
  /* 10662cdc push eax */
  push32((uint32_t)(EAX));
  /* 10662cdd call dword ptr [0x106912d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912d4))), 0x10662ce3u);
L_10662ce3:;
  /* 10662ce3 mov dword ptr [0x1068f4b8], 1 */
  w32((uint32_t)(0x1068f4b8), (0x1u));
  /* 10662ced mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10662cf0 mov byte ptr [0x1068f4b4], cl */
  w8((uint32_t)(0x1068f4b4), (CL));
  /* 10662cf6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662cfa jne 0x10662d43 */
  if (!C.zf) goto L_10662d43;
  /* 10662cfc cmp dword ptr [0x10690fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662d03 je 0x10662d31 */
  if (C.zf) goto L_10662d31;
  /* 10662d05 mov edx, dword ptr [0x10690fb4] */
  EDX = (r32((uint32_t)(0x10690fb4)));
  /* 10662d0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10662d0e:;
  /* 10662d0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662d11 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10662d14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10662d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662d1a cmp ecx, dword ptr [0x10690fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10690fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662d20 jb 0x10662d31 */
  if (C.cf) goto L_10662d31;
  /* 10662d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662d25 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662d28 je 0x10662d2f */
  if (C.zf) goto L_10662d2f;
  /* 10662d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662d2d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10662d2fu);
L_10662d2f:;
  /* 10662d2f jmp 0x10662d0e */
  goto L_10662d0e;
L_10662d31:;
  /* 10662d31 push 0x1068d724 */
  push32((uint32_t)(0x1068d724u));
  /* 10662d36 push 0x1068d51c */
  push32((uint32_t)(0x1068d51cu));
  /* 10662d3b call 0x10662dd0 */
  push32(0x10662d40u); f_10662dd0();
  /* 10662d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662d43:;
  /* 10662d43 push 0x1068d92c */
  push32((uint32_t)(0x1068d92cu));
  /* 10662d48 push 0x1068d828 */
  push32((uint32_t)(0x1068d828u));
  /* 10662d4d call 0x10662dd0 */
  push32(0x10662d52u); f_10662dd0();
  /* 10662d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662d55 cmp dword ptr [0x1068f4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662d5c jne 0x10662d7e */
  if (!C.zf) goto L_10662d7e;
  /* 10662d5e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10662d60 call 0x106649b0 */
  push32(0x10662d65u); f_106649b0();
  /* 10662d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662d68 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10662d6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10662d6d je 0x10662d7e */
  if (C.zf) goto L_10662d7e;
  /* 10662d6f mov dword ptr [0x1068f4c0], 1 */
  w32((uint32_t)(0x1068f4c0), (0x1u));
  /* 10662d79 call 0x106652c0 */
  push32(0x10662d7eu); f_106652c0();
L_10662d7e:;
  /* 10662d7e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662d82 je 0x10662d8b */
  if (C.zf) goto L_10662d8b;
  /* 10662d84 call 0x10662dc0 */
  push32(0x10662d89u); f_10662dc0();
  /* 10662d89 jmp 0x10662d9f */
  goto L_10662d9f;
L_10662d8b:;
  /* 10662d8b mov dword ptr [0x1068f4bc], 1 */
  w32((uint32_t)(0x1068f4bc), (0x1u));
  /* 10662d95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662d98 push ecx */
  push32((uint32_t)(ECX));
  /* 10662d99 call dword ptr [0x106912d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912d0))), 0x10662d9fu);
L_10662d9f:;
  /* 10662d9f mov esp, ebp */
  ESP = (EBP);
  /* 10662da1 pop ebp */
  EBP = (pop32());
  /* 10662da2 ret  */
  ESPCHK(0x10662cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x10662db0 (15 bytes, 7 insns) */
void f_10662db0(void) {
  FTRACE(0x10662db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662db1 mov ebp, esp */
  EBP = (ESP);
  /* 10662db3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10662db5 call 0x10666ea0 */
  push32(0x10662dbau); f_10666ea0();
  /* 10662dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662dbd pop ebp */
  EBP = (pop32());
  /* 10662dbe ret  */
  ESPCHK(0x10662db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dc0 @ 0x10662dc0 (15 bytes, 7 insns) */
void f_10662dc0(void) {
  FTRACE(0x10662dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10662dc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10662dc5 call 0x10666f40 */
  push32(0x10662dcau); f_10666f40();
  /* 10662dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662dcd pop ebp */
  EBP = (pop32());
  /* 10662dce ret  */
  ESPCHK(0x10662dc0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10662dd0 (37 bytes, 16 insns) */
void f_10662dd0(void) {
  FTRACE(0x10662dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662dd1 mov ebp, esp */
  EBP = (ESP);
L_10662dd3:;
  /* 10662dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662dd6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662dd9 jae 0x10662df3 */
  if (!C.cf) goto L_10662df3;
  /* 10662ddb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662dde cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662de1 je 0x10662de8 */
  if (C.zf) goto L_10662de8;
  /* 10662de3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662de6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10662de8u);
L_10662de8:;
  /* 10662de8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662deb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10662dee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10662df1 jmp 0x10662dd3 */
  goto L_10662dd3;
L_10662df3:;
  /* 10662df3 pop ebp */
  EBP = (pop32());
  /* 10662df4 ret  */
  ESPCHK(0x10662dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x10662e00 (130 bytes, 42 insns) */
void f_10662e00(void) {
  FTRACE(0x10662e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10662e01 mov ebp, esp */
  EBP = (ESP);
  /* 10662e03 push ecx */
  push32((uint32_t)(ECX));
  /* 10662e04 call 0x10666dc0 */
  push32(0x10662e09u); f_10666dc0();
  /* 10662e09 call dword ptr [0x106912e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912e4))), 0x10662e0fu);
  /* 10662e0f mov dword ptr [0x1068da5c], eax */
  w32((uint32_t)(0x1068da5c), (EAX));
  /* 10662e14 cmp dword ptr [0x1068da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1068da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662e1b jne 0x10662e21 */
  if (!C.zf) goto L_10662e21;
  /* 10662e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10662e1f jmp 0x10662e7e */
  goto L_10662e7e;
L_10662e21:;
  /* 10662e21 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10662e23 push 0x1068a464 */
  push32((uint32_t)(0x1068a464u));
  /* 10662e28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10662e2a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10662e2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10662e2e call 0x106638b0 */
  push32(0x10662e33u); f_106638b0();
  /* 10662e33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662e36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10662e39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662e3d je 0x10662e54 */
  if (C.zf) goto L_10662e54;
  /* 10662e3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662e42 push eax */
  push32((uint32_t)(EAX));
  /* 10662e43 mov ecx, dword ptr [0x1068da5c] */
  ECX = (r32((uint32_t)(0x1068da5c)));
  /* 10662e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10662e4a call dword ptr [0x106912e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912e0))), 0x10662e50u);
  /* 10662e50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10662e52 jne 0x10662e58 */
  if (!C.zf) goto L_10662e58;
L_10662e54:;
  /* 10662e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10662e56 jmp 0x10662e7e */
  goto L_10662e7e;
L_10662e58:;
  /* 10662e58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662e5b push edx */
  push32((uint32_t)(EDX));
  /* 10662e5c call 0x10662ec0 */
  push32(0x10662e61u); f_10662ec0();
  /* 10662e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662e64 call dword ptr [0x106912dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912dc))), 0x10662e6au);
  /* 10662e6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662e6d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10662e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662e72 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10662e79 mov eax, 1 */
  EAX = (0x1u);
L_10662e7e:;
  /* 10662e7e mov esp, ebp */
  ESP = (EBP);
  /* 10662e80 pop ebp */
  EBP = (pop32());
  /* 10662e81 ret  */
  ESPCHK(0x10662e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e90 @ 0x10662e90 (41 bytes, 11 insns) */
void f_10662e90(void) {
  FTRACE(0x10662e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10662e91 mov ebp, esp */
  EBP = (ESP);
  /* 10662e93 call 0x10666e00 */
  push32(0x10662e98u); f_10666e00();
  /* 10662e98 cmp dword ptr [0x1068da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1068da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662e9f je 0x10662eb7 */
  if (C.zf) goto L_10662eb7;
  /* 10662ea1 mov eax, dword ptr [0x1068da5c] */
  EAX = (r32((uint32_t)(0x1068da5c)));
  /* 10662ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10662ea7 call dword ptr [0x106912e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912e8))), 0x10662eadu);
  /* 10662ead mov dword ptr [0x1068da5c], 0xffffffff */
  w32((uint32_t)(0x1068da5c), (0xffffffffu));
L_10662eb7:;
  /* 10662eb7 pop ebp */
  EBP = (pop32());
  /* 10662eb8 ret  */
  ESPCHK(0x10662e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec0 @ 0x10662ec0 (25 bytes, 8 insns) */
void f_10662ec0(void) {
  FTRACE(0x10662ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10662ec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662ec6 mov dword ptr [eax + 0x50], 0x1068dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1068dc00u));
  /* 10662ecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662ed0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10662ed7 pop ebp */
  EBP = (pop32());
  /* 10662ed8 ret  */
  ESPCHK(0x10662ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee0 @ 0x10662ee0 (152 bytes, 48 insns) */
void f_10662ee0(void) {
  FTRACE(0x10662ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10662ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10662ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10662ee6 call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x10662eecu);
  /* 10662eec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10662eef mov eax, dword ptr [0x1068da5c] */
  EAX = (r32((uint32_t)(0x1068da5c)));
  /* 10662ef4 push eax */
  push32((uint32_t)(EAX));
  /* 10662ef5 call dword ptr [0x106912f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f0))), 0x10662efbu);
  /* 10662efb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10662efe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662f02 jne 0x10662f67 */
  if (!C.zf) goto L_10662f67;
  /* 10662f04 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10662f09 push 0x1068a464 */
  push32((uint32_t)(0x1068a464u));
  /* 10662f0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10662f10 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10662f12 push 1 */
  push32((uint32_t)(0x1u));
  /* 10662f14 call 0x106638b0 */
  push32(0x10662f19u); f_106638b0();
  /* 10662f19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662f1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10662f1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662f23 je 0x10662f5d */
  if (C.zf) goto L_10662f5d;
  /* 10662f25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662f28 push ecx */
  push32((uint32_t)(ECX));
  /* 10662f29 mov edx, dword ptr [0x1068da5c] */
  EDX = (r32((uint32_t)(0x1068da5c)));
  /* 10662f2f push edx */
  push32((uint32_t)(EDX));
  /* 10662f30 call dword ptr [0x106912e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912e0))), 0x10662f36u);
  /* 10662f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10662f38 je 0x10662f5d */
  if (C.zf) goto L_10662f5d;
  /* 10662f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662f3d push eax */
  push32((uint32_t)(EAX));
  /* 10662f3e call 0x10662ec0 */
  push32(0x10662f43u); f_10662ec0();
  /* 10662f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10662f46 call dword ptr [0x106912dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912dc))), 0x10662f4cu);
  /* 10662f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662f4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10662f51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662f54 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10662f5b jmp 0x10662f67 */
  goto L_10662f67;
L_10662f5d:;
  /* 10662f5d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10662f5f call 0x10662410 */
  push32(0x10662f64u); f_10662410();
  /* 10662f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662f67:;
  /* 10662f67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10662f6a push eax */
  push32((uint32_t)(EAX));
  /* 10662f6b call dword ptr [0x106912ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912ec))), 0x10662f71u);
  /* 10662f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10662f74 mov esp, ebp */
  ESP = (EBP);
  /* 10662f76 pop ebp */
  EBP = (pop32());
  /* 10662f77 ret  */
  ESPCHK(0x10662ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f80 @ 0x10662f80 (263 bytes, 86 insns) */
void f_10662f80(void) {
  FTRACE(0x10662f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10662f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10662f81 mov ebp, esp */
  EBP = (ESP);
  /* 10662f83 cmp dword ptr [0x1068da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1068da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662f8a je 0x10663085 */
  if (C.zf) goto L_10663085;
  /* 10662f90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662f94 jne 0x10662fa5 */
  if (!C.zf) goto L_10662fa5;
  /* 10662f96 mov eax, dword ptr [0x1068da5c] */
  EAX = (r32((uint32_t)(0x1068da5c)));
  /* 10662f9b push eax */
  push32((uint32_t)(EAX));
  /* 10662f9c call dword ptr [0x106912f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f0))), 0x10662fa2u);
  /* 10662fa2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10662fa5:;
  /* 10662fa5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662fa9 je 0x10663076 */
  if (C.zf) goto L_10663076;
  /* 10662faf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662fb2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662fb6 je 0x10662fc9 */
  if (C.zf) goto L_10662fc9;
  /* 10662fb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10662fba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662fbd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10662fc0 push eax */
  push32((uint32_t)(EAX));
  /* 10662fc1 call 0x10663f30 */
  push32(0x10662fc6u); f_10663f30();
  /* 10662fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662fc9:;
  /* 10662fc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662fcc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662fd0 je 0x10662fe3 */
  if (C.zf) goto L_10662fe3;
  /* 10662fd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10662fd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662fd7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10662fda push eax */
  push32((uint32_t)(EAX));
  /* 10662fdb call 0x10663f30 */
  push32(0x10662fe0u); f_10663f30();
  /* 10662fe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662fe3:;
  /* 10662fe3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662fe6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10662fea je 0x10662ffd */
  if (C.zf) goto L_10662ffd;
  /* 10662fec push 2 */
  push32((uint32_t)(0x2u));
  /* 10662fee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10662ff1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10662ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10662ff5 call 0x10663f30 */
  push32(0x10662ffau); f_10663f30();
  /* 10662ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10662ffd:;
  /* 10662ffd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663000 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663004 je 0x10663017 */
  if (C.zf) goto L_10663017;
  /* 10663006 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066300b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1066300e push eax */
  push32((uint32_t)(EAX));
  /* 1066300f call 0x10663f30 */
  push32(0x10663014u); f_10663f30();
  /* 10663014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10663017:;
  /* 10663017 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066301a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066301e je 0x10663031 */
  if (C.zf) goto L_10663031;
  /* 10663020 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663022 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663025 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10663028 push eax */
  push32((uint32_t)(EAX));
  /* 10663029 call 0x10663f30 */
  push32(0x1066302eu); f_10663f30();
  /* 1066302e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10663031:;
  /* 10663031 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663034 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663038 je 0x1066304b */
  if (C.zf) goto L_1066304b;
  /* 1066303a push 2 */
  push32((uint32_t)(0x2u));
  /* 1066303c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066303f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10663042 push eax */
  push32((uint32_t)(EAX));
  /* 10663043 call 0x10663f30 */
  push32(0x10663048u); f_10663f30();
  /* 10663048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066304b:;
  /* 1066304b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066304e cmp dword ptr [ecx + 0x50], 0x1068dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1068dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663055 je 0x10663068 */
  if (C.zf) goto L_10663068;
  /* 10663057 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663059 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066305c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1066305f push eax */
  push32((uint32_t)(EAX));
  /* 10663060 call 0x10663f30 */
  push32(0x10663065u); f_10663f30();
  /* 10663065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10663068:;
  /* 10663068 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066306a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066306d push ecx */
  push32((uint32_t)(ECX));
  /* 1066306e call 0x10663f30 */
  push32(0x10663073u); f_10663f30();
  /* 10663073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10663076:;
  /* 10663076 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663078 mov edx, dword ptr [0x1068da5c] */
  EDX = (r32((uint32_t)(0x1068da5c)));
  /* 1066307e push edx */
  push32((uint32_t)(EDX));
  /* 1066307f call dword ptr [0x106912e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912e0))), 0x10663085u);
L_10663085:;
  /* 10663085 pop ebp */
  EBP = (pop32());
  /* 10663086 ret  */
  ESPCHK(0x10662f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003090 @ 0x10663090 (11 bytes, 5 insns) */
void f_10663090(void) {
  FTRACE(0x10663090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663090 push ebp */
  push32((uint32_t)(EBP));
  /* 10663091 mov ebp, esp */
  EBP = (ESP);
  /* 10663093 call dword ptr [0x106912dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912dc))), 0x10663099u);
  /* 10663099 pop ebp */
  EBP = (pop32());
  /* 1066309a ret  */
  ESPCHK(0x10663090u, _esp0);
  ESP += 4; return;
}

/* FUN_100030a0 @ 0x106630a0 (11 bytes, 5 insns) */
void f_106630a0(void) {
  FTRACE(0x106630a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106630a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106630a1 mov ebp, esp */
  EBP = (ESP);
  /* 106630a3 call dword ptr [0x106912f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f8))), 0x106630a9u);
  /* 106630a9 pop ebp */
  EBP = (pop32());
  /* 106630aa ret  */
  ESPCHK(0x106630a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b0 @ 0x106630b0 (804 bytes, 236 insns) */
void f_106630b0(void) {
  FTRACE(0x106630b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106630b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106630b1 mov ebp, esp */
  EBP = (ESP);
  /* 106630b3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106630b6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 106630bb push 0x1068a470 */
  push32((uint32_t)(0x1068a470u));
  /* 106630c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106630c2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106630c7 call 0x106634a0 */
  push32(0x106630ccu); f_106634a0();
  /* 106630cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106630cf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 106630d2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106630d6 jne 0x106630e2 */
  if (!C.zf) goto L_106630e2;
  /* 106630d8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 106630da call 0x10662410 */
  push32(0x106630dfu); f_10662410();
  /* 106630df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106630e2:;
  /* 106630e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106630e5 mov dword ptr [0x10690e60], eax */
  w32((uint32_t)(0x10690e60), (EAX));
  /* 106630ea mov dword ptr [0x10690f9c], 0x20 */
  w32((uint32_t)(0x10690f9c), (0x20u));
  /* 106630f4 jmp 0x106630ff */
  goto L_106630ff;
L_106630f6:;
  /* 106630f6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106630f9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106630fc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_106630ff:;
  /* 106630ff mov edx, dword ptr [0x10690e60] */
  EDX = (r32((uint32_t)(0x10690e60)));
  /* 10663105 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066310b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066310e jae 0x10663133 */
  if (!C.cf) goto L_10663133;
  /* 10663110 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663113 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10663117 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066311a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10663120 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663123 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10663127 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066312a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10663131 jmp 0x106630f6 */
  goto L_106630f6;
L_10663133:;
  /* 10663133 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10663136 push ecx */
  push32((uint32_t)(ECX));
  /* 10663137 call dword ptr [0x10691304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691304))), 0x1066313du);
  /* 1066313d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10663140 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10663146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10663148 je 0x106632d5 */
  if (C.zf) goto L_106632d5;
  /* 1066314e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663152 je 0x106632d5 */
  if (C.zf) goto L_106632d5;
  /* 10663158 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066315b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066315d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10663160 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10663163 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663166 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10663169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066316c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066316f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10663172 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663179 jge 0x10663183 */
  if ((C.sf==C.of)) goto L_10663183;
  /* 1066317b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1066317e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10663181 jmp 0x1066318a */
  goto L_1066318a;
L_10663183:;
  /* 10663183 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1066318a:;
  /* 1066318a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1066318d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10663190 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10663197 jmp 0x106631a2 */
  goto L_106631a2;
L_10663199:;
  /* 10663199 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1066319c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066319f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_106631a2:;
  /* 106631a2 mov ecx, dword ptr [0x10690f9c] */
  ECX = (r32((uint32_t)(0x10690f9c)));
  /* 106631a8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106631ab jge 0x10663242 */
  if ((C.sf==C.of)) goto L_10663242;
  /* 106631b1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106631b6 push 0x1068a470 */
  push32((uint32_t)(0x1068a470u));
  /* 106631bb push 2 */
  push32((uint32_t)(0x2u));
  /* 106631bd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106631c2 call 0x106634a0 */
  push32(0x106631c7u); f_106634a0();
  /* 106631c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106631ca mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 106631cd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106631d1 jne 0x106631de */
  if (!C.zf) goto L_106631de;
  /* 106631d3 mov edx, dword ptr [0x10690f9c] */
  EDX = (r32((uint32_t)(0x10690f9c)));
  /* 106631d9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 106631dc jmp 0x10663242 */
  goto L_10663242;
L_106631de:;
  /* 106631de mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106631e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106631e4 mov dword ptr [eax*4 + 0x10690e60], ecx */
  w32((uint32_t)(EAX*4 + 0x10690e60), (ECX));
  /* 106631eb mov edx, dword ptr [0x10690f9c] */
  EDX = (r32((uint32_t)(0x10690f9c)));
  /* 106631f1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106631f4 mov dword ptr [0x10690f9c], edx */
  w32((uint32_t)(0x10690f9c), (EDX));
  /* 106631fa jmp 0x10663205 */
  goto L_10663205;
L_106631fc:;
  /* 106631fc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106631ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663202 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10663205:;
  /* 10663205 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10663208 mov edx, dword ptr [ecx*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10690e60)));
  /* 1066320f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663215 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663218 jae 0x1066323d */
  if (!C.cf) goto L_1066323d;
  /* 1066321a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066321d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10663221 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663224 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1066322a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066322d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10663231 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663234 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1066323b jmp 0x106631fc */
  goto L_106631fc;
L_1066323d:;
  /* 1066323d jmp 0x10663199 */
  goto L_10663199;
L_10663242:;
  /* 10663242 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10663249 jmp 0x10663266 */
  goto L_10663266;
L_1066324b:;
  /* 1066324b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1066324e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663251 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10663254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663257 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066325a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066325d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10663260 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663263 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10663266:;
  /* 10663266 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10663269 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066326c jge 0x106632d5 */
  if ((C.sf==C.of)) goto L_106632d5;
  /* 1066326e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10663271 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663274 je 0x106632d0 */
  if (C.zf) goto L_106632d0;
  /* 10663276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663279 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066327c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1066327f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663281 je 0x106632d0 */
  if (C.zf) goto L_106632d0;
  /* 10663283 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663286 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10663289 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1066328c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066328e jne 0x106632a0 */
  if (!C.zf) goto L_106632a0;
  /* 10663290 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10663293 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10663295 push edx */
  push32((uint32_t)(EDX));
  /* 10663296 call dword ptr [0x10691300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691300))), 0x1066329cu);
  /* 1066329c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066329e je 0x106632d0 */
  if (C.zf) goto L_106632d0;
L_106632a0:;
  /* 106632a0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106632a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106632a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106632a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106632ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106632af mov edx, dword ptr [eax*4 + 0x10690e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 106632b6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106632b8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 106632bb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106632be mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 106632c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106632c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106632c5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106632c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106632cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106632cd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_106632d0:;
  /* 106632d0 jmp 0x1066324b */
  goto L_1066324b;
L_106632d5:;
  /* 106632d5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 106632dc jmp 0x106632e7 */
  goto L_106632e7;
L_106632de:;
  /* 106632de mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106632e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106632e4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_106632e7:;
  /* 106632e7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106632eb jge 0x106633c4 */
  if ((C.sf==C.of)) goto L_106633c4;
  /* 106632f1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106632f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106632f7 mov edx, dword ptr [0x10690e60] */
  EDX = (r32((uint32_t)(0x10690e60)));
  /* 106632fd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106632ff mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10663302 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663305 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663308 jne 0x106633b0 */
  if (!C.zf) goto L_106633b0;
  /* 1066330e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663311 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10663315 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663319 jne 0x10663324 */
  if (!C.zf) goto L_10663324;
  /* 1066331b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10663322 jmp 0x10663334 */
  goto L_10663334;
L_10663324:;
  /* 10663324 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10663327 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066332a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066332c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066332e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663331 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10663334:;
  /* 10663334 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10663337 push eax */
  push32((uint32_t)(EAX));
  /* 10663338 call dword ptr [0x106912b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b0))), 0x1066333eu);
  /* 1066333e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10663341 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663345 je 0x1066339f */
  if (C.zf) goto L_1066339f;
  /* 10663347 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1066334a push ecx */
  push32((uint32_t)(ECX));
  /* 1066334b call dword ptr [0x10691300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691300))), 0x10663351u);
  /* 10663351 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10663354 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663358 je 0x1066339f */
  if (C.zf) goto L_1066339f;
  /* 1066335a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066335d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10663360 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10663362 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10663365 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066336b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066336e jne 0x10663380 */
  if (!C.zf) goto L_10663380;
  /* 10663370 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663373 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10663376 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10663378 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066337b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1066337e jmp 0x1066339d */
  goto L_1066339d;
L_10663380:;
  /* 10663380 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10663383 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10663389 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066338c jne 0x1066339d */
  if (!C.zf) goto L_1066339d;
  /* 1066338e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10663391 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10663394 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10663397 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1066339a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1066339d:;
  /* 1066339d jmp 0x106633ae */
  goto L_106633ae;
L_1066339f:;
  /* 1066339f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106633a2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106633a5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 106633a8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106633ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106633ae:;
  /* 106633ae jmp 0x106633bf */
  goto L_106633bf;
L_106633b0:;
  /* 106633b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106633b3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106633b6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 106633b9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106633bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106633bf:;
  /* 106633bf jmp 0x106632de */
  goto L_106632de;
L_106633c4:;
  /* 106633c4 mov eax, dword ptr [0x10690f9c] */
  EAX = (r32((uint32_t)(0x10690f9c)));
  /* 106633c9 push eax */
  push32((uint32_t)(EAX));
  /* 106633ca call dword ptr [0x106912fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912fc))), 0x106633d0u);
  /* 106633d0 mov esp, ebp */
  ESP = (EBP);
  /* 106633d2 pop ebp */
  EBP = (pop32());
  /* 106633d3 ret  */
  ESPCHK(0x106630b0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x106633e0 (155 bytes, 45 insns) */
void f_106633e0(void) {
  FTRACE(0x106633e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106633e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106633e1 mov ebp, esp */
  EBP = (ESP);
  /* 106633e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106633e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106633ed jmp 0x106633f8 */
  goto L_106633f8;
L_106633ef:;
  /* 106633ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106633f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106633f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106633f8:;
  /* 106633f8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106633fc jge 0x10663477 */
  if ((C.sf==C.of)) goto L_10663477;
  /* 106633fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663401 cmp dword ptr [ecx*4 + 0x10690e60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10690e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663409 je 0x10663472 */
  if (C.zf) goto L_10663472;
  /* 1066340b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066340e mov eax, dword ptr [edx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 10663415 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10663418 jmp 0x10663423 */
  goto L_10663423;
L_1066341a:;
  /* 1066341a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066341d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663420 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10663423:;
  /* 10663423 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663426 mov eax, dword ptr [edx*4 + 0x10690e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10690e60)));
  /* 1066342d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663432 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663435 jae 0x1066344f */
  if (!C.cf) goto L_1066344f;
  /* 10663437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066343a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066343e je 0x1066344d */
  if (C.zf) goto L_1066344d;
  /* 10663440 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663443 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663446 push edx */
  push32((uint32_t)(EDX));
  /* 10663447 call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x1066344du);
L_1066344d:;
  /* 1066344d jmp 0x1066341a */
  goto L_1066341a;
L_1066344f:;
  /* 1066344f push 2 */
  push32((uint32_t)(0x2u));
  /* 10663451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663454 mov ecx, dword ptr [eax*4 + 0x10690e60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10690e60)));
  /* 1066345b push ecx */
  push32((uint32_t)(ECX));
  /* 1066345c call 0x10663f30 */
  push32(0x10663461u); f_10663f30();
  /* 10663461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663464 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663467 mov dword ptr [edx*4 + 0x10690e60], 0 */
  w32((uint32_t)(EDX*4 + 0x10690e60), (0x0u));
L_10663472:;
  /* 10663472 jmp 0x106633ef */
  goto L_106633ef;
L_10663477:;
  /* 10663477 mov esp, ebp */
  ESP = (EBP);
  /* 10663479 pop ebp */
  EBP = (pop32());
  /* 1066347a ret  */
  ESPCHK(0x106633e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x10663480 (29 bytes, 13 insns) */
void f_10663480(void) {
  FTRACE(0x10663480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663480 push ebp */
  push32((uint32_t)(EBP));
  /* 10663481 mov ebp, esp */
  EBP = (ESP);
  /* 10663483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663487 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663489 mov eax, dword ptr [0x1068f668] */
  EAX = (r32((uint32_t)(0x1068f668)));
  /* 1066348e push eax */
  push32((uint32_t)(EAX));
  /* 1066348f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663492 push ecx */
  push32((uint32_t)(ECX));
  /* 10663493 call 0x106634f0 */
  push32(0x10663498u); f_106634f0();
  /* 10663498 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066349b pop ebp */
  EBP = (pop32());
  /* 1066349c ret  */
  ESPCHK(0x10663480u, _esp0);
  ESP += 4; return;
}

/* FUN_100034a0 @ 0x106634a0 (35 bytes, 16 insns) */
void f_106634a0(void) {
  FTRACE(0x106634a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106634a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106634a1 mov ebp, esp */
  EBP = (ESP);
  /* 106634a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106634a6 push eax */
  push32((uint32_t)(EAX));
  /* 106634a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106634aa push ecx */
  push32((uint32_t)(ECX));
  /* 106634ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106634ae push edx */
  push32((uint32_t)(EDX));
  /* 106634af mov eax, dword ptr [0x1068f668] */
  EAX = (r32((uint32_t)(0x1068f668)));
  /* 106634b4 push eax */
  push32((uint32_t)(EAX));
  /* 106634b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106634b8 push ecx */
  push32((uint32_t)(ECX));
  /* 106634b9 call 0x106634f0 */
  push32(0x106634beu); f_106634f0();
  /* 106634be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106634c1 pop ebp */
  EBP = (pop32());
  /* 106634c2 ret  */
  ESPCHK(0x106634a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d0 @ 0x106634d0 (27 bytes, 13 insns) */
void f_106634d0(void) {
  FTRACE(0x106634d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106634d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106634d1 mov ebp, esp */
  EBP = (ESP);
  /* 106634d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106634d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106634d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106634d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106634dc push eax */
  push32((uint32_t)(EAX));
  /* 106634dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106634e0 push ecx */
  push32((uint32_t)(ECX));
  /* 106634e1 call 0x106634f0 */
  push32(0x106634e6u); f_106634f0();
  /* 106634e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106634e9 pop ebp */
  EBP = (pop32());
  /* 106634ea ret  */
  ESPCHK(0x106634d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x106634f0 (94 bytes, 38 insns) */
void f_106634f0(void) {
  FTRACE(0x106634f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106634f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106634f1 mov ebp, esp */
  EBP = (ESP);
  /* 106634f3 push ecx */
  push32((uint32_t)(ECX));
L_106634f4:;
  /* 106634f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 106634f6 call 0x10666ea0 */
  push32(0x106634fbu); f_10666ea0();
  /* 106634fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106634fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663501 push eax */
  push32((uint32_t)(EAX));
  /* 10663502 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10663505 push ecx */
  push32((uint32_t)(ECX));
  /* 10663506 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663509 push edx */
  push32((uint32_t)(EDX));
  /* 1066350a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066350d push eax */
  push32((uint32_t)(EAX));
  /* 1066350e call 0x10663570 */
  push32(0x10663513u); f_10663570();
  /* 10663513 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663516 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10663519 push 9 */
  push32((uint32_t)(0x9u));
  /* 1066351b call 0x10666f40 */
  push32(0x10663520u); f_10666f40();
  /* 10663520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663523 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663527 jne 0x1066352f */
  if (!C.zf) goto L_1066352f;
  /* 10663529 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066352d jne 0x10663534 */
  if (!C.zf) goto L_10663534;
L_1066352f:;
  /* 1066352f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663532 jmp 0x1066354a */
  goto L_1066354a;
L_10663534:;
  /* 10663534 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663537 push ecx */
  push32((uint32_t)(ECX));
  /* 10663538 call 0x106671e0 */
  push32(0x1066353du); f_106671e0();
  /* 1066353d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663540 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663542 jne 0x10663548 */
  if (!C.zf) goto L_10663548;
  /* 10663544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663546 jmp 0x1066354a */
  goto L_1066354a;
L_10663548:;
  /* 10663548 jmp 0x106634f4 */
  goto L_106634f4;
L_1066354a:;
  /* 1066354a mov esp, ebp */
  ESP = (EBP);
  /* 1066354c pop ebp */
  EBP = (pop32());
  /* 1066354d ret  */
  ESPCHK(0x106634f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x10663550 (23 bytes, 11 insns) */
void f_10663550(void) {
  FTRACE(0x10663550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663550 push ebp */
  push32((uint32_t)(EBP));
  /* 10663551 mov ebp, esp */
  EBP = (ESP);
  /* 10663553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663555 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663557 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066355c push eax */
  push32((uint32_t)(EAX));
  /* 1066355d call 0x10663570 */
  push32(0x10663562u); f_10663570();
  /* 10663562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663565 pop ebp */
  EBP = (pop32());
  /* 10663566 ret  */
  ESPCHK(0x10663550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003570 @ 0x10663570 (787 bytes, 254 insns) */
void f_10663570(void) {
  FTRACE(0x10663570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663570 push ebp */
  push32((uint32_t)(EBP));
  /* 10663571 mov ebp, esp */
  EBP = (ESP);
  /* 10663573 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10663576 push ebx */
  push32((uint32_t)(EBX));
  /* 10663577 push esi */
  push32((uint32_t)(ESI));
  /* 10663578 push edi */
  push32((uint32_t)(EDI));
  /* 10663579 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10663580 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 10663585 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10663588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066358a je 0x106635bc */
  if (C.zf) goto L_106635bc;
L_1066358c:;
  /* 1066358c call 0x10664640 */
  push32(0x10663591u); f_10664640();
  /* 10663591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663593 jne 0x106635b6 */
  if (!C.zf) goto L_106635b6;
  /* 10663595 push 0x1068a564 */
  push32((uint32_t)(0x1068a564u));
  /* 1066359a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066359c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 106635a1 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 106635a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106635a8 call 0x10662560 */
  push32(0x106635adu); f_10662560();
  /* 106635ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106635b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106635b3 jne 0x106635b6 */
  if (!C.zf) goto L_106635b6;
  /* 106635b5 int3  */
  x86_unimpl("int3 @ 0x106635b5");
L_106635b6:;
  /* 106635b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106635b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106635ba jne 0x1066358c */
  if (!C.zf) goto L_1066358c;
L_106635bc:;
  /* 106635bc mov edx, dword ptr [0x1068da88] */
  EDX = (r32((uint32_t)(0x1068da88)));
  /* 106635c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106635c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106635c8 cmp eax, dword ptr [0x1068da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106635ce jne 0x106635d1 */
  if (!C.zf) goto L_106635d1;
  /* 106635d0 int3  */
  x86_unimpl("int3 @ 0x106635d0");
L_106635d1:;
  /* 106635d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106635d4 push ecx */
  push32((uint32_t)(ECX));
  /* 106635d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106635d8 push edx */
  push32((uint32_t)(EDX));
  /* 106635d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106635dc push eax */
  push32((uint32_t)(EAX));
  /* 106635dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106635e0 push ecx */
  push32((uint32_t)(ECX));
  /* 106635e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106635e4 push edx */
  push32((uint32_t)(EDX));
  /* 106635e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106635e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106635e9 call dword ptr [0x1068dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068dc90))), 0x106635efu);
  /* 106635ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106635f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106635f4 jne 0x10663654 */
  if (!C.zf) goto L_10663654;
  /* 106635f6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106635fa je 0x10663627 */
  if (C.zf) goto L_10663627;
L_106635fc:;
  /* 106635fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106635ff push eax */
  push32((uint32_t)(EAX));
  /* 10663600 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663603 push ecx */
  push32((uint32_t)(ECX));
  /* 10663604 push 0x1068a520 */
  push32((uint32_t)(0x1068a520u));
  /* 10663609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066360b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066360d push 0 */
  push32((uint32_t)(0x0u));
  /* 1066360f push 0 */
  push32((uint32_t)(0x0u));
  /* 10663611 call 0x10662560 */
  push32(0x10663616u); f_10662560();
  /* 10663616 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066361c jne 0x1066361f */
  if (!C.zf) goto L_1066361f;
  /* 1066361e int3  */
  x86_unimpl("int3 @ 0x1066361e");
L_1066361f:;
  /* 1066361f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10663621 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10663623 jne 0x106635fc */
  if (!C.zf) goto L_106635fc;
  /* 10663625 jmp 0x1066364d */
  goto L_1066364d;
L_10663627:;
  /* 10663627 push 0x1068a4fc */
  push32((uint32_t)(0x1068a4fcu));
  /* 1066362c push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10663631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663633 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663635 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663639 call 0x10662560 */
  push32(0x1066363eu); f_10662560();
  /* 1066363e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663641 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663644 jne 0x10663647 */
  if (!C.zf) goto L_10663647;
  /* 10663646 int3  */
  x86_unimpl("int3 @ 0x10663646");
L_10663647:;
  /* 10663647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066364b jne 0x10663627 */
  if (!C.zf) goto L_10663627;
L_1066364d:;
  /* 1066364d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066364f jmp 0x1066387c */
  goto L_1066387c;
L_10663654:;
  /* 10663654 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663657 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066365d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663660 je 0x10663676 */
  if (C.zf) goto L_10663676;
  /* 10663662 mov edx, dword ptr [0x1068da84] */
  EDX = (r32((uint32_t)(0x1068da84)));
  /* 10663668 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1066366b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066366d jne 0x10663676 */
  if (!C.zf) goto L_10663676;
  /* 1066366f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10663676:;
  /* 10663676 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066367a ja 0x10663687 */
  if ((!C.cf&&!C.zf)) goto L_10663687;
  /* 1066367c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066367f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663682 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663685 jbe 0x106636b3 */
  if ((C.cf||C.zf)) goto L_106636b3;
L_10663687:;
  /* 10663687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066368a push ecx */
  push32((uint32_t)(ECX));
  /* 1066368b push 0x1068a4d4 */
  push32((uint32_t)(0x1068a4d4u));
  /* 10663690 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663692 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663696 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663698 call 0x10662560 */
  push32(0x1066369du); f_10662560();
  /* 1066369d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106636a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106636a3 jne 0x106636a6 */
  if (!C.zf) goto L_106636a6;
  /* 106636a5 int3  */
  x86_unimpl("int3 @ 0x106636a5");
L_106636a6:;
  /* 106636a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106636a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106636aa jne 0x10663687 */
  if (!C.zf) goto L_10663687;
  /* 106636ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106636ae jmp 0x1066387c */
  goto L_1066387c;
L_106636b3:;
  /* 106636b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106636b6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106636bb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106636be je 0x10663700 */
  if (C.zf) goto L_10663700;
  /* 106636c0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106636c4 je 0x10663700 */
  if (C.zf) goto L_10663700;
  /* 106636c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106636c9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106636cf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106636d2 je 0x10663700 */
  if (C.zf) goto L_10663700;
  /* 106636d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106636d8 je 0x10663700 */
  if (C.zf) goto L_10663700;
L_106636da:;
  /* 106636da push 0x1068a4a0 */
  push32((uint32_t)(0x1068a4a0u));
  /* 106636df push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 106636e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106636e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106636e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106636ea push 1 */
  push32((uint32_t)(0x1u));
  /* 106636ec call 0x10662560 */
  push32(0x106636f1u); f_10662560();
  /* 106636f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106636f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106636f7 jne 0x106636fa */
  if (!C.zf) goto L_106636fa;
  /* 106636f9 int3  */
  x86_unimpl("int3 @ 0x106636f9");
L_106636fa:;
  /* 106636fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106636fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106636fe jne 0x106636da */
  if (!C.zf) goto L_106636da;
L_10663700:;
  /* 10663700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663703 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663706 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10663709 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066370c push ecx */
  push32((uint32_t)(ECX));
  /* 1066370d call 0x106672f0 */
  push32(0x10663712u); f_106672f0();
  /* 10663712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663715 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10663718 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066371c jne 0x10663725 */
  if (!C.zf) goto L_10663725;
  /* 1066371e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663720 jmp 0x1066387c */
  goto L_1066387c;
L_10663725:;
  /* 10663725 mov edx, dword ptr [0x1068da88] */
  EDX = (r32((uint32_t)(0x1068da88)));
  /* 1066372b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066372e mov dword ptr [0x1068da88], edx */
  w32((uint32_t)(0x1068da88), (EDX));
  /* 10663734 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663738 je 0x10663783 */
  if (C.zf) goto L_10663783;
  /* 1066373a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066373d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10663743 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663746 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1066374d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663750 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10663757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066375a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10663761 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663767 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1066376a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066376d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10663774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663777 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1066377e jmp 0x10663823 */
  goto L_10663823;
L_10663783:;
  /* 10663783 mov edx, dword ptr [0x1068f4c8] */
  EDX = (r32((uint32_t)(0x1068f4c8)));
  /* 10663789 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066378c mov dword ptr [0x1068f4c8], edx */
  w32((uint32_t)(0x1068f4c8), (EDX));
  /* 10663792 mov eax, dword ptr [0x1068f4d0] */
  EAX = (r32((uint32_t)(0x1068f4d0)));
  /* 10663797 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066379a mov dword ptr [0x1068f4d0], eax */
  w32((uint32_t)(0x1068f4d0), (EAX));
  /* 1066379f mov ecx, dword ptr [0x1068f4d0] */
  ECX = (r32((uint32_t)(0x1068f4d0)));
  /* 106637a5 cmp ecx, dword ptr [0x1068f4d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068f4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106637ab jbe 0x106637b9 */
  if ((C.cf||C.zf)) goto L_106637b9;
  /* 106637ad mov edx, dword ptr [0x1068f4d0] */
  EDX = (r32((uint32_t)(0x1068f4d0)));
  /* 106637b3 mov dword ptr [0x1068f4d4], edx */
  w32((uint32_t)(0x1068f4d4), (EDX));
L_106637b9:;
  /* 106637b9 cmp dword ptr [0x1068f4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106637c0 je 0x106637cf */
  if (C.zf) goto L_106637cf;
  /* 106637c2 mov eax, dword ptr [0x1068f4cc] */
  EAX = (r32((uint32_t)(0x1068f4cc)));
  /* 106637c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106637ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106637cd jmp 0x106637d8 */
  goto L_106637d8;
L_106637cf:;
  /* 106637cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106637d2 mov dword ptr [0x1068f4c4], edx */
  w32((uint32_t)(0x1068f4c4), (EDX));
L_106637d8:;
  /* 106637d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106637db mov ecx, dword ptr [0x1068f4cc] */
  ECX = (r32((uint32_t)(0x1068f4cc)));
  /* 106637e1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106637e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106637e6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 106637ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106637f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106637f3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106637f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106637f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106637fc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 106637ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663805 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10663808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066380b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066380e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10663811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663814 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663817 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1066381a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066381d mov dword ptr [0x1068f4cc], ecx */
  w32((uint32_t)(0x1068f4cc), (ECX));
L_10663823:;
  /* 10663823 push 4 */
  push32((uint32_t)(0x4u));
  /* 10663825 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10663827 mov dl, byte ptr [0x1068da90] */
  DL = (r8((uint32_t)(0x1068da90)));
  /* 1066382d push edx */
  push32((uint32_t)(EDX));
  /* 1066382e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663831 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663834 push eax */
  push32((uint32_t)(EAX));
  /* 10663835 call 0x10667210 */
  push32(0x1066383au); f_10667210();
  /* 1066383a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066383d push 4 */
  push32((uint32_t)(0x4u));
  /* 1066383f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663841 mov cl, byte ptr [0x1068da90] */
  CL = (r8((uint32_t)(0x1068da90)));
  /* 10663847 push ecx */
  push32((uint32_t)(ECX));
  /* 10663848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066384b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066384e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10663852 push ecx */
  push32((uint32_t)(ECX));
  /* 10663853 call 0x10667210 */
  push32(0x10663858u); f_10667210();
  /* 10663858 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066385b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066385e push edx */
  push32((uint32_t)(EDX));
  /* 1066385f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663861 mov al, byte ptr [0x1068da92] */
  AL = (r8((uint32_t)(0x1068da92)));
  /* 10663866 push eax */
  push32((uint32_t)(EAX));
  /* 10663867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066386a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066386d push ecx */
  push32((uint32_t)(ECX));
  /* 1066386e call 0x10667210 */
  push32(0x10663873u); f_10667210();
  /* 10663873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663879 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1066387c:;
  /* 1066387c pop edi */
  EDI = (pop32());
  /* 1066387d pop esi */
  ESI = (pop32());
  /* 1066387e pop ebx */
  EBX = (pop32());
  /* 1066387f mov esp, ebp */
  ESP = (EBP);
  /* 10663881 pop ebp */
  EBP = (pop32());
  /* 10663882 ret  */
  ESPCHK(0x10663570u, _esp0);
  ESP += 4; return;
}

/* FUN_10003890 @ 0x10663890 (27 bytes, 13 insns) */
void f_10663890(void) {
  FTRACE(0x10663890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663890 push ebp */
  push32((uint32_t)(EBP));
  /* 10663891 mov ebp, esp */
  EBP = (ESP);
  /* 10663893 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663895 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663897 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066389c push eax */
  push32((uint32_t)(EAX));
  /* 1066389d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106638a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106638a1 call 0x106638b0 */
  push32(0x106638a6u); f_106638b0();
  /* 106638a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106638a9 pop ebp */
  EBP = (pop32());
  /* 106638aa ret  */
  ESPCHK(0x10663890u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x106638b0 (96 bytes, 37 insns) */
void f_106638b0(void) {
  FTRACE(0x106638b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106638b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106638b1 mov ebp, esp */
  EBP = (ESP);
  /* 106638b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106638b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106638b9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106638bd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106638c0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106638c3 push ecx */
  push32((uint32_t)(ECX));
  /* 106638c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106638c7 push edx */
  push32((uint32_t)(EDX));
  /* 106638c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106638cb push eax */
  push32((uint32_t)(EAX));
  /* 106638cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106638cf push ecx */
  push32((uint32_t)(ECX));
  /* 106638d0 call 0x106634a0 */
  push32(0x106638d5u); f_106634a0();
  /* 106638d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106638d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106638db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106638df je 0x10663909 */
  if (C.zf) goto L_10663909;
  /* 106638e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106638e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106638e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106638ea add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106638ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106638f0:;
  /* 106638f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106638f3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106638f6 jae 0x10663909 */
  if (!C.cf) goto L_10663909;
  /* 106638f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106638fb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106638fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663901 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663904 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10663907 jmp 0x106638f0 */
  goto L_106638f0;
L_10663909:;
  /* 10663909 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066390c mov esp, ebp */
  ESP = (EBP);
  /* 1066390e pop ebp */
  EBP = (pop32());
  /* 1066390f ret  */
  ESPCHK(0x106638b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003910 @ 0x10663910 (27 bytes, 13 insns) */
void f_10663910(void) {
  FTRACE(0x10663910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663910 push ebp */
  push32((uint32_t)(EBP));
  /* 10663911 mov ebp, esp */
  EBP = (ESP);
  /* 10663913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663917 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663919 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066391c push eax */
  push32((uint32_t)(EAX));
  /* 1066391d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663920 push ecx */
  push32((uint32_t)(ECX));
  /* 10663921 call 0x10663930 */
  push32(0x10663926u); f_10663930();
  /* 10663926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663929 pop ebp */
  EBP = (pop32());
  /* 1066392a ret  */
  ESPCHK(0x10663910u, _esp0);
  ESP += 4; return;
}

/* FUN_10003930 @ 0x10663930 (64 bytes, 27 insns) */
void f_10663930(void) {
  FTRACE(0x10663930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663930 push ebp */
  push32((uint32_t)(EBP));
  /* 10663931 mov ebp, esp */
  EBP = (ESP);
  /* 10663933 push ecx */
  push32((uint32_t)(ECX));
  /* 10663934 push 9 */
  push32((uint32_t)(0x9u));
  /* 10663936 call 0x10666ea0 */
  push32(0x1066393bu); f_10666ea0();
  /* 1066393b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066393e push 1 */
  push32((uint32_t)(0x1u));
  /* 10663940 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663943 push eax */
  push32((uint32_t)(EAX));
  /* 10663944 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10663947 push ecx */
  push32((uint32_t)(ECX));
  /* 10663948 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066394b push edx */
  push32((uint32_t)(EDX));
  /* 1066394c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066394f push eax */
  push32((uint32_t)(EAX));
  /* 10663950 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663953 push ecx */
  push32((uint32_t)(ECX));
  /* 10663954 call 0x10663970 */
  push32(0x10663959u); f_10663970();
  /* 10663959 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066395c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066395f push 9 */
  push32((uint32_t)(0x9u));
  /* 10663961 call 0x10666f40 */
  push32(0x10663966u); f_10666f40();
  /* 10663966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066396c mov esp, ebp */
  ESP = (EBP);
  /* 1066396e pop ebp */
  EBP = (pop32());
  /* 1066396f ret  */
  ESPCHK(0x10663930u, _esp0);
  ESP += 4; return;
}

/* FUN_10003970 @ 0x10663970 (1297 bytes, 431 insns) */
void f_10663970(void) {
  FTRACE(0x10663970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663970 push ebp */
  push32((uint32_t)(EBP));
  /* 10663971 mov ebp, esp */
  EBP = (ESP);
  /* 10663973 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10663976 push ebx */
  push32((uint32_t)(EBX));
  /* 10663977 push esi */
  push32((uint32_t)(ESI));
  /* 10663978 push edi */
  push32((uint32_t)(EDI));
  /* 10663979 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10663980 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663984 jne 0x106639a3 */
  if (!C.zf) goto L_106639a3;
  /* 10663986 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663989 push eax */
  push32((uint32_t)(EAX));
  /* 1066398a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066398d push ecx */
  push32((uint32_t)(ECX));
  /* 1066398e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663991 push edx */
  push32((uint32_t)(EDX));
  /* 10663992 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663995 push eax */
  push32((uint32_t)(EAX));
  /* 10663996 call 0x106634a0 */
  push32(0x1066399bu); f_106634a0();
  /* 1066399b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066399e jmp 0x10663e7a */
  goto L_10663e7a;
L_106639a3:;
  /* 106639a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106639a7 je 0x106639c6 */
  if (C.zf) goto L_106639c6;
  /* 106639a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106639ad jne 0x106639c6 */
  if (!C.zf) goto L_106639c6;
  /* 106639af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106639b2 push ecx */
  push32((uint32_t)(ECX));
  /* 106639b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106639b6 push edx */
  push32((uint32_t)(EDX));
  /* 106639b7 call 0x10663f30 */
  push32(0x106639bcu); f_10663f30();
  /* 106639bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106639bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106639c1 jmp 0x10663e7a */
  goto L_10663e7a;
L_106639c6:;
  /* 106639c6 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 106639cb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106639ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106639d0 je 0x10663a02 */
  if (C.zf) goto L_10663a02;
L_106639d2:;
  /* 106639d2 call 0x10664640 */
  push32(0x106639d7u); f_10664640();
  /* 106639d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106639d9 jne 0x106639fc */
  if (!C.zf) goto L_106639fc;
  /* 106639db push 0x1068a564 */
  push32((uint32_t)(0x1068a564u));
  /* 106639e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106639e2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 106639e7 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 106639ec push 2 */
  push32((uint32_t)(0x2u));
  /* 106639ee call 0x10662560 */
  push32(0x106639f3u); f_10662560();
  /* 106639f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106639f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106639f9 jne 0x106639fc */
  if (!C.zf) goto L_106639fc;
  /* 106639fb int3  */
  x86_unimpl("int3 @ 0x106639fb");
L_106639fc:;
  /* 106639fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106639fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663a00 jne 0x106639d2 */
  if (!C.zf) goto L_106639d2;
L_10663a02:;
  /* 10663a02 mov edx, dword ptr [0x1068da88] */
  EDX = (r32((uint32_t)(0x1068da88)));
  /* 10663a08 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10663a0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10663a0e cmp eax, dword ptr [0x1068da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663a14 jne 0x10663a17 */
  if (!C.zf) goto L_10663a17;
  /* 10663a16 int3  */
  x86_unimpl("int3 @ 0x10663a16");
L_10663a17:;
  /* 10663a17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663a1a push ecx */
  push32((uint32_t)(ECX));
  /* 10663a1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10663a1e push edx */
  push32((uint32_t)(EDX));
  /* 10663a1f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10663a22 push eax */
  push32((uint32_t)(EAX));
  /* 10663a23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663a26 push ecx */
  push32((uint32_t)(ECX));
  /* 10663a27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663a2a push edx */
  push32((uint32_t)(EDX));
  /* 10663a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663a2e push eax */
  push32((uint32_t)(EAX));
  /* 10663a2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10663a31 call dword ptr [0x1068dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068dc90))), 0x10663a37u);
  /* 10663a37 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663a3c jne 0x10663a9c */
  if (!C.zf) goto L_10663a9c;
  /* 10663a3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663a42 je 0x10663a6f */
  if (C.zf) goto L_10663a6f;
L_10663a44:;
  /* 10663a44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10663a48 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10663a4b push edx */
  push32((uint32_t)(EDX));
  /* 10663a4c push 0x1068a6e0 */
  push32((uint32_t)(0x1068a6e0u));
  /* 10663a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a59 call 0x10662560 */
  push32(0x10663a5eu); f_10662560();
  /* 10663a5e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663a61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663a64 jne 0x10663a67 */
  if (!C.zf) goto L_10663a67;
  /* 10663a66 int3  */
  x86_unimpl("int3 @ 0x10663a66");
L_10663a67:;
  /* 10663a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663a6b jne 0x10663a44 */
  if (!C.zf) goto L_10663a44;
  /* 10663a6d jmp 0x10663a95 */
  goto L_10663a95;
L_10663a6f:;
  /* 10663a6f push 0x1068a6bc */
  push32((uint32_t)(0x1068a6bcu));
  /* 10663a74 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10663a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10663a81 call 0x10662560 */
  push32(0x10663a86u); f_10662560();
  /* 10663a86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663a89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663a8c jne 0x10663a8f */
  if (!C.zf) goto L_10663a8f;
  /* 10663a8e int3  */
  x86_unimpl("int3 @ 0x10663a8e");
L_10663a8f:;
  /* 10663a8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663a91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663a93 jne 0x10663a6f */
  if (!C.zf) goto L_10663a6f;
L_10663a95:;
  /* 10663a95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663a97 jmp 0x10663e7a */
  goto L_10663e7a;
L_10663a9c:;
  /* 10663a9c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663aa0 jbe 0x10663ace */
  if ((C.cf||C.zf)) goto L_10663ace;
L_10663aa2:;
  /* 10663aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663aa5 push edx */
  push32((uint32_t)(EDX));
  /* 10663aa6 push 0x1068a68c */
  push32((uint32_t)(0x1068a68cu));
  /* 10663aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10663aad push 0 */
  push32((uint32_t)(0x0u));
  /* 10663aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10663ab1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663ab3 call 0x10662560 */
  push32(0x10663ab8u); f_10662560();
  /* 10663ab8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663abb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663abe jne 0x10663ac1 */
  if (!C.zf) goto L_10663ac1;
  /* 10663ac0 int3  */
  x86_unimpl("int3 @ 0x10663ac0");
L_10663ac1:;
  /* 10663ac1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663ac3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663ac5 jne 0x10663aa2 */
  if (!C.zf) goto L_10663aa2;
  /* 10663ac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663ac9 jmp 0x10663e7a */
  goto L_10663e7a;
L_10663ace:;
  /* 10663ace cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663ad2 je 0x10663b16 */
  if (C.zf) goto L_10663b16;
  /* 10663ad4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663ad7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10663add cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663ae0 je 0x10663b16 */
  if (C.zf) goto L_10663b16;
  /* 10663ae2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663ae5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10663aeb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663aee je 0x10663b16 */
  if (C.zf) goto L_10663b16;
L_10663af0:;
  /* 10663af0 push 0x1068a4a0 */
  push32((uint32_t)(0x1068a4a0u));
  /* 10663af5 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10663afa push 0 */
  push32((uint32_t)(0x0u));
  /* 10663afc push 0 */
  push32((uint32_t)(0x0u));
  /* 10663afe push 0 */
  push32((uint32_t)(0x0u));
  /* 10663b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663b02 call 0x10662560 */
  push32(0x10663b07u); f_10662560();
  /* 10663b07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663b0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b0d jne 0x10663b10 */
  if (!C.zf) goto L_10663b10;
  /* 10663b0f int3  */
  x86_unimpl("int3 @ 0x10663b0f");
L_10663b10:;
  /* 10663b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663b14 jne 0x10663af0 */
  if (!C.zf) goto L_10663af0;
L_10663b16:;
  /* 10663b16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10663b1a call 0x10664aa0 */
  push32(0x10663b1fu); f_10664aa0();
  /* 10663b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663b24 jne 0x10663b47 */
  if (!C.zf) goto L_10663b47;
  /* 10663b26 push 0x1068a668 */
  push32((uint32_t)(0x1068a668u));
  /* 10663b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10663b2d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10663b32 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663b39 call 0x10662560 */
  push32(0x10663b3eu); f_10662560();
  /* 10663b3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663b41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b44 jne 0x10663b47 */
  if (!C.zf) goto L_10663b47;
  /* 10663b46 int3  */
  x86_unimpl("int3 @ 0x10663b46");
L_10663b47:;
  /* 10663b47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10663b49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10663b4b jne 0x10663b16 */
  if (!C.zf) goto L_10663b16;
  /* 10663b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663b50 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10663b53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10663b56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663b59 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b5d jne 0x10663b66 */
  if (!C.zf) goto L_10663b66;
  /* 10663b5f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10663b66:;
  /* 10663b66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b6a je 0x10663baa */
  if (C.zf) goto L_10663baa;
L_10663b6c:;
  /* 10663b6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663b6f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b76 jne 0x10663b81 */
  if (!C.zf) goto L_10663b81;
  /* 10663b78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663b7b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b7f je 0x10663ba2 */
  if (C.zf) goto L_10663ba2;
L_10663b81:;
  /* 10663b81 push 0x1068a620 */
  push32((uint32_t)(0x1068a620u));
  /* 10663b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663b88 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10663b8d push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663b92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663b94 call 0x10662560 */
  push32(0x10663b99u); f_10662560();
  /* 10663b99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663b9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663b9f jne 0x10663ba2 */
  if (!C.zf) goto L_10663ba2;
  /* 10663ba1 int3  */
  x86_unimpl("int3 @ 0x10663ba1");
L_10663ba2:;
  /* 10663ba2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663ba4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663ba6 jne 0x10663b6c */
  if (!C.zf) goto L_10663b6c;
  /* 10663ba8 jmp 0x10663c0e */
  goto L_10663c0e;
L_10663baa:;
  /* 10663baa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663bad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10663bb0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10663bb5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663bb8 jne 0x10663bcf */
  if (!C.zf) goto L_10663bcf;
  /* 10663bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663bbd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10663bc3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663bc6 jne 0x10663bcf */
  if (!C.zf) goto L_10663bcf;
  /* 10663bc8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10663bcf:;
  /* 10663bcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663bd2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10663bd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10663bda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663bdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10663be3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663be5 je 0x10663c08 */
  if (C.zf) goto L_10663c08;
  /* 10663be7 push 0x1068a5e4 */
  push32((uint32_t)(0x1068a5e4u));
  /* 10663bec push 0 */
  push32((uint32_t)(0x0u));
  /* 10663bee push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10663bf3 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663bfa call 0x10662560 */
  push32(0x10663bffu); f_10662560();
  /* 10663bff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663c05 jne 0x10663c08 */
  if (!C.zf) goto L_10663c08;
  /* 10663c07 int3  */
  x86_unimpl("int3 @ 0x10663c07");
L_10663c08:;
  /* 10663c08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10663c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10663c0c jne 0x10663bcf */
  if (!C.zf) goto L_10663bcf;
L_10663c0e:;
  /* 10663c0e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663c12 je 0x10663c39 */
  if (C.zf) goto L_10663c39;
  /* 10663c14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663c17 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c1a push eax */
  push32((uint32_t)(EAX));
  /* 10663c1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663c1e push ecx */
  push32((uint32_t)(ECX));
  /* 10663c1f call 0x10667420 */
  push32(0x10663c24u); f_10667420();
  /* 10663c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10663c2a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663c2e jne 0x10663c37 */
  if (!C.zf) goto L_10663c37;
  /* 10663c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663c32 jmp 0x10663e7a */
  goto L_10663e7a;
L_10663c37:;
  /* 10663c37 jmp 0x10663c5c */
  goto L_10663c5c;
L_10663c39:;
  /* 10663c39 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663c3c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c3f push edx */
  push32((uint32_t)(EDX));
  /* 10663c40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10663c43 push eax */
  push32((uint32_t)(EAX));
  /* 10663c44 call 0x10667370 */
  push32(0x10663c49u); f_10667370();
  /* 10663c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10663c4f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663c53 jne 0x10663c5c */
  if (!C.zf) goto L_10663c5c;
  /* 10663c55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663c57 jmp 0x10663e7a */
  goto L_10663e7a;
L_10663c5c:;
  /* 10663c5c mov ecx, dword ptr [0x1068da88] */
  ECX = (r32((uint32_t)(0x1068da88)));
  /* 10663c62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c65 mov dword ptr [0x1068da88], ecx */
  w32((uint32_t)(0x1068da88), (ECX));
  /* 10663c6b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663c6f jne 0x10663cc7 */
  if (!C.zf) goto L_10663cc7;
  /* 10663c71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663c74 mov eax, dword ptr [0x1068f4c8] */
  EAX = (r32((uint32_t)(0x1068f4c8)));
  /* 10663c79 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10663c7c mov dword ptr [0x1068f4c8], eax */
  w32((uint32_t)(0x1068f4c8), (EAX));
  /* 10663c81 mov ecx, dword ptr [0x1068f4c8] */
  ECX = (r32((uint32_t)(0x1068f4c8)));
  /* 10663c87 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663c8a mov dword ptr [0x1068f4c8], ecx */
  w32((uint32_t)(0x1068f4c8), (ECX));
  /* 10663c90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663c93 mov eax, dword ptr [0x1068f4d0] */
  EAX = (r32((uint32_t)(0x1068f4d0)));
  /* 10663c98 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10663c9b mov dword ptr [0x1068f4d0], eax */
  w32((uint32_t)(0x1068f4d0), (EAX));
  /* 10663ca0 mov ecx, dword ptr [0x1068f4d0] */
  ECX = (r32((uint32_t)(0x1068f4d0)));
  /* 10663ca6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663ca9 mov dword ptr [0x1068f4d0], ecx */
  w32((uint32_t)(0x1068f4d0), (ECX));
  /* 10663caf mov edx, dword ptr [0x1068f4d0] */
  EDX = (r32((uint32_t)(0x1068f4d0)));
  /* 10663cb5 cmp edx, dword ptr [0x1068f4d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068f4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663cbb jbe 0x10663cc7 */
  if ((C.cf||C.zf)) goto L_10663cc7;
  /* 10663cbd mov eax, dword ptr [0x1068f4d0] */
  EAX = (r32((uint32_t)(0x1068f4d0)));
  /* 10663cc2 mov dword ptr [0x1068f4d4], eax */
  w32((uint32_t)(0x1068f4d4), (EAX));
L_10663cc7:;
  /* 10663cc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663cca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663ccd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10663cd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663cd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663cd6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663cd9 jbe 0x10663cff */
  if ((C.cf||C.zf)) goto L_10663cff;
  /* 10663cdb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663cde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663ce1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10663ce4 push edx */
  push32((uint32_t)(EDX));
  /* 10663ce5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663ce7 mov al, byte ptr [0x1068da92] */
  AL = (r8((uint32_t)(0x1068da92)));
  /* 10663cec push eax */
  push32((uint32_t)(EAX));
  /* 10663ced mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663cf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663cf3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663cf6 push edx */
  push32((uint32_t)(EDX));
  /* 10663cf7 call 0x10667210 */
  push32(0x10663cfcu); f_10667210();
  /* 10663cfc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10663cff:;
  /* 10663cff push 4 */
  push32((uint32_t)(0x4u));
  /* 10663d01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10663d03 mov al, byte ptr [0x1068da90] */
  AL = (r8((uint32_t)(0x1068da90)));
  /* 10663d08 push eax */
  push32((uint32_t)(EAX));
  /* 10663d09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663d0c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10663d0f push ecx */
  push32((uint32_t)(ECX));
  /* 10663d10 call 0x10667210 */
  push32(0x10663d15u); f_10667210();
  /* 10663d15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663d18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d1c jne 0x10663d39 */
  if (!C.zf) goto L_10663d39;
  /* 10663d1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d21 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10663d24 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10663d27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d2a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663d2d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10663d30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d33 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10663d36 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10663d39:;
  /* 10663d39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663d3f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10663d42:;
  /* 10663d42 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d46 jne 0x10663d77 */
  if (!C.zf) goto L_10663d77;
  /* 10663d48 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d4c jne 0x10663d56 */
  if (!C.zf) goto L_10663d56;
  /* 10663d4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d51 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d54 je 0x10663d77 */
  if (C.zf) goto L_10663d77;
L_10663d56:;
  /* 10663d56 push 0x1068a5b0 */
  push32((uint32_t)(0x1068a5b0u));
  /* 10663d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10663d5d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10663d62 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663d69 call 0x10662560 */
  push32(0x10663d6eu); f_10662560();
  /* 10663d6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663d71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d74 jne 0x10663d77 */
  if (!C.zf) goto L_10663d77;
  /* 10663d76 int3  */
  x86_unimpl("int3 @ 0x10663d76");
L_10663d77:;
  /* 10663d77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10663d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10663d7b jne 0x10663d42 */
  if (!C.zf) goto L_10663d42;
  /* 10663d7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d80 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d83 je 0x10663d8b */
  if (C.zf) goto L_10663d8b;
  /* 10663d85 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d89 je 0x10663d93 */
  if (C.zf) goto L_10663d93;
L_10663d8b:;
  /* 10663d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663d8e jmp 0x10663e7a */
  goto L_10663e7a;
L_10663d93:;
  /* 10663d93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663d99 je 0x10663dab */
  if (C.zf) goto L_10663dab;
  /* 10663d9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663d9e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10663da0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663da3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10663da6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10663da9 jmp 0x10663de7 */
  goto L_10663de7;
L_10663dab:;
  /* 10663dab mov eax, dword ptr [0x1068f4c4] */
  EAX = (r32((uint32_t)(0x1068f4c4)));
  /* 10663db0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663db3 je 0x10663dd6 */
  if (C.zf) goto L_10663dd6;
  /* 10663db5 push 0x1068a594 */
  push32((uint32_t)(0x1068a594u));
  /* 10663dba push 0 */
  push32((uint32_t)(0x0u));
  /* 10663dbc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10663dc1 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10663dc8 call 0x10662560 */
  push32(0x10663dcdu); f_10662560();
  /* 10663dcd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663dd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663dd3 jne 0x10663dd6 */
  if (!C.zf) goto L_10663dd6;
  /* 10663dd5 int3  */
  x86_unimpl("int3 @ 0x10663dd5");
L_10663dd6:;
  /* 10663dd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663dd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663dda jne 0x10663dab */
  if (!C.zf) goto L_10663dab;
  /* 10663ddc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663ddf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10663de2 mov dword ptr [0x1068f4c4], eax */
  w32((uint32_t)(0x1068f4c4), (EAX));
L_10663de7:;
  /* 10663de7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663dea cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663dee je 0x10663dff */
  if (C.zf) goto L_10663dff;
  /* 10663df0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663df3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10663df6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663df9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10663dfb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10663dfd jmp 0x10663e3a */
  goto L_10663e3a;
L_10663dff:;
  /* 10663dff mov eax, dword ptr [0x1068f4cc] */
  EAX = (r32((uint32_t)(0x1068f4cc)));
  /* 10663e04 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663e07 je 0x10663e2a */
  if (C.zf) goto L_10663e2a;
  /* 10663e09 push 0x1068a578 */
  push32((uint32_t)(0x1068a578u));
  /* 10663e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10663e10 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10663e15 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10663e1c call 0x10662560 */
  push32(0x10663e21u); f_10662560();
  /* 10663e21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663e27 jne 0x10663e2a */
  if (!C.zf) goto L_10663e2a;
  /* 10663e29 int3  */
  x86_unimpl("int3 @ 0x10663e29");
L_10663e2a:;
  /* 10663e2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663e2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663e2e jne 0x10663dff */
  if (!C.zf) goto L_10663dff;
  /* 10663e30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663e33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10663e35 mov dword ptr [0x1068f4cc], eax */
  w32((uint32_t)(0x1068f4cc), (EAX));
L_10663e3a:;
  /* 10663e3a cmp dword ptr [0x1068f4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663e41 je 0x10663e51 */
  if (C.zf) goto L_10663e51;
  /* 10663e43 mov ecx, dword ptr [0x1068f4cc] */
  ECX = (r32((uint32_t)(0x1068f4cc)));
  /* 10663e49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663e4c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10663e4f jmp 0x10663e59 */
  goto L_10663e59;
L_10663e51:;
  /* 10663e51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663e54 mov dword ptr [0x1068f4c4], eax */
  w32((uint32_t)(0x1068f4c4), (EAX));
L_10663e59:;
  /* 10663e59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663e5c mov edx, dword ptr [0x1068f4cc] */
  EDX = (r32((uint32_t)(0x1068f4cc)));
  /* 10663e62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10663e64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663e67 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10663e6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10663e71 mov dword ptr [0x1068f4cc], ecx */
  w32((uint32_t)(0x1068f4cc), (ECX));
  /* 10663e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10663e7a:;
  /* 10663e7a pop edi */
  EDI = (pop32());
  /* 10663e7b pop esi */
  ESI = (pop32());
  /* 10663e7c pop ebx */
  EBX = (pop32());
  /* 10663e7d mov esp, ebp */
  ESP = (EBP);
  /* 10663e7f pop ebp */
  EBP = (pop32());
  /* 10663e80 ret  */
  ESPCHK(0x10663970u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e90 @ 0x10663e90 (27 bytes, 13 insns) */
void f_10663e90(void) {
  FTRACE(0x10663e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10663e91 mov ebp, esp */
  EBP = (ESP);
  /* 10663e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663e97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663e99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663e9c push eax */
  push32((uint32_t)(EAX));
  /* 10663e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 10663ea1 call 0x10663eb0 */
  push32(0x10663ea6u); f_10663eb0();
  /* 10663ea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663ea9 pop ebp */
  EBP = (pop32());
  /* 10663eaa ret  */
  ESPCHK(0x10663e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb0 @ 0x10663eb0 (64 bytes, 27 insns) */
void f_10663eb0(void) {
  FTRACE(0x10663eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10663eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10663eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10663eb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10663eb6 call 0x10666ea0 */
  push32(0x10663ebbu); f_10666ea0();
  /* 10663ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 10663ec0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10663ec3 push eax */
  push32((uint32_t)(EAX));
  /* 10663ec4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10663ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 10663ec8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10663ecb push edx */
  push32((uint32_t)(EDX));
  /* 10663ecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663ecf push eax */
  push32((uint32_t)(EAX));
  /* 10663ed0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10663ed4 call 0x10663970 */
  push32(0x10663ed9u); f_10663970();
  /* 10663ed9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663edc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10663edf push 9 */
  push32((uint32_t)(0x9u));
  /* 10663ee1 call 0x10666f40 */
  push32(0x10663ee6u); f_10666f40();
  /* 10663ee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10663eec mov esp, ebp */
  ESP = (EBP);
  /* 10663eee pop ebp */
  EBP = (pop32());
  /* 10663eef ret  */
  ESPCHK(0x10663eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef0 @ 0x10663ef0 (19 bytes, 9 insns) */
void f_10663ef0(void) {
  FTRACE(0x10663ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10663ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10663ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663ef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10663ef9 call 0x10663f30 */
  push32(0x10663efeu); f_10663f30();
  /* 10663efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663f01 pop ebp */
  EBP = (pop32());
  /* 10663f02 ret  */
  ESPCHK(0x10663ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x10663f10 (19 bytes, 9 insns) */
void f_10663f10(void) {
  FTRACE(0x10663f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10663f11 mov ebp, esp */
  EBP = (ESP);
  /* 10663f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10663f15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663f18 push eax */
  push32((uint32_t)(EAX));
  /* 10663f19 call 0x10663f60 */
  push32(0x10663f1eu); f_10663f60();
  /* 10663f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663f21 pop ebp */
  EBP = (pop32());
  /* 10663f22 ret  */
  ESPCHK(0x10663f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x10663f30 (41 bytes, 16 insns) */
void f_10663f30(void) {
  FTRACE(0x10663f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10663f31 mov ebp, esp */
  EBP = (ESP);
  /* 10663f33 push 9 */
  push32((uint32_t)(0x9u));
  /* 10663f35 call 0x10666ea0 */
  push32(0x10663f3au); f_10666ea0();
  /* 10663f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663f3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663f40 push eax */
  push32((uint32_t)(EAX));
  /* 10663f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663f44 push ecx */
  push32((uint32_t)(ECX));
  /* 10663f45 call 0x10663f60 */
  push32(0x10663f4au); f_10663f60();
  /* 10663f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663f4d push 9 */
  push32((uint32_t)(0x9u));
  /* 10663f4f call 0x10666f40 */
  push32(0x10663f54u); f_10666f40();
  /* 10663f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663f57 pop ebp */
  EBP = (pop32());
  /* 10663f58 ret  */
  ESPCHK(0x10663f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x10663f60 (1004 bytes, 342 insns) */
void f_10663f60(void) {
  FTRACE(0x10663f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10663f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10663f61 mov ebp, esp */
  EBP = (ESP);
  /* 10663f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10663f64 push ebx */
  push32((uint32_t)(EBX));
  /* 10663f65 push esi */
  push32((uint32_t)(ESI));
  /* 10663f66 push edi */
  push32((uint32_t)(EDI));
  /* 10663f67 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 10663f6c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10663f6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663f71 je 0x10663fa3 */
  if (C.zf) goto L_10663fa3;
L_10663f73:;
  /* 10663f73 call 0x10664640 */
  push32(0x10663f78u); f_10664640();
  /* 10663f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663f7a jne 0x10663f9d */
  if (!C.zf) goto L_10663f9d;
  /* 10663f7c push 0x1068a564 */
  push32((uint32_t)(0x1068a564u));
  /* 10663f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663f83 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10663f88 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10663f8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10663f8f call 0x10662560 */
  push32(0x10663f94u); f_10662560();
  /* 10663f94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663f97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663f9a jne 0x10663f9d */
  if (!C.zf) goto L_10663f9d;
  /* 10663f9c int3  */
  x86_unimpl("int3 @ 0x10663f9c");
L_10663f9d:;
  /* 10663f9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663f9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663fa1 jne 0x10663f73 */
  if (!C.zf) goto L_10663f73;
L_10663fa3:;
  /* 10663fa3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663fa7 jne 0x10663fae */
  if (!C.zf) goto L_10663fae;
  /* 10663fa9 jmp 0x10664345 */
  goto L_10664345;
L_10663fae:;
  /* 10663fae push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10663fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10663fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663fbd push eax */
  push32((uint32_t)(EAX));
  /* 10663fbe push 3 */
  push32((uint32_t)(0x3u));
  /* 10663fc0 call dword ptr [0x1068dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068dc90))), 0x10663fc6u);
  /* 10663fc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10663fcb jne 0x10663ff8 */
  if (!C.zf) goto L_10663ff8;
L_10663fcd:;
  /* 10663fcd push 0x1068a828 */
  push32((uint32_t)(0x1068a828u));
  /* 10663fd2 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10663fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10663fdf call 0x10662560 */
  push32(0x10663fe4u); f_10662560();
  /* 10663fe4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10663fe7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10663fea jne 0x10663fed */
  if (!C.zf) goto L_10663fed;
  /* 10663fec int3  */
  x86_unimpl("int3 @ 0x10663fec");
L_10663fed:;
  /* 10663fed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10663fef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10663ff1 jne 0x10663fcd */
  if (!C.zf) goto L_10663fcd;
  /* 10663ff3 jmp 0x10664345 */
  goto L_10664345;
L_10663ff8:;
  /* 10663ff8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10663ffb push edx */
  push32((uint32_t)(EDX));
  /* 10663ffc call 0x10664aa0 */
  push32(0x10664001u); f_10664aa0();
  /* 10664001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664006 jne 0x10664029 */
  if (!C.zf) goto L_10664029;
  /* 10664008 push 0x1068a668 */
  push32((uint32_t)(0x1068a668u));
  /* 1066400d push 0 */
  push32((uint32_t)(0x0u));
  /* 1066400f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10664014 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10664019 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066401b call 0x10662560 */
  push32(0x10664020u); f_10662560();
  /* 10664020 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664023 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664026 jne 0x10664029 */
  if (!C.zf) goto L_10664029;
  /* 10664028 int3  */
  x86_unimpl("int3 @ 0x10664028");
L_10664029:;
  /* 10664029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066402b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066402d jne 0x10663ff8 */
  if (!C.zf) goto L_10663ff8;
  /* 1066402f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664032 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664035 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10664038:;
  /* 10664038 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066403b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1066403e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664043 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664046 je 0x1066408b */
  if (C.zf) goto L_1066408b;
  /* 10664048 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066404b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066404f je 0x1066408b */
  if (C.zf) goto L_1066408b;
  /* 10664051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664054 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664057 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066405c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066405f je 0x1066408b */
  if (C.zf) goto L_1066408b;
  /* 10664061 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664064 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664068 je 0x1066408b */
  if (C.zf) goto L_1066408b;
  /* 1066406a push 0x1068a800 */
  push32((uint32_t)(0x1068a800u));
  /* 1066406f push 0 */
  push32((uint32_t)(0x0u));
  /* 10664071 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10664076 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 1066407b push 2 */
  push32((uint32_t)(0x2u));
  /* 1066407d call 0x10662560 */
  push32(0x10664082u); f_10662560();
  /* 10664082 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664085 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664088 jne 0x1066408b */
  if (!C.zf) goto L_1066408b;
  /* 1066408a int3  */
  x86_unimpl("int3 @ 0x1066408a");
L_1066408b:;
  /* 1066408b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066408d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066408f jne 0x10664038 */
  if (!C.zf) goto L_10664038;
  /* 10664091 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 10664096 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10664099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066409b jne 0x10664166 */
  if (!C.zf) goto L_10664166;
  /* 106640a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 106640a3 mov cl, byte ptr [0x1068da90] */
  CL = (r8((uint32_t)(0x1068da90)));
  /* 106640a9 push ecx */
  push32((uint32_t)(ECX));
  /* 106640aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106640ad add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106640b0 push edx */
  push32((uint32_t)(EDX));
  /* 106640b1 call 0x106645b0 */
  push32(0x106640b6u); f_106645b0();
  /* 106640b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106640b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106640bb jne 0x10664100 */
  if (!C.zf) goto L_10664100;
L_106640bd:;
  /* 106640bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106640c0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106640c3 push eax */
  push32((uint32_t)(EAX));
  /* 106640c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106640c7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106640ca push edx */
  push32((uint32_t)(EDX));
  /* 106640cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106640ce mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106640d1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106640d7 mov edx, dword ptr [ecx*4 + 0x1068da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da94)));
  /* 106640de push edx */
  push32((uint32_t)(EDX));
  /* 106640df push 0x1068a7d4 */
  push32((uint32_t)(0x1068a7d4u));
  /* 106640e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106640e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106640e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106640ea push 1 */
  push32((uint32_t)(0x1u));
  /* 106640ec call 0x10662560 */
  push32(0x106640f1u); f_10662560();
  /* 106640f1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106640f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106640f7 jne 0x106640fa */
  if (!C.zf) goto L_106640fa;
  /* 106640f9 int3  */
  x86_unimpl("int3 @ 0x106640f9");
L_106640fa:;
  /* 106640fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106640fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106640fe jne 0x106640bd */
  if (!C.zf) goto L_106640bd;
L_10664100:;
  /* 10664100 push 4 */
  push32((uint32_t)(0x4u));
  /* 10664102 mov cl, byte ptr [0x1068da90] */
  CL = (r8((uint32_t)(0x1068da90)));
  /* 10664108 push ecx */
  push32((uint32_t)(ECX));
  /* 10664109 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066410c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1066410f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664112 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10664116 push edx */
  push32((uint32_t)(EDX));
  /* 10664117 call 0x106645b0 */
  push32(0x1066411cu); f_106645b0();
  /* 1066411c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066411f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664121 jne 0x10664166 */
  if (!C.zf) goto L_10664166;
L_10664123:;
  /* 10664123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664126 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664129 push eax */
  push32((uint32_t)(EAX));
  /* 1066412a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066412d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10664130 push edx */
  push32((uint32_t)(EDX));
  /* 10664131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664134 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10664137 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066413d mov edx, dword ptr [ecx*4 + 0x1068da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da94)));
  /* 10664144 push edx */
  push32((uint32_t)(EDX));
  /* 10664145 push 0x1068a7a8 */
  push32((uint32_t)(0x1068a7a8u));
  /* 1066414a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066414c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066414e push 0 */
  push32((uint32_t)(0x0u));
  /* 10664150 push 1 */
  push32((uint32_t)(0x1u));
  /* 10664152 call 0x10662560 */
  push32(0x10664157u); f_10662560();
  /* 10664157 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066415a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066415d jne 0x10664160 */
  if (!C.zf) goto L_10664160;
  /* 1066415f int3  */
  x86_unimpl("int3 @ 0x1066415f");
L_10664160:;
  /* 10664160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664164 jne 0x10664123 */
  if (!C.zf) goto L_10664123;
L_10664166:;
  /* 10664166 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664169 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066416d jne 0x106641db */
  if (!C.zf) goto L_106641db;
L_1066416f:;
  /* 1066416f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664172 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664179 jne 0x10664184 */
  if (!C.zf) goto L_10664184;
  /* 1066417b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066417e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664182 je 0x106641a5 */
  if (C.zf) goto L_106641a5;
L_10664184:;
  /* 10664184 push 0x1068a768 */
  push32((uint32_t)(0x1068a768u));
  /* 10664189 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066418b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10664190 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10664195 push 2 */
  push32((uint32_t)(0x2u));
  /* 10664197 call 0x10662560 */
  push32(0x1066419cu); f_10662560();
  /* 1066419c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066419f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106641a2 jne 0x106641a5 */
  if (!C.zf) goto L_106641a5;
  /* 106641a4 int3  */
  x86_unimpl("int3 @ 0x106641a4");
L_106641a5:;
  /* 106641a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106641a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106641a9 jne 0x1066416f */
  if (!C.zf) goto L_1066416f;
  /* 106641ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106641ae mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106641b1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106641b4 push eax */
  push32((uint32_t)(EAX));
  /* 106641b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106641b7 mov cl, byte ptr [0x1068da91] */
  CL = (r8((uint32_t)(0x1068da91)));
  /* 106641bd push ecx */
  push32((uint32_t)(ECX));
  /* 106641be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106641c1 push edx */
  push32((uint32_t)(EDX));
  /* 106641c2 call 0x10667210 */
  push32(0x106641c7u); f_10667210();
  /* 106641c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106641ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106641cd push eax */
  push32((uint32_t)(EAX));
  /* 106641ce call 0x10667610 */
  push32(0x106641d3u); f_10667610();
  /* 106641d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106641d6 jmp 0x10664345 */
  goto L_10664345;
L_106641db:;
  /* 106641db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106641de cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106641e2 jne 0x106641f1 */
  if (!C.zf) goto L_106641f1;
  /* 106641e4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106641e8 jne 0x106641f1 */
  if (!C.zf) goto L_106641f1;
  /* 106641ea mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_106641f1:;
  /* 106641f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106641f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106641f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106641fa je 0x1066421d */
  if (C.zf) goto L_1066421d;
  /* 106641fc push 0x1068a748 */
  push32((uint32_t)(0x1068a748u));
  /* 10664201 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664203 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10664208 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 1066420d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066420f call 0x10662560 */
  push32(0x10664214u); f_10662560();
  /* 10664214 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664217 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066421a jne 0x1066421d */
  if (!C.zf) goto L_1066421d;
  /* 1066421c int3  */
  x86_unimpl("int3 @ 0x1066421c");
L_1066421d:;
  /* 1066421d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066421f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10664221 jne 0x106641f1 */
  if (!C.zf) goto L_106641f1;
  /* 10664223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664226 mov eax, dword ptr [0x1068f4d0] */
  EAX = (r32((uint32_t)(0x1068f4d0)));
  /* 1066422b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066422e mov dword ptr [0x1068f4d0], eax */
  w32((uint32_t)(0x1068f4d0), (EAX));
  /* 10664233 mov ecx, dword ptr [0x1068da84] */
  ECX = (r32((uint32_t)(0x1068da84)));
  /* 10664239 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1066423c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066423e jne 0x1066431c */
  if (!C.zf) goto L_1066431c;
  /* 10664244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664247 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066424a je 0x1066425c */
  if (C.zf) goto L_1066425c;
  /* 1066424c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066424f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10664251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664254 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10664257 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1066425a jmp 0x1066429a */
  goto L_1066429a;
L_1066425c:;
  /* 1066425c mov ecx, dword ptr [0x1068f4c4] */
  ECX = (r32((uint32_t)(0x1068f4c4)));
  /* 10664262 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664265 je 0x10664288 */
  if (C.zf) goto L_10664288;
  /* 10664267 push 0x1068a730 */
  push32((uint32_t)(0x1068a730u));
  /* 1066426c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066426e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10664273 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10664278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066427a call 0x10662560 */
  push32(0x1066427fu); f_10662560();
  /* 1066427f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664282 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664285 jne 0x10664288 */
  if (!C.zf) goto L_10664288;
  /* 10664287 int3  */
  x86_unimpl("int3 @ 0x10664287");
L_10664288:;
  /* 10664288 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066428a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066428c jne 0x1066425c */
  if (!C.zf) goto L_1066425c;
  /* 1066428e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664291 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10664294 mov dword ptr [0x1068f4c4], ecx */
  w32((uint32_t)(0x1068f4c4), (ECX));
L_1066429a:;
  /* 1066429a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066429d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106642a1 je 0x106642b2 */
  if (C.zf) goto L_106642b2;
  /* 106642a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106642a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106642a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106642ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106642ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106642b0 jmp 0x106642ef */
  goto L_106642ef;
L_106642b2:;
  /* 106642b2 mov ecx, dword ptr [0x1068f4cc] */
  ECX = (r32((uint32_t)(0x1068f4cc)));
  /* 106642b8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106642bb je 0x106642de */
  if (C.zf) goto L_106642de;
  /* 106642bd push 0x1068a718 */
  push32((uint32_t)(0x1068a718u));
  /* 106642c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106642c4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 106642c9 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 106642ce push 2 */
  push32((uint32_t)(0x2u));
  /* 106642d0 call 0x10662560 */
  push32(0x106642d5u); f_10662560();
  /* 106642d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106642d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106642db jne 0x106642de */
  if (!C.zf) goto L_106642de;
  /* 106642dd int3  */
  x86_unimpl("int3 @ 0x106642dd");
L_106642de:;
  /* 106642de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106642e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106642e2 jne 0x106642b2 */
  if (!C.zf) goto L_106642b2;
  /* 106642e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106642e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106642e9 mov dword ptr [0x1068f4cc], ecx */
  w32((uint32_t)(0x1068f4cc), (ECX));
L_106642ef:;
  /* 106642ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106642f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106642f5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106642f8 push eax */
  push32((uint32_t)(EAX));
  /* 106642f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106642fb mov cl, byte ptr [0x1068da91] */
  CL = (r8((uint32_t)(0x1068da91)));
  /* 10664301 push ecx */
  push32((uint32_t)(ECX));
  /* 10664302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664305 push edx */
  push32((uint32_t)(EDX));
  /* 10664306 call 0x10667210 */
  push32(0x1066430bu); f_10667210();
  /* 1066430b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066430e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664311 push eax */
  push32((uint32_t)(EAX));
  /* 10664312 call 0x10667610 */
  push32(0x10664317u); f_10667610();
  /* 10664317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066431a jmp 0x10664345 */
  goto L_10664345;
L_1066431c:;
  /* 1066431c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066431f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10664326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664329 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1066432c push eax */
  push32((uint32_t)(EAX));
  /* 1066432d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066432f mov cl, byte ptr [0x1068da91] */
  CL = (r8((uint32_t)(0x1068da91)));
  /* 10664335 push ecx */
  push32((uint32_t)(ECX));
  /* 10664336 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664339 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066433c push edx */
  push32((uint32_t)(EDX));
  /* 1066433d call 0x10667210 */
  push32(0x10664342u); f_10667210();
  /* 10664342 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10664345:;
  /* 10664345 pop edi */
  EDI = (pop32());
  /* 10664346 pop esi */
  ESI = (pop32());
  /* 10664347 pop ebx */
  EBX = (pop32());
  /* 10664348 mov esp, ebp */
  ESP = (EBP);
  /* 1066434a pop ebp */
  EBP = (pop32());
  /* 1066434b ret  */
  ESPCHK(0x10663f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004350 @ 0x10664350 (19 bytes, 9 insns) */
void f_10664350(void) {
  FTRACE(0x10664350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664350 push ebp */
  push32((uint32_t)(EBP));
  /* 10664351 mov ebp, esp */
  EBP = (ESP);
  /* 10664353 push 1 */
  push32((uint32_t)(0x1u));
  /* 10664355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664358 push eax */
  push32((uint32_t)(EAX));
  /* 10664359 call 0x10664370 */
  push32(0x1066435eu); f_10664370();
  /* 1066435e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664361 pop ebp */
  EBP = (pop32());
  /* 10664362 ret  */
  ESPCHK(0x10664350u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x10664370 (342 bytes, 119 insns) */
void f_10664370(void) {
  FTRACE(0x10664370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664370 push ebp */
  push32((uint32_t)(EBP));
  /* 10664371 mov ebp, esp */
  EBP = (ESP);
  /* 10664373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664376 push ebx */
  push32((uint32_t)(EBX));
  /* 10664377 push esi */
  push32((uint32_t)(ESI));
  /* 10664378 push edi */
  push32((uint32_t)(EDI));
  /* 10664379 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 1066437e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10664381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664383 je 0x106643b5 */
  if (C.zf) goto L_106643b5;
L_10664385:;
  /* 10664385 call 0x10664640 */
  push32(0x1066438au); f_10664640();
  /* 1066438a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066438c jne 0x106643af */
  if (!C.zf) goto L_106643af;
  /* 1066438e push 0x1068a564 */
  push32((uint32_t)(0x1068a564u));
  /* 10664393 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664395 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1066439a push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 1066439f push 2 */
  push32((uint32_t)(0x2u));
  /* 106643a1 call 0x10662560 */
  push32(0x106643a6u); f_10662560();
  /* 106643a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106643a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106643ac jne 0x106643af */
  if (!C.zf) goto L_106643af;
  /* 106643ae int3  */
  x86_unimpl("int3 @ 0x106643ae");
L_106643af:;
  /* 106643af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106643b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106643b3 jne 0x10664385 */
  if (!C.zf) goto L_10664385;
L_106643b5:;
  /* 106643b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 106643b7 call 0x10666ea0 */
  push32(0x106643bcu); f_10666ea0();
  /* 106643bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106643bf:;
  /* 106643bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106643c2 push edx */
  push32((uint32_t)(EDX));
  /* 106643c3 call 0x10664aa0 */
  push32(0x106643c8u); f_10664aa0();
  /* 106643c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106643cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106643cd jne 0x106643f0 */
  if (!C.zf) goto L_106643f0;
  /* 106643cf push 0x1068a668 */
  push32((uint32_t)(0x1068a668u));
  /* 106643d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106643d6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 106643db push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 106643e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106643e2 call 0x10662560 */
  push32(0x106643e7u); f_10662560();
  /* 106643e7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106643ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106643ed jne 0x106643f0 */
  if (!C.zf) goto L_106643f0;
  /* 106643ef int3  */
  x86_unimpl("int3 @ 0x106643ef");
L_106643f0:;
  /* 106643f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106643f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106643f4 jne 0x106643bf */
  if (!C.zf) goto L_106643bf;
  /* 106643f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106643f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106643fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106643ff:;
  /* 106643ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664402 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664405 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066440a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066440d je 0x10664452 */
  if (C.zf) goto L_10664452;
  /* 1066440f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664412 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664416 je 0x10664452 */
  if (C.zf) goto L_10664452;
  /* 10664418 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066441b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1066441e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664423 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664426 je 0x10664452 */
  if (C.zf) goto L_10664452;
  /* 10664428 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066442b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066442f je 0x10664452 */
  if (C.zf) goto L_10664452;
  /* 10664431 push 0x1068a800 */
  push32((uint32_t)(0x1068a800u));
  /* 10664436 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664438 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1066443d push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10664442 push 2 */
  push32((uint32_t)(0x2u));
  /* 10664444 call 0x10662560 */
  push32(0x10664449u); f_10662560();
  /* 10664449 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066444c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066444f jne 0x10664452 */
  if (!C.zf) goto L_10664452;
  /* 10664451 int3  */
  x86_unimpl("int3 @ 0x10664451");
L_10664452:;
  /* 10664452 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10664454 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10664456 jne 0x106643ff */
  if (!C.zf) goto L_106643ff;
  /* 10664458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066445b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066445f jne 0x1066446e */
  if (!C.zf) goto L_1066446e;
  /* 10664461 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664465 jne 0x1066446e */
  if (!C.zf) goto L_1066446e;
  /* 10664467 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1066446e:;
  /* 1066446e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664471 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664475 je 0x106644a9 */
  if (C.zf) goto L_106644a9;
L_10664477:;
  /* 10664477 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066447a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1066447d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664480 je 0x106644a3 */
  if (C.zf) goto L_106644a3;
  /* 10664482 push 0x1068a748 */
  push32((uint32_t)(0x1068a748u));
  /* 10664487 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664489 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1066448e push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 10664493 push 2 */
  push32((uint32_t)(0x2u));
  /* 10664495 call 0x10662560 */
  push32(0x1066449au); f_10662560();
  /* 1066449a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066449d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106644a0 jne 0x106644a3 */
  if (!C.zf) goto L_106644a3;
  /* 106644a2 int3  */
  x86_unimpl("int3 @ 0x106644a2");
L_106644a3:;
  /* 106644a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106644a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106644a7 jne 0x10664477 */
  if (!C.zf) goto L_10664477;
L_106644a9:;
  /* 106644a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106644ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106644af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106644b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106644b4 call 0x10666f40 */
  push32(0x106644b9u); f_10666f40();
  /* 106644b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106644bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106644bf pop edi */
  EDI = (pop32());
  /* 106644c0 pop esi */
  ESI = (pop32());
  /* 106644c1 pop ebx */
  EBX = (pop32());
  /* 106644c2 mov esp, ebp */
  ESP = (EBP);
  /* 106644c4 pop ebp */
  EBP = (pop32());
  /* 106644c5 ret  */
  ESPCHK(0x10664370u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x106644d0 (28 bytes, 11 insns) */
void f_106644d0(void) {
  FTRACE(0x106644d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106644d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106644d1 mov ebp, esp */
  EBP = (ESP);
  /* 106644d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106644d4 mov eax, dword ptr [0x1068da8c] */
  EAX = (r32((uint32_t)(0x1068da8c)));
  /* 106644d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106644dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106644df mov dword ptr [0x1068da8c], ecx */
  w32((uint32_t)(0x1068da8c), (ECX));
  /* 106644e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106644e8 mov esp, ebp */
  ESP = (EBP);
  /* 106644ea pop ebp */
  EBP = (pop32());
  /* 106644eb ret  */
  ESPCHK(0x106644d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f0 @ 0x106644f0 (157 bytes, 59 insns) */
void f_106644f0(void) {
  FTRACE(0x106644f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106644f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106644f1 mov ebp, esp */
  EBP = (ESP);
  /* 106644f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106644f4 push ebx */
  push32((uint32_t)(EBX));
  /* 106644f5 push esi */
  push32((uint32_t)(ESI));
  /* 106644f6 push edi */
  push32((uint32_t)(EDI));
  /* 106644f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 106644f9 call 0x10666ea0 */
  push32(0x106644feu); f_10666ea0();
  /* 106644fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664504 push eax */
  push32((uint32_t)(EAX));
  /* 10664505 call 0x10664aa0 */
  push32(0x1066450au); f_10664aa0();
  /* 1066450a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066450d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066450f je 0x1066457c */
  if (C.zf) goto L_1066457c;
  /* 10664511 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664514 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664517 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066451a:;
  /* 1066451a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066451d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664520 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664525 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664528 je 0x1066456d */
  if (C.zf) goto L_1066456d;
  /* 1066452a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066452d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664531 je 0x1066456d */
  if (C.zf) goto L_1066456d;
  /* 10664533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664536 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664539 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1066453e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664541 je 0x1066456d */
  if (C.zf) goto L_1066456d;
  /* 10664543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664546 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066454a je 0x1066456d */
  if (C.zf) goto L_1066456d;
  /* 1066454c push 0x1068a800 */
  push32((uint32_t)(0x1068a800u));
  /* 10664551 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664553 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10664558 push 0x1068a558 */
  push32((uint32_t)(0x1068a558u));
  /* 1066455d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066455f call 0x10662560 */
  push32(0x10664564u); f_10662560();
  /* 10664564 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664567 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066456a jne 0x1066456d */
  if (!C.zf) goto L_1066456d;
  /* 1066456c int3  */
  x86_unimpl("int3 @ 0x1066456c");
L_1066456d:;
  /* 1066456d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066456f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10664571 jne 0x1066451a */
  if (!C.zf) goto L_1066451a;
  /* 10664573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664576 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664579 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1066457c:;
  /* 1066457c push 9 */
  push32((uint32_t)(0x9u));
  /* 1066457e call 0x10666f40 */
  push32(0x10664583u); f_10666f40();
  /* 10664583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664586 pop edi */
  EDI = (pop32());
  /* 10664587 pop esi */
  ESI = (pop32());
  /* 10664588 pop ebx */
  EBX = (pop32());
  /* 10664589 mov esp, ebp */
  ESP = (EBP);
  /* 1066458b pop ebp */
  EBP = (pop32());
  /* 1066458c ret  */
  ESPCHK(0x106644f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x10664590 (28 bytes, 11 insns) */
void f_10664590(void) {
  FTRACE(0x10664590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664590 push ebp */
  push32((uint32_t)(EBP));
  /* 10664591 mov ebp, esp */
  EBP = (ESP);
  /* 10664593 push ecx */
  push32((uint32_t)(ECX));
  /* 10664594 mov eax, dword ptr [0x1068dc90] */
  EAX = (r32((uint32_t)(0x1068dc90)));
  /* 10664599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066459c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066459f mov dword ptr [0x1068dc90], ecx */
  w32((uint32_t)(0x1068dc90), (ECX));
  /* 106645a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106645a8 mov esp, ebp */
  ESP = (EBP);
  /* 106645aa pop ebp */
  EBP = (pop32());
  /* 106645ab ret  */
  ESPCHK(0x10664590u, _esp0);
  ESP += 4; return;
}

/* FUN_100045b0 @ 0x106645b0 (136 bytes, 55 insns) */
void f_106645b0(void) {
  FTRACE(0x106645b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106645b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106645b1 mov ebp, esp */
  EBP = (ESP);
  /* 106645b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106645b4 push ebx */
  push32((uint32_t)(EBX));
  /* 106645b5 push esi */
  push32((uint32_t)(ESI));
  /* 106645b6 push edi */
  push32((uint32_t)(EDI));
  /* 106645b7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106645be:;
  /* 106645be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106645c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106645c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106645c7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106645ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106645cc je 0x1066462e */
  if (C.zf) goto L_1066462e;
  /* 106645ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106645d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106645d3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106645d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106645d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106645de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106645e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106645e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106645e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106645e9 je 0x1066462c */
  if (C.zf) goto L_1066462c;
L_106645eb:;
  /* 106645eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106645ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106645f3 push eax */
  push32((uint32_t)(EAX));
  /* 106645f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106645f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106645f9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 106645fc push edx */
  push32((uint32_t)(EDX));
  /* 106645fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664600 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664603 push eax */
  push32((uint32_t)(EAX));
  /* 10664604 push 0x1068a844 */
  push32((uint32_t)(0x1068a844u));
  /* 10664609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066460b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066460d push 0 */
  push32((uint32_t)(0x0u));
  /* 1066460f push 0 */
  push32((uint32_t)(0x0u));
  /* 10664611 call 0x10662560 */
  push32(0x10664616u); f_10662560();
  /* 10664616 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066461c jne 0x1066461f */
  if (!C.zf) goto L_1066461f;
  /* 1066461e int3  */
  x86_unimpl("int3 @ 0x1066461e");
L_1066461f:;
  /* 1066461f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10664621 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10664623 jne 0x106645eb */
  if (!C.zf) goto L_106645eb;
  /* 10664625 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1066462c:;
  /* 1066462c jmp 0x106645be */
  goto L_106645be;
L_1066462e:;
  /* 1066462e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664631 pop edi */
  EDI = (pop32());
  /* 10664632 pop esi */
  ESI = (pop32());
  /* 10664633 pop ebx */
  EBX = (pop32());
  /* 10664634 mov esp, ebp */
  ESP = (EBP);
  /* 10664636 pop ebp */
  EBP = (pop32());
  /* 10664637 ret  */
  ESPCHK(0x106645b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x10664640 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10664640(void) {
  FTRACE(0x10664640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664640 push ebp */
  push32((uint32_t)(EBP));
  /* 10664641 mov ebp, esp */
  EBP = (ESP);
  /* 10664643 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664646 push ebx */
  push32((uint32_t)(EBX));
  /* 10664647 push esi */
  push32((uint32_t)(ESI));
  /* 10664648 push edi */
  push32((uint32_t)(EDI));
  /* 10664649 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10664650 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 10664655 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10664658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066465a jne 0x10664666 */
  if (!C.zf) goto L_10664666;
  /* 1066465c mov eax, 1 */
  EAX = (0x1u);
  /* 10664661 jmp 0x10664998 */
  goto L_10664998;
L_10664666:;
  /* 10664666 push 9 */
  push32((uint32_t)(0x9u));
  /* 10664668 call 0x10666ea0 */
  push32(0x1066466du); f_10666ea0();
  /* 1066466d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664670 call 0x10667680 */
  push32(0x10664675u); f_10667680();
  /* 10664675 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10664678 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066467c je 0x10664789 */
  if (C.zf) goto L_10664789;
  /* 10664682 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664686 je 0x10664789 */
  if (C.zf) goto L_10664789;
  /* 1066468c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066468f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10664692 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10664695 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664698 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1066469b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066469f ja 0x10664752 */
  if ((!C.cf&&!C.zf)) goto L_10664752;
  /* 106646a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106646a8 jmp dword ptr [eax*4 + 0x1066499f] */
  switch (EAX) {
    case 0: goto L_1066472a;
    case 1: goto L_10664702;
    case 2: goto L_106646da;
    case 3: goto L_106646af;
    default: x86_unimpl("switch@0x106646a8 out of table"); return;
  }
L_106646af:;
  /* 106646af push 0x1068a998 */
  push32((uint32_t)(0x1068a998u));
  /* 106646b4 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 106646b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106646bb push 0 */
  push32((uint32_t)(0x0u));
  /* 106646bd push 0 */
  push32((uint32_t)(0x0u));
  /* 106646bf push 0 */
  push32((uint32_t)(0x0u));
  /* 106646c1 call 0x10662560 */
  push32(0x106646c6u); f_10662560();
  /* 106646c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106646c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106646cc jne 0x106646cf */
  if (!C.zf) goto L_106646cf;
  /* 106646ce int3  */
  x86_unimpl("int3 @ 0x106646ce");
L_106646cf:;
  /* 106646cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106646d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106646d3 jne 0x106646af */
  if (!C.zf) goto L_106646af;
  /* 106646d5 jmp 0x10664778 */
  goto L_10664778;
L_106646da:;
  /* 106646da push 0x1068a974 */
  push32((uint32_t)(0x1068a974u));
  /* 106646df push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 106646e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106646e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106646e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106646ea push 0 */
  push32((uint32_t)(0x0u));
  /* 106646ec call 0x10662560 */
  push32(0x106646f1u); f_10662560();
  /* 106646f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106646f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106646f7 jne 0x106646fa */
  if (!C.zf) goto L_106646fa;
  /* 106646f9 int3  */
  x86_unimpl("int3 @ 0x106646f9");
L_106646fa:;
  /* 106646fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106646fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106646fe jne 0x106646da */
  if (!C.zf) goto L_106646da;
  /* 10664700 jmp 0x10664778 */
  goto L_10664778;
L_10664702:;
  /* 10664702 push 0x1068a950 */
  push32((uint32_t)(0x1068a950u));
  /* 10664707 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 1066470c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066470e push 0 */
  push32((uint32_t)(0x0u));
  /* 10664710 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664712 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664714 call 0x10662560 */
  push32(0x10664719u); f_10662560();
  /* 10664719 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066471c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066471f jne 0x10664722 */
  if (!C.zf) goto L_10664722;
  /* 10664721 int3  */
  x86_unimpl("int3 @ 0x10664721");
L_10664722:;
  /* 10664722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664726 jne 0x10664702 */
  if (!C.zf) goto L_10664702;
  /* 10664728 jmp 0x10664778 */
  goto L_10664778;
L_1066472a:;
  /* 1066472a push 0x1068a92c */
  push32((uint32_t)(0x1068a92cu));
  /* 1066472f push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10664734 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664736 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066473a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066473c call 0x10662560 */
  push32(0x10664741u); f_10662560();
  /* 10664741 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664744 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664747 jne 0x1066474a */
  if (!C.zf) goto L_1066474a;
  /* 10664749 int3  */
  x86_unimpl("int3 @ 0x10664749");
L_1066474a:;
  /* 1066474a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066474c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066474e jne 0x1066472a */
  if (!C.zf) goto L_1066472a;
  /* 10664750 jmp 0x10664778 */
  goto L_10664778;
L_10664752:;
  /* 10664752 push 0x1068a900 */
  push32((uint32_t)(0x1068a900u));
  /* 10664757 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 1066475c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066475e push 0 */
  push32((uint32_t)(0x0u));
  /* 10664760 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664762 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664764 call 0x10662560 */
  push32(0x10664769u); f_10662560();
  /* 10664769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066476c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066476f jne 0x10664772 */
  if (!C.zf) goto L_10664772;
  /* 10664771 int3  */
  x86_unimpl("int3 @ 0x10664771");
L_10664772:;
  /* 10664772 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10664774 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10664776 jne 0x10664752 */
  if (!C.zf) goto L_10664752;
L_10664778:;
  /* 10664778 push 9 */
  push32((uint32_t)(0x9u));
  /* 1066477a call 0x10666f40 */
  push32(0x1066477fu); f_10666f40();
  /* 1066477f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664784 jmp 0x10664998 */
  goto L_10664998;
L_10664789:;
  /* 10664789 mov eax, dword ptr [0x1068f4cc] */
  EAX = (r32((uint32_t)(0x1068f4cc)));
  /* 1066478e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10664791 jmp 0x1066479b */
  goto L_1066479b;
L_10664793:;
  /* 10664793 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664796 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10664798 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1066479b:;
  /* 1066479b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066479f je 0x1066498b */
  if (C.zf) goto L_1066498b;
  /* 106647a5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106647ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106647af mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106647b2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106647b8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106647bb je 0x106647e0 */
  if (C.zf) goto L_106647e0;
  /* 106647bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106647c0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106647c4 je 0x106647e0 */
  if (C.zf) goto L_106647e0;
  /* 106647c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106647c9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106647cc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106647d2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106647d5 je 0x106647e0 */
  if (C.zf) goto L_106647e0;
  /* 106647d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106647da cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106647de jne 0x106647f8 */
  if (!C.zf) goto L_106647f8;
L_106647e0:;
  /* 106647e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106647e3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106647e6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106647ec mov edx, dword ptr [ecx*4 + 0x1068da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da94)));
  /* 106647f3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106647f6 jmp 0x106647ff */
  goto L_106647ff;
L_106647f8:;
  /* 106647f8 mov dword ptr [ebp - 0x14], 0x1068a8f8 */
  w32((uint32_t)(EBP + -0x14), (0x1068a8f8u));
L_106647ff:;
  /* 106647ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10664801 mov al, byte ptr [0x1068da90] */
  AL = (r8((uint32_t)(0x1068da90)));
  /* 10664806 push eax */
  push32((uint32_t)(EAX));
  /* 10664807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066480a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066480d push ecx */
  push32((uint32_t)(ECX));
  /* 1066480e call 0x106645b0 */
  push32(0x10664813u); f_106645b0();
  /* 10664813 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664818 jne 0x10664854 */
  if (!C.zf) goto L_10664854;
L_1066481a:;
  /* 1066481a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066481d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664820 push edx */
  push32((uint32_t)(EDX));
  /* 10664821 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664824 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10664827 push ecx */
  push32((uint32_t)(ECX));
  /* 10664828 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066482b push edx */
  push32((uint32_t)(EDX));
  /* 1066482c push 0x1068a7d4 */
  push32((uint32_t)(0x1068a7d4u));
  /* 10664831 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664833 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664835 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664837 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664839 call 0x10662560 */
  push32(0x1066483eu); f_10662560();
  /* 1066483e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664841 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664844 jne 0x10664847 */
  if (!C.zf) goto L_10664847;
  /* 10664846 int3  */
  x86_unimpl("int3 @ 0x10664846");
L_10664847:;
  /* 10664847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066484b jne 0x1066481a */
  if (!C.zf) goto L_1066481a;
  /* 1066484d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10664854:;
  /* 10664854 push 4 */
  push32((uint32_t)(0x4u));
  /* 10664856 mov cl, byte ptr [0x1068da90] */
  CL = (r8((uint32_t)(0x1068da90)));
  /* 1066485c push ecx */
  push32((uint32_t)(ECX));
  /* 1066485d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664860 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10664863 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664866 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1066486a push edx */
  push32((uint32_t)(EDX));
  /* 1066486b call 0x106645b0 */
  push32(0x10664870u); f_106645b0();
  /* 10664870 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664875 jne 0x106648b1 */
  if (!C.zf) goto L_106648b1;
L_10664877:;
  /* 10664877 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066487a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066487d push eax */
  push32((uint32_t)(EAX));
  /* 1066487e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664881 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10664884 push edx */
  push32((uint32_t)(EDX));
  /* 10664885 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10664888 push eax */
  push32((uint32_t)(EAX));
  /* 10664889 push 0x1068a7a8 */
  push32((uint32_t)(0x1068a7a8u));
  /* 1066488e push 0 */
  push32((uint32_t)(0x0u));
  /* 10664890 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664892 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664894 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664896 call 0x10662560 */
  push32(0x1066489bu); f_10662560();
  /* 1066489b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066489e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106648a1 jne 0x106648a4 */
  if (!C.zf) goto L_106648a4;
  /* 106648a3 int3  */
  x86_unimpl("int3 @ 0x106648a3");
L_106648a4:;
  /* 106648a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106648a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106648a8 jne 0x10664877 */
  if (!C.zf) goto L_10664877;
  /* 106648aa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106648b1:;
  /* 106648b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106648b4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106648b8 jne 0x1066490a */
  if (!C.zf) goto L_1066490a;
  /* 106648ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106648bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106648c0 push ecx */
  push32((uint32_t)(ECX));
  /* 106648c1 mov dl, byte ptr [0x1068da91] */
  DL = (r8((uint32_t)(0x1068da91)));
  /* 106648c7 push edx */
  push32((uint32_t)(EDX));
  /* 106648c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106648cb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106648ce push eax */
  push32((uint32_t)(EAX));
  /* 106648cf call 0x106645b0 */
  push32(0x106648d4u); f_106645b0();
  /* 106648d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106648d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106648d9 jne 0x1066490a */
  if (!C.zf) goto L_1066490a;
L_106648db:;
  /* 106648db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106648de add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106648e1 push ecx */
  push32((uint32_t)(ECX));
  /* 106648e2 push 0x1068a8cc */
  push32((uint32_t)(0x1068a8ccu));
  /* 106648e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106648e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106648eb push 0 */
  push32((uint32_t)(0x0u));
  /* 106648ed push 0 */
  push32((uint32_t)(0x0u));
  /* 106648ef call 0x10662560 */
  push32(0x106648f4u); f_10662560();
  /* 106648f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106648f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106648fa jne 0x106648fd */
  if (!C.zf) goto L_106648fd;
  /* 106648fc int3  */
  x86_unimpl("int3 @ 0x106648fc");
L_106648fd:;
  /* 106648fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106648ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10664901 jne 0x106648db */
  if (!C.zf) goto L_106648db;
  /* 10664903 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1066490a:;
  /* 1066490a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066490e jne 0x10664986 */
  if (!C.zf) goto L_10664986;
  /* 10664910 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664913 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664917 je 0x1066494c */
  if (C.zf) goto L_1066494c;
L_10664919:;
  /* 10664919 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066491c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1066491f push edx */
  push32((uint32_t)(EDX));
  /* 10664920 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664923 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10664926 push ecx */
  push32((uint32_t)(ECX));
  /* 10664927 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066492a push edx */
  push32((uint32_t)(EDX));
  /* 1066492b push 0x1068a8ac */
  push32((uint32_t)(0x1068a8acu));
  /* 10664930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664938 call 0x10662560 */
  push32(0x1066493du); f_10662560();
  /* 1066493d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664940 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664943 jne 0x10664946 */
  if (!C.zf) goto L_10664946;
  /* 10664945 int3  */
  x86_unimpl("int3 @ 0x10664945");
L_10664946:;
  /* 10664946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066494a jne 0x10664919 */
  if (!C.zf) goto L_10664919;
L_1066494c:;
  /* 1066494c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066494f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10664952 push edx */
  push32((uint32_t)(EDX));
  /* 10664953 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664956 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664959 push eax */
  push32((uint32_t)(EAX));
  /* 1066495a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066495d push ecx */
  push32((uint32_t)(ECX));
  /* 1066495e push 0x1068a880 */
  push32((uint32_t)(0x1068a880u));
  /* 10664963 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664965 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664967 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664969 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066496b call 0x10662560 */
  push32(0x10664970u); f_10662560();
  /* 10664970 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664973 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664976 jne 0x10664979 */
  if (!C.zf) goto L_10664979;
  /* 10664978 int3  */
  x86_unimpl("int3 @ 0x10664978");
L_10664979:;
  /* 10664979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066497b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066497d jne 0x1066494c */
  if (!C.zf) goto L_1066494c;
  /* 1066497f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10664986:;
  /* 10664986 jmp 0x10664793 */
  goto L_10664793;
L_1066498b:;
  /* 1066498b push 9 */
  push32((uint32_t)(0x9u));
  /* 1066498d call 0x10666f40 */
  push32(0x10664992u); f_10666f40();
  /* 10664992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10664998:;
  /* 10664998 pop edi */
  EDI = (pop32());
  /* 10664999 pop esi */
  ESI = (pop32());
  /* 1066499a pop ebx */
  EBX = (pop32());
  /* 1066499b mov esp, ebp */
  ESP = (EBP);
  /* 1066499d pop ebp */
  EBP = (pop32());
  /* 1066499e ret  */
  ESPCHK(0x10664640u, _esp0);
  ESP += 4; return;
}

/* FUN_100049b0 @ 0x106649b0 (34 bytes, 13 insns) */
void f_106649b0(void) {
  FTRACE(0x106649b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106649b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106649b1 mov ebp, esp */
  EBP = (ESP);
  /* 106649b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106649b4 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 106649b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106649bc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106649c0 je 0x106649cb */
  if (C.zf) goto L_106649cb;
  /* 106649c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106649c5 mov dword ptr [0x1068da84], ecx */
  w32((uint32_t)(0x1068da84), (ECX));
L_106649cb:;
  /* 106649cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106649ce mov esp, ebp */
  ESP = (EBP);
  /* 106649d0 pop ebp */
  EBP = (pop32());
  /* 106649d1 ret  */
  ESPCHK(0x106649b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x106649e0 (103 bytes, 38 insns) */
void f_106649e0(void) {
  FTRACE(0x106649e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106649e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106649e1 mov ebp, esp */
  EBP = (ESP);
  /* 106649e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106649e4 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 106649e9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106649ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106649ee jne 0x106649f2 */
  if (!C.zf) goto L_106649f2;
  /* 106649f0 jmp 0x10664a43 */
  goto L_10664a43;
L_106649f2:;
  /* 106649f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106649f4 call 0x10666ea0 */
  push32(0x106649f9u); f_10666ea0();
  /* 106649f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106649fc mov ecx, dword ptr [0x1068f4cc] */
  ECX = (r32((uint32_t)(0x1068f4cc)));
  /* 10664a02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10664a05 jmp 0x10664a0f */
  goto L_10664a0f;
L_10664a07:;
  /* 10664a07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664a0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10664a0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10664a0f:;
  /* 10664a0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664a13 je 0x10664a39 */
  if (C.zf) goto L_10664a39;
  /* 10664a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664a18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10664a1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10664a21 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664a24 jne 0x10664a37 */
  if (!C.zf) goto L_10664a37;
  /* 10664a26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664a29 push eax */
  push32((uint32_t)(EAX));
  /* 10664a2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664a2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664a30 push ecx */
  push32((uint32_t)(ECX));
  /* 10664a31 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10664a34u);
  /* 10664a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10664a37:;
  /* 10664a37 jmp 0x10664a07 */
  goto L_10664a07;
L_10664a39:;
  /* 10664a39 push 9 */
  push32((uint32_t)(0x9u));
  /* 10664a3b call 0x10666f40 */
  push32(0x10664a40u); f_10666f40();
  /* 10664a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10664a43:;
  /* 10664a43 mov esp, ebp */
  ESP = (EBP);
  /* 10664a45 pop ebp */
  EBP = (pop32());
  /* 10664a46 ret  */
  ESPCHK(0x106649e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10664a50 (75 bytes, 28 insns) */
void f_10664a50(void) {
  FTRACE(0x10664a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10664a51 mov ebp, esp */
  EBP = (ESP);
  /* 10664a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10664a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664a58 je 0x10664a8d */
  if (C.zf) goto L_10664a8d;
  /* 10664a5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664a5d push eax */
  push32((uint32_t)(EAX));
  /* 10664a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664a61 push ecx */
  push32((uint32_t)(ECX));
  /* 10664a62 call dword ptr [0x10691310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691310))), 0x10664a68u);
  /* 10664a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664a6a jne 0x10664a8d */
  if (!C.zf) goto L_10664a8d;
  /* 10664a6c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664a70 je 0x10664a84 */
  if (C.zf) goto L_10664a84;
  /* 10664a72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664a75 push edx */
  push32((uint32_t)(EDX));
  /* 10664a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664a79 push eax */
  push32((uint32_t)(EAX));
  /* 10664a7a call dword ptr [0x10691254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691254))), 0x10664a80u);
  /* 10664a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664a82 jne 0x10664a8d */
  if (!C.zf) goto L_10664a8d;
L_10664a84:;
  /* 10664a84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10664a8b jmp 0x10664a94 */
  goto L_10664a94;
L_10664a8d:;
  /* 10664a8d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10664a94:;
  /* 10664a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664a97 mov esp, ebp */
  ESP = (EBP);
  /* 10664a99 pop ebp */
  EBP = (pop32());
  /* 10664a9a ret  */
  ESPCHK(0x10664a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa0 @ 0x10664aa0 (134 bytes, 50 insns) */
void f_10664aa0(void) {
  FTRACE(0x10664aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10664aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10664aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10664aa4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664aa8 jne 0x10664aae */
  if (!C.zf) goto L_10664aae;
  /* 10664aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664aac jmp 0x10664b22 */
  goto L_10664b22;
L_10664aae:;
  /* 10664aae push 1 */
  push32((uint32_t)(0x1u));
  /* 10664ab0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10664ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664ab5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664ab8 push eax */
  push32((uint32_t)(EAX));
  /* 10664ab9 call 0x10664a50 */
  push32(0x10664abeu); f_10664a50();
  /* 10664abe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664ac3 jne 0x10664ac9 */
  if (!C.zf) goto L_10664ac9;
  /* 10664ac5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664ac7 jmp 0x10664b22 */
  goto L_10664b22;
L_10664ac9:;
  /* 10664ac9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664acc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664acf push ecx */
  push32((uint32_t)(ECX));
  /* 10664ad0 call 0x106677a0 */
  push32(0x10664ad5u); f_106677a0();
  /* 10664ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664ad8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10664adb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664adf je 0x10664af6 */
  if (C.zf) goto L_10664af6;
  /* 10664ae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664ae4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10664ae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664aeb push eax */
  push32((uint32_t)(EAX));
  /* 10664aec call 0x10667800 */
  push32(0x10664af1u); f_10667800();
  /* 10664af1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664af4 jmp 0x10664b22 */
  goto L_10664b22;
L_10664af6:;
  /* 10664af6 mov ecx, dword ptr [0x1068f480] */
  ECX = (r32((uint32_t)(0x1068f480)));
  /* 10664afc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10664b02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10664b04 je 0x10664b0d */
  if (C.zf) goto L_10664b0d;
  /* 10664b06 mov eax, 1 */
  EAX = (0x1u);
  /* 10664b0b jmp 0x10664b22 */
  goto L_10664b22;
L_10664b0d:;
  /* 10664b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664b10 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664b13 push edx */
  push32((uint32_t)(EDX));
  /* 10664b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664b16 mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 10664b1b push eax */
  push32((uint32_t)(EAX));
  /* 10664b1c call dword ptr [0x10691314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691314))), 0x10664b22u);
L_10664b22:;
  /* 10664b22 mov esp, ebp */
  ESP = (EBP);
  /* 10664b24 pop ebp */
  EBP = (pop32());
  /* 10664b25 ret  */
  ESPCHK(0x10664aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b30 @ 0x10664b30 (227 bytes, 80 insns) */
void f_10664b30(void) {
  FTRACE(0x10664b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10664b31 mov ebp, esp */
  EBP = (ESP);
  /* 10664b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10664b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664b37 push eax */
  push32((uint32_t)(EAX));
  /* 10664b38 call 0x10664aa0 */
  push32(0x10664b3du); f_10664aa0();
  /* 10664b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664b40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664b42 jne 0x10664b4b */
  if (!C.zf) goto L_10664b4b;
  /* 10664b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664b46 jmp 0x10664c0f */
  goto L_10664c0f;
L_10664b4b:;
  /* 10664b4b push 9 */
  push32((uint32_t)(0x9u));
  /* 10664b4d call 0x10666ea0 */
  push32(0x10664b52u); f_10666ea0();
  /* 10664b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664b55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664b58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664b5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10664b5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664b61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664b64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664b69 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664b6c je 0x10664b90 */
  if (C.zf) goto L_10664b90;
  /* 10664b6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664b71 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664b75 je 0x10664b90 */
  if (C.zf) goto L_10664b90;
  /* 10664b77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664b7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664b7d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664b82 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664b85 je 0x10664b90 */
  if (C.zf) goto L_10664b90;
  /* 10664b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664b8a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664b8e jne 0x10664c03 */
  if (!C.zf) goto L_10664c03;
L_10664b90:;
  /* 10664b90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10664b92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664b95 push edx */
  push32((uint32_t)(EDX));
  /* 10664b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664b99 push eax */
  push32((uint32_t)(EAX));
  /* 10664b9a call 0x10664a50 */
  push32(0x10664b9fu); f_10664a50();
  /* 10664b9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664ba2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664ba4 je 0x10664c03 */
  if (C.zf) goto L_10664c03;
  /* 10664ba6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664ba9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10664bac cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664baf jne 0x10664c03 */
  if (!C.zf) goto L_10664c03;
  /* 10664bb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664bb4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10664bb7 cmp ecx, dword ptr [0x1068da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664bbd jg 0x10664c03 */
  if ((!C.zf&&C.sf==C.of)) goto L_10664c03;
  /* 10664bbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664bc3 je 0x10664bd0 */
  if (C.zf) goto L_10664bd0;
  /* 10664bc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10664bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664bcb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10664bce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10664bd0:;
  /* 10664bd0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664bd4 je 0x10664be1 */
  if (C.zf) goto L_10664be1;
  /* 10664bd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10664bd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664bdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10664bdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10664be1:;
  /* 10664be1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664be5 je 0x10664bf2 */
  if (C.zf) goto L_10664bf2;
  /* 10664be7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10664bea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664bed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10664bf0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10664bf2:;
  /* 10664bf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10664bf4 call 0x10666f40 */
  push32(0x10664bf9u); f_10666f40();
  /* 10664bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664bfc mov eax, 1 */
  EAX = (0x1u);
  /* 10664c01 jmp 0x10664c0f */
  goto L_10664c0f;
L_10664c03:;
  /* 10664c03 push 9 */
  push32((uint32_t)(0x9u));
  /* 10664c05 call 0x10666f40 */
  push32(0x10664c0au); f_10666f40();
  /* 10664c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10664c0f:;
  /* 10664c0f mov esp, ebp */
  ESP = (EBP);
  /* 10664c11 pop ebp */
  EBP = (pop32());
  /* 10664c12 ret  */
  ESPCHK(0x10664b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x10664c20 (28 bytes, 11 insns) */
void f_10664c20(void) {
  FTRACE(0x10664c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10664c21 mov ebp, esp */
  EBP = (ESP);
  /* 10664c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10664c24 mov eax, dword ptr [0x10690e38] */
  EAX = (r32((uint32_t)(0x10690e38)));
  /* 10664c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10664c2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664c2f mov dword ptr [0x10690e38], ecx */
  w32((uint32_t)(0x10690e38), (ECX));
  /* 10664c35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664c38 mov esp, ebp */
  ESP = (EBP);
  /* 10664c3a pop ebp */
  EBP = (pop32());
  /* 10664c3b ret  */
  ESPCHK(0x10664c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x10664c40 (362 bytes, 116 insns) */
void f_10664c40(void) {
  FTRACE(0x10664c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10664c41 mov ebp, esp */
  EBP = (ESP);
  /* 10664c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664c46 push ebx */
  push32((uint32_t)(EBX));
  /* 10664c47 push esi */
  push32((uint32_t)(ESI));
  /* 10664c48 push edi */
  push32((uint32_t)(EDI));
  /* 10664c49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664c4d jne 0x10664c7a */
  if (!C.zf) goto L_10664c7a;
L_10664c4f:;
  /* 10664c4f push 0x1068a9e0 */
  push32((uint32_t)(0x1068a9e0u));
  /* 10664c54 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10664c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10664c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10664c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10664c61 call 0x10662560 */
  push32(0x10664c66u); f_10662560();
  /* 10664c66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664c69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664c6c jne 0x10664c6f */
  if (!C.zf) goto L_10664c6f;
  /* 10664c6e int3  */
  x86_unimpl("int3 @ 0x10664c6e");
L_10664c6f:;
  /* 10664c6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664c73 jne 0x10664c4f */
  if (!C.zf) goto L_10664c4f;
  /* 10664c75 jmp 0x10664da3 */
  goto L_10664da3;
L_10664c7a:;
  /* 10664c7a push 9 */
  push32((uint32_t)(0x9u));
  /* 10664c7c call 0x10666ea0 */
  push32(0x10664c81u); f_10666ea0();
  /* 10664c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664c84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664c87 mov edx, dword ptr [0x1068f4cc] */
  EDX = (r32((uint32_t)(0x1068f4cc)));
  /* 10664c8d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10664c8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10664c96 jmp 0x10664ca1 */
  goto L_10664ca1;
L_10664c98:;
  /* 10664c98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664c9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664c9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10664ca1:;
  /* 10664ca1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664ca5 jge 0x10664cc5 */
  if ((C.sf==C.of)) goto L_10664cc5;
  /* 10664ca7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664caa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664cad mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10664cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664cb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664cbb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10664cc3 jmp 0x10664c98 */
  goto L_10664c98;
L_10664cc5:;
  /* 10664cc5 mov edx, dword ptr [0x1068f4cc] */
  EDX = (r32((uint32_t)(0x1068f4cc)));
  /* 10664ccb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10664cce jmp 0x10664cd8 */
  goto L_10664cd8;
L_10664cd0:;
  /* 10664cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664cd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10664cd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10664cd8:;
  /* 10664cd8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664cdc je 0x10664d81 */
  if (C.zf) goto L_10664d81;
  /* 10664ce2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664ce5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664ce8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664ced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664cef jl 0x10664d57 */
  if ((C.sf!=C.of)) goto L_10664d57;
  /* 10664cf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664cf4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10664cf7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10664cfd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664d00 jge 0x10664d57 */
  if ((C.sf==C.of)) goto L_10664d57;
  /* 10664d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664d05 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10664d08 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10664d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664d11 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10664d15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664d18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664d1b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10664d1e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10664d24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664d27 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10664d2b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664d2e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664d31 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664d36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664d39 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10664d3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664d40 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664d43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664d46 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10664d49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664d51 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10664d55 jmp 0x10664d7c */
  goto L_10664d7c;
L_10664d57:;
  /* 10664d57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664d5a push edx */
  push32((uint32_t)(EDX));
  /* 10664d5b push 0x1068a9bc */
  push32((uint32_t)(0x1068a9bcu));
  /* 10664d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664d68 call 0x10662560 */
  push32(0x10664d6du); f_10662560();
  /* 10664d6d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664d70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664d73 jne 0x10664d76 */
  if (!C.zf) goto L_10664d76;
  /* 10664d75 int3  */
  x86_unimpl("int3 @ 0x10664d75");
L_10664d76:;
  /* 10664d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664d7a jne 0x10664d57 */
  if (!C.zf) goto L_10664d57;
L_10664d7c:;
  /* 10664d7c jmp 0x10664cd0 */
  goto L_10664cd0;
L_10664d81:;
  /* 10664d81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664d84 mov edx, dword ptr [0x1068f4d4] */
  EDX = (r32((uint32_t)(0x1068f4d4)));
  /* 10664d8a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10664d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664d90 mov ecx, dword ptr [0x1068f4c8] */
  ECX = (r32((uint32_t)(0x1068f4c8)));
  /* 10664d96 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10664d99 push 9 */
  push32((uint32_t)(0x9u));
  /* 10664d9b call 0x10666f40 */
  push32(0x10664da0u); f_10666f40();
  /* 10664da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10664da3:;
  /* 10664da3 pop edi */
  EDI = (pop32());
  /* 10664da4 pop esi */
  ESI = (pop32());
  /* 10664da5 pop ebx */
  EBX = (pop32());
  /* 10664da6 mov esp, ebp */
  ESP = (EBP);
  /* 10664da8 pop ebp */
  EBP = (pop32());
  /* 10664da9 ret  */
  ESPCHK(0x10664c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x10664db0 (291 bytes, 95 insns) */
void f_10664db0(void) {
  FTRACE(0x10664db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10664db1 mov ebp, esp */
  EBP = (ESP);
  /* 10664db3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664db6 push ebx */
  push32((uint32_t)(EBX));
  /* 10664db7 push esi */
  push32((uint32_t)(ESI));
  /* 10664db8 push edi */
  push32((uint32_t)(EDI));
  /* 10664db9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10664dc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664dc4 je 0x10664dd2 */
  if (C.zf) goto L_10664dd2;
  /* 10664dc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664dca je 0x10664dd2 */
  if (C.zf) goto L_10664dd2;
  /* 10664dcc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664dd0 jne 0x10664e00 */
  if (!C.zf) goto L_10664e00;
L_10664dd2:;
  /* 10664dd2 push 0x1068aa08 */
  push32((uint32_t)(0x1068aa08u));
  /* 10664dd7 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10664ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 10664dde push 0 */
  push32((uint32_t)(0x0u));
  /* 10664de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664de4 call 0x10662560 */
  push32(0x10664de9u); f_10662560();
  /* 10664de9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664dec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664def jne 0x10664df2 */
  if (!C.zf) goto L_10664df2;
  /* 10664df1 int3  */
  x86_unimpl("int3 @ 0x10664df1");
L_10664df2:;
  /* 10664df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664df6 jne 0x10664dd2 */
  if (!C.zf) goto L_10664dd2;
  /* 10664df8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10664dfb jmp 0x10664ecc */
  goto L_10664ecc;
L_10664e00:;
  /* 10664e00 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10664e07 jmp 0x10664e12 */
  goto L_10664e12;
L_10664e09:;
  /* 10664e09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10664e0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10664e12:;
  /* 10664e12 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664e16 jge 0x10664e9c */
  if ((C.sf==C.of)) goto L_10664e9c;
  /* 10664e1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10664e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10664e28 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10664e2c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664e36 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10664e3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10664e40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e43 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10664e46 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10664e4a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664e54 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10664e58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664e5e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664e63 jne 0x10664e72 */
  if (!C.zf) goto L_10664e72;
  /* 10664e65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664e68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664e6b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664e70 je 0x10664e97 */
  if (C.zf) goto L_10664e97;
L_10664e72:;
  /* 10664e72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664e76 je 0x10664e97 */
  if (C.zf) goto L_10664e97;
  /* 10664e78 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664e7c jne 0x10664e90 */
  if (!C.zf) goto L_10664e90;
  /* 10664e7e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664e82 jne 0x10664e97 */
  if (!C.zf) goto L_10664e97;
  /* 10664e84 mov eax, dword ptr [0x1068da84] */
  EAX = (r32((uint32_t)(0x1068da84)));
  /* 10664e89 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10664e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664e8e je 0x10664e97 */
  if (C.zf) goto L_10664e97;
L_10664e90:;
  /* 10664e90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10664e97:;
  /* 10664e97 jmp 0x10664e09 */
  goto L_10664e09;
L_10664e9c:;
  /* 10664e9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10664e9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664ea2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10664ea5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664eab mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10664eae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10664eb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10664eb4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10664eb7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664ebd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10664ec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664ec3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10664ec9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10664ecc:;
  /* 10664ecc pop edi */
  EDI = (pop32());
  /* 10664ecd pop esi */
  ESI = (pop32());
  /* 10664ece pop ebx */
  EBX = (pop32());
  /* 10664ecf mov esp, ebp */
  ESP = (EBP);
  /* 10664ed1 pop ebp */
  EBP = (pop32());
  /* 10664ed2 ret  */
  ESPCHK(0x10664db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x10664ee0 (697 bytes, 253 insns) */
void f_10664ee0(void) {
  FTRACE(0x10664ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10664ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10664ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10664ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10664ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 10664ee7 push esi */
  push32((uint32_t)(ESI));
  /* 10664ee8 push edi */
  push32((uint32_t)(EDI));
  /* 10664ee9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10664ef0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10664ef2 call 0x10666ea0 */
  push32(0x10664ef7u); f_10666ea0();
  /* 10664ef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10664efa:;
  /* 10664efa push 0x1068ab00 */
  push32((uint32_t)(0x1068ab00u));
  /* 10664eff push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10664f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10664f0c call 0x10662560 */
  push32(0x10664f11u); f_10662560();
  /* 10664f11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664f14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664f17 jne 0x10664f1a */
  if (!C.zf) goto L_10664f1a;
  /* 10664f19 int3  */
  x86_unimpl("int3 @ 0x10664f19");
L_10664f1a:;
  /* 10664f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10664f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664f1e jne 0x10664efa */
  if (!C.zf) goto L_10664efa;
  /* 10664f20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664f24 je 0x10664f2e */
  if (C.zf) goto L_10664f2e;
  /* 10664f26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10664f29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10664f2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10664f2e:;
  /* 10664f2e mov eax, dword ptr [0x1068f4cc] */
  EAX = (r32((uint32_t)(0x1068f4cc)));
  /* 10664f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10664f36 jmp 0x10664f40 */
  goto L_10664f40;
L_10664f38:;
  /* 10664f38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664f3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10664f3d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10664f40:;
  /* 10664f40 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664f44 je 0x10665162 */
  if (C.zf) goto L_10665162;
  /* 10664f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664f4d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664f50 je 0x10665162 */
  if (C.zf) goto L_10665162;
  /* 10664f56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664f59 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10664f5c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10664f62 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664f65 je 0x10664f94 */
  if (C.zf) goto L_10664f94;
  /* 10664f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664f6a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10664f6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10664f73 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10664f75 je 0x10664f94 */
  if (C.zf) goto L_10664f94;
  /* 10664f77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664f7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10664f7d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10664f82 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664f85 jne 0x10664f99 */
  if (!C.zf) goto L_10664f99;
  /* 10664f87 mov ecx, dword ptr [0x1068da84] */
  ECX = (r32((uint32_t)(0x1068da84)));
  /* 10664f8d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10664f90 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10664f92 jne 0x10664f99 */
  if (!C.zf) goto L_10664f99;
L_10664f94:;
  /* 10664f94 jmp 0x1066515d */
  goto L_1066515d;
L_10664f99:;
  /* 10664f99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664f9c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664fa0 je 0x10665012 */
  if (C.zf) goto L_10665012;
  /* 10664fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10664fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664fa9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10664fac push ecx */
  push32((uint32_t)(ECX));
  /* 10664fad call 0x10664a50 */
  push32(0x10664fb2u); f_10664a50();
  /* 10664fb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664fb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10664fb7 jne 0x10664fe3 */
  if (!C.zf) goto L_10664fe3;
L_10664fb9:;
  /* 10664fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664fbc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10664fbf push eax */
  push32((uint32_t)(EAX));
  /* 10664fc0 push 0x1068aaec */
  push32((uint32_t)(0x1068aaecu));
  /* 10664fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10664fcd call 0x10662560 */
  push32(0x10664fd2u); f_10662560();
  /* 10664fd2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10664fd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10664fd8 jne 0x10664fdb */
  if (!C.zf) goto L_10664fdb;
  /* 10664fda int3  */
  x86_unimpl("int3 @ 0x10664fda");
L_10664fdb:;
  /* 10664fdb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10664fdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10664fdf jne 0x10664fb9 */
  if (!C.zf) goto L_10664fb9;
  /* 10664fe1 jmp 0x10665012 */
  goto L_10665012;
L_10664fe3:;
  /* 10664fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664fe6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10664fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10664fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10664fed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10664ff0 push edx */
  push32((uint32_t)(EDX));
  /* 10664ff1 push 0x1068aae0 */
  push32((uint32_t)(0x1068aae0u));
  /* 10664ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10664ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 10664ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 10664ffe call 0x10662560 */
  push32(0x10665003u); f_10662560();
  /* 10665003 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665006 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665009 jne 0x1066500c */
  if (!C.zf) goto L_1066500c;
  /* 1066500b int3  */
  x86_unimpl("int3 @ 0x1066500b");
L_1066500c:;
  /* 1066500c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066500e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10665010 jne 0x10664fe3 */
  if (!C.zf) goto L_10664fe3;
L_10665012:;
  /* 10665012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665015 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10665018 push edx */
  push32((uint32_t)(EDX));
  /* 10665019 push 0x1068aad8 */
  push32((uint32_t)(0x1068aad8u));
  /* 1066501e push 0 */
  push32((uint32_t)(0x0u));
  /* 10665020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665022 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665024 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665026 call 0x10662560 */
  push32(0x1066502bu); f_10662560();
  /* 1066502b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066502e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665031 jne 0x10665034 */
  if (!C.zf) goto L_10665034;
  /* 10665033 int3  */
  x86_unimpl("int3 @ 0x10665033");
L_10665034:;
  /* 10665034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10665038 jne 0x10665012 */
  if (!C.zf) goto L_10665012;
  /* 1066503a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066503d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10665040 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10665046 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665049 jne 0x106650bc */
  if (!C.zf) goto L_106650bc;
L_1066504b:;
  /* 1066504b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066504e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10665051 push ecx */
  push32((uint32_t)(ECX));
  /* 10665052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665055 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10665058 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1066505b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10665060 push eax */
  push32((uint32_t)(EAX));
  /* 10665061 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665064 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665067 push ecx */
  push32((uint32_t)(ECX));
  /* 10665068 push 0x1068aaa4 */
  push32((uint32_t)(0x1068aaa4u));
  /* 1066506d push 0 */
  push32((uint32_t)(0x0u));
  /* 1066506f push 0 */
  push32((uint32_t)(0x0u));
  /* 10665071 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665075 call 0x10662560 */
  push32(0x1066507au); f_10662560();
  /* 1066507a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066507d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665080 jne 0x10665083 */
  if (!C.zf) goto L_10665083;
  /* 10665082 int3  */
  x86_unimpl("int3 @ 0x10665082");
L_10665083:;
  /* 10665083 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10665085 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665087 jne 0x1066504b */
  if (!C.zf) goto L_1066504b;
  /* 10665089 cmp dword ptr [0x10690e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665090 je 0x106650ab */
  if (C.zf) goto L_106650ab;
  /* 10665092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665095 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10665098 push ecx */
  push32((uint32_t)(ECX));
  /* 10665099 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066509c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066509f push edx */
  push32((uint32_t)(EDX));
  /* 106650a0 call dword ptr [0x10690e38] */
  call_ind((uint32_t)(r32((uint32_t)(0x10690e38))), 0x106650a6u);
  /* 106650a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106650a9 jmp 0x106650b7 */
  goto L_106650b7;
L_106650ab:;
  /* 106650ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106650ae push eax */
  push32((uint32_t)(EAX));
  /* 106650af call 0x106651a0 */
  push32(0x106650b4u); f_106651a0();
  /* 106650b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106650b7:;
  /* 106650b7 jmp 0x1066515d */
  goto L_1066515d;
L_106650bc:;
  /* 106650bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106650bf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106650c3 jne 0x10665102 */
  if (!C.zf) goto L_10665102;
L_106650c5:;
  /* 106650c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106650c8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106650cb push eax */
  push32((uint32_t)(EAX));
  /* 106650cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106650cf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106650d2 push ecx */
  push32((uint32_t)(ECX));
  /* 106650d3 push 0x1068aa7c */
  push32((uint32_t)(0x1068aa7cu));
  /* 106650d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106650da push 0 */
  push32((uint32_t)(0x0u));
  /* 106650dc push 0 */
  push32((uint32_t)(0x0u));
  /* 106650de push 0 */
  push32((uint32_t)(0x0u));
  /* 106650e0 call 0x10662560 */
  push32(0x106650e5u); f_10662560();
  /* 106650e5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106650e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106650eb jne 0x106650ee */
  if (!C.zf) goto L_106650ee;
  /* 106650ed int3  */
  x86_unimpl("int3 @ 0x106650ed");
L_106650ee:;
  /* 106650ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106650f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106650f2 jne 0x106650c5 */
  if (!C.zf) goto L_106650c5;
  /* 106650f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106650f7 push eax */
  push32((uint32_t)(EAX));
  /* 106650f8 call 0x106651a0 */
  push32(0x106650fdu); f_106651a0();
  /* 106650fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665100 jmp 0x1066515d */
  goto L_1066515d;
L_10665102:;
  /* 10665102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665105 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10665108 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066510e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665111 jne 0x1066515d */
  if (!C.zf) goto L_1066515d;
L_10665113:;
  /* 10665113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665116 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10665119 push ecx */
  push32((uint32_t)(ECX));
  /* 1066511a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066511d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10665120 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10665123 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10665128 push eax */
  push32((uint32_t)(EAX));
  /* 10665129 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066512c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066512f push ecx */
  push32((uint32_t)(ECX));
  /* 10665130 push 0x1068aa48 */
  push32((uint32_t)(0x1068aa48u));
  /* 10665135 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665137 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665139 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066513b push 0 */
  push32((uint32_t)(0x0u));
  /* 1066513d call 0x10662560 */
  push32(0x10665142u); f_10662560();
  /* 10665142 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665145 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665148 jne 0x1066514b */
  if (!C.zf) goto L_1066514b;
  /* 1066514a int3  */
  x86_unimpl("int3 @ 0x1066514a");
L_1066514b:;
  /* 1066514b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066514d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066514f jne 0x10665113 */
  if (!C.zf) goto L_10665113;
  /* 10665151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665154 push eax */
  push32((uint32_t)(EAX));
  /* 10665155 call 0x106651a0 */
  push32(0x1066515au); f_106651a0();
  /* 1066515a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066515d:;
  /* 1066515d jmp 0x10664f38 */
  goto L_10664f38;
L_10665162:;
  /* 10665162 push 9 */
  push32((uint32_t)(0x9u));
  /* 10665164 call 0x10666f40 */
  push32(0x10665169u); f_10666f40();
  /* 10665169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066516c:;
  /* 1066516c push 0x1068aa30 */
  push32((uint32_t)(0x1068aa30u));
  /* 10665171 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 10665176 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665178 push 0 */
  push32((uint32_t)(0x0u));
  /* 1066517a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066517c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066517e call 0x10662560 */
  push32(0x10665183u); f_10662560();
  /* 10665183 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665186 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665189 jne 0x1066518c */
  if (!C.zf) goto L_1066518c;
  /* 1066518b int3  */
  x86_unimpl("int3 @ 0x1066518b");
L_1066518c:;
  /* 1066518c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1066518e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10665190 jne 0x1066516c */
  if (!C.zf) goto L_1066516c;
  /* 10665192 pop edi */
  EDI = (pop32());
  /* 10665193 pop esi */
  ESI = (pop32());
  /* 10665194 pop ebx */
  EBX = (pop32());
  /* 10665195 mov esp, ebp */
  ESP = (EBP);
  /* 10665197 pop ebp */
  EBP = (pop32());
  /* 10665198 ret  */
  ESPCHK(0x10664ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051a0 @ 0x106651a0 (276 bytes, 89 insns) */
void f_106651a0(void) {
  FTRACE(0x106651a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106651a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106651a1 mov ebp, esp */
  EBP = (ESP);
  /* 106651a3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106651a6 push ebx */
  push32((uint32_t)(EBX));
  /* 106651a7 push esi */
  push32((uint32_t)(ESI));
  /* 106651a8 push edi */
  push32((uint32_t)(EDI));
  /* 106651a9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 106651b0 jmp 0x106651bb */
  goto L_106651bb;
L_106651b2:;
  /* 106651b2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106651b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106651b8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_106651bb:;
  /* 106651bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106651be cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106651c2 jge 0x106651cf */
  if ((C.sf==C.of)) goto L_106651cf;
  /* 106651c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106651c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106651ca mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 106651cd jmp 0x106651d6 */
  goto L_106651d6;
L_106651cf:;
  /* 106651cf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_106651d6:;
  /* 106651d6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106651d9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106651dc jge 0x1066527c */
  if ((C.sf==C.of)) goto L_1066527c;
  /* 106651e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106651e5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106651e8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 106651eb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 106651ee cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106651f5 jle 0x10665213 */
  if ((C.zf||C.sf!=C.of)) goto L_10665213;
  /* 106651f7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 106651fc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106651ff and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10665205 push ecx */
  push32((uint32_t)(ECX));
  /* 10665206 call 0x106694b0 */
  push32(0x1066520bu); f_106694b0();
  /* 1066520b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066520e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10665211 jmp 0x10665230 */
  goto L_10665230;
L_10665213:;
  /* 10665213 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10665216 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066521c mov eax, dword ptr [0x1068dc98] */
  EAX = (r32((uint32_t)(0x1068dc98)));
  /* 10665221 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10665223 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10665227 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1066522d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10665230:;
  /* 10665230 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665234 je 0x10665244 */
  if (C.zf) goto L_10665244;
  /* 10665236 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10665239 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066523f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10665242 jmp 0x1066524b */
  goto L_1066524b;
L_10665244:;
  /* 10665244 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1066524b:;
  /* 1066524b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1066524e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10665251 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10665255 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10665258 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066525e push edx */
  push32((uint32_t)(EDX));
  /* 1066525f push 0x1068ab24 */
  push32((uint32_t)(0x1068ab24u));
  /* 10665264 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10665267 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066526a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1066526e push ecx */
  push32((uint32_t)(ECX));
  /* 1066526f call 0x106693b0 */
  push32(0x10665274u); f_106693b0();
  /* 10665274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665277 jmp 0x106651b2 */
  goto L_106651b2;
L_1066527c:;
  /* 1066527c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1066527f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10665284:;
  /* 10665284 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10665287 push eax */
  push32((uint32_t)(EAX));
  /* 10665288 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1066528b push ecx */
  push32((uint32_t)(ECX));
  /* 1066528c push 0x1068ab14 */
  push32((uint32_t)(0x1068ab14u));
  /* 10665291 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665297 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665299 call 0x10662560 */
  push32(0x1066529eu); f_10662560();
  /* 1066529e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106652a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106652a4 jne 0x106652a7 */
  if (!C.zf) goto L_106652a7;
  /* 106652a6 int3  */
  x86_unimpl("int3 @ 0x106652a6");
L_106652a7:;
  /* 106652a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106652a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106652ab jne 0x10665284 */
  if (!C.zf) goto L_10665284;
  /* 106652ad pop edi */
  EDI = (pop32());
  /* 106652ae pop esi */
  ESI = (pop32());
  /* 106652af pop ebx */
  EBX = (pop32());
  /* 106652b0 mov esp, ebp */
  ESP = (EBP);
  /* 106652b2 pop ebp */
  EBP = (pop32());
  /* 106652b3 ret  */
  ESPCHK(0x106651a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x106652c0 (116 bytes, 46 insns) */
void f_106652c0(void) {
  FTRACE(0x106652c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106652c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106652c1 mov ebp, esp */
  EBP = (ESP);
  /* 106652c3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106652c6 push ebx */
  push32((uint32_t)(EBX));
  /* 106652c7 push esi */
  push32((uint32_t)(ESI));
  /* 106652c8 push edi */
  push32((uint32_t)(EDI));
  /* 106652c9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 106652cc push eax */
  push32((uint32_t)(EAX));
  /* 106652cd call 0x10664c40 */
  push32(0x106652d2u); f_10664c40();
  /* 106652d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106652d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106652d9 jne 0x106652f4 */
  if (!C.zf) goto L_106652f4;
  /* 106652db cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106652df jne 0x106652f4 */
  if (!C.zf) goto L_106652f4;
  /* 106652e1 mov ecx, dword ptr [0x1068da84] */
  ECX = (r32((uint32_t)(0x1068da84)));
  /* 106652e7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 106652ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106652ec je 0x1066532b */
  if (C.zf) goto L_1066532b;
  /* 106652ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106652f2 je 0x1066532b */
  if (C.zf) goto L_1066532b;
L_106652f4:;
  /* 106652f4 push 0x1068ab2c */
  push32((uint32_t)(0x1068ab2cu));
  /* 106652f9 push 0x1068a4f8 */
  push32((uint32_t)(0x1068a4f8u));
  /* 106652fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10665300 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665302 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665304 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665306 call 0x10662560 */
  push32(0x1066530bu); f_10662560();
  /* 1066530b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066530e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665311 jne 0x10665314 */
  if (!C.zf) goto L_10665314;
  /* 10665313 int3  */
  x86_unimpl("int3 @ 0x10665313");
L_10665314:;
  /* 10665314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10665316 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665318 jne 0x106652f4 */
  if (!C.zf) goto L_106652f4;
  /* 1066531a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066531c call 0x10664ee0 */
  push32(0x10665321u); f_10664ee0();
  /* 10665321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665324 mov eax, 1 */
  EAX = (0x1u);
  /* 10665329 jmp 0x1066532d */
  goto L_1066532d;
L_1066532b:;
  /* 1066532b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1066532d:;
  /* 1066532d pop edi */
  EDI = (pop32());
  /* 1066532e pop esi */
  ESI = (pop32());
  /* 1066532f pop ebx */
  EBX = (pop32());
  /* 10665330 mov esp, ebp */
  ESP = (EBP);
  /* 10665332 pop ebp */
  EBP = (pop32());
  /* 10665333 ret  */
  ESPCHK(0x106652c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005340 @ 0x10665340 (197 bytes, 79 insns) */
void f_10665340(void) {
  FTRACE(0x10665340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665340 push ebp */
  push32((uint32_t)(EBP));
  /* 10665341 mov ebp, esp */
  EBP = (ESP);
  /* 10665343 push ecx */
  push32((uint32_t)(ECX));
  /* 10665344 push ebx */
  push32((uint32_t)(EBX));
  /* 10665345 push esi */
  push32((uint32_t)(ESI));
  /* 10665346 push edi */
  push32((uint32_t)(EDI));
  /* 10665347 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066534b jne 0x10665352 */
  if (!C.zf) goto L_10665352;
  /* 1066534d jmp 0x106653fe */
  goto L_106653fe;
L_10665352:;
  /* 10665352 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10665359 jmp 0x10665364 */
  goto L_10665364;
L_1066535b:;
  /* 1066535b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066535e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665361 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10665364:;
  /* 10665364 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665368 jge 0x106653ae */
  if ((C.sf==C.of)) goto L_106653ae;
L_1066536a:;
  /* 1066536a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066536d mov edx, dword ptr [ecx*4 + 0x1068da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068da94)));
  /* 10665374 push edx */
  push32((uint32_t)(EDX));
  /* 10665375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665378 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066537b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1066537f push edx */
  push32((uint32_t)(EDX));
  /* 10665380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10665386 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1066538a push edx */
  push32((uint32_t)(EDX));
  /* 1066538b push 0x1068ab88 */
  push32((uint32_t)(0x1068ab88u));
  /* 10665390 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665392 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665394 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665398 call 0x10662560 */
  push32(0x1066539du); f_10662560();
  /* 1066539d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106653a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106653a3 jne 0x106653a6 */
  if (!C.zf) goto L_106653a6;
  /* 106653a5 int3  */
  x86_unimpl("int3 @ 0x106653a5");
L_106653a6:;
  /* 106653a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106653a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106653aa jne 0x1066536a */
  if (!C.zf) goto L_1066536a;
  /* 106653ac jmp 0x1066535b */
  goto L_1066535b;
L_106653ae:;
  /* 106653ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106653b1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106653b4 push edx */
  push32((uint32_t)(EDX));
  /* 106653b5 push 0x1068ab64 */
  push32((uint32_t)(0x1068ab64u));
  /* 106653ba push 0 */
  push32((uint32_t)(0x0u));
  /* 106653bc push 0 */
  push32((uint32_t)(0x0u));
  /* 106653be push 0 */
  push32((uint32_t)(0x0u));
  /* 106653c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106653c2 call 0x10662560 */
  push32(0x106653c7u); f_10662560();
  /* 106653c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106653ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106653cd jne 0x106653d0 */
  if (!C.zf) goto L_106653d0;
  /* 106653cf int3  */
  x86_unimpl("int3 @ 0x106653cf");
L_106653d0:;
  /* 106653d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106653d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106653d4 jne 0x106653ae */
  if (!C.zf) goto L_106653ae;
L_106653d6:;
  /* 106653d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106653d9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 106653dc push edx */
  push32((uint32_t)(EDX));
  /* 106653dd push 0x1068ab44 */
  push32((uint32_t)(0x1068ab44u));
  /* 106653e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106653e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106653e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106653e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106653ea call 0x10662560 */
  push32(0x106653efu); f_10662560();
  /* 106653ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106653f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106653f5 jne 0x106653f8 */
  if (!C.zf) goto L_106653f8;
  /* 106653f7 int3  */
  x86_unimpl("int3 @ 0x106653f7");
L_106653f8:;
  /* 106653f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106653fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106653fc jne 0x106653d6 */
  if (!C.zf) goto L_106653d6;
L_106653fe:;
  /* 106653fe pop edi */
  EDI = (pop32());
  /* 106653ff pop esi */
  ESI = (pop32());
  /* 10665400 pop ebx */
  EBX = (pop32());
  /* 10665401 mov esp, ebp */
  ESP = (EBP);
  /* 10665403 pop ebp */
  EBP = (pop32());
  /* 10665404 ret  */
  ESPCHK(0x10665340u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x10665410 (329 bytes, 102 insns) */
void f_10665410(void) {
  FTRACE(0x10665410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665410 push ebp */
  push32((uint32_t)(EBP));
  /* 10665411 mov ebp, esp */
  EBP = (ESP);
  /* 10665413 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665416 cmp dword ptr [0x10690fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066541d jne 0x10665424 */
  if (!C.zf) goto L_10665424;
  /* 1066541f call 0x10669d50 */
  push32(0x10665424u); f_10669d50();
L_10665424:;
  /* 10665424 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1066542b mov eax, dword ptr [0x1068f468] */
  EAX = (r32((uint32_t)(0x1068f468)));
  /* 10665430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10665433:;
  /* 10665433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665436 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10665439 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066543b je 0x10665469 */
  if (C.zf) goto L_10665469;
  /* 1066543d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665440 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10665443 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665446 je 0x10665451 */
  if (C.zf) goto L_10665451;
  /* 10665448 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066544b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066544e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10665451:;
  /* 10665451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665454 push eax */
  push32((uint32_t)(EAX));
  /* 10665455 call 0x106662d0 */
  push32(0x1066545au); f_106662d0();
  /* 1066545a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066545d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665460 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10665464 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10665467 jmp 0x10665433 */
  goto L_10665433;
L_10665469:;
  /* 10665469 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1066546b push 0x1068aba8 */
  push32((uint32_t)(0x1068aba8u));
  /* 10665470 push 2 */
  push32((uint32_t)(0x2u));
  /* 10665472 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665475 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1066547c push ecx */
  push32((uint32_t)(ECX));
  /* 1066547d call 0x106634a0 */
  push32(0x10665482u); f_106634a0();
  /* 10665482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665485 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10665488 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066548b mov dword ptr [0x1068f49c], edx */
  w32((uint32_t)(0x1068f49c), (EDX));
  /* 10665491 cmp dword ptr [0x1068f49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665498 jne 0x106654a4 */
  if (!C.zf) goto L_106654a4;
  /* 1066549a push 9 */
  push32((uint32_t)(0x9u));
  /* 1066549c call 0x10662410 */
  push32(0x106654a1u); f_10662410();
  /* 106654a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106654a4:;
  /* 106654a4 mov eax, dword ptr [0x1068f468] */
  EAX = (r32((uint32_t)(0x1068f468)));
  /* 106654a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106654ac jmp 0x106654b7 */
  goto L_106654b7;
L_106654ae:;
  /* 106654ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106654b1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106654b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106654b7:;
  /* 106654b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106654ba movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106654bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106654bf je 0x10665527 */
  if (C.zf) goto L_10665527;
  /* 106654c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106654c4 push ecx */
  push32((uint32_t)(ECX));
  /* 106654c5 call 0x106662d0 */
  push32(0x106654cau); f_106662d0();
  /* 106654ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106654cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106654d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106654d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106654d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106654d9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106654dc je 0x10665525 */
  if (C.zf) goto L_10665525;
  /* 106654de push 0x79 */
  push32((uint32_t)(0x79u));
  /* 106654e0 push 0x1068aba8 */
  push32((uint32_t)(0x1068aba8u));
  /* 106654e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106654e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106654ea push ecx */
  push32((uint32_t)(ECX));
  /* 106654eb call 0x106634a0 */
  push32(0x106654f0u); f_106634a0();
  /* 106654f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106654f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106654f6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106654f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106654fb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106654fe jne 0x1066550a */
  if (!C.zf) goto L_1066550a;
  /* 10665500 push 9 */
  push32((uint32_t)(0x9u));
  /* 10665502 call 0x10662410 */
  push32(0x10665507u); f_10662410();
  /* 10665507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066550a:;
  /* 1066550a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066550d push ecx */
  push32((uint32_t)(ECX));
  /* 1066550e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665511 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10665513 push eax */
  push32((uint32_t)(EAX));
  /* 10665514 call 0x10666450 */
  push32(0x10665519u); f_10666450();
  /* 10665519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066551c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066551f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665522 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10665525:;
  /* 10665525 jmp 0x106654ae */
  goto L_106654ae;
L_10665527:;
  /* 10665527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10665529 mov edx, dword ptr [0x1068f468] */
  EDX = (r32((uint32_t)(0x1068f468)));
  /* 1066552f push edx */
  push32((uint32_t)(EDX));
  /* 10665530 call 0x10663f30 */
  push32(0x10665535u); f_10663f30();
  /* 10665535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665538 mov dword ptr [0x1068f468], 0 */
  w32((uint32_t)(0x1068f468), (0x0u));
  /* 10665542 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665545 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066554b mov dword ptr [0x10690fa0], 1 */
  w32((uint32_t)(0x10690fa0), (0x1u));
  /* 10665555 mov esp, ebp */
  ESP = (EBP);
  /* 10665557 pop ebp */
  EBP = (pop32());
  /* 10665558 ret  */
  ESPCHK(0x10665410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x10665560 (216 bytes, 69 insns) */
void f_10665560(void) {
  FTRACE(0x10665560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665560 push ebp */
  push32((uint32_t)(EBP));
  /* 10665561 mov ebp, esp */
  EBP = (ESP);
  /* 10665563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665566 cmp dword ptr [0x10690fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066556d jne 0x10665574 */
  if (!C.zf) goto L_10665574;
  /* 1066556f call 0x10669d50 */
  push32(0x10665574u); f_10669d50();
L_10665574:;
  /* 10665574 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10665579 push 0x1068f4d8 */
  push32((uint32_t)(0x1068f4d8u));
  /* 1066557e push 0 */
  push32((uint32_t)(0x0u));
  /* 10665580 call dword ptr [0x106912cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912cc))), 0x10665586u);
  /* 10665586 mov dword ptr [0x1068f4ac], 0x1068f4d8 */
  w32((uint32_t)(0x1068f4ac), (0x1068f4d8u));
  /* 10665590 mov eax, dword ptr [0x10690fcc] */
  EAX = (r32((uint32_t)(0x10690fcc)));
  /* 10665595 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10665598 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066559a jne 0x106655a7 */
  if (!C.zf) goto L_106655a7;
  /* 1066559c mov edx, dword ptr [0x1068f4ac] */
  EDX = (r32((uint32_t)(0x1068f4ac)));
  /* 106655a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106655a5 jmp 0x106655af */
  goto L_106655af;
L_106655a7:;
  /* 106655a7 mov eax, dword ptr [0x10690fcc] */
  EAX = (r32((uint32_t)(0x10690fcc)));
  /* 106655ac mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106655af:;
  /* 106655af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106655b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106655b5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 106655b8 push edx */
  push32((uint32_t)(EDX));
  /* 106655b9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106655bc push eax */
  push32((uint32_t)(EAX));
  /* 106655bd push 0 */
  push32((uint32_t)(0x0u));
  /* 106655bf push 0 */
  push32((uint32_t)(0x0u));
  /* 106655c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106655c4 push ecx */
  push32((uint32_t)(ECX));
  /* 106655c5 call 0x10665640 */
  push32(0x106655cau); f_10665640();
  /* 106655ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106655cd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 106655d2 push 0x1068abb4 */
  push32((uint32_t)(0x1068abb4u));
  /* 106655d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106655d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106655dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106655df lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 106655e2 push ecx */
  push32((uint32_t)(ECX));
  /* 106655e3 call 0x106634a0 */
  push32(0x106655e8u); f_106634a0();
  /* 106655e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106655eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106655ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106655f2 jne 0x106655fe */
  if (!C.zf) goto L_106655fe;
  /* 106655f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 106655f6 call 0x10662410 */
  push32(0x106655fbu); f_10662410();
  /* 106655fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106655fe:;
  /* 106655fe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10665601 push edx */
  push32((uint32_t)(EDX));
  /* 10665602 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10665605 push eax */
  push32((uint32_t)(EAX));
  /* 10665606 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665609 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066560c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1066560f push eax */
  push32((uint32_t)(EAX));
  /* 10665610 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665613 push ecx */
  push32((uint32_t)(ECX));
  /* 10665614 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665617 push edx */
  push32((uint32_t)(EDX));
  /* 10665618 call 0x10665640 */
  push32(0x1066561du); f_10665640();
  /* 1066561d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665620 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665623 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665626 mov dword ptr [0x1068f490], eax */
  w32((uint32_t)(0x1068f490), (EAX));
  /* 1066562b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066562e mov dword ptr [0x1068f494], ecx */
  w32((uint32_t)(0x1068f494), (ECX));
  /* 10665634 mov esp, ebp */
  ESP = (EBP);
  /* 10665636 pop ebp */
  EBP = (pop32());
  /* 10665637 ret  */
  ESPCHK(0x10665560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x10665640 (1060 bytes, 360 insns) */
void f_10665640(void) {
  FTRACE(0x10665640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665640 push ebp */
  push32((uint32_t)(EBP));
  /* 10665641 mov ebp, esp */
  EBP = (ESP);
  /* 10665643 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665646 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665649 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1066564f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10665652 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10665658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066565b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066565e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665662 je 0x10665675 */
  if (C.zf) goto L_10665675;
  /* 10665664 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10665667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066566a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1066566c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066566f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665672 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10665675:;
  /* 10665675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665678 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066567b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066567e jne 0x1066574d */
  if (!C.zf) goto L_1066574d;
L_10665684:;
  /* 10665684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665687 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066568a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066568d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665690 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10665693 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665696 je 0x10665712 */
  if (C.zf) goto L_10665712;
  /* 10665698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066569b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1066569e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106656a0 je 0x10665712 */
  if (C.zf) goto L_10665712;
  /* 106656a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106656a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106656a7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106656a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106656ab mov al, byte ptr [edx + 0x10690d01] */
  AL = (r8((uint32_t)(EDX + 0x10690d01)));
  /* 106656b1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106656b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106656b6 je 0x106656e7 */
  if (C.zf) goto L_106656e7;
  /* 106656b8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106656bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106656bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106656c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106656c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106656c5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106656c9 je 0x106656e7 */
  if (C.zf) goto L_106656e7;
  /* 106656cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106656ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106656d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106656d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106656d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106656d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106656db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106656de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106656e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106656e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106656e7:;
  /* 106656e7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106656ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106656ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106656ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106656f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106656f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106656f8 je 0x1066570d */
  if (C.zf) goto L_1066570d;
  /* 106656fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106656fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665700 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10665702 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10665704 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665707 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066570a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1066570d:;
  /* 1066570d jmp 0x10665684 */
  goto L_10665684;
L_10665712:;
  /* 10665712 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665715 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10665717 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066571a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066571d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1066571f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665723 je 0x10665734 */
  if (C.zf) goto L_10665734;
  /* 10665725 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665728 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1066572b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066572e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665731 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10665734:;
  /* 10665734 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665737 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066573a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066573d jne 0x10665748 */
  if (!C.zf) goto L_10665748;
  /* 1066573f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665742 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665745 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10665748:;
  /* 10665748 jmp 0x1066581c */
  goto L_1066581c;
L_1066574d:;
  /* 1066574d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665750 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10665752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665755 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665758 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1066575a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066575e je 0x10665773 */
  if (C.zf) goto L_10665773;
  /* 10665760 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665766 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10665768 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1066576a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066576d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665770 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10665773:;
  /* 10665773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665776 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10665778 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1066577b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066577e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665781 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10665784 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665787 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1066578d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066578f mov dl, byte ptr [ecx + 0x10690d01] */
  DL = (r8((uint32_t)(ECX + 0x10690d01)));
  /* 10665795 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10665798 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066579a je 0x106657cb */
  if (C.zf) goto L_106657cb;
  /* 1066579c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066579f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106657a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106657a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106657a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106657a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106657ad je 0x106657c2 */
  if (C.zf) goto L_106657c2;
  /* 106657af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106657b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106657b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106657b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106657b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106657bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106657bf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106657c2:;
  /* 106657c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106657c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106657c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106657cb:;
  /* 106657cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106657ce and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106657d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106657d7 je 0x106657f7 */
  if (C.zf) goto L_106657f7;
  /* 106657d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106657dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106657e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106657e3 je 0x106657f7 */
  if (C.zf) goto L_106657f7;
  /* 106657e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106657e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106657ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106657f1 jne 0x1066574d */
  if (!C.zf) goto L_1066574d;
L_106657f7:;
  /* 106657f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106657fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10665800 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665802 jne 0x1066580f */
  if (!C.zf) goto L_1066580f;
  /* 10665804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665807 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066580a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066580d jmp 0x1066581c */
  goto L_1066581c;
L_1066580f:;
  /* 1066580f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665813 je 0x1066581c */
  if (C.zf) goto L_1066581c;
  /* 10665815 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665818 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1066581c:;
  /* 1066581c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10665823:;
  /* 10665823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665826 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10665829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1066582b je 0x1066584e */
  if (C.zf) goto L_1066584e;
L_1066582d:;
  /* 1066582d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665830 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10665833 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665836 je 0x10665843 */
  if (C.zf) goto L_10665843;
  /* 10665838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066583b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066583e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665841 jne 0x1066584e */
  if (!C.zf) goto L_1066584e;
L_10665843:;
  /* 10665843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665846 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665849 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066584c jmp 0x1066582d */
  goto L_1066582d;
L_1066584e:;
  /* 1066584e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665851 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10665854 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10665856 jne 0x1066585d */
  if (!C.zf) goto L_1066585d;
  /* 10665858 jmp 0x10665a3b */
  goto L_10665a3b;
L_1066585d:;
  /* 1066585d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665861 je 0x10665874 */
  if (C.zf) goto L_10665874;
  /* 10665863 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10665866 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665869 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1066586b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066586e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665871 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10665874:;
  /* 10665874 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10665877 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10665879 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066587c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066587f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10665881:;
  /* 10665881 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10665888 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1066588f:;
  /* 1066588f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665892 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10665895 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665898 jne 0x106658ae */
  if (!C.zf) goto L_106658ae;
  /* 1066589a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066589d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106658a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106658a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106658a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106658a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106658ac jmp 0x1066588f */
  goto L_1066588f;
L_106658ae:;
  /* 106658ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106658b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106658b4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106658b7 jne 0x1066590a */
  if (!C.zf) goto L_1066590a;
  /* 106658b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106658bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106658be mov ecx, 2 */
  ECX = (0x2u);
  /* 106658c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106658c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106658c7 jne 0x10665902 */
  if (!C.zf) goto L_10665902;
  /* 106658c9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106658cd je 0x106658ef */
  if (C.zf) goto L_106658ef;
  /* 106658cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106658d2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106658d6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106658d9 jne 0x106658e6 */
  if (!C.zf) goto L_106658e6;
  /* 106658db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106658de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106658e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106658e4 jmp 0x106658ed */
  goto L_106658ed;
L_106658e6:;
  /* 106658e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106658ed:;
  /* 106658ed jmp 0x106658f6 */
  goto L_106658f6;
L_106658ef:;
  /* 106658ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106658f6:;
  /* 106658f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106658f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106658fc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 106658ff mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10665902:;
  /* 10665902 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665905 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10665907 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1066590a:;
  /* 1066590a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066590d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665910 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665913 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10665916 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10665918 je 0x1066593e */
  if (C.zf) goto L_1066593e;
  /* 1066591a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066591e je 0x1066592f */
  if (C.zf) goto L_1066592f;
  /* 10665920 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665923 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10665926 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665929 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066592c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1066592f:;
  /* 1066592f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665932 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10665934 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665937 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1066593a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1066593c jmp 0x1066590a */
  goto L_1066590a;
L_1066593e:;
  /* 1066593e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665941 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10665944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10665946 je 0x10665964 */
  if (C.zf) goto L_10665964;
  /* 10665948 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066594c jne 0x10665969 */
  if (!C.zf) goto L_10665969;
  /* 1066594e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665951 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10665954 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665957 je 0x10665964 */
  if (C.zf) goto L_10665964;
  /* 10665959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066595c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1066595f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665962 jne 0x10665969 */
  if (!C.zf) goto L_10665969;
L_10665964:;
  /* 10665964 jmp 0x10665a14 */
  goto L_10665a14;
L_10665969:;
  /* 10665969 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066596d je 0x10665a06 */
  if (C.zf) goto L_10665a06;
  /* 10665973 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665977 je 0x106659cd */
  if (C.zf) goto L_106659cd;
  /* 10665979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066597c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066597e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10665980 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10665982 mov cl, byte ptr [eax + 0x10690d01] */
  CL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 10665988 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1066598b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1066598d je 0x106659b8 */
  if (C.zf) goto L_106659b8;
  /* 1066598f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665992 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665995 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10665997 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10665999 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066599c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066599f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 106659a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106659a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106659a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106659ab mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106659ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106659b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106659b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106659b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106659b8:;
  /* 106659b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106659bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106659be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106659c0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106659c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106659c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106659c8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106659cb jmp 0x106659f9 */
  goto L_106659f9;
L_106659cd:;
  /* 106659cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106659d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106659d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106659d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106659d6 mov cl, byte ptr [eax + 0x10690d01] */
  CL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 106659dc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106659df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106659e1 je 0x106659f9 */
  if (C.zf) goto L_106659f9;
  /* 106659e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106659e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106659e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106659ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106659ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106659f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106659f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106659f7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106659f9:;
  /* 106659f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106659fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106659fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665a01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665a04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10665a06:;
  /* 10665a06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665a09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665a0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10665a0f jmp 0x10665881 */
  goto L_10665881;
L_10665a14:;
  /* 10665a14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665a18 je 0x10665a29 */
  if (C.zf) goto L_10665a29;
  /* 10665a1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665a1d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10665a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665a23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665a26 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10665a29:;
  /* 10665a29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665a2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10665a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665a31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10665a34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10665a36 jmp 0x10665823 */
  goto L_10665823;
L_10665a3b:;
  /* 10665a3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665a3f je 0x10665a53 */
  if (C.zf) goto L_10665a53;
  /* 10665a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10665a44 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10665a4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10665a4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665a50 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10665a53:;
  /* 10665a53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10665a56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10665a58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665a5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10665a5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10665a60 mov esp, ebp */
  ESP = (EBP);
  /* 10665a62 pop ebp */
  EBP = (pop32());
  /* 10665a63 ret  */
  ESPCHK(0x10665640u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10665a70 (537 bytes, 173 insns) */
void f_10665a70(void) {
  FTRACE(0x10665a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10665a71 mov ebp, esp */
  EBP = (ESP);
  /* 10665a73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665a76 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10665a7d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10665a84 cmp dword ptr [0x1068f5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665a8b jne 0x10665aca */
  if (!C.zf) goto L_10665aca;
  /* 10665a8d call dword ptr [0x10691328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691328))), 0x10665a93u);
  /* 10665a93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10665a96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665a9a je 0x10665aa8 */
  if (C.zf) goto L_10665aa8;
  /* 10665a9c mov dword ptr [0x1068f5dc], 1 */
  w32((uint32_t)(0x1068f5dc), (0x1u));
  /* 10665aa6 jmp 0x10665aca */
  goto L_10665aca;
L_10665aa8:;
  /* 10665aa8 call dword ptr [0x10691324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691324))), 0x10665aaeu);
  /* 10665aae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10665ab1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665ab5 je 0x10665ac3 */
  if (C.zf) goto L_10665ac3;
  /* 10665ab7 mov dword ptr [0x1068f5dc], 2 */
  w32((uint32_t)(0x1068f5dc), (0x2u));
  /* 10665ac1 jmp 0x10665aca */
  goto L_10665aca;
L_10665ac3:;
  /* 10665ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665ac5 jmp 0x10665c85 */
  goto L_10665c85;
L_10665aca:;
  /* 10665aca cmp dword ptr [0x1068f5dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665ad1 jne 0x10665bce */
  if (!C.zf) goto L_10665bce;
  /* 10665ad7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665adb jne 0x10665af3 */
  if (!C.zf) goto L_10665af3;
  /* 10665add call dword ptr [0x10691328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691328))), 0x10665ae3u);
  /* 10665ae3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10665ae6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665aea jne 0x10665af3 */
  if (!C.zf) goto L_10665af3;
  /* 10665aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665aee jmp 0x10665c85 */
  goto L_10665c85;
L_10665af3:;
  /* 10665af3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10665af6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10665af9:;
  /* 10665af9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665afc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10665afe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10665b01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665b03 je 0x10665b25 */
  if (C.zf) goto L_10665b25;
  /* 10665b05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665b08 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665b0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10665b0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665b11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10665b13 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10665b16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665b18 jne 0x10665b23 */
  if (!C.zf) goto L_10665b23;
  /* 10665b1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665b1d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665b20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10665b23:;
  /* 10665b23 jmp 0x10665af9 */
  goto L_10665af9;
L_10665b25:;
  /* 10665b25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665b28 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665b2b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10665b2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665b30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10665b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665b3e push edx */
  push32((uint32_t)(EDX));
  /* 10665b3f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10665b42 push eax */
  push32((uint32_t)(EAX));
  /* 10665b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b47 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10665b4du);
  /* 10665b4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10665b50 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665b54 je 0x10665b74 */
  if (C.zf) goto L_10665b74;
  /* 10665b56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10665b58 push 0x1068abc0 */
  push32((uint32_t)(0x1068abc0u));
  /* 10665b5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10665b5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665b62 push ecx */
  push32((uint32_t)(ECX));
  /* 10665b63 call 0x106634a0 */
  push32(0x10665b68u); f_106634a0();
  /* 10665b68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665b6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10665b6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665b72 jne 0x10665b85 */
  if (!C.zf) goto L_10665b85;
L_10665b74:;
  /* 10665b74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10665b77 push edx */
  push32((uint32_t)(EDX));
  /* 10665b78 call dword ptr [0x1069131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069131c))), 0x10665b7eu);
  /* 10665b7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665b80 jmp 0x10665c85 */
  goto L_10665c85;
L_10665b85:;
  /* 10665b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665b8c push eax */
  push32((uint32_t)(EAX));
  /* 10665b8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10665b91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665b94 push edx */
  push32((uint32_t)(EDX));
  /* 10665b95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10665b98 push eax */
  push32((uint32_t)(EAX));
  /* 10665b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10665b9d call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10665ba3u);
  /* 10665ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10665ba5 jne 0x10665bbc */
  if (!C.zf) goto L_10665bbc;
  /* 10665ba7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10665ba9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665bac push ecx */
  push32((uint32_t)(ECX));
  /* 10665bad call 0x10663f30 */
  push32(0x10665bb2u); f_10663f30();
  /* 10665bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665bb5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10665bbc:;
  /* 10665bbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10665bbf push edx */
  push32((uint32_t)(EDX));
  /* 10665bc0 call dword ptr [0x1069131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069131c))), 0x10665bc6u);
  /* 10665bc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665bc9 jmp 0x10665c85 */
  goto L_10665c85;
L_10665bce:;
  /* 10665bce cmp dword ptr [0x1068f5dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665bd5 jne 0x10665c83 */
  if (!C.zf) goto L_10665c83;
  /* 10665bdb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665bdf jne 0x10665bf7 */
  if (!C.zf) goto L_10665bf7;
  /* 10665be1 call dword ptr [0x10691324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691324))), 0x10665be7u);
  /* 10665be7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10665bea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665bee jne 0x10665bf7 */
  if (!C.zf) goto L_10665bf7;
  /* 10665bf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665bf2 jmp 0x10665c85 */
  goto L_10665c85;
L_10665bf7:;
  /* 10665bf7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665bfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10665bfd:;
  /* 10665bfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10665c03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665c05 je 0x10665c25 */
  if (C.zf) goto L_10665c25;
  /* 10665c07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665c0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10665c10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c13 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10665c16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10665c18 jne 0x10665c23 */
  if (!C.zf) goto L_10665c23;
  /* 10665c1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665c20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10665c23:;
  /* 10665c23 jmp 0x10665bfd */
  goto L_10665bfd;
L_10665c25:;
  /* 10665c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c28 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665c2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665c2e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10665c31 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10665c36 push 0x1068abc0 */
  push32((uint32_t)(0x1068abc0u));
  /* 10665c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10665c3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665c40 push edx */
  push32((uint32_t)(EDX));
  /* 10665c41 call 0x106634a0 */
  push32(0x10665c46u); f_106634a0();
  /* 10665c46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665c49 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10665c4c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665c50 jne 0x10665c60 */
  if (!C.zf) goto L_10665c60;
  /* 10665c52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665c55 push eax */
  push32((uint32_t)(EAX));
  /* 10665c56 call dword ptr [0x10691318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691318))), 0x10665c5cu);
  /* 10665c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665c5e jmp 0x10665c85 */
  goto L_10665c85;
L_10665c60:;
  /* 10665c60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10665c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10665c64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665c67 push edx */
  push32((uint32_t)(EDX));
  /* 10665c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c6b push eax */
  push32((uint32_t)(EAX));
  /* 10665c6c call 0x10669d80 */
  push32(0x10665c71u); f_10669d80();
  /* 10665c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665c74 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10665c77 push ecx */
  push32((uint32_t)(ECX));
  /* 10665c78 call dword ptr [0x10691318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691318))), 0x10665c7eu);
  /* 10665c7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665c81 jmp 0x10665c85 */
  goto L_10665c85;
L_10665c83:;
  /* 10665c83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10665c85:;
  /* 10665c85 mov esp, ebp */
  ESP = (EBP);
  /* 10665c87 pop ebp */
  EBP = (pop32());
  /* 10665c88 ret  */
  ESPCHK(0x10665a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x10665c90 (77 bytes, 25 insns) */
void f_10665c90(void) {
  FTRACE(0x10665c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10665c91 mov ebp, esp */
  EBP = (ESP);
  /* 10665c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665c95 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10665c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665c9c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665ca0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10665ca3 push eax */
  push32((uint32_t)(EAX));
  /* 10665ca4 call dword ptr [0x10691330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691330))), 0x10665caau);
  /* 10665caa mov dword ptr [0x10690e2c], eax */
  w32((uint32_t)(0x10690e2c), (EAX));
  /* 10665caf cmp dword ptr [0x10690e2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690e2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665cb6 jne 0x10665cbc */
  if (!C.zf) goto L_10665cbc;
  /* 10665cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665cba jmp 0x10665cdb */
  goto L_10665cdb;
L_10665cbc:;
  /* 10665cbc call 0x10667740 */
  push32(0x10665cc1u); f_10667740();
  /* 10665cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10665cc3 jne 0x10665cd6 */
  if (!C.zf) goto L_10665cd6;
  /* 10665cc5 mov ecx, dword ptr [0x10690e2c] */
  ECX = (r32((uint32_t)(0x10690e2c)));
  /* 10665ccb push ecx */
  push32((uint32_t)(ECX));
  /* 10665ccc call dword ptr [0x1069132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069132c))), 0x10665cd2u);
  /* 10665cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10665cd4 jmp 0x10665cdb */
  goto L_10665cdb;
L_10665cd6:;
  /* 10665cd6 mov eax, 1 */
  EAX = (0x1u);
L_10665cdb:;
  /* 10665cdb pop ebp */
  EBP = (pop32());
  /* 10665cdc ret  */
  ESPCHK(0x10665c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce0 @ 0x10665ce0 (156 bytes, 48 insns) */
void f_10665ce0(void) {
  FTRACE(0x10665ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10665ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10665ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665ce6 mov eax, dword ptr [0x10690e28] */
  EAX = (r32((uint32_t)(0x10690e28)));
  /* 10665ceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10665cee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10665cf5 jmp 0x10665d00 */
  goto L_10665d00;
L_10665cf7:;
  /* 10665cf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665cfa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665cfd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10665d00:;
  /* 10665d00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665d03 cmp edx, dword ptr [0x10690e24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10690e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665d09 jge 0x10665d56 */
  if ((C.sf==C.of)) goto L_10665d56;
  /* 10665d0b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10665d10 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10665d15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665d18 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10665d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10665d1c call dword ptr [0x10691338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691338))), 0x10665d22u);
  /* 10665d22 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10665d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665d29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665d2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10665d2f push eax */
  push32((uint32_t)(EAX));
  /* 10665d30 call dword ptr [0x10691338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691338))), 0x10665d36u);
  /* 10665d36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665d39 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10665d3c push edx */
  push32((uint32_t)(EDX));
  /* 10665d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10665d3f mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 10665d44 push eax */
  push32((uint32_t)(EAX));
  /* 10665d45 call dword ptr [0x10691334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691334))), 0x10665d4bu);
  /* 10665d4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665d4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665d51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10665d54 jmp 0x10665cf7 */
  goto L_10665cf7;
L_10665d56:;
  /* 10665d56 mov edx, dword ptr [0x10690e28] */
  EDX = (r32((uint32_t)(0x10690e28)));
  /* 10665d5c push edx */
  push32((uint32_t)(EDX));
  /* 10665d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10665d5f mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 10665d64 push eax */
  push32((uint32_t)(EAX));
  /* 10665d65 call dword ptr [0x10691334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691334))), 0x10665d6bu);
  /* 10665d6b mov ecx, dword ptr [0x10690e2c] */
  ECX = (r32((uint32_t)(0x10690e2c)));
  /* 10665d71 push ecx */
  push32((uint32_t)(ECX));
  /* 10665d72 call dword ptr [0x1069132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069132c))), 0x10665d78u);
  /* 10665d78 mov esp, ebp */
  ESP = (EBP);
  /* 10665d7a pop ebp */
  EBP = (pop32());
  /* 10665d7b ret  */
  ESPCHK(0x10665ce0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10665d80 (73 bytes, 19 insns) */
void f_10665d80(void) {
  FTRACE(0x10665d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10665d81 mov ebp, esp */
  EBP = (ESP);
  /* 10665d83 cmp dword ptr [0x1068f470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665d8a je 0x10665d9e */
  if (C.zf) goto L_10665d9e;
  /* 10665d8c cmp dword ptr [0x1068f470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665d93 jne 0x10665dc7 */
  if (!C.zf) goto L_10665dc7;
  /* 10665d95 cmp dword ptr [0x1068f474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665d9c jne 0x10665dc7 */
  if (!C.zf) goto L_10665dc7;
L_10665d9e:;
  /* 10665d9e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10665da3 call 0x10665dd0 */
  push32(0x10665da8u); f_10665dd0();
  /* 10665da8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665dab cmp dword ptr [0x1068f5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665db2 je 0x10665dba */
  if (C.zf) goto L_10665dba;
  /* 10665db4 call dword ptr [0x1068f5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f5e0))), 0x10665dbau);
L_10665dba:;
  /* 10665dba push 0xff */
  push32((uint32_t)(0xffu));
  /* 10665dbf call 0x10665dd0 */
  push32(0x10665dc4u); f_10665dd0();
  /* 10665dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10665dc7:;
  /* 10665dc7 pop ebp */
  EBP = (pop32());
  /* 10665dc8 ret  */
  ESPCHK(0x10665d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10665dd0 (447 bytes, 131 insns) */
void f_10665dd0(void) {
  FTRACE(0x10665dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10665dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10665dd3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10665dd9 push ebx */
  push32((uint32_t)(EBX));
  /* 10665dda push esi */
  push32((uint32_t)(ESI));
  /* 10665ddb push edi */
  push32((uint32_t)(EDI));
  /* 10665ddc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10665de3 jmp 0x10665dee */
  goto L_10665dee;
L_10665de5:;
  /* 10665de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665de8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10665dee:;
  /* 10665dee cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665df2 jae 0x10665e07 */
  if (!C.cf) goto L_10665e07;
  /* 10665df4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665df7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10665dfa cmp edx, dword ptr [ecx*8 + 0x1068dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1068dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e01 jne 0x10665e05 */
  if (!C.zf) goto L_10665e05;
  /* 10665e03 jmp 0x10665e07 */
  goto L_10665e07;
L_10665e05:;
  /* 10665e05 jmp 0x10665de5 */
  goto L_10665de5;
L_10665e07:;
  /* 10665e07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665e0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10665e0d cmp ecx, dword ptr [eax*8 + 0x1068dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1068dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e14 jne 0x10665f88 */
  if (!C.zf) goto L_10665f88;
  /* 10665e1a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e21 je 0x10665e44 */
  if (C.zf) goto L_10665e44;
  /* 10665e23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665e26 mov eax, dword ptr [edx*8 + 0x1068dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1068dab4)));
  /* 10665e2d push eax */
  push32((uint32_t)(EAX));
  /* 10665e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10665e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665e34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10665e36 call 0x10662560 */
  push32(0x10665e3bu); f_10662560();
  /* 10665e3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665e3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e41 jne 0x10665e44 */
  if (!C.zf) goto L_10665e44;
  /* 10665e43 int3  */
  x86_unimpl("int3 @ 0x10665e43");
L_10665e44:;
  /* 10665e44 cmp dword ptr [0x1068f470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e4b je 0x10665e5f */
  if (C.zf) goto L_10665e5f;
  /* 10665e4d cmp dword ptr [0x1068f470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e54 jne 0x10665e98 */
  if (!C.zf) goto L_10665e98;
  /* 10665e56 cmp dword ptr [0x1068f474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e5d jne 0x10665e98 */
  if (!C.zf) goto L_10665e98;
L_10665e5f:;
  /* 10665e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10665e61 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10665e64 push ecx */
  push32((uint32_t)(ECX));
  /* 10665e65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665e68 mov eax, dword ptr [edx*8 + 0x1068dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1068dab4)));
  /* 10665e6f push eax */
  push32((uint32_t)(EAX));
  /* 10665e70 call 0x106662d0 */
  push32(0x10665e75u); f_106662d0();
  /* 10665e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665e78 push eax */
  push32((uint32_t)(EAX));
  /* 10665e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665e7c mov edx, dword ptr [ecx*8 + 0x1068dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1068dab4)));
  /* 10665e83 push edx */
  push32((uint32_t)(EDX));
  /* 10665e84 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10665e86 call dword ptr [0x106912b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b0))), 0x10665e8cu);
  /* 10665e8c push eax */
  push32((uint32_t)(EAX));
  /* 10665e8d call dword ptr [0x106912b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b4))), 0x10665e93u);
  /* 10665e93 jmp 0x10665f88 */
  goto L_10665f88;
L_10665e98:;
  /* 10665e98 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665e9f je 0x10665f88 */
  if (C.zf) goto L_10665f88;
  /* 10665ea5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10665eaa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10665eb0 push eax */
  push32((uint32_t)(EAX));
  /* 10665eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10665eb3 call dword ptr [0x106912cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912cc))), 0x10665eb9u);
  /* 10665eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10665ebb jne 0x10665ed1 */
  if (!C.zf) goto L_10665ed1;
  /* 10665ebd push 0x1068a428 */
  push32((uint32_t)(0x1068a428u));
  /* 10665ec2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10665ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 10665ec9 call 0x10666450 */
  push32(0x10665eceu); f_10666450();
  /* 10665ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10665ed1:;
  /* 10665ed1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10665ed7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10665eda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665edd push eax */
  push32((uint32_t)(EAX));
  /* 10665ede call 0x106662d0 */
  push32(0x10665ee3u); f_106662d0();
  /* 10665ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665ee6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665ee9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665eec jbe 0x10665f1a */
  if ((C.cf||C.zf)) goto L_10665f1a;
  /* 10665eee lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10665ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 10665ef5 call 0x106662d0 */
  push32(0x10665efau); f_106662d0();
  /* 10665efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665efd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665f00 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10665f04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10665f07 push 3 */
  push32((uint32_t)(0x3u));
  /* 10665f09 push 0x1068a424 */
  push32((uint32_t)(0x1068a424u));
  /* 10665f0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665f11 push ecx */
  push32((uint32_t)(ECX));
  /* 10665f12 call 0x10666cc0 */
  push32(0x10665f17u); f_10666cc0();
  /* 10665f17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10665f1a:;
  /* 10665f1a push 0x1068ae7c */
  push32((uint32_t)(0x1068ae7cu));
  /* 10665f1f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10665f25 push edx */
  push32((uint32_t)(EDX));
  /* 10665f26 call 0x10666450 */
  push32(0x10665f2bu); f_10666450();
  /* 10665f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665f2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10665f31 push eax */
  push32((uint32_t)(EAX));
  /* 10665f32 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10665f38 push ecx */
  push32((uint32_t)(ECX));
  /* 10665f39 call 0x10666460 */
  push32(0x10665f3eu); f_10666460();
  /* 10665f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665f41 push 0x1068a39c */
  push32((uint32_t)(0x1068a39cu));
  /* 10665f46 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10665f4c push edx */
  push32((uint32_t)(EDX));
  /* 10665f4d call 0x10666460 */
  push32(0x10665f52u); f_10666460();
  /* 10665f52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665f55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10665f58 mov ecx, dword ptr [eax*8 + 0x1068dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1068dab4)));
  /* 10665f5f push ecx */
  push32((uint32_t)(ECX));
  /* 10665f60 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10665f66 push edx */
  push32((uint32_t)(EDX));
  /* 10665f67 call 0x10666460 */
  push32(0x10665f6cu); f_10666460();
  /* 10665f6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10665f6f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10665f74 push 0x1068ae54 */
  push32((uint32_t)(0x1068ae54u));
  /* 10665f79 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10665f7f push eax */
  push32((uint32_t)(EAX));
  /* 10665f80 call 0x10666c00 */
  push32(0x10665f85u); f_10666c00();
  /* 10665f85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10665f88:;
  /* 10665f88 pop edi */
  EDI = (pop32());
  /* 10665f89 pop esi */
  ESI = (pop32());
  /* 10665f8a pop ebx */
  EBX = (pop32());
  /* 10665f8b mov esp, ebp */
  ESP = (EBP);
  /* 10665f8d pop ebp */
  EBP = (pop32());
  /* 10665f8e ret  */
  ESPCHK(0x10665dd0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10665f90 (80 bytes, 27 insns) */
void f_10665f90(void) {
  FTRACE(0x10665f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10665f91 mov ebp, esp */
  EBP = (ESP);
  /* 10665f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10665f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10665f9b jmp 0x10665fa6 */
  goto L_10665fa6;
L_10665f9d:;
  /* 10665f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10665fa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10665fa6:;
  /* 10665fa6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665faa jae 0x10665fbf */
  if (!C.cf) goto L_10665fbf;
  /* 10665fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665faf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10665fb2 cmp edx, dword ptr [ecx*8 + 0x1068dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1068dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665fb9 jne 0x10665fbd */
  if (!C.zf) goto L_10665fbd;
  /* 10665fbb jmp 0x10665fbf */
  goto L_10665fbf;
L_10665fbd:;
  /* 10665fbd jmp 0x10665f9d */
  goto L_10665f9d;
L_10665fbf:;
  /* 10665fbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10665fc5 cmp ecx, dword ptr [eax*8 + 0x1068dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1068dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665fcc jne 0x10665fda */
  if (!C.zf) goto L_10665fda;
  /* 10665fce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10665fd1 mov eax, dword ptr [edx*8 + 0x1068dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1068dab4)));
  /* 10665fd8 jmp 0x10665fdc */
  goto L_10665fdc;
L_10665fda:;
  /* 10665fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10665fdc:;
  /* 10665fdc mov esp, ebp */
  ESP = (EBP);
  /* 10665fde pop ebp */
  EBP = (pop32());
  /* 10665fdf ret  */
  ESPCHK(0x10665f90u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10665fe0 (66 bytes, 28 insns) */
void f_10665fe0(void) {
  FTRACE(0x10665fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10665fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10665fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10665fe3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665fe7 jne 0x10666007 */
  if (!C.zf) goto L_10666007;
  /* 10665fe9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10665fed jge 0x10666007 */
  if ((C.sf==C.of)) goto L_10666007;
  /* 10665fef push 1 */
  push32((uint32_t)(0x1u));
  /* 10665ff1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10665ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10665ff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10665ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 10665ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10665ffc push edx */
  push32((uint32_t)(EDX));
  /* 10665ffd call 0x10666030 */
  push32(0x10666002u); f_10666030();
  /* 10666002 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666005 jmp 0x1066601d */
  goto L_1066601d;
L_10666007:;
  /* 10666007 push 0 */
  push32((uint32_t)(0x0u));
  /* 10666009 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1066600c push eax */
  push32((uint32_t)(EAX));
  /* 1066600d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666010 push ecx */
  push32((uint32_t)(ECX));
  /* 10666011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666014 push edx */
  push32((uint32_t)(EDX));
  /* 10666015 call 0x10666030 */
  push32(0x1066601au); f_10666030();
  /* 1066601a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066601d:;
  /* 1066601d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666020 pop ebp */
  EBP = (pop32());
  /* 10666021 ret  */
  ESPCHK(0x10665fe0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10666030 (194 bytes, 71 insns) */
void f_10666030(void) {
  FTRACE(0x10666030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666030 push ebp */
  push32((uint32_t)(EBP));
  /* 10666031 mov ebp, esp */
  EBP = (ESP);
  /* 10666033 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666036 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066603c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666040 je 0x10666059 */
  if (C.zf) goto L_10666059;
  /* 10666042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666045 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10666048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066604b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066604e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10666051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666054 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10666056 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10666059:;
  /* 10666059 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066605c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1066605f:;
  /* 1066605f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666062 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10666064 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10666067 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1066606a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066606d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066606f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10666072 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10666075 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666079 jbe 0x10666091 */
  if ((C.cf||C.zf)) goto L_10666091;
  /* 1066607b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066607e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666084 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10666086 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666089 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066608c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1066608f jmp 0x106660a5 */
  goto L_106660a5;
L_10666091:;
  /* 10666091 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10666094 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066609a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1066609c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066609f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106660a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106660a5:;
  /* 106660a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106660a9 ja 0x1066605f */
  if ((!C.cf&&!C.zf)) goto L_1066605f;
  /* 106660ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106660ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106660b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106660b4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106660b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106660ba:;
  /* 106660ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106660bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106660bf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 106660c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106660c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106660c8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106660ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106660cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106660cf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 106660d2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106660d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106660d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106660da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106660dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106660e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106660e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106660e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106660e9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106660ec jb 0x106660ba */
  if (C.cf) goto L_106660ba;
  /* 106660ee mov esp, ebp */
  ESP = (EBP);
  /* 106660f0 pop ebp */
  EBP = (pop32());
  /* 106660f1 ret  */
  ESPCHK(0x10666030u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10666100 (63 bytes, 24 insns) */
void f_10666100(void) {
  FTRACE(0x10666100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666100 push ebp */
  push32((uint32_t)(EBP));
  /* 10666101 mov ebp, esp */
  EBP = (ESP);
  /* 10666103 push ecx */
  push32((uint32_t)(ECX));
  /* 10666104 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666108 jne 0x10666119 */
  if (!C.zf) goto L_10666119;
  /* 1066610a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066610e jge 0x10666119 */
  if ((C.sf==C.of)) goto L_10666119;
  /* 10666110 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10666117 jmp 0x10666120 */
  goto L_10666120;
L_10666119:;
  /* 10666119 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10666120:;
  /* 10666120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666123 push eax */
  push32((uint32_t)(EAX));
  /* 10666124 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10666127 push ecx */
  push32((uint32_t)(ECX));
  /* 10666128 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066612b push edx */
  push32((uint32_t)(EDX));
  /* 1066612c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066612f push eax */
  push32((uint32_t)(EAX));
  /* 10666130 call 0x10666030 */
  push32(0x10666135u); f_10666030();
  /* 10666135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666138 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066613b mov esp, ebp */
  ESP = (EBP);
  /* 1066613d pop ebp */
  EBP = (pop32());
  /* 1066613e ret  */
  ESPCHK(0x10666100u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10666140 (30 bytes, 14 insns) */
void f_10666140(void) {
  FTRACE(0x10666140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666140 push ebp */
  push32((uint32_t)(EBP));
  /* 10666141 mov ebp, esp */
  EBP = (ESP);
  /* 10666143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10666145 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10666148 push eax */
  push32((uint32_t)(EAX));
  /* 10666149 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066614c push ecx */
  push32((uint32_t)(ECX));
  /* 1066614d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666150 push edx */
  push32((uint32_t)(EDX));
  /* 10666151 call 0x10666030 */
  push32(0x10666156u); f_10666030();
  /* 10666156 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666159 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066615c pop ebp */
  EBP = (pop32());
  /* 1066615d ret  */
  ESPCHK(0x10666140u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10666160 (72 bytes, 28 insns) */
void f_10666160(void) {
  FTRACE(0x10666160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666160 push ebp */
  push32((uint32_t)(EBP));
  /* 10666161 mov ebp, esp */
  EBP = (ESP);
  /* 10666163 push ecx */
  push32((uint32_t)(ECX));
  /* 10666164 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666168 jne 0x10666181 */
  if (!C.zf) goto L_10666181;
  /* 1066616a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066616e jg 0x10666181 */
  if ((!C.zf&&C.sf==C.of)) goto L_10666181;
  /* 10666170 jl 0x10666178 */
  if ((C.sf!=C.of)) goto L_10666178;
  /* 10666172 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666176 jae 0x10666181 */
  if (!C.cf) goto L_10666181;
L_10666178:;
  /* 10666178 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1066617f jmp 0x10666188 */
  goto L_10666188;
L_10666181:;
  /* 10666181 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10666188:;
  /* 10666188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066618b push eax */
  push32((uint32_t)(EAX));
  /* 1066618c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1066618f push ecx */
  push32((uint32_t)(ECX));
  /* 10666190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10666193 push edx */
  push32((uint32_t)(EDX));
  /* 10666194 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666197 push eax */
  push32((uint32_t)(EAX));
  /* 10666198 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066619b push ecx */
  push32((uint32_t)(ECX));
  /* 1066619c call 0x106661b0 */
  push32(0x106661a1u); f_106661b0();
  /* 106661a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106661a4 mov esp, ebp */
  ESP = (EBP);
  /* 106661a6 pop ebp */
  EBP = (pop32());
  /* 106661a7 ret  */
  ESPCHK(0x10666160u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x106661b0 (242 bytes, 91 insns) */
void f_106661b0(void) {
  FTRACE(0x106661b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106661b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106661b1 mov ebp, esp */
  EBP = (ESP);
  /* 106661b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106661b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106661b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106661bc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106661c0 je 0x106661e4 */
  if (C.zf) goto L_106661e4;
  /* 106661c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106661c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 106661c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106661cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106661ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106661d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106661d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106661d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106661d9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106661dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106661de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106661e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106661e4:;
  /* 106661e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106661e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106661ea:;
  /* 106661ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106661ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106661ef push ecx */
  push32((uint32_t)(ECX));
  /* 106661f0 push eax */
  push32((uint32_t)(EAX));
  /* 106661f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106661f4 push edx */
  push32((uint32_t)(EDX));
  /* 106661f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106661f8 push eax */
  push32((uint32_t)(EAX));
  /* 106661f9 call 0x1066a130 */
  push32(0x106661feu); f_1066a130();
  /* 106661fe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10666201 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10666204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10666206 push edx */
  push32((uint32_t)(EDX));
  /* 10666207 push ecx */
  push32((uint32_t)(ECX));
  /* 10666208 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066620b push eax */
  push32((uint32_t)(EAX));
  /* 1066620c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066620f push ecx */
  push32((uint32_t)(ECX));
  /* 10666210 call 0x1066a0c0 */
  push32(0x10666215u); f_1066a0c0();
  /* 10666215 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10666218 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1066621b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066621f jbe 0x10666237 */
  if ((C.cf||C.zf)) goto L_10666237;
  /* 10666221 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10666224 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666227 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066622a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1066622c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066622f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666232 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10666235 jmp 0x1066624b */
  goto L_1066624b;
L_10666237:;
  /* 10666237 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066623a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066623d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666240 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10666242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666245 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666248 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1066624b:;
  /* 1066624b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066624f ja 0x106661ea */
  if ((!C.cf&&!C.zf)) goto L_106661ea;
  /* 10666251 jb 0x10666259 */
  if (C.cf) goto L_10666259;
  /* 10666253 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666257 ja 0x106661ea */
  if ((!C.cf&&!C.zf)) goto L_106661ea;
L_10666259:;
  /* 10666259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066625c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1066625f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666262 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666265 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10666268:;
  /* 10666268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066626b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1066626d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10666270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666273 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666276 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10666278 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1066627a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066627d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10666280 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10666282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666285 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1066628b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066628e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666291 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10666294 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666297 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066629a jb 0x10666268 */
  if (C.cf) goto L_10666268;
  /* 1066629c mov esp, ebp */
  ESP = (EBP);
  /* 1066629e pop ebp */
  EBP = (pop32());
  /* 1066629f ret 0x14 */
  ESPCHK(0x106661b0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x106662b0 (31 bytes, 15 insns) */
void f_106662b0(void) {
  FTRACE(0x106662b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106662b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106662b1 mov ebp, esp */
  EBP = (ESP);
  /* 106662b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106662b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106662b8 push eax */
  push32((uint32_t)(EAX));
  /* 106662b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106662bc push ecx */
  push32((uint32_t)(ECX));
  /* 106662bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106662c0 push edx */
  push32((uint32_t)(EDX));
  /* 106662c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106662c4 push eax */
  push32((uint32_t)(EAX));
  /* 106662c5 call 0x106661b0 */
  push32(0x106662cau); f_106661b0();
  /* 106662ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106662cd pop ebp */
  EBP = (pop32());
  /* 106662ce ret  */
  ESPCHK(0x106662b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x106662d0 (123 bytes, 44 insns) */
void f_106662d0(void) {
  FTRACE(0x106662d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106662d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106662d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106662da je 0x106662f0 */
  if (C.zf) goto L_106662f0;
L_106662dc:;
  /* 106662dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 106662de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106662df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106662e1 je 0x10666323 */
  if (C.zf) goto L_10666323;
  /* 106662e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106662e9 jne 0x106662dc */
  if (!C.zf) goto L_106662dc;
  /* 106662eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106662f0:;
  /* 106662f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106662f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106662f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106662f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106662fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106662fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666301 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10666306 je 0x106662f0 */
  if (C.zf) goto L_106662f0;
  /* 10666308 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1066630b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1066630d je 0x10666341 */
  if (C.zf) goto L_10666341;
  /* 1066630f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10666311 je 0x10666337 */
  if (C.zf) goto L_10666337;
  /* 10666313 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10666318 je 0x1066632d */
  if (C.zf) goto L_1066632d;
  /* 1066631a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1066631f je 0x10666323 */
  if (C.zf) goto L_10666323;
  /* 10666321 jmp 0x106662f0 */
  goto L_106662f0;
L_10666323:;
  /* 10666323 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10666326 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1066632a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066632c ret  */
  ESPCHK(0x106662d0u, _esp0);
  ESP += 4; return;
L_1066632d:;
  /* 1066632d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10666330 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10666334 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666336 ret  */
  ESPCHK(0x106662d0u, _esp0);
  ESP += 4; return;
L_10666337:;
  /* 10666337 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1066633a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1066633e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666340 ret  */
  ESPCHK(0x106662d0u, _esp0);
  ESP += 4; return;
L_10666341:;
  /* 10666341 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10666344 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10666348 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066634a ret  */
  ESPCHK(0x106662d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x10666350 (249 bytes, 93 insns) */
void f_10666350(void) {
  FTRACE(0x10666350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666350 push ebp */
  push32((uint32_t)(EBP));
  /* 10666351 mov ebp, esp */
  EBP = (ESP);
  /* 10666353 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666356 push ebx */
  push32((uint32_t)(EBX));
  /* 10666357 push esi */
  push32((uint32_t)(ESI));
  /* 10666358 push edi */
  push32((uint32_t)(EDI));
  /* 10666359 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1066635c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1066635f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10666362 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10666365:;
  /* 10666365 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666369 jne 0x10666389 */
  if (!C.zf) goto L_10666389;
  /* 1066636b push 0x1068aeb4 */
  push32((uint32_t)(0x1068aeb4u));
  /* 10666370 push 0 */
  push32((uint32_t)(0x0u));
  /* 10666372 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10666374 push 0x1068aea8 */
  push32((uint32_t)(0x1068aea8u));
  /* 10666379 push 2 */
  push32((uint32_t)(0x2u));
  /* 1066637b call 0x10662560 */
  push32(0x10666380u); f_10662560();
  /* 10666380 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666383 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666386 jne 0x10666389 */
  if (!C.zf) goto L_10666389;
  /* 10666388 int3  */
  x86_unimpl("int3 @ 0x10666388");
L_10666389:;
  /* 10666389 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066638b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066638d jne 0x10666365 */
  if (!C.zf) goto L_10666365;
L_1066638f:;
  /* 1066638f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666393 jne 0x106663b3 */
  if (!C.zf) goto L_106663b3;
  /* 10666395 push 0x1068ae98 */
  push32((uint32_t)(0x1068ae98u));
  /* 1066639a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066639c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1066639e push 0x1068aea8 */
  push32((uint32_t)(0x1068aea8u));
  /* 106663a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106663a5 call 0x10662560 */
  push32(0x106663aau); f_10662560();
  /* 106663aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106663ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106663b0 jne 0x106663b3 */
  if (!C.zf) goto L_106663b3;
  /* 106663b2 int3  */
  x86_unimpl("int3 @ 0x106663b2");
L_106663b3:;
  /* 106663b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106663b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106663b7 jne 0x1066638f */
  if (!C.zf) goto L_1066638f;
  /* 106663b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106663bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 106663c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106663c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106663c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106663cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106663cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106663d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106663d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106663d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106663da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106663dd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106663e0 push edx */
  push32((uint32_t)(EDX));
  /* 106663e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106663e4 push eax */
  push32((uint32_t)(EAX));
  /* 106663e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106663e8 push ecx */
  push32((uint32_t)(ECX));
  /* 106663e9 call 0x1066a430 */
  push32(0x106663eeu); f_1066a430();
  /* 106663ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106663f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106663f4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106663f7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106663fa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106663fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10666400 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10666403 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10666406 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066640a jl 0x1066642e */
  if ((C.sf!=C.of)) goto L_1066642e;
  /* 1066640c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066640f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10666411 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10666414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10666416 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1066641c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1066641f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10666422 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10666424 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666427 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066642a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1066642c jmp 0x1066643f */
  goto L_1066643f;
L_1066642e:;
  /* 1066642e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10666431 push eax */
  push32((uint32_t)(EAX));
  /* 10666432 push 0 */
  push32((uint32_t)(0x0u));
  /* 10666434 call 0x1066a1b0 */
  push32(0x10666439u); f_1066a1b0();
  /* 10666439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066643c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1066643f:;
  /* 1066643f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10666442 pop edi */
  EDI = (pop32());
  /* 10666443 pop esi */
  ESI = (pop32());
  /* 10666444 pop ebx */
  EBX = (pop32());
  /* 10666445 mov esp, ebp */
  ESP = (EBP);
  /* 10666447 pop ebp */
  EBP = (pop32());
  /* 10666448 ret  */
  ESPCHK(0x10666350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x10666450 (7 bytes, 3 insns) */
void f_10666450(void) {
  FTRACE(0x10666450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666450 push edi */
  push32((uint32_t)(EDI));
  /* 10666451 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10666455 jmp 0x106664c1 */
  jmp_ind(0x106664c1u); return;
}

/* FUN_10006460 @ 0x10666460 (224 bytes, 84 insns) */
void f_10666460(void) {
  FTRACE(0x10666460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666460 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10666464 push edi */
  push32((uint32_t)(EDI));
  /* 10666465 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1066646b je 0x1066647c */
  if (C.zf) goto L_1066647c;
L_1066646d:;
  /* 1066646d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1066646f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10666470 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10666472 je 0x106664af */
  if (C.zf) goto L_106664af;
  /* 10666474 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1066647a jne 0x1066646d */
  if (!C.zf) goto L_1066646d;
L_1066647c:;
  /* 1066647c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1066647e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10666483 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666485 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10666488 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1066648a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066648d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10666492 je 0x1066647c */
  if (C.zf) goto L_1066647c;
  /* 10666494 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10666497 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10666499 je 0x106664be */
  if (C.zf) goto L_106664be;
  /* 1066649b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1066649d je 0x106664b9 */
  if (C.zf) goto L_106664b9;
  /* 1066649f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 106664a4 je 0x106664b4 */
  if (C.zf) goto L_106664b4;
  /* 106664a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 106664ab je 0x106664af */
  if (C.zf) goto L_106664af;
  /* 106664ad jmp 0x1066647c */
  goto L_1066647c;
L_106664af:;
  /* 106664af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 106664b2 jmp 0x106664c1 */
  goto L_106664c1;
L_106664b4:;
  /* 106664b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 106664b7 jmp 0x106664c1 */
  goto L_106664c1;
L_106664b9:;
  /* 106664b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 106664bc jmp 0x106664c1 */
  goto L_106664c1;
L_106664be:;
  /* 106664be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_106664c1:;
  /* 106664c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106664c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106664cb je 0x106664e6 */
  if (C.zf) goto L_106664e6;
L_106664cd:;
  /* 106664cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106664cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106664d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106664d2 je 0x10666538 */
  if (C.zf) goto L_10666538;
  /* 106664d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 106664d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106664d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106664dd jne 0x106664cd */
  if (!C.zf) goto L_106664cd;
  /* 106664df jmp 0x106664e6 */
  goto L_106664e6;
L_106664e1:;
  /* 106664e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106664e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106664e6:;
  /* 106664e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106664eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106664ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106664ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106664f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106664f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106664f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106664f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106664fe je 0x106664e1 */
  if (C.zf) goto L_106664e1;
  /* 10666500 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10666502 je 0x10666538 */
  if (C.zf) goto L_10666538;
  /* 10666504 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10666506 je 0x1066652f */
  if (C.zf) goto L_1066652f;
  /* 10666508 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1066650e je 0x10666522 */
  if (C.zf) goto L_10666522;
  /* 10666510 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10666516 je 0x1066651a */
  if (C.zf) goto L_1066651a;
  /* 10666518 jmp 0x106664e1 */
  goto L_106664e1;
L_1066651a:;
  /* 1066651a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1066651c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10666520 pop edi */
  EDI = (pop32());
  /* 10666521 ret  */
  ESPCHK(0x10666460u, _esp0);
  ESP += 4; return;
L_10666522:;
  /* 10666522 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10666525 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10666529 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1066652d pop edi */
  EDI = (pop32());
  /* 1066652e ret  */
  ESPCHK(0x10666460u, _esp0);
  ESP += 4; return;
L_1066652f:;
  /* 1066652f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10666532 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10666536 pop edi */
  EDI = (pop32());
  /* 10666537 ret  */
  ESPCHK(0x10666460u, _esp0);
  ESP += 4; return;
L_10666538:;
  /* 10666538 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1066653a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1066653e pop edi */
  EDI = (pop32());
  /* 1066653f ret  */
  ESPCHK(0x10666460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x10666540 (243 bytes, 91 insns) */
void f_10666540(void) {
  FTRACE(0x10666540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666540 push ebp */
  push32((uint32_t)(EBP));
  /* 10666541 mov ebp, esp */
  EBP = (ESP);
  /* 10666543 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666546 push ebx */
  push32((uint32_t)(EBX));
  /* 10666547 push esi */
  push32((uint32_t)(ESI));
  /* 10666548 push edi */
  push32((uint32_t)(EDI));
  /* 10666549 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1066654c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1066654f:;
  /* 1066654f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666553 jne 0x10666573 */
  if (!C.zf) goto L_10666573;
  /* 10666555 push 0x1068aeb4 */
  push32((uint32_t)(0x1068aeb4u));
  /* 1066655a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066655c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1066655e push 0x1068aec4 */
  push32((uint32_t)(0x1068aec4u));
  /* 10666563 push 2 */
  push32((uint32_t)(0x2u));
  /* 10666565 call 0x10662560 */
  push32(0x1066656au); f_10662560();
  /* 1066656a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066656d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666570 jne 0x10666573 */
  if (!C.zf) goto L_10666573;
  /* 10666572 int3  */
  x86_unimpl("int3 @ 0x10666572");
L_10666573:;
  /* 10666573 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10666575 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10666577 jne 0x1066654f */
  if (!C.zf) goto L_1066654f;
L_10666579:;
  /* 10666579 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066657d jne 0x1066659d */
  if (!C.zf) goto L_1066659d;
  /* 1066657f push 0x1068ae98 */
  push32((uint32_t)(0x1068ae98u));
  /* 10666584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10666586 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10666588 push 0x1068aec4 */
  push32((uint32_t)(0x1068aec4u));
  /* 1066658d push 2 */
  push32((uint32_t)(0x2u));
  /* 1066658f call 0x10662560 */
  push32(0x10666594u); f_10662560();
  /* 10666594 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666597 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066659a jne 0x1066659d */
  if (!C.zf) goto L_1066659d;
  /* 1066659c int3  */
  x86_unimpl("int3 @ 0x1066659c");
L_1066659d:;
  /* 1066659d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066659f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106665a1 jne 0x10666579 */
  if (!C.zf) goto L_10666579;
  /* 106665a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665a6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 106665ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106665b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106665b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106665bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106665be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106665c4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106665c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106665ca push ecx */
  push32((uint32_t)(ECX));
  /* 106665cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106665ce push edx */
  push32((uint32_t)(EDX));
  /* 106665cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665d2 push eax */
  push32((uint32_t)(EAX));
  /* 106665d3 call 0x1066a430 */
  push32(0x106665d8u); f_1066a430();
  /* 106665d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106665db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106665de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106665e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106665e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106665ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665f0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106665f4 jl 0x10666618 */
  if ((C.sf!=C.of)) goto L_10666618;
  /* 106665f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106665f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106665fb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106665fe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10666600 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10666606 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10666609 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066660c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1066660e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666611 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10666614 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10666616 jmp 0x10666629 */
  goto L_10666629;
L_10666618:;
  /* 10666618 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1066661b push edx */
  push32((uint32_t)(EDX));
  /* 1066661c push 0 */
  push32((uint32_t)(0x0u));
  /* 1066661e call 0x1066a1b0 */
  push32(0x10666623u); f_1066a1b0();
  /* 10666623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666626 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10666629:;
  /* 10666629 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1066662c pop edi */
  EDI = (pop32());
  /* 1066662d pop esi */
  ESI = (pop32());
  /* 1066662e pop ebx */
  EBX = (pop32());
  /* 1066662f mov esp, ebp */
  ESP = (EBP);
  /* 10666631 pop ebp */
  EBP = (pop32());
  /* 10666632 ret  */
  ESPCHK(0x10666540u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x10666640 (47 bytes, 17 insns) */
void f_10666640(void) {
  FTRACE(0x10666640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666640 push ecx */
  push32((uint32_t)(ECX));
  /* 10666641 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666646 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1066664a jb 0x10666660 */
  if (C.cf) goto L_10666660;
L_1066664c:;
  /* 1066664c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666652 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666657 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10666659 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066665e jae 0x1066664c */
  if (!C.cf) goto L_1066664c;
L_10666660:;
  /* 10666660 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666662 mov eax, esp */
  EAX = (ESP);
  /* 10666664 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10666666 mov esp, ecx */
  ESP = (ECX);
  /* 10666668 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1066666a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1066666d push eax */
  push32((uint32_t)(EAX));
  /* 1066666e ret  */
  ESPCHK(0x10666640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10666670 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10666670(void) {
  FTRACE(0x10666670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666670 push ebp */
  push32((uint32_t)(EBP));
  /* 10666671 mov ebp, esp */
  EBP = (ESP);
  /* 10666673 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666676 push esi */
  push32((uint32_t)(ESI));
  /* 10666677 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066667b je 0x10666683 */
  if (C.zf) goto L_10666683;
  /* 1066667d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666681 jne 0x10666688 */
  if (!C.zf) goto L_10666688;
L_10666683:;
  /* 10666683 jmp 0x10666858 */
  goto L_10666858;
L_10666688:;
  /* 10666688 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066668c je 0x106666a4 */
  if (C.zf) goto L_106666a4;
  /* 1066668e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666692 je 0x106666a4 */
  if (C.zf) goto L_106666a4;
  /* 10666694 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666698 je 0x106666a4 */
  if (C.zf) goto L_106666a4;
  /* 1066669a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066669e jne 0x10666781 */
  if (!C.zf) goto L_10666781;
L_106666a4:;
  /* 106666a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106666a6 call 0x10666ea0 */
  push32(0x106666abu); f_10666ea0();
  /* 106666ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106666ae cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106666b2 je 0x106666ba */
  if (C.zf) goto L_106666ba;
  /* 106666b4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106666b8 jne 0x106666ff */
  if (!C.zf) goto L_106666ff;
L_106666ba:;
  /* 106666ba cmp dword ptr [0x1068f5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106666c1 jne 0x106666ff */
  if (!C.zf) goto L_106666ff;
  /* 106666c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106666c5 push 0x106668a0 */
  push32((uint32_t)(0x106668a0u));
  /* 106666ca call dword ptr [0x10691308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691308))), 0x106666d0u);
  /* 106666d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106666d3 jne 0x106666e1 */
  if (!C.zf) goto L_106666e1;
  /* 106666d5 mov dword ptr [0x1068f5f4], 1 */
  w32((uint32_t)(0x1068f5f4), (0x1u));
  /* 106666df jmp 0x106666ff */
  goto L_106666ff;
L_106666e1:;
  /* 106666e1 call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x106666e7u);
  /* 106666e7 mov esi, eax */
  ESI = (EAX);
  /* 106666e9 call 0x1066b380 */
  push32(0x106666eeu); f_1066b380();
  /* 106666ee mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 106666f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106666f2 call 0x10666f40 */
  push32(0x106666f7u); f_10666f40();
  /* 106666f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106666fa jmp 0x10666858 */
  goto L_10666858;
L_106666ff:;
  /* 106666ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666702 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10666705 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666708 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1066670b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1066670e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666712 ja 0x10666772 */
  if ((!C.cf&&!C.zf)) goto L_10666772;
  /* 10666714 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666717 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10666719 mov dl, byte ptr [eax + 0x1066687f] */
  DL = (r8((uint32_t)(EAX + 0x1066687f)));
  /* 1066671f jmp dword ptr [edx*4 + 0x1066686b] */
  switch (EDX) {
    case 0: goto L_10666726;
    case 1: goto L_10666760;
    case 2: goto L_1066673a;
    case 3: goto L_1066674d;
    case 4: goto L_10666772;
    default: x86_unimpl("switch@0x1066671f out of table"); return;
  }
L_10666726:;
  /* 10666726 mov ecx, dword ptr [0x1068f5e4] */
  ECX = (r32((uint32_t)(0x1068f5e4)));
  /* 1066672c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066672f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666732 mov dword ptr [0x1068f5e4], edx */
  w32((uint32_t)(0x1068f5e4), (EDX));
  /* 10666738 jmp 0x10666772 */
  goto L_10666772;
L_1066673a:;
  /* 1066673a mov eax, dword ptr [0x1068f5e8] */
  EAX = (r32((uint32_t)(0x1068f5e8)));
  /* 1066673f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10666742 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666745 mov dword ptr [0x1068f5e8], ecx */
  w32((uint32_t)(0x1068f5e8), (ECX));
  /* 1066674b jmp 0x10666772 */
  goto L_10666772;
L_1066674d:;
  /* 1066674d mov edx, dword ptr [0x1068f5ec] */
  EDX = (r32((uint32_t)(0x1068f5ec)));
  /* 10666753 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10666756 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666759 mov dword ptr [0x1068f5ec], eax */
  w32((uint32_t)(0x1068f5ec), (EAX));
  /* 1066675e jmp 0x10666772 */
  goto L_10666772;
L_10666760:;
  /* 10666760 mov ecx, dword ptr [0x1068f5f0] */
  ECX = (r32((uint32_t)(0x1068f5f0)));
  /* 10666766 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10666769 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066676c mov dword ptr [0x1068f5f0], edx */
  w32((uint32_t)(0x1068f5f0), (EDX));
L_10666772:;
  /* 10666772 push 1 */
  push32((uint32_t)(0x1u));
  /* 10666774 call 0x10666f40 */
  push32(0x10666779u); f_10666f40();
  /* 10666779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066677c jmp 0x10666853 */
  goto L_10666853;
L_10666781:;
  /* 10666781 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666785 je 0x10666798 */
  if (C.zf) goto L_10666798;
  /* 10666787 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066678b je 0x10666798 */
  if (C.zf) goto L_10666798;
  /* 1066678d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666791 je 0x10666798 */
  if (C.zf) goto L_10666798;
  /* 10666793 jmp 0x10666858 */
  goto L_10666858;
L_10666798:;
  /* 10666798 call 0x10662ee0 */
  push32(0x1066679du); f_10662ee0();
  /* 1066679d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106667a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106667a3 cmp dword ptr [eax + 0x50], 0x1068dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1068dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106667aa jne 0x106667f5 */
  if (!C.zf) goto L_106667f5;
  /* 106667ac push 0x133 */
  push32((uint32_t)(0x133u));
  /* 106667b1 push 0x1068aed0 */
  push32((uint32_t)(0x1068aed0u));
  /* 106667b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106667b8 mov ecx, dword ptr [0x1068dc80] */
  ECX = (r32((uint32_t)(0x1068dc80)));
  /* 106667be push ecx */
  push32((uint32_t)(ECX));
  /* 106667bf call 0x106634a0 */
  push32(0x106667c4u); f_106634a0();
  /* 106667c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106667c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106667ca mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 106667cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106667d0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106667d4 je 0x106667f3 */
  if (C.zf) goto L_106667f3;
  /* 106667d6 mov ecx, dword ptr [0x1068dc80] */
  ECX = (r32((uint32_t)(0x1068dc80)));
  /* 106667dc push ecx */
  push32((uint32_t)(ECX));
  /* 106667dd push 0x1068dc00 */
  push32((uint32_t)(0x1068dc00u));
  /* 106667e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106667e5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 106667e8 push eax */
  push32((uint32_t)(EAX));
  /* 106667e9 call 0x10669d80 */
  push32(0x106667eeu); f_10669d80();
  /* 106667ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106667f1 jmp 0x106667f5 */
  goto L_106667f5;
L_106667f3:;
  /* 106667f3 jmp 0x10666858 */
  goto L_10666858;
L_106667f5:;
  /* 106667f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106667f8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106667fb push edx */
  push32((uint32_t)(EDX));
  /* 106667fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106667ff push eax */
  push32((uint32_t)(EAX));
  /* 10666800 call 0x10666b80 */
  push32(0x10666805u); f_10666b80();
  /* 10666805 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666808 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066680b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066680f jne 0x10666813 */
  if (!C.zf) goto L_10666813;
  /* 10666811 jmp 0x10666858 */
  goto L_10666858;
L_10666813:;
  /* 10666813 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666816 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10666819 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1066681c:;
  /* 1066681c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066681f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10666822 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666825 jne 0x10666853 */
  if (!C.zf) goto L_10666853;
  /* 10666827 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066682a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066682d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10666830 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666833 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666836 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10666839 mov edx, dword ptr [0x1068dc84] */
  EDX = (r32((uint32_t)(0x1068dc84)));
  /* 1066683f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10666842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666845 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10666848 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066684a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066684d jb 0x10666851 */
  if (C.cf) goto L_10666851;
  /* 1066684f jmp 0x10666853 */
  goto L_10666853;
L_10666851:;
  /* 10666851 jmp 0x1066681c */
  goto L_1066681c;
L_10666853:;
  /* 10666853 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10666856 jmp 0x10666866 */
  goto L_10666866;
L_10666858:;
  /* 10666858 call 0x1066b370 */
  push32(0x1066685du); f_1066b370();
  /* 1066685d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10666863 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10666866:;
  /* 10666866 pop esi */
  ESI = (pop32());
  /* 10666867 mov esp, ebp */
  ESP = (EBP);
  /* 10666869 pop ebp */
  EBP = (pop32());
  /* 1066686a ret  */
  ESPCHK(0x10666670u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x106668a0 (146 bytes, 45 insns) */
void f_106668a0(void) {
  FTRACE(0x106668a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106668a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106668a1 mov ebp, esp */
  EBP = (ESP);
  /* 106668a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106668a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106668a8 call 0x10666ea0 */
  push32(0x106668adu); f_10666ea0();
  /* 106668ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106668b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106668b4 jne 0x106668ce */
  if (!C.zf) goto L_106668ce;
  /* 106668b6 mov dword ptr [ebp - 8], 0x1068f5e4 */
  w32((uint32_t)(EBP + -0x8), (0x1068f5e4u));
  /* 106668bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106668c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106668c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106668c5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106668cc jmp 0x106668e4 */
  goto L_106668e4;
L_106668ce:;
  /* 106668ce mov dword ptr [ebp - 8], 0x1068f5e8 */
  w32((uint32_t)(EBP + -0x8), (0x1068f5e8u));
  /* 106668d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106668d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106668da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106668dd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_106668e4:;
  /* 106668e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106668e8 jne 0x106668f8 */
  if (!C.zf) goto L_106668f8;
  /* 106668ea push 1 */
  push32((uint32_t)(0x1u));
  /* 106668ec call 0x10666f40 */
  push32(0x106668f1u); f_10666f40();
  /* 106668f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106668f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106668f6 jmp 0x1066692c */
  goto L_1066692c;
L_106668f8:;
  /* 106668f8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106668fc je 0x1066691d */
  if (C.zf) goto L_1066691d;
  /* 106668fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666901 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10666907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10666909 call 0x10666f40 */
  push32(0x1066690eu); f_10666f40();
  /* 1066690e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666914 push edx */
  push32((uint32_t)(EDX));
  /* 10666915 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10666918u);
  /* 10666918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066691b jmp 0x10666927 */
  goto L_10666927;
L_1066691d:;
  /* 1066691d push 1 */
  push32((uint32_t)(0x1u));
  /* 1066691f call 0x10666f40 */
  push32(0x10666924u); f_10666f40();
  /* 10666924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666927:;
  /* 10666927 mov eax, 1 */
  EAX = (0x1u);
L_1066692c:;
  /* 1066692c mov esp, ebp */
  ESP = (EBP);
  /* 1066692e pop ebp */
  EBP = (pop32());
  /* 1066692f ret 4 */
  ESPCHK(0x106668a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006940 @ 0x10666940 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10666940(void) {
  FTRACE(0x10666940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666940 push ebp */
  push32((uint32_t)(EBP));
  /* 10666941 mov ebp, esp */
  EBP = (ESP);
  /* 10666943 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666946 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1066694d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666950 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10666953 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10666956 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666959 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1066695c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666960 ja 0x10666a0e */
  if ((!C.cf&&!C.zf)) goto L_10666a0e;
  /* 10666966 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10666969 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1066696b mov dl, byte ptr [eax + 0x10666b62] */
  DL = (r8((uint32_t)(EAX + 0x10666b62)));
  /* 10666971 jmp dword ptr [edx*4 + 0x10666b4a] */
  switch (EDX) {
    case 0: goto L_10666978;
    case 1: goto L_106669e3;
    case 2: goto L_106669c9;
    case 3: goto L_10666995;
    case 4: goto L_106669af;
    case 5: goto L_10666a0e;
    default: x86_unimpl("switch@0x10666971 out of table"); return;
  }
L_10666978:;
  /* 10666978 mov dword ptr [ebp - 0x18], 0x1068f5e4 */
  w32((uint32_t)(EBP + -0x18), (0x1068f5e4u));
  /* 1066697f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10666982 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10666984 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10666987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1066698a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066698d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10666990 jmp 0x10666a16 */
  goto L_10666a16;
L_10666995:;
  /* 10666995 mov dword ptr [ebp - 0x18], 0x1068f5e8 */
  w32((uint32_t)(EBP + -0x18), (0x1068f5e8u));
  /* 1066699c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1066699f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106669a1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106669a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106669a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106669aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106669ad jmp 0x10666a16 */
  goto L_10666a16;
L_106669af:;
  /* 106669af mov dword ptr [ebp - 0x18], 0x1068f5ec */
  w32((uint32_t)(EBP + -0x18), (0x1068f5ecu));
  /* 106669b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106669b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106669bb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106669be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106669c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106669c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106669c7 jmp 0x10666a16 */
  goto L_10666a16;
L_106669c9:;
  /* 106669c9 mov dword ptr [ebp - 0x18], 0x1068f5f0 */
  w32((uint32_t)(EBP + -0x18), (0x1068f5f0u));
  /* 106669d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106669d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106669d5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106669d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106669db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106669de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106669e1 jmp 0x10666a16 */
  goto L_10666a16;
L_106669e3:;
  /* 106669e3 call 0x10662ee0 */
  push32(0x106669e8u); f_10662ee0();
  /* 106669e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106669eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106669ee mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106669f1 push edx */
  push32((uint32_t)(EDX));
  /* 106669f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106669f5 push eax */
  push32((uint32_t)(EAX));
  /* 106669f6 call 0x10666b80 */
  push32(0x106669fbu); f_10666b80();
  /* 106669fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106669fe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666a01 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10666a04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10666a07 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10666a09 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10666a0c jmp 0x10666a16 */
  goto L_10666a16;
L_10666a0e:;
  /* 10666a0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10666a11 jmp 0x10666b46 */
  goto L_10666b46;
L_10666a16:;
  /* 10666a16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a1a je 0x10666a26 */
  if (C.zf) goto L_10666a26;
  /* 10666a1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10666a1e call 0x10666ea0 */
  push32(0x10666a23u); f_10666ea0();
  /* 10666a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666a26:;
  /* 10666a26 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a2a jne 0x10666a43 */
  if (!C.zf) goto L_10666a43;
  /* 10666a2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a30 je 0x10666a3c */
  if (C.zf) goto L_10666a3c;
  /* 10666a32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10666a34 call 0x10666f40 */
  push32(0x10666a39u); f_10666f40();
  /* 10666a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666a3c:;
  /* 10666a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10666a3e jmp 0x10666b46 */
  goto L_10666b46;
L_10666a43:;
  /* 10666a43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a47 jne 0x10666a60 */
  if (!C.zf) goto L_10666a60;
  /* 10666a49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a4d je 0x10666a59 */
  if (C.zf) goto L_10666a59;
  /* 10666a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10666a51 call 0x10666f40 */
  push32(0x10666a56u); f_10666f40();
  /* 10666a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666a59:;
  /* 10666a59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10666a5b call 0x10662c60 */
  push32(0x10666a60u); f_10662c60();
L_10666a60:;
  /* 10666a60 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a64 je 0x10666a72 */
  if (C.zf) goto L_10666a72;
  /* 10666a66 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a6a je 0x10666a72 */
  if (C.zf) goto L_10666a72;
  /* 10666a6c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a70 jne 0x10666a9e */
  if (!C.zf) goto L_10666a9e;
L_10666a72:;
  /* 10666a72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666a75 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10666a78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10666a7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666a7e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10666a85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666a89 jne 0x10666a9e */
  if (!C.zf) goto L_10666a9e;
  /* 10666a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666a8e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10666a91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10666a94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666a97 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10666a9e:;
  /* 10666a9e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666aa2 jne 0x10666ae0 */
  if (!C.zf) goto L_10666ae0;
  /* 10666aa4 mov eax, dword ptr [0x1068dc78] */
  EAX = (r32((uint32_t)(0x1068dc78)));
  /* 10666aa9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10666aac jmp 0x10666ab7 */
  goto L_10666ab7;
L_10666aae:;
  /* 10666aae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666ab1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666ab4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10666ab7:;
  /* 10666ab7 mov edx, dword ptr [0x1068dc78] */
  EDX = (r32((uint32_t)(0x1068dc78)));
  /* 10666abd add edx, dword ptr [0x1068dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666ac3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666ac6 jge 0x10666ade */
  if ((C.sf==C.of)) goto L_10666ade;
  /* 10666ac8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666acb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10666ace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666ad1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10666ad4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10666adc jmp 0x10666aae */
  goto L_10666aae;
L_10666ade:;
  /* 10666ade jmp 0x10666ae9 */
  goto L_10666ae9;
L_10666ae0:;
  /* 10666ae0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10666ae3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10666ae9:;
  /* 10666ae9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666aed je 0x10666af9 */
  if (C.zf) goto L_10666af9;
  /* 10666aef push 1 */
  push32((uint32_t)(0x1u));
  /* 10666af1 call 0x10666f40 */
  push32(0x10666af6u); f_10666f40();
  /* 10666af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666af9:;
  /* 10666af9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666afd jne 0x10666b10 */
  if (!C.zf) goto L_10666b10;
  /* 10666aff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666b02 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10666b05 push edx */
  push32((uint32_t)(EDX));
  /* 10666b06 push 8 */
  push32((uint32_t)(0x8u));
  /* 10666b08 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10666b0bu);
  /* 10666b0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666b0e jmp 0x10666b1a */
  goto L_10666b1a;
L_10666b10:;
  /* 10666b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666b13 push eax */
  push32((uint32_t)(EAX));
  /* 10666b14 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10666b17u);
  /* 10666b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666b1a:;
  /* 10666b1a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666b1e je 0x10666b2c */
  if (C.zf) goto L_10666b2c;
  /* 10666b20 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666b24 je 0x10666b2c */
  if (C.zf) goto L_10666b2c;
  /* 10666b26 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666b2a jne 0x10666b44 */
  if (!C.zf) goto L_10666b44;
L_10666b2c:;
  /* 10666b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666b2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10666b32 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10666b35 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666b39 jne 0x10666b44 */
  if (!C.zf) goto L_10666b44;
  /* 10666b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666b3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666b41 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10666b44:;
  /* 10666b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10666b46:;
  /* 10666b46 mov esp, ebp */
  ESP = (EBP);
  /* 10666b48 pop ebp */
  EBP = (pop32());
  /* 10666b49 ret  */
  ESPCHK(0x10666940u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x10666b80 (91 bytes, 35 insns) */
void f_10666b80(void) {
  FTRACE(0x10666b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10666b81 mov ebp, esp */
  EBP = (ESP);
  /* 10666b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10666b84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666b87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10666b8a:;
  /* 10666b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666b8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10666b90 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666b93 je 0x10666bb3 */
  if (C.zf) goto L_10666bb3;
  /* 10666b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666b98 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666b9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10666b9e mov ecx, dword ptr [0x1068dc84] */
  ECX = (r32((uint32_t)(0x1068dc84)));
  /* 10666ba4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10666ba7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666baa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666bac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666baf jae 0x10666bb3 */
  if (!C.cf) goto L_10666bb3;
  /* 10666bb1 jmp 0x10666b8a */
  goto L_10666b8a;
L_10666bb3:;
  /* 10666bb3 mov eax, dword ptr [0x1068dc84] */
  EAX = (r32((uint32_t)(0x1068dc84)));
  /* 10666bb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10666bbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666bbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666bc0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666bc3 jae 0x10666bd5 */
  if (!C.cf) goto L_10666bd5;
  /* 10666bc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666bc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10666bcb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666bce jne 0x10666bd5 */
  if (!C.zf) goto L_10666bd5;
  /* 10666bd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666bd3 jmp 0x10666bd7 */
  goto L_10666bd7;
L_10666bd5:;
  /* 10666bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10666bd7:;
  /* 10666bd7 mov esp, ebp */
  ESP = (EBP);
  /* 10666bd9 pop ebp */
  EBP = (pop32());
  /* 10666bda ret  */
  ESPCHK(0x10666b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10666be0 (13 bytes, 6 insns) */
void f_10666be0(void) {
  FTRACE(0x10666be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10666be1 mov ebp, esp */
  EBP = (ESP);
  /* 10666be3 call 0x10662ee0 */
  push32(0x10666be8u); f_10662ee0();
  /* 10666be8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666beb pop ebp */
  EBP = (pop32());
  /* 10666bec ret  */
  ESPCHK(0x10666be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x10666bf0 (13 bytes, 6 insns) */
void f_10666bf0(void) {
  FTRACE(0x10666bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10666bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10666bf3 call 0x10662ee0 */
  push32(0x10666bf8u); f_10662ee0();
  /* 10666bf8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666bfb pop ebp */
  EBP = (pop32());
  /* 10666bfc ret  */
  ESPCHK(0x10666bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x10666c00 (187 bytes, 54 insns) */
void f_10666c00(void) {
  FTRACE(0x10666c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10666c01 mov ebp, esp */
  EBP = (ESP);
  /* 10666c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666c06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10666c0d cmp dword ptr [0x1068f5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666c14 jne 0x10666c73 */
  if (!C.zf) goto L_10666c73;
  /* 10666c16 push 0x1068a2fc */
  push32((uint32_t)(0x1068a2fcu));
  /* 10666c1b call dword ptr [0x106912c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c4))), 0x10666c21u);
  /* 10666c21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10666c24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666c28 je 0x10666c47 */
  if (C.zf) goto L_10666c47;
  /* 10666c2a push 0x1068af00 */
  push32((uint32_t)(0x1068af00u));
  /* 10666c2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666c32 push eax */
  push32((uint32_t)(EAX));
  /* 10666c33 call dword ptr [0x106912c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c0))), 0x10666c39u);
  /* 10666c39 mov dword ptr [0x1068f5f8], eax */
  w32((uint32_t)(0x1068f5f8), (EAX));
  /* 10666c3e cmp dword ptr [0x1068f5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666c45 jne 0x10666c4b */
  if (!C.zf) goto L_10666c4b;
L_10666c47:;
  /* 10666c47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10666c49 jmp 0x10666cb7 */
  goto L_10666cb7;
L_10666c4b:;
  /* 10666c4b push 0x1068aef0 */
  push32((uint32_t)(0x1068aef0u));
  /* 10666c50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10666c54 call dword ptr [0x106912c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c0))), 0x10666c5au);
  /* 10666c5a mov dword ptr [0x1068f5fc], eax */
  w32((uint32_t)(0x1068f5fc), (EAX));
  /* 10666c5f push 0x1068aedc */
  push32((uint32_t)(0x1068aedcu));
  /* 10666c64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666c67 push edx */
  push32((uint32_t)(EDX));
  /* 10666c68 call dword ptr [0x106912c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c0))), 0x10666c6eu);
  /* 10666c6e mov dword ptr [0x1068f600], eax */
  w32((uint32_t)(0x1068f600), (EAX));
L_10666c73:;
  /* 10666c73 cmp dword ptr [0x1068f5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666c7a je 0x10666c85 */
  if (C.zf) goto L_10666c85;
  /* 10666c7c call dword ptr [0x1068f5fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f5fc))), 0x10666c82u);
  /* 10666c82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10666c85:;
  /* 10666c85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666c89 je 0x10666ca1 */
  if (C.zf) goto L_10666ca1;
  /* 10666c8b cmp dword ptr [0x1068f600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666c92 je 0x10666ca1 */
  if (C.zf) goto L_10666ca1;
  /* 10666c94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666c97 push eax */
  push32((uint32_t)(EAX));
  /* 10666c98 call dword ptr [0x1068f600] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f600))), 0x10666c9eu);
  /* 10666c9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10666ca1:;
  /* 10666ca1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10666ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 10666ca5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666ca8 push edx */
  push32((uint32_t)(EDX));
  /* 10666ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666cac push eax */
  push32((uint32_t)(EAX));
  /* 10666cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10666cb1 call dword ptr [0x1068f5f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1068f5f8))), 0x10666cb7u);
L_10666cb7:;
  /* 10666cb7 mov esp, ebp */
  ESP = (EBP);
  /* 10666cb9 pop ebp */
  EBP = (pop32());
  /* 10666cba ret  */
  ESPCHK(0x10666c00u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10666cc0 (254 bytes, 109 insns) */
void f_10666cc0(void) {
  FTRACE(0x10666cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666cc0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10666cc4 push edi */
  push32((uint32_t)(EDI));
  /* 10666cc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10666cc7 je 0x10666d43 */
  if (C.zf) goto L_10666d43;
  /* 10666cc9 push esi */
  push32((uint32_t)(ESI));
  /* 10666cca push ebx */
  push32((uint32_t)(EBX));
  /* 10666ccb mov ebx, ecx */
  EBX = (ECX);
  /* 10666ccd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10666cd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10666cd7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10666cdb jne 0x10666ce4 */
  if (!C.zf) goto L_10666ce4;
  /* 10666cdd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10666ce0 jne 0x10666d51 */
  if (!C.zf) goto L_10666d51;
  /* 10666ce2 jmp 0x10666d05 */
  goto L_10666d05;
L_10666ce4:;
  /* 10666ce4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10666ce6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10666ce7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10666ce9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10666cea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10666ceb je 0x10666d12 */
  if (C.zf) goto L_10666d12;
  /* 10666ced test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10666cef je 0x10666d1a */
  if (C.zf) goto L_10666d1a;
  /* 10666cf1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10666cf7 jne 0x10666ce4 */
  if (!C.zf) goto L_10666ce4;
  /* 10666cf9 mov ebx, ecx */
  EBX = (ECX);
  /* 10666cfb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10666cfe jne 0x10666d51 */
  if (!C.zf) goto L_10666d51;
L_10666d00:;
  /* 10666d00 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10666d03 je 0x10666d12 */
  if (C.zf) goto L_10666d12;
L_10666d05:;
  /* 10666d05 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10666d07 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10666d08 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10666d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10666d0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10666d0d je 0x10666d3e */
  if (C.zf) goto L_10666d3e;
  /* 10666d0f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10666d10 jne 0x10666d05 */
  if (!C.zf) goto L_10666d05;
L_10666d12:;
  /* 10666d12 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10666d16 pop ebx */
  EBX = (pop32());
  /* 10666d17 pop esi */
  ESI = (pop32());
  /* 10666d18 pop edi */
  EDI = (pop32());
  /* 10666d19 ret  */
  ESPCHK(0x10666cc0u, _esp0);
  ESP += 4; return;
L_10666d1a:;
  /* 10666d1a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10666d20 je 0x10666d34 */
  if (C.zf) goto L_10666d34;
L_10666d22:;
  /* 10666d22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10666d24 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10666d25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10666d26 je 0x10666db6 */
  if (C.zf) goto L_10666db6;
  /* 10666d2c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10666d32 jne 0x10666d22 */
  if (!C.zf) goto L_10666d22;
L_10666d34:;
  /* 10666d34 mov ebx, ecx */
  EBX = (ECX);
  /* 10666d36 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10666d39 jne 0x10666da7 */
  if (!C.zf) goto L_10666da7;
L_10666d3b:;
  /* 10666d3b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10666d3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10666d3e:;
  /* 10666d3e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10666d3f jne 0x10666d3b */
  if (!C.zf) goto L_10666d3b;
  /* 10666d41 pop ebx */
  EBX = (pop32());
  /* 10666d42 pop esi */
  ESI = (pop32());
L_10666d43:;
  /* 10666d43 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10666d47 pop edi */
  EDI = (pop32());
  /* 10666d48 ret  */
  ESPCHK(0x10666cc0u, _esp0);
  ESP += 4; return;
L_10666d49:;
  /* 10666d49 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10666d4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10666d4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10666d4f je 0x10666d00 */
  if (C.zf) goto L_10666d00;
L_10666d51:;
  /* 10666d51 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10666d56 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10666d58 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666d5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10666d5d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10666d5f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10666d61 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10666d64 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10666d69 je 0x10666d49 */
  if (C.zf) goto L_10666d49;
  /* 10666d6b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10666d6d je 0x10666d9b */
  if (C.zf) goto L_10666d9b;
  /* 10666d6f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10666d71 je 0x10666d91 */
  if (C.zf) goto L_10666d91;
  /* 10666d73 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10666d79 je 0x10666d87 */
  if (C.zf) goto L_10666d87;
  /* 10666d7b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10666d81 jne 0x10666d49 */
  if (!C.zf) goto L_10666d49;
  /* 10666d83 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10666d85 jmp 0x10666d9f */
  goto L_10666d9f;
L_10666d87:;
  /* 10666d87 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10666d8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10666d8f jmp 0x10666d9f */
  goto L_10666d9f;
L_10666d91:;
  /* 10666d91 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10666d97 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10666d99 jmp 0x10666d9f */
  goto L_10666d9f;
L_10666d9b:;
  /* 10666d9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10666d9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10666d9f:;
  /* 10666d9f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10666da2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10666da4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10666da5 je 0x10666db1 */
  if (C.zf) goto L_10666db1;
L_10666da7:;
  /* 10666da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10666da9:;
  /* 10666da9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10666dab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10666dae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10666daf jne 0x10666da9 */
  if (!C.zf) goto L_10666da9;
L_10666db1:;
  /* 10666db1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10666db4 jne 0x10666d3b */
  if (!C.zf) goto L_10666d3b;
L_10666db6:;
  /* 10666db6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10666dba pop ebx */
  EBX = (pop32());
  /* 10666dbb pop esi */
  ESI = (pop32());
  /* 10666dbc pop edi */
  EDI = (pop32());
  /* 10666dbd ret  */
  ESPCHK(0x10666cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x10666dc0 (55 bytes, 16 insns) */
void f_10666dc0(void) {
  FTRACE(0x10666dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10666dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10666dc3 mov eax, dword ptr [0x1068db84] */
  EAX = (r32((uint32_t)(0x1068db84)));
  /* 10666dc8 push eax */
  push32((uint32_t)(EAX));
  /* 10666dc9 call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x10666dcfu);
  /* 10666dcf mov ecx, dword ptr [0x1068db74] */
  ECX = (r32((uint32_t)(0x1068db74)));
  /* 10666dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10666dd6 call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x10666ddcu);
  /* 10666ddc mov edx, dword ptr [0x1068db64] */
  EDX = (r32((uint32_t)(0x1068db64)));
  /* 10666de2 push edx */
  push32((uint32_t)(EDX));
  /* 10666de3 call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x10666de9u);
  /* 10666de9 mov eax, dword ptr [0x1068db44] */
  EAX = (r32((uint32_t)(0x1068db44)));
  /* 10666dee push eax */
  push32((uint32_t)(EAX));
  /* 10666def call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x10666df5u);
  /* 10666df5 pop ebp */
  EBP = (pop32());
  /* 10666df6 ret  */
  ESPCHK(0x10666dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e00 @ 0x10666e00 (159 bytes, 47 insns) */
void f_10666e00(void) {
  FTRACE(0x10666e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10666e01 mov ebp, esp */
  EBP = (ESP);
  /* 10666e03 push ecx */
  push32((uint32_t)(ECX));
  /* 10666e04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10666e0b jmp 0x10666e16 */
  goto L_10666e16;
L_10666e0d:;
  /* 10666e0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666e10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10666e13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10666e16:;
  /* 10666e16 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666e1a jge 0x10666e69 */
  if ((C.sf==C.of)) goto L_10666e69;
  /* 10666e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666e1f cmp dword ptr [ecx*4 + 0x1068db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1068db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666e27 je 0x10666e67 */
  if (C.zf) goto L_10666e67;
  /* 10666e29 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666e2d je 0x10666e67 */
  if (C.zf) goto L_10666e67;
  /* 10666e2f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666e33 je 0x10666e67 */
  if (C.zf) goto L_10666e67;
  /* 10666e35 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666e39 je 0x10666e67 */
  if (C.zf) goto L_10666e67;
  /* 10666e3b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666e3f je 0x10666e67 */
  if (C.zf) goto L_10666e67;
  /* 10666e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666e44 mov eax, dword ptr [edx*4 + 0x1068db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1068db40)));
  /* 10666e4b push eax */
  push32((uint32_t)(EAX));
  /* 10666e4c call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x10666e52u);
  /* 10666e52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10666e54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666e57 mov edx, dword ptr [ecx*4 + 0x1068db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068db40)));
  /* 10666e5e push edx */
  push32((uint32_t)(EDX));
  /* 10666e5f call 0x10663f30 */
  push32(0x10666e64u); f_10663f30();
  /* 10666e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666e67:;
  /* 10666e67 jmp 0x10666e0d */
  goto L_10666e0d;
L_10666e69:;
  /* 10666e69 mov eax, dword ptr [0x1068db64] */
  EAX = (r32((uint32_t)(0x1068db64)));
  /* 10666e6e push eax */
  push32((uint32_t)(EAX));
  /* 10666e6f call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x10666e75u);
  /* 10666e75 mov ecx, dword ptr [0x1068db74] */
  ECX = (r32((uint32_t)(0x1068db74)));
  /* 10666e7b push ecx */
  push32((uint32_t)(ECX));
  /* 10666e7c call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x10666e82u);
  /* 10666e82 mov edx, dword ptr [0x1068db84] */
  EDX = (r32((uint32_t)(0x1068db84)));
  /* 10666e88 push edx */
  push32((uint32_t)(EDX));
  /* 10666e89 call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x10666e8fu);
  /* 10666e8f mov eax, dword ptr [0x1068db44] */
  EAX = (r32((uint32_t)(0x1068db44)));
  /* 10666e94 push eax */
  push32((uint32_t)(EAX));
  /* 10666e95 call dword ptr [0x10691250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691250))), 0x10666e9bu);
  /* 10666e9b mov esp, ebp */
  ESP = (EBP);
  /* 10666e9d pop ebp */
  EBP = (pop32());
  /* 10666e9e ret  */
  ESPCHK(0x10666e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x10666ea0 (151 bytes, 46 insns) */
void f_10666ea0(void) {
  FTRACE(0x10666ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10666ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10666ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10666ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666ea7 cmp dword ptr [eax*4 + 0x1068db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1068db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666eaf jne 0x10666f22 */
  if (!C.zf) goto L_10666f22;
  /* 10666eb1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10666eb6 push 0x1068af0c */
  push32((uint32_t)(0x1068af0cu));
  /* 10666ebb push 2 */
  push32((uint32_t)(0x2u));
  /* 10666ebd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10666ebf call 0x106634a0 */
  push32(0x10666ec4u); f_106634a0();
  /* 10666ec4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666ec7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10666eca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666ece jne 0x10666eda */
  if (!C.zf) goto L_10666eda;
  /* 10666ed0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10666ed2 call 0x10662410 */
  push32(0x10666ed7u); f_10662410();
  /* 10666ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666eda:;
  /* 10666eda push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10666edc call 0x10666ea0 */
  push32(0x10666ee1u); f_10666ea0();
  /* 10666ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666ee4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666ee7 cmp dword ptr [ecx*4 + 0x1068db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1068db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666eef jne 0x10666f0a */
  if (!C.zf) goto L_10666f0a;
  /* 10666ef1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666ef4 push edx */
  push32((uint32_t)(EDX));
  /* 10666ef5 call dword ptr [0x10691340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691340))), 0x10666efbu);
  /* 10666efb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666efe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666f01 mov dword ptr [eax*4 + 0x1068db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1068db40), (ECX));
  /* 10666f08 jmp 0x10666f18 */
  goto L_10666f18;
L_10666f0a:;
  /* 10666f0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10666f0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10666f0f push edx */
  push32((uint32_t)(EDX));
  /* 10666f10 call 0x10663f30 */
  push32(0x10666f15u); f_10663f30();
  /* 10666f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666f18:;
  /* 10666f18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10666f1a call 0x10666f40 */
  push32(0x10666f1fu); f_10666f40();
  /* 10666f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10666f22:;
  /* 10666f22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666f25 mov ecx, dword ptr [eax*4 + 0x1068db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068db40)));
  /* 10666f2c push ecx */
  push32((uint32_t)(ECX));
  /* 10666f2d call dword ptr [0x10691344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691344))), 0x10666f33u);
  /* 10666f33 mov esp, ebp */
  ESP = (EBP);
  /* 10666f35 pop ebp */
  EBP = (pop32());
  /* 10666f36 ret  */
  ESPCHK(0x10666ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x10666f40 (22 bytes, 8 insns) */
void f_10666f40(void) {
  FTRACE(0x10666f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10666f41 mov ebp, esp */
  EBP = (ESP);
  /* 10666f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666f46 mov ecx, dword ptr [eax*4 + 0x1068db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068db40)));
  /* 10666f4d push ecx */
  push32((uint32_t)(ECX));
  /* 10666f4e call dword ptr [0x10691348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691348))), 0x10666f54u);
  /* 10666f54 pop ebp */
  EBP = (pop32());
  /* 10666f55 ret  */
  ESPCHK(0x10666f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x10666f60 (26 bytes, 10 insns) */
void f_10666f60(void) {
  FTRACE(0x10666f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10666f61 mov ebp, esp */
  EBP = (ESP);
  /* 10666f63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666f66 push eax */
  push32((uint32_t)(EAX));
  /* 10666f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10666f69 call dword ptr [0x1069134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069134c))), 0x10666f6fu);
  /* 10666f6f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10666f74 call dword ptr [0x106912d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912d0))), 0x10666f7au);
  /* 10666f7a pop ebp */
  EBP = (pop32());
  /* 10666f7b ret  */
  ESPCHK(0x10666f60u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10666f80 (446 bytes, 130 insns) */
void f_10666f80(void) {
  FTRACE(0x10666f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10666f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10666f81 mov ebp, esp */
  EBP = (ESP);
  /* 10666f83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10666f86 call 0x10662ee0 */
  push32(0x10666f8bu); f_10662ee0();
  /* 10666f8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10666f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666f91 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10666f94 push ecx */
  push32((uint32_t)(ECX));
  /* 10666f95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10666f98 push edx */
  push32((uint32_t)(EDX));
  /* 10666f99 call 0x10667140 */
  push32(0x10666f9eu); f_10667140();
  /* 10666f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10666fa1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10666fa4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666fa8 je 0x10666fb3 */
  if (C.zf) goto L_10666fb3;
  /* 10666faa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666fad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666fb1 jne 0x10666fc2 */
  if (!C.zf) goto L_10666fc2;
L_10666fb3:;
  /* 10666fb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10666fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10666fb7 call dword ptr [0x10691350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691350))), 0x10666fbdu);
  /* 10666fbd jmp 0x1066713a */
  goto L_1066713a;
L_10666fc2:;
  /* 10666fc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666fc5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666fc9 jne 0x10666fdf */
  if (!C.zf) goto L_10666fdf;
  /* 10666fcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666fce mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10666fd5 mov eax, 1 */
  EAX = (0x1u);
  /* 10666fda jmp 0x1066713a */
  goto L_1066713a;
L_10666fdf:;
  /* 10666fdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666fe2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10666fe6 jne 0x10666ff0 */
  if (!C.zf) goto L_10666ff0;
  /* 10666fe8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10666feb jmp 0x1066713a */
  goto L_1066713a;
L_10666ff0:;
  /* 10666ff0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10666ff3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10666ff6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10666ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10666ffc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10666fff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10667002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667005 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667008 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1066700b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066700e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667012 jne 0x10667117 */
  if (!C.zf) goto L_10667117;
  /* 10667018 mov eax, dword ptr [0x1068dc78] */
  EAX = (r32((uint32_t)(0x1068dc78)));
  /* 1066701d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10667020 jmp 0x1066702b */
  goto L_1066702b;
L_10667022:;
  /* 10667022 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10667025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667028 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1066702b:;
  /* 1066702b mov edx, dword ptr [0x1068dc78] */
  EDX = (r32((uint32_t)(0x1068dc78)));
  /* 10667031 add edx, dword ptr [0x1068dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667037 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066703a jge 0x10667052 */
  if ((C.sf==C.of)) goto L_10667052;
  /* 1066703c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1066703f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10667042 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667045 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10667048 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10667050 jmp 0x10667022 */
  goto L_10667022;
L_10667052:;
  /* 10667052 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667055 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10667058 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1066705b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066705e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667064 jne 0x10667075 */
  if (!C.zf) goto L_10667075;
  /* 10667066 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667069 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10667070 jmp 0x106670fd */
  goto L_106670fd;
L_10667075:;
  /* 10667075 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10667078 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066707e jne 0x1066708c */
  if (!C.zf) goto L_1066708c;
  /* 10667080 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667083 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1066708a jmp 0x106670fd */
  goto L_106670fd;
L_1066708c:;
  /* 1066708c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066708f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667095 jne 0x106670a3 */
  if (!C.zf) goto L_106670a3;
  /* 10667097 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066709a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 106670a1 jmp 0x106670fd */
  goto L_106670fd;
L_106670a3:;
  /* 106670a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106670a6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106670ac jne 0x106670ba */
  if (!C.zf) goto L_106670ba;
  /* 106670ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106670b1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 106670b8 jmp 0x106670fd */
  goto L_106670fd;
L_106670ba:;
  /* 106670ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106670bd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106670c3 jne 0x106670d1 */
  if (!C.zf) goto L_106670d1;
  /* 106670c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106670c8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 106670cf jmp 0x106670fd */
  goto L_106670fd;
L_106670d1:;
  /* 106670d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106670d4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106670da jne 0x106670e8 */
  if (!C.zf) goto L_106670e8;
  /* 106670dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106670df mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 106670e6 jmp 0x106670fd */
  goto L_106670fd;
L_106670e8:;
  /* 106670e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106670eb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106670f1 jne 0x106670fd */
  if (!C.zf) goto L_106670fd;
  /* 106670f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106670f6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_106670fd:;
  /* 106670fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667100 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10667103 push edx */
  push32((uint32_t)(EDX));
  /* 10667104 push 8 */
  push32((uint32_t)(0x8u));
  /* 10667106 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10667109u);
  /* 10667109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066710c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1066710f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10667112 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10667115 jmp 0x1066712e */
  goto L_1066712e;
L_10667117:;
  /* 10667117 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1066711a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10667121 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10667124 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10667127 push ecx */
  push32((uint32_t)(ECX));
  /* 10667128 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1066712bu);
  /* 1066712b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1066712e:;
  /* 1066712e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10667131 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10667134 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10667137 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1066713a:;
  /* 1066713a mov esp, ebp */
  ESP = (EBP);
  /* 1066713c pop ebp */
  EBP = (pop32());
  /* 1066713d ret  */
  ESPCHK(0x10666f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007140 @ 0x10667140 (89 bytes, 35 insns) */
void f_10667140(void) {
  FTRACE(0x10667140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667140 push ebp */
  push32((uint32_t)(EBP));
  /* 10667141 mov ebp, esp */
  EBP = (ESP);
  /* 10667143 push ecx */
  push32((uint32_t)(ECX));
  /* 10667144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667147 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1066714a:;
  /* 1066714a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066714d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1066714f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667152 je 0x10667172 */
  if (C.zf) goto L_10667172;
  /* 10667154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667157 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066715a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1066715d mov ecx, dword ptr [0x1068dc84] */
  ECX = (r32((uint32_t)(0x1068dc84)));
  /* 10667163 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10667166 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667169 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066716b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066716e jae 0x10667172 */
  if (!C.cf) goto L_10667172;
  /* 10667170 jmp 0x1066714a */
  goto L_1066714a;
L_10667172:;
  /* 10667172 mov eax, dword ptr [0x1068dc84] */
  EAX = (r32((uint32_t)(0x1068dc84)));
  /* 10667177 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1066717a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1066717d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1066717f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667182 jae 0x1066718e */
  if (!C.cf) goto L_1066718e;
  /* 10667184 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10667187 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10667189 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066718c je 0x10667192 */
  if (C.zf) goto L_10667192;
L_1066718e:;
  /* 1066718e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10667190 jmp 0x10667195 */
  goto L_10667195;
L_10667192:;
  /* 10667192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10667195:;
  /* 10667195 mov esp, ebp */
  ESP = (EBP);
  /* 10667197 pop ebp */
  EBP = (pop32());
  /* 10667198 ret  */
  ESPCHK(0x10667140u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x106671a0 (48 bytes, 17 insns) */
void f_106671a0(void) {
  FTRACE(0x106671a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106671a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106671a1 mov ebp, esp */
  EBP = (ESP);
  /* 106671a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106671a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 106671a6 call 0x10666ea0 */
  push32(0x106671abu); f_10666ea0();
  /* 106671ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106671ae mov eax, dword ptr [0x1068f66c] */
  EAX = (r32((uint32_t)(0x1068f66c)));
  /* 106671b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106671b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106671b9 mov dword ptr [0x1068f66c], ecx */
  w32((uint32_t)(0x1068f66c), (ECX));
  /* 106671bf push 9 */
  push32((uint32_t)(0x9u));
  /* 106671c1 call 0x10666f40 */
  push32(0x106671c6u); f_10666f40();
  /* 106671c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106671c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106671cc mov esp, ebp */
  ESP = (EBP);
  /* 106671ce pop ebp */
  EBP = (pop32());
  /* 106671cf ret  */
  ESPCHK(0x106671a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x106671d0 (10 bytes, 5 insns) */
void f_106671d0(void) {
  FTRACE(0x106671d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106671d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106671d1 mov ebp, esp */
  EBP = (ESP);
  /* 106671d3 mov eax, dword ptr [0x1068f66c] */
  EAX = (r32((uint32_t)(0x1068f66c)));
  /* 106671d8 pop ebp */
  EBP = (pop32());
  /* 106671d9 ret  */
  ESPCHK(0x106671d0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x106671e0 (45 bytes, 19 insns) */
void f_106671e0(void) {
  FTRACE(0x106671e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106671e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106671e1 mov ebp, esp */
  EBP = (ESP);
  /* 106671e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106671e4 mov eax, dword ptr [0x1068f66c] */
  EAX = (r32((uint32_t)(0x1068f66c)));
  /* 106671e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106671ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106671f0 je 0x10667200 */
  if (C.zf) goto L_10667200;
  /* 106671f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106671f5 push ecx */
  push32((uint32_t)(ECX));
  /* 106671f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106671f9u);
  /* 106671f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106671fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106671fe jne 0x10667204 */
  if (!C.zf) goto L_10667204;
L_10667200:;
  /* 10667200 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10667202 jmp 0x10667209 */
  goto L_10667209;
L_10667204:;
  /* 10667204 mov eax, 1 */
  EAX = (0x1u);
L_10667209:;
  /* 10667209 mov esp, ebp */
  ESP = (EBP);
  /* 1066720b pop ebp */
  EBP = (pop32());
  /* 1066720c ret  */
  ESPCHK(0x106671e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10667210 (88 bytes, 40 insns) */
void f_10667210(void) {
  FTRACE(0x10667210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667210 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10667214 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10667218 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1066721a je 0x10667263 */
  if (C.zf) goto L_10667263;
  /* 1066721c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066721e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10667222 push edi */
  push32((uint32_t)(EDI));
  /* 10667223 mov edi, ecx */
  EDI = (ECX);
  /* 10667225 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667228 jb 0x10667257 */
  if (C.cf) goto L_10667257;
  /* 1066722a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1066722c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1066722f je 0x10667239 */
  if (C.zf) goto L_10667239;
  /* 10667231 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10667233:;
  /* 10667233 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10667235 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10667236 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10667237 jne 0x10667233 */
  if (!C.zf) goto L_10667233;
L_10667239:;
  /* 10667239 mov ecx, eax */
  ECX = (EAX);
  /* 1066723b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1066723e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667240 mov ecx, eax */
  ECX = (EAX);
  /* 10667242 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10667245 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667247 mov ecx, edx */
  ECX = (EDX);
  /* 10667249 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1066724c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1066724f je 0x10667257 */
  if (C.zf) goto L_10667257;
  /* 10667251 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10667253 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10667255 je 0x1066725d */
  if (C.zf) goto L_1066725d;
L_10667257:;
  /* 10667257 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10667259 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1066725a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1066725b jne 0x10667257 */
  if (!C.zf) goto L_10667257;
L_1066725d:;
  /* 1066725d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10667261 pop edi */
  EDI = (pop32());
  /* 10667262 ret  */
  ESPCHK(0x10667210u, _esp0);
  ESP += 4; return;
L_10667263:;
  /* 10667263 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10667267 ret  */
  ESPCHK(0x10667210u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x10667270 (23 bytes, 10 insns) */
void f_10667270(void) {
  FTRACE(0x10667270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667270 push ebp */
  push32((uint32_t)(EBP));
  /* 10667271 mov ebp, esp */
  EBP = (ESP);
  /* 10667273 mov eax, dword ptr [0x1068f668] */
  EAX = (r32((uint32_t)(0x1068f668)));
  /* 10667278 push eax */
  push32((uint32_t)(EAX));
  /* 10667279 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066727c push ecx */
  push32((uint32_t)(ECX));
  /* 1066727d call 0x10667290 */
  push32(0x10667282u); f_10667290();
  /* 10667282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667285 pop ebp */
  EBP = (pop32());
  /* 10667286 ret  */
  ESPCHK(0x10667270u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10667290 (87 bytes, 34 insns) */
void f_10667290(void) {
  FTRACE(0x10667290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667290 push ebp */
  push32((uint32_t)(EBP));
  /* 10667291 mov ebp, esp */
  EBP = (ESP);
  /* 10667293 push ecx */
  push32((uint32_t)(ECX));
  /* 10667294 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667298 jbe 0x1066729e */
  if ((C.cf||C.zf)) goto L_1066729e;
  /* 1066729a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066729c jmp 0x106672e3 */
  goto L_106672e3;
L_1066729e:;
  /* 1066729e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106672a2 ja 0x106672b5 */
  if ((!C.cf&&!C.zf)) goto L_106672b5;
  /* 106672a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106672a7 push eax */
  push32((uint32_t)(EAX));
  /* 106672a8 call 0x106672f0 */
  push32(0x106672adu); f_106672f0();
  /* 106672ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106672b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106672b3 jmp 0x106672bc */
  goto L_106672bc;
L_106672b5:;
  /* 106672b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106672bc:;
  /* 106672bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106672c0 jne 0x106672c8 */
  if (!C.zf) goto L_106672c8;
  /* 106672c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106672c6 jne 0x106672cd */
  if (!C.zf) goto L_106672cd;
L_106672c8:;
  /* 106672c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106672cb jmp 0x106672e3 */
  goto L_106672e3;
L_106672cd:;
  /* 106672cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106672d0 push ecx */
  push32((uint32_t)(ECX));
  /* 106672d1 call 0x106671e0 */
  push32(0x106672d6u); f_106671e0();
  /* 106672d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106672d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106672db jne 0x106672e1 */
  if (!C.zf) goto L_106672e1;
  /* 106672dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106672df jmp 0x106672e3 */
  goto L_106672e3;
L_106672e1:;
  /* 106672e1 jmp 0x1066729e */
  goto L_1066729e;
L_106672e3:;
  /* 106672e3 mov esp, ebp */
  ESP = (EBP);
  /* 106672e5 pop ebp */
  EBP = (pop32());
  /* 106672e6 ret  */
  ESPCHK(0x10667290u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x106672f0 (109 bytes, 37 insns) */
void f_106672f0(void) {
  FTRACE(0x106672f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106672f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106672f1 mov ebp, esp */
  EBP = (ESP);
  /* 106672f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106672f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106672f7 cmp eax, dword ptr [0x1068dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106672fd ja 0x1066732d */
  if ((!C.cf&&!C.zf)) goto L_1066732d;
  /* 106672ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10667301 call 0x10666ea0 */
  push32(0x10667306u); f_10666ea0();
  /* 10667306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066730c push ecx */
  push32((uint32_t)(ECX));
  /* 1066730d call 0x10667e30 */
  push32(0x10667312u); f_10667e30();
  /* 10667312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667315 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10667318 push 9 */
  push32((uint32_t)(0x9u));
  /* 1066731a call 0x10666f40 */
  push32(0x1066731fu); f_10666f40();
  /* 1066731f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667322 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667326 je 0x1066732d */
  if (C.zf) goto L_1066732d;
  /* 10667328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1066732b jmp 0x10667359 */
  goto L_10667359;
L_1066732d:;
  /* 1066732d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10667331 jne 0x1066733a */
  if (!C.zf) goto L_1066733a;
  /* 10667333 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1066733a:;
  /* 1066733a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066733d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10667340 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10667343 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10667346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667349 push eax */
  push32((uint32_t)(EAX));
  /* 1066734a push 0 */
  push32((uint32_t)(0x0u));
  /* 1066734c mov ecx, dword ptr [0x10690e2c] */
  ECX = (r32((uint32_t)(0x10690e2c)));
  /* 10667352 push ecx */
  push32((uint32_t)(ECX));
  /* 10667353 call dword ptr [0x10691354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691354))), 0x10667359u);
L_10667359:;
  /* 10667359 mov esp, ebp */
  ESP = (EBP);
  /* 1066735b pop ebp */
  EBP = (pop32());
  /* 1066735c ret  */
  ESPCHK(0x106672f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007360 @ 0x10667360 (10 bytes, 5 insns) */
void f_10667360(void) {
  FTRACE(0x10667360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667360 push ebp */
  push32((uint32_t)(EBP));
  /* 10667361 mov ebp, esp */
  EBP = (ESP);
  /* 10667363 mov eax, 1 */
  EAX = (0x1u);
  /* 10667368 pop ebp */
  EBP = (pop32());
  /* 10667369 ret  */
  ESPCHK(0x10667360u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x10667370 (173 bytes, 59 insns) */
void f_10667370(void) {
  FTRACE(0x10667370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10667370 push ebp */
  push32((uint32_t)(EBP));
  /* 10667371 mov ebp, esp */
  EBP = (ESP);
  /* 10667373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10667376 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1066737a jbe 0x10667383 */
  if ((C.cf||C.zf)) goto L_10667383;
  /* 1066737c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1066737e jmp 0x10667419 */
  goto L_10667419;
L_10667383:;
  /* 10667383 push 9 */
  push32((uint32_t)(0x9u));
  /* 10667385 call 0x10666ea0 */
  push32(0x1066738au); f_10666ea0();
  /* 1066738a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1066738d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10667390 push eax */
  push32((uint32_t)(EAX));
  /* 10667391 call 0x106677a0 */
  push32(0x10667396u); f_106677a0();
  /* 10667396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10667399 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1066739c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106673a0 je 0x106673e1 */
  if (C.zf) goto L_106673e1;
  /* 106673a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106673a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106673ac cmp ecx, dword ptr [0x1068dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106673b2 ja 0x106673d2 */
  if ((!C.cf&&!C.zf)) goto L_106673d2;
  /* 106673b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106673b7 push edx */
  push32((uint32_t)(EDX));
  /* 106673b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106673bb push eax */
  push32((uint32_t)(EAX));
  /* 106673bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106673bf push ecx */
  push32((uint32_t)(ECX));
  /* 106673c0 call 0x10668670 */
  push32(0x106673c5u); f_10668670();
  /* 106673c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106673c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106673ca je 0x106673d2 */
  if (C.zf) goto L_106673d2;
  /* 106673cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106673cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106673d2:;
  /* 106673d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106673d4 call 0x10666f40 */
  push32(0x106673d9u); f_10666f40();
  /* 106673d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106673dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106673df jmp 0x10667419 */
  goto L_10667419;
L_106673e1:;
  /* 106673e1 push 9 */
  push32((uint32_t)(0x9u));
  /* 106673e3 call 0x10666f40 */
  push32(0x106673e8u); f_10666f40();
  /* 106673e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106673eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106673ef jne 0x106673f8 */
  if (!C.zf) goto L_106673f8;
  /* 106673f1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106673f8:;
  /* 106673f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106673fb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106673fe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10667400 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10667403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10667406 push ecx */
  push32((uint32_t)(ECX));
  /* 10667407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1066740a push edx */
  push32((uint32_t)(EDX));
  /* 1066740b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1066740d mov eax, dword ptr [0x10690e2c] */
  EAX = (r32((uint32_t)(0x10690e2c)));
  /* 10667412 push eax */
  push32((uint32_t)(EAX));
  /* 10667413 call dword ptr [0x1069133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069133c))), 0x10667419u);
L_10667419:;
  /* 10667419 mov esp, ebp */
  ESP = (EBP);
  /* 1066741b pop ebp */
  EBP = (pop32());
  /* 1066741c ret  */
  ESPCHK(0x10667370u, _esp0);
  ESP += 4; return;
}

