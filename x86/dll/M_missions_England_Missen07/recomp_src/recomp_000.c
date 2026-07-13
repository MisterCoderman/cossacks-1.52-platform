#include "recomp.h"

/* thunk_FUN_10002770 @ 0x10521005 (5 bytes, 1 insns) */
void f_10521005(void) {
  FTRACE(0x10521005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10521005 jmp 0x10522770 */
  f_10522770(); return;
}

/* OnInit @ 0x1052100a (5 bytes, 1 insns) */
void f_1052100a(void) {
  FTRACE(0x1052100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052100a jmp 0x105210a0 */
  f_105210a0(); return;
}

/* thunk_FUN_100027c0 @ 0x1052100f (5 bytes, 1 insns) */
void f_1052100f(void) {
  FTRACE(0x1052100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052100f jmp 0x105227c0 */
  f_105227c0(); return;
}

/* thunk_FUN_10001040 @ 0x10521014 (5 bytes, 1 insns) */
void f_10521014(void) {
  FTRACE(0x10521014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10521014 jmp 0x10521040 */
  f_10521040(); return;
}

/* ProcessScenary @ 0x10521019 (5 bytes, 1 insns) */
void f_10521019(void) {
  FTRACE(0x10521019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10521019 jmp 0x105215b0 */
  f_105215b0(); return;
}

/* FUN_10001040 @ 0x10521040 (67 bytes, 26 insns) */
void f_10521040(void) {
  FTRACE(0x10521040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10521040 push ebp */
  push32((uint32_t)(EBP));
  /* 10521041 mov ebp, esp */
  EBP = (ESP);
  /* 10521043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10521046 push ebx */
  push32((uint32_t)(EBX));
  /* 10521047 push esi */
  push32((uint32_t)(ESI));
  /* 10521048 push edi */
  push32((uint32_t)(EDI));
  /* 10521049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1052104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10521051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10521056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10521058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521062 je 0x10521066 */
  if (C.zf) goto L_10521066;
  /* 10521064 jmp 0x1052106b */
  goto L_1052106b;
L_10521066:;
  /* 10521066 call 0x1052100a */
  push32(0x1052106bu); f_1052100a();
L_1052106b:;
  /* 1052106b mov eax, 1 */
  EAX = (0x1u);
  /* 10521070 pop edi */
  EDI = (pop32());
  /* 10521071 pop esi */
  ESI = (pop32());
  /* 10521072 pop ebx */
  EBX = (pop32());
  /* 10521073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521078 call 0x10522900 */
  push32(0x1052107du); f_10522900();
  /* 1052107d mov esp, ebp */
  ESP = (EBP);
  /* 1052107f pop ebp */
  EBP = (pop32());
  /* 10521080 ret 0xc */
  ESPCHK(0x10521040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x105210a0 (1025 bytes, 271 insns) */
void f_105210a0(void) {
  FTRACE(0x105210a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105210a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105210a1 mov ebp, esp */
  EBP = (ESP);
  /* 105210a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105210a6 push ebx */
  push32((uint32_t)(EBX));
  /* 105210a7 push esi */
  push32((uint32_t)(ESI));
  /* 105210a8 push edi */
  push32((uint32_t)(EDI));
  /* 105210a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 105210ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 105210b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 105210b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105210b8 mov esi, esp */
  ESI = (ESP);
  /* 105210ba push 0x1054a164 */
  push32((uint32_t)(0x1054a164u));
  /* 105210bf push 0x1054f468 */
  push32((uint32_t)(0x1054f468u));
  /* 105210c4 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x105210cau);
  /* 105210ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105210cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105210cf call 0x10522900 */
  push32(0x105210d4u); f_10522900();
  /* 105210d4 mov esi, esp */
  ESI = (ESP);
  /* 105210d6 push 0x1054a15c */
  push32((uint32_t)(0x1054a15cu));
  /* 105210db push 0x1054f470 */
  push32((uint32_t)(0x1054f470u));
  /* 105210e0 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x105210e6u);
  /* 105210e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105210e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105210eb call 0x10522900 */
  push32(0x105210f0u); f_10522900();
  /* 105210f0 mov esi, esp */
  ESI = (ESP);
  /* 105210f2 push 0x1054a154 */
  push32((uint32_t)(0x1054a154u));
  /* 105210f7 push 0x1054f478 */
  push32((uint32_t)(0x1054f478u));
  /* 105210fc call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x10521102u);
  /* 10521102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521107 call 0x10522900 */
  push32(0x1052110cu); f_10522900();
  /* 1052110c mov esi, esp */
  ESI = (ESP);
  /* 1052110e push 0x1054a14c */
  push32((uint32_t)(0x1054a14cu));
  /* 10521113 push 0x1054f480 */
  push32((uint32_t)(0x1054f480u));
  /* 10521118 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x1052111eu);
  /* 1052111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521123 call 0x10522900 */
  push32(0x10521128u); f_10522900();
  /* 10521128 mov esi, esp */
  ESI = (ESP);
  /* 1052112a push 0x1054a144 */
  push32((uint32_t)(0x1054a144u));
  /* 1052112f push 0x1054f488 */
  push32((uint32_t)(0x1054f488u));
  /* 10521134 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x1052113au);
  /* 1052113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052113f call 0x10522900 */
  push32(0x10521144u); f_10522900();
  /* 10521144 mov esi, esp */
  ESI = (ESP);
  /* 10521146 push 0x1054a13c */
  push32((uint32_t)(0x1054a13cu));
  /* 1052114b push 0x1054f490 */
  push32((uint32_t)(0x1054f490u));
  /* 10521150 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x10521156u);
  /* 10521156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052115b call 0x10522900 */
  push32(0x10521160u); f_10522900();
  /* 10521160 mov esi, esp */
  ESI = (ESP);
  /* 10521162 push 0x1054a134 */
  push32((uint32_t)(0x1054a134u));
  /* 10521167 push 0x1054f498 */
  push32((uint32_t)(0x1054f498u));
  /* 1052116c call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x10521172u);
  /* 10521172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521177 call 0x10522900 */
  push32(0x1052117cu); f_10522900();
  /* 1052117c mov esi, esp */
  ESI = (ESP);
  /* 1052117e push 0x1054a12c */
  push32((uint32_t)(0x1054a12cu));
  /* 10521183 push 0x1054f4a0 */
  push32((uint32_t)(0x1054f4a0u));
  /* 10521188 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x1052118eu);
  /* 1052118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521193 call 0x10522900 */
  push32(0x10521198u); f_10522900();
  /* 10521198 mov esi, esp */
  ESI = (ESP);
  /* 1052119a push 0x1054a124 */
  push32((uint32_t)(0x1054a124u));
  /* 1052119f push 0x1054f4a8 */
  push32((uint32_t)(0x1054f4a8u));
  /* 105211a4 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x105211aau);
  /* 105211aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105211ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105211af call 0x10522900 */
  push32(0x105211b4u); f_10522900();
  /* 105211b4 mov esi, esp */
  ESI = (ESP);
  /* 105211b6 push 0x1054a11c */
  push32((uint32_t)(0x1054a11cu));
  /* 105211bb push 0x1054f440 */
  push32((uint32_t)(0x1054f440u));
  /* 105211c0 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x105211c6u);
  /* 105211c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105211c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105211cb call 0x10522900 */
  push32(0x105211d0u); f_10522900();
  /* 105211d0 mov esi, esp */
  ESI = (ESP);
  /* 105211d2 push 0x1054a114 */
  push32((uint32_t)(0x1054a114u));
  /* 105211d7 push 0x1054f438 */
  push32((uint32_t)(0x1054f438u));
  /* 105211dc call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x105211e2u);
  /* 105211e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105211e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105211e7 call 0x10522900 */
  push32(0x105211ecu); f_10522900();
  /* 105211ec mov esi, esp */
  ESI = (ESP);
  /* 105211ee push 0x1054a10c */
  push32((uint32_t)(0x1054a10cu));
  /* 105211f3 push 0x1054f450 */
  push32((uint32_t)(0x1054f450u));
  /* 105211f8 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x105211feu);
  /* 105211fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521203 call 0x10522900 */
  push32(0x10521208u); f_10522900();
  /* 10521208 mov esi, esp */
  ESI = (ESP);
  /* 1052120a push 0x1054a104 */
  push32((uint32_t)(0x1054a104u));
  /* 1052120f push 0x1054f448 */
  push32((uint32_t)(0x1054f448u));
  /* 10521214 call dword ptr [0x105524a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a0))), 0x1052121au);
  /* 1052121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052121f call 0x10522900 */
  push32(0x10521224u); f_10522900();
  /* 10521224 mov esi, esp */
  ESI = (ESP);
  /* 10521226 push 0x1054a0fc */
  push32((uint32_t)(0x1054a0fcu));
  /* 1052122b push 0x1054f3e8 */
  push32((uint32_t)(0x1054f3e8u));
  /* 10521230 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x10521236u);
  /* 10521236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052123b call 0x10522900 */
  push32(0x10521240u); f_10522900();
  /* 10521240 mov esi, esp */
  ESI = (ESP);
  /* 10521242 push 0x1054a0f4 */
  push32((uint32_t)(0x1054a0f4u));
  /* 10521247 push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 1052124c call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x10521252u);
  /* 10521252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521257 call 0x10522900 */
  push32(0x1052125cu); f_10522900();
  /* 1052125c mov esi, esp */
  ESI = (ESP);
  /* 1052125e push 0x1054a0ec */
  push32((uint32_t)(0x1054a0ecu));
  /* 10521263 push 0x1054f3f0 */
  push32((uint32_t)(0x1054f3f0u));
  /* 10521268 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x1052126eu);
  /* 1052126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521273 call 0x10522900 */
  push32(0x10521278u); f_10522900();
  /* 10521278 mov esi, esp */
  ESI = (ESP);
  /* 1052127a push 0x1054a0e4 */
  push32((uint32_t)(0x1054a0e4u));
  /* 1052127f push 0x1054f408 */
  push32((uint32_t)(0x1054f408u));
  /* 10521284 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x1052128au);
  /* 1052128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052128f call 0x10522900 */
  push32(0x10521294u); f_10522900();
  /* 10521294 mov esi, esp */
  ESI = (ESP);
  /* 10521296 push 0x1054a0dc */
  push32((uint32_t)(0x1054a0dcu));
  /* 1052129b push 0x1054f400 */
  push32((uint32_t)(0x1054f400u));
  /* 105212a0 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x105212a6u);
  /* 105212a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105212a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105212ab call 0x10522900 */
  push32(0x105212b0u); f_10522900();
  /* 105212b0 mov esi, esp */
  ESI = (ESP);
  /* 105212b2 push 0x1054a0d4 */
  push32((uint32_t)(0x1054a0d4u));
  /* 105212b7 push 0x1054f418 */
  push32((uint32_t)(0x1054f418u));
  /* 105212bc call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x105212c2u);
  /* 105212c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105212c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105212c7 call 0x10522900 */
  push32(0x105212ccu); f_10522900();
  /* 105212cc mov esi, esp */
  ESI = (ESP);
  /* 105212ce push 0x1054a0cc */
  push32((uint32_t)(0x1054a0ccu));
  /* 105212d3 push 0x1054f410 */
  push32((uint32_t)(0x1054f410u));
  /* 105212d8 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x105212deu);
  /* 105212de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105212e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105212e3 call 0x10522900 */
  push32(0x105212e8u); f_10522900();
  /* 105212e8 mov esi, esp */
  ESI = (ESP);
  /* 105212ea push 0x1054a0c4 */
  push32((uint32_t)(0x1054a0c4u));
  /* 105212ef push 0x1054f420 */
  push32((uint32_t)(0x1054f420u));
  /* 105212f4 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x105212fau);
  /* 105212fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105212fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105212ff call 0x10522900 */
  push32(0x10521304u); f_10522900();
  /* 10521304 mov esi, esp */
  ESI = (ESP);
  /* 10521306 push 0x1054a0b8 */
  push32((uint32_t)(0x1054a0b8u));
  /* 1052130b push 0x1054f4b8 */
  push32((uint32_t)(0x1054f4b8u));
  /* 10521310 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x10521316u);
  /* 10521316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052131b call 0x10522900 */
  push32(0x10521320u); f_10522900();
  /* 10521320 mov esi, esp */
  ESI = (ESP);
  /* 10521322 push 0x1054a0ac */
  push32((uint32_t)(0x1054a0acu));
  /* 10521327 push 0x1054f4d0 */
  push32((uint32_t)(0x1054f4d0u));
  /* 1052132c call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x10521332u);
  /* 10521332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521337 call 0x10522900 */
  push32(0x1052133cu); f_10522900();
  /* 1052133c mov esi, esp */
  ESI = (ESP);
  /* 1052133e push 0x1054a0a0 */
  push32((uint32_t)(0x1054a0a0u));
  /* 10521343 push 0x1054f4d8 */
  push32((uint32_t)(0x1054f4d8u));
  /* 10521348 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x1052134eu);
  /* 1052134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521353 call 0x10522900 */
  push32(0x10521358u); f_10522900();
  /* 10521358 mov esi, esp */
  ESI = (ESP);
  /* 1052135a push 0x1054a094 */
  push32((uint32_t)(0x1054a094u));
  /* 1052135f push 0x1054f4c0 */
  push32((uint32_t)(0x1054f4c0u));
  /* 10521364 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x1052136au);
  /* 1052136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052136f call 0x10522900 */
  push32(0x10521374u); f_10522900();
  /* 10521374 mov esi, esp */
  ESI = (ESP);
  /* 10521376 push 0x1054a088 */
  push32((uint32_t)(0x1054a088u));
  /* 1052137b push 0x1054f4c8 */
  push32((uint32_t)(0x1054f4c8u));
  /* 10521380 call dword ptr [0x105524b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b0))), 0x10521386u);
  /* 10521386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052138b call 0x10522900 */
  push32(0x10521390u); f_10522900();
  /* 10521390 mov esi, esp */
  ESI = (ESP);
  /* 10521392 push 0x1054a078 */
  push32((uint32_t)(0x1054a078u));
  /* 10521397 push 0x1054f458 */
  push32((uint32_t)(0x1054f458u));
  /* 1052139c call dword ptr [0x105524b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b4))), 0x105213a2u);
  /* 105213a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105213a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105213a7 call 0x10522900 */
  push32(0x105213acu); f_10522900();
  /* 105213ac mov esi, esp */
  ESI = (ESP);
  /* 105213ae push 0x1054a05c */
  push32((uint32_t)(0x1054a05cu));
  /* 105213b3 push 0x1054f460 */
  push32((uint32_t)(0x1054f460u));
  /* 105213b8 call dword ptr [0x105524b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b4))), 0x105213beu);
  /* 105213be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105213c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105213c3 call 0x10522900 */
  push32(0x105213c8u); f_10522900();
  /* 105213c8 mov esi, esp */
  ESI = (ESP);
  /* 105213ca push 0x1054a048 */
  push32((uint32_t)(0x1054a048u));
  /* 105213cf push 0x1054f4b0 */
  push32((uint32_t)(0x1054f4b0u));
  /* 105213d4 call dword ptr [0x105524b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b4))), 0x105213dau);
  /* 105213da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105213dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105213df call 0x10522900 */
  push32(0x105213e4u); f_10522900();
  /* 105213e4 mov esi, esp */
  ESI = (ESP);
  /* 105213e6 push 0x1054a038 */
  push32((uint32_t)(0x1054a038u));
  /* 105213eb push 0x1054f3e0 */
  push32((uint32_t)(0x1054f3e0u));
  /* 105213f0 call dword ptr [0x105524ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524ac))), 0x105213f6u);
  /* 105213f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105213f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105213fb call 0x10522900 */
  push32(0x10521400u); f_10522900();
  /* 10521400 mov esi, esp */
  ESI = (ESP);
  /* 10521402 push 8 */
  push32((uint32_t)(0x8u));
  /* 10521404 push 0x1054f428 */
  push32((uint32_t)(0x1054f428u));
  /* 10521409 call dword ptr [0x105524bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524bc))), 0x1052140fu);
  /* 1052140f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521414 call 0x10522900 */
  push32(0x10521419u); f_10522900();
  /* 10521419 mov esi, esp */
  ESI = (ESP);
  /* 1052141b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052141d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052141f call dword ptr [0x105524c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524c0))), 0x10521425u);
  /* 10521425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052142a call 0x10522900 */
  push32(0x1052142fu); f_10522900();
  /* 1052142f mov esi, esp */
  ESI = (ESP);
  /* 10521431 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10521433 push 4 */
  push32((uint32_t)(0x4u));
  /* 10521435 call dword ptr [0x105524c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524c0))), 0x1052143bu);
  /* 1052143b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052143e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521440 call 0x10522900 */
  push32(0x10521445u); f_10522900();
  /* 10521445 mov esi, esp */
  ESI = (ESP);
  /* 10521447 push 0x1054a030 */
  push32((uint32_t)(0x1054a030u));
  /* 1052144c push 1 */
  push32((uint32_t)(0x1u));
  /* 1052144e call dword ptr [0x105524b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b8))), 0x10521454u);
  /* 10521454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521459 call 0x10522900 */
  push32(0x1052145eu); f_10522900();
  /* 1052145e mov esi, esp */
  ESI = (ESP);
  /* 10521460 push 0x1054a028 */
  push32((uint32_t)(0x1054a028u));
  /* 10521465 push 4 */
  push32((uint32_t)(0x4u));
  /* 10521467 call dword ptr [0x105524b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b8))), 0x1052146du);
  /* 1052146d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521472 call 0x10522900 */
  push32(0x10521477u); f_10522900();
  /* 10521477 mov esi, esp */
  ESI = (ESP);
  /* 10521479 push 0x1054a01c */
  push32((uint32_t)(0x1054a01cu));
  /* 1052147e push 5 */
  push32((uint32_t)(0x5u));
  /* 10521480 call dword ptr [0x105524b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524b8))), 0x10521486u);
  /* 10521486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521489 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052148b call 0x10522900 */
  push32(0x10521490u); f_10522900();
  /* 10521490 pop edi */
  EDI = (pop32());
  /* 10521491 pop esi */
  ESI = (pop32());
  /* 10521492 pop ebx */
  EBX = (pop32());
  /* 10521493 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521496 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521498 call 0x10522900 */
  push32(0x1052149du); f_10522900();
  /* 1052149d mov esp, ebp */
  ESP = (EBP);
  /* 1052149f pop ebp */
  EBP = (pop32());
  /* 105214a0 ret  */
  ESPCHK(0x105210a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100015b0 @ 0x105215b0 (3626 bytes, 1063 insns) */
void f_105215b0(void) {
  FTRACE(0x105215b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105215b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105215b1 mov ebp, esp */
  EBP = (ESP);
  /* 105215b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105215b6 push ebx */
  push32((uint32_t)(EBX));
  /* 105215b7 push esi */
  push32((uint32_t)(ESI));
  /* 105215b8 push edi */
  push32((uint32_t)(EDI));
  /* 105215b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 105215bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 105215c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 105215c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105215c8 mov esi, esp */
  ESI = (ESP);
  /* 105215ca push 1 */
  push32((uint32_t)(0x1u));
  /* 105215cc call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105215d2u);
  /* 105215d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105215d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105215d7 call 0x10522900 */
  push32(0x105215dcu); f_10522900();
  /* 105215dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105215e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105215e3 je 0x10521765 */
  if (C.zf) goto L_10521765;
  /* 105215e9 mov esi, esp */
  ESI = (ESP);
  /* 105215eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105215ed push 1 */
  push32((uint32_t)(0x1u));
  /* 105215ef call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x105215f5u);
  /* 105215f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105215f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105215fa call 0x10522900 */
  push32(0x105215ffu); f_10522900();
  /* 105215ff mov esi, esp */
  ESI = (ESP);
  /* 10521601 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 10521606 push 3 */
  push32((uint32_t)(0x3u));
  /* 10521608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052160a call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x10521610u);
  /* 10521610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521615 call 0x10522900 */
  push32(0x1052161au); f_10522900();
  /* 1052161a mov esi, esp */
  ESI = (ESP);
  /* 1052161c push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10521621 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521623 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521625 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x1052162bu);
  /* 1052162b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052162e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521630 call 0x10522900 */
  push32(0x10521635u); f_10522900();
  /* 10521635 mov esi, esp */
  ESI = (ESP);
  /* 10521637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052163b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052163d call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x10521643u);
  /* 10521643 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521646 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521648 call 0x10522900 */
  push32(0x1052164du); f_10522900();
  /* 1052164d mov esi, esp */
  ESI = (ESP);
  /* 1052164f push 0 */
  push32((uint32_t)(0x0u));
  /* 10521651 push 2 */
  push32((uint32_t)(0x2u));
  /* 10521653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521655 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x1052165bu);
  /* 1052165b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521660 call 0x10522900 */
  push32(0x10521665u); f_10522900();
  /* 10521665 mov esi, esp */
  ESI = (ESP);
  /* 10521667 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1052166c push 5 */
  push32((uint32_t)(0x5u));
  /* 1052166e push 0 */
  push32((uint32_t)(0x0u));
  /* 10521670 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x10521676u);
  /* 10521676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052167b call 0x10522900 */
  push32(0x10521680u); f_10522900();
  /* 10521680 mov esi, esp */
  ESI = (ESP);
  /* 10521682 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10521687 push 4 */
  push32((uint32_t)(0x4u));
  /* 10521689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052168b call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x10521691u);
  /* 10521691 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521694 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521696 call 0x10522900 */
  push32(0x1052169bu); f_10522900();
  /* 1052169b mov esi, esp */
  ESI = (ESP);
  /* 1052169d push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 105216a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 105216a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105216a6 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x105216acu);
  /* 105216ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105216af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105216b1 call 0x10522900 */
  push32(0x105216b6u); f_10522900();
  /* 105216b6 mov esi, esp */
  ESI = (ESP);
  /* 105216b8 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 105216bd push 1 */
  push32((uint32_t)(0x1u));
  /* 105216bf push 1 */
  push32((uint32_t)(0x1u));
  /* 105216c1 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x105216c7u);
  /* 105216c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105216ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105216cc call 0x10522900 */
  push32(0x105216d1u); f_10522900();
  /* 105216d1 mov esi, esp */
  ESI = (ESP);
  /* 105216d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105216d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105216d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105216d9 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x105216dfu);
  /* 105216df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105216e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105216e4 call 0x10522900 */
  push32(0x105216e9u); f_10522900();
  /* 105216e9 mov esi, esp */
  ESI = (ESP);
  /* 105216eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105216ed push 2 */
  push32((uint32_t)(0x2u));
  /* 105216ef push 1 */
  push32((uint32_t)(0x1u));
  /* 105216f1 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x105216f7u);
  /* 105216f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105216fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105216fc call 0x10522900 */
  push32(0x10521701u); f_10522900();
  /* 10521701 mov esi, esp */
  ESI = (ESP);
  /* 10521703 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 10521708 push 5 */
  push32((uint32_t)(0x5u));
  /* 1052170a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052170c call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x10521712u);
  /* 10521712 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521717 call 0x10522900 */
  push32(0x1052171cu); f_10522900();
  /* 1052171c mov esi, esp */
  ESI = (ESP);
  /* 1052171e push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 10521723 push 4 */
  push32((uint32_t)(0x4u));
  /* 10521725 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521727 call dword ptr [0x1055243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055243c))), 0x1052172du);
  /* 1052172d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521732 call 0x10522900 */
  push32(0x10521737u); f_10522900();
  /* 10521737 mov esi, esp */
  ESI = (ESP);
  /* 10521739 push 0x1054a20c */
  push32((uint32_t)(0x1054a20cu));
  /* 1052173e call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521744u);
  /* 10521744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521749 call 0x10522900 */
  push32(0x1052174eu); f_10522900();
  /* 1052174e mov esi, esp */
  ESI = (ESP);
  /* 10521750 push 0x1054a200 */
  push32((uint32_t)(0x1054a200u));
  /* 10521755 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x1052175bu);
  /* 1052175b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052175e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521760 call 0x10522900 */
  push32(0x10521765u); f_10522900();
L_10521765:;
  /* 10521765 mov esi, esp */
  ESI = (ESP);
  /* 10521767 push 2 */
  push32((uint32_t)(0x2u));
  /* 10521769 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x1052176fu);
  /* 1052176f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521774 call 0x10522900 */
  push32(0x10521779u); f_10522900();
  /* 10521779 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052177e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521780 je 0x105218b6 */
  if (C.zf) goto L_105218b6;
  /* 10521786 mov esi, esp */
  ESI = (ESP);
  /* 10521788 push 0x1054f3e8 */
  push32((uint32_t)(0x1054f3e8u));
  /* 1052178d push 0x1054f470 */
  push32((uint32_t)(0x1054f470u));
  /* 10521792 call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10521798u);
  /* 10521798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052179b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052179d call 0x10522900 */
  push32(0x105217a2u); f_10522900();
  /* 105217a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105217a4 jle 0x105218b6 */
  if ((C.zf||C.sf!=C.of)) goto L_105218b6;
  /* 105217aa mov esi, esp */
  ESI = (ESP);
  /* 105217ac push 0 */
  push32((uint32_t)(0x0u));
  /* 105217ae push 2 */
  push32((uint32_t)(0x2u));
  /* 105217b0 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x105217b6u);
  /* 105217b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105217b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105217bb call 0x10522900 */
  push32(0x105217c0u); f_10522900();
  /* 105217c0 mov esi, esp */
  ESI = (ESP);
  /* 105217c2 push 0x1054a1f8 */
  push32((uint32_t)(0x1054a1f8u));
  /* 105217c7 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x105217cdu);
  /* 105217cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105217d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105217d2 call 0x10522900 */
  push32(0x105217d7u); f_10522900();
  /* 105217d7 mov esi, esp */
  ESI = (ESP);
  /* 105217d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105217db push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 105217e0 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x105217e6u);
  /* 105217e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105217e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105217eb call 0x10522900 */
  push32(0x105217f0u); f_10522900();
  /* 105217f0 mov esi, esp */
  ESI = (ESP);
  /* 105217f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105217f4 push 0x1054f3f0 */
  push32((uint32_t)(0x1054f3f0u));
  /* 105217f9 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x105217ffu);
  /* 105217ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521804 call 0x10522900 */
  push32(0x10521809u); f_10522900();
  /* 10521809 mov esi, esp */
  ESI = (ESP);
  /* 1052180b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052180d push 4 */
  push32((uint32_t)(0x4u));
  /* 1052180f call dword ptr [0x10552440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552440))), 0x10521815u);
  /* 10521815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052181a call 0x10522900 */
  push32(0x1052181fu); f_10522900();
  /* 1052181f mov esi, esp */
  ESI = (ESP);
  /* 10521821 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521823 push 3 */
  push32((uint32_t)(0x3u));
  /* 10521825 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x1052182bu);
  /* 1052182b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052182e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521830 call 0x10522900 */
  push32(0x10521835u); f_10522900();
  /* 10521835 mov esi, esp */
  ESI = (ESP);
  /* 10521837 push 0x1054a1ec */
  push32((uint32_t)(0x1054a1ecu));
  /* 1052183c call dword ptr [0x10552450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552450))), 0x10521842u);
  /* 10521842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521847 call 0x10522900 */
  push32(0x1052184cu); f_10522900();
  /* 1052184c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521853 je 0x1052189f */
  if (C.zf) goto L_1052189f;
  /* 10521855 mov esi, esp */
  ESI = (ESP);
  /* 10521857 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 1052185c push 1 */
  push32((uint32_t)(0x1u));
  /* 1052185e push 0 */
  push32((uint32_t)(0x0u));
  /* 10521860 call dword ptr [0x10552454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552454))), 0x10521866u);
  /* 10521866 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052186b call 0x10522900 */
  push32(0x10521870u); f_10522900();
  /* 10521870 mov esi, esp */
  ESI = (ESP);
  /* 10521872 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521874 push 0x1054f418 */
  push32((uint32_t)(0x1054f418u));
  /* 10521879 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x1052187fu);
  /* 1052187f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521884 call 0x10522900 */
  push32(0x10521889u); f_10522900();
  /* 10521889 mov esi, esp */
  ESI = (ESP);
  /* 1052188b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052188d push 4 */
  push32((uint32_t)(0x4u));
  /* 1052188f call dword ptr [0x10552440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552440))), 0x10521895u);
  /* 10521895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052189a call 0x10522900 */
  push32(0x1052189fu); f_10522900();
L_1052189f:;
  /* 1052189f mov esi, esp */
  ESI = (ESP);
  /* 105218a1 push 0x1054a1e0 */
  push32((uint32_t)(0x1054a1e0u));
  /* 105218a6 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x105218acu);
  /* 105218ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105218af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105218b1 call 0x10522900 */
  push32(0x105218b6u); f_10522900();
L_105218b6:;
  /* 105218b6 mov esi, esp */
  ESI = (ESP);
  /* 105218b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105218ba call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105218c0u);
  /* 105218c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105218c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105218c5 call 0x10522900 */
  push32(0x105218cau); f_10522900();
  /* 105218ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105218cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105218d1 je 0x105219e9 */
  if (C.zf) goto L_105219e9;
  /* 105218d7 mov esi, esp */
  ESI = (ESP);
  /* 105218d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105218db call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105218e1u);
  /* 105218e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105218e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105218e6 call 0x10522900 */
  push32(0x105218ebu); f_10522900();
  /* 105218eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105218f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105218f2 jne 0x105219e9 */
  if (!C.zf) goto L_105219e9;
  /* 105218f8 mov esi, esp */
  ESI = (ESP);
  /* 105218fa push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 105218ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10521901 push 0x1054f4b0 */
  push32((uint32_t)(0x1054f4b0u));
  /* 10521906 push 0x1054f478 */
  push32((uint32_t)(0x1054f478u));
  /* 1052190b push 0x1054f430 */
  push32((uint32_t)(0x1054f430u));
  /* 10521910 call dword ptr [0x1055244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055244c))), 0x10521916u);
  /* 10521916 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052191b call 0x10522900 */
  push32(0x10521920u); f_10522900();
  /* 10521920 mov esi, esp */
  ESI = (ESP);
  /* 10521922 push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 10521927 push 0x1054f430 */
  push32((uint32_t)(0x1054f430u));
  /* 1052192c call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10521932u);
  /* 10521932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521937 call 0x10522900 */
  push32(0x1052193cu); f_10522900();
  /* 1052193c mov esi, eax */
  ESI = (EAX);
  /* 1052193e push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 10521943 call 0x10521005 */
  push32(0x10521948u); f_10521005();
  /* 10521948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052194b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052194c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052194e sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10521950 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521952 jge 0x105219a2 */
  if ((C.sf==C.of)) goto L_105219a2;
  /* 10521954 mov esi, esp */
  ESI = (ESP);
  /* 10521956 push 3 */
  push32((uint32_t)(0x3u));
  /* 10521958 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x1052195eu);
  /* 1052195e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521963 call 0x10522900 */
  push32(0x10521968u); f_10522900();
  /* 10521968 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052196d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052196f je 0x105219a0 */
  if (C.zf) goto L_105219a0;
  /* 10521971 mov esi, esp */
  ESI = (ESP);
  /* 10521973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521975 push 3 */
  push32((uint32_t)(0x3u));
  /* 10521977 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x1052197du);
  /* 1052197d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521982 call 0x10522900 */
  push32(0x10521987u); f_10522900();
  /* 10521987 mov esi, esp */
  ESI = (ESP);
  /* 10521989 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1052198e push 1 */
  push32((uint32_t)(0x1u));
  /* 10521990 call dword ptr [0x1055245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055245c))), 0x10521996u);
  /* 10521996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052199b call 0x10522900 */
  push32(0x105219a0u); f_10522900();
L_105219a0:;
  /* 105219a0 jmp 0x105219e9 */
  goto L_105219e9;
L_105219a2:;
  /* 105219a2 mov esi, esp */
  ESI = (ESP);
  /* 105219a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 105219a6 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105219acu);
  /* 105219ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105219af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105219b1 call 0x10522900 */
  push32(0x105219b6u); f_10522900();
  /* 105219b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105219bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105219bd jne 0x105219e9 */
  if (!C.zf) goto L_105219e9;
  /* 105219bf mov esi, esp */
  ESI = (ESP);
  /* 105219c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105219c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 105219c5 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x105219cbu);
  /* 105219cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105219ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105219d0 call 0x10522900 */
  push32(0x105219d5u); f_10522900();
  /* 105219d5 mov esi, esp */
  ESI = (ESP);
  /* 105219d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105219d9 call dword ptr [0x10552460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552460))), 0x105219dfu);
  /* 105219df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105219e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105219e4 call 0x10522900 */
  push32(0x105219e9u); f_10522900();
L_105219e9:;
  /* 105219e9 mov esi, esp */
  ESI = (ESP);
  /* 105219eb push 1 */
  push32((uint32_t)(0x1u));
  /* 105219ed call dword ptr [0x10552458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552458))), 0x105219f3u);
  /* 105219f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105219f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105219f8 call 0x10522900 */
  push32(0x105219fdu); f_10522900();
  /* 105219fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521a04 je 0x10521a92 */
  if (C.zf) goto L_10521a92;
  /* 10521a0a mov esi, esp */
  ESI = (ESP);
  /* 10521a0c push 0x1054a1d8 */
  push32((uint32_t)(0x1054a1d8u));
  /* 10521a11 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521a17u);
  /* 10521a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521a1c call 0x10522900 */
  push32(0x10521a21u); f_10522900();
  /* 10521a21 mov esi, esp */
  ESI = (ESP);
  /* 10521a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521a25 push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 10521a2a call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521a30u);
  /* 10521a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521a35 call 0x10522900 */
  push32(0x10521a3au); f_10522900();
  /* 10521a3a mov esi, esp */
  ESI = (ESP);
  /* 10521a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10521a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10521a40 call dword ptr [0x10552468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552468))), 0x10521a46u);
  /* 10521a46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521a4b call 0x10522900 */
  push32(0x10521a50u); f_10522900();
  /* 10521a50 mov esi, esp */
  ESI = (ESP);
  /* 10521a52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521a56 call dword ptr [0x1055246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055246c))), 0x10521a5cu);
  /* 10521a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521a61 call 0x10522900 */
  push32(0x10521a66u); f_10522900();
  /* 10521a66 mov esi, esp */
  ESI = (ESP);
  /* 10521a68 push 5 */
  push32((uint32_t)(0x5u));
  /* 10521a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10521a6c call dword ptr [0x10552440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552440))), 0x10521a72u);
  /* 10521a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521a77 call 0x10522900 */
  push32(0x10521a7cu); f_10522900();
  /* 10521a7c mov esi, esp */
  ESI = (ESP);
  /* 10521a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10521a80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10521a82 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521a88u);
  /* 10521a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521a8d call 0x10522900 */
  push32(0x10521a92u); f_10522900();
L_10521a92:;
  /* 10521a92 mov esi, esp */
  ESI = (ESP);
  /* 10521a94 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10521a96 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521a9cu);
  /* 10521a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521aa1 call 0x10522900 */
  push32(0x10521aa6u); f_10522900();
  /* 10521aa6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521aad je 0x10521b1e */
  if (C.zf) goto L_10521b1e;
  /* 10521aaf mov esi, esp */
  ESI = (ESP);
  /* 10521ab1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521ab3 call dword ptr [0x10552464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552464))), 0x10521ab9u);
  /* 10521ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521abe call 0x10522900 */
  push32(0x10521ac3u); f_10522900();
  /* 10521ac3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521aca je 0x10521b1e */
  if (C.zf) goto L_10521b1e;
  /* 10521acc mov esi, esp */
  ESI = (ESP);
  /* 10521ace push 0x1054f420 */
  push32((uint32_t)(0x1054f420u));
  /* 10521ad3 push 0x1054f478 */
  push32((uint32_t)(0x1054f478u));
  /* 10521ad8 call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10521adeu);
  /* 10521ade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ae1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ae3 call 0x10522900 */
  push32(0x10521ae8u); f_10522900();
  /* 10521ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521aea jle 0x10521b1e */
  if ((C.zf||C.sf!=C.of)) goto L_10521b1e;
  /* 10521aec mov esi, esp */
  ESI = (ESP);
  /* 10521aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10521af0 push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 10521af5 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521afbu);
  /* 10521afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521afe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521b00 call 0x10522900 */
  push32(0x10521b05u); f_10522900();
  /* 10521b05 mov esi, esp */
  ESI = (ESP);
  /* 10521b07 push 0x1054f420 */
  push32((uint32_t)(0x1054f420u));
  /* 10521b0c push 5 */
  push32((uint32_t)(0x5u));
  /* 10521b0e call dword ptr [0x10552474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552474))), 0x10521b14u);
  /* 10521b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521b19 call 0x10522900 */
  push32(0x10521b1eu); f_10522900();
L_10521b1e:;
  /* 10521b1e mov esi, esp */
  ESI = (ESP);
  /* 10521b20 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10521b22 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521b28u);
  /* 10521b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521b2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521b2d call 0x10522900 */
  push32(0x10521b32u); f_10522900();
  /* 10521b32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521b39 je 0x10521bc8 */
  if (C.zf) goto L_10521bc8;
  /* 10521b3f mov esi, esp */
  ESI = (ESP);
  /* 10521b41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521b43 call dword ptr [0x10552464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552464))), 0x10521b49u);
  /* 10521b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521b4e call 0x10522900 */
  push32(0x10521b53u); f_10522900();
  /* 10521b53 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521b5a je 0x10521bc8 */
  if (C.zf) goto L_10521bc8;
  /* 10521b5c mov esi, esp */
  ESI = (ESP);
  /* 10521b5e push 0x1054f420 */
  push32((uint32_t)(0x1054f420u));
  /* 10521b63 push 0x1054f478 */
  push32((uint32_t)(0x1054f478u));
  /* 10521b68 call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10521b6eu);
  /* 10521b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521b73 call 0x10522900 */
  push32(0x10521b78u); f_10522900();
  /* 10521b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521b7a jne 0x10521bc8 */
  if (!C.zf) goto L_10521bc8;
  /* 10521b7c mov esi, esp */
  ESI = (ESP);
  /* 10521b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10521b80 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10521b82 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521b88u);
  /* 10521b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521b8d call 0x10522900 */
  push32(0x10521b92u); f_10522900();
  /* 10521b92 mov esi, esp */
  ESI = (ESP);
  /* 10521b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521b96 push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 10521b9b call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521ba1u);
  /* 10521ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ba6 call 0x10522900 */
  push32(0x10521babu); f_10522900();
  /* 10521bab mov esi, esp */
  ESI = (ESP);
  /* 10521bad push 0 */
  push32((uint32_t)(0x0u));
  /* 10521baf push 0 */
  push32((uint32_t)(0x0u));
  /* 10521bb1 push 0x1054f4a0 */
  push32((uint32_t)(0x1054f4a0u));
  /* 10521bb6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10521bb8 call dword ptr [0x10552478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552478))), 0x10521bbeu);
  /* 10521bbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521bc3 call 0x10522900 */
  push32(0x10521bc8u); f_10522900();
L_10521bc8:;
  /* 10521bc8 mov esi, esp */
  ESI = (ESP);
  /* 10521bca push 4 */
  push32((uint32_t)(0x4u));
  /* 10521bcc call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521bd2u);
  /* 10521bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521bd7 call 0x10522900 */
  push32(0x10521bdcu); f_10522900();
  /* 10521bdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521be3 je 0x10521d3d */
  if (C.zf) goto L_10521d3d;
  /* 10521be9 mov esi, esp */
  ESI = (ESP);
  /* 10521beb push 0x1054f3e8 */
  push32((uint32_t)(0x1054f3e8u));
  /* 10521bf0 push 0x1054f468 */
  push32((uint32_t)(0x1054f468u));
  /* 10521bf5 call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10521bfbu);
  /* 10521bfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521bfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521c00 call 0x10522900 */
  push32(0x10521c05u); f_10522900();
  /* 10521c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521c07 jle 0x10521d3d */
  if ((C.zf||C.sf!=C.of)) goto L_10521d3d;
  /* 10521c0d push 0x1054f400 */
  push32((uint32_t)(0x1054f400u));
  /* 10521c12 call 0x10521005 */
  push32(0x10521c17u); f_10521005();
  /* 10521c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521c1c jle 0x10521d3d */
  if ((C.zf||C.sf!=C.of)) goto L_10521d3d;
  /* 10521c22 mov esi, esp */
  ESI = (ESP);
  /* 10521c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521c26 push 4 */
  push32((uint32_t)(0x4u));
  /* 10521c28 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521c2eu);
  /* 10521c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521c31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521c33 call 0x10522900 */
  push32(0x10521c38u); f_10522900();
  /* 10521c38 mov esi, esp */
  ESI = (ESP);
  /* 10521c3a push 0x1054a1d0 */
  push32((uint32_t)(0x1054a1d0u));
  /* 10521c3f call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521c45u);
  /* 10521c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521c4a call 0x10522900 */
  push32(0x10521c4fu); f_10522900();
  /* 10521c4f mov esi, esp */
  ESI = (ESP);
  /* 10521c51 push 0x1054a1c4 */
  push32((uint32_t)(0x1054a1c4u));
  /* 10521c56 call dword ptr [0x10552450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552450))), 0x10521c5cu);
  /* 10521c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521c61 call 0x10522900 */
  push32(0x10521c66u); f_10522900();
  /* 10521c66 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521c6d je 0x10521d3d */
  if (C.zf) goto L_10521d3d;
  /* 10521c73 mov esi, esp */
  ESI = (ESP);
  /* 10521c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521c79 call dword ptr [0x10552470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552470))), 0x10521c7fu);
  /* 10521c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521c84 call 0x10522900 */
  push32(0x10521c89u); f_10522900();
  /* 10521c89 cmp eax, 0x270f */
  { uint32_t _a=(EAX),_b=(0x270fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521c8e jle 0x10521d26 */
  if ((C.zf||C.sf!=C.of)) goto L_10521d26;
  /* 10521c94 mov esi, esp */
  ESI = (ESP);
  /* 10521c96 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 10521c9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10521c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10521c9f call dword ptr [0x10552454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552454))), 0x10521ca5u);
  /* 10521ca5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521caa call 0x10522900 */
  push32(0x10521cafu); f_10522900();
  /* 10521caf mov esi, esp */
  ESI = (ESP);
  /* 10521cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521cb3 push 0x1054f400 */
  push32((uint32_t)(0x1054f400u));
  /* 10521cb8 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521cbeu);
  /* 10521cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521cc3 call 0x10522900 */
  push32(0x10521cc8u); f_10522900();
  /* 10521cc8 mov esi, esp */
  ESI = (ESP);
  /* 10521cca push 1 */
  push32((uint32_t)(0x1u));
  /* 10521ccc call dword ptr [0x10552480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552480))), 0x10521cd2u);
  /* 10521cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521cd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521cd7 call 0x10522900 */
  push32(0x10521cdcu); f_10522900();
  /* 10521cdc mov esi, esp */
  ESI = (ESP);
  /* 10521cde push 0 */
  push32((uint32_t)(0x0u));
  /* 10521ce0 push 0x1054f408 */
  push32((uint32_t)(0x1054f408u));
  /* 10521ce5 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521cebu);
  /* 10521ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521cee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521cf0 call 0x10522900 */
  push32(0x10521cf5u); f_10522900();
  /* 10521cf5 mov esi, esp */
  ESI = (ESP);
  /* 10521cf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10521cf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10521cfb call dword ptr [0x10552440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552440))), 0x10521d01u);
  /* 10521d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d06 call 0x10522900 */
  push32(0x10521d0bu); f_10522900();
  /* 10521d0b mov esi, esp */
  ESI = (ESP);
  /* 10521d0d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10521d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10521d14 call dword ptr [0x1055245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055245c))), 0x10521d1au);
  /* 10521d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d1f call 0x10522900 */
  push32(0x10521d24u); f_10522900();
  /* 10521d24 jmp 0x10521d3d */
  goto L_10521d3d;
L_10521d26:;
  /* 10521d26 mov esi, esp */
  ESI = (ESP);
  /* 10521d28 push 0x1054a1b8 */
  push32((uint32_t)(0x1054a1b8u));
  /* 10521d2d call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521d33u);
  /* 10521d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d38 call 0x10522900 */
  push32(0x10521d3du); f_10522900();
L_10521d3d:;
  /* 10521d3d mov esi, esp */
  ESI = (ESP);
  /* 10521d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10521d41 call dword ptr [0x10552458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552458))), 0x10521d47u);
  /* 10521d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d4c call 0x10522900 */
  push32(0x10521d51u); f_10522900();
  /* 10521d51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521d58 je 0x10521d90 */
  if (C.zf) goto L_10521d90;
  /* 10521d5a mov esi, esp */
  ESI = (ESP);
  /* 10521d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10521d5e push 0x1054f408 */
  push32((uint32_t)(0x1054f408u));
  /* 10521d63 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521d69u);
  /* 10521d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d6e call 0x10522900 */
  push32(0x10521d73u); f_10522900();
  /* 10521d73 mov esi, esp */
  ESI = (ESP);
  /* 10521d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521d79 push 0x1054f498 */
  push32((uint32_t)(0x1054f498u));
  /* 10521d7e push 4 */
  push32((uint32_t)(0x4u));
  /* 10521d80 call dword ptr [0x10552484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552484))), 0x10521d86u);
  /* 10521d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d8b call 0x10522900 */
  push32(0x10521d90u); f_10522900();
L_10521d90:;
  /* 10521d90 mov esi, esp */
  ESI = (ESP);
  /* 10521d92 push 5 */
  push32((uint32_t)(0x5u));
  /* 10521d94 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521d9au);
  /* 10521d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521d9f call 0x10522900 */
  push32(0x10521da4u); f_10522900();
  /* 10521da4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521dab je 0x10521e51 */
  if (C.zf) goto L_10521e51;
  /* 10521db1 push 0x1054f410 */
  push32((uint32_t)(0x1054f410u));
  /* 10521db6 call 0x10521005 */
  push32(0x10521dbbu); f_10521005();
  /* 10521dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521dc0 jne 0x10521e51 */
  if (!C.zf) goto L_10521e51;
  /* 10521dc6 mov esi, esp */
  ESI = (ESP);
  /* 10521dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521dca push 5 */
  push32((uint32_t)(0x5u));
  /* 10521dcc call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521dd2u);
  /* 10521dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521dd7 call 0x10522900 */
  push32(0x10521ddcu); f_10522900();
  /* 10521ddc mov esi, esp */
  ESI = (ESP);
  /* 10521dde push 0x1054a1b0 */
  push32((uint32_t)(0x1054a1b0u));
  /* 10521de3 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521de9u);
  /* 10521de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521dee call 0x10522900 */
  push32(0x10521df3u); f_10522900();
  /* 10521df3 mov esi, esp */
  ESI = (ESP);
  /* 10521df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521df7 push 0x1054f480 */
  push32((uint32_t)(0x1054f480u));
  /* 10521dfc push 1 */
  push32((uint32_t)(0x1u));
  /* 10521dfe push 0x1054f458 */
  push32((uint32_t)(0x1054f458u));
  /* 10521e03 push 0x1054f3e0 */
  push32((uint32_t)(0x1054f3e0u));
  /* 10521e08 push 0x1054f428 */
  push32((uint32_t)(0x1054f428u));
  /* 10521e0d call dword ptr [0x1055247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055247c))), 0x10521e13u);
  /* 10521e13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521e16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521e18 call 0x10522900 */
  push32(0x10521e1du); f_10522900();
  /* 10521e1d mov esi, esp */
  ESI = (ESP);
  /* 10521e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10521e21 push 0x1054f428 */
  push32((uint32_t)(0x1054f428u));
  /* 10521e26 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10521e2cu);
  /* 10521e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521e31 call 0x10522900 */
  push32(0x10521e36u); f_10522900();
  /* 10521e36 mov esi, esp */
  ESI = (ESP);
  /* 10521e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521e3a push 0x1054f488 */
  push32((uint32_t)(0x1054f488u));
  /* 10521e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10521e41 call dword ptr [0x1055248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055248c))), 0x10521e47u);
  /* 10521e47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521e4c call 0x10522900 */
  push32(0x10521e51u); f_10522900();
L_10521e51:;
  /* 10521e51 mov esi, esp */
  ESI = (ESP);
  /* 10521e53 push 6 */
  push32((uint32_t)(0x6u));
  /* 10521e55 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521e5bu);
  /* 10521e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521e5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521e60 call 0x10522900 */
  push32(0x10521e65u); f_10522900();
  /* 10521e65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521e6c je 0x10521ee7 */
  if (C.zf) goto L_10521ee7;
  /* 10521e6e mov esi, esp */
  ESI = (ESP);
  /* 10521e70 push 5 */
  push32((uint32_t)(0x5u));
  /* 10521e72 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521e78u);
  /* 10521e78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521e7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521e7d call 0x10522900 */
  push32(0x10521e82u); f_10522900();
  /* 10521e82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521e89 jne 0x10521ee7 */
  if (!C.zf) goto L_10521ee7;
  /* 10521e8b mov esi, esp */
  ESI = (ESP);
  /* 10521e8d push 0x1054f3e8 */
  push32((uint32_t)(0x1054f3e8u));
  /* 10521e92 push 0x1054f490 */
  push32((uint32_t)(0x1054f490u));
  /* 10521e97 call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10521e9du);
  /* 10521e9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ea0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ea2 call 0x10522900 */
  push32(0x10521ea7u); f_10522900();
  /* 10521ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521ea9 je 0x10521ee7 */
  if (C.zf) goto L_10521ee7;
  /* 10521eab mov esi, esp */
  ESI = (ESP);
  /* 10521ead push 0 */
  push32((uint32_t)(0x0u));
  /* 10521eaf push 6 */
  push32((uint32_t)(0x6u));
  /* 10521eb1 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521eb7u);
  /* 10521eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521eba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ebc call 0x10522900 */
  push32(0x10521ec1u); f_10522900();
  /* 10521ec1 mov esi, esp */
  ESI = (ESP);
  /* 10521ec3 push 0x1054a1a8 */
  push32((uint32_t)(0x1054a1a8u));
  /* 10521ec8 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521eceu);
  /* 10521ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ed3 call 0x10522900 */
  push32(0x10521ed8u); f_10522900();
  /* 10521ed8 mov esi, esp */
  ESI = (ESP);
  /* 10521eda call dword ptr [0x10552490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552490))), 0x10521ee0u);
  /* 10521ee0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ee2 call 0x10522900 */
  push32(0x10521ee7u); f_10522900();
L_10521ee7:;
  /* 10521ee7 mov esi, esp */
  ESI = (ESP);
  /* 10521ee9 push 7 */
  push32((uint32_t)(0x7u));
  /* 10521eeb call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521ef1u);
  /* 10521ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521ef6 call 0x10522900 */
  push32(0x10521efbu); f_10522900();
  /* 10521efb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521f02 je 0x10521f51 */
  if (C.zf) goto L_10521f51;
  /* 10521f04 push 0x1054f3e8 */
  push32((uint32_t)(0x1054f3e8u));
  /* 10521f09 call 0x10521005 */
  push32(0x10521f0eu); f_10521005();
  /* 10521f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521f13 jne 0x10521f51 */
  if (!C.zf) goto L_10521f51;
  /* 10521f15 mov esi, esp */
  ESI = (ESP);
  /* 10521f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521f19 push 7 */
  push32((uint32_t)(0x7u));
  /* 10521f1b call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521f21u);
  /* 10521f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521f26 call 0x10522900 */
  push32(0x10521f2bu); f_10522900();
  /* 10521f2b mov esi, esp */
  ESI = (ESP);
  /* 10521f2d push 0x1054a1a0 */
  push32((uint32_t)(0x1054a1a0u));
  /* 10521f32 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521f38u);
  /* 10521f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521f3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521f3d call 0x10522900 */
  push32(0x10521f42u); f_10522900();
  /* 10521f42 mov esi, esp */
  ESI = (ESP);
  /* 10521f44 call dword ptr [0x10552488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552488))), 0x10521f4au);
  /* 10521f4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521f4c call 0x10522900 */
  push32(0x10521f51u); f_10522900();
L_10521f51:;
  /* 10521f51 mov esi, esp */
  ESI = (ESP);
  /* 10521f53 push 8 */
  push32((uint32_t)(0x8u));
  /* 10521f55 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521f5bu);
  /* 10521f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521f5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521f60 call 0x10522900 */
  push32(0x10521f65u); f_10522900();
  /* 10521f65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521f6c je 0x10521fc9 */
  if (C.zf) goto L_10521fc9;
  /* 10521f6e push 0x1054f4b8 */
  push32((uint32_t)(0x1054f4b8u));
  /* 10521f73 call 0x10521005 */
  push32(0x10521f78u); f_10521005();
  /* 10521f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521f7d jle 0x10521fc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10521fc9;
  /* 10521f7f mov esi, esp */
  ESI = (ESP);
  /* 10521f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521f83 push 0x1054f4a8 */
  push32((uint32_t)(0x1054f4a8u));
  /* 10521f88 call dword ptr [0x10552498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552498))), 0x10521f8eu);
  /* 10521f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521f93 call 0x10522900 */
  push32(0x10521f98u); f_10522900();
  /* 10521f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521f9a jle 0x10521fc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10521fc9;
  /* 10521f9c mov esi, esp */
  ESI = (ESP);
  /* 10521f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10521fa0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10521fa2 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10521fa8u);
  /* 10521fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521fab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521fad call 0x10522900 */
  push32(0x10521fb2u); f_10522900();
  /* 10521fb2 mov esi, esp */
  ESI = (ESP);
  /* 10521fb4 push 0x1054a198 */
  push32((uint32_t)(0x1054a198u));
  /* 10521fb9 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10521fbfu);
  /* 10521fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521fc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521fc4 call 0x10522900 */
  push32(0x10521fc9u); f_10522900();
L_10521fc9:;
  /* 10521fc9 mov esi, esp */
  ESI = (ESP);
  /* 10521fcb push 8 */
  push32((uint32_t)(0x8u));
  /* 10521fcd call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10521fd3u);
  /* 10521fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10521fd8 call 0x10522900 */
  push32(0x10521fddu); f_10522900();
  /* 10521fdd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10521fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521fe4 jne 0x10522032 */
  if (!C.zf) goto L_10522032;
  /* 10521fe6 push 0x1054f4b8 */
  push32((uint32_t)(0x1054f4b8u));
  /* 10521feb call 0x10521005 */
  push32(0x10521ff0u); f_10521005();
  /* 10521ff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10521ff3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10521ff5 jle 0x10522032 */
  if ((C.zf||C.sf!=C.of)) goto L_10522032;
  /* 10521ff7 mov esi, esp */
  ESI = (ESP);
  /* 10521ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10521ffb push 0x1054f4a8 */
  push32((uint32_t)(0x1054f4a8u));
  /* 10522000 call dword ptr [0x10552498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552498))), 0x10522006u);
  /* 10522006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052200b call 0x10522900 */
  push32(0x10522010u); f_10522900();
  /* 10522010 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522012 jle 0x10522032 */
  if ((C.zf||C.sf!=C.of)) goto L_10522032;
  /* 10522014 mov esi, esp */
  ESI = (ESP);
  /* 10522016 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522018 push 0x1054f4a8 */
  push32((uint32_t)(0x1054f4a8u));
  /* 1052201d push 0x1054f4b8 */
  push32((uint32_t)(0x1054f4b8u));
  /* 10522022 call dword ptr [0x1055249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055249c))), 0x10522028u);
  /* 10522028 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052202b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052202d call 0x10522900 */
  push32(0x10522032u); f_10522900();
L_10522032:;
  /* 10522032 mov esi, esp */
  ESI = (ESP);
  /* 10522034 push 9 */
  push32((uint32_t)(0x9u));
  /* 10522036 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x1052203cu);
  /* 1052203c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052203f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522041 call 0x10522900 */
  push32(0x10522046u); f_10522900();
  /* 10522046 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052204b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052204d je 0x105220e2 */
  if (C.zf) goto L_105220e2;
  /* 10522053 push 0x1054f4b8 */
  push32((uint32_t)(0x1054f4b8u));
  /* 10522058 call 0x10521005 */
  push32(0x1052205du); f_10521005();
  /* 1052205d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522062 jne 0x105220e2 */
  if (!C.zf) goto L_105220e2;
  /* 10522064 mov esi, esp */
  ESI = (ESP);
  /* 10522066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522068 push 9 */
  push32((uint32_t)(0x9u));
  /* 1052206a call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x10522070u);
  /* 10522070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522073 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522075 call 0x10522900 */
  push32(0x1052207au); f_10522900();
  /* 1052207a mov esi, esp */
  ESI = (ESP);
  /* 1052207c push 0x1054a190 */
  push32((uint32_t)(0x1054a190u));
  /* 10522081 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10522087u);
  /* 10522087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052208a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052208c call 0x10522900 */
  push32(0x10522091u); f_10522900();
  /* 10522091 mov esi, esp */
  ESI = (ESP);
  /* 10522093 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10522098 push 3 */
  push32((uint32_t)(0x3u));
  /* 1052209a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052209c call dword ptr [0x10552454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552454))), 0x105220a2u);
  /* 105220a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105220a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105220a7 call 0x10522900 */
  push32(0x105220acu); f_10522900();
  /* 105220ac mov esi, esp */
  ESI = (ESP);
  /* 105220ae push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 105220b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 105220b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105220b7 call dword ptr [0x10552454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552454))), 0x105220bdu);
  /* 105220bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105220c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105220c2 call 0x10522900 */
  push32(0x105220c7u); f_10522900();
  /* 105220c7 mov esi, esp */
  ESI = (ESP);
  /* 105220c9 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 105220ce push 1 */
  push32((uint32_t)(0x1u));
  /* 105220d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105220d2 call dword ptr [0x10552454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552454))), 0x105220d8u);
  /* 105220d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105220db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105220dd call 0x10522900 */
  push32(0x105220e2u); f_10522900();
L_105220e2:;
  /* 105220e2 mov esi, esp */
  ESI = (ESP);
  /* 105220e4 push 0xa */
  push32((uint32_t)(0xau));
  /* 105220e6 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105220ecu);
  /* 105220ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105220ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105220f1 call 0x10522900 */
  push32(0x105220f6u); f_10522900();
  /* 105220f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105220fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105220fd je 0x10522167 */
  if (C.zf) goto L_10522167;
  /* 105220ff mov esi, esp */
  ESI = (ESP);
  /* 10522101 push 0x1054f3f8 */
  push32((uint32_t)(0x1054f3f8u));
  /* 10522106 push 0x1054f438 */
  push32((uint32_t)(0x1054f438u));
  /* 1052210b call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x10522111u);
  /* 10522111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522116 call 0x10522900 */
  push32(0x1052211bu); f_10522900();
  /* 1052211b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052211d jle 0x10522167 */
  if ((C.zf||C.sf!=C.of)) goto L_10522167;
  /* 1052211f mov esi, esp */
  ESI = (ESP);
  /* 10522121 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522123 push 0xa */
  push32((uint32_t)(0xau));
  /* 10522125 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x1052212bu);
  /* 1052212b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052212e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522130 call 0x10522900 */
  push32(0x10522135u); f_10522900();
  /* 10522135 mov esi, esp */
  ESI = (ESP);
  /* 10522137 push 0x1054a184 */
  push32((uint32_t)(0x1054a184u));
  /* 1052213c call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x10522142u);
  /* 10522142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522145 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522147 call 0x10522900 */
  push32(0x1052214cu); f_10522900();
  /* 1052214c mov esi, esp */
  ESI = (ESP);
  /* 1052214e push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 10522153 push 1 */
  push32((uint32_t)(0x1u));
  /* 10522155 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522157 call dword ptr [0x10552454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552454))), 0x1052215du);
  /* 1052215d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522162 call 0x10522900 */
  push32(0x10522167u); f_10522900();
L_10522167:;
  /* 10522167 mov esi, esp */
  ESI = (ESP);
  /* 10522169 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1052216b call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10522171u);
  /* 10522171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522176 call 0x10522900 */
  push32(0x1052217bu); f_10522900();
  /* 1052217b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522182 je 0x105221df */
  if (C.zf) goto L_105221df;
  /* 10522184 push 0x1054f4d0 */
  push32((uint32_t)(0x1054f4d0u));
  /* 10522189 call 0x10521005 */
  push32(0x1052218eu); f_10521005();
  /* 1052218e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522193 jle 0x105221df */
  if ((C.zf||C.sf!=C.of)) goto L_105221df;
  /* 10522195 mov esi, esp */
  ESI = (ESP);
  /* 10522197 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522199 push 0x1054f450 */
  push32((uint32_t)(0x1054f450u));
  /* 1052219e call dword ptr [0x10552498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552498))), 0x105221a4u);
  /* 105221a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105221a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105221a9 call 0x10522900 */
  push32(0x105221aeu); f_10522900();
  /* 105221ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105221b0 jle 0x105221df */
  if ((C.zf||C.sf!=C.of)) goto L_105221df;
  /* 105221b2 mov esi, esp */
  ESI = (ESP);
  /* 105221b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105221b6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105221b8 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x105221beu);
  /* 105221be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105221c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105221c3 call 0x10522900 */
  push32(0x105221c8u); f_10522900();
  /* 105221c8 mov esi, esp */
  ESI = (ESP);
  /* 105221ca push 0x1054a178 */
  push32((uint32_t)(0x1054a178u));
  /* 105221cf call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x105221d5u);
  /* 105221d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105221d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105221da call 0x10522900 */
  push32(0x105221dfu); f_10522900();
L_105221df:;
  /* 105221df mov esi, esp */
  ESI = (ESP);
  /* 105221e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105221e3 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105221e9u);
  /* 105221e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105221ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105221ee call 0x10522900 */
  push32(0x105221f3u); f_10522900();
  /* 105221f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105221f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105221fa jne 0x10522248 */
  if (!C.zf) goto L_10522248;
  /* 105221fc push 0x1054f4d0 */
  push32((uint32_t)(0x1054f4d0u));
  /* 10522201 call 0x10521005 */
  push32(0x10522206u); f_10521005();
  /* 10522206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052220b jle 0x10522248 */
  if ((C.zf||C.sf!=C.of)) goto L_10522248;
  /* 1052220d mov esi, esp */
  ESI = (ESP);
  /* 1052220f push 0 */
  push32((uint32_t)(0x0u));
  /* 10522211 push 0x1054f450 */
  push32((uint32_t)(0x1054f450u));
  /* 10522216 call dword ptr [0x10552498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552498))), 0x1052221cu);
  /* 1052221c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052221f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522221 call 0x10522900 */
  push32(0x10522226u); f_10522900();
  /* 10522226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522228 jle 0x10522248 */
  if ((C.zf||C.sf!=C.of)) goto L_10522248;
  /* 1052222a mov esi, esp */
  ESI = (ESP);
  /* 1052222c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052222e push 0x1054f450 */
  push32((uint32_t)(0x1054f450u));
  /* 10522233 push 0x1054f4d0 */
  push32((uint32_t)(0x1054f4d0u));
  /* 10522238 call dword ptr [0x1055249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055249c))), 0x1052223eu);
  /* 1052223e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522243 call 0x10522900 */
  push32(0x10522248u); f_10522900();
L_10522248:;
  /* 10522248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052224a push 0x1054f460 */
  push32((uint32_t)(0x1054f460u));
  /* 1052224f call 0x1052100f */
  push32(0x10522254u); f_1052100f();
  /* 10522254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522259 jle 0x1052229e */
  if ((C.zf||C.sf!=C.of)) goto L_1052229e;
  /* 1052225b mov esi, esp */
  ESI = (ESP);
  /* 1052225d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052225f call dword ptr [0x10552494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552494))), 0x10522265u);
  /* 10522265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522268 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052226a call 0x10522900 */
  push32(0x1052226fu); f_10522900();
  /* 1052226f mov esi, esp */
  ESI = (ESP);
  /* 10522271 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522273 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522275 push 0x1054f460 */
  push32((uint32_t)(0x1054f460u));
  /* 1052227a call dword ptr [0x105524a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a4))), 0x10522280u);
  /* 10522280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522285 call 0x10522900 */
  push32(0x1052228au); f_10522900();
  /* 1052228a mov esi, esp */
  ESI = (ESP);
  /* 1052228c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052228e call dword ptr [0x105524a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105524a8))), 0x10522294u);
  /* 10522294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522297 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522299 call 0x10522900 */
  push32(0x1052229eu); f_10522900();
L_1052229e:;
  /* 1052229e mov esi, esp */
  ESI = (ESP);
  /* 105222a0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 105222a2 call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x105222a8u);
  /* 105222a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105222ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105222ad call 0x10522900 */
  push32(0x105222b2u); f_10522900();
  /* 105222b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105222b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105222b9 je 0x10522309 */
  if (C.zf) goto L_10522309;
  /* 105222bb mov esi, esp */
  ESI = (ESP);
  /* 105222bd push 0x1054f3f0 */
  push32((uint32_t)(0x1054f3f0u));
  /* 105222c2 push 0x1054f448 */
  push32((uint32_t)(0x1054f448u));
  /* 105222c7 call dword ptr [0x10552444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552444))), 0x105222cdu);
  /* 105222cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105222d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105222d2 call 0x10522900 */
  push32(0x105222d7u); f_10522900();
  /* 105222d7 cmp eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105222da jge 0x10522309 */
  if ((C.sf==C.of)) goto L_10522309;
  /* 105222dc mov esi, esp */
  ESI = (ESP);
  /* 105222de push 0 */
  push32((uint32_t)(0x0u));
  /* 105222e0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 105222e2 call dword ptr [0x10552438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552438))), 0x105222e8u);
  /* 105222e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105222eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105222ed call 0x10522900 */
  push32(0x105222f2u); f_10522900();
  /* 105222f2 mov esi, esp */
  ESI = (ESP);
  /* 105222f4 push 0x1054a16c */
  push32((uint32_t)(0x1054a16cu));
  /* 105222f9 call dword ptr [0x10552434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552434))), 0x105222ffu);
  /* 105222ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522302 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522304 call 0x10522900 */
  push32(0x10522309u); f_10522900();
L_10522309:;
  /* 10522309 mov esi, esp */
  ESI = (ESP);
  /* 1052230b push 0xc */
  push32((uint32_t)(0xcu));
  /* 1052230d call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10522313u);
  /* 10522313 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522316 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522318 call 0x10522900 */
  push32(0x1052231du); f_10522900();
  /* 1052231d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522322 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522324 jne 0x10522369 */
  if (!C.zf) goto L_10522369;
  /* 10522326 push 0x1054f4d8 */
  push32((uint32_t)(0x1054f4d8u));
  /* 1052232b call 0x10521005 */
  push32(0x10522330u); f_10521005();
  /* 10522330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522335 jle 0x10522369 */
  if ((C.zf||C.sf!=C.of)) goto L_10522369;
  /* 10522337 mov esi, esp */
  ESI = (ESP);
  /* 10522339 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052233b push 0x1054f4d8 */
  push32((uint32_t)(0x1054f4d8u));
  /* 10522340 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x10522346u);
  /* 10522346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522349 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052234b call 0x10522900 */
  push32(0x10522350u); f_10522900();
  /* 10522350 mov esi, esp */
  ESI = (ESP);
  /* 10522352 push 0x1054f4c8 */
  push32((uint32_t)(0x1054f4c8u));
  /* 10522357 push 5 */
  push32((uint32_t)(0x5u));
  /* 10522359 call dword ptr [0x10552474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552474))), 0x1052235fu);
  /* 1052235f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522364 call 0x10522900 */
  push32(0x10522369u); f_10522900();
L_10522369:;
  /* 10522369 mov esi, esp */
  ESI = (ESP);
  /* 1052236b push 0xc */
  push32((uint32_t)(0xcu));
  /* 1052236d call dword ptr [0x10552428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552428))), 0x10522373u);
  /* 10522373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522376 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522378 call 0x10522900 */
  push32(0x1052237du); f_10522900();
  /* 1052237d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522384 jne 0x105223c9 */
  if (!C.zf) goto L_105223c9;
  /* 10522386 push 0x1054f4c0 */
  push32((uint32_t)(0x1054f4c0u));
  /* 1052238b call 0x10521005 */
  push32(0x10522390u); f_10521005();
  /* 10522390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522395 jle 0x105223c9 */
  if ((C.zf||C.sf!=C.of)) goto L_105223c9;
  /* 10522397 mov esi, esp */
  ESI = (ESP);
  /* 10522399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052239b push 0x1054f4c0 */
  push32((uint32_t)(0x1054f4c0u));
  /* 105223a0 call dword ptr [0x10552448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552448))), 0x105223a6u);
  /* 105223a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105223a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105223ab call 0x10522900 */
  push32(0x105223b0u); f_10522900();
  /* 105223b0 mov esi, esp */
  ESI = (ESP);
  /* 105223b2 push 0x1054f3f0 */
  push32((uint32_t)(0x1054f3f0u));
  /* 105223b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 105223b9 call dword ptr [0x10552474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552474))), 0x105223bfu);
  /* 105223bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105223c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105223c4 call 0x10522900 */
  push32(0x105223c9u); f_10522900();
L_105223c9:;
  /* 105223c9 pop edi */
  EDI = (pop32());
  /* 105223ca pop esi */
  ESI = (pop32());
  /* 105223cb pop ebx */
  EBX = (pop32());
  /* 105223cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105223cf cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105223d1 call 0x10522900 */
  push32(0x105223d6u); f_10522900();
  /* 105223d6 mov esp, ebp */
  ESP = (EBP);
  /* 105223d8 pop ebp */
  EBP = (pop32());
  /* 105223d9 ret  */
  ESPCHK(0x105215b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10522770 (63 bytes, 26 insns) */
void f_10522770(void) {
  FTRACE(0x10522770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522770 push ebp */
  push32((uint32_t)(EBP));
  /* 10522771 mov ebp, esp */
  EBP = (ESP);
  /* 10522773 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10522776 push ebx */
  push32((uint32_t)(EBX));
  /* 10522777 push esi */
  push32((uint32_t)(ESI));
  /* 10522778 push edi */
  push32((uint32_t)(EDI));
  /* 10522779 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1052277c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10522781 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10522786 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10522788 mov esi, esp */
  ESI = (ESP);
  /* 1052278a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052278d push eax */
  push32((uint32_t)(EAX));
  /* 1052278e call dword ptr [0x10552430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552430))), 0x10522794u);
  /* 10522794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522799 call 0x10522900 */
  push32(0x1052279eu); f_10522900();
  /* 1052279e pop edi */
  EDI = (pop32());
  /* 1052279f pop esi */
  ESI = (pop32());
  /* 105227a0 pop ebx */
  EBX = (pop32());
  /* 105227a1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105227a4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105227a6 call 0x10522900 */
  push32(0x105227abu); f_10522900();
  /* 105227ab mov esp, ebp */
  ESP = (EBP);
  /* 105227ad pop ebp */
  EBP = (pop32());
  /* 105227ae ret  */
  ESPCHK(0x10522770u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x105227c0 (67 bytes, 28 insns) */
void f_105227c0(void) {
  FTRACE(0x105227c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105227c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105227c1 mov ebp, esp */
  EBP = (ESP);
  /* 105227c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105227c6 push ebx */
  push32((uint32_t)(EBX));
  /* 105227c7 push esi */
  push32((uint32_t)(ESI));
  /* 105227c8 push edi */
  push32((uint32_t)(EDI));
  /* 105227c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 105227cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 105227d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 105227d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105227d8 mov esi, esp */
  ESI = (ESP);
  /* 105227da mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 105227dd push eax */
  push32((uint32_t)(EAX));
  /* 105227de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105227e1 push ecx */
  push32((uint32_t)(ECX));
  /* 105227e2 call dword ptr [0x1055242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055242c))), 0x105227e8u);
  /* 105227e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105227eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105227ed call 0x10522900 */
  push32(0x105227f2u); f_10522900();
  /* 105227f2 pop edi */
  EDI = (pop32());
  /* 105227f3 pop esi */
  ESI = (pop32());
  /* 105227f4 pop ebx */
  EBX = (pop32());
  /* 105227f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105227f8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105227fa call 0x10522900 */
  push32(0x105227ffu); f_10522900();
  /* 105227ff mov esp, ebp */
  ESP = (EBP);
  /* 10522801 pop ebp */
  EBP = (pop32());
  /* 10522802 ret  */
  ESPCHK(0x105227c0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10522900 (56 bytes, 28 insns) */
void f_10522900(void) {
  FTRACE(0x10522900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522900 jne 0x10522903 */
  if (!C.zf) goto L_10522903;
  /* 10522902 ret  */
  ESPCHK(0x10522900u, _esp0);
  ESP += 4; return;
L_10522903:;
  /* 10522903 push ebp */
  push32((uint32_t)(EBP));
  /* 10522904 mov ebp, esp */
  EBP = (ESP);
  /* 10522906 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10522909 push eax */
  push32((uint32_t)(EAX));
  /* 1052290a push edx */
  push32((uint32_t)(EDX));
  /* 1052290b push ebx */
  push32((uint32_t)(EBX));
  /* 1052290c push esi */
  push32((uint32_t)(ESI));
  /* 1052290d push edi */
  push32((uint32_t)(EDI));
  /* 1052290e push 0x1054a228 */
  push32((uint32_t)(0x1054a228u));
  /* 10522913 push 0x1054a224 */
  push32((uint32_t)(0x1054a224u));
  /* 10522918 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1052291a push 0x1054a214 */
  push32((uint32_t)(0x1054a214u));
  /* 1052291f push 1 */
  push32((uint32_t)(0x1u));
  /* 10522921 call 0x10522cd0 */
  push32(0x10522926u); f_10522cd0();
  /* 10522926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522929 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052292c jne 0x1052292f */
  if (!C.zf) goto L_1052292f;
  /* 1052292e int3  */
  x86_unimpl("int3 @ 0x1052292e");
L_1052292f:;
  /* 1052292f pop edi */
  EDI = (pop32());
  /* 10522930 pop esi */
  ESI = (pop32());
  /* 10522931 pop ebx */
  EBX = (pop32());
  /* 10522932 pop edx */
  EDX = (pop32());
  /* 10522933 pop eax */
  EAX = (pop32());
  /* 10522934 mov esp, ebp */
  ESP = (EBP);
  /* 10522936 pop ebp */
  EBP = (pop32());
  /* 10522937 ret  */
  ESPCHK(0x10522900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002940 @ 0x10522940 (313 bytes, 78 insns) */
void f_10522940(void) {
  FTRACE(0x10522940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522940 push ebp */
  push32((uint32_t)(EBP));
  /* 10522941 mov ebp, esp */
  EBP = (ESP);
  /* 10522943 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522947 jne 0x10522a07 */
  if (!C.zf) goto L_10522a07;
  /* 1052294d call dword ptr [0x10552344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552344))), 0x10522953u);
  /* 10522953 mov dword ptr [0x1054f534], eax */
  w32((uint32_t)(0x1054f534), (EAX));
  /* 10522958 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052295a call 0x10526400 */
  push32(0x1052295fu); f_10526400();
  /* 1052295f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522964 jne 0x1052296d */
  if (!C.zf) goto L_1052296d;
  /* 10522966 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522968 jmp 0x10522a75 */
  goto L_10522a75;
L_1052296d:;
  /* 1052296d mov eax, dword ptr [0x1054f534] */
  EAX = (r32((uint32_t)(0x1054f534)));
  /* 10522972 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10522975 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052297a mov dword ptr [0x1054f540], eax */
  w32((uint32_t)(0x1054f540), (EAX));
  /* 1052297f mov ecx, dword ptr [0x1054f534] */
  ECX = (r32((uint32_t)(0x1054f534)));
  /* 10522985 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1052298b mov dword ptr [0x1054f53c], ecx */
  w32((uint32_t)(0x1054f53c), (ECX));
  /* 10522991 mov edx, dword ptr [0x1054f53c] */
  EDX = (r32((uint32_t)(0x1054f53c)));
  /* 10522997 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1052299a add edx, dword ptr [0x1054f540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054f540))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105229a0 mov dword ptr [0x1054f538], edx */
  w32((uint32_t)(0x1054f538), (EDX));
  /* 105229a6 mov eax, dword ptr [0x1054f534] */
  EAX = (r32((uint32_t)(0x1054f534)));
  /* 105229ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105229ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105229b3 mov dword ptr [0x1054f534], eax */
  w32((uint32_t)(0x1054f534), (EAX));
  /* 105229b8 call 0x10523570 */
  push32(0x105229bdu); f_10523570();
  /* 105229bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105229bf jne 0x105229cd */
  if (!C.zf) goto L_105229cd;
  /* 105229c1 call 0x10526450 */
  push32(0x105229c6u); f_10526450();
  /* 105229c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105229c8 jmp 0x10522a75 */
  goto L_10522a75;
L_105229cd:;
  /* 105229cd call dword ptr [0x10552340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552340))), 0x105229d3u);
  /* 105229d3 mov dword ptr [0x1055106c], eax */
  w32((uint32_t)(0x1055106c), (EAX));
  /* 105229d8 call 0x105261e0 */
  push32(0x105229ddu); f_105261e0();
  /* 105229dd mov dword ptr [0x1054f51c], eax */
  w32((uint32_t)(0x1054f51c), (EAX));
  /* 105229e2 call 0x10523820 */
  push32(0x105229e7u); f_10523820();
  /* 105229e7 call 0x10525cd0 */
  push32(0x105229ecu); f_10525cd0();
  /* 105229ec call 0x10525b80 */
  push32(0x105229f1u); f_10525b80();
  /* 105229f1 call 0x10523370 */
  push32(0x105229f6u); f_10523370();
  /* 105229f6 mov ecx, dword ptr [0x1054f518] */
  ECX = (r32((uint32_t)(0x1054f518)));
  /* 105229fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105229ff mov dword ptr [0x1054f518], ecx */
  w32((uint32_t)(0x1054f518), (ECX));
  /* 10522a05 jmp 0x10522a70 */
  goto L_10522a70;
L_10522a07:;
  /* 10522a07 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522a0b jne 0x10522a60 */
  if (!C.zf) goto L_10522a60;
  /* 10522a0d cmp dword ptr [0x1054f518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522a14 jle 0x10522a5a */
  if ((C.zf||C.sf!=C.of)) goto L_10522a5a;
  /* 10522a16 mov edx, dword ptr [0x1054f518] */
  EDX = (r32((uint32_t)(0x1054f518)));
  /* 10522a1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10522a1f mov dword ptr [0x1054f518], edx */
  w32((uint32_t)(0x1054f518), (EDX));
  /* 10522a25 cmp dword ptr [0x1054f56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522a2c jne 0x10522a33 */
  if (!C.zf) goto L_10522a33;
  /* 10522a2e call 0x105233f0 */
  push32(0x10522a33u); f_105233f0();
L_10522a33:;
  /* 10522a33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10522a35 call 0x10525120 */
  push32(0x10522a3au); f_10525120();
  /* 10522a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522a3d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10522a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522a42 je 0x10522a49 */
  if (C.zf) goto L_10522a49;
  /* 10522a44 call 0x10525a30 */
  push32(0x10522a49u); f_10525a30();
L_10522a49:;
  /* 10522a49 call 0x10523b50 */
  push32(0x10522a4eu); f_10523b50();
  /* 10522a4e call 0x10523600 */
  push32(0x10522a53u); f_10523600();
  /* 10522a53 call 0x10526450 */
  push32(0x10522a58u); f_10526450();
  /* 10522a58 jmp 0x10522a5e */
  goto L_10522a5e;
L_10522a5a:;
  /* 10522a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522a5c jmp 0x10522a75 */
  goto L_10522a75;
L_10522a5e:;
  /* 10522a5e jmp 0x10522a70 */
  goto L_10522a70;
L_10522a60:;
  /* 10522a60 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522a64 jne 0x10522a70 */
  if (!C.zf) goto L_10522a70;
  /* 10522a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522a68 call 0x105236f0 */
  push32(0x10522a6du); f_105236f0();
  /* 10522a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522a70:;
  /* 10522a70 mov eax, 1 */
  EAX = (0x1u);
L_10522a75:;
  /* 10522a75 pop ebp */
  EBP = (pop32());
  /* 10522a76 ret 0xc */
  ESPCHK(0x10522940u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10522a80 (243 bytes, 86 insns) */
void f_10522a80(void) {
  FTRACE(0x10522a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10522a81 mov ebp, esp */
  EBP = (ESP);
  /* 10522a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10522a84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10522a8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522a8f jne 0x10522aa1 */
  if (!C.zf) goto L_10522aa1;
  /* 10522a91 cmp dword ptr [0x1054f518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522a98 jne 0x10522aa1 */
  if (!C.zf) goto L_10522aa1;
  /* 10522a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522a9c jmp 0x10522b6d */
  goto L_10522b6d;
L_10522aa1:;
  /* 10522aa1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522aa5 je 0x10522aad */
  if (C.zf) goto L_10522aad;
  /* 10522aa7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522aab jne 0x10522aef */
  if (!C.zf) goto L_10522aef;
L_10522aad:;
  /* 10522aad cmp dword ptr [0x1055107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1055107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522ab4 je 0x10522acb */
  if (C.zf) goto L_10522acb;
  /* 10522ab6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522ab9 push eax */
  push32((uint32_t)(EAX));
  /* 10522aba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522abd push ecx */
  push32((uint32_t)(ECX));
  /* 10522abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522ac1 push edx */
  push32((uint32_t)(EDX));
  /* 10522ac2 call dword ptr [0x1055107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055107c))), 0x10522ac8u);
  /* 10522ac8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10522acb:;
  /* 10522acb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522acf je 0x10522ae5 */
  if (C.zf) goto L_10522ae5;
  /* 10522ad1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522ad4 push eax */
  push32((uint32_t)(EAX));
  /* 10522ad5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 10522ad9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522adc push edx */
  push32((uint32_t)(EDX));
  /* 10522add call 0x10522940 */
  push32(0x10522ae2u); f_10522940();
  /* 10522ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10522ae5:;
  /* 10522ae5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522ae9 jne 0x10522aef */
  if (!C.zf) goto L_10522aef;
  /* 10522aeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522aed jmp 0x10522b6d */
  goto L_10522b6d;
L_10522aef:;
  /* 10522aef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522af2 push eax */
  push32((uint32_t)(EAX));
  /* 10522af3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522af6 push ecx */
  push32((uint32_t)(ECX));
  /* 10522af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522afa push edx */
  push32((uint32_t)(EDX));
  /* 10522afb call 0x10521014 */
  push32(0x10522b00u); f_10521014();
  /* 10522b00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10522b03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b07 jne 0x10522b1e */
  if (!C.zf) goto L_10522b1e;
  /* 10522b09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b0d jne 0x10522b1e */
  if (!C.zf) goto L_10522b1e;
  /* 10522b0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522b12 push eax */
  push32((uint32_t)(EAX));
  /* 10522b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10522b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522b18 push ecx */
  push32((uint32_t)(ECX));
  /* 10522b19 call 0x10522940 */
  push32(0x10522b1eu); f_10522940();
L_10522b1e:;
  /* 10522b1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b22 je 0x10522b2a */
  if (C.zf) goto L_10522b2a;
  /* 10522b24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b28 jne 0x10522b6a */
  if (!C.zf) goto L_10522b6a;
L_10522b2a:;
  /* 10522b2a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522b2d push edx */
  push32((uint32_t)(EDX));
  /* 10522b2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522b31 push eax */
  push32((uint32_t)(EAX));
  /* 10522b32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522b35 push ecx */
  push32((uint32_t)(ECX));
  /* 10522b36 call 0x10522940 */
  push32(0x10522b3bu); f_10522940();
  /* 10522b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522b3d jne 0x10522b46 */
  if (!C.zf) goto L_10522b46;
  /* 10522b3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10522b46:;
  /* 10522b46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b4a je 0x10522b6a */
  if (C.zf) goto L_10522b6a;
  /* 10522b4c cmp dword ptr [0x1055107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1055107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b53 je 0x10522b6a */
  if (C.zf) goto L_10522b6a;
  /* 10522b55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522b58 push edx */
  push32((uint32_t)(EDX));
  /* 10522b59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522b5c push eax */
  push32((uint32_t)(EAX));
  /* 10522b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522b60 push ecx */
  push32((uint32_t)(ECX));
  /* 10522b61 call dword ptr [0x1055107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055107c))), 0x10522b67u);
  /* 10522b67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10522b6a:;
  /* 10522b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10522b6d:;
  /* 10522b6d mov esp, ebp */
  ESP = (EBP);
  /* 10522b6f pop ebp */
  EBP = (pop32());
  /* 10522b70 ret 0xc */
  ESPCHK(0x10522a80u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10522b80 (58 bytes, 18 insns) */
void f_10522b80(void) {
  FTRACE(0x10522b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10522b81 mov ebp, esp */
  EBP = (ESP);
  /* 10522b83 cmp dword ptr [0x1054f524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b8a je 0x10522b9e */
  if (C.zf) goto L_10522b9e;
  /* 10522b8c cmp dword ptr [0x1054f524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b93 jne 0x10522ba3 */
  if (!C.zf) goto L_10522ba3;
  /* 10522b95 cmp dword ptr [0x1054f528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522b9c jne 0x10522ba3 */
  if (!C.zf) goto L_10522ba3;
L_10522b9e:;
  /* 10522b9e call 0x105264f0 */
  push32(0x10522ba3u); f_105264f0();
L_10522ba3:;
  /* 10522ba3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522ba6 push eax */
  push32((uint32_t)(EAX));
  /* 10522ba7 call 0x10526540 */
  push32(0x10522bacu); f_10526540();
  /* 10522bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522baf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10522bb4 call dword ptr [0x1054da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054da30))), 0x10522bbau);
  /* 10522bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522bbd pop ebp */
  EBP = (pop32());
  /* 10522bbe ret  */
  ESPCHK(0x10522b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc0 @ 0x10522bc0 (11 bytes, 5 insns) */
void f_10522bc0(void) {
  FTRACE(0x10522bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10522bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10522bc3 call dword ptr [0x10552348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552348))), 0x10522bc9u);
  /* 10522bc9 pop ebp */
  EBP = (pop32());
  /* 10522bca ret  */
  ESPCHK(0x10522bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bd0 @ 0x10522bd0 (87 bytes, 30 insns) */
void f_10522bd0(void) {
  FTRACE(0x10522bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10522bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10522bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10522bd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522bd8 jl 0x10522be0 */
  if ((C.sf!=C.of)) goto L_10522be0;
  /* 10522bda cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522bde jl 0x10522be5 */
  if ((C.sf!=C.of)) goto L_10522be5;
L_10522be0:;
  /* 10522be0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522be3 jmp 0x10522c23 */
  goto L_10522c23;
L_10522be5:;
  /* 10522be5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522be9 jne 0x10522bf7 */
  if (!C.zf) goto L_10522bf7;
  /* 10522beb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522bee mov eax, dword ptr [eax*4 + 0x1054da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1054da38)));
  /* 10522bf5 jmp 0x10522c23 */
  goto L_10522c23;
L_10522bf7:;
  /* 10522bf7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522bfa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10522bfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10522bff je 0x10522c06 */
  if (C.zf) goto L_10522c06;
  /* 10522c01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522c04 jmp 0x10522c23 */
  goto L_10522c23;
L_10522c06:;
  /* 10522c06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c09 mov eax, dword ptr [edx*4 + 0x1054da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1054da38)));
  /* 10522c10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10522c13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522c19 mov dword ptr [ecx*4 + 0x1054da38], edx */
  w32((uint32_t)(ECX*4 + 0x1054da38), (EDX));
  /* 10522c20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10522c23:;
  /* 10522c23 mov esp, ebp */
  ESP = (EBP);
  /* 10522c25 pop ebp */
  EBP = (pop32());
  /* 10522c26 ret  */
  ESPCHK(0x10522bd0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10522c30 (126 bytes, 38 insns) */
void f_10522c30(void) {
  FTRACE(0x10522c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10522c31 mov ebp, esp */
  EBP = (ESP);
  /* 10522c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10522c34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522c38 jl 0x10522c40 */
  if ((C.sf!=C.of)) goto L_10522c40;
  /* 10522c3a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522c3e jl 0x10522c47 */
  if ((C.sf!=C.of)) goto L_10522c47;
L_10522c40:;
  /* 10522c40 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10522c45 jmp 0x10522caa */
  goto L_10522caa;
L_10522c47:;
  /* 10522c47 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522c4b jne 0x10522c59 */
  if (!C.zf) goto L_10522c59;
  /* 10522c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c50 mov eax, dword ptr [eax*4 + 0x1054da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1054da44)));
  /* 10522c57 jmp 0x10522caa */
  goto L_10522caa;
L_10522c59:;
  /* 10522c59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c5c mov edx, dword ptr [ecx*4 + 0x1054da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da44)));
  /* 10522c63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10522c66 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522c6a jne 0x10522c80 */
  if (!C.zf) goto L_10522c80;
  /* 10522c6c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10522c6e call dword ptr [0x1055234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055234c))), 0x10522c74u);
  /* 10522c74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c77 mov dword ptr [ecx*4 + 0x1054da44], eax */
  w32((uint32_t)(ECX*4 + 0x1054da44), (EAX));
  /* 10522c7e jmp 0x10522ca7 */
  goto L_10522ca7;
L_10522c80:;
  /* 10522c80 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522c84 jne 0x10522c9a */
  if (!C.zf) goto L_10522c9a;
  /* 10522c86 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10522c88 call dword ptr [0x1055234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055234c))), 0x10522c8eu);
  /* 10522c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c91 mov dword ptr [edx*4 + 0x1054da44], eax */
  w32((uint32_t)(EDX*4 + 0x1054da44), (EAX));
  /* 10522c98 jmp 0x10522ca7 */
  goto L_10522ca7;
L_10522c9a:;
  /* 10522c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522c9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522ca0 mov dword ptr [eax*4 + 0x1054da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1054da44), (ECX));
L_10522ca7:;
  /* 10522ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10522caa:;
  /* 10522caa mov esp, ebp */
  ESP = (EBP);
  /* 10522cac pop ebp */
  EBP = (pop32());
  /* 10522cad ret  */
  ESPCHK(0x10522c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x10522cb0 (28 bytes, 11 insns) */
void f_10522cb0(void) {
  FTRACE(0x10522cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10522cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10522cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10522cb4 mov eax, dword ptr [0x10551060] */
  EAX = (r32((uint32_t)(0x10551060)));
  /* 10522cb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10522cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522cbf mov dword ptr [0x10551060], ecx */
  w32((uint32_t)(0x10551060), (ECX));
  /* 10522cc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10522cc8 mov esp, ebp */
  ESP = (EBP);
  /* 10522cca pop ebp */
  EBP = (pop32());
  /* 10522ccb ret  */
  ESPCHK(0x10522cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cd0 @ 0x10522cd0 (912 bytes, 248 insns) */
void f_10522cd0(void) {
  FTRACE(0x10522cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10522cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10522cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10522cd3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10522cd8 call 0x10526db0 */
  push32(0x10522cddu); f_10526db0();
  /* 10522cdd push edi */
  push32((uint32_t)(EDI));
  /* 10522cde mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10522ce5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10522cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522cec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10522cf2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10522cf4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10522cf6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10522cf7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10522cfe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10522d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522d05 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10522d0b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10522d0d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10522d0f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10522d10 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10522d17 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10522d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10522d1e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10522d24 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10522d26 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10522d28 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10522d29 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10522d2c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10522d32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522d36 jl 0x10522d3e */
  if ((C.sf!=C.of)) goto L_10522d3e;
  /* 10522d38 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522d3c jl 0x10522d46 */
  if ((C.sf!=C.of)) goto L_10522d46;
L_10522d3e:;
  /* 10522d3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522d41 jmp 0x1052305b */
  goto L_1052305b;
L_10522d46:;
  /* 10522d46 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522d4a jne 0x10522df0 */
  if (!C.zf) goto L_10522df0;
  /* 10522d50 push 0x1054da34 */
  push32((uint32_t)(0x1054da34u));
  /* 10522d55 call dword ptr [0x10552364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552364))), 0x10522d5bu);
  /* 10522d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522d5d jle 0x10522df0 */
  if ((C.zf||C.sf!=C.of)) goto L_10522df0;
  /* 10522d63 cmp dword ptr [0x1054f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522d6a jne 0x10522dae */
  if (!C.zf) goto L_10522dae;
  /* 10522d6c push 0x1054a3d0 */
  push32((uint32_t)(0x1054a3d0u));
  /* 10522d71 call dword ptr [0x10552360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552360))), 0x10522d77u);
  /* 10522d77 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10522d7d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522d84 je 0x10522da6 */
  if (C.zf) goto L_10522da6;
  /* 10522d86 push 0x1054a3c4 */
  push32((uint32_t)(0x1054a3c4u));
  /* 10522d8b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10522d91 push ecx */
  push32((uint32_t)(ECX));
  /* 10522d92 call dword ptr [0x1055235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055235c))), 0x10522d98u);
  /* 10522d98 mov dword ptr [0x1054f52c], eax */
  w32((uint32_t)(0x1054f52c), (EAX));
  /* 10522d9d cmp dword ptr [0x1054f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522da4 jne 0x10522dae */
  if (!C.zf) goto L_10522dae;
L_10522da6:;
  /* 10522da6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522da9 jmp 0x1052305b */
  goto L_1052305b;
L_10522dae:;
  /* 10522dae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522db1 push edx */
  push32((uint32_t)(EDX));
  /* 10522db2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522db5 push eax */
  push32((uint32_t)(EAX));
  /* 10522db6 push 0x1054a390 */
  push32((uint32_t)(0x1054a390u));
  /* 10522dbb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10522dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10522dc2 call dword ptr [0x1054f52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f52c))), 0x10522dc8u);
  /* 10522dc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522dcb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10522dd1 push edx */
  push32((uint32_t)(EDX));
  /* 10522dd2 call dword ptr [0x10552358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552358))), 0x10522dd8u);
  /* 10522dd8 push 0x1054da34 */
  push32((uint32_t)(0x1054da34u));
  /* 10522ddd call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x10522de3u);
  /* 10522de3 call 0x10522bc0 */
  push32(0x10522de8u); f_10522bc0();
  /* 10522de8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10522deb jmp 0x1052305b */
  goto L_1052305b;
L_10522df0:;
  /* 10522df0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522df4 je 0x10522e2d */
  if (C.zf) goto L_10522e2d;
  /* 10522df6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10522dfc push eax */
  push32((uint32_t)(EAX));
  /* 10522dfd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10522e00 push ecx */
  push32((uint32_t)(ECX));
  /* 10522e01 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10522e06 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10522e0c push edx */
  push32((uint32_t)(EDX));
  /* 10522e0d call 0x10526cb0 */
  push32(0x10522e12u); f_10526cb0();
  /* 10522e12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522e17 jge 0x10522e2d */
  if ((C.sf==C.of)) goto L_10522e2d;
  /* 10522e19 push 0x1054a364 */
  push32((uint32_t)(0x1054a364u));
  /* 10522e1e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10522e24 push eax */
  push32((uint32_t)(EAX));
  /* 10522e25 call 0x10526bc0 */
  push32(0x10522e2au); f_10526bc0();
  /* 10522e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522e2d:;
  /* 10522e2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522e31 jne 0x10522e65 */
  if (!C.zf) goto L_10522e65;
  /* 10522e33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522e37 je 0x10522e45 */
  if (C.zf) goto L_10522e45;
  /* 10522e39 mov dword ptr [ebp - 0x3028], 0x1054a350 */
  w32((uint32_t)(EBP + -0x3028), (0x1054a350u));
  /* 10522e43 jmp 0x10522e4f */
  goto L_10522e4f;
L_10522e45:;
  /* 10522e45 mov dword ptr [ebp - 0x3028], 0x1054a33c */
  w32((uint32_t)(EBP + -0x3028), (0x1054a33cu));
L_10522e4f:;
  /* 10522e4f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10522e55 push ecx */
  push32((uint32_t)(ECX));
  /* 10522e56 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10522e5c push edx */
  push32((uint32_t)(EDX));
  /* 10522e5d call 0x10526bc0 */
  push32(0x10522e62u); f_10526bc0();
  /* 10522e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522e65:;
  /* 10522e65 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10522e6b push eax */
  push32((uint32_t)(EAX));
  /* 10522e6c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10522e72 push ecx */
  push32((uint32_t)(ECX));
  /* 10522e73 call 0x10526bd0 */
  push32(0x10522e78u); f_10526bd0();
  /* 10522e78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522e7b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522e7f jne 0x10522eba */
  if (!C.zf) goto L_10522eba;
  /* 10522e81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522e84 mov eax, dword ptr [edx*4 + 0x1054da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1054da38)));
  /* 10522e8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10522e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522e90 je 0x10522ea6 */
  if (C.zf) goto L_10522ea6;
  /* 10522e92 push 0x1054a338 */
  push32((uint32_t)(0x1054a338u));
  /* 10522e97 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10522e9d push ecx */
  push32((uint32_t)(ECX));
  /* 10522e9e call 0x10526bd0 */
  push32(0x10522ea3u); f_10526bd0();
  /* 10522ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522ea6:;
  /* 10522ea6 push 0x1054a334 */
  push32((uint32_t)(0x1054a334u));
  /* 10522eab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10522eb1 push edx */
  push32((uint32_t)(EDX));
  /* 10522eb2 call 0x10526bd0 */
  push32(0x10522eb7u); f_10526bd0();
  /* 10522eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522eba:;
  /* 10522eba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522ebe je 0x10522f02 */
  if (C.zf) goto L_10522f02;
  /* 10522ec0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10522ec6 push eax */
  push32((uint32_t)(EAX));
  /* 10522ec7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522eca push ecx */
  push32((uint32_t)(ECX));
  /* 10522ecb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10522ece push edx */
  push32((uint32_t)(EDX));
  /* 10522ecf push 0x1054a328 */
  push32((uint32_t)(0x1054a328u));
  /* 10522ed4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10522ed9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10522edf push eax */
  push32((uint32_t)(EAX));
  /* 10522ee0 call 0x10526ac0 */
  push32(0x10522ee5u); f_10526ac0();
  /* 10522ee5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522eea jge 0x10522f00 */
  if ((C.sf==C.of)) goto L_10522f00;
  /* 10522eec push 0x1054a364 */
  push32((uint32_t)(0x1054a364u));
  /* 10522ef1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10522ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10522ef8 call 0x10526bc0 */
  push32(0x10522efdu); f_10526bc0();
  /* 10522efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522f00:;
  /* 10522f00 jmp 0x10522f18 */
  goto L_10522f18;
L_10522f02:;
  /* 10522f02 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10522f08 push edx */
  push32((uint32_t)(EDX));
  /* 10522f09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10522f0f push eax */
  push32((uint32_t)(EAX));
  /* 10522f10 call 0x10526bc0 */
  push32(0x10522f15u); f_10526bc0();
  /* 10522f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10522f18:;
  /* 10522f18 cmp dword ptr [0x10551060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10551060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522f1f je 0x10522f5c */
  if (C.zf) goto L_10522f5c;
  /* 10522f21 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10522f27 push ecx */
  push32((uint32_t)(ECX));
  /* 10522f28 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10522f2e push edx */
  push32((uint32_t)(EDX));
  /* 10522f2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522f32 push eax */
  push32((uint32_t)(EAX));
  /* 10522f33 call dword ptr [0x10551060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10551060))), 0x10522f39u);
  /* 10522f39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10522f3e je 0x10522f5c */
  if (C.zf) goto L_10522f5c;
  /* 10522f40 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522f44 jne 0x10522f51 */
  if (!C.zf) goto L_10522f51;
  /* 10522f46 push 0x1054da34 */
  push32((uint32_t)(0x1054da34u));
  /* 10522f4b call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x10522f51u);
L_10522f51:;
  /* 10522f51 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10522f57 jmp 0x1052305b */
  goto L_1052305b;
L_10522f5c:;
  /* 10522f5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522f5f mov edx, dword ptr [ecx*4 + 0x1054da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da38)));
  /* 10522f66 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10522f69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10522f6b je 0x10522fab */
  if (C.zf) goto L_10522fab;
  /* 10522f6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522f70 cmp dword ptr [eax*4 + 0x1054da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1054da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522f78 je 0x10522fab */
  if (C.zf) goto L_10522fab;
  /* 10522f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10522f7c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10522f82 push ecx */
  push32((uint32_t)(ECX));
  /* 10522f83 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10522f89 push edx */
  push32((uint32_t)(EDX));
  /* 10522f8a call 0x10526a40 */
  push32(0x10522f8fu); f_10526a40();
  /* 10522f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522f92 push eax */
  push32((uint32_t)(EAX));
  /* 10522f93 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10522f99 push eax */
  push32((uint32_t)(EAX));
  /* 10522f9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522f9d mov edx, dword ptr [ecx*4 + 0x1054da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da44)));
  /* 10522fa4 push edx */
  push32((uint32_t)(EDX));
  /* 10522fa5 call dword ptr [0x10552350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552350))), 0x10522fabu);
L_10522fab:;
  /* 10522fab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522fae mov ecx, dword ptr [eax*4 + 0x1054da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054da38)));
  /* 10522fb5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10522fb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10522fba je 0x10522fc9 */
  if (C.zf) goto L_10522fc9;
  /* 10522fbc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10522fc2 push edx */
  push32((uint32_t)(EDX));
  /* 10522fc3 call dword ptr [0x10552358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552358))), 0x10522fc9u);
L_10522fc9:;
  /* 10522fc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10522fcc mov ecx, dword ptr [eax*4 + 0x1054da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054da38)));
  /* 10522fd3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10522fd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10522fd8 je 0x10523048 */
  if (C.zf) goto L_10523048;
  /* 10522fda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10522fde je 0x10522ffd */
  if (C.zf) goto L_10522ffd;
  /* 10522fe0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10522fe2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10522fe8 push edx */
  push32((uint32_t)(EDX));
  /* 10522fe9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10522fec push eax */
  push32((uint32_t)(EAX));
  /* 10522fed call 0x10526750 */
  push32(0x10522ff2u); f_10526750();
  /* 10522ff2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10522ff5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10522ffb jmp 0x10523007 */
  goto L_10523007;
L_10522ffd:;
  /* 10522ffd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10523007:;
  /* 10523007 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1052300d push ecx */
  push32((uint32_t)(ECX));
  /* 1052300e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523011 push edx */
  push32((uint32_t)(EDX));
  /* 10523012 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10523018 push eax */
  push32((uint32_t)(EAX));
  /* 10523019 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052301c push ecx */
  push32((uint32_t)(ECX));
  /* 1052301d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523020 push edx */
  push32((uint32_t)(EDX));
  /* 10523021 call 0x10523060 */
  push32(0x10523026u); f_10523060();
  /* 10523026 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523029 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1052302f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523033 jne 0x10523040 */
  if (!C.zf) goto L_10523040;
  /* 10523035 push 0x1054da34 */
  push32((uint32_t)(0x1054da34u));
  /* 1052303a call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x10523040u);
L_10523040:;
  /* 10523040 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10523046 jmp 0x1052305b */
  goto L_1052305b;
L_10523048:;
  /* 10523048 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052304c jne 0x10523059 */
  if (!C.zf) goto L_10523059;
  /* 1052304e push 0x1054da34 */
  push32((uint32_t)(0x1054da34u));
  /* 10523053 call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x10523059u);
L_10523059:;
  /* 10523059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052305b:;
  /* 1052305b pop edi */
  EDI = (pop32());
  /* 1052305c mov esp, ebp */
  ESP = (EBP);
  /* 1052305e pop ebp */
  EBP = (pop32());
  /* 1052305f ret  */
  ESPCHK(0x10522cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003060 @ 0x10523060 (780 bytes, 197 insns) */
void f_10523060(void) {
  FTRACE(0x10523060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523060 push ebp */
  push32((uint32_t)(EBP));
  /* 10523061 mov ebp, esp */
  EBP = (ESP);
  /* 10523063 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10523068 call 0x10526db0 */
  push32(0x1052306du); f_10526db0();
L_1052306d:;
  /* 1052306d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523071 jne 0x10523098 */
  if (!C.zf) goto L_10523098;
  /* 10523073 push 0x1054a520 */
  push32((uint32_t)(0x1054a520u));
  /* 10523078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052307a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1052307f push 0x1054a514 */
  push32((uint32_t)(0x1054a514u));
  /* 10523084 push 2 */
  push32((uint32_t)(0x2u));
  /* 10523086 call 0x10522cd0 */
  push32(0x1052308bu); f_10522cd0();
  /* 1052308b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052308e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523091 jne 0x10523098 */
  if (!C.zf) goto L_10523098;
  /* 10523093 call 0x10522bc0 */
  push32(0x10523098u); f_10522bc0();
L_10523098:;
  /* 10523098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052309a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052309c jne 0x1052306d */
  if (!C.zf) goto L_1052306d;
  /* 1052309e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 105230a3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 105230a9 push ecx */
  push32((uint32_t)(ECX));
  /* 105230aa push 0 */
  push32((uint32_t)(0x0u));
  /* 105230ac call dword ptr [0x10552368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552368))), 0x105230b2u);
  /* 105230b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105230b4 jne 0x105230ca */
  if (!C.zf) goto L_105230ca;
  /* 105230b6 push 0x1054a4fc */
  push32((uint32_t)(0x1054a4fcu));
  /* 105230bb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 105230c1 push edx */
  push32((uint32_t)(EDX));
  /* 105230c2 call 0x10526bc0 */
  push32(0x105230c7u); f_10526bc0();
  /* 105230c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105230ca:;
  /* 105230ca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 105230d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105230d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105230d6 push ecx */
  push32((uint32_t)(ECX));
  /* 105230d7 call 0x10526a40 */
  push32(0x105230dcu); f_10526a40();
  /* 105230dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105230df cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105230e2 jbe 0x1052310d */
  if ((C.cf||C.zf)) goto L_1052310d;
  /* 105230e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105230e7 push edx */
  push32((uint32_t)(EDX));
  /* 105230e8 call 0x10526a40 */
  push32(0x105230edu); f_10526a40();
  /* 105230ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105230f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105230f3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 105230f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105230fa push 3 */
  push32((uint32_t)(0x3u));
  /* 105230fc push 0x1054a4f8 */
  push32((uint32_t)(0x1054a4f8u));
  /* 10523101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523104 push eax */
  push32((uint32_t)(EAX));
  /* 10523105 call 0x10527430 */
  push32(0x1052310au); f_10527430();
  /* 1052310a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052310d:;
  /* 1052310d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523110 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10523116 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052311d je 0x10523168 */
  if (C.zf) goto L_10523168;
  /* 1052311f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10523125 push edx */
  push32((uint32_t)(EDX));
  /* 10523126 call 0x10526a40 */
  push32(0x1052312bu); f_10526a40();
  /* 1052312b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052312e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523131 jbe 0x10523168 */
  if ((C.cf||C.zf)) goto L_10523168;
  /* 10523133 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10523139 push eax */
  push32((uint32_t)(EAX));
  /* 1052313a call 0x10526a40 */
  push32(0x1052313fu); f_10526a40();
  /* 1052313f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523142 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10523148 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1052314c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10523152 push 3 */
  push32((uint32_t)(0x3u));
  /* 10523154 push 0x1054a4f8 */
  push32((uint32_t)(0x1054a4f8u));
  /* 10523159 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1052315f push eax */
  push32((uint32_t)(EAX));
  /* 10523160 call 0x10527430 */
  push32(0x10523165u); f_10527430();
  /* 10523165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10523168:;
  /* 10523168 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052316c jne 0x1052317a */
  if (!C.zf) goto L_1052317a;
  /* 1052316e mov dword ptr [ebp - 0x1114], 0x1054a484 */
  w32((uint32_t)(EBP + -0x1114), (0x1054a484u));
  /* 10523178 jmp 0x10523184 */
  goto L_10523184;
L_1052317a:;
  /* 1052317a mov dword ptr [ebp - 0x1114], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1114), (0x1054a224u));
L_10523184:;
  /* 10523184 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10523187 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052318a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052318c je 0x10523199 */
  if (C.zf) goto L_10523199;
  /* 1052318e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10523191 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10523197 jmp 0x105231a3 */
  goto L_105231a3;
L_10523199:;
  /* 10523199 mov dword ptr [ebp - 0x1118], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1118), (0x1054a224u));
L_105231a3:;
  /* 105231a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105231a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105231a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105231ab je 0x105231bf */
  if (C.zf) goto L_105231bf;
  /* 105231ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105231b1 jne 0x105231bf */
  if (!C.zf) goto L_105231bf;
  /* 105231b3 mov dword ptr [ebp - 0x111c], 0x1054a474 */
  w32((uint32_t)(EBP + -0x111c), (0x1054a474u));
  /* 105231bd jmp 0x105231c9 */
  goto L_105231c9;
L_105231bf:;
  /* 105231bf mov dword ptr [ebp - 0x111c], 0x1054a224 */
  w32((uint32_t)(EBP + -0x111c), (0x1054a224u));
L_105231c9:;
  /* 105231c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105231cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105231cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105231d1 je 0x105231df */
  if (C.zf) goto L_105231df;
  /* 105231d3 mov dword ptr [ebp - 0x1120], 0x1054a470 */
  w32((uint32_t)(EBP + -0x1120), (0x1054a470u));
  /* 105231dd jmp 0x105231e9 */
  goto L_105231e9;
L_105231df:;
  /* 105231df mov dword ptr [ebp - 0x1120], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1120), (0x1054a224u));
L_105231e9:;
  /* 105231e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105231ed je 0x105231fa */
  if (C.zf) goto L_105231fa;
  /* 105231ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105231f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 105231f8 jmp 0x10523204 */
  goto L_10523204;
L_105231fa:;
  /* 105231fa mov dword ptr [ebp - 0x1124], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1124), (0x1054a224u));
L_10523204:;
  /* 10523204 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523208 je 0x10523216 */
  if (C.zf) goto L_10523216;
  /* 1052320a mov dword ptr [ebp - 0x1128], 0x1054a468 */
  w32((uint32_t)(EBP + -0x1128), (0x1054a468u));
  /* 10523214 jmp 0x10523220 */
  goto L_10523220;
L_10523216:;
  /* 10523216 mov dword ptr [ebp - 0x1128], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1128), (0x1054a224u));
L_10523220:;
  /* 10523220 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523224 je 0x10523231 */
  if (C.zf) goto L_10523231;
  /* 10523226 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523229 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1052322f jmp 0x1052323b */
  goto L_1052323b;
L_10523231:;
  /* 10523231 mov dword ptr [ebp - 0x112c], 0x1054a224 */
  w32((uint32_t)(EBP + -0x112c), (0x1054a224u));
L_1052323b:;
  /* 1052323b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052323f je 0x1052324d */
  if (C.zf) goto L_1052324d;
  /* 10523241 mov dword ptr [ebp - 0x1130], 0x1054a460 */
  w32((uint32_t)(EBP + -0x1130), (0x1054a460u));
  /* 1052324b jmp 0x10523257 */
  goto L_10523257;
L_1052324d:;
  /* 1052324d mov dword ptr [ebp - 0x1130], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1130), (0x1054a224u));
L_10523257:;
  /* 10523257 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052325e je 0x1052326e */
  if (C.zf) goto L_1052326e;
  /* 10523260 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10523266 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1052326c jmp 0x10523278 */
  goto L_10523278;
L_1052326e:;
  /* 1052326e mov dword ptr [ebp - 0x1134], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1134), (0x1054a224u));
L_10523278:;
  /* 10523278 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052327f je 0x1052328d */
  if (C.zf) goto L_1052328d;
  /* 10523281 mov dword ptr [ebp - 0x1138], 0x1054a454 */
  w32((uint32_t)(EBP + -0x1138), (0x1054a454u));
  /* 1052328b jmp 0x10523297 */
  goto L_10523297;
L_1052328d:;
  /* 1052328d mov dword ptr [ebp - 0x1138], 0x1054a224 */
  w32((uint32_t)(EBP + -0x1138), (0x1054a224u));
L_10523297:;
  /* 10523297 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1052329d push edx */
  push32((uint32_t)(EDX));
  /* 1052329e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 105232a4 push eax */
  push32((uint32_t)(EAX));
  /* 105232a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 105232ab push ecx */
  push32((uint32_t)(ECX));
  /* 105232ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 105232b2 push edx */
  push32((uint32_t)(EDX));
  /* 105232b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 105232b9 push eax */
  push32((uint32_t)(EAX));
  /* 105232ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 105232c0 push ecx */
  push32((uint32_t)(ECX));
  /* 105232c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 105232c7 push edx */
  push32((uint32_t)(EDX));
  /* 105232c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 105232ce push eax */
  push32((uint32_t)(EAX));
  /* 105232cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 105232d5 push ecx */
  push32((uint32_t)(ECX));
  /* 105232d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 105232dc push edx */
  push32((uint32_t)(EDX));
  /* 105232dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105232e0 push eax */
  push32((uint32_t)(EAX));
  /* 105232e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105232e4 mov edx, dword ptr [ecx*4 + 0x1054da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da50)));
  /* 105232eb push edx */
  push32((uint32_t)(EDX));
  /* 105232ec push 0x1054a400 */
  push32((uint32_t)(0x1054a400u));
  /* 105232f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105232f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 105232fc push eax */
  push32((uint32_t)(EAX));
  /* 105232fd call 0x10526ac0 */
  push32(0x10523302u); f_10526ac0();
  /* 10523302 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523307 jge 0x1052331d */
  if ((C.sf==C.of)) goto L_1052331d;
  /* 10523309 push 0x1054a364 */
  push32((uint32_t)(0x1054a364u));
  /* 1052330e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10523314 push ecx */
  push32((uint32_t)(ECX));
  /* 10523315 call 0x10526bc0 */
  push32(0x1052331au); f_10526bc0();
  /* 1052331a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052331d:;
  /* 1052331d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10523322 push 0x1054a3dc */
  push32((uint32_t)(0x1054a3dcu));
  /* 10523327 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1052332d push edx */
  push32((uint32_t)(EDX));
  /* 1052332e call 0x10527370 */
  push32(0x10523333u); f_10527370();
  /* 10523333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523336 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1052333c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523343 jne 0x10523356 */
  if (!C.zf) goto L_10523356;
  /* 10523345 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10523347 call 0x105270b0 */
  push32(0x1052334cu); f_105270b0();
  /* 1052334c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052334f push 3 */
  push32((uint32_t)(0x3u));
  /* 10523351 call 0x105233d0 */
  push32(0x10523356u); f_105233d0();
L_10523356:;
  /* 10523356 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052335d jne 0x10523366 */
  if (!C.zf) goto L_10523366;
  /* 1052335f mov eax, 1 */
  EAX = (0x1u);
  /* 10523364 jmp 0x10523368 */
  goto L_10523368;
L_10523366:;
  /* 10523366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10523368:;
  /* 10523368 mov esp, ebp */
  ESP = (EBP);
  /* 1052336a pop ebp */
  EBP = (pop32());
  /* 1052336b ret  */
  ESPCHK(0x10523060u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x10523370 (56 bytes, 15 insns) */
void f_10523370(void) {
  FTRACE(0x10523370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523370 push ebp */
  push32((uint32_t)(EBP));
  /* 10523371 mov ebp, esp */
  EBP = (ESP);
  /* 10523373 cmp dword ptr [0x1055105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1055105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052337a je 0x10523382 */
  if (C.zf) goto L_10523382;
  /* 1052337c call dword ptr [0x1055105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055105c))), 0x10523382u);
L_10523382:;
  /* 10523382 push 0x1054d418 */
  push32((uint32_t)(0x1054d418u));
  /* 10523387 push 0x1054d208 */
  push32((uint32_t)(0x1054d208u));
  /* 1052338c call 0x10523540 */
  push32(0x10523391u); f_10523540();
  /* 10523391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523394 push 0x1054d104 */
  push32((uint32_t)(0x1054d104u));
  /* 10523399 push 0x1054d000 */
  push32((uint32_t)(0x1054d000u));
  /* 1052339e call 0x10523540 */
  push32(0x105233a3u); f_10523540();
  /* 105233a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105233a6 pop ebp */
  EBP = (pop32());
  /* 105233a7 ret  */
  ESPCHK(0x10523370u, _esp0);
  ESP += 4; return;
}

/* FUN_100033b0 @ 0x105233b0 (21 bytes, 10 insns) */
void f_105233b0(void) {
  FTRACE(0x105233b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105233b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105233b1 mov ebp, esp */
  EBP = (ESP);
  /* 105233b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105233b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105233b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105233ba push eax */
  push32((uint32_t)(EAX));
  /* 105233bb call 0x10523430 */
  push32(0x105233c0u); f_10523430();
  /* 105233c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105233c3 pop ebp */
  EBP = (pop32());
  /* 105233c4 ret  */
  ESPCHK(0x105233b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x105233d0 (21 bytes, 10 insns) */
void f_105233d0(void) {
  FTRACE(0x105233d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105233d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105233d1 mov ebp, esp */
  EBP = (ESP);
  /* 105233d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105233d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105233d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105233da push eax */
  push32((uint32_t)(EAX));
  /* 105233db call 0x10523430 */
  push32(0x105233e0u); f_10523430();
  /* 105233e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105233e3 pop ebp */
  EBP = (pop32());
  /* 105233e4 ret  */
  ESPCHK(0x105233d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033f0 @ 0x105233f0 (19 bytes, 9 insns) */
void f_105233f0(void) {
  FTRACE(0x105233f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105233f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105233f1 mov ebp, esp */
  EBP = (ESP);
  /* 105233f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105233f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105233f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105233f9 call 0x10523430 */
  push32(0x105233feu); f_10523430();
  /* 105233fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523401 pop ebp */
  EBP = (pop32());
  /* 10523402 ret  */
  ESPCHK(0x105233f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003410 @ 0x10523410 (19 bytes, 9 insns) */
void f_10523410(void) {
  FTRACE(0x10523410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523410 push ebp */
  push32((uint32_t)(EBP));
  /* 10523411 mov ebp, esp */
  EBP = (ESP);
  /* 10523413 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523415 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523417 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523419 call 0x10523430 */
  push32(0x1052341eu); f_10523430();
  /* 1052341e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523421 pop ebp */
  EBP = (pop32());
  /* 10523422 ret  */
  ESPCHK(0x10523410u, _esp0);
  ESP += 4; return;
}

/* FUN_10003430 @ 0x10523430 (227 bytes, 61 insns) */
void f_10523430(void) {
  FTRACE(0x10523430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523430 push ebp */
  push32((uint32_t)(EBP));
  /* 10523431 mov ebp, esp */
  EBP = (ESP);
  /* 10523433 push ecx */
  push32((uint32_t)(ECX));
  /* 10523434 call 0x10523520 */
  push32(0x10523439u); f_10523520();
  /* 10523439 cmp dword ptr [0x1054f570], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f570))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523440 jne 0x10523453 */
  if (!C.zf) goto L_10523453;
  /* 10523442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523445 push eax */
  push32((uint32_t)(EAX));
  /* 10523446 call dword ptr [0x10552374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552374))), 0x1052344cu);
  /* 1052344c push eax */
  push32((uint32_t)(EAX));
  /* 1052344d call dword ptr [0x10552370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552370))), 0x10523453u);
L_10523453:;
  /* 10523453 mov dword ptr [0x1054f56c], 1 */
  w32((uint32_t)(0x1054f56c), (0x1u));
  /* 1052345d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10523460 mov byte ptr [0x1054f568], cl */
  w8((uint32_t)(0x1054f568), (CL));
  /* 10523466 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052346a jne 0x105234b3 */
  if (!C.zf) goto L_105234b3;
  /* 1052346c cmp dword ptr [0x10551058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10551058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523473 je 0x105234a1 */
  if (C.zf) goto L_105234a1;
  /* 10523475 mov edx, dword ptr [0x10551054] */
  EDX = (r32((uint32_t)(0x10551054)));
  /* 1052347b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052347e:;
  /* 1052347e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523481 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523484 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10523487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052348a cmp ecx, dword ptr [0x10551058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10551058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523490 jb 0x105234a1 */
  if (C.cf) goto L_105234a1;
  /* 10523492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523495 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523498 je 0x1052349f */
  if (C.zf) goto L_1052349f;
  /* 1052349a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052349d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1052349fu);
L_1052349f:;
  /* 1052349f jmp 0x1052347e */
  goto L_1052347e;
L_105234a1:;
  /* 105234a1 push 0x1054d724 */
  push32((uint32_t)(0x1054d724u));
  /* 105234a6 push 0x1054d51c */
  push32((uint32_t)(0x1054d51cu));
  /* 105234ab call 0x10523540 */
  push32(0x105234b0u); f_10523540();
  /* 105234b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105234b3:;
  /* 105234b3 push 0x1054d92c */
  push32((uint32_t)(0x1054d92cu));
  /* 105234b8 push 0x1054d828 */
  push32((uint32_t)(0x1054d828u));
  /* 105234bd call 0x10523540 */
  push32(0x105234c2u); f_10523540();
  /* 105234c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105234c5 cmp dword ptr [0x1054f574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105234cc jne 0x105234ee */
  if (!C.zf) goto L_105234ee;
  /* 105234ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105234d0 call 0x10525120 */
  push32(0x105234d5u); f_10525120();
  /* 105234d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105234d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 105234db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105234dd je 0x105234ee */
  if (C.zf) goto L_105234ee;
  /* 105234df mov dword ptr [0x1054f574], 1 */
  w32((uint32_t)(0x1054f574), (0x1u));
  /* 105234e9 call 0x10525a30 */
  push32(0x105234eeu); f_10525a30();
L_105234ee:;
  /* 105234ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105234f2 je 0x105234fb */
  if (C.zf) goto L_105234fb;
  /* 105234f4 call 0x10523530 */
  push32(0x105234f9u); f_10523530();
  /* 105234f9 jmp 0x1052350f */
  goto L_1052350f;
L_105234fb:;
  /* 105234fb mov dword ptr [0x1054f570], 1 */
  w32((uint32_t)(0x1054f570), (0x1u));
  /* 10523505 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523508 push ecx */
  push32((uint32_t)(ECX));
  /* 10523509 call dword ptr [0x1055236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055236c))), 0x1052350fu);
L_1052350f:;
  /* 1052350f mov esp, ebp */
  ESP = (EBP);
  /* 10523511 pop ebp */
  EBP = (pop32());
  /* 10523512 ret  */
  ESPCHK(0x10523430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x10523520 (15 bytes, 7 insns) */
void f_10523520(void) {
  FTRACE(0x10523520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523520 push ebp */
  push32((uint32_t)(EBP));
  /* 10523521 mov ebp, esp */
  EBP = (ESP);
  /* 10523523 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10523525 call 0x10527610 */
  push32(0x1052352au); f_10527610();
  /* 1052352a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052352d pop ebp */
  EBP = (pop32());
  /* 1052352e ret  */
  ESPCHK(0x10523520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x10523530 (15 bytes, 7 insns) */
void f_10523530(void) {
  FTRACE(0x10523530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523530 push ebp */
  push32((uint32_t)(EBP));
  /* 10523531 mov ebp, esp */
  EBP = (ESP);
  /* 10523533 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10523535 call 0x105276b0 */
  push32(0x1052353au); f_105276b0();
  /* 1052353a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052353d pop ebp */
  EBP = (pop32());
  /* 1052353e ret  */
  ESPCHK(0x10523530u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10523540 (37 bytes, 16 insns) */
void f_10523540(void) {
  FTRACE(0x10523540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523540 push ebp */
  push32((uint32_t)(EBP));
  /* 10523541 mov ebp, esp */
  EBP = (ESP);
L_10523543:;
  /* 10523543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523546 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523549 jae 0x10523563 */
  if (!C.cf) goto L_10523563;
  /* 1052354b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052354e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523551 je 0x10523558 */
  if (C.zf) goto L_10523558;
  /* 10523553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523556 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10523558u);
L_10523558:;
  /* 10523558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052355b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052355e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10523561 jmp 0x10523543 */
  goto L_10523543;
L_10523563:;
  /* 10523563 pop ebp */
  EBP = (pop32());
  /* 10523564 ret  */
  ESPCHK(0x10523540u, _esp0);
  ESP += 4; return;
}

/* FUN_10003570 @ 0x10523570 (130 bytes, 42 insns) */
void f_10523570(void) {
  FTRACE(0x10523570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523570 push ebp */
  push32((uint32_t)(EBP));
  /* 10523571 mov ebp, esp */
  EBP = (ESP);
  /* 10523573 push ecx */
  push32((uint32_t)(ECX));
  /* 10523574 call 0x10527530 */
  push32(0x10523579u); f_10527530();
  /* 10523579 call dword ptr [0x105522a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522a4))), 0x1052357fu);
  /* 1052357f mov dword ptr [0x1054da5c], eax */
  w32((uint32_t)(0x1054da5c), (EAX));
  /* 10523584 cmp dword ptr [0x1054da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1054da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052358b jne 0x10523591 */
  if (!C.zf) goto L_10523591;
  /* 1052358d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052358f jmp 0x105235ee */
  goto L_105235ee;
L_10523591:;
  /* 10523591 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10523593 push 0x1054a538 */
  push32((uint32_t)(0x1054a538u));
  /* 10523598 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052359a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1052359c push 1 */
  push32((uint32_t)(0x1u));
  /* 1052359e call 0x10524020 */
  push32(0x105235a3u); f_10524020();
  /* 105235a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105235a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105235a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105235ad je 0x105235c4 */
  if (C.zf) goto L_105235c4;
  /* 105235af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105235b2 push eax */
  push32((uint32_t)(EAX));
  /* 105235b3 mov ecx, dword ptr [0x1054da5c] */
  ECX = (r32((uint32_t)(0x1054da5c)));
  /* 105235b9 push ecx */
  push32((uint32_t)(ECX));
  /* 105235ba call dword ptr [0x1055237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055237c))), 0x105235c0u);
  /* 105235c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105235c2 jne 0x105235c8 */
  if (!C.zf) goto L_105235c8;
L_105235c4:;
  /* 105235c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105235c6 jmp 0x105235ee */
  goto L_105235ee;
L_105235c8:;
  /* 105235c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105235cb push edx */
  push32((uint32_t)(EDX));
  /* 105235cc call 0x10523630 */
  push32(0x105235d1u); f_10523630();
  /* 105235d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105235d4 call dword ptr [0x10552378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552378))), 0x105235dau);
  /* 105235da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105235dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105235df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105235e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 105235e9 mov eax, 1 */
  EAX = (0x1u);
L_105235ee:;
  /* 105235ee mov esp, ebp */
  ESP = (EBP);
  /* 105235f0 pop ebp */
  EBP = (pop32());
  /* 105235f1 ret  */
  ESPCHK(0x10523570u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x10523600 (41 bytes, 11 insns) */
void f_10523600(void) {
  FTRACE(0x10523600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523600 push ebp */
  push32((uint32_t)(EBP));
  /* 10523601 mov ebp, esp */
  EBP = (ESP);
  /* 10523603 call 0x10527570 */
  push32(0x10523608u); f_10527570();
  /* 10523608 cmp dword ptr [0x1054da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1054da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052360f je 0x10523627 */
  if (C.zf) goto L_10523627;
  /* 10523611 mov eax, dword ptr [0x1054da5c] */
  EAX = (r32((uint32_t)(0x1054da5c)));
  /* 10523616 push eax */
  push32((uint32_t)(EAX));
  /* 10523617 call dword ptr [0x105522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522a8))), 0x1052361du);
  /* 1052361d mov dword ptr [0x1054da5c], 0xffffffff */
  w32((uint32_t)(0x1054da5c), (0xffffffffu));
L_10523627:;
  /* 10523627 pop ebp */
  EBP = (pop32());
  /* 10523628 ret  */
  ESPCHK(0x10523600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003630 @ 0x10523630 (25 bytes, 8 insns) */
void f_10523630(void) {
  FTRACE(0x10523630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523630 push ebp */
  push32((uint32_t)(EBP));
  /* 10523631 mov ebp, esp */
  EBP = (ESP);
  /* 10523633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523636 mov dword ptr [eax + 0x50], 0x1054dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1054dc00u));
  /* 1052363d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523640 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10523647 pop ebp */
  EBP = (pop32());
  /* 10523648 ret  */
  ESPCHK(0x10523630u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x10523650 (152 bytes, 48 insns) */
void f_10523650(void) {
  FTRACE(0x10523650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523650 push ebp */
  push32((uint32_t)(EBP));
  /* 10523651 mov ebp, esp */
  EBP = (ESP);
  /* 10523653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523656 call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x1052365cu);
  /* 1052365c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052365f mov eax, dword ptr [0x1054da5c] */
  EAX = (r32((uint32_t)(0x1054da5c)));
  /* 10523664 push eax */
  push32((uint32_t)(EAX));
  /* 10523665 call dword ptr [0x1055238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055238c))), 0x1052366bu);
  /* 1052366b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052366e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523672 jne 0x105236d7 */
  if (!C.zf) goto L_105236d7;
  /* 10523674 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10523679 push 0x1054a538 */
  push32((uint32_t)(0x1054a538u));
  /* 1052367e push 2 */
  push32((uint32_t)(0x2u));
  /* 10523680 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10523682 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523684 call 0x10524020 */
  push32(0x10523689u); f_10524020();
  /* 10523689 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052368c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052368f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523693 je 0x105236cd */
  if (C.zf) goto L_105236cd;
  /* 10523695 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523698 push ecx */
  push32((uint32_t)(ECX));
  /* 10523699 mov edx, dword ptr [0x1054da5c] */
  EDX = (r32((uint32_t)(0x1054da5c)));
  /* 1052369f push edx */
  push32((uint32_t)(EDX));
  /* 105236a0 call dword ptr [0x1055237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055237c))), 0x105236a6u);
  /* 105236a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105236a8 je 0x105236cd */
  if (C.zf) goto L_105236cd;
  /* 105236aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105236ad push eax */
  push32((uint32_t)(EAX));
  /* 105236ae call 0x10523630 */
  push32(0x105236b3u); f_10523630();
  /* 105236b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105236b6 call dword ptr [0x10552378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552378))), 0x105236bcu);
  /* 105236bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105236bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105236c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105236c4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 105236cb jmp 0x105236d7 */
  goto L_105236d7;
L_105236cd:;
  /* 105236cd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105236cf call 0x10522b80 */
  push32(0x105236d4u); f_10522b80();
  /* 105236d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105236d7:;
  /* 105236d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105236da push eax */
  push32((uint32_t)(EAX));
  /* 105236db call dword ptr [0x10552388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552388))), 0x105236e1u);
  /* 105236e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105236e4 mov esp, ebp */
  ESP = (EBP);
  /* 105236e6 pop ebp */
  EBP = (pop32());
  /* 105236e7 ret  */
  ESPCHK(0x10523650u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f0 @ 0x105236f0 (263 bytes, 86 insns) */
void f_105236f0(void) {
  FTRACE(0x105236f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105236f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105236f1 mov ebp, esp */
  EBP = (ESP);
  /* 105236f3 cmp dword ptr [0x1054da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1054da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105236fa je 0x105237f5 */
  if (C.zf) goto L_105237f5;
  /* 10523700 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523704 jne 0x10523715 */
  if (!C.zf) goto L_10523715;
  /* 10523706 mov eax, dword ptr [0x1054da5c] */
  EAX = (r32((uint32_t)(0x1054da5c)));
  /* 1052370b push eax */
  push32((uint32_t)(EAX));
  /* 1052370c call dword ptr [0x1055238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055238c))), 0x10523712u);
  /* 10523712 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10523715:;
  /* 10523715 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523719 je 0x105237e6 */
  if (C.zf) goto L_105237e6;
  /* 1052371f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523722 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523726 je 0x10523739 */
  if (C.zf) goto L_10523739;
  /* 10523728 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052372a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052372d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10523730 push eax */
  push32((uint32_t)(EAX));
  /* 10523731 call 0x105246a0 */
  push32(0x10523736u); f_105246a0();
  /* 10523736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10523739:;
  /* 10523739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052373c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523740 je 0x10523753 */
  if (C.zf) goto L_10523753;
  /* 10523742 push 2 */
  push32((uint32_t)(0x2u));
  /* 10523744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523747 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1052374a push eax */
  push32((uint32_t)(EAX));
  /* 1052374b call 0x105246a0 */
  push32(0x10523750u); f_105246a0();
  /* 10523750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10523753:;
  /* 10523753 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523756 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052375a je 0x1052376d */
  if (C.zf) goto L_1052376d;
  /* 1052375c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052375e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523761 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10523764 push eax */
  push32((uint32_t)(EAX));
  /* 10523765 call 0x105246a0 */
  push32(0x1052376au); f_105246a0();
  /* 1052376a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052376d:;
  /* 1052376d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523770 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523774 je 0x10523787 */
  if (C.zf) goto L_10523787;
  /* 10523776 push 2 */
  push32((uint32_t)(0x2u));
  /* 10523778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052377b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1052377e push eax */
  push32((uint32_t)(EAX));
  /* 1052377f call 0x105246a0 */
  push32(0x10523784u); f_105246a0();
  /* 10523784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10523787:;
  /* 10523787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052378a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052378e je 0x105237a1 */
  if (C.zf) goto L_105237a1;
  /* 10523790 push 2 */
  push32((uint32_t)(0x2u));
  /* 10523792 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523795 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10523798 push eax */
  push32((uint32_t)(EAX));
  /* 10523799 call 0x105246a0 */
  push32(0x1052379eu); f_105246a0();
  /* 1052379e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105237a1:;
  /* 105237a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105237a4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105237a8 je 0x105237bb */
  if (C.zf) goto L_105237bb;
  /* 105237aa push 2 */
  push32((uint32_t)(0x2u));
  /* 105237ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105237af mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 105237b2 push eax */
  push32((uint32_t)(EAX));
  /* 105237b3 call 0x105246a0 */
  push32(0x105237b8u); f_105246a0();
  /* 105237b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105237bb:;
  /* 105237bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105237be cmp dword ptr [ecx + 0x50], 0x1054dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1054dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105237c5 je 0x105237d8 */
  if (C.zf) goto L_105237d8;
  /* 105237c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105237c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105237cc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 105237cf push eax */
  push32((uint32_t)(EAX));
  /* 105237d0 call 0x105246a0 */
  push32(0x105237d5u); f_105246a0();
  /* 105237d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105237d8:;
  /* 105237d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105237da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105237dd push ecx */
  push32((uint32_t)(ECX));
  /* 105237de call 0x105246a0 */
  push32(0x105237e3u); f_105246a0();
  /* 105237e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105237e6:;
  /* 105237e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105237e8 mov edx, dword ptr [0x1054da5c] */
  EDX = (r32((uint32_t)(0x1054da5c)));
  /* 105237ee push edx */
  push32((uint32_t)(EDX));
  /* 105237ef call dword ptr [0x1055237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055237c))), 0x105237f5u);
L_105237f5:;
  /* 105237f5 pop ebp */
  EBP = (pop32());
  /* 105237f6 ret  */
  ESPCHK(0x105236f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003800 @ 0x10523800 (11 bytes, 5 insns) */
void f_10523800(void) {
  FTRACE(0x10523800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523800 push ebp */
  push32((uint32_t)(EBP));
  /* 10523801 mov ebp, esp */
  EBP = (ESP);
  /* 10523803 call dword ptr [0x10552378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552378))), 0x10523809u);
  /* 10523809 pop ebp */
  EBP = (pop32());
  /* 1052380a ret  */
  ESPCHK(0x10523800u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x10523810 (11 bytes, 5 insns) */
void f_10523810(void) {
  FTRACE(0x10523810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523810 push ebp */
  push32((uint32_t)(EBP));
  /* 10523811 mov ebp, esp */
  EBP = (ESP);
  /* 10523813 call dword ptr [0x10552394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552394))), 0x10523819u);
  /* 10523819 pop ebp */
  EBP = (pop32());
  /* 1052381a ret  */
  ESPCHK(0x10523810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003820 @ 0x10523820 (804 bytes, 236 insns) */
void f_10523820(void) {
  FTRACE(0x10523820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523820 push ebp */
  push32((uint32_t)(EBP));
  /* 10523821 mov ebp, esp */
  EBP = (ESP);
  /* 10523823 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523826 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1052382b push 0x1054a544 */
  push32((uint32_t)(0x1054a544u));
  /* 10523830 push 2 */
  push32((uint32_t)(0x2u));
  /* 10523832 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10523837 call 0x10523c10 */
  push32(0x1052383cu); f_10523c10();
  /* 1052383c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052383f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10523842 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523846 jne 0x10523852 */
  if (!C.zf) goto L_10523852;
  /* 10523848 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1052384a call 0x10522b80 */
  push32(0x1052384fu); f_10522b80();
  /* 1052384f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10523852:;
  /* 10523852 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523855 mov dword ptr [0x10550f00], eax */
  w32((uint32_t)(0x10550f00), (EAX));
  /* 1052385a mov dword ptr [0x1055103c], 0x20 */
  w32((uint32_t)(0x1055103c), (0x20u));
  /* 10523864 jmp 0x1052386f */
  goto L_1052386f;
L_10523866:;
  /* 10523866 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523869 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052386c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1052386f:;
  /* 1052386f mov edx, dword ptr [0x10550f00] */
  EDX = (r32((uint32_t)(0x10550f00)));
  /* 10523875 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052387b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052387e jae 0x105238a3 */
  if (!C.cf) goto L_105238a3;
  /* 10523880 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523883 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10523887 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1052388a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10523890 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523893 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10523897 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1052389a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105238a1 jmp 0x10523866 */
  goto L_10523866;
L_105238a3:;
  /* 105238a3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 105238a6 push ecx */
  push32((uint32_t)(ECX));
  /* 105238a7 call dword ptr [0x105523a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a0))), 0x105238adu);
  /* 105238ad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 105238b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105238b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105238b8 je 0x10523a45 */
  if (C.zf) goto L_10523a45;
  /* 105238be cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105238c2 je 0x10523a45 */
  if (C.zf) goto L_10523a45;
  /* 105238c8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105238cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105238cd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 105238d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105238d3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105238d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105238d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105238dc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105238df mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 105238e2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105238e9 jge 0x105238f3 */
  if ((C.sf==C.of)) goto L_105238f3;
  /* 105238eb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 105238ee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 105238f1 jmp 0x105238fa */
  goto L_105238fa;
L_105238f3:;
  /* 105238f3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_105238fa:;
  /* 105238fa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 105238fd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10523900 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10523907 jmp 0x10523912 */
  goto L_10523912;
L_10523909:;
  /* 10523909 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1052390c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052390f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10523912:;
  /* 10523912 mov ecx, dword ptr [0x1055103c] */
  ECX = (r32((uint32_t)(0x1055103c)));
  /* 10523918 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052391b jge 0x105239b2 */
  if ((C.sf==C.of)) goto L_105239b2;
  /* 10523921 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10523926 push 0x1054a544 */
  push32((uint32_t)(0x1054a544u));
  /* 1052392b push 2 */
  push32((uint32_t)(0x2u));
  /* 1052392d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10523932 call 0x10523c10 */
  push32(0x10523937u); f_10523c10();
  /* 10523937 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052393a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1052393d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523941 jne 0x1052394e */
  if (!C.zf) goto L_1052394e;
  /* 10523943 mov edx, dword ptr [0x1055103c] */
  EDX = (r32((uint32_t)(0x1055103c)));
  /* 10523949 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1052394c jmp 0x105239b2 */
  goto L_105239b2;
L_1052394e:;
  /* 1052394e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10523951 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523954 mov dword ptr [eax*4 + 0x10550f00], ecx */
  w32((uint32_t)(EAX*4 + 0x10550f00), (ECX));
  /* 1052395b mov edx, dword ptr [0x1055103c] */
  EDX = (r32((uint32_t)(0x1055103c)));
  /* 10523961 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523964 mov dword ptr [0x1055103c], edx */
  w32((uint32_t)(0x1055103c), (EDX));
  /* 1052396a jmp 0x10523975 */
  goto L_10523975;
L_1052396c:;
  /* 1052396c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1052396f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523972 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10523975:;
  /* 10523975 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10523978 mov edx, dword ptr [ecx*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052397f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523985 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523988 jae 0x105239ad */
  if (!C.cf) goto L_105239ad;
  /* 1052398a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1052398d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10523991 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523994 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1052399a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1052399d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 105239a1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105239a4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105239ab jmp 0x1052396c */
  goto L_1052396c;
L_105239ad:;
  /* 105239ad jmp 0x10523909 */
  goto L_10523909;
L_105239b2:;
  /* 105239b2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 105239b9 jmp 0x105239d6 */
  goto L_105239d6;
L_105239bb:;
  /* 105239bb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105239be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105239c1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 105239c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105239c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105239ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105239cd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 105239d0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105239d3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_105239d6:;
  /* 105239d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105239d9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105239dc jge 0x10523a45 */
  if ((C.sf==C.of)) goto L_10523a45;
  /* 105239de mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 105239e1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105239e4 je 0x10523a40 */
  if (C.zf) goto L_10523a40;
  /* 105239e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105239e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105239ec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105239ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105239f1 je 0x10523a40 */
  if (C.zf) goto L_10523a40;
  /* 105239f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105239f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105239f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 105239fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105239fe jne 0x10523a10 */
  if (!C.zf) goto L_10523a10;
  /* 10523a00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10523a03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10523a05 push edx */
  push32((uint32_t)(EDX));
  /* 10523a06 call dword ptr [0x1055239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055239c))), 0x10523a0cu);
  /* 10523a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523a0e je 0x10523a40 */
  if (C.zf) goto L_10523a40;
L_10523a10:;
  /* 10523a10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10523a13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10523a16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10523a19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10523a1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10523a1f mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 10523a26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523a28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10523a2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523a2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10523a31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10523a33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10523a35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523a38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523a3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10523a3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10523a40:;
  /* 10523a40 jmp 0x105239bb */
  goto L_105239bb;
L_10523a45:;
  /* 10523a45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10523a4c jmp 0x10523a57 */
  goto L_10523a57;
L_10523a4e:;
  /* 10523a4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10523a51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523a54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10523a57:;
  /* 10523a57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523a5b jge 0x10523b34 */
  if ((C.sf==C.of)) goto L_10523b34;
  /* 10523a61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10523a64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10523a67 mov edx, dword ptr [0x10550f00] */
  EDX = (r32((uint32_t)(0x10550f00)));
  /* 10523a6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523a6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10523a72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523a75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523a78 jne 0x10523b20 */
  if (!C.zf) goto L_10523b20;
  /* 10523a7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523a81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10523a85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523a89 jne 0x10523a94 */
  if (!C.zf) goto L_10523a94;
  /* 10523a8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10523a92 jmp 0x10523aa4 */
  goto L_10523aa4;
L_10523a94:;
  /* 10523a94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10523a97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523a9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10523a9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523a9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523aa1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10523aa4:;
  /* 10523aa4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10523aa7 push eax */
  push32((uint32_t)(EAX));
  /* 10523aa8 call dword ptr [0x1055234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055234c))), 0x10523aaeu);
  /* 10523aae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10523ab1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523ab5 je 0x10523b0f */
  if (C.zf) goto L_10523b0f;
  /* 10523ab7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10523aba push ecx */
  push32((uint32_t)(ECX));
  /* 10523abb call dword ptr [0x1055239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055239c))), 0x10523ac1u);
  /* 10523ac1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10523ac4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523ac8 je 0x10523b0f */
  if (C.zf) goto L_10523b0f;
  /* 10523aca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523acd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10523ad0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10523ad2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10523ad5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10523adb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523ade jne 0x10523af0 */
  if (!C.zf) goto L_10523af0;
  /* 10523ae0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523ae3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10523ae6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10523ae8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523aeb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10523aee jmp 0x10523b0d */
  goto L_10523b0d;
L_10523af0:;
  /* 10523af0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10523af3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10523af9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523afc jne 0x10523b0d */
  if (!C.zf) goto L_10523b0d;
  /* 10523afe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523b01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10523b04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10523b07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523b0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10523b0d:;
  /* 10523b0d jmp 0x10523b1e */
  goto L_10523b1e;
L_10523b0f:;
  /* 10523b0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523b12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10523b15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10523b18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523b1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10523b1e:;
  /* 10523b1e jmp 0x10523b2f */
  goto L_10523b2f;
L_10523b20:;
  /* 10523b20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523b23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10523b26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10523b29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10523b2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10523b2f:;
  /* 10523b2f jmp 0x10523a4e */
  goto L_10523a4e;
L_10523b34:;
  /* 10523b34 mov eax, dword ptr [0x1055103c] */
  EAX = (r32((uint32_t)(0x1055103c)));
  /* 10523b39 push eax */
  push32((uint32_t)(EAX));
  /* 10523b3a call dword ptr [0x10552398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552398))), 0x10523b40u);
  /* 10523b40 mov esp, ebp */
  ESP = (EBP);
  /* 10523b42 pop ebp */
  EBP = (pop32());
  /* 10523b43 ret  */
  ESPCHK(0x10523820u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10523b50 (155 bytes, 45 insns) */
void f_10523b50(void) {
  FTRACE(0x10523b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10523b51 mov ebp, esp */
  EBP = (ESP);
  /* 10523b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523b56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10523b5d jmp 0x10523b68 */
  goto L_10523b68;
L_10523b5f:;
  /* 10523b5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523b62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523b65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10523b68:;
  /* 10523b68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523b6c jge 0x10523be7 */
  if ((C.sf==C.of)) goto L_10523be7;
  /* 10523b6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523b71 cmp dword ptr [ecx*4 + 0x10550f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10550f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523b79 je 0x10523be2 */
  if (C.zf) goto L_10523be2;
  /* 10523b7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523b7e mov eax, dword ptr [edx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 10523b85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10523b88 jmp 0x10523b93 */
  goto L_10523b93;
L_10523b8a:;
  /* 10523b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523b8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523b90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10523b93:;
  /* 10523b93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523b96 mov eax, dword ptr [edx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 10523b9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523ba2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523ba5 jae 0x10523bbf */
  if (!C.cf) goto L_10523bbf;
  /* 10523ba7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523baa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523bae je 0x10523bbd */
  if (C.zf) goto L_10523bbd;
  /* 10523bb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523bb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523bb6 push edx */
  push32((uint32_t)(EDX));
  /* 10523bb7 call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x10523bbdu);
L_10523bbd:;
  /* 10523bbd jmp 0x10523b8a */
  goto L_10523b8a;
L_10523bbf:;
  /* 10523bbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10523bc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523bc4 mov ecx, dword ptr [eax*4 + 0x10550f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 10523bcb push ecx */
  push32((uint32_t)(ECX));
  /* 10523bcc call 0x105246a0 */
  push32(0x10523bd1u); f_105246a0();
  /* 10523bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523bd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523bd7 mov dword ptr [edx*4 + 0x10550f00], 0 */
  w32((uint32_t)(EDX*4 + 0x10550f00), (0x0u));
L_10523be2:;
  /* 10523be2 jmp 0x10523b5f */
  goto L_10523b5f;
L_10523be7:;
  /* 10523be7 mov esp, ebp */
  ESP = (EBP);
  /* 10523be9 pop ebp */
  EBP = (pop32());
  /* 10523bea ret  */
  ESPCHK(0x10523b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf0 @ 0x10523bf0 (29 bytes, 13 insns) */
void f_10523bf0(void) {
  FTRACE(0x10523bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10523bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10523bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523bf9 mov eax, dword ptr [0x1054f718] */
  EAX = (r32((uint32_t)(0x1054f718)));
  /* 10523bfe push eax */
  push32((uint32_t)(EAX));
  /* 10523bff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523c02 push ecx */
  push32((uint32_t)(ECX));
  /* 10523c03 call 0x10523c60 */
  push32(0x10523c08u); f_10523c60();
  /* 10523c08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523c0b pop ebp */
  EBP = (pop32());
  /* 10523c0c ret  */
  ESPCHK(0x10523bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c10 @ 0x10523c10 (35 bytes, 16 insns) */
void f_10523c10(void) {
  FTRACE(0x10523c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10523c11 mov ebp, esp */
  EBP = (ESP);
  /* 10523c13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523c16 push eax */
  push32((uint32_t)(EAX));
  /* 10523c17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10523c1a push ecx */
  push32((uint32_t)(ECX));
  /* 10523c1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523c1e push edx */
  push32((uint32_t)(EDX));
  /* 10523c1f mov eax, dword ptr [0x1054f718] */
  EAX = (r32((uint32_t)(0x1054f718)));
  /* 10523c24 push eax */
  push32((uint32_t)(EAX));
  /* 10523c25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523c28 push ecx */
  push32((uint32_t)(ECX));
  /* 10523c29 call 0x10523c60 */
  push32(0x10523c2eu); f_10523c60();
  /* 10523c2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523c31 pop ebp */
  EBP = (pop32());
  /* 10523c32 ret  */
  ESPCHK(0x10523c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x10523c40 (27 bytes, 13 insns) */
void f_10523c40(void) {
  FTRACE(0x10523c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10523c41 mov ebp, esp */
  EBP = (ESP);
  /* 10523c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523c49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523c4c push eax */
  push32((uint32_t)(EAX));
  /* 10523c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10523c51 call 0x10523c60 */
  push32(0x10523c56u); f_10523c60();
  /* 10523c56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523c59 pop ebp */
  EBP = (pop32());
  /* 10523c5a ret  */
  ESPCHK(0x10523c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c60 @ 0x10523c60 (94 bytes, 38 insns) */
void f_10523c60(void) {
  FTRACE(0x10523c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10523c61 mov ebp, esp */
  EBP = (ESP);
  /* 10523c63 push ecx */
  push32((uint32_t)(ECX));
L_10523c64:;
  /* 10523c64 push 9 */
  push32((uint32_t)(0x9u));
  /* 10523c66 call 0x10527610 */
  push32(0x10523c6bu); f_10527610();
  /* 10523c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523c6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10523c71 push eax */
  push32((uint32_t)(EAX));
  /* 10523c72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523c75 push ecx */
  push32((uint32_t)(ECX));
  /* 10523c76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10523c79 push edx */
  push32((uint32_t)(EDX));
  /* 10523c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523c7d push eax */
  push32((uint32_t)(EAX));
  /* 10523c7e call 0x10523ce0 */
  push32(0x10523c83u); f_10523ce0();
  /* 10523c83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523c86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10523c89 push 9 */
  push32((uint32_t)(0x9u));
  /* 10523c8b call 0x105276b0 */
  push32(0x10523c90u); f_105276b0();
  /* 10523c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523c93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523c97 jne 0x10523c9f */
  if (!C.zf) goto L_10523c9f;
  /* 10523c99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523c9d jne 0x10523ca4 */
  if (!C.zf) goto L_10523ca4;
L_10523c9f:;
  /* 10523c9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523ca2 jmp 0x10523cba */
  goto L_10523cba;
L_10523ca4:;
  /* 10523ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 10523ca8 call 0x10527950 */
  push32(0x10523cadu); f_10527950();
  /* 10523cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523cb2 jne 0x10523cb8 */
  if (!C.zf) goto L_10523cb8;
  /* 10523cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10523cb6 jmp 0x10523cba */
  goto L_10523cba;
L_10523cb8:;
  /* 10523cb8 jmp 0x10523c64 */
  goto L_10523c64;
L_10523cba:;
  /* 10523cba mov esp, ebp */
  ESP = (EBP);
  /* 10523cbc pop ebp */
  EBP = (pop32());
  /* 10523cbd ret  */
  ESPCHK(0x10523c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cc0 @ 0x10523cc0 (23 bytes, 11 insns) */
void f_10523cc0(void) {
  FTRACE(0x10523cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10523cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10523cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523cc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523cc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523ccc push eax */
  push32((uint32_t)(EAX));
  /* 10523ccd call 0x10523ce0 */
  push32(0x10523cd2u); f_10523ce0();
  /* 10523cd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523cd5 pop ebp */
  EBP = (pop32());
  /* 10523cd6 ret  */
  ESPCHK(0x10523cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x10523ce0 (787 bytes, 254 insns) */
void f_10523ce0(void) {
  FTRACE(0x10523ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10523ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10523ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10523ce3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10523ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 10523ce7 push esi */
  push32((uint32_t)(ESI));
  /* 10523ce8 push edi */
  push32((uint32_t)(EDI));
  /* 10523ce9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10523cf0 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 10523cf5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10523cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523cfa je 0x10523d2c */
  if (C.zf) goto L_10523d2c;
L_10523cfc:;
  /* 10523cfc call 0x10524db0 */
  push32(0x10523d01u); f_10524db0();
  /* 10523d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523d03 jne 0x10523d26 */
  if (!C.zf) goto L_10523d26;
  /* 10523d05 push 0x1054a638 */
  push32((uint32_t)(0x1054a638u));
  /* 10523d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10523d0c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10523d11 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10523d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10523d18 call 0x10522cd0 */
  push32(0x10523d1du); f_10522cd0();
  /* 10523d1d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523d23 jne 0x10523d26 */
  if (!C.zf) goto L_10523d26;
  /* 10523d25 int3  */
  x86_unimpl("int3 @ 0x10523d25");
L_10523d26:;
  /* 10523d26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10523d28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10523d2a jne 0x10523cfc */
  if (!C.zf) goto L_10523cfc;
L_10523d2c:;
  /* 10523d2c mov edx, dword ptr [0x1054da88] */
  EDX = (r32((uint32_t)(0x1054da88)));
  /* 10523d32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10523d35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523d38 cmp eax, dword ptr [0x1054da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523d3e jne 0x10523d41 */
  if (!C.zf) goto L_10523d41;
  /* 10523d40 int3  */
  x86_unimpl("int3 @ 0x10523d40");
L_10523d41:;
  /* 10523d41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523d44 push ecx */
  push32((uint32_t)(ECX));
  /* 10523d45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10523d48 push edx */
  push32((uint32_t)(EDX));
  /* 10523d49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523d4c push eax */
  push32((uint32_t)(EAX));
  /* 10523d4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523d50 push ecx */
  push32((uint32_t)(ECX));
  /* 10523d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523d54 push edx */
  push32((uint32_t)(EDX));
  /* 10523d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523d59 call dword ptr [0x1054dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054dc90))), 0x10523d5fu);
  /* 10523d5f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523d64 jne 0x10523dc4 */
  if (!C.zf) goto L_10523dc4;
  /* 10523d66 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523d6a je 0x10523d97 */
  if (C.zf) goto L_10523d97;
L_10523d6c:;
  /* 10523d6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523d6f push eax */
  push32((uint32_t)(EAX));
  /* 10523d70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10523d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10523d74 push 0x1054a5f4 */
  push32((uint32_t)(0x1054a5f4u));
  /* 10523d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10523d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10523d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10523d81 call 0x10522cd0 */
  push32(0x10523d86u); f_10522cd0();
  /* 10523d86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523d89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523d8c jne 0x10523d8f */
  if (!C.zf) goto L_10523d8f;
  /* 10523d8e int3  */
  x86_unimpl("int3 @ 0x10523d8e");
L_10523d8f:;
  /* 10523d8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10523d91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10523d93 jne 0x10523d6c */
  if (!C.zf) goto L_10523d6c;
  /* 10523d95 jmp 0x10523dbd */
  goto L_10523dbd;
L_10523d97:;
  /* 10523d97 push 0x1054a5d0 */
  push32((uint32_t)(0x1054a5d0u));
  /* 10523d9c push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10523da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523da9 call 0x10522cd0 */
  push32(0x10523daeu); f_10522cd0();
  /* 10523dae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523db1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523db4 jne 0x10523db7 */
  if (!C.zf) goto L_10523db7;
  /* 10523db6 int3  */
  x86_unimpl("int3 @ 0x10523db6");
L_10523db7:;
  /* 10523db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10523db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10523dbb jne 0x10523d97 */
  if (!C.zf) goto L_10523d97;
L_10523dbd:;
  /* 10523dbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10523dbf jmp 0x10523fec */
  goto L_10523fec;
L_10523dc4:;
  /* 10523dc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523dc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10523dcd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523dd0 je 0x10523de6 */
  if (C.zf) goto L_10523de6;
  /* 10523dd2 mov edx, dword ptr [0x1054da84] */
  EDX = (r32((uint32_t)(0x1054da84)));
  /* 10523dd8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10523ddb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10523ddd jne 0x10523de6 */
  if (!C.zf) goto L_10523de6;
  /* 10523ddf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10523de6:;
  /* 10523de6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523dea ja 0x10523df7 */
  if ((!C.cf&&!C.zf)) goto L_10523df7;
  /* 10523dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523def add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523df2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523df5 jbe 0x10523e23 */
  if ((C.cf||C.zf)) goto L_10523e23;
L_10523df7:;
  /* 10523df7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523dfa push ecx */
  push32((uint32_t)(ECX));
  /* 10523dfb push 0x1054a5a8 */
  push32((uint32_t)(0x1054a5a8u));
  /* 10523e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523e06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10523e08 call 0x10522cd0 */
  push32(0x10523e0du); f_10522cd0();
  /* 10523e0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523e10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e13 jne 0x10523e16 */
  if (!C.zf) goto L_10523e16;
  /* 10523e15 int3  */
  x86_unimpl("int3 @ 0x10523e15");
L_10523e16:;
  /* 10523e16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10523e18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10523e1a jne 0x10523df7 */
  if (!C.zf) goto L_10523df7;
  /* 10523e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10523e1e jmp 0x10523fec */
  goto L_10523fec;
L_10523e23:;
  /* 10523e23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523e26 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10523e2b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e2e je 0x10523e70 */
  if (C.zf) goto L_10523e70;
  /* 10523e30 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e34 je 0x10523e70 */
  if (C.zf) goto L_10523e70;
  /* 10523e36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523e39 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10523e3f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e42 je 0x10523e70 */
  if (C.zf) goto L_10523e70;
  /* 10523e44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e48 je 0x10523e70 */
  if (C.zf) goto L_10523e70;
L_10523e4a:;
  /* 10523e4a push 0x1054a574 */
  push32((uint32_t)(0x1054a574u));
  /* 10523e4f push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10523e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10523e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10523e5c call 0x10522cd0 */
  push32(0x10523e61u); f_10522cd0();
  /* 10523e61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523e64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e67 jne 0x10523e6a */
  if (!C.zf) goto L_10523e6a;
  /* 10523e69 int3  */
  x86_unimpl("int3 @ 0x10523e69");
L_10523e6a:;
  /* 10523e6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10523e6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10523e6e jne 0x10523e4a */
  if (!C.zf) goto L_10523e4a;
L_10523e70:;
  /* 10523e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523e73 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523e76 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10523e79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10523e7c push ecx */
  push32((uint32_t)(ECX));
  /* 10523e7d call 0x10527a60 */
  push32(0x10523e82u); f_10527a60();
  /* 10523e82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523e85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10523e88 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523e8c jne 0x10523e95 */
  if (!C.zf) goto L_10523e95;
  /* 10523e8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10523e90 jmp 0x10523fec */
  goto L_10523fec;
L_10523e95:;
  /* 10523e95 mov edx, dword ptr [0x1054da88] */
  EDX = (r32((uint32_t)(0x1054da88)));
  /* 10523e9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523e9e mov dword ptr [0x1054da88], edx */
  w32((uint32_t)(0x1054da88), (EDX));
  /* 10523ea4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523ea8 je 0x10523ef3 */
  if (C.zf) goto L_10523ef3;
  /* 10523eaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523ead mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10523eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523eb6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10523ebd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523ec0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10523ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523eca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10523ed1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523ed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523ed7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10523eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523edd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10523ee4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523ee7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10523eee jmp 0x10523f93 */
  goto L_10523f93;
L_10523ef3:;
  /* 10523ef3 mov edx, dword ptr [0x1054f57c] */
  EDX = (r32((uint32_t)(0x1054f57c)));
  /* 10523ef9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523efc mov dword ptr [0x1054f57c], edx */
  w32((uint32_t)(0x1054f57c), (EDX));
  /* 10523f02 mov eax, dword ptr [0x1054f584] */
  EAX = (r32((uint32_t)(0x1054f584)));
  /* 10523f07 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523f0a mov dword ptr [0x1054f584], eax */
  w32((uint32_t)(0x1054f584), (EAX));
  /* 10523f0f mov ecx, dword ptr [0x1054f584] */
  ECX = (r32((uint32_t)(0x1054f584)));
  /* 10523f15 cmp ecx, dword ptr [0x1054f588] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054f588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523f1b jbe 0x10523f29 */
  if ((C.cf||C.zf)) goto L_10523f29;
  /* 10523f1d mov edx, dword ptr [0x1054f584] */
  EDX = (r32((uint32_t)(0x1054f584)));
  /* 10523f23 mov dword ptr [0x1054f588], edx */
  w32((uint32_t)(0x1054f588), (EDX));
L_10523f29:;
  /* 10523f29 cmp dword ptr [0x1054f580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10523f30 je 0x10523f3f */
  if (C.zf) goto L_10523f3f;
  /* 10523f32 mov eax, dword ptr [0x1054f580] */
  EAX = (r32((uint32_t)(0x1054f580)));
  /* 10523f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10523f3d jmp 0x10523f48 */
  goto L_10523f48;
L_10523f3f:;
  /* 10523f3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f42 mov dword ptr [0x1054f578], edx */
  w32((uint32_t)(0x1054f578), (EDX));
L_10523f48:;
  /* 10523f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f4b mov ecx, dword ptr [0x1054f580] */
  ECX = (r32((uint32_t)(0x1054f580)));
  /* 10523f51 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10523f53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f56 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10523f5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10523f63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10523f66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10523f6c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10523f6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523f75 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10523f78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10523f7e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10523f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10523f87 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10523f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523f8d mov dword ptr [0x1054f580], ecx */
  w32((uint32_t)(0x1054f580), (ECX));
L_10523f93:;
  /* 10523f93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10523f95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10523f97 mov dl, byte ptr [0x1054da90] */
  DL = (r8((uint32_t)(0x1054da90)));
  /* 10523f9d push edx */
  push32((uint32_t)(EDX));
  /* 10523f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523fa1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523fa4 push eax */
  push32((uint32_t)(EAX));
  /* 10523fa5 call 0x10527980 */
  push32(0x10523faau); f_10527980();
  /* 10523faa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523fad push 4 */
  push32((uint32_t)(0x4u));
  /* 10523faf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10523fb1 mov cl, byte ptr [0x1054da90] */
  CL = (r8((uint32_t)(0x1054da90)));
  /* 10523fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10523fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523fbe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10523fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10523fc3 call 0x10527980 */
  push32(0x10523fc8u); f_10527980();
  /* 10523fc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523fcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10523fce push edx */
  push32((uint32_t)(EDX));
  /* 10523fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10523fd1 mov al, byte ptr [0x1054da92] */
  AL = (r8((uint32_t)(0x1054da92)));
  /* 10523fd6 push eax */
  push32((uint32_t)(EAX));
  /* 10523fd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523fda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10523fdd push ecx */
  push32((uint32_t)(ECX));
  /* 10523fde call 0x10527980 */
  push32(0x10523fe3u); f_10527980();
  /* 10523fe3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10523fe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10523fe9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10523fec:;
  /* 10523fec pop edi */
  EDI = (pop32());
  /* 10523fed pop esi */
  ESI = (pop32());
  /* 10523fee pop ebx */
  EBX = (pop32());
  /* 10523fef mov esp, ebp */
  ESP = (EBP);
  /* 10523ff1 pop ebp */
  EBP = (pop32());
  /* 10523ff2 ret  */
  ESPCHK(0x10523ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004000 @ 0x10524000 (27 bytes, 13 insns) */
void f_10524000(void) {
  FTRACE(0x10524000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524000 push ebp */
  push32((uint32_t)(EBP));
  /* 10524001 mov ebp, esp */
  EBP = (ESP);
  /* 10524003 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524007 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052400c push eax */
  push32((uint32_t)(EAX));
  /* 1052400d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524010 push ecx */
  push32((uint32_t)(ECX));
  /* 10524011 call 0x10524020 */
  push32(0x10524016u); f_10524020();
  /* 10524016 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524019 pop ebp */
  EBP = (pop32());
  /* 1052401a ret  */
  ESPCHK(0x10524000u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10524020 (96 bytes, 37 insns) */
void f_10524020(void) {
  FTRACE(0x10524020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524020 push ebp */
  push32((uint32_t)(EBP));
  /* 10524021 mov ebp, esp */
  EBP = (ESP);
  /* 10524023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524026 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524029 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052402d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10524030 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10524033 push ecx */
  push32((uint32_t)(ECX));
  /* 10524034 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10524037 push edx */
  push32((uint32_t)(EDX));
  /* 10524038 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052403b push eax */
  push32((uint32_t)(EAX));
  /* 1052403c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052403f push ecx */
  push32((uint32_t)(ECX));
  /* 10524040 call 0x10523c10 */
  push32(0x10524045u); f_10523c10();
  /* 10524045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524048 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052404b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052404f je 0x10524079 */
  if (C.zf) goto L_10524079;
  /* 10524051 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524054 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10524057 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052405a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052405d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10524060:;
  /* 10524060 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524063 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524066 jae 0x10524079 */
  if (!C.cf) goto L_10524079;
  /* 10524068 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052406b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1052406e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524071 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524074 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10524077 jmp 0x10524060 */
  goto L_10524060;
L_10524079:;
  /* 10524079 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052407c mov esp, ebp */
  ESP = (EBP);
  /* 1052407e pop ebp */
  EBP = (pop32());
  /* 1052407f ret  */
  ESPCHK(0x10524020u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x10524080 (27 bytes, 13 insns) */
void f_10524080(void) {
  FTRACE(0x10524080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524080 push ebp */
  push32((uint32_t)(EBP));
  /* 10524081 mov ebp, esp */
  EBP = (ESP);
  /* 10524083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524087 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524089 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052408c push eax */
  push32((uint32_t)(EAX));
  /* 1052408d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524090 push ecx */
  push32((uint32_t)(ECX));
  /* 10524091 call 0x105240a0 */
  push32(0x10524096u); f_105240a0();
  /* 10524096 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524099 pop ebp */
  EBP = (pop32());
  /* 1052409a ret  */
  ESPCHK(0x10524080u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x105240a0 (64 bytes, 27 insns) */
void f_105240a0(void) {
  FTRACE(0x105240a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105240a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105240a1 mov ebp, esp */
  EBP = (ESP);
  /* 105240a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105240a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 105240a6 call 0x10527610 */
  push32(0x105240abu); f_10527610();
  /* 105240ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105240ae push 1 */
  push32((uint32_t)(0x1u));
  /* 105240b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105240b3 push eax */
  push32((uint32_t)(EAX));
  /* 105240b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105240b7 push ecx */
  push32((uint32_t)(ECX));
  /* 105240b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105240bb push edx */
  push32((uint32_t)(EDX));
  /* 105240bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105240bf push eax */
  push32((uint32_t)(EAX));
  /* 105240c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105240c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105240c4 call 0x105240e0 */
  push32(0x105240c9u); f_105240e0();
  /* 105240c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105240cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105240cf push 9 */
  push32((uint32_t)(0x9u));
  /* 105240d1 call 0x105276b0 */
  push32(0x105240d6u); f_105276b0();
  /* 105240d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105240d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105240dc mov esp, ebp */
  ESP = (EBP);
  /* 105240de pop ebp */
  EBP = (pop32());
  /* 105240df ret  */
  ESPCHK(0x105240a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x105240e0 (1297 bytes, 431 insns) */
void f_105240e0(void) {
  FTRACE(0x105240e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105240e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105240e1 mov ebp, esp */
  EBP = (ESP);
  /* 105240e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105240e6 push ebx */
  push32((uint32_t)(EBX));
  /* 105240e7 push esi */
  push32((uint32_t)(ESI));
  /* 105240e8 push edi */
  push32((uint32_t)(EDI));
  /* 105240e9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105240f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105240f4 jne 0x10524113 */
  if (!C.zf) goto L_10524113;
  /* 105240f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105240f9 push eax */
  push32((uint32_t)(EAX));
  /* 105240fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105240fd push ecx */
  push32((uint32_t)(ECX));
  /* 105240fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524101 push edx */
  push32((uint32_t)(EDX));
  /* 10524102 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524105 push eax */
  push32((uint32_t)(EAX));
  /* 10524106 call 0x10523c10 */
  push32(0x1052410bu); f_10523c10();
  /* 1052410b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052410e jmp 0x105245ea */
  goto L_105245ea;
L_10524113:;
  /* 10524113 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524117 je 0x10524136 */
  if (C.zf) goto L_10524136;
  /* 10524119 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052411d jne 0x10524136 */
  if (!C.zf) goto L_10524136;
  /* 1052411f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524122 push ecx */
  push32((uint32_t)(ECX));
  /* 10524123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524126 push edx */
  push32((uint32_t)(EDX));
  /* 10524127 call 0x105246a0 */
  push32(0x1052412cu); f_105246a0();
  /* 1052412c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052412f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524131 jmp 0x105245ea */
  goto L_105245ea;
L_10524136:;
  /* 10524136 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 1052413b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1052413e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524140 je 0x10524172 */
  if (C.zf) goto L_10524172;
L_10524142:;
  /* 10524142 call 0x10524db0 */
  push32(0x10524147u); f_10524db0();
  /* 10524147 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524149 jne 0x1052416c */
  if (!C.zf) goto L_1052416c;
  /* 1052414b push 0x1054a638 */
  push32((uint32_t)(0x1054a638u));
  /* 10524150 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524152 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10524157 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 1052415c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052415e call 0x10522cd0 */
  push32(0x10524163u); f_10522cd0();
  /* 10524163 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524166 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524169 jne 0x1052416c */
  if (!C.zf) goto L_1052416c;
  /* 1052416b int3  */
  x86_unimpl("int3 @ 0x1052416b");
L_1052416c:;
  /* 1052416c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052416e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524170 jne 0x10524142 */
  if (!C.zf) goto L_10524142;
L_10524172:;
  /* 10524172 mov edx, dword ptr [0x1054da88] */
  EDX = (r32((uint32_t)(0x1054da88)));
  /* 10524178 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1052417b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052417e cmp eax, dword ptr [0x1054da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524184 jne 0x10524187 */
  if (!C.zf) goto L_10524187;
  /* 10524186 int3  */
  x86_unimpl("int3 @ 0x10524186");
L_10524187:;
  /* 10524187 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052418a push ecx */
  push32((uint32_t)(ECX));
  /* 1052418b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052418e push edx */
  push32((uint32_t)(EDX));
  /* 1052418f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10524192 push eax */
  push32((uint32_t)(EAX));
  /* 10524193 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524196 push ecx */
  push32((uint32_t)(ECX));
  /* 10524197 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052419a push edx */
  push32((uint32_t)(EDX));
  /* 1052419b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052419e push eax */
  push32((uint32_t)(EAX));
  /* 1052419f push 2 */
  push32((uint32_t)(0x2u));
  /* 105241a1 call dword ptr [0x1054dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054dc90))), 0x105241a7u);
  /* 105241a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105241aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105241ac jne 0x1052420c */
  if (!C.zf) goto L_1052420c;
  /* 105241ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105241b2 je 0x105241df */
  if (C.zf) goto L_105241df;
L_105241b4:;
  /* 105241b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105241b7 push ecx */
  push32((uint32_t)(ECX));
  /* 105241b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105241bb push edx */
  push32((uint32_t)(EDX));
  /* 105241bc push 0x1054a7b4 */
  push32((uint32_t)(0x1054a7b4u));
  /* 105241c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105241c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105241c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105241c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105241c9 call 0x10522cd0 */
  push32(0x105241ceu); f_10522cd0();
  /* 105241ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105241d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105241d4 jne 0x105241d7 */
  if (!C.zf) goto L_105241d7;
  /* 105241d6 int3  */
  x86_unimpl("int3 @ 0x105241d6");
L_105241d7:;
  /* 105241d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105241d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105241db jne 0x105241b4 */
  if (!C.zf) goto L_105241b4;
  /* 105241dd jmp 0x10524205 */
  goto L_10524205;
L_105241df:;
  /* 105241df push 0x1054a790 */
  push32((uint32_t)(0x1054a790u));
  /* 105241e4 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 105241e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105241eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105241ed push 0 */
  push32((uint32_t)(0x0u));
  /* 105241ef push 0 */
  push32((uint32_t)(0x0u));
  /* 105241f1 call 0x10522cd0 */
  push32(0x105241f6u); f_10522cd0();
  /* 105241f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105241f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105241fc jne 0x105241ff */
  if (!C.zf) goto L_105241ff;
  /* 105241fe int3  */
  x86_unimpl("int3 @ 0x105241fe");
L_105241ff:;
  /* 105241ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524201 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524203 jne 0x105241df */
  if (!C.zf) goto L_105241df;
L_10524205:;
  /* 10524205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524207 jmp 0x105245ea */
  goto L_105245ea;
L_1052420c:;
  /* 1052420c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524210 jbe 0x1052423e */
  if ((C.cf||C.zf)) goto L_1052423e;
L_10524212:;
  /* 10524212 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524215 push edx */
  push32((uint32_t)(EDX));
  /* 10524216 push 0x1054a760 */
  push32((uint32_t)(0x1054a760u));
  /* 1052421b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052421d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052421f push 0 */
  push32((uint32_t)(0x0u));
  /* 10524221 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524223 call 0x10522cd0 */
  push32(0x10524228u); f_10522cd0();
  /* 10524228 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052422b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052422e jne 0x10524231 */
  if (!C.zf) goto L_10524231;
  /* 10524230 int3  */
  x86_unimpl("int3 @ 0x10524230");
L_10524231:;
  /* 10524231 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524235 jne 0x10524212 */
  if (!C.zf) goto L_10524212;
  /* 10524237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524239 jmp 0x105245ea */
  goto L_105245ea;
L_1052423e:;
  /* 1052423e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524242 je 0x10524286 */
  if (C.zf) goto L_10524286;
  /* 10524244 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524247 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1052424d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524250 je 0x10524286 */
  if (C.zf) goto L_10524286;
  /* 10524252 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524255 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052425b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052425e je 0x10524286 */
  if (C.zf) goto L_10524286;
L_10524260:;
  /* 10524260 push 0x1054a574 */
  push32((uint32_t)(0x1054a574u));
  /* 10524265 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 1052426a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052426c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052426e push 0 */
  push32((uint32_t)(0x0u));
  /* 10524270 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524272 call 0x10522cd0 */
  push32(0x10524277u); f_10522cd0();
  /* 10524277 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052427a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052427d jne 0x10524280 */
  if (!C.zf) goto L_10524280;
  /* 1052427f int3  */
  x86_unimpl("int3 @ 0x1052427f");
L_10524280:;
  /* 10524280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524284 jne 0x10524260 */
  if (!C.zf) goto L_10524260;
L_10524286:;
  /* 10524286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524289 push ecx */
  push32((uint32_t)(ECX));
  /* 1052428a call 0x10525210 */
  push32(0x1052428fu); f_10525210();
  /* 1052428f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524294 jne 0x105242b7 */
  if (!C.zf) goto L_105242b7;
  /* 10524296 push 0x1054a73c */
  push32((uint32_t)(0x1054a73cu));
  /* 1052429b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052429d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 105242a2 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 105242a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105242a9 call 0x10522cd0 */
  push32(0x105242aeu); f_10522cd0();
  /* 105242ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105242b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105242b4 jne 0x105242b7 */
  if (!C.zf) goto L_105242b7;
  /* 105242b6 int3  */
  x86_unimpl("int3 @ 0x105242b6");
L_105242b7:;
  /* 105242b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105242b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105242bb jne 0x10524286 */
  if (!C.zf) goto L_10524286;
  /* 105242bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105242c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105242c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105242c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105242c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105242cd jne 0x105242d6 */
  if (!C.zf) goto L_105242d6;
  /* 105242cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_105242d6:;
  /* 105242d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105242da je 0x1052431a */
  if (C.zf) goto L_1052431a;
L_105242dc:;
  /* 105242dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105242df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105242e6 jne 0x105242f1 */
  if (!C.zf) goto L_105242f1;
  /* 105242e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105242eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105242ef je 0x10524312 */
  if (C.zf) goto L_10524312;
L_105242f1:;
  /* 105242f1 push 0x1054a6f4 */
  push32((uint32_t)(0x1054a6f4u));
  /* 105242f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105242f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 105242fd push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524302 push 2 */
  push32((uint32_t)(0x2u));
  /* 10524304 call 0x10522cd0 */
  push32(0x10524309u); f_10522cd0();
  /* 10524309 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052430c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052430f jne 0x10524312 */
  if (!C.zf) goto L_10524312;
  /* 10524311 int3  */
  x86_unimpl("int3 @ 0x10524311");
L_10524312:;
  /* 10524312 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524314 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524316 jne 0x105242dc */
  if (!C.zf) goto L_105242dc;
  /* 10524318 jmp 0x1052437e */
  goto L_1052437e;
L_1052431a:;
  /* 1052431a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052431d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524320 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10524325 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524328 jne 0x1052433f */
  if (!C.zf) goto L_1052433f;
  /* 1052432a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052432d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524333 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524336 jne 0x1052433f */
  if (!C.zf) goto L_1052433f;
  /* 10524338 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1052433f:;
  /* 1052433f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524342 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524345 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052434a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052434d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524353 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524355 je 0x10524378 */
  if (C.zf) goto L_10524378;
  /* 10524357 push 0x1054a6b8 */
  push32((uint32_t)(0x1054a6b8u));
  /* 1052435c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052435e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10524363 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052436a call 0x10522cd0 */
  push32(0x1052436fu); f_10522cd0();
  /* 1052436f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524372 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524375 jne 0x10524378 */
  if (!C.zf) goto L_10524378;
  /* 10524377 int3  */
  x86_unimpl("int3 @ 0x10524377");
L_10524378:;
  /* 10524378 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052437a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052437c jne 0x1052433f */
  if (!C.zf) goto L_1052433f;
L_1052437e:;
  /* 1052437e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524382 je 0x105243a9 */
  if (C.zf) goto L_105243a9;
  /* 10524384 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524387 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052438a push eax */
  push32((uint32_t)(EAX));
  /* 1052438b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052438e push ecx */
  push32((uint32_t)(ECX));
  /* 1052438f call 0x10527b90 */
  push32(0x10524394u); f_10527b90();
  /* 10524394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524397 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052439a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052439e jne 0x105243a7 */
  if (!C.zf) goto L_105243a7;
  /* 105243a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105243a2 jmp 0x105245ea */
  goto L_105245ea;
L_105243a7:;
  /* 105243a7 jmp 0x105243cc */
  goto L_105243cc;
L_105243a9:;
  /* 105243a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105243ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105243af push edx */
  push32((uint32_t)(EDX));
  /* 105243b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105243b3 push eax */
  push32((uint32_t)(EAX));
  /* 105243b4 call 0x10527ae0 */
  push32(0x105243b9u); f_10527ae0();
  /* 105243b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105243bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105243bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105243c3 jne 0x105243cc */
  if (!C.zf) goto L_105243cc;
  /* 105243c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105243c7 jmp 0x105245ea */
  goto L_105245ea;
L_105243cc:;
  /* 105243cc mov ecx, dword ptr [0x1054da88] */
  ECX = (r32((uint32_t)(0x1054da88)));
  /* 105243d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105243d5 mov dword ptr [0x1054da88], ecx */
  w32((uint32_t)(0x1054da88), (ECX));
  /* 105243db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105243df jne 0x10524437 */
  if (!C.zf) goto L_10524437;
  /* 105243e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105243e4 mov eax, dword ptr [0x1054f57c] */
  EAX = (r32((uint32_t)(0x1054f57c)));
  /* 105243e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105243ec mov dword ptr [0x1054f57c], eax */
  w32((uint32_t)(0x1054f57c), (EAX));
  /* 105243f1 mov ecx, dword ptr [0x1054f57c] */
  ECX = (r32((uint32_t)(0x1054f57c)));
  /* 105243f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105243fa mov dword ptr [0x1054f57c], ecx */
  w32((uint32_t)(0x1054f57c), (ECX));
  /* 10524400 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524403 mov eax, dword ptr [0x1054f584] */
  EAX = (r32((uint32_t)(0x1054f584)));
  /* 10524408 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052440b mov dword ptr [0x1054f584], eax */
  w32((uint32_t)(0x1054f584), (EAX));
  /* 10524410 mov ecx, dword ptr [0x1054f584] */
  ECX = (r32((uint32_t)(0x1054f584)));
  /* 10524416 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524419 mov dword ptr [0x1054f584], ecx */
  w32((uint32_t)(0x1054f584), (ECX));
  /* 1052441f mov edx, dword ptr [0x1054f584] */
  EDX = (r32((uint32_t)(0x1054f584)));
  /* 10524425 cmp edx, dword ptr [0x1054f588] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054f588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052442b jbe 0x10524437 */
  if ((C.cf||C.zf)) goto L_10524437;
  /* 1052442d mov eax, dword ptr [0x1054f584] */
  EAX = (r32((uint32_t)(0x1054f584)));
  /* 10524432 mov dword ptr [0x1054f588], eax */
  w32((uint32_t)(0x1054f588), (EAX));
L_10524437:;
  /* 10524437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052443a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052443d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10524440 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524446 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524449 jbe 0x1052446f */
  if ((C.cf||C.zf)) goto L_1052446f;
  /* 1052444b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052444e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524451 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524454 push edx */
  push32((uint32_t)(EDX));
  /* 10524455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524457 mov al, byte ptr [0x1054da92] */
  AL = (r8((uint32_t)(0x1054da92)));
  /* 1052445c push eax */
  push32((uint32_t)(EAX));
  /* 1052445d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524460 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524463 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524466 push edx */
  push32((uint32_t)(EDX));
  /* 10524467 call 0x10527980 */
  push32(0x1052446cu); f_10527980();
  /* 1052446c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052446f:;
  /* 1052446f push 4 */
  push32((uint32_t)(0x4u));
  /* 10524471 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524473 mov al, byte ptr [0x1054da90] */
  AL = (r8((uint32_t)(0x1054da90)));
  /* 10524478 push eax */
  push32((uint32_t)(EAX));
  /* 10524479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052447c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052447f push ecx */
  push32((uint32_t)(ECX));
  /* 10524480 call 0x10527980 */
  push32(0x10524485u); f_10527980();
  /* 10524485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524488 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052448c jne 0x105244a9 */
  if (!C.zf) goto L_105244a9;
  /* 1052448e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524491 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10524494 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10524497 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052449a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052449d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 105244a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105244a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105244a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_105244a9:;
  /* 105244a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105244ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105244af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_105244b2:;
  /* 105244b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105244b6 jne 0x105244e7 */
  if (!C.zf) goto L_105244e7;
  /* 105244b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105244bc jne 0x105244c6 */
  if (!C.zf) goto L_105244c6;
  /* 105244be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105244c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105244c4 je 0x105244e7 */
  if (C.zf) goto L_105244e7;
L_105244c6:;
  /* 105244c6 push 0x1054a684 */
  push32((uint32_t)(0x1054a684u));
  /* 105244cb push 0 */
  push32((uint32_t)(0x0u));
  /* 105244cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 105244d2 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 105244d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105244d9 call 0x10522cd0 */
  push32(0x105244deu); f_10522cd0();
  /* 105244de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105244e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105244e4 jne 0x105244e7 */
  if (!C.zf) goto L_105244e7;
  /* 105244e6 int3  */
  x86_unimpl("int3 @ 0x105244e6");
L_105244e7:;
  /* 105244e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105244e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105244eb jne 0x105244b2 */
  if (!C.zf) goto L_105244b2;
  /* 105244ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105244f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105244f3 je 0x105244fb */
  if (C.zf) goto L_105244fb;
  /* 105244f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105244f9 je 0x10524503 */
  if (C.zf) goto L_10524503;
L_105244fb:;
  /* 105244fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105244fe jmp 0x105245ea */
  goto L_105245ea;
L_10524503:;
  /* 10524503 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524506 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524509 je 0x1052451b */
  if (C.zf) goto L_1052451b;
  /* 1052450b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052450e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10524510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524513 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10524516 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10524519 jmp 0x10524557 */
  goto L_10524557;
L_1052451b:;
  /* 1052451b mov eax, dword ptr [0x1054f578] */
  EAX = (r32((uint32_t)(0x1054f578)));
  /* 10524520 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524523 je 0x10524546 */
  if (C.zf) goto L_10524546;
  /* 10524525 push 0x1054a668 */
  push32((uint32_t)(0x1054a668u));
  /* 1052452a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052452c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10524531 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524536 push 2 */
  push32((uint32_t)(0x2u));
  /* 10524538 call 0x10522cd0 */
  push32(0x1052453du); f_10522cd0();
  /* 1052453d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524540 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524543 jne 0x10524546 */
  if (!C.zf) goto L_10524546;
  /* 10524545 int3  */
  x86_unimpl("int3 @ 0x10524545");
L_10524546:;
  /* 10524546 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524548 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052454a jne 0x1052451b */
  if (!C.zf) goto L_1052451b;
  /* 1052454c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052454f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10524552 mov dword ptr [0x1054f578], eax */
  w32((uint32_t)(0x1054f578), (EAX));
L_10524557:;
  /* 10524557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052455a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052455e je 0x1052456f */
  if (C.zf) goto L_1052456f;
  /* 10524560 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524563 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10524566 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524569 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052456b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1052456d jmp 0x105245aa */
  goto L_105245aa;
L_1052456f:;
  /* 1052456f mov eax, dword ptr [0x1054f580] */
  EAX = (r32((uint32_t)(0x1054f580)));
  /* 10524574 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524577 je 0x1052459a */
  if (C.zf) goto L_1052459a;
  /* 10524579 push 0x1054a64c */
  push32((uint32_t)(0x1054a64cu));
  /* 1052457e push 0 */
  push32((uint32_t)(0x0u));
  /* 10524580 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10524585 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 1052458a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052458c call 0x10522cd0 */
  push32(0x10524591u); f_10522cd0();
  /* 10524591 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524594 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524597 jne 0x1052459a */
  if (!C.zf) goto L_1052459a;
  /* 10524599 int3  */
  x86_unimpl("int3 @ 0x10524599");
L_1052459a:;
  /* 1052459a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052459c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052459e jne 0x1052456f */
  if (!C.zf) goto L_1052456f;
  /* 105245a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105245a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105245a5 mov dword ptr [0x1054f580], eax */
  w32((uint32_t)(0x1054f580), (EAX));
L_105245aa:;
  /* 105245aa cmp dword ptr [0x1054f580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105245b1 je 0x105245c1 */
  if (C.zf) goto L_105245c1;
  /* 105245b3 mov ecx, dword ptr [0x1054f580] */
  ECX = (r32((uint32_t)(0x1054f580)));
  /* 105245b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105245bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105245bf jmp 0x105245c9 */
  goto L_105245c9;
L_105245c1:;
  /* 105245c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105245c4 mov dword ptr [0x1054f578], eax */
  w32((uint32_t)(0x1054f578), (EAX));
L_105245c9:;
  /* 105245c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105245cc mov edx, dword ptr [0x1054f580] */
  EDX = (r32((uint32_t)(0x1054f580)));
  /* 105245d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105245d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105245d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 105245de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105245e1 mov dword ptr [0x1054f580], ecx */
  w32((uint32_t)(0x1054f580), (ECX));
  /* 105245e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105245ea:;
  /* 105245ea pop edi */
  EDI = (pop32());
  /* 105245eb pop esi */
  ESI = (pop32());
  /* 105245ec pop ebx */
  EBX = (pop32());
  /* 105245ed mov esp, ebp */
  ESP = (EBP);
  /* 105245ef pop ebp */
  EBP = (pop32());
  /* 105245f0 ret  */
  ESPCHK(0x105240e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004600 @ 0x10524600 (27 bytes, 13 insns) */
void f_10524600(void) {
  FTRACE(0x10524600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524600 push ebp */
  push32((uint32_t)(EBP));
  /* 10524601 mov ebp, esp */
  EBP = (ESP);
  /* 10524603 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524605 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524607 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052460c push eax */
  push32((uint32_t)(EAX));
  /* 1052460d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524610 push ecx */
  push32((uint32_t)(ECX));
  /* 10524611 call 0x10524620 */
  push32(0x10524616u); f_10524620();
  /* 10524616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524619 pop ebp */
  EBP = (pop32());
  /* 1052461a ret  */
  ESPCHK(0x10524600u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x10524620 (64 bytes, 27 insns) */
void f_10524620(void) {
  FTRACE(0x10524620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524620 push ebp */
  push32((uint32_t)(EBP));
  /* 10524621 mov ebp, esp */
  EBP = (ESP);
  /* 10524623 push ecx */
  push32((uint32_t)(ECX));
  /* 10524624 push 9 */
  push32((uint32_t)(0x9u));
  /* 10524626 call 0x10527610 */
  push32(0x1052462bu); f_10527610();
  /* 1052462b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052462e push 0 */
  push32((uint32_t)(0x0u));
  /* 10524630 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10524633 push eax */
  push32((uint32_t)(EAX));
  /* 10524634 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10524637 push ecx */
  push32((uint32_t)(ECX));
  /* 10524638 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052463b push edx */
  push32((uint32_t)(EDX));
  /* 1052463c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052463f push eax */
  push32((uint32_t)(EAX));
  /* 10524640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524643 push ecx */
  push32((uint32_t)(ECX));
  /* 10524644 call 0x105240e0 */
  push32(0x10524649u); f_105240e0();
  /* 10524649 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052464c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052464f push 9 */
  push32((uint32_t)(0x9u));
  /* 10524651 call 0x105276b0 */
  push32(0x10524656u); f_105276b0();
  /* 10524656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052465c mov esp, ebp */
  ESP = (EBP);
  /* 1052465e pop ebp */
  EBP = (pop32());
  /* 1052465f ret  */
  ESPCHK(0x10524620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x10524660 (19 bytes, 9 insns) */
void f_10524660(void) {
  FTRACE(0x10524660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524660 push ebp */
  push32((uint32_t)(EBP));
  /* 10524661 mov ebp, esp */
  EBP = (ESP);
  /* 10524663 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524668 push eax */
  push32((uint32_t)(EAX));
  /* 10524669 call 0x105246a0 */
  push32(0x1052466eu); f_105246a0();
  /* 1052466e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524671 pop ebp */
  EBP = (pop32());
  /* 10524672 ret  */
  ESPCHK(0x10524660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x10524680 (19 bytes, 9 insns) */
void f_10524680(void) {
  FTRACE(0x10524680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524680 push ebp */
  push32((uint32_t)(EBP));
  /* 10524681 mov ebp, esp */
  EBP = (ESP);
  /* 10524683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524685 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524688 push eax */
  push32((uint32_t)(EAX));
  /* 10524689 call 0x105246d0 */
  push32(0x1052468eu); f_105246d0();
  /* 1052468e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524691 pop ebp */
  EBP = (pop32());
  /* 10524692 ret  */
  ESPCHK(0x10524680u, _esp0);
  ESP += 4; return;
}

/* FUN_100046a0 @ 0x105246a0 (41 bytes, 16 insns) */
void f_105246a0(void) {
  FTRACE(0x105246a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105246a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105246a1 mov ebp, esp */
  EBP = (ESP);
  /* 105246a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 105246a5 call 0x10527610 */
  push32(0x105246aau); f_10527610();
  /* 105246aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105246ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105246b0 push eax */
  push32((uint32_t)(EAX));
  /* 105246b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105246b4 push ecx */
  push32((uint32_t)(ECX));
  /* 105246b5 call 0x105246d0 */
  push32(0x105246bau); f_105246d0();
  /* 105246ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105246bd push 9 */
  push32((uint32_t)(0x9u));
  /* 105246bf call 0x105276b0 */
  push32(0x105246c4u); f_105276b0();
  /* 105246c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105246c7 pop ebp */
  EBP = (pop32());
  /* 105246c8 ret  */
  ESPCHK(0x105246a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x105246d0 (1004 bytes, 342 insns) */
void f_105246d0(void) {
  FTRACE(0x105246d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105246d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105246d1 mov ebp, esp */
  EBP = (ESP);
  /* 105246d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105246d4 push ebx */
  push32((uint32_t)(EBX));
  /* 105246d5 push esi */
  push32((uint32_t)(ESI));
  /* 105246d6 push edi */
  push32((uint32_t)(EDI));
  /* 105246d7 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 105246dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105246df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105246e1 je 0x10524713 */
  if (C.zf) goto L_10524713;
L_105246e3:;
  /* 105246e3 call 0x10524db0 */
  push32(0x105246e8u); f_10524db0();
  /* 105246e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105246ea jne 0x1052470d */
  if (!C.zf) goto L_1052470d;
  /* 105246ec push 0x1054a638 */
  push32((uint32_t)(0x1054a638u));
  /* 105246f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105246f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 105246f8 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 105246fd push 2 */
  push32((uint32_t)(0x2u));
  /* 105246ff call 0x10522cd0 */
  push32(0x10524704u); f_10522cd0();
  /* 10524704 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524707 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052470a jne 0x1052470d */
  if (!C.zf) goto L_1052470d;
  /* 1052470c int3  */
  x86_unimpl("int3 @ 0x1052470c");
L_1052470d:;
  /* 1052470d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052470f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524711 jne 0x105246e3 */
  if (!C.zf) goto L_105246e3;
L_10524713:;
  /* 10524713 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524717 jne 0x1052471e */
  if (!C.zf) goto L_1052471e;
  /* 10524719 jmp 0x10524ab5 */
  goto L_10524ab5;
L_1052471e:;
  /* 1052471e push 0 */
  push32((uint32_t)(0x0u));
  /* 10524720 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524722 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524727 push edx */
  push32((uint32_t)(EDX));
  /* 10524728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052472a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052472d push eax */
  push32((uint32_t)(EAX));
  /* 1052472e push 3 */
  push32((uint32_t)(0x3u));
  /* 10524730 call dword ptr [0x1054dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054dc90))), 0x10524736u);
  /* 10524736 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052473b jne 0x10524768 */
  if (!C.zf) goto L_10524768;
L_1052473d:;
  /* 1052473d push 0x1054a8fc */
  push32((uint32_t)(0x1054a8fcu));
  /* 10524742 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10524747 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524749 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052474b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052474d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052474f call 0x10522cd0 */
  push32(0x10524754u); f_10522cd0();
  /* 10524754 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524757 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052475a jne 0x1052475d */
  if (!C.zf) goto L_1052475d;
  /* 1052475c int3  */
  x86_unimpl("int3 @ 0x1052475c");
L_1052475d:;
  /* 1052475d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052475f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524761 jne 0x1052473d */
  if (!C.zf) goto L_1052473d;
  /* 10524763 jmp 0x10524ab5 */
  goto L_10524ab5;
L_10524768:;
  /* 10524768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052476b push edx */
  push32((uint32_t)(EDX));
  /* 1052476c call 0x10525210 */
  push32(0x10524771u); f_10525210();
  /* 10524771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524776 jne 0x10524799 */
  if (!C.zf) goto L_10524799;
  /* 10524778 push 0x1054a73c */
  push32((uint32_t)(0x1054a73cu));
  /* 1052477d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052477f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10524784 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524789 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052478b call 0x10522cd0 */
  push32(0x10524790u); f_10522cd0();
  /* 10524790 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524793 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524796 jne 0x10524799 */
  if (!C.zf) goto L_10524799;
  /* 10524798 int3  */
  x86_unimpl("int3 @ 0x10524798");
L_10524799:;
  /* 10524799 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052479b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052479d jne 0x10524768 */
  if (!C.zf) goto L_10524768;
  /* 1052479f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105247a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105247a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105247a8:;
  /* 105247a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105247ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105247ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105247b3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105247b6 je 0x105247fb */
  if (C.zf) goto L_105247fb;
  /* 105247b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105247bb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105247bf je 0x105247fb */
  if (C.zf) goto L_105247fb;
  /* 105247c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105247c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105247c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105247cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105247cf je 0x105247fb */
  if (C.zf) goto L_105247fb;
  /* 105247d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105247d4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105247d8 je 0x105247fb */
  if (C.zf) goto L_105247fb;
  /* 105247da push 0x1054a8d4 */
  push32((uint32_t)(0x1054a8d4u));
  /* 105247df push 0 */
  push32((uint32_t)(0x0u));
  /* 105247e1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 105247e6 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 105247eb push 2 */
  push32((uint32_t)(0x2u));
  /* 105247ed call 0x10522cd0 */
  push32(0x105247f2u); f_10522cd0();
  /* 105247f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105247f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105247f8 jne 0x105247fb */
  if (!C.zf) goto L_105247fb;
  /* 105247fa int3  */
  x86_unimpl("int3 @ 0x105247fa");
L_105247fb:;
  /* 105247fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105247fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105247ff jne 0x105247a8 */
  if (!C.zf) goto L_105247a8;
  /* 10524801 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 10524806 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10524809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052480b jne 0x105248d6 */
  if (!C.zf) goto L_105248d6;
  /* 10524811 push 4 */
  push32((uint32_t)(0x4u));
  /* 10524813 mov cl, byte ptr [0x1054da90] */
  CL = (r8((uint32_t)(0x1054da90)));
  /* 10524819 push ecx */
  push32((uint32_t)(ECX));
  /* 1052481a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052481d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524820 push edx */
  push32((uint32_t)(EDX));
  /* 10524821 call 0x10524d20 */
  push32(0x10524826u); f_10524d20();
  /* 10524826 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052482b jne 0x10524870 */
  if (!C.zf) goto L_10524870;
L_1052482d:;
  /* 1052482d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524830 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524833 push eax */
  push32((uint32_t)(EAX));
  /* 10524834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524837 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1052483a push edx */
  push32((uint32_t)(EDX));
  /* 1052483b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052483e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10524841 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524847 mov edx, dword ptr [ecx*4 + 0x1054da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da94)));
  /* 1052484e push edx */
  push32((uint32_t)(EDX));
  /* 1052484f push 0x1054a8a8 */
  push32((uint32_t)(0x1054a8a8u));
  /* 10524854 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524856 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052485a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052485c call 0x10522cd0 */
  push32(0x10524861u); f_10522cd0();
  /* 10524861 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524867 jne 0x1052486a */
  if (!C.zf) goto L_1052486a;
  /* 10524869 int3  */
  x86_unimpl("int3 @ 0x10524869");
L_1052486a:;
  /* 1052486a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052486c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052486e jne 0x1052482d */
  if (!C.zf) goto L_1052482d;
L_10524870:;
  /* 10524870 push 4 */
  push32((uint32_t)(0x4u));
  /* 10524872 mov cl, byte ptr [0x1054da90] */
  CL = (r8((uint32_t)(0x1054da90)));
  /* 10524878 push ecx */
  push32((uint32_t)(ECX));
  /* 10524879 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052487c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1052487f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524882 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10524886 push edx */
  push32((uint32_t)(EDX));
  /* 10524887 call 0x10524d20 */
  push32(0x1052488cu); f_10524d20();
  /* 1052488c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052488f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524891 jne 0x105248d6 */
  if (!C.zf) goto L_105248d6;
L_10524893:;
  /* 10524893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524896 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524899 push eax */
  push32((uint32_t)(EAX));
  /* 1052489a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052489d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105248a0 push edx */
  push32((uint32_t)(EDX));
  /* 105248a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105248a4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105248a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105248ad mov edx, dword ptr [ecx*4 + 0x1054da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da94)));
  /* 105248b4 push edx */
  push32((uint32_t)(EDX));
  /* 105248b5 push 0x1054a87c */
  push32((uint32_t)(0x1054a87cu));
  /* 105248ba push 0 */
  push32((uint32_t)(0x0u));
  /* 105248bc push 0 */
  push32((uint32_t)(0x0u));
  /* 105248be push 0 */
  push32((uint32_t)(0x0u));
  /* 105248c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105248c2 call 0x10522cd0 */
  push32(0x105248c7u); f_10522cd0();
  /* 105248c7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105248ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105248cd jne 0x105248d0 */
  if (!C.zf) goto L_105248d0;
  /* 105248cf int3  */
  x86_unimpl("int3 @ 0x105248cf");
L_105248d0:;
  /* 105248d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105248d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105248d4 jne 0x10524893 */
  if (!C.zf) goto L_10524893;
L_105248d6:;
  /* 105248d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105248d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105248dd jne 0x1052494b */
  if (!C.zf) goto L_1052494b;
L_105248df:;
  /* 105248df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105248e2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105248e9 jne 0x105248f4 */
  if (!C.zf) goto L_105248f4;
  /* 105248eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105248ee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105248f2 je 0x10524915 */
  if (C.zf) goto L_10524915;
L_105248f4:;
  /* 105248f4 push 0x1054a83c */
  push32((uint32_t)(0x1054a83cu));
  /* 105248f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105248fb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10524900 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524905 push 2 */
  push32((uint32_t)(0x2u));
  /* 10524907 call 0x10522cd0 */
  push32(0x1052490cu); f_10522cd0();
  /* 1052490c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052490f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524912 jne 0x10524915 */
  if (!C.zf) goto L_10524915;
  /* 10524914 int3  */
  x86_unimpl("int3 @ 0x10524914");
L_10524915:;
  /* 10524915 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524919 jne 0x105248df */
  if (!C.zf) goto L_105248df;
  /* 1052491b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052491e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10524921 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524924 push eax */
  push32((uint32_t)(EAX));
  /* 10524925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524927 mov cl, byte ptr [0x1054da91] */
  CL = (r8((uint32_t)(0x1054da91)));
  /* 1052492d push ecx */
  push32((uint32_t)(ECX));
  /* 1052492e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524931 push edx */
  push32((uint32_t)(EDX));
  /* 10524932 call 0x10527980 */
  push32(0x10524937u); f_10527980();
  /* 10524937 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052493a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052493d push eax */
  push32((uint32_t)(EAX));
  /* 1052493e call 0x10527d80 */
  push32(0x10524943u); f_10527d80();
  /* 10524943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524946 jmp 0x10524ab5 */
  goto L_10524ab5;
L_1052494b:;
  /* 1052494b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052494e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524952 jne 0x10524961 */
  if (!C.zf) goto L_10524961;
  /* 10524954 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524958 jne 0x10524961 */
  if (!C.zf) goto L_10524961;
  /* 1052495a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10524961:;
  /* 10524961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524964 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524967 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052496a je 0x1052498d */
  if (C.zf) goto L_1052498d;
  /* 1052496c push 0x1054a81c */
  push32((uint32_t)(0x1054a81cu));
  /* 10524971 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524973 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10524978 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 1052497d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052497f call 0x10522cd0 */
  push32(0x10524984u); f_10522cd0();
  /* 10524984 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524987 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052498a jne 0x1052498d */
  if (!C.zf) goto L_1052498d;
  /* 1052498c int3  */
  x86_unimpl("int3 @ 0x1052498c");
L_1052498d:;
  /* 1052498d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052498f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524991 jne 0x10524961 */
  if (!C.zf) goto L_10524961;
  /* 10524993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524996 mov eax, dword ptr [0x1054f584] */
  EAX = (r32((uint32_t)(0x1054f584)));
  /* 1052499b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052499e mov dword ptr [0x1054f584], eax */
  w32((uint32_t)(0x1054f584), (EAX));
  /* 105249a3 mov ecx, dword ptr [0x1054da84] */
  ECX = (r32((uint32_t)(0x1054da84)));
  /* 105249a9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 105249ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105249ae jne 0x10524a8c */
  if (!C.zf) goto L_10524a8c;
  /* 105249b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105249b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105249ba je 0x105249cc */
  if (C.zf) goto L_105249cc;
  /* 105249bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105249bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105249c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105249c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105249c7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105249ca jmp 0x10524a0a */
  goto L_10524a0a;
L_105249cc:;
  /* 105249cc mov ecx, dword ptr [0x1054f578] */
  ECX = (r32((uint32_t)(0x1054f578)));
  /* 105249d2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105249d5 je 0x105249f8 */
  if (C.zf) goto L_105249f8;
  /* 105249d7 push 0x1054a804 */
  push32((uint32_t)(0x1054a804u));
  /* 105249dc push 0 */
  push32((uint32_t)(0x0u));
  /* 105249de push 0x42a */
  push32((uint32_t)(0x42au));
  /* 105249e3 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 105249e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105249ea call 0x10522cd0 */
  push32(0x105249efu); f_10522cd0();
  /* 105249ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105249f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105249f5 jne 0x105249f8 */
  if (!C.zf) goto L_105249f8;
  /* 105249f7 int3  */
  x86_unimpl("int3 @ 0x105249f7");
L_105249f8:;
  /* 105249f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105249fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105249fc jne 0x105249cc */
  if (!C.zf) goto L_105249cc;
  /* 105249fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a01 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10524a04 mov dword ptr [0x1054f578], ecx */
  w32((uint32_t)(0x1054f578), (ECX));
L_10524a0a:;
  /* 10524a0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a0d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524a11 je 0x10524a22 */
  if (C.zf) goto L_10524a22;
  /* 10524a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10524a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10524a1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10524a20 jmp 0x10524a5f */
  goto L_10524a5f;
L_10524a22:;
  /* 10524a22 mov ecx, dword ptr [0x1054f580] */
  ECX = (r32((uint32_t)(0x1054f580)));
  /* 10524a28 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524a2b je 0x10524a4e */
  if (C.zf) goto L_10524a4e;
  /* 10524a2d push 0x1054a7ec */
  push32((uint32_t)(0x1054a7ecu));
  /* 10524a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524a34 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10524a39 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524a3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10524a40 call 0x10522cd0 */
  push32(0x10524a45u); f_10522cd0();
  /* 10524a45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524a48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524a4b jne 0x10524a4e */
  if (!C.zf) goto L_10524a4e;
  /* 10524a4d int3  */
  x86_unimpl("int3 @ 0x10524a4d");
L_10524a4e:;
  /* 10524a4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10524a50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10524a52 jne 0x10524a22 */
  if (!C.zf) goto L_10524a22;
  /* 10524a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10524a59 mov dword ptr [0x1054f580], ecx */
  w32((uint32_t)(0x1054f580), (ECX));
L_10524a5f:;
  /* 10524a5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10524a65 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524a68 push eax */
  push32((uint32_t)(EAX));
  /* 10524a69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524a6b mov cl, byte ptr [0x1054da91] */
  CL = (r8((uint32_t)(0x1054da91)));
  /* 10524a71 push ecx */
  push32((uint32_t)(ECX));
  /* 10524a72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a75 push edx */
  push32((uint32_t)(EDX));
  /* 10524a76 call 0x10527980 */
  push32(0x10524a7bu); f_10527980();
  /* 10524a7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a81 push eax */
  push32((uint32_t)(EAX));
  /* 10524a82 call 0x10527d80 */
  push32(0x10524a87u); f_10527d80();
  /* 10524a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524a8a jmp 0x10524ab5 */
  goto L_10524ab5;
L_10524a8c:;
  /* 10524a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a8f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10524a96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524a99 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10524a9c push eax */
  push32((uint32_t)(EAX));
  /* 10524a9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524a9f mov cl, byte ptr [0x1054da91] */
  CL = (r8((uint32_t)(0x1054da91)));
  /* 10524aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10524aa6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524aa9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524aac push edx */
  push32((uint32_t)(EDX));
  /* 10524aad call 0x10527980 */
  push32(0x10524ab2u); f_10527980();
  /* 10524ab2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10524ab5:;
  /* 10524ab5 pop edi */
  EDI = (pop32());
  /* 10524ab6 pop esi */
  ESI = (pop32());
  /* 10524ab7 pop ebx */
  EBX = (pop32());
  /* 10524ab8 mov esp, ebp */
  ESP = (EBP);
  /* 10524aba pop ebp */
  EBP = (pop32());
  /* 10524abb ret  */
  ESPCHK(0x105246d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x10524ac0 (19 bytes, 9 insns) */
void f_10524ac0(void) {
  FTRACE(0x10524ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10524ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10524ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10524ac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10524ac9 call 0x10524ae0 */
  push32(0x10524aceu); f_10524ae0();
  /* 10524ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524ad1 pop ebp */
  EBP = (pop32());
  /* 10524ad2 ret  */
  ESPCHK(0x10524ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x10524ae0 (342 bytes, 119 insns) */
void f_10524ae0(void) {
  FTRACE(0x10524ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10524ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10524ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 10524ae7 push esi */
  push32((uint32_t)(ESI));
  /* 10524ae8 push edi */
  push32((uint32_t)(EDI));
  /* 10524ae9 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 10524aee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10524af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524af3 je 0x10524b25 */
  if (C.zf) goto L_10524b25;
L_10524af5:;
  /* 10524af5 call 0x10524db0 */
  push32(0x10524afau); f_10524db0();
  /* 10524afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524afc jne 0x10524b1f */
  if (!C.zf) goto L_10524b1f;
  /* 10524afe push 0x1054a638 */
  push32((uint32_t)(0x1054a638u));
  /* 10524b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524b05 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10524b0a push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524b0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10524b11 call 0x10522cd0 */
  push32(0x10524b16u); f_10522cd0();
  /* 10524b16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524b19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524b1c jne 0x10524b1f */
  if (!C.zf) goto L_10524b1f;
  /* 10524b1e int3  */
  x86_unimpl("int3 @ 0x10524b1e");
L_10524b1f:;
  /* 10524b1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524b21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524b23 jne 0x10524af5 */
  if (!C.zf) goto L_10524af5;
L_10524b25:;
  /* 10524b25 push 9 */
  push32((uint32_t)(0x9u));
  /* 10524b27 call 0x10527610 */
  push32(0x10524b2cu); f_10527610();
  /* 10524b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10524b2f:;
  /* 10524b2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524b32 push edx */
  push32((uint32_t)(EDX));
  /* 10524b33 call 0x10525210 */
  push32(0x10524b38u); f_10525210();
  /* 10524b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524b3d jne 0x10524b60 */
  if (!C.zf) goto L_10524b60;
  /* 10524b3f push 0x1054a73c */
  push32((uint32_t)(0x1054a73cu));
  /* 10524b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524b46 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10524b4b push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524b50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10524b52 call 0x10522cd0 */
  push32(0x10524b57u); f_10522cd0();
  /* 10524b57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524b5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524b5d jne 0x10524b60 */
  if (!C.zf) goto L_10524b60;
  /* 10524b5f int3  */
  x86_unimpl("int3 @ 0x10524b5f");
L_10524b60:;
  /* 10524b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524b64 jne 0x10524b2f */
  if (!C.zf) goto L_10524b2f;
  /* 10524b66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524b69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524b6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10524b6f:;
  /* 10524b6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524b72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524b75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10524b7a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524b7d je 0x10524bc2 */
  if (C.zf) goto L_10524bc2;
  /* 10524b7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524b82 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524b86 je 0x10524bc2 */
  if (C.zf) goto L_10524bc2;
  /* 10524b88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524b8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524b8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10524b93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524b96 je 0x10524bc2 */
  if (C.zf) goto L_10524bc2;
  /* 10524b98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524b9b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524b9f je 0x10524bc2 */
  if (C.zf) goto L_10524bc2;
  /* 10524ba1 push 0x1054a8d4 */
  push32((uint32_t)(0x1054a8d4u));
  /* 10524ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ba8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10524bad push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524bb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10524bb4 call 0x10522cd0 */
  push32(0x10524bb9u); f_10522cd0();
  /* 10524bb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524bbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524bbf jne 0x10524bc2 */
  if (!C.zf) goto L_10524bc2;
  /* 10524bc1 int3  */
  x86_unimpl("int3 @ 0x10524bc1");
L_10524bc2:;
  /* 10524bc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10524bc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10524bc6 jne 0x10524b6f */
  if (!C.zf) goto L_10524b6f;
  /* 10524bc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524bcb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524bcf jne 0x10524bde */
  if (!C.zf) goto L_10524bde;
  /* 10524bd1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524bd5 jne 0x10524bde */
  if (!C.zf) goto L_10524bde;
  /* 10524bd7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10524bde:;
  /* 10524bde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524be1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524be5 je 0x10524c19 */
  if (C.zf) goto L_10524c19;
L_10524be7:;
  /* 10524be7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524bea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524bed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524bf0 je 0x10524c13 */
  if (C.zf) goto L_10524c13;
  /* 10524bf2 push 0x1054a81c */
  push32((uint32_t)(0x1054a81cu));
  /* 10524bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524bf9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10524bfe push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10524c05 call 0x10522cd0 */
  push32(0x10524c0au); f_10522cd0();
  /* 10524c0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524c10 jne 0x10524c13 */
  if (!C.zf) goto L_10524c13;
  /* 10524c12 int3  */
  x86_unimpl("int3 @ 0x10524c12");
L_10524c13:;
  /* 10524c13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524c15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524c17 jne 0x10524be7 */
  if (!C.zf) goto L_10524be7;
L_10524c19:;
  /* 10524c19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524c1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10524c1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10524c22 push 9 */
  push32((uint32_t)(0x9u));
  /* 10524c24 call 0x105276b0 */
  push32(0x10524c29u); f_105276b0();
  /* 10524c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524c2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524c2f pop edi */
  EDI = (pop32());
  /* 10524c30 pop esi */
  ESI = (pop32());
  /* 10524c31 pop ebx */
  EBX = (pop32());
  /* 10524c32 mov esp, ebp */
  ESP = (EBP);
  /* 10524c34 pop ebp */
  EBP = (pop32());
  /* 10524c35 ret  */
  ESPCHK(0x10524ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x10524c40 (28 bytes, 11 insns) */
void f_10524c40(void) {
  FTRACE(0x10524c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10524c41 mov ebp, esp */
  EBP = (ESP);
  /* 10524c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10524c44 mov eax, dword ptr [0x1054da8c] */
  EAX = (r32((uint32_t)(0x1054da8c)));
  /* 10524c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10524c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524c4f mov dword ptr [0x1054da8c], ecx */
  w32((uint32_t)(0x1054da8c), (ECX));
  /* 10524c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524c58 mov esp, ebp */
  ESP = (EBP);
  /* 10524c5a pop ebp */
  EBP = (pop32());
  /* 10524c5b ret  */
  ESPCHK(0x10524c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x10524c60 (157 bytes, 59 insns) */
void f_10524c60(void) {
  FTRACE(0x10524c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10524c61 mov ebp, esp */
  EBP = (ESP);
  /* 10524c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10524c64 push ebx */
  push32((uint32_t)(EBX));
  /* 10524c65 push esi */
  push32((uint32_t)(ESI));
  /* 10524c66 push edi */
  push32((uint32_t)(EDI));
  /* 10524c67 push 9 */
  push32((uint32_t)(0x9u));
  /* 10524c69 call 0x10527610 */
  push32(0x10524c6eu); f_10527610();
  /* 10524c6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524c74 push eax */
  push32((uint32_t)(EAX));
  /* 10524c75 call 0x10525210 */
  push32(0x10524c7au); f_10525210();
  /* 10524c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524c7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524c7f je 0x10524cec */
  if (C.zf) goto L_10524cec;
  /* 10524c81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524c84 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524c87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10524c8a:;
  /* 10524c8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524c8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524c90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10524c95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524c98 je 0x10524cdd */
  if (C.zf) goto L_10524cdd;
  /* 10524c9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524c9d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524ca1 je 0x10524cdd */
  if (C.zf) goto L_10524cdd;
  /* 10524ca3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524ca6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10524ca9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10524cae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524cb1 je 0x10524cdd */
  if (C.zf) goto L_10524cdd;
  /* 10524cb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524cb6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524cba je 0x10524cdd */
  if (C.zf) goto L_10524cdd;
  /* 10524cbc push 0x1054a8d4 */
  push32((uint32_t)(0x1054a8d4u));
  /* 10524cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524cc3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10524cc8 push 0x1054a62c */
  push32((uint32_t)(0x1054a62cu));
  /* 10524ccd push 2 */
  push32((uint32_t)(0x2u));
  /* 10524ccf call 0x10522cd0 */
  push32(0x10524cd4u); f_10522cd0();
  /* 10524cd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524cd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524cda jne 0x10524cdd */
  if (!C.zf) goto L_10524cdd;
  /* 10524cdc int3  */
  x86_unimpl("int3 @ 0x10524cdc");
L_10524cdd:;
  /* 10524cdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10524cdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10524ce1 jne 0x10524c8a */
  if (!C.zf) goto L_10524c8a;
  /* 10524ce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524ce6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524ce9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10524cec:;
  /* 10524cec push 9 */
  push32((uint32_t)(0x9u));
  /* 10524cee call 0x105276b0 */
  push32(0x10524cf3u); f_105276b0();
  /* 10524cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524cf6 pop edi */
  EDI = (pop32());
  /* 10524cf7 pop esi */
  ESI = (pop32());
  /* 10524cf8 pop ebx */
  EBX = (pop32());
  /* 10524cf9 mov esp, ebp */
  ESP = (EBP);
  /* 10524cfb pop ebp */
  EBP = (pop32());
  /* 10524cfc ret  */
  ESPCHK(0x10524c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d00 @ 0x10524d00 (28 bytes, 11 insns) */
void f_10524d00(void) {
  FTRACE(0x10524d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10524d01 mov ebp, esp */
  EBP = (ESP);
  /* 10524d03 push ecx */
  push32((uint32_t)(ECX));
  /* 10524d04 mov eax, dword ptr [0x1054dc90] */
  EAX = (r32((uint32_t)(0x1054dc90)));
  /* 10524d09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10524d0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524d0f mov dword ptr [0x1054dc90], ecx */
  w32((uint32_t)(0x1054dc90), (ECX));
  /* 10524d15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524d18 mov esp, ebp */
  ESP = (EBP);
  /* 10524d1a pop ebp */
  EBP = (pop32());
  /* 10524d1b ret  */
  ESPCHK(0x10524d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x10524d20 (136 bytes, 55 insns) */
void f_10524d20(void) {
  FTRACE(0x10524d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10524d21 mov ebp, esp */
  EBP = (ESP);
  /* 10524d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10524d24 push ebx */
  push32((uint32_t)(EBX));
  /* 10524d25 push esi */
  push32((uint32_t)(ESI));
  /* 10524d26 push edi */
  push32((uint32_t)(EDI));
  /* 10524d27 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10524d2e:;
  /* 10524d2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524d31 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10524d34 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524d37 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10524d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524d3c je 0x10524d9e */
  if (C.zf) goto L_10524d9e;
  /* 10524d3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524d41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524d43 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10524d45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524d48 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524d4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524d51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524d54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10524d57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524d59 je 0x10524d9c */
  if (C.zf) goto L_10524d9c;
L_10524d5b:;
  /* 10524d5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10524d5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10524d63 push eax */
  push32((uint32_t)(EAX));
  /* 10524d64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524d67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10524d69 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10524d6c push edx */
  push32((uint32_t)(EDX));
  /* 10524d6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10524d70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524d73 push eax */
  push32((uint32_t)(EAX));
  /* 10524d74 push 0x1054a918 */
  push32((uint32_t)(0x1054a918u));
  /* 10524d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10524d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10524d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10524d81 call 0x10522cd0 */
  push32(0x10524d86u); f_10522cd0();
  /* 10524d86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524d89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524d8c jne 0x10524d8f */
  if (!C.zf) goto L_10524d8f;
  /* 10524d8e int3  */
  x86_unimpl("int3 @ 0x10524d8e");
L_10524d8f:;
  /* 10524d8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524d91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524d93 jne 0x10524d5b */
  if (!C.zf) goto L_10524d5b;
  /* 10524d95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10524d9c:;
  /* 10524d9c jmp 0x10524d2e */
  goto L_10524d2e;
L_10524d9e:;
  /* 10524d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10524da1 pop edi */
  EDI = (pop32());
  /* 10524da2 pop esi */
  ESI = (pop32());
  /* 10524da3 pop ebx */
  EBX = (pop32());
  /* 10524da4 mov esp, ebp */
  ESP = (EBP);
  /* 10524da6 pop ebp */
  EBP = (pop32());
  /* 10524da7 ret  */
  ESPCHK(0x10524d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x10524db0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10524db0(void) {
  FTRACE(0x10524db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10524db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10524db1 mov ebp, esp */
  EBP = (ESP);
  /* 10524db3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10524db6 push ebx */
  push32((uint32_t)(EBX));
  /* 10524db7 push esi */
  push32((uint32_t)(ESI));
  /* 10524db8 push edi */
  push32((uint32_t)(EDI));
  /* 10524db9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10524dc0 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 10524dc5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10524dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524dca jne 0x10524dd6 */
  if (!C.zf) goto L_10524dd6;
  /* 10524dcc mov eax, 1 */
  EAX = (0x1u);
  /* 10524dd1 jmp 0x10525108 */
  goto L_10525108;
L_10524dd6:;
  /* 10524dd6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10524dd8 call 0x10527610 */
  push32(0x10524dddu); f_10527610();
  /* 10524ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524de0 call 0x10527df0 */
  push32(0x10524de5u); f_10527df0();
  /* 10524de5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10524de8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524dec je 0x10524ef9 */
  if (C.zf) goto L_10524ef9;
  /* 10524df2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524df6 je 0x10524ef9 */
  if (C.zf) goto L_10524ef9;
  /* 10524dfc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10524dff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10524e02 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10524e05 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524e08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10524e0b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524e0f ja 0x10524ec2 */
  if ((!C.cf&&!C.zf)) goto L_10524ec2;
  /* 10524e15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10524e18 jmp dword ptr [eax*4 + 0x1052510f] */
  switch (EAX) {
    case 0: goto L_10524e9a;
    case 1: goto L_10524e72;
    case 2: goto L_10524e4a;
    case 3: goto L_10524e1f;
    default: x86_unimpl("switch@0x10524e18 out of table"); return;
  }
L_10524e1f:;
  /* 10524e1f push 0x1054aa6c */
  push32((uint32_t)(0x1054aa6cu));
  /* 10524e24 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10524e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e31 call 0x10522cd0 */
  push32(0x10524e36u); f_10522cd0();
  /* 10524e36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524e39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524e3c jne 0x10524e3f */
  if (!C.zf) goto L_10524e3f;
  /* 10524e3e int3  */
  x86_unimpl("int3 @ 0x10524e3e");
L_10524e3f:;
  /* 10524e3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524e41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524e43 jne 0x10524e1f */
  if (!C.zf) goto L_10524e1f;
  /* 10524e45 jmp 0x10524ee8 */
  goto L_10524ee8;
L_10524e4a:;
  /* 10524e4a push 0x1054aa48 */
  push32((uint32_t)(0x1054aa48u));
  /* 10524e4f push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10524e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e5c call 0x10522cd0 */
  push32(0x10524e61u); f_10522cd0();
  /* 10524e61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524e64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524e67 jne 0x10524e6a */
  if (!C.zf) goto L_10524e6a;
  /* 10524e69 int3  */
  x86_unimpl("int3 @ 0x10524e69");
L_10524e6a:;
  /* 10524e6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10524e6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10524e6e jne 0x10524e4a */
  if (!C.zf) goto L_10524e4a;
  /* 10524e70 jmp 0x10524ee8 */
  goto L_10524ee8;
L_10524e72:;
  /* 10524e72 push 0x1054aa24 */
  push32((uint32_t)(0x1054aa24u));
  /* 10524e77 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10524e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524e84 call 0x10522cd0 */
  push32(0x10524e89u); f_10522cd0();
  /* 10524e89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524e8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524e8f jne 0x10524e92 */
  if (!C.zf) goto L_10524e92;
  /* 10524e91 int3  */
  x86_unimpl("int3 @ 0x10524e91");
L_10524e92:;
  /* 10524e92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524e96 jne 0x10524e72 */
  if (!C.zf) goto L_10524e72;
  /* 10524e98 jmp 0x10524ee8 */
  goto L_10524ee8;
L_10524e9a:;
  /* 10524e9a push 0x1054aa00 */
  push32((uint32_t)(0x1054aa00u));
  /* 10524e9f push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10524ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10524eac call 0x10522cd0 */
  push32(0x10524eb1u); f_10522cd0();
  /* 10524eb1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524eb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524eb7 jne 0x10524eba */
  if (!C.zf) goto L_10524eba;
  /* 10524eb9 int3  */
  x86_unimpl("int3 @ 0x10524eb9");
L_10524eba:;
  /* 10524eba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10524ebc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10524ebe jne 0x10524e9a */
  if (!C.zf) goto L_10524e9a;
  /* 10524ec0 jmp 0x10524ee8 */
  goto L_10524ee8;
L_10524ec2:;
  /* 10524ec2 push 0x1054a9d4 */
  push32((uint32_t)(0x1054a9d4u));
  /* 10524ec7 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10524ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ece push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524ed4 call 0x10522cd0 */
  push32(0x10524ed9u); f_10522cd0();
  /* 10524ed9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524edc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524edf jne 0x10524ee2 */
  if (!C.zf) goto L_10524ee2;
  /* 10524ee1 int3  */
  x86_unimpl("int3 @ 0x10524ee1");
L_10524ee2:;
  /* 10524ee2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10524ee4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10524ee6 jne 0x10524ec2 */
  if (!C.zf) goto L_10524ec2;
L_10524ee8:;
  /* 10524ee8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10524eea call 0x105276b0 */
  push32(0x10524eefu); f_105276b0();
  /* 10524eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524ef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524ef4 jmp 0x10525108 */
  goto L_10525108;
L_10524ef9:;
  /* 10524ef9 mov eax, dword ptr [0x1054f580] */
  EAX = (r32((uint32_t)(0x1054f580)));
  /* 10524efe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10524f01 jmp 0x10524f0b */
  goto L_10524f0b;
L_10524f03:;
  /* 10524f03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10524f08 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10524f0b:;
  /* 10524f0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524f0f je 0x105250fb */
  if (C.zf) goto L_105250fb;
  /* 10524f15 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10524f1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f1f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10524f22 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524f28 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524f2b je 0x10524f50 */
  if (C.zf) goto L_10524f50;
  /* 10524f2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f30 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524f34 je 0x10524f50 */
  if (C.zf) goto L_10524f50;
  /* 10524f36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f39 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10524f3c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524f42 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524f45 je 0x10524f50 */
  if (C.zf) goto L_10524f50;
  /* 10524f47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f4a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524f4e jne 0x10524f68 */
  if (!C.zf) goto L_10524f68;
L_10524f50:;
  /* 10524f50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f53 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10524f56 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10524f5c mov edx, dword ptr [ecx*4 + 0x1054da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da94)));
  /* 10524f63 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10524f66 jmp 0x10524f6f */
  goto L_10524f6f;
L_10524f68:;
  /* 10524f68 mov dword ptr [ebp - 0x14], 0x1054a9cc */
  w32((uint32_t)(EBP + -0x14), (0x1054a9ccu));
L_10524f6f:;
  /* 10524f6f push 4 */
  push32((uint32_t)(0x4u));
  /* 10524f71 mov al, byte ptr [0x1054da90] */
  AL = (r8((uint32_t)(0x1054da90)));
  /* 10524f76 push eax */
  push32((uint32_t)(EAX));
  /* 10524f77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f7a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524f7d push ecx */
  push32((uint32_t)(ECX));
  /* 10524f7e call 0x10524d20 */
  push32(0x10524f83u); f_10524d20();
  /* 10524f83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524f86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524f88 jne 0x10524fc4 */
  if (!C.zf) goto L_10524fc4;
L_10524f8a:;
  /* 10524f8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f8d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524f90 push edx */
  push32((uint32_t)(EDX));
  /* 10524f91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524f94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10524f97 push ecx */
  push32((uint32_t)(ECX));
  /* 10524f98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10524f9b push edx */
  push32((uint32_t)(EDX));
  /* 10524f9c push 0x1054a8a8 */
  push32((uint32_t)(0x1054a8a8u));
  /* 10524fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10524fa9 call 0x10522cd0 */
  push32(0x10524faeu); f_10522cd0();
  /* 10524fae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524fb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10524fb4 jne 0x10524fb7 */
  if (!C.zf) goto L_10524fb7;
  /* 10524fb6 int3  */
  x86_unimpl("int3 @ 0x10524fb6");
L_10524fb7:;
  /* 10524fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10524fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524fbb jne 0x10524f8a */
  if (!C.zf) goto L_10524f8a;
  /* 10524fbd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10524fc4:;
  /* 10524fc4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10524fc6 mov cl, byte ptr [0x1054da90] */
  CL = (r8((uint32_t)(0x1054da90)));
  /* 10524fcc push ecx */
  push32((uint32_t)(ECX));
  /* 10524fcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524fd0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10524fd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524fd6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10524fda push edx */
  push32((uint32_t)(EDX));
  /* 10524fdb call 0x10524d20 */
  push32(0x10524fe0u); f_10524d20();
  /* 10524fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10524fe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10524fe5 jne 0x10525021 */
  if (!C.zf) goto L_10525021;
L_10524fe7:;
  /* 10524fe7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524fea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10524fed push eax */
  push32((uint32_t)(EAX));
  /* 10524fee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10524ff1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10524ff4 push edx */
  push32((uint32_t)(EDX));
  /* 10524ff5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10524ff8 push eax */
  push32((uint32_t)(EAX));
  /* 10524ff9 push 0x1054a87c */
  push32((uint32_t)(0x1054a87cu));
  /* 10524ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10525000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525006 call 0x10522cd0 */
  push32(0x1052500bu); f_10522cd0();
  /* 1052500b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052500e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525011 jne 0x10525014 */
  if (!C.zf) goto L_10525014;
  /* 10525013 int3  */
  x86_unimpl("int3 @ 0x10525013");
L_10525014:;
  /* 10525014 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10525016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525018 jne 0x10524fe7 */
  if (!C.zf) goto L_10524fe7;
  /* 1052501a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10525021:;
  /* 10525021 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525024 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525028 jne 0x1052507a */
  if (!C.zf) goto L_1052507a;
  /* 1052502a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052502d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10525030 push ecx */
  push32((uint32_t)(ECX));
  /* 10525031 mov dl, byte ptr [0x1054da91] */
  DL = (r8((uint32_t)(0x1054da91)));
  /* 10525037 push edx */
  push32((uint32_t)(EDX));
  /* 10525038 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052503b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052503e push eax */
  push32((uint32_t)(EAX));
  /* 1052503f call 0x10524d20 */
  push32(0x10525044u); f_10524d20();
  /* 10525044 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525049 jne 0x1052507a */
  if (!C.zf) goto L_1052507a;
L_1052504b:;
  /* 1052504b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052504e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525051 push ecx */
  push32((uint32_t)(ECX));
  /* 10525052 push 0x1054a9a0 */
  push32((uint32_t)(0x1054a9a0u));
  /* 10525057 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525059 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052505b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052505d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052505f call 0x10522cd0 */
  push32(0x10525064u); f_10522cd0();
  /* 10525064 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525067 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052506a jne 0x1052506d */
  if (!C.zf) goto L_1052506d;
  /* 1052506c int3  */
  x86_unimpl("int3 @ 0x1052506c");
L_1052506d:;
  /* 1052506d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052506f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525071 jne 0x1052504b */
  if (!C.zf) goto L_1052504b;
  /* 10525073 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1052507a:;
  /* 1052507a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052507e jne 0x105250f6 */
  if (!C.zf) goto L_105250f6;
  /* 10525080 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525083 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525087 je 0x105250bc */
  if (C.zf) goto L_105250bc;
L_10525089:;
  /* 10525089 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052508c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052508f push edx */
  push32((uint32_t)(EDX));
  /* 10525090 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525093 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10525096 push ecx */
  push32((uint32_t)(ECX));
  /* 10525097 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052509a push edx */
  push32((uint32_t)(EDX));
  /* 1052509b push 0x1054a980 */
  push32((uint32_t)(0x1054a980u));
  /* 105250a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250a8 call 0x10522cd0 */
  push32(0x105250adu); f_10522cd0();
  /* 105250ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105250b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105250b3 jne 0x105250b6 */
  if (!C.zf) goto L_105250b6;
  /* 105250b5 int3  */
  x86_unimpl("int3 @ 0x105250b5");
L_105250b6:;
  /* 105250b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105250b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105250ba jne 0x10525089 */
  if (!C.zf) goto L_10525089;
L_105250bc:;
  /* 105250bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105250bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105250c2 push edx */
  push32((uint32_t)(EDX));
  /* 105250c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105250c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105250c9 push eax */
  push32((uint32_t)(EAX));
  /* 105250ca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105250cd push ecx */
  push32((uint32_t)(ECX));
  /* 105250ce push 0x1054a954 */
  push32((uint32_t)(0x1054a954u));
  /* 105250d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105250db call 0x10522cd0 */
  push32(0x105250e0u); f_10522cd0();
  /* 105250e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105250e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105250e6 jne 0x105250e9 */
  if (!C.zf) goto L_105250e9;
  /* 105250e8 int3  */
  x86_unimpl("int3 @ 0x105250e8");
L_105250e9:;
  /* 105250e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105250eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105250ed jne 0x105250bc */
  if (!C.zf) goto L_105250bc;
  /* 105250ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105250f6:;
  /* 105250f6 jmp 0x10524f03 */
  goto L_10524f03;
L_105250fb:;
  /* 105250fb push 9 */
  push32((uint32_t)(0x9u));
  /* 105250fd call 0x105276b0 */
  push32(0x10525102u); f_105276b0();
  /* 10525102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10525108:;
  /* 10525108 pop edi */
  EDI = (pop32());
  /* 10525109 pop esi */
  ESI = (pop32());
  /* 1052510a pop ebx */
  EBX = (pop32());
  /* 1052510b mov esp, ebp */
  ESP = (EBP);
  /* 1052510d pop ebp */
  EBP = (pop32());
  /* 1052510e ret  */
  ESPCHK(0x10524db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x10525120 (34 bytes, 13 insns) */
void f_10525120(void) {
  FTRACE(0x10525120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525120 push ebp */
  push32((uint32_t)(EBP));
  /* 10525121 mov ebp, esp */
  EBP = (ESP);
  /* 10525123 push ecx */
  push32((uint32_t)(ECX));
  /* 10525124 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 10525129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052512c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525130 je 0x1052513b */
  if (C.zf) goto L_1052513b;
  /* 10525132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525135 mov dword ptr [0x1054da84], ecx */
  w32((uint32_t)(0x1054da84), (ECX));
L_1052513b:;
  /* 1052513b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052513e mov esp, ebp */
  ESP = (EBP);
  /* 10525140 pop ebp */
  EBP = (pop32());
  /* 10525141 ret  */
  ESPCHK(0x10525120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005150 @ 0x10525150 (103 bytes, 38 insns) */
void f_10525150(void) {
  FTRACE(0x10525150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525150 push ebp */
  push32((uint32_t)(EBP));
  /* 10525151 mov ebp, esp */
  EBP = (ESP);
  /* 10525153 push ecx */
  push32((uint32_t)(ECX));
  /* 10525154 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 10525159 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1052515c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052515e jne 0x10525162 */
  if (!C.zf) goto L_10525162;
  /* 10525160 jmp 0x105251b3 */
  goto L_105251b3;
L_10525162:;
  /* 10525162 push 9 */
  push32((uint32_t)(0x9u));
  /* 10525164 call 0x10527610 */
  push32(0x10525169u); f_10527610();
  /* 10525169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052516c mov ecx, dword ptr [0x1054f580] */
  ECX = (r32((uint32_t)(0x1054f580)));
  /* 10525172 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10525175 jmp 0x1052517f */
  goto L_1052517f;
L_10525177:;
  /* 10525177 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052517a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052517c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052517f:;
  /* 1052517f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525183 je 0x105251a9 */
  if (C.zf) goto L_105251a9;
  /* 10525185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525188 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1052518b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10525191 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525194 jne 0x105251a7 */
  if (!C.zf) goto L_105251a7;
  /* 10525196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525199 push eax */
  push32((uint32_t)(EAX));
  /* 1052519a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052519d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105251a0 push ecx */
  push32((uint32_t)(ECX));
  /* 105251a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x105251a4u);
  /* 105251a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105251a7:;
  /* 105251a7 jmp 0x10525177 */
  goto L_10525177;
L_105251a9:;
  /* 105251a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 105251ab call 0x105276b0 */
  push32(0x105251b0u); f_105276b0();
  /* 105251b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105251b3:;
  /* 105251b3 mov esp, ebp */
  ESP = (EBP);
  /* 105251b5 pop ebp */
  EBP = (pop32());
  /* 105251b6 ret  */
  ESPCHK(0x10525150u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x105251c0 (75 bytes, 28 insns) */
void f_105251c0(void) {
  FTRACE(0x105251c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105251c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105251c1 mov ebp, esp */
  EBP = (ESP);
  /* 105251c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105251c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105251c8 je 0x105251fd */
  if (C.zf) goto L_105251fd;
  /* 105251ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105251cd push eax */
  push32((uint32_t)(EAX));
  /* 105251ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105251d1 push ecx */
  push32((uint32_t)(ECX));
  /* 105251d2 call dword ptr [0x105523ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523ac))), 0x105251d8u);
  /* 105251d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105251da jne 0x105251fd */
  if (!C.zf) goto L_105251fd;
  /* 105251dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105251e0 je 0x105251f4 */
  if (C.zf) goto L_105251f4;
  /* 105251e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105251e5 push edx */
  push32((uint32_t)(EDX));
  /* 105251e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105251e9 push eax */
  push32((uint32_t)(EAX));
  /* 105251ea call dword ptr [0x105523a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a8))), 0x105251f0u);
  /* 105251f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105251f2 jne 0x105251fd */
  if (!C.zf) goto L_105251fd;
L_105251f4:;
  /* 105251f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105251fb jmp 0x10525204 */
  goto L_10525204;
L_105251fd:;
  /* 105251fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10525204:;
  /* 10525204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525207 mov esp, ebp */
  ESP = (EBP);
  /* 10525209 pop ebp */
  EBP = (pop32());
  /* 1052520a ret  */
  ESPCHK(0x105251c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x10525210 (134 bytes, 50 insns) */
void f_10525210(void) {
  FTRACE(0x10525210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525210 push ebp */
  push32((uint32_t)(EBP));
  /* 10525211 mov ebp, esp */
  EBP = (ESP);
  /* 10525213 push ecx */
  push32((uint32_t)(ECX));
  /* 10525214 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525218 jne 0x1052521e */
  if (!C.zf) goto L_1052521e;
  /* 1052521a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052521c jmp 0x10525292 */
  goto L_10525292;
L_1052521e:;
  /* 1052521e push 1 */
  push32((uint32_t)(0x1u));
  /* 10525220 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10525222 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525225 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525228 push eax */
  push32((uint32_t)(EAX));
  /* 10525229 call 0x105251c0 */
  push32(0x1052522eu); f_105251c0();
  /* 1052522e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525233 jne 0x10525239 */
  if (!C.zf) goto L_10525239;
  /* 10525235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10525237 jmp 0x10525292 */
  goto L_10525292;
L_10525239:;
  /* 10525239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052523c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052523f push ecx */
  push32((uint32_t)(ECX));
  /* 10525240 call 0x10527f10 */
  push32(0x10525245u); f_10527f10();
  /* 10525245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525248 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052524b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052524f je 0x10525266 */
  if (C.zf) goto L_10525266;
  /* 10525251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525254 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525257 push edx */
  push32((uint32_t)(EDX));
  /* 10525258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052525b push eax */
  push32((uint32_t)(EAX));
  /* 1052525c call 0x10527f70 */
  push32(0x10525261u); f_10527f70();
  /* 10525261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525264 jmp 0x10525292 */
  goto L_10525292;
L_10525266:;
  /* 10525266 mov ecx, dword ptr [0x1054f534] */
  ECX = (r32((uint32_t)(0x1054f534)));
  /* 1052526c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10525272 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525274 je 0x1052527d */
  if (C.zf) goto L_1052527d;
  /* 10525276 mov eax, 1 */
  EAX = (0x1u);
  /* 1052527b jmp 0x10525292 */
  goto L_10525292;
L_1052527d:;
  /* 1052527d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525280 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525283 push edx */
  push32((uint32_t)(EDX));
  /* 10525284 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525286 mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 1052528b push eax */
  push32((uint32_t)(EAX));
  /* 1052528c call dword ptr [0x105523b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b0))), 0x10525292u);
L_10525292:;
  /* 10525292 mov esp, ebp */
  ESP = (EBP);
  /* 10525294 pop ebp */
  EBP = (pop32());
  /* 10525295 ret  */
  ESPCHK(0x10525210u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x105252a0 (227 bytes, 80 insns) */
void f_105252a0(void) {
  FTRACE(0x105252a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105252a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105252a1 mov ebp, esp */
  EBP = (ESP);
  /* 105252a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105252a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105252a7 push eax */
  push32((uint32_t)(EAX));
  /* 105252a8 call 0x10525210 */
  push32(0x105252adu); f_10525210();
  /* 105252ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105252b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105252b2 jne 0x105252bb */
  if (!C.zf) goto L_105252bb;
  /* 105252b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105252b6 jmp 0x1052537f */
  goto L_1052537f;
L_105252bb:;
  /* 105252bb push 9 */
  push32((uint32_t)(0x9u));
  /* 105252bd call 0x10527610 */
  push32(0x105252c2u); f_10527610();
  /* 105252c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105252c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105252c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105252cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105252ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105252d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105252d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105252d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105252dc je 0x10525300 */
  if (C.zf) goto L_10525300;
  /* 105252de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105252e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105252e5 je 0x10525300 */
  if (C.zf) goto L_10525300;
  /* 105252e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105252ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105252ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105252f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105252f5 je 0x10525300 */
  if (C.zf) goto L_10525300;
  /* 105252f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105252fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105252fe jne 0x10525373 */
  if (!C.zf) goto L_10525373;
L_10525300:;
  /* 10525300 push 1 */
  push32((uint32_t)(0x1u));
  /* 10525302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525305 push edx */
  push32((uint32_t)(EDX));
  /* 10525306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525309 push eax */
  push32((uint32_t)(EAX));
  /* 1052530a call 0x105251c0 */
  push32(0x1052530fu); f_105251c0();
  /* 1052530f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525314 je 0x10525373 */
  if (C.zf) goto L_10525373;
  /* 10525316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525319 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1052531c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052531f jne 0x10525373 */
  if (!C.zf) goto L_10525373;
  /* 10525321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525324 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10525327 cmp ecx, dword ptr [0x1054da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052532d jg 0x10525373 */
  if ((!C.zf&&C.sf==C.of)) goto L_10525373;
  /* 1052532f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525333 je 0x10525340 */
  if (C.zf) goto L_10525340;
  /* 10525335 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052533b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1052533e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10525340:;
  /* 10525340 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525344 je 0x10525351 */
  if (C.zf) goto L_10525351;
  /* 10525346 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10525349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052534c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052534f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10525351:;
  /* 10525351 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525355 je 0x10525362 */
  if (C.zf) goto L_10525362;
  /* 10525357 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052535a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052535d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10525360 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10525362:;
  /* 10525362 push 9 */
  push32((uint32_t)(0x9u));
  /* 10525364 call 0x105276b0 */
  push32(0x10525369u); f_105276b0();
  /* 10525369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052536c mov eax, 1 */
  EAX = (0x1u);
  /* 10525371 jmp 0x1052537f */
  goto L_1052537f;
L_10525373:;
  /* 10525373 push 9 */
  push32((uint32_t)(0x9u));
  /* 10525375 call 0x105276b0 */
  push32(0x1052537au); f_105276b0();
  /* 1052537a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052537d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052537f:;
  /* 1052537f mov esp, ebp */
  ESP = (EBP);
  /* 10525381 pop ebp */
  EBP = (pop32());
  /* 10525382 ret  */
  ESPCHK(0x105252a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005390 @ 0x10525390 (28 bytes, 11 insns) */
void f_10525390(void) {
  FTRACE(0x10525390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525390 push ebp */
  push32((uint32_t)(EBP));
  /* 10525391 mov ebp, esp */
  EBP = (ESP);
  /* 10525393 push ecx */
  push32((uint32_t)(ECX));
  /* 10525394 mov eax, dword ptr [0x10550ed8] */
  EAX = (r32((uint32_t)(0x10550ed8)));
  /* 10525399 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052539c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052539f mov dword ptr [0x10550ed8], ecx */
  w32((uint32_t)(0x10550ed8), (ECX));
  /* 105253a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105253a8 mov esp, ebp */
  ESP = (EBP);
  /* 105253aa pop ebp */
  EBP = (pop32());
  /* 105253ab ret  */
  ESPCHK(0x10525390u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b0 @ 0x105253b0 (362 bytes, 116 insns) */
void f_105253b0(void) {
  FTRACE(0x105253b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105253b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105253b1 mov ebp, esp */
  EBP = (ESP);
  /* 105253b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105253b6 push ebx */
  push32((uint32_t)(EBX));
  /* 105253b7 push esi */
  push32((uint32_t)(ESI));
  /* 105253b8 push edi */
  push32((uint32_t)(EDI));
  /* 105253b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105253bd jne 0x105253ea */
  if (!C.zf) goto L_105253ea;
L_105253bf:;
  /* 105253bf push 0x1054aab4 */
  push32((uint32_t)(0x1054aab4u));
  /* 105253c4 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 105253c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105253cb push 0 */
  push32((uint32_t)(0x0u));
  /* 105253cd push 0 */
  push32((uint32_t)(0x0u));
  /* 105253cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105253d1 call 0x10522cd0 */
  push32(0x105253d6u); f_10522cd0();
  /* 105253d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105253d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105253dc jne 0x105253df */
  if (!C.zf) goto L_105253df;
  /* 105253de int3  */
  x86_unimpl("int3 @ 0x105253de");
L_105253df:;
  /* 105253df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105253e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105253e3 jne 0x105253bf */
  if (!C.zf) goto L_105253bf;
  /* 105253e5 jmp 0x10525513 */
  goto L_10525513;
L_105253ea:;
  /* 105253ea push 9 */
  push32((uint32_t)(0x9u));
  /* 105253ec call 0x10527610 */
  push32(0x105253f1u); f_10527610();
  /* 105253f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105253f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105253f7 mov edx, dword ptr [0x1054f580] */
  EDX = (r32((uint32_t)(0x1054f580)));
  /* 105253fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105253ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10525406 jmp 0x10525411 */
  goto L_10525411;
L_10525408:;
  /* 10525408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052540b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052540e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10525411:;
  /* 10525411 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525415 jge 0x10525435 */
  if ((C.sf==C.of)) goto L_10525435;
  /* 10525417 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052541a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052541d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10525425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525428 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052542b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10525433 jmp 0x10525408 */
  goto L_10525408;
L_10525435:;
  /* 10525435 mov edx, dword ptr [0x1054f580] */
  EDX = (r32((uint32_t)(0x1054f580)));
  /* 1052543b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1052543e jmp 0x10525448 */
  goto L_10525448;
L_10525440:;
  /* 10525440 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525443 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10525445 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10525448:;
  /* 10525448 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052544c je 0x105254f1 */
  if (C.zf) goto L_105254f1;
  /* 10525452 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525455 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10525458 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052545d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052545f jl 0x105254c7 */
  if ((C.sf!=C.of)) goto L_105254c7;
  /* 10525461 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525464 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10525467 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052546d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525470 jge 0x105254c7 */
  if ((C.sf==C.of)) goto L_105254c7;
  /* 10525472 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525475 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10525478 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1052547e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525481 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10525485 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525488 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052548b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1052548e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10525494 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525497 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1052549b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052549e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105254a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105254a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105254a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 105254ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105254b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105254b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105254b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 105254b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105254be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105254c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105254c5 jmp 0x105254ec */
  goto L_105254ec;
L_105254c7:;
  /* 105254c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105254ca push edx */
  push32((uint32_t)(EDX));
  /* 105254cb push 0x1054aa90 */
  push32((uint32_t)(0x1054aa90u));
  /* 105254d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105254d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105254d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105254d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105254d8 call 0x10522cd0 */
  push32(0x105254ddu); f_10522cd0();
  /* 105254dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105254e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105254e3 jne 0x105254e6 */
  if (!C.zf) goto L_105254e6;
  /* 105254e5 int3  */
  x86_unimpl("int3 @ 0x105254e5");
L_105254e6:;
  /* 105254e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105254e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105254ea jne 0x105254c7 */
  if (!C.zf) goto L_105254c7;
L_105254ec:;
  /* 105254ec jmp 0x10525440 */
  goto L_10525440;
L_105254f1:;
  /* 105254f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105254f4 mov edx, dword ptr [0x1054f588] */
  EDX = (r32((uint32_t)(0x1054f588)));
  /* 105254fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 105254fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525500 mov ecx, dword ptr [0x1054f57c] */
  ECX = (r32((uint32_t)(0x1054f57c)));
  /* 10525506 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10525509 push 9 */
  push32((uint32_t)(0x9u));
  /* 1052550b call 0x105276b0 */
  push32(0x10525510u); f_105276b0();
  /* 10525510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10525513:;
  /* 10525513 pop edi */
  EDI = (pop32());
  /* 10525514 pop esi */
  ESI = (pop32());
  /* 10525515 pop ebx */
  EBX = (pop32());
  /* 10525516 mov esp, ebp */
  ESP = (EBP);
  /* 10525518 pop ebp */
  EBP = (pop32());
  /* 10525519 ret  */
  ESPCHK(0x105253b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x10525520 (291 bytes, 95 insns) */
void f_10525520(void) {
  FTRACE(0x10525520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525520 push ebp */
  push32((uint32_t)(EBP));
  /* 10525521 mov ebp, esp */
  EBP = (ESP);
  /* 10525523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525526 push ebx */
  push32((uint32_t)(EBX));
  /* 10525527 push esi */
  push32((uint32_t)(ESI));
  /* 10525528 push edi */
  push32((uint32_t)(EDI));
  /* 10525529 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10525530 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525534 je 0x10525542 */
  if (C.zf) goto L_10525542;
  /* 10525536 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052553a je 0x10525542 */
  if (C.zf) goto L_10525542;
  /* 1052553c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525540 jne 0x10525570 */
  if (!C.zf) goto L_10525570;
L_10525542:;
  /* 10525542 push 0x1054aadc */
  push32((uint32_t)(0x1054aadcu));
  /* 10525547 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 1052554c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052554e push 0 */
  push32((uint32_t)(0x0u));
  /* 10525550 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525552 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525554 call 0x10522cd0 */
  push32(0x10525559u); f_10522cd0();
  /* 10525559 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052555c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052555f jne 0x10525562 */
  if (!C.zf) goto L_10525562;
  /* 10525561 int3  */
  x86_unimpl("int3 @ 0x10525561");
L_10525562:;
  /* 10525562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10525564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525566 jne 0x10525542 */
  if (!C.zf) goto L_10525542;
  /* 10525568 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052556b jmp 0x1052563c */
  goto L_1052563c;
L_10525570:;
  /* 10525570 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10525577 jmp 0x10525582 */
  goto L_10525582;
L_10525579:;
  /* 10525579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052557c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052557f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10525582:;
  /* 10525582 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525586 jge 0x1052560c */
  if ((C.sf==C.of)) goto L_1052560c;
  /* 1052558c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052558f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525595 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10525598 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1052559c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105255a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105255a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105255a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105255aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105255ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105255b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105255b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105255b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 105255ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105255be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105255c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105255c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 105255c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105255cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105255ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105255d3 jne 0x105255e2 */
  if (!C.zf) goto L_105255e2;
  /* 105255d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105255d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105255db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105255e0 je 0x10525607 */
  if (C.zf) goto L_10525607;
L_105255e2:;
  /* 105255e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105255e6 je 0x10525607 */
  if (C.zf) goto L_10525607;
  /* 105255e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105255ec jne 0x10525600 */
  if (!C.zf) goto L_10525600;
  /* 105255ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105255f2 jne 0x10525607 */
  if (!C.zf) goto L_10525607;
  /* 105255f4 mov eax, dword ptr [0x1054da84] */
  EAX = (r32((uint32_t)(0x1054da84)));
  /* 105255f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 105255fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105255fe je 0x10525607 */
  if (C.zf) goto L_10525607;
L_10525600:;
  /* 10525600 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10525607:;
  /* 10525607 jmp 0x10525579 */
  goto L_10525579;
L_1052560c:;
  /* 1052560c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052560f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525612 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10525615 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525618 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052561b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1052561e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525621 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525624 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10525627 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052562a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052562d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10525630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525633 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10525639 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1052563c:;
  /* 1052563c pop edi */
  EDI = (pop32());
  /* 1052563d pop esi */
  ESI = (pop32());
  /* 1052563e pop ebx */
  EBX = (pop32());
  /* 1052563f mov esp, ebp */
  ESP = (EBP);
  /* 10525641 pop ebp */
  EBP = (pop32());
  /* 10525642 ret  */
  ESPCHK(0x10525520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005650 @ 0x10525650 (697 bytes, 253 insns) */
void f_10525650(void) {
  FTRACE(0x10525650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525650 push ebp */
  push32((uint32_t)(EBP));
  /* 10525651 mov ebp, esp */
  EBP = (ESP);
  /* 10525653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525656 push ebx */
  push32((uint32_t)(EBX));
  /* 10525657 push esi */
  push32((uint32_t)(ESI));
  /* 10525658 push edi */
  push32((uint32_t)(EDI));
  /* 10525659 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10525660 push 9 */
  push32((uint32_t)(0x9u));
  /* 10525662 call 0x10527610 */
  push32(0x10525667u); f_10527610();
  /* 10525667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052566a:;
  /* 1052566a push 0x1054abd4 */
  push32((uint32_t)(0x1054abd4u));
  /* 1052566f push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10525674 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525676 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052567a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052567c call 0x10522cd0 */
  push32(0x10525681u); f_10522cd0();
  /* 10525681 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525687 jne 0x1052568a */
  if (!C.zf) goto L_1052568a;
  /* 10525689 int3  */
  x86_unimpl("int3 @ 0x10525689");
L_1052568a:;
  /* 1052568a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052568c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052568e jne 0x1052566a */
  if (!C.zf) goto L_1052566a;
  /* 10525690 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525694 je 0x1052569e */
  if (C.zf) goto L_1052569e;
  /* 10525696 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525699 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052569b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1052569e:;
  /* 1052569e mov eax, dword ptr [0x1054f580] */
  EAX = (r32((uint32_t)(0x1054f580)));
  /* 105256a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105256a6 jmp 0x105256b0 */
  goto L_105256b0;
L_105256a8:;
  /* 105256a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105256ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105256ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105256b0:;
  /* 105256b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105256b4 je 0x105258d2 */
  if (C.zf) goto L_105258d2;
  /* 105256ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105256bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105256c0 je 0x105258d2 */
  if (C.zf) goto L_105258d2;
  /* 105256c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105256c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105256cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105256d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105256d5 je 0x10525704 */
  if (C.zf) goto L_10525704;
  /* 105256d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105256da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105256dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105256e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105256e5 je 0x10525704 */
  if (C.zf) goto L_10525704;
  /* 105256e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105256ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105256ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105256f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105256f5 jne 0x10525709 */
  if (!C.zf) goto L_10525709;
  /* 105256f7 mov ecx, dword ptr [0x1054da84] */
  ECX = (r32((uint32_t)(0x1054da84)));
  /* 105256fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10525700 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525702 jne 0x10525709 */
  if (!C.zf) goto L_10525709;
L_10525704:;
  /* 10525704 jmp 0x105258cd */
  goto L_105258cd;
L_10525709:;
  /* 10525709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052570c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525710 je 0x10525782 */
  if (C.zf) goto L_10525782;
  /* 10525712 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525714 push 1 */
  push32((uint32_t)(0x1u));
  /* 10525716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525719 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052571c push ecx */
  push32((uint32_t)(ECX));
  /* 1052571d call 0x105251c0 */
  push32(0x10525722u); f_105251c0();
  /* 10525722 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525727 jne 0x10525753 */
  if (!C.zf) goto L_10525753;
L_10525729:;
  /* 10525729 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052572c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052572f push eax */
  push32((uint32_t)(EAX));
  /* 10525730 push 0x1054abc0 */
  push32((uint32_t)(0x1054abc0u));
  /* 10525735 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525737 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525739 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052573b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052573d call 0x10522cd0 */
  push32(0x10525742u); f_10522cd0();
  /* 10525742 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525745 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525748 jne 0x1052574b */
  if (!C.zf) goto L_1052574b;
  /* 1052574a int3  */
  x86_unimpl("int3 @ 0x1052574a");
L_1052574b:;
  /* 1052574b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052574d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052574f jne 0x10525729 */
  if (!C.zf) goto L_10525729;
  /* 10525751 jmp 0x10525782 */
  goto L_10525782;
L_10525753:;
  /* 10525753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525756 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10525759 push eax */
  push32((uint32_t)(EAX));
  /* 1052575a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052575d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10525760 push edx */
  push32((uint32_t)(EDX));
  /* 10525761 push 0x1054abb4 */
  push32((uint32_t)(0x1054abb4u));
  /* 10525766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052576a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052576c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052576e call 0x10522cd0 */
  push32(0x10525773u); f_10522cd0();
  /* 10525773 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525776 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525779 jne 0x1052577c */
  if (!C.zf) goto L_1052577c;
  /* 1052577b int3  */
  x86_unimpl("int3 @ 0x1052577b");
L_1052577c:;
  /* 1052577c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052577e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525780 jne 0x10525753 */
  if (!C.zf) goto L_10525753;
L_10525782:;
  /* 10525782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525785 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10525788 push edx */
  push32((uint32_t)(EDX));
  /* 10525789 push 0x1054abac */
  push32((uint32_t)(0x1054abacu));
  /* 1052578e push 0 */
  push32((uint32_t)(0x0u));
  /* 10525790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525794 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525796 call 0x10522cd0 */
  push32(0x1052579bu); f_10522cd0();
  /* 1052579b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052579e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105257a1 jne 0x105257a4 */
  if (!C.zf) goto L_105257a4;
  /* 105257a3 int3  */
  x86_unimpl("int3 @ 0x105257a3");
L_105257a4:;
  /* 105257a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105257a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105257a8 jne 0x10525782 */
  if (!C.zf) goto L_10525782;
  /* 105257aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105257ad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105257b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105257b6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105257b9 jne 0x1052582c */
  if (!C.zf) goto L_1052582c;
L_105257bb:;
  /* 105257bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105257be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105257c1 push ecx */
  push32((uint32_t)(ECX));
  /* 105257c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105257c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105257c8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105257cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105257d0 push eax */
  push32((uint32_t)(EAX));
  /* 105257d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105257d4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105257d7 push ecx */
  push32((uint32_t)(ECX));
  /* 105257d8 push 0x1054ab78 */
  push32((uint32_t)(0x1054ab78u));
  /* 105257dd push 0 */
  push32((uint32_t)(0x0u));
  /* 105257df push 0 */
  push32((uint32_t)(0x0u));
  /* 105257e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105257e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105257e5 call 0x10522cd0 */
  push32(0x105257eau); f_10522cd0();
  /* 105257ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105257ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105257f0 jne 0x105257f3 */
  if (!C.zf) goto L_105257f3;
  /* 105257f2 int3  */
  x86_unimpl("int3 @ 0x105257f2");
L_105257f3:;
  /* 105257f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105257f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105257f7 jne 0x105257bb */
  if (!C.zf) goto L_105257bb;
  /* 105257f9 cmp dword ptr [0x10550ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525800 je 0x1052581b */
  if (C.zf) goto L_1052581b;
  /* 10525802 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525805 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10525808 push ecx */
  push32((uint32_t)(ECX));
  /* 10525809 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052580c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052580f push edx */
  push32((uint32_t)(EDX));
  /* 10525810 call dword ptr [0x10550ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10550ed8))), 0x10525816u);
  /* 10525816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525819 jmp 0x10525827 */
  goto L_10525827;
L_1052581b:;
  /* 1052581b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052581e push eax */
  push32((uint32_t)(EAX));
  /* 1052581f call 0x10525910 */
  push32(0x10525824u); f_10525910();
  /* 10525824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10525827:;
  /* 10525827 jmp 0x105258cd */
  goto L_105258cd;
L_1052582c:;
  /* 1052582c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052582f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525833 jne 0x10525872 */
  if (!C.zf) goto L_10525872;
L_10525835:;
  /* 10525835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525838 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1052583b push eax */
  push32((uint32_t)(EAX));
  /* 1052583c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052583f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525842 push ecx */
  push32((uint32_t)(ECX));
  /* 10525843 push 0x1054ab50 */
  push32((uint32_t)(0x1054ab50u));
  /* 10525848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052584a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052584c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052584e push 0 */
  push32((uint32_t)(0x0u));
  /* 10525850 call 0x10522cd0 */
  push32(0x10525855u); f_10522cd0();
  /* 10525855 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525858 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052585b jne 0x1052585e */
  if (!C.zf) goto L_1052585e;
  /* 1052585d int3  */
  x86_unimpl("int3 @ 0x1052585d");
L_1052585e:;
  /* 1052585e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10525860 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525862 jne 0x10525835 */
  if (!C.zf) goto L_10525835;
  /* 10525864 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525867 push eax */
  push32((uint32_t)(EAX));
  /* 10525868 call 0x10525910 */
  push32(0x1052586du); f_10525910();
  /* 1052586d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525870 jmp 0x105258cd */
  goto L_105258cd;
L_10525872:;
  /* 10525872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525875 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10525878 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052587e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525881 jne 0x105258cd */
  if (!C.zf) goto L_105258cd;
L_10525883:;
  /* 10525883 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525886 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10525889 push ecx */
  push32((uint32_t)(ECX));
  /* 1052588a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052588d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10525890 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10525893 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10525898 push eax */
  push32((uint32_t)(EAX));
  /* 10525899 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052589c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052589f push ecx */
  push32((uint32_t)(ECX));
  /* 105258a0 push 0x1054ab1c */
  push32((uint32_t)(0x1054ab1cu));
  /* 105258a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105258a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105258a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105258ab push 0 */
  push32((uint32_t)(0x0u));
  /* 105258ad call 0x10522cd0 */
  push32(0x105258b2u); f_10522cd0();
  /* 105258b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105258b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105258b8 jne 0x105258bb */
  if (!C.zf) goto L_105258bb;
  /* 105258ba int3  */
  x86_unimpl("int3 @ 0x105258ba");
L_105258bb:;
  /* 105258bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105258bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105258bf jne 0x10525883 */
  if (!C.zf) goto L_10525883;
  /* 105258c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105258c4 push eax */
  push32((uint32_t)(EAX));
  /* 105258c5 call 0x10525910 */
  push32(0x105258cau); f_10525910();
  /* 105258ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105258cd:;
  /* 105258cd jmp 0x105256a8 */
  goto L_105256a8;
L_105258d2:;
  /* 105258d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 105258d4 call 0x105276b0 */
  push32(0x105258d9u); f_105276b0();
  /* 105258d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105258dc:;
  /* 105258dc push 0x1054ab04 */
  push32((uint32_t)(0x1054ab04u));
  /* 105258e1 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 105258e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105258e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105258ea push 0 */
  push32((uint32_t)(0x0u));
  /* 105258ec push 0 */
  push32((uint32_t)(0x0u));
  /* 105258ee call 0x10522cd0 */
  push32(0x105258f3u); f_10522cd0();
  /* 105258f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105258f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105258f9 jne 0x105258fc */
  if (!C.zf) goto L_105258fc;
  /* 105258fb int3  */
  x86_unimpl("int3 @ 0x105258fb");
L_105258fc:;
  /* 105258fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105258fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525900 jne 0x105258dc */
  if (!C.zf) goto L_105258dc;
  /* 10525902 pop edi */
  EDI = (pop32());
  /* 10525903 pop esi */
  ESI = (pop32());
  /* 10525904 pop ebx */
  EBX = (pop32());
  /* 10525905 mov esp, ebp */
  ESP = (EBP);
  /* 10525907 pop ebp */
  EBP = (pop32());
  /* 10525908 ret  */
  ESPCHK(0x10525650u, _esp0);
  ESP += 4; return;
}

/* FUN_10005910 @ 0x10525910 (276 bytes, 89 insns) */
void f_10525910(void) {
  FTRACE(0x10525910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525910 push ebp */
  push32((uint32_t)(EBP));
  /* 10525911 mov ebp, esp */
  EBP = (ESP);
  /* 10525913 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525916 push ebx */
  push32((uint32_t)(EBX));
  /* 10525917 push esi */
  push32((uint32_t)(ESI));
  /* 10525918 push edi */
  push32((uint32_t)(EDI));
  /* 10525919 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10525920 jmp 0x1052592b */
  goto L_1052592b;
L_10525922:;
  /* 10525922 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10525925 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525928 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1052592b:;
  /* 1052592b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052592e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525932 jge 0x1052593f */
  if ((C.sf==C.of)) goto L_1052593f;
  /* 10525934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525937 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1052593a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1052593d jmp 0x10525946 */
  goto L_10525946;
L_1052593f:;
  /* 1052593f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10525946:;
  /* 10525946 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10525949 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052594c jge 0x105259ec */
  if ((C.sf==C.of)) goto L_105259ec;
  /* 10525952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525955 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525958 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1052595b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1052595e cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525965 jle 0x10525983 */
  if ((C.zf||C.sf!=C.of)) goto L_10525983;
  /* 10525967 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1052596c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1052596f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10525975 push ecx */
  push32((uint32_t)(ECX));
  /* 10525976 call 0x10529c20 */
  push32(0x1052597bu); f_10529c20();
  /* 1052597b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052597e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10525981 jmp 0x105259a0 */
  goto L_105259a0;
L_10525983:;
  /* 10525983 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10525986 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052598c mov eax, dword ptr [0x1054dc98] */
  EAX = (r32((uint32_t)(0x1054dc98)));
  /* 10525991 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10525993 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10525997 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1052599d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_105259a0:;
  /* 105259a0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105259a4 je 0x105259b4 */
  if (C.zf) goto L_105259b4;
  /* 105259a6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105259a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105259af mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 105259b2 jmp 0x105259bb */
  goto L_105259bb;
L_105259b4:;
  /* 105259b4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_105259bb:;
  /* 105259bb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105259be mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 105259c1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 105259c5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105259c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105259ce push edx */
  push32((uint32_t)(EDX));
  /* 105259cf push 0x1054abf8 */
  push32((uint32_t)(0x1054abf8u));
  /* 105259d4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105259d7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105259da lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 105259de push ecx */
  push32((uint32_t)(ECX));
  /* 105259df call 0x10529b20 */
  push32(0x105259e4u); f_10529b20();
  /* 105259e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105259e7 jmp 0x10525922 */
  goto L_10525922;
L_105259ec:;
  /* 105259ec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105259ef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_105259f4:;
  /* 105259f4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 105259f7 push eax */
  push32((uint32_t)(EAX));
  /* 105259f8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 105259fb push ecx */
  push32((uint32_t)(ECX));
  /* 105259fc push 0x1054abe8 */
  push32((uint32_t)(0x1054abe8u));
  /* 10525a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a09 call 0x10522cd0 */
  push32(0x10525a0eu); f_10522cd0();
  /* 10525a0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525a11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525a14 jne 0x10525a17 */
  if (!C.zf) goto L_10525a17;
  /* 10525a16 int3  */
  x86_unimpl("int3 @ 0x10525a16");
L_10525a17:;
  /* 10525a17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10525a19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525a1b jne 0x105259f4 */
  if (!C.zf) goto L_105259f4;
  /* 10525a1d pop edi */
  EDI = (pop32());
  /* 10525a1e pop esi */
  ESI = (pop32());
  /* 10525a1f pop ebx */
  EBX = (pop32());
  /* 10525a20 mov esp, ebp */
  ESP = (EBP);
  /* 10525a22 pop ebp */
  EBP = (pop32());
  /* 10525a23 ret  */
  ESPCHK(0x10525910u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x10525a30 (116 bytes, 46 insns) */
void f_10525a30(void) {
  FTRACE(0x10525a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10525a31 mov ebp, esp */
  EBP = (ESP);
  /* 10525a33 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525a36 push ebx */
  push32((uint32_t)(EBX));
  /* 10525a37 push esi */
  push32((uint32_t)(ESI));
  /* 10525a38 push edi */
  push32((uint32_t)(EDI));
  /* 10525a39 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10525a3c push eax */
  push32((uint32_t)(EAX));
  /* 10525a3d call 0x105253b0 */
  push32(0x10525a42u); f_105253b0();
  /* 10525a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525a45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525a49 jne 0x10525a64 */
  if (!C.zf) goto L_10525a64;
  /* 10525a4b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525a4f jne 0x10525a64 */
  if (!C.zf) goto L_10525a64;
  /* 10525a51 mov ecx, dword ptr [0x1054da84] */
  ECX = (r32((uint32_t)(0x1054da84)));
  /* 10525a57 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10525a5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525a5c je 0x10525a9b */
  if (C.zf) goto L_10525a9b;
  /* 10525a5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525a62 je 0x10525a9b */
  if (C.zf) goto L_10525a9b;
L_10525a64:;
  /* 10525a64 push 0x1054ac00 */
  push32((uint32_t)(0x1054ac00u));
  /* 10525a69 push 0x1054a5cc */
  push32((uint32_t)(0x1054a5ccu));
  /* 10525a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a76 call 0x10522cd0 */
  push32(0x10525a7bu); f_10522cd0();
  /* 10525a7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525a7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525a81 jne 0x10525a84 */
  if (!C.zf) goto L_10525a84;
  /* 10525a83 int3  */
  x86_unimpl("int3 @ 0x10525a83");
L_10525a84:;
  /* 10525a84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10525a86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525a88 jne 0x10525a64 */
  if (!C.zf) goto L_10525a64;
  /* 10525a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10525a8c call 0x10525650 */
  push32(0x10525a91u); f_10525650();
  /* 10525a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525a94 mov eax, 1 */
  EAX = (0x1u);
  /* 10525a99 jmp 0x10525a9d */
  goto L_10525a9d;
L_10525a9b:;
  /* 10525a9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10525a9d:;
  /* 10525a9d pop edi */
  EDI = (pop32());
  /* 10525a9e pop esi */
  ESI = (pop32());
  /* 10525a9f pop ebx */
  EBX = (pop32());
  /* 10525aa0 mov esp, ebp */
  ESP = (EBP);
  /* 10525aa2 pop ebp */
  EBP = (pop32());
  /* 10525aa3 ret  */
  ESPCHK(0x10525a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10525ab0 (197 bytes, 79 insns) */
void f_10525ab0(void) {
  FTRACE(0x10525ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10525ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10525ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10525ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 10525ab5 push esi */
  push32((uint32_t)(ESI));
  /* 10525ab6 push edi */
  push32((uint32_t)(EDI));
  /* 10525ab7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525abb jne 0x10525ac2 */
  if (!C.zf) goto L_10525ac2;
  /* 10525abd jmp 0x10525b6e */
  goto L_10525b6e;
L_10525ac2:;
  /* 10525ac2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10525ac9 jmp 0x10525ad4 */
  goto L_10525ad4;
L_10525acb:;
  /* 10525acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525ace add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525ad1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10525ad4:;
  /* 10525ad4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525ad8 jge 0x10525b1e */
  if ((C.sf==C.of)) goto L_10525b1e;
L_10525ada:;
  /* 10525ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525add mov edx, dword ptr [ecx*4 + 0x1054da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054da94)));
  /* 10525ae4 push edx */
  push32((uint32_t)(EDX));
  /* 10525ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525ae8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525aeb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10525aef push edx */
  push32((uint32_t)(EDX));
  /* 10525af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525af6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10525afa push edx */
  push32((uint32_t)(EDX));
  /* 10525afb push 0x1054ac5c */
  push32((uint32_t)(0x1054ac5cu));
  /* 10525b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b08 call 0x10522cd0 */
  push32(0x10525b0du); f_10522cd0();
  /* 10525b0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525b10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525b13 jne 0x10525b16 */
  if (!C.zf) goto L_10525b16;
  /* 10525b15 int3  */
  x86_unimpl("int3 @ 0x10525b15");
L_10525b16:;
  /* 10525b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10525b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525b1a jne 0x10525ada */
  if (!C.zf) goto L_10525ada;
  /* 10525b1c jmp 0x10525acb */
  goto L_10525acb;
L_10525b1e:;
  /* 10525b1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525b21 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10525b24 push edx */
  push32((uint32_t)(EDX));
  /* 10525b25 push 0x1054ac38 */
  push32((uint32_t)(0x1054ac38u));
  /* 10525b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b32 call 0x10522cd0 */
  push32(0x10525b37u); f_10522cd0();
  /* 10525b37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525b3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525b3d jne 0x10525b40 */
  if (!C.zf) goto L_10525b40;
  /* 10525b3f int3  */
  x86_unimpl("int3 @ 0x10525b3f");
L_10525b40:;
  /* 10525b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10525b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525b44 jne 0x10525b1e */
  if (!C.zf) goto L_10525b1e;
L_10525b46:;
  /* 10525b46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525b49 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10525b4c push edx */
  push32((uint32_t)(EDX));
  /* 10525b4d push 0x1054ac18 */
  push32((uint32_t)(0x1054ac18u));
  /* 10525b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10525b5a call 0x10522cd0 */
  push32(0x10525b5fu); f_10522cd0();
  /* 10525b5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525b62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525b65 jne 0x10525b68 */
  if (!C.zf) goto L_10525b68;
  /* 10525b67 int3  */
  x86_unimpl("int3 @ 0x10525b67");
L_10525b68:;
  /* 10525b68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10525b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525b6c jne 0x10525b46 */
  if (!C.zf) goto L_10525b46;
L_10525b6e:;
  /* 10525b6e pop edi */
  EDI = (pop32());
  /* 10525b6f pop esi */
  ESI = (pop32());
  /* 10525b70 pop ebx */
  EBX = (pop32());
  /* 10525b71 mov esp, ebp */
  ESP = (EBP);
  /* 10525b73 pop ebp */
  EBP = (pop32());
  /* 10525b74 ret  */
  ESPCHK(0x10525ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x10525b80 (329 bytes, 102 insns) */
void f_10525b80(void) {
  FTRACE(0x10525b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10525b81 mov ebp, esp */
  EBP = (ESP);
  /* 10525b83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525b86 cmp dword ptr [0x10551050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10551050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525b8d jne 0x10525b94 */
  if (!C.zf) goto L_10525b94;
  /* 10525b8f call 0x1052a4c0 */
  push32(0x10525b94u); f_1052a4c0();
L_10525b94:;
  /* 10525b94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10525b9b mov eax, dword ptr [0x1054f51c] */
  EAX = (r32((uint32_t)(0x1054f51c)));
  /* 10525ba0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10525ba3:;
  /* 10525ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525ba6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10525ba9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525bab je 0x10525bd9 */
  if (C.zf) goto L_10525bd9;
  /* 10525bad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525bb0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525bb3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525bb6 je 0x10525bc1 */
  if (C.zf) goto L_10525bc1;
  /* 10525bb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525bbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525bbe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10525bc1:;
  /* 10525bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10525bc5 call 0x10526a40 */
  push32(0x10525bcau); f_10526a40();
  /* 10525bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525bcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525bd0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10525bd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10525bd7 jmp 0x10525ba3 */
  goto L_10525ba3;
L_10525bd9:;
  /* 10525bd9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10525bdb push 0x1054ac7c */
  push32((uint32_t)(0x1054ac7cu));
  /* 10525be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10525be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525be5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10525bec push ecx */
  push32((uint32_t)(ECX));
  /* 10525bed call 0x10523c10 */
  push32(0x10525bf2u); f_10523c10();
  /* 10525bf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525bf5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10525bf8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525bfb mov dword ptr [0x1054f550], edx */
  w32((uint32_t)(0x1054f550), (EDX));
  /* 10525c01 cmp dword ptr [0x1054f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525c08 jne 0x10525c14 */
  if (!C.zf) goto L_10525c14;
  /* 10525c0a push 9 */
  push32((uint32_t)(0x9u));
  /* 10525c0c call 0x10522b80 */
  push32(0x10525c11u); f_10522b80();
  /* 10525c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10525c14:;
  /* 10525c14 mov eax, dword ptr [0x1054f51c] */
  EAX = (r32((uint32_t)(0x1054f51c)));
  /* 10525c19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10525c1c jmp 0x10525c27 */
  goto L_10525c27;
L_10525c1e:;
  /* 10525c1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525c21 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525c24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10525c27:;
  /* 10525c27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525c2a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10525c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525c2f je 0x10525c97 */
  if (C.zf) goto L_10525c97;
  /* 10525c31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10525c35 call 0x10526a40 */
  push32(0x10525c3au); f_10526a40();
  /* 10525c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525c3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525c40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10525c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525c46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10525c49 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525c4c je 0x10525c95 */
  if (C.zf) goto L_10525c95;
  /* 10525c4e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10525c50 push 0x1054ac7c */
  push32((uint32_t)(0x1054ac7cu));
  /* 10525c55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10525c57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10525c5a push ecx */
  push32((uint32_t)(ECX));
  /* 10525c5b call 0x10523c10 */
  push32(0x10525c60u); f_10523c10();
  /* 10525c60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525c63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525c66 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10525c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525c6b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525c6e jne 0x10525c7a */
  if (!C.zf) goto L_10525c7a;
  /* 10525c70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10525c72 call 0x10522b80 */
  push32(0x10525c77u); f_10522b80();
  /* 10525c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10525c7a:;
  /* 10525c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525c7d push ecx */
  push32((uint32_t)(ECX));
  /* 10525c7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525c81 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10525c83 push eax */
  push32((uint32_t)(EAX));
  /* 10525c84 call 0x10526bc0 */
  push32(0x10525c89u); f_10526bc0();
  /* 10525c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525c8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525c8f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525c92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10525c95:;
  /* 10525c95 jmp 0x10525c1e */
  goto L_10525c1e;
L_10525c97:;
  /* 10525c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10525c99 mov edx, dword ptr [0x1054f51c] */
  EDX = (r32((uint32_t)(0x1054f51c)));
  /* 10525c9f push edx */
  push32((uint32_t)(EDX));
  /* 10525ca0 call 0x105246a0 */
  push32(0x10525ca5u); f_105246a0();
  /* 10525ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525ca8 mov dword ptr [0x1054f51c], 0 */
  w32((uint32_t)(0x1054f51c), (0x0u));
  /* 10525cb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525cb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10525cbb mov dword ptr [0x10551040], 1 */
  w32((uint32_t)(0x10551040), (0x1u));
  /* 10525cc5 mov esp, ebp */
  ESP = (EBP);
  /* 10525cc7 pop ebp */
  EBP = (pop32());
  /* 10525cc8 ret  */
  ESPCHK(0x10525b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x10525cd0 (216 bytes, 69 insns) */
void f_10525cd0(void) {
  FTRACE(0x10525cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10525cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10525cd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525cd6 cmp dword ptr [0x10551050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10551050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525cdd jne 0x10525ce4 */
  if (!C.zf) goto L_10525ce4;
  /* 10525cdf call 0x1052a4c0 */
  push32(0x10525ce4u); f_1052a4c0();
L_10525ce4:;
  /* 10525ce4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10525ce9 push 0x1054f58c */
  push32((uint32_t)(0x1054f58cu));
  /* 10525cee push 0 */
  push32((uint32_t)(0x0u));
  /* 10525cf0 call dword ptr [0x10552368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552368))), 0x10525cf6u);
  /* 10525cf6 mov dword ptr [0x1054f560], 0x1054f58c */
  w32((uint32_t)(0x1054f560), (0x1054f58cu));
  /* 10525d00 mov eax, dword ptr [0x1055106c] */
  EAX = (r32((uint32_t)(0x1055106c)));
  /* 10525d05 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525d08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525d0a jne 0x10525d17 */
  if (!C.zf) goto L_10525d17;
  /* 10525d0c mov edx, dword ptr [0x1054f560] */
  EDX = (r32((uint32_t)(0x1054f560)));
  /* 10525d12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10525d15 jmp 0x10525d1f */
  goto L_10525d1f;
L_10525d17:;
  /* 10525d17 mov eax, dword ptr [0x1055106c] */
  EAX = (r32((uint32_t)(0x1055106c)));
  /* 10525d1c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10525d1f:;
  /* 10525d1f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10525d22 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10525d25 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10525d28 push edx */
  push32((uint32_t)(EDX));
  /* 10525d29 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10525d2c push eax */
  push32((uint32_t)(EAX));
  /* 10525d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10525d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10525d31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10525d34 push ecx */
  push32((uint32_t)(ECX));
  /* 10525d35 call 0x10525db0 */
  push32(0x10525d3au); f_10525db0();
  /* 10525d3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525d3d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10525d42 push 0x1054ac88 */
  push32((uint32_t)(0x1054ac88u));
  /* 10525d47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10525d49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525d4f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10525d52 push ecx */
  push32((uint32_t)(ECX));
  /* 10525d53 call 0x10523c10 */
  push32(0x10525d58u); f_10523c10();
  /* 10525d58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525d5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10525d5e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525d62 jne 0x10525d6e */
  if (!C.zf) goto L_10525d6e;
  /* 10525d64 push 8 */
  push32((uint32_t)(0x8u));
  /* 10525d66 call 0x10522b80 */
  push32(0x10525d6bu); f_10522b80();
  /* 10525d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10525d6e:;
  /* 10525d6e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10525d71 push edx */
  push32((uint32_t)(EDX));
  /* 10525d72 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10525d75 push eax */
  push32((uint32_t)(EAX));
  /* 10525d76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525d79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525d7c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10525d7f push eax */
  push32((uint32_t)(EAX));
  /* 10525d80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10525d84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10525d87 push edx */
  push32((uint32_t)(EDX));
  /* 10525d88 call 0x10525db0 */
  push32(0x10525d8du); f_10525db0();
  /* 10525d8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10525d90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525d93 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525d96 mov dword ptr [0x1054f544], eax */
  w32((uint32_t)(0x1054f544), (EAX));
  /* 10525d9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10525d9e mov dword ptr [0x1054f548], ecx */
  w32((uint32_t)(0x1054f548), (ECX));
  /* 10525da4 mov esp, ebp */
  ESP = (EBP);
  /* 10525da6 pop ebp */
  EBP = (pop32());
  /* 10525da7 ret  */
  ESPCHK(0x10525cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005db0 @ 0x10525db0 (1060 bytes, 360 insns) */
void f_10525db0(void) {
  FTRACE(0x10525db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10525db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10525db1 mov ebp, esp */
  EBP = (ESP);
  /* 10525db3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525db6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525db9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10525dbf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10525dc2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10525dc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10525dcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10525dce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525dd2 je 0x10525de5 */
  if (C.zf) goto L_10525de5;
  /* 10525dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525dd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525dda mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10525ddc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525ddf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525de2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10525de5:;
  /* 10525de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525de8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525deb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525dee jne 0x10525ebd */
  if (!C.zf) goto L_10525ebd;
L_10525df4:;
  /* 10525df4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525df7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525dfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10525dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525e00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525e03 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525e06 je 0x10525e82 */
  if (C.zf) goto L_10525e82;
  /* 10525e08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525e0b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10525e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525e10 je 0x10525e82 */
  if (C.zf) goto L_10525e82;
  /* 10525e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525e15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10525e17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10525e19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10525e1b mov al, byte ptr [edx + 0x10550da1] */
  AL = (r8((uint32_t)(EDX + 0x10550da1)));
  /* 10525e21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10525e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525e26 je 0x10525e57 */
  if (C.zf) goto L_10525e57;
  /* 10525e28 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525e2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10525e2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525e30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525e33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10525e35 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525e39 je 0x10525e57 */
  if (C.zf) goto L_10525e57;
  /* 10525e3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525e3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525e41 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10525e43 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10525e45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525e48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525e4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10525e4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525e51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525e54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10525e57:;
  /* 10525e57 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525e5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10525e5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525e5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525e62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10525e64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525e68 je 0x10525e7d */
  if (C.zf) goto L_10525e7d;
  /* 10525e6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525e6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525e70 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10525e72 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10525e74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525e77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525e7a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10525e7d:;
  /* 10525e7d jmp 0x10525df4 */
  goto L_10525df4;
L_10525e82:;
  /* 10525e82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525e85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10525e87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525e8a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525e8d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10525e8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525e93 je 0x10525ea4 */
  if (C.zf) goto L_10525ea4;
  /* 10525e95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525e98 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10525e9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525e9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525ea1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10525ea4:;
  /* 10525ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525ea7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525eaa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525ead jne 0x10525eb8 */
  if (!C.zf) goto L_10525eb8;
  /* 10525eaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525eb2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525eb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10525eb8:;
  /* 10525eb8 jmp 0x10525f8c */
  goto L_10525f8c;
L_10525ebd:;
  /* 10525ebd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525ec0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10525ec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525ec5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525ec8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10525eca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525ece je 0x10525ee3 */
  if (C.zf) goto L_10525ee3;
  /* 10525ed0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525ed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525ed6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10525ed8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10525eda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525edd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525ee0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10525ee3:;
  /* 10525ee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525ee6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10525ee8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10525eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525eee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525ef1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10525ef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525ef7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10525efd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10525eff mov dl, byte ptr [ecx + 0x10550da1] */
  DL = (r8((uint32_t)(ECX + 0x10550da1)));
  /* 10525f05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10525f08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525f0a je 0x10525f3b */
  if (C.zf) goto L_10525f3b;
  /* 10525f0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525f0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10525f11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525f14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10525f17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10525f19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525f1d je 0x10525f32 */
  if (C.zf) goto L_10525f32;
  /* 10525f1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525f25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10525f27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10525f29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525f2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525f2f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10525f32:;
  /* 10525f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525f38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10525f3b:;
  /* 10525f3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525f3e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10525f44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525f47 je 0x10525f67 */
  if (C.zf) goto L_10525f67;
  /* 10525f49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525f4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10525f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525f53 je 0x10525f67 */
  if (C.zf) goto L_10525f67;
  /* 10525f55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525f58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10525f5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525f61 jne 0x10525ebd */
  if (!C.zf) goto L_10525ebd;
L_10525f67:;
  /* 10525f67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10525f6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10525f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10525f72 jne 0x10525f7f */
  if (!C.zf) goto L_10525f7f;
  /* 10525f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525f77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10525f7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10525f7d jmp 0x10525f8c */
  goto L_10525f8c;
L_10525f7f:;
  /* 10525f7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525f83 je 0x10525f8c */
  if (C.zf) goto L_10525f8c;
  /* 10525f85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525f88 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10525f8c:;
  /* 10525f8c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10525f93:;
  /* 10525f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525f96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10525f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10525f9b je 0x10525fbe */
  if (C.zf) goto L_10525fbe;
L_10525f9d:;
  /* 10525f9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525fa0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10525fa3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525fa6 je 0x10525fb3 */
  if (C.zf) goto L_10525fb3;
  /* 10525fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525fab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525fae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525fb1 jne 0x10525fbe */
  if (!C.zf) goto L_10525fbe;
L_10525fb3:;
  /* 10525fb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525fb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525fb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10525fbc jmp 0x10525f9d */
  goto L_10525f9d;
L_10525fbe:;
  /* 10525fbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10525fc1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10525fc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10525fc6 jne 0x10525fcd */
  if (!C.zf) goto L_10525fcd;
  /* 10525fc8 jmp 0x105261ab */
  goto L_105261ab;
L_10525fcd:;
  /* 10525fcd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10525fd1 je 0x10525fe4 */
  if (C.zf) goto L_10525fe4;
  /* 10525fd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525fd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10525fd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10525fdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10525fde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525fe1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10525fe4:;
  /* 10525fe4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10525fe7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10525fe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10525fec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10525fef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10525ff1:;
  /* 10525ff1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10525ff8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10525fff:;
  /* 10525fff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526002 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10526005 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526008 jne 0x1052601e */
  if (!C.zf) goto L_1052601e;
  /* 1052600a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052600d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526010 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10526013 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10526016 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526019 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1052601c jmp 0x10525fff */
  goto L_10525fff;
L_1052601e:;
  /* 1052601e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526021 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10526024 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526027 jne 0x1052607a */
  if (!C.zf) goto L_1052607a;
  /* 10526029 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052602c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052602e mov ecx, 2 */
  ECX = (0x2u);
  /* 10526033 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10526035 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526037 jne 0x10526072 */
  if (!C.zf) goto L_10526072;
  /* 10526039 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052603d je 0x1052605f */
  if (C.zf) goto L_1052605f;
  /* 1052603f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526042 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10526046 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526049 jne 0x10526056 */
  if (!C.zf) goto L_10526056;
  /* 1052604b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052604e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526051 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10526054 jmp 0x1052605d */
  goto L_1052605d;
L_10526056:;
  /* 10526056 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1052605d:;
  /* 1052605d jmp 0x10526066 */
  goto L_10526066;
L_1052605f:;
  /* 1052605f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10526066:;
  /* 10526066 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526068 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052606c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1052606f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10526072:;
  /* 10526072 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10526075 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10526077 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1052607a:;
  /* 1052607a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052607d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10526080 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526083 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10526086 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10526088 je 0x105260ae */
  if (C.zf) goto L_105260ae;
  /* 1052608a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052608e je 0x1052609f */
  if (C.zf) goto L_1052609f;
  /* 10526090 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526093 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10526096 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526099 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052609c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1052609f:;
  /* 1052609f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105260a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105260a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105260a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105260aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105260ac jmp 0x1052607a */
  goto L_1052607a;
L_105260ae:;
  /* 105260ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105260b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105260b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105260b6 je 0x105260d4 */
  if (C.zf) goto L_105260d4;
  /* 105260b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105260bc jne 0x105260d9 */
  if (!C.zf) goto L_105260d9;
  /* 105260be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105260c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105260c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105260c7 je 0x105260d4 */
  if (C.zf) goto L_105260d4;
  /* 105260c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105260cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105260cf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105260d2 jne 0x105260d9 */
  if (!C.zf) goto L_105260d9;
L_105260d4:;
  /* 105260d4 jmp 0x10526184 */
  goto L_10526184;
L_105260d9:;
  /* 105260d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105260dd je 0x10526176 */
  if (C.zf) goto L_10526176;
  /* 105260e3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105260e7 je 0x1052613d */
  if (C.zf) goto L_1052613d;
  /* 105260e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105260ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105260ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105260f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105260f2 mov cl, byte ptr [eax + 0x10550da1] */
  CL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 105260f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105260fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105260fd je 0x10526128 */
  if (C.zf) goto L_10526128;
  /* 105260ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526102 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526105 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10526107 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10526109 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052610c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052610f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10526112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526115 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526118 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052611b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052611e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10526120 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526123 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10526126 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10526128:;
  /* 10526128 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052612b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052612e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10526130 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10526132 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526135 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526138 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1052613b jmp 0x10526169 */
  goto L_10526169;
L_1052613d:;
  /* 1052613d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10526142 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10526144 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10526146 mov cl, byte ptr [eax + 0x10550da1] */
  CL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 1052614c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1052614f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10526151 je 0x10526169 */
  if (C.zf) goto L_10526169;
  /* 10526153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526156 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526159 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052615c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052615f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10526161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526164 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10526167 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10526169:;
  /* 10526169 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052616c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052616e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526171 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10526174 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10526176:;
  /* 10526176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526179 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052617c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052617f jmp 0x10525ff1 */
  goto L_10525ff1;
L_10526184:;
  /* 10526184 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526188 je 0x10526199 */
  if (C.zf) goto L_10526199;
  /* 1052618a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052618d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10526190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526193 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526196 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10526199:;
  /* 10526199 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052619c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052619e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105261a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105261a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105261a6 jmp 0x10525f93 */
  goto L_10525f93;
L_105261ab:;
  /* 105261ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105261af je 0x105261c3 */
  if (C.zf) goto L_105261c3;
  /* 105261b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105261b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105261ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105261bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105261c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105261c3:;
  /* 105261c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105261c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105261c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105261cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105261ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105261d0 mov esp, ebp */
  ESP = (EBP);
  /* 105261d2 pop ebp */
  EBP = (pop32());
  /* 105261d3 ret  */
  ESPCHK(0x10525db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x105261e0 (537 bytes, 173 insns) */
void f_105261e0(void) {
  FTRACE(0x105261e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105261e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105261e1 mov ebp, esp */
  EBP = (ESP);
  /* 105261e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105261e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105261ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 105261f4 cmp dword ptr [0x1054f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105261fb jne 0x1052623a */
  if (!C.zf) goto L_1052623a;
  /* 105261fd call dword ptr [0x105523c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523c0))), 0x10526203u);
  /* 10526203 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10526206 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052620a je 0x10526218 */
  if (C.zf) goto L_10526218;
  /* 1052620c mov dword ptr [0x1054f690], 1 */
  w32((uint32_t)(0x1054f690), (0x1u));
  /* 10526216 jmp 0x1052623a */
  goto L_1052623a;
L_10526218:;
  /* 10526218 call dword ptr [0x105523bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523bc))), 0x1052621eu);
  /* 1052621e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10526221 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526225 je 0x10526233 */
  if (C.zf) goto L_10526233;
  /* 10526227 mov dword ptr [0x1054f690], 2 */
  w32((uint32_t)(0x1054f690), (0x2u));
  /* 10526231 jmp 0x1052623a */
  goto L_1052623a;
L_10526233:;
  /* 10526233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10526235 jmp 0x105263f5 */
  goto L_105263f5;
L_1052623a:;
  /* 1052623a cmp dword ptr [0x1054f690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526241 jne 0x1052633e */
  if (!C.zf) goto L_1052633e;
  /* 10526247 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052624b jne 0x10526263 */
  if (!C.zf) goto L_10526263;
  /* 1052624d call dword ptr [0x105523c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523c0))), 0x10526253u);
  /* 10526253 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10526256 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052625a jne 0x10526263 */
  if (!C.zf) goto L_10526263;
  /* 1052625c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052625e jmp 0x105263f5 */
  goto L_105263f5;
L_10526263:;
  /* 10526263 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10526266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10526269:;
  /* 10526269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052626c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052626e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10526271 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526273 je 0x10526295 */
  if (C.zf) goto L_10526295;
  /* 10526275 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526278 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052627b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052627e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526281 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526283 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10526286 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526288 jne 0x10526293 */
  if (!C.zf) goto L_10526293;
  /* 1052628a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052628d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526290 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10526293:;
  /* 10526293 jmp 0x10526269 */
  goto L_10526269;
L_10526295:;
  /* 10526295 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526298 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052629b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1052629d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105262a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105262a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105262ae push edx */
  push32((uint32_t)(EDX));
  /* 105262af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105262b2 push eax */
  push32((uint32_t)(EAX));
  /* 105262b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262b7 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x105262bdu);
  /* 105262bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105262c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105262c4 je 0x105262e4 */
  if (C.zf) goto L_105262e4;
  /* 105262c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 105262c8 push 0x1054ac94 */
  push32((uint32_t)(0x1054ac94u));
  /* 105262cd push 2 */
  push32((uint32_t)(0x2u));
  /* 105262cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105262d2 push ecx */
  push32((uint32_t)(ECX));
  /* 105262d3 call 0x10523c10 */
  push32(0x105262d8u); f_10523c10();
  /* 105262d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105262db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105262de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105262e2 jne 0x105262f5 */
  if (!C.zf) goto L_105262f5;
L_105262e4:;
  /* 105262e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105262e7 push edx */
  push32((uint32_t)(EDX));
  /* 105262e8 call dword ptr [0x105523b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b4))), 0x105262eeu);
  /* 105262ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105262f0 jmp 0x105263f5 */
  goto L_105263f5;
L_105262f5:;
  /* 105262f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105262f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105262fc push eax */
  push32((uint32_t)(EAX));
  /* 105262fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10526300 push ecx */
  push32((uint32_t)(ECX));
  /* 10526301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526304 push edx */
  push32((uint32_t)(EDX));
  /* 10526305 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10526308 push eax */
  push32((uint32_t)(EAX));
  /* 10526309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052630b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052630d call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x10526313u);
  /* 10526313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10526315 jne 0x1052632c */
  if (!C.zf) goto L_1052632c;
  /* 10526317 push 2 */
  push32((uint32_t)(0x2u));
  /* 10526319 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052631c push ecx */
  push32((uint32_t)(ECX));
  /* 1052631d call 0x105246a0 */
  push32(0x10526322u); f_105246a0();
  /* 10526322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526325 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1052632c:;
  /* 1052632c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052632f push edx */
  push32((uint32_t)(EDX));
  /* 10526330 call dword ptr [0x105523b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b4))), 0x10526336u);
  /* 10526336 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10526339 jmp 0x105263f5 */
  goto L_105263f5;
L_1052633e:;
  /* 1052633e cmp dword ptr [0x1054f690], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f690))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526345 jne 0x105263f3 */
  if (!C.zf) goto L_105263f3;
  /* 1052634b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052634f jne 0x10526367 */
  if (!C.zf) goto L_10526367;
  /* 10526351 call dword ptr [0x105523bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523bc))), 0x10526357u);
  /* 10526357 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1052635a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052635e jne 0x10526367 */
  if (!C.zf) goto L_10526367;
  /* 10526360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10526362 jmp 0x105263f5 */
  goto L_105263f5;
L_10526367:;
  /* 10526367 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052636a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052636d:;
  /* 1052636d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526370 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10526373 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526375 je 0x10526395 */
  if (C.zf) goto L_10526395;
  /* 10526377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052637a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052637d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10526380 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526383 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10526386 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526388 jne 0x10526393 */
  if (!C.zf) goto L_10526393;
  /* 1052638a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052638d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526390 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10526393:;
  /* 10526393 jmp 0x1052636d */
  goto L_1052636d;
L_10526395:;
  /* 10526395 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526398 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052639b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052639e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105263a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 105263a6 push 0x1054ac94 */
  push32((uint32_t)(0x1054ac94u));
  /* 105263ab push 2 */
  push32((uint32_t)(0x2u));
  /* 105263ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105263b0 push edx */
  push32((uint32_t)(EDX));
  /* 105263b1 call 0x10523c10 */
  push32(0x105263b6u); f_10523c10();
  /* 105263b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105263b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105263bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105263c0 jne 0x105263d0 */
  if (!C.zf) goto L_105263d0;
  /* 105263c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105263c5 push eax */
  push32((uint32_t)(EAX));
  /* 105263c6 call dword ptr [0x105523a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a4))), 0x105263ccu);
  /* 105263cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105263ce jmp 0x105263f5 */
  goto L_105263f5;
L_105263d0:;
  /* 105263d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105263d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105263d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105263d7 push edx */
  push32((uint32_t)(EDX));
  /* 105263d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105263db push eax */
  push32((uint32_t)(EAX));
  /* 105263dc call 0x1052a4f0 */
  push32(0x105263e1u); f_1052a4f0();
  /* 105263e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105263e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105263e7 push ecx */
  push32((uint32_t)(ECX));
  /* 105263e8 call dword ptr [0x105523a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a4))), 0x105263eeu);
  /* 105263ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105263f1 jmp 0x105263f5 */
  goto L_105263f5;
L_105263f3:;
  /* 105263f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105263f5:;
  /* 105263f5 mov esp, ebp */
  ESP = (EBP);
  /* 105263f7 pop ebp */
  EBP = (pop32());
  /* 105263f8 ret  */
  ESPCHK(0x105261e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x10526400 (77 bytes, 25 insns) */
void f_10526400(void) {
  FTRACE(0x10526400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526400 push ebp */
  push32((uint32_t)(EBP));
  /* 10526401 mov ebp, esp */
  EBP = (ESP);
  /* 10526403 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526405 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1052640a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052640c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526410 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10526413 push eax */
  push32((uint32_t)(EAX));
  /* 10526414 call dword ptr [0x10552338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552338))), 0x1052641au);
  /* 1052641a mov dword ptr [0x10550ecc], eax */
  w32((uint32_t)(0x10550ecc), (EAX));
  /* 1052641f cmp dword ptr [0x10550ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526426 jne 0x1052642c */
  if (!C.zf) goto L_1052642c;
  /* 10526428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052642a jmp 0x1052644b */
  goto L_1052644b;
L_1052642c:;
  /* 1052642c call 0x10527eb0 */
  push32(0x10526431u); f_10527eb0();
  /* 10526431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10526433 jne 0x10526446 */
  if (!C.zf) goto L_10526446;
  /* 10526435 mov ecx, dword ptr [0x10550ecc] */
  ECX = (r32((uint32_t)(0x10550ecc)));
  /* 1052643b push ecx */
  push32((uint32_t)(ECX));
  /* 1052643c call dword ptr [0x1055233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055233c))), 0x10526442u);
  /* 10526442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10526444 jmp 0x1052644b */
  goto L_1052644b;
L_10526446:;
  /* 10526446 mov eax, 1 */
  EAX = (0x1u);
L_1052644b:;
  /* 1052644b pop ebp */
  EBP = (pop32());
  /* 1052644c ret  */
  ESPCHK(0x10526400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x10526450 (156 bytes, 48 insns) */
void f_10526450(void) {
  FTRACE(0x10526450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526450 push ebp */
  push32((uint32_t)(EBP));
  /* 10526451 mov ebp, esp */
  EBP = (ESP);
  /* 10526453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526456 mov eax, dword ptr [0x10550ec8] */
  EAX = (r32((uint32_t)(0x10550ec8)));
  /* 1052645b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052645e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10526465 jmp 0x10526470 */
  goto L_10526470;
L_10526467:;
  /* 10526467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052646a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052646d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10526470:;
  /* 10526470 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526473 cmp edx, dword ptr [0x10550ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10550ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526479 jge 0x105264c6 */
  if ((C.sf==C.of)) goto L_105264c6;
  /* 1052647b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10526480 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10526485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526488 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052648b push ecx */
  push32((uint32_t)(ECX));
  /* 1052648c call dword ptr [0x10552330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552330))), 0x10526492u);
  /* 10526492 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10526497 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526499 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052649c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052649f push eax */
  push32((uint32_t)(EAX));
  /* 105264a0 call dword ptr [0x10552330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552330))), 0x105264a6u);
  /* 105264a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105264a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105264ac push edx */
  push32((uint32_t)(EDX));
  /* 105264ad push 0 */
  push32((uint32_t)(0x0u));
  /* 105264af mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 105264b4 push eax */
  push32((uint32_t)(EAX));
  /* 105264b5 call dword ptr [0x10552384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552384))), 0x105264bbu);
  /* 105264bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105264be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105264c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105264c4 jmp 0x10526467 */
  goto L_10526467;
L_105264c6:;
  /* 105264c6 mov edx, dword ptr [0x10550ec8] */
  EDX = (r32((uint32_t)(0x10550ec8)));
  /* 105264cc push edx */
  push32((uint32_t)(EDX));
  /* 105264cd push 0 */
  push32((uint32_t)(0x0u));
  /* 105264cf mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 105264d4 push eax */
  push32((uint32_t)(EAX));
  /* 105264d5 call dword ptr [0x10552384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552384))), 0x105264dbu);
  /* 105264db mov ecx, dword ptr [0x10550ecc] */
  ECX = (r32((uint32_t)(0x10550ecc)));
  /* 105264e1 push ecx */
  push32((uint32_t)(ECX));
  /* 105264e2 call dword ptr [0x1055233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055233c))), 0x105264e8u);
  /* 105264e8 mov esp, ebp */
  ESP = (EBP);
  /* 105264ea pop ebp */
  EBP = (pop32());
  /* 105264eb ret  */
  ESPCHK(0x10526450u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x105264f0 (73 bytes, 19 insns) */
void f_105264f0(void) {
  FTRACE(0x105264f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105264f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105264f1 mov ebp, esp */
  EBP = (ESP);
  /* 105264f3 cmp dword ptr [0x1054f524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105264fa je 0x1052650e */
  if (C.zf) goto L_1052650e;
  /* 105264fc cmp dword ptr [0x1054f524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526503 jne 0x10526537 */
  if (!C.zf) goto L_10526537;
  /* 10526505 cmp dword ptr [0x1054f528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052650c jne 0x10526537 */
  if (!C.zf) goto L_10526537;
L_1052650e:;
  /* 1052650e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10526513 call 0x10526540 */
  push32(0x10526518u); f_10526540();
  /* 10526518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052651b cmp dword ptr [0x1054f694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526522 je 0x1052652a */
  if (C.zf) goto L_1052652a;
  /* 10526524 call dword ptr [0x1054f694] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f694))), 0x1052652au);
L_1052652a:;
  /* 1052652a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1052652f call 0x10526540 */
  push32(0x10526534u); f_10526540();
  /* 10526534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10526537:;
  /* 10526537 pop ebp */
  EBP = (pop32());
  /* 10526538 ret  */
  ESPCHK(0x105264f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x10526540 (447 bytes, 131 insns) */
void f_10526540(void) {
  FTRACE(0x10526540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526540 push ebp */
  push32((uint32_t)(EBP));
  /* 10526541 mov ebp, esp */
  EBP = (ESP);
  /* 10526543 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526549 push ebx */
  push32((uint32_t)(EBX));
  /* 1052654a push esi */
  push32((uint32_t)(ESI));
  /* 1052654b push edi */
  push32((uint32_t)(EDI));
  /* 1052654c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10526553 jmp 0x1052655e */
  goto L_1052655e;
L_10526555:;
  /* 10526555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526558 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052655b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1052655e:;
  /* 1052655e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526562 jae 0x10526577 */
  if (!C.cf) goto L_10526577;
  /* 10526564 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052656a cmp edx, dword ptr [ecx*8 + 0x1054dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1054dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526571 jne 0x10526575 */
  if (!C.zf) goto L_10526575;
  /* 10526573 jmp 0x10526577 */
  goto L_10526577;
L_10526575:;
  /* 10526575 jmp 0x10526555 */
  goto L_10526555;
L_10526577:;
  /* 10526577 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052657a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052657d cmp ecx, dword ptr [eax*8 + 0x1054dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1054dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526584 jne 0x105266f8 */
  if (!C.zf) goto L_105266f8;
  /* 1052658a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526591 je 0x105265b4 */
  if (C.zf) goto L_105265b4;
  /* 10526593 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526596 mov eax, dword ptr [edx*8 + 0x1054dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1054dab4)));
  /* 1052659d push eax */
  push32((uint32_t)(EAX));
  /* 1052659e push 0 */
  push32((uint32_t)(0x0u));
  /* 105265a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105265a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105265a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105265a6 call 0x10522cd0 */
  push32(0x105265abu); f_10522cd0();
  /* 105265ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105265ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105265b1 jne 0x105265b4 */
  if (!C.zf) goto L_105265b4;
  /* 105265b3 int3  */
  x86_unimpl("int3 @ 0x105265b3");
L_105265b4:;
  /* 105265b4 cmp dword ptr [0x1054f524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105265bb je 0x105265cf */
  if (C.zf) goto L_105265cf;
  /* 105265bd cmp dword ptr [0x1054f524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105265c4 jne 0x10526608 */
  if (!C.zf) goto L_10526608;
  /* 105265c6 cmp dword ptr [0x1054f528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105265cd jne 0x10526608 */
  if (!C.zf) goto L_10526608;
L_105265cf:;
  /* 105265cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105265d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 105265d4 push ecx */
  push32((uint32_t)(ECX));
  /* 105265d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105265d8 mov eax, dword ptr [edx*8 + 0x1054dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1054dab4)));
  /* 105265df push eax */
  push32((uint32_t)(EAX));
  /* 105265e0 call 0x10526a40 */
  push32(0x105265e5u); f_10526a40();
  /* 105265e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105265e8 push eax */
  push32((uint32_t)(EAX));
  /* 105265e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105265ec mov edx, dword ptr [ecx*8 + 0x1054dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1054dab4)));
  /* 105265f3 push edx */
  push32((uint32_t)(EDX));
  /* 105265f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105265f6 call dword ptr [0x1055234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055234c))), 0x105265fcu);
  /* 105265fc push eax */
  push32((uint32_t)(EAX));
  /* 105265fd call dword ptr [0x10552350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552350))), 0x10526603u);
  /* 10526603 jmp 0x105266f8 */
  goto L_105266f8;
L_10526608:;
  /* 10526608 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052660f je 0x105266f8 */
  if (C.zf) goto L_105266f8;
  /* 10526615 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1052661a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10526620 push eax */
  push32((uint32_t)(EAX));
  /* 10526621 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526623 call dword ptr [0x10552368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552368))), 0x10526629u);
  /* 10526629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052662b jne 0x10526641 */
  if (!C.zf) goto L_10526641;
  /* 1052662d push 0x1054a4fc */
  push32((uint32_t)(0x1054a4fcu));
  /* 10526632 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10526638 push ecx */
  push32((uint32_t)(ECX));
  /* 10526639 call 0x10526bc0 */
  push32(0x1052663eu); f_10526bc0();
  /* 1052663e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10526641:;
  /* 10526641 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10526647 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1052664a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052664d push eax */
  push32((uint32_t)(EAX));
  /* 1052664e call 0x10526a40 */
  push32(0x10526653u); f_10526a40();
  /* 10526653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526656 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526659 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052665c jbe 0x1052668a */
  if ((C.cf||C.zf)) goto L_1052668a;
  /* 1052665e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10526664 push ecx */
  push32((uint32_t)(ECX));
  /* 10526665 call 0x10526a40 */
  push32(0x1052666au); f_10526a40();
  /* 1052666a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052666d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526670 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10526674 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10526677 push 3 */
  push32((uint32_t)(0x3u));
  /* 10526679 push 0x1054a4f8 */
  push32((uint32_t)(0x1054a4f8u));
  /* 1052667e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526681 push ecx */
  push32((uint32_t)(ECX));
  /* 10526682 call 0x10527430 */
  push32(0x10526687u); f_10527430();
  /* 10526687 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052668a:;
  /* 1052668a push 0x1054af50 */
  push32((uint32_t)(0x1054af50u));
  /* 1052668f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10526695 push edx */
  push32((uint32_t)(EDX));
  /* 10526696 call 0x10526bc0 */
  push32(0x1052669bu); f_10526bc0();
  /* 1052669b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052669e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105266a1 push eax */
  push32((uint32_t)(EAX));
  /* 105266a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 105266a8 push ecx */
  push32((uint32_t)(ECX));
  /* 105266a9 call 0x10526bd0 */
  push32(0x105266aeu); f_10526bd0();
  /* 105266ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105266b1 push 0x1054a470 */
  push32((uint32_t)(0x1054a470u));
  /* 105266b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105266bc push edx */
  push32((uint32_t)(EDX));
  /* 105266bd call 0x10526bd0 */
  push32(0x105266c2u); f_10526bd0();
  /* 105266c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105266c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105266c8 mov ecx, dword ptr [eax*8 + 0x1054dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1054dab4)));
  /* 105266cf push ecx */
  push32((uint32_t)(ECX));
  /* 105266d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105266d6 push edx */
  push32((uint32_t)(EDX));
  /* 105266d7 call 0x10526bd0 */
  push32(0x105266dcu); f_10526bd0();
  /* 105266dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105266df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 105266e4 push 0x1054af28 */
  push32((uint32_t)(0x1054af28u));
  /* 105266e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 105266ef push eax */
  push32((uint32_t)(EAX));
  /* 105266f0 call 0x10527370 */
  push32(0x105266f5u); f_10527370();
  /* 105266f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105266f8:;
  /* 105266f8 pop edi */
  EDI = (pop32());
  /* 105266f9 pop esi */
  ESI = (pop32());
  /* 105266fa pop ebx */
  EBX = (pop32());
  /* 105266fb mov esp, ebp */
  ESP = (EBP);
  /* 105266fd pop ebp */
  EBP = (pop32());
  /* 105266fe ret  */
  ESPCHK(0x10526540u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10526700 (80 bytes, 27 insns) */
void f_10526700(void) {
  FTRACE(0x10526700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526700 push ebp */
  push32((uint32_t)(EBP));
  /* 10526701 mov ebp, esp */
  EBP = (ESP);
  /* 10526703 push ecx */
  push32((uint32_t)(ECX));
  /* 10526704 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052670b jmp 0x10526716 */
  goto L_10526716;
L_1052670d:;
  /* 1052670d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10526716:;
  /* 10526716 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052671a jae 0x1052672f */
  if (!C.cf) goto L_1052672f;
  /* 1052671c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052671f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526722 cmp edx, dword ptr [ecx*8 + 0x1054dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1054dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526729 jne 0x1052672d */
  if (!C.zf) goto L_1052672d;
  /* 1052672b jmp 0x1052672f */
  goto L_1052672f;
L_1052672d:;
  /* 1052672d jmp 0x1052670d */
  goto L_1052670d;
L_1052672f:;
  /* 1052672f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526735 cmp ecx, dword ptr [eax*8 + 0x1054dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1054dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052673c jne 0x1052674a */
  if (!C.zf) goto L_1052674a;
  /* 1052673e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526741 mov eax, dword ptr [edx*8 + 0x1054dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1054dab4)));
  /* 10526748 jmp 0x1052674c */
  goto L_1052674c;
L_1052674a:;
  /* 1052674a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052674c:;
  /* 1052674c mov esp, ebp */
  ESP = (EBP);
  /* 1052674e pop ebp */
  EBP = (pop32());
  /* 1052674f ret  */
  ESPCHK(0x10526700u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10526750 (66 bytes, 28 insns) */
void f_10526750(void) {
  FTRACE(0x10526750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526750 push ebp */
  push32((uint32_t)(EBP));
  /* 10526751 mov ebp, esp */
  EBP = (ESP);
  /* 10526753 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526757 jne 0x10526777 */
  if (!C.zf) goto L_10526777;
  /* 10526759 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052675d jge 0x10526777 */
  if ((C.sf==C.of)) goto L_10526777;
  /* 1052675f push 1 */
  push32((uint32_t)(0x1u));
  /* 10526761 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526764 push eax */
  push32((uint32_t)(EAX));
  /* 10526765 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526768 push ecx */
  push32((uint32_t)(ECX));
  /* 10526769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052676c push edx */
  push32((uint32_t)(EDX));
  /* 1052676d call 0x105267a0 */
  push32(0x10526772u); f_105267a0();
  /* 10526772 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526775 jmp 0x1052678d */
  goto L_1052678d;
L_10526777:;
  /* 10526777 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526779 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052677c push eax */
  push32((uint32_t)(EAX));
  /* 1052677d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526780 push ecx */
  push32((uint32_t)(ECX));
  /* 10526781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526784 push edx */
  push32((uint32_t)(EDX));
  /* 10526785 call 0x105267a0 */
  push32(0x1052678au); f_105267a0();
  /* 1052678a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052678d:;
  /* 1052678d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526790 pop ebp */
  EBP = (pop32());
  /* 10526791 ret  */
  ESPCHK(0x10526750u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x105267a0 (194 bytes, 71 insns) */
void f_105267a0(void) {
  FTRACE(0x105267a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105267a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105267a1 mov ebp, esp */
  EBP = (ESP);
  /* 105267a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105267a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105267a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105267ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105267b0 je 0x105267c9 */
  if (C.zf) goto L_105267c9;
  /* 105267b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105267b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 105267b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105267bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105267be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105267c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105267c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105267c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105267c9:;
  /* 105267c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105267cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105267cf:;
  /* 105267cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105267d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105267d4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105267d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105267da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105267dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105267df div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105267e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105267e5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105267e9 jbe 0x10526801 */
  if ((C.cf||C.zf)) goto L_10526801;
  /* 105267eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105267ee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105267f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105267f4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105267f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105267f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105267fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105267ff jmp 0x10526815 */
  goto L_10526815;
L_10526801:;
  /* 10526801 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526804 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052680a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1052680c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052680f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526812 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10526815:;
  /* 10526815 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526819 ja 0x105267cf */
  if ((!C.cf&&!C.zf)) goto L_105267cf;
  /* 1052681b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052681e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10526821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526824 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526827 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052682a:;
  /* 1052682a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052682d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1052682f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10526832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526838 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1052683a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1052683c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052683f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10526842 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10526844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526847 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052684a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052684d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526850 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526853 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10526856 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526859 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052685c jb 0x1052682a */
  if (C.cf) goto L_1052682a;
  /* 1052685e mov esp, ebp */
  ESP = (EBP);
  /* 10526860 pop ebp */
  EBP = (pop32());
  /* 10526861 ret  */
  ESPCHK(0x105267a0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10526870 (63 bytes, 24 insns) */
void f_10526870(void) {
  FTRACE(0x10526870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526870 push ebp */
  push32((uint32_t)(EBP));
  /* 10526871 mov ebp, esp */
  EBP = (ESP);
  /* 10526873 push ecx */
  push32((uint32_t)(ECX));
  /* 10526874 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526878 jne 0x10526889 */
  if (!C.zf) goto L_10526889;
  /* 1052687a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052687e jge 0x10526889 */
  if ((C.sf==C.of)) goto L_10526889;
  /* 10526880 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10526887 jmp 0x10526890 */
  goto L_10526890;
L_10526889:;
  /* 10526889 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10526890:;
  /* 10526890 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526893 push eax */
  push32((uint32_t)(EAX));
  /* 10526894 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526897 push ecx */
  push32((uint32_t)(ECX));
  /* 10526898 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052689b push edx */
  push32((uint32_t)(EDX));
  /* 1052689c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052689f push eax */
  push32((uint32_t)(EAX));
  /* 105268a0 call 0x105267a0 */
  push32(0x105268a5u); f_105267a0();
  /* 105268a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105268a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105268ab mov esp, ebp */
  ESP = (EBP);
  /* 105268ad pop ebp */
  EBP = (pop32());
  /* 105268ae ret  */
  ESPCHK(0x10526870u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x105268b0 (30 bytes, 14 insns) */
void f_105268b0(void) {
  FTRACE(0x105268b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105268b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105268b1 mov ebp, esp */
  EBP = (ESP);
  /* 105268b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105268b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105268b8 push eax */
  push32((uint32_t)(EAX));
  /* 105268b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105268bc push ecx */
  push32((uint32_t)(ECX));
  /* 105268bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105268c0 push edx */
  push32((uint32_t)(EDX));
  /* 105268c1 call 0x105267a0 */
  push32(0x105268c6u); f_105267a0();
  /* 105268c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105268c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105268cc pop ebp */
  EBP = (pop32());
  /* 105268cd ret  */
  ESPCHK(0x105268b0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x105268d0 (72 bytes, 28 insns) */
void f_105268d0(void) {
  FTRACE(0x105268d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105268d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105268d1 mov ebp, esp */
  EBP = (ESP);
  /* 105268d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105268d4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105268d8 jne 0x105268f1 */
  if (!C.zf) goto L_105268f1;
  /* 105268da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105268de jg 0x105268f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_105268f1;
  /* 105268e0 jl 0x105268e8 */
  if ((C.sf!=C.of)) goto L_105268e8;
  /* 105268e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105268e6 jae 0x105268f1 */
  if (!C.cf) goto L_105268f1;
L_105268e8:;
  /* 105268e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105268ef jmp 0x105268f8 */
  goto L_105268f8;
L_105268f1:;
  /* 105268f1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105268f8:;
  /* 105268f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105268fb push eax */
  push32((uint32_t)(EAX));
  /* 105268fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105268ff push ecx */
  push32((uint32_t)(ECX));
  /* 10526900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526903 push edx */
  push32((uint32_t)(EDX));
  /* 10526904 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526907 push eax */
  push32((uint32_t)(EAX));
  /* 10526908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052690b push ecx */
  push32((uint32_t)(ECX));
  /* 1052690c call 0x10526920 */
  push32(0x10526911u); f_10526920();
  /* 10526911 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526914 mov esp, ebp */
  ESP = (EBP);
  /* 10526916 pop ebp */
  EBP = (pop32());
  /* 10526917 ret  */
  ESPCHK(0x105268d0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10526920 (242 bytes, 91 insns) */
void f_10526920(void) {
  FTRACE(0x10526920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526920 push ebp */
  push32((uint32_t)(EBP));
  /* 10526921 mov ebp, esp */
  EBP = (ESP);
  /* 10526923 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526926 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052692c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526930 je 0x10526954 */
  if (C.zf) goto L_10526954;
  /* 10526932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526935 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10526938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052693b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052693e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10526941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526944 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10526946 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526949 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052694c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052694e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10526951 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10526954:;
  /* 10526954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526957 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1052695a:;
  /* 1052695a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052695d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052695f push ecx */
  push32((uint32_t)(ECX));
  /* 10526960 push eax */
  push32((uint32_t)(EAX));
  /* 10526961 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526964 push edx */
  push32((uint32_t)(EDX));
  /* 10526965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526968 push eax */
  push32((uint32_t)(EAX));
  /* 10526969 call 0x1052a8a0 */
  push32(0x1052696eu); f_1052a8a0();
  /* 1052696e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10526971 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10526974 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526976 push edx */
  push32((uint32_t)(EDX));
  /* 10526977 push ecx */
  push32((uint32_t)(ECX));
  /* 10526978 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052697b push eax */
  push32((uint32_t)(EAX));
  /* 1052697c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052697f push ecx */
  push32((uint32_t)(ECX));
  /* 10526980 call 0x1052a830 */
  push32(0x10526985u); f_1052a830();
  /* 10526985 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10526988 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1052698b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052698f jbe 0x105269a7 */
  if ((C.cf||C.zf)) goto L_105269a7;
  /* 10526991 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526994 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052699a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1052699c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052699f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105269a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105269a5 jmp 0x105269bb */
  goto L_105269bb;
L_105269a7:;
  /* 105269a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105269aa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105269ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105269b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105269b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105269bb:;
  /* 105269bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105269bf ja 0x1052695a */
  if ((!C.cf&&!C.zf)) goto L_1052695a;
  /* 105269c1 jb 0x105269c9 */
  if (C.cf) goto L_105269c9;
  /* 105269c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105269c7 ja 0x1052695a */
  if ((!C.cf&&!C.zf)) goto L_1052695a;
L_105269c9:;
  /* 105269c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269cc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105269cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105269d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105269d8:;
  /* 105269d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105269dd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 105269e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105269e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105269e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105269ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105269ed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 105269f0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105269f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105269f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105269f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105269fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105269fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526a01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10526a04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526a07 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526a0a jb 0x105269d8 */
  if (C.cf) goto L_105269d8;
  /* 10526a0c mov esp, ebp */
  ESP = (EBP);
  /* 10526a0e pop ebp */
  EBP = (pop32());
  /* 10526a0f ret 0x14 */
  ESPCHK(0x10526920u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10526a20 (31 bytes, 15 insns) */
void f_10526a20(void) {
  FTRACE(0x10526a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10526a21 mov ebp, esp */
  EBP = (ESP);
  /* 10526a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526a25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10526a28 push eax */
  push32((uint32_t)(EAX));
  /* 10526a29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526a2c push ecx */
  push32((uint32_t)(ECX));
  /* 10526a2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526a30 push edx */
  push32((uint32_t)(EDX));
  /* 10526a31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526a34 push eax */
  push32((uint32_t)(EAX));
  /* 10526a35 call 0x10526920 */
  push32(0x10526a3au); f_10526920();
  /* 10526a3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526a3d pop ebp */
  EBP = (pop32());
  /* 10526a3e ret  */
  ESPCHK(0x10526a20u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10526a40 (123 bytes, 44 insns) */
void f_10526a40(void) {
  FTRACE(0x10526a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526a40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10526a44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10526a4a je 0x10526a60 */
  if (C.zf) goto L_10526a60;
L_10526a4c:;
  /* 10526a4c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10526a4e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10526a4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10526a51 je 0x10526a93 */
  if (C.zf) goto L_10526a93;
  /* 10526a53 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10526a59 jne 0x10526a4c */
  if (!C.zf) goto L_10526a4c;
  /* 10526a5b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10526a60:;
  /* 10526a60 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10526a62 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10526a67 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526a69 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10526a6c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10526a6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526a71 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10526a76 je 0x10526a60 */
  if (C.zf) goto L_10526a60;
  /* 10526a78 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10526a7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10526a7d je 0x10526ab1 */
  if (C.zf) goto L_10526ab1;
  /* 10526a7f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10526a81 je 0x10526aa7 */
  if (C.zf) goto L_10526aa7;
  /* 10526a83 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10526a88 je 0x10526a9d */
  if (C.zf) goto L_10526a9d;
  /* 10526a8a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10526a8f je 0x10526a93 */
  if (C.zf) goto L_10526a93;
  /* 10526a91 jmp 0x10526a60 */
  goto L_10526a60;
L_10526a93:;
  /* 10526a93 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10526a96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10526a9a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526a9c ret  */
  ESPCHK(0x10526a40u, _esp0);
  ESP += 4; return;
L_10526a9d:;
  /* 10526a9d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10526aa0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10526aa4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526aa6 ret  */
  ESPCHK(0x10526a40u, _esp0);
  ESP += 4; return;
L_10526aa7:;
  /* 10526aa7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10526aaa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10526aae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526ab0 ret  */
  ESPCHK(0x10526a40u, _esp0);
  ESP += 4; return;
L_10526ab1:;
  /* 10526ab1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10526ab4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10526ab8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526aba ret  */
  ESPCHK(0x10526a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10526ac0 (249 bytes, 93 insns) */
void f_10526ac0(void) {
  FTRACE(0x10526ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10526ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10526ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 10526ac7 push esi */
  push32((uint32_t)(ESI));
  /* 10526ac8 push edi */
  push32((uint32_t)(EDI));
  /* 10526ac9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10526acc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10526acf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10526ad2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10526ad5:;
  /* 10526ad5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526ad9 jne 0x10526af9 */
  if (!C.zf) goto L_10526af9;
  /* 10526adb push 0x1054af88 */
  push32((uint32_t)(0x1054af88u));
  /* 10526ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526ae2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10526ae4 push 0x1054af7c */
  push32((uint32_t)(0x1054af7cu));
  /* 10526ae9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10526aeb call 0x10522cd0 */
  push32(0x10526af0u); f_10522cd0();
  /* 10526af0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526af3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526af6 jne 0x10526af9 */
  if (!C.zf) goto L_10526af9;
  /* 10526af8 int3  */
  x86_unimpl("int3 @ 0x10526af8");
L_10526af9:;
  /* 10526af9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526afb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526afd jne 0x10526ad5 */
  if (!C.zf) goto L_10526ad5;
L_10526aff:;
  /* 10526aff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526b03 jne 0x10526b23 */
  if (!C.zf) goto L_10526b23;
  /* 10526b05 push 0x1054af6c */
  push32((uint32_t)(0x1054af6cu));
  /* 10526b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10526b0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10526b0e push 0x1054af7c */
  push32((uint32_t)(0x1054af7cu));
  /* 10526b13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10526b15 call 0x10522cd0 */
  push32(0x10526b1au); f_10522cd0();
  /* 10526b1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526b1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526b20 jne 0x10526b23 */
  if (!C.zf) goto L_10526b23;
  /* 10526b22 int3  */
  x86_unimpl("int3 @ 0x10526b22");
L_10526b23:;
  /* 10526b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10526b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10526b27 jne 0x10526aff */
  if (!C.zf) goto L_10526aff;
  /* 10526b29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10526b33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526b39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10526b3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526b42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10526b44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526b4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10526b4d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10526b50 push edx */
  push32((uint32_t)(EDX));
  /* 10526b51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526b54 push eax */
  push32((uint32_t)(EAX));
  /* 10526b55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b58 push ecx */
  push32((uint32_t)(ECX));
  /* 10526b59 call 0x1052aba0 */
  push32(0x10526b5eu); f_1052aba0();
  /* 10526b5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526b61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10526b64 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b67 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10526b6a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526b6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10526b73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b76 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526b7a jl 0x10526b9e */
  if ((C.sf!=C.of)) goto L_10526b9e;
  /* 10526b7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10526b81 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10526b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526b86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10526b8c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10526b8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10526b94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526b97 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526b9a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10526b9c jmp 0x10526baf */
  goto L_10526baf;
L_10526b9e:;
  /* 10526b9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10526ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526ba4 call 0x1052a920 */
  push32(0x10526ba9u); f_1052a920();
  /* 10526ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526bac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10526baf:;
  /* 10526baf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10526bb2 pop edi */
  EDI = (pop32());
  /* 10526bb3 pop esi */
  ESI = (pop32());
  /* 10526bb4 pop ebx */
  EBX = (pop32());
  /* 10526bb5 mov esp, ebp */
  ESP = (EBP);
  /* 10526bb7 pop ebp */
  EBP = (pop32());
  /* 10526bb8 ret  */
  ESPCHK(0x10526ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x10526bc0 (7 bytes, 3 insns) */
void f_10526bc0(void) {
  FTRACE(0x10526bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526bc0 push edi */
  push32((uint32_t)(EDI));
  /* 10526bc1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10526bc5 jmp 0x10526c31 */
  jmp_ind(0x10526c31u); return;
}

/* FUN_10006bd0 @ 0x10526bd0 (224 bytes, 84 insns) */
void f_10526bd0(void) {
  FTRACE(0x10526bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526bd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10526bd4 push edi */
  push32((uint32_t)(EDI));
  /* 10526bd5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10526bdb je 0x10526bec */
  if (C.zf) goto L_10526bec;
L_10526bdd:;
  /* 10526bdd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10526bdf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10526be0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10526be2 je 0x10526c1f */
  if (C.zf) goto L_10526c1f;
  /* 10526be4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10526bea jne 0x10526bdd */
  if (!C.zf) goto L_10526bdd;
L_10526bec:;
  /* 10526bec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10526bee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10526bf3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526bf5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10526bf8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10526bfa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526bfd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10526c02 je 0x10526bec */
  if (C.zf) goto L_10526bec;
  /* 10526c04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10526c07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10526c09 je 0x10526c2e */
  if (C.zf) goto L_10526c2e;
  /* 10526c0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10526c0d je 0x10526c29 */
  if (C.zf) goto L_10526c29;
  /* 10526c0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10526c14 je 0x10526c24 */
  if (C.zf) goto L_10526c24;
  /* 10526c16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10526c1b je 0x10526c1f */
  if (C.zf) goto L_10526c1f;
  /* 10526c1d jmp 0x10526bec */
  goto L_10526bec;
L_10526c1f:;
  /* 10526c1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10526c22 jmp 0x10526c31 */
  goto L_10526c31;
L_10526c24:;
  /* 10526c24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10526c27 jmp 0x10526c31 */
  goto L_10526c31;
L_10526c29:;
  /* 10526c29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10526c2c jmp 0x10526c31 */
  goto L_10526c31;
L_10526c2e:;
  /* 10526c2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10526c31:;
  /* 10526c31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10526c35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10526c3b je 0x10526c56 */
  if (C.zf) goto L_10526c56;
L_10526c3d:;
  /* 10526c3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10526c3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10526c40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10526c42 je 0x10526ca8 */
  if (C.zf) goto L_10526ca8;
  /* 10526c44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10526c46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10526c47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10526c4d jne 0x10526c3d */
  if (!C.zf) goto L_10526c3d;
  /* 10526c4f jmp 0x10526c56 */
  goto L_10526c56;
L_10526c51:;
  /* 10526c51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10526c53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10526c56:;
  /* 10526c56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10526c5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10526c5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526c5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10526c62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10526c64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10526c66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526c69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10526c6e je 0x10526c51 */
  if (C.zf) goto L_10526c51;
  /* 10526c70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10526c72 je 0x10526ca8 */
  if (C.zf) goto L_10526ca8;
  /* 10526c74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10526c76 je 0x10526c9f */
  if (C.zf) goto L_10526c9f;
  /* 10526c78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10526c7e je 0x10526c92 */
  if (C.zf) goto L_10526c92;
  /* 10526c80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10526c86 je 0x10526c8a */
  if (C.zf) goto L_10526c8a;
  /* 10526c88 jmp 0x10526c51 */
  goto L_10526c51;
L_10526c8a:;
  /* 10526c8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10526c8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10526c90 pop edi */
  EDI = (pop32());
  /* 10526c91 ret  */
  ESPCHK(0x10526bd0u, _esp0);
  ESP += 4; return;
L_10526c92:;
  /* 10526c92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10526c95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10526c99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10526c9d pop edi */
  EDI = (pop32());
  /* 10526c9e ret  */
  ESPCHK(0x10526bd0u, _esp0);
  ESP += 4; return;
L_10526c9f:;
  /* 10526c9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10526ca2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10526ca6 pop edi */
  EDI = (pop32());
  /* 10526ca7 ret  */
  ESPCHK(0x10526bd0u, _esp0);
  ESP += 4; return;
L_10526ca8:;
  /* 10526ca8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10526caa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10526cae pop edi */
  EDI = (pop32());
  /* 10526caf ret  */
  ESPCHK(0x10526bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x10526cb0 (243 bytes, 91 insns) */
void f_10526cb0(void) {
  FTRACE(0x10526cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10526cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10526cb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10526cb7 push esi */
  push32((uint32_t)(ESI));
  /* 10526cb8 push edi */
  push32((uint32_t)(EDI));
  /* 10526cb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10526cbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10526cbf:;
  /* 10526cbf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526cc3 jne 0x10526ce3 */
  if (!C.zf) goto L_10526ce3;
  /* 10526cc5 push 0x1054af88 */
  push32((uint32_t)(0x1054af88u));
  /* 10526cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10526ccc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10526cce push 0x1054af98 */
  push32((uint32_t)(0x1054af98u));
  /* 10526cd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10526cd5 call 0x10522cd0 */
  push32(0x10526cdau); f_10522cd0();
  /* 10526cda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526cdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526ce0 jne 0x10526ce3 */
  if (!C.zf) goto L_10526ce3;
  /* 10526ce2 int3  */
  x86_unimpl("int3 @ 0x10526ce2");
L_10526ce3:;
  /* 10526ce3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10526ce5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10526ce7 jne 0x10526cbf */
  if (!C.zf) goto L_10526cbf;
L_10526ce9:;
  /* 10526ce9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526ced jne 0x10526d0d */
  if (!C.zf) goto L_10526d0d;
  /* 10526cef push 0x1054af6c */
  push32((uint32_t)(0x1054af6cu));
  /* 10526cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10526cf6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10526cf8 push 0x1054af98 */
  push32((uint32_t)(0x1054af98u));
  /* 10526cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10526cff call 0x10522cd0 */
  push32(0x10526d04u); f_10522cd0();
  /* 10526d04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526d07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526d0a jne 0x10526d0d */
  if (!C.zf) goto L_10526d0d;
  /* 10526d0c int3  */
  x86_unimpl("int3 @ 0x10526d0c");
L_10526d0d:;
  /* 10526d0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526d0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10526d11 jne 0x10526ce9 */
  if (!C.zf) goto L_10526ce9;
  /* 10526d13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d16 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10526d1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526d23 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10526d26 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526d2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10526d2e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526d34 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10526d37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10526d3a push ecx */
  push32((uint32_t)(ECX));
  /* 10526d3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10526d3e push edx */
  push32((uint32_t)(EDX));
  /* 10526d3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d42 push eax */
  push32((uint32_t)(EAX));
  /* 10526d43 call 0x1052aba0 */
  push32(0x10526d48u); f_1052aba0();
  /* 10526d48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526d4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10526d4e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d51 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10526d54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526d57 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10526d5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d60 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526d64 jl 0x10526d88 */
  if ((C.sf!=C.of)) goto L_10526d88;
  /* 10526d66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10526d6b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10526d6e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10526d70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10526d76 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10526d79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10526d7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526d81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10526d86 jmp 0x10526d99 */
  goto L_10526d99;
L_10526d88:;
  /* 10526d88 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10526d8b push edx */
  push32((uint32_t)(EDX));
  /* 10526d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10526d8e call 0x1052a920 */
  push32(0x10526d93u); f_1052a920();
  /* 10526d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526d96 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10526d99:;
  /* 10526d99 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10526d9c pop edi */
  EDI = (pop32());
  /* 10526d9d pop esi */
  ESI = (pop32());
  /* 10526d9e pop ebx */
  EBX = (pop32());
  /* 10526d9f mov esp, ebp */
  ESP = (EBP);
  /* 10526da1 pop ebp */
  EBP = (pop32());
  /* 10526da2 ret  */
  ESPCHK(0x10526cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x10526db0 (47 bytes, 17 insns) */
void f_10526db0(void) {
  FTRACE(0x10526db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10526db1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526db6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10526dba jb 0x10526dd0 */
  if (C.cf) goto L_10526dd0;
L_10526dbc:;
  /* 10526dbc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526dc2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526dc7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10526dc9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526dce jae 0x10526dbc */
  if (!C.cf) goto L_10526dbc;
L_10526dd0:;
  /* 10526dd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526dd2 mov eax, esp */
  EAX = (ESP);
  /* 10526dd4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10526dd6 mov esp, ecx */
  ESP = (ECX);
  /* 10526dd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10526dda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10526ddd push eax */
  push32((uint32_t)(EAX));
  /* 10526dde ret  */
  ESPCHK(0x10526db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x10526de0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10526de0(void) {
  FTRACE(0x10526de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10526de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10526de1 mov ebp, esp */
  EBP = (ESP);
  /* 10526de3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526de6 push esi */
  push32((uint32_t)(ESI));
  /* 10526de7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526deb je 0x10526df3 */
  if (C.zf) goto L_10526df3;
  /* 10526ded cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526df1 jne 0x10526df8 */
  if (!C.zf) goto L_10526df8;
L_10526df3:;
  /* 10526df3 jmp 0x10526fc8 */
  goto L_10526fc8;
L_10526df8:;
  /* 10526df8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526dfc je 0x10526e14 */
  if (C.zf) goto L_10526e14;
  /* 10526dfe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e02 je 0x10526e14 */
  if (C.zf) goto L_10526e14;
  /* 10526e04 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e08 je 0x10526e14 */
  if (C.zf) goto L_10526e14;
  /* 10526e0a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e0e jne 0x10526ef1 */
  if (!C.zf) goto L_10526ef1;
L_10526e14:;
  /* 10526e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10526e16 call 0x10527610 */
  push32(0x10526e1bu); f_10527610();
  /* 10526e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526e1e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e22 je 0x10526e2a */
  if (C.zf) goto L_10526e2a;
  /* 10526e24 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e28 jne 0x10526e6f */
  if (!C.zf) goto L_10526e6f;
L_10526e2a:;
  /* 10526e2a cmp dword ptr [0x1054f6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e31 jne 0x10526e6f */
  if (!C.zf) goto L_10526e6f;
  /* 10526e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10526e35 push 0x10527010 */
  push32((uint32_t)(0x10527010u));
  /* 10526e3a call dword ptr [0x1055232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055232c))), 0x10526e40u);
  /* 10526e40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e43 jne 0x10526e51 */
  if (!C.zf) goto L_10526e51;
  /* 10526e45 mov dword ptr [0x1054f6a8], 1 */
  w32((uint32_t)(0x1054f6a8), (0x1u));
  /* 10526e4f jmp 0x10526e6f */
  goto L_10526e6f;
L_10526e51:;
  /* 10526e51 call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x10526e57u);
  /* 10526e57 mov esi, eax */
  ESI = (EAX);
  /* 10526e59 call 0x1052baf0 */
  push32(0x10526e5eu); f_1052baf0();
  /* 10526e5e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10526e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10526e62 call 0x105276b0 */
  push32(0x10526e67u); f_105276b0();
  /* 10526e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526e6a jmp 0x10526fc8 */
  goto L_10526fc8;
L_10526e6f:;
  /* 10526e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526e72 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10526e75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10526e78 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10526e7b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10526e7e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526e82 ja 0x10526ee2 */
  if ((!C.cf&&!C.zf)) goto L_10526ee2;
  /* 10526e84 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10526e87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10526e89 mov dl, byte ptr [eax + 0x10526fef] */
  DL = (r8((uint32_t)(EAX + 0x10526fef)));
  /* 10526e8f jmp dword ptr [edx*4 + 0x10526fdb] */
  switch (EDX) {
    case 0: goto L_10526e96;
    case 1: goto L_10526ed0;
    case 2: goto L_10526eaa;
    case 3: goto L_10526ebd;
    case 4: goto L_10526ee2;
    default: x86_unimpl("switch@0x10526e8f out of table"); return;
  }
L_10526e96:;
  /* 10526e96 mov ecx, dword ptr [0x1054f698] */
  ECX = (r32((uint32_t)(0x1054f698)));
  /* 10526e9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10526e9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526ea2 mov dword ptr [0x1054f698], edx */
  w32((uint32_t)(0x1054f698), (EDX));
  /* 10526ea8 jmp 0x10526ee2 */
  goto L_10526ee2;
L_10526eaa:;
  /* 10526eaa mov eax, dword ptr [0x1054f69c] */
  EAX = (r32((uint32_t)(0x1054f69c)));
  /* 10526eaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10526eb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526eb5 mov dword ptr [0x1054f69c], ecx */
  w32((uint32_t)(0x1054f69c), (ECX));
  /* 10526ebb jmp 0x10526ee2 */
  goto L_10526ee2;
L_10526ebd:;
  /* 10526ebd mov edx, dword ptr [0x1054f6a0] */
  EDX = (r32((uint32_t)(0x1054f6a0)));
  /* 10526ec3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10526ec6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526ec9 mov dword ptr [0x1054f6a0], eax */
  w32((uint32_t)(0x1054f6a0), (EAX));
  /* 10526ece jmp 0x10526ee2 */
  goto L_10526ee2;
L_10526ed0:;
  /* 10526ed0 mov ecx, dword ptr [0x1054f6a4] */
  ECX = (r32((uint32_t)(0x1054f6a4)));
  /* 10526ed6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10526ed9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526edc mov dword ptr [0x1054f6a4], edx */
  w32((uint32_t)(0x1054f6a4), (EDX));
L_10526ee2:;
  /* 10526ee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10526ee4 call 0x105276b0 */
  push32(0x10526ee9u); f_105276b0();
  /* 10526ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526eec jmp 0x10526fc3 */
  goto L_10526fc3;
L_10526ef1:;
  /* 10526ef1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526ef5 je 0x10526f08 */
  if (C.zf) goto L_10526f08;
  /* 10526ef7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526efb je 0x10526f08 */
  if (C.zf) goto L_10526f08;
  /* 10526efd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526f01 je 0x10526f08 */
  if (C.zf) goto L_10526f08;
  /* 10526f03 jmp 0x10526fc8 */
  goto L_10526fc8;
L_10526f08:;
  /* 10526f08 call 0x10523650 */
  push32(0x10526f0du); f_10523650();
  /* 10526f0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10526f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526f13 cmp dword ptr [eax + 0x50], 0x1054dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1054dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526f1a jne 0x10526f65 */
  if (!C.zf) goto L_10526f65;
  /* 10526f1c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10526f21 push 0x1054afa4 */
  push32((uint32_t)(0x1054afa4u));
  /* 10526f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10526f28 mov ecx, dword ptr [0x1054dc80] */
  ECX = (r32((uint32_t)(0x1054dc80)));
  /* 10526f2e push ecx */
  push32((uint32_t)(ECX));
  /* 10526f2f call 0x10523c10 */
  push32(0x10526f34u); f_10523c10();
  /* 10526f34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526f37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526f3a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10526f3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526f40 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526f44 je 0x10526f63 */
  if (C.zf) goto L_10526f63;
  /* 10526f46 mov ecx, dword ptr [0x1054dc80] */
  ECX = (r32((uint32_t)(0x1054dc80)));
  /* 10526f4c push ecx */
  push32((uint32_t)(ECX));
  /* 10526f4d push 0x1054dc00 */
  push32((uint32_t)(0x1054dc00u));
  /* 10526f52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526f55 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10526f58 push eax */
  push32((uint32_t)(EAX));
  /* 10526f59 call 0x1052a4f0 */
  push32(0x10526f5eu); f_1052a4f0();
  /* 10526f5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526f61 jmp 0x10526f65 */
  goto L_10526f65;
L_10526f63:;
  /* 10526f63 jmp 0x10526fc8 */
  goto L_10526fc8;
L_10526f65:;
  /* 10526f65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526f68 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10526f6b push edx */
  push32((uint32_t)(EDX));
  /* 10526f6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10526f6f push eax */
  push32((uint32_t)(EAX));
  /* 10526f70 call 0x105272f0 */
  push32(0x10526f75u); f_105272f0();
  /* 10526f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10526f78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10526f7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526f7f jne 0x10526f83 */
  if (!C.zf) goto L_10526f83;
  /* 10526f81 jmp 0x10526fc8 */
  goto L_10526fc8;
L_10526f83:;
  /* 10526f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526f86 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10526f89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10526f8c:;
  /* 10526f8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526f8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10526f92 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526f95 jne 0x10526fc3 */
  if (!C.zf) goto L_10526fc3;
  /* 10526f97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526f9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10526f9d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10526fa0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10526fa3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526fa6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10526fa9 mov edx, dword ptr [0x1054dc84] */
  EDX = (r32((uint32_t)(0x1054dc84)));
  /* 10526faf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10526fb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10526fb5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10526fb8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10526fba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10526fbd jb 0x10526fc1 */
  if (C.cf) goto L_10526fc1;
  /* 10526fbf jmp 0x10526fc3 */
  goto L_10526fc3;
L_10526fc1:;
  /* 10526fc1 jmp 0x10526f8c */
  goto L_10526f8c;
L_10526fc3:;
  /* 10526fc3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10526fc6 jmp 0x10526fd6 */
  goto L_10526fd6;
L_10526fc8:;
  /* 10526fc8 call 0x1052bae0 */
  push32(0x10526fcdu); f_1052bae0();
  /* 10526fcd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10526fd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10526fd6:;
  /* 10526fd6 pop esi */
  ESI = (pop32());
  /* 10526fd7 mov esp, ebp */
  ESP = (EBP);
  /* 10526fd9 pop ebp */
  EBP = (pop32());
  /* 10526fda ret  */
  ESPCHK(0x10526de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007010 @ 0x10527010 (146 bytes, 45 insns) */
void f_10527010(void) {
  FTRACE(0x10527010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527010 push ebp */
  push32((uint32_t)(EBP));
  /* 10527011 mov ebp, esp */
  EBP = (ESP);
  /* 10527013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527016 push 1 */
  push32((uint32_t)(0x1u));
  /* 10527018 call 0x10527610 */
  push32(0x1052701du); f_10527610();
  /* 1052701d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527020 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527024 jne 0x1052703e */
  if (!C.zf) goto L_1052703e;
  /* 10527026 mov dword ptr [ebp - 8], 0x1054f698 */
  w32((uint32_t)(EBP + -0x8), (0x1054f698u));
  /* 1052702d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527030 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10527032 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10527035 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1052703c jmp 0x10527054 */
  goto L_10527054;
L_1052703e:;
  /* 1052703e mov dword ptr [ebp - 8], 0x1054f69c */
  w32((uint32_t)(EBP + -0x8), (0x1054f69cu));
  /* 10527045 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527048 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052704a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052704d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10527054:;
  /* 10527054 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527058 jne 0x10527068 */
  if (!C.zf) goto L_10527068;
  /* 1052705a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052705c call 0x105276b0 */
  push32(0x10527061u); f_105276b0();
  /* 10527061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527066 jmp 0x1052709c */
  goto L_1052709c;
L_10527068:;
  /* 10527068 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052706c je 0x1052708d */
  if (C.zf) goto L_1052708d;
  /* 1052706e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527071 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10527077 push 1 */
  push32((uint32_t)(0x1u));
  /* 10527079 call 0x105276b0 */
  push32(0x1052707eu); f_105276b0();
  /* 1052707e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527084 push edx */
  push32((uint32_t)(EDX));
  /* 10527085 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10527088u);
  /* 10527088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052708b jmp 0x10527097 */
  goto L_10527097;
L_1052708d:;
  /* 1052708d push 1 */
  push32((uint32_t)(0x1u));
  /* 1052708f call 0x105276b0 */
  push32(0x10527094u); f_105276b0();
  /* 10527094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527097:;
  /* 10527097 mov eax, 1 */
  EAX = (0x1u);
L_1052709c:;
  /* 1052709c mov esp, ebp */
  ESP = (EBP);
  /* 1052709e pop ebp */
  EBP = (pop32());
  /* 1052709f ret 4 */
  ESPCHK(0x10527010u, _esp0);
  ESP += 8; return;
}

/* FUN_100070b0 @ 0x105270b0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_105270b0(void) {
  FTRACE(0x105270b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105270b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105270b1 mov ebp, esp */
  EBP = (ESP);
  /* 105270b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105270b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105270bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105270c0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105270c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105270c6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105270c9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105270cc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105270d0 ja 0x1052717e */
  if ((!C.cf&&!C.zf)) goto L_1052717e;
  /* 105270d6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105270d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105270db mov dl, byte ptr [eax + 0x105272d2] */
  DL = (r8((uint32_t)(EAX + 0x105272d2)));
  /* 105270e1 jmp dword ptr [edx*4 + 0x105272ba] */
  switch (EDX) {
    case 0: goto L_105270e8;
    case 1: goto L_10527153;
    case 2: goto L_10527139;
    case 3: goto L_10527105;
    case 4: goto L_1052711f;
    case 5: goto L_1052717e;
    default: x86_unimpl("switch@0x105270e1 out of table"); return;
  }
L_105270e8:;
  /* 105270e8 mov dword ptr [ebp - 0x18], 0x1054f698 */
  w32((uint32_t)(EBP + -0x18), (0x1054f698u));
  /* 105270ef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105270f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105270f4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105270f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105270fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105270fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10527100 jmp 0x10527186 */
  goto L_10527186;
L_10527105:;
  /* 10527105 mov dword ptr [ebp - 0x18], 0x1054f69c */
  w32((uint32_t)(EBP + -0x18), (0x1054f69cu));
  /* 1052710c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052710f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10527111 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10527114 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527117 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052711a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052711d jmp 0x10527186 */
  goto L_10527186;
L_1052711f:;
  /* 1052711f mov dword ptr [ebp - 0x18], 0x1054f6a0 */
  w32((uint32_t)(EBP + -0x18), (0x1054f6a0u));
  /* 10527126 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10527129 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052712b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1052712e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527131 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527134 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10527137 jmp 0x10527186 */
  goto L_10527186;
L_10527139:;
  /* 10527139 mov dword ptr [ebp - 0x18], 0x1054f6a4 */
  w32((uint32_t)(EBP + -0x18), (0x1054f6a4u));
  /* 10527140 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10527143 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10527145 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10527148 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052714b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052714e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10527151 jmp 0x10527186 */
  goto L_10527186;
L_10527153:;
  /* 10527153 call 0x10523650 */
  push32(0x10527158u); f_10523650();
  /* 10527158 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052715b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052715e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10527161 push edx */
  push32((uint32_t)(EDX));
  /* 10527162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527165 push eax */
  push32((uint32_t)(EAX));
  /* 10527166 call 0x105272f0 */
  push32(0x1052716bu); f_105272f0();
  /* 1052716b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052716e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527171 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10527174 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10527177 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10527179 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1052717c jmp 0x10527186 */
  goto L_10527186;
L_1052717e:;
  /* 1052717e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10527181 jmp 0x105272b6 */
  goto L_105272b6;
L_10527186:;
  /* 10527186 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052718a je 0x10527196 */
  if (C.zf) goto L_10527196;
  /* 1052718c push 1 */
  push32((uint32_t)(0x1u));
  /* 1052718e call 0x10527610 */
  push32(0x10527193u); f_10527610();
  /* 10527193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527196:;
  /* 10527196 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052719a jne 0x105271b3 */
  if (!C.zf) goto L_105271b3;
  /* 1052719c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271a0 je 0x105271ac */
  if (C.zf) goto L_105271ac;
  /* 105271a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105271a4 call 0x105276b0 */
  push32(0x105271a9u); f_105276b0();
  /* 105271a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105271ac:;
  /* 105271ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105271ae jmp 0x105272b6 */
  goto L_105272b6;
L_105271b3:;
  /* 105271b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271b7 jne 0x105271d0 */
  if (!C.zf) goto L_105271d0;
  /* 105271b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271bd je 0x105271c9 */
  if (C.zf) goto L_105271c9;
  /* 105271bf push 1 */
  push32((uint32_t)(0x1u));
  /* 105271c1 call 0x105276b0 */
  push32(0x105271c6u); f_105276b0();
  /* 105271c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105271c9:;
  /* 105271c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 105271cb call 0x105233d0 */
  push32(0x105271d0u); f_105233d0();
L_105271d0:;
  /* 105271d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271d4 je 0x105271e2 */
  if (C.zf) goto L_105271e2;
  /* 105271d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271da je 0x105271e2 */
  if (C.zf) goto L_105271e2;
  /* 105271dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271e0 jne 0x1052720e */
  if (!C.zf) goto L_1052720e;
L_105271e2:;
  /* 105271e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105271e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 105271e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105271eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105271ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 105271f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105271f9 jne 0x1052720e */
  if (!C.zf) goto L_1052720e;
  /* 105271fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105271fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10527201 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10527204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527207 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1052720e:;
  /* 1052720e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527212 jne 0x10527250 */
  if (!C.zf) goto L_10527250;
  /* 10527214 mov eax, dword ptr [0x1054dc78] */
  EAX = (r32((uint32_t)(0x1054dc78)));
  /* 10527219 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1052721c jmp 0x10527227 */
  goto L_10527227;
L_1052721e:;
  /* 1052721e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527221 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527224 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10527227:;
  /* 10527227 mov edx, dword ptr [0x1054dc78] */
  EDX = (r32((uint32_t)(0x1054dc78)));
  /* 1052722d add edx, dword ptr [0x1054dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527233 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527236 jge 0x1052724e */
  if ((C.sf==C.of)) goto L_1052724e;
  /* 10527238 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052723b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052723e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527241 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10527244 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1052724c jmp 0x1052721e */
  goto L_1052721e;
L_1052724e:;
  /* 1052724e jmp 0x10527259 */
  goto L_10527259;
L_10527250:;
  /* 10527250 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10527253 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10527259:;
  /* 10527259 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052725d je 0x10527269 */
  if (C.zf) goto L_10527269;
  /* 1052725f push 1 */
  push32((uint32_t)(0x1u));
  /* 10527261 call 0x105276b0 */
  push32(0x10527266u); f_105276b0();
  /* 10527266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527269:;
  /* 10527269 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052726d jne 0x10527280 */
  if (!C.zf) goto L_10527280;
  /* 1052726f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527272 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10527275 push edx */
  push32((uint32_t)(EDX));
  /* 10527276 push 8 */
  push32((uint32_t)(0x8u));
  /* 10527278 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1052727bu);
  /* 1052727b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052727e jmp 0x1052728a */
  goto L_1052728a;
L_10527280:;
  /* 10527280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527283 push eax */
  push32((uint32_t)(EAX));
  /* 10527284 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10527287u);
  /* 10527287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052728a:;
  /* 1052728a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052728e je 0x1052729c */
  if (C.zf) goto L_1052729c;
  /* 10527290 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527294 je 0x1052729c */
  if (C.zf) goto L_1052729c;
  /* 10527296 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052729a jne 0x105272b4 */
  if (!C.zf) goto L_105272b4;
L_1052729c:;
  /* 1052729c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052729f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105272a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 105272a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105272a9 jne 0x105272b4 */
  if (!C.zf) goto L_105272b4;
  /* 105272ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105272ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105272b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_105272b4:;
  /* 105272b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105272b6:;
  /* 105272b6 mov esp, ebp */
  ESP = (EBP);
  /* 105272b8 pop ebp */
  EBP = (pop32());
  /* 105272b9 ret  */
  ESPCHK(0x105270b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x105272f0 (91 bytes, 35 insns) */
void f_105272f0(void) {
  FTRACE(0x105272f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105272f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105272f1 mov ebp, esp */
  EBP = (ESP);
  /* 105272f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105272f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105272f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105272fa:;
  /* 105272fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105272fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10527300 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527303 je 0x10527323 */
  if (C.zf) goto L_10527323;
  /* 10527305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527308 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052730b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052730e mov ecx, dword ptr [0x1054dc84] */
  ECX = (r32((uint32_t)(0x1054dc84)));
  /* 10527314 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10527317 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052731a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052731c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052731f jae 0x10527323 */
  if (!C.cf) goto L_10527323;
  /* 10527321 jmp 0x105272fa */
  goto L_105272fa;
L_10527323:;
  /* 10527323 mov eax, dword ptr [0x1054dc84] */
  EAX = (r32((uint32_t)(0x1054dc84)));
  /* 10527328 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052732b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052732e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527330 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527333 jae 0x10527345 */
  if (!C.cf) goto L_10527345;
  /* 10527335 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527338 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1052733b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052733e jne 0x10527345 */
  if (!C.zf) goto L_10527345;
  /* 10527340 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527343 jmp 0x10527347 */
  goto L_10527347;
L_10527345:;
  /* 10527345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10527347:;
  /* 10527347 mov esp, ebp */
  ESP = (EBP);
  /* 10527349 pop ebp */
  EBP = (pop32());
  /* 1052734a ret  */
  ESPCHK(0x105272f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x10527350 (13 bytes, 6 insns) */
void f_10527350(void) {
  FTRACE(0x10527350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527350 push ebp */
  push32((uint32_t)(EBP));
  /* 10527351 mov ebp, esp */
  EBP = (ESP);
  /* 10527353 call 0x10523650 */
  push32(0x10527358u); f_10523650();
  /* 10527358 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052735b pop ebp */
  EBP = (pop32());
  /* 1052735c ret  */
  ESPCHK(0x10527350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007360 @ 0x10527360 (13 bytes, 6 insns) */
void f_10527360(void) {
  FTRACE(0x10527360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527360 push ebp */
  push32((uint32_t)(EBP));
  /* 10527361 mov ebp, esp */
  EBP = (ESP);
  /* 10527363 call 0x10523650 */
  push32(0x10527368u); f_10523650();
  /* 10527368 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052736b pop ebp */
  EBP = (pop32());
  /* 1052736c ret  */
  ESPCHK(0x10527360u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x10527370 (187 bytes, 54 insns) */
void f_10527370(void) {
  FTRACE(0x10527370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527370 push ebp */
  push32((uint32_t)(EBP));
  /* 10527371 mov ebp, esp */
  EBP = (ESP);
  /* 10527373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052737d cmp dword ptr [0x1054f6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527384 jne 0x105273e3 */
  if (!C.zf) goto L_105273e3;
  /* 10527386 push 0x1054a3d0 */
  push32((uint32_t)(0x1054a3d0u));
  /* 1052738b call dword ptr [0x10552360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552360))), 0x10527391u);
  /* 10527391 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10527394 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527398 je 0x105273b7 */
  if (C.zf) goto L_105273b7;
  /* 1052739a push 0x1054afd4 */
  push32((uint32_t)(0x1054afd4u));
  /* 1052739f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105273a2 push eax */
  push32((uint32_t)(EAX));
  /* 105273a3 call dword ptr [0x1055235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055235c))), 0x105273a9u);
  /* 105273a9 mov dword ptr [0x1054f6ac], eax */
  w32((uint32_t)(0x1054f6ac), (EAX));
  /* 105273ae cmp dword ptr [0x1054f6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105273b5 jne 0x105273bb */
  if (!C.zf) goto L_105273bb;
L_105273b7:;
  /* 105273b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105273b9 jmp 0x10527427 */
  goto L_10527427;
L_105273bb:;
  /* 105273bb push 0x1054afc4 */
  push32((uint32_t)(0x1054afc4u));
  /* 105273c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105273c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105273c4 call dword ptr [0x1055235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055235c))), 0x105273cau);
  /* 105273ca mov dword ptr [0x1054f6b0], eax */
  w32((uint32_t)(0x1054f6b0), (EAX));
  /* 105273cf push 0x1054afb0 */
  push32((uint32_t)(0x1054afb0u));
  /* 105273d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105273d7 push edx */
  push32((uint32_t)(EDX));
  /* 105273d8 call dword ptr [0x1055235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055235c))), 0x105273deu);
  /* 105273de mov dword ptr [0x1054f6b4], eax */
  w32((uint32_t)(0x1054f6b4), (EAX));
L_105273e3:;
  /* 105273e3 cmp dword ptr [0x1054f6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105273ea je 0x105273f5 */
  if (C.zf) goto L_105273f5;
  /* 105273ec call dword ptr [0x1054f6b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f6b0))), 0x105273f2u);
  /* 105273f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105273f5:;
  /* 105273f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105273f9 je 0x10527411 */
  if (C.zf) goto L_10527411;
  /* 105273fb cmp dword ptr [0x1054f6b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f6b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527402 je 0x10527411 */
  if (C.zf) goto L_10527411;
  /* 10527404 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527407 push eax */
  push32((uint32_t)(EAX));
  /* 10527408 call dword ptr [0x1054f6b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f6b4))), 0x1052740eu);
  /* 1052740e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10527411:;
  /* 10527411 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10527414 push ecx */
  push32((uint32_t)(ECX));
  /* 10527415 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527418 push edx */
  push32((uint32_t)(EDX));
  /* 10527419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052741c push eax */
  push32((uint32_t)(EAX));
  /* 1052741d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527420 push ecx */
  push32((uint32_t)(ECX));
  /* 10527421 call dword ptr [0x1054f6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f6ac))), 0x10527427u);
L_10527427:;
  /* 10527427 mov esp, ebp */
  ESP = (EBP);
  /* 10527429 pop ebp */
  EBP = (pop32());
  /* 1052742a ret  */
  ESPCHK(0x10527370u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10527430 (254 bytes, 109 insns) */
void f_10527430(void) {
  FTRACE(0x10527430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527430 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10527434 push edi */
  push32((uint32_t)(EDI));
  /* 10527435 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10527437 je 0x105274b3 */
  if (C.zf) goto L_105274b3;
  /* 10527439 push esi */
  push32((uint32_t)(ESI));
  /* 1052743a push ebx */
  push32((uint32_t)(EBX));
  /* 1052743b mov ebx, ecx */
  EBX = (ECX);
  /* 1052743d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10527441 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10527447 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1052744b jne 0x10527454 */
  if (!C.zf) goto L_10527454;
  /* 1052744d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10527450 jne 0x105274c1 */
  if (!C.zf) goto L_105274c1;
  /* 10527452 jmp 0x10527475 */
  goto L_10527475;
L_10527454:;
  /* 10527454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10527456 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10527457 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10527459 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1052745a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1052745b je 0x10527482 */
  if (C.zf) goto L_10527482;
  /* 1052745d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1052745f je 0x1052748a */
  if (C.zf) goto L_1052748a;
  /* 10527461 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10527467 jne 0x10527454 */
  if (!C.zf) goto L_10527454;
  /* 10527469 mov ebx, ecx */
  EBX = (ECX);
  /* 1052746b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052746e jne 0x105274c1 */
  if (!C.zf) goto L_105274c1;
L_10527470:;
  /* 10527470 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10527473 je 0x10527482 */
  if (C.zf) goto L_10527482;
L_10527475:;
  /* 10527475 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10527477 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10527478 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052747a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1052747b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1052747d je 0x105274ae */
  if (C.zf) goto L_105274ae;
  /* 1052747f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10527480 jne 0x10527475 */
  if (!C.zf) goto L_10527475;
L_10527482:;
  /* 10527482 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10527486 pop ebx */
  EBX = (pop32());
  /* 10527487 pop esi */
  ESI = (pop32());
  /* 10527488 pop edi */
  EDI = (pop32());
  /* 10527489 ret  */
  ESPCHK(0x10527430u, _esp0);
  ESP += 4; return;
L_1052748a:;
  /* 1052748a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10527490 je 0x105274a4 */
  if (C.zf) goto L_105274a4;
L_10527492:;
  /* 10527492 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10527494 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10527495 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10527496 je 0x10527526 */
  if (C.zf) goto L_10527526;
  /* 1052749c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105274a2 jne 0x10527492 */
  if (!C.zf) goto L_10527492;
L_105274a4:;
  /* 105274a4 mov ebx, ecx */
  EBX = (ECX);
  /* 105274a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105274a9 jne 0x10527517 */
  if (!C.zf) goto L_10527517;
L_105274ab:;
  /* 105274ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105274ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_105274ae:;
  /* 105274ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 105274af jne 0x105274ab */
  if (!C.zf) goto L_105274ab;
  /* 105274b1 pop ebx */
  EBX = (pop32());
  /* 105274b2 pop esi */
  ESI = (pop32());
L_105274b3:;
  /* 105274b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105274b7 pop edi */
  EDI = (pop32());
  /* 105274b8 ret  */
  ESPCHK(0x10527430u, _esp0);
  ESP += 4; return;
L_105274b9:;
  /* 105274b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105274bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105274be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105274bf je 0x10527470 */
  if (C.zf) goto L_10527470;
L_105274c1:;
  /* 105274c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105274c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 105274c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105274ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105274cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105274cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 105274d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105274d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105274d9 je 0x105274b9 */
  if (C.zf) goto L_105274b9;
  /* 105274db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105274dd je 0x1052750b */
  if (C.zf) goto L_1052750b;
  /* 105274df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 105274e1 je 0x10527501 */
  if (C.zf) goto L_10527501;
  /* 105274e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 105274e9 je 0x105274f7 */
  if (C.zf) goto L_105274f7;
  /* 105274eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 105274f1 jne 0x105274b9 */
  if (!C.zf) goto L_105274b9;
  /* 105274f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105274f5 jmp 0x1052750f */
  goto L_1052750f;
L_105274f7:;
  /* 105274f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105274fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105274ff jmp 0x1052750f */
  goto L_1052750f;
L_10527501:;
  /* 10527501 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10527507 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10527509 jmp 0x1052750f */
  goto L_1052750f;
L_1052750b:;
  /* 1052750b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052750d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1052750f:;
  /* 1052750f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10527512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527514 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10527515 je 0x10527521 */
  if (C.zf) goto L_10527521;
L_10527517:;
  /* 10527517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10527519:;
  /* 10527519 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1052751b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052751e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1052751f jne 0x10527519 */
  if (!C.zf) goto L_10527519;
L_10527521:;
  /* 10527521 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10527524 jne 0x105274ab */
  if (!C.zf) goto L_105274ab;
L_10527526:;
  /* 10527526 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1052752a pop ebx */
  EBX = (pop32());
  /* 1052752b pop esi */
  ESI = (pop32());
  /* 1052752c pop edi */
  EDI = (pop32());
  /* 1052752d ret  */
  ESPCHK(0x10527430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x10527530 (55 bytes, 16 insns) */
void f_10527530(void) {
  FTRACE(0x10527530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527530 push ebp */
  push32((uint32_t)(EBP));
  /* 10527531 mov ebp, esp */
  EBP = (ESP);
  /* 10527533 mov eax, dword ptr [0x1054db84] */
  EAX = (r32((uint32_t)(0x1054db84)));
  /* 10527538 push eax */
  push32((uint32_t)(EAX));
  /* 10527539 call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x1052753fu);
  /* 1052753f mov ecx, dword ptr [0x1054db74] */
  ECX = (r32((uint32_t)(0x1054db74)));
  /* 10527545 push ecx */
  push32((uint32_t)(ECX));
  /* 10527546 call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x1052754cu);
  /* 1052754c mov edx, dword ptr [0x1054db64] */
  EDX = (r32((uint32_t)(0x1054db64)));
  /* 10527552 push edx */
  push32((uint32_t)(EDX));
  /* 10527553 call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x10527559u);
  /* 10527559 mov eax, dword ptr [0x1054db44] */
  EAX = (r32((uint32_t)(0x1054db44)));
  /* 1052755e push eax */
  push32((uint32_t)(EAX));
  /* 1052755f call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x10527565u);
  /* 10527565 pop ebp */
  EBP = (pop32());
  /* 10527566 ret  */
  ESPCHK(0x10527530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x10527570 (159 bytes, 47 insns) */
void f_10527570(void) {
  FTRACE(0x10527570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527570 push ebp */
  push32((uint32_t)(EBP));
  /* 10527571 mov ebp, esp */
  EBP = (ESP);
  /* 10527573 push ecx */
  push32((uint32_t)(ECX));
  /* 10527574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052757b jmp 0x10527586 */
  goto L_10527586;
L_1052757d:;
  /* 1052757d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527583 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10527586:;
  /* 10527586 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052758a jge 0x105275d9 */
  if ((C.sf==C.of)) goto L_105275d9;
  /* 1052758c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052758f cmp dword ptr [ecx*4 + 0x1054db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1054db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527597 je 0x105275d7 */
  if (C.zf) goto L_105275d7;
  /* 10527599 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052759d je 0x105275d7 */
  if (C.zf) goto L_105275d7;
  /* 1052759f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105275a3 je 0x105275d7 */
  if (C.zf) goto L_105275d7;
  /* 105275a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105275a9 je 0x105275d7 */
  if (C.zf) goto L_105275d7;
  /* 105275ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105275af je 0x105275d7 */
  if (C.zf) goto L_105275d7;
  /* 105275b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105275b4 mov eax, dword ptr [edx*4 + 0x1054db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1054db40)));
  /* 105275bb push eax */
  push32((uint32_t)(EAX));
  /* 105275bc call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x105275c2u);
  /* 105275c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105275c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105275c7 mov edx, dword ptr [ecx*4 + 0x1054db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1054db40)));
  /* 105275ce push edx */
  push32((uint32_t)(EDX));
  /* 105275cf call 0x105246a0 */
  push32(0x105275d4u); f_105246a0();
  /* 105275d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105275d7:;
  /* 105275d7 jmp 0x1052757d */
  goto L_1052757d;
L_105275d9:;
  /* 105275d9 mov eax, dword ptr [0x1054db64] */
  EAX = (r32((uint32_t)(0x1054db64)));
  /* 105275de push eax */
  push32((uint32_t)(EAX));
  /* 105275df call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x105275e5u);
  /* 105275e5 mov ecx, dword ptr [0x1054db74] */
  ECX = (r32((uint32_t)(0x1054db74)));
  /* 105275eb push ecx */
  push32((uint32_t)(ECX));
  /* 105275ec call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x105275f2u);
  /* 105275f2 mov edx, dword ptr [0x1054db84] */
  EDX = (r32((uint32_t)(0x1054db84)));
  /* 105275f8 push edx */
  push32((uint32_t)(EDX));
  /* 105275f9 call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x105275ffu);
  /* 105275ff mov eax, dword ptr [0x1054db44] */
  EAX = (r32((uint32_t)(0x1054db44)));
  /* 10527604 push eax */
  push32((uint32_t)(EAX));
  /* 10527605 call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x1052760bu);
  /* 1052760b mov esp, ebp */
  ESP = (EBP);
  /* 1052760d pop ebp */
  EBP = (pop32());
  /* 1052760e ret  */
  ESPCHK(0x10527570u, _esp0);
  ESP += 4; return;
}

/* FUN_10007610 @ 0x10527610 (151 bytes, 46 insns) */
void f_10527610(void) {
  FTRACE(0x10527610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527610 push ebp */
  push32((uint32_t)(EBP));
  /* 10527611 mov ebp, esp */
  EBP = (ESP);
  /* 10527613 push ecx */
  push32((uint32_t)(ECX));
  /* 10527614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527617 cmp dword ptr [eax*4 + 0x1054db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1054db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052761f jne 0x10527692 */
  if (!C.zf) goto L_10527692;
  /* 10527621 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10527626 push 0x1054afe0 */
  push32((uint32_t)(0x1054afe0u));
  /* 1052762b push 2 */
  push32((uint32_t)(0x2u));
  /* 1052762d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1052762f call 0x10523c10 */
  push32(0x10527634u); f_10523c10();
  /* 10527634 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527637 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052763a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052763e jne 0x1052764a */
  if (!C.zf) goto L_1052764a;
  /* 10527640 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10527642 call 0x10522b80 */
  push32(0x10527647u); f_10522b80();
  /* 10527647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052764a:;
  /* 1052764a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052764c call 0x10527610 */
  push32(0x10527651u); f_10527610();
  /* 10527651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527654 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527657 cmp dword ptr [ecx*4 + 0x1054db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1054db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052765f jne 0x1052767a */
  if (!C.zf) goto L_1052767a;
  /* 10527661 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527664 push edx */
  push32((uint32_t)(EDX));
  /* 10527665 call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x1052766bu);
  /* 1052766b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052766e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527671 mov dword ptr [eax*4 + 0x1054db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1054db40), (ECX));
  /* 10527678 jmp 0x10527688 */
  goto L_10527688;
L_1052767a:;
  /* 1052767a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052767c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052767f push edx */
  push32((uint32_t)(EDX));
  /* 10527680 call 0x105246a0 */
  push32(0x10527685u); f_105246a0();
  /* 10527685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527688:;
  /* 10527688 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052768a call 0x105276b0 */
  push32(0x1052768fu); f_105276b0();
  /* 1052768f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527692:;
  /* 10527692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527695 mov ecx, dword ptr [eax*4 + 0x1054db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054db40)));
  /* 1052769c push ecx */
  push32((uint32_t)(ECX));
  /* 1052769d call dword ptr [0x10552324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552324))), 0x105276a3u);
  /* 105276a3 mov esp, ebp */
  ESP = (EBP);
  /* 105276a5 pop ebp */
  EBP = (pop32());
  /* 105276a6 ret  */
  ESPCHK(0x10527610u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x105276b0 (22 bytes, 8 insns) */
void f_105276b0(void) {
  FTRACE(0x105276b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105276b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105276b1 mov ebp, esp */
  EBP = (ESP);
  /* 105276b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105276b6 mov ecx, dword ptr [eax*4 + 0x1054db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1054db40)));
  /* 105276bd push ecx */
  push32((uint32_t)(ECX));
  /* 105276be call dword ptr [0x10552320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552320))), 0x105276c4u);
  /* 105276c4 pop ebp */
  EBP = (pop32());
  /* 105276c5 ret  */
  ESPCHK(0x105276b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076d0 @ 0x105276d0 (26 bytes, 10 insns) */
void f_105276d0(void) {
  FTRACE(0x105276d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105276d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105276d1 mov ebp, esp */
  EBP = (ESP);
  /* 105276d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105276d6 push eax */
  push32((uint32_t)(EAX));
  /* 105276d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105276d9 call dword ptr [0x10552328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552328))), 0x105276dfu);
  /* 105276df push 0xff */
  push32((uint32_t)(0xffu));
  /* 105276e4 call dword ptr [0x1055236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055236c))), 0x105276eau);
  /* 105276ea pop ebp */
  EBP = (pop32());
  /* 105276eb ret  */
  ESPCHK(0x105276d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x105276f0 (446 bytes, 130 insns) */
void f_105276f0(void) {
  FTRACE(0x105276f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105276f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105276f1 mov ebp, esp */
  EBP = (ESP);
  /* 105276f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105276f6 call 0x10523650 */
  push32(0x105276fbu); f_10523650();
  /* 105276fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105276fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527701 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10527704 push ecx */
  push32((uint32_t)(ECX));
  /* 10527705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527708 push edx */
  push32((uint32_t)(EDX));
  /* 10527709 call 0x105278b0 */
  push32(0x1052770eu); f_105278b0();
  /* 1052770e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527711 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10527714 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527718 je 0x10527723 */
  if (C.zf) goto L_10527723;
  /* 1052771a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052771d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527721 jne 0x10527732 */
  if (!C.zf) goto L_10527732;
L_10527723:;
  /* 10527723 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527726 push ecx */
  push32((uint32_t)(ECX));
  /* 10527727 call dword ptr [0x10552318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552318))), 0x1052772du);
  /* 1052772d jmp 0x105278aa */
  goto L_105278aa;
L_10527732:;
  /* 10527732 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527735 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527739 jne 0x1052774f */
  if (!C.zf) goto L_1052774f;
  /* 1052773b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052773e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10527745 mov eax, 1 */
  EAX = (0x1u);
  /* 1052774a jmp 0x105278aa */
  goto L_105278aa;
L_1052774f:;
  /* 1052774f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527752 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527756 jne 0x10527760 */
  if (!C.zf) goto L_10527760;
  /* 10527758 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052775b jmp 0x105278aa */
  goto L_105278aa;
L_10527760:;
  /* 10527760 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527763 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10527766 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10527769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052776c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1052776f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10527772 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527778 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1052777b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052777e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527782 jne 0x10527887 */
  if (!C.zf) goto L_10527887;
  /* 10527788 mov eax, dword ptr [0x1054dc78] */
  EAX = (r32((uint32_t)(0x1054dc78)));
  /* 1052778d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10527790 jmp 0x1052779b */
  goto L_1052779b;
L_10527792:;
  /* 10527792 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10527795 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527798 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1052779b:;
  /* 1052779b mov edx, dword ptr [0x1054dc78] */
  EDX = (r32((uint32_t)(0x1054dc78)));
  /* 105277a1 add edx, dword ptr [0x1054dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1054dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105277a7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105277aa jge 0x105277c2 */
  if ((C.sf==C.of)) goto L_105277c2;
  /* 105277ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105277af imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105277b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105277b5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105277b8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 105277c0 jmp 0x10527792 */
  goto L_10527792;
L_105277c2:;
  /* 105277c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105277c5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105277c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105277cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105277ce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105277d4 jne 0x105277e5 */
  if (!C.zf) goto L_105277e5;
  /* 105277d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105277d9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 105277e0 jmp 0x1052786d */
  goto L_1052786d;
L_105277e5:;
  /* 105277e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105277e8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105277ee jne 0x105277fc */
  if (!C.zf) goto L_105277fc;
  /* 105277f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105277f3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 105277fa jmp 0x1052786d */
  goto L_1052786d;
L_105277fc:;
  /* 105277fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105277ff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527805 jne 0x10527813 */
  if (!C.zf) goto L_10527813;
  /* 10527807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052780a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10527811 jmp 0x1052786d */
  goto L_1052786d;
L_10527813:;
  /* 10527813 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527816 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052781c jne 0x1052782a */
  if (!C.zf) goto L_1052782a;
  /* 1052781e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527821 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10527828 jmp 0x1052786d */
  goto L_1052786d;
L_1052782a:;
  /* 1052782a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052782d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527833 jne 0x10527841 */
  if (!C.zf) goto L_10527841;
  /* 10527835 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527838 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1052783f jmp 0x1052786d */
  goto L_1052786d;
L_10527841:;
  /* 10527841 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527844 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052784a jne 0x10527858 */
  if (!C.zf) goto L_10527858;
  /* 1052784c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052784f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10527856 jmp 0x1052786d */
  goto L_1052786d;
L_10527858:;
  /* 10527858 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052785b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527861 jne 0x1052786d */
  if (!C.zf) goto L_1052786d;
  /* 10527863 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527866 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1052786d:;
  /* 1052786d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527870 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10527873 push edx */
  push32((uint32_t)(EDX));
  /* 10527874 push 8 */
  push32((uint32_t)(0x8u));
  /* 10527876 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10527879u);
  /* 10527879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052787c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052787f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527882 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10527885 jmp 0x1052789e */
  goto L_1052789e;
L_10527887:;
  /* 10527887 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052788a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10527891 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527894 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10527897 push ecx */
  push32((uint32_t)(ECX));
  /* 10527898 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1052789bu);
  /* 1052789b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052789e:;
  /* 1052789e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105278a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105278a4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 105278a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105278aa:;
  /* 105278aa mov esp, ebp */
  ESP = (EBP);
  /* 105278ac pop ebp */
  EBP = (pop32());
  /* 105278ad ret  */
  ESPCHK(0x105276f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x105278b0 (89 bytes, 35 insns) */
void f_105278b0(void) {
  FTRACE(0x105278b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105278b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105278b1 mov ebp, esp */
  EBP = (ESP);
  /* 105278b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105278b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105278b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105278ba:;
  /* 105278ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105278bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105278bf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105278c2 je 0x105278e2 */
  if (C.zf) goto L_105278e2;
  /* 105278c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105278c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105278ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105278cd mov ecx, dword ptr [0x1054dc84] */
  ECX = (r32((uint32_t)(0x1054dc84)));
  /* 105278d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105278d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105278d9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105278db cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105278de jae 0x105278e2 */
  if (!C.cf) goto L_105278e2;
  /* 105278e0 jmp 0x105278ba */
  goto L_105278ba;
L_105278e2:;
  /* 105278e2 mov eax, dword ptr [0x1054dc84] */
  EAX = (r32((uint32_t)(0x1054dc84)));
  /* 105278e7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105278ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105278ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105278ef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105278f2 jae 0x105278fe */
  if (!C.cf) goto L_105278fe;
  /* 105278f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105278f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105278f9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105278fc je 0x10527902 */
  if (C.zf) goto L_10527902;
L_105278fe:;
  /* 105278fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527900 jmp 0x10527905 */
  goto L_10527905;
L_10527902:;
  /* 10527902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10527905:;
  /* 10527905 mov esp, ebp */
  ESP = (EBP);
  /* 10527907 pop ebp */
  EBP = (pop32());
  /* 10527908 ret  */
  ESPCHK(0x105278b0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10527910 (48 bytes, 17 insns) */
void f_10527910(void) {
  FTRACE(0x10527910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527910 push ebp */
  push32((uint32_t)(EBP));
  /* 10527911 mov ebp, esp */
  EBP = (ESP);
  /* 10527913 push ecx */
  push32((uint32_t)(ECX));
  /* 10527914 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527916 call 0x10527610 */
  push32(0x1052791bu); f_10527610();
  /* 1052791b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052791e mov eax, dword ptr [0x1054f71c] */
  EAX = (r32((uint32_t)(0x1054f71c)));
  /* 10527923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10527926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527929 mov dword ptr [0x1054f71c], ecx */
  w32((uint32_t)(0x1054f71c), (ECX));
  /* 1052792f push 9 */
  push32((uint32_t)(0x9u));
  /* 10527931 call 0x105276b0 */
  push32(0x10527936u); f_105276b0();
  /* 10527936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052793c mov esp, ebp */
  ESP = (EBP);
  /* 1052793e pop ebp */
  EBP = (pop32());
  /* 1052793f ret  */
  ESPCHK(0x10527910u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x10527940 (10 bytes, 5 insns) */
void f_10527940(void) {
  FTRACE(0x10527940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527940 push ebp */
  push32((uint32_t)(EBP));
  /* 10527941 mov ebp, esp */
  EBP = (ESP);
  /* 10527943 mov eax, dword ptr [0x1054f71c] */
  EAX = (r32((uint32_t)(0x1054f71c)));
  /* 10527948 pop ebp */
  EBP = (pop32());
  /* 10527949 ret  */
  ESPCHK(0x10527940u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10527950 (45 bytes, 19 insns) */
void f_10527950(void) {
  FTRACE(0x10527950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527950 push ebp */
  push32((uint32_t)(EBP));
  /* 10527951 mov ebp, esp */
  EBP = (ESP);
  /* 10527953 push ecx */
  push32((uint32_t)(ECX));
  /* 10527954 mov eax, dword ptr [0x1054f71c] */
  EAX = (r32((uint32_t)(0x1054f71c)));
  /* 10527959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052795c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527960 je 0x10527970 */
  if (C.zf) goto L_10527970;
  /* 10527962 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527965 push ecx */
  push32((uint32_t)(ECX));
  /* 10527966 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10527969u);
  /* 10527969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052796c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052796e jne 0x10527974 */
  if (!C.zf) goto L_10527974;
L_10527970:;
  /* 10527970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527972 jmp 0x10527979 */
  goto L_10527979;
L_10527974:;
  /* 10527974 mov eax, 1 */
  EAX = (0x1u);
L_10527979:;
  /* 10527979 mov esp, ebp */
  ESP = (EBP);
  /* 1052797b pop ebp */
  EBP = (pop32());
  /* 1052797c ret  */
  ESPCHK(0x10527950u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10527980 (88 bytes, 40 insns) */
void f_10527980(void) {
  FTRACE(0x10527980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527980 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10527984 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10527988 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052798a je 0x105279d3 */
  if (C.zf) goto L_105279d3;
  /* 1052798c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052798e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10527992 push edi */
  push32((uint32_t)(EDI));
  /* 10527993 mov edi, ecx */
  EDI = (ECX);
  /* 10527995 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527998 jb 0x105279c7 */
  if (C.cf) goto L_105279c7;
  /* 1052799a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052799c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1052799f je 0x105279a9 */
  if (C.zf) goto L_105279a9;
  /* 105279a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105279a3:;
  /* 105279a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105279a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105279a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105279a7 jne 0x105279a3 */
  if (!C.zf) goto L_105279a3;
L_105279a9:;
  /* 105279a9 mov ecx, eax */
  ECX = (EAX);
  /* 105279ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 105279ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105279b0 mov ecx, eax */
  ECX = (EAX);
  /* 105279b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105279b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105279b7 mov ecx, edx */
  ECX = (EDX);
  /* 105279b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105279bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105279bf je 0x105279c7 */
  if (C.zf) goto L_105279c7;
  /* 105279c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105279c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105279c5 je 0x105279cd */
  if (C.zf) goto L_105279cd;
L_105279c7:;
  /* 105279c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105279c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105279ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 105279cb jne 0x105279c7 */
  if (!C.zf) goto L_105279c7;
L_105279cd:;
  /* 105279cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105279d1 pop edi */
  EDI = (pop32());
  /* 105279d2 ret  */
  ESPCHK(0x10527980u, _esp0);
  ESP += 4; return;
L_105279d3:;
  /* 105279d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 105279d7 ret  */
  ESPCHK(0x10527980u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e0 @ 0x105279e0 (23 bytes, 10 insns) */
void f_105279e0(void) {
  FTRACE(0x105279e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105279e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105279e1 mov ebp, esp */
  EBP = (ESP);
  /* 105279e3 mov eax, dword ptr [0x1054f718] */
  EAX = (r32((uint32_t)(0x1054f718)));
  /* 105279e8 push eax */
  push32((uint32_t)(EAX));
  /* 105279e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105279ec push ecx */
  push32((uint32_t)(ECX));
  /* 105279ed call 0x10527a00 */
  push32(0x105279f2u); f_10527a00();
  /* 105279f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105279f5 pop ebp */
  EBP = (pop32());
  /* 105279f6 ret  */
  ESPCHK(0x105279e0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10527a00 (87 bytes, 34 insns) */
void f_10527a00(void) {
  FTRACE(0x10527a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10527a01 mov ebp, esp */
  EBP = (ESP);
  /* 10527a03 push ecx */
  push32((uint32_t)(ECX));
  /* 10527a04 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527a08 jbe 0x10527a0e */
  if ((C.cf||C.zf)) goto L_10527a0e;
  /* 10527a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527a0c jmp 0x10527a53 */
  goto L_10527a53;
L_10527a0e:;
  /* 10527a0e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527a12 ja 0x10527a25 */
  if ((!C.cf&&!C.zf)) goto L_10527a25;
  /* 10527a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527a17 push eax */
  push32((uint32_t)(EAX));
  /* 10527a18 call 0x10527a60 */
  push32(0x10527a1du); f_10527a60();
  /* 10527a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10527a23 jmp 0x10527a2c */
  goto L_10527a2c;
L_10527a25:;
  /* 10527a25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10527a2c:;
  /* 10527a2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527a30 jne 0x10527a38 */
  if (!C.zf) goto L_10527a38;
  /* 10527a32 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527a36 jne 0x10527a3d */
  if (!C.zf) goto L_10527a3d;
L_10527a38:;
  /* 10527a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527a3b jmp 0x10527a53 */
  goto L_10527a53;
L_10527a3d:;
  /* 10527a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527a40 push ecx */
  push32((uint32_t)(ECX));
  /* 10527a41 call 0x10527950 */
  push32(0x10527a46u); f_10527950();
  /* 10527a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527a4b jne 0x10527a51 */
  if (!C.zf) goto L_10527a51;
  /* 10527a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527a4f jmp 0x10527a53 */
  goto L_10527a53;
L_10527a51:;
  /* 10527a51 jmp 0x10527a0e */
  goto L_10527a0e;
L_10527a53:;
  /* 10527a53 mov esp, ebp */
  ESP = (EBP);
  /* 10527a55 pop ebp */
  EBP = (pop32());
  /* 10527a56 ret  */
  ESPCHK(0x10527a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x10527a60 (109 bytes, 37 insns) */
void f_10527a60(void) {
  FTRACE(0x10527a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10527a61 mov ebp, esp */
  EBP = (ESP);
  /* 10527a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10527a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527a67 cmp eax, dword ptr [0x1054dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527a6d ja 0x10527a9d */
  if ((!C.cf&&!C.zf)) goto L_10527a9d;
  /* 10527a6f push 9 */
  push32((uint32_t)(0x9u));
  /* 10527a71 call 0x10527610 */
  push32(0x10527a76u); f_10527610();
  /* 10527a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527a79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527a7c push ecx */
  push32((uint32_t)(ECX));
  /* 10527a7d call 0x105285a0 */
  push32(0x10527a82u); f_105285a0();
  /* 10527a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527a85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10527a88 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527a8a call 0x105276b0 */
  push32(0x10527a8fu); f_105276b0();
  /* 10527a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527a92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527a96 je 0x10527a9d */
  if (C.zf) goto L_10527a9d;
  /* 10527a98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527a9b jmp 0x10527ac9 */
  goto L_10527ac9;
L_10527a9d:;
  /* 10527a9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527aa1 jne 0x10527aaa */
  if (!C.zf) goto L_10527aaa;
  /* 10527aa3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10527aaa:;
  /* 10527aaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527aad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527ab0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10527ab3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10527ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527ab9 push eax */
  push32((uint32_t)(EAX));
  /* 10527aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10527abc mov ecx, dword ptr [0x10550ecc] */
  ECX = (r32((uint32_t)(0x10550ecc)));
  /* 10527ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 10527ac3 call dword ptr [0x10552314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552314))), 0x10527ac9u);
L_10527ac9:;
  /* 10527ac9 mov esp, ebp */
  ESP = (EBP);
  /* 10527acb pop ebp */
  EBP = (pop32());
  /* 10527acc ret  */
  ESPCHK(0x10527a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x10527ad0 (10 bytes, 5 insns) */
void f_10527ad0(void) {
  FTRACE(0x10527ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10527ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10527ad3 mov eax, 1 */
  EAX = (0x1u);
  /* 10527ad8 pop ebp */
  EBP = (pop32());
  /* 10527ad9 ret  */
  ESPCHK(0x10527ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x10527ae0 (173 bytes, 59 insns) */
void f_10527ae0(void) {
  FTRACE(0x10527ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10527ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10527ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527ae6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527aea jbe 0x10527af3 */
  if ((C.cf||C.zf)) goto L_10527af3;
  /* 10527aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527aee jmp 0x10527b89 */
  goto L_10527b89;
L_10527af3:;
  /* 10527af3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527af5 call 0x10527610 */
  push32(0x10527afau); f_10527610();
  /* 10527afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527afd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527b00 push eax */
  push32((uint32_t)(EAX));
  /* 10527b01 call 0x10527f10 */
  push32(0x10527b06u); f_10527f10();
  /* 10527b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527b09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10527b0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527b10 je 0x10527b51 */
  if (C.zf) goto L_10527b51;
  /* 10527b12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10527b19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527b1c cmp ecx, dword ptr [0x1054dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1054dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527b22 ja 0x10527b42 */
  if ((!C.cf&&!C.zf)) goto L_10527b42;
  /* 10527b24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527b27 push edx */
  push32((uint32_t)(EDX));
  /* 10527b28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527b2b push eax */
  push32((uint32_t)(EAX));
  /* 10527b2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527b2f push ecx */
  push32((uint32_t)(ECX));
  /* 10527b30 call 0x10528de0 */
  push32(0x10527b35u); f_10528de0();
  /* 10527b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527b3a je 0x10527b42 */
  if (C.zf) goto L_10527b42;
  /* 10527b3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527b3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10527b42:;
  /* 10527b42 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527b44 call 0x105276b0 */
  push32(0x10527b49u); f_105276b0();
  /* 10527b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527b4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527b4f jmp 0x10527b89 */
  goto L_10527b89;
L_10527b51:;
  /* 10527b51 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527b53 call 0x105276b0 */
  push32(0x10527b58u); f_105276b0();
  /* 10527b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527b5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527b5f jne 0x10527b68 */
  if (!C.zf) goto L_10527b68;
  /* 10527b61 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10527b68:;
  /* 10527b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527b6b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527b6e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10527b70 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10527b73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527b76 push ecx */
  push32((uint32_t)(ECX));
  /* 10527b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527b7a push edx */
  push32((uint32_t)(EDX));
  /* 10527b7b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10527b7d mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 10527b82 push eax */
  push32((uint32_t)(EAX));
  /* 10527b83 call dword ptr [0x1055231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055231c))), 0x10527b89u);
L_10527b89:;
  /* 10527b89 mov esp, ebp */
  ESP = (EBP);
  /* 10527b8b pop ebp */
  EBP = (pop32());
  /* 10527b8c ret  */
  ESPCHK(0x10527ae0u, _esp0);
  ESP += 4; return;
}

