#include "recomp.h"

/* thunk_FUN_10002f00 @ 0x10a81005 (5 bytes, 1 insns) */
void f_10a81005(void) {
  FTRACE(0x10a81005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a81005 jmp 0x10a82f00 */
  f_10a82f00(); return;
}

/* OnInit @ 0x10a8100a (5 bytes, 1 insns) */
void f_10a8100a(void) {
  FTRACE(0x10a8100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8100a jmp 0x10a810a0 */
  f_10a810a0(); return;
}

/* thunk_FUN_10002f50 @ 0x10a8100f (5 bytes, 1 insns) */
void f_10a8100f(void) {
  FTRACE(0x10a8100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8100f jmp 0x10a82f50 */
  f_10a82f50(); return;
}

/* thunk_FUN_10001040 @ 0x10a81014 (5 bytes, 1 insns) */
void f_10a81014(void) {
  FTRACE(0x10a81014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a81014 jmp 0x10a81040 */
  f_10a81040(); return;
}

/* ProcessScenary @ 0x10a81019 (5 bytes, 1 insns) */
void f_10a81019(void) {
  FTRACE(0x10a81019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a81019 jmp 0x10a81840 */
  f_10a81840(); return;
}

/* FUN_10001040 @ 0x10a81040 (67 bytes, 26 insns) */
void f_10a81040(void) {
  FTRACE(0x10a81040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a81040 push ebp */
  push32((uint32_t)(EBP));
  /* 10a81041 mov ebp, esp */
  EBP = (ESP);
  /* 10a81043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a81046 push ebx */
  push32((uint32_t)(EBX));
  /* 10a81047 push esi */
  push32((uint32_t)(ESI));
  /* 10a81048 push edi */
  push32((uint32_t)(EDI));
  /* 10a81049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10a8104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10a81051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a81056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a81058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81062 je 0x10a81066 */
  if (C.zf) goto L_10a81066;
  /* 10a81064 jmp 0x10a8106b */
  goto L_10a8106b;
L_10a81066:;
  /* 10a81066 call 0x10a8100a */
  push32(0x10a8106bu); f_10a8100a();
L_10a8106b:;
  /* 10a8106b mov eax, 1 */
  EAX = (0x1u);
  /* 10a81070 pop edi */
  EDI = (pop32());
  /* 10a81071 pop esi */
  ESI = (pop32());
  /* 10a81072 pop ebx */
  EBX = (pop32());
  /* 10a81073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81078 call 0x10a83080 */
  push32(0x10a8107du); f_10a83080();
  /* 10a8107d mov esp, ebp */
  ESP = (EBP);
  /* 10a8107f pop ebp */
  EBP = (pop32());
  /* 10a81080 ret 0xc */
  ESPCHK(0x10a81040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x10a810a0 (1560 bytes, 423 insns) */
void f_10a810a0(void) {
  FTRACE(0x10a810a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a810a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a810a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a810a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a810a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a810a7 push esi */
  push32((uint32_t)(ESI));
  /* 10a810a8 push edi */
  push32((uint32_t)(EDI));
  /* 10a810a9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10a810ac mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10a810b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a810b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a810b8 mov esi, esp */
  ESI = (ESP);
  /* 10a810ba push 0x10aab164 */
  push32((uint32_t)(0x10aab164u));
  /* 10a810bf push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a810c4 call dword ptr [0x10ab3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3480))), 0x10a810cau);
  /* 10a810ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a810cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a810cf call 0x10a83080 */
  push32(0x10a810d4u); f_10a83080();
  /* 10a810d4 mov esi, esp */
  ESI = (ESP);
  /* 10a810d6 push 0x10aab15c */
  push32((uint32_t)(0x10aab15cu));
  /* 10a810db push 0x10ab04b0 */
  push32((uint32_t)(0x10ab04b0u));
  /* 10a810e0 call dword ptr [0x10ab3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3480))), 0x10a810e6u);
  /* 10a810e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a810e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a810eb call 0x10a83080 */
  push32(0x10a810f0u); f_10a83080();
  /* 10a810f0 mov esi, esp */
  ESI = (ESP);
  /* 10a810f2 push 0x10aab154 */
  push32((uint32_t)(0x10aab154u));
  /* 10a810f7 push 0x10ab04b8 */
  push32((uint32_t)(0x10ab04b8u));
  /* 10a810fc call dword ptr [0x10ab3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3480))), 0x10a81102u);
  /* 10a81102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81107 call 0x10a83080 */
  push32(0x10a8110cu); f_10a83080();
  /* 10a8110c mov esi, esp */
  ESI = (ESP);
  /* 10a8110e push 0x10aab14c */
  push32((uint32_t)(0x10aab14cu));
  /* 10a81113 push 0x10ab04c0 */
  push32((uint32_t)(0x10ab04c0u));
  /* 10a81118 call dword ptr [0x10ab3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3480))), 0x10a8111eu);
  /* 10a8111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81123 call 0x10a83080 */
  push32(0x10a81128u); f_10a83080();
  /* 10a81128 mov esi, esp */
  ESI = (ESP);
  /* 10a8112a push 0x10aab144 */
  push32((uint32_t)(0x10aab144u));
  /* 10a8112f push 0x10ab04c8 */
  push32((uint32_t)(0x10ab04c8u));
  /* 10a81134 call dword ptr [0x10ab3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3480))), 0x10a8113au);
  /* 10a8113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8113f call 0x10a83080 */
  push32(0x10a81144u); f_10a83080();
  /* 10a81144 mov esi, esp */
  ESI = (ESP);
  /* 10a81146 push 0x10aab13c */
  push32((uint32_t)(0x10aab13cu));
  /* 10a8114b push 0x10ab0438 */
  push32((uint32_t)(0x10ab0438u));
  /* 10a81150 call dword ptr [0x10ab3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3490))), 0x10a81156u);
  /* 10a81156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8115b call 0x10a83080 */
  push32(0x10a81160u); f_10a83080();
  /* 10a81160 mov esi, esp */
  ESI = (ESP);
  /* 10a81162 push 0x10aab134 */
  push32((uint32_t)(0x10aab134u));
  /* 10a81167 push 0x10ab0430 */
  push32((uint32_t)(0x10ab0430u));
  /* 10a8116c call dword ptr [0x10ab3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3490))), 0x10a81172u);
  /* 10a81172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81177 call 0x10a83080 */
  push32(0x10a8117cu); f_10a83080();
  /* 10a8117c mov esi, esp */
  ESI = (ESP);
  /* 10a8117e push 0x10aab118 */
  push32((uint32_t)(0x10aab118u));
  /* 10a81183 push 0x10ab0578 */
  push32((uint32_t)(0x10ab0578u));
  /* 10a81188 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a8118eu);
  /* 10a8118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81193 call 0x10a83080 */
  push32(0x10a81198u); f_10a83080();
  /* 10a81198 mov esi, esp */
  ESI = (ESP);
  /* 10a8119a push 0x10aab108 */
  push32((uint32_t)(0x10aab108u));
  /* 10a8119f push 0x10ab0488 */
  push32((uint32_t)(0x10ab0488u));
  /* 10a811a4 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a811aau);
  /* 10a811aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a811ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a811af call 0x10a83080 */
  push32(0x10a811b4u); f_10a83080();
  /* 10a811b4 mov esi, esp */
  ESI = (ESP);
  /* 10a811b6 push 0x10aab0f8 */
  push32((uint32_t)(0x10aab0f8u));
  /* 10a811bb push 0x10ab0428 */
  push32((uint32_t)(0x10ab0428u));
  /* 10a811c0 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a811c6u);
  /* 10a811c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a811c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a811cb call 0x10a83080 */
  push32(0x10a811d0u); f_10a83080();
  /* 10a811d0 mov esi, esp */
  ESI = (ESP);
  /* 10a811d2 push 0x10aab0e4 */
  push32((uint32_t)(0x10aab0e4u));
  /* 10a811d7 push 0x10ab04d8 */
  push32((uint32_t)(0x10ab04d8u));
  /* 10a811dc call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a811e2u);
  /* 10a811e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a811e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a811e7 call 0x10a83080 */
  push32(0x10a811ecu); f_10a83080();
  /* 10a811ec mov esi, esp */
  ESI = (ESP);
  /* 10a811ee push 0x10aab0d4 */
  push32((uint32_t)(0x10aab0d4u));
  /* 10a811f3 push 0x10ab0480 */
  push32((uint32_t)(0x10ab0480u));
  /* 10a811f8 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a811feu);
  /* 10a811fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81203 call 0x10a83080 */
  push32(0x10a81208u); f_10a83080();
  /* 10a81208 mov esi, esp */
  ESI = (ESP);
  /* 10a8120a push 0x10aab0c4 */
  push32((uint32_t)(0x10aab0c4u));
  /* 10a8120f push 0x10ab04f0 */
  push32((uint32_t)(0x10ab04f0u));
  /* 10a81214 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a8121au);
  /* 10a8121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8121f call 0x10a83080 */
  push32(0x10a81224u); f_10a83080();
  /* 10a81224 mov esi, esp */
  ESI = (ESP);
  /* 10a81226 push 0x10aab0b4 */
  push32((uint32_t)(0x10aab0b4u));
  /* 10a8122b push 0x10ab04e0 */
  push32((uint32_t)(0x10ab04e0u));
  /* 10a81230 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a81236u);
  /* 10a81236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8123b call 0x10a83080 */
  push32(0x10a81240u); f_10a83080();
  /* 10a81240 mov esi, esp */
  ESI = (ESP);
  /* 10a81242 push 0x10aab0a4 */
  push32((uint32_t)(0x10aab0a4u));
  /* 10a81247 push 0x10ab0490 */
  push32((uint32_t)(0x10ab0490u));
  /* 10a8124c call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a81252u);
  /* 10a81252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81257 call 0x10a83080 */
  push32(0x10a8125cu); f_10a83080();
  /* 10a8125c mov esi, esp */
  ESI = (ESP);
  /* 10a8125e push 0x10aab094 */
  push32((uint32_t)(0x10aab094u));
  /* 10a81263 push 0x10ab04a0 */
  push32((uint32_t)(0x10ab04a0u));
  /* 10a81268 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a8126eu);
  /* 10a8126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81273 call 0x10a83080 */
  push32(0x10a81278u); f_10a83080();
  /* 10a81278 mov esi, esp */
  ESI = (ESP);
  /* 10a8127a push 0x10aab084 */
  push32((uint32_t)(0x10aab084u));
  /* 10a8127f push 0x10ab0498 */
  push32((uint32_t)(0x10ab0498u));
  /* 10a81284 call dword ptr [0x10ab3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3494))), 0x10a8128au);
  /* 10a8128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8128f call 0x10a83080 */
  push32(0x10a81294u); f_10a83080();
  /* 10a81294 mov esi, esp */
  ESI = (ESP);
  /* 10a81296 push 0x10aab07c */
  push32((uint32_t)(0x10aab07cu));
  /* 10a8129b push 0x10ab04e8 */
  push32((uint32_t)(0x10ab04e8u));
  /* 10a812a0 call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a812a6u);
  /* 10a812a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a812a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a812ab call 0x10a83080 */
  push32(0x10a812b0u); f_10a83080();
  /* 10a812b0 mov esi, esp */
  ESI = (ESP);
  /* 10a812b2 push 0x10aab074 */
  push32((uint32_t)(0x10aab074u));
  /* 10a812b7 push 0x10ab0418 */
  push32((uint32_t)(0x10ab0418u));
  /* 10a812bc call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a812c2u);
  /* 10a812c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a812c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a812c7 call 0x10a83080 */
  push32(0x10a812ccu); f_10a83080();
  /* 10a812cc mov esi, esp */
  ESI = (ESP);
  /* 10a812ce push 0x10aab06c */
  push32((uint32_t)(0x10aab06cu));
  /* 10a812d3 push 0x10ab0420 */
  push32((uint32_t)(0x10ab0420u));
  /* 10a812d8 call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a812deu);
  /* 10a812de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a812e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a812e3 call 0x10a83080 */
  push32(0x10a812e8u); f_10a83080();
  /* 10a812e8 mov esi, esp */
  ESI = (ESP);
  /* 10a812ea push 0x10aab060 */
  push32((uint32_t)(0x10aab060u));
  /* 10a812ef push 0x10ab03e0 */
  push32((uint32_t)(0x10ab03e0u));
  /* 10a812f4 call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a812fau);
  /* 10a812fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a812fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a812ff call 0x10a83080 */
  push32(0x10a81304u); f_10a83080();
  /* 10a81304 mov esi, esp */
  ESI = (ESP);
  /* 10a81306 push 0x10aab054 */
  push32((uint32_t)(0x10aab054u));
  /* 10a8130b push 0x10ab04d0 */
  push32((uint32_t)(0x10ab04d0u));
  /* 10a81310 call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a81316u);
  /* 10a81316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8131b call 0x10a83080 */
  push32(0x10a81320u); f_10a83080();
  /* 10a81320 mov esi, esp */
  ESI = (ESP);
  /* 10a81322 push 0x10aab048 */
  push32((uint32_t)(0x10aab048u));
  /* 10a81327 push 0x10ab03e8 */
  push32((uint32_t)(0x10ab03e8u));
  /* 10a8132c call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a81332u);
  /* 10a81332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81337 call 0x10a83080 */
  push32(0x10a8133cu); f_10a83080();
  /* 10a8133c mov esi, esp */
  ESI = (ESP);
  /* 10a8133e push 0x10aab03c */
  push32((uint32_t)(0x10aab03cu));
  /* 10a81343 push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a81348 call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a8134eu);
  /* 10a8134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81353 call 0x10a83080 */
  push32(0x10a81358u); f_10a83080();
  /* 10a81358 mov esi, esp */
  ESI = (ESP);
  /* 10a8135a push 0x10aab02c */
  push32((uint32_t)(0x10aab02cu));
  /* 10a8135f push 0x10ab03f8 */
  push32((uint32_t)(0x10ab03f8u));
  /* 10a81364 call dword ptr [0x10ab348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab348c))), 0x10a8136au);
  /* 10a8136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8136f call 0x10a83080 */
  push32(0x10a81374u); f_10a83080();
  /* 10a81374 mov esi, esp */
  ESI = (ESP);
  /* 10a81376 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81378 push 0x10ab0400 */
  push32((uint32_t)(0x10ab0400u));
  /* 10a8137d call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81383u);
  /* 10a81383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81386 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81388 call 0x10a83080 */
  push32(0x10a8138du); f_10a83080();
  /* 10a8138d mov esi, esp */
  ESI = (ESP);
  /* 10a8138f push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81391 push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a81396 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a8139cu);
  /* 10a8139c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8139f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a813a1 call 0x10a83080 */
  push32(0x10a813a6u); f_10a83080();
  /* 10a813a6 mov esi, esp */
  ESI = (ESP);
  /* 10a813a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a813aa push 0x10ab0440 */
  push32((uint32_t)(0x10ab0440u));
  /* 10a813af call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a813b5u);
  /* 10a813b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a813b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a813ba call 0x10a83080 */
  push32(0x10a813bfu); f_10a83080();
  /* 10a813bf mov esi, esp */
  ESI = (ESP);
  /* 10a813c1 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a813c3 push 0x10ab0458 */
  push32((uint32_t)(0x10ab0458u));
  /* 10a813c8 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a813ceu);
  /* 10a813ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a813d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a813d3 call 0x10a83080 */
  push32(0x10a813d8u); f_10a83080();
  /* 10a813d8 mov esi, esp */
  ESI = (ESP);
  /* 10a813da push 8 */
  push32((uint32_t)(0x8u));
  /* 10a813dc push 0x10ab0450 */
  push32((uint32_t)(0x10ab0450u));
  /* 10a813e1 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a813e7u);
  /* 10a813e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a813ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a813ec call 0x10a83080 */
  push32(0x10a813f1u); f_10a83080();
  /* 10a813f1 mov esi, esp */
  ESI = (ESP);
  /* 10a813f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a813f5 push 0x10ab0468 */
  push32((uint32_t)(0x10ab0468u));
  /* 10a813fa call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81400u);
  /* 10a81400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81403 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81405 call 0x10a83080 */
  push32(0x10a8140au); f_10a83080();
  /* 10a8140a mov esi, esp */
  ESI = (ESP);
  /* 10a8140c push 8 */
  push32((uint32_t)(0x8u));
  /* 10a8140e push 0x10ab0460 */
  push32((uint32_t)(0x10ab0460u));
  /* 10a81413 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81419u);
  /* 10a81419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8141c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8141e call 0x10a83080 */
  push32(0x10a81423u); f_10a83080();
  /* 10a81423 mov esi, esp */
  ESI = (ESP);
  /* 10a81425 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81427 push 0x10ab0568 */
  push32((uint32_t)(0x10ab0568u));
  /* 10a8142c call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81432u);
  /* 10a81432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81437 call 0x10a83080 */
  push32(0x10a8143cu); f_10a83080();
  /* 10a8143c mov esi, esp */
  ESI = (ESP);
  /* 10a8143e push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81440 push 0x10ab0478 */
  push32((uint32_t)(0x10ab0478u));
  /* 10a81445 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a8144bu);
  /* 10a8144b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8144e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81450 call 0x10a83080 */
  push32(0x10a81455u); f_10a83080();
  /* 10a81455 mov esi, esp */
  ESI = (ESP);
  /* 10a81457 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81459 push 0x10ab0470 */
  push32((uint32_t)(0x10ab0470u));
  /* 10a8145e call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81464u);
  /* 10a81464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81467 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81469 call 0x10a83080 */
  push32(0x10a8146eu); f_10a83080();
  /* 10a8146e mov esi, esp */
  ESI = (ESP);
  /* 10a81470 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81472 push 0x10ab0570 */
  push32((uint32_t)(0x10ab0570u));
  /* 10a81477 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a8147du);
  /* 10a8147d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81482 call 0x10a83080 */
  push32(0x10a81487u); f_10a83080();
  /* 10a81487 mov esi, esp */
  ESI = (ESP);
  /* 10a81489 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a8148b push 0x10ab04f8 */
  push32((uint32_t)(0x10ab04f8u));
  /* 10a81490 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81496u);
  /* 10a81496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81499 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8149b call 0x10a83080 */
  push32(0x10a814a0u); f_10a83080();
  /* 10a814a0 mov esi, esp */
  ESI = (ESP);
  /* 10a814a2 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a814a4 push 0x10ab0550 */
  push32((uint32_t)(0x10ab0550u));
  /* 10a814a9 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a814afu);
  /* 10a814af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a814b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a814b4 call 0x10a83080 */
  push32(0x10a814b9u); f_10a83080();
  /* 10a814b9 mov esi, esp */
  ESI = (ESP);
  /* 10a814bb push 8 */
  push32((uint32_t)(0x8u));
  /* 10a814bd push 0x10ab0558 */
  push32((uint32_t)(0x10ab0558u));
  /* 10a814c2 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a814c8u);
  /* 10a814c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a814cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a814cd call 0x10a83080 */
  push32(0x10a814d2u); f_10a83080();
  /* 10a814d2 mov esi, esp */
  ESI = (ESP);
  /* 10a814d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a814d6 push 0x10ab0408 */
  push32((uint32_t)(0x10ab0408u));
  /* 10a814db call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a814e1u);
  /* 10a814e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a814e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a814e6 call 0x10a83080 */
  push32(0x10a814ebu); f_10a83080();
  /* 10a814eb mov esi, esp */
  ESI = (ESP);
  /* 10a814ed push 8 */
  push32((uint32_t)(0x8u));
  /* 10a814ef push 0x10ab0538 */
  push32((uint32_t)(0x10ab0538u));
  /* 10a814f4 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a814fau);
  /* 10a814fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a814fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a814ff call 0x10a83080 */
  push32(0x10a81504u); f_10a83080();
  /* 10a81504 mov esi, esp */
  ESI = (ESP);
  /* 10a81506 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81508 push 0x10ab0548 */
  push32((uint32_t)(0x10ab0548u));
  /* 10a8150d call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81513u);
  /* 10a81513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81518 call 0x10a83080 */
  push32(0x10a8151du); f_10a83080();
  /* 10a8151d mov esi, esp */
  ESI = (ESP);
  /* 10a8151f push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81521 push 0x10ab0520 */
  push32((uint32_t)(0x10ab0520u));
  /* 10a81526 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a8152cu);
  /* 10a8152c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8152f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81531 call 0x10a83080 */
  push32(0x10a81536u); f_10a83080();
  /* 10a81536 mov esi, esp */
  ESI = (ESP);
  /* 10a81538 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a8153a push 0x10ab0410 */
  push32((uint32_t)(0x10ab0410u));
  /* 10a8153f call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81545u);
  /* 10a81545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8154a call 0x10a83080 */
  push32(0x10a8154fu); f_10a83080();
  /* 10a8154f mov esi, esp */
  ESI = (ESP);
  /* 10a81551 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81553 push 0x10ab0530 */
  push32((uint32_t)(0x10ab0530u));
  /* 10a81558 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a8155eu);
  /* 10a8155e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81563 call 0x10a83080 */
  push32(0x10a81568u); f_10a83080();
  /* 10a81568 mov esi, esp */
  ESI = (ESP);
  /* 10a8156a push 8 */
  push32((uint32_t)(0x8u));
  /* 10a8156c push 0x10ab0508 */
  push32((uint32_t)(0x10ab0508u));
  /* 10a81571 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81577u);
  /* 10a81577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8157a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8157c call 0x10a83080 */
  push32(0x10a81581u); f_10a83080();
  /* 10a81581 mov esi, esp */
  ESI = (ESP);
  /* 10a81583 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a81585 push 0x10ab0510 */
  push32((uint32_t)(0x10ab0510u));
  /* 10a8158a call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81590u);
  /* 10a81590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81595 call 0x10a83080 */
  push32(0x10a8159au); f_10a83080();
  /* 10a8159a mov esi, esp */
  ESI = (ESP);
  /* 10a8159c push 8 */
  push32((uint32_t)(0x8u));
  /* 10a8159e push 0x10ab0560 */
  push32((uint32_t)(0x10ab0560u));
  /* 10a815a3 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a815a9u);
  /* 10a815a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a815ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a815ae call 0x10a83080 */
  push32(0x10a815b3u); f_10a83080();
  /* 10a815b3 mov esi, esp */
  ESI = (ESP);
  /* 10a815b5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a815b7 push 0x10ab0540 */
  push32((uint32_t)(0x10ab0540u));
  /* 10a815bc call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a815c2u);
  /* 10a815c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a815c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a815c7 call 0x10a83080 */
  push32(0x10a815ccu); f_10a83080();
  /* 10a815cc mov esi, esp */
  ESI = (ESP);
  /* 10a815ce push 8 */
  push32((uint32_t)(0x8u));
  /* 10a815d0 push 0x10ab0518 */
  push32((uint32_t)(0x10ab0518u));
  /* 10a815d5 call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a815dbu);
  /* 10a815db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a815de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a815e0 call 0x10a83080 */
  push32(0x10a815e5u); f_10a83080();
  /* 10a815e5 mov esi, esp */
  ESI = (ESP);
  /* 10a815e7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a815e9 push 0x10ab0500 */
  push32((uint32_t)(0x10ab0500u));
  /* 10a815ee call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a815f4u);
  /* 10a815f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a815f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a815f9 call 0x10a83080 */
  push32(0x10a815feu); f_10a83080();
  /* 10a815fe mov dword ptr [0x10ab0404], 0 */
  w32((uint32_t)(0x10ab0404), (0x0u));
  /* 10a81608 jmp 0x10a8163e */
  goto L_10a8163e;
L_10a8160a:;
  /* 10a8160a mov esi, esp */
  ESI = (ESP);
  /* 10a8160c push 8 */
  push32((uint32_t)(0x8u));
  /* 10a8160e mov eax, dword ptr [0x10ab0404] */
  EAX = (r32((uint32_t)(0x10ab0404)));
  /* 10a81613 lea ecx, [eax*8 + 0x10ab0580] */
  ECX = ((uint32_t)(EAX*8 + 0x10ab0580));
  /* 10a8161a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8161d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a81620 push edx */
  push32((uint32_t)(EDX));
  /* 10a81621 mov eax, dword ptr [0x10ab0404] */
  EAX = (r32((uint32_t)(0x10ab0404)));
  /* 10a81626 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81629 mov dword ptr [0x10ab0404], eax */
  w32((uint32_t)(0x10ab0404), (EAX));
  /* 10a8162e call dword ptr [0x10ab349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab349c))), 0x10a81634u);
  /* 10a81634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81639 call 0x10a83080 */
  push32(0x10a8163eu); f_10a83080();
L_10a8163e:;
  /* 10a8163e cmp dword ptr [0x10ab0404], 0x13 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0404))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81645 jg 0x10a81649 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a81649;
  /* 10a81647 jmp 0x10a8160a */
  goto L_10a8160a;
L_10a81649:;
  /* 10a81649 mov esi, esp */
  ESI = (ESP);
  /* 10a8164b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a8164d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8164f call dword ptr [0x10ab34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab34a0))), 0x10a81655u);
  /* 10a81655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81658 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8165a call 0x10a83080 */
  push32(0x10a8165fu); f_10a83080();
  /* 10a8165f mov esi, esp */
  ESI = (ESP);
  /* 10a81661 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a81663 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81665 call dword ptr [0x10ab34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab34a0))), 0x10a8166bu);
  /* 10a8166b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8166e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81670 call 0x10a83080 */
  push32(0x10a81675u); f_10a83080();
  /* 10a81675 mov esi, esp */
  ESI = (ESP);
  /* 10a81677 push 0x10aab024 */
  push32((uint32_t)(0x10aab024u));
  /* 10a8167c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8167e call dword ptr [0x10ab3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3498))), 0x10a81684u);
  /* 10a81684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81689 call 0x10a83080 */
  push32(0x10a8168eu); f_10a83080();
  /* 10a8168e mov esi, esp */
  ESI = (ESP);
  /* 10a81690 push 0x10aab01c */
  push32((uint32_t)(0x10aab01cu));
  /* 10a81695 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81697 call dword ptr [0x10ab3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3498))), 0x10a8169du);
  /* 10a8169d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a816a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a816a2 call 0x10a83080 */
  push32(0x10a816a7u); f_10a83080();
  /* 10a816a7 pop edi */
  EDI = (pop32());
  /* 10a816a8 pop esi */
  ESI = (pop32());
  /* 10a816a9 pop ebx */
  EBX = (pop32());
  /* 10a816aa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a816ad cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a816af call 0x10a83080 */
  push32(0x10a816b4u); f_10a83080();
  /* 10a816b4 mov esp, ebp */
  ESP = (EBP);
  /* 10a816b6 pop ebp */
  EBP = (pop32());
  /* 10a816b7 ret  */
  ESPCHK(0x10a810a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001840 @ 0x10a81840 (4655 bytes, 1280 insns) */
void f_10a81840(void) {
  FTRACE(0x10a81840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a81840 push ebp */
  push32((uint32_t)(EBP));
  /* 10a81841 mov ebp, esp */
  EBP = (ESP);
  /* 10a81843 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a81846 push ebx */
  push32((uint32_t)(EBX));
  /* 10a81847 push esi */
  push32((uint32_t)(ESI));
  /* 10a81848 push edi */
  push32((uint32_t)(EDI));
  /* 10a81849 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a8184c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a81851 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a81856 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a81858 mov esi, esp */
  ESI = (ESP);
  /* 10a8185a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8185c call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a81862u);
  /* 10a81862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81867 call 0x10a83080 */
  push32(0x10a8186cu); f_10a83080();
  /* 10a8186c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a81871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a81873 je 0x10a81cfd */
  if (C.zf) goto L_10a81cfd;
  /* 10a81879 mov esi, esp */
  ESI = (ESP);
  /* 10a8187b push 0x10aab440 */
  push32((uint32_t)(0x10aab440u));
  /* 10a81880 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81885 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a8188bu);
  /* 10a8188b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8188e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81890 call 0x10a83080 */
  push32(0x10a81895u); f_10a83080();
  /* 10a81895 mov esi, esp */
  ESI = (ESP);
  /* 10a81897 push 0x10aab41c */
  push32((uint32_t)(0x10aab41cu));
  /* 10a8189c push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a818a1 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a818a7u);
  /* 10a818a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a818aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a818ac call 0x10a83080 */
  push32(0x10a818b1u); f_10a83080();
  /* 10a818b1 mov esi, esp */
  ESI = (ESP);
  /* 10a818b3 push 0x10aab404 */
  push32((uint32_t)(0x10aab404u));
  /* 10a818b8 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a818bd call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a818c3u);
  /* 10a818c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a818c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a818c8 call 0x10a83080 */
  push32(0x10a818cdu); f_10a83080();
  /* 10a818cd mov esi, esp */
  ESI = (ESP);
  /* 10a818cf push 0x10aab3ec */
  push32((uint32_t)(0x10aab3ecu));
  /* 10a818d4 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a818d9 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a818dfu);
  /* 10a818df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a818e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a818e4 call 0x10a83080 */
  push32(0x10a818e9u); f_10a83080();
  /* 10a818e9 mov esi, esp */
  ESI = (ESP);
  /* 10a818eb push 0x10aab3d4 */
  push32((uint32_t)(0x10aab3d4u));
  /* 10a818f0 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a818f5 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a818fbu);
  /* 10a818fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a818fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81900 call 0x10a83080 */
  push32(0x10a81905u); f_10a83080();
  /* 10a81905 mov esi, esp */
  ESI = (ESP);
  /* 10a81907 push 0x10aab3bc */
  push32((uint32_t)(0x10aab3bcu));
  /* 10a8190c push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81911 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81917u);
  /* 10a81917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8191a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8191c call 0x10a83080 */
  push32(0x10a81921u); f_10a83080();
  /* 10a81921 mov esi, esp */
  ESI = (ESP);
  /* 10a81923 push 0x10aab3a4 */
  push32((uint32_t)(0x10aab3a4u));
  /* 10a81928 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a8192d call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81933u);
  /* 10a81933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81938 call 0x10a83080 */
  push32(0x10a8193du); f_10a83080();
  /* 10a8193d mov esi, esp */
  ESI = (ESP);
  /* 10a8193f push 0x10aab38c */
  push32((uint32_t)(0x10aab38cu));
  /* 10a81944 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81949 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a8194fu);
  /* 10a8194f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81954 call 0x10a83080 */
  push32(0x10a81959u); f_10a83080();
  /* 10a81959 mov esi, esp */
  ESI = (ESP);
  /* 10a8195b push 0x10aab374 */
  push32((uint32_t)(0x10aab374u));
  /* 10a81960 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81965 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a8196bu);
  /* 10a8196b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8196e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81970 call 0x10a83080 */
  push32(0x10a81975u); f_10a83080();
  /* 10a81975 mov esi, esp */
  ESI = (ESP);
  /* 10a81977 push 0x10aab35c */
  push32((uint32_t)(0x10aab35cu));
  /* 10a8197c push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81981 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81987u);
  /* 10a81987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8198a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8198c call 0x10a83080 */
  push32(0x10a81991u); f_10a83080();
  /* 10a81991 mov esi, esp */
  ESI = (ESP);
  /* 10a81993 push 0x10aab344 */
  push32((uint32_t)(0x10aab344u));
  /* 10a81998 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a8199d call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a819a3u);
  /* 10a819a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a819a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a819a8 call 0x10a83080 */
  push32(0x10a819adu); f_10a83080();
  /* 10a819ad mov esi, esp */
  ESI = (ESP);
  /* 10a819af push 0x10aab32c */
  push32((uint32_t)(0x10aab32cu));
  /* 10a819b4 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a819b9 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a819bfu);
  /* 10a819bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a819c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a819c4 call 0x10a83080 */
  push32(0x10a819c9u); f_10a83080();
  /* 10a819c9 mov esi, esp */
  ESI = (ESP);
  /* 10a819cb push 0x10aab310 */
  push32((uint32_t)(0x10aab310u));
  /* 10a819d0 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a819d5 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a819dbu);
  /* 10a819db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a819de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a819e0 call 0x10a83080 */
  push32(0x10a819e5u); f_10a83080();
  /* 10a819e5 mov esi, esp */
  ESI = (ESP);
  /* 10a819e7 push 0x10aab2f4 */
  push32((uint32_t)(0x10aab2f4u));
  /* 10a819ec push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a819f1 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a819f7u);
  /* 10a819f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a819fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a819fc call 0x10a83080 */
  push32(0x10a81a01u); f_10a83080();
  /* 10a81a01 mov esi, esp */
  ESI = (ESP);
  /* 10a81a03 push 0x10aab2d8 */
  push32((uint32_t)(0x10aab2d8u));
  /* 10a81a08 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81a0d call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81a13u);
  /* 10a81a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81a18 call 0x10a83080 */
  push32(0x10a81a1du); f_10a83080();
  /* 10a81a1d mov esi, esp */
  ESI = (ESP);
  /* 10a81a1f push 0x10aab2bc */
  push32((uint32_t)(0x10aab2bcu));
  /* 10a81a24 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81a29 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81a2fu);
  /* 10a81a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81a34 call 0x10a83080 */
  push32(0x10a81a39u); f_10a83080();
  /* 10a81a39 mov esi, esp */
  ESI = (ESP);
  /* 10a81a3b push 0x10aab2a0 */
  push32((uint32_t)(0x10aab2a0u));
  /* 10a81a40 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81a45 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81a4bu);
  /* 10a81a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81a4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81a50 call 0x10a83080 */
  push32(0x10a81a55u); f_10a83080();
  /* 10a81a55 mov esi, esp */
  ESI = (ESP);
  /* 10a81a57 push 0x10aab288 */
  push32((uint32_t)(0x10aab288u));
  /* 10a81a5c push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81a61 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81a67u);
  /* 10a81a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81a6c call 0x10a83080 */
  push32(0x10a81a71u); f_10a83080();
  /* 10a81a71 mov esi, esp */
  ESI = (ESP);
  /* 10a81a73 push 0x10aab26c */
  push32((uint32_t)(0x10aab26cu));
  /* 10a81a78 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81a7d call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81a83u);
  /* 10a81a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81a88 call 0x10a83080 */
  push32(0x10a81a8du); f_10a83080();
  /* 10a81a8d mov esi, esp */
  ESI = (ESP);
  /* 10a81a8f push 0x10aab250 */
  push32((uint32_t)(0x10aab250u));
  /* 10a81a94 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81a99 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81a9fu);
  /* 10a81a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81aa4 call 0x10a83080 */
  push32(0x10a81aa9u); f_10a83080();
  /* 10a81aa9 mov esi, esp */
  ESI = (ESP);
  /* 10a81aab push 0x10aab234 */
  push32((uint32_t)(0x10aab234u));
  /* 10a81ab0 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81ab5 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81abbu);
  /* 10a81abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81ac0 call 0x10a83080 */
  push32(0x10a81ac5u); f_10a83080();
  /* 10a81ac5 mov esi, esp */
  ESI = (ESP);
  /* 10a81ac7 push 0x10aab218 */
  push32((uint32_t)(0x10aab218u));
  /* 10a81acc push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81ad1 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81ad7u);
  /* 10a81ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81adc call 0x10a83080 */
  push32(0x10a81ae1u); f_10a83080();
  /* 10a81ae1 mov esi, esp */
  ESI = (ESP);
  /* 10a81ae3 push 0x10aab1fc */
  push32((uint32_t)(0x10aab1fcu));
  /* 10a81ae8 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81aed call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81af3u);
  /* 10a81af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81af8 call 0x10a83080 */
  push32(0x10a81afdu); f_10a83080();
  /* 10a81afd mov esi, esp */
  ESI = (ESP);
  /* 10a81aff push 0x10aab1f0 */
  push32((uint32_t)(0x10aab1f0u));
  /* 10a81b04 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81b09 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81b0fu);
  /* 10a81b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81b14 call 0x10a83080 */
  push32(0x10a81b19u); f_10a83080();
  /* 10a81b19 mov esi, esp */
  ESI = (ESP);
  /* 10a81b1b push 0x10aab1e4 */
  push32((uint32_t)(0x10aab1e4u));
  /* 10a81b20 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81b25 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81b2bu);
  /* 10a81b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81b30 call 0x10a83080 */
  push32(0x10a81b35u); f_10a83080();
  /* 10a81b35 mov esi, esp */
  ESI = (ESP);
  /* 10a81b37 push 0x10aab1d8 */
  push32((uint32_t)(0x10aab1d8u));
  /* 10a81b3c push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81b41 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81b47u);
  /* 10a81b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81b4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81b4c call 0x10a83080 */
  push32(0x10a81b51u); f_10a83080();
  /* 10a81b51 mov esi, esp */
  ESI = (ESP);
  /* 10a81b53 push 0x10aab1cc */
  push32((uint32_t)(0x10aab1ccu));
  /* 10a81b58 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81b5d call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81b63u);
  /* 10a81b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81b66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81b68 call 0x10a83080 */
  push32(0x10a81b6du); f_10a83080();
  /* 10a81b6d mov esi, esp */
  ESI = (ESP);
  /* 10a81b6f push 0x10aab1c0 */
  push32((uint32_t)(0x10aab1c0u));
  /* 10a81b74 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81b79 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81b7fu);
  /* 10a81b7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81b82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81b84 call 0x10a83080 */
  push32(0x10a81b89u); f_10a83080();
  /* 10a81b89 mov esi, esp */
  ESI = (ESP);
  /* 10a81b8b push 0x10aab1b4 */
  push32((uint32_t)(0x10aab1b4u));
  /* 10a81b90 push 0x10aab434 */
  push32((uint32_t)(0x10aab434u));
  /* 10a81b95 call dword ptr [0x10ab3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3428))), 0x10a81b9bu);
  /* 10a81b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81b9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81ba0 call 0x10a83080 */
  push32(0x10a81ba5u); f_10a83080();
  /* 10a81ba5 mov esi, esp */
  ESI = (ESP);
  /* 10a81ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81bab call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a81bb1u);
  /* 10a81bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81bb6 call 0x10a83080 */
  push32(0x10a81bbbu); f_10a83080();
  /* 10a81bbb mov esi, esp */
  ESI = (ESP);
  /* 10a81bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81bbf push 6 */
  push32((uint32_t)(0x6u));
  /* 10a81bc1 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a81bc7u);
  /* 10a81bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81bcc call 0x10a83080 */
  push32(0x10a81bd1u); f_10a83080();
  /* 10a81bd1 mov esi, esp */
  ESI = (ESP);
  /* 10a81bd3 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81bd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a81bda push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81bdc call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81be2u);
  /* 10a81be2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81be7 call 0x10a83080 */
  push32(0x10a81becu); f_10a83080();
  /* 10a81bec mov esi, esp */
  ESI = (ESP);
  /* 10a81bee push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81bf7 call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81bfdu);
  /* 10a81bfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c02 call 0x10a83080 */
  push32(0x10a81c07u); f_10a83080();
  /* 10a81c07 mov esi, esp */
  ESI = (ESP);
  /* 10a81c09 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c12 call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81c18u);
  /* 10a81c18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c1d call 0x10a83080 */
  push32(0x10a81c22u); f_10a83080();
  /* 10a81c22 mov esi, esp */
  ESI = (ESP);
  /* 10a81c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c2a call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81c30u);
  /* 10a81c30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c35 call 0x10a83080 */
  push32(0x10a81c3au); f_10a83080();
  /* 10a81c3a mov esi, esp */
  ESI = (ESP);
  /* 10a81c3c push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81c41 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a81c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c45 call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81c4bu);
  /* 10a81c4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c50 call 0x10a83080 */
  push32(0x10a81c55u); f_10a83080();
  /* 10a81c55 mov esi, esp */
  ESI = (ESP);
  /* 10a81c57 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81c5c push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c60 call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81c66u);
  /* 10a81c66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c6b call 0x10a83080 */
  push32(0x10a81c70u); f_10a83080();
  /* 10a81c70 mov esi, esp */
  ESI = (ESP);
  /* 10a81c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81c78 call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81c7eu);
  /* 10a81c7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c83 call 0x10a83080 */
  push32(0x10a81c88u); f_10a83080();
  /* 10a81c88 mov esi, esp */
  ESI = (ESP);
  /* 10a81c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81c8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81c90 call dword ptr [0x10ab3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3430))), 0x10a81c96u);
  /* 10a81c96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81c99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81c9b call 0x10a83080 */
  push32(0x10a81ca0u); f_10a83080();
  /* 10a81ca0 mov esi, esp */
  ESI = (ESP);
  /* 10a81ca2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a81ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81caa push 0x10aab1a8 */
  push32((uint32_t)(0x10aab1a8u));
  /* 10a81caf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81cb1 call dword ptr [0x10ab3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3434))), 0x10a81cb7u);
  /* 10a81cb7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81cba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81cbc call 0x10a83080 */
  push32(0x10a81cc1u); f_10a83080();
  /* 10a81cc1 mov esi, esp */
  ESI = (ESP);
  /* 10a81cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81cc5 push 0x1005 */
  push32((uint32_t)(0x1005u));
  /* 10a81cca push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81ccc call dword ptr [0x10ab342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab342c))), 0x10a81cd2u);
  /* 10a81cd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81cd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81cd7 call 0x10a83080 */
  push32(0x10a81cdcu); f_10a83080();
  /* 10a81cdc mov esi, esp */
  ESI = (ESP);
  /* 10a81cde push 0x10aab1a0 */
  push32((uint32_t)(0x10aab1a0u));
  /* 10a81ce3 call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a81ce9u);
  /* 10a81ce9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81cee call 0x10a83080 */
  push32(0x10a81cf3u); f_10a83080();
  /* 10a81cf3 mov dword ptr [0x10ab0400], 0 */
  w32((uint32_t)(0x10ab0400), (0x0u));
L_10a81cfd:;
  /* 10a81cfd mov esi, esp */
  ESI = (ESP);
  /* 10a81cff push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81d01 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a81d07u);
  /* 10a81d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81d0c call 0x10a83080 */
  push32(0x10a81d11u); f_10a83080();
  /* 10a81d11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a81d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a81d18 je 0x10a81e45 */
  if (C.zf) goto L_10a81e45;
  /* 10a81d1e mov esi, esp */
  ESI = (ESP);
  /* 10a81d20 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a81d26u);
  /* 10a81d26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81d28 call 0x10a83080 */
  push32(0x10a81d2du); f_10a83080();
  /* 10a81d2d cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81d32 jle 0x10a81e45 */
  if ((C.zf||C.sf!=C.of)) goto L_10a81e45;
  /* 10a81d38 mov esi, esp */
  ESI = (ESP);
  /* 10a81d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81d3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81d3e call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a81d44u);
  /* 10a81d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81d49 call 0x10a83080 */
  push32(0x10a81d4eu); f_10a83080();
  /* 10a81d4e mov esi, esp */
  ESI = (ESP);
  /* 10a81d50 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a81d55 push 0x10ab04b8 */
  push32((uint32_t)(0x10ab04b8u));
  /* 10a81d5a push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81d5c push 0x10ab0428 */
  push32((uint32_t)(0x10ab0428u));
  /* 10a81d61 push 0x10ab04e8 */
  push32((uint32_t)(0x10ab04e8u));
  /* 10a81d66 push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a81d6b call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a81d71u);
  /* 10a81d71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81d76 call 0x10a83080 */
  push32(0x10a81d7bu); f_10a83080();
  /* 10a81d7b mov esi, esp */
  ESI = (ESP);
  /* 10a81d7d push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a81d82 push 0x10ab04b8 */
  push32((uint32_t)(0x10ab04b8u));
  /* 10a81d87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81d89 push 0x10ab0488 */
  push32((uint32_t)(0x10ab0488u));
  /* 10a81d8e push 0x10ab03e0 */
  push32((uint32_t)(0x10ab03e0u));
  /* 10a81d93 push 0x10ab0440 */
  push32((uint32_t)(0x10ab0440u));
  /* 10a81d98 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a81d9eu);
  /* 10a81d9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81da1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81da3 call 0x10a83080 */
  push32(0x10a81da8u); f_10a83080();
  /* 10a81da8 mov esi, esp */
  ESI = (ESP);
  /* 10a81daa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81dac push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81dae push 0x10ab04b8 */
  push32((uint32_t)(0x10ab04b8u));
  /* 10a81db3 call dword ptr [0x10ab3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3448))), 0x10a81db9u);
  /* 10a81db9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81dbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81dbe call 0x10a83080 */
  push32(0x10a81dc3u); f_10a83080();
  /* 10a81dc3 mov esi, esp */
  ESI = (ESP);
  /* 10a81dc5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10a81dca push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81dcc call dword ptr [0x10ab344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab344c))), 0x10a81dd2u);
  /* 10a81dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81dd7 call 0x10a83080 */
  push32(0x10a81ddcu); f_10a83080();
  /* 10a81ddc mov esi, esp */
  ESI = (ESP);
  /* 10a81dde push 0x10aab198 */
  push32((uint32_t)(0x10aab198u));
  /* 10a81de3 call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a81de9u);
  /* 10a81de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81dee call 0x10a83080 */
  push32(0x10a81df3u); f_10a83080();
  /* 10a81df3 mov esi, esp */
  ESI = (ESP);
  /* 10a81df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81df7 push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a81dfc call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a81e02u);
  /* 10a81e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81e05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81e07 call 0x10a83080 */
  push32(0x10a81e0cu); f_10a83080();
  /* 10a81e0c mov esi, esp */
  ESI = (ESP);
  /* 10a81e0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81e10 push 0x10ab0440 */
  push32((uint32_t)(0x10ab0440u));
  /* 10a81e15 call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a81e1bu);
  /* 10a81e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81e1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81e20 call 0x10a83080 */
  push32(0x10a81e25u); f_10a83080();
  /* 10a81e25 mov esi, esp */
  ESI = (ESP);
  /* 10a81e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81e29 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a81e2e push 0x10ab04c0 */
  push32((uint32_t)(0x10ab04c0u));
  /* 10a81e33 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81e35 call dword ptr [0x10ab3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3454))), 0x10a81e3bu);
  /* 10a81e3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81e3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81e40 call 0x10a83080 */
  push32(0x10a81e45u); f_10a83080();
L_10a81e45:;
  /* 10a81e45 mov esi, esp */
  ESI = (ESP);
  /* 10a81e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81e49 call dword ptr [0x10ab3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3458))), 0x10a81e4fu);
  /* 10a81e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81e52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81e54 call 0x10a83080 */
  push32(0x10a81e59u); f_10a83080();
  /* 10a81e59 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a81e5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a81e60 je 0x10a81e76 */
  if (C.zf) goto L_10a81e76;
  /* 10a81e62 mov esi, esp */
  ESI = (ESP);
  /* 10a81e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81e66 call dword ptr [0x10ab3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3450))), 0x10a81e6cu);
  /* 10a81e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81e6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81e71 call 0x10a83080 */
  push32(0x10a81e76u); f_10a83080();
L_10a81e76:;
  /* 10a81e76 mov esi, esp */
  ESI = (ESP);
  /* 10a81e78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81e7a call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a81e80u);
  /* 10a81e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81e85 call 0x10a83080 */
  push32(0x10a81e8au); f_10a83080();
  /* 10a81e8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a81e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a81e91 jne 0x10a81fe5 */
  if (!C.zf) goto L_10a81fe5;
  /* 10a81e97 mov esi, esp */
  ESI = (ESP);
  /* 10a81e99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a81e9b call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a81ea1u);
  /* 10a81ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81ea4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81ea6 call 0x10a83080 */
  push32(0x10a81eabu); f_10a83080();
  /* 10a81eab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a81eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a81eb2 je 0x10a81fe5 */
  if (C.zf) goto L_10a81fe5;
  /* 10a81eb8 mov esi, esp */
  ESI = (ESP);
  /* 10a81eba push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a81ebf push 0x10ab04c0 */
  push32((uint32_t)(0x10ab04c0u));
  /* 10a81ec4 call dword ptr [0x10ab3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3460))), 0x10a81ecau);
  /* 10a81eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81ecd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81ecf call 0x10a83080 */
  push32(0x10a81ed4u); f_10a83080();
  /* 10a81ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a81ed6 jle 0x10a81fe5 */
  if ((C.zf||C.sf!=C.of)) goto L_10a81fe5;
  /* 10a81edc mov esi, esp */
  ESI = (ESP);
  /* 10a81ede push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81ee0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a81ee2 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a81ee8u);
  /* 10a81ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81eed call 0x10a83080 */
  push32(0x10a81ef2u); f_10a83080();
  /* 10a81ef2 mov esi, esp */
  ESI = (ESP);
  /* 10a81ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81ef6 push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a81efb call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a81f01u);
  /* 10a81f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f06 call 0x10a83080 */
  push32(0x10a81f0bu); f_10a83080();
  /* 10a81f0b mov esi, esp */
  ESI = (ESP);
  /* 10a81f0d push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81f0f call dword ptr [0x10ab3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3464))), 0x10a81f15u);
  /* 10a81f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f1a call 0x10a83080 */
  push32(0x10a81f1fu); f_10a83080();
  /* 10a81f1f mov esi, esp */
  ESI = (ESP);
  /* 10a81f21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81f23 call dword ptr [0x10ab345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab345c))), 0x10a81f29u);
  /* 10a81f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f2e call 0x10a83080 */
  push32(0x10a81f33u); f_10a83080();
  /* 10a81f33 mov esi, esp */
  ESI = (ESP);
  /* 10a81f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81f37 push 0x10ab0440 */
  push32((uint32_t)(0x10ab0440u));
  /* 10a81f3c call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a81f42u);
  /* 10a81f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f47 call 0x10a83080 */
  push32(0x10a81f4cu); f_10a83080();
  /* 10a81f4c mov esi, esp */
  ESI = (ESP);
  /* 10a81f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81f50 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81f52 call dword ptr [0x10ab346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab346c))), 0x10a81f58u);
  /* 10a81f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f5d call 0x10a83080 */
  push32(0x10a81f62u); f_10a83080();
  /* 10a81f62 mov esi, esp */
  ESI = (ESP);
  /* 10a81f64 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81f69 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a81f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81f6d call dword ptr [0x10ab3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3470))), 0x10a81f73u);
  /* 10a81f73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f78 call 0x10a83080 */
  push32(0x10a81f7du); f_10a83080();
  /* 10a81f7d mov esi, esp */
  ESI = (ESP);
  /* 10a81f7f push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81f84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a81f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81f88 call dword ptr [0x10ab3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3470))), 0x10a81f8eu);
  /* 10a81f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81f93 call 0x10a83080 */
  push32(0x10a81f98u); f_10a83080();
  /* 10a81f98 mov esi, esp */
  ESI = (ESP);
  /* 10a81f9a push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81f9f push 4 */
  push32((uint32_t)(0x4u));
  /* 10a81fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81fa3 call dword ptr [0x10ab3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3470))), 0x10a81fa9u);
  /* 10a81fa9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81fac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81fae call 0x10a83080 */
  push32(0x10a81fb3u); f_10a83080();
  /* 10a81fb3 mov esi, esp */
  ESI = (ESP);
  /* 10a81fb5 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10a81fba push 5 */
  push32((uint32_t)(0x5u));
  /* 10a81fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a81fbe call dword ptr [0x10ab3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3470))), 0x10a81fc4u);
  /* 10a81fc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81fc9 call 0x10a83080 */
  push32(0x10a81fceu); f_10a83080();
  /* 10a81fce mov esi, esp */
  ESI = (ESP);
  /* 10a81fd0 push 0x10aab190 */
  push32((uint32_t)(0x10aab190u));
  /* 10a81fd5 call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a81fdbu);
  /* 10a81fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81fde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81fe0 call 0x10a83080 */
  push32(0x10a81fe5u); f_10a83080();
L_10a81fe5:;
  /* 10a81fe5 mov esi, esp */
  ESI = (ESP);
  /* 10a81fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a81fe9 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a81fefu);
  /* 10a81fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a81ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a81ff4 call 0x10a83080 */
  push32(0x10a81ff9u); f_10a83080();
  /* 10a81ff9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a81ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82000 jne 0x10a820da */
  if (!C.zf) goto L_10a820da;
  /* 10a82006 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82008 push 0x10ab0428 */
  push32((uint32_t)(0x10ab0428u));
  /* 10a8200d call 0x10a8100f */
  push32(0x10a82012u); f_10a8100f();
  /* 10a82012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82017 jle 0x10a820da */
  if ((C.zf||C.sf!=C.of)) goto L_10a820da;
  /* 10a8201d mov esi, esp */
  ESI = (ESP);
  /* 10a8201f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10a82021 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a82027u);
  /* 10a82027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8202a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8202c call 0x10a83080 */
  push32(0x10a82031u); f_10a83080();
  /* 10a82031 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a82036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82038 je 0x10a820da */
  if (C.zf) goto L_10a820da;
  /* 10a8203e mov esi, esp */
  ESI = (ESP);
  /* 10a82040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82042 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10a82044 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a8204au);
  /* 10a8204a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8204d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8204f call 0x10a83080 */
  push32(0x10a82054u); f_10a83080();
  /* 10a82054 mov esi, esp */
  ESI = (ESP);
  /* 10a82056 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82058 call dword ptr [0x10ab345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab345c))), 0x10a8205eu);
  /* 10a8205e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82061 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82063 call 0x10a83080 */
  push32(0x10a82068u); f_10a83080();
  /* 10a82068 mov esi, esp */
  ESI = (ESP);
  /* 10a8206a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8206c push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a82071 call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a82077u);
  /* 10a82077 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8207a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8207c call 0x10a83080 */
  push32(0x10a82081u); f_10a83080();
  /* 10a82081 mov esi, esp */
  ESI = (ESP);
  /* 10a82083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82085 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a8208a push 0x10ab04c8 */
  push32((uint32_t)(0x10ab04c8u));
  /* 10a8208f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82091 call dword ptr [0x10ab3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3468))), 0x10a82097u);
  /* 10a82097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8209a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8209c call 0x10a83080 */
  push32(0x10a820a1u); f_10a83080();
  /* 10a820a1 mov esi, esp */
  ESI = (ESP);
  /* 10a820a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a820a5 push 0x10ab0458 */
  push32((uint32_t)(0x10ab0458u));
  /* 10a820aa call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a820b0u);
  /* 10a820b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a820b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a820b5 call 0x10a83080 */
  push32(0x10a820bau); f_10a83080();
  /* 10a820ba mov esi, esp */
  ESI = (ESP);
  /* 10a820bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a820be push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a820c3 push 0x10ab04c8 */
  push32((uint32_t)(0x10ab04c8u));
  /* 10a820c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a820ca call dword ptr [0x10ab3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3454))), 0x10a820d0u);
  /* 10a820d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a820d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a820d5 call 0x10a83080 */
  push32(0x10a820dau); f_10a83080();
L_10a820da:;
  /* 10a820da mov esi, esp */
  ESI = (ESP);
  /* 10a820dc push 4 */
  push32((uint32_t)(0x4u));
  /* 10a820de call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a820e4u);
  /* 10a820e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a820e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a820e9 call 0x10a83080 */
  push32(0x10a820eeu); f_10a83080();
  /* 10a820ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a820f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a820f5 je 0x10a821a5 */
  if (C.zf) goto L_10a821a5;
  /* 10a820fb mov esi, esp */
  ESI = (ESP);
  /* 10a820fd call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a82103u);
  /* 10a82103 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82105 call 0x10a83080 */
  push32(0x10a8210au); f_10a83080();
  /* 10a8210a cmp eax, 0x5014 */
  { uint32_t _a=(EAX),_b=(0x5014u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8210f jle 0x10a821a5 */
  if ((C.zf||C.sf!=C.of)) goto L_10a821a5;
  /* 10a82115 mov esi, esp */
  ESI = (ESP);
  /* 10a82117 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82119 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a8211b call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a82121u);
  /* 10a82121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82126 call 0x10a83080 */
  push32(0x10a8212bu); f_10a83080();
  /* 10a8212b mov esi, esp */
  ESI = (ESP);
  /* 10a8212d push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a82132 push 0x10ab04b8 */
  push32((uint32_t)(0x10ab04b8u));
  /* 10a82137 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82139 push 0x10ab04d8 */
  push32((uint32_t)(0x10ab04d8u));
  /* 10a8213e push 0x10ab04d0 */
  push32((uint32_t)(0x10ab04d0u));
  /* 10a82143 push 0x10ab0458 */
  push32((uint32_t)(0x10ab0458u));
  /* 10a82148 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8214eu);
  /* 10a8214e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82151 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82153 call 0x10a83080 */
  push32(0x10a82158u); f_10a83080();
  /* 10a82158 mov esi, esp */
  ESI = (ESP);
  /* 10a8215a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8215c push 0x10ab0458 */
  push32((uint32_t)(0x10ab0458u));
  /* 10a82161 call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a82167u);
  /* 10a82167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8216a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8216c call 0x10a83080 */
  push32(0x10a82171u); f_10a83080();
  /* 10a82171 mov esi, esp */
  ESI = (ESP);
  /* 10a82173 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82175 call dword ptr [0x10ab3478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3478))), 0x10a8217bu);
  /* 10a8217b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8217e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82180 call 0x10a83080 */
  push32(0x10a82185u); f_10a83080();
  /* 10a82185 mov esi, esp */
  ESI = (ESP);
  /* 10a82187 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82189 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a8218e push 0x10ab04c0 */
  push32((uint32_t)(0x10ab04c0u));
  /* 10a82193 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82195 call dword ptr [0x10ab3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3454))), 0x10a8219bu);
  /* 10a8219b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8219e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a821a0 call 0x10a83080 */
  push32(0x10a821a5u); f_10a83080();
L_10a821a5:;
  /* 10a821a5 mov esi, esp */
  ESI = (ESP);
  /* 10a821a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a821a9 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a821afu);
  /* 10a821af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a821b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a821b4 call 0x10a83080 */
  push32(0x10a821b9u); f_10a83080();
  /* 10a821b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a821be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a821c0 jne 0x10a82233 */
  if (!C.zf) goto L_10a82233;
  /* 10a821c2 mov esi, esp */
  ESI = (ESP);
  /* 10a821c4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10a821c6 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a821ccu);
  /* 10a821cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a821cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a821d1 call 0x10a83080 */
  push32(0x10a821d6u); f_10a83080();
  /* 10a821d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a821db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a821dd je 0x10a82233 */
  if (C.zf) goto L_10a82233;
  /* 10a821df push 0x10ab0440 */
  push32((uint32_t)(0x10ab0440u));
  /* 10a821e4 call 0x10a81005 */
  push32(0x10a821e9u); f_10a81005();
  /* 10a821e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a821ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a821ee jne 0x10a82233 */
  if (!C.zf) goto L_10a82233;
  /* 10a821f0 push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a821f5 call 0x10a81005 */
  push32(0x10a821fau); f_10a81005();
  /* 10a821fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a821fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a821ff jle 0x10a82233 */
  if ((C.zf||C.sf!=C.of)) goto L_10a82233;
  /* 10a82201 mov esi, esp */
  ESI = (ESP);
  /* 10a82203 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82205 push 0x10ab0458 */
  push32((uint32_t)(0x10ab0458u));
  /* 10a8220a call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a82210u);
  /* 10a82210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82215 call 0x10a83080 */
  push32(0x10a8221au); f_10a83080();
  /* 10a8221a mov esi, esp */
  ESI = (ESP);
  /* 10a8221c push 0x10ab0448 */
  push32((uint32_t)(0x10ab0448u));
  /* 10a82221 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82223 call dword ptr [0x10ab347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab347c))), 0x10a82229u);
  /* 10a82229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8222c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8222e call 0x10a83080 */
  push32(0x10a82233u); f_10a83080();
L_10a82233:;
  /* 10a82233 mov esi, esp */
  ESI = (ESP);
  /* 10a82235 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a82237 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a8223du);
  /* 10a8223d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82242 call 0x10a83080 */
  push32(0x10a82247u); f_10a83080();
  /* 10a82247 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8224c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8224e je 0x10a822a6 */
  if (C.zf) goto L_10a822a6;
  /* 10a82250 mov esi, esp */
  ESI = (ESP);
  /* 10a82252 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a82258u);
  /* 10a82258 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8225a call 0x10a83080 */
  push32(0x10a8225fu); f_10a83080();
  /* 10a8225f cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82264 jle 0x10a822a6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a822a6;
  /* 10a82266 mov esi, esp */
  ESI = (ESP);
  /* 10a82268 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8226a push 5 */
  push32((uint32_t)(0x5u));
  /* 10a8226c call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a82272u);
  /* 10a82272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82277 call 0x10a83080 */
  push32(0x10a8227cu); f_10a83080();
  /* 10a8227c mov esi, esp */
  ESI = (ESP);
  /* 10a8227e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82280 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82285 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82287 push 0x10ab0480 */
  push32((uint32_t)(0x10ab0480u));
  /* 10a8228c push 0x10ab03e8 */
  push32((uint32_t)(0x10ab03e8u));
  /* 10a82291 push 0x10ab0450 */
  push32((uint32_t)(0x10ab0450u));
  /* 10a82296 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8229cu);
  /* 10a8229c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8229f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a822a1 call 0x10a83080 */
  push32(0x10a822a6u); f_10a83080();
L_10a822a6:;
  /* 10a822a6 mov esi, esp */
  ESI = (ESP);
  /* 10a822a8 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a822aa call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a822b0u);
  /* 10a822b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a822b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a822b5 call 0x10a83080 */
  push32(0x10a822bau); f_10a83080();
  /* 10a822ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a822bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a822c1 je 0x10a82375 */
  if (C.zf) goto L_10a82375;
  /* 10a822c7 mov esi, esp */
  ESI = (ESP);
  /* 10a822c9 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a822cfu);
  /* 10a822cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a822d1 call 0x10a83080 */
  push32(0x10a822d6u); f_10a83080();
  /* 10a822d6 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a822db jle 0x10a82375 */
  if ((C.zf||C.sf!=C.of)) goto L_10a82375;
  /* 10a822e1 mov esi, esp */
  ESI = (ESP);
  /* 10a822e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a822e5 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a822e7 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a822edu);
  /* 10a822ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a822f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a822f2 call 0x10a83080 */
  push32(0x10a822f7u); f_10a83080();
  /* 10a822f7 mov esi, esp */
  ESI = (ESP);
  /* 10a822f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a822fb push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82300 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82302 push 0x10ab0480 */
  push32((uint32_t)(0x10ab0480u));
  /* 10a82307 push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a8230c push 0x10ab0468 */
  push32((uint32_t)(0x10ab0468u));
  /* 10a82311 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82317u);
  /* 10a82317 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8231a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8231c call 0x10a83080 */
  push32(0x10a82321u); f_10a83080();
  /* 10a82321 mov esi, esp */
  ESI = (ESP);
  /* 10a82323 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82325 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a8232a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8232c push 0x10ab0490 */
  push32((uint32_t)(0x10ab0490u));
  /* 10a82331 push 0x10ab0418 */
  push32((uint32_t)(0x10ab0418u));
  /* 10a82336 push 0x10ab0460 */
  push32((uint32_t)(0x10ab0460u));
  /* 10a8233b call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82341u);
  /* 10a82341 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82344 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82346 call 0x10a83080 */
  push32(0x10a8234bu); f_10a83080();
  /* 10a8234b mov esi, esp */
  ESI = (ESP);
  /* 10a8234d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a8234f push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82354 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82356 push 0x10ab04d8 */
  push32((uint32_t)(0x10ab04d8u));
  /* 10a8235b push 0x10ab03e8 */
  push32((uint32_t)(0x10ab03e8u));
  /* 10a82360 push 0x10ab0568 */
  push32((uint32_t)(0x10ab0568u));
  /* 10a82365 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8236bu);
  /* 10a8236b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8236e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82370 call 0x10a83080 */
  push32(0x10a82375u); f_10a83080();
L_10a82375:;
  /* 10a82375 mov esi, esp */
  ESI = (ESP);
  /* 10a82377 push 7 */
  push32((uint32_t)(0x7u));
  /* 10a82379 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a8237fu);
  /* 10a8237f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82382 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82384 call 0x10a83080 */
  push32(0x10a82389u); f_10a83080();
  /* 10a82389 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82390 je 0x10a8246e */
  if (C.zf) goto L_10a8246e;
  /* 10a82396 mov esi, esp */
  ESI = (ESP);
  /* 10a82398 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a8239eu);
  /* 10a8239e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a823a0 call 0x10a83080 */
  push32(0x10a823a5u); f_10a83080();
  /* 10a823a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a823aa jle 0x10a8246e */
  if ((C.zf||C.sf!=C.of)) goto L_10a8246e;
  /* 10a823b0 mov esi, esp */
  ESI = (ESP);
  /* 10a823b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a823b4 push 7 */
  push32((uint32_t)(0x7u));
  /* 10a823b6 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a823bcu);
  /* 10a823bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a823bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a823c1 call 0x10a83080 */
  push32(0x10a823c6u); f_10a83080();
  /* 10a823c6 mov esi, esp */
  ESI = (ESP);
  /* 10a823c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a823ca push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a823cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a823d1 push 0x10ab04f0 */
  push32((uint32_t)(0x10ab04f0u));
  /* 10a823d6 push 0x10ab03e8 */
  push32((uint32_t)(0x10ab03e8u));
  /* 10a823db push 0x10ab0478 */
  push32((uint32_t)(0x10ab0478u));
  /* 10a823e0 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a823e6u);
  /* 10a823e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a823e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a823eb call 0x10a83080 */
  push32(0x10a823f0u); f_10a83080();
  /* 10a823f0 mov esi, esp */
  ESI = (ESP);
  /* 10a823f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a823f4 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a823f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a823fb push 0x10ab0480 */
  push32((uint32_t)(0x10ab0480u));
  /* 10a82400 push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a82405 push 0x10ab0470 */
  push32((uint32_t)(0x10ab0470u));
  /* 10a8240a call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82410u);
  /* 10a82410 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82415 call 0x10a83080 */
  push32(0x10a8241au); f_10a83080();
  /* 10a8241a mov esi, esp */
  ESI = (ESP);
  /* 10a8241c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a8241e push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82423 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82425 push 0x10ab04d8 */
  push32((uint32_t)(0x10ab04d8u));
  /* 10a8242a push 0x10ab03e8 */
  push32((uint32_t)(0x10ab03e8u));
  /* 10a8242f push 0x10ab0570 */
  push32((uint32_t)(0x10ab0570u));
  /* 10a82434 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8243au);
  /* 10a8243a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8243d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8243f call 0x10a83080 */
  push32(0x10a82444u); f_10a83080();
  /* 10a82444 mov esi, esp */
  ESI = (ESP);
  /* 10a82446 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82448 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a8244d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8244f push 0x10ab04e0 */
  push32((uint32_t)(0x10ab04e0u));
  /* 10a82454 push 0x10ab0418 */
  push32((uint32_t)(0x10ab0418u));
  /* 10a82459 push 0x10ab04f8 */
  push32((uint32_t)(0x10ab04f8u));
  /* 10a8245e call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82464u);
  /* 10a82464 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82467 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82469 call 0x10a83080 */
  push32(0x10a8246eu); f_10a83080();
L_10a8246e:;
  /* 10a8246e mov esi, esp */
  ESI = (ESP);
  /* 10a82470 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a82472 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a82478u);
  /* 10a82478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8247b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8247d call 0x10a83080 */
  push32(0x10a82482u); f_10a83080();
  /* 10a82482 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a82487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82489 je 0x10a82567 */
  if (C.zf) goto L_10a82567;
  /* 10a8248f mov esi, esp */
  ESI = (ESP);
  /* 10a82491 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a82497u);
  /* 10a82497 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82499 call 0x10a83080 */
  push32(0x10a8249eu); f_10a83080();
  /* 10a8249e cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a824a3 jle 0x10a82567 */
  if ((C.zf||C.sf!=C.of)) goto L_10a82567;
  /* 10a824a9 mov esi, esp */
  ESI = (ESP);
  /* 10a824ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a824ad push 8 */
  push32((uint32_t)(0x8u));
  /* 10a824af call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a824b5u);
  /* 10a824b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a824b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a824ba call 0x10a83080 */
  push32(0x10a824bfu); f_10a83080();
  /* 10a824bf mov esi, esp */
  ESI = (ESP);
  /* 10a824c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a824c3 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a824c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a824ca push 0x10ab04f0 */
  push32((uint32_t)(0x10ab04f0u));
  /* 10a824cf push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a824d4 push 0x10ab0550 */
  push32((uint32_t)(0x10ab0550u));
  /* 10a824d9 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a824dfu);
  /* 10a824df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a824e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a824e4 call 0x10a83080 */
  push32(0x10a824e9u); f_10a83080();
  /* 10a824e9 mov esi, esp */
  ESI = (ESP);
  /* 10a824eb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a824ed push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a824f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a824f4 push 0x10ab0480 */
  push32((uint32_t)(0x10ab0480u));
  /* 10a824f9 push 0x10ab03f8 */
  push32((uint32_t)(0x10ab03f8u));
  /* 10a824fe push 0x10ab0558 */
  push32((uint32_t)(0x10ab0558u));
  /* 10a82503 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82509u);
  /* 10a82509 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8250c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8250e call 0x10a83080 */
  push32(0x10a82513u); f_10a83080();
  /* 10a82513 mov esi, esp */
  ESI = (ESP);
  /* 10a82515 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82517 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a8251c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8251e push 0x10ab04d8 */
  push32((uint32_t)(0x10ab04d8u));
  /* 10a82523 push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a82528 push 0x10ab0408 */
  push32((uint32_t)(0x10ab0408u));
  /* 10a8252d call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82533u);
  /* 10a82533 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82536 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82538 call 0x10a83080 */
  push32(0x10a8253du); f_10a83080();
  /* 10a8253d mov esi, esp */
  ESI = (ESP);
  /* 10a8253f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82541 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82546 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82548 push 0x10ab0490 */
  push32((uint32_t)(0x10ab0490u));
  /* 10a8254d push 0x10ab0420 */
  push32((uint32_t)(0x10ab0420u));
  /* 10a82552 push 0x10ab0538 */
  push32((uint32_t)(0x10ab0538u));
  /* 10a82557 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8255du);
  /* 10a8255d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82562 call 0x10a83080 */
  push32(0x10a82567u); f_10a83080();
L_10a82567:;
  /* 10a82567 mov esi, esp */
  ESI = (ESP);
  /* 10a82569 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8256b call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a82571u);
  /* 10a82571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82576 call 0x10a83080 */
  push32(0x10a8257bu); f_10a83080();
  /* 10a8257b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a82580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82582 je 0x10a8268a */
  if (C.zf) goto L_10a8268a;
  /* 10a82588 mov esi, esp */
  ESI = (ESP);
  /* 10a8258a call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a82590u);
  /* 10a82590 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82592 call 0x10a83080 */
  push32(0x10a82597u); f_10a83080();
  /* 10a82597 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8259c jle 0x10a8268a */
  if ((C.zf||C.sf!=C.of)) goto L_10a8268a;
  /* 10a825a2 mov esi, esp */
  ESI = (ESP);
  /* 10a825a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a825a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a825a8 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a825aeu);
  /* 10a825ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a825b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a825b3 call 0x10a83080 */
  push32(0x10a825b8u); f_10a83080();
  /* 10a825b8 mov esi, esp */
  ESI = (ESP);
  /* 10a825ba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a825bc push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a825c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a825c3 push 0x10ab04f0 */
  push32((uint32_t)(0x10ab04f0u));
  /* 10a825c8 push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a825cd push 0x10ab0548 */
  push32((uint32_t)(0x10ab0548u));
  /* 10a825d2 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a825d8u);
  /* 10a825d8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a825db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a825dd call 0x10a83080 */
  push32(0x10a825e2u); f_10a83080();
  /* 10a825e2 mov esi, esp */
  ESI = (ESP);
  /* 10a825e4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a825e6 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a825eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a825ed push 0x10ab0480 */
  push32((uint32_t)(0x10ab0480u));
  /* 10a825f2 push 0x10ab03f8 */
  push32((uint32_t)(0x10ab03f8u));
  /* 10a825f7 push 0x10ab0520 */
  push32((uint32_t)(0x10ab0520u));
  /* 10a825fc call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82602u);
  /* 10a82602 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82607 call 0x10a83080 */
  push32(0x10a8260cu); f_10a83080();
  /* 10a8260c mov esi, esp */
  ESI = (ESP);
  /* 10a8260e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82610 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82615 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82617 push 0x10ab04d8 */
  push32((uint32_t)(0x10ab04d8u));
  /* 10a8261c push 0x10ab03f0 */
  push32((uint32_t)(0x10ab03f0u));
  /* 10a82621 push 0x10ab0410 */
  push32((uint32_t)(0x10ab0410u));
  /* 10a82626 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8262cu);
  /* 10a8262c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8262f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82631 call 0x10a83080 */
  push32(0x10a82636u); f_10a83080();
  /* 10a82636 mov esi, esp */
  ESI = (ESP);
  /* 10a82638 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a8263a push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a8263f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82641 push 0x10ab04e0 */
  push32((uint32_t)(0x10ab04e0u));
  /* 10a82646 push 0x10ab0420 */
  push32((uint32_t)(0x10ab0420u));
  /* 10a8264b push 0x10ab0530 */
  push32((uint32_t)(0x10ab0530u));
  /* 10a82650 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82656u);
  /* 10a82656 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82659 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8265b call 0x10a83080 */
  push32(0x10a82660u); f_10a83080();
  /* 10a82660 mov esi, esp */
  ESI = (ESP);
  /* 10a82662 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a82664 push 0x10ab04a8 */
  push32((uint32_t)(0x10ab04a8u));
  /* 10a82669 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8266b push 0x10ab0490 */
  push32((uint32_t)(0x10ab0490u));
  /* 10a82670 push 0x10ab0420 */
  push32((uint32_t)(0x10ab0420u));
  /* 10a82675 push 0x10ab0500 */
  push32((uint32_t)(0x10ab0500u));
  /* 10a8267a call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82680u);
  /* 10a82680 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82685 call 0x10a83080 */
  push32(0x10a8268au); f_10a83080();
L_10a8268a:;
  /* 10a8268a mov esi, esp */
  ESI = (ESP);
  /* 10a8268c push 0xa */
  push32((uint32_t)(0xau));
  /* 10a8268e call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a82694u);
  /* 10a82694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82699 call 0x10a83080 */
  push32(0x10a8269eu); f_10a83080();
  /* 10a8269e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a826a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a826a5 je 0x10a8273d */
  if (C.zf) goto L_10a8273d;
  /* 10a826ab mov esi, esp */
  ESI = (ESP);
  /* 10a826ad call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a826b3u);
  /* 10a826b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a826b5 call 0x10a83080 */
  push32(0x10a826bau); f_10a83080();
  /* 10a826ba cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a826bf jle 0x10a8273d */
  if ((C.zf||C.sf!=C.of)) goto L_10a8273d;
  /* 10a826c1 mov esi, esp */
  ESI = (ESP);
  /* 10a826c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a826c5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a826c7 call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a826cdu);
  /* 10a826cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a826d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a826d2 call 0x10a83080 */
  push32(0x10a826d7u); f_10a83080();
  /* 10a826d7 mov esi, esp */
  ESI = (ESP);
  /* 10a826d9 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a826de push 0x10ab04b8 */
  push32((uint32_t)(0x10ab04b8u));
  /* 10a826e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a826e5 push 0x10ab0578 */
  push32((uint32_t)(0x10ab0578u));
  /* 10a826ea push 0x10ab03f8 */
  push32((uint32_t)(0x10ab03f8u));
  /* 10a826ef push 0x10ab0508 */
  push32((uint32_t)(0x10ab0508u));
  /* 10a826f4 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a826fau);
  /* 10a826fa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a826fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a826ff call 0x10a83080 */
  push32(0x10a82704u); f_10a83080();
  /* 10a82704 mov esi, esp */
  ESI = (ESP);
  /* 10a82706 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82708 push 0x10ab0508 */
  push32((uint32_t)(0x10ab0508u));
  /* 10a8270d call dword ptr [0x10ab3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3444))), 0x10a82713u);
  /* 10a82713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82716 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82718 call 0x10a83080 */
  push32(0x10a8271du); f_10a83080();
  /* 10a8271d mov esi, esp */
  ESI = (ESP);
  /* 10a8271f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82721 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10a82726 push 0x10ab04c0 */
  push32((uint32_t)(0x10ab04c0u));
  /* 10a8272b push 4 */
  push32((uint32_t)(0x4u));
  /* 10a8272d call dword ptr [0x10ab3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3454))), 0x10a82733u);
  /* 10a82733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82738 call 0x10a83080 */
  push32(0x10a8273du); f_10a83080();
L_10a8273d:;
  /* 10a8273d mov esi, esp */
  ESI = (ESP);
  /* 10a8273f push 0xa */
  push32((uint32_t)(0xau));
  /* 10a82741 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a82747u);
  /* 10a82747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8274a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8274c call 0x10a83080 */
  push32(0x10a82751u); f_10a83080();
  /* 10a82751 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a82756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82758 jne 0x10a827d3 */
  if (!C.zf) goto L_10a827d3;
  /* 10a8275a mov esi, esp */
  ESI = (ESP);
  /* 10a8275c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a8275e call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a82764u);
  /* 10a82764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82767 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82769 call 0x10a83080 */
  push32(0x10a8276eu); f_10a83080();
  /* 10a8276e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a82773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82775 je 0x10a827d3 */
  if (C.zf) goto L_10a827d3;
  /* 10a82777 mov esi, esp */
  ESI = (ESP);
  /* 10a82779 push 0x10ab0508 */
  push32((uint32_t)(0x10ab0508u));
  /* 10a8277e push 0x10ab04c0 */
  push32((uint32_t)(0x10ab04c0u));
  /* 10a82783 call dword ptr [0x10ab3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3460))), 0x10a82789u);
  /* 10a82789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8278c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8278e call 0x10a83080 */
  push32(0x10a82793u); f_10a83080();
  /* 10a82793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82795 je 0x10a827d3 */
  if (C.zf) goto L_10a827d3;
  /* 10a82797 mov esi, esp */
  ESI = (ESP);
  /* 10a82799 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8279b push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a8279d call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a827a3u);
  /* 10a827a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a827a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a827a8 call 0x10a83080 */
  push32(0x10a827adu); f_10a83080();
  /* 10a827ad mov esi, esp */
  ESI = (ESP);
  /* 10a827af push 0x10aab188 */
  push32((uint32_t)(0x10aab188u));
  /* 10a827b4 call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a827bau);
  /* 10a827ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a827bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a827bf call 0x10a83080 */
  push32(0x10a827c4u); f_10a83080();
  /* 10a827c4 mov esi, esp */
  ESI = (ESP);
  /* 10a827c6 call dword ptr [0x10ab3474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3474))), 0x10a827ccu);
  /* 10a827cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a827ce call 0x10a83080 */
  push32(0x10a827d3u); f_10a83080();
L_10a827d3:;
  /* 10a827d3 mov esi, esp */
  ESI = (ESP);
  /* 10a827d5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a827d7 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a827ddu);
  /* 10a827dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a827e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a827e2 call 0x10a83080 */
  push32(0x10a827e7u); f_10a83080();
  /* 10a827e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a827ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a827ee je 0x10a82875 */
  if (C.zf) goto L_10a82875;
  /* 10a827f4 push 0x10ab0430 */
  push32((uint32_t)(0x10ab0430u));
  /* 10a827f9 call 0x10a81005 */
  push32(0x10a827feu); f_10a81005();
  /* 10a827fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82801 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82804 jge 0x10a82875 */
  if ((C.sf==C.of)) goto L_10a82875;
  /* 10a82806 mov esi, esp */
  ESI = (ESP);
  /* 10a82808 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8280a push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a8280c call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a82812u);
  /* 10a82812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82815 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82817 call 0x10a83080 */
  push32(0x10a8281cu); f_10a83080();
  /* 10a8281c mov esi, esp */
  ESI = (ESP);
  /* 10a8281e push 3 */
  push32((uint32_t)(0x3u));
  /* 10a82820 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82822 call dword ptr [0x10ab3484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3484))), 0x10a82828u);
  /* 10a82828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8282b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8282d call 0x10a83080 */
  push32(0x10a82832u); f_10a83080();
  /* 10a82832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82834 jle 0x10a8284f */
  if ((C.zf||C.sf!=C.of)) goto L_10a8284f;
  /* 10a82836 mov esi, esp */
  ESI = (ESP);
  /* 10a82838 push 0x10aab180 */
  push32((uint32_t)(0x10aab180u));
  /* 10a8283d call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a82843u);
  /* 10a82843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82848 call 0x10a83080 */
  push32(0x10a8284du); f_10a83080();
  /* 10a8284d jmp 0x10a82866 */
  goto L_10a82866;
L_10a8284f:;
  /* 10a8284f mov esi, esp */
  ESI = (ESP);
  /* 10a82851 push 0x10aab174 */
  push32((uint32_t)(0x10aab174u));
  /* 10a82856 call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a8285cu);
  /* 10a8285c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8285f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82861 call 0x10a83080 */
  push32(0x10a82866u); f_10a83080();
L_10a82866:;
  /* 10a82866 mov esi, esp */
  ESI = (ESP);
  /* 10a82868 call dword ptr [0x10ab3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3488))), 0x10a8286eu);
  /* 10a8286e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82870 call 0x10a83080 */
  push32(0x10a82875u); f_10a83080();
L_10a82875:;
  /* 10a82875 mov esi, esp */
  ESI = (ESP);
  /* 10a82877 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a82879 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a8287fu);
  /* 10a8287f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82884 call 0x10a83080 */
  push32(0x10a82889u); f_10a83080();
  /* 10a82889 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8288e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a82890 je 0x10a828e0 */
  if (C.zf) goto L_10a828e0;
  /* 10a82892 push 0x10ab0438 */
  push32((uint32_t)(0x10ab0438u));
  /* 10a82897 call 0x10a81005 */
  push32(0x10a8289cu); f_10a81005();
  /* 10a8289c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8289f cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a828a2 jge 0x10a828e0 */
  if ((C.sf==C.of)) goto L_10a828e0;
  /* 10a828a4 mov esi, esp */
  ESI = (ESP);
  /* 10a828a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a828a8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a828aa call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a828b0u);
  /* 10a828b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a828b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a828b5 call 0x10a83080 */
  push32(0x10a828bau); f_10a83080();
  /* 10a828ba mov esi, esp */
  ESI = (ESP);
  /* 10a828bc push 0x10aab16c */
  push32((uint32_t)(0x10aab16cu));
  /* 10a828c1 call dword ptr [0x10ab343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab343c))), 0x10a828c7u);
  /* 10a828c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a828ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a828cc call 0x10a83080 */
  push32(0x10a828d1u); f_10a83080();
  /* 10a828d1 mov esi, esp */
  ESI = (ESP);
  /* 10a828d3 call dword ptr [0x10ab3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3488))), 0x10a828d9u);
  /* 10a828d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a828db call 0x10a83080 */
  push32(0x10a828e0u); f_10a83080();
L_10a828e0:;
  /* 10a828e0 mov esi, esp */
  ESI = (ESP);
  /* 10a828e2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a828e4 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a828eau);
  /* 10a828ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a828ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a828ef call 0x10a83080 */
  push32(0x10a828f4u); f_10a83080();
  /* 10a828f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a828f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a828fb je 0x10a82981 */
  if (C.zf) goto L_10a82981;
  /* 10a82901 mov esi, esp */
  ESI = (ESP);
  /* 10a82903 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a82909u);
  /* 10a82909 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8290b call 0x10a83080 */
  push32(0x10a82910u); f_10a83080();
  /* 10a82910 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82915 jle 0x10a82981 */
  if ((C.zf||C.sf!=C.of)) goto L_10a82981;
  /* 10a82917 mov esi, esp */
  ESI = (ESP);
  /* 10a82919 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8291b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a8291d call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a82923u);
  /* 10a82923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82926 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82928 call 0x10a83080 */
  push32(0x10a8292du); f_10a83080();
  /* 10a8292d mov esi, esp */
  ESI = (ESP);
  /* 10a8292f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82931 push 0x10ab04b0 */
  push32((uint32_t)(0x10ab04b0u));
  /* 10a82936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82938 push 0x10ab04a0 */
  push32((uint32_t)(0x10ab04a0u));
  /* 10a8293d push 0x10ab04e8 */
  push32((uint32_t)(0x10ab04e8u));
  /* 10a82942 push 0x10ab0510 */
  push32((uint32_t)(0x10ab0510u));
  /* 10a82947 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a8294du);
  /* 10a8294d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82950 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82952 call 0x10a83080 */
  push32(0x10a82957u); f_10a83080();
  /* 10a82957 mov esi, esp */
  ESI = (ESP);
  /* 10a82959 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8295b push 0x10ab04b0 */
  push32((uint32_t)(0x10ab04b0u));
  /* 10a82960 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82962 push 0x10ab0498 */
  push32((uint32_t)(0x10ab0498u));
  /* 10a82967 push 0x10ab0418 */
  push32((uint32_t)(0x10ab0418u));
  /* 10a8296c push 0x10ab0560 */
  push32((uint32_t)(0x10ab0560u));
  /* 10a82971 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82977u);
  /* 10a82977 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8297a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8297c call 0x10a83080 */
  push32(0x10a82981u); f_10a83080();
L_10a82981:;
  /* 10a82981 mov esi, esp */
  ESI = (ESP);
  /* 10a82983 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a82985 call dword ptr [0x10ab3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3424))), 0x10a8298bu);
  /* 10a8298b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8298e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82990 call 0x10a83080 */
  push32(0x10a82995u); f_10a83080();
  /* 10a82995 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8299a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8299c je 0x10a829f4 */
  if (C.zf) goto L_10a829f4;
  /* 10a8299e mov esi, esp */
  ESI = (ESP);
  /* 10a829a0 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a829a6u);
  /* 10a829a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a829a8 call 0x10a83080 */
  push32(0x10a829adu); f_10a83080();
  /* 10a829ad cmp eax, 0x88b8 */
  { uint32_t _a=(EAX),_b=(0x88b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a829b2 jle 0x10a829f4 */
  if ((C.zf||C.sf!=C.of)) goto L_10a829f4;
  /* 10a829b4 mov esi, esp */
  ESI = (ESP);
  /* 10a829b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a829b8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a829ba call dword ptr [0x10ab3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3420))), 0x10a829c0u);
  /* 10a829c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a829c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a829c5 call 0x10a83080 */
  push32(0x10a829cau); f_10a83080();
  /* 10a829ca mov esi, esp */
  ESI = (ESP);
  /* 10a829cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a829ce push 0x10ab04b0 */
  push32((uint32_t)(0x10ab04b0u));
  /* 10a829d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a829d5 push 0x10ab0498 */
  push32((uint32_t)(0x10ab0498u));
  /* 10a829da push 0x10ab0420 */
  push32((uint32_t)(0x10ab0420u));
  /* 10a829df push 0x10ab0518 */
  push32((uint32_t)(0x10ab0518u));
  /* 10a829e4 call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a829eau);
  /* 10a829ea add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a829ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a829ef call 0x10a83080 */
  push32(0x10a829f4u); f_10a83080();
L_10a829f4:;
  /* 10a829f4 mov esi, esp */
  ESI = (ESP);
  /* 10a829f6 call dword ptr [0x10ab3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3440))), 0x10a829fcu);
  /* 10a829fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a829fe call 0x10a83080 */
  push32(0x10a82a03u); f_10a83080();
  /* 10a82a03 mov ecx, dword ptr [0x10ab0400] */
  ECX = (r32((uint32_t)(0x10ab0400)));
  /* 10a82a09 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a82a0f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82a11 jle 0x10a82a5e */
  if ((C.zf||C.sf!=C.of)) goto L_10a82a5e;
  /* 10a82a13 cmp dword ptr [0x10ab0400], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0400))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82a1a jge 0x10a82a5e */
  if ((C.sf==C.of)) goto L_10a82a5e;
  /* 10a82a1c mov esi, esp */
  ESI = (ESP);
  /* 10a82a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a82a20 push 0x10ab04b0 */
  push32((uint32_t)(0x10ab04b0u));
  /* 10a82a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a82a27 push 0x10ab04a0 */
  push32((uint32_t)(0x10ab04a0u));
  /* 10a82a2c push 0x10ab04e8 */
  push32((uint32_t)(0x10ab04e8u));
  /* 10a82a31 mov edx, dword ptr [0x10ab0400] */
  EDX = (r32((uint32_t)(0x10ab0400)));
  /* 10a82a37 lea eax, [edx*8 + 0x10ab0580] */
  EAX = ((uint32_t)(EDX*8 + 0x10ab0580));
  /* 10a82a3e push eax */
  push32((uint32_t)(EAX));
  /* 10a82a3f call dword ptr [0x10ab3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3438))), 0x10a82a45u);
  /* 10a82a45 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82a48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82a4a call 0x10a83080 */
  push32(0x10a82a4fu); f_10a83080();
  /* 10a82a4f mov ecx, dword ptr [0x10ab0400] */
  ECX = (r32((uint32_t)(0x10ab0400)));
  /* 10a82a55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82a58 mov dword ptr [0x10ab0400], ecx */
  w32((uint32_t)(0x10ab0400), (ECX));
L_10a82a5e:;
  /* 10a82a5e pop edi */
  EDI = (pop32());
  /* 10a82a5f pop esi */
  ESI = (pop32());
  /* 10a82a60 pop ebx */
  EBX = (pop32());
  /* 10a82a61 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82a64 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82a66 call 0x10a83080 */
  push32(0x10a82a6bu); f_10a83080();
  /* 10a82a6b mov esp, ebp */
  ESP = (EBP);
  /* 10a82a6d pop ebp */
  EBP = (pop32());
  /* 10a82a6e ret  */
  ESPCHK(0x10a81840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f00 @ 0x10a82f00 (63 bytes, 26 insns) */
void f_10a82f00(void) {
  FTRACE(0x10a82f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a82f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a82f01 mov ebp, esp */
  EBP = (ESP);
  /* 10a82f03 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a82f06 push ebx */
  push32((uint32_t)(EBX));
  /* 10a82f07 push esi */
  push32((uint32_t)(ESI));
  /* 10a82f08 push edi */
  push32((uint32_t)(EDI));
  /* 10a82f09 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a82f0c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a82f11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a82f16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a82f18 mov esi, esp */
  ESI = (ESP);
  /* 10a82f1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a82f1d push eax */
  push32((uint32_t)(EAX));
  /* 10a82f1e call dword ptr [0x10ab3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3418))), 0x10a82f24u);
  /* 10a82f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82f27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82f29 call 0x10a83080 */
  push32(0x10a82f2eu); f_10a83080();
  /* 10a82f2e pop edi */
  EDI = (pop32());
  /* 10a82f2f pop esi */
  ESI = (pop32());
  /* 10a82f30 pop ebx */
  EBX = (pop32());
  /* 10a82f31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82f34 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82f36 call 0x10a83080 */
  push32(0x10a82f3bu); f_10a83080();
  /* 10a82f3b mov esp, ebp */
  ESP = (EBP);
  /* 10a82f3d pop ebp */
  EBP = (pop32());
  /* 10a82f3e ret  */
  ESPCHK(0x10a82f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f50 @ 0x10a82f50 (67 bytes, 28 insns) */
void f_10a82f50(void) {
  FTRACE(0x10a82f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a82f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a82f51 mov ebp, esp */
  EBP = (ESP);
  /* 10a82f53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a82f56 push ebx */
  push32((uint32_t)(EBX));
  /* 10a82f57 push esi */
  push32((uint32_t)(ESI));
  /* 10a82f58 push edi */
  push32((uint32_t)(EDI));
  /* 10a82f59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a82f5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a82f61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a82f66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a82f68 mov esi, esp */
  ESI = (ESP);
  /* 10a82f6a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10a82f6d push eax */
  push32((uint32_t)(EAX));
  /* 10a82f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a82f71 push ecx */
  push32((uint32_t)(ECX));
  /* 10a82f72 call dword ptr [0x10ab341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab341c))), 0x10a82f78u);
  /* 10a82f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82f7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82f7d call 0x10a83080 */
  push32(0x10a82f82u); f_10a83080();
  /* 10a82f82 pop edi */
  EDI = (pop32());
  /* 10a82f83 pop esi */
  ESI = (pop32());
  /* 10a82f84 pop ebx */
  EBX = (pop32());
  /* 10a82f85 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a82f88 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a82f8a call 0x10a83080 */
  push32(0x10a82f8fu); f_10a83080();
  /* 10a82f8f mov esp, ebp */
  ESP = (EBP);
  /* 10a82f91 pop ebp */
  EBP = (pop32());
  /* 10a82f92 ret  */
  ESPCHK(0x10a82f50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10a83080 (56 bytes, 28 insns) */
void f_10a83080(void) {
  FTRACE(0x10a83080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83080 jne 0x10a83083 */
  if (!C.zf) goto L_10a83083;
  /* 10a83082 ret  */
  ESPCHK(0x10a83080u, _esp0);
  ESP += 4; return;
L_10a83083:;
  /* 10a83083 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83084 mov ebp, esp */
  EBP = (ESP);
  /* 10a83086 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a83089 push eax */
  push32((uint32_t)(EAX));
  /* 10a8308a push edx */
  push32((uint32_t)(EDX));
  /* 10a8308b push ebx */
  push32((uint32_t)(EBX));
  /* 10a8308c push esi */
  push32((uint32_t)(ESI));
  /* 10a8308d push edi */
  push32((uint32_t)(EDI));
  /* 10a8308e push 0x10aab46c */
  push32((uint32_t)(0x10aab46cu));
  /* 10a83093 push 0x10aab468 */
  push32((uint32_t)(0x10aab468u));
  /* 10a83098 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a8309a push 0x10aab458 */
  push32((uint32_t)(0x10aab458u));
  /* 10a8309f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a830a1 call 0x10a83450 */
  push32(0x10a830a6u); f_10a83450();
  /* 10a830a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a830a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a830ac jne 0x10a830af */
  if (!C.zf) goto L_10a830af;
  /* 10a830ae int3  */
  x86_unimpl("int3 @ 0x10a830ae");
L_10a830af:;
  /* 10a830af pop edi */
  EDI = (pop32());
  /* 10a830b0 pop esi */
  ESI = (pop32());
  /* 10a830b1 pop ebx */
  EBX = (pop32());
  /* 10a830b2 pop edx */
  EDX = (pop32());
  /* 10a830b3 pop eax */
  EAX = (pop32());
  /* 10a830b4 mov esp, ebp */
  ESP = (EBP);
  /* 10a830b6 pop ebp */
  EBP = (pop32());
  /* 10a830b7 ret  */
  ESPCHK(0x10a83080u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c0 @ 0x10a830c0 (313 bytes, 78 insns) */
void f_10a830c0(void) {
  FTRACE(0x10a830c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a830c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a830c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a830c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a830c7 jne 0x10a83187 */
  if (!C.zf) goto L_10a83187;
  /* 10a830cd call dword ptr [0x10ab3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3324))), 0x10a830d3u);
  /* 10a830d3 mov dword ptr [0x10ab06b4], eax */
  w32((uint32_t)(0x10ab06b4), (EAX));
  /* 10a830d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a830da call 0x10a86b80 */
  push32(0x10a830dfu); f_10a86b80();
  /* 10a830df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a830e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a830e4 jne 0x10a830ed */
  if (!C.zf) goto L_10a830ed;
  /* 10a830e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a830e8 jmp 0x10a831f5 */
  goto L_10a831f5;
L_10a830ed:;
  /* 10a830ed mov eax, dword ptr [0x10ab06b4] */
  EAX = (r32((uint32_t)(0x10ab06b4)));
  /* 10a830f2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a830f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a830fa mov dword ptr [0x10ab06c0], eax */
  w32((uint32_t)(0x10ab06c0), (EAX));
  /* 10a830ff mov ecx, dword ptr [0x10ab06b4] */
  ECX = (r32((uint32_t)(0x10ab06b4)));
  /* 10a83105 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8310b mov dword ptr [0x10ab06bc], ecx */
  w32((uint32_t)(0x10ab06bc), (ECX));
  /* 10a83111 mov edx, dword ptr [0x10ab06bc] */
  EDX = (r32((uint32_t)(0x10ab06bc)));
  /* 10a83117 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a8311a add edx, dword ptr [0x10ab06c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ab06c0))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83120 mov dword ptr [0x10ab06b8], edx */
  w32((uint32_t)(0x10ab06b8), (EDX));
  /* 10a83126 mov eax, dword ptr [0x10ab06b4] */
  EAX = (r32((uint32_t)(0x10ab06b4)));
  /* 10a8312b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a8312e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a83133 mov dword ptr [0x10ab06b4], eax */
  w32((uint32_t)(0x10ab06b4), (EAX));
  /* 10a83138 call 0x10a83cf0 */
  push32(0x10a8313du); f_10a83cf0();
  /* 10a8313d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8313f jne 0x10a8314d */
  if (!C.zf) goto L_10a8314d;
  /* 10a83141 call 0x10a86bd0 */
  push32(0x10a83146u); f_10a86bd0();
  /* 10a83146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a83148 jmp 0x10a831f5 */
  goto L_10a831f5;
L_10a8314d:;
  /* 10a8314d call dword ptr [0x10ab3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3320))), 0x10a83153u);
  /* 10a83153 mov dword ptr [0x10ab21ec], eax */
  w32((uint32_t)(0x10ab21ec), (EAX));
  /* 10a83158 call 0x10a86960 */
  push32(0x10a8315du); f_10a86960();
  /* 10a8315d mov dword ptr [0x10ab069c], eax */
  w32((uint32_t)(0x10ab069c), (EAX));
  /* 10a83162 call 0x10a83fa0 */
  push32(0x10a83167u); f_10a83fa0();
  /* 10a83167 call 0x10a86450 */
  push32(0x10a8316cu); f_10a86450();
  /* 10a8316c call 0x10a86300 */
  push32(0x10a83171u); f_10a86300();
  /* 10a83171 call 0x10a83af0 */
  push32(0x10a83176u); f_10a83af0();
  /* 10a83176 mov ecx, dword ptr [0x10ab0698] */
  ECX = (r32((uint32_t)(0x10ab0698)));
  /* 10a8317c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8317f mov dword ptr [0x10ab0698], ecx */
  w32((uint32_t)(0x10ab0698), (ECX));
  /* 10a83185 jmp 0x10a831f0 */
  goto L_10a831f0;
L_10a83187:;
  /* 10a83187 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8318b jne 0x10a831e0 */
  if (!C.zf) goto L_10a831e0;
  /* 10a8318d cmp dword ptr [0x10ab0698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83194 jle 0x10a831da */
  if ((C.zf||C.sf!=C.of)) goto L_10a831da;
  /* 10a83196 mov edx, dword ptr [0x10ab0698] */
  EDX = (r32((uint32_t)(0x10ab0698)));
  /* 10a8319c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8319f mov dword ptr [0x10ab0698], edx */
  w32((uint32_t)(0x10ab0698), (EDX));
  /* 10a831a5 cmp dword ptr [0x10ab06ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a831ac jne 0x10a831b3 */
  if (!C.zf) goto L_10a831b3;
  /* 10a831ae call 0x10a83b70 */
  push32(0x10a831b3u); f_10a83b70();
L_10a831b3:;
  /* 10a831b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a831b5 call 0x10a858a0 */
  push32(0x10a831bau); f_10a858a0();
  /* 10a831ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a831bd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a831c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a831c2 je 0x10a831c9 */
  if (C.zf) goto L_10a831c9;
  /* 10a831c4 call 0x10a861b0 */
  push32(0x10a831c9u); f_10a861b0();
L_10a831c9:;
  /* 10a831c9 call 0x10a842d0 */
  push32(0x10a831ceu); f_10a842d0();
  /* 10a831ce call 0x10a83d80 */
  push32(0x10a831d3u); f_10a83d80();
  /* 10a831d3 call 0x10a86bd0 */
  push32(0x10a831d8u); f_10a86bd0();
  /* 10a831d8 jmp 0x10a831de */
  goto L_10a831de;
L_10a831da:;
  /* 10a831da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a831dc jmp 0x10a831f5 */
  goto L_10a831f5;
L_10a831de:;
  /* 10a831de jmp 0x10a831f0 */
  goto L_10a831f0;
L_10a831e0:;
  /* 10a831e0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a831e4 jne 0x10a831f0 */
  if (!C.zf) goto L_10a831f0;
  /* 10a831e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a831e8 call 0x10a83e70 */
  push32(0x10a831edu); f_10a83e70();
  /* 10a831ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a831f0:;
  /* 10a831f0 mov eax, 1 */
  EAX = (0x1u);
L_10a831f5:;
  /* 10a831f5 pop ebp */
  EBP = (pop32());
  /* 10a831f6 ret 0xc */
  ESPCHK(0x10a830c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10a83200 (243 bytes, 86 insns) */
void f_10a83200(void) {
  FTRACE(0x10a83200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83200 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83201 mov ebp, esp */
  EBP = (ESP);
  /* 10a83203 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83204 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8320b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8320f jne 0x10a83221 */
  if (!C.zf) goto L_10a83221;
  /* 10a83211 cmp dword ptr [0x10ab0698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83218 jne 0x10a83221 */
  if (!C.zf) goto L_10a83221;
  /* 10a8321a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8321c jmp 0x10a832ed */
  goto L_10a832ed;
L_10a83221:;
  /* 10a83221 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83225 je 0x10a8322d */
  if (C.zf) goto L_10a8322d;
  /* 10a83227 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8322b jne 0x10a8326f */
  if (!C.zf) goto L_10a8326f;
L_10a8322d:;
  /* 10a8322d cmp dword ptr [0x10ab21fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83234 je 0x10a8324b */
  if (C.zf) goto L_10a8324b;
  /* 10a83236 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a83239 push eax */
  push32((uint32_t)(EAX));
  /* 10a8323a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8323d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8323e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83241 push edx */
  push32((uint32_t)(EDX));
  /* 10a83242 call dword ptr [0x10ab21fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab21fc))), 0x10a83248u);
  /* 10a83248 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8324b:;
  /* 10a8324b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8324f je 0x10a83265 */
  if (C.zf) goto L_10a83265;
  /* 10a83251 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a83254 push eax */
  push32((uint32_t)(EAX));
  /* 10a83255 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a83258 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8325c push edx */
  push32((uint32_t)(EDX));
  /* 10a8325d call 0x10a830c0 */
  push32(0x10a83262u); f_10a830c0();
  /* 10a83262 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a83265:;
  /* 10a83265 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83269 jne 0x10a8326f */
  if (!C.zf) goto L_10a8326f;
  /* 10a8326b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8326d jmp 0x10a832ed */
  goto L_10a832ed;
L_10a8326f:;
  /* 10a8326f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a83272 push eax */
  push32((uint32_t)(EAX));
  /* 10a83273 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a83276 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8327a push edx */
  push32((uint32_t)(EDX));
  /* 10a8327b call 0x10a81014 */
  push32(0x10a83280u); f_10a81014();
  /* 10a83280 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83283 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83287 jne 0x10a8329e */
  if (!C.zf) goto L_10a8329e;
  /* 10a83289 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8328d jne 0x10a8329e */
  if (!C.zf) goto L_10a8329e;
  /* 10a8328f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a83292 push eax */
  push32((uint32_t)(EAX));
  /* 10a83293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83298 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83299 call 0x10a830c0 */
  push32(0x10a8329eu); f_10a830c0();
L_10a8329e:;
  /* 10a8329e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a832a2 je 0x10a832aa */
  if (C.zf) goto L_10a832aa;
  /* 10a832a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a832a8 jne 0x10a832ea */
  if (!C.zf) goto L_10a832ea;
L_10a832aa:;
  /* 10a832aa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a832ad push edx */
  push32((uint32_t)(EDX));
  /* 10a832ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a832b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a832b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a832b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a832b6 call 0x10a830c0 */
  push32(0x10a832bbu); f_10a830c0();
  /* 10a832bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a832bd jne 0x10a832c6 */
  if (!C.zf) goto L_10a832c6;
  /* 10a832bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a832c6:;
  /* 10a832c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a832ca je 0x10a832ea */
  if (C.zf) goto L_10a832ea;
  /* 10a832cc cmp dword ptr [0x10ab21fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a832d3 je 0x10a832ea */
  if (C.zf) goto L_10a832ea;
  /* 10a832d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a832d8 push edx */
  push32((uint32_t)(EDX));
  /* 10a832d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a832dc push eax */
  push32((uint32_t)(EAX));
  /* 10a832dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a832e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a832e1 call dword ptr [0x10ab21fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab21fc))), 0x10a832e7u);
  /* 10a832e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a832ea:;
  /* 10a832ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a832ed:;
  /* 10a832ed mov esp, ebp */
  ESP = (EBP);
  /* 10a832ef pop ebp */
  EBP = (pop32());
  /* 10a832f0 ret 0xc */
  ESPCHK(0x10a83200u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10a83300 (58 bytes, 18 insns) */
void f_10a83300(void) {
  FTRACE(0x10a83300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83300 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83301 mov ebp, esp */
  EBP = (ESP);
  /* 10a83303 cmp dword ptr [0x10ab06a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8330a je 0x10a8331e */
  if (C.zf) goto L_10a8331e;
  /* 10a8330c cmp dword ptr [0x10ab06a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83313 jne 0x10a83323 */
  if (!C.zf) goto L_10a83323;
  /* 10a83315 cmp dword ptr [0x10ab06a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8331c jne 0x10a83323 */
  if (!C.zf) goto L_10a83323;
L_10a8331e:;
  /* 10a8331e call 0x10a86c70 */
  push32(0x10a83323u); f_10a86c70();
L_10a83323:;
  /* 10a83323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83326 push eax */
  push32((uint32_t)(EAX));
  /* 10a83327 call 0x10a86cc0 */
  push32(0x10a8332cu); f_10a86cc0();
  /* 10a8332c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8332f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a83334 call dword ptr [0x10aaea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaea30))), 0x10a8333au);
  /* 10a8333a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8333d pop ebp */
  EBP = (pop32());
  /* 10a8333e ret  */
  ESPCHK(0x10a83300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x10a83340 (11 bytes, 5 insns) */
void f_10a83340(void) {
  FTRACE(0x10a83340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83340 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83341 mov ebp, esp */
  EBP = (ESP);
  /* 10a83343 call dword ptr [0x10ab3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3328))), 0x10a83349u);
  /* 10a83349 pop ebp */
  EBP = (pop32());
  /* 10a8334a ret  */
  ESPCHK(0x10a83340u, _esp0);
  ESP += 4; return;
}

/* FUN_10003350 @ 0x10a83350 (87 bytes, 30 insns) */
void f_10a83350(void) {
  FTRACE(0x10a83350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83350 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83351 mov ebp, esp */
  EBP = (ESP);
  /* 10a83353 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83354 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83358 jl 0x10a83360 */
  if ((C.sf!=C.of)) goto L_10a83360;
  /* 10a8335a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8335e jl 0x10a83365 */
  if ((C.sf!=C.of)) goto L_10a83365;
L_10a83360:;
  /* 10a83360 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a83363 jmp 0x10a833a3 */
  goto L_10a833a3;
L_10a83365:;
  /* 10a83365 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83369 jne 0x10a83377 */
  if (!C.zf) goto L_10a83377;
  /* 10a8336b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8336e mov eax, dword ptr [eax*4 + 0x10aaea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10aaea38)));
  /* 10a83375 jmp 0x10a833a3 */
  goto L_10a833a3;
L_10a83377:;
  /* 10a83377 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8337a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8337d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8337f je 0x10a83386 */
  if (C.zf) goto L_10a83386;
  /* 10a83381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a83384 jmp 0x10a833a3 */
  goto L_10a833a3;
L_10a83386:;
  /* 10a83386 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83389 mov eax, dword ptr [edx*4 + 0x10aaea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aaea38)));
  /* 10a83390 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a83399 mov dword ptr [ecx*4 + 0x10aaea38], edx */
  w32((uint32_t)(ECX*4 + 0x10aaea38), (EDX));
  /* 10a833a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a833a3:;
  /* 10a833a3 mov esp, ebp */
  ESP = (EBP);
  /* 10a833a5 pop ebp */
  EBP = (pop32());
  /* 10a833a6 ret  */
  ESPCHK(0x10a83350u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10a833b0 (126 bytes, 38 insns) */
void f_10a833b0(void) {
  FTRACE(0x10a833b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a833b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a833b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a833b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a833b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a833b8 jl 0x10a833c0 */
  if ((C.sf!=C.of)) goto L_10a833c0;
  /* 10a833ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a833be jl 0x10a833c7 */
  if ((C.sf!=C.of)) goto L_10a833c7;
L_10a833c0:;
  /* 10a833c0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10a833c5 jmp 0x10a8342a */
  goto L_10a8342a;
L_10a833c7:;
  /* 10a833c7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a833cb jne 0x10a833d9 */
  if (!C.zf) goto L_10a833d9;
  /* 10a833cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a833d0 mov eax, dword ptr [eax*4 + 0x10aaea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10aaea44)));
  /* 10a833d7 jmp 0x10a8342a */
  goto L_10a8342a;
L_10a833d9:;
  /* 10a833d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a833dc mov edx, dword ptr [ecx*4 + 0x10aaea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea44)));
  /* 10a833e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a833e6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a833ea jne 0x10a83400 */
  if (!C.zf) goto L_10a83400;
  /* 10a833ec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a833ee call dword ptr [0x10ab332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab332c))), 0x10a833f4u);
  /* 10a833f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a833f7 mov dword ptr [ecx*4 + 0x10aaea44], eax */
  w32((uint32_t)(ECX*4 + 0x10aaea44), (EAX));
  /* 10a833fe jmp 0x10a83427 */
  goto L_10a83427;
L_10a83400:;
  /* 10a83400 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83404 jne 0x10a8341a */
  if (!C.zf) goto L_10a8341a;
  /* 10a83406 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a83408 call dword ptr [0x10ab332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab332c))), 0x10a8340eu);
  /* 10a8340e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83411 mov dword ptr [edx*4 + 0x10aaea44], eax */
  w32((uint32_t)(EDX*4 + 0x10aaea44), (EAX));
  /* 10a83418 jmp 0x10a83427 */
  goto L_10a83427;
L_10a8341a:;
  /* 10a8341a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8341d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a83420 mov dword ptr [eax*4 + 0x10aaea44], ecx */
  w32((uint32_t)(EAX*4 + 0x10aaea44), (ECX));
L_10a83427:;
  /* 10a83427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8342a:;
  /* 10a8342a mov esp, ebp */
  ESP = (EBP);
  /* 10a8342c pop ebp */
  EBP = (pop32());
  /* 10a8342d ret  */
  ESPCHK(0x10a833b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003430 @ 0x10a83430 (28 bytes, 11 insns) */
void f_10a83430(void) {
  FTRACE(0x10a83430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83431 mov ebp, esp */
  EBP = (ESP);
  /* 10a83433 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83434 mov eax, dword ptr [0x10ab21e0] */
  EAX = (r32((uint32_t)(0x10ab21e0)));
  /* 10a83439 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8343c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8343f mov dword ptr [0x10ab21e0], ecx */
  w32((uint32_t)(0x10ab21e0), (ECX));
  /* 10a83445 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83448 mov esp, ebp */
  ESP = (EBP);
  /* 10a8344a pop ebp */
  EBP = (pop32());
  /* 10a8344b ret  */
  ESPCHK(0x10a83430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003450 @ 0x10a83450 (912 bytes, 248 insns) */
void f_10a83450(void) {
  FTRACE(0x10a83450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83450 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83451 mov ebp, esp */
  EBP = (ESP);
  /* 10a83453 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10a83458 call 0x10a87530 */
  push32(0x10a8345du); f_10a87530();
  /* 10a8345d push edi */
  push32((uint32_t)(EDI));
  /* 10a8345e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10a83465 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a8346a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8346c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10a83472 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a83474 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a83476 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a83477 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10a8347e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a83483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a83485 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10a8348b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a8348d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a8348f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a83490 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10a83497 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a8349c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8349e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10a834a4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a834a6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a834a8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a834a9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10a834ac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10a834b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a834b6 jl 0x10a834be */
  if ((C.sf!=C.of)) goto L_10a834be;
  /* 10a834b8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a834bc jl 0x10a834c6 */
  if ((C.sf!=C.of)) goto L_10a834c6;
L_10a834be:;
  /* 10a834be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a834c1 jmp 0x10a837db */
  goto L_10a837db;
L_10a834c6:;
  /* 10a834c6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a834ca jne 0x10a83570 */
  if (!C.zf) goto L_10a83570;
  /* 10a834d0 push 0x10aaea34 */
  push32((uint32_t)(0x10aaea34u));
  /* 10a834d5 call dword ptr [0x10ab3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3344))), 0x10a834dbu);
  /* 10a834db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a834dd jle 0x10a83570 */
  if ((C.zf||C.sf!=C.of)) goto L_10a83570;
  /* 10a834e3 cmp dword ptr [0x10ab06ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a834ea jne 0x10a8352e */
  if (!C.zf) goto L_10a8352e;
  /* 10a834ec push 0x10aab614 */
  push32((uint32_t)(0x10aab614u));
  /* 10a834f1 call dword ptr [0x10ab3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3340))), 0x10a834f7u);
  /* 10a834f7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10a834fd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83504 je 0x10a83526 */
  if (C.zf) goto L_10a83526;
  /* 10a83506 push 0x10aab608 */
  push32((uint32_t)(0x10aab608u));
  /* 10a8350b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10a83511 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83512 call dword ptr [0x10ab333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab333c))), 0x10a83518u);
  /* 10a83518 mov dword ptr [0x10ab06ac], eax */
  w32((uint32_t)(0x10ab06ac), (EAX));
  /* 10a8351d cmp dword ptr [0x10ab06ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83524 jne 0x10a8352e */
  if (!C.zf) goto L_10a8352e;
L_10a83526:;
  /* 10a83526 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a83529 jmp 0x10a837db */
  goto L_10a837db;
L_10a8352e:;
  /* 10a8352e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a83531 push edx */
  push32((uint32_t)(EDX));
  /* 10a83532 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a83535 push eax */
  push32((uint32_t)(EAX));
  /* 10a83536 push 0x10aab5d4 */
  push32((uint32_t)(0x10aab5d4u));
  /* 10a8353b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10a83541 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83542 call dword ptr [0x10ab06ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab06ac))), 0x10a83548u);
  /* 10a83548 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8354b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a83551 push edx */
  push32((uint32_t)(EDX));
  /* 10a83552 call dword ptr [0x10ab3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3338))), 0x10a83558u);
  /* 10a83558 push 0x10aaea34 */
  push32((uint32_t)(0x10aaea34u));
  /* 10a8355d call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a83563u);
  /* 10a83563 call 0x10a83340 */
  push32(0x10a83568u); f_10a83340();
  /* 10a83568 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8356b jmp 0x10a837db */
  goto L_10a837db;
L_10a83570:;
  /* 10a83570 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83574 je 0x10a835ad */
  if (C.zf) goto L_10a835ad;
  /* 10a83576 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10a8357c push eax */
  push32((uint32_t)(EAX));
  /* 10a8357d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a83580 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83581 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10a83586 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10a8358c push edx */
  push32((uint32_t)(EDX));
  /* 10a8358d call 0x10a87430 */
  push32(0x10a83592u); f_10a87430();
  /* 10a83592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83597 jge 0x10a835ad */
  if ((C.sf==C.of)) goto L_10a835ad;
  /* 10a83599 push 0x10aab5a8 */
  push32((uint32_t)(0x10aab5a8u));
  /* 10a8359e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10a835a4 push eax */
  push32((uint32_t)(EAX));
  /* 10a835a5 call 0x10a87340 */
  push32(0x10a835aau); f_10a87340();
  /* 10a835aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a835ad:;
  /* 10a835ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a835b1 jne 0x10a835e5 */
  if (!C.zf) goto L_10a835e5;
  /* 10a835b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a835b7 je 0x10a835c5 */
  if (C.zf) goto L_10a835c5;
  /* 10a835b9 mov dword ptr [ebp - 0x3028], 0x10aab594 */
  w32((uint32_t)(EBP + -0x3028), (0x10aab594u));
  /* 10a835c3 jmp 0x10a835cf */
  goto L_10a835cf;
L_10a835c5:;
  /* 10a835c5 mov dword ptr [ebp - 0x3028], 0x10aab580 */
  w32((uint32_t)(EBP + -0x3028), (0x10aab580u));
L_10a835cf:;
  /* 10a835cf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10a835d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a835d6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a835dc push edx */
  push32((uint32_t)(EDX));
  /* 10a835dd call 0x10a87340 */
  push32(0x10a835e2u); f_10a87340();
  /* 10a835e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a835e5:;
  /* 10a835e5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10a835eb push eax */
  push32((uint32_t)(EAX));
  /* 10a835ec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10a835f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a835f3 call 0x10a87350 */
  push32(0x10a835f8u); f_10a87350();
  /* 10a835f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a835fb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a835ff jne 0x10a8363a */
  if (!C.zf) goto L_10a8363a;
  /* 10a83601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83604 mov eax, dword ptr [edx*4 + 0x10aaea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aaea38)));
  /* 10a8360b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8360e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83610 je 0x10a83626 */
  if (C.zf) goto L_10a83626;
  /* 10a83612 push 0x10aab57c */
  push32((uint32_t)(0x10aab57cu));
  /* 10a83617 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10a8361d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8361e call 0x10a87350 */
  push32(0x10a83623u); f_10a87350();
  /* 10a83623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83626:;
  /* 10a83626 push 0x10aab578 */
  push32((uint32_t)(0x10aab578u));
  /* 10a8362b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a83631 push edx */
  push32((uint32_t)(EDX));
  /* 10a83632 call 0x10a87350 */
  push32(0x10a83637u); f_10a87350();
  /* 10a83637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8363a:;
  /* 10a8363a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8363e je 0x10a83682 */
  if (C.zf) goto L_10a83682;
  /* 10a83640 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10a83646 push eax */
  push32((uint32_t)(EAX));
  /* 10a83647 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8364a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8364b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8364e push edx */
  push32((uint32_t)(EDX));
  /* 10a8364f push 0x10aab56c */
  push32((uint32_t)(0x10aab56cu));
  /* 10a83654 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a83659 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a8365f push eax */
  push32((uint32_t)(EAX));
  /* 10a83660 call 0x10a87240 */
  push32(0x10a83665u); f_10a87240();
  /* 10a83665 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8366a jge 0x10a83680 */
  if ((C.sf==C.of)) goto L_10a83680;
  /* 10a8366c push 0x10aab5a8 */
  push32((uint32_t)(0x10aab5a8u));
  /* 10a83671 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10a83677 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83678 call 0x10a87340 */
  push32(0x10a8367du); f_10a87340();
  /* 10a8367d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83680:;
  /* 10a83680 jmp 0x10a83698 */
  goto L_10a83698;
L_10a83682:;
  /* 10a83682 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a83688 push edx */
  push32((uint32_t)(EDX));
  /* 10a83689 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a8368f push eax */
  push32((uint32_t)(EAX));
  /* 10a83690 call 0x10a87340 */
  push32(0x10a83695u); f_10a87340();
  /* 10a83695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83698:;
  /* 10a83698 cmp dword ptr [0x10ab21e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8369f je 0x10a836dc */
  if (C.zf) goto L_10a836dc;
  /* 10a836a1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10a836a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a836a8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a836ae push edx */
  push32((uint32_t)(EDX));
  /* 10a836af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a836b2 push eax */
  push32((uint32_t)(EAX));
  /* 10a836b3 call dword ptr [0x10ab21e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab21e0))), 0x10a836b9u);
  /* 10a836b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a836bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a836be je 0x10a836dc */
  if (C.zf) goto L_10a836dc;
  /* 10a836c0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a836c4 jne 0x10a836d1 */
  if (!C.zf) goto L_10a836d1;
  /* 10a836c6 push 0x10aaea34 */
  push32((uint32_t)(0x10aaea34u));
  /* 10a836cb call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a836d1u);
L_10a836d1:;
  /* 10a836d1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10a836d7 jmp 0x10a837db */
  goto L_10a837db;
L_10a836dc:;
  /* 10a836dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a836df mov edx, dword ptr [ecx*4 + 0x10aaea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea38)));
  /* 10a836e6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a836e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a836eb je 0x10a8372b */
  if (C.zf) goto L_10a8372b;
  /* 10a836ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a836f0 cmp dword ptr [eax*4 + 0x10aaea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10aaea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a836f8 je 0x10a8372b */
  if (C.zf) goto L_10a8372b;
  /* 10a836fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a836fc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10a83702 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83703 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a83709 push edx */
  push32((uint32_t)(EDX));
  /* 10a8370a call 0x10a871c0 */
  push32(0x10a8370fu); f_10a871c0();
  /* 10a8370f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83712 push eax */
  push32((uint32_t)(EAX));
  /* 10a83713 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a83719 push eax */
  push32((uint32_t)(EAX));
  /* 10a8371a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8371d mov edx, dword ptr [ecx*4 + 0x10aaea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea44)));
  /* 10a83724 push edx */
  push32((uint32_t)(EDX));
  /* 10a83725 call dword ptr [0x10ab3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3330))), 0x10a8372bu);
L_10a8372b:;
  /* 10a8372b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8372e mov ecx, dword ptr [eax*4 + 0x10aaea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aaea38)));
  /* 10a83735 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a83738 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8373a je 0x10a83749 */
  if (C.zf) goto L_10a83749;
  /* 10a8373c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a83742 push edx */
  push32((uint32_t)(EDX));
  /* 10a83743 call dword ptr [0x10ab3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3338))), 0x10a83749u);
L_10a83749:;
  /* 10a83749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8374c mov ecx, dword ptr [eax*4 + 0x10aaea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aaea38)));
  /* 10a83753 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a83756 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a83758 je 0x10a837c8 */
  if (C.zf) goto L_10a837c8;
  /* 10a8375a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8375e je 0x10a8377d */
  if (C.zf) goto L_10a8377d;
  /* 10a83760 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a83762 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10a83768 push edx */
  push32((uint32_t)(EDX));
  /* 10a83769 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8376c push eax */
  push32((uint32_t)(EAX));
  /* 10a8376d call 0x10a86ed0 */
  push32(0x10a83772u); f_10a86ed0();
  /* 10a83772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83775 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10a8377b jmp 0x10a83787 */
  goto L_10a83787;
L_10a8377d:;
  /* 10a8377d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10a83787:;
  /* 10a83787 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10a8378d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8378e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a83791 push edx */
  push32((uint32_t)(EDX));
  /* 10a83792 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10a83798 push eax */
  push32((uint32_t)(EAX));
  /* 10a83799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8379c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8379d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a837a0 push edx */
  push32((uint32_t)(EDX));
  /* 10a837a1 call 0x10a837e0 */
  push32(0x10a837a6u); f_10a837e0();
  /* 10a837a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a837a9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10a837af cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a837b3 jne 0x10a837c0 */
  if (!C.zf) goto L_10a837c0;
  /* 10a837b5 push 0x10aaea34 */
  push32((uint32_t)(0x10aaea34u));
  /* 10a837ba call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a837c0u);
L_10a837c0:;
  /* 10a837c0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10a837c6 jmp 0x10a837db */
  goto L_10a837db;
L_10a837c8:;
  /* 10a837c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a837cc jne 0x10a837d9 */
  if (!C.zf) goto L_10a837d9;
  /* 10a837ce push 0x10aaea34 */
  push32((uint32_t)(0x10aaea34u));
  /* 10a837d3 call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a837d9u);
L_10a837d9:;
  /* 10a837d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a837db:;
  /* 10a837db pop edi */
  EDI = (pop32());
  /* 10a837dc mov esp, ebp */
  ESP = (EBP);
  /* 10a837de pop ebp */
  EBP = (pop32());
  /* 10a837df ret  */
  ESPCHK(0x10a83450u, _esp0);
  ESP += 4; return;
}

/* FUN_100037e0 @ 0x10a837e0 (780 bytes, 197 insns) */
void f_10a837e0(void) {
  FTRACE(0x10a837e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a837e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a837e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a837e3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10a837e8 call 0x10a87530 */
  push32(0x10a837edu); f_10a87530();
L_10a837ed:;
  /* 10a837ed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a837f1 jne 0x10a83818 */
  if (!C.zf) goto L_10a83818;
  /* 10a837f3 push 0x10aab764 */
  push32((uint32_t)(0x10aab764u));
  /* 10a837f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a837fa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10a837ff push 0x10aab758 */
  push32((uint32_t)(0x10aab758u));
  /* 10a83804 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83806 call 0x10a83450 */
  push32(0x10a8380bu); f_10a83450();
  /* 10a8380b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8380e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83811 jne 0x10a83818 */
  if (!C.zf) goto L_10a83818;
  /* 10a83813 call 0x10a83340 */
  push32(0x10a83818u); f_10a83340();
L_10a83818:;
  /* 10a83818 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8381a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8381c jne 0x10a837ed */
  if (!C.zf) goto L_10a837ed;
  /* 10a8381e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a83823 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10a83829 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8382a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8382c call dword ptr [0x10ab3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3348))), 0x10a83832u);
  /* 10a83832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83834 jne 0x10a8384a */
  if (!C.zf) goto L_10a8384a;
  /* 10a83836 push 0x10aab740 */
  push32((uint32_t)(0x10aab740u));
  /* 10a8383b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10a83841 push edx */
  push32((uint32_t)(EDX));
  /* 10a83842 call 0x10a87340 */
  push32(0x10a83847u); f_10a87340();
  /* 10a83847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8384a:;
  /* 10a8384a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10a83850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83856 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83857 call 0x10a871c0 */
  push32(0x10a8385cu); f_10a871c0();
  /* 10a8385c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8385f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83862 jbe 0x10a8388d */
  if ((C.cf||C.zf)) goto L_10a8388d;
  /* 10a83864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83867 push edx */
  push32((uint32_t)(EDX));
  /* 10a83868 call 0x10a871c0 */
  push32(0x10a8386du); f_10a871c0();
  /* 10a8386d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83870 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83873 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10a83877 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8387a push 3 */
  push32((uint32_t)(0x3u));
  /* 10a8387c push 0x10aab73c */
  push32((uint32_t)(0x10aab73cu));
  /* 10a83881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83884 push eax */
  push32((uint32_t)(EAX));
  /* 10a83885 call 0x10a87bb0 */
  push32(0x10a8388au); f_10a87bb0();
  /* 10a8388a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8388d:;
  /* 10a8388d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a83890 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10a83896 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8389d je 0x10a838e8 */
  if (C.zf) goto L_10a838e8;
  /* 10a8389f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a838a5 push edx */
  push32((uint32_t)(EDX));
  /* 10a838a6 call 0x10a871c0 */
  push32(0x10a838abu); f_10a871c0();
  /* 10a838ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a838ae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a838b1 jbe 0x10a838e8 */
  if ((C.cf||C.zf)) goto L_10a838e8;
  /* 10a838b3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a838b9 push eax */
  push32((uint32_t)(EAX));
  /* 10a838ba call 0x10a871c0 */
  push32(0x10a838bfu); f_10a871c0();
  /* 10a838bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a838c2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a838c8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10a838cc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10a838d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a838d4 push 0x10aab73c */
  push32((uint32_t)(0x10aab73cu));
  /* 10a838d9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a838df push eax */
  push32((uint32_t)(EAX));
  /* 10a838e0 call 0x10a87bb0 */
  push32(0x10a838e5u); f_10a87bb0();
  /* 10a838e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a838e8:;
  /* 10a838e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a838ec jne 0x10a838fa */
  if (!C.zf) goto L_10a838fa;
  /* 10a838ee mov dword ptr [ebp - 0x1114], 0x10aab6c8 */
  w32((uint32_t)(EBP + -0x1114), (0x10aab6c8u));
  /* 10a838f8 jmp 0x10a83904 */
  goto L_10a83904;
L_10a838fa:;
  /* 10a838fa mov dword ptr [ebp - 0x1114], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1114), (0x10aab468u));
L_10a83904:;
  /* 10a83904 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a83907 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8390a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8390c je 0x10a83919 */
  if (C.zf) goto L_10a83919;
  /* 10a8390e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a83911 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10a83917 jmp 0x10a83923 */
  goto L_10a83923;
L_10a83919:;
  /* 10a83919 mov dword ptr [ebp - 0x1118], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1118), (0x10aab468u));
L_10a83923:;
  /* 10a83923 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a83926 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a83929 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8392b je 0x10a8393f */
  if (C.zf) goto L_10a8393f;
  /* 10a8392d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83931 jne 0x10a8393f */
  if (!C.zf) goto L_10a8393f;
  /* 10a83933 mov dword ptr [ebp - 0x111c], 0x10aab6b8 */
  w32((uint32_t)(EBP + -0x111c), (0x10aab6b8u));
  /* 10a8393d jmp 0x10a83949 */
  goto L_10a83949;
L_10a8393f:;
  /* 10a8393f mov dword ptr [ebp - 0x111c], 0x10aab468 */
  w32((uint32_t)(EBP + -0x111c), (0x10aab468u));
L_10a83949:;
  /* 10a83949 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8394c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8394f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a83951 je 0x10a8395f */
  if (C.zf) goto L_10a8395f;
  /* 10a83953 mov dword ptr [ebp - 0x1120], 0x10aab6b4 */
  w32((uint32_t)(EBP + -0x1120), (0x10aab6b4u));
  /* 10a8395d jmp 0x10a83969 */
  goto L_10a83969;
L_10a8395f:;
  /* 10a8395f mov dword ptr [ebp - 0x1120], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1120), (0x10aab468u));
L_10a83969:;
  /* 10a83969 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8396d je 0x10a8397a */
  if (C.zf) goto L_10a8397a;
  /* 10a8396f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a83972 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10a83978 jmp 0x10a83984 */
  goto L_10a83984;
L_10a8397a:;
  /* 10a8397a mov dword ptr [ebp - 0x1124], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1124), (0x10aab468u));
L_10a83984:;
  /* 10a83984 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83988 je 0x10a83996 */
  if (C.zf) goto L_10a83996;
  /* 10a8398a mov dword ptr [ebp - 0x1128], 0x10aab6ac */
  w32((uint32_t)(EBP + -0x1128), (0x10aab6acu));
  /* 10a83994 jmp 0x10a839a0 */
  goto L_10a839a0;
L_10a83996:;
  /* 10a83996 mov dword ptr [ebp - 0x1128], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1128), (0x10aab468u));
L_10a839a0:;
  /* 10a839a0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a839a4 je 0x10a839b1 */
  if (C.zf) goto L_10a839b1;
  /* 10a839a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a839a9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10a839af jmp 0x10a839bb */
  goto L_10a839bb;
L_10a839b1:;
  /* 10a839b1 mov dword ptr [ebp - 0x112c], 0x10aab468 */
  w32((uint32_t)(EBP + -0x112c), (0x10aab468u));
L_10a839bb:;
  /* 10a839bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a839bf je 0x10a839cd */
  if (C.zf) goto L_10a839cd;
  /* 10a839c1 mov dword ptr [ebp - 0x1130], 0x10aab6a4 */
  w32((uint32_t)(EBP + -0x1130), (0x10aab6a4u));
  /* 10a839cb jmp 0x10a839d7 */
  goto L_10a839d7;
L_10a839cd:;
  /* 10a839cd mov dword ptr [ebp - 0x1130], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1130), (0x10aab468u));
L_10a839d7:;
  /* 10a839d7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a839de je 0x10a839ee */
  if (C.zf) goto L_10a839ee;
  /* 10a839e0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a839e6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10a839ec jmp 0x10a839f8 */
  goto L_10a839f8;
L_10a839ee:;
  /* 10a839ee mov dword ptr [ebp - 0x1134], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1134), (0x10aab468u));
L_10a839f8:;
  /* 10a839f8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a839ff je 0x10a83a0d */
  if (C.zf) goto L_10a83a0d;
  /* 10a83a01 mov dword ptr [ebp - 0x1138], 0x10aab698 */
  w32((uint32_t)(EBP + -0x1138), (0x10aab698u));
  /* 10a83a0b jmp 0x10a83a17 */
  goto L_10a83a17;
L_10a83a0d:;
  /* 10a83a0d mov dword ptr [ebp - 0x1138], 0x10aab468 */
  w32((uint32_t)(EBP + -0x1138), (0x10aab468u));
L_10a83a17:;
  /* 10a83a17 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10a83a1d push edx */
  push32((uint32_t)(EDX));
  /* 10a83a1e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10a83a24 push eax */
  push32((uint32_t)(EAX));
  /* 10a83a25 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10a83a2b push ecx */
  push32((uint32_t)(ECX));
  /* 10a83a2c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10a83a32 push edx */
  push32((uint32_t)(EDX));
  /* 10a83a33 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10a83a39 push eax */
  push32((uint32_t)(EAX));
  /* 10a83a3a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10a83a40 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83a41 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10a83a47 push edx */
  push32((uint32_t)(EDX));
  /* 10a83a48 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10a83a4e push eax */
  push32((uint32_t)(EAX));
  /* 10a83a4f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10a83a55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83a56 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10a83a5c push edx */
  push32((uint32_t)(EDX));
  /* 10a83a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83a60 push eax */
  push32((uint32_t)(EAX));
  /* 10a83a61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83a64 mov edx, dword ptr [ecx*4 + 0x10aaea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea50)));
  /* 10a83a6b push edx */
  push32((uint32_t)(EDX));
  /* 10a83a6c push 0x10aab644 */
  push32((uint32_t)(0x10aab644u));
  /* 10a83a71 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a83a76 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10a83a7c push eax */
  push32((uint32_t)(EAX));
  /* 10a83a7d call 0x10a87240 */
  push32(0x10a83a82u); f_10a87240();
  /* 10a83a82 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83a85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83a87 jge 0x10a83a9d */
  if ((C.sf==C.of)) goto L_10a83a9d;
  /* 10a83a89 push 0x10aab5a8 */
  push32((uint32_t)(0x10aab5a8u));
  /* 10a83a8e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10a83a94 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83a95 call 0x10a87340 */
  push32(0x10a83a9au); f_10a87340();
  /* 10a83a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83a9d:;
  /* 10a83a9d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10a83aa2 push 0x10aab620 */
  push32((uint32_t)(0x10aab620u));
  /* 10a83aa7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10a83aad push edx */
  push32((uint32_t)(EDX));
  /* 10a83aae call 0x10a87af0 */
  push32(0x10a83ab3u); f_10a87af0();
  /* 10a83ab3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83ab6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10a83abc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83ac3 jne 0x10a83ad6 */
  if (!C.zf) goto L_10a83ad6;
  /* 10a83ac5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a83ac7 call 0x10a87830 */
  push32(0x10a83accu); f_10a87830();
  /* 10a83acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83acf push 3 */
  push32((uint32_t)(0x3u));
  /* 10a83ad1 call 0x10a83b50 */
  push32(0x10a83ad6u); f_10a83b50();
L_10a83ad6:;
  /* 10a83ad6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83add jne 0x10a83ae6 */
  if (!C.zf) goto L_10a83ae6;
  /* 10a83adf mov eax, 1 */
  EAX = (0x1u);
  /* 10a83ae4 jmp 0x10a83ae8 */
  goto L_10a83ae8;
L_10a83ae6:;
  /* 10a83ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a83ae8:;
  /* 10a83ae8 mov esp, ebp */
  ESP = (EBP);
  /* 10a83aea pop ebp */
  EBP = (pop32());
  /* 10a83aeb ret  */
  ESPCHK(0x10a837e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003af0 @ 0x10a83af0 (56 bytes, 15 insns) */
void f_10a83af0(void) {
  FTRACE(0x10a83af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83af1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83af3 cmp dword ptr [0x10ab21dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83afa je 0x10a83b02 */
  if (C.zf) goto L_10a83b02;
  /* 10a83afc call dword ptr [0x10ab21dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab21dc))), 0x10a83b02u);
L_10a83b02:;
  /* 10a83b02 push 0x10aae418 */
  push32((uint32_t)(0x10aae418u));
  /* 10a83b07 push 0x10aae208 */
  push32((uint32_t)(0x10aae208u));
  /* 10a83b0c call 0x10a83cc0 */
  push32(0x10a83b11u); f_10a83cc0();
  /* 10a83b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83b14 push 0x10aae104 */
  push32((uint32_t)(0x10aae104u));
  /* 10a83b19 push 0x10aae000 */
  push32((uint32_t)(0x10aae000u));
  /* 10a83b1e call 0x10a83cc0 */
  push32(0x10a83b23u); f_10a83cc0();
  /* 10a83b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83b26 pop ebp */
  EBP = (pop32());
  /* 10a83b27 ret  */
  ESPCHK(0x10a83af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10a83b30 (21 bytes, 10 insns) */
void f_10a83b30(void) {
  FTRACE(0x10a83b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83b31 mov ebp, esp */
  EBP = (ESP);
  /* 10a83b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83b3a push eax */
  push32((uint32_t)(EAX));
  /* 10a83b3b call 0x10a83bb0 */
  push32(0x10a83b40u); f_10a83bb0();
  /* 10a83b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83b43 pop ebp */
  EBP = (pop32());
  /* 10a83b44 ret  */
  ESPCHK(0x10a83b30u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10a83b50 (21 bytes, 10 insns) */
void f_10a83b50(void) {
  FTRACE(0x10a83b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83b51 mov ebp, esp */
  EBP = (ESP);
  /* 10a83b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83b55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a83b57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83b5a push eax */
  push32((uint32_t)(EAX));
  /* 10a83b5b call 0x10a83bb0 */
  push32(0x10a83b60u); f_10a83bb0();
  /* 10a83b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83b63 pop ebp */
  EBP = (pop32());
  /* 10a83b64 ret  */
  ESPCHK(0x10a83b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b70 @ 0x10a83b70 (19 bytes, 9 insns) */
void f_10a83b70(void) {
  FTRACE(0x10a83b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83b71 mov ebp, esp */
  EBP = (ESP);
  /* 10a83b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a83b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83b79 call 0x10a83bb0 */
  push32(0x10a83b7eu); f_10a83bb0();
  /* 10a83b7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83b81 pop ebp */
  EBP = (pop32());
  /* 10a83b82 ret  */
  ESPCHK(0x10a83b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x10a83b90 (19 bytes, 9 insns) */
void f_10a83b90(void) {
  FTRACE(0x10a83b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83b91 mov ebp, esp */
  EBP = (ESP);
  /* 10a83b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a83b95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a83b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83b99 call 0x10a83bb0 */
  push32(0x10a83b9eu); f_10a83bb0();
  /* 10a83b9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83ba1 pop ebp */
  EBP = (pop32());
  /* 10a83ba2 ret  */
  ESPCHK(0x10a83b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x10a83bb0 (227 bytes, 61 insns) */
void f_10a83bb0(void) {
  FTRACE(0x10a83bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83bb4 call 0x10a83ca0 */
  push32(0x10a83bb9u); f_10a83ca0();
  /* 10a83bb9 cmp dword ptr [0x10ab06f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83bc0 jne 0x10a83bd3 */
  if (!C.zf) goto L_10a83bd3;
  /* 10a83bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10a83bc6 call dword ptr [0x10ab3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3354))), 0x10a83bccu);
  /* 10a83bcc push eax */
  push32((uint32_t)(EAX));
  /* 10a83bcd call dword ptr [0x10ab3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3350))), 0x10a83bd3u);
L_10a83bd3:;
  /* 10a83bd3 mov dword ptr [0x10ab06ec], 1 */
  w32((uint32_t)(0x10ab06ec), (0x1u));
  /* 10a83bdd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10a83be0 mov byte ptr [0x10ab06e8], cl */
  w8((uint32_t)(0x10ab06e8), (CL));
  /* 10a83be6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83bea jne 0x10a83c33 */
  if (!C.zf) goto L_10a83c33;
  /* 10a83bec cmp dword ptr [0x10ab21d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83bf3 je 0x10a83c21 */
  if (C.zf) goto L_10a83c21;
  /* 10a83bf5 mov edx, dword ptr [0x10ab21d4] */
  EDX = (r32((uint32_t)(0x10ab21d4)));
  /* 10a83bfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a83bfe:;
  /* 10a83bfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83c01 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a83c04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83c0a cmp ecx, dword ptr [0x10ab21d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab21d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83c10 jb 0x10a83c21 */
  if (C.cf) goto L_10a83c21;
  /* 10a83c12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83c15 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83c18 je 0x10a83c1f */
  if (C.zf) goto L_10a83c1f;
  /* 10a83c1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83c1d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10a83c1fu);
L_10a83c1f:;
  /* 10a83c1f jmp 0x10a83bfe */
  goto L_10a83bfe;
L_10a83c21:;
  /* 10a83c21 push 0x10aae724 */
  push32((uint32_t)(0x10aae724u));
  /* 10a83c26 push 0x10aae51c */
  push32((uint32_t)(0x10aae51cu));
  /* 10a83c2b call 0x10a83cc0 */
  push32(0x10a83c30u); f_10a83cc0();
  /* 10a83c30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83c33:;
  /* 10a83c33 push 0x10aae92c */
  push32((uint32_t)(0x10aae92cu));
  /* 10a83c38 push 0x10aae828 */
  push32((uint32_t)(0x10aae828u));
  /* 10a83c3d call 0x10a83cc0 */
  push32(0x10a83c42u); f_10a83cc0();
  /* 10a83c42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83c45 cmp dword ptr [0x10ab06f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83c4c jne 0x10a83c6e */
  if (!C.zf) goto L_10a83c6e;
  /* 10a83c4e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a83c50 call 0x10a858a0 */
  push32(0x10a83c55u); f_10a858a0();
  /* 10a83c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83c58 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a83c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83c5d je 0x10a83c6e */
  if (C.zf) goto L_10a83c6e;
  /* 10a83c5f mov dword ptr [0x10ab06f4], 1 */
  w32((uint32_t)(0x10ab06f4), (0x1u));
  /* 10a83c69 call 0x10a861b0 */
  push32(0x10a83c6eu); f_10a861b0();
L_10a83c6e:;
  /* 10a83c6e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83c72 je 0x10a83c7b */
  if (C.zf) goto L_10a83c7b;
  /* 10a83c74 call 0x10a83cb0 */
  push32(0x10a83c79u); f_10a83cb0();
  /* 10a83c79 jmp 0x10a83c8f */
  goto L_10a83c8f;
L_10a83c7b:;
  /* 10a83c7b mov dword ptr [0x10ab06f0], 1 */
  w32((uint32_t)(0x10ab06f0), (0x1u));
  /* 10a83c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83c88 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83c89 call dword ptr [0x10ab334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab334c))), 0x10a83c8fu);
L_10a83c8f:;
  /* 10a83c8f mov esp, ebp */
  ESP = (EBP);
  /* 10a83c91 pop ebp */
  EBP = (pop32());
  /* 10a83c92 ret  */
  ESPCHK(0x10a83bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca0 @ 0x10a83ca0 (15 bytes, 7 insns) */
void f_10a83ca0(void) {
  FTRACE(0x10a83ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83ca3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a83ca5 call 0x10a87d90 */
  push32(0x10a83caau); f_10a87d90();
  /* 10a83caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83cad pop ebp */
  EBP = (pop32());
  /* 10a83cae ret  */
  ESPCHK(0x10a83ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb0 @ 0x10a83cb0 (15 bytes, 7 insns) */
void f_10a83cb0(void) {
  FTRACE(0x10a83cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83cb3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a83cb5 call 0x10a87e30 */
  push32(0x10a83cbau); f_10a87e30();
  /* 10a83cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83cbd pop ebp */
  EBP = (pop32());
  /* 10a83cbe ret  */
  ESPCHK(0x10a83cb0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10a83cc0 (37 bytes, 16 insns) */
void f_10a83cc0(void) {
  FTRACE(0x10a83cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83cc1 mov ebp, esp */
  EBP = (ESP);
L_10a83cc3:;
  /* 10a83cc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83cc6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83cc9 jae 0x10a83ce3 */
  if (!C.cf) goto L_10a83ce3;
  /* 10a83ccb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83cce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83cd1 je 0x10a83cd8 */
  if (C.zf) goto L_10a83cd8;
  /* 10a83cd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83cd6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10a83cd8u);
L_10a83cd8:;
  /* 10a83cd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83cdb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83cde mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a83ce1 jmp 0x10a83cc3 */
  goto L_10a83cc3;
L_10a83ce3:;
  /* 10a83ce3 pop ebp */
  EBP = (pop32());
  /* 10a83ce4 ret  */
  ESPCHK(0x10a83cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x10a83cf0 (130 bytes, 42 insns) */
void f_10a83cf0(void) {
  FTRACE(0x10a83cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83cf4 call 0x10a87cb0 */
  push32(0x10a83cf9u); f_10a87cb0();
  /* 10a83cf9 call dword ptr [0x10ab3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3360))), 0x10a83cffu);
  /* 10a83cff mov dword ptr [0x10aaea5c], eax */
  w32((uint32_t)(0x10aaea5c), (EAX));
  /* 10a83d04 cmp dword ptr [0x10aaea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83d0b jne 0x10a83d11 */
  if (!C.zf) goto L_10a83d11;
  /* 10a83d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a83d0f jmp 0x10a83d6e */
  goto L_10a83d6e;
L_10a83d11:;
  /* 10a83d11 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10a83d13 push 0x10aab77c */
  push32((uint32_t)(0x10aab77cu));
  /* 10a83d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83d1a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10a83d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a83d1e call 0x10a847a0 */
  push32(0x10a83d23u); f_10a847a0();
  /* 10a83d23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83d26 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83d29 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83d2d je 0x10a83d44 */
  if (C.zf) goto L_10a83d44;
  /* 10a83d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83d32 push eax */
  push32((uint32_t)(EAX));
  /* 10a83d33 mov ecx, dword ptr [0x10aaea5c] */
  ECX = (r32((uint32_t)(0x10aaea5c)));
  /* 10a83d39 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83d3a call dword ptr [0x10ab335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab335c))), 0x10a83d40u);
  /* 10a83d40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83d42 jne 0x10a83d48 */
  if (!C.zf) goto L_10a83d48;
L_10a83d44:;
  /* 10a83d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a83d46 jmp 0x10a83d6e */
  goto L_10a83d6e;
L_10a83d48:;
  /* 10a83d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83d4b push edx */
  push32((uint32_t)(EDX));
  /* 10a83d4c call 0x10a83db0 */
  push32(0x10a83d51u); f_10a83db0();
  /* 10a83d51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83d54 call dword ptr [0x10ab3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3358))), 0x10a83d5au);
  /* 10a83d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83d5d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a83d5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83d62 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10a83d69 mov eax, 1 */
  EAX = (0x1u);
L_10a83d6e:;
  /* 10a83d6e mov esp, ebp */
  ESP = (EBP);
  /* 10a83d70 pop ebp */
  EBP = (pop32());
  /* 10a83d71 ret  */
  ESPCHK(0x10a83cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d80 @ 0x10a83d80 (41 bytes, 11 insns) */
void f_10a83d80(void) {
  FTRACE(0x10a83d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83d81 mov ebp, esp */
  EBP = (ESP);
  /* 10a83d83 call 0x10a87cf0 */
  push32(0x10a83d88u); f_10a87cf0();
  /* 10a83d88 cmp dword ptr [0x10aaea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83d8f je 0x10a83da7 */
  if (C.zf) goto L_10a83da7;
  /* 10a83d91 mov eax, dword ptr [0x10aaea5c] */
  EAX = (r32((uint32_t)(0x10aaea5c)));
  /* 10a83d96 push eax */
  push32((uint32_t)(EAX));
  /* 10a83d97 call dword ptr [0x10ab3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3364))), 0x10a83d9du);
  /* 10a83d9d mov dword ptr [0x10aaea5c], 0xffffffff */
  w32((uint32_t)(0x10aaea5c), (0xffffffffu));
L_10a83da7:;
  /* 10a83da7 pop ebp */
  EBP = (pop32());
  /* 10a83da8 ret  */
  ESPCHK(0x10a83d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db0 @ 0x10a83db0 (25 bytes, 8 insns) */
void f_10a83db0(void) {
  FTRACE(0x10a83db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83db1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83db6 mov dword ptr [eax + 0x50], 0x10aaec00 */
  w32((uint32_t)(EAX + 0x50), (0x10aaec00u));
  /* 10a83dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83dc0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10a83dc7 pop ebp */
  EBP = (pop32());
  /* 10a83dc8 ret  */
  ESPCHK(0x10a83db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x10a83dd0 (152 bytes, 48 insns) */
void f_10a83dd0(void) {
  FTRACE(0x10a83dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a83dd6 call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a83ddcu);
  /* 10a83ddc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a83ddf mov eax, dword ptr [0x10aaea5c] */
  EAX = (r32((uint32_t)(0x10aaea5c)));
  /* 10a83de4 push eax */
  push32((uint32_t)(EAX));
  /* 10a83de5 call dword ptr [0x10ab3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3298))), 0x10a83debu);
  /* 10a83deb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83dee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83df2 jne 0x10a83e57 */
  if (!C.zf) goto L_10a83e57;
  /* 10a83df4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10a83df9 push 0x10aab77c */
  push32((uint32_t)(0x10aab77cu));
  /* 10a83dfe push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83e00 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10a83e02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a83e04 call 0x10a847a0 */
  push32(0x10a83e09u); f_10a847a0();
  /* 10a83e09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83e0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a83e0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83e13 je 0x10a83e4d */
  if (C.zf) goto L_10a83e4d;
  /* 10a83e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10a83e19 mov edx, dword ptr [0x10aaea5c] */
  EDX = (r32((uint32_t)(0x10aaea5c)));
  /* 10a83e1f push edx */
  push32((uint32_t)(EDX));
  /* 10a83e20 call dword ptr [0x10ab335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab335c))), 0x10a83e26u);
  /* 10a83e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a83e28 je 0x10a83e4d */
  if (C.zf) goto L_10a83e4d;
  /* 10a83e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83e2d push eax */
  push32((uint32_t)(EAX));
  /* 10a83e2e call 0x10a83db0 */
  push32(0x10a83e33u); f_10a83db0();
  /* 10a83e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83e36 call dword ptr [0x10ab3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3358))), 0x10a83e3cu);
  /* 10a83e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83e3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a83e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83e44 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10a83e4b jmp 0x10a83e57 */
  goto L_10a83e57;
L_10a83e4d:;
  /* 10a83e4d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a83e4f call 0x10a83300 */
  push32(0x10a83e54u); f_10a83300();
  /* 10a83e54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83e57:;
  /* 10a83e57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a83e5a push eax */
  push32((uint32_t)(EAX));
  /* 10a83e5b call dword ptr [0x10ab3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3294))), 0x10a83e61u);
  /* 10a83e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a83e64 mov esp, ebp */
  ESP = (EBP);
  /* 10a83e66 pop ebp */
  EBP = (pop32());
  /* 10a83e67 ret  */
  ESPCHK(0x10a83dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x10a83e70 (263 bytes, 86 insns) */
void f_10a83e70(void) {
  FTRACE(0x10a83e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83e71 mov ebp, esp */
  EBP = (ESP);
  /* 10a83e73 cmp dword ptr [0x10aaea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83e7a je 0x10a83f75 */
  if (C.zf) goto L_10a83f75;
  /* 10a83e80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83e84 jne 0x10a83e95 */
  if (!C.zf) goto L_10a83e95;
  /* 10a83e86 mov eax, dword ptr [0x10aaea5c] */
  EAX = (r32((uint32_t)(0x10aaea5c)));
  /* 10a83e8b push eax */
  push32((uint32_t)(EAX));
  /* 10a83e8c call dword ptr [0x10ab3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3298))), 0x10a83e92u);
  /* 10a83e92 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a83e95:;
  /* 10a83e95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83e99 je 0x10a83f66 */
  if (C.zf) goto L_10a83f66;
  /* 10a83e9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ea2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83ea6 je 0x10a83eb9 */
  if (C.zf) goto L_10a83eb9;
  /* 10a83ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ead mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10a83eb0 push eax */
  push32((uint32_t)(EAX));
  /* 10a83eb1 call 0x10a84e20 */
  push32(0x10a83eb6u); f_10a84e20();
  /* 10a83eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83eb9:;
  /* 10a83eb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ebc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83ec0 je 0x10a83ed3 */
  if (C.zf) goto L_10a83ed3;
  /* 10a83ec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ec7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10a83eca push eax */
  push32((uint32_t)(EAX));
  /* 10a83ecb call 0x10a84e20 */
  push32(0x10a83ed0u); f_10a84e20();
  /* 10a83ed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83ed3:;
  /* 10a83ed3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ed6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83eda je 0x10a83eed */
  if (C.zf) goto L_10a83eed;
  /* 10a83edc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ee1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10a83ee4 push eax */
  push32((uint32_t)(EAX));
  /* 10a83ee5 call 0x10a84e20 */
  push32(0x10a83eeau); f_10a84e20();
  /* 10a83eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83eed:;
  /* 10a83eed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83ef0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83ef4 je 0x10a83f07 */
  if (C.zf) goto L_10a83f07;
  /* 10a83ef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83ef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83efb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10a83efe push eax */
  push32((uint32_t)(EAX));
  /* 10a83eff call 0x10a84e20 */
  push32(0x10a83f04u); f_10a84e20();
  /* 10a83f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83f07:;
  /* 10a83f07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f0a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83f0e je 0x10a83f21 */
  if (C.zf) goto L_10a83f21;
  /* 10a83f10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83f12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f15 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10a83f18 push eax */
  push32((uint32_t)(EAX));
  /* 10a83f19 call 0x10a84e20 */
  push32(0x10a83f1eu); f_10a84e20();
  /* 10a83f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83f21:;
  /* 10a83f21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f24 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83f28 je 0x10a83f3b */
  if (C.zf) goto L_10a83f3b;
  /* 10a83f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83f2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f2f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10a83f32 push eax */
  push32((uint32_t)(EAX));
  /* 10a83f33 call 0x10a84e20 */
  push32(0x10a83f38u); f_10a84e20();
  /* 10a83f38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83f3b:;
  /* 10a83f3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f3e cmp dword ptr [ecx + 0x50], 0x10aaec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10aaec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83f45 je 0x10a83f58 */
  if (C.zf) goto L_10a83f58;
  /* 10a83f47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83f49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f4c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10a83f4f push eax */
  push32((uint32_t)(EAX));
  /* 10a83f50 call 0x10a84e20 */
  push32(0x10a83f55u); f_10a84e20();
  /* 10a83f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83f58:;
  /* 10a83f58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83f5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a83f5d push ecx */
  push32((uint32_t)(ECX));
  /* 10a83f5e call 0x10a84e20 */
  push32(0x10a83f63u); f_10a84e20();
  /* 10a83f63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83f66:;
  /* 10a83f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a83f68 mov edx, dword ptr [0x10aaea5c] */
  EDX = (r32((uint32_t)(0x10aaea5c)));
  /* 10a83f6e push edx */
  push32((uint32_t)(EDX));
  /* 10a83f6f call dword ptr [0x10ab335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab335c))), 0x10a83f75u);
L_10a83f75:;
  /* 10a83f75 pop ebp */
  EBP = (pop32());
  /* 10a83f76 ret  */
  ESPCHK(0x10a83e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x10a83f80 (11 bytes, 5 insns) */
void f_10a83f80(void) {
  FTRACE(0x10a83f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83f81 mov ebp, esp */
  EBP = (ESP);
  /* 10a83f83 call dword ptr [0x10ab3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3358))), 0x10a83f89u);
  /* 10a83f89 pop ebp */
  EBP = (pop32());
  /* 10a83f8a ret  */
  ESPCHK(0x10a83f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x10a83f90 (11 bytes, 5 insns) */
void f_10a83f90(void) {
  FTRACE(0x10a83f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83f91 mov ebp, esp */
  EBP = (ESP);
  /* 10a83f93 call dword ptr [0x10ab3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3374))), 0x10a83f99u);
  /* 10a83f99 pop ebp */
  EBP = (pop32());
  /* 10a83f9a ret  */
  ESPCHK(0x10a83f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x10a83fa0 (804 bytes, 236 insns) */
void f_10a83fa0(void) {
  FTRACE(0x10a83fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a83fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a83fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10a83fa3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a83fa6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10a83fab push 0x10aab788 */
  push32((uint32_t)(0x10aab788u));
  /* 10a83fb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a83fb2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a83fb7 call 0x10a84390 */
  push32(0x10a83fbcu); f_10a84390();
  /* 10a83fbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83fbf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10a83fc2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83fc6 jne 0x10a83fd2 */
  if (!C.zf) goto L_10a83fd2;
  /* 10a83fc8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10a83fca call 0x10a83300 */
  push32(0x10a83fcfu); f_10a83300();
  /* 10a83fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a83fd2:;
  /* 10a83fd2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a83fd5 mov dword ptr [0x10ab2080], eax */
  w32((uint32_t)(0x10ab2080), (EAX));
  /* 10a83fda mov dword ptr [0x10ab21bc], 0x20 */
  w32((uint32_t)(0x10ab21bc), (0x20u));
  /* 10a83fe4 jmp 0x10a83fef */
  goto L_10a83fef;
L_10a83fe6:;
  /* 10a83fe6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a83fe9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83fec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10a83fef:;
  /* 10a83fef mov edx, dword ptr [0x10ab2080] */
  EDX = (r32((uint32_t)(0x10ab2080)));
  /* 10a83ff5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a83ffb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a83ffe jae 0x10a84023 */
  if (!C.cf) goto L_10a84023;
  /* 10a84000 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84003 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a84007 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8400a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a84010 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84013 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a84017 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8401a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a84021 jmp 0x10a83fe6 */
  goto L_10a83fe6;
L_10a84023:;
  /* 10a84023 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10a84026 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84027 call dword ptr [0x10ab3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3380))), 0x10a8402du);
  /* 10a8402d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10a84030 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a84036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a84038 je 0x10a841c5 */
  if (C.zf) goto L_10a841c5;
  /* 10a8403e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84042 je 0x10a841c5 */
  if (C.zf) goto L_10a841c5;
  /* 10a84048 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8404b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8404d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10a84050 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a84053 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84056 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a84059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8405c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8405f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10a84062 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84069 jge 0x10a84073 */
  if ((C.sf==C.of)) goto L_10a84073;
  /* 10a8406b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10a8406e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10a84071 jmp 0x10a8407a */
  goto L_10a8407a;
L_10a84073:;
  /* 10a84073 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10a8407a:;
  /* 10a8407a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10a8407d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10a84080 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10a84087 jmp 0x10a84092 */
  goto L_10a84092;
L_10a84089:;
  /* 10a84089 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a8408c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8408f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10a84092:;
  /* 10a84092 mov ecx, dword ptr [0x10ab21bc] */
  ECX = (r32((uint32_t)(0x10ab21bc)));
  /* 10a84098 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8409b jge 0x10a84132 */
  if ((C.sf==C.of)) goto L_10a84132;
  /* 10a840a1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10a840a6 push 0x10aab788 */
  push32((uint32_t)(0x10aab788u));
  /* 10a840ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10a840ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a840b2 call 0x10a84390 */
  push32(0x10a840b7u); f_10a84390();
  /* 10a840b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a840ba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10a840bd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a840c1 jne 0x10a840ce */
  if (!C.zf) goto L_10a840ce;
  /* 10a840c3 mov edx, dword ptr [0x10ab21bc] */
  EDX = (r32((uint32_t)(0x10ab21bc)));
  /* 10a840c9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10a840cc jmp 0x10a84132 */
  goto L_10a84132;
L_10a840ce:;
  /* 10a840ce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a840d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a840d4 mov dword ptr [eax*4 + 0x10ab2080], ecx */
  w32((uint32_t)(EAX*4 + 0x10ab2080), (ECX));
  /* 10a840db mov edx, dword ptr [0x10ab21bc] */
  EDX = (r32((uint32_t)(0x10ab21bc)));
  /* 10a840e1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a840e4 mov dword ptr [0x10ab21bc], edx */
  w32((uint32_t)(0x10ab21bc), (EDX));
  /* 10a840ea jmp 0x10a840f5 */
  goto L_10a840f5;
L_10a840ec:;
  /* 10a840ec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a840ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a840f2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10a840f5:;
  /* 10a840f5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a840f8 mov edx, dword ptr [ecx*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a840ff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84105 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84108 jae 0x10a8412d */
  if (!C.cf) goto L_10a8412d;
  /* 10a8410a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8410d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a84111 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84114 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a8411a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8411d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a84121 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84124 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a8412b jmp 0x10a840ec */
  goto L_10a840ec;
L_10a8412d:;
  /* 10a8412d jmp 0x10a84089 */
  goto L_10a84089;
L_10a84132:;
  /* 10a84132 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10a84139 jmp 0x10a84156 */
  goto L_10a84156;
L_10a8413b:;
  /* 10a8413b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a8413e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84141 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10a84144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84147 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8414a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8414d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a84150 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84153 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10a84156:;
  /* 10a84156 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a84159 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8415c jge 0x10a841c5 */
  if ((C.sf==C.of)) goto L_10a841c5;
  /* 10a8415e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a84161 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84164 je 0x10a841c0 */
  if (C.zf) goto L_10a841c0;
  /* 10a84166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84169 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8416c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8416f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84171 je 0x10a841c0 */
  if (C.zf) goto L_10a841c0;
  /* 10a84173 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84176 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a84179 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8417c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8417e jne 0x10a84190 */
  if (!C.zf) goto L_10a84190;
  /* 10a84180 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a84183 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a84185 push edx */
  push32((uint32_t)(EDX));
  /* 10a84186 call dword ptr [0x10ab337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab337c))), 0x10a8418cu);
  /* 10a8418c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8418e je 0x10a841c0 */
  if (C.zf) goto L_10a841c0;
L_10a84190:;
  /* 10a84190 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a84193 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a84196 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a84199 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8419c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8419f mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a841a6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a841a8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10a841ab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a841ae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a841b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a841b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a841b5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a841b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a841bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a841bd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10a841c0:;
  /* 10a841c0 jmp 0x10a8413b */
  goto L_10a8413b;
L_10a841c5:;
  /* 10a841c5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10a841cc jmp 0x10a841d7 */
  goto L_10a841d7;
L_10a841ce:;
  /* 10a841ce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a841d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a841d4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10a841d7:;
  /* 10a841d7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a841db jge 0x10a842b4 */
  if ((C.sf==C.of)) goto L_10a842b4;
  /* 10a841e1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a841e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a841e7 mov edx, dword ptr [0x10ab2080] */
  EDX = (r32((uint32_t)(0x10ab2080)));
  /* 10a841ed add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a841ef mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10a841f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a841f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a841f8 jne 0x10a842a0 */
  if (!C.zf) goto L_10a842a0;
  /* 10a841fe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84201 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10a84205 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84209 jne 0x10a84214 */
  if (!C.zf) goto L_10a84214;
  /* 10a8420b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10a84212 jmp 0x10a84224 */
  goto L_10a84224;
L_10a84214:;
  /* 10a84214 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a84217 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8421a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8421c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8421e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84221 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10a84224:;
  /* 10a84224 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10a84227 push eax */
  push32((uint32_t)(EAX));
  /* 10a84228 call dword ptr [0x10ab332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab332c))), 0x10a8422eu);
  /* 10a8422e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10a84231 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84235 je 0x10a8428f */
  if (C.zf) goto L_10a8428f;
  /* 10a84237 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a8423a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8423b call dword ptr [0x10ab337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab337c))), 0x10a84241u);
  /* 10a84241 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10a84244 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84248 je 0x10a8428f */
  if (C.zf) goto L_10a8428f;
  /* 10a8424a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8424d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a84250 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a84252 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10a84255 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8425b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8425e jne 0x10a84270 */
  if (!C.zf) goto L_10a84270;
  /* 10a84260 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84263 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a84266 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10a84268 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8426b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10a8426e jmp 0x10a8428d */
  goto L_10a8428d;
L_10a84270:;
  /* 10a84270 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10a84273 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a84279 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8427c jne 0x10a8428d */
  if (!C.zf) goto L_10a8428d;
  /* 10a8427e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84281 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a84284 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10a84287 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8428a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a8428d:;
  /* 10a8428d jmp 0x10a8429e */
  goto L_10a8429e;
L_10a8428f:;
  /* 10a8428f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a84292 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a84295 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10a84298 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a8429b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a8429e:;
  /* 10a8429e jmp 0x10a842af */
  goto L_10a842af;
L_10a842a0:;
  /* 10a842a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a842a3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a842a6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10a842a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a842ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a842af:;
  /* 10a842af jmp 0x10a841ce */
  goto L_10a841ce;
L_10a842b4:;
  /* 10a842b4 mov eax, dword ptr [0x10ab21bc] */
  EAX = (r32((uint32_t)(0x10ab21bc)));
  /* 10a842b9 push eax */
  push32((uint32_t)(EAX));
  /* 10a842ba call dword ptr [0x10ab3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3378))), 0x10a842c0u);
  /* 10a842c0 mov esp, ebp */
  ESP = (EBP);
  /* 10a842c2 pop ebp */
  EBP = (pop32());
  /* 10a842c3 ret  */
  ESPCHK(0x10a83fa0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10a842d0 (155 bytes, 45 insns) */
void f_10a842d0(void) {
  FTRACE(0x10a842d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a842d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a842d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a842d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a842d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a842dd jmp 0x10a842e8 */
  goto L_10a842e8;
L_10a842df:;
  /* 10a842df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a842e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a842e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a842e8:;
  /* 10a842e8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a842ec jge 0x10a84367 */
  if ((C.sf==C.of)) goto L_10a84367;
  /* 10a842ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a842f1 cmp dword ptr [ecx*4 + 0x10ab2080], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10ab2080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a842f9 je 0x10a84362 */
  if (C.zf) goto L_10a84362;
  /* 10a842fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a842fe mov eax, dword ptr [edx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a84305 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a84308 jmp 0x10a84313 */
  goto L_10a84313;
L_10a8430a:;
  /* 10a8430a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8430d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84310 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a84313:;
  /* 10a84313 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84316 mov eax, dword ptr [edx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8431d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84322 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84325 jae 0x10a8433f */
  if (!C.cf) goto L_10a8433f;
  /* 10a84327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8432a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8432e je 0x10a8433d */
  if (C.zf) goto L_10a8433d;
  /* 10a84330 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84333 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84336 push edx */
  push32((uint32_t)(EDX));
  /* 10a84337 call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a8433du);
L_10a8433d:;
  /* 10a8433d jmp 0x10a8430a */
  goto L_10a8430a;
L_10a8433f:;
  /* 10a8433f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84344 mov ecx, dword ptr [eax*4 + 0x10ab2080] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8434b push ecx */
  push32((uint32_t)(ECX));
  /* 10a8434c call 0x10a84e20 */
  push32(0x10a84351u); f_10a84e20();
  /* 10a84351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84354 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84357 mov dword ptr [edx*4 + 0x10ab2080], 0 */
  w32((uint32_t)(EDX*4 + 0x10ab2080), (0x0u));
L_10a84362:;
  /* 10a84362 jmp 0x10a842df */
  goto L_10a842df;
L_10a84367:;
  /* 10a84367 mov esp, ebp */
  ESP = (EBP);
  /* 10a84369 pop ebp */
  EBP = (pop32());
  /* 10a8436a ret  */
  ESPCHK(0x10a842d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x10a84370 (29 bytes, 13 insns) */
void f_10a84370(void) {
  FTRACE(0x10a84370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84371 mov ebp, esp */
  EBP = (ESP);
  /* 10a84373 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84375 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84377 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84379 mov eax, dword ptr [0x10ab0898] */
  EAX = (r32((uint32_t)(0x10ab0898)));
  /* 10a8437e push eax */
  push32((uint32_t)(EAX));
  /* 10a8437f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84382 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84383 call 0x10a843e0 */
  push32(0x10a84388u); f_10a843e0();
  /* 10a84388 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8438b pop ebp */
  EBP = (pop32());
  /* 10a8438c ret  */
  ESPCHK(0x10a84370u, _esp0);
  ESP += 4; return;
}

/* FUN_10004390 @ 0x10a84390 (35 bytes, 16 insns) */
void f_10a84390(void) {
  FTRACE(0x10a84390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84391 mov ebp, esp */
  EBP = (ESP);
  /* 10a84393 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a84396 push eax */
  push32((uint32_t)(EAX));
  /* 10a84397 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8439a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8439b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8439e push edx */
  push32((uint32_t)(EDX));
  /* 10a8439f mov eax, dword ptr [0x10ab0898] */
  EAX = (r32((uint32_t)(0x10ab0898)));
  /* 10a843a4 push eax */
  push32((uint32_t)(EAX));
  /* 10a843a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a843a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a843a9 call 0x10a843e0 */
  push32(0x10a843aeu); f_10a843e0();
  /* 10a843ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a843b1 pop ebp */
  EBP = (pop32());
  /* 10a843b2 ret  */
  ESPCHK(0x10a84390u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c0 @ 0x10a843c0 (27 bytes, 13 insns) */
void f_10a843c0(void) {
  FTRACE(0x10a843c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a843c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a843c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a843c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a843c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a843c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a843c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a843cc push eax */
  push32((uint32_t)(EAX));
  /* 10a843cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a843d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a843d1 call 0x10a843e0 */
  push32(0x10a843d6u); f_10a843e0();
  /* 10a843d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a843d9 pop ebp */
  EBP = (pop32());
  /* 10a843da ret  */
  ESPCHK(0x10a843c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x10a843e0 (94 bytes, 38 insns) */
void f_10a843e0(void) {
  FTRACE(0x10a843e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a843e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a843e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a843e3 push ecx */
  push32((uint32_t)(ECX));
L_10a843e4:;
  /* 10a843e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a843e6 call 0x10a87d90 */
  push32(0x10a843ebu); f_10a87d90();
  /* 10a843eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a843ee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a843f1 push eax */
  push32((uint32_t)(EAX));
  /* 10a843f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a843f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a843f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a843f9 push edx */
  push32((uint32_t)(EDX));
  /* 10a843fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a843fd push eax */
  push32((uint32_t)(EAX));
  /* 10a843fe call 0x10a84460 */
  push32(0x10a84403u); f_10a84460();
  /* 10a84403 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84406 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a84409 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8440b call 0x10a87e30 */
  push32(0x10a84410u); f_10a87e30();
  /* 10a84410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84413 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84417 jne 0x10a8441f */
  if (!C.zf) goto L_10a8441f;
  /* 10a84419 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8441d jne 0x10a84424 */
  if (!C.zf) goto L_10a84424;
L_10a8441f:;
  /* 10a8441f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84422 jmp 0x10a8443a */
  goto L_10a8443a;
L_10a84424:;
  /* 10a84424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84427 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84428 call 0x10a880d0 */
  push32(0x10a8442du); f_10a880d0();
  /* 10a8442d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84432 jne 0x10a84438 */
  if (!C.zf) goto L_10a84438;
  /* 10a84434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84436 jmp 0x10a8443a */
  goto L_10a8443a;
L_10a84438:;
  /* 10a84438 jmp 0x10a843e4 */
  goto L_10a843e4;
L_10a8443a:;
  /* 10a8443a mov esp, ebp */
  ESP = (EBP);
  /* 10a8443c pop ebp */
  EBP = (pop32());
  /* 10a8443d ret  */
  ESPCHK(0x10a843e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004440 @ 0x10a84440 (23 bytes, 11 insns) */
void f_10a84440(void) {
  FTRACE(0x10a84440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84440 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84441 mov ebp, esp */
  EBP = (ESP);
  /* 10a84443 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84445 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84447 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84449 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8444c push eax */
  push32((uint32_t)(EAX));
  /* 10a8444d call 0x10a84460 */
  push32(0x10a84452u); f_10a84460();
  /* 10a84452 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84455 pop ebp */
  EBP = (pop32());
  /* 10a84456 ret  */
  ESPCHK(0x10a84440u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x10a84460 (787 bytes, 254 insns) */
void f_10a84460(void) {
  FTRACE(0x10a84460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84460 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84461 mov ebp, esp */
  EBP = (ESP);
  /* 10a84463 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84466 push ebx */
  push32((uint32_t)(EBX));
  /* 10a84467 push esi */
  push32((uint32_t)(ESI));
  /* 10a84468 push edi */
  push32((uint32_t)(EDI));
  /* 10a84469 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a84470 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a84475 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a84478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8447a je 0x10a844ac */
  if (C.zf) goto L_10a844ac;
L_10a8447c:;
  /* 10a8447c call 0x10a85530 */
  push32(0x10a84481u); f_10a85530();
  /* 10a84481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84483 jne 0x10a844a6 */
  if (!C.zf) goto L_10a844a6;
  /* 10a84485 push 0x10aab87c */
  push32((uint32_t)(0x10aab87cu));
  /* 10a8448a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8448c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10a84491 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84496 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84498 call 0x10a83450 */
  push32(0x10a8449du); f_10a83450();
  /* 10a8449d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a844a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a844a3 jne 0x10a844a6 */
  if (!C.zf) goto L_10a844a6;
  /* 10a844a5 int3  */
  x86_unimpl("int3 @ 0x10a844a5");
L_10a844a6:;
  /* 10a844a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a844a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a844aa jne 0x10a8447c */
  if (!C.zf) goto L_10a8447c;
L_10a844ac:;
  /* 10a844ac mov edx, dword ptr [0x10aaea88] */
  EDX = (r32((uint32_t)(0x10aaea88)));
  /* 10a844b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a844b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a844b8 cmp eax, dword ptr [0x10aaea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aaea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a844be jne 0x10a844c1 */
  if (!C.zf) goto L_10a844c1;
  /* 10a844c0 int3  */
  x86_unimpl("int3 @ 0x10a844c0");
L_10a844c1:;
  /* 10a844c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a844c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a844c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a844c8 push edx */
  push32((uint32_t)(EDX));
  /* 10a844c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a844cc push eax */
  push32((uint32_t)(EAX));
  /* 10a844cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a844d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a844d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a844d4 push edx */
  push32((uint32_t)(EDX));
  /* 10a844d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a844d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a844d9 call dword ptr [0x10aaec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaec90))), 0x10a844dfu);
  /* 10a844df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a844e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a844e4 jne 0x10a84544 */
  if (!C.zf) goto L_10a84544;
  /* 10a844e6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a844ea je 0x10a84517 */
  if (C.zf) goto L_10a84517;
L_10a844ec:;
  /* 10a844ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a844ef push eax */
  push32((uint32_t)(EAX));
  /* 10a844f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a844f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a844f4 push 0x10aab838 */
  push32((uint32_t)(0x10aab838u));
  /* 10a844f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a844fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a844fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a844ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84501 call 0x10a83450 */
  push32(0x10a84506u); f_10a83450();
  /* 10a84506 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84509 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8450c jne 0x10a8450f */
  if (!C.zf) goto L_10a8450f;
  /* 10a8450e int3  */
  x86_unimpl("int3 @ 0x10a8450e");
L_10a8450f:;
  /* 10a8450f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84511 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a84513 jne 0x10a844ec */
  if (!C.zf) goto L_10a844ec;
  /* 10a84515 jmp 0x10a8453d */
  goto L_10a8453d;
L_10a84517:;
  /* 10a84517 push 0x10aab814 */
  push32((uint32_t)(0x10aab814u));
  /* 10a8451c push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a84521 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84523 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84525 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84527 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84529 call 0x10a83450 */
  push32(0x10a8452eu); f_10a83450();
  /* 10a8452e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84531 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84534 jne 0x10a84537 */
  if (!C.zf) goto L_10a84537;
  /* 10a84536 int3  */
  x86_unimpl("int3 @ 0x10a84536");
L_10a84537:;
  /* 10a84537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8453b jne 0x10a84517 */
  if (!C.zf) goto L_10a84517;
L_10a8453d:;
  /* 10a8453d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8453f jmp 0x10a8476c */
  goto L_10a8476c;
L_10a84544:;
  /* 10a84544 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84547 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8454d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84550 je 0x10a84566 */
  if (C.zf) goto L_10a84566;
  /* 10a84552 mov edx, dword ptr [0x10aaea84] */
  EDX = (r32((uint32_t)(0x10aaea84)));
  /* 10a84558 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8455b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8455d jne 0x10a84566 */
  if (!C.zf) goto L_10a84566;
  /* 10a8455f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10a84566:;
  /* 10a84566 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8456a ja 0x10a84577 */
  if ((!C.cf&&!C.zf)) goto L_10a84577;
  /* 10a8456c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8456f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84572 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84575 jbe 0x10a845a3 */
  if ((C.cf||C.zf)) goto L_10a845a3;
L_10a84577:;
  /* 10a84577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8457a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8457b push 0x10aab7ec */
  push32((uint32_t)(0x10aab7ecu));
  /* 10a84580 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84586 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84588 call 0x10a83450 */
  push32(0x10a8458du); f_10a83450();
  /* 10a8458d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84590 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84593 jne 0x10a84596 */
  if (!C.zf) goto L_10a84596;
  /* 10a84595 int3  */
  x86_unimpl("int3 @ 0x10a84595");
L_10a84596:;
  /* 10a84596 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84598 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8459a jne 0x10a84577 */
  if (!C.zf) goto L_10a84577;
  /* 10a8459c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8459e jmp 0x10a8476c */
  goto L_10a8476c;
L_10a845a3:;
  /* 10a845a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a845a6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a845ab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a845ae je 0x10a845f0 */
  if (C.zf) goto L_10a845f0;
  /* 10a845b0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a845b4 je 0x10a845f0 */
  if (C.zf) goto L_10a845f0;
  /* 10a845b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a845b9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a845bf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a845c2 je 0x10a845f0 */
  if (C.zf) goto L_10a845f0;
  /* 10a845c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a845c8 je 0x10a845f0 */
  if (C.zf) goto L_10a845f0;
L_10a845ca:;
  /* 10a845ca push 0x10aab7b8 */
  push32((uint32_t)(0x10aab7b8u));
  /* 10a845cf push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a845d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a845d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a845d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a845da push 1 */
  push32((uint32_t)(0x1u));
  /* 10a845dc call 0x10a83450 */
  push32(0x10a845e1u); f_10a83450();
  /* 10a845e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a845e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a845e7 jne 0x10a845ea */
  if (!C.zf) goto L_10a845ea;
  /* 10a845e9 int3  */
  x86_unimpl("int3 @ 0x10a845e9");
L_10a845ea:;
  /* 10a845ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a845ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a845ee jne 0x10a845ca */
  if (!C.zf) goto L_10a845ca;
L_10a845f0:;
  /* 10a845f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a845f3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a845f6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a845f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a845fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a845fd call 0x10a881e0 */
  push32(0x10a84602u); f_10a881e0();
  /* 10a84602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84605 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a84608 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8460c jne 0x10a84615 */
  if (!C.zf) goto L_10a84615;
  /* 10a8460e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84610 jmp 0x10a8476c */
  goto L_10a8476c;
L_10a84615:;
  /* 10a84615 mov edx, dword ptr [0x10aaea88] */
  EDX = (r32((uint32_t)(0x10aaea88)));
  /* 10a8461b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8461e mov dword ptr [0x10aaea88], edx */
  w32((uint32_t)(0x10aaea88), (EDX));
  /* 10a84624 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84628 je 0x10a84673 */
  if (C.zf) goto L_10a84673;
  /* 10a8462a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8462d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a84633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84636 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a8463d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84640 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a84647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8464a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10a84651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84657 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10a8465a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8465d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10a84664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84667 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10a8466e jmp 0x10a84713 */
  goto L_10a84713;
L_10a84673:;
  /* 10a84673 mov edx, dword ptr [0x10ab06fc] */
  EDX = (r32((uint32_t)(0x10ab06fc)));
  /* 10a84679 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8467c mov dword ptr [0x10ab06fc], edx */
  w32((uint32_t)(0x10ab06fc), (EDX));
  /* 10a84682 mov eax, dword ptr [0x10ab0704] */
  EAX = (r32((uint32_t)(0x10ab0704)));
  /* 10a84687 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8468a mov dword ptr [0x10ab0704], eax */
  w32((uint32_t)(0x10ab0704), (EAX));
  /* 10a8468f mov ecx, dword ptr [0x10ab0704] */
  ECX = (r32((uint32_t)(0x10ab0704)));
  /* 10a84695 cmp ecx, dword ptr [0x10ab0708] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab0708))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8469b jbe 0x10a846a9 */
  if ((C.cf||C.zf)) goto L_10a846a9;
  /* 10a8469d mov edx, dword ptr [0x10ab0704] */
  EDX = (r32((uint32_t)(0x10ab0704)));
  /* 10a846a3 mov dword ptr [0x10ab0708], edx */
  w32((uint32_t)(0x10ab0708), (EDX));
L_10a846a9:;
  /* 10a846a9 cmp dword ptr [0x10ab0700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a846b0 je 0x10a846bf */
  if (C.zf) goto L_10a846bf;
  /* 10a846b2 mov eax, dword ptr [0x10ab0700] */
  EAX = (r32((uint32_t)(0x10ab0700)));
  /* 10a846b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a846bd jmp 0x10a846c8 */
  goto L_10a846c8;
L_10a846bf:;
  /* 10a846bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846c2 mov dword ptr [0x10ab06f8], edx */
  w32((uint32_t)(0x10ab06f8), (EDX));
L_10a846c8:;
  /* 10a846c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846cb mov ecx, dword ptr [0x10ab0700] */
  ECX = (r32((uint32_t)(0x10ab0700)));
  /* 10a846d1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a846d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846d6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10a846dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a846e3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a846e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a846ec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10a846ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a846f5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10a846f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a846fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a846fe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10a84701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84707 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10a8470a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8470d mov dword ptr [0x10ab0700], ecx */
  w32((uint32_t)(0x10ab0700), (ECX));
L_10a84713:;
  /* 10a84713 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a84715 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84717 mov dl, byte ptr [0x10aaea90] */
  DL = (r8((uint32_t)(0x10aaea90)));
  /* 10a8471d push edx */
  push32((uint32_t)(EDX));
  /* 10a8471e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84721 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84724 push eax */
  push32((uint32_t)(EAX));
  /* 10a84725 call 0x10a88100 */
  push32(0x10a8472au); f_10a88100();
  /* 10a8472a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8472d push 4 */
  push32((uint32_t)(0x4u));
  /* 10a8472f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84731 mov cl, byte ptr [0x10aaea90] */
  CL = (r8((uint32_t)(0x10aaea90)));
  /* 10a84737 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8473b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8473e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10a84742 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84743 call 0x10a88100 */
  push32(0x10a84748u); f_10a88100();
  /* 10a84748 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8474b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8474e push edx */
  push32((uint32_t)(EDX));
  /* 10a8474f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84751 mov al, byte ptr [0x10aaea92] */
  AL = (r8((uint32_t)(0x10aaea92)));
  /* 10a84756 push eax */
  push32((uint32_t)(EAX));
  /* 10a84757 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8475a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8475d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8475e call 0x10a88100 */
  push32(0x10a84763u); f_10a88100();
  /* 10a84763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84769 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a8476c:;
  /* 10a8476c pop edi */
  EDI = (pop32());
  /* 10a8476d pop esi */
  ESI = (pop32());
  /* 10a8476e pop ebx */
  EBX = (pop32());
  /* 10a8476f mov esp, ebp */
  ESP = (EBP);
  /* 10a84771 pop ebp */
  EBP = (pop32());
  /* 10a84772 ret  */
  ESPCHK(0x10a84460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x10a84780 (27 bytes, 13 insns) */
void f_10a84780(void) {
  FTRACE(0x10a84780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84780 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84781 mov ebp, esp */
  EBP = (ESP);
  /* 10a84783 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84787 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84789 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8478c push eax */
  push32((uint32_t)(EAX));
  /* 10a8478d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84790 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84791 call 0x10a847a0 */
  push32(0x10a84796u); f_10a847a0();
  /* 10a84796 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84799 pop ebp */
  EBP = (pop32());
  /* 10a8479a ret  */
  ESPCHK(0x10a84780u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10a847a0 (96 bytes, 37 insns) */
void f_10a847a0(void) {
  FTRACE(0x10a847a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a847a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a847a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a847a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a847a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a847a9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a847ad mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a847b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a847b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a847b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a847b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a847b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a847bb push eax */
  push32((uint32_t)(EAX));
  /* 10a847bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a847bf push ecx */
  push32((uint32_t)(ECX));
  /* 10a847c0 call 0x10a84390 */
  push32(0x10a847c5u); f_10a84390();
  /* 10a847c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a847c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a847cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a847cf je 0x10a847f9 */
  if (C.zf) goto L_10a847f9;
  /* 10a847d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a847d4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a847d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a847da add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a847dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a847e0:;
  /* 10a847e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a847e3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a847e6 jae 0x10a847f9 */
  if (!C.cf) goto L_10a847f9;
  /* 10a847e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a847eb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a847ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a847f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a847f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a847f7 jmp 0x10a847e0 */
  goto L_10a847e0;
L_10a847f9:;
  /* 10a847f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a847fc mov esp, ebp */
  ESP = (EBP);
  /* 10a847fe pop ebp */
  EBP = (pop32());
  /* 10a847ff ret  */
  ESPCHK(0x10a847a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x10a84800 (27 bytes, 13 insns) */
void f_10a84800(void) {
  FTRACE(0x10a84800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84800 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84801 mov ebp, esp */
  EBP = (ESP);
  /* 10a84803 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84807 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8480c push eax */
  push32((uint32_t)(EAX));
  /* 10a8480d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84810 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84811 call 0x10a84820 */
  push32(0x10a84816u); f_10a84820();
  /* 10a84816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84819 pop ebp */
  EBP = (pop32());
  /* 10a8481a ret  */
  ESPCHK(0x10a84800u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x10a84820 (64 bytes, 27 insns) */
void f_10a84820(void) {
  FTRACE(0x10a84820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84820 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84821 mov ebp, esp */
  EBP = (ESP);
  /* 10a84823 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84824 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a84826 call 0x10a87d90 */
  push32(0x10a8482bu); f_10a87d90();
  /* 10a8482b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8482e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84830 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a84833 push eax */
  push32((uint32_t)(EAX));
  /* 10a84834 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a84837 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84838 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8483b push edx */
  push32((uint32_t)(EDX));
  /* 10a8483c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8483f push eax */
  push32((uint32_t)(EAX));
  /* 10a84840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84843 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84844 call 0x10a84860 */
  push32(0x10a84849u); f_10a84860();
  /* 10a84849 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8484c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8484f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a84851 call 0x10a87e30 */
  push32(0x10a84856u); f_10a87e30();
  /* 10a84856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8485c mov esp, ebp */
  ESP = (EBP);
  /* 10a8485e pop ebp */
  EBP = (pop32());
  /* 10a8485f ret  */
  ESPCHK(0x10a84820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x10a84860 (1297 bytes, 431 insns) */
void f_10a84860(void) {
  FTRACE(0x10a84860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84860 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84861 mov ebp, esp */
  EBP = (ESP);
  /* 10a84863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84866 push ebx */
  push32((uint32_t)(EBX));
  /* 10a84867 push esi */
  push32((uint32_t)(ESI));
  /* 10a84868 push edi */
  push32((uint32_t)(EDI));
  /* 10a84869 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a84870 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84874 jne 0x10a84893 */
  if (!C.zf) goto L_10a84893;
  /* 10a84876 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a84879 push eax */
  push32((uint32_t)(EAX));
  /* 10a8487a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8487d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8487e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a84881 push edx */
  push32((uint32_t)(EDX));
  /* 10a84882 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84885 push eax */
  push32((uint32_t)(EAX));
  /* 10a84886 call 0x10a84390 */
  push32(0x10a8488bu); f_10a84390();
  /* 10a8488b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8488e jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a84893:;
  /* 10a84893 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84897 je 0x10a848b6 */
  if (C.zf) goto L_10a848b6;
  /* 10a84899 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8489d jne 0x10a848b6 */
  if (!C.zf) goto L_10a848b6;
  /* 10a8489f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a848a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a848a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a848a6 push edx */
  push32((uint32_t)(EDX));
  /* 10a848a7 call 0x10a84e20 */
  push32(0x10a848acu); f_10a84e20();
  /* 10a848ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a848af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a848b1 jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a848b6:;
  /* 10a848b6 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a848bb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a848be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a848c0 je 0x10a848f2 */
  if (C.zf) goto L_10a848f2;
L_10a848c2:;
  /* 10a848c2 call 0x10a85530 */
  push32(0x10a848c7u); f_10a85530();
  /* 10a848c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a848c9 jne 0x10a848ec */
  if (!C.zf) goto L_10a848ec;
  /* 10a848cb push 0x10aab87c */
  push32((uint32_t)(0x10aab87cu));
  /* 10a848d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a848d2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10a848d7 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a848dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a848de call 0x10a83450 */
  push32(0x10a848e3u); f_10a83450();
  /* 10a848e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a848e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a848e9 jne 0x10a848ec */
  if (!C.zf) goto L_10a848ec;
  /* 10a848eb int3  */
  x86_unimpl("int3 @ 0x10a848eb");
L_10a848ec:;
  /* 10a848ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a848ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a848f0 jne 0x10a848c2 */
  if (!C.zf) goto L_10a848c2;
L_10a848f2:;
  /* 10a848f2 mov edx, dword ptr [0x10aaea88] */
  EDX = (r32((uint32_t)(0x10aaea88)));
  /* 10a848f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a848fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a848fe cmp eax, dword ptr [0x10aaea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aaea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84904 jne 0x10a84907 */
  if (!C.zf) goto L_10a84907;
  /* 10a84906 int3  */
  x86_unimpl("int3 @ 0x10a84906");
L_10a84907:;
  /* 10a84907 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8490a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8490b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8490e push edx */
  push32((uint32_t)(EDX));
  /* 10a8490f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a84912 push eax */
  push32((uint32_t)(EAX));
  /* 10a84913 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a84916 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84917 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8491a push edx */
  push32((uint32_t)(EDX));
  /* 10a8491b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8491e push eax */
  push32((uint32_t)(EAX));
  /* 10a8491f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84921 call dword ptr [0x10aaec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaec90))), 0x10a84927u);
  /* 10a84927 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8492a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8492c jne 0x10a8498c */
  if (!C.zf) goto L_10a8498c;
  /* 10a8492e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84932 je 0x10a8495f */
  if (C.zf) goto L_10a8495f;
L_10a84934:;
  /* 10a84934 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a84937 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84938 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8493b push edx */
  push32((uint32_t)(EDX));
  /* 10a8493c push 0x10aab9f8 */
  push32((uint32_t)(0x10aab9f8u));
  /* 10a84941 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84943 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84945 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84949 call 0x10a83450 */
  push32(0x10a8494eu); f_10a83450();
  /* 10a8494e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84951 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84954 jne 0x10a84957 */
  if (!C.zf) goto L_10a84957;
  /* 10a84956 int3  */
  x86_unimpl("int3 @ 0x10a84956");
L_10a84957:;
  /* 10a84957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8495b jne 0x10a84934 */
  if (!C.zf) goto L_10a84934;
  /* 10a8495d jmp 0x10a84985 */
  goto L_10a84985;
L_10a8495f:;
  /* 10a8495f push 0x10aab9d4 */
  push32((uint32_t)(0x10aab9d4u));
  /* 10a84964 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a84969 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8496b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8496d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8496f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84971 call 0x10a83450 */
  push32(0x10a84976u); f_10a83450();
  /* 10a84976 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84979 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8497c jne 0x10a8497f */
  if (!C.zf) goto L_10a8497f;
  /* 10a8497e int3  */
  x86_unimpl("int3 @ 0x10a8497e");
L_10a8497f:;
  /* 10a8497f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84981 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84983 jne 0x10a8495f */
  if (!C.zf) goto L_10a8495f;
L_10a84985:;
  /* 10a84985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84987 jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a8498c:;
  /* 10a8498c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84990 jbe 0x10a849be */
  if ((C.cf||C.zf)) goto L_10a849be;
L_10a84992:;
  /* 10a84992 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84995 push edx */
  push32((uint32_t)(EDX));
  /* 10a84996 push 0x10aab9a4 */
  push32((uint32_t)(0x10aab9a4u));
  /* 10a8499b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8499d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8499f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a849a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a849a3 call 0x10a83450 */
  push32(0x10a849a8u); f_10a83450();
  /* 10a849a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a849ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a849ae jne 0x10a849b1 */
  if (!C.zf) goto L_10a849b1;
  /* 10a849b0 int3  */
  x86_unimpl("int3 @ 0x10a849b0");
L_10a849b1:;
  /* 10a849b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a849b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a849b5 jne 0x10a84992 */
  if (!C.zf) goto L_10a84992;
  /* 10a849b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a849b9 jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a849be:;
  /* 10a849be cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a849c2 je 0x10a84a06 */
  if (C.zf) goto L_10a84a06;
  /* 10a849c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a849c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a849cd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a849d0 je 0x10a84a06 */
  if (C.zf) goto L_10a84a06;
  /* 10a849d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a849d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a849db cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a849de je 0x10a84a06 */
  if (C.zf) goto L_10a84a06;
L_10a849e0:;
  /* 10a849e0 push 0x10aab7b8 */
  push32((uint32_t)(0x10aab7b8u));
  /* 10a849e5 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a849ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10a849ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10a849ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10a849f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a849f2 call 0x10a83450 */
  push32(0x10a849f7u); f_10a83450();
  /* 10a849f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a849fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a849fd jne 0x10a84a00 */
  if (!C.zf) goto L_10a84a00;
  /* 10a849ff int3  */
  x86_unimpl("int3 @ 0x10a849ff");
L_10a84a00:;
  /* 10a84a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84a04 jne 0x10a849e0 */
  if (!C.zf) goto L_10a849e0;
L_10a84a06:;
  /* 10a84a06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84a09 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84a0a call 0x10a85990 */
  push32(0x10a84a0fu); f_10a85990();
  /* 10a84a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84a14 jne 0x10a84a37 */
  if (!C.zf) goto L_10a84a37;
  /* 10a84a16 push 0x10aab980 */
  push32((uint32_t)(0x10aab980u));
  /* 10a84a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84a1d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10a84a22 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84a27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84a29 call 0x10a83450 */
  push32(0x10a84a2eu); f_10a83450();
  /* 10a84a2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84a31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84a34 jne 0x10a84a37 */
  if (!C.zf) goto L_10a84a37;
  /* 10a84a36 int3  */
  x86_unimpl("int3 @ 0x10a84a36");
L_10a84a37:;
  /* 10a84a37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a84a3b jne 0x10a84a06 */
  if (!C.zf) goto L_10a84a06;
  /* 10a84a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84a40 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84a43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a84a46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84a49 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84a4d jne 0x10a84a56 */
  if (!C.zf) goto L_10a84a56;
  /* 10a84a4f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10a84a56:;
  /* 10a84a56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84a5a je 0x10a84a9a */
  if (C.zf) goto L_10a84a9a;
L_10a84a5c:;
  /* 10a84a5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84a5f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84a66 jne 0x10a84a71 */
  if (!C.zf) goto L_10a84a71;
  /* 10a84a68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84a6b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84a6f je 0x10a84a92 */
  if (C.zf) goto L_10a84a92;
L_10a84a71:;
  /* 10a84a71 push 0x10aab938 */
  push32((uint32_t)(0x10aab938u));
  /* 10a84a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84a78 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10a84a7d push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84a82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84a84 call 0x10a83450 */
  push32(0x10a84a89u); f_10a83450();
  /* 10a84a89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84a8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84a8f jne 0x10a84a92 */
  if (!C.zf) goto L_10a84a92;
  /* 10a84a91 int3  */
  x86_unimpl("int3 @ 0x10a84a91");
L_10a84a92:;
  /* 10a84a92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84a94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84a96 jne 0x10a84a5c */
  if (!C.zf) goto L_10a84a5c;
  /* 10a84a98 jmp 0x10a84afe */
  goto L_10a84afe;
L_10a84a9a:;
  /* 10a84a9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84a9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a84aa0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a84aa5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84aa8 jne 0x10a84abf */
  if (!C.zf) goto L_10a84abf;
  /* 10a84aaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a84aad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a84ab3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84ab6 jne 0x10a84abf */
  if (!C.zf) goto L_10a84abf;
  /* 10a84ab8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10a84abf:;
  /* 10a84abf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84ac2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a84ac5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a84aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a84acd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a84ad3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84ad5 je 0x10a84af8 */
  if (C.zf) goto L_10a84af8;
  /* 10a84ad7 push 0x10aab8fc */
  push32((uint32_t)(0x10aab8fcu));
  /* 10a84adc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ade push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10a84ae3 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84ae8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84aea call 0x10a83450 */
  push32(0x10a84aefu); f_10a83450();
  /* 10a84aef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84af2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84af5 jne 0x10a84af8 */
  if (!C.zf) goto L_10a84af8;
  /* 10a84af7 int3  */
  x86_unimpl("int3 @ 0x10a84af7");
L_10a84af8:;
  /* 10a84af8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84afa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a84afc jne 0x10a84abf */
  if (!C.zf) goto L_10a84abf;
L_10a84afe:;
  /* 10a84afe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84b02 je 0x10a84b29 */
  if (C.zf) goto L_10a84b29;
  /* 10a84b04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84b07 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b0a push eax */
  push32((uint32_t)(EAX));
  /* 10a84b0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84b0e push ecx */
  push32((uint32_t)(ECX));
  /* 10a84b0f call 0x10a88310 */
  push32(0x10a84b14u); f_10a88310();
  /* 10a84b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a84b1a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84b1e jne 0x10a84b27 */
  if (!C.zf) goto L_10a84b27;
  /* 10a84b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84b22 jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a84b27:;
  /* 10a84b27 jmp 0x10a84b4c */
  goto L_10a84b4c;
L_10a84b29:;
  /* 10a84b29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84b2c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b2f push edx */
  push32((uint32_t)(EDX));
  /* 10a84b30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a84b33 push eax */
  push32((uint32_t)(EAX));
  /* 10a84b34 call 0x10a88260 */
  push32(0x10a84b39u); f_10a88260();
  /* 10a84b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b3c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a84b3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84b43 jne 0x10a84b4c */
  if (!C.zf) goto L_10a84b4c;
  /* 10a84b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84b47 jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a84b4c:;
  /* 10a84b4c mov ecx, dword ptr [0x10aaea88] */
  ECX = (r32((uint32_t)(0x10aaea88)));
  /* 10a84b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b55 mov dword ptr [0x10aaea88], ecx */
  w32((uint32_t)(0x10aaea88), (ECX));
  /* 10a84b5b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84b5f jne 0x10a84bb7 */
  if (!C.zf) goto L_10a84bb7;
  /* 10a84b61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84b64 mov eax, dword ptr [0x10ab06fc] */
  EAX = (r32((uint32_t)(0x10ab06fc)));
  /* 10a84b69 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84b6c mov dword ptr [0x10ab06fc], eax */
  w32((uint32_t)(0x10ab06fc), (EAX));
  /* 10a84b71 mov ecx, dword ptr [0x10ab06fc] */
  ECX = (r32((uint32_t)(0x10ab06fc)));
  /* 10a84b77 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b7a mov dword ptr [0x10ab06fc], ecx */
  w32((uint32_t)(0x10ab06fc), (ECX));
  /* 10a84b80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84b83 mov eax, dword ptr [0x10ab0704] */
  EAX = (r32((uint32_t)(0x10ab0704)));
  /* 10a84b88 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84b8b mov dword ptr [0x10ab0704], eax */
  w32((uint32_t)(0x10ab0704), (EAX));
  /* 10a84b90 mov ecx, dword ptr [0x10ab0704] */
  ECX = (r32((uint32_t)(0x10ab0704)));
  /* 10a84b96 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84b99 mov dword ptr [0x10ab0704], ecx */
  w32((uint32_t)(0x10ab0704), (ECX));
  /* 10a84b9f mov edx, dword ptr [0x10ab0704] */
  EDX = (r32((uint32_t)(0x10ab0704)));
  /* 10a84ba5 cmp edx, dword ptr [0x10ab0708] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ab0708))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84bab jbe 0x10a84bb7 */
  if ((C.cf||C.zf)) goto L_10a84bb7;
  /* 10a84bad mov eax, dword ptr [0x10ab0704] */
  EAX = (r32((uint32_t)(0x10ab0704)));
  /* 10a84bb2 mov dword ptr [0x10ab0708], eax */
  w32((uint32_t)(0x10ab0708), (EAX));
L_10a84bb7:;
  /* 10a84bb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84bba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84bbd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a84bc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84bc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84bc6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84bc9 jbe 0x10a84bef */
  if ((C.cf||C.zf)) goto L_10a84bef;
  /* 10a84bcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84bce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84bd1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84bd4 push edx */
  push32((uint32_t)(EDX));
  /* 10a84bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84bd7 mov al, byte ptr [0x10aaea92] */
  AL = (r8((uint32_t)(0x10aaea92)));
  /* 10a84bdc push eax */
  push32((uint32_t)(EAX));
  /* 10a84bdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84be0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84be3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84be6 push edx */
  push32((uint32_t)(EDX));
  /* 10a84be7 call 0x10a88100 */
  push32(0x10a84becu); f_10a88100();
  /* 10a84bec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a84bef:;
  /* 10a84bef push 4 */
  push32((uint32_t)(0x4u));
  /* 10a84bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84bf3 mov al, byte ptr [0x10aaea90] */
  AL = (r8((uint32_t)(0x10aaea90)));
  /* 10a84bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10a84bf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84bfc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84bff push ecx */
  push32((uint32_t)(ECX));
  /* 10a84c00 call 0x10a88100 */
  push32(0x10a84c05u); f_10a88100();
  /* 10a84c05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84c08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c0c jne 0x10a84c29 */
  if (!C.zf) goto L_10a84c29;
  /* 10a84c0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a84c14 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a84c17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c1a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a84c1d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10a84c20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c23 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a84c26 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10a84c29:;
  /* 10a84c29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84c2f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10a84c32:;
  /* 10a84c32 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c36 jne 0x10a84c67 */
  if (!C.zf) goto L_10a84c67;
  /* 10a84c38 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c3c jne 0x10a84c46 */
  if (!C.zf) goto L_10a84c46;
  /* 10a84c3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c41 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c44 je 0x10a84c67 */
  if (C.zf) goto L_10a84c67;
L_10a84c46:;
  /* 10a84c46 push 0x10aab8c8 */
  push32((uint32_t)(0x10aab8c8u));
  /* 10a84c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84c4d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10a84c52 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84c57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84c59 call 0x10a83450 */
  push32(0x10a84c5eu); f_10a83450();
  /* 10a84c5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84c61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c64 jne 0x10a84c67 */
  if (!C.zf) goto L_10a84c67;
  /* 10a84c66 int3  */
  x86_unimpl("int3 @ 0x10a84c66");
L_10a84c67:;
  /* 10a84c67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84c69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a84c6b jne 0x10a84c32 */
  if (!C.zf) goto L_10a84c32;
  /* 10a84c6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c70 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c73 je 0x10a84c7b */
  if (C.zf) goto L_10a84c7b;
  /* 10a84c75 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c79 je 0x10a84c83 */
  if (C.zf) goto L_10a84c83;
L_10a84c7b:;
  /* 10a84c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84c7e jmp 0x10a84d6a */
  goto L_10a84d6a;
L_10a84c83:;
  /* 10a84c83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84c89 je 0x10a84c9b */
  if (C.zf) goto L_10a84c9b;
  /* 10a84c8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c8e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a84c90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84c93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a84c96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a84c99 jmp 0x10a84cd7 */
  goto L_10a84cd7;
L_10a84c9b:;
  /* 10a84c9b mov eax, dword ptr [0x10ab06f8] */
  EAX = (r32((uint32_t)(0x10ab06f8)));
  /* 10a84ca0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84ca3 je 0x10a84cc6 */
  if (C.zf) goto L_10a84cc6;
  /* 10a84ca5 push 0x10aab8ac */
  push32((uint32_t)(0x10aab8acu));
  /* 10a84caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84cac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10a84cb1 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84cb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84cb8 call 0x10a83450 */
  push32(0x10a84cbdu); f_10a83450();
  /* 10a84cbd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84cc3 jne 0x10a84cc6 */
  if (!C.zf) goto L_10a84cc6;
  /* 10a84cc5 int3  */
  x86_unimpl("int3 @ 0x10a84cc5");
L_10a84cc6:;
  /* 10a84cc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84cc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84cca jne 0x10a84c9b */
  if (!C.zf) goto L_10a84c9b;
  /* 10a84ccc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84ccf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a84cd2 mov dword ptr [0x10ab06f8], eax */
  w32((uint32_t)(0x10ab06f8), (EAX));
L_10a84cd7:;
  /* 10a84cd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84cda cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84cde je 0x10a84cef */
  if (C.zf) goto L_10a84cef;
  /* 10a84ce0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84ce3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a84ce6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84ce9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a84ceb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a84ced jmp 0x10a84d2a */
  goto L_10a84d2a;
L_10a84cef:;
  /* 10a84cef mov eax, dword ptr [0x10ab0700] */
  EAX = (r32((uint32_t)(0x10ab0700)));
  /* 10a84cf4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84cf7 je 0x10a84d1a */
  if (C.zf) goto L_10a84d1a;
  /* 10a84cf9 push 0x10aab890 */
  push32((uint32_t)(0x10aab890u));
  /* 10a84cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84d00 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10a84d05 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84d0c call 0x10a83450 */
  push32(0x10a84d11u); f_10a83450();
  /* 10a84d11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84d14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84d17 jne 0x10a84d1a */
  if (!C.zf) goto L_10a84d1a;
  /* 10a84d19 int3  */
  x86_unimpl("int3 @ 0x10a84d19");
L_10a84d1a:;
  /* 10a84d1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84d1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84d1e jne 0x10a84cef */
  if (!C.zf) goto L_10a84cef;
  /* 10a84d20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84d23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a84d25 mov dword ptr [0x10ab0700], eax */
  w32((uint32_t)(0x10ab0700), (EAX));
L_10a84d2a:;
  /* 10a84d2a cmp dword ptr [0x10ab0700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84d31 je 0x10a84d41 */
  if (C.zf) goto L_10a84d41;
  /* 10a84d33 mov ecx, dword ptr [0x10ab0700] */
  ECX = (r32((uint32_t)(0x10ab0700)));
  /* 10a84d39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84d3c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a84d3f jmp 0x10a84d49 */
  goto L_10a84d49;
L_10a84d41:;
  /* 10a84d41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84d44 mov dword ptr [0x10ab06f8], eax */
  w32((uint32_t)(0x10ab06f8), (EAX));
L_10a84d49:;
  /* 10a84d49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84d4c mov edx, dword ptr [0x10ab0700] */
  EDX = (r32((uint32_t)(0x10ab0700)));
  /* 10a84d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a84d54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84d57 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a84d5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a84d61 mov dword ptr [0x10ab0700], ecx */
  w32((uint32_t)(0x10ab0700), (ECX));
  /* 10a84d67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a84d6a:;
  /* 10a84d6a pop edi */
  EDI = (pop32());
  /* 10a84d6b pop esi */
  ESI = (pop32());
  /* 10a84d6c pop ebx */
  EBX = (pop32());
  /* 10a84d6d mov esp, ebp */
  ESP = (EBP);
  /* 10a84d6f pop ebp */
  EBP = (pop32());
  /* 10a84d70 ret  */
  ESPCHK(0x10a84860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d80 @ 0x10a84d80 (27 bytes, 13 insns) */
void f_10a84d80(void) {
  FTRACE(0x10a84d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84d81 mov ebp, esp */
  EBP = (ESP);
  /* 10a84d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84d87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84d89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84d8c push eax */
  push32((uint32_t)(EAX));
  /* 10a84d8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84d90 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84d91 call 0x10a84da0 */
  push32(0x10a84d96u); f_10a84da0();
  /* 10a84d96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84d99 pop ebp */
  EBP = (pop32());
  /* 10a84d9a ret  */
  ESPCHK(0x10a84d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x10a84da0 (64 bytes, 27 insns) */
void f_10a84da0(void) {
  FTRACE(0x10a84da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84da1 mov ebp, esp */
  EBP = (ESP);
  /* 10a84da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84da4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a84da6 call 0x10a87d90 */
  push32(0x10a84dabu); f_10a87d90();
  /* 10a84dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84dae push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84db0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a84db3 push eax */
  push32((uint32_t)(EAX));
  /* 10a84db4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a84db7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84db8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a84dbb push edx */
  push32((uint32_t)(EDX));
  /* 10a84dbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84dbf push eax */
  push32((uint32_t)(EAX));
  /* 10a84dc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84dc4 call 0x10a84860 */
  push32(0x10a84dc9u); f_10a84860();
  /* 10a84dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84dcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a84dcf push 9 */
  push32((uint32_t)(0x9u));
  /* 10a84dd1 call 0x10a87e30 */
  push32(0x10a84dd6u); f_10a87e30();
  /* 10a84dd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84dd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84ddc mov esp, ebp */
  ESP = (EBP);
  /* 10a84dde pop ebp */
  EBP = (pop32());
  /* 10a84ddf ret  */
  ESPCHK(0x10a84da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de0 @ 0x10a84de0 (19 bytes, 9 insns) */
void f_10a84de0(void) {
  FTRACE(0x10a84de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84de1 mov ebp, esp */
  EBP = (ESP);
  /* 10a84de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84de5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84de8 push eax */
  push32((uint32_t)(EAX));
  /* 10a84de9 call 0x10a84e20 */
  push32(0x10a84deeu); f_10a84e20();
  /* 10a84dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84df1 pop ebp */
  EBP = (pop32());
  /* 10a84df2 ret  */
  ESPCHK(0x10a84de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e00 @ 0x10a84e00 (19 bytes, 9 insns) */
void f_10a84e00(void) {
  FTRACE(0x10a84e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84e01 mov ebp, esp */
  EBP = (ESP);
  /* 10a84e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84e08 push eax */
  push32((uint32_t)(EAX));
  /* 10a84e09 call 0x10a84e50 */
  push32(0x10a84e0eu); f_10a84e50();
  /* 10a84e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84e11 pop ebp */
  EBP = (pop32());
  /* 10a84e12 ret  */
  ESPCHK(0x10a84e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e20 @ 0x10a84e20 (41 bytes, 16 insns) */
void f_10a84e20(void) {
  FTRACE(0x10a84e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84e21 mov ebp, esp */
  EBP = (ESP);
  /* 10a84e23 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a84e25 call 0x10a87d90 */
  push32(0x10a84e2au); f_10a87d90();
  /* 10a84e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84e2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84e30 push eax */
  push32((uint32_t)(EAX));
  /* 10a84e31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84e34 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84e35 call 0x10a84e50 */
  push32(0x10a84e3au); f_10a84e50();
  /* 10a84e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84e3d push 9 */
  push32((uint32_t)(0x9u));
  /* 10a84e3f call 0x10a87e30 */
  push32(0x10a84e44u); f_10a87e30();
  /* 10a84e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84e47 pop ebp */
  EBP = (pop32());
  /* 10a84e48 ret  */
  ESPCHK(0x10a84e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x10a84e50 (1004 bytes, 342 insns) */
void f_10a84e50(void) {
  FTRACE(0x10a84e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a84e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a84e51 mov ebp, esp */
  EBP = (ESP);
  /* 10a84e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84e54 push ebx */
  push32((uint32_t)(EBX));
  /* 10a84e55 push esi */
  push32((uint32_t)(ESI));
  /* 10a84e56 push edi */
  push32((uint32_t)(EDI));
  /* 10a84e57 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a84e5c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a84e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84e61 je 0x10a84e93 */
  if (C.zf) goto L_10a84e93;
L_10a84e63:;
  /* 10a84e63 call 0x10a85530 */
  push32(0x10a84e68u); f_10a85530();
  /* 10a84e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84e6a jne 0x10a84e8d */
  if (!C.zf) goto L_10a84e8d;
  /* 10a84e6c push 0x10aab87c */
  push32((uint32_t)(0x10aab87cu));
  /* 10a84e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84e73 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10a84e78 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84e7f call 0x10a83450 */
  push32(0x10a84e84u); f_10a83450();
  /* 10a84e84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84e87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84e8a jne 0x10a84e8d */
  if (!C.zf) goto L_10a84e8d;
  /* 10a84e8c int3  */
  x86_unimpl("int3 @ 0x10a84e8c");
L_10a84e8d:;
  /* 10a84e8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84e8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84e91 jne 0x10a84e63 */
  if (!C.zf) goto L_10a84e63;
L_10a84e93:;
  /* 10a84e93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84e97 jne 0x10a84e9e */
  if (!C.zf) goto L_10a84e9e;
  /* 10a84e99 jmp 0x10a85235 */
  goto L_10a85235;
L_10a84e9e:;
  /* 10a84e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a84ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10a84ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84ead push eax */
  push32((uint32_t)(EAX));
  /* 10a84eae push 3 */
  push32((uint32_t)(0x3u));
  /* 10a84eb0 call dword ptr [0x10aaec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaec90))), 0x10a84eb6u);
  /* 10a84eb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84ebb jne 0x10a84ee8 */
  if (!C.zf) goto L_10a84ee8;
L_10a84ebd:;
  /* 10a84ebd push 0x10aabb40 */
  push32((uint32_t)(0x10aabb40u));
  /* 10a84ec2 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a84ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84ecf call 0x10a83450 */
  push32(0x10a84ed4u); f_10a83450();
  /* 10a84ed4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84ed7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84eda jne 0x10a84edd */
  if (!C.zf) goto L_10a84edd;
  /* 10a84edc int3  */
  x86_unimpl("int3 @ 0x10a84edc");
L_10a84edd:;
  /* 10a84edd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a84edf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a84ee1 jne 0x10a84ebd */
  if (!C.zf) goto L_10a84ebd;
  /* 10a84ee3 jmp 0x10a85235 */
  goto L_10a85235;
L_10a84ee8:;
  /* 10a84ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84eeb push edx */
  push32((uint32_t)(EDX));
  /* 10a84eec call 0x10a85990 */
  push32(0x10a84ef1u); f_10a85990();
  /* 10a84ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84ef6 jne 0x10a84f19 */
  if (!C.zf) goto L_10a84f19;
  /* 10a84ef8 push 0x10aab980 */
  push32((uint32_t)(0x10aab980u));
  /* 10a84efd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84eff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10a84f04 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84f09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84f0b call 0x10a83450 */
  push32(0x10a84f10u); f_10a83450();
  /* 10a84f10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84f13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84f16 jne 0x10a84f19 */
  if (!C.zf) goto L_10a84f19;
  /* 10a84f18 int3  */
  x86_unimpl("int3 @ 0x10a84f18");
L_10a84f19:;
  /* 10a84f19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84f1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84f1d jne 0x10a84ee8 */
  if (!C.zf) goto L_10a84ee8;
  /* 10a84f1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a84f22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a84f25 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a84f28:;
  /* 10a84f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84f2b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a84f2e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a84f33 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84f36 je 0x10a84f7b */
  if (C.zf) goto L_10a84f7b;
  /* 10a84f38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84f3b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84f3f je 0x10a84f7b */
  if (C.zf) goto L_10a84f7b;
  /* 10a84f41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84f44 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a84f47 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a84f4c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84f4f je 0x10a84f7b */
  if (C.zf) goto L_10a84f7b;
  /* 10a84f51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84f54 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84f58 je 0x10a84f7b */
  if (C.zf) goto L_10a84f7b;
  /* 10a84f5a push 0x10aabb18 */
  push32((uint32_t)(0x10aabb18u));
  /* 10a84f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84f61 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10a84f66 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a84f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a84f6d call 0x10a83450 */
  push32(0x10a84f72u); f_10a83450();
  /* 10a84f72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84f75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84f78 jne 0x10a84f7b */
  if (!C.zf) goto L_10a84f7b;
  /* 10a84f7a int3  */
  x86_unimpl("int3 @ 0x10a84f7a");
L_10a84f7b:;
  /* 10a84f7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a84f7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a84f7f jne 0x10a84f28 */
  if (!C.zf) goto L_10a84f28;
  /* 10a84f81 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a84f86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a84f89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84f8b jne 0x10a85056 */
  if (!C.zf) goto L_10a85056;
  /* 10a84f91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a84f93 mov cl, byte ptr [0x10aaea90] */
  CL = (r8((uint32_t)(0x10aaea90)));
  /* 10a84f99 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84f9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84f9d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84fa0 push edx */
  push32((uint32_t)(EDX));
  /* 10a84fa1 call 0x10a854a0 */
  push32(0x10a84fa6u); f_10a854a0();
  /* 10a84fa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84fab jne 0x10a84ff0 */
  if (!C.zf) goto L_10a84ff0;
L_10a84fad:;
  /* 10a84fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84fb0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84fb3 push eax */
  push32((uint32_t)(EAX));
  /* 10a84fb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84fb7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a84fba push edx */
  push32((uint32_t)(EDX));
  /* 10a84fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84fbe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a84fc1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a84fc7 mov edx, dword ptr [ecx*4 + 0x10aaea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea94)));
  /* 10a84fce push edx */
  push32((uint32_t)(EDX));
  /* 10a84fcf push 0x10aabaec */
  push32((uint32_t)(0x10aabaecu));
  /* 10a84fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a84fda push 1 */
  push32((uint32_t)(0x1u));
  /* 10a84fdc call 0x10a83450 */
  push32(0x10a84fe1u); f_10a83450();
  /* 10a84fe1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a84fe4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a84fe7 jne 0x10a84fea */
  if (!C.zf) goto L_10a84fea;
  /* 10a84fe9 int3  */
  x86_unimpl("int3 @ 0x10a84fe9");
L_10a84fea:;
  /* 10a84fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a84fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a84fee jne 0x10a84fad */
  if (!C.zf) goto L_10a84fad;
L_10a84ff0:;
  /* 10a84ff0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a84ff2 mov cl, byte ptr [0x10aaea90] */
  CL = (r8((uint32_t)(0x10aaea90)));
  /* 10a84ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a84ff9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a84ffc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a84fff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85002 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10a85006 push edx */
  push32((uint32_t)(EDX));
  /* 10a85007 call 0x10a854a0 */
  push32(0x10a8500cu); f_10a854a0();
  /* 10a8500c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8500f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85011 jne 0x10a85056 */
  if (!C.zf) goto L_10a85056;
L_10a85013:;
  /* 10a85013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85016 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85019 push eax */
  push32((uint32_t)(EAX));
  /* 10a8501a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8501d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a85020 push edx */
  push32((uint32_t)(EDX));
  /* 10a85021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85024 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a85027 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8502d mov edx, dword ptr [ecx*4 + 0x10aaea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea94)));
  /* 10a85034 push edx */
  push32((uint32_t)(EDX));
  /* 10a85035 push 0x10aabac0 */
  push32((uint32_t)(0x10aabac0u));
  /* 10a8503a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8503c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8503e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85040 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a85042 call 0x10a83450 */
  push32(0x10a85047u); f_10a83450();
  /* 10a85047 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8504a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8504d jne 0x10a85050 */
  if (!C.zf) goto L_10a85050;
  /* 10a8504f int3  */
  x86_unimpl("int3 @ 0x10a8504f");
L_10a85050:;
  /* 10a85050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85054 jne 0x10a85013 */
  if (!C.zf) goto L_10a85013;
L_10a85056:;
  /* 10a85056 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85059 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8505d jne 0x10a850cb */
  if (!C.zf) goto L_10a850cb;
L_10a8505f:;
  /* 10a8505f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85062 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85069 jne 0x10a85074 */
  if (!C.zf) goto L_10a85074;
  /* 10a8506b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8506e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85072 je 0x10a85095 */
  if (C.zf) goto L_10a85095;
L_10a85074:;
  /* 10a85074 push 0x10aaba80 */
  push32((uint32_t)(0x10aaba80u));
  /* 10a85079 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8507b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10a85080 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a85085 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a85087 call 0x10a83450 */
  push32(0x10a8508cu); f_10a83450();
  /* 10a8508c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8508f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85092 jne 0x10a85095 */
  if (!C.zf) goto L_10a85095;
  /* 10a85094 int3  */
  x86_unimpl("int3 @ 0x10a85094");
L_10a85095:;
  /* 10a85095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a85097 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85099 jne 0x10a8505f */
  if (!C.zf) goto L_10a8505f;
  /* 10a8509b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8509e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a850a1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a850a4 push eax */
  push32((uint32_t)(EAX));
  /* 10a850a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a850a7 mov cl, byte ptr [0x10aaea91] */
  CL = (r8((uint32_t)(0x10aaea91)));
  /* 10a850ad push ecx */
  push32((uint32_t)(ECX));
  /* 10a850ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a850b1 push edx */
  push32((uint32_t)(EDX));
  /* 10a850b2 call 0x10a88100 */
  push32(0x10a850b7u); f_10a88100();
  /* 10a850b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a850ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a850bd push eax */
  push32((uint32_t)(EAX));
  /* 10a850be call 0x10a88500 */
  push32(0x10a850c3u); f_10a88500();
  /* 10a850c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a850c6 jmp 0x10a85235 */
  goto L_10a85235;
L_10a850cb:;
  /* 10a850cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a850ce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a850d2 jne 0x10a850e1 */
  if (!C.zf) goto L_10a850e1;
  /* 10a850d4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a850d8 jne 0x10a850e1 */
  if (!C.zf) goto L_10a850e1;
  /* 10a850da mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10a850e1:;
  /* 10a850e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a850e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a850e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a850ea je 0x10a8510d */
  if (C.zf) goto L_10a8510d;
  /* 10a850ec push 0x10aaba60 */
  push32((uint32_t)(0x10aaba60u));
  /* 10a850f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a850f3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10a850f8 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a850fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a850ff call 0x10a83450 */
  push32(0x10a85104u); f_10a83450();
  /* 10a85104 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85107 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8510a jne 0x10a8510d */
  if (!C.zf) goto L_10a8510d;
  /* 10a8510c int3  */
  x86_unimpl("int3 @ 0x10a8510c");
L_10a8510d:;
  /* 10a8510d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8510f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85111 jne 0x10a850e1 */
  if (!C.zf) goto L_10a850e1;
  /* 10a85113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85116 mov eax, dword ptr [0x10ab0704] */
  EAX = (r32((uint32_t)(0x10ab0704)));
  /* 10a8511b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8511e mov dword ptr [0x10ab0704], eax */
  w32((uint32_t)(0x10ab0704), (EAX));
  /* 10a85123 mov ecx, dword ptr [0x10aaea84] */
  ECX = (r32((uint32_t)(0x10aaea84)));
  /* 10a85129 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8512c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8512e jne 0x10a8520c */
  if (!C.zf) goto L_10a8520c;
  /* 10a85134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85137 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8513a je 0x10a8514c */
  if (C.zf) goto L_10a8514c;
  /* 10a8513c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8513f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a85141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85144 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a85147 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a8514a jmp 0x10a8518a */
  goto L_10a8518a;
L_10a8514c:;
  /* 10a8514c mov ecx, dword ptr [0x10ab06f8] */
  ECX = (r32((uint32_t)(0x10ab06f8)));
  /* 10a85152 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85155 je 0x10a85178 */
  if (C.zf) goto L_10a85178;
  /* 10a85157 push 0x10aaba48 */
  push32((uint32_t)(0x10aaba48u));
  /* 10a8515c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8515e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10a85163 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a85168 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8516a call 0x10a83450 */
  push32(0x10a8516fu); f_10a83450();
  /* 10a8516f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85172 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85175 jne 0x10a85178 */
  if (!C.zf) goto L_10a85178;
  /* 10a85177 int3  */
  x86_unimpl("int3 @ 0x10a85177");
L_10a85178:;
  /* 10a85178 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8517a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8517c jne 0x10a8514c */
  if (!C.zf) goto L_10a8514c;
  /* 10a8517e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85181 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a85184 mov dword ptr [0x10ab06f8], ecx */
  w32((uint32_t)(0x10ab06f8), (ECX));
L_10a8518a:;
  /* 10a8518a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8518d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85191 je 0x10a851a2 */
  if (C.zf) goto L_10a851a2;
  /* 10a85193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85196 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a85199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8519c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a8519e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a851a0 jmp 0x10a851df */
  goto L_10a851df;
L_10a851a2:;
  /* 10a851a2 mov ecx, dword ptr [0x10ab0700] */
  ECX = (r32((uint32_t)(0x10ab0700)));
  /* 10a851a8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a851ab je 0x10a851ce */
  if (C.zf) goto L_10a851ce;
  /* 10a851ad push 0x10aaba30 */
  push32((uint32_t)(0x10aaba30u));
  /* 10a851b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a851b4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10a851b9 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a851be push 2 */
  push32((uint32_t)(0x2u));
  /* 10a851c0 call 0x10a83450 */
  push32(0x10a851c5u); f_10a83450();
  /* 10a851c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a851c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a851cb jne 0x10a851ce */
  if (!C.zf) goto L_10a851ce;
  /* 10a851cd int3  */
  x86_unimpl("int3 @ 0x10a851cd");
L_10a851ce:;
  /* 10a851ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a851d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a851d2 jne 0x10a851a2 */
  if (!C.zf) goto L_10a851a2;
  /* 10a851d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a851d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a851d9 mov dword ptr [0x10ab0700], ecx */
  w32((uint32_t)(0x10ab0700), (ECX));
L_10a851df:;
  /* 10a851df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a851e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a851e5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a851e8 push eax */
  push32((uint32_t)(EAX));
  /* 10a851e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a851eb mov cl, byte ptr [0x10aaea91] */
  CL = (r8((uint32_t)(0x10aaea91)));
  /* 10a851f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a851f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a851f5 push edx */
  push32((uint32_t)(EDX));
  /* 10a851f6 call 0x10a88100 */
  push32(0x10a851fbu); f_10a88100();
  /* 10a851fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a851fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85201 push eax */
  push32((uint32_t)(EAX));
  /* 10a85202 call 0x10a88500 */
  push32(0x10a85207u); f_10a88500();
  /* 10a85207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8520a jmp 0x10a85235 */
  goto L_10a85235;
L_10a8520c:;
  /* 10a8520c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8520f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10a85216 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85219 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a8521c push eax */
  push32((uint32_t)(EAX));
  /* 10a8521d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8521f mov cl, byte ptr [0x10aaea91] */
  CL = (r8((uint32_t)(0x10aaea91)));
  /* 10a85225 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85226 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85229 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8522c push edx */
  push32((uint32_t)(EDX));
  /* 10a8522d call 0x10a88100 */
  push32(0x10a85232u); f_10a88100();
  /* 10a85232 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a85235:;
  /* 10a85235 pop edi */
  EDI = (pop32());
  /* 10a85236 pop esi */
  ESI = (pop32());
  /* 10a85237 pop ebx */
  EBX = (pop32());
  /* 10a85238 mov esp, ebp */
  ESP = (EBP);
  /* 10a8523a pop ebp */
  EBP = (pop32());
  /* 10a8523b ret  */
  ESPCHK(0x10a84e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x10a85240 (19 bytes, 9 insns) */
void f_10a85240(void) {
  FTRACE(0x10a85240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85240 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85241 mov ebp, esp */
  EBP = (ESP);
  /* 10a85243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a85245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85248 push eax */
  push32((uint32_t)(EAX));
  /* 10a85249 call 0x10a85260 */
  push32(0x10a8524eu); f_10a85260();
  /* 10a8524e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85251 pop ebp */
  EBP = (pop32());
  /* 10a85252 ret  */
  ESPCHK(0x10a85240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x10a85260 (342 bytes, 119 insns) */
void f_10a85260(void) {
  FTRACE(0x10a85260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85260 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85261 mov ebp, esp */
  EBP = (ESP);
  /* 10a85263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85266 push ebx */
  push32((uint32_t)(EBX));
  /* 10a85267 push esi */
  push32((uint32_t)(ESI));
  /* 10a85268 push edi */
  push32((uint32_t)(EDI));
  /* 10a85269 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a8526e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a85271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85273 je 0x10a852a5 */
  if (C.zf) goto L_10a852a5;
L_10a85275:;
  /* 10a85275 call 0x10a85530 */
  push32(0x10a8527au); f_10a85530();
  /* 10a8527a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8527c jne 0x10a8529f */
  if (!C.zf) goto L_10a8529f;
  /* 10a8527e push 0x10aab87c */
  push32((uint32_t)(0x10aab87cu));
  /* 10a85283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85285 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10a8528a push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a8528f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a85291 call 0x10a83450 */
  push32(0x10a85296u); f_10a83450();
  /* 10a85296 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85299 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8529c jne 0x10a8529f */
  if (!C.zf) goto L_10a8529f;
  /* 10a8529e int3  */
  x86_unimpl("int3 @ 0x10a8529e");
L_10a8529f:;
  /* 10a8529f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a852a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a852a3 jne 0x10a85275 */
  if (!C.zf) goto L_10a85275;
L_10a852a5:;
  /* 10a852a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a852a7 call 0x10a87d90 */
  push32(0x10a852acu); f_10a87d90();
  /* 10a852ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a852af:;
  /* 10a852af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a852b2 push edx */
  push32((uint32_t)(EDX));
  /* 10a852b3 call 0x10a85990 */
  push32(0x10a852b8u); f_10a85990();
  /* 10a852b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a852bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a852bd jne 0x10a852e0 */
  if (!C.zf) goto L_10a852e0;
  /* 10a852bf push 0x10aab980 */
  push32((uint32_t)(0x10aab980u));
  /* 10a852c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a852c6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10a852cb push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a852d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a852d2 call 0x10a83450 */
  push32(0x10a852d7u); f_10a83450();
  /* 10a852d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a852da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a852dd jne 0x10a852e0 */
  if (!C.zf) goto L_10a852e0;
  /* 10a852df int3  */
  x86_unimpl("int3 @ 0x10a852df");
L_10a852e0:;
  /* 10a852e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a852e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a852e4 jne 0x10a852af */
  if (!C.zf) goto L_10a852af;
  /* 10a852e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a852e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a852ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a852ef:;
  /* 10a852ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a852f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a852f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a852fa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a852fd je 0x10a85342 */
  if (C.zf) goto L_10a85342;
  /* 10a852ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85302 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85306 je 0x10a85342 */
  if (C.zf) goto L_10a85342;
  /* 10a85308 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8530b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a8530e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85313 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85316 je 0x10a85342 */
  if (C.zf) goto L_10a85342;
  /* 10a85318 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8531b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8531f je 0x10a85342 */
  if (C.zf) goto L_10a85342;
  /* 10a85321 push 0x10aabb18 */
  push32((uint32_t)(0x10aabb18u));
  /* 10a85326 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85328 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10a8532d push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a85332 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a85334 call 0x10a83450 */
  push32(0x10a85339u); f_10a83450();
  /* 10a85339 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8533c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8533f jne 0x10a85342 */
  if (!C.zf) goto L_10a85342;
  /* 10a85341 int3  */
  x86_unimpl("int3 @ 0x10a85341");
L_10a85342:;
  /* 10a85342 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a85344 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a85346 jne 0x10a852ef */
  if (!C.zf) goto L_10a852ef;
  /* 10a85348 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8534b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8534f jne 0x10a8535e */
  if (!C.zf) goto L_10a8535e;
  /* 10a85351 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85355 jne 0x10a8535e */
  if (!C.zf) goto L_10a8535e;
  /* 10a85357 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10a8535e:;
  /* 10a8535e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85361 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85365 je 0x10a85399 */
  if (C.zf) goto L_10a85399;
L_10a85367:;
  /* 10a85367 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8536a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a8536d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85370 je 0x10a85393 */
  if (C.zf) goto L_10a85393;
  /* 10a85372 push 0x10aaba60 */
  push32((uint32_t)(0x10aaba60u));
  /* 10a85377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85379 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10a8537e push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a85383 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a85385 call 0x10a83450 */
  push32(0x10a8538au); f_10a83450();
  /* 10a8538a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8538d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85390 jne 0x10a85393 */
  if (!C.zf) goto L_10a85393;
  /* 10a85392 int3  */
  x86_unimpl("int3 @ 0x10a85392");
L_10a85393:;
  /* 10a85393 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a85395 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85397 jne 0x10a85367 */
  if (!C.zf) goto L_10a85367;
L_10a85399:;
  /* 10a85399 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8539c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a8539f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a853a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a853a4 call 0x10a87e30 */
  push32(0x10a853a9u); f_10a87e30();
  /* 10a853a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a853ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a853af pop edi */
  EDI = (pop32());
  /* 10a853b0 pop esi */
  ESI = (pop32());
  /* 10a853b1 pop ebx */
  EBX = (pop32());
  /* 10a853b2 mov esp, ebp */
  ESP = (EBP);
  /* 10a853b4 pop ebp */
  EBP = (pop32());
  /* 10a853b5 ret  */
  ESPCHK(0x10a85260u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x10a853c0 (28 bytes, 11 insns) */
void f_10a853c0(void) {
  FTRACE(0x10a853c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a853c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a853c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a853c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a853c4 mov eax, dword ptr [0x10aaea8c] */
  EAX = (r32((uint32_t)(0x10aaea8c)));
  /* 10a853c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a853cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a853cf mov dword ptr [0x10aaea8c], ecx */
  w32((uint32_t)(0x10aaea8c), (ECX));
  /* 10a853d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a853d8 mov esp, ebp */
  ESP = (EBP);
  /* 10a853da pop ebp */
  EBP = (pop32());
  /* 10a853db ret  */
  ESPCHK(0x10a853c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e0 @ 0x10a853e0 (157 bytes, 59 insns) */
void f_10a853e0(void) {
  FTRACE(0x10a853e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a853e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a853e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a853e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a853e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a853e5 push esi */
  push32((uint32_t)(ESI));
  /* 10a853e6 push edi */
  push32((uint32_t)(EDI));
  /* 10a853e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a853e9 call 0x10a87d90 */
  push32(0x10a853eeu); f_10a87d90();
  /* 10a853ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a853f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a853f4 push eax */
  push32((uint32_t)(EAX));
  /* 10a853f5 call 0x10a85990 */
  push32(0x10a853fau); f_10a85990();
  /* 10a853fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a853fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a853ff je 0x10a8546c */
  if (C.zf) goto L_10a8546c;
  /* 10a85401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85404 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85407 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8540a:;
  /* 10a8540a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8540d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85410 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85415 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85418 je 0x10a8545d */
  if (C.zf) goto L_10a8545d;
  /* 10a8541a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8541d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85421 je 0x10a8545d */
  if (C.zf) goto L_10a8545d;
  /* 10a85423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85426 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85429 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8542e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85431 je 0x10a8545d */
  if (C.zf) goto L_10a8545d;
  /* 10a85433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85436 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8543a je 0x10a8545d */
  if (C.zf) goto L_10a8545d;
  /* 10a8543c push 0x10aabb18 */
  push32((uint32_t)(0x10aabb18u));
  /* 10a85441 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85443 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10a85448 push 0x10aab870 */
  push32((uint32_t)(0x10aab870u));
  /* 10a8544d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8544f call 0x10a83450 */
  push32(0x10a85454u); f_10a83450();
  /* 10a85454 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85457 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8545a jne 0x10a8545d */
  if (!C.zf) goto L_10a8545d;
  /* 10a8545c int3  */
  x86_unimpl("int3 @ 0x10a8545c");
L_10a8545d:;
  /* 10a8545d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8545f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a85461 jne 0x10a8540a */
  if (!C.zf) goto L_10a8540a;
  /* 10a85463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85466 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85469 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10a8546c:;
  /* 10a8546c push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8546e call 0x10a87e30 */
  push32(0x10a85473u); f_10a87e30();
  /* 10a85473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85476 pop edi */
  EDI = (pop32());
  /* 10a85477 pop esi */
  ESI = (pop32());
  /* 10a85478 pop ebx */
  EBX = (pop32());
  /* 10a85479 mov esp, ebp */
  ESP = (EBP);
  /* 10a8547b pop ebp */
  EBP = (pop32());
  /* 10a8547c ret  */
  ESPCHK(0x10a853e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x10a85480 (28 bytes, 11 insns) */
void f_10a85480(void) {
  FTRACE(0x10a85480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85480 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85481 mov ebp, esp */
  EBP = (ESP);
  /* 10a85483 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85484 mov eax, dword ptr [0x10aaec90] */
  EAX = (r32((uint32_t)(0x10aaec90)));
  /* 10a85489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8548c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8548f mov dword ptr [0x10aaec90], ecx */
  w32((uint32_t)(0x10aaec90), (ECX));
  /* 10a85495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85498 mov esp, ebp */
  ESP = (EBP);
  /* 10a8549a pop ebp */
  EBP = (pop32());
  /* 10a8549b ret  */
  ESPCHK(0x10a85480u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x10a854a0 (136 bytes, 55 insns) */
void f_10a854a0(void) {
  FTRACE(0x10a854a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a854a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a854a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a854a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a854a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a854a5 push esi */
  push32((uint32_t)(ESI));
  /* 10a854a6 push edi */
  push32((uint32_t)(EDI));
  /* 10a854a7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10a854ae:;
  /* 10a854ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a854b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a854b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a854b7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a854ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a854bc je 0x10a8551e */
  if (C.zf) goto L_10a8551e;
  /* 10a854be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a854c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a854c3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a854c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a854c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a854ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a854d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a854d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a854d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a854d9 je 0x10a8551c */
  if (C.zf) goto L_10a8551c;
L_10a854db:;
  /* 10a854db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a854de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a854e3 push eax */
  push32((uint32_t)(EAX));
  /* 10a854e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a854e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a854e9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10a854ec push edx */
  push32((uint32_t)(EDX));
  /* 10a854ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a854f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a854f3 push eax */
  push32((uint32_t)(EAX));
  /* 10a854f4 push 0x10aabb5c */
  push32((uint32_t)(0x10aabb5cu));
  /* 10a854f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a854fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a854fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a854ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85501 call 0x10a83450 */
  push32(0x10a85506u); f_10a83450();
  /* 10a85506 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85509 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8550c jne 0x10a8550f */
  if (!C.zf) goto L_10a8550f;
  /* 10a8550e int3  */
  x86_unimpl("int3 @ 0x10a8550e");
L_10a8550f:;
  /* 10a8550f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a85511 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85513 jne 0x10a854db */
  if (!C.zf) goto L_10a854db;
  /* 10a85515 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a8551c:;
  /* 10a8551c jmp 0x10a854ae */
  goto L_10a854ae;
L_10a8551e:;
  /* 10a8551e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85521 pop edi */
  EDI = (pop32());
  /* 10a85522 pop esi */
  ESI = (pop32());
  /* 10a85523 pop ebx */
  EBX = (pop32());
  /* 10a85524 mov esp, ebp */
  ESP = (EBP);
  /* 10a85526 pop ebp */
  EBP = (pop32());
  /* 10a85527 ret  */
  ESPCHK(0x10a854a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005530 @ 0x10a85530 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10a85530(void) {
  FTRACE(0x10a85530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85530 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85531 mov ebp, esp */
  EBP = (ESP);
  /* 10a85533 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85536 push ebx */
  push32((uint32_t)(EBX));
  /* 10a85537 push esi */
  push32((uint32_t)(ESI));
  /* 10a85538 push edi */
  push32((uint32_t)(EDI));
  /* 10a85539 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a85540 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a85545 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a85548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8554a jne 0x10a85556 */
  if (!C.zf) goto L_10a85556;
  /* 10a8554c mov eax, 1 */
  EAX = (0x1u);
  /* 10a85551 jmp 0x10a85888 */
  goto L_10a85888;
L_10a85556:;
  /* 10a85556 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85558 call 0x10a87d90 */
  push32(0x10a8555du); f_10a87d90();
  /* 10a8555d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85560 call 0x10a88570 */
  push32(0x10a85565u); f_10a88570();
  /* 10a85565 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a85568 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8556c je 0x10a85679 */
  if (C.zf) goto L_10a85679;
  /* 10a85572 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85576 je 0x10a85679 */
  if (C.zf) goto L_10a85679;
  /* 10a8557c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8557f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a85582 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a85585 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85588 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a8558b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8558f ja 0x10a85642 */
  if ((!C.cf&&!C.zf)) goto L_10a85642;
  /* 10a85595 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a85598 jmp dword ptr [eax*4 + 0x10a8588f] */
  switch (EAX) {
    case 0: goto L_10a8561a;
    case 1: goto L_10a855f2;
    case 2: goto L_10a855ca;
    case 3: goto L_10a8559f;
    default: x86_unimpl("switch@0x10a85598 out of table"); return;
  }
L_10a8559f:;
  /* 10a8559f push 0x10aabcb0 */
  push32((uint32_t)(0x10aabcb0u));
  /* 10a855a4 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a855a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855b1 call 0x10a83450 */
  push32(0x10a855b6u); f_10a83450();
  /* 10a855b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a855b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a855bc jne 0x10a855bf */
  if (!C.zf) goto L_10a855bf;
  /* 10a855be int3  */
  x86_unimpl("int3 @ 0x10a855be");
L_10a855bf:;
  /* 10a855bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a855c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a855c3 jne 0x10a8559f */
  if (!C.zf) goto L_10a8559f;
  /* 10a855c5 jmp 0x10a85668 */
  goto L_10a85668;
L_10a855ca:;
  /* 10a855ca push 0x10aabc8c */
  push32((uint32_t)(0x10aabc8cu));
  /* 10a855cf push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a855d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855da push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855dc call 0x10a83450 */
  push32(0x10a855e1u); f_10a83450();
  /* 10a855e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a855e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a855e7 jne 0x10a855ea */
  if (!C.zf) goto L_10a855ea;
  /* 10a855e9 int3  */
  x86_unimpl("int3 @ 0x10a855e9");
L_10a855ea:;
  /* 10a855ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a855ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a855ee jne 0x10a855ca */
  if (!C.zf) goto L_10a855ca;
  /* 10a855f0 jmp 0x10a85668 */
  goto L_10a85668;
L_10a855f2:;
  /* 10a855f2 push 0x10aabc68 */
  push32((uint32_t)(0x10aabc68u));
  /* 10a855f7 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a855fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a855fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85600 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85604 call 0x10a83450 */
  push32(0x10a85609u); f_10a83450();
  /* 10a85609 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8560c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8560f jne 0x10a85612 */
  if (!C.zf) goto L_10a85612;
  /* 10a85611 int3  */
  x86_unimpl("int3 @ 0x10a85611");
L_10a85612:;
  /* 10a85612 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85616 jne 0x10a855f2 */
  if (!C.zf) goto L_10a855f2;
  /* 10a85618 jmp 0x10a85668 */
  goto L_10a85668;
L_10a8561a:;
  /* 10a8561a push 0x10aabc44 */
  push32((uint32_t)(0x10aabc44u));
  /* 10a8561f push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a85624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85626 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85628 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8562a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8562c call 0x10a83450 */
  push32(0x10a85631u); f_10a83450();
  /* 10a85631 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85634 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85637 jne 0x10a8563a */
  if (!C.zf) goto L_10a8563a;
  /* 10a85639 int3  */
  x86_unimpl("int3 @ 0x10a85639");
L_10a8563a:;
  /* 10a8563a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8563c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8563e jne 0x10a8561a */
  if (!C.zf) goto L_10a8561a;
  /* 10a85640 jmp 0x10a85668 */
  goto L_10a85668;
L_10a85642:;
  /* 10a85642 push 0x10aabc18 */
  push32((uint32_t)(0x10aabc18u));
  /* 10a85647 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a8564c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8564e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85650 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85654 call 0x10a83450 */
  push32(0x10a85659u); f_10a83450();
  /* 10a85659 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8565c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8565f jne 0x10a85662 */
  if (!C.zf) goto L_10a85662;
  /* 10a85661 int3  */
  x86_unimpl("int3 @ 0x10a85661");
L_10a85662:;
  /* 10a85662 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a85664 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a85666 jne 0x10a85642 */
  if (!C.zf) goto L_10a85642;
L_10a85668:;
  /* 10a85668 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8566a call 0x10a87e30 */
  push32(0x10a8566fu); f_10a87e30();
  /* 10a8566f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85674 jmp 0x10a85888 */
  goto L_10a85888;
L_10a85679:;
  /* 10a85679 mov eax, dword ptr [0x10ab0700] */
  EAX = (r32((uint32_t)(0x10ab0700)));
  /* 10a8567e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a85681 jmp 0x10a8568b */
  goto L_10a8568b;
L_10a85683:;
  /* 10a85683 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85686 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a85688 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a8568b:;
  /* 10a8568b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8568f je 0x10a8587b */
  if (C.zf) goto L_10a8587b;
  /* 10a85695 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a8569c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8569f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a856a2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a856a8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a856ab je 0x10a856d0 */
  if (C.zf) goto L_10a856d0;
  /* 10a856ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a856b0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a856b4 je 0x10a856d0 */
  if (C.zf) goto L_10a856d0;
  /* 10a856b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a856b9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a856bc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a856c2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a856c5 je 0x10a856d0 */
  if (C.zf) goto L_10a856d0;
  /* 10a856c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a856ca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a856ce jne 0x10a856e8 */
  if (!C.zf) goto L_10a856e8;
L_10a856d0:;
  /* 10a856d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a856d3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a856d6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a856dc mov edx, dword ptr [ecx*4 + 0x10aaea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea94)));
  /* 10a856e3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a856e6 jmp 0x10a856ef */
  goto L_10a856ef;
L_10a856e8:;
  /* 10a856e8 mov dword ptr [ebp - 0x14], 0x10aabc10 */
  w32((uint32_t)(EBP + -0x14), (0x10aabc10u));
L_10a856ef:;
  /* 10a856ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10a856f1 mov al, byte ptr [0x10aaea90] */
  AL = (r8((uint32_t)(0x10aaea90)));
  /* 10a856f6 push eax */
  push32((uint32_t)(EAX));
  /* 10a856f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a856fa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a856fd push ecx */
  push32((uint32_t)(ECX));
  /* 10a856fe call 0x10a854a0 */
  push32(0x10a85703u); f_10a854a0();
  /* 10a85703 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85708 jne 0x10a85744 */
  if (!C.zf) goto L_10a85744;
L_10a8570a:;
  /* 10a8570a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8570d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85710 push edx */
  push32((uint32_t)(EDX));
  /* 10a85711 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85714 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a85717 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85718 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8571b push edx */
  push32((uint32_t)(EDX));
  /* 10a8571c push 0x10aabaec */
  push32((uint32_t)(0x10aabaecu));
  /* 10a85721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85723 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85729 call 0x10a83450 */
  push32(0x10a8572eu); f_10a83450();
  /* 10a8572e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85731 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85734 jne 0x10a85737 */
  if (!C.zf) goto L_10a85737;
  /* 10a85736 int3  */
  x86_unimpl("int3 @ 0x10a85736");
L_10a85737:;
  /* 10a85737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8573b jne 0x10a8570a */
  if (!C.zf) goto L_10a8570a;
  /* 10a8573d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a85744:;
  /* 10a85744 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a85746 mov cl, byte ptr [0x10aaea90] */
  CL = (r8((uint32_t)(0x10aaea90)));
  /* 10a8574c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8574d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85750 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a85753 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85756 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10a8575a push edx */
  push32((uint32_t)(EDX));
  /* 10a8575b call 0x10a854a0 */
  push32(0x10a85760u); f_10a854a0();
  /* 10a85760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85763 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85765 jne 0x10a857a1 */
  if (!C.zf) goto L_10a857a1;
L_10a85767:;
  /* 10a85767 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8576a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8576d push eax */
  push32((uint32_t)(EAX));
  /* 10a8576e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85771 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a85774 push edx */
  push32((uint32_t)(EDX));
  /* 10a85775 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a85778 push eax */
  push32((uint32_t)(EAX));
  /* 10a85779 push 0x10aabac0 */
  push32((uint32_t)(0x10aabac0u));
  /* 10a8577e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85780 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85782 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85784 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85786 call 0x10a83450 */
  push32(0x10a8578bu); f_10a83450();
  /* 10a8578b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8578e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85791 jne 0x10a85794 */
  if (!C.zf) goto L_10a85794;
  /* 10a85793 int3  */
  x86_unimpl("int3 @ 0x10a85793");
L_10a85794:;
  /* 10a85794 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a85796 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85798 jne 0x10a85767 */
  if (!C.zf) goto L_10a85767;
  /* 10a8579a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a857a1:;
  /* 10a857a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a857a4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a857a8 jne 0x10a857fa */
  if (!C.zf) goto L_10a857fa;
  /* 10a857aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a857ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a857b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a857b1 mov dl, byte ptr [0x10aaea91] */
  DL = (r8((uint32_t)(0x10aaea91)));
  /* 10a857b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a857b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a857bb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a857be push eax */
  push32((uint32_t)(EAX));
  /* 10a857bf call 0x10a854a0 */
  push32(0x10a857c4u); f_10a854a0();
  /* 10a857c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a857c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a857c9 jne 0x10a857fa */
  if (!C.zf) goto L_10a857fa;
L_10a857cb:;
  /* 10a857cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a857ce add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a857d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a857d2 push 0x10aabbe4 */
  push32((uint32_t)(0x10aabbe4u));
  /* 10a857d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a857d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a857db push 0 */
  push32((uint32_t)(0x0u));
  /* 10a857dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a857df call 0x10a83450 */
  push32(0x10a857e4u); f_10a83450();
  /* 10a857e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a857e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a857ea jne 0x10a857ed */
  if (!C.zf) goto L_10a857ed;
  /* 10a857ec int3  */
  x86_unimpl("int3 @ 0x10a857ec");
L_10a857ed:;
  /* 10a857ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a857ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a857f1 jne 0x10a857cb */
  if (!C.zf) goto L_10a857cb;
  /* 10a857f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a857fa:;
  /* 10a857fa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a857fe jne 0x10a85876 */
  if (!C.zf) goto L_10a85876;
  /* 10a85800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85803 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85807 je 0x10a8583c */
  if (C.zf) goto L_10a8583c;
L_10a85809:;
  /* 10a85809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8580c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8580f push edx */
  push32((uint32_t)(EDX));
  /* 10a85810 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85813 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a85816 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85817 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8581a push edx */
  push32((uint32_t)(EDX));
  /* 10a8581b push 0x10aabbc4 */
  push32((uint32_t)(0x10aabbc4u));
  /* 10a85820 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85822 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85826 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85828 call 0x10a83450 */
  push32(0x10a8582du); f_10a83450();
  /* 10a8582d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85830 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85833 jne 0x10a85836 */
  if (!C.zf) goto L_10a85836;
  /* 10a85835 int3  */
  x86_unimpl("int3 @ 0x10a85835");
L_10a85836:;
  /* 10a85836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8583a jne 0x10a85809 */
  if (!C.zf) goto L_10a85809;
L_10a8583c:;
  /* 10a8583c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8583f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a85842 push edx */
  push32((uint32_t)(EDX));
  /* 10a85843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85846 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85849 push eax */
  push32((uint32_t)(EAX));
  /* 10a8584a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8584d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8584e push 0x10aabb98 */
  push32((uint32_t)(0x10aabb98u));
  /* 10a85853 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85857 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85859 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8585b call 0x10a83450 */
  push32(0x10a85860u); f_10a83450();
  /* 10a85860 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85863 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85866 jne 0x10a85869 */
  if (!C.zf) goto L_10a85869;
  /* 10a85868 int3  */
  x86_unimpl("int3 @ 0x10a85868");
L_10a85869:;
  /* 10a85869 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8586b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8586d jne 0x10a8583c */
  if (!C.zf) goto L_10a8583c;
  /* 10a8586f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a85876:;
  /* 10a85876 jmp 0x10a85683 */
  goto L_10a85683;
L_10a8587b:;
  /* 10a8587b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8587d call 0x10a87e30 */
  push32(0x10a85882u); f_10a87e30();
  /* 10a85882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a85888:;
  /* 10a85888 pop edi */
  EDI = (pop32());
  /* 10a85889 pop esi */
  ESI = (pop32());
  /* 10a8588a pop ebx */
  EBX = (pop32());
  /* 10a8588b mov esp, ebp */
  ESP = (EBP);
  /* 10a8588d pop ebp */
  EBP = (pop32());
  /* 10a8588e ret  */
  ESPCHK(0x10a85530u, _esp0);
  ESP += 4; return;
}

/* FUN_100058a0 @ 0x10a858a0 (34 bytes, 13 insns) */
void f_10a858a0(void) {
  FTRACE(0x10a858a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a858a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a858a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a858a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a858a4 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a858a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a858ac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a858b0 je 0x10a858bb */
  if (C.zf) goto L_10a858bb;
  /* 10a858b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a858b5 mov dword ptr [0x10aaea84], ecx */
  w32((uint32_t)(0x10aaea84), (ECX));
L_10a858bb:;
  /* 10a858bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a858be mov esp, ebp */
  ESP = (EBP);
  /* 10a858c0 pop ebp */
  EBP = (pop32());
  /* 10a858c1 ret  */
  ESPCHK(0x10a858a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x10a858d0 (103 bytes, 38 insns) */
void f_10a858d0(void) {
  FTRACE(0x10a858d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a858d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a858d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a858d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a858d4 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a858d9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a858dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a858de jne 0x10a858e2 */
  if (!C.zf) goto L_10a858e2;
  /* 10a858e0 jmp 0x10a85933 */
  goto L_10a85933;
L_10a858e2:;
  /* 10a858e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a858e4 call 0x10a87d90 */
  push32(0x10a858e9u); f_10a87d90();
  /* 10a858e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a858ec mov ecx, dword ptr [0x10ab0700] */
  ECX = (r32((uint32_t)(0x10ab0700)));
  /* 10a858f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a858f5 jmp 0x10a858ff */
  goto L_10a858ff;
L_10a858f7:;
  /* 10a858f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a858fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a858fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a858ff:;
  /* 10a858ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85903 je 0x10a85929 */
  if (C.zf) goto L_10a85929;
  /* 10a85905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85908 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a8590b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a85911 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85914 jne 0x10a85927 */
  if (!C.zf) goto L_10a85927;
  /* 10a85916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85919 push eax */
  push32((uint32_t)(EAX));
  /* 10a8591a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8591d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85920 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85921 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10a85924u);
  /* 10a85924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a85927:;
  /* 10a85927 jmp 0x10a858f7 */
  goto L_10a858f7;
L_10a85929:;
  /* 10a85929 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8592b call 0x10a87e30 */
  push32(0x10a85930u); f_10a87e30();
  /* 10a85930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a85933:;
  /* 10a85933 mov esp, ebp */
  ESP = (EBP);
  /* 10a85935 pop ebp */
  EBP = (pop32());
  /* 10a85936 ret  */
  ESPCHK(0x10a858d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10a85940 (75 bytes, 28 insns) */
void f_10a85940(void) {
  FTRACE(0x10a85940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85940 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85941 mov ebp, esp */
  EBP = (ESP);
  /* 10a85943 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85944 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85948 je 0x10a8597d */
  if (C.zf) goto L_10a8597d;
  /* 10a8594a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8594d push eax */
  push32((uint32_t)(EAX));
  /* 10a8594e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85951 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85952 call dword ptr [0x10ab338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab338c))), 0x10a85958u);
  /* 10a85958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8595a jne 0x10a8597d */
  if (!C.zf) goto L_10a8597d;
  /* 10a8595c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85960 je 0x10a85974 */
  if (C.zf) goto L_10a85974;
  /* 10a85962 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85965 push edx */
  push32((uint32_t)(EDX));
  /* 10a85966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85969 push eax */
  push32((uint32_t)(EAX));
  /* 10a8596a call dword ptr [0x10ab3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3388))), 0x10a85970u);
  /* 10a85970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85972 jne 0x10a8597d */
  if (!C.zf) goto L_10a8597d;
L_10a85974:;
  /* 10a85974 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8597b jmp 0x10a85984 */
  goto L_10a85984;
L_10a8597d:;
  /* 10a8597d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a85984:;
  /* 10a85984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85987 mov esp, ebp */
  ESP = (EBP);
  /* 10a85989 pop ebp */
  EBP = (pop32());
  /* 10a8598a ret  */
  ESPCHK(0x10a85940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005990 @ 0x10a85990 (134 bytes, 50 insns) */
void f_10a85990(void) {
  FTRACE(0x10a85990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85990 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85991 mov ebp, esp */
  EBP = (ESP);
  /* 10a85993 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85994 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85998 jne 0x10a8599e */
  if (!C.zf) goto L_10a8599e;
  /* 10a8599a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8599c jmp 0x10a85a12 */
  goto L_10a85a12;
L_10a8599e:;
  /* 10a8599e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a859a0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a859a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a859a5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a859a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a859a9 call 0x10a85940 */
  push32(0x10a859aeu); f_10a85940();
  /* 10a859ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a859b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a859b3 jne 0x10a859b9 */
  if (!C.zf) goto L_10a859b9;
  /* 10a859b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a859b7 jmp 0x10a85a12 */
  goto L_10a85a12;
L_10a859b9:;
  /* 10a859b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a859bc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a859bf push ecx */
  push32((uint32_t)(ECX));
  /* 10a859c0 call 0x10a88690 */
  push32(0x10a859c5u); f_10a88690();
  /* 10a859c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a859c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a859cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a859cf je 0x10a859e6 */
  if (C.zf) goto L_10a859e6;
  /* 10a859d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a859d4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a859d7 push edx */
  push32((uint32_t)(EDX));
  /* 10a859d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a859db push eax */
  push32((uint32_t)(EAX));
  /* 10a859dc call 0x10a886f0 */
  push32(0x10a859e1u); f_10a886f0();
  /* 10a859e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a859e4 jmp 0x10a85a12 */
  goto L_10a85a12;
L_10a859e6:;
  /* 10a859e6 mov ecx, dword ptr [0x10ab06b4] */
  ECX = (r32((uint32_t)(0x10ab06b4)));
  /* 10a859ec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a859f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a859f4 je 0x10a859fd */
  if (C.zf) goto L_10a859fd;
  /* 10a859f6 mov eax, 1 */
  EAX = (0x1u);
  /* 10a859fb jmp 0x10a85a12 */
  goto L_10a85a12;
L_10a859fd:;
  /* 10a859fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85a00 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85a03 push edx */
  push32((uint32_t)(EDX));
  /* 10a85a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85a06 mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a85a0b push eax */
  push32((uint32_t)(EAX));
  /* 10a85a0c call dword ptr [0x10ab3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3390))), 0x10a85a12u);
L_10a85a12:;
  /* 10a85a12 mov esp, ebp */
  ESP = (EBP);
  /* 10a85a14 pop ebp */
  EBP = (pop32());
  /* 10a85a15 ret  */
  ESPCHK(0x10a85990u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a20 @ 0x10a85a20 (227 bytes, 80 insns) */
void f_10a85a20(void) {
  FTRACE(0x10a85a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85a21 mov ebp, esp */
  EBP = (ESP);
  /* 10a85a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85a27 push eax */
  push32((uint32_t)(EAX));
  /* 10a85a28 call 0x10a85990 */
  push32(0x10a85a2du); f_10a85990();
  /* 10a85a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85a32 jne 0x10a85a3b */
  if (!C.zf) goto L_10a85a3b;
  /* 10a85a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85a36 jmp 0x10a85aff */
  goto L_10a85aff;
L_10a85a3b:;
  /* 10a85a3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85a3d call 0x10a87d90 */
  push32(0x10a85a42u); f_10a87d90();
  /* 10a85a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85a45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85a48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85a4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a85a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85a51 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85a54 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85a59 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85a5c je 0x10a85a80 */
  if (C.zf) goto L_10a85a80;
  /* 10a85a5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85a61 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85a65 je 0x10a85a80 */
  if (C.zf) goto L_10a85a80;
  /* 10a85a67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85a6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85a6d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85a72 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85a75 je 0x10a85a80 */
  if (C.zf) goto L_10a85a80;
  /* 10a85a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85a7a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85a7e jne 0x10a85af3 */
  if (!C.zf) goto L_10a85af3;
L_10a85a80:;
  /* 10a85a80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a85a82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85a85 push edx */
  push32((uint32_t)(EDX));
  /* 10a85a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85a89 push eax */
  push32((uint32_t)(EAX));
  /* 10a85a8a call 0x10a85940 */
  push32(0x10a85a8fu); f_10a85940();
  /* 10a85a8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85a94 je 0x10a85af3 */
  if (C.zf) goto L_10a85af3;
  /* 10a85a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85a99 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a85a9c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85a9f jne 0x10a85af3 */
  if (!C.zf) goto L_10a85af3;
  /* 10a85aa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85aa4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a85aa7 cmp ecx, dword ptr [0x10aaea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aaea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85aad jg 0x10a85af3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a85af3;
  /* 10a85aaf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85ab3 je 0x10a85ac0 */
  if (C.zf) goto L_10a85ac0;
  /* 10a85ab5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a85ab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85abb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a85abe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a85ac0:;
  /* 10a85ac0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85ac4 je 0x10a85ad1 */
  if (C.zf) goto L_10a85ad1;
  /* 10a85ac6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a85ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85acc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a85acf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a85ad1:;
  /* 10a85ad1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85ad5 je 0x10a85ae2 */
  if (C.zf) goto L_10a85ae2;
  /* 10a85ad7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a85ada mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85add mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a85ae0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a85ae2:;
  /* 10a85ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85ae4 call 0x10a87e30 */
  push32(0x10a85ae9u); f_10a87e30();
  /* 10a85ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85aec mov eax, 1 */
  EAX = (0x1u);
  /* 10a85af1 jmp 0x10a85aff */
  goto L_10a85aff;
L_10a85af3:;
  /* 10a85af3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85af5 call 0x10a87e30 */
  push32(0x10a85afau); f_10a87e30();
  /* 10a85afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85afd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a85aff:;
  /* 10a85aff mov esp, ebp */
  ESP = (EBP);
  /* 10a85b01 pop ebp */
  EBP = (pop32());
  /* 10a85b02 ret  */
  ESPCHK(0x10a85a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b10 @ 0x10a85b10 (28 bytes, 11 insns) */
void f_10a85b10(void) {
  FTRACE(0x10a85b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85b11 mov ebp, esp */
  EBP = (ESP);
  /* 10a85b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85b14 mov eax, dword ptr [0x10ab2058] */
  EAX = (r32((uint32_t)(0x10ab2058)));
  /* 10a85b19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a85b1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85b1f mov dword ptr [0x10ab2058], ecx */
  w32((uint32_t)(0x10ab2058), (ECX));
  /* 10a85b25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85b28 mov esp, ebp */
  ESP = (EBP);
  /* 10a85b2a pop ebp */
  EBP = (pop32());
  /* 10a85b2b ret  */
  ESPCHK(0x10a85b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b30 @ 0x10a85b30 (362 bytes, 116 insns) */
void f_10a85b30(void) {
  FTRACE(0x10a85b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85b31 mov ebp, esp */
  EBP = (ESP);
  /* 10a85b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10a85b37 push esi */
  push32((uint32_t)(ESI));
  /* 10a85b38 push edi */
  push32((uint32_t)(EDI));
  /* 10a85b39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85b3d jne 0x10a85b6a */
  if (!C.zf) goto L_10a85b6a;
L_10a85b3f:;
  /* 10a85b3f push 0x10aabcf8 */
  push32((uint32_t)(0x10aabcf8u));
  /* 10a85b44 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a85b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85b51 call 0x10a83450 */
  push32(0x10a85b56u); f_10a83450();
  /* 10a85b56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85b59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85b5c jne 0x10a85b5f */
  if (!C.zf) goto L_10a85b5f;
  /* 10a85b5e int3  */
  x86_unimpl("int3 @ 0x10a85b5e");
L_10a85b5f:;
  /* 10a85b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85b63 jne 0x10a85b3f */
  if (!C.zf) goto L_10a85b3f;
  /* 10a85b65 jmp 0x10a85c93 */
  goto L_10a85c93;
L_10a85b6a:;
  /* 10a85b6a push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85b6c call 0x10a87d90 */
  push32(0x10a85b71u); f_10a87d90();
  /* 10a85b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85b77 mov edx, dword ptr [0x10ab0700] */
  EDX = (r32((uint32_t)(0x10ab0700)));
  /* 10a85b7d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a85b7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a85b86 jmp 0x10a85b91 */
  goto L_10a85b91;
L_10a85b88:;
  /* 10a85b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85b8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85b8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a85b91:;
  /* 10a85b91 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85b95 jge 0x10a85bb5 */
  if ((C.sf==C.of)) goto L_10a85bb5;
  /* 10a85b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85b9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85b9d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10a85ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85ba8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85bab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10a85bb3 jmp 0x10a85b88 */
  goto L_10a85b88;
L_10a85bb5:;
  /* 10a85bb5 mov edx, dword ptr [0x10ab0700] */
  EDX = (r32((uint32_t)(0x10ab0700)));
  /* 10a85bbb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a85bbe jmp 0x10a85bc8 */
  goto L_10a85bc8;
L_10a85bc0:;
  /* 10a85bc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85bc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a85bc5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a85bc8:;
  /* 10a85bc8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85bcc je 0x10a85c71 */
  if (C.zf) goto L_10a85c71;
  /* 10a85bd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85bd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85bd8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85bdf jl 0x10a85c47 */
  if ((C.sf!=C.of)) goto L_10a85c47;
  /* 10a85be1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85be4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a85be7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a85bed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85bf0 jge 0x10a85c47 */
  if ((C.sf==C.of)) goto L_10a85c47;
  /* 10a85bf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85bf5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a85bf8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a85bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85c01 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10a85c05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85c08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85c0b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a85c0e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a85c14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85c17 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10a85c1b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85c1e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85c21 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85c26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85c29 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10a85c2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85c30 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85c36 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a85c39 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85c3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85c41 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10a85c45 jmp 0x10a85c6c */
  goto L_10a85c6c;
L_10a85c47:;
  /* 10a85c47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85c4a push edx */
  push32((uint32_t)(EDX));
  /* 10a85c4b push 0x10aabcd4 */
  push32((uint32_t)(0x10aabcd4u));
  /* 10a85c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85c58 call 0x10a83450 */
  push32(0x10a85c5du); f_10a83450();
  /* 10a85c5d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85c60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85c63 jne 0x10a85c66 */
  if (!C.zf) goto L_10a85c66;
  /* 10a85c65 int3  */
  x86_unimpl("int3 @ 0x10a85c65");
L_10a85c66:;
  /* 10a85c66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85c68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85c6a jne 0x10a85c47 */
  if (!C.zf) goto L_10a85c47;
L_10a85c6c:;
  /* 10a85c6c jmp 0x10a85bc0 */
  goto L_10a85bc0;
L_10a85c71:;
  /* 10a85c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85c74 mov edx, dword ptr [0x10ab0708] */
  EDX = (r32((uint32_t)(0x10ab0708)));
  /* 10a85c7a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10a85c7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85c80 mov ecx, dword ptr [0x10ab06fc] */
  ECX = (r32((uint32_t)(0x10ab06fc)));
  /* 10a85c86 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10a85c89 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85c8b call 0x10a87e30 */
  push32(0x10a85c90u); f_10a87e30();
  /* 10a85c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a85c93:;
  /* 10a85c93 pop edi */
  EDI = (pop32());
  /* 10a85c94 pop esi */
  ESI = (pop32());
  /* 10a85c95 pop ebx */
  EBX = (pop32());
  /* 10a85c96 mov esp, ebp */
  ESP = (EBP);
  /* 10a85c98 pop ebp */
  EBP = (pop32());
  /* 10a85c99 ret  */
  ESPCHK(0x10a85b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10a85ca0 (291 bytes, 95 insns) */
void f_10a85ca0(void) {
  FTRACE(0x10a85ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10a85ca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a85ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10a85ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10a85ca9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a85cb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85cb4 je 0x10a85cc2 */
  if (C.zf) goto L_10a85cc2;
  /* 10a85cb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85cba je 0x10a85cc2 */
  if (C.zf) goto L_10a85cc2;
  /* 10a85cbc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85cc0 jne 0x10a85cf0 */
  if (!C.zf) goto L_10a85cf0;
L_10a85cc2:;
  /* 10a85cc2 push 0x10aabd20 */
  push32((uint32_t)(0x10aabd20u));
  /* 10a85cc7 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a85ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85cd4 call 0x10a83450 */
  push32(0x10a85cd9u); f_10a83450();
  /* 10a85cd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85cdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85cdf jne 0x10a85ce2 */
  if (!C.zf) goto L_10a85ce2;
  /* 10a85ce1 int3  */
  x86_unimpl("int3 @ 0x10a85ce1");
L_10a85ce2:;
  /* 10a85ce2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85ce6 jne 0x10a85cc2 */
  if (!C.zf) goto L_10a85cc2;
  /* 10a85ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a85ceb jmp 0x10a85dbc */
  goto L_10a85dbc;
L_10a85cf0:;
  /* 10a85cf0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a85cf7 jmp 0x10a85d02 */
  goto L_10a85d02;
L_10a85cf9:;
  /* 10a85cf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85cfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85cff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a85d02:;
  /* 10a85d02 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85d06 jge 0x10a85d8c */
  if ((C.sf==C.of)) goto L_10a85d8c;
  /* 10a85d0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a85d12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85d18 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10a85d1c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85d20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85d26 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10a85d2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a85d30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d33 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85d36 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10a85d3a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85d3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85d44 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10a85d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85d4e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85d53 jne 0x10a85d62 */
  if (!C.zf) goto L_10a85d62;
  /* 10a85d55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85d58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85d5b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85d60 je 0x10a85d87 */
  if (C.zf) goto L_10a85d87;
L_10a85d62:;
  /* 10a85d62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85d66 je 0x10a85d87 */
  if (C.zf) goto L_10a85d87;
  /* 10a85d68 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85d6c jne 0x10a85d80 */
  if (!C.zf) goto L_10a85d80;
  /* 10a85d6e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85d72 jne 0x10a85d87 */
  if (!C.zf) goto L_10a85d87;
  /* 10a85d74 mov eax, dword ptr [0x10aaea84] */
  EAX = (r32((uint32_t)(0x10aaea84)));
  /* 10a85d79 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10a85d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85d7e je 0x10a85d87 */
  if (C.zf) goto L_10a85d87;
L_10a85d80:;
  /* 10a85d80 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10a85d87:;
  /* 10a85d87 jmp 0x10a85cf9 */
  goto L_10a85cf9;
L_10a85d8c:;
  /* 10a85d8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a85d8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85d92 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10a85d95 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85d98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85d9b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10a85d9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a85da1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a85da4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10a85da7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85daa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85dad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10a85db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85db3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a85db9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a85dbc:;
  /* 10a85dbc pop edi */
  EDI = (pop32());
  /* 10a85dbd pop esi */
  ESI = (pop32());
  /* 10a85dbe pop ebx */
  EBX = (pop32());
  /* 10a85dbf mov esp, ebp */
  ESP = (EBP);
  /* 10a85dc1 pop ebp */
  EBP = (pop32());
  /* 10a85dc2 ret  */
  ESPCHK(0x10a85ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10a85dd0 (697 bytes, 253 insns) */
void f_10a85dd0(void) {
  FTRACE(0x10a85dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a85dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a85dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a85dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a85dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a85dd7 push esi */
  push32((uint32_t)(ESI));
  /* 10a85dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10a85dd9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a85de0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a85de2 call 0x10a87d90 */
  push32(0x10a85de7u); f_10a87d90();
  /* 10a85de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a85dea:;
  /* 10a85dea push 0x10aabe18 */
  push32((uint32_t)(0x10aabe18u));
  /* 10a85def push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a85df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85df6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85dfc call 0x10a83450 */
  push32(0x10a85e01u); f_10a83450();
  /* 10a85e01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85e04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e07 jne 0x10a85e0a */
  if (!C.zf) goto L_10a85e0a;
  /* 10a85e09 int3  */
  x86_unimpl("int3 @ 0x10a85e09");
L_10a85e0a:;
  /* 10a85e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85e0e jne 0x10a85dea */
  if (!C.zf) goto L_10a85dea;
  /* 10a85e10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e14 je 0x10a85e1e */
  if (C.zf) goto L_10a85e1e;
  /* 10a85e16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a85e19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a85e1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a85e1e:;
  /* 10a85e1e mov eax, dword ptr [0x10ab0700] */
  EAX = (r32((uint32_t)(0x10ab0700)));
  /* 10a85e23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a85e26 jmp 0x10a85e30 */
  goto L_10a85e30;
L_10a85e28:;
  /* 10a85e28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a85e2d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a85e30:;
  /* 10a85e30 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e34 je 0x10a86052 */
  if (C.zf) goto L_10a86052;
  /* 10a85e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e3d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e40 je 0x10a86052 */
  if (C.zf) goto L_10a86052;
  /* 10a85e46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e49 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a85e4c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a85e52 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e55 je 0x10a85e84 */
  if (C.zf) goto L_10a85e84;
  /* 10a85e57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e5a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a85e5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a85e63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85e65 je 0x10a85e84 */
  if (C.zf) goto L_10a85e84;
  /* 10a85e67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85e6d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85e72 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e75 jne 0x10a85e89 */
  if (!C.zf) goto L_10a85e89;
  /* 10a85e77 mov ecx, dword ptr [0x10aaea84] */
  ECX = (r32((uint32_t)(0x10aaea84)));
  /* 10a85e7d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10a85e80 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85e82 jne 0x10a85e89 */
  if (!C.zf) goto L_10a85e89;
L_10a85e84:;
  /* 10a85e84 jmp 0x10a8604d */
  goto L_10a8604d;
L_10a85e89:;
  /* 10a85e89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e8c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85e90 je 0x10a85f02 */
  if (C.zf) goto L_10a85f02;
  /* 10a85e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a85e96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85e99 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a85e9c push ecx */
  push32((uint32_t)(ECX));
  /* 10a85e9d call 0x10a85940 */
  push32(0x10a85ea2u); f_10a85940();
  /* 10a85ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85ea7 jne 0x10a85ed3 */
  if (!C.zf) goto L_10a85ed3;
L_10a85ea9:;
  /* 10a85ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85eac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a85eaf push eax */
  push32((uint32_t)(EAX));
  /* 10a85eb0 push 0x10aabe04 */
  push32((uint32_t)(0x10aabe04u));
  /* 10a85eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85ebd call 0x10a83450 */
  push32(0x10a85ec2u); f_10a83450();
  /* 10a85ec2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85ec5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85ec8 jne 0x10a85ecb */
  if (!C.zf) goto L_10a85ecb;
  /* 10a85eca int3  */
  x86_unimpl("int3 @ 0x10a85eca");
L_10a85ecb:;
  /* 10a85ecb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a85ecd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a85ecf jne 0x10a85ea9 */
  if (!C.zf) goto L_10a85ea9;
  /* 10a85ed1 jmp 0x10a85f02 */
  goto L_10a85f02;
L_10a85ed3:;
  /* 10a85ed3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85ed6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a85ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10a85eda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85edd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a85ee0 push edx */
  push32((uint32_t)(EDX));
  /* 10a85ee1 push 0x10aabdf8 */
  push32((uint32_t)(0x10aabdf8u));
  /* 10a85ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85eea push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85eec push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85eee call 0x10a83450 */
  push32(0x10a85ef3u); f_10a83450();
  /* 10a85ef3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85ef6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85ef9 jne 0x10a85efc */
  if (!C.zf) goto L_10a85efc;
  /* 10a85efb int3  */
  x86_unimpl("int3 @ 0x10a85efb");
L_10a85efc:;
  /* 10a85efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85f00 jne 0x10a85ed3 */
  if (!C.zf) goto L_10a85ed3;
L_10a85f02:;
  /* 10a85f02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f05 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a85f08 push edx */
  push32((uint32_t)(EDX));
  /* 10a85f09 push 0x10aabdf0 */
  push32((uint32_t)(0x10aabdf0u));
  /* 10a85f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f16 call 0x10a83450 */
  push32(0x10a85f1bu); f_10a83450();
  /* 10a85f1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85f1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85f21 jne 0x10a85f24 */
  if (!C.zf) goto L_10a85f24;
  /* 10a85f23 int3  */
  x86_unimpl("int3 @ 0x10a85f23");
L_10a85f24:;
  /* 10a85f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a85f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a85f28 jne 0x10a85f02 */
  if (!C.zf) goto L_10a85f02;
  /* 10a85f2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f2d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a85f30 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a85f36 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85f39 jne 0x10a85fac */
  if (!C.zf) goto L_10a85fac;
L_10a85f3b:;
  /* 10a85f3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f3e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a85f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85f42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a85f48 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a85f4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a85f50 push eax */
  push32((uint32_t)(EAX));
  /* 10a85f51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f54 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85f57 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85f58 push 0x10aabdbc */
  push32((uint32_t)(0x10aabdbcu));
  /* 10a85f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85f65 call 0x10a83450 */
  push32(0x10a85f6au); f_10a83450();
  /* 10a85f6a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85f6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85f70 jne 0x10a85f73 */
  if (!C.zf) goto L_10a85f73;
  /* 10a85f72 int3  */
  x86_unimpl("int3 @ 0x10a85f72");
L_10a85f73:;
  /* 10a85f73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a85f75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a85f77 jne 0x10a85f3b */
  if (!C.zf) goto L_10a85f3b;
  /* 10a85f79 cmp dword ptr [0x10ab2058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab2058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85f80 je 0x10a85f9b */
  if (C.zf) goto L_10a85f9b;
  /* 10a85f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f85 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a85f88 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85f89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f8c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85f8f push edx */
  push32((uint32_t)(EDX));
  /* 10a85f90 call dword ptr [0x10ab2058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab2058))), 0x10a85f96u);
  /* 10a85f96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85f99 jmp 0x10a85fa7 */
  goto L_10a85fa7;
L_10a85f9b:;
  /* 10a85f9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85f9e push eax */
  push32((uint32_t)(EAX));
  /* 10a85f9f call 0x10a86090 */
  push32(0x10a85fa4u); f_10a86090();
  /* 10a85fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a85fa7:;
  /* 10a85fa7 jmp 0x10a8604d */
  goto L_10a8604d;
L_10a85fac:;
  /* 10a85fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85faf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85fb3 jne 0x10a85ff2 */
  if (!C.zf) goto L_10a85ff2;
L_10a85fb5:;
  /* 10a85fb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85fb8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a85fbb push eax */
  push32((uint32_t)(EAX));
  /* 10a85fbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85fbf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a85fc3 push 0x10aabd94 */
  push32((uint32_t)(0x10aabd94u));
  /* 10a85fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85fca push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85fce push 0 */
  push32((uint32_t)(0x0u));
  /* 10a85fd0 call 0x10a83450 */
  push32(0x10a85fd5u); f_10a83450();
  /* 10a85fd5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85fd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a85fdb jne 0x10a85fde */
  if (!C.zf) goto L_10a85fde;
  /* 10a85fdd int3  */
  x86_unimpl("int3 @ 0x10a85fdd");
L_10a85fde:;
  /* 10a85fde xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a85fe0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a85fe2 jne 0x10a85fb5 */
  if (!C.zf) goto L_10a85fb5;
  /* 10a85fe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85fe7 push eax */
  push32((uint32_t)(EAX));
  /* 10a85fe8 call 0x10a86090 */
  push32(0x10a85fedu); f_10a86090();
  /* 10a85fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a85ff0 jmp 0x10a8604d */
  goto L_10a8604d;
L_10a85ff2:;
  /* 10a85ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a85ff5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a85ff8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a85ffe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86001 jne 0x10a8604d */
  if (!C.zf) goto L_10a8604d;
L_10a86003:;
  /* 10a86003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86006 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a86009 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8600a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8600d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a86010 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a86013 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a86018 push eax */
  push32((uint32_t)(EAX));
  /* 10a86019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8601c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8601f push ecx */
  push32((uint32_t)(ECX));
  /* 10a86020 push 0x10aabd60 */
  push32((uint32_t)(0x10aabd60u));
  /* 10a86025 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86027 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86029 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8602b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8602d call 0x10a83450 */
  push32(0x10a86032u); f_10a83450();
  /* 10a86032 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86035 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86038 jne 0x10a8603b */
  if (!C.zf) goto L_10a8603b;
  /* 10a8603a int3  */
  x86_unimpl("int3 @ 0x10a8603a");
L_10a8603b:;
  /* 10a8603b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8603d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8603f jne 0x10a86003 */
  if (!C.zf) goto L_10a86003;
  /* 10a86041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86044 push eax */
  push32((uint32_t)(EAX));
  /* 10a86045 call 0x10a86090 */
  push32(0x10a8604au); f_10a86090();
  /* 10a8604a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8604d:;
  /* 10a8604d jmp 0x10a85e28 */
  goto L_10a85e28;
L_10a86052:;
  /* 10a86052 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a86054 call 0x10a87e30 */
  push32(0x10a86059u); f_10a87e30();
  /* 10a86059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8605c:;
  /* 10a8605c push 0x10aabd48 */
  push32((uint32_t)(0x10aabd48u));
  /* 10a86061 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a86066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86068 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8606a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8606c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8606e call 0x10a83450 */
  push32(0x10a86073u); f_10a83450();
  /* 10a86073 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86076 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86079 jne 0x10a8607c */
  if (!C.zf) goto L_10a8607c;
  /* 10a8607b int3  */
  x86_unimpl("int3 @ 0x10a8607b");
L_10a8607c:;
  /* 10a8607c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8607e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a86080 jne 0x10a8605c */
  if (!C.zf) goto L_10a8605c;
  /* 10a86082 pop edi */
  EDI = (pop32());
  /* 10a86083 pop esi */
  ESI = (pop32());
  /* 10a86084 pop ebx */
  EBX = (pop32());
  /* 10a86085 mov esp, ebp */
  ESP = (EBP);
  /* 10a86087 pop ebp */
  EBP = (pop32());
  /* 10a86088 ret  */
  ESPCHK(0x10a85dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x10a86090 (276 bytes, 89 insns) */
void f_10a86090(void) {
  FTRACE(0x10a86090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86090 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86091 mov ebp, esp */
  EBP = (ESP);
  /* 10a86093 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86096 push ebx */
  push32((uint32_t)(EBX));
  /* 10a86097 push esi */
  push32((uint32_t)(ESI));
  /* 10a86098 push edi */
  push32((uint32_t)(EDI));
  /* 10a86099 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10a860a0 jmp 0x10a860ab */
  goto L_10a860ab;
L_10a860a2:;
  /* 10a860a2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a860a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a860a8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10a860ab:;
  /* 10a860ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a860ae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a860b2 jge 0x10a860bf */
  if ((C.sf==C.of)) goto L_10a860bf;
  /* 10a860b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a860b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a860ba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10a860bd jmp 0x10a860c6 */
  goto L_10a860c6;
L_10a860bf:;
  /* 10a860bf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10a860c6:;
  /* 10a860c6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a860c9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a860cc jge 0x10a8616c */
  if ((C.sf==C.of)) goto L_10a8616c;
  /* 10a860d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a860d5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a860d8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10a860db mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10a860de cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a860e5 jle 0x10a86103 */
  if ((C.zf||C.sf!=C.of)) goto L_10a86103;
  /* 10a860e7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10a860ec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a860ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a860f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a860f6 call 0x10a8a3a0 */
  push32(0x10a860fbu); f_10a8a3a0();
  /* 10a860fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a860fe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10a86101 jmp 0x10a86120 */
  goto L_10a86120;
L_10a86103:;
  /* 10a86103 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a86106 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8610c mov eax, dword ptr [0x10aaec98] */
  EAX = (r32((uint32_t)(0x10aaec98)));
  /* 10a86111 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a86113 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a86117 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8611d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10a86120:;
  /* 10a86120 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86124 je 0x10a86134 */
  if (C.zf) goto L_10a86134;
  /* 10a86126 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a86129 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8612f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10a86132 jmp 0x10a8613b */
  goto L_10a8613b;
L_10a86134:;
  /* 10a86134 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10a8613b:;
  /* 10a8613b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a8613e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10a86141 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10a86145 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a86148 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8614e push edx */
  push32((uint32_t)(EDX));
  /* 10a8614f push 0x10aabe3c */
  push32((uint32_t)(0x10aabe3cu));
  /* 10a86154 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a86157 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8615a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10a8615e push ecx */
  push32((uint32_t)(ECX));
  /* 10a8615f call 0x10a8a2a0 */
  push32(0x10a86164u); f_10a8a2a0();
  /* 10a86164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86167 jmp 0x10a860a2 */
  goto L_10a860a2;
L_10a8616c:;
  /* 10a8616c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a8616f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10a86174:;
  /* 10a86174 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10a86177 push eax */
  push32((uint32_t)(EAX));
  /* 10a86178 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10a8617b push ecx */
  push32((uint32_t)(ECX));
  /* 10a8617c push 0x10aabe2c */
  push32((uint32_t)(0x10aabe2cu));
  /* 10a86181 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86185 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86187 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86189 call 0x10a83450 */
  push32(0x10a8618eu); f_10a83450();
  /* 10a8618e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86191 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86194 jne 0x10a86197 */
  if (!C.zf) goto L_10a86197;
  /* 10a86196 int3  */
  x86_unimpl("int3 @ 0x10a86196");
L_10a86197:;
  /* 10a86197 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a86199 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8619b jne 0x10a86174 */
  if (!C.zf) goto L_10a86174;
  /* 10a8619d pop edi */
  EDI = (pop32());
  /* 10a8619e pop esi */
  ESI = (pop32());
  /* 10a8619f pop ebx */
  EBX = (pop32());
  /* 10a861a0 mov esp, ebp */
  ESP = (EBP);
  /* 10a861a2 pop ebp */
  EBP = (pop32());
  /* 10a861a3 ret  */
  ESPCHK(0x10a86090u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b0 @ 0x10a861b0 (116 bytes, 46 insns) */
void f_10a861b0(void) {
  FTRACE(0x10a861b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a861b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a861b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a861b3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a861b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a861b7 push esi */
  push32((uint32_t)(ESI));
  /* 10a861b8 push edi */
  push32((uint32_t)(EDI));
  /* 10a861b9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10a861bc push eax */
  push32((uint32_t)(EAX));
  /* 10a861bd call 0x10a85b30 */
  push32(0x10a861c2u); f_10a85b30();
  /* 10a861c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a861c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a861c9 jne 0x10a861e4 */
  if (!C.zf) goto L_10a861e4;
  /* 10a861cb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a861cf jne 0x10a861e4 */
  if (!C.zf) goto L_10a861e4;
  /* 10a861d1 mov ecx, dword ptr [0x10aaea84] */
  ECX = (r32((uint32_t)(0x10aaea84)));
  /* 10a861d7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10a861da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a861dc je 0x10a8621b */
  if (C.zf) goto L_10a8621b;
  /* 10a861de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a861e2 je 0x10a8621b */
  if (C.zf) goto L_10a8621b;
L_10a861e4:;
  /* 10a861e4 push 0x10aabe44 */
  push32((uint32_t)(0x10aabe44u));
  /* 10a861e9 push 0x10aab810 */
  push32((uint32_t)(0x10aab810u));
  /* 10a861ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10a861f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a861f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a861f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a861f6 call 0x10a83450 */
  push32(0x10a861fbu); f_10a83450();
  /* 10a861fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a861fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86201 jne 0x10a86204 */
  if (!C.zf) goto L_10a86204;
  /* 10a86203 int3  */
  x86_unimpl("int3 @ 0x10a86203");
L_10a86204:;
  /* 10a86204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a86206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a86208 jne 0x10a861e4 */
  if (!C.zf) goto L_10a861e4;
  /* 10a8620a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8620c call 0x10a85dd0 */
  push32(0x10a86211u); f_10a85dd0();
  /* 10a86211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86214 mov eax, 1 */
  EAX = (0x1u);
  /* 10a86219 jmp 0x10a8621d */
  goto L_10a8621d;
L_10a8621b:;
  /* 10a8621b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8621d:;
  /* 10a8621d pop edi */
  EDI = (pop32());
  /* 10a8621e pop esi */
  ESI = (pop32());
  /* 10a8621f pop ebx */
  EBX = (pop32());
  /* 10a86220 mov esp, ebp */
  ESP = (EBP);
  /* 10a86222 pop ebp */
  EBP = (pop32());
  /* 10a86223 ret  */
  ESPCHK(0x10a861b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x10a86230 (197 bytes, 79 insns) */
void f_10a86230(void) {
  FTRACE(0x10a86230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86230 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86231 mov ebp, esp */
  EBP = (ESP);
  /* 10a86233 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86234 push ebx */
  push32((uint32_t)(EBX));
  /* 10a86235 push esi */
  push32((uint32_t)(ESI));
  /* 10a86236 push edi */
  push32((uint32_t)(EDI));
  /* 10a86237 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8623b jne 0x10a86242 */
  if (!C.zf) goto L_10a86242;
  /* 10a8623d jmp 0x10a862ee */
  goto L_10a862ee;
L_10a86242:;
  /* 10a86242 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a86249 jmp 0x10a86254 */
  goto L_10a86254;
L_10a8624b:;
  /* 10a8624b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8624e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86251 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a86254:;
  /* 10a86254 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86258 jge 0x10a8629e */
  if ((C.sf==C.of)) goto L_10a8629e;
L_10a8625a:;
  /* 10a8625a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8625d mov edx, dword ptr [ecx*4 + 0x10aaea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaea94)));
  /* 10a86264 push edx */
  push32((uint32_t)(EDX));
  /* 10a86265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86268 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8626b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10a8626f push edx */
  push32((uint32_t)(EDX));
  /* 10a86270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86276 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10a8627a push edx */
  push32((uint32_t)(EDX));
  /* 10a8627b push 0x10aabea0 */
  push32((uint32_t)(0x10aabea0u));
  /* 10a86280 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86282 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86284 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86286 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86288 call 0x10a83450 */
  push32(0x10a8628du); f_10a83450();
  /* 10a8628d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86290 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86293 jne 0x10a86296 */
  if (!C.zf) goto L_10a86296;
  /* 10a86295 int3  */
  x86_unimpl("int3 @ 0x10a86295");
L_10a86296:;
  /* 10a86296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8629a jne 0x10a8625a */
  if (!C.zf) goto L_10a8625a;
  /* 10a8629c jmp 0x10a8624b */
  goto L_10a8624b;
L_10a8629e:;
  /* 10a8629e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a862a1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10a862a4 push edx */
  push32((uint32_t)(EDX));
  /* 10a862a5 push 0x10aabe7c */
  push32((uint32_t)(0x10aabe7cu));
  /* 10a862aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862b2 call 0x10a83450 */
  push32(0x10a862b7u); f_10a83450();
  /* 10a862b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a862ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a862bd jne 0x10a862c0 */
  if (!C.zf) goto L_10a862c0;
  /* 10a862bf int3  */
  x86_unimpl("int3 @ 0x10a862bf");
L_10a862c0:;
  /* 10a862c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a862c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a862c4 jne 0x10a8629e */
  if (!C.zf) goto L_10a8629e;
L_10a862c6:;
  /* 10a862c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a862c9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10a862cc push edx */
  push32((uint32_t)(EDX));
  /* 10a862cd push 0x10aabe5c */
  push32((uint32_t)(0x10aabe5cu));
  /* 10a862d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a862da call 0x10a83450 */
  push32(0x10a862dfu); f_10a83450();
  /* 10a862df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a862e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a862e5 jne 0x10a862e8 */
  if (!C.zf) goto L_10a862e8;
  /* 10a862e7 int3  */
  x86_unimpl("int3 @ 0x10a862e7");
L_10a862e8:;
  /* 10a862e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a862ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a862ec jne 0x10a862c6 */
  if (!C.zf) goto L_10a862c6;
L_10a862ee:;
  /* 10a862ee pop edi */
  EDI = (pop32());
  /* 10a862ef pop esi */
  ESI = (pop32());
  /* 10a862f0 pop ebx */
  EBX = (pop32());
  /* 10a862f1 mov esp, ebp */
  ESP = (EBP);
  /* 10a862f3 pop ebp */
  EBP = (pop32());
  /* 10a862f4 ret  */
  ESPCHK(0x10a86230u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x10a86300 (329 bytes, 102 insns) */
void f_10a86300(void) {
  FTRACE(0x10a86300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86300 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86301 mov ebp, esp */
  EBP = (ESP);
  /* 10a86303 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86306 cmp dword ptr [0x10ab21d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8630d jne 0x10a86314 */
  if (!C.zf) goto L_10a86314;
  /* 10a8630f call 0x10a8ac40 */
  push32(0x10a86314u); f_10a8ac40();
L_10a86314:;
  /* 10a86314 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8631b mov eax, dword ptr [0x10ab069c] */
  EAX = (r32((uint32_t)(0x10ab069c)));
  /* 10a86320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a86323:;
  /* 10a86323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86326 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a86329 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8632b je 0x10a86359 */
  if (C.zf) goto L_10a86359;
  /* 10a8632d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86330 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a86333 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86336 je 0x10a86341 */
  if (C.zf) goto L_10a86341;
  /* 10a86338 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8633b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8633e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a86341:;
  /* 10a86341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86344 push eax */
  push32((uint32_t)(EAX));
  /* 10a86345 call 0x10a871c0 */
  push32(0x10a8634au); f_10a871c0();
  /* 10a8634a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8634d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86350 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a86354 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a86357 jmp 0x10a86323 */
  goto L_10a86323;
L_10a86359:;
  /* 10a86359 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10a8635b push 0x10aabec0 */
  push32((uint32_t)(0x10aabec0u));
  /* 10a86360 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a86362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86365 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10a8636c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8636d call 0x10a84390 */
  push32(0x10a86372u); f_10a84390();
  /* 10a86372 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86375 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a86378 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8637b mov dword ptr [0x10ab06d0], edx */
  w32((uint32_t)(0x10ab06d0), (EDX));
  /* 10a86381 cmp dword ptr [0x10ab06d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86388 jne 0x10a86394 */
  if (!C.zf) goto L_10a86394;
  /* 10a8638a push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8638c call 0x10a83300 */
  push32(0x10a86391u); f_10a83300();
  /* 10a86391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a86394:;
  /* 10a86394 mov eax, dword ptr [0x10ab069c] */
  EAX = (r32((uint32_t)(0x10ab069c)));
  /* 10a86399 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8639c jmp 0x10a863a7 */
  goto L_10a863a7;
L_10a8639e:;
  /* 10a8639e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a863a1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a863a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a863a7:;
  /* 10a863a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a863aa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a863ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a863af je 0x10a86417 */
  if (C.zf) goto L_10a86417;
  /* 10a863b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a863b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a863b5 call 0x10a871c0 */
  push32(0x10a863bau); f_10a871c0();
  /* 10a863ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a863bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a863c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a863c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a863c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a863c9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a863cc je 0x10a86415 */
  if (C.zf) goto L_10a86415;
  /* 10a863ce push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10a863d0 push 0x10aabec0 */
  push32((uint32_t)(0x10aabec0u));
  /* 10a863d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a863d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a863da push ecx */
  push32((uint32_t)(ECX));
  /* 10a863db call 0x10a84390 */
  push32(0x10a863e0u); f_10a84390();
  /* 10a863e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a863e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a863e6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a863e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a863eb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a863ee jne 0x10a863fa */
  if (!C.zf) goto L_10a863fa;
  /* 10a863f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a863f2 call 0x10a83300 */
  push32(0x10a863f7u); f_10a83300();
  /* 10a863f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a863fa:;
  /* 10a863fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a863fd push ecx */
  push32((uint32_t)(ECX));
  /* 10a863fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86401 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a86403 push eax */
  push32((uint32_t)(EAX));
  /* 10a86404 call 0x10a87340 */
  push32(0x10a86409u); f_10a87340();
  /* 10a86409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8640c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8640f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86412 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a86415:;
  /* 10a86415 jmp 0x10a8639e */
  goto L_10a8639e;
L_10a86417:;
  /* 10a86417 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a86419 mov edx, dword ptr [0x10ab069c] */
  EDX = (r32((uint32_t)(0x10ab069c)));
  /* 10a8641f push edx */
  push32((uint32_t)(EDX));
  /* 10a86420 call 0x10a84e20 */
  push32(0x10a86425u); f_10a84e20();
  /* 10a86425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86428 mov dword ptr [0x10ab069c], 0 */
  w32((uint32_t)(0x10ab069c), (0x0u));
  /* 10a86432 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86435 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8643b mov dword ptr [0x10ab21c0], 1 */
  w32((uint32_t)(0x10ab21c0), (0x1u));
  /* 10a86445 mov esp, ebp */
  ESP = (EBP);
  /* 10a86447 pop ebp */
  EBP = (pop32());
  /* 10a86448 ret  */
  ESPCHK(0x10a86300u, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x10a86450 (216 bytes, 69 insns) */
void f_10a86450(void) {
  FTRACE(0x10a86450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86450 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86451 mov ebp, esp */
  EBP = (ESP);
  /* 10a86453 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86456 cmp dword ptr [0x10ab21d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8645d jne 0x10a86464 */
  if (!C.zf) goto L_10a86464;
  /* 10a8645f call 0x10a8ac40 */
  push32(0x10a86464u); f_10a8ac40();
L_10a86464:;
  /* 10a86464 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a86469 push 0x10ab070c */
  push32((uint32_t)(0x10ab070cu));
  /* 10a8646e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86470 call dword ptr [0x10ab3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3348))), 0x10a86476u);
  /* 10a86476 mov dword ptr [0x10ab06e0], 0x10ab070c */
  w32((uint32_t)(0x10ab06e0), (0x10ab070cu));
  /* 10a86480 mov eax, dword ptr [0x10ab21ec] */
  EAX = (r32((uint32_t)(0x10ab21ec)));
  /* 10a86485 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a86488 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8648a jne 0x10a86497 */
  if (!C.zf) goto L_10a86497;
  /* 10a8648c mov edx, dword ptr [0x10ab06e0] */
  EDX = (r32((uint32_t)(0x10ab06e0)));
  /* 10a86492 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a86495 jmp 0x10a8649f */
  goto L_10a8649f;
L_10a86497:;
  /* 10a86497 mov eax, dword ptr [0x10ab21ec] */
  EAX = (r32((uint32_t)(0x10ab21ec)));
  /* 10a8649c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10a8649f:;
  /* 10a8649f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a864a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a864a5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10a864a8 push edx */
  push32((uint32_t)(EDX));
  /* 10a864a9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a864ac push eax */
  push32((uint32_t)(EAX));
  /* 10a864ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a864af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a864b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a864b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a864b5 call 0x10a86530 */
  push32(0x10a864bau); f_10a86530();
  /* 10a864ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a864bd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10a864c2 push 0x10aabecc */
  push32((uint32_t)(0x10aabeccu));
  /* 10a864c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a864c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a864cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a864cf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10a864d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a864d3 call 0x10a84390 */
  push32(0x10a864d8u); f_10a84390();
  /* 10a864d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a864db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a864de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a864e2 jne 0x10a864ee */
  if (!C.zf) goto L_10a864ee;
  /* 10a864e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a864e6 call 0x10a83300 */
  push32(0x10a864ebu); f_10a83300();
  /* 10a864eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a864ee:;
  /* 10a864ee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10a864f1 push edx */
  push32((uint32_t)(EDX));
  /* 10a864f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a864f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a864f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a864f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a864fc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10a864ff push eax */
  push32((uint32_t)(EAX));
  /* 10a86500 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86503 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86504 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86507 push edx */
  push32((uint32_t)(EDX));
  /* 10a86508 call 0x10a86530 */
  push32(0x10a8650du); f_10a86530();
  /* 10a8650d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86510 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86513 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86516 mov dword ptr [0x10ab06c4], eax */
  w32((uint32_t)(0x10ab06c4), (EAX));
  /* 10a8651b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8651e mov dword ptr [0x10ab06c8], ecx */
  w32((uint32_t)(0x10ab06c8), (ECX));
  /* 10a86524 mov esp, ebp */
  ESP = (EBP);
  /* 10a86526 pop ebp */
  EBP = (pop32());
  /* 10a86527 ret  */
  ESPCHK(0x10a86450u, _esp0);
  ESP += 4; return;
}

/* FUN_10006530 @ 0x10a86530 (1060 bytes, 360 insns) */
void f_10a86530(void) {
  FTRACE(0x10a86530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86530 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86531 mov ebp, esp */
  EBP = (ESP);
  /* 10a86533 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86536 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86539 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8653f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a86542 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10a86548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8654b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8654e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86552 je 0x10a86565 */
  if (C.zf) goto L_10a86565;
  /* 10a86554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86557 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8655a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a8655c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8655f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86562 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10a86565:;
  /* 10a86565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86568 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8656b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8656e jne 0x10a8663d */
  if (!C.zf) goto L_10a8663d;
L_10a86574:;
  /* 10a86574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86577 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8657a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8657d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86580 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a86583 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86586 je 0x10a86602 */
  if (C.zf) goto L_10a86602;
  /* 10a86588 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8658b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8658e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a86590 je 0x10a86602 */
  if (C.zf) goto L_10a86602;
  /* 10a86592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86595 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a86597 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a86599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8659b mov al, byte ptr [edx + 0x10ab1f21] */
  AL = (r8((uint32_t)(EDX + 0x10ab1f21)));
  /* 10a865a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a865a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a865a6 je 0x10a865d7 */
  if (C.zf) goto L_10a865d7;
  /* 10a865a8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a865ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a865ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a865b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a865b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a865b5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a865b9 je 0x10a865d7 */
  if (C.zf) goto L_10a865d7;
  /* 10a865bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a865be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a865c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a865c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a865c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a865c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a865cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a865ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a865d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a865d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a865d7:;
  /* 10a865d7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a865da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a865dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a865df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a865e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a865e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a865e8 je 0x10a865fd */
  if (C.zf) goto L_10a865fd;
  /* 10a865ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a865ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a865f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a865f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a865f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a865f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a865fa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a865fd:;
  /* 10a865fd jmp 0x10a86574 */
  goto L_10a86574;
L_10a86602:;
  /* 10a86602 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86605 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a86607 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8660a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8660d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a8660f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86613 je 0x10a86624 */
  if (C.zf) goto L_10a86624;
  /* 10a86615 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86618 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a8661b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8661e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86621 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10a86624:;
  /* 10a86624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86627 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8662a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8662d jne 0x10a86638 */
  if (!C.zf) goto L_10a86638;
  /* 10a8662f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86632 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86635 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a86638:;
  /* 10a86638 jmp 0x10a8670c */
  goto L_10a8670c;
L_10a8663d:;
  /* 10a8663d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86640 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a86642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86645 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86648 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a8664a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8664e je 0x10a86663 */
  if (C.zf) goto L_10a86663;
  /* 10a86650 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86656 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a86658 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a8665a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8665d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86660 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a86663:;
  /* 10a86663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86666 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a86668 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10a8666b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8666e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86671 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a86674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86677 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8667d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8667f mov dl, byte ptr [ecx + 0x10ab1f21] */
  DL = (r8((uint32_t)(ECX + 0x10ab1f21)));
  /* 10a86685 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a86688 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8668a je 0x10a866bb */
  if (C.zf) goto L_10a866bb;
  /* 10a8668c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8668f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a86691 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86694 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86697 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a86699 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8669d je 0x10a866b2 */
  if (C.zf) goto L_10a866b2;
  /* 10a8669f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a866a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a866a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a866a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a866a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a866ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a866af mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a866b2:;
  /* 10a866b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a866b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a866b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a866bb:;
  /* 10a866bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a866be and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a866c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a866c7 je 0x10a866e7 */
  if (C.zf) goto L_10a866e7;
  /* 10a866c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a866cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a866d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a866d3 je 0x10a866e7 */
  if (C.zf) goto L_10a866e7;
  /* 10a866d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a866d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a866de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a866e1 jne 0x10a8663d */
  if (!C.zf) goto L_10a8663d;
L_10a866e7:;
  /* 10a866e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a866ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a866f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a866f2 jne 0x10a866ff */
  if (!C.zf) goto L_10a866ff;
  /* 10a866f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a866f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a866fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a866fd jmp 0x10a8670c */
  goto L_10a8670c;
L_10a866ff:;
  /* 10a866ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86703 je 0x10a8670c */
  if (C.zf) goto L_10a8670c;
  /* 10a86705 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86708 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10a8670c:;
  /* 10a8670c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10a86713:;
  /* 10a86713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86716 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a86719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8671b je 0x10a8673e */
  if (C.zf) goto L_10a8673e;
L_10a8671d:;
  /* 10a8671d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86720 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a86723 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86726 je 0x10a86733 */
  if (C.zf) goto L_10a86733;
  /* 10a86728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8672b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8672e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86731 jne 0x10a8673e */
  if (!C.zf) goto L_10a8673e;
L_10a86733:;
  /* 10a86733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86736 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86739 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8673c jmp 0x10a8671d */
  goto L_10a8671d;
L_10a8673e:;
  /* 10a8673e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86741 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a86744 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a86746 jne 0x10a8674d */
  if (!C.zf) goto L_10a8674d;
  /* 10a86748 jmp 0x10a8692b */
  goto L_10a8692b;
L_10a8674d:;
  /* 10a8674d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86751 je 0x10a86764 */
  if (C.zf) goto L_10a86764;
  /* 10a86753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86759 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a8675b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8675e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86761 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a86764:;
  /* 10a86764 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a86767 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a86769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8676c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8676f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a86771:;
  /* 10a86771 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a86778 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a8677f:;
  /* 10a8677f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86782 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a86785 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86788 jne 0x10a8679e */
  if (!C.zf) goto L_10a8679e;
  /* 10a8678a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8678d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86790 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a86793 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86796 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86799 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a8679c jmp 0x10a8677f */
  goto L_10a8677f;
L_10a8679e:;
  /* 10a8679e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a867a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a867a4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a867a7 jne 0x10a867fa */
  if (!C.zf) goto L_10a867fa;
  /* 10a867a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a867ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a867ae mov ecx, 2 */
  ECX = (0x2u);
  /* 10a867b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a867b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a867b7 jne 0x10a867f2 */
  if (!C.zf) goto L_10a867f2;
  /* 10a867b9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a867bd je 0x10a867df */
  if (C.zf) goto L_10a867df;
  /* 10a867bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a867c2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a867c6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a867c9 jne 0x10a867d6 */
  if (!C.zf) goto L_10a867d6;
  /* 10a867cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a867ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a867d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a867d4 jmp 0x10a867dd */
  goto L_10a867dd;
L_10a867d6:;
  /* 10a867d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a867dd:;
  /* 10a867dd jmp 0x10a867e6 */
  goto L_10a867e6;
L_10a867df:;
  /* 10a867df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a867e6:;
  /* 10a867e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a867e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a867ec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10a867ef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a867f2:;
  /* 10a867f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a867f5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a867f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a867fa:;
  /* 10a867fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a867fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86800 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86803 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a86806 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a86808 je 0x10a8682e */
  if (C.zf) goto L_10a8682e;
  /* 10a8680a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8680e je 0x10a8681f */
  if (C.zf) goto L_10a8681f;
  /* 10a86810 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86813 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10a86816 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86819 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8681c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10a8681f:;
  /* 10a8681f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86822 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a86824 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86827 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8682a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a8682c jmp 0x10a867fa */
  goto L_10a867fa;
L_10a8682e:;
  /* 10a8682e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86831 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a86834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a86836 je 0x10a86854 */
  if (C.zf) goto L_10a86854;
  /* 10a86838 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8683c jne 0x10a86859 */
  if (!C.zf) goto L_10a86859;
  /* 10a8683e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86841 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a86844 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86847 je 0x10a86854 */
  if (C.zf) goto L_10a86854;
  /* 10a86849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8684c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8684f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86852 jne 0x10a86859 */
  if (!C.zf) goto L_10a86859;
L_10a86854:;
  /* 10a86854 jmp 0x10a86904 */
  goto L_10a86904;
L_10a86859:;
  /* 10a86859 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8685d je 0x10a868f6 */
  if (C.zf) goto L_10a868f6;
  /* 10a86863 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86867 je 0x10a868bd */
  if (C.zf) goto L_10a868bd;
  /* 10a86869 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8686c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8686e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a86870 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a86872 mov cl, byte ptr [eax + 0x10ab1f21] */
  CL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a86878 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8687b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8687d je 0x10a868a8 */
  if (C.zf) goto L_10a868a8;
  /* 10a8687f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86885 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a86887 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a86889 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8688c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8688f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10a86892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86895 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8689b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8689e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a868a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a868a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a868a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a868a8:;
  /* 10a868a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a868ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a868ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a868b0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a868b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a868b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a868b8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a868bb jmp 0x10a868e9 */
  goto L_10a868e9;
L_10a868bd:;
  /* 10a868bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a868c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a868c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a868c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a868c6 mov cl, byte ptr [eax + 0x10ab1f21] */
  CL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a868cc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a868cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a868d1 je 0x10a868e9 */
  if (C.zf) goto L_10a868e9;
  /* 10a868d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a868d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a868d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a868dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a868df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a868e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a868e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a868e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a868e9:;
  /* 10a868e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a868ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a868ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a868f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a868f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a868f6:;
  /* 10a868f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a868f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a868fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a868ff jmp 0x10a86771 */
  goto L_10a86771;
L_10a86904:;
  /* 10a86904 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86908 je 0x10a86919 */
  if (C.zf) goto L_10a86919;
  /* 10a8690a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8690d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a86910 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86913 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86916 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10a86919:;
  /* 10a86919 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8691c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8691e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86921 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a86924 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a86926 jmp 0x10a86713 */
  goto L_10a86713;
L_10a8692b:;
  /* 10a8692b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8692f je 0x10a86943 */
  if (C.zf) goto L_10a86943;
  /* 10a86931 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86934 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8693a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8693d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86940 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a86943:;
  /* 10a86943 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a86946 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a86948 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8694b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8694e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a86950 mov esp, ebp */
  ESP = (EBP);
  /* 10a86952 pop ebp */
  EBP = (pop32());
  /* 10a86953 ret  */
  ESPCHK(0x10a86530u, _esp0);
  ESP += 4; return;
}

/* FUN_10006960 @ 0x10a86960 (537 bytes, 173 insns) */
void f_10a86960(void) {
  FTRACE(0x10a86960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86960 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86961 mov ebp, esp */
  EBP = (ESP);
  /* 10a86963 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86966 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a8696d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10a86974 cmp dword ptr [0x10ab0810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8697b jne 0x10a869ba */
  if (!C.zf) goto L_10a869ba;
  /* 10a8697d call dword ptr [0x10ab33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33a4))), 0x10a86983u);
  /* 10a86983 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a86986 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8698a je 0x10a86998 */
  if (C.zf) goto L_10a86998;
  /* 10a8698c mov dword ptr [0x10ab0810], 1 */
  w32((uint32_t)(0x10ab0810), (0x1u));
  /* 10a86996 jmp 0x10a869ba */
  goto L_10a869ba;
L_10a86998:;
  /* 10a86998 call dword ptr [0x10ab33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33a0))), 0x10a8699eu);
  /* 10a8699e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a869a1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a869a5 je 0x10a869b3 */
  if (C.zf) goto L_10a869b3;
  /* 10a869a7 mov dword ptr [0x10ab0810], 2 */
  w32((uint32_t)(0x10ab0810), (0x2u));
  /* 10a869b1 jmp 0x10a869ba */
  goto L_10a869ba;
L_10a869b3:;
  /* 10a869b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a869b5 jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a869ba:;
  /* 10a869ba cmp dword ptr [0x10ab0810], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0810))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a869c1 jne 0x10a86abe */
  if (!C.zf) goto L_10a86abe;
  /* 10a869c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a869cb jne 0x10a869e3 */
  if (!C.zf) goto L_10a869e3;
  /* 10a869cd call dword ptr [0x10ab33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33a4))), 0x10a869d3u);
  /* 10a869d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a869d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a869da jne 0x10a869e3 */
  if (!C.zf) goto L_10a869e3;
  /* 10a869dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a869de jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a869e3:;
  /* 10a869e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a869e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a869e9:;
  /* 10a869e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a869ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a869ee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a869f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a869f3 je 0x10a86a15 */
  if (C.zf) goto L_10a86a15;
  /* 10a869f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a869f8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a869fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a869fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86a01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a86a03 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a86a06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a86a08 jne 0x10a86a13 */
  if (!C.zf) goto L_10a86a13;
  /* 10a86a0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86a0d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86a10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a86a13:;
  /* 10a86a13 jmp 0x10a869e9 */
  goto L_10a869e9;
L_10a86a15:;
  /* 10a86a15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86a18 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86a1b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a86a1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86a20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a86a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86a2e push edx */
  push32((uint32_t)(EDX));
  /* 10a86a2f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a86a32 push eax */
  push32((uint32_t)(EAX));
  /* 10a86a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a37 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a86a3du);
  /* 10a86a3d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a86a40 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86a44 je 0x10a86a64 */
  if (C.zf) goto L_10a86a64;
  /* 10a86a46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10a86a48 push 0x10aabed8 */
  push32((uint32_t)(0x10aabed8u));
  /* 10a86a4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a86a4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86a53 call 0x10a84390 */
  push32(0x10a86a58u); f_10a84390();
  /* 10a86a58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86a5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a86a5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86a62 jne 0x10a86a75 */
  if (!C.zf) goto L_10a86a75;
L_10a86a64:;
  /* 10a86a64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a86a67 push edx */
  push32((uint32_t)(EDX));
  /* 10a86a68 call dword ptr [0x10ab3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3398))), 0x10a86a6eu);
  /* 10a86a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86a70 jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a86a75:;
  /* 10a86a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86a7c push eax */
  push32((uint32_t)(EAX));
  /* 10a86a7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86a80 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86a84 push edx */
  push32((uint32_t)(EDX));
  /* 10a86a85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a86a88 push eax */
  push32((uint32_t)(EAX));
  /* 10a86a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86a8d call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a86a93u);
  /* 10a86a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a86a95 jne 0x10a86aac */
  if (!C.zf) goto L_10a86aac;
  /* 10a86a97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a86a99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86a9c push ecx */
  push32((uint32_t)(ECX));
  /* 10a86a9d call 0x10a84e20 */
  push32(0x10a86aa2u); f_10a84e20();
  /* 10a86aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86aa5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10a86aac:;
  /* 10a86aac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a86aaf push edx */
  push32((uint32_t)(EDX));
  /* 10a86ab0 call dword ptr [0x10ab3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3398))), 0x10a86ab6u);
  /* 10a86ab6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86ab9 jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a86abe:;
  /* 10a86abe cmp dword ptr [0x10ab0810], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0810))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ac5 jne 0x10a86b73 */
  if (!C.zf) goto L_10a86b73;
  /* 10a86acb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86acf jne 0x10a86ae7 */
  if (!C.zf) goto L_10a86ae7;
  /* 10a86ad1 call dword ptr [0x10ab33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33a0))), 0x10a86ad7u);
  /* 10a86ad7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a86ada cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ade jne 0x10a86ae7 */
  if (!C.zf) goto L_10a86ae7;
  /* 10a86ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86ae2 jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a86ae7:;
  /* 10a86ae7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86aea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a86aed:;
  /* 10a86aed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86af0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a86af3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a86af5 je 0x10a86b15 */
  if (C.zf) goto L_10a86b15;
  /* 10a86af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86afa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86afd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a86b00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86b03 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a86b06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a86b08 jne 0x10a86b13 */
  if (!C.zf) goto L_10a86b13;
  /* 10a86b0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86b0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86b10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a86b13:;
  /* 10a86b13 jmp 0x10a86aed */
  goto L_10a86aed;
L_10a86b15:;
  /* 10a86b15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86b18 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86b1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86b1e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a86b21 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10a86b26 push 0x10aabed8 */
  push32((uint32_t)(0x10aabed8u));
  /* 10a86b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a86b2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86b30 push edx */
  push32((uint32_t)(EDX));
  /* 10a86b31 call 0x10a84390 */
  push32(0x10a86b36u); f_10a84390();
  /* 10a86b36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86b39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a86b3c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86b40 jne 0x10a86b50 */
  if (!C.zf) goto L_10a86b50;
  /* 10a86b42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86b45 push eax */
  push32((uint32_t)(EAX));
  /* 10a86b46 call dword ptr [0x10ab3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3394))), 0x10a86b4cu);
  /* 10a86b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86b4e jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a86b50:;
  /* 10a86b50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a86b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86b54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86b57 push edx */
  push32((uint32_t)(EDX));
  /* 10a86b58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86b5b push eax */
  push32((uint32_t)(EAX));
  /* 10a86b5c call 0x10a8ac70 */
  push32(0x10a86b61u); f_10a8ac70();
  /* 10a86b61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86b64 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a86b67 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86b68 call dword ptr [0x10ab3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3394))), 0x10a86b6eu);
  /* 10a86b6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86b71 jmp 0x10a86b75 */
  goto L_10a86b75;
L_10a86b73:;
  /* 10a86b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a86b75:;
  /* 10a86b75 mov esp, ebp */
  ESP = (EBP);
  /* 10a86b77 pop ebp */
  EBP = (pop32());
  /* 10a86b78 ret  */
  ESPCHK(0x10a86960u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x10a86b80 (77 bytes, 25 insns) */
void f_10a86b80(void) {
  FTRACE(0x10a86b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86b81 mov ebp, esp */
  EBP = (ESP);
  /* 10a86b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86b85 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a86b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86b8c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86b90 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10a86b93 push eax */
  push32((uint32_t)(EAX));
  /* 10a86b94 call dword ptr [0x10ab33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33ac))), 0x10a86b9au);
  /* 10a86b9a mov dword ptr [0x10ab204c], eax */
  w32((uint32_t)(0x10ab204c), (EAX));
  /* 10a86b9f cmp dword ptr [0x10ab204c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab204c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ba6 jne 0x10a86bac */
  if (!C.zf) goto L_10a86bac;
  /* 10a86ba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86baa jmp 0x10a86bcb */
  goto L_10a86bcb;
L_10a86bac:;
  /* 10a86bac call 0x10a88630 */
  push32(0x10a86bb1u); f_10a88630();
  /* 10a86bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a86bb3 jne 0x10a86bc6 */
  if (!C.zf) goto L_10a86bc6;
  /* 10a86bb5 mov ecx, dword ptr [0x10ab204c] */
  ECX = (r32((uint32_t)(0x10ab204c)));
  /* 10a86bbb push ecx */
  push32((uint32_t)(ECX));
  /* 10a86bbc call dword ptr [0x10ab33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33a8))), 0x10a86bc2u);
  /* 10a86bc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a86bc4 jmp 0x10a86bcb */
  goto L_10a86bcb;
L_10a86bc6:;
  /* 10a86bc6 mov eax, 1 */
  EAX = (0x1u);
L_10a86bcb:;
  /* 10a86bcb pop ebp */
  EBP = (pop32());
  /* 10a86bcc ret  */
  ESPCHK(0x10a86b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bd0 @ 0x10a86bd0 (156 bytes, 48 insns) */
void f_10a86bd0(void) {
  FTRACE(0x10a86bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a86bd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86bd6 mov eax, dword ptr [0x10ab2048] */
  EAX = (r32((uint32_t)(0x10ab2048)));
  /* 10a86bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a86bde mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a86be5 jmp 0x10a86bf0 */
  goto L_10a86bf0;
L_10a86be7:;
  /* 10a86be7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86bea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86bed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a86bf0:;
  /* 10a86bf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86bf3 cmp edx, dword ptr [0x10ab2044] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ab2044))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86bf9 jge 0x10a86c46 */
  if ((C.sf==C.of)) goto L_10a86c46;
  /* 10a86bfb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a86c00 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10a86c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86c08 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a86c0b push ecx */
  push32((uint32_t)(ECX));
  /* 10a86c0c call dword ptr [0x10ab3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3368))), 0x10a86c12u);
  /* 10a86c12 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a86c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86c19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86c1c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a86c1f push eax */
  push32((uint32_t)(EAX));
  /* 10a86c20 call dword ptr [0x10ab3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3368))), 0x10a86c26u);
  /* 10a86c26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86c29 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a86c2c push edx */
  push32((uint32_t)(EDX));
  /* 10a86c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86c2f mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a86c34 push eax */
  push32((uint32_t)(EAX));
  /* 10a86c35 call dword ptr [0x10ab33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33b0))), 0x10a86c3bu);
  /* 10a86c3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86c3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86c41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a86c44 jmp 0x10a86be7 */
  goto L_10a86be7;
L_10a86c46:;
  /* 10a86c46 mov edx, dword ptr [0x10ab2048] */
  EDX = (r32((uint32_t)(0x10ab2048)));
  /* 10a86c4c push edx */
  push32((uint32_t)(EDX));
  /* 10a86c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86c4f mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a86c54 push eax */
  push32((uint32_t)(EAX));
  /* 10a86c55 call dword ptr [0x10ab33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33b0))), 0x10a86c5bu);
  /* 10a86c5b mov ecx, dword ptr [0x10ab204c] */
  ECX = (r32((uint32_t)(0x10ab204c)));
  /* 10a86c61 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86c62 call dword ptr [0x10ab33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33a8))), 0x10a86c68u);
  /* 10a86c68 mov esp, ebp */
  ESP = (EBP);
  /* 10a86c6a pop ebp */
  EBP = (pop32());
  /* 10a86c6b ret  */
  ESPCHK(0x10a86bd0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10a86c70 (73 bytes, 19 insns) */
void f_10a86c70(void) {
  FTRACE(0x10a86c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86c71 mov ebp, esp */
  EBP = (ESP);
  /* 10a86c73 cmp dword ptr [0x10ab06a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86c7a je 0x10a86c8e */
  if (C.zf) goto L_10a86c8e;
  /* 10a86c7c cmp dword ptr [0x10ab06a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86c83 jne 0x10a86cb7 */
  if (!C.zf) goto L_10a86cb7;
  /* 10a86c85 cmp dword ptr [0x10ab06a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86c8c jne 0x10a86cb7 */
  if (!C.zf) goto L_10a86cb7;
L_10a86c8e:;
  /* 10a86c8e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10a86c93 call 0x10a86cc0 */
  push32(0x10a86c98u); f_10a86cc0();
  /* 10a86c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86c9b cmp dword ptr [0x10ab0814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ca2 je 0x10a86caa */
  if (C.zf) goto L_10a86caa;
  /* 10a86ca4 call dword ptr [0x10ab0814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab0814))), 0x10a86caau);
L_10a86caa:;
  /* 10a86caa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a86caf call 0x10a86cc0 */
  push32(0x10a86cb4u); f_10a86cc0();
  /* 10a86cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a86cb7:;
  /* 10a86cb7 pop ebp */
  EBP = (pop32());
  /* 10a86cb8 ret  */
  ESPCHK(0x10a86c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x10a86cc0 (447 bytes, 131 insns) */
void f_10a86cc0(void) {
  FTRACE(0x10a86cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a86cc3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86cc9 push ebx */
  push32((uint32_t)(EBX));
  /* 10a86cca push esi */
  push32((uint32_t)(ESI));
  /* 10a86ccb push edi */
  push32((uint32_t)(EDI));
  /* 10a86ccc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a86cd3 jmp 0x10a86cde */
  goto L_10a86cde;
L_10a86cd5:;
  /* 10a86cd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86cd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86cdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a86cde:;
  /* 10a86cde cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ce2 jae 0x10a86cf7 */
  if (!C.cf) goto L_10a86cf7;
  /* 10a86ce4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86cea cmp edx, dword ptr [ecx*8 + 0x10aaeab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10aaeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86cf1 jne 0x10a86cf5 */
  if (!C.zf) goto L_10a86cf5;
  /* 10a86cf3 jmp 0x10a86cf7 */
  goto L_10a86cf7;
L_10a86cf5:;
  /* 10a86cf5 jmp 0x10a86cd5 */
  goto L_10a86cd5;
L_10a86cf7:;
  /* 10a86cf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86cfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86cfd cmp ecx, dword ptr [eax*8 + 0x10aaeab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10aaeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d04 jne 0x10a86e78 */
  if (!C.zf) goto L_10a86e78;
  /* 10a86d0a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d11 je 0x10a86d34 */
  if (C.zf) goto L_10a86d34;
  /* 10a86d13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86d16 mov eax, dword ptr [edx*8 + 0x10aaeab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10aaeab4)));
  /* 10a86d1d push eax */
  push32((uint32_t)(EAX));
  /* 10a86d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86d24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a86d26 call 0x10a83450 */
  push32(0x10a86d2bu); f_10a83450();
  /* 10a86d2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86d2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d31 jne 0x10a86d34 */
  if (!C.zf) goto L_10a86d34;
  /* 10a86d33 int3  */
  x86_unimpl("int3 @ 0x10a86d33");
L_10a86d34:;
  /* 10a86d34 cmp dword ptr [0x10ab06a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d3b je 0x10a86d4f */
  if (C.zf) goto L_10a86d4f;
  /* 10a86d3d cmp dword ptr [0x10ab06a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d44 jne 0x10a86d88 */
  if (!C.zf) goto L_10a86d88;
  /* 10a86d46 cmp dword ptr [0x10ab06a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d4d jne 0x10a86d88 */
  if (!C.zf) goto L_10a86d88;
L_10a86d4f:;
  /* 10a86d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86d51 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10a86d54 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86d55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86d58 mov eax, dword ptr [edx*8 + 0x10aaeab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10aaeab4)));
  /* 10a86d5f push eax */
  push32((uint32_t)(EAX));
  /* 10a86d60 call 0x10a871c0 */
  push32(0x10a86d65u); f_10a871c0();
  /* 10a86d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86d68 push eax */
  push32((uint32_t)(EAX));
  /* 10a86d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86d6c mov edx, dword ptr [ecx*8 + 0x10aaeab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10aaeab4)));
  /* 10a86d73 push edx */
  push32((uint32_t)(EDX));
  /* 10a86d74 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a86d76 call dword ptr [0x10ab332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab332c))), 0x10a86d7cu);
  /* 10a86d7c push eax */
  push32((uint32_t)(EAX));
  /* 10a86d7d call dword ptr [0x10ab3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3330))), 0x10a86d83u);
  /* 10a86d83 jmp 0x10a86e78 */
  goto L_10a86e78;
L_10a86d88:;
  /* 10a86d88 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86d8f je 0x10a86e78 */
  if (C.zf) goto L_10a86e78;
  /* 10a86d95 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a86d9a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10a86da0 push eax */
  push32((uint32_t)(EAX));
  /* 10a86da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86da3 call dword ptr [0x10ab3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3348))), 0x10a86da9u);
  /* 10a86da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a86dab jne 0x10a86dc1 */
  if (!C.zf) goto L_10a86dc1;
  /* 10a86dad push 0x10aab740 */
  push32((uint32_t)(0x10aab740u));
  /* 10a86db2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10a86db8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86db9 call 0x10a87340 */
  push32(0x10a86dbeu); f_10a87340();
  /* 10a86dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a86dc1:;
  /* 10a86dc1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10a86dc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a86dca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86dcd push eax */
  push32((uint32_t)(EAX));
  /* 10a86dce call 0x10a871c0 */
  push32(0x10a86dd3u); f_10a871c0();
  /* 10a86dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86dd6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86dd9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ddc jbe 0x10a86e0a */
  if ((C.cf||C.zf)) goto L_10a86e0a;
  /* 10a86dde lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10a86de4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86de5 call 0x10a871c0 */
  push32(0x10a86deau); f_10a871c0();
  /* 10a86dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86ded mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86df0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10a86df4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a86df7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a86df9 push 0x10aab73c */
  push32((uint32_t)(0x10aab73cu));
  /* 10a86dfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86e01 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86e02 call 0x10a87bb0 */
  push32(0x10a86e07u); f_10a87bb0();
  /* 10a86e07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a86e0a:;
  /* 10a86e0a push 0x10aac194 */
  push32((uint32_t)(0x10aac194u));
  /* 10a86e0f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a86e15 push edx */
  push32((uint32_t)(EDX));
  /* 10a86e16 call 0x10a87340 */
  push32(0x10a86e1bu); f_10a87340();
  /* 10a86e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86e1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86e21 push eax */
  push32((uint32_t)(EAX));
  /* 10a86e22 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10a86e28 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86e29 call 0x10a87350 */
  push32(0x10a86e2eu); f_10a87350();
  /* 10a86e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86e31 push 0x10aab6b4 */
  push32((uint32_t)(0x10aab6b4u));
  /* 10a86e36 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a86e3c push edx */
  push32((uint32_t)(EDX));
  /* 10a86e3d call 0x10a87350 */
  push32(0x10a86e42u); f_10a87350();
  /* 10a86e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86e45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86e48 mov ecx, dword ptr [eax*8 + 0x10aaeab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10aaeab4)));
  /* 10a86e4f push ecx */
  push32((uint32_t)(ECX));
  /* 10a86e50 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a86e56 push edx */
  push32((uint32_t)(EDX));
  /* 10a86e57 call 0x10a87350 */
  push32(0x10a86e5cu); f_10a87350();
  /* 10a86e5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86e5f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10a86e64 push 0x10aac16c */
  push32((uint32_t)(0x10aac16cu));
  /* 10a86e69 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10a86e6f push eax */
  push32((uint32_t)(EAX));
  /* 10a86e70 call 0x10a87af0 */
  push32(0x10a86e75u); f_10a87af0();
  /* 10a86e75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a86e78:;
  /* 10a86e78 pop edi */
  EDI = (pop32());
  /* 10a86e79 pop esi */
  ESI = (pop32());
  /* 10a86e7a pop ebx */
  EBX = (pop32());
  /* 10a86e7b mov esp, ebp */
  ESP = (EBP);
  /* 10a86e7d pop ebp */
  EBP = (pop32());
  /* 10a86e7e ret  */
  ESPCHK(0x10a86cc0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10a86e80 (80 bytes, 27 insns) */
void f_10a86e80(void) {
  FTRACE(0x10a86e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86e81 mov ebp, esp */
  EBP = (ESP);
  /* 10a86e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86e84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a86e8b jmp 0x10a86e96 */
  goto L_10a86e96;
L_10a86e8d:;
  /* 10a86e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86e90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86e93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a86e96:;
  /* 10a86e96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86e9a jae 0x10a86eaf */
  if (!C.cf) goto L_10a86eaf;
  /* 10a86e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86ea2 cmp edx, dword ptr [ecx*8 + 0x10aaeab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10aaeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ea9 jne 0x10a86ead */
  if (!C.zf) goto L_10a86ead;
  /* 10a86eab jmp 0x10a86eaf */
  goto L_10a86eaf;
L_10a86ead:;
  /* 10a86ead jmp 0x10a86e8d */
  goto L_10a86e8d;
L_10a86eaf:;
  /* 10a86eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86eb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86eb5 cmp ecx, dword ptr [eax*8 + 0x10aaeab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10aaeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ebc jne 0x10a86eca */
  if (!C.zf) goto L_10a86eca;
  /* 10a86ebe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86ec1 mov eax, dword ptr [edx*8 + 0x10aaeab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10aaeab4)));
  /* 10a86ec8 jmp 0x10a86ecc */
  goto L_10a86ecc;
L_10a86eca:;
  /* 10a86eca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a86ecc:;
  /* 10a86ecc mov esp, ebp */
  ESP = (EBP);
  /* 10a86ece pop ebp */
  EBP = (pop32());
  /* 10a86ecf ret  */
  ESPCHK(0x10a86e80u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10a86ed0 (66 bytes, 28 insns) */
void f_10a86ed0(void) {
  FTRACE(0x10a86ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10a86ed3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ed7 jne 0x10a86ef7 */
  if (!C.zf) goto L_10a86ef7;
  /* 10a86ed9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86edd jge 0x10a86ef7 */
  if ((C.sf==C.of)) goto L_10a86ef7;
  /* 10a86edf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a86ee1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86ee4 push eax */
  push32((uint32_t)(EAX));
  /* 10a86ee5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86ee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86eec push edx */
  push32((uint32_t)(EDX));
  /* 10a86eed call 0x10a86f20 */
  push32(0x10a86ef2u); f_10a86f20();
  /* 10a86ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86ef5 jmp 0x10a86f0d */
  goto L_10a86f0d;
L_10a86ef7:;
  /* 10a86ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a86ef9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a86efc push eax */
  push32((uint32_t)(EAX));
  /* 10a86efd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86f00 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86f04 push edx */
  push32((uint32_t)(EDX));
  /* 10a86f05 call 0x10a86f20 */
  push32(0x10a86f0au); f_10a86f20();
  /* 10a86f0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a86f0d:;
  /* 10a86f0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86f10 pop ebp */
  EBP = (pop32());
  /* 10a86f11 ret  */
  ESPCHK(0x10a86ed0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10a86f20 (194 bytes, 71 insns) */
void f_10a86f20(void) {
  FTRACE(0x10a86f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86f21 mov ebp, esp */
  EBP = (ESP);
  /* 10a86f23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86f26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a86f29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a86f2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86f30 je 0x10a86f49 */
  if (C.zf) goto L_10a86f49;
  /* 10a86f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10a86f38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86f3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a86f41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86f44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a86f46 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a86f49:;
  /* 10a86f49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a86f4f:;
  /* 10a86f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86f52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a86f54 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a86f57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a86f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a86f5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a86f5f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a86f62 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a86f65 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86f69 jbe 0x10a86f81 */
  if ((C.cf||C.zf)) goto L_10a86f81;
  /* 10a86f6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86f6e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f74 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a86f76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86f7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a86f7f jmp 0x10a86f95 */
  goto L_10a86f95;
L_10a86f81:;
  /* 10a86f81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a86f84 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a86f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86f92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a86f95:;
  /* 10a86f95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86f99 ja 0x10a86f4f */
  if ((!C.cf&&!C.zf)) goto L_10a86f4f;
  /* 10a86f9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86f9e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a86fa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86fa4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86fa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a86faa:;
  /* 10a86faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86fad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a86faf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10a86fb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86fb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86fb8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a86fba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a86fbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86fbf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10a86fc2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a86fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a86fc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a86fca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a86fcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86fd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a86fd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a86fd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a86fd9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86fdc jb 0x10a86faa */
  if (C.cf) goto L_10a86faa;
  /* 10a86fde mov esp, ebp */
  ESP = (EBP);
  /* 10a86fe0 pop ebp */
  EBP = (pop32());
  /* 10a86fe1 ret  */
  ESPCHK(0x10a86f20u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10a86ff0 (63 bytes, 24 insns) */
void f_10a86ff0(void) {
  FTRACE(0x10a86ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a86ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a86ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10a86ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a86ff4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ff8 jne 0x10a87009 */
  if (!C.zf) goto L_10a87009;
  /* 10a86ffa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a86ffe jge 0x10a87009 */
  if ((C.sf==C.of)) goto L_10a87009;
  /* 10a87000 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a87007 jmp 0x10a87010 */
  goto L_10a87010;
L_10a87009:;
  /* 10a87009 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a87010:;
  /* 10a87010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87013 push eax */
  push32((uint32_t)(EAX));
  /* 10a87014 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a87017 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87018 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8701b push edx */
  push32((uint32_t)(EDX));
  /* 10a8701c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8701f push eax */
  push32((uint32_t)(EAX));
  /* 10a87020 call 0x10a86f20 */
  push32(0x10a87025u); f_10a86f20();
  /* 10a87025 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87028 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8702b mov esp, ebp */
  ESP = (EBP);
  /* 10a8702d pop ebp */
  EBP = (pop32());
  /* 10a8702e ret  */
  ESPCHK(0x10a86ff0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10a87030 (30 bytes, 14 insns) */
void f_10a87030(void) {
  FTRACE(0x10a87030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87031 mov ebp, esp */
  EBP = (ESP);
  /* 10a87033 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a87035 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a87038 push eax */
  push32((uint32_t)(EAX));
  /* 10a87039 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8703c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8703d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87040 push edx */
  push32((uint32_t)(EDX));
  /* 10a87041 call 0x10a86f20 */
  push32(0x10a87046u); f_10a86f20();
  /* 10a87046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87049 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8704c pop ebp */
  EBP = (pop32());
  /* 10a8704d ret  */
  ESPCHK(0x10a87030u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10a87050 (72 bytes, 28 insns) */
void f_10a87050(void) {
  FTRACE(0x10a87050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87050 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87051 mov ebp, esp */
  EBP = (ESP);
  /* 10a87053 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87054 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87058 jne 0x10a87071 */
  if (!C.zf) goto L_10a87071;
  /* 10a8705a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8705e jg 0x10a87071 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a87071;
  /* 10a87060 jl 0x10a87068 */
  if ((C.sf!=C.of)) goto L_10a87068;
  /* 10a87062 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87066 jae 0x10a87071 */
  if (!C.cf) goto L_10a87071;
L_10a87068:;
  /* 10a87068 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8706f jmp 0x10a87078 */
  goto L_10a87078;
L_10a87071:;
  /* 10a87071 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a87078:;
  /* 10a87078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8707b push eax */
  push32((uint32_t)(EAX));
  /* 10a8707c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8707f push ecx */
  push32((uint32_t)(ECX));
  /* 10a87080 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a87083 push edx */
  push32((uint32_t)(EDX));
  /* 10a87084 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87087 push eax */
  push32((uint32_t)(EAX));
  /* 10a87088 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8708b push ecx */
  push32((uint32_t)(ECX));
  /* 10a8708c call 0x10a870a0 */
  push32(0x10a87091u); f_10a870a0();
  /* 10a87091 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a87094 mov esp, ebp */
  ESP = (EBP);
  /* 10a87096 pop ebp */
  EBP = (pop32());
  /* 10a87097 ret  */
  ESPCHK(0x10a87050u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10a870a0 (242 bytes, 91 insns) */
void f_10a870a0(void) {
  FTRACE(0x10a870a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a870a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a870a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a870a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a870a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a870a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a870ac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a870b0 je 0x10a870d4 */
  if (C.zf) goto L_10a870d4;
  /* 10a870b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a870b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10a870b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a870bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a870be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a870c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a870c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a870c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a870c9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a870cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a870ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a870d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a870d4:;
  /* 10a870d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a870d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a870da:;
  /* 10a870da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a870dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a870df push ecx */
  push32((uint32_t)(ECX));
  /* 10a870e0 push eax */
  push32((uint32_t)(EAX));
  /* 10a870e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a870e4 push edx */
  push32((uint32_t)(EDX));
  /* 10a870e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a870e8 push eax */
  push32((uint32_t)(EAX));
  /* 10a870e9 call 0x10a8b020 */
  push32(0x10a870eeu); f_10a8b020();
  /* 10a870ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a870f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a870f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a870f6 push edx */
  push32((uint32_t)(EDX));
  /* 10a870f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a870f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a870fb push eax */
  push32((uint32_t)(EAX));
  /* 10a870fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a870ff push ecx */
  push32((uint32_t)(ECX));
  /* 10a87100 call 0x10a8afb0 */
  push32(0x10a87105u); f_10a8afb0();
  /* 10a87105 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a87108 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a8710b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8710f jbe 0x10a87127 */
  if ((C.cf||C.zf)) goto L_10a87127;
  /* 10a87111 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a87114 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87117 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8711a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a8711c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8711f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87122 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a87125 jmp 0x10a8713b */
  goto L_10a8713b;
L_10a87127:;
  /* 10a87127 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8712a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8712d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87130 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a87132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87135 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87138 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8713b:;
  /* 10a8713b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8713f ja 0x10a870da */
  if ((!C.cf&&!C.zf)) goto L_10a870da;
  /* 10a87141 jb 0x10a87149 */
  if (C.cf) goto L_10a87149;
  /* 10a87143 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87147 ja 0x10a870da */
  if ((!C.cf&&!C.zf)) goto L_10a870da;
L_10a87149:;
  /* 10a87149 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8714c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a8714f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87152 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a87158:;
  /* 10a87158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8715b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a8715d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10a87160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87163 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87166 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a87168 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a8716a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8716d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10a87170 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a87172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87175 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87178 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8717b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8717e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87181 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a87184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87187 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8718a jb 0x10a87158 */
  if (C.cf) goto L_10a87158;
  /* 10a8718c mov esp, ebp */
  ESP = (EBP);
  /* 10a8718e pop ebp */
  EBP = (pop32());
  /* 10a8718f ret 0x14 */
  ESPCHK(0x10a870a0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10a871a0 (31 bytes, 15 insns) */
void f_10a871a0(void) {
  FTRACE(0x10a871a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a871a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a871a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a871a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a871a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a871a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a871a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a871ac push ecx */
  push32((uint32_t)(ECX));
  /* 10a871ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a871b0 push edx */
  push32((uint32_t)(EDX));
  /* 10a871b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a871b4 push eax */
  push32((uint32_t)(EAX));
  /* 10a871b5 call 0x10a870a0 */
  push32(0x10a871bau); f_10a870a0();
  /* 10a871ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a871bd pop ebp */
  EBP = (pop32());
  /* 10a871be ret  */
  ESPCHK(0x10a871a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10a871c0 (123 bytes, 44 insns) */
void f_10a871c0(void) {
  FTRACE(0x10a871c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a871c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a871c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a871ca je 0x10a871e0 */
  if (C.zf) goto L_10a871e0;
L_10a871cc:;
  /* 10a871cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10a871ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a871cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a871d1 je 0x10a87213 */
  if (C.zf) goto L_10a87213;
  /* 10a871d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a871d9 jne 0x10a871cc */
  if (!C.zf) goto L_10a871cc;
  /* 10a871db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a871e0:;
  /* 10a871e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a871e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a871e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a871e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a871ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a871ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a871f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a871f6 je 0x10a871e0 */
  if (C.zf) goto L_10a871e0;
  /* 10a871f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a871fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a871fd je 0x10a87231 */
  if (C.zf) goto L_10a87231;
  /* 10a871ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a87201 je 0x10a87227 */
  if (C.zf) goto L_10a87227;
  /* 10a87203 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a87208 je 0x10a8721d */
  if (C.zf) goto L_10a8721d;
  /* 10a8720a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a8720f je 0x10a87213 */
  if (C.zf) goto L_10a87213;
  /* 10a87211 jmp 0x10a871e0 */
  goto L_10a871e0;
L_10a87213:;
  /* 10a87213 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10a87216 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a8721a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8721c ret  */
  ESPCHK(0x10a871c0u, _esp0);
  ESP += 4; return;
L_10a8721d:;
  /* 10a8721d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10a87220 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a87224 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87226 ret  */
  ESPCHK(0x10a871c0u, _esp0);
  ESP += 4; return;
L_10a87227:;
  /* 10a87227 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10a8722a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a8722e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87230 ret  */
  ESPCHK(0x10a871c0u, _esp0);
  ESP += 4; return;
L_10a87231:;
  /* 10a87231 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10a87234 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a87238 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8723a ret  */
  ESPCHK(0x10a871c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x10a87240 (249 bytes, 93 insns) */
void f_10a87240(void) {
  FTRACE(0x10a87240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87240 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87241 mov ebp, esp */
  EBP = (ESP);
  /* 10a87243 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87246 push ebx */
  push32((uint32_t)(EBX));
  /* 10a87247 push esi */
  push32((uint32_t)(ESI));
  /* 10a87248 push edi */
  push32((uint32_t)(EDI));
  /* 10a87249 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a8724c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a8724f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10a87252 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10a87255:;
  /* 10a87255 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87259 jne 0x10a87279 */
  if (!C.zf) goto L_10a87279;
  /* 10a8725b push 0x10aac1cc */
  push32((uint32_t)(0x10aac1ccu));
  /* 10a87260 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a87262 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10a87264 push 0x10aac1c0 */
  push32((uint32_t)(0x10aac1c0u));
  /* 10a87269 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8726b call 0x10a83450 */
  push32(0x10a87270u); f_10a83450();
  /* 10a87270 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87273 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87276 jne 0x10a87279 */
  if (!C.zf) goto L_10a87279;
  /* 10a87278 int3  */
  x86_unimpl("int3 @ 0x10a87278");
L_10a87279:;
  /* 10a87279 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8727b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8727d jne 0x10a87255 */
  if (!C.zf) goto L_10a87255;
L_10a8727f:;
  /* 10a8727f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87283 jne 0x10a872a3 */
  if (!C.zf) goto L_10a872a3;
  /* 10a87285 push 0x10aac1b0 */
  push32((uint32_t)(0x10aac1b0u));
  /* 10a8728a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8728c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a8728e push 0x10aac1c0 */
  push32((uint32_t)(0x10aac1c0u));
  /* 10a87293 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a87295 call 0x10a83450 */
  push32(0x10a8729au); f_10a83450();
  /* 10a8729a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8729d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a872a0 jne 0x10a872a3 */
  if (!C.zf) goto L_10a872a3;
  /* 10a872a2 int3  */
  x86_unimpl("int3 @ 0x10a872a2");
L_10a872a3:;
  /* 10a872a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a872a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a872a7 jne 0x10a8727f */
  if (!C.zf) goto L_10a8727f;
  /* 10a872a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10a872b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a872b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a872bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a872c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a872c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a872ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a872cd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a872d0 push edx */
  push32((uint32_t)(EDX));
  /* 10a872d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a872d4 push eax */
  push32((uint32_t)(EAX));
  /* 10a872d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a872d9 call 0x10a8b320 */
  push32(0x10a872deu); f_10a8b320();
  /* 10a872de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a872e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a872e4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a872ea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a872ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a872f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872f6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a872fa jl 0x10a8731e */
  if ((C.sf!=C.of)) goto L_10a8731e;
  /* 10a872fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a872ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a87301 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a87304 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a87306 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8730c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a8730f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a87312 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a87314 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87317 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8731a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a8731c jmp 0x10a8732f */
  goto L_10a8732f;
L_10a8731e:;
  /* 10a8731e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a87321 push eax */
  push32((uint32_t)(EAX));
  /* 10a87322 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a87324 call 0x10a8b0a0 */
  push32(0x10a87329u); f_10a8b0a0();
  /* 10a87329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8732c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10a8732f:;
  /* 10a8732f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a87332 pop edi */
  EDI = (pop32());
  /* 10a87333 pop esi */
  ESI = (pop32());
  /* 10a87334 pop ebx */
  EBX = (pop32());
  /* 10a87335 mov esp, ebp */
  ESP = (EBP);
  /* 10a87337 pop ebp */
  EBP = (pop32());
  /* 10a87338 ret  */
  ESPCHK(0x10a87240u, _esp0);
  ESP += 4; return;
}

/* FUN_10007340 @ 0x10a87340 (7 bytes, 3 insns) */
void f_10a87340(void) {
  FTRACE(0x10a87340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87340 push edi */
  push32((uint32_t)(EDI));
  /* 10a87341 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10a87345 jmp 0x10a873b1 */
  jmp_ind(0x10a873b1u); return;
}

/* FUN_10007350 @ 0x10a87350 (224 bytes, 84 insns) */
void f_10a87350(void) {
  FTRACE(0x10a87350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87350 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a87354 push edi */
  push32((uint32_t)(EDI));
  /* 10a87355 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a8735b je 0x10a8736c */
  if (C.zf) goto L_10a8736c;
L_10a8735d:;
  /* 10a8735d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10a8735f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a87360 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a87362 je 0x10a8739f */
  if (C.zf) goto L_10a8739f;
  /* 10a87364 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a8736a jne 0x10a8735d */
  if (!C.zf) goto L_10a8735d;
L_10a8736c:;
  /* 10a8736c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a8736e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a87373 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87375 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a87378 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8737a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8737d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a87382 je 0x10a8736c */
  if (C.zf) goto L_10a8736c;
  /* 10a87384 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a87387 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a87389 je 0x10a873ae */
  if (C.zf) goto L_10a873ae;
  /* 10a8738b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a8738d je 0x10a873a9 */
  if (C.zf) goto L_10a873a9;
  /* 10a8738f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a87394 je 0x10a873a4 */
  if (C.zf) goto L_10a873a4;
  /* 10a87396 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a8739b je 0x10a8739f */
  if (C.zf) goto L_10a8739f;
  /* 10a8739d jmp 0x10a8736c */
  goto L_10a8736c;
L_10a8739f:;
  /* 10a8739f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10a873a2 jmp 0x10a873b1 */
  goto L_10a873b1;
L_10a873a4:;
  /* 10a873a4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10a873a7 jmp 0x10a873b1 */
  goto L_10a873b1;
L_10a873a9:;
  /* 10a873a9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10a873ac jmp 0x10a873b1 */
  goto L_10a873b1;
L_10a873ae:;
  /* 10a873ae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10a873b1:;
  /* 10a873b1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a873b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a873bb je 0x10a873d6 */
  if (C.zf) goto L_10a873d6;
L_10a873bd:;
  /* 10a873bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a873bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a873c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a873c2 je 0x10a87428 */
  if (C.zf) goto L_10a87428;
  /* 10a873c4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10a873c6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a873c7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a873cd jne 0x10a873bd */
  if (!C.zf) goto L_10a873bd;
  /* 10a873cf jmp 0x10a873d6 */
  goto L_10a873d6;
L_10a873d1:;
  /* 10a873d1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a873d3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a873d6:;
  /* 10a873d6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a873db mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a873dd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a873df xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a873e2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a873e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a873e6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a873e9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a873ee je 0x10a873d1 */
  if (C.zf) goto L_10a873d1;
  /* 10a873f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a873f2 je 0x10a87428 */
  if (C.zf) goto L_10a87428;
  /* 10a873f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10a873f6 je 0x10a8741f */
  if (C.zf) goto L_10a8741f;
  /* 10a873f8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a873fe je 0x10a87412 */
  if (C.zf) goto L_10a87412;
  /* 10a87400 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a87406 je 0x10a8740a */
  if (C.zf) goto L_10a8740a;
  /* 10a87408 jmp 0x10a873d1 */
  goto L_10a873d1;
L_10a8740a:;
  /* 10a8740a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a8740c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a87410 pop edi */
  EDI = (pop32());
  /* 10a87411 ret  */
  ESPCHK(0x10a87350u, _esp0);
  ESP += 4; return;
L_10a87412:;
  /* 10a87412 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10a87415 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a87419 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10a8741d pop edi */
  EDI = (pop32());
  /* 10a8741e ret  */
  ESPCHK(0x10a87350u, _esp0);
  ESP += 4; return;
L_10a8741f:;
  /* 10a8741f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10a87422 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a87426 pop edi */
  EDI = (pop32());
  /* 10a87427 ret  */
  ESPCHK(0x10a87350u, _esp0);
  ESP += 4; return;
L_10a87428:;
  /* 10a87428 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10a8742a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a8742e pop edi */
  EDI = (pop32());
  /* 10a8742f ret  */
  ESPCHK(0x10a87350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x10a87430 (243 bytes, 91 insns) */
void f_10a87430(void) {
  FTRACE(0x10a87430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87431 mov ebp, esp */
  EBP = (ESP);
  /* 10a87433 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87436 push ebx */
  push32((uint32_t)(EBX));
  /* 10a87437 push esi */
  push32((uint32_t)(ESI));
  /* 10a87438 push edi */
  push32((uint32_t)(EDI));
  /* 10a87439 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a8743c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a8743f:;
  /* 10a8743f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87443 jne 0x10a87463 */
  if (!C.zf) goto L_10a87463;
  /* 10a87445 push 0x10aac1cc */
  push32((uint32_t)(0x10aac1ccu));
  /* 10a8744a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8744c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a8744e push 0x10aac1dc */
  push32((uint32_t)(0x10aac1dcu));
  /* 10a87453 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a87455 call 0x10a83450 */
  push32(0x10a8745au); f_10a83450();
  /* 10a8745a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8745d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87460 jne 0x10a87463 */
  if (!C.zf) goto L_10a87463;
  /* 10a87462 int3  */
  x86_unimpl("int3 @ 0x10a87462");
L_10a87463:;
  /* 10a87463 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a87465 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a87467 jne 0x10a8743f */
  if (!C.zf) goto L_10a8743f;
L_10a87469:;
  /* 10a87469 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8746d jne 0x10a8748d */
  if (!C.zf) goto L_10a8748d;
  /* 10a8746f push 0x10aac1b0 */
  push32((uint32_t)(0x10aac1b0u));
  /* 10a87474 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a87476 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10a87478 push 0x10aac1dc */
  push32((uint32_t)(0x10aac1dcu));
  /* 10a8747d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8747f call 0x10a83450 */
  push32(0x10a87484u); f_10a83450();
  /* 10a87484 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87487 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8748a jne 0x10a8748d */
  if (!C.zf) goto L_10a8748d;
  /* 10a8748c int3  */
  x86_unimpl("int3 @ 0x10a8748c");
L_10a8748d:;
  /* 10a8748d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8748f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a87491 jne 0x10a87469 */
  if (!C.zf) goto L_10a87469;
  /* 10a87493 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a87496 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10a8749d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a874a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a874a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a874ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a874ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a874b4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a874b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a874ba push ecx */
  push32((uint32_t)(ECX));
  /* 10a874bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a874be push edx */
  push32((uint32_t)(EDX));
  /* 10a874bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874c2 push eax */
  push32((uint32_t)(EAX));
  /* 10a874c3 call 0x10a8b320 */
  push32(0x10a874c8u); f_10a8b320();
  /* 10a874c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a874cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a874ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a874d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a874d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a874dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874e0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a874e4 jl 0x10a87508 */
  if ((C.sf!=C.of)) goto L_10a87508;
  /* 10a874e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a874eb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a874ee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a874f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a874f6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a874f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a874fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a874fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87501 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a87504 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a87506 jmp 0x10a87519 */
  goto L_10a87519;
L_10a87508:;
  /* 10a87508 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8750b push edx */
  push32((uint32_t)(EDX));
  /* 10a8750c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8750e call 0x10a8b0a0 */
  push32(0x10a87513u); f_10a8b0a0();
  /* 10a87513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87516 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10a87519:;
  /* 10a87519 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8751c pop edi */
  EDI = (pop32());
  /* 10a8751d pop esi */
  ESI = (pop32());
  /* 10a8751e pop ebx */
  EBX = (pop32());
  /* 10a8751f mov esp, ebp */
  ESP = (EBP);
  /* 10a87521 pop ebp */
  EBP = (pop32());
  /* 10a87522 ret  */
  ESPCHK(0x10a87430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x10a87530 (47 bytes, 17 insns) */
void f_10a87530(void) {
  FTRACE(0x10a87530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87530 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87531 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87536 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10a8753a jb 0x10a87550 */
  if (C.cf) goto L_10a87550;
L_10a8753c:;
  /* 10a8753c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87542 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87547 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10a87549 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8754e jae 0x10a8753c */
  if (!C.cf) goto L_10a8753c;
L_10a87550:;
  /* 10a87550 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87552 mov eax, esp */
  EAX = (ESP);
  /* 10a87554 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10a87556 mov esp, ecx */
  ESP = (ECX);
  /* 10a87558 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8755a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a8755d push eax */
  push32((uint32_t)(EAX));
  /* 10a8755e ret  */
  ESPCHK(0x10a87530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x10a87560 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10a87560(void) {
  FTRACE(0x10a87560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87560 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87561 mov ebp, esp */
  EBP = (ESP);
  /* 10a87563 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87566 push esi */
  push32((uint32_t)(ESI));
  /* 10a87567 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8756b je 0x10a87573 */
  if (C.zf) goto L_10a87573;
  /* 10a8756d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87571 jne 0x10a87578 */
  if (!C.zf) goto L_10a87578;
L_10a87573:;
  /* 10a87573 jmp 0x10a87748 */
  goto L_10a87748;
L_10a87578:;
  /* 10a87578 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8757c je 0x10a87594 */
  if (C.zf) goto L_10a87594;
  /* 10a8757e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87582 je 0x10a87594 */
  if (C.zf) goto L_10a87594;
  /* 10a87584 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87588 je 0x10a87594 */
  if (C.zf) goto L_10a87594;
  /* 10a8758a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8758e jne 0x10a87671 */
  if (!C.zf) goto L_10a87671;
L_10a87594:;
  /* 10a87594 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a87596 call 0x10a87d90 */
  push32(0x10a8759bu); f_10a87d90();
  /* 10a8759b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8759e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a875a2 je 0x10a875aa */
  if (C.zf) goto L_10a875aa;
  /* 10a875a4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a875a8 jne 0x10a875ef */
  if (!C.zf) goto L_10a875ef;
L_10a875aa:;
  /* 10a875aa cmp dword ptr [0x10ab0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a875b1 jne 0x10a875ef */
  if (!C.zf) goto L_10a875ef;
  /* 10a875b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a875b5 push 0x10a87790 */
  push32((uint32_t)(0x10a87790u));
  /* 10a875ba call dword ptr [0x10ab331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab331c))), 0x10a875c0u);
  /* 10a875c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a875c3 jne 0x10a875d1 */
  if (!C.zf) goto L_10a875d1;
  /* 10a875c5 mov dword ptr [0x10ab0828], 1 */
  w32((uint32_t)(0x10ab0828), (0x1u));
  /* 10a875cf jmp 0x10a875ef */
  goto L_10a875ef;
L_10a875d1:;
  /* 10a875d1 call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a875d7u);
  /* 10a875d7 mov esi, eax */
  ESI = (EAX);
  /* 10a875d9 call 0x10a8c270 */
  push32(0x10a875deu); f_10a8c270();
  /* 10a875de mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10a875e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a875e2 call 0x10a87e30 */
  push32(0x10a875e7u); f_10a87e30();
  /* 10a875e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a875ea jmp 0x10a87748 */
  goto L_10a87748;
L_10a875ef:;
  /* 10a875ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a875f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a875f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a875f8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a875fb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a875fe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87602 ja 0x10a87662 */
  if ((!C.cf&&!C.zf)) goto L_10a87662;
  /* 10a87604 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87607 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a87609 mov dl, byte ptr [eax + 0x10a8776f] */
  DL = (r8((uint32_t)(EAX + 0x10a8776f)));
  /* 10a8760f jmp dword ptr [edx*4 + 0x10a8775b] */
  switch (EDX) {
    case 0: goto L_10a87616;
    case 1: goto L_10a87650;
    case 2: goto L_10a8762a;
    case 3: goto L_10a8763d;
    case 4: goto L_10a87662;
    default: x86_unimpl("switch@0x10a8760f out of table"); return;
  }
L_10a87616:;
  /* 10a87616 mov ecx, dword ptr [0x10ab0818] */
  ECX = (r32((uint32_t)(0x10ab0818)));
  /* 10a8761c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8761f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87622 mov dword ptr [0x10ab0818], edx */
  w32((uint32_t)(0x10ab0818), (EDX));
  /* 10a87628 jmp 0x10a87662 */
  goto L_10a87662;
L_10a8762a:;
  /* 10a8762a mov eax, dword ptr [0x10ab081c] */
  EAX = (r32((uint32_t)(0x10ab081c)));
  /* 10a8762f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a87632 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87635 mov dword ptr [0x10ab081c], ecx */
  w32((uint32_t)(0x10ab081c), (ECX));
  /* 10a8763b jmp 0x10a87662 */
  goto L_10a87662;
L_10a8763d:;
  /* 10a8763d mov edx, dword ptr [0x10ab0820] */
  EDX = (r32((uint32_t)(0x10ab0820)));
  /* 10a87643 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a87646 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87649 mov dword ptr [0x10ab0820], eax */
  w32((uint32_t)(0x10ab0820), (EAX));
  /* 10a8764e jmp 0x10a87662 */
  goto L_10a87662;
L_10a87650:;
  /* 10a87650 mov ecx, dword ptr [0x10ab0824] */
  ECX = (r32((uint32_t)(0x10ab0824)));
  /* 10a87656 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a87659 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8765c mov dword ptr [0x10ab0824], edx */
  w32((uint32_t)(0x10ab0824), (EDX));
L_10a87662:;
  /* 10a87662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a87664 call 0x10a87e30 */
  push32(0x10a87669u); f_10a87e30();
  /* 10a87669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8766c jmp 0x10a87743 */
  goto L_10a87743;
L_10a87671:;
  /* 10a87671 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87675 je 0x10a87688 */
  if (C.zf) goto L_10a87688;
  /* 10a87677 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8767b je 0x10a87688 */
  if (C.zf) goto L_10a87688;
  /* 10a8767d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87681 je 0x10a87688 */
  if (C.zf) goto L_10a87688;
  /* 10a87683 jmp 0x10a87748 */
  goto L_10a87748;
L_10a87688:;
  /* 10a87688 call 0x10a83dd0 */
  push32(0x10a8768du); f_10a83dd0();
  /* 10a8768d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a87690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87693 cmp dword ptr [eax + 0x50], 0x10aaec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10aaec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8769a jne 0x10a876e5 */
  if (!C.zf) goto L_10a876e5;
  /* 10a8769c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10a876a1 push 0x10aac1e8 */
  push32((uint32_t)(0x10aac1e8u));
  /* 10a876a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a876a8 mov ecx, dword ptr [0x10aaec80] */
  ECX = (r32((uint32_t)(0x10aaec80)));
  /* 10a876ae push ecx */
  push32((uint32_t)(ECX));
  /* 10a876af call 0x10a84390 */
  push32(0x10a876b4u); f_10a84390();
  /* 10a876b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a876b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a876ba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10a876bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a876c0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a876c4 je 0x10a876e3 */
  if (C.zf) goto L_10a876e3;
  /* 10a876c6 mov ecx, dword ptr [0x10aaec80] */
  ECX = (r32((uint32_t)(0x10aaec80)));
  /* 10a876cc push ecx */
  push32((uint32_t)(ECX));
  /* 10a876cd push 0x10aaec00 */
  push32((uint32_t)(0x10aaec00u));
  /* 10a876d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a876d5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10a876d8 push eax */
  push32((uint32_t)(EAX));
  /* 10a876d9 call 0x10a8ac70 */
  push32(0x10a876deu); f_10a8ac70();
  /* 10a876de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a876e1 jmp 0x10a876e5 */
  goto L_10a876e5;
L_10a876e3:;
  /* 10a876e3 jmp 0x10a87748 */
  goto L_10a87748;
L_10a876e5:;
  /* 10a876e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a876e8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a876eb push edx */
  push32((uint32_t)(EDX));
  /* 10a876ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a876ef push eax */
  push32((uint32_t)(EAX));
  /* 10a876f0 call 0x10a87a70 */
  push32(0x10a876f5u); f_10a87a70();
  /* 10a876f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a876f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a876fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a876ff jne 0x10a87703 */
  if (!C.zf) goto L_10a87703;
  /* 10a87701 jmp 0x10a87748 */
  goto L_10a87748;
L_10a87703:;
  /* 10a87703 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87706 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a87709 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a8770c:;
  /* 10a8770c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8770f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a87712 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87715 jne 0x10a87743 */
  if (!C.zf) goto L_10a87743;
  /* 10a87717 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8771a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8771d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a87720 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87723 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87726 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a87729 mov edx, dword ptr [0x10aaec84] */
  EDX = (r32((uint32_t)(0x10aaec84)));
  /* 10a8772f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a87732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87735 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10a87738 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8773a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8773d jb 0x10a87741 */
  if (C.cf) goto L_10a87741;
  /* 10a8773f jmp 0x10a87743 */
  goto L_10a87743;
L_10a87741:;
  /* 10a87741 jmp 0x10a8770c */
  goto L_10a8770c;
L_10a87743:;
  /* 10a87743 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a87746 jmp 0x10a87756 */
  goto L_10a87756;
L_10a87748:;
  /* 10a87748 call 0x10a8c260 */
  push32(0x10a8774du); f_10a8c260();
  /* 10a8774d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10a87753 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a87756:;
  /* 10a87756 pop esi */
  ESI = (pop32());
  /* 10a87757 mov esp, ebp */
  ESP = (EBP);
  /* 10a87759 pop ebp */
  EBP = (pop32());
  /* 10a8775a ret  */
  ESPCHK(0x10a87560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x10a87790 (146 bytes, 45 insns) */
void f_10a87790(void) {
  FTRACE(0x10a87790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87790 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87791 mov ebp, esp */
  EBP = (ESP);
  /* 10a87793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87796 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a87798 call 0x10a87d90 */
  push32(0x10a8779du); f_10a87d90();
  /* 10a8779d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a877a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a877a4 jne 0x10a877be */
  if (!C.zf) goto L_10a877be;
  /* 10a877a6 mov dword ptr [ebp - 8], 0x10ab0818 */
  w32((uint32_t)(EBP + -0x8), (0x10ab0818u));
  /* 10a877ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a877b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a877b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a877b5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a877bc jmp 0x10a877d4 */
  goto L_10a877d4;
L_10a877be:;
  /* 10a877be mov dword ptr [ebp - 8], 0x10ab081c */
  w32((uint32_t)(EBP + -0x8), (0x10ab081cu));
  /* 10a877c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a877c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a877ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a877cd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10a877d4:;
  /* 10a877d4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a877d8 jne 0x10a877e8 */
  if (!C.zf) goto L_10a877e8;
  /* 10a877da push 1 */
  push32((uint32_t)(0x1u));
  /* 10a877dc call 0x10a87e30 */
  push32(0x10a877e1u); f_10a87e30();
  /* 10a877e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a877e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a877e6 jmp 0x10a8781c */
  goto L_10a8781c;
L_10a877e8:;
  /* 10a877e8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a877ec je 0x10a8780d */
  if (C.zf) goto L_10a8780d;
  /* 10a877ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a877f1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10a877f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a877f9 call 0x10a87e30 */
  push32(0x10a877feu); f_10a87e30();
  /* 10a877fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87804 push edx */
  push32((uint32_t)(EDX));
  /* 10a87805 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10a87808u);
  /* 10a87808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8780b jmp 0x10a87817 */
  goto L_10a87817;
L_10a8780d:;
  /* 10a8780d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8780f call 0x10a87e30 */
  push32(0x10a87814u); f_10a87e30();
  /* 10a87814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87817:;
  /* 10a87817 mov eax, 1 */
  EAX = (0x1u);
L_10a8781c:;
  /* 10a8781c mov esp, ebp */
  ESP = (EBP);
  /* 10a8781e pop ebp */
  EBP = (pop32());
  /* 10a8781f ret 4 */
  ESPCHK(0x10a87790u, _esp0);
  ESP += 8; return;
}

/* FUN_10007830 @ 0x10a87830 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10a87830(void) {
  FTRACE(0x10a87830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87830 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87831 mov ebp, esp */
  EBP = (ESP);
  /* 10a87833 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87836 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8783d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87840 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a87843 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a87846 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87849 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a8784c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87850 ja 0x10a878fe */
  if ((!C.cf&&!C.zf)) goto L_10a878fe;
  /* 10a87856 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a87859 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8785b mov dl, byte ptr [eax + 0x10a87a52] */
  DL = (r8((uint32_t)(EAX + 0x10a87a52)));
  /* 10a87861 jmp dword ptr [edx*4 + 0x10a87a3a] */
  switch (EDX) {
    case 0: goto L_10a87868;
    case 1: goto L_10a878d3;
    case 2: goto L_10a878b9;
    case 3: goto L_10a87885;
    case 4: goto L_10a8789f;
    case 5: goto L_10a878fe;
    default: x86_unimpl("switch@0x10a87861 out of table"); return;
  }
L_10a87868:;
  /* 10a87868 mov dword ptr [ebp - 0x18], 0x10ab0818 */
  w32((uint32_t)(EBP + -0x18), (0x10ab0818u));
  /* 10a8786f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a87872 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a87874 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a87877 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8787a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8787d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a87880 jmp 0x10a87906 */
  goto L_10a87906;
L_10a87885:;
  /* 10a87885 mov dword ptr [ebp - 0x18], 0x10ab081c */
  w32((uint32_t)(EBP + -0x18), (0x10ab081cu));
  /* 10a8788c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8788f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a87891 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a87894 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a87897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8789a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a8789d jmp 0x10a87906 */
  goto L_10a87906;
L_10a8789f:;
  /* 10a8789f mov dword ptr [ebp - 0x18], 0x10ab0820 */
  w32((uint32_t)(EBP + -0x18), (0x10ab0820u));
  /* 10a878a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a878a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a878ab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a878ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a878b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a878b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a878b7 jmp 0x10a87906 */
  goto L_10a87906;
L_10a878b9:;
  /* 10a878b9 mov dword ptr [ebp - 0x18], 0x10ab0824 */
  w32((uint32_t)(EBP + -0x18), (0x10ab0824u));
  /* 10a878c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a878c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a878c5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a878c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a878cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a878ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a878d1 jmp 0x10a87906 */
  goto L_10a87906;
L_10a878d3:;
  /* 10a878d3 call 0x10a83dd0 */
  push32(0x10a878d8u); f_10a83dd0();
  /* 10a878d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a878db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a878de mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a878e1 push edx */
  push32((uint32_t)(EDX));
  /* 10a878e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a878e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a878e6 call 0x10a87a70 */
  push32(0x10a878ebu); f_10a87a70();
  /* 10a878eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a878ee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a878f1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a878f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a878f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a878f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a878fc jmp 0x10a87906 */
  goto L_10a87906;
L_10a878fe:;
  /* 10a878fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a87901 jmp 0x10a87a36 */
  goto L_10a87a36;
L_10a87906:;
  /* 10a87906 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8790a je 0x10a87916 */
  if (C.zf) goto L_10a87916;
  /* 10a8790c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8790e call 0x10a87d90 */
  push32(0x10a87913u); f_10a87d90();
  /* 10a87913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87916:;
  /* 10a87916 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8791a jne 0x10a87933 */
  if (!C.zf) goto L_10a87933;
  /* 10a8791c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87920 je 0x10a8792c */
  if (C.zf) goto L_10a8792c;
  /* 10a87922 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a87924 call 0x10a87e30 */
  push32(0x10a87929u); f_10a87e30();
  /* 10a87929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8792c:;
  /* 10a8792c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8792e jmp 0x10a87a36 */
  goto L_10a87a36;
L_10a87933:;
  /* 10a87933 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87937 jne 0x10a87950 */
  if (!C.zf) goto L_10a87950;
  /* 10a87939 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8793d je 0x10a87949 */
  if (C.zf) goto L_10a87949;
  /* 10a8793f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a87941 call 0x10a87e30 */
  push32(0x10a87946u); f_10a87e30();
  /* 10a87946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87949:;
  /* 10a87949 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a8794b call 0x10a83b50 */
  push32(0x10a87950u); f_10a83b50();
L_10a87950:;
  /* 10a87950 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87954 je 0x10a87962 */
  if (C.zf) goto L_10a87962;
  /* 10a87956 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8795a je 0x10a87962 */
  if (C.zf) goto L_10a87962;
  /* 10a8795c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87960 jne 0x10a8798e */
  if (!C.zf) goto L_10a8798e;
L_10a87962:;
  /* 10a87962 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87965 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10a87968 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a8796b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8796e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10a87975 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87979 jne 0x10a8798e */
  if (!C.zf) goto L_10a8798e;
  /* 10a8797b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8797e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10a87981 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a87984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87987 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10a8798e:;
  /* 10a8798e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87992 jne 0x10a879d0 */
  if (!C.zf) goto L_10a879d0;
  /* 10a87994 mov eax, dword ptr [0x10aaec78] */
  EAX = (r32((uint32_t)(0x10aaec78)));
  /* 10a87999 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a8799c jmp 0x10a879a7 */
  goto L_10a879a7;
L_10a8799e:;
  /* 10a8799e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a879a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a879a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a879a7:;
  /* 10a879a7 mov edx, dword ptr [0x10aaec78] */
  EDX = (r32((uint32_t)(0x10aaec78)));
  /* 10a879ad add edx, dword ptr [0x10aaec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aaec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a879b3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a879b6 jge 0x10a879ce */
  if ((C.sf==C.of)) goto L_10a879ce;
  /* 10a879b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a879bb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a879be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a879c1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a879c4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10a879cc jmp 0x10a8799e */
  goto L_10a8799e;
L_10a879ce:;
  /* 10a879ce jmp 0x10a879d9 */
  goto L_10a879d9;
L_10a879d0:;
  /* 10a879d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a879d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a879d9:;
  /* 10a879d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a879dd je 0x10a879e9 */
  if (C.zf) goto L_10a879e9;
  /* 10a879df push 1 */
  push32((uint32_t)(0x1u));
  /* 10a879e1 call 0x10a87e30 */
  push32(0x10a879e6u); f_10a87e30();
  /* 10a879e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a879e9:;
  /* 10a879e9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a879ed jne 0x10a87a00 */
  if (!C.zf) goto L_10a87a00;
  /* 10a879ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a879f2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10a879f5 push edx */
  push32((uint32_t)(EDX));
  /* 10a879f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a879f8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10a879fbu);
  /* 10a879fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a879fe jmp 0x10a87a0a */
  goto L_10a87a0a;
L_10a87a00:;
  /* 10a87a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87a03 push eax */
  push32((uint32_t)(EAX));
  /* 10a87a04 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10a87a07u);
  /* 10a87a07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87a0a:;
  /* 10a87a0a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87a0e je 0x10a87a1c */
  if (C.zf) goto L_10a87a1c;
  /* 10a87a10 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87a14 je 0x10a87a1c */
  if (C.zf) goto L_10a87a1c;
  /* 10a87a16 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87a1a jne 0x10a87a34 */
  if (!C.zf) goto L_10a87a34;
L_10a87a1c:;
  /* 10a87a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87a1f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a87a22 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10a87a25 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87a29 jne 0x10a87a34 */
  if (!C.zf) goto L_10a87a34;
  /* 10a87a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87a2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87a31 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10a87a34:;
  /* 10a87a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a87a36:;
  /* 10a87a36 mov esp, ebp */
  ESP = (EBP);
  /* 10a87a38 pop ebp */
  EBP = (pop32());
  /* 10a87a39 ret  */
  ESPCHK(0x10a87830u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x10a87a70 (91 bytes, 35 insns) */
void f_10a87a70(void) {
  FTRACE(0x10a87a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87a71 mov ebp, esp */
  EBP = (ESP);
  /* 10a87a73 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87a74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87a77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a87a7a:;
  /* 10a87a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87a7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a87a80 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87a83 je 0x10a87aa3 */
  if (C.zf) goto L_10a87aa3;
  /* 10a87a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87a88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87a8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a87a8e mov ecx, dword ptr [0x10aaec84] */
  ECX = (r32((uint32_t)(0x10aaec84)));
  /* 10a87a94 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a87a97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87a9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87a9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87a9f jae 0x10a87aa3 */
  if (!C.cf) goto L_10a87aa3;
  /* 10a87aa1 jmp 0x10a87a7a */
  goto L_10a87a7a;
L_10a87aa3:;
  /* 10a87aa3 mov eax, dword ptr [0x10aaec84] */
  EAX = (r32((uint32_t)(0x10aaec84)));
  /* 10a87aa8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a87aab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87aae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87ab0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87ab3 jae 0x10a87ac5 */
  if (!C.cf) goto L_10a87ac5;
  /* 10a87ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87ab8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a87abb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87abe jne 0x10a87ac5 */
  if (!C.zf) goto L_10a87ac5;
  /* 10a87ac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87ac3 jmp 0x10a87ac7 */
  goto L_10a87ac7;
L_10a87ac5:;
  /* 10a87ac5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a87ac7:;
  /* 10a87ac7 mov esp, ebp */
  ESP = (EBP);
  /* 10a87ac9 pop ebp */
  EBP = (pop32());
  /* 10a87aca ret  */
  ESPCHK(0x10a87a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x10a87ad0 (13 bytes, 6 insns) */
void f_10a87ad0(void) {
  FTRACE(0x10a87ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10a87ad3 call 0x10a83dd0 */
  push32(0x10a87ad8u); f_10a83dd0();
  /* 10a87ad8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87adb pop ebp */
  EBP = (pop32());
  /* 10a87adc ret  */
  ESPCHK(0x10a87ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x10a87ae0 (13 bytes, 6 insns) */
void f_10a87ae0(void) {
  FTRACE(0x10a87ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10a87ae3 call 0x10a83dd0 */
  push32(0x10a87ae8u); f_10a83dd0();
  /* 10a87ae8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87aeb pop ebp */
  EBP = (pop32());
  /* 10a87aec ret  */
  ESPCHK(0x10a87ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x10a87af0 (187 bytes, 54 insns) */
void f_10a87af0(void) {
  FTRACE(0x10a87af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87af1 mov ebp, esp */
  EBP = (ESP);
  /* 10a87af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87af6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a87afd cmp dword ptr [0x10ab082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87b04 jne 0x10a87b63 */
  if (!C.zf) goto L_10a87b63;
  /* 10a87b06 push 0x10aab614 */
  push32((uint32_t)(0x10aab614u));
  /* 10a87b0b call dword ptr [0x10ab3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3340))), 0x10a87b11u);
  /* 10a87b11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a87b14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87b18 je 0x10a87b37 */
  if (C.zf) goto L_10a87b37;
  /* 10a87b1a push 0x10aac218 */
  push32((uint32_t)(0x10aac218u));
  /* 10a87b1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87b22 push eax */
  push32((uint32_t)(EAX));
  /* 10a87b23 call dword ptr [0x10ab333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab333c))), 0x10a87b29u);
  /* 10a87b29 mov dword ptr [0x10ab082c], eax */
  w32((uint32_t)(0x10ab082c), (EAX));
  /* 10a87b2e cmp dword ptr [0x10ab082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87b35 jne 0x10a87b3b */
  if (!C.zf) goto L_10a87b3b;
L_10a87b37:;
  /* 10a87b37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a87b39 jmp 0x10a87ba7 */
  goto L_10a87ba7;
L_10a87b3b:;
  /* 10a87b3b push 0x10aac208 */
  push32((uint32_t)(0x10aac208u));
  /* 10a87b40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87b44 call dword ptr [0x10ab333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab333c))), 0x10a87b4au);
  /* 10a87b4a mov dword ptr [0x10ab0830], eax */
  w32((uint32_t)(0x10ab0830), (EAX));
  /* 10a87b4f push 0x10aac1f4 */
  push32((uint32_t)(0x10aac1f4u));
  /* 10a87b54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87b57 push edx */
  push32((uint32_t)(EDX));
  /* 10a87b58 call dword ptr [0x10ab333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab333c))), 0x10a87b5eu);
  /* 10a87b5e mov dword ptr [0x10ab0834], eax */
  w32((uint32_t)(0x10ab0834), (EAX));
L_10a87b63:;
  /* 10a87b63 cmp dword ptr [0x10ab0830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87b6a je 0x10a87b75 */
  if (C.zf) goto L_10a87b75;
  /* 10a87b6c call dword ptr [0x10ab0830] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab0830))), 0x10a87b72u);
  /* 10a87b72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a87b75:;
  /* 10a87b75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87b79 je 0x10a87b91 */
  if (C.zf) goto L_10a87b91;
  /* 10a87b7b cmp dword ptr [0x10ab0834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87b82 je 0x10a87b91 */
  if (C.zf) goto L_10a87b91;
  /* 10a87b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87b87 push eax */
  push32((uint32_t)(EAX));
  /* 10a87b88 call dword ptr [0x10ab0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab0834))), 0x10a87b8eu);
  /* 10a87b8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a87b91:;
  /* 10a87b91 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a87b94 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87b95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87b98 push edx */
  push32((uint32_t)(EDX));
  /* 10a87b99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87b9c push eax */
  push32((uint32_t)(EAX));
  /* 10a87b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87ba1 call dword ptr [0x10ab082c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab082c))), 0x10a87ba7u);
L_10a87ba7:;
  /* 10a87ba7 mov esp, ebp */
  ESP = (EBP);
  /* 10a87ba9 pop ebp */
  EBP = (pop32());
  /* 10a87baa ret  */
  ESPCHK(0x10a87af0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10a87bb0 (254 bytes, 109 insns) */
void f_10a87bb0(void) {
  FTRACE(0x10a87bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87bb0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a87bb4 push edi */
  push32((uint32_t)(EDI));
  /* 10a87bb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a87bb7 je 0x10a87c33 */
  if (C.zf) goto L_10a87c33;
  /* 10a87bb9 push esi */
  push32((uint32_t)(ESI));
  /* 10a87bba push ebx */
  push32((uint32_t)(EBX));
  /* 10a87bbb mov ebx, ecx */
  EBX = (ECX);
  /* 10a87bbd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10a87bc1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10a87bc7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10a87bcb jne 0x10a87bd4 */
  if (!C.zf) goto L_10a87bd4;
  /* 10a87bcd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a87bd0 jne 0x10a87c41 */
  if (!C.zf) goto L_10a87c41;
  /* 10a87bd2 jmp 0x10a87bf5 */
  goto L_10a87bf5;
L_10a87bd4:;
  /* 10a87bd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a87bd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a87bd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a87bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a87bda dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a87bdb je 0x10a87c02 */
  if (C.zf) goto L_10a87c02;
  /* 10a87bdd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a87bdf je 0x10a87c0a */
  if (C.zf) goto L_10a87c0a;
  /* 10a87be1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10a87be7 jne 0x10a87bd4 */
  if (!C.zf) goto L_10a87bd4;
  /* 10a87be9 mov ebx, ecx */
  EBX = (ECX);
  /* 10a87beb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a87bee jne 0x10a87c41 */
  if (!C.zf) goto L_10a87c41;
L_10a87bf0:;
  /* 10a87bf0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10a87bf3 je 0x10a87c02 */
  if (C.zf) goto L_10a87c02;
L_10a87bf5:;
  /* 10a87bf5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a87bf7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a87bf8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a87bfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a87bfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a87bfd je 0x10a87c2e */
  if (C.zf) goto L_10a87c2e;
  /* 10a87bff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10a87c00 jne 0x10a87bf5 */
  if (!C.zf) goto L_10a87bf5;
L_10a87c02:;
  /* 10a87c02 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a87c06 pop ebx */
  EBX = (pop32());
  /* 10a87c07 pop esi */
  ESI = (pop32());
  /* 10a87c08 pop edi */
  EDI = (pop32());
  /* 10a87c09 ret  */
  ESPCHK(0x10a87bb0u, _esp0);
  ESP += 4; return;
L_10a87c0a:;
  /* 10a87c0a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a87c10 je 0x10a87c24 */
  if (C.zf) goto L_10a87c24;
L_10a87c12:;
  /* 10a87c12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a87c14 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a87c15 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a87c16 je 0x10a87ca6 */
  if (C.zf) goto L_10a87ca6;
  /* 10a87c1c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a87c22 jne 0x10a87c12 */
  if (!C.zf) goto L_10a87c12;
L_10a87c24:;
  /* 10a87c24 mov ebx, ecx */
  EBX = (ECX);
  /* 10a87c26 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a87c29 jne 0x10a87c97 */
  if (!C.zf) goto L_10a87c97;
L_10a87c2b:;
  /* 10a87c2b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a87c2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10a87c2e:;
  /* 10a87c2e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10a87c2f jne 0x10a87c2b */
  if (!C.zf) goto L_10a87c2b;
  /* 10a87c31 pop ebx */
  EBX = (pop32());
  /* 10a87c32 pop esi */
  ESI = (pop32());
L_10a87c33:;
  /* 10a87c33 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a87c37 pop edi */
  EDI = (pop32());
  /* 10a87c38 ret  */
  ESPCHK(0x10a87bb0u, _esp0);
  ESP += 4; return;
L_10a87c39:;
  /* 10a87c39 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a87c3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87c3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a87c3f je 0x10a87bf0 */
  if (C.zf) goto L_10a87bf0;
L_10a87c41:;
  /* 10a87c41 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a87c46 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10a87c48 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87c4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a87c4d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a87c4f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10a87c51 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87c54 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a87c59 je 0x10a87c39 */
  if (C.zf) goto L_10a87c39;
  /* 10a87c5b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a87c5d je 0x10a87c8b */
  if (C.zf) goto L_10a87c8b;
  /* 10a87c5f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10a87c61 je 0x10a87c81 */
  if (C.zf) goto L_10a87c81;
  /* 10a87c63 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a87c69 je 0x10a87c77 */
  if (C.zf) goto L_10a87c77;
  /* 10a87c6b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a87c71 jne 0x10a87c39 */
  if (!C.zf) goto L_10a87c39;
  /* 10a87c73 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a87c75 jmp 0x10a87c8f */
  goto L_10a87c8f;
L_10a87c77:;
  /* 10a87c77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a87c7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a87c7f jmp 0x10a87c8f */
  goto L_10a87c8f;
L_10a87c81:;
  /* 10a87c81 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a87c87 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a87c89 jmp 0x10a87c8f */
  goto L_10a87c8f;
L_10a87c8b:;
  /* 10a87c8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a87c8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10a87c8f:;
  /* 10a87c8f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87c92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a87c94 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a87c95 je 0x10a87ca1 */
  if (C.zf) goto L_10a87ca1;
L_10a87c97:;
  /* 10a87c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a87c99:;
  /* 10a87c99 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10a87c9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87c9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a87c9f jne 0x10a87c99 */
  if (!C.zf) goto L_10a87c99;
L_10a87ca1:;
  /* 10a87ca1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10a87ca4 jne 0x10a87c2b */
  if (!C.zf) goto L_10a87c2b;
L_10a87ca6:;
  /* 10a87ca6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a87caa pop ebx */
  EBX = (pop32());
  /* 10a87cab pop esi */
  ESI = (pop32());
  /* 10a87cac pop edi */
  EDI = (pop32());
  /* 10a87cad ret  */
  ESPCHK(0x10a87bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x10a87cb0 (55 bytes, 16 insns) */
void f_10a87cb0(void) {
  FTRACE(0x10a87cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a87cb3 mov eax, dword ptr [0x10aaeb84] */
  EAX = (r32((uint32_t)(0x10aaeb84)));
  /* 10a87cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10a87cb9 call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a87cbfu);
  /* 10a87cbf mov ecx, dword ptr [0x10aaeb74] */
  ECX = (r32((uint32_t)(0x10aaeb74)));
  /* 10a87cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87cc6 call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a87cccu);
  /* 10a87ccc mov edx, dword ptr [0x10aaeb64] */
  EDX = (r32((uint32_t)(0x10aaeb64)));
  /* 10a87cd2 push edx */
  push32((uint32_t)(EDX));
  /* 10a87cd3 call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a87cd9u);
  /* 10a87cd9 mov eax, dword ptr [0x10aaeb44] */
  EAX = (r32((uint32_t)(0x10aaeb44)));
  /* 10a87cde push eax */
  push32((uint32_t)(EAX));
  /* 10a87cdf call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a87ce5u);
  /* 10a87ce5 pop ebp */
  EBP = (pop32());
  /* 10a87ce6 ret  */
  ESPCHK(0x10a87cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x10a87cf0 (159 bytes, 47 insns) */
void f_10a87cf0(void) {
  FTRACE(0x10a87cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a87cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87cf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a87cfb jmp 0x10a87d06 */
  goto L_10a87d06;
L_10a87cfd:;
  /* 10a87cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87d00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87d03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a87d06:;
  /* 10a87d06 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d0a jge 0x10a87d59 */
  if ((C.sf==C.of)) goto L_10a87d59;
  /* 10a87d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87d0f cmp dword ptr [ecx*4 + 0x10aaeb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10aaeb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d17 je 0x10a87d57 */
  if (C.zf) goto L_10a87d57;
  /* 10a87d19 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d1d je 0x10a87d57 */
  if (C.zf) goto L_10a87d57;
  /* 10a87d1f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d23 je 0x10a87d57 */
  if (C.zf) goto L_10a87d57;
  /* 10a87d25 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d29 je 0x10a87d57 */
  if (C.zf) goto L_10a87d57;
  /* 10a87d2b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d2f je 0x10a87d57 */
  if (C.zf) goto L_10a87d57;
  /* 10a87d31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87d34 mov eax, dword ptr [edx*4 + 0x10aaeb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aaeb40)));
  /* 10a87d3b push eax */
  push32((uint32_t)(EAX));
  /* 10a87d3c call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a87d42u);
  /* 10a87d42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a87d44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87d47 mov edx, dword ptr [ecx*4 + 0x10aaeb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aaeb40)));
  /* 10a87d4e push edx */
  push32((uint32_t)(EDX));
  /* 10a87d4f call 0x10a84e20 */
  push32(0x10a87d54u); f_10a84e20();
  /* 10a87d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87d57:;
  /* 10a87d57 jmp 0x10a87cfd */
  goto L_10a87cfd;
L_10a87d59:;
  /* 10a87d59 mov eax, dword ptr [0x10aaeb64] */
  EAX = (r32((uint32_t)(0x10aaeb64)));
  /* 10a87d5e push eax */
  push32((uint32_t)(EAX));
  /* 10a87d5f call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a87d65u);
  /* 10a87d65 mov ecx, dword ptr [0x10aaeb74] */
  ECX = (r32((uint32_t)(0x10aaeb74)));
  /* 10a87d6b push ecx */
  push32((uint32_t)(ECX));
  /* 10a87d6c call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a87d72u);
  /* 10a87d72 mov edx, dword ptr [0x10aaeb84] */
  EDX = (r32((uint32_t)(0x10aaeb84)));
  /* 10a87d78 push edx */
  push32((uint32_t)(EDX));
  /* 10a87d79 call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a87d7fu);
  /* 10a87d7f mov eax, dword ptr [0x10aaeb44] */
  EAX = (r32((uint32_t)(0x10aaeb44)));
  /* 10a87d84 push eax */
  push32((uint32_t)(EAX));
  /* 10a87d85 call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a87d8bu);
  /* 10a87d8b mov esp, ebp */
  ESP = (EBP);
  /* 10a87d8d pop ebp */
  EBP = (pop32());
  /* 10a87d8e ret  */
  ESPCHK(0x10a87cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x10a87d90 (151 bytes, 46 insns) */
void f_10a87d90(void) {
  FTRACE(0x10a87d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87d91 mov ebp, esp */
  EBP = (ESP);
  /* 10a87d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87d97 cmp dword ptr [eax*4 + 0x10aaeb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10aaeb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87d9f jne 0x10a87e12 */
  if (!C.zf) goto L_10a87e12;
  /* 10a87da1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10a87da6 push 0x10aac224 */
  push32((uint32_t)(0x10aac224u));
  /* 10a87dab push 2 */
  push32((uint32_t)(0x2u));
  /* 10a87dad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a87daf call 0x10a84390 */
  push32(0x10a87db4u); f_10a84390();
  /* 10a87db4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87db7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a87dba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87dbe jne 0x10a87dca */
  if (!C.zf) goto L_10a87dca;
  /* 10a87dc0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a87dc2 call 0x10a83300 */
  push32(0x10a87dc7u); f_10a83300();
  /* 10a87dc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87dca:;
  /* 10a87dca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a87dcc call 0x10a87d90 */
  push32(0x10a87dd1u); f_10a87d90();
  /* 10a87dd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87dd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87dd7 cmp dword ptr [ecx*4 + 0x10aaeb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10aaeb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87ddf jne 0x10a87dfa */
  if (!C.zf) goto L_10a87dfa;
  /* 10a87de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87de4 push edx */
  push32((uint32_t)(EDX));
  /* 10a87de5 call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a87debu);
  /* 10a87deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87df1 mov dword ptr [eax*4 + 0x10aaeb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10aaeb40), (ECX));
  /* 10a87df8 jmp 0x10a87e08 */
  goto L_10a87e08;
L_10a87dfa:;
  /* 10a87dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10a87dfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a87dff push edx */
  push32((uint32_t)(EDX));
  /* 10a87e00 call 0x10a84e20 */
  push32(0x10a87e05u); f_10a84e20();
  /* 10a87e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87e08:;
  /* 10a87e08 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a87e0a call 0x10a87e30 */
  push32(0x10a87e0fu); f_10a87e30();
  /* 10a87e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a87e12:;
  /* 10a87e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87e15 mov ecx, dword ptr [eax*4 + 0x10aaeb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aaeb40)));
  /* 10a87e1c push ecx */
  push32((uint32_t)(ECX));
  /* 10a87e1d call dword ptr [0x10ab3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3314))), 0x10a87e23u);
  /* 10a87e23 mov esp, ebp */
  ESP = (EBP);
  /* 10a87e25 pop ebp */
  EBP = (pop32());
  /* 10a87e26 ret  */
  ESPCHK(0x10a87d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x10a87e30 (22 bytes, 8 insns) */
void f_10a87e30(void) {
  FTRACE(0x10a87e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87e31 mov ebp, esp */
  EBP = (ESP);
  /* 10a87e33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87e36 mov ecx, dword ptr [eax*4 + 0x10aaeb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aaeb40)));
  /* 10a87e3d push ecx */
  push32((uint32_t)(ECX));
  /* 10a87e3e call dword ptr [0x10ab3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3310))), 0x10a87e44u);
  /* 10a87e44 pop ebp */
  EBP = (pop32());
  /* 10a87e45 ret  */
  ESPCHK(0x10a87e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x10a87e50 (26 bytes, 10 insns) */
void f_10a87e50(void) {
  FTRACE(0x10a87e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87e51 mov ebp, esp */
  EBP = (ESP);
  /* 10a87e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87e56 push eax */
  push32((uint32_t)(EAX));
  /* 10a87e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a87e59 call dword ptr [0x10ab3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3318))), 0x10a87e5fu);
  /* 10a87e5f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a87e64 call dword ptr [0x10ab334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab334c))), 0x10a87e6au);
  /* 10a87e6a pop ebp */
  EBP = (pop32());
  /* 10a87e6b ret  */
  ESPCHK(0x10a87e50u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10a87e70 (446 bytes, 130 insns) */
void f_10a87e70(void) {
  FTRACE(0x10a87e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a87e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a87e71 mov ebp, esp */
  EBP = (ESP);
  /* 10a87e73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a87e76 call 0x10a83dd0 */
  push32(0x10a87e7bu); f_10a83dd0();
  /* 10a87e7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a87e7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87e81 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10a87e84 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87e85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a87e88 push edx */
  push32((uint32_t)(EDX));
  /* 10a87e89 call 0x10a88030 */
  push32(0x10a87e8eu); f_10a88030();
  /* 10a87e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87e91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a87e94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87e98 je 0x10a87ea3 */
  if (C.zf) goto L_10a87ea3;
  /* 10a87e9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87e9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87ea1 jne 0x10a87eb2 */
  if (!C.zf) goto L_10a87eb2;
L_10a87ea3:;
  /* 10a87ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a87ea7 call dword ptr [0x10ab3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3308))), 0x10a87eadu);
  /* 10a87ead jmp 0x10a8802a */
  goto L_10a8802a;
L_10a87eb2:;
  /* 10a87eb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87eb5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87eb9 jne 0x10a87ecf */
  if (!C.zf) goto L_10a87ecf;
  /* 10a87ebb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87ebe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a87ec5 mov eax, 1 */
  EAX = (0x1u);
  /* 10a87eca jmp 0x10a8802a */
  goto L_10a8802a;
L_10a87ecf:;
  /* 10a87ecf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87ed2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87ed6 jne 0x10a87ee0 */
  if (!C.zf) goto L_10a87ee0;
  /* 10a87ed8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a87edb jmp 0x10a8802a */
  goto L_10a8802a;
L_10a87ee0:;
  /* 10a87ee0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87ee3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a87ee6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a87ee9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87eec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10a87eef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a87ef2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87ef5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a87ef8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10a87efb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87efe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87f02 jne 0x10a88007 */
  if (!C.zf) goto L_10a88007;
  /* 10a87f08 mov eax, dword ptr [0x10aaec78] */
  EAX = (r32((uint32_t)(0x10aaec78)));
  /* 10a87f0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a87f10 jmp 0x10a87f1b */
  goto L_10a87f1b;
L_10a87f12:;
  /* 10a87f12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a87f15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87f18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a87f1b:;
  /* 10a87f1b mov edx, dword ptr [0x10aaec78] */
  EDX = (r32((uint32_t)(0x10aaec78)));
  /* 10a87f21 add edx, dword ptr [0x10aaec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aaec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87f27 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87f2a jge 0x10a87f42 */
  if ((C.sf==C.of)) goto L_10a87f42;
  /* 10a87f2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a87f2f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a87f32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87f35 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a87f38 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10a87f40 jmp 0x10a87f12 */
  goto L_10a87f12;
L_10a87f42:;
  /* 10a87f42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87f45 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10a87f48 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a87f4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87f4e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87f54 jne 0x10a87f65 */
  if (!C.zf) goto L_10a87f65;
  /* 10a87f56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87f59 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10a87f60 jmp 0x10a87fed */
  goto L_10a87fed;
L_10a87f65:;
  /* 10a87f65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87f68 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87f6e jne 0x10a87f7c */
  if (!C.zf) goto L_10a87f7c;
  /* 10a87f70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87f73 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10a87f7a jmp 0x10a87fed */
  goto L_10a87fed;
L_10a87f7c:;
  /* 10a87f7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87f7f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87f85 jne 0x10a87f93 */
  if (!C.zf) goto L_10a87f93;
  /* 10a87f87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87f8a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10a87f91 jmp 0x10a87fed */
  goto L_10a87fed;
L_10a87f93:;
  /* 10a87f93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87f96 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87f9c jne 0x10a87faa */
  if (!C.zf) goto L_10a87faa;
  /* 10a87f9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87fa1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10a87fa8 jmp 0x10a87fed */
  goto L_10a87fed;
L_10a87faa:;
  /* 10a87faa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87fad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87fb3 jne 0x10a87fc1 */
  if (!C.zf) goto L_10a87fc1;
  /* 10a87fb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87fb8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10a87fbf jmp 0x10a87fed */
  goto L_10a87fed;
L_10a87fc1:;
  /* 10a87fc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87fc4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87fca jne 0x10a87fd8 */
  if (!C.zf) goto L_10a87fd8;
  /* 10a87fcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87fcf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10a87fd6 jmp 0x10a87fed */
  goto L_10a87fed;
L_10a87fd8:;
  /* 10a87fd8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a87fdb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a87fe1 jne 0x10a87fed */
  if (!C.zf) goto L_10a87fed;
  /* 10a87fe3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87fe6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10a87fed:;
  /* 10a87fed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87ff0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10a87ff3 push edx */
  push32((uint32_t)(EDX));
  /* 10a87ff4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a87ff6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a87ff9u);
  /* 10a87ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a87ffc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a87fff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a88002 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10a88005 jmp 0x10a8801e */
  goto L_10a8801e;
L_10a88007:;
  /* 10a88007 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8800a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a88011 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a88014 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a88017 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88018 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a8801bu);
  /* 10a8801b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8801e:;
  /* 10a8801e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88021 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88024 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10a88027 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a8802a:;
  /* 10a8802a mov esp, ebp */
  ESP = (EBP);
  /* 10a8802c pop ebp */
  EBP = (pop32());
  /* 10a8802d ret  */
  ESPCHK(0x10a87e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008030 @ 0x10a88030 (89 bytes, 35 insns) */
void f_10a88030(void) {
  FTRACE(0x10a88030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88031 mov ebp, esp */
  EBP = (ESP);
  /* 10a88033 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88034 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88037 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8803a:;
  /* 10a8803a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8803d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8803f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88042 je 0x10a88062 */
  if (C.zf) goto L_10a88062;
  /* 10a88044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88047 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8804a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8804d mov ecx, dword ptr [0x10aaec84] */
  ECX = (r32((uint32_t)(0x10aaec84)));
  /* 10a88053 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a88056 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88059 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8805b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8805e jae 0x10a88062 */
  if (!C.cf) goto L_10a88062;
  /* 10a88060 jmp 0x10a8803a */
  goto L_10a8803a;
L_10a88062:;
  /* 10a88062 mov eax, dword ptr [0x10aaec84] */
  EAX = (r32((uint32_t)(0x10aaec84)));
  /* 10a88067 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8806a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8806d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8806f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88072 jae 0x10a8807e */
  if (!C.cf) goto L_10a8807e;
  /* 10a88074 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88077 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a88079 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8807c je 0x10a88082 */
  if (C.zf) goto L_10a88082;
L_10a8807e:;
  /* 10a8807e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88080 jmp 0x10a88085 */
  goto L_10a88085;
L_10a88082:;
  /* 10a88082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a88085:;
  /* 10a88085 mov esp, ebp */
  ESP = (EBP);
  /* 10a88087 pop ebp */
  EBP = (pop32());
  /* 10a88088 ret  */
  ESPCHK(0x10a88030u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10a88090 (48 bytes, 17 insns) */
void f_10a88090(void) {
  FTRACE(0x10a88090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88090 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88091 mov ebp, esp */
  EBP = (ESP);
  /* 10a88093 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88094 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a88096 call 0x10a87d90 */
  push32(0x10a8809bu); f_10a87d90();
  /* 10a8809b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8809e mov eax, dword ptr [0x10ab089c] */
  EAX = (r32((uint32_t)(0x10ab089c)));
  /* 10a880a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a880a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a880a9 mov dword ptr [0x10ab089c], ecx */
  w32((uint32_t)(0x10ab089c), (ECX));
  /* 10a880af push 9 */
  push32((uint32_t)(0x9u));
  /* 10a880b1 call 0x10a87e30 */
  push32(0x10a880b6u); f_10a87e30();
  /* 10a880b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a880b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a880bc mov esp, ebp */
  ESP = (EBP);
  /* 10a880be pop ebp */
  EBP = (pop32());
  /* 10a880bf ret  */
  ESPCHK(0x10a88090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x10a880c0 (10 bytes, 5 insns) */
void f_10a880c0(void) {
  FTRACE(0x10a880c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a880c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a880c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a880c3 mov eax, dword ptr [0x10ab089c] */
  EAX = (r32((uint32_t)(0x10ab089c)));
  /* 10a880c8 pop ebp */
  EBP = (pop32());
  /* 10a880c9 ret  */
  ESPCHK(0x10a880c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10a880d0 (45 bytes, 19 insns) */
void f_10a880d0(void) {
  FTRACE(0x10a880d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a880d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a880d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a880d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a880d4 mov eax, dword ptr [0x10ab089c] */
  EAX = (r32((uint32_t)(0x10ab089c)));
  /* 10a880d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a880dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a880e0 je 0x10a880f0 */
  if (C.zf) goto L_10a880f0;
  /* 10a880e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a880e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a880e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a880e9u);
  /* 10a880e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a880ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a880ee jne 0x10a880f4 */
  if (!C.zf) goto L_10a880f4;
L_10a880f0:;
  /* 10a880f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a880f2 jmp 0x10a880f9 */
  goto L_10a880f9;
L_10a880f4:;
  /* 10a880f4 mov eax, 1 */
  EAX = (0x1u);
L_10a880f9:;
  /* 10a880f9 mov esp, ebp */
  ESP = (EBP);
  /* 10a880fb pop ebp */
  EBP = (pop32());
  /* 10a880fc ret  */
  ESPCHK(0x10a880d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10a88100 (88 bytes, 40 insns) */
void f_10a88100(void) {
  FTRACE(0x10a88100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88100 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a88104 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a88108 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8810a je 0x10a88153 */
  if (C.zf) goto L_10a88153;
  /* 10a8810c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8810e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10a88112 push edi */
  push32((uint32_t)(EDI));
  /* 10a88113 mov edi, ecx */
  EDI = (ECX);
  /* 10a88115 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88118 jb 0x10a88147 */
  if (C.cf) goto L_10a88147;
  /* 10a8811a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8811c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8811f je 0x10a88129 */
  if (C.zf) goto L_10a88129;
  /* 10a88121 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a88123:;
  /* 10a88123 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a88125 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a88126 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a88127 jne 0x10a88123 */
  if (!C.zf) goto L_10a88123;
L_10a88129:;
  /* 10a88129 mov ecx, eax */
  ECX = (EAX);
  /* 10a8812b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a8812e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88130 mov ecx, eax */
  ECX = (EAX);
  /* 10a88132 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a88135 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88137 mov ecx, edx */
  ECX = (EDX);
  /* 10a88139 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8813c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8813f je 0x10a88147 */
  if (C.zf) goto L_10a88147;
  /* 10a88141 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a88143 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a88145 je 0x10a8814d */
  if (C.zf) goto L_10a8814d;
L_10a88147:;
  /* 10a88147 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a88149 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a8814a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10a8814b jne 0x10a88147 */
  if (!C.zf) goto L_10a88147;
L_10a8814d:;
  /* 10a8814d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a88151 pop edi */
  EDI = (pop32());
  /* 10a88152 ret  */
  ESPCHK(0x10a88100u, _esp0);
  ESP += 4; return;
L_10a88153:;
  /* 10a88153 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a88157 ret  */
  ESPCHK(0x10a88100u, _esp0);
  ESP += 4; return;
}

/* FUN_10008160 @ 0x10a88160 (23 bytes, 10 insns) */
void f_10a88160(void) {
  FTRACE(0x10a88160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88160 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88161 mov ebp, esp */
  EBP = (ESP);
  /* 10a88163 mov eax, dword ptr [0x10ab0898] */
  EAX = (r32((uint32_t)(0x10ab0898)));
  /* 10a88168 push eax */
  push32((uint32_t)(EAX));
  /* 10a88169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8816c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8816d call 0x10a88180 */
  push32(0x10a88172u); f_10a88180();
  /* 10a88172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88175 pop ebp */
  EBP = (pop32());
  /* 10a88176 ret  */
  ESPCHK(0x10a88160u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10a88180 (87 bytes, 34 insns) */
void f_10a88180(void) {
  FTRACE(0x10a88180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88180 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88181 mov ebp, esp */
  EBP = (ESP);
  /* 10a88183 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88184 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88188 jbe 0x10a8818e */
  if ((C.cf||C.zf)) goto L_10a8818e;
  /* 10a8818a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8818c jmp 0x10a881d3 */
  goto L_10a881d3;
L_10a8818e:;
  /* 10a8818e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88192 ja 0x10a881a5 */
  if ((!C.cf&&!C.zf)) goto L_10a881a5;
  /* 10a88194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88197 push eax */
  push32((uint32_t)(EAX));
  /* 10a88198 call 0x10a881e0 */
  push32(0x10a8819du); f_10a881e0();
  /* 10a8819d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a881a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a881a3 jmp 0x10a881ac */
  goto L_10a881ac;
L_10a881a5:;
  /* 10a881a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a881ac:;
  /* 10a881ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a881b0 jne 0x10a881b8 */
  if (!C.zf) goto L_10a881b8;
  /* 10a881b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a881b6 jne 0x10a881bd */
  if (!C.zf) goto L_10a881bd;
L_10a881b8:;
  /* 10a881b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a881bb jmp 0x10a881d3 */
  goto L_10a881d3;
L_10a881bd:;
  /* 10a881bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a881c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a881c1 call 0x10a880d0 */
  push32(0x10a881c6u); f_10a880d0();
  /* 10a881c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a881c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a881cb jne 0x10a881d1 */
  if (!C.zf) goto L_10a881d1;
  /* 10a881cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a881cf jmp 0x10a881d3 */
  goto L_10a881d3;
L_10a881d1:;
  /* 10a881d1 jmp 0x10a8818e */
  goto L_10a8818e;
L_10a881d3:;
  /* 10a881d3 mov esp, ebp */
  ESP = (EBP);
  /* 10a881d5 pop ebp */
  EBP = (pop32());
  /* 10a881d6 ret  */
  ESPCHK(0x10a88180u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x10a881e0 (109 bytes, 37 insns) */
void f_10a881e0(void) {
  FTRACE(0x10a881e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a881e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a881e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a881e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a881e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a881e7 cmp eax, dword ptr [0x10aaec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aaec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a881ed ja 0x10a8821d */
  if ((!C.cf&&!C.zf)) goto L_10a8821d;
  /* 10a881ef push 9 */
  push32((uint32_t)(0x9u));
  /* 10a881f1 call 0x10a87d90 */
  push32(0x10a881f6u); f_10a87d90();
  /* 10a881f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a881f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a881fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a881fd call 0x10a88d20 */
  push32(0x10a88202u); f_10a88d20();
  /* 10a88202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88205 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a88208 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8820a call 0x10a87e30 */
  push32(0x10a8820fu); f_10a87e30();
  /* 10a8820f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88212 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88216 je 0x10a8821d */
  if (C.zf) goto L_10a8821d;
  /* 10a88218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8821b jmp 0x10a88249 */
  goto L_10a88249;
L_10a8821d:;
  /* 10a8821d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88221 jne 0x10a8822a */
  if (!C.zf) goto L_10a8822a;
  /* 10a88223 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10a8822a:;
  /* 10a8822a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8822d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88230 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a88233 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a88236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88239 push eax */
  push32((uint32_t)(EAX));
  /* 10a8823a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8823c mov ecx, dword ptr [0x10ab204c] */
  ECX = (r32((uint32_t)(0x10ab204c)));
  /* 10a88242 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88243 call dword ptr [0x10ab3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3304))), 0x10a88249u);
L_10a88249:;
  /* 10a88249 mov esp, ebp */
  ESP = (EBP);
  /* 10a8824b pop ebp */
  EBP = (pop32());
  /* 10a8824c ret  */
  ESPCHK(0x10a881e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x10a88250 (10 bytes, 5 insns) */
void f_10a88250(void) {
  FTRACE(0x10a88250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88250 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88251 mov ebp, esp */
  EBP = (ESP);
  /* 10a88253 mov eax, 1 */
  EAX = (0x1u);
  /* 10a88258 pop ebp */
  EBP = (pop32());
  /* 10a88259 ret  */
  ESPCHK(0x10a88250u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x10a88260 (173 bytes, 59 insns) */
void f_10a88260(void) {
  FTRACE(0x10a88260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88260 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88261 mov ebp, esp */
  EBP = (ESP);
  /* 10a88263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88266 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8826a jbe 0x10a88273 */
  if ((C.cf||C.zf)) goto L_10a88273;
  /* 10a8826c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8826e jmp 0x10a88309 */
  goto L_10a88309;
L_10a88273:;
  /* 10a88273 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a88275 call 0x10a87d90 */
  push32(0x10a8827au); f_10a87d90();
  /* 10a8827a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8827d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88280 push eax */
  push32((uint32_t)(EAX));
  /* 10a88281 call 0x10a88690 */
  push32(0x10a88286u); f_10a88690();
  /* 10a88286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88289 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8828c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88290 je 0x10a882d1 */
  if (C.zf) goto L_10a882d1;
  /* 10a88292 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a88299 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8829c cmp ecx, dword ptr [0x10aaec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aaec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a882a2 ja 0x10a882c2 */
  if ((!C.cf&&!C.zf)) goto L_10a882c2;
  /* 10a882a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a882a7 push edx */
  push32((uint32_t)(EDX));
  /* 10a882a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a882ab push eax */
  push32((uint32_t)(EAX));
  /* 10a882ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a882af push ecx */
  push32((uint32_t)(ECX));
  /* 10a882b0 call 0x10a89560 */
  push32(0x10a882b5u); f_10a89560();
  /* 10a882b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a882b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a882ba je 0x10a882c2 */
  if (C.zf) goto L_10a882c2;
  /* 10a882bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a882bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a882c2:;
  /* 10a882c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a882c4 call 0x10a87e30 */
  push32(0x10a882c9u); f_10a87e30();
  /* 10a882c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a882cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a882cf jmp 0x10a88309 */
  goto L_10a88309;
L_10a882d1:;
  /* 10a882d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a882d3 call 0x10a87e30 */
  push32(0x10a882d8u); f_10a87e30();
  /* 10a882d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a882db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a882df jne 0x10a882e8 */
  if (!C.zf) goto L_10a882e8;
  /* 10a882e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a882e8:;
  /* 10a882e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a882eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a882ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10a882f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a882f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a882f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a882f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a882fa push edx */
  push32((uint32_t)(EDX));
  /* 10a882fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a882fd mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a88302 push eax */
  push32((uint32_t)(EAX));
  /* 10a88303 call dword ptr [0x10ab330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab330c))), 0x10a88309u);
L_10a88309:;
  /* 10a88309 mov esp, ebp */
  ESP = (EBP);
  /* 10a8830b pop ebp */
  EBP = (pop32());
  /* 10a8830c ret  */
  ESPCHK(0x10a88260u, _esp0);
  ESP += 4; return;
}

