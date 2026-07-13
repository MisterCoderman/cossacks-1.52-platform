#include "recomp.h"

/* thunk_FUN_100026b0 @ 0x10561005 (5 bytes, 1 insns) */
void f_10561005(void) {
  FTRACE(0x10561005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10561005 jmp 0x105626b0 */
  f_105626b0(); return;
}

/* OnInit @ 0x1056100a (5 bytes, 1 insns) */
void f_1056100a(void) {
  FTRACE(0x1056100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056100a jmp 0x105610a0 */
  f_105610a0(); return;
}

/* thunk_FUN_10002700 @ 0x1056100f (5 bytes, 1 insns) */
void f_1056100f(void) {
  FTRACE(0x1056100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056100f jmp 0x10562700 */
  f_10562700(); return;
}

/* thunk_FUN_10001040 @ 0x10561014 (5 bytes, 1 insns) */
void f_10561014(void) {
  FTRACE(0x10561014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10561014 jmp 0x10561040 */
  f_10561040(); return;
}

/* ProcessScenary @ 0x10561019 (5 bytes, 1 insns) */
void f_10561019(void) {
  FTRACE(0x10561019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10561019 jmp 0x10561560 */
  f_10561560(); return;
}

/* FUN_10001040 @ 0x10561040 (67 bytes, 26 insns) */
void f_10561040(void) {
  FTRACE(0x10561040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10561040 push ebp */
  push32((uint32_t)(EBP));
  /* 10561041 mov ebp, esp */
  EBP = (ESP);
  /* 10561043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10561046 push ebx */
  push32((uint32_t)(EBX));
  /* 10561047 push esi */
  push32((uint32_t)(ESI));
  /* 10561048 push edi */
  push32((uint32_t)(EDI));
  /* 10561049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1056104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10561051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10561056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10561058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561062 je 0x10561066 */
  if (C.zf) goto L_10561066;
  /* 10561064 jmp 0x1056106b */
  goto L_1056106b;
L_10561066:;
  /* 10561066 call 0x1056100a */
  push32(0x1056106bu); f_1056100a();
L_1056106b:;
  /* 1056106b mov eax, 1 */
  EAX = (0x1u);
  /* 10561070 pop edi */
  EDI = (pop32());
  /* 10561071 pop esi */
  ESI = (pop32());
  /* 10561072 pop ebx */
  EBX = (pop32());
  /* 10561073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561078 call 0x105627f0 */
  push32(0x1056107du); f_105627f0();
  /* 1056107d mov esp, ebp */
  ESP = (EBP);
  /* 1056107f pop ebp */
  EBP = (pop32());
  /* 10561080 ret 0xc */
  ESPCHK(0x10561040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x105610a0 (972 bytes, 257 insns) */
void f_105610a0(void) {
  FTRACE(0x105610a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105610a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105610a1 mov ebp, esp */
  EBP = (ESP);
  /* 105610a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105610a6 push ebx */
  push32((uint32_t)(EBX));
  /* 105610a7 push esi */
  push32((uint32_t)(ESI));
  /* 105610a8 push edi */
  push32((uint32_t)(EDI));
  /* 105610a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 105610ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 105610b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 105610b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105610b8 mov esi, esp */
  ESI = (ESP);
  /* 105610ba push 0x1058a178 */
  push32((uint32_t)(0x1058a178u));
  /* 105610bf push 0x1058f458 */
  push32((uint32_t)(0x1058f458u));
  /* 105610c4 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x105610cau);
  /* 105610ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105610cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105610cf call 0x105627f0 */
  push32(0x105610d4u); f_105627f0();
  /* 105610d4 mov esi, esp */
  ESI = (ESP);
  /* 105610d6 push 0x1058a170 */
  push32((uint32_t)(0x1058a170u));
  /* 105610db push 0x1058f460 */
  push32((uint32_t)(0x1058f460u));
  /* 105610e0 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x105610e6u);
  /* 105610e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105610e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105610eb call 0x105627f0 */
  push32(0x105610f0u); f_105627f0();
  /* 105610f0 mov esi, esp */
  ESI = (ESP);
  /* 105610f2 push 0x1058a168 */
  push32((uint32_t)(0x1058a168u));
  /* 105610f7 push 0x1058f468 */
  push32((uint32_t)(0x1058f468u));
  /* 105610fc call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x10561102u);
  /* 10561102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561107 call 0x105627f0 */
  push32(0x1056110cu); f_105627f0();
  /* 1056110c mov esi, esp */
  ESI = (ESP);
  /* 1056110e push 0x1058a160 */
  push32((uint32_t)(0x1058a160u));
  /* 10561113 push 0x1058f470 */
  push32((uint32_t)(0x1058f470u));
  /* 10561118 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x1056111eu);
  /* 1056111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561123 call 0x105627f0 */
  push32(0x10561128u); f_105627f0();
  /* 10561128 mov esi, esp */
  ESI = (ESP);
  /* 1056112a push 0x1058a158 */
  push32((uint32_t)(0x1058a158u));
  /* 1056112f push 0x1058f448 */
  push32((uint32_t)(0x1058f448u));
  /* 10561134 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x1056113au);
  /* 1056113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056113f call 0x105627f0 */
  push32(0x10561144u); f_105627f0();
  /* 10561144 mov esi, esp */
  ESI = (ESP);
  /* 10561146 push 0x1058a150 */
  push32((uint32_t)(0x1058a150u));
  /* 1056114b push 0x1058f478 */
  push32((uint32_t)(0x1058f478u));
  /* 10561150 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x10561156u);
  /* 10561156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056115b call 0x105627f0 */
  push32(0x10561160u); f_105627f0();
  /* 10561160 mov esi, esp */
  ESI = (ESP);
  /* 10561162 push 0x1058a148 */
  push32((uint32_t)(0x1058a148u));
  /* 10561167 push 0x1058f480 */
  push32((uint32_t)(0x1058f480u));
  /* 1056116c call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x10561172u);
  /* 10561172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561177 call 0x105627f0 */
  push32(0x1056117cu); f_105627f0();
  /* 1056117c mov esi, esp */
  ESI = (ESP);
  /* 1056117e push 0x1058a140 */
  push32((uint32_t)(0x1058a140u));
  /* 10561183 push 0x1058f488 */
  push32((uint32_t)(0x1058f488u));
  /* 10561188 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x1056118eu);
  /* 1056118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561193 call 0x105627f0 */
  push32(0x10561198u); f_105627f0();
  /* 10561198 mov esi, esp */
  ESI = (ESP);
  /* 1056119a push 0x1058a138 */
  push32((uint32_t)(0x1058a138u));
  /* 1056119f push 0x1058f490 */
  push32((uint32_t)(0x1058f490u));
  /* 105611a4 call dword ptr [0x10592440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592440))), 0x105611aau);
  /* 105611aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105611ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105611af call 0x105627f0 */
  push32(0x105611b4u); f_105627f0();
  /* 105611b4 mov esi, esp */
  ESI = (ESP);
  /* 105611b6 push 0x1058a130 */
  push32((uint32_t)(0x1058a130u));
  /* 105611bb push 0x1058f3e8 */
  push32((uint32_t)(0x1058f3e8u));
  /* 105611c0 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105611c6u);
  /* 105611c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105611c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105611cb call 0x105627f0 */
  push32(0x105611d0u); f_105627f0();
  /* 105611d0 mov esi, esp */
  ESI = (ESP);
  /* 105611d2 push 0x1058a128 */
  push32((uint32_t)(0x1058a128u));
  /* 105611d7 push 0x1058f3f8 */
  push32((uint32_t)(0x1058f3f8u));
  /* 105611dc call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105611e2u);
  /* 105611e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105611e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105611e7 call 0x105627f0 */
  push32(0x105611ecu); f_105627f0();
  /* 105611ec mov esi, esp */
  ESI = (ESP);
  /* 105611ee push 0x1058a120 */
  push32((uint32_t)(0x1058a120u));
  /* 105611f3 push 0x1058f3f0 */
  push32((uint32_t)(0x1058f3f0u));
  /* 105611f8 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105611feu);
  /* 105611fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561203 call 0x105627f0 */
  push32(0x10561208u); f_105627f0();
  /* 10561208 mov esi, esp */
  ESI = (ESP);
  /* 1056120a push 0x1058a118 */
  push32((uint32_t)(0x1058a118u));
  /* 1056120f push 0x1058f408 */
  push32((uint32_t)(0x1058f408u));
  /* 10561214 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x1056121au);
  /* 1056121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056121f call 0x105627f0 */
  push32(0x10561224u); f_105627f0();
  /* 10561224 mov esi, esp */
  ESI = (ESP);
  /* 10561226 push 0x1058a110 */
  push32((uint32_t)(0x1058a110u));
  /* 1056122b push 0x1058f400 */
  push32((uint32_t)(0x1058f400u));
  /* 10561230 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x10561236u);
  /* 10561236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056123b call 0x105627f0 */
  push32(0x10561240u); f_105627f0();
  /* 10561240 mov esi, esp */
  ESI = (ESP);
  /* 10561242 push 0x1058a108 */
  push32((uint32_t)(0x1058a108u));
  /* 10561247 push 0x1058f418 */
  push32((uint32_t)(0x1058f418u));
  /* 1056124c call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x10561252u);
  /* 10561252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561257 call 0x105627f0 */
  push32(0x1056125cu); f_105627f0();
  /* 1056125c mov esi, esp */
  ESI = (ESP);
  /* 1056125e push 0x1058a100 */
  push32((uint32_t)(0x1058a100u));
  /* 10561263 push 0x1058f410 */
  push32((uint32_t)(0x1058f410u));
  /* 10561268 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x1056126eu);
  /* 1056126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561273 call 0x105627f0 */
  push32(0x10561278u); f_105627f0();
  /* 10561278 mov esi, esp */
  ESI = (ESP);
  /* 1056127a push 0x1058a0f8 */
  push32((uint32_t)(0x1058a0f8u));
  /* 1056127f push 0x1058f428 */
  push32((uint32_t)(0x1058f428u));
  /* 10561284 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x1056128au);
  /* 1056128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056128f call 0x105627f0 */
  push32(0x10561294u); f_105627f0();
  /* 10561294 mov esi, esp */
  ESI = (ESP);
  /* 10561296 push 0x1058a0f0 */
  push32((uint32_t)(0x1058a0f0u));
  /* 1056129b push 0x1058f420 */
  push32((uint32_t)(0x1058f420u));
  /* 105612a0 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105612a6u);
  /* 105612a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105612a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105612ab call 0x105627f0 */
  push32(0x105612b0u); f_105627f0();
  /* 105612b0 mov esi, esp */
  ESI = (ESP);
  /* 105612b2 push 0x1058a0e4 */
  push32((uint32_t)(0x1058a0e4u));
  /* 105612b7 push 0x1058f4a0 */
  push32((uint32_t)(0x1058f4a0u));
  /* 105612bc call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105612c2u);
  /* 105612c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105612c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105612c7 call 0x105627f0 */
  push32(0x105612ccu); f_105627f0();
  /* 105612cc mov esi, esp */
  ESI = (ESP);
  /* 105612ce push 0x1058a0d8 */
  push32((uint32_t)(0x1058a0d8u));
  /* 105612d3 push 0x1058f4b0 */
  push32((uint32_t)(0x1058f4b0u));
  /* 105612d8 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105612deu);
  /* 105612de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105612e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105612e3 call 0x105627f0 */
  push32(0x105612e8u); f_105627f0();
  /* 105612e8 mov esi, esp */
  ESI = (ESP);
  /* 105612ea push 0x1058a0cc */
  push32((uint32_t)(0x1058a0ccu));
  /* 105612ef push 0x1058f4b8 */
  push32((uint32_t)(0x1058f4b8u));
  /* 105612f4 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x105612fau);
  /* 105612fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105612fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105612ff call 0x105627f0 */
  push32(0x10561304u); f_105627f0();
  /* 10561304 mov esi, esp */
  ESI = (ESP);
  /* 10561306 push 0x1058a0c0 */
  push32((uint32_t)(0x1058a0c0u));
  /* 1056130b push 0x1058f4a8 */
  push32((uint32_t)(0x1058f4a8u));
  /* 10561310 call dword ptr [0x10592444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592444))), 0x10561316u);
  /* 10561316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056131b call 0x105627f0 */
  push32(0x10561320u); f_105627f0();
  /* 10561320 mov esi, esp */
  ESI = (ESP);
  /* 10561322 push 0x1058a0ac */
  push32((uint32_t)(0x1058a0acu));
  /* 10561327 push 0x1058f438 */
  push32((uint32_t)(0x1058f438u));
  /* 1056132c call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x10561332u);
  /* 10561332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561337 call 0x105627f0 */
  push32(0x1056133cu); f_105627f0();
  /* 1056133c mov esi, esp */
  ESI = (ESP);
  /* 1056133e push 0x1058a098 */
  push32((uint32_t)(0x1058a098u));
  /* 10561343 push 0x1058f498 */
  push32((uint32_t)(0x1058f498u));
  /* 10561348 call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x1056134eu);
  /* 1056134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561353 call 0x105627f0 */
  push32(0x10561358u); f_105627f0();
  /* 10561358 mov esi, esp */
  ESI = (ESP);
  /* 1056135a push 0x1058a084 */
  push32((uint32_t)(0x1058a084u));
  /* 1056135f push 0x1058f430 */
  push32((uint32_t)(0x1058f430u));
  /* 10561364 call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x1056136au);
  /* 1056136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056136f call 0x105627f0 */
  push32(0x10561374u); f_105627f0();
  /* 10561374 mov esi, esp */
  ESI = (ESP);
  /* 10561376 push 0x1058a074 */
  push32((uint32_t)(0x1058a074u));
  /* 1056137b push 0x1058f4c0 */
  push32((uint32_t)(0x1058f4c0u));
  /* 10561380 call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x10561386u);
  /* 10561386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056138b call 0x105627f0 */
  push32(0x10561390u); f_105627f0();
  /* 10561390 mov esi, esp */
  ESI = (ESP);
  /* 10561392 push 0x1058a068 */
  push32((uint32_t)(0x1058a068u));
  /* 10561397 push 0x1058f440 */
  push32((uint32_t)(0x1058f440u));
  /* 1056139c call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x105613a2u);
  /* 105613a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105613a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105613a7 call 0x105627f0 */
  push32(0x105613acu); f_105627f0();
  /* 105613ac mov esi, esp */
  ESI = (ESP);
  /* 105613ae push 0x1058a058 */
  push32((uint32_t)(0x1058a058u));
  /* 105613b3 push 0x1058f3e0 */
  push32((uint32_t)(0x1058f3e0u));
  /* 105613b8 call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x105613beu);
  /* 105613be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105613c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105613c3 call 0x105627f0 */
  push32(0x105613c8u); f_105627f0();
  /* 105613c8 mov esi, esp */
  ESI = (ESP);
  /* 105613ca push 0x1058a03c */
  push32((uint32_t)(0x1058a03cu));
  /* 105613cf push 0x1058f450 */
  push32((uint32_t)(0x1058f450u));
  /* 105613d4 call dword ptr [0x10592448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592448))), 0x105613dau);
  /* 105613da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105613dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105613df call 0x105627f0 */
  push32(0x105613e4u); f_105627f0();
  /* 105613e4 mov esi, esp */
  ESI = (ESP);
  /* 105613e6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105613e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105613ea call dword ptr [0x1059244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059244c))), 0x105613f0u);
  /* 105613f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105613f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105613f5 call 0x105627f0 */
  push32(0x105613fau); f_105627f0();
  /* 105613fa mov esi, esp */
  ESI = (ESP);
  /* 105613fc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105613fe push 4 */
  push32((uint32_t)(0x4u));
  /* 10561400 call dword ptr [0x1059244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059244c))), 0x10561406u);
  /* 10561406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056140b call 0x105627f0 */
  push32(0x10561410u); f_105627f0();
  /* 10561410 mov esi, esp */
  ESI = (ESP);
  /* 10561412 push 0x1058a034 */
  push32((uint32_t)(0x1058a034u));
  /* 10561417 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561419 call dword ptr [0x10592450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592450))), 0x1056141fu);
  /* 1056141f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561424 call 0x105627f0 */
  push32(0x10561429u); f_105627f0();
  /* 10561429 mov esi, esp */
  ESI = (ESP);
  /* 1056142b push 0x1058a028 */
  push32((uint32_t)(0x1058a028u));
  /* 10561430 push 4 */
  push32((uint32_t)(0x4u));
  /* 10561432 call dword ptr [0x10592450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592450))), 0x10561438u);
  /* 10561438 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056143b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056143d call 0x105627f0 */
  push32(0x10561442u); f_105627f0();
  /* 10561442 mov esi, esp */
  ESI = (ESP);
  /* 10561444 push 0x1058a01c */
  push32((uint32_t)(0x1058a01cu));
  /* 10561449 push 5 */
  push32((uint32_t)(0x5u));
  /* 1056144b call dword ptr [0x10592450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592450))), 0x10561451u);
  /* 10561451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561454 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561456 call 0x105627f0 */
  push32(0x1056145bu); f_105627f0();
  /* 1056145b pop edi */
  EDI = (pop32());
  /* 1056145c pop esi */
  ESI = (pop32());
  /* 1056145d pop ebx */
  EBX = (pop32());
  /* 1056145e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561461 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561463 call 0x105627f0 */
  push32(0x10561468u); f_105627f0();
  /* 10561468 mov esp, ebp */
  ESP = (EBP);
  /* 1056146a pop ebp */
  EBP = (pop32());
  /* 1056146b ret  */
  ESPCHK(0x105610a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001560 @ 0x10561560 (3541 bytes, 1048 insns) */
void f_10561560(void) {
  FTRACE(0x10561560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10561560 push ebp */
  push32((uint32_t)(EBP));
  /* 10561561 mov ebp, esp */
  EBP = (ESP);
  /* 10561563 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10561566 push ebx */
  push32((uint32_t)(EBX));
  /* 10561567 push esi */
  push32((uint32_t)(ESI));
  /* 10561568 push edi */
  push32((uint32_t)(EDI));
  /* 10561569 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1056156c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10561571 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10561576 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10561578 mov esi, esp */
  ESI = (ESP);
  /* 1056157a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056157c call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561582u);
  /* 10561582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561585 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561587 call 0x105627f0 */
  push32(0x1056158cu); f_105627f0();
  /* 1056158c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561593 je 0x10561760 */
  if (C.zf) goto L_10561760;
  /* 10561599 mov esi, esp */
  ESI = (ESP);
  /* 1056159b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056159d push 1 */
  push32((uint32_t)(0x1u));
  /* 1056159f call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x105615a5u);
  /* 105615a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105615a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105615aa call 0x105627f0 */
  push32(0x105615afu); f_105627f0();
  /* 105615af mov esi, esp */
  ESI = (ESP);
  /* 105615b1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 105615b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 105615b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105615ba call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x105615c0u);
  /* 105615c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105615c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105615c5 call 0x105627f0 */
  push32(0x105615cau); f_105627f0();
  /* 105615ca mov esi, esp */
  ESI = (ESP);
  /* 105615cc push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 105615d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105615d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105615d5 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x105615dbu);
  /* 105615db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105615de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105615e0 call 0x105627f0 */
  push32(0x105615e5u); f_105627f0();
  /* 105615e5 mov esi, esp */
  ESI = (ESP);
  /* 105615e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105615e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105615eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105615ed call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x105615f3u);
  /* 105615f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105615f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105615f8 call 0x105627f0 */
  push32(0x105615fdu); f_105627f0();
  /* 105615fd mov esi, esp */
  ESI = (ESP);
  /* 105615ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10561601 push 2 */
  push32((uint32_t)(0x2u));
  /* 10561603 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561605 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x1056160bu);
  /* 1056160b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056160e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561610 call 0x105627f0 */
  push32(0x10561615u); f_105627f0();
  /* 10561615 mov esi, esp */
  ESI = (ESP);
  /* 10561617 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1056161c push 5 */
  push32((uint32_t)(0x5u));
  /* 1056161e push 0 */
  push32((uint32_t)(0x0u));
  /* 10561620 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x10561626u);
  /* 10561626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056162b call 0x105627f0 */
  push32(0x10561630u); f_105627f0();
  /* 10561630 mov esi, esp */
  ESI = (ESP);
  /* 10561632 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10561637 push 4 */
  push32((uint32_t)(0x4u));
  /* 10561639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056163b call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x10561641u);
  /* 10561641 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561644 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561646 call 0x105627f0 */
  push32(0x1056164bu); f_105627f0();
  /* 1056164b mov esi, esp */
  ESI = (ESP);
  /* 1056164d push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 10561652 push 3 */
  push32((uint32_t)(0x3u));
  /* 10561654 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561656 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x1056165cu);
  /* 1056165c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056165f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561661 call 0x105627f0 */
  push32(0x10561666u); f_105627f0();
  /* 10561666 mov esi, esp */
  ESI = (ESP);
  /* 10561668 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 1056166d push 1 */
  push32((uint32_t)(0x1u));
  /* 1056166f push 1 */
  push32((uint32_t)(0x1u));
  /* 10561671 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x10561677u);
  /* 10561677 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056167a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056167c call 0x105627f0 */
  push32(0x10561681u); f_105627f0();
  /* 10561681 mov esi, esp */
  ESI = (ESP);
  /* 10561683 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561685 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561687 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561689 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x1056168fu);
  /* 1056168f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561694 call 0x105627f0 */
  push32(0x10561699u); f_105627f0();
  /* 10561699 mov esi, esp */
  ESI = (ESP);
  /* 1056169b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056169d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056169f push 1 */
  push32((uint32_t)(0x1u));
  /* 105616a1 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x105616a7u);
  /* 105616a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105616aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105616ac call 0x105627f0 */
  push32(0x105616b1u); f_105627f0();
  /* 105616b1 mov esi, esp */
  ESI = (ESP);
  /* 105616b3 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 105616b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 105616ba push 1 */
  push32((uint32_t)(0x1u));
  /* 105616bc call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x105616c2u);
  /* 105616c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105616c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105616c7 call 0x105627f0 */
  push32(0x105616ccu); f_105627f0();
  /* 105616cc mov esi, esp */
  ESI = (ESP);
  /* 105616ce push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 105616d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 105616d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105616d7 call dword ptr [0x105923fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923fc))), 0x105616ddu);
  /* 105616dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105616e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105616e2 call 0x105627f0 */
  push32(0x105616e7u); f_105627f0();
  /* 105616e7 mov esi, esp */
  ESI = (ESP);
  /* 105616e9 push 0x1058a238 */
  push32((uint32_t)(0x1058a238u));
  /* 105616ee call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x105616f4u);
  /* 105616f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105616f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105616f9 call 0x105627f0 */
  push32(0x105616feu); f_105627f0();
  /* 105616fe mov esi, esp */
  ESI = (ESP);
  /* 10561700 push 0x1058a22c */
  push32((uint32_t)(0x1058a22cu));
  /* 10561705 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x1056170bu);
  /* 1056170b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056170e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561710 call 0x105627f0 */
  push32(0x10561715u); f_105627f0();
  /* 10561715 mov esi, esp */
  ESI = (ESP);
  /* 10561717 push 0x1058a220 */
  push32((uint32_t)(0x1058a220u));
  /* 1056171c call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561722u);
  /* 10561722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561727 call 0x105627f0 */
  push32(0x1056172cu); f_105627f0();
  /* 1056172c mov esi, esp */
  ESI = (ESP);
  /* 1056172e push 0 */
  push32((uint32_t)(0x0u));
  /* 10561730 push 0x1058f3f8 */
  push32((uint32_t)(0x1058f3f8u));
  /* 10561735 call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x1056173bu);
  /* 1056173b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056173e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561740 call 0x105627f0 */
  push32(0x10561745u); f_105627f0();
  /* 10561745 mov esi, esp */
  ESI = (ESP);
  /* 10561747 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561749 push 0x1058f458 */
  push32((uint32_t)(0x1058f458u));
  /* 1056174e push 1 */
  push32((uint32_t)(0x1u));
  /* 10561750 call dword ptr [0x10592408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592408))), 0x10561756u);
  /* 10561756 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056175b call 0x105627f0 */
  push32(0x10561760u); f_105627f0();
L_10561760:;
  /* 10561760 mov esi, esp */
  ESI = (ESP);
  /* 10561762 push 2 */
  push32((uint32_t)(0x2u));
  /* 10561764 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x1056176au);
  /* 1056176a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056176d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056176f call 0x105627f0 */
  push32(0x10561774u); f_105627f0();
  /* 10561774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056177b je 0x105617d8 */
  if (C.zf) goto L_105617d8;
  /* 1056177d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056177f push 0x1058f438 */
  push32((uint32_t)(0x1058f438u));
  /* 10561784 call 0x1056100f */
  push32(0x10561789u); f_1056100f();
  /* 10561789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056178c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056178e jle 0x105617d8 */
  if ((C.zf||C.sf!=C.of)) goto L_105617d8;
  /* 10561790 mov esi, esp */
  ESI = (ESP);
  /* 10561792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561794 push 2 */
  push32((uint32_t)(0x2u));
  /* 10561796 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x1056179cu);
  /* 1056179c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056179f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105617a1 call 0x105627f0 */
  push32(0x105617a6u); f_105627f0();
  /* 105617a6 mov esi, esp */
  ESI = (ESP);
  /* 105617a8 push 0x1058a218 */
  push32((uint32_t)(0x1058a218u));
  /* 105617ad call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x105617b3u);
  /* 105617b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105617b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105617b8 call 0x105627f0 */
  push32(0x105617bdu); f_105627f0();
  /* 105617bd mov esi, esp */
  ESI = (ESP);
  /* 105617bf push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 105617c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105617c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105617c8 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x105617ceu);
  /* 105617ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105617d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105617d3 call 0x105627f0 */
  push32(0x105617d8u); f_105627f0();
L_105617d8:;
  /* 105617d8 mov esi, esp */
  ESI = (ESP);
  /* 105617da push 3 */
  push32((uint32_t)(0x3u));
  /* 105617dc call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x105617e2u);
  /* 105617e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105617e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105617e7 call 0x105627f0 */
  push32(0x105617ecu); f_105627f0();
  /* 105617ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105617f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105617f3 je 0x1056185f */
  if (C.zf) goto L_1056185f;
  /* 105617f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105617f7 push 0x1058f498 */
  push32((uint32_t)(0x1058f498u));
  /* 105617fc call 0x1056100f */
  push32(0x10561801u); f_1056100f();
  /* 10561801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561806 jle 0x1056185f */
  if ((C.zf||C.sf!=C.of)) goto L_1056185f;
  /* 10561808 mov esi, esp */
  ESI = (ESP);
  /* 1056180a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056180c push 3 */
  push32((uint32_t)(0x3u));
  /* 1056180e call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561814u);
  /* 10561814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561819 call 0x105627f0 */
  push32(0x1056181eu); f_105627f0();
  /* 1056181e mov esi, esp */
  ESI = (ESP);
  /* 10561820 push 0x1058a210 */
  push32((uint32_t)(0x1058a210u));
  /* 10561825 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x1056182bu);
  /* 1056182b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056182e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561830 call 0x105627f0 */
  push32(0x10561835u); f_105627f0();
  /* 10561835 mov esi, esp */
  ESI = (ESP);
  /* 10561837 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1056183c push 1 */
  push32((uint32_t)(0x1u));
  /* 1056183e push 0 */
  push32((uint32_t)(0x0u));
  /* 10561840 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561846u);
  /* 10561846 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056184b call 0x105627f0 */
  push32(0x10561850u); f_105627f0();
  /* 10561850 mov esi, esp */
  ESI = (ESP);
  /* 10561852 call dword ptr [0x10592410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592410))), 0x10561858u);
  /* 10561858 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056185a call 0x105627f0 */
  push32(0x1056185fu); f_105627f0();
L_1056185f:;
  /* 1056185f mov esi, esp */
  ESI = (ESP);
  /* 10561861 push 4 */
  push32((uint32_t)(0x4u));
  /* 10561863 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561869u);
  /* 10561869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056186c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056186e call 0x105627f0 */
  push32(0x10561873u); f_105627f0();
  /* 10561873 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056187a je 0x105618d7 */
  if (C.zf) goto L_105618d7;
  /* 1056187c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056187e push 0x1058f430 */
  push32((uint32_t)(0x1058f430u));
  /* 10561883 call 0x1056100f */
  push32(0x10561888u); f_1056100f();
  /* 10561888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056188b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056188d jle 0x105618d7 */
  if ((C.zf||C.sf!=C.of)) goto L_105618d7;
  /* 1056188f mov esi, esp */
  ESI = (ESP);
  /* 10561891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561893 push 4 */
  push32((uint32_t)(0x4u));
  /* 10561895 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x1056189bu);
  /* 1056189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056189e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105618a0 call 0x105627f0 */
  push32(0x105618a5u); f_105627f0();
  /* 105618a5 mov esi, esp */
  ESI = (ESP);
  /* 105618a7 push 0x1058a208 */
  push32((uint32_t)(0x1058a208u));
  /* 105618ac call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x105618b2u);
  /* 105618b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105618b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105618b7 call 0x105627f0 */
  push32(0x105618bcu); f_105627f0();
  /* 105618bc mov esi, esp */
  ESI = (ESP);
  /* 105618be push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 105618c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105618c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105618c7 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x105618cdu);
  /* 105618cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105618d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105618d2 call 0x105627f0 */
  push32(0x105618d7u); f_105627f0();
L_105618d7:;
  /* 105618d7 mov esi, esp */
  ESI = (ESP);
  /* 105618d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 105618db call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x105618e1u);
  /* 105618e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105618e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105618e6 call 0x105627f0 */
  push32(0x105618ebu); f_105627f0();
  /* 105618eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105618f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105618f2 je 0x1056196a */
  if (C.zf) goto L_1056196a;
  /* 105618f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105618f6 push 0x1058f4c0 */
  push32((uint32_t)(0x1058f4c0u));
  /* 105618fb call 0x1056100f */
  push32(0x10561900u); f_1056100f();
  /* 10561900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561905 jle 0x1056196a */
  if ((C.zf||C.sf!=C.of)) goto L_1056196a;
  /* 10561907 mov esi, esp */
  ESI = (ESP);
  /* 10561909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056190b push 5 */
  push32((uint32_t)(0x5u));
  /* 1056190d call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561913u);
  /* 10561913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561918 call 0x105627f0 */
  push32(0x1056191du); f_105627f0();
  /* 1056191d mov esi, esp */
  ESI = (ESP);
  /* 1056191f push 0x1058a200 */
  push32((uint32_t)(0x1058a200u));
  /* 10561924 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x1056192au);
  /* 1056192a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056192d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056192f call 0x105627f0 */
  push32(0x10561934u); f_105627f0();
  /* 10561934 mov esi, esp */
  ESI = (ESP);
  /* 10561936 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1056193b push 4 */
  push32((uint32_t)(0x4u));
  /* 1056193d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056193f call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561945u);
  /* 10561945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056194a call 0x105627f0 */
  push32(0x1056194fu); f_105627f0();
  /* 1056194f mov esi, esp */
  ESI = (ESP);
  /* 10561951 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10561956 push 5 */
  push32((uint32_t)(0x5u));
  /* 10561958 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056195a call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561960u);
  /* 10561960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561963 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561965 call 0x105627f0 */
  push32(0x1056196au); f_105627f0();
L_1056196a:;
  /* 1056196a mov esi, esp */
  ESI = (ESP);
  /* 1056196c push 6 */
  push32((uint32_t)(0x6u));
  /* 1056196e call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561974u);
  /* 10561974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561977 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561979 call 0x105627f0 */
  push32(0x1056197eu); f_105627f0();
  /* 1056197e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561985 je 0x105619e2 */
  if (C.zf) goto L_105619e2;
  /* 10561987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561989 push 0x1058f440 */
  push32((uint32_t)(0x1058f440u));
  /* 1056198e call 0x1056100f */
  push32(0x10561993u); f_1056100f();
  /* 10561993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561996 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561998 jle 0x105619e2 */
  if ((C.zf||C.sf!=C.of)) goto L_105619e2;
  /* 1056199a mov esi, esp */
  ESI = (ESP);
  /* 1056199c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056199e push 6 */
  push32((uint32_t)(0x6u));
  /* 105619a0 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x105619a6u);
  /* 105619a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105619a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105619ab call 0x105627f0 */
  push32(0x105619b0u); f_105627f0();
  /* 105619b0 mov esi, esp */
  ESI = (ESP);
  /* 105619b2 push 0x1058a1f8 */
  push32((uint32_t)(0x1058a1f8u));
  /* 105619b7 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x105619bdu);
  /* 105619bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105619c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105619c2 call 0x105627f0 */
  push32(0x105619c7u); f_105627f0();
  /* 105619c7 mov esi, esp */
  ESI = (ESP);
  /* 105619c9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 105619ce push 1 */
  push32((uint32_t)(0x1u));
  /* 105619d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105619d2 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x105619d8u);
  /* 105619d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105619db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105619dd call 0x105627f0 */
  push32(0x105619e2u); f_105627f0();
L_105619e2:;
  /* 105619e2 mov esi, esp */
  ESI = (ESP);
  /* 105619e4 push 7 */
  push32((uint32_t)(0x7u));
  /* 105619e6 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x105619ecu);
  /* 105619ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105619ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105619f1 call 0x105627f0 */
  push32(0x105619f6u); f_105627f0();
  /* 105619f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105619fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105619fd je 0x10561a69 */
  if (C.zf) goto L_10561a69;
  /* 105619ff mov esi, esp */
  ESI = (ESP);
  /* 10561a01 push 3 */
  push32((uint32_t)(0x3u));
  /* 10561a03 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561a09u);
  /* 10561a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561a0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561a0e call 0x105627f0 */
  push32(0x10561a13u); f_105627f0();
  /* 10561a13 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561a1a je 0x10561a69 */
  if (C.zf) goto L_10561a69;
  /* 10561a1c push 0x1058f4b0 */
  push32((uint32_t)(0x1058f4b0u));
  /* 10561a21 call 0x10561005 */
  push32(0x10561a26u); f_10561005();
  /* 10561a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561a2b jne 0x10561a69 */
  if (!C.zf) goto L_10561a69;
  /* 10561a2d mov esi, esp */
  ESI = (ESP);
  /* 10561a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10561a31 push 7 */
  push32((uint32_t)(0x7u));
  /* 10561a33 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561a39u);
  /* 10561a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561a3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561a3e call 0x105627f0 */
  push32(0x10561a43u); f_105627f0();
  /* 10561a43 mov esi, esp */
  ESI = (ESP);
  /* 10561a45 push 0x1058a1f0 */
  push32((uint32_t)(0x1058a1f0u));
  /* 10561a4a call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561a50u);
  /* 10561a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561a55 call 0x105627f0 */
  push32(0x10561a5au); f_105627f0();
  /* 10561a5a mov esi, esp */
  ESI = (ESP);
  /* 10561a5c call dword ptr [0x10592414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592414))), 0x10561a62u);
  /* 10561a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561a64 call 0x105627f0 */
  push32(0x10561a69u); f_105627f0();
L_10561a69:;
  /* 10561a69 mov esi, esp */
  ESI = (ESP);
  /* 10561a6b push 8 */
  push32((uint32_t)(0x8u));
  /* 10561a6d call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561a73u);
  /* 10561a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561a76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561a78 call 0x105627f0 */
  push32(0x10561a7du); f_105627f0();
  /* 10561a7d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561a84 je 0x10561ae1 */
  if (C.zf) goto L_10561ae1;
  /* 10561a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561a88 push 0x1058f3e0 */
  push32((uint32_t)(0x1058f3e0u));
  /* 10561a8d call 0x1056100f */
  push32(0x10561a92u); f_1056100f();
  /* 10561a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561a97 jle 0x10561ae1 */
  if ((C.zf||C.sf!=C.of)) goto L_10561ae1;
  /* 10561a99 mov esi, esp */
  ESI = (ESP);
  /* 10561a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10561a9d push 8 */
  push32((uint32_t)(0x8u));
  /* 10561a9f call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561aa5u);
  /* 10561aa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561aaa call 0x105627f0 */
  push32(0x10561aafu); f_105627f0();
  /* 10561aaf mov esi, esp */
  ESI = (ESP);
  /* 10561ab1 push 0x1058a1e8 */
  push32((uint32_t)(0x1058a1e8u));
  /* 10561ab6 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561abcu);
  /* 10561abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561ac1 call 0x105627f0 */
  push32(0x10561ac6u); f_105627f0();
  /* 10561ac6 mov esi, esp */
  ESI = (ESP);
  /* 10561ac8 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10561acd push 3 */
  push32((uint32_t)(0x3u));
  /* 10561acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10561ad1 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561ad7u);
  /* 10561ad7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561adc call 0x105627f0 */
  push32(0x10561ae1u); f_105627f0();
L_10561ae1:;
  /* 10561ae1 mov esi, esp */
  ESI = (ESP);
  /* 10561ae3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10561ae5 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561aebu);
  /* 10561aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561aee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561af0 call 0x105627f0 */
  push32(0x10561af5u); f_105627f0();
  /* 10561af5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561afc je 0x10561c7e */
  if (C.zf) goto L_10561c7e;
  /* 10561b02 mov esi, esp */
  ESI = (ESP);
  /* 10561b04 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10561b06 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561b0cu);
  /* 10561b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561b11 call 0x105627f0 */
  push32(0x10561b16u); f_105627f0();
  /* 10561b16 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561b1d je 0x10561c7e */
  if (C.zf) goto L_10561c7e;
  /* 10561b23 mov esi, esp */
  ESI = (ESP);
  /* 10561b25 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10561b27 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561b2du);
  /* 10561b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561b30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561b32 call 0x105627f0 */
  push32(0x10561b37u); f_105627f0();
  /* 10561b37 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561b3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561b3e je 0x10561c7e */
  if (C.zf) goto L_10561c7e;
  /* 10561b44 mov esi, esp */
  ESI = (ESP);
  /* 10561b46 push 0x1058f3e8 */
  push32((uint32_t)(0x1058f3e8u));
  /* 10561b4b push 0x1058f488 */
  push32((uint32_t)(0x1058f488u));
  /* 10561b50 call dword ptr [0x10592418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592418))), 0x10561b56u);
  /* 10561b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561b5b call 0x105627f0 */
  push32(0x10561b60u); f_105627f0();
  /* 10561b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561b62 jle 0x10561c7e */
  if ((C.zf||C.sf!=C.of)) goto L_10561c7e;
  /* 10561b68 mov esi, esp */
  ESI = (ESP);
  /* 10561b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10561b6c push 9 */
  push32((uint32_t)(0x9u));
  /* 10561b6e call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561b74u);
  /* 10561b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561b79 call 0x105627f0 */
  push32(0x10561b7eu); f_105627f0();
  /* 10561b7e mov esi, esp */
  ESI = (ESP);
  /* 10561b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561b82 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10561b84 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561b8au);
  /* 10561b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561b8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561b8f call 0x105627f0 */
  push32(0x10561b94u); f_105627f0();
  /* 10561b94 mov esi, esp */
  ESI = (ESP);
  /* 10561b96 push 0x1058a1e0 */
  push32((uint32_t)(0x1058a1e0u));
  /* 10561b9b call dword ptr [0x1059241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059241c))), 0x10561ba1u);
  /* 10561ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561ba6 call 0x105627f0 */
  push32(0x10561babu); f_105627f0();
  /* 10561bab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561bb2 je 0x10561c67 */
  if (C.zf) goto L_10561c67;
  /* 10561bb8 mov esi, esp */
  ESI = (ESP);
  /* 10561bba push 1 */
  push32((uint32_t)(0x1u));
  /* 10561bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10561bbe call dword ptr [0x10592420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592420))), 0x10561bc4u);
  /* 10561bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561bc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561bc9 call 0x105627f0 */
  push32(0x10561bceu); f_105627f0();
  /* 10561bce cmp eax, 0xbb7 */
  { uint32_t _a=(EAX),_b=(0xbb7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561bd3 jle 0x10561c4e */
  if ((C.zf||C.sf!=C.of)) goto L_10561c4e;
  /* 10561bd5 mov esi, esp */
  ESI = (ESP);
  /* 10561bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561bd9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10561bdb call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561be1u);
  /* 10561be1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561be4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561be6 call 0x105627f0 */
  push32(0x10561bebu); f_105627f0();
  /* 10561beb mov esi, esp */
  ESI = (ESP);
  /* 10561bed push 0x1058a1d4 */
  push32((uint32_t)(0x1058a1d4u));
  /* 10561bf2 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561bf8u);
  /* 10561bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561bfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561bfd call 0x105627f0 */
  push32(0x10561c02u); f_105627f0();
  /* 10561c02 mov esi, esp */
  ESI = (ESP);
  /* 10561c04 push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 10561c09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10561c0d call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561c13u);
  /* 10561c13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561c18 call 0x105627f0 */
  push32(0x10561c1du); f_105627f0();
  /* 10561c1d mov esi, esp */
  ESI = (ESP);
  /* 10561c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10561c21 push 0x1058f4a0 */
  push32((uint32_t)(0x1058f4a0u));
  /* 10561c26 call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x10561c2cu);
  /* 10561c2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561c31 call 0x105627f0 */
  push32(0x10561c36u); f_105627f0();
  /* 10561c36 mov esi, esp */
  ESI = (ESP);
  /* 10561c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561c3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10561c3c call dword ptr [0x10592424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592424))), 0x10561c42u);
  /* 10561c42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561c45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561c47 call 0x105627f0 */
  push32(0x10561c4cu); f_105627f0();
  /* 10561c4c jmp 0x10561c65 */
  goto L_10561c65;
L_10561c4e:;
  /* 10561c4e mov esi, esp */
  ESI = (ESP);
  /* 10561c50 push 0x1058a1c8 */
  push32((uint32_t)(0x1058a1c8u));
  /* 10561c55 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561c5bu);
  /* 10561c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561c5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561c60 call 0x105627f0 */
  push32(0x10561c65u); f_105627f0();
L_10561c65:;
  /* 10561c65 jmp 0x10561c7e */
  goto L_10561c7e;
L_10561c67:;
  /* 10561c67 mov esi, esp */
  ESI = (ESP);
  /* 10561c69 push 0x1058a1bc */
  push32((uint32_t)(0x1058a1bcu));
  /* 10561c6e call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561c74u);
  /* 10561c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561c79 call 0x105627f0 */
  push32(0x10561c7eu); f_105627f0();
L_10561c7e:;
  /* 10561c7e mov esi, esp */
  ESI = (ESP);
  /* 10561c80 push 9 */
  push32((uint32_t)(0x9u));
  /* 10561c82 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561c88u);
  /* 10561c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561c8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561c8d call 0x105627f0 */
  push32(0x10561c92u); f_105627f0();
  /* 10561c92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561c99 je 0x10561e05 */
  if (C.zf) goto L_10561e05;
  /* 10561c9f mov esi, esp */
  ESI = (ESP);
  /* 10561ca1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10561ca3 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561ca9u);
  /* 10561ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561cae call 0x105627f0 */
  push32(0x10561cb3u); f_105627f0();
  /* 10561cb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561cba je 0x10561e05 */
  if (C.zf) goto L_10561e05;
  /* 10561cc0 mov esi, esp */
  ESI = (ESP);
  /* 10561cc2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10561cc4 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561ccau);
  /* 10561cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561ccf call 0x105627f0 */
  push32(0x10561cd4u); f_105627f0();
  /* 10561cd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561cdb jne 0x10561e05 */
  if (!C.zf) goto L_10561e05;
  /* 10561ce1 mov esi, esp */
  ESI = (ESP);
  /* 10561ce3 push 0x1058f3e8 */
  push32((uint32_t)(0x1058f3e8u));
  /* 10561ce8 push 0x1058f488 */
  push32((uint32_t)(0x1058f488u));
  /* 10561ced call dword ptr [0x10592418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592418))), 0x10561cf3u);
  /* 10561cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561cf8 call 0x105627f0 */
  push32(0x10561cfdu); f_105627f0();
  /* 10561cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561cff jle 0x10561e05 */
  if ((C.zf||C.sf!=C.of)) goto L_10561e05;
  /* 10561d05 mov esi, esp */
  ESI = (ESP);
  /* 10561d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561d09 push 9 */
  push32((uint32_t)(0x9u));
  /* 10561d0b call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561d11u);
  /* 10561d11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d16 call 0x105627f0 */
  push32(0x10561d1bu); f_105627f0();
  /* 10561d1b mov esi, esp */
  ESI = (ESP);
  /* 10561d1d push 0x1058a1b0 */
  push32((uint32_t)(0x1058a1b0u));
  /* 10561d22 call dword ptr [0x1059241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059241c))), 0x10561d28u);
  /* 10561d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561d2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d2d call 0x105627f0 */
  push32(0x10561d32u); f_105627f0();
  /* 10561d32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561d37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561d39 je 0x10561dee */
  if (C.zf) goto L_10561dee;
  /* 10561d3f mov esi, esp */
  ESI = (ESP);
  /* 10561d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561d45 call dword ptr [0x10592420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592420))), 0x10561d4bu);
  /* 10561d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561d4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d50 call 0x105627f0 */
  push32(0x10561d55u); f_105627f0();
  /* 10561d55 cmp eax, 0xbb7 */
  { uint32_t _a=(EAX),_b=(0xbb7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d5a jle 0x10561dd5 */
  if ((C.zf||C.sf!=C.of)) goto L_10561dd5;
  /* 10561d5c mov esi, esp */
  ESI = (ESP);
  /* 10561d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10561d60 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10561d62 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561d68u);
  /* 10561d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561d6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d6d call 0x105627f0 */
  push32(0x10561d72u); f_105627f0();
  /* 10561d72 mov esi, esp */
  ESI = (ESP);
  /* 10561d74 push 0x1058a1d4 */
  push32((uint32_t)(0x1058a1d4u));
  /* 10561d79 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561d7fu);
  /* 10561d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d84 call 0x105627f0 */
  push32(0x10561d89u); f_105627f0();
  /* 10561d89 mov esi, esp */
  ESI = (ESP);
  /* 10561d8b push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 10561d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561d94 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561d9au);
  /* 10561d9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561d9f call 0x105627f0 */
  push32(0x10561da4u); f_105627f0();
  /* 10561da4 mov esi, esp */
  ESI = (ESP);
  /* 10561da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561da8 push 0x1058f4a0 */
  push32((uint32_t)(0x1058f4a0u));
  /* 10561dad call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x10561db3u);
  /* 10561db3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561db6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561db8 call 0x105627f0 */
  push32(0x10561dbdu); f_105627f0();
  /* 10561dbd mov esi, esp */
  ESI = (ESP);
  /* 10561dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10561dc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10561dc3 call dword ptr [0x10592424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592424))), 0x10561dc9u);
  /* 10561dc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561dcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561dce call 0x105627f0 */
  push32(0x10561dd3u); f_105627f0();
  /* 10561dd3 jmp 0x10561dec */
  goto L_10561dec;
L_10561dd5:;
  /* 10561dd5 mov esi, esp */
  ESI = (ESP);
  /* 10561dd7 push 0x1058a1c8 */
  push32((uint32_t)(0x1058a1c8u));
  /* 10561ddc call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561de2u);
  /* 10561de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561de5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561de7 call 0x105627f0 */
  push32(0x10561decu); f_105627f0();
L_10561dec:;
  /* 10561dec jmp 0x10561e05 */
  goto L_10561e05;
L_10561dee:;
  /* 10561dee mov esi, esp */
  ESI = (ESP);
  /* 10561df0 push 0x1058a1bc */
  push32((uint32_t)(0x1058a1bcu));
  /* 10561df5 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561dfbu);
  /* 10561dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561dfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561e00 call 0x105627f0 */
  push32(0x10561e05u); f_105627f0();
L_10561e05:;
  /* 10561e05 mov esi, esp */
  ESI = (ESP);
  /* 10561e07 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10561e09 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561e0fu);
  /* 10561e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561e14 call 0x105627f0 */
  push32(0x10561e19u); f_105627f0();
  /* 10561e19 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561e20 je 0x10561e75 */
  if (C.zf) goto L_10561e75;
  /* 10561e22 mov esi, esp */
  ESI = (ESP);
  /* 10561e24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10561e26 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561e2cu);
  /* 10561e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561e31 call 0x105627f0 */
  push32(0x10561e36u); f_105627f0();
  /* 10561e36 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561e3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561e3d jne 0x10561e75 */
  if (!C.zf) goto L_10561e75;
  /* 10561e3f mov esi, esp */
  ESI = (ESP);
  /* 10561e41 push 0x1058f3e8 */
  push32((uint32_t)(0x1058f3e8u));
  /* 10561e46 push 0x1058f488 */
  push32((uint32_t)(0x1058f488u));
  /* 10561e4b call dword ptr [0x10592418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592418))), 0x10561e51u);
  /* 10561e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561e54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561e56 call 0x105627f0 */
  push32(0x10561e5bu); f_105627f0();
  /* 10561e5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561e5d jne 0x10561e75 */
  if (!C.zf) goto L_10561e75;
  /* 10561e5f mov esi, esp */
  ESI = (ESP);
  /* 10561e61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561e63 push 9 */
  push32((uint32_t)(0x9u));
  /* 10561e65 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561e6bu);
  /* 10561e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561e6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561e70 call 0x105627f0 */
  push32(0x10561e75u); f_105627f0();
L_10561e75:;
  /* 10561e75 mov esi, esp */
  ESI = (ESP);
  /* 10561e77 push 0xa */
  push32((uint32_t)(0xau));
  /* 10561e79 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561e7fu);
  /* 10561e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561e82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561e84 call 0x105627f0 */
  push32(0x10561e89u); f_105627f0();
  /* 10561e89 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561e90 je 0x10561edf */
  if (C.zf) goto L_10561edf;
  /* 10561e92 push 0x1058f3e8 */
  push32((uint32_t)(0x1058f3e8u));
  /* 10561e97 call 0x10561005 */
  push32(0x10561e9cu); f_10561005();
  /* 10561e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561e9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561ea1 jne 0x10561edf */
  if (!C.zf) goto L_10561edf;
  /* 10561ea3 mov esi, esp */
  ESI = (ESP);
  /* 10561ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561ea7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10561ea9 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561eafu);
  /* 10561eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561eb4 call 0x105627f0 */
  push32(0x10561eb9u); f_105627f0();
  /* 10561eb9 mov esi, esp */
  ESI = (ESP);
  /* 10561ebb push 0x1058a1a4 */
  push32((uint32_t)(0x1058a1a4u));
  /* 10561ec0 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561ec6u);
  /* 10561ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561ecb call 0x105627f0 */
  push32(0x10561ed0u); f_105627f0();
  /* 10561ed0 mov esi, esp */
  ESI = (ESP);
  /* 10561ed2 call dword ptr [0x10592414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592414))), 0x10561ed8u);
  /* 10561ed8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561eda call 0x105627f0 */
  push32(0x10561edfu); f_105627f0();
L_10561edf:;
  /* 10561edf mov esi, esp */
  ESI = (ESP);
  /* 10561ee1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10561ee3 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561ee9u);
  /* 10561ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561eee call 0x105627f0 */
  push32(0x10561ef3u); f_105627f0();
  /* 10561ef3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561efa je 0x10561f90 */
  if (C.zf) goto L_10561f90;
  /* 10561f00 mov esi, esp */
  ESI = (ESP);
  /* 10561f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561f04 push 0x1058f490 */
  push32((uint32_t)(0x1058f490u));
  /* 10561f09 call dword ptr [0x10592428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592428))), 0x10561f0fu);
  /* 10561f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f14 call 0x105627f0 */
  push32(0x10561f19u); f_105627f0();
  /* 10561f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561f1b jle 0x10561f90 */
  if ((C.zf||C.sf!=C.of)) goto L_10561f90;
  /* 10561f1d mov esi, esp */
  ESI = (ESP);
  /* 10561f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10561f21 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10561f23 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561f29u);
  /* 10561f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f2e call 0x105627f0 */
  push32(0x10561f33u); f_105627f0();
  /* 10561f33 mov esi, esp */
  ESI = (ESP);
  /* 10561f35 push 0x1058a198 */
  push32((uint32_t)(0x1058a198u));
  /* 10561f3a call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561f40u);
  /* 10561f40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f45 call 0x105627f0 */
  push32(0x10561f4au); f_105627f0();
  /* 10561f4a mov esi, esp */
  ESI = (ESP);
  /* 10561f4c push 0x1058a18c */
  push32((uint32_t)(0x1058a18cu));
  /* 10561f51 call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561f57u);
  /* 10561f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f5c call 0x105627f0 */
  push32(0x10561f61u); f_105627f0();
  /* 10561f61 mov esi, esp */
  ESI = (ESP);
  /* 10561f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561f65 push 0x1058f4b8 */
  push32((uint32_t)(0x1058f4b8u));
  /* 10561f6a call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x10561f70u);
  /* 10561f70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f75 call 0x105627f0 */
  push32(0x10561f7au); f_105627f0();
  /* 10561f7a mov esi, esp */
  ESI = (ESP);
  /* 10561f7c push 5 */
  push32((uint32_t)(0x5u));
  /* 10561f7e push 4 */
  push32((uint32_t)(0x4u));
  /* 10561f80 call dword ptr [0x10592424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592424))), 0x10561f86u);
  /* 10561f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f8b call 0x105627f0 */
  push32(0x10561f90u); f_105627f0();
L_10561f90:;
  /* 10561f90 mov esi, esp */
  ESI = (ESP);
  /* 10561f92 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10561f94 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10561f9au);
  /* 10561f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561f9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561f9f call 0x105627f0 */
  push32(0x10561fa4u); f_105627f0();
  /* 10561fa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10561fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561fab je 0x10562006 */
  if (C.zf) goto L_10562006;
  /* 10561fad push 0x1058f4a8 */
  push32((uint32_t)(0x1058f4a8u));
  /* 10561fb2 call 0x10561005 */
  push32(0x10561fb7u); f_10561005();
  /* 10561fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561fba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10561fbc jne 0x10562006 */
  if (!C.zf) goto L_10562006;
  /* 10561fbe mov esi, esp */
  ESI = (ESP);
  /* 10561fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561fc2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10561fc4 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10561fcau);
  /* 10561fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561fcf call 0x105627f0 */
  push32(0x10561fd4u); f_105627f0();
  /* 10561fd4 mov esi, esp */
  ESI = (ESP);
  /* 10561fd6 push 0x1058a180 */
  push32((uint32_t)(0x1058a180u));
  /* 10561fdb call dword ptr [0x10592400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592400))), 0x10561fe1u);
  /* 10561fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10561fe6 call 0x105627f0 */
  push32(0x10561febu); f_105627f0();
  /* 10561feb mov esi, esp */
  ESI = (ESP);
  /* 10561fed push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10561ff2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10561ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10561ff6 call dword ptr [0x1059240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059240c))), 0x10561ffcu);
  /* 10561ffc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10561fff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562001 call 0x105627f0 */
  push32(0x10562006u); f_105627f0();
L_10562006:;
  /* 10562006 mov esi, esp */
  ESI = (ESP);
  /* 10562008 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1056200a call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10562010u);
  /* 10562010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562013 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562015 call 0x105627f0 */
  push32(0x1056201au); f_105627f0();
  /* 1056201a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562021 je 0x1056208c */
  if (C.zf) goto L_1056208c;
  /* 10562023 mov esi, esp */
  ESI = (ESP);
  /* 10562025 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562027 push 0x1058f460 */
  push32((uint32_t)(0x1058f460u));
  /* 1056202c call dword ptr [0x10592428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592428))), 0x10562032u);
  /* 10562032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562035 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562037 call 0x105627f0 */
  push32(0x1056203cu); f_105627f0();
  /* 1056203c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056203e jle 0x1056208c */
  if ((C.zf||C.sf!=C.of)) goto L_1056208c;
  /* 10562040 mov esi, esp */
  ESI = (ESP);
  /* 10562042 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562044 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10562046 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x1056204cu);
  /* 1056204c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056204f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562051 call 0x105627f0 */
  push32(0x10562056u); f_105627f0();
  /* 10562056 mov esi, esp */
  ESI = (ESP);
  /* 10562058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056205a push 0x1058f3f0 */
  push32((uint32_t)(0x1058f3f0u));
  /* 1056205f call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x10562065u);
  /* 10562065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056206a call 0x105627f0 */
  push32(0x1056206fu); f_105627f0();
  /* 1056206f mov esi, esp */
  ESI = (ESP);
  /* 10562071 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562075 push 0x1058f468 */
  push32((uint32_t)(0x1058f468u));
  /* 1056207a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056207c call dword ptr [0x1059242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059242c))), 0x10562082u);
  /* 10562082 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562085 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562087 call 0x105627f0 */
  push32(0x1056208cu); f_105627f0();
L_1056208c:;
  /* 1056208c mov esi, esp */
  ESI = (ESP);
  /* 1056208e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10562090 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10562096u);
  /* 10562096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562099 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056209b call 0x105627f0 */
  push32(0x105620a0u); f_105627f0();
  /* 105620a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105620a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105620a7 je 0x10562160 */
  if (C.zf) goto L_10562160;
  /* 105620ad mov esi, esp */
  ESI = (ESP);
  /* 105620af push 0 */
  push32((uint32_t)(0x0u));
  /* 105620b1 push 0x1058f470 */
  push32((uint32_t)(0x1058f470u));
  /* 105620b6 call dword ptr [0x10592428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592428))), 0x105620bcu);
  /* 105620bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105620bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105620c1 call 0x105627f0 */
  push32(0x105620c6u); f_105627f0();
  /* 105620c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105620c8 jg 0x105620e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_105620e7;
  /* 105620ca mov esi, esp */
  ESI = (ESP);
  /* 105620cc push 0 */
  push32((uint32_t)(0x0u));
  /* 105620ce push 0x1058f448 */
  push32((uint32_t)(0x1058f448u));
  /* 105620d3 call dword ptr [0x10592428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592428))), 0x105620d9u);
  /* 105620d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105620dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105620de call 0x105627f0 */
  push32(0x105620e3u); f_105627f0();
  /* 105620e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105620e5 jle 0x10562160 */
  if ((C.zf||C.sf!=C.of)) goto L_10562160;
L_105620e7:;
  /* 105620e7 mov esi, esp */
  ESI = (ESP);
  /* 105620e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105620eb push 0x15 */
  push32((uint32_t)(0x15u));
  /* 105620ed call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x105620f3u);
  /* 105620f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105620f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105620f8 call 0x105627f0 */
  push32(0x105620fdu); f_105627f0();
  /* 105620fd mov esi, esp */
  ESI = (ESP);
  /* 105620ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10562101 push 0x1058f400 */
  push32((uint32_t)(0x1058f400u));
  /* 10562106 call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x1056210cu);
  /* 1056210c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056210f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562111 call 0x105627f0 */
  push32(0x10562116u); f_105627f0();
  /* 10562116 mov esi, esp */
  ESI = (ESP);
  /* 10562118 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056211a call dword ptr [0x10592430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592430))), 0x10562120u);
  /* 10562120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562125 call 0x105627f0 */
  push32(0x1056212au); f_105627f0();
  /* 1056212a mov esi, esp */
  ESI = (ESP);
  /* 1056212c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056212e push 0x1058f408 */
  push32((uint32_t)(0x1058f408u));
  /* 10562133 call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x10562139u);
  /* 10562139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056213c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056213e call 0x105627f0 */
  push32(0x10562143u); f_105627f0();
  /* 10562143 mov esi, esp */
  ESI = (ESP);
  /* 10562145 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562147 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562149 push 0x1058f470 */
  push32((uint32_t)(0x1058f470u));
  /* 1056214e push 1 */
  push32((uint32_t)(0x1u));
  /* 10562150 call dword ptr [0x1059242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059242c))), 0x10562156u);
  /* 10562156 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056215b call 0x105627f0 */
  push32(0x10562160u); f_105627f0();
L_10562160:;
  /* 10562160 mov esi, esp */
  ESI = (ESP);
  /* 10562162 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10562164 call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x1056216au);
  /* 1056216a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056216d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056216f call 0x105627f0 */
  push32(0x10562174u); f_105627f0();
  /* 10562174 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056217b je 0x10562217 */
  if (C.zf) goto L_10562217;
  /* 10562181 mov esi, esp */
  ESI = (ESP);
  /* 10562183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562185 push 0x1058f478 */
  push32((uint32_t)(0x1058f478u));
  /* 1056218a call dword ptr [0x10592428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592428))), 0x10562190u);
  /* 10562190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562195 call 0x105627f0 */
  push32(0x1056219au); f_105627f0();
  /* 1056219a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056219c jle 0x10562217 */
  if ((C.zf||C.sf!=C.of)) goto L_10562217;
  /* 1056219e mov esi, esp */
  ESI = (ESP);
  /* 105621a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105621a2 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 105621a4 call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x105621aau);
  /* 105621aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105621ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105621af call 0x105627f0 */
  push32(0x105621b4u); f_105627f0();
  /* 105621b4 mov esi, esp */
  ESI = (ESP);
  /* 105621b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105621b8 push 0x1058f410 */
  push32((uint32_t)(0x1058f410u));
  /* 105621bd call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x105621c3u);
  /* 105621c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105621c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105621c8 call 0x105627f0 */
  push32(0x105621cdu); f_105627f0();
  /* 105621cd mov esi, esp */
  ESI = (ESP);
  /* 105621cf push 1 */
  push32((uint32_t)(0x1u));
  /* 105621d1 call dword ptr [0x10592430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592430))), 0x105621d7u);
  /* 105621d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105621da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105621dc call 0x105627f0 */
  push32(0x105621e1u); f_105627f0();
  /* 105621e1 mov esi, esp */
  ESI = (ESP);
  /* 105621e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105621e5 push 0x1058f418 */
  push32((uint32_t)(0x1058f418u));
  /* 105621ea call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x105621f0u);
  /* 105621f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105621f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105621f5 call 0x105627f0 */
  push32(0x105621fau); f_105627f0();
  /* 105621fa mov esi, esp */
  ESI = (ESP);
  /* 105621fc push 0 */
  push32((uint32_t)(0x0u));
  /* 105621fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10562200 push 0x1058f478 */
  push32((uint32_t)(0x1058f478u));
  /* 10562205 push 1 */
  push32((uint32_t)(0x1u));
  /* 10562207 call dword ptr [0x1059242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059242c))), 0x1056220du);
  /* 1056220d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562210 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562212 call 0x105627f0 */
  push32(0x10562217u); f_105627f0();
L_10562217:;
  /* 10562217 mov esi, esp */
  ESI = (ESP);
  /* 10562219 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1056221b call dword ptr [0x105923f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f4))), 0x10562221u);
  /* 10562221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562226 call 0x105627f0 */
  push32(0x1056222bu); f_105627f0();
  /* 1056222b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562232 je 0x105622ce */
  if (C.zf) goto L_105622ce;
  /* 10562238 mov esi, esp */
  ESI = (ESP);
  /* 1056223a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056223c push 0x1058f480 */
  push32((uint32_t)(0x1058f480u));
  /* 10562241 call dword ptr [0x10592428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592428))), 0x10562247u);
  /* 10562247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056224a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056224c call 0x105627f0 */
  push32(0x10562251u); f_105627f0();
  /* 10562251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562253 jle 0x105622ce */
  if ((C.zf||C.sf!=C.of)) goto L_105622ce;
  /* 10562255 mov esi, esp */
  ESI = (ESP);
  /* 10562257 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562259 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1056225b call dword ptr [0x105923f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f8))), 0x10562261u);
  /* 10562261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562264 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562266 call 0x105627f0 */
  push32(0x1056226bu); f_105627f0();
  /* 1056226b mov esi, esp */
  ESI = (ESP);
  /* 1056226d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056226f push 0x1058f420 */
  push32((uint32_t)(0x1058f420u));
  /* 10562274 call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x1056227au);
  /* 1056227a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056227d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056227f call 0x105627f0 */
  push32(0x10562284u); f_105627f0();
  /* 10562284 mov esi, esp */
  ESI = (ESP);
  /* 10562286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10562288 call dword ptr [0x10592430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592430))), 0x1056228eu);
  /* 1056228e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562293 call 0x105627f0 */
  push32(0x10562298u); f_105627f0();
  /* 10562298 mov esi, esp */
  ESI = (ESP);
  /* 1056229a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056229c push 0x1058f428 */
  push32((uint32_t)(0x1058f428u));
  /* 105622a1 call dword ptr [0x10592404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592404))), 0x105622a7u);
  /* 105622a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105622aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105622ac call 0x105627f0 */
  push32(0x105622b1u); f_105627f0();
  /* 105622b1 mov esi, esp */
  ESI = (ESP);
  /* 105622b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105622b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105622b7 push 0x1058f480 */
  push32((uint32_t)(0x1058f480u));
  /* 105622bc push 1 */
  push32((uint32_t)(0x1u));
  /* 105622be call dword ptr [0x1059242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059242c))), 0x105622c4u);
  /* 105622c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105622c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105622c9 call 0x105627f0 */
  push32(0x105622ceu); f_105627f0();
L_105622ce:;
  /* 105622ce push 0 */
  push32((uint32_t)(0x0u));
  /* 105622d0 push 0x1058f450 */
  push32((uint32_t)(0x1058f450u));
  /* 105622d5 call 0x1056100f */
  push32(0x105622dau); f_1056100f();
  /* 105622da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105622dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105622df jle 0x10562324 */
  if ((C.zf||C.sf!=C.of)) goto L_10562324;
  /* 105622e1 mov esi, esp */
  ESI = (ESP);
  /* 105622e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105622e5 call dword ptr [0x10592434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592434))), 0x105622ebu);
  /* 105622eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105622ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105622f0 call 0x105627f0 */
  push32(0x105622f5u); f_105627f0();
  /* 105622f5 mov esi, esp */
  ESI = (ESP);
  /* 105622f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105622f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105622fb push 0x1058f450 */
  push32((uint32_t)(0x1058f450u));
  /* 10562300 call dword ptr [0x10592438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592438))), 0x10562306u);
  /* 10562306 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056230b call 0x105627f0 */
  push32(0x10562310u); f_105627f0();
  /* 10562310 mov esi, esp */
  ESI = (ESP);
  /* 10562312 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562314 call dword ptr [0x1059243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059243c))), 0x1056231au);
  /* 1056231a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056231d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056231f call 0x105627f0 */
  push32(0x10562324u); f_105627f0();
L_10562324:;
  /* 10562324 pop edi */
  EDI = (pop32());
  /* 10562325 pop esi */
  ESI = (pop32());
  /* 10562326 pop ebx */
  EBX = (pop32());
  /* 10562327 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056232a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056232c call 0x105627f0 */
  push32(0x10562331u); f_105627f0();
  /* 10562331 mov esp, ebp */
  ESP = (EBP);
  /* 10562333 pop ebp */
  EBP = (pop32());
  /* 10562334 ret  */
  ESPCHK(0x10561560u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b0 @ 0x105626b0 (63 bytes, 26 insns) */
void f_105626b0(void) {
  FTRACE(0x105626b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105626b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105626b1 mov ebp, esp */
  EBP = (ESP);
  /* 105626b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105626b6 push ebx */
  push32((uint32_t)(EBX));
  /* 105626b7 push esi */
  push32((uint32_t)(ESI));
  /* 105626b8 push edi */
  push32((uint32_t)(EDI));
  /* 105626b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 105626bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 105626c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 105626c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105626c8 mov esi, esp */
  ESI = (ESP);
  /* 105626ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105626cd push eax */
  push32((uint32_t)(EAX));
  /* 105626ce call dword ptr [0x105923f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923f0))), 0x105626d4u);
  /* 105626d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105626d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105626d9 call 0x105627f0 */
  push32(0x105626deu); f_105627f0();
  /* 105626de pop edi */
  EDI = (pop32());
  /* 105626df pop esi */
  ESI = (pop32());
  /* 105626e0 pop ebx */
  EBX = (pop32());
  /* 105626e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105626e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105626e6 call 0x105627f0 */
  push32(0x105626ebu); f_105627f0();
  /* 105626eb mov esp, ebp */
  ESP = (EBP);
  /* 105626ed pop ebp */
  EBP = (pop32());
  /* 105626ee ret  */
  ESPCHK(0x105626b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10562700 (67 bytes, 28 insns) */
void f_10562700(void) {
  FTRACE(0x10562700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562700 push ebp */
  push32((uint32_t)(EBP));
  /* 10562701 mov ebp, esp */
  EBP = (ESP);
  /* 10562703 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10562706 push ebx */
  push32((uint32_t)(EBX));
  /* 10562707 push esi */
  push32((uint32_t)(ESI));
  /* 10562708 push edi */
  push32((uint32_t)(EDI));
  /* 10562709 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1056270c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10562711 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10562716 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10562718 mov esi, esp */
  ESI = (ESP);
  /* 1056271a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 1056271d push eax */
  push32((uint32_t)(EAX));
  /* 1056271e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562721 push ecx */
  push32((uint32_t)(ECX));
  /* 10562722 call dword ptr [0x105923ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105923ec))), 0x10562728u);
  /* 10562728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056272b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056272d call 0x105627f0 */
  push32(0x10562732u); f_105627f0();
  /* 10562732 pop edi */
  EDI = (pop32());
  /* 10562733 pop esi */
  ESI = (pop32());
  /* 10562734 pop ebx */
  EBX = (pop32());
  /* 10562735 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562738 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056273a call 0x105627f0 */
  push32(0x1056273fu); f_105627f0();
  /* 1056273f mov esp, ebp */
  ESP = (EBP);
  /* 10562741 pop ebp */
  EBP = (pop32());
  /* 10562742 ret  */
  ESPCHK(0x10562700u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x105627f0 (56 bytes, 28 insns) */
void f_105627f0(void) {
  FTRACE(0x105627f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105627f0 jne 0x105627f3 */
  if (!C.zf) goto L_105627f3;
  /* 105627f2 ret  */
  ESPCHK(0x105627f0u, _esp0);
  ESP += 4; return;
L_105627f3:;
  /* 105627f3 push ebp */
  push32((uint32_t)(EBP));
  /* 105627f4 mov ebp, esp */
  EBP = (ESP);
  /* 105627f6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105627f9 push eax */
  push32((uint32_t)(EAX));
  /* 105627fa push edx */
  push32((uint32_t)(EDX));
  /* 105627fb push ebx */
  push32((uint32_t)(EBX));
  /* 105627fc push esi */
  push32((uint32_t)(ESI));
  /* 105627fd push edi */
  push32((uint32_t)(EDI));
  /* 105627fe push 0x1058a254 */
  push32((uint32_t)(0x1058a254u));
  /* 10562803 push 0x1058a250 */
  push32((uint32_t)(0x1058a250u));
  /* 10562808 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1056280a push 0x1058a240 */
  push32((uint32_t)(0x1058a240u));
  /* 1056280f push 1 */
  push32((uint32_t)(0x1u));
  /* 10562811 call 0x10562bc0 */
  push32(0x10562816u); f_10562bc0();
  /* 10562816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562819 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056281c jne 0x1056281f */
  if (!C.zf) goto L_1056281f;
  /* 1056281e int3  */
  x86_unimpl("int3 @ 0x1056281e");
L_1056281f:;
  /* 1056281f pop edi */
  EDI = (pop32());
  /* 10562820 pop esi */
  ESI = (pop32());
  /* 10562821 pop ebx */
  EBX = (pop32());
  /* 10562822 pop edx */
  EDX = (pop32());
  /* 10562823 pop eax */
  EAX = (pop32());
  /* 10562824 mov esp, ebp */
  ESP = (EBP);
  /* 10562826 pop ebp */
  EBP = (pop32());
  /* 10562827 ret  */
  ESPCHK(0x105627f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10562830 (313 bytes, 78 insns) */
void f_10562830(void) {
  FTRACE(0x10562830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562830 push ebp */
  push32((uint32_t)(EBP));
  /* 10562831 mov ebp, esp */
  EBP = (ESP);
  /* 10562833 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562837 jne 0x105628f7 */
  if (!C.zf) goto L_105628f7;
  /* 1056283d call dword ptr [0x105922d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922d4))), 0x10562843u);
  /* 10562843 mov dword ptr [0x1058f518], eax */
  w32((uint32_t)(0x1058f518), (EAX));
  /* 10562848 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056284a call 0x105662f0 */
  push32(0x1056284fu); f_105662f0();
  /* 1056284f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562854 jne 0x1056285d */
  if (!C.zf) goto L_1056285d;
  /* 10562856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10562858 jmp 0x10562965 */
  goto L_10562965;
L_1056285d:;
  /* 1056285d mov eax, dword ptr [0x1058f518] */
  EAX = (r32((uint32_t)(0x1058f518)));
  /* 10562862 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10562865 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056286a mov dword ptr [0x1058f524], eax */
  w32((uint32_t)(0x1058f524), (EAX));
  /* 1056286f mov ecx, dword ptr [0x1058f518] */
  ECX = (r32((uint32_t)(0x1058f518)));
  /* 10562875 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1056287b mov dword ptr [0x1058f520], ecx */
  w32((uint32_t)(0x1058f520), (ECX));
  /* 10562881 mov edx, dword ptr [0x1058f520] */
  EDX = (r32((uint32_t)(0x1058f520)));
  /* 10562887 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1056288a add edx, dword ptr [0x1058f524] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058f524))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10562890 mov dword ptr [0x1058f51c], edx */
  w32((uint32_t)(0x1058f51c), (EDX));
  /* 10562896 mov eax, dword ptr [0x1058f518] */
  EAX = (r32((uint32_t)(0x1058f518)));
  /* 1056289b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1056289e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105628a3 mov dword ptr [0x1058f518], eax */
  w32((uint32_t)(0x1058f518), (EAX));
  /* 105628a8 call 0x10563460 */
  push32(0x105628adu); f_10563460();
  /* 105628ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105628af jne 0x105628bd */
  if (!C.zf) goto L_105628bd;
  /* 105628b1 call 0x10566340 */
  push32(0x105628b6u); f_10566340();
  /* 105628b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105628b8 jmp 0x10562965 */
  goto L_10562965;
L_105628bd:;
  /* 105628bd call dword ptr [0x105922d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922d0))), 0x105628c3u);
  /* 105628c3 mov dword ptr [0x1059106c], eax */
  w32((uint32_t)(0x1059106c), (EAX));
  /* 105628c8 call 0x105660d0 */
  push32(0x105628cdu); f_105660d0();
  /* 105628cd mov dword ptr [0x1058f500], eax */
  w32((uint32_t)(0x1058f500), (EAX));
  /* 105628d2 call 0x10563710 */
  push32(0x105628d7u); f_10563710();
  /* 105628d7 call 0x10565bc0 */
  push32(0x105628dcu); f_10565bc0();
  /* 105628dc call 0x10565a70 */
  push32(0x105628e1u); f_10565a70();
  /* 105628e1 call 0x10563260 */
  push32(0x105628e6u); f_10563260();
  /* 105628e6 mov ecx, dword ptr [0x1058f4fc] */
  ECX = (r32((uint32_t)(0x1058f4fc)));
  /* 105628ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105628ef mov dword ptr [0x1058f4fc], ecx */
  w32((uint32_t)(0x1058f4fc), (ECX));
  /* 105628f5 jmp 0x10562960 */
  goto L_10562960;
L_105628f7:;
  /* 105628f7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105628fb jne 0x10562950 */
  if (!C.zf) goto L_10562950;
  /* 105628fd cmp dword ptr [0x1058f4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562904 jle 0x1056294a */
  if ((C.zf||C.sf!=C.of)) goto L_1056294a;
  /* 10562906 mov edx, dword ptr [0x1058f4fc] */
  EDX = (r32((uint32_t)(0x1058f4fc)));
  /* 1056290c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056290f mov dword ptr [0x1058f4fc], edx */
  w32((uint32_t)(0x1058f4fc), (EDX));
  /* 10562915 cmp dword ptr [0x1058f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056291c jne 0x10562923 */
  if (!C.zf) goto L_10562923;
  /* 1056291e call 0x105632e0 */
  push32(0x10562923u); f_105632e0();
L_10562923:;
  /* 10562923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10562925 call 0x10565010 */
  push32(0x1056292au); f_10565010();
  /* 1056292a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056292d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10562930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562932 je 0x10562939 */
  if (C.zf) goto L_10562939;
  /* 10562934 call 0x10565920 */
  push32(0x10562939u); f_10565920();
L_10562939:;
  /* 10562939 call 0x10563a40 */
  push32(0x1056293eu); f_10563a40();
  /* 1056293e call 0x105634f0 */
  push32(0x10562943u); f_105634f0();
  /* 10562943 call 0x10566340 */
  push32(0x10562948u); f_10566340();
  /* 10562948 jmp 0x1056294e */
  goto L_1056294e;
L_1056294a:;
  /* 1056294a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056294c jmp 0x10562965 */
  goto L_10562965;
L_1056294e:;
  /* 1056294e jmp 0x10562960 */
  goto L_10562960;
L_10562950:;
  /* 10562950 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562954 jne 0x10562960 */
  if (!C.zf) goto L_10562960;
  /* 10562956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562958 call 0x105635e0 */
  push32(0x1056295du); f_105635e0();
  /* 1056295d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562960:;
  /* 10562960 mov eax, 1 */
  EAX = (0x1u);
L_10562965:;
  /* 10562965 pop ebp */
  EBP = (pop32());
  /* 10562966 ret 0xc */
  ESPCHK(0x10562830u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10562970 (243 bytes, 86 insns) */
void f_10562970(void) {
  FTRACE(0x10562970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562970 push ebp */
  push32((uint32_t)(EBP));
  /* 10562971 mov ebp, esp */
  EBP = (ESP);
  /* 10562973 push ecx */
  push32((uint32_t)(ECX));
  /* 10562974 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1056297b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056297f jne 0x10562991 */
  if (!C.zf) goto L_10562991;
  /* 10562981 cmp dword ptr [0x1058f4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562988 jne 0x10562991 */
  if (!C.zf) goto L_10562991;
  /* 1056298a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056298c jmp 0x10562a5d */
  goto L_10562a5d;
L_10562991:;
  /* 10562991 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562995 je 0x1056299d */
  if (C.zf) goto L_1056299d;
  /* 10562997 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056299b jne 0x105629df */
  if (!C.zf) goto L_105629df;
L_1056299d:;
  /* 1056299d cmp dword ptr [0x1059107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1059107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105629a4 je 0x105629bb */
  if (C.zf) goto L_105629bb;
  /* 105629a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105629a9 push eax */
  push32((uint32_t)(EAX));
  /* 105629aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105629ad push ecx */
  push32((uint32_t)(ECX));
  /* 105629ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105629b1 push edx */
  push32((uint32_t)(EDX));
  /* 105629b2 call dword ptr [0x1059107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059107c))), 0x105629b8u);
  /* 105629b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105629bb:;
  /* 105629bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105629bf je 0x105629d5 */
  if (C.zf) goto L_105629d5;
  /* 105629c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105629c4 push eax */
  push32((uint32_t)(EAX));
  /* 105629c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105629c8 push ecx */
  push32((uint32_t)(ECX));
  /* 105629c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105629cc push edx */
  push32((uint32_t)(EDX));
  /* 105629cd call 0x10562830 */
  push32(0x105629d2u); f_10562830();
  /* 105629d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105629d5:;
  /* 105629d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105629d9 jne 0x105629df */
  if (!C.zf) goto L_105629df;
  /* 105629db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105629dd jmp 0x10562a5d */
  goto L_10562a5d;
L_105629df:;
  /* 105629df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105629e2 push eax */
  push32((uint32_t)(EAX));
  /* 105629e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105629e6 push ecx */
  push32((uint32_t)(ECX));
  /* 105629e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105629ea push edx */
  push32((uint32_t)(EDX));
  /* 105629eb call 0x10561014 */
  push32(0x105629f0u); f_10561014();
  /* 105629f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105629f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105629f7 jne 0x10562a0e */
  if (!C.zf) goto L_10562a0e;
  /* 105629f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105629fd jne 0x10562a0e */
  if (!C.zf) goto L_10562a0e;
  /* 105629ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10562a02 push eax */
  push32((uint32_t)(EAX));
  /* 10562a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562a08 push ecx */
  push32((uint32_t)(ECX));
  /* 10562a09 call 0x10562830 */
  push32(0x10562a0eu); f_10562830();
L_10562a0e:;
  /* 10562a0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a12 je 0x10562a1a */
  if (C.zf) goto L_10562a1a;
  /* 10562a14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a18 jne 0x10562a5a */
  if (!C.zf) goto L_10562a5a;
L_10562a1a:;
  /* 10562a1a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10562a1d push edx */
  push32((uint32_t)(EDX));
  /* 10562a1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562a21 push eax */
  push32((uint32_t)(EAX));
  /* 10562a22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562a25 push ecx */
  push32((uint32_t)(ECX));
  /* 10562a26 call 0x10562830 */
  push32(0x10562a2bu); f_10562830();
  /* 10562a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562a2d jne 0x10562a36 */
  if (!C.zf) goto L_10562a36;
  /* 10562a2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10562a36:;
  /* 10562a36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a3a je 0x10562a5a */
  if (C.zf) goto L_10562a5a;
  /* 10562a3c cmp dword ptr [0x1059107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1059107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a43 je 0x10562a5a */
  if (C.zf) goto L_10562a5a;
  /* 10562a45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10562a48 push edx */
  push32((uint32_t)(EDX));
  /* 10562a49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562a4c push eax */
  push32((uint32_t)(EAX));
  /* 10562a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562a50 push ecx */
  push32((uint32_t)(ECX));
  /* 10562a51 call dword ptr [0x1059107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059107c))), 0x10562a57u);
  /* 10562a57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10562a5a:;
  /* 10562a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10562a5d:;
  /* 10562a5d mov esp, ebp */
  ESP = (EBP);
  /* 10562a5f pop ebp */
  EBP = (pop32());
  /* 10562a60 ret 0xc */
  ESPCHK(0x10562970u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10562a70 (58 bytes, 18 insns) */
void f_10562a70(void) {
  FTRACE(0x10562a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10562a71 mov ebp, esp */
  EBP = (ESP);
  /* 10562a73 cmp dword ptr [0x1058f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a7a je 0x10562a8e */
  if (C.zf) goto L_10562a8e;
  /* 10562a7c cmp dword ptr [0x1058f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a83 jne 0x10562a93 */
  if (!C.zf) goto L_10562a93;
  /* 10562a85 cmp dword ptr [0x1058f50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562a8c jne 0x10562a93 */
  if (!C.zf) goto L_10562a93;
L_10562a8e:;
  /* 10562a8e call 0x105663e0 */
  push32(0x10562a93u); f_105663e0();
L_10562a93:;
  /* 10562a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562a96 push eax */
  push32((uint32_t)(EAX));
  /* 10562a97 call 0x10566430 */
  push32(0x10562a9cu); f_10566430();
  /* 10562a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562a9f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10562aa4 call dword ptr [0x1058da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058da30))), 0x10562aaau);
  /* 10562aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562aad pop ebp */
  EBP = (pop32());
  /* 10562aae ret  */
  ESPCHK(0x10562a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab0 @ 0x10562ab0 (11 bytes, 5 insns) */
void f_10562ab0(void) {
  FTRACE(0x10562ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10562ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10562ab3 call dword ptr [0x105922d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922d8))), 0x10562ab9u);
  /* 10562ab9 pop ebp */
  EBP = (pop32());
  /* 10562aba ret  */
  ESPCHK(0x10562ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac0 @ 0x10562ac0 (87 bytes, 30 insns) */
void f_10562ac0(void) {
  FTRACE(0x10562ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10562ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10562ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10562ac4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562ac8 jl 0x10562ad0 */
  if ((C.sf!=C.of)) goto L_10562ad0;
  /* 10562aca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562ace jl 0x10562ad5 */
  if ((C.sf!=C.of)) goto L_10562ad5;
L_10562ad0:;
  /* 10562ad0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562ad3 jmp 0x10562b13 */
  goto L_10562b13;
L_10562ad5:;
  /* 10562ad5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562ad9 jne 0x10562ae7 */
  if (!C.zf) goto L_10562ae7;
  /* 10562adb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562ade mov eax, dword ptr [eax*4 + 0x1058da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1058da38)));
  /* 10562ae5 jmp 0x10562b13 */
  goto L_10562b13;
L_10562ae7:;
  /* 10562ae7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562aea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10562aed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10562aef je 0x10562af6 */
  if (C.zf) goto L_10562af6;
  /* 10562af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562af4 jmp 0x10562b13 */
  goto L_10562b13;
L_10562af6:;
  /* 10562af6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562af9 mov eax, dword ptr [edx*4 + 0x1058da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1058da38)));
  /* 10562b00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10562b03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562b06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562b09 mov dword ptr [ecx*4 + 0x1058da38], edx */
  w32((uint32_t)(ECX*4 + 0x1058da38), (EDX));
  /* 10562b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10562b13:;
  /* 10562b13 mov esp, ebp */
  ESP = (EBP);
  /* 10562b15 pop ebp */
  EBP = (pop32());
  /* 10562b16 ret  */
  ESPCHK(0x10562ac0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10562b20 (126 bytes, 38 insns) */
void f_10562b20(void) {
  FTRACE(0x10562b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10562b21 mov ebp, esp */
  EBP = (ESP);
  /* 10562b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10562b24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562b28 jl 0x10562b30 */
  if ((C.sf!=C.of)) goto L_10562b30;
  /* 10562b2a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562b2e jl 0x10562b37 */
  if ((C.sf!=C.of)) goto L_10562b37;
L_10562b30:;
  /* 10562b30 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10562b35 jmp 0x10562b9a */
  goto L_10562b9a;
L_10562b37:;
  /* 10562b37 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562b3b jne 0x10562b49 */
  if (!C.zf) goto L_10562b49;
  /* 10562b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562b40 mov eax, dword ptr [eax*4 + 0x1058da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1058da44)));
  /* 10562b47 jmp 0x10562b9a */
  goto L_10562b9a;
L_10562b49:;
  /* 10562b49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562b4c mov edx, dword ptr [ecx*4 + 0x1058da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da44)));
  /* 10562b53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10562b56 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562b5a jne 0x10562b70 */
  if (!C.zf) goto L_10562b70;
  /* 10562b5c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10562b5e call dword ptr [0x105922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922dc))), 0x10562b64u);
  /* 10562b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562b67 mov dword ptr [ecx*4 + 0x1058da44], eax */
  w32((uint32_t)(ECX*4 + 0x1058da44), (EAX));
  /* 10562b6e jmp 0x10562b97 */
  goto L_10562b97;
L_10562b70:;
  /* 10562b70 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562b74 jne 0x10562b8a */
  if (!C.zf) goto L_10562b8a;
  /* 10562b76 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10562b78 call dword ptr [0x105922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922dc))), 0x10562b7eu);
  /* 10562b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562b81 mov dword ptr [edx*4 + 0x1058da44], eax */
  w32((uint32_t)(EDX*4 + 0x1058da44), (EAX));
  /* 10562b88 jmp 0x10562b97 */
  goto L_10562b97;
L_10562b8a:;
  /* 10562b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562b8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562b90 mov dword ptr [eax*4 + 0x1058da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1058da44), (ECX));
L_10562b97:;
  /* 10562b97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10562b9a:;
  /* 10562b9a mov esp, ebp */
  ESP = (EBP);
  /* 10562b9c pop ebp */
  EBP = (pop32());
  /* 10562b9d ret  */
  ESPCHK(0x10562b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x10562ba0 (28 bytes, 11 insns) */
void f_10562ba0(void) {
  FTRACE(0x10562ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10562ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10562ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10562ba4 mov eax, dword ptr [0x10591060] */
  EAX = (r32((uint32_t)(0x10591060)));
  /* 10562ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10562bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562baf mov dword ptr [0x10591060], ecx */
  w32((uint32_t)(0x10591060), (ECX));
  /* 10562bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10562bb8 mov esp, ebp */
  ESP = (EBP);
  /* 10562bba pop ebp */
  EBP = (pop32());
  /* 10562bbb ret  */
  ESPCHK(0x10562ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc0 @ 0x10562bc0 (912 bytes, 248 insns) */
void f_10562bc0(void) {
  FTRACE(0x10562bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10562bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10562bc3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10562bc8 call 0x10566ca0 */
  push32(0x10562bcdu); f_10566ca0();
  /* 10562bcd push edi */
  push32((uint32_t)(EDI));
  /* 10562bce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10562bd5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10562bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10562bdc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10562be2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10562be4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10562be6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10562be7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10562bee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10562bf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10562bf5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10562bfb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10562bfd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10562bff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10562c00 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10562c07 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10562c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10562c0e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10562c14 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10562c16 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10562c18 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10562c19 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10562c1c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10562c22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562c26 jl 0x10562c2e */
  if ((C.sf!=C.of)) goto L_10562c2e;
  /* 10562c28 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562c2c jl 0x10562c36 */
  if ((C.sf!=C.of)) goto L_10562c36;
L_10562c2e:;
  /* 10562c2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562c31 jmp 0x10562f4b */
  goto L_10562f4b;
L_10562c36:;
  /* 10562c36 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562c3a jne 0x10562ce0 */
  if (!C.zf) goto L_10562ce0;
  /* 10562c40 push 0x1058da34 */
  push32((uint32_t)(0x1058da34u));
  /* 10562c45 call dword ptr [0x105922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f4))), 0x10562c4bu);
  /* 10562c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562c4d jle 0x10562ce0 */
  if ((C.zf||C.sf!=C.of)) goto L_10562ce0;
  /* 10562c53 cmp dword ptr [0x1058f510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562c5a jne 0x10562c9e */
  if (!C.zf) goto L_10562c9e;
  /* 10562c5c push 0x1058a3fc */
  push32((uint32_t)(0x1058a3fcu));
  /* 10562c61 call dword ptr [0x105922f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f0))), 0x10562c67u);
  /* 10562c67 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10562c6d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562c74 je 0x10562c96 */
  if (C.zf) goto L_10562c96;
  /* 10562c76 push 0x1058a3f0 */
  push32((uint32_t)(0x1058a3f0u));
  /* 10562c7b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10562c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10562c82 call dword ptr [0x105922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922ec))), 0x10562c88u);
  /* 10562c88 mov dword ptr [0x1058f510], eax */
  w32((uint32_t)(0x1058f510), (EAX));
  /* 10562c8d cmp dword ptr [0x1058f510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562c94 jne 0x10562c9e */
  if (!C.zf) goto L_10562c9e;
L_10562c96:;
  /* 10562c96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562c99 jmp 0x10562f4b */
  goto L_10562f4b;
L_10562c9e:;
  /* 10562c9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10562ca1 push edx */
  push32((uint32_t)(EDX));
  /* 10562ca2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562ca5 push eax */
  push32((uint32_t)(EAX));
  /* 10562ca6 push 0x1058a3bc */
  push32((uint32_t)(0x1058a3bcu));
  /* 10562cab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10562cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10562cb2 call dword ptr [0x1058f510] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f510))), 0x10562cb8u);
  /* 10562cb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562cbb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10562cc1 push edx */
  push32((uint32_t)(EDX));
  /* 10562cc2 call dword ptr [0x105922e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e8))), 0x10562cc8u);
  /* 10562cc8 push 0x1058da34 */
  push32((uint32_t)(0x1058da34u));
  /* 10562ccd call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x10562cd3u);
  /* 10562cd3 call 0x10562ab0 */
  push32(0x10562cd8u); f_10562ab0();
  /* 10562cd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10562cdb jmp 0x10562f4b */
  goto L_10562f4b;
L_10562ce0:;
  /* 10562ce0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562ce4 je 0x10562d1d */
  if (C.zf) goto L_10562d1d;
  /* 10562ce6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10562cec push eax */
  push32((uint32_t)(EAX));
  /* 10562ced mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10562cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10562cf1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10562cf6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10562cfc push edx */
  push32((uint32_t)(EDX));
  /* 10562cfd call 0x10566ba0 */
  push32(0x10562d02u); f_10566ba0();
  /* 10562d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562d05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562d07 jge 0x10562d1d */
  if ((C.sf==C.of)) goto L_10562d1d;
  /* 10562d09 push 0x1058a390 */
  push32((uint32_t)(0x1058a390u));
  /* 10562d0e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10562d14 push eax */
  push32((uint32_t)(EAX));
  /* 10562d15 call 0x10566ab0 */
  push32(0x10562d1au); f_10566ab0();
  /* 10562d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562d1d:;
  /* 10562d1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562d21 jne 0x10562d55 */
  if (!C.zf) goto L_10562d55;
  /* 10562d23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562d27 je 0x10562d35 */
  if (C.zf) goto L_10562d35;
  /* 10562d29 mov dword ptr [ebp - 0x3028], 0x1058a37c */
  w32((uint32_t)(EBP + -0x3028), (0x1058a37cu));
  /* 10562d33 jmp 0x10562d3f */
  goto L_10562d3f;
L_10562d35:;
  /* 10562d35 mov dword ptr [ebp - 0x3028], 0x1058a368 */
  w32((uint32_t)(EBP + -0x3028), (0x1058a368u));
L_10562d3f:;
  /* 10562d3f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10562d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10562d46 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10562d4c push edx */
  push32((uint32_t)(EDX));
  /* 10562d4d call 0x10566ab0 */
  push32(0x10562d52u); f_10566ab0();
  /* 10562d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562d55:;
  /* 10562d55 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10562d5b push eax */
  push32((uint32_t)(EAX));
  /* 10562d5c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10562d62 push ecx */
  push32((uint32_t)(ECX));
  /* 10562d63 call 0x10566ac0 */
  push32(0x10562d68u); f_10566ac0();
  /* 10562d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562d6b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562d6f jne 0x10562daa */
  if (!C.zf) goto L_10562daa;
  /* 10562d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562d74 mov eax, dword ptr [edx*4 + 0x1058da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1058da38)));
  /* 10562d7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10562d7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562d80 je 0x10562d96 */
  if (C.zf) goto L_10562d96;
  /* 10562d82 push 0x1058a364 */
  push32((uint32_t)(0x1058a364u));
  /* 10562d87 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10562d8d push ecx */
  push32((uint32_t)(ECX));
  /* 10562d8e call 0x10566ac0 */
  push32(0x10562d93u); f_10566ac0();
  /* 10562d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562d96:;
  /* 10562d96 push 0x1058a360 */
  push32((uint32_t)(0x1058a360u));
  /* 10562d9b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10562da1 push edx */
  push32((uint32_t)(EDX));
  /* 10562da2 call 0x10566ac0 */
  push32(0x10562da7u); f_10566ac0();
  /* 10562da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562daa:;
  /* 10562daa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562dae je 0x10562df2 */
  if (C.zf) goto L_10562df2;
  /* 10562db0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10562db6 push eax */
  push32((uint32_t)(EAX));
  /* 10562db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10562dba push ecx */
  push32((uint32_t)(ECX));
  /* 10562dbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562dbe push edx */
  push32((uint32_t)(EDX));
  /* 10562dbf push 0x1058a354 */
  push32((uint32_t)(0x1058a354u));
  /* 10562dc4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10562dc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10562dcf push eax */
  push32((uint32_t)(EAX));
  /* 10562dd0 call 0x105669b0 */
  push32(0x10562dd5u); f_105669b0();
  /* 10562dd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562dda jge 0x10562df0 */
  if ((C.sf==C.of)) goto L_10562df0;
  /* 10562ddc push 0x1058a390 */
  push32((uint32_t)(0x1058a390u));
  /* 10562de1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10562de7 push ecx */
  push32((uint32_t)(ECX));
  /* 10562de8 call 0x10566ab0 */
  push32(0x10562dedu); f_10566ab0();
  /* 10562ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562df0:;
  /* 10562df0 jmp 0x10562e08 */
  goto L_10562e08;
L_10562df2:;
  /* 10562df2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10562df8 push edx */
  push32((uint32_t)(EDX));
  /* 10562df9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10562dff push eax */
  push32((uint32_t)(EAX));
  /* 10562e00 call 0x10566ab0 */
  push32(0x10562e05u); f_10566ab0();
  /* 10562e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562e08:;
  /* 10562e08 cmp dword ptr [0x10591060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10591060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562e0f je 0x10562e4c */
  if (C.zf) goto L_10562e4c;
  /* 10562e11 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10562e17 push ecx */
  push32((uint32_t)(ECX));
  /* 10562e18 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10562e1e push edx */
  push32((uint32_t)(EDX));
  /* 10562e1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562e22 push eax */
  push32((uint32_t)(EAX));
  /* 10562e23 call dword ptr [0x10591060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10591060))), 0x10562e29u);
  /* 10562e29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562e2e je 0x10562e4c */
  if (C.zf) goto L_10562e4c;
  /* 10562e30 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562e34 jne 0x10562e41 */
  if (!C.zf) goto L_10562e41;
  /* 10562e36 push 0x1058da34 */
  push32((uint32_t)(0x1058da34u));
  /* 10562e3b call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x10562e41u);
L_10562e41:;
  /* 10562e41 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10562e47 jmp 0x10562f4b */
  goto L_10562f4b;
L_10562e4c:;
  /* 10562e4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562e4f mov edx, dword ptr [ecx*4 + 0x1058da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da38)));
  /* 10562e56 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10562e59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10562e5b je 0x10562e9b */
  if (C.zf) goto L_10562e9b;
  /* 10562e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562e60 cmp dword ptr [eax*4 + 0x1058da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1058da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562e68 je 0x10562e9b */
  if (C.zf) goto L_10562e9b;
  /* 10562e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10562e6c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10562e72 push ecx */
  push32((uint32_t)(ECX));
  /* 10562e73 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10562e79 push edx */
  push32((uint32_t)(EDX));
  /* 10562e7a call 0x10566930 */
  push32(0x10562e7fu); f_10566930();
  /* 10562e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562e82 push eax */
  push32((uint32_t)(EAX));
  /* 10562e83 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10562e89 push eax */
  push32((uint32_t)(EAX));
  /* 10562e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562e8d mov edx, dword ptr [ecx*4 + 0x1058da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da44)));
  /* 10562e94 push edx */
  push32((uint32_t)(EDX));
  /* 10562e95 call dword ptr [0x105922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e0))), 0x10562e9bu);
L_10562e9b:;
  /* 10562e9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562e9e mov ecx, dword ptr [eax*4 + 0x1058da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058da38)));
  /* 10562ea5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10562ea8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10562eaa je 0x10562eb9 */
  if (C.zf) goto L_10562eb9;
  /* 10562eac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10562eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10562eb3 call dword ptr [0x105922e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e8))), 0x10562eb9u);
L_10562eb9:;
  /* 10562eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562ebc mov ecx, dword ptr [eax*4 + 0x1058da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058da38)));
  /* 10562ec3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10562ec6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10562ec8 je 0x10562f38 */
  if (C.zf) goto L_10562f38;
  /* 10562eca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562ece je 0x10562eed */
  if (C.zf) goto L_10562eed;
  /* 10562ed0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10562ed2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10562ed8 push edx */
  push32((uint32_t)(EDX));
  /* 10562ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10562edc push eax */
  push32((uint32_t)(EAX));
  /* 10562edd call 0x10566640 */
  push32(0x10562ee2u); f_10566640();
  /* 10562ee2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562ee5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10562eeb jmp 0x10562ef7 */
  goto L_10562ef7;
L_10562eed:;
  /* 10562eed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10562ef7:;
  /* 10562ef7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10562efd push ecx */
  push32((uint32_t)(ECX));
  /* 10562efe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10562f01 push edx */
  push32((uint32_t)(EDX));
  /* 10562f02 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10562f08 push eax */
  push32((uint32_t)(EAX));
  /* 10562f09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10562f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10562f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10562f10 push edx */
  push32((uint32_t)(EDX));
  /* 10562f11 call 0x10562f50 */
  push32(0x10562f16u); f_10562f50();
  /* 10562f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562f19 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10562f1f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562f23 jne 0x10562f30 */
  if (!C.zf) goto L_10562f30;
  /* 10562f25 push 0x1058da34 */
  push32((uint32_t)(0x1058da34u));
  /* 10562f2a call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x10562f30u);
L_10562f30:;
  /* 10562f30 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10562f36 jmp 0x10562f4b */
  goto L_10562f4b;
L_10562f38:;
  /* 10562f38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562f3c jne 0x10562f49 */
  if (!C.zf) goto L_10562f49;
  /* 10562f3e push 0x1058da34 */
  push32((uint32_t)(0x1058da34u));
  /* 10562f43 call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x10562f49u);
L_10562f49:;
  /* 10562f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10562f4b:;
  /* 10562f4b pop edi */
  EDI = (pop32());
  /* 10562f4c mov esp, ebp */
  ESP = (EBP);
  /* 10562f4e pop ebp */
  EBP = (pop32());
  /* 10562f4f ret  */
  ESPCHK(0x10562bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f50 @ 0x10562f50 (780 bytes, 197 insns) */
void f_10562f50(void) {
  FTRACE(0x10562f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10562f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10562f51 mov ebp, esp */
  EBP = (ESP);
  /* 10562f53 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10562f58 call 0x10566ca0 */
  push32(0x10562f5du); f_10566ca0();
L_10562f5d:;
  /* 10562f5d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562f61 jne 0x10562f88 */
  if (!C.zf) goto L_10562f88;
  /* 10562f63 push 0x1058a54c */
  push32((uint32_t)(0x1058a54cu));
  /* 10562f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10562f6a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10562f6f push 0x1058a540 */
  push32((uint32_t)(0x1058a540u));
  /* 10562f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10562f76 call 0x10562bc0 */
  push32(0x10562f7bu); f_10562bc0();
  /* 10562f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562f81 jne 0x10562f88 */
  if (!C.zf) goto L_10562f88;
  /* 10562f83 call 0x10562ab0 */
  push32(0x10562f88u); f_10562ab0();
L_10562f88:;
  /* 10562f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10562f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562f8c jne 0x10562f5d */
  if (!C.zf) goto L_10562f5d;
  /* 10562f8e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10562f93 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10562f99 push ecx */
  push32((uint32_t)(ECX));
  /* 10562f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10562f9c call dword ptr [0x105922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f8))), 0x10562fa2u);
  /* 10562fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10562fa4 jne 0x10562fba */
  if (!C.zf) goto L_10562fba;
  /* 10562fa6 push 0x1058a528 */
  push32((uint32_t)(0x1058a528u));
  /* 10562fab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10562fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10562fb2 call 0x10566ab0 */
  push32(0x10562fb7u); f_10566ab0();
  /* 10562fb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562fba:;
  /* 10562fba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10562fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10562fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10562fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10562fc7 call 0x10566930 */
  push32(0x10562fccu); f_10566930();
  /* 10562fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562fcf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10562fd2 jbe 0x10562ffd */
  if ((C.cf||C.zf)) goto L_10562ffd;
  /* 10562fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10562fd7 push edx */
  push32((uint32_t)(EDX));
  /* 10562fd8 call 0x10566930 */
  push32(0x10562fddu); f_10566930();
  /* 10562fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10562fe0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10562fe3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10562fe7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10562fea push 3 */
  push32((uint32_t)(0x3u));
  /* 10562fec push 0x1058a524 */
  push32((uint32_t)(0x1058a524u));
  /* 10562ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10562ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10562ff5 call 0x10567320 */
  push32(0x10562ffau); f_10567320();
  /* 10562ffa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10562ffd:;
  /* 10562ffd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563000 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10563006 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056300d je 0x10563058 */
  if (C.zf) goto L_10563058;
  /* 1056300f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10563015 push edx */
  push32((uint32_t)(EDX));
  /* 10563016 call 0x10566930 */
  push32(0x1056301bu); f_10566930();
  /* 1056301b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056301e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563021 jbe 0x10563058 */
  if ((C.cf||C.zf)) goto L_10563058;
  /* 10563023 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10563029 push eax */
  push32((uint32_t)(EAX));
  /* 1056302a call 0x10566930 */
  push32(0x1056302fu); f_10566930();
  /* 1056302f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563032 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10563038 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1056303c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10563042 push 3 */
  push32((uint32_t)(0x3u));
  /* 10563044 push 0x1058a524 */
  push32((uint32_t)(0x1058a524u));
  /* 10563049 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1056304f push eax */
  push32((uint32_t)(EAX));
  /* 10563050 call 0x10567320 */
  push32(0x10563055u); f_10567320();
  /* 10563055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10563058:;
  /* 10563058 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056305c jne 0x1056306a */
  if (!C.zf) goto L_1056306a;
  /* 1056305e mov dword ptr [ebp - 0x1114], 0x1058a4b0 */
  w32((uint32_t)(EBP + -0x1114), (0x1058a4b0u));
  /* 10563068 jmp 0x10563074 */
  goto L_10563074;
L_1056306a:;
  /* 1056306a mov dword ptr [ebp - 0x1114], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1114), (0x1058a250u));
L_10563074:;
  /* 10563074 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563077 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056307a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056307c je 0x10563089 */
  if (C.zf) goto L_10563089;
  /* 1056307e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563081 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10563087 jmp 0x10563093 */
  goto L_10563093;
L_10563089:;
  /* 10563089 mov dword ptr [ebp - 0x1118], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1118), (0x1058a250u));
L_10563093:;
  /* 10563093 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563096 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10563099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056309b je 0x105630af */
  if (C.zf) goto L_105630af;
  /* 1056309d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105630a1 jne 0x105630af */
  if (!C.zf) goto L_105630af;
  /* 105630a3 mov dword ptr [ebp - 0x111c], 0x1058a4a0 */
  w32((uint32_t)(EBP + -0x111c), (0x1058a4a0u));
  /* 105630ad jmp 0x105630b9 */
  goto L_105630b9;
L_105630af:;
  /* 105630af mov dword ptr [ebp - 0x111c], 0x1058a250 */
  w32((uint32_t)(EBP + -0x111c), (0x1058a250u));
L_105630b9:;
  /* 105630b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105630bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105630bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105630c1 je 0x105630cf */
  if (C.zf) goto L_105630cf;
  /* 105630c3 mov dword ptr [ebp - 0x1120], 0x1058a49c */
  w32((uint32_t)(EBP + -0x1120), (0x1058a49cu));
  /* 105630cd jmp 0x105630d9 */
  goto L_105630d9;
L_105630cf:;
  /* 105630cf mov dword ptr [ebp - 0x1120], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1120), (0x1058a250u));
L_105630d9:;
  /* 105630d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105630dd je 0x105630ea */
  if (C.zf) goto L_105630ea;
  /* 105630df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105630e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 105630e8 jmp 0x105630f4 */
  goto L_105630f4;
L_105630ea:;
  /* 105630ea mov dword ptr [ebp - 0x1124], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1124), (0x1058a250u));
L_105630f4:;
  /* 105630f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105630f8 je 0x10563106 */
  if (C.zf) goto L_10563106;
  /* 105630fa mov dword ptr [ebp - 0x1128], 0x1058a494 */
  w32((uint32_t)(EBP + -0x1128), (0x1058a494u));
  /* 10563104 jmp 0x10563110 */
  goto L_10563110;
L_10563106:;
  /* 10563106 mov dword ptr [ebp - 0x1128], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1128), (0x1058a250u));
L_10563110:;
  /* 10563110 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563114 je 0x10563121 */
  if (C.zf) goto L_10563121;
  /* 10563116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563119 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1056311f jmp 0x1056312b */
  goto L_1056312b;
L_10563121:;
  /* 10563121 mov dword ptr [ebp - 0x112c], 0x1058a250 */
  w32((uint32_t)(EBP + -0x112c), (0x1058a250u));
L_1056312b:;
  /* 1056312b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056312f je 0x1056313d */
  if (C.zf) goto L_1056313d;
  /* 10563131 mov dword ptr [ebp - 0x1130], 0x1058a48c */
  w32((uint32_t)(EBP + -0x1130), (0x1058a48cu));
  /* 1056313b jmp 0x10563147 */
  goto L_10563147;
L_1056313d:;
  /* 1056313d mov dword ptr [ebp - 0x1130], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1130), (0x1058a250u));
L_10563147:;
  /* 10563147 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056314e je 0x1056315e */
  if (C.zf) goto L_1056315e;
  /* 10563150 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10563156 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1056315c jmp 0x10563168 */
  goto L_10563168;
L_1056315e:;
  /* 1056315e mov dword ptr [ebp - 0x1134], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1134), (0x1058a250u));
L_10563168:;
  /* 10563168 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056316f je 0x1056317d */
  if (C.zf) goto L_1056317d;
  /* 10563171 mov dword ptr [ebp - 0x1138], 0x1058a480 */
  w32((uint32_t)(EBP + -0x1138), (0x1058a480u));
  /* 1056317b jmp 0x10563187 */
  goto L_10563187;
L_1056317d:;
  /* 1056317d mov dword ptr [ebp - 0x1138], 0x1058a250 */
  w32((uint32_t)(EBP + -0x1138), (0x1058a250u));
L_10563187:;
  /* 10563187 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1056318d push edx */
  push32((uint32_t)(EDX));
  /* 1056318e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10563194 push eax */
  push32((uint32_t)(EAX));
  /* 10563195 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1056319b push ecx */
  push32((uint32_t)(ECX));
  /* 1056319c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 105631a2 push edx */
  push32((uint32_t)(EDX));
  /* 105631a3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 105631a9 push eax */
  push32((uint32_t)(EAX));
  /* 105631aa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 105631b0 push ecx */
  push32((uint32_t)(ECX));
  /* 105631b1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 105631b7 push edx */
  push32((uint32_t)(EDX));
  /* 105631b8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 105631be push eax */
  push32((uint32_t)(EAX));
  /* 105631bf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 105631c5 push ecx */
  push32((uint32_t)(ECX));
  /* 105631c6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 105631cc push edx */
  push32((uint32_t)(EDX));
  /* 105631cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105631d0 push eax */
  push32((uint32_t)(EAX));
  /* 105631d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105631d4 mov edx, dword ptr [ecx*4 + 0x1058da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da50)));
  /* 105631db push edx */
  push32((uint32_t)(EDX));
  /* 105631dc push 0x1058a42c */
  push32((uint32_t)(0x1058a42cu));
  /* 105631e1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105631e6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 105631ec push eax */
  push32((uint32_t)(EAX));
  /* 105631ed call 0x105669b0 */
  push32(0x105631f2u); f_105669b0();
  /* 105631f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105631f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105631f7 jge 0x1056320d */
  if ((C.sf==C.of)) goto L_1056320d;
  /* 105631f9 push 0x1058a390 */
  push32((uint32_t)(0x1058a390u));
  /* 105631fe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10563204 push ecx */
  push32((uint32_t)(ECX));
  /* 10563205 call 0x10566ab0 */
  push32(0x1056320au); f_10566ab0();
  /* 1056320a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056320d:;
  /* 1056320d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10563212 push 0x1058a408 */
  push32((uint32_t)(0x1058a408u));
  /* 10563217 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1056321d push edx */
  push32((uint32_t)(EDX));
  /* 1056321e call 0x10567260 */
  push32(0x10563223u); f_10567260();
  /* 10563223 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563226 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1056322c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563233 jne 0x10563246 */
  if (!C.zf) goto L_10563246;
  /* 10563235 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10563237 call 0x10566fa0 */
  push32(0x1056323cu); f_10566fa0();
  /* 1056323c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056323f push 3 */
  push32((uint32_t)(0x3u));
  /* 10563241 call 0x105632c0 */
  push32(0x10563246u); f_105632c0();
L_10563246:;
  /* 10563246 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056324d jne 0x10563256 */
  if (!C.zf) goto L_10563256;
  /* 1056324f mov eax, 1 */
  EAX = (0x1u);
  /* 10563254 jmp 0x10563258 */
  goto L_10563258;
L_10563256:;
  /* 10563256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10563258:;
  /* 10563258 mov esp, ebp */
  ESP = (EBP);
  /* 1056325a pop ebp */
  EBP = (pop32());
  /* 1056325b ret  */
  ESPCHK(0x10562f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003260 @ 0x10563260 (56 bytes, 15 insns) */
void f_10563260(void) {
  FTRACE(0x10563260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563260 push ebp */
  push32((uint32_t)(EBP));
  /* 10563261 mov ebp, esp */
  EBP = (ESP);
  /* 10563263 cmp dword ptr [0x1059105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1059105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056326a je 0x10563272 */
  if (C.zf) goto L_10563272;
  /* 1056326c call dword ptr [0x1059105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059105c))), 0x10563272u);
L_10563272:;
  /* 10563272 push 0x1058d418 */
  push32((uint32_t)(0x1058d418u));
  /* 10563277 push 0x1058d208 */
  push32((uint32_t)(0x1058d208u));
  /* 1056327c call 0x10563430 */
  push32(0x10563281u); f_10563430();
  /* 10563281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563284 push 0x1058d104 */
  push32((uint32_t)(0x1058d104u));
  /* 10563289 push 0x1058d000 */
  push32((uint32_t)(0x1058d000u));
  /* 1056328e call 0x10563430 */
  push32(0x10563293u); f_10563430();
  /* 10563293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563296 pop ebp */
  EBP = (pop32());
  /* 10563297 ret  */
  ESPCHK(0x10563260u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a0 @ 0x105632a0 (21 bytes, 10 insns) */
void f_105632a0(void) {
  FTRACE(0x105632a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105632a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105632a1 mov ebp, esp */
  EBP = (ESP);
  /* 105632a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105632a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105632a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105632aa push eax */
  push32((uint32_t)(EAX));
  /* 105632ab call 0x10563320 */
  push32(0x105632b0u); f_10563320();
  /* 105632b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105632b3 pop ebp */
  EBP = (pop32());
  /* 105632b4 ret  */
  ESPCHK(0x105632a0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x105632c0 (21 bytes, 10 insns) */
void f_105632c0(void) {
  FTRACE(0x105632c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105632c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105632c1 mov ebp, esp */
  EBP = (ESP);
  /* 105632c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105632c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105632c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105632ca push eax */
  push32((uint32_t)(EAX));
  /* 105632cb call 0x10563320 */
  push32(0x105632d0u); f_10563320();
  /* 105632d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105632d3 pop ebp */
  EBP = (pop32());
  /* 105632d4 ret  */
  ESPCHK(0x105632c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x105632e0 (19 bytes, 9 insns) */
void f_105632e0(void) {
  FTRACE(0x105632e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105632e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105632e1 mov ebp, esp */
  EBP = (ESP);
  /* 105632e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105632e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105632e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105632e9 call 0x10563320 */
  push32(0x105632eeu); f_10563320();
  /* 105632ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105632f1 pop ebp */
  EBP = (pop32());
  /* 105632f2 ret  */
  ESPCHK(0x105632e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x10563300 (19 bytes, 9 insns) */
void f_10563300(void) {
  FTRACE(0x10563300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563300 push ebp */
  push32((uint32_t)(EBP));
  /* 10563301 mov ebp, esp */
  EBP = (ESP);
  /* 10563303 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563305 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563307 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563309 call 0x10563320 */
  push32(0x1056330eu); f_10563320();
  /* 1056330e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563311 pop ebp */
  EBP = (pop32());
  /* 10563312 ret  */
  ESPCHK(0x10563300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10563320 (227 bytes, 61 insns) */
void f_10563320(void) {
  FTRACE(0x10563320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563320 push ebp */
  push32((uint32_t)(EBP));
  /* 10563321 mov ebp, esp */
  EBP = (ESP);
  /* 10563323 push ecx */
  push32((uint32_t)(ECX));
  /* 10563324 call 0x10563410 */
  push32(0x10563329u); f_10563410();
  /* 10563329 cmp dword ptr [0x1058f554], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f554))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563330 jne 0x10563343 */
  if (!C.zf) goto L_10563343;
  /* 10563332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563335 push eax */
  push32((uint32_t)(EAX));
  /* 10563336 call dword ptr [0x10592304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592304))), 0x1056333cu);
  /* 1056333c push eax */
  push32((uint32_t)(EAX));
  /* 1056333d call dword ptr [0x10592300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592300))), 0x10563343u);
L_10563343:;
  /* 10563343 mov dword ptr [0x1058f550], 1 */
  w32((uint32_t)(0x1058f550), (0x1u));
  /* 1056334d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10563350 mov byte ptr [0x1058f54c], cl */
  w8((uint32_t)(0x1058f54c), (CL));
  /* 10563356 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056335a jne 0x105633a3 */
  if (!C.zf) goto L_105633a3;
  /* 1056335c cmp dword ptr [0x10591058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10591058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563363 je 0x10563391 */
  if (C.zf) goto L_10563391;
  /* 10563365 mov edx, dword ptr [0x10591054] */
  EDX = (r32((uint32_t)(0x10591054)));
  /* 1056336b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056336e:;
  /* 1056336e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563371 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10563377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056337a cmp ecx, dword ptr [0x10591058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10591058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563380 jb 0x10563391 */
  if (C.cf) goto L_10563391;
  /* 10563382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563385 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563388 je 0x1056338f */
  if (C.zf) goto L_1056338f;
  /* 1056338a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056338d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1056338fu);
L_1056338f:;
  /* 1056338f jmp 0x1056336e */
  goto L_1056336e;
L_10563391:;
  /* 10563391 push 0x1058d724 */
  push32((uint32_t)(0x1058d724u));
  /* 10563396 push 0x1058d51c */
  push32((uint32_t)(0x1058d51cu));
  /* 1056339b call 0x10563430 */
  push32(0x105633a0u); f_10563430();
  /* 105633a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105633a3:;
  /* 105633a3 push 0x1058d92c */
  push32((uint32_t)(0x1058d92cu));
  /* 105633a8 push 0x1058d828 */
  push32((uint32_t)(0x1058d828u));
  /* 105633ad call 0x10563430 */
  push32(0x105633b2u); f_10563430();
  /* 105633b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105633b5 cmp dword ptr [0x1058f558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105633bc jne 0x105633de */
  if (!C.zf) goto L_105633de;
  /* 105633be push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105633c0 call 0x10565010 */
  push32(0x105633c5u); f_10565010();
  /* 105633c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105633c8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 105633cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105633cd je 0x105633de */
  if (C.zf) goto L_105633de;
  /* 105633cf mov dword ptr [0x1058f558], 1 */
  w32((uint32_t)(0x1058f558), (0x1u));
  /* 105633d9 call 0x10565920 */
  push32(0x105633deu); f_10565920();
L_105633de:;
  /* 105633de cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105633e2 je 0x105633eb */
  if (C.zf) goto L_105633eb;
  /* 105633e4 call 0x10563420 */
  push32(0x105633e9u); f_10563420();
  /* 105633e9 jmp 0x105633ff */
  goto L_105633ff;
L_105633eb:;
  /* 105633eb mov dword ptr [0x1058f554], 1 */
  w32((uint32_t)(0x1058f554), (0x1u));
  /* 105633f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105633f8 push ecx */
  push32((uint32_t)(ECX));
  /* 105633f9 call dword ptr [0x105922fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922fc))), 0x105633ffu);
L_105633ff:;
  /* 105633ff mov esp, ebp */
  ESP = (EBP);
  /* 10563401 pop ebp */
  EBP = (pop32());
  /* 10563402 ret  */
  ESPCHK(0x10563320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003410 @ 0x10563410 (15 bytes, 7 insns) */
void f_10563410(void) {
  FTRACE(0x10563410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563410 push ebp */
  push32((uint32_t)(EBP));
  /* 10563411 mov ebp, esp */
  EBP = (ESP);
  /* 10563413 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10563415 call 0x10567500 */
  push32(0x1056341au); f_10567500();
  /* 1056341a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056341d pop ebp */
  EBP = (pop32());
  /* 1056341e ret  */
  ESPCHK(0x10563410u, _esp0);
  ESP += 4; return;
}

/* FUN_10003420 @ 0x10563420 (15 bytes, 7 insns) */
void f_10563420(void) {
  FTRACE(0x10563420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563420 push ebp */
  push32((uint32_t)(EBP));
  /* 10563421 mov ebp, esp */
  EBP = (ESP);
  /* 10563423 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10563425 call 0x105675a0 */
  push32(0x1056342au); f_105675a0();
  /* 1056342a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056342d pop ebp */
  EBP = (pop32());
  /* 1056342e ret  */
  ESPCHK(0x10563420u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10563430 (37 bytes, 16 insns) */
void f_10563430(void) {
  FTRACE(0x10563430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563430 push ebp */
  push32((uint32_t)(EBP));
  /* 10563431 mov ebp, esp */
  EBP = (ESP);
L_10563433:;
  /* 10563433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563436 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563439 jae 0x10563453 */
  if (!C.cf) goto L_10563453;
  /* 1056343b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056343e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563441 je 0x10563448 */
  if (C.zf) goto L_10563448;
  /* 10563443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563446 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10563448u);
L_10563448:;
  /* 10563448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056344b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056344e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10563451 jmp 0x10563433 */
  goto L_10563433;
L_10563453:;
  /* 10563453 pop ebp */
  EBP = (pop32());
  /* 10563454 ret  */
  ESPCHK(0x10563430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003460 @ 0x10563460 (130 bytes, 42 insns) */
void f_10563460(void) {
  FTRACE(0x10563460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563460 push ebp */
  push32((uint32_t)(EBP));
  /* 10563461 mov ebp, esp */
  EBP = (ESP);
  /* 10563463 push ecx */
  push32((uint32_t)(ECX));
  /* 10563464 call 0x10567420 */
  push32(0x10563469u); f_10567420();
  /* 10563469 call dword ptr [0x10592310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592310))), 0x1056346fu);
  /* 1056346f mov dword ptr [0x1058da5c], eax */
  w32((uint32_t)(0x1058da5c), (EAX));
  /* 10563474 cmp dword ptr [0x1058da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1058da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056347b jne 0x10563481 */
  if (!C.zf) goto L_10563481;
  /* 1056347d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056347f jmp 0x105634de */
  goto L_105634de;
L_10563481:;
  /* 10563481 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10563483 push 0x1058a564 */
  push32((uint32_t)(0x1058a564u));
  /* 10563488 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056348a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1056348c push 1 */
  push32((uint32_t)(0x1u));
  /* 1056348e call 0x10563f10 */
  push32(0x10563493u); f_10563f10();
  /* 10563493 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563496 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10563499 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056349d je 0x105634b4 */
  if (C.zf) goto L_105634b4;
  /* 1056349f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105634a2 push eax */
  push32((uint32_t)(EAX));
  /* 105634a3 mov ecx, dword ptr [0x1058da5c] */
  ECX = (r32((uint32_t)(0x1058da5c)));
  /* 105634a9 push ecx */
  push32((uint32_t)(ECX));
  /* 105634aa call dword ptr [0x1059230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059230c))), 0x105634b0u);
  /* 105634b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105634b2 jne 0x105634b8 */
  if (!C.zf) goto L_105634b8;
L_105634b4:;
  /* 105634b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105634b6 jmp 0x105634de */
  goto L_105634de;
L_105634b8:;
  /* 105634b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105634bb push edx */
  push32((uint32_t)(EDX));
  /* 105634bc call 0x10563520 */
  push32(0x105634c1u); f_10563520();
  /* 105634c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105634c4 call dword ptr [0x10592308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592308))), 0x105634cau);
  /* 105634ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105634cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105634cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105634d2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 105634d9 mov eax, 1 */
  EAX = (0x1u);
L_105634de:;
  /* 105634de mov esp, ebp */
  ESP = (EBP);
  /* 105634e0 pop ebp */
  EBP = (pop32());
  /* 105634e1 ret  */
  ESPCHK(0x10563460u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x105634f0 (41 bytes, 11 insns) */
void f_105634f0(void) {
  FTRACE(0x105634f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105634f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105634f1 mov ebp, esp */
  EBP = (ESP);
  /* 105634f3 call 0x10567460 */
  push32(0x105634f8u); f_10567460();
  /* 105634f8 cmp dword ptr [0x1058da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1058da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105634ff je 0x10563517 */
  if (C.zf) goto L_10563517;
  /* 10563501 mov eax, dword ptr [0x1058da5c] */
  EAX = (r32((uint32_t)(0x1058da5c)));
  /* 10563506 push eax */
  push32((uint32_t)(EAX));
  /* 10563507 call dword ptr [0x10592314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592314))), 0x1056350du);
  /* 1056350d mov dword ptr [0x1058da5c], 0xffffffff */
  w32((uint32_t)(0x1058da5c), (0xffffffffu));
L_10563517:;
  /* 10563517 pop ebp */
  EBP = (pop32());
  /* 10563518 ret  */
  ESPCHK(0x105634f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x10563520 (25 bytes, 8 insns) */
void f_10563520(void) {
  FTRACE(0x10563520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563520 push ebp */
  push32((uint32_t)(EBP));
  /* 10563521 mov ebp, esp */
  EBP = (ESP);
  /* 10563523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563526 mov dword ptr [eax + 0x50], 0x1058dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1058dc00u));
  /* 1056352d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563530 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10563537 pop ebp */
  EBP = (pop32());
  /* 10563538 ret  */
  ESPCHK(0x10563520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x10563540 (152 bytes, 48 insns) */
void f_10563540(void) {
  FTRACE(0x10563540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563540 push ebp */
  push32((uint32_t)(EBP));
  /* 10563541 mov ebp, esp */
  EBP = (ESP);
  /* 10563543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563546 call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x1056354cu);
  /* 1056354c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056354f mov eax, dword ptr [0x1058da5c] */
  EAX = (r32((uint32_t)(0x1058da5c)));
  /* 10563554 push eax */
  push32((uint32_t)(EAX));
  /* 10563555 call dword ptr [0x1059231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059231c))), 0x1056355bu);
  /* 1056355b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056355e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563562 jne 0x105635c7 */
  if (!C.zf) goto L_105635c7;
  /* 10563564 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10563569 push 0x1058a564 */
  push32((uint32_t)(0x1058a564u));
  /* 1056356e push 2 */
  push32((uint32_t)(0x2u));
  /* 10563570 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10563572 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563574 call 0x10563f10 */
  push32(0x10563579u); f_10563f10();
  /* 10563579 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056357c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056357f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563583 je 0x105635bd */
  if (C.zf) goto L_105635bd;
  /* 10563585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563588 push ecx */
  push32((uint32_t)(ECX));
  /* 10563589 mov edx, dword ptr [0x1058da5c] */
  EDX = (r32((uint32_t)(0x1058da5c)));
  /* 1056358f push edx */
  push32((uint32_t)(EDX));
  /* 10563590 call dword ptr [0x1059230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059230c))), 0x10563596u);
  /* 10563596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10563598 je 0x105635bd */
  if (C.zf) goto L_105635bd;
  /* 1056359a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056359d push eax */
  push32((uint32_t)(EAX));
  /* 1056359e call 0x10563520 */
  push32(0x105635a3u); f_10563520();
  /* 105635a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105635a6 call dword ptr [0x10592308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592308))), 0x105635acu);
  /* 105635ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105635af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105635b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105635b4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 105635bb jmp 0x105635c7 */
  goto L_105635c7;
L_105635bd:;
  /* 105635bd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105635bf call 0x10562a70 */
  push32(0x105635c4u); f_10562a70();
  /* 105635c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105635c7:;
  /* 105635c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105635ca push eax */
  push32((uint32_t)(EAX));
  /* 105635cb call dword ptr [0x10592318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592318))), 0x105635d1u);
  /* 105635d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105635d4 mov esp, ebp */
  ESP = (EBP);
  /* 105635d6 pop ebp */
  EBP = (pop32());
  /* 105635d7 ret  */
  ESPCHK(0x10563540u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x105635e0 (263 bytes, 86 insns) */
void f_105635e0(void) {
  FTRACE(0x105635e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105635e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105635e1 mov ebp, esp */
  EBP = (ESP);
  /* 105635e3 cmp dword ptr [0x1058da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1058da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105635ea je 0x105636e5 */
  if (C.zf) goto L_105636e5;
  /* 105635f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105635f4 jne 0x10563605 */
  if (!C.zf) goto L_10563605;
  /* 105635f6 mov eax, dword ptr [0x1058da5c] */
  EAX = (r32((uint32_t)(0x1058da5c)));
  /* 105635fb push eax */
  push32((uint32_t)(EAX));
  /* 105635fc call dword ptr [0x1059231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059231c))), 0x10563602u);
  /* 10563602 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10563605:;
  /* 10563605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563609 je 0x105636d6 */
  if (C.zf) goto L_105636d6;
  /* 1056360f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563612 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563616 je 0x10563629 */
  if (C.zf) goto L_10563629;
  /* 10563618 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056361a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056361d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10563620 push eax */
  push32((uint32_t)(EAX));
  /* 10563621 call 0x10564590 */
  push32(0x10563626u); f_10564590();
  /* 10563626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10563629:;
  /* 10563629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056362c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563630 je 0x10563643 */
  if (C.zf) goto L_10563643;
  /* 10563632 push 2 */
  push32((uint32_t)(0x2u));
  /* 10563634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563637 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1056363a push eax */
  push32((uint32_t)(EAX));
  /* 1056363b call 0x10564590 */
  push32(0x10563640u); f_10564590();
  /* 10563640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10563643:;
  /* 10563643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563646 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056364a je 0x1056365d */
  if (C.zf) goto L_1056365d;
  /* 1056364c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056364e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563651 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10563654 push eax */
  push32((uint32_t)(EAX));
  /* 10563655 call 0x10564590 */
  push32(0x1056365au); f_10564590();
  /* 1056365a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056365d:;
  /* 1056365d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563660 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563664 je 0x10563677 */
  if (C.zf) goto L_10563677;
  /* 10563666 push 2 */
  push32((uint32_t)(0x2u));
  /* 10563668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056366b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1056366e push eax */
  push32((uint32_t)(EAX));
  /* 1056366f call 0x10564590 */
  push32(0x10563674u); f_10564590();
  /* 10563674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10563677:;
  /* 10563677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056367a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056367e je 0x10563691 */
  if (C.zf) goto L_10563691;
  /* 10563680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10563682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563685 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10563688 push eax */
  push32((uint32_t)(EAX));
  /* 10563689 call 0x10564590 */
  push32(0x1056368eu); f_10564590();
  /* 1056368e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10563691:;
  /* 10563691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563694 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563698 je 0x105636ab */
  if (C.zf) goto L_105636ab;
  /* 1056369a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056369c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056369f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 105636a2 push eax */
  push32((uint32_t)(EAX));
  /* 105636a3 call 0x10564590 */
  push32(0x105636a8u); f_10564590();
  /* 105636a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105636ab:;
  /* 105636ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105636ae cmp dword ptr [ecx + 0x50], 0x1058dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1058dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105636b5 je 0x105636c8 */
  if (C.zf) goto L_105636c8;
  /* 105636b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105636b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105636bc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 105636bf push eax */
  push32((uint32_t)(EAX));
  /* 105636c0 call 0x10564590 */
  push32(0x105636c5u); f_10564590();
  /* 105636c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105636c8:;
  /* 105636c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105636ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105636cd push ecx */
  push32((uint32_t)(ECX));
  /* 105636ce call 0x10564590 */
  push32(0x105636d3u); f_10564590();
  /* 105636d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105636d6:;
  /* 105636d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105636d8 mov edx, dword ptr [0x1058da5c] */
  EDX = (r32((uint32_t)(0x1058da5c)));
  /* 105636de push edx */
  push32((uint32_t)(EDX));
  /* 105636df call dword ptr [0x1059230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059230c))), 0x105636e5u);
L_105636e5:;
  /* 105636e5 pop ebp */
  EBP = (pop32());
  /* 105636e6 ret  */
  ESPCHK(0x105635e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f0 @ 0x105636f0 (11 bytes, 5 insns) */
void f_105636f0(void) {
  FTRACE(0x105636f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105636f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105636f1 mov ebp, esp */
  EBP = (ESP);
  /* 105636f3 call dword ptr [0x10592308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592308))), 0x105636f9u);
  /* 105636f9 pop ebp */
  EBP = (pop32());
  /* 105636fa ret  */
  ESPCHK(0x105636f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003700 @ 0x10563700 (11 bytes, 5 insns) */
void f_10563700(void) {
  FTRACE(0x10563700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563700 push ebp */
  push32((uint32_t)(EBP));
  /* 10563701 mov ebp, esp */
  EBP = (ESP);
  /* 10563703 call dword ptr [0x10592324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592324))), 0x10563709u);
  /* 10563709 pop ebp */
  EBP = (pop32());
  /* 1056370a ret  */
  ESPCHK(0x10563700u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x10563710 (804 bytes, 236 insns) */
void f_10563710(void) {
  FTRACE(0x10563710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563710 push ebp */
  push32((uint32_t)(EBP));
  /* 10563711 mov ebp, esp */
  EBP = (ESP);
  /* 10563713 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563716 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1056371b push 0x1058a570 */
  push32((uint32_t)(0x1058a570u));
  /* 10563720 push 2 */
  push32((uint32_t)(0x2u));
  /* 10563722 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10563727 call 0x10563b00 */
  push32(0x1056372cu); f_10563b00();
  /* 1056372c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056372f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10563732 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563736 jne 0x10563742 */
  if (!C.zf) goto L_10563742;
  /* 10563738 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1056373a call 0x10562a70 */
  push32(0x1056373fu); f_10562a70();
  /* 1056373f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10563742:;
  /* 10563742 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563745 mov dword ptr [0x10590f00], eax */
  w32((uint32_t)(0x10590f00), (EAX));
  /* 1056374a mov dword ptr [0x1059103c], 0x20 */
  w32((uint32_t)(0x1059103c), (0x20u));
  /* 10563754 jmp 0x1056375f */
  goto L_1056375f;
L_10563756:;
  /* 10563756 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563759 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056375c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1056375f:;
  /* 1056375f mov edx, dword ptr [0x10590f00] */
  EDX = (r32((uint32_t)(0x10590f00)));
  /* 10563765 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056376b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056376e jae 0x10563793 */
  if (!C.cf) goto L_10563793;
  /* 10563770 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563773 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10563777 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056377a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10563780 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563783 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10563787 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056378a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10563791 jmp 0x10563756 */
  goto L_10563756;
L_10563793:;
  /* 10563793 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10563796 push ecx */
  push32((uint32_t)(ECX));
  /* 10563797 call dword ptr [0x10592330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592330))), 0x1056379du);
  /* 1056379d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 105637a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105637a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105637a8 je 0x10563935 */
  if (C.zf) goto L_10563935;
  /* 105637ae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105637b2 je 0x10563935 */
  if (C.zf) goto L_10563935;
  /* 105637b8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105637bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105637bd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 105637c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105637c3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105637c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105637c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105637cc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105637cf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 105637d2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105637d9 jge 0x105637e3 */
  if ((C.sf==C.of)) goto L_105637e3;
  /* 105637db mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 105637de mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 105637e1 jmp 0x105637ea */
  goto L_105637ea;
L_105637e3:;
  /* 105637e3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_105637ea:;
  /* 105637ea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 105637ed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 105637f0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 105637f7 jmp 0x10563802 */
  goto L_10563802;
L_105637f9:;
  /* 105637f9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 105637fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105637ff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10563802:;
  /* 10563802 mov ecx, dword ptr [0x1059103c] */
  ECX = (r32((uint32_t)(0x1059103c)));
  /* 10563808 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056380b jge 0x105638a2 */
  if ((C.sf==C.of)) goto L_105638a2;
  /* 10563811 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10563816 push 0x1058a570 */
  push32((uint32_t)(0x1058a570u));
  /* 1056381b push 2 */
  push32((uint32_t)(0x2u));
  /* 1056381d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10563822 call 0x10563b00 */
  push32(0x10563827u); f_10563b00();
  /* 10563827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056382a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1056382d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563831 jne 0x1056383e */
  if (!C.zf) goto L_1056383e;
  /* 10563833 mov edx, dword ptr [0x1059103c] */
  EDX = (r32((uint32_t)(0x1059103c)));
  /* 10563839 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1056383c jmp 0x105638a2 */
  goto L_105638a2;
L_1056383e:;
  /* 1056383e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10563841 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563844 mov dword ptr [eax*4 + 0x10590f00], ecx */
  w32((uint32_t)(EAX*4 + 0x10590f00), (ECX));
  /* 1056384b mov edx, dword ptr [0x1059103c] */
  EDX = (r32((uint32_t)(0x1059103c)));
  /* 10563851 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563854 mov dword ptr [0x1059103c], edx */
  w32((uint32_t)(0x1059103c), (EDX));
  /* 1056385a jmp 0x10563865 */
  goto L_10563865;
L_1056385c:;
  /* 1056385c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056385f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563862 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10563865:;
  /* 10563865 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10563868 mov edx, dword ptr [ecx*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056386f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563875 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563878 jae 0x1056389d */
  if (!C.cf) goto L_1056389d;
  /* 1056387a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056387d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10563881 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563884 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1056388a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056388d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10563891 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563894 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1056389b jmp 0x1056385c */
  goto L_1056385c;
L_1056389d:;
  /* 1056389d jmp 0x105637f9 */
  goto L_105637f9;
L_105638a2:;
  /* 105638a2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 105638a9 jmp 0x105638c6 */
  goto L_105638c6;
L_105638ab:;
  /* 105638ab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105638ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105638b1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 105638b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105638b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105638ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105638bd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 105638c0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105638c3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_105638c6:;
  /* 105638c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105638c9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105638cc jge 0x10563935 */
  if ((C.sf==C.of)) goto L_10563935;
  /* 105638ce mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 105638d1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105638d4 je 0x10563930 */
  if (C.zf) goto L_10563930;
  /* 105638d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105638d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105638dc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105638df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105638e1 je 0x10563930 */
  if (C.zf) goto L_10563930;
  /* 105638e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105638e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105638e9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 105638ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105638ee jne 0x10563900 */
  if (!C.zf) goto L_10563900;
  /* 105638f0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 105638f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105638f5 push edx */
  push32((uint32_t)(EDX));
  /* 105638f6 call dword ptr [0x10592268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592268))), 0x105638fcu);
  /* 105638fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105638fe je 0x10563930 */
  if (C.zf) goto L_10563930;
L_10563900:;
  /* 10563900 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10563903 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10563906 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10563909 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056390c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056390f mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 10563916 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563918 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1056391b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056391e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10563921 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10563923 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10563925 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056392b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1056392d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10563930:;
  /* 10563930 jmp 0x105638ab */
  goto L_105638ab;
L_10563935:;
  /* 10563935 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1056393c jmp 0x10563947 */
  goto L_10563947;
L_1056393e:;
  /* 1056393e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10563941 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563944 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10563947:;
  /* 10563947 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056394b jge 0x10563a24 */
  if ((C.sf==C.of)) goto L_10563a24;
  /* 10563951 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10563954 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10563957 mov edx, dword ptr [0x10590f00] */
  EDX = (r32((uint32_t)(0x10590f00)));
  /* 1056395d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056395f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10563962 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563965 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563968 jne 0x10563a10 */
  if (!C.zf) goto L_10563a10;
  /* 1056396e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563971 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10563975 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563979 jne 0x10563984 */
  if (!C.zf) goto L_10563984;
  /* 1056397b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10563982 jmp 0x10563994 */
  goto L_10563994;
L_10563984:;
  /* 10563984 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10563987 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056398a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056398c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056398e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563991 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10563994:;
  /* 10563994 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10563997 push eax */
  push32((uint32_t)(EAX));
  /* 10563998 call dword ptr [0x105922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922dc))), 0x1056399eu);
  /* 1056399e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 105639a1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105639a5 je 0x105639ff */
  if (C.zf) goto L_105639ff;
  /* 105639a7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105639aa push ecx */
  push32((uint32_t)(ECX));
  /* 105639ab call dword ptr [0x10592268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592268))), 0x105639b1u);
  /* 105639b1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 105639b4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105639b8 je 0x105639ff */
  if (C.zf) goto L_105639ff;
  /* 105639ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105639bd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105639c0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105639c2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 105639c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105639cb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105639ce jne 0x105639e0 */
  if (!C.zf) goto L_105639e0;
  /* 105639d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105639d3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105639d6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 105639d8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105639db mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 105639de jmp 0x105639fd */
  goto L_105639fd;
L_105639e0:;
  /* 105639e0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 105639e3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105639e9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105639ec jne 0x105639fd */
  if (!C.zf) goto L_105639fd;
  /* 105639ee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105639f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105639f4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 105639f7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105639fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_105639fd:;
  /* 105639fd jmp 0x10563a0e */
  goto L_10563a0e;
L_105639ff:;
  /* 105639ff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563a02 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10563a05 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10563a08 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563a0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10563a0e:;
  /* 10563a0e jmp 0x10563a1f */
  goto L_10563a1f;
L_10563a10:;
  /* 10563a10 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563a13 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10563a16 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10563a19 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10563a1c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10563a1f:;
  /* 10563a1f jmp 0x1056393e */
  goto L_1056393e;
L_10563a24:;
  /* 10563a24 mov eax, dword ptr [0x1059103c] */
  EAX = (r32((uint32_t)(0x1059103c)));
  /* 10563a29 push eax */
  push32((uint32_t)(EAX));
  /* 10563a2a call dword ptr [0x1059226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059226c))), 0x10563a30u);
  /* 10563a30 mov esp, ebp */
  ESP = (EBP);
  /* 10563a32 pop ebp */
  EBP = (pop32());
  /* 10563a33 ret  */
  ESPCHK(0x10563710u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10563a40 (155 bytes, 45 insns) */
void f_10563a40(void) {
  FTRACE(0x10563a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10563a41 mov ebp, esp */
  EBP = (ESP);
  /* 10563a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10563a4d jmp 0x10563a58 */
  goto L_10563a58;
L_10563a4f:;
  /* 10563a4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563a52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563a55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10563a58:;
  /* 10563a58 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563a5c jge 0x10563ad7 */
  if ((C.sf==C.of)) goto L_10563ad7;
  /* 10563a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563a61 cmp dword ptr [ecx*4 + 0x10590f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10590f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563a69 je 0x10563ad2 */
  if (C.zf) goto L_10563ad2;
  /* 10563a6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563a6e mov eax, dword ptr [edx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 10563a75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10563a78 jmp 0x10563a83 */
  goto L_10563a83;
L_10563a7a:;
  /* 10563a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563a7d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563a80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10563a83:;
  /* 10563a83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563a86 mov eax, dword ptr [edx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 10563a8d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563a92 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563a95 jae 0x10563aaf */
  if (!C.cf) goto L_10563aaf;
  /* 10563a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563a9a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563a9e je 0x10563aad */
  if (C.zf) goto L_10563aad;
  /* 10563aa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563aa3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563aa6 push edx */
  push32((uint32_t)(EDX));
  /* 10563aa7 call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x10563aadu);
L_10563aad:;
  /* 10563aad jmp 0x10563a7a */
  goto L_10563a7a;
L_10563aaf:;
  /* 10563aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10563ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563ab4 mov ecx, dword ptr [eax*4 + 0x10590f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 10563abb push ecx */
  push32((uint32_t)(ECX));
  /* 10563abc call 0x10564590 */
  push32(0x10563ac1u); f_10564590();
  /* 10563ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ac4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563ac7 mov dword ptr [edx*4 + 0x10590f00], 0 */
  w32((uint32_t)(EDX*4 + 0x10590f00), (0x0u));
L_10563ad2:;
  /* 10563ad2 jmp 0x10563a4f */
  goto L_10563a4f;
L_10563ad7:;
  /* 10563ad7 mov esp, ebp */
  ESP = (EBP);
  /* 10563ad9 pop ebp */
  EBP = (pop32());
  /* 10563ada ret  */
  ESPCHK(0x10563a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x10563ae0 (29 bytes, 13 insns) */
void f_10563ae0(void) {
  FTRACE(0x10563ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10563ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10563ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563ae9 mov eax, dword ptr [0x1058f700] */
  EAX = (r32((uint32_t)(0x1058f700)));
  /* 10563aee push eax */
  push32((uint32_t)(EAX));
  /* 10563aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563af2 push ecx */
  push32((uint32_t)(ECX));
  /* 10563af3 call 0x10563b50 */
  push32(0x10563af8u); f_10563b50();
  /* 10563af8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563afb pop ebp */
  EBP = (pop32());
  /* 10563afc ret  */
  ESPCHK(0x10563ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b00 @ 0x10563b00 (35 bytes, 16 insns) */
void f_10563b00(void) {
  FTRACE(0x10563b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10563b01 mov ebp, esp */
  EBP = (ESP);
  /* 10563b03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563b06 push eax */
  push32((uint32_t)(EAX));
  /* 10563b07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563b0a push ecx */
  push32((uint32_t)(ECX));
  /* 10563b0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563b0e push edx */
  push32((uint32_t)(EDX));
  /* 10563b0f mov eax, dword ptr [0x1058f700] */
  EAX = (r32((uint32_t)(0x1058f700)));
  /* 10563b14 push eax */
  push32((uint32_t)(EAX));
  /* 10563b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563b18 push ecx */
  push32((uint32_t)(ECX));
  /* 10563b19 call 0x10563b50 */
  push32(0x10563b1eu); f_10563b50();
  /* 10563b1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563b21 pop ebp */
  EBP = (pop32());
  /* 10563b22 ret  */
  ESPCHK(0x10563b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10563b30 (27 bytes, 13 insns) */
void f_10563b30(void) {
  FTRACE(0x10563b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10563b31 mov ebp, esp */
  EBP = (ESP);
  /* 10563b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563b3c push eax */
  push32((uint32_t)(EAX));
  /* 10563b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10563b41 call 0x10563b50 */
  push32(0x10563b46u); f_10563b50();
  /* 10563b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563b49 pop ebp */
  EBP = (pop32());
  /* 10563b4a ret  */
  ESPCHK(0x10563b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x10563b50 (94 bytes, 38 insns) */
void f_10563b50(void) {
  FTRACE(0x10563b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10563b51 mov ebp, esp */
  EBP = (ESP);
  /* 10563b53 push ecx */
  push32((uint32_t)(ECX));
L_10563b54:;
  /* 10563b54 push 9 */
  push32((uint32_t)(0x9u));
  /* 10563b56 call 0x10567500 */
  push32(0x10563b5bu); f_10567500();
  /* 10563b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563b5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563b61 push eax */
  push32((uint32_t)(EAX));
  /* 10563b62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10563b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563b69 push edx */
  push32((uint32_t)(EDX));
  /* 10563b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563b6d push eax */
  push32((uint32_t)(EAX));
  /* 10563b6e call 0x10563bd0 */
  push32(0x10563b73u); f_10563bd0();
  /* 10563b73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563b76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10563b79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10563b7b call 0x105675a0 */
  push32(0x10563b80u); f_105675a0();
  /* 10563b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563b83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563b87 jne 0x10563b8f */
  if (!C.zf) goto L_10563b8f;
  /* 10563b89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563b8d jne 0x10563b94 */
  if (!C.zf) goto L_10563b94;
L_10563b8f:;
  /* 10563b8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563b92 jmp 0x10563baa */
  goto L_10563baa;
L_10563b94:;
  /* 10563b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563b97 push ecx */
  push32((uint32_t)(ECX));
  /* 10563b98 call 0x10567840 */
  push32(0x10563b9du); f_10567840();
  /* 10563b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10563ba2 jne 0x10563ba8 */
  if (!C.zf) goto L_10563ba8;
  /* 10563ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10563ba6 jmp 0x10563baa */
  goto L_10563baa;
L_10563ba8:;
  /* 10563ba8 jmp 0x10563b54 */
  goto L_10563b54;
L_10563baa:;
  /* 10563baa mov esp, ebp */
  ESP = (EBP);
  /* 10563bac pop ebp */
  EBP = (pop32());
  /* 10563bad ret  */
  ESPCHK(0x10563b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x10563bb0 (23 bytes, 11 insns) */
void f_10563bb0(void) {
  FTRACE(0x10563bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10563bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10563bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563bbc push eax */
  push32((uint32_t)(EAX));
  /* 10563bbd call 0x10563bd0 */
  push32(0x10563bc2u); f_10563bd0();
  /* 10563bc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563bc5 pop ebp */
  EBP = (pop32());
  /* 10563bc6 ret  */
  ESPCHK(0x10563bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x10563bd0 (787 bytes, 254 insns) */
void f_10563bd0(void) {
  FTRACE(0x10563bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10563bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10563bd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10563bd7 push esi */
  push32((uint32_t)(ESI));
  /* 10563bd8 push edi */
  push32((uint32_t)(EDI));
  /* 10563bd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10563be0 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 10563be5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10563be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10563bea je 0x10563c1c */
  if (C.zf) goto L_10563c1c;
L_10563bec:;
  /* 10563bec call 0x10564ca0 */
  push32(0x10563bf1u); f_10564ca0();
  /* 10563bf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10563bf3 jne 0x10563c16 */
  if (!C.zf) goto L_10563c16;
  /* 10563bf5 push 0x1058a664 */
  push32((uint32_t)(0x1058a664u));
  /* 10563bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10563bfc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10563c01 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10563c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10563c08 call 0x10562bc0 */
  push32(0x10563c0du); f_10562bc0();
  /* 10563c0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563c10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563c13 jne 0x10563c16 */
  if (!C.zf) goto L_10563c16;
  /* 10563c15 int3  */
  x86_unimpl("int3 @ 0x10563c15");
L_10563c16:;
  /* 10563c16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10563c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10563c1a jne 0x10563bec */
  if (!C.zf) goto L_10563bec;
L_10563c1c:;
  /* 10563c1c mov edx, dword ptr [0x1058da88] */
  EDX = (r32((uint32_t)(0x1058da88)));
  /* 10563c22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10563c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563c28 cmp eax, dword ptr [0x1058da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563c2e jne 0x10563c31 */
  if (!C.zf) goto L_10563c31;
  /* 10563c30 int3  */
  x86_unimpl("int3 @ 0x10563c30");
L_10563c31:;
  /* 10563c31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10563c35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563c38 push edx */
  push32((uint32_t)(EDX));
  /* 10563c39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563c3c push eax */
  push32((uint32_t)(EAX));
  /* 10563c3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563c40 push ecx */
  push32((uint32_t)(ECX));
  /* 10563c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563c44 push edx */
  push32((uint32_t)(EDX));
  /* 10563c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563c49 call dword ptr [0x1058dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058dc90))), 0x10563c4fu);
  /* 10563c4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10563c54 jne 0x10563cb4 */
  if (!C.zf) goto L_10563cb4;
  /* 10563c56 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563c5a je 0x10563c87 */
  if (C.zf) goto L_10563c87;
L_10563c5c:;
  /* 10563c5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563c5f push eax */
  push32((uint32_t)(EAX));
  /* 10563c60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10563c64 push 0x1058a620 */
  push32((uint32_t)(0x1058a620u));
  /* 10563c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c71 call 0x10562bc0 */
  push32(0x10563c76u); f_10562bc0();
  /* 10563c76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563c7c jne 0x10563c7f */
  if (!C.zf) goto L_10563c7f;
  /* 10563c7e int3  */
  x86_unimpl("int3 @ 0x10563c7e");
L_10563c7f:;
  /* 10563c7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10563c81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10563c83 jne 0x10563c5c */
  if (!C.zf) goto L_10563c5c;
  /* 10563c85 jmp 0x10563cad */
  goto L_10563cad;
L_10563c87:;
  /* 10563c87 push 0x1058a5fc */
  push32((uint32_t)(0x1058a5fcu));
  /* 10563c8c push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10563c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563c99 call 0x10562bc0 */
  push32(0x10563c9eu); f_10562bc0();
  /* 10563c9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563ca4 jne 0x10563ca7 */
  if (!C.zf) goto L_10563ca7;
  /* 10563ca6 int3  */
  x86_unimpl("int3 @ 0x10563ca6");
L_10563ca7:;
  /* 10563ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10563ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10563cab jne 0x10563c87 */
  if (!C.zf) goto L_10563c87;
L_10563cad:;
  /* 10563cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10563caf jmp 0x10563edc */
  goto L_10563edc;
L_10563cb4:;
  /* 10563cb4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563cb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10563cbd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563cc0 je 0x10563cd6 */
  if (C.zf) goto L_10563cd6;
  /* 10563cc2 mov edx, dword ptr [0x1058da84] */
  EDX = (r32((uint32_t)(0x1058da84)));
  /* 10563cc8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10563ccb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10563ccd jne 0x10563cd6 */
  if (!C.zf) goto L_10563cd6;
  /* 10563ccf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10563cd6:;
  /* 10563cd6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563cda ja 0x10563ce7 */
  if ((!C.cf&&!C.zf)) goto L_10563ce7;
  /* 10563cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563cdf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ce2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563ce5 jbe 0x10563d13 */
  if ((C.cf||C.zf)) goto L_10563d13;
L_10563ce7:;
  /* 10563ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563cea push ecx */
  push32((uint32_t)(ECX));
  /* 10563ceb push 0x1058a5d4 */
  push32((uint32_t)(0x1058a5d4u));
  /* 10563cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563cf8 call 0x10562bc0 */
  push32(0x10563cfdu); f_10562bc0();
  /* 10563cfd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d03 jne 0x10563d06 */
  if (!C.zf) goto L_10563d06;
  /* 10563d05 int3  */
  x86_unimpl("int3 @ 0x10563d05");
L_10563d06:;
  /* 10563d06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10563d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10563d0a jne 0x10563ce7 */
  if (!C.zf) goto L_10563ce7;
  /* 10563d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10563d0e jmp 0x10563edc */
  goto L_10563edc;
L_10563d13:;
  /* 10563d13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563d16 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10563d1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d1e je 0x10563d60 */
  if (C.zf) goto L_10563d60;
  /* 10563d20 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d24 je 0x10563d60 */
  if (C.zf) goto L_10563d60;
  /* 10563d26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563d29 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10563d2f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d32 je 0x10563d60 */
  if (C.zf) goto L_10563d60;
  /* 10563d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d38 je 0x10563d60 */
  if (C.zf) goto L_10563d60;
L_10563d3a:;
  /* 10563d3a push 0x1058a5a0 */
  push32((uint32_t)(0x1058a5a0u));
  /* 10563d3f push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10563d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10563d4c call 0x10562bc0 */
  push32(0x10563d51u); f_10562bc0();
  /* 10563d51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563d54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d57 jne 0x10563d5a */
  if (!C.zf) goto L_10563d5a;
  /* 10563d59 int3  */
  x86_unimpl("int3 @ 0x10563d59");
L_10563d5a:;
  /* 10563d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10563d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10563d5e jne 0x10563d3a */
  if (!C.zf) goto L_10563d3a;
L_10563d60:;
  /* 10563d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563d63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563d66 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10563d69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10563d6c push ecx */
  push32((uint32_t)(ECX));
  /* 10563d6d call 0x10567950 */
  push32(0x10563d72u); f_10567950();
  /* 10563d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563d75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10563d78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d7c jne 0x10563d85 */
  if (!C.zf) goto L_10563d85;
  /* 10563d7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10563d80 jmp 0x10563edc */
  goto L_10563edc;
L_10563d85:;
  /* 10563d85 mov edx, dword ptr [0x1058da88] */
  EDX = (r32((uint32_t)(0x1058da88)));
  /* 10563d8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563d8e mov dword ptr [0x1058da88], edx */
  w32((uint32_t)(0x1058da88), (EDX));
  /* 10563d94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563d98 je 0x10563de3 */
  if (C.zf) goto L_10563de3;
  /* 10563d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563d9d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10563da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563da6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10563dad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563db0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10563db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563dba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10563dc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563dc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563dc7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10563dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563dcd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10563dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563dd7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10563dde jmp 0x10563e83 */
  goto L_10563e83;
L_10563de3:;
  /* 10563de3 mov edx, dword ptr [0x1058f560] */
  EDX = (r32((uint32_t)(0x1058f560)));
  /* 10563de9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563dec mov dword ptr [0x1058f560], edx */
  w32((uint32_t)(0x1058f560), (EDX));
  /* 10563df2 mov eax, dword ptr [0x1058f568] */
  EAX = (r32((uint32_t)(0x1058f568)));
  /* 10563df7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563dfa mov dword ptr [0x1058f568], eax */
  w32((uint32_t)(0x1058f568), (EAX));
  /* 10563dff mov ecx, dword ptr [0x1058f568] */
  ECX = (r32((uint32_t)(0x1058f568)));
  /* 10563e05 cmp ecx, dword ptr [0x1058f56c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058f56c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563e0b jbe 0x10563e19 */
  if ((C.cf||C.zf)) goto L_10563e19;
  /* 10563e0d mov edx, dword ptr [0x1058f568] */
  EDX = (r32((uint32_t)(0x1058f568)));
  /* 10563e13 mov dword ptr [0x1058f56c], edx */
  w32((uint32_t)(0x1058f56c), (EDX));
L_10563e19:;
  /* 10563e19 cmp dword ptr [0x1058f564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563e20 je 0x10563e2f */
  if (C.zf) goto L_10563e2f;
  /* 10563e22 mov eax, dword ptr [0x1058f564] */
  EAX = (r32((uint32_t)(0x1058f564)));
  /* 10563e27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10563e2d jmp 0x10563e38 */
  goto L_10563e38;
L_10563e2f:;
  /* 10563e2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e32 mov dword ptr [0x1058f55c], edx */
  w32((uint32_t)(0x1058f55c), (EDX));
L_10563e38:;
  /* 10563e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e3b mov ecx, dword ptr [0x1058f564] */
  ECX = (r32((uint32_t)(0x1058f564)));
  /* 10563e41 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10563e43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e46 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10563e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563e53 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10563e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563e5c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10563e5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563e65 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10563e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563e6e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10563e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563e77 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10563e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e7d mov dword ptr [0x1058f564], ecx */
  w32((uint32_t)(0x1058f564), (ECX));
L_10563e83:;
  /* 10563e83 push 4 */
  push32((uint32_t)(0x4u));
  /* 10563e85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10563e87 mov dl, byte ptr [0x1058da90] */
  DL = (r8((uint32_t)(0x1058da90)));
  /* 10563e8d push edx */
  push32((uint32_t)(EDX));
  /* 10563e8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563e91 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563e94 push eax */
  push32((uint32_t)(EAX));
  /* 10563e95 call 0x10567870 */
  push32(0x10563e9au); f_10567870();
  /* 10563e9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563e9d push 4 */
  push32((uint32_t)(0x4u));
  /* 10563e9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10563ea1 mov cl, byte ptr [0x1058da90] */
  CL = (r8((uint32_t)(0x1058da90)));
  /* 10563ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 10563ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563eae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10563eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10563eb3 call 0x10567870 */
  push32(0x10563eb8u); f_10567870();
  /* 10563eb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563ebe push edx */
  push32((uint32_t)(EDX));
  /* 10563ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10563ec1 mov al, byte ptr [0x1058da92] */
  AL = (r8((uint32_t)(0x1058da92)));
  /* 10563ec6 push eax */
  push32((uint32_t)(EAX));
  /* 10563ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563eca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ecd push ecx */
  push32((uint32_t)(ECX));
  /* 10563ece call 0x10567870 */
  push32(0x10563ed3u); f_10567870();
  /* 10563ed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563ed9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10563edc:;
  /* 10563edc pop edi */
  EDI = (pop32());
  /* 10563edd pop esi */
  ESI = (pop32());
  /* 10563ede pop ebx */
  EBX = (pop32());
  /* 10563edf mov esp, ebp */
  ESP = (EBP);
  /* 10563ee1 pop ebp */
  EBP = (pop32());
  /* 10563ee2 ret  */
  ESPCHK(0x10563bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef0 @ 0x10563ef0 (27 bytes, 13 insns) */
void f_10563ef0(void) {
  FTRACE(0x10563ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10563ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10563ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563efc push eax */
  push32((uint32_t)(EAX));
  /* 10563efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563f00 push ecx */
  push32((uint32_t)(ECX));
  /* 10563f01 call 0x10563f10 */
  push32(0x10563f06u); f_10563f10();
  /* 10563f06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563f09 pop ebp */
  EBP = (pop32());
  /* 10563f0a ret  */
  ESPCHK(0x10563ef0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10563f10 (96 bytes, 37 insns) */
void f_10563f10(void) {
  FTRACE(0x10563f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10563f11 mov ebp, esp */
  EBP = (ESP);
  /* 10563f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563f19 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10563f1d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10563f20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10563f24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563f27 push edx */
  push32((uint32_t)(EDX));
  /* 10563f28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563f2b push eax */
  push32((uint32_t)(EAX));
  /* 10563f2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563f2f push ecx */
  push32((uint32_t)(ECX));
  /* 10563f30 call 0x10563b00 */
  push32(0x10563f35u); f_10563b00();
  /* 10563f35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563f38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10563f3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563f3f je 0x10563f69 */
  if (C.zf) goto L_10563f69;
  /* 10563f41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563f44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10563f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10563f4a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563f4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10563f50:;
  /* 10563f50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10563f53 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563f56 jae 0x10563f69 */
  if (!C.cf) goto L_10563f69;
  /* 10563f58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10563f5b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10563f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10563f61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10563f64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10563f67 jmp 0x10563f50 */
  goto L_10563f50;
L_10563f69:;
  /* 10563f69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10563f6c mov esp, ebp */
  ESP = (EBP);
  /* 10563f6e pop ebp */
  EBP = (pop32());
  /* 10563f6f ret  */
  ESPCHK(0x10563f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x10563f70 (27 bytes, 13 insns) */
void f_10563f70(void) {
  FTRACE(0x10563f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10563f71 mov ebp, esp */
  EBP = (ESP);
  /* 10563f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10563f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10563f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563f7c push eax */
  push32((uint32_t)(EAX));
  /* 10563f7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563f80 push ecx */
  push32((uint32_t)(ECX));
  /* 10563f81 call 0x10563f90 */
  push32(0x10563f86u); f_10563f90();
  /* 10563f86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563f89 pop ebp */
  EBP = (pop32());
  /* 10563f8a ret  */
  ESPCHK(0x10563f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x10563f90 (64 bytes, 27 insns) */
void f_10563f90(void) {
  FTRACE(0x10563f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10563f91 mov ebp, esp */
  EBP = (ESP);
  /* 10563f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10563f94 push 9 */
  push32((uint32_t)(0x9u));
  /* 10563f96 call 0x10567500 */
  push32(0x10563f9bu); f_10567500();
  /* 10563f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563f9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10563fa0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563fa3 push eax */
  push32((uint32_t)(EAX));
  /* 10563fa4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10563fa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563fab push edx */
  push32((uint32_t)(EDX));
  /* 10563fac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563faf push eax */
  push32((uint32_t)(EAX));
  /* 10563fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10563fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10563fb4 call 0x10563fd0 */
  push32(0x10563fb9u); f_10563fd0();
  /* 10563fb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563fbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10563fbf push 9 */
  push32((uint32_t)(0x9u));
  /* 10563fc1 call 0x105675a0 */
  push32(0x10563fc6u); f_105675a0();
  /* 10563fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10563fcc mov esp, ebp */
  ESP = (EBP);
  /* 10563fce pop ebp */
  EBP = (pop32());
  /* 10563fcf ret  */
  ESPCHK(0x10563f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x10563fd0 (1297 bytes, 431 insns) */
void f_10563fd0(void) {
  FTRACE(0x10563fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10563fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10563fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10563fd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10563fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10563fd7 push esi */
  push32((uint32_t)(ESI));
  /* 10563fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10563fd9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10563fe0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10563fe4 jne 0x10564003 */
  if (!C.zf) goto L_10564003;
  /* 10563fe6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10563fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10563fea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10563fed push ecx */
  push32((uint32_t)(ECX));
  /* 10563fee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10563ff1 push edx */
  push32((uint32_t)(EDX));
  /* 10563ff2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10563ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10563ff6 call 0x10563b00 */
  push32(0x10563ffbu); f_10563b00();
  /* 10563ffb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10563ffe jmp 0x105644da */
  goto L_105644da;
L_10564003:;
  /* 10564003 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564007 je 0x10564026 */
  if (C.zf) goto L_10564026;
  /* 10564009 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056400d jne 0x10564026 */
  if (!C.zf) goto L_10564026;
  /* 1056400f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10564012 push ecx */
  push32((uint32_t)(ECX));
  /* 10564013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564016 push edx */
  push32((uint32_t)(EDX));
  /* 10564017 call 0x10564590 */
  push32(0x1056401cu); f_10564590();
  /* 1056401c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056401f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564021 jmp 0x105644da */
  goto L_105644da;
L_10564026:;
  /* 10564026 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 1056402b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1056402e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564030 je 0x10564062 */
  if (C.zf) goto L_10564062;
L_10564032:;
  /* 10564032 call 0x10564ca0 */
  push32(0x10564037u); f_10564ca0();
  /* 10564037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564039 jne 0x1056405c */
  if (!C.zf) goto L_1056405c;
  /* 1056403b push 0x1058a664 */
  push32((uint32_t)(0x1058a664u));
  /* 10564040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564042 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10564047 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 1056404c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056404e call 0x10562bc0 */
  push32(0x10564053u); f_10562bc0();
  /* 10564053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564056 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564059 jne 0x1056405c */
  if (!C.zf) goto L_1056405c;
  /* 1056405b int3  */
  x86_unimpl("int3 @ 0x1056405b");
L_1056405c:;
  /* 1056405c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056405e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564060 jne 0x10564032 */
  if (!C.zf) goto L_10564032;
L_10564062:;
  /* 10564062 mov edx, dword ptr [0x1058da88] */
  EDX = (r32((uint32_t)(0x1058da88)));
  /* 10564068 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1056406b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056406e cmp eax, dword ptr [0x1058da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564074 jne 0x10564077 */
  if (!C.zf) goto L_10564077;
  /* 10564076 int3  */
  x86_unimpl("int3 @ 0x10564076");
L_10564077:;
  /* 10564077 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056407a push ecx */
  push32((uint32_t)(ECX));
  /* 1056407b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056407e push edx */
  push32((uint32_t)(EDX));
  /* 1056407f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10564082 push eax */
  push32((uint32_t)(EAX));
  /* 10564083 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10564086 push ecx */
  push32((uint32_t)(ECX));
  /* 10564087 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056408a push edx */
  push32((uint32_t)(EDX));
  /* 1056408b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056408e push eax */
  push32((uint32_t)(EAX));
  /* 1056408f push 2 */
  push32((uint32_t)(0x2u));
  /* 10564091 call dword ptr [0x1058dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058dc90))), 0x10564097u);
  /* 10564097 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056409a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056409c jne 0x105640fc */
  if (!C.zf) goto L_105640fc;
  /* 1056409e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105640a2 je 0x105640cf */
  if (C.zf) goto L_105640cf;
L_105640a4:;
  /* 105640a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105640a7 push ecx */
  push32((uint32_t)(ECX));
  /* 105640a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105640ab push edx */
  push32((uint32_t)(EDX));
  /* 105640ac push 0x1058a7e0 */
  push32((uint32_t)(0x1058a7e0u));
  /* 105640b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105640b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105640b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105640b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105640b9 call 0x10562bc0 */
  push32(0x105640beu); f_10562bc0();
  /* 105640be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105640c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105640c4 jne 0x105640c7 */
  if (!C.zf) goto L_105640c7;
  /* 105640c6 int3  */
  x86_unimpl("int3 @ 0x105640c6");
L_105640c7:;
  /* 105640c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105640c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105640cb jne 0x105640a4 */
  if (!C.zf) goto L_105640a4;
  /* 105640cd jmp 0x105640f5 */
  goto L_105640f5;
L_105640cf:;
  /* 105640cf push 0x1058a7bc */
  push32((uint32_t)(0x1058a7bcu));
  /* 105640d4 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 105640d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105640db push 0 */
  push32((uint32_t)(0x0u));
  /* 105640dd push 0 */
  push32((uint32_t)(0x0u));
  /* 105640df push 0 */
  push32((uint32_t)(0x0u));
  /* 105640e1 call 0x10562bc0 */
  push32(0x105640e6u); f_10562bc0();
  /* 105640e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105640e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105640ec jne 0x105640ef */
  if (!C.zf) goto L_105640ef;
  /* 105640ee int3  */
  x86_unimpl("int3 @ 0x105640ee");
L_105640ef:;
  /* 105640ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105640f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105640f3 jne 0x105640cf */
  if (!C.zf) goto L_105640cf;
L_105640f5:;
  /* 105640f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105640f7 jmp 0x105644da */
  goto L_105644da;
L_105640fc:;
  /* 105640fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564100 jbe 0x1056412e */
  if ((C.cf||C.zf)) goto L_1056412e;
L_10564102:;
  /* 10564102 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564105 push edx */
  push32((uint32_t)(EDX));
  /* 10564106 push 0x1058a78c */
  push32((uint32_t)(0x1058a78cu));
  /* 1056410b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056410d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056410f push 0 */
  push32((uint32_t)(0x0u));
  /* 10564111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10564113 call 0x10562bc0 */
  push32(0x10564118u); f_10562bc0();
  /* 10564118 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056411b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056411e jne 0x10564121 */
  if (!C.zf) goto L_10564121;
  /* 10564120 int3  */
  x86_unimpl("int3 @ 0x10564120");
L_10564121:;
  /* 10564121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564125 jne 0x10564102 */
  if (!C.zf) goto L_10564102;
  /* 10564127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564129 jmp 0x105644da */
  goto L_105644da;
L_1056412e:;
  /* 1056412e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564132 je 0x10564176 */
  if (C.zf) goto L_10564176;
  /* 10564134 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10564137 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1056413d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564140 je 0x10564176 */
  if (C.zf) goto L_10564176;
  /* 10564142 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10564145 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056414b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056414e je 0x10564176 */
  if (C.zf) goto L_10564176;
L_10564150:;
  /* 10564150 push 0x1058a5a0 */
  push32((uint32_t)(0x1058a5a0u));
  /* 10564155 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 1056415a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056415c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056415e push 0 */
  push32((uint32_t)(0x0u));
  /* 10564160 push 1 */
  push32((uint32_t)(0x1u));
  /* 10564162 call 0x10562bc0 */
  push32(0x10564167u); f_10562bc0();
  /* 10564167 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056416a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056416d jne 0x10564170 */
  if (!C.zf) goto L_10564170;
  /* 1056416f int3  */
  x86_unimpl("int3 @ 0x1056416f");
L_10564170:;
  /* 10564170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564174 jne 0x10564150 */
  if (!C.zf) goto L_10564150;
L_10564176:;
  /* 10564176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564179 push ecx */
  push32((uint32_t)(ECX));
  /* 1056417a call 0x10565100 */
  push32(0x1056417fu); f_10565100();
  /* 1056417f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564184 jne 0x105641a7 */
  if (!C.zf) goto L_105641a7;
  /* 10564186 push 0x1058a768 */
  push32((uint32_t)(0x1058a768u));
  /* 1056418b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056418d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10564192 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10564199 call 0x10562bc0 */
  push32(0x1056419eu); f_10562bc0();
  /* 1056419e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105641a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105641a4 jne 0x105641a7 */
  if (!C.zf) goto L_105641a7;
  /* 105641a6 int3  */
  x86_unimpl("int3 @ 0x105641a6");
L_105641a7:;
  /* 105641a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105641a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105641ab jne 0x10564176 */
  if (!C.zf) goto L_10564176;
  /* 105641ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105641b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105641b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105641b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105641b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105641bd jne 0x105641c6 */
  if (!C.zf) goto L_105641c6;
  /* 105641bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_105641c6:;
  /* 105641c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105641ca je 0x1056420a */
  if (C.zf) goto L_1056420a;
L_105641cc:;
  /* 105641cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105641cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105641d6 jne 0x105641e1 */
  if (!C.zf) goto L_105641e1;
  /* 105641d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105641db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105641df je 0x10564202 */
  if (C.zf) goto L_10564202;
L_105641e1:;
  /* 105641e1 push 0x1058a720 */
  push32((uint32_t)(0x1058a720u));
  /* 105641e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105641e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 105641ed push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105641f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105641f4 call 0x10562bc0 */
  push32(0x105641f9u); f_10562bc0();
  /* 105641f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105641fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105641ff jne 0x10564202 */
  if (!C.zf) goto L_10564202;
  /* 10564201 int3  */
  x86_unimpl("int3 @ 0x10564201");
L_10564202:;
  /* 10564202 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564204 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564206 jne 0x105641cc */
  if (!C.zf) goto L_105641cc;
  /* 10564208 jmp 0x1056426e */
  goto L_1056426e;
L_1056420a:;
  /* 1056420a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056420d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564210 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10564215 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564218 jne 0x1056422f */
  if (!C.zf) goto L_1056422f;
  /* 1056421a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056421d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564223 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564226 jne 0x1056422f */
  if (!C.zf) goto L_1056422f;
  /* 10564228 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1056422f:;
  /* 1056422f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564232 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564235 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056423a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056423d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564243 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564245 je 0x10564268 */
  if (C.zf) goto L_10564268;
  /* 10564247 push 0x1058a6e4 */
  push32((uint32_t)(0x1058a6e4u));
  /* 1056424c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056424e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10564253 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056425a call 0x10562bc0 */
  push32(0x1056425fu); f_10562bc0();
  /* 1056425f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564262 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564265 jne 0x10564268 */
  if (!C.zf) goto L_10564268;
  /* 10564267 int3  */
  x86_unimpl("int3 @ 0x10564267");
L_10564268:;
  /* 10564268 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056426a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056426c jne 0x1056422f */
  if (!C.zf) goto L_1056422f;
L_1056426e:;
  /* 1056426e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564272 je 0x10564299 */
  if (C.zf) goto L_10564299;
  /* 10564274 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564277 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056427a push eax */
  push32((uint32_t)(EAX));
  /* 1056427b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056427e push ecx */
  push32((uint32_t)(ECX));
  /* 1056427f call 0x10567a80 */
  push32(0x10564284u); f_10567a80();
  /* 10564284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564287 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1056428a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056428e jne 0x10564297 */
  if (!C.zf) goto L_10564297;
  /* 10564290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564292 jmp 0x105644da */
  goto L_105644da;
L_10564297:;
  /* 10564297 jmp 0x105642bc */
  goto L_105642bc;
L_10564299:;
  /* 10564299 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056429c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056429f push edx */
  push32((uint32_t)(EDX));
  /* 105642a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105642a3 push eax */
  push32((uint32_t)(EAX));
  /* 105642a4 call 0x105679d0 */
  push32(0x105642a9u); f_105679d0();
  /* 105642a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105642ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105642af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105642b3 jne 0x105642bc */
  if (!C.zf) goto L_105642bc;
  /* 105642b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105642b7 jmp 0x105644da */
  goto L_105644da;
L_105642bc:;
  /* 105642bc mov ecx, dword ptr [0x1058da88] */
  ECX = (r32((uint32_t)(0x1058da88)));
  /* 105642c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105642c5 mov dword ptr [0x1058da88], ecx */
  w32((uint32_t)(0x1058da88), (ECX));
  /* 105642cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105642cf jne 0x10564327 */
  if (!C.zf) goto L_10564327;
  /* 105642d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105642d4 mov eax, dword ptr [0x1058f560] */
  EAX = (r32((uint32_t)(0x1058f560)));
  /* 105642d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105642dc mov dword ptr [0x1058f560], eax */
  w32((uint32_t)(0x1058f560), (EAX));
  /* 105642e1 mov ecx, dword ptr [0x1058f560] */
  ECX = (r32((uint32_t)(0x1058f560)));
  /* 105642e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105642ea mov dword ptr [0x1058f560], ecx */
  w32((uint32_t)(0x1058f560), (ECX));
  /* 105642f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105642f3 mov eax, dword ptr [0x1058f568] */
  EAX = (r32((uint32_t)(0x1058f568)));
  /* 105642f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105642fb mov dword ptr [0x1058f568], eax */
  w32((uint32_t)(0x1058f568), (EAX));
  /* 10564300 mov ecx, dword ptr [0x1058f568] */
  ECX = (r32((uint32_t)(0x1058f568)));
  /* 10564306 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564309 mov dword ptr [0x1058f568], ecx */
  w32((uint32_t)(0x1058f568), (ECX));
  /* 1056430f mov edx, dword ptr [0x1058f568] */
  EDX = (r32((uint32_t)(0x1058f568)));
  /* 10564315 cmp edx, dword ptr [0x1058f56c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058f56c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056431b jbe 0x10564327 */
  if ((C.cf||C.zf)) goto L_10564327;
  /* 1056431d mov eax, dword ptr [0x1058f568] */
  EAX = (r32((uint32_t)(0x1058f568)));
  /* 10564322 mov dword ptr [0x1058f56c], eax */
  w32((uint32_t)(0x1058f56c), (EAX));
L_10564327:;
  /* 10564327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056432a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056432d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10564330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564333 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564336 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564339 jbe 0x1056435f */
  if ((C.cf||C.zf)) goto L_1056435f;
  /* 1056433b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056433e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564341 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564344 push edx */
  push32((uint32_t)(EDX));
  /* 10564345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564347 mov al, byte ptr [0x1058da92] */
  AL = (r8((uint32_t)(0x1058da92)));
  /* 1056434c push eax */
  push32((uint32_t)(EAX));
  /* 1056434d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564350 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564353 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564356 push edx */
  push32((uint32_t)(EDX));
  /* 10564357 call 0x10567870 */
  push32(0x1056435cu); f_10567870();
  /* 1056435c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056435f:;
  /* 1056435f push 4 */
  push32((uint32_t)(0x4u));
  /* 10564361 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564363 mov al, byte ptr [0x1058da90] */
  AL = (r8((uint32_t)(0x1058da90)));
  /* 10564368 push eax */
  push32((uint32_t)(EAX));
  /* 10564369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056436c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056436f push ecx */
  push32((uint32_t)(ECX));
  /* 10564370 call 0x10567870 */
  push32(0x10564375u); f_10567870();
  /* 10564375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564378 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056437c jne 0x10564399 */
  if (!C.zf) goto L_10564399;
  /* 1056437e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564381 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10564384 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10564387 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056438a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056438d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10564390 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564393 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10564396 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10564399:;
  /* 10564399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056439c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056439f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_105643a2:;
  /* 105643a2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643a6 jne 0x105643d7 */
  if (!C.zf) goto L_105643d7;
  /* 105643a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643ac jne 0x105643b6 */
  if (!C.zf) goto L_105643b6;
  /* 105643ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105643b1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643b4 je 0x105643d7 */
  if (C.zf) goto L_105643d7;
L_105643b6:;
  /* 105643b6 push 0x1058a6b0 */
  push32((uint32_t)(0x1058a6b0u));
  /* 105643bb push 0 */
  push32((uint32_t)(0x0u));
  /* 105643bd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 105643c2 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105643c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105643c9 call 0x10562bc0 */
  push32(0x105643ceu); f_10562bc0();
  /* 105643ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105643d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643d4 jne 0x105643d7 */
  if (!C.zf) goto L_105643d7;
  /* 105643d6 int3  */
  x86_unimpl("int3 @ 0x105643d6");
L_105643d7:;
  /* 105643d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105643d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105643db jne 0x105643a2 */
  if (!C.zf) goto L_105643a2;
  /* 105643dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105643e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643e3 je 0x105643eb */
  if (C.zf) goto L_105643eb;
  /* 105643e5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643e9 je 0x105643f3 */
  if (C.zf) goto L_105643f3;
L_105643eb:;
  /* 105643eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105643ee jmp 0x105644da */
  goto L_105644da;
L_105643f3:;
  /* 105643f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105643f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105643f9 je 0x1056440b */
  if (C.zf) goto L_1056440b;
  /* 105643fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105643fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10564400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564403 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10564406 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10564409 jmp 0x10564447 */
  goto L_10564447;
L_1056440b:;
  /* 1056440b mov eax, dword ptr [0x1058f55c] */
  EAX = (r32((uint32_t)(0x1058f55c)));
  /* 10564410 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564413 je 0x10564436 */
  if (C.zf) goto L_10564436;
  /* 10564415 push 0x1058a694 */
  push32((uint32_t)(0x1058a694u));
  /* 1056441a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056441c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10564421 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564426 push 2 */
  push32((uint32_t)(0x2u));
  /* 10564428 call 0x10562bc0 */
  push32(0x1056442du); f_10562bc0();
  /* 1056442d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564430 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564433 jne 0x10564436 */
  if (!C.zf) goto L_10564436;
  /* 10564435 int3  */
  x86_unimpl("int3 @ 0x10564435");
L_10564436:;
  /* 10564436 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564438 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056443a jne 0x1056440b */
  if (!C.zf) goto L_1056440b;
  /* 1056443c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056443f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10564442 mov dword ptr [0x1058f55c], eax */
  w32((uint32_t)(0x1058f55c), (EAX));
L_10564447:;
  /* 10564447 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056444a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056444e je 0x1056445f */
  if (C.zf) goto L_1056445f;
  /* 10564450 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564453 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10564456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564459 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056445b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1056445d jmp 0x1056449a */
  goto L_1056449a;
L_1056445f:;
  /* 1056445f mov eax, dword ptr [0x1058f564] */
  EAX = (r32((uint32_t)(0x1058f564)));
  /* 10564464 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564467 je 0x1056448a */
  if (C.zf) goto L_1056448a;
  /* 10564469 push 0x1058a678 */
  push32((uint32_t)(0x1058a678u));
  /* 1056446e push 0 */
  push32((uint32_t)(0x0u));
  /* 10564470 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10564475 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 1056447a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056447c call 0x10562bc0 */
  push32(0x10564481u); f_10562bc0();
  /* 10564481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564487 jne 0x1056448a */
  if (!C.zf) goto L_1056448a;
  /* 10564489 int3  */
  x86_unimpl("int3 @ 0x10564489");
L_1056448a:;
  /* 1056448a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056448c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056448e jne 0x1056445f */
  if (!C.zf) goto L_1056445f;
  /* 10564490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564493 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10564495 mov dword ptr [0x1058f564], eax */
  w32((uint32_t)(0x1058f564), (EAX));
L_1056449a:;
  /* 1056449a cmp dword ptr [0x1058f564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105644a1 je 0x105644b1 */
  if (C.zf) goto L_105644b1;
  /* 105644a3 mov ecx, dword ptr [0x1058f564] */
  ECX = (r32((uint32_t)(0x1058f564)));
  /* 105644a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105644ac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105644af jmp 0x105644b9 */
  goto L_105644b9;
L_105644b1:;
  /* 105644b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105644b4 mov dword ptr [0x1058f55c], eax */
  w32((uint32_t)(0x1058f55c), (EAX));
L_105644b9:;
  /* 105644b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105644bc mov edx, dword ptr [0x1058f564] */
  EDX = (r32((uint32_t)(0x1058f564)));
  /* 105644c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105644c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105644c7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 105644ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105644d1 mov dword ptr [0x1058f564], ecx */
  w32((uint32_t)(0x1058f564), (ECX));
  /* 105644d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105644da:;
  /* 105644da pop edi */
  EDI = (pop32());
  /* 105644db pop esi */
  ESI = (pop32());
  /* 105644dc pop ebx */
  EBX = (pop32());
  /* 105644dd mov esp, ebp */
  ESP = (EBP);
  /* 105644df pop ebp */
  EBP = (pop32());
  /* 105644e0 ret  */
  ESPCHK(0x10563fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f0 @ 0x105644f0 (27 bytes, 13 insns) */
void f_105644f0(void) {
  FTRACE(0x105644f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105644f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105644f1 mov ebp, esp */
  EBP = (ESP);
  /* 105644f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105644f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105644f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105644f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105644fc push eax */
  push32((uint32_t)(EAX));
  /* 105644fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564500 push ecx */
  push32((uint32_t)(ECX));
  /* 10564501 call 0x10564510 */
  push32(0x10564506u); f_10564510();
  /* 10564506 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564509 pop ebp */
  EBP = (pop32());
  /* 1056450a ret  */
  ESPCHK(0x105644f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004510 @ 0x10564510 (64 bytes, 27 insns) */
void f_10564510(void) {
  FTRACE(0x10564510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564510 push ebp */
  push32((uint32_t)(EBP));
  /* 10564511 mov ebp, esp */
  EBP = (ESP);
  /* 10564513 push ecx */
  push32((uint32_t)(ECX));
  /* 10564514 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564516 call 0x10567500 */
  push32(0x1056451bu); f_10567500();
  /* 1056451b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056451e push 0 */
  push32((uint32_t)(0x0u));
  /* 10564520 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10564523 push eax */
  push32((uint32_t)(EAX));
  /* 10564524 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10564527 push ecx */
  push32((uint32_t)(ECX));
  /* 10564528 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056452b push edx */
  push32((uint32_t)(EDX));
  /* 1056452c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056452f push eax */
  push32((uint32_t)(EAX));
  /* 10564530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564533 push ecx */
  push32((uint32_t)(ECX));
  /* 10564534 call 0x10563fd0 */
  push32(0x10564539u); f_10563fd0();
  /* 10564539 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056453c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056453f push 9 */
  push32((uint32_t)(0x9u));
  /* 10564541 call 0x105675a0 */
  push32(0x10564546u); f_105675a0();
  /* 10564546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056454c mov esp, ebp */
  ESP = (EBP);
  /* 1056454e pop ebp */
  EBP = (pop32());
  /* 1056454f ret  */
  ESPCHK(0x10564510u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x10564550 (19 bytes, 9 insns) */
void f_10564550(void) {
  FTRACE(0x10564550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564550 push ebp */
  push32((uint32_t)(EBP));
  /* 10564551 mov ebp, esp */
  EBP = (ESP);
  /* 10564553 push 1 */
  push32((uint32_t)(0x1u));
  /* 10564555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564558 push eax */
  push32((uint32_t)(EAX));
  /* 10564559 call 0x10564590 */
  push32(0x1056455eu); f_10564590();
  /* 1056455e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564561 pop ebp */
  EBP = (pop32());
  /* 10564562 ret  */
  ESPCHK(0x10564550u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x10564570 (19 bytes, 9 insns) */
void f_10564570(void) {
  FTRACE(0x10564570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564570 push ebp */
  push32((uint32_t)(EBP));
  /* 10564571 mov ebp, esp */
  EBP = (ESP);
  /* 10564573 push 1 */
  push32((uint32_t)(0x1u));
  /* 10564575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564578 push eax */
  push32((uint32_t)(EAX));
  /* 10564579 call 0x105645c0 */
  push32(0x1056457eu); f_105645c0();
  /* 1056457e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564581 pop ebp */
  EBP = (pop32());
  /* 10564582 ret  */
  ESPCHK(0x10564570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x10564590 (41 bytes, 16 insns) */
void f_10564590(void) {
  FTRACE(0x10564590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564590 push ebp */
  push32((uint32_t)(EBP));
  /* 10564591 mov ebp, esp */
  EBP = (ESP);
  /* 10564593 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564595 call 0x10567500 */
  push32(0x1056459au); f_10567500();
  /* 1056459a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056459d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105645a0 push eax */
  push32((uint32_t)(EAX));
  /* 105645a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105645a4 push ecx */
  push32((uint32_t)(ECX));
  /* 105645a5 call 0x105645c0 */
  push32(0x105645aau); f_105645c0();
  /* 105645aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105645ad push 9 */
  push32((uint32_t)(0x9u));
  /* 105645af call 0x105675a0 */
  push32(0x105645b4u); f_105675a0();
  /* 105645b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105645b7 pop ebp */
  EBP = (pop32());
  /* 105645b8 ret  */
  ESPCHK(0x10564590u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x105645c0 (1004 bytes, 342 insns) */
void f_105645c0(void) {
  FTRACE(0x105645c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105645c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105645c1 mov ebp, esp */
  EBP = (ESP);
  /* 105645c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105645c4 push ebx */
  push32((uint32_t)(EBX));
  /* 105645c5 push esi */
  push32((uint32_t)(ESI));
  /* 105645c6 push edi */
  push32((uint32_t)(EDI));
  /* 105645c7 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 105645cc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105645cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105645d1 je 0x10564603 */
  if (C.zf) goto L_10564603;
L_105645d3:;
  /* 105645d3 call 0x10564ca0 */
  push32(0x105645d8u); f_10564ca0();
  /* 105645d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105645da jne 0x105645fd */
  if (!C.zf) goto L_105645fd;
  /* 105645dc push 0x1058a664 */
  push32((uint32_t)(0x1058a664u));
  /* 105645e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105645e3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 105645e8 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105645ed push 2 */
  push32((uint32_t)(0x2u));
  /* 105645ef call 0x10562bc0 */
  push32(0x105645f4u); f_10562bc0();
  /* 105645f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105645f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105645fa jne 0x105645fd */
  if (!C.zf) goto L_105645fd;
  /* 105645fc int3  */
  x86_unimpl("int3 @ 0x105645fc");
L_105645fd:;
  /* 105645fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105645ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564601 jne 0x105645d3 */
  if (!C.zf) goto L_105645d3;
L_10564603:;
  /* 10564603 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564607 jne 0x1056460e */
  if (!C.zf) goto L_1056460e;
  /* 10564609 jmp 0x105649a5 */
  goto L_105649a5;
L_1056460e:;
  /* 1056460e push 0 */
  push32((uint32_t)(0x0u));
  /* 10564610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564614 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564617 push edx */
  push32((uint32_t)(EDX));
  /* 10564618 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056461a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056461d push eax */
  push32((uint32_t)(EAX));
  /* 1056461e push 3 */
  push32((uint32_t)(0x3u));
  /* 10564620 call dword ptr [0x1058dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058dc90))), 0x10564626u);
  /* 10564626 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056462b jne 0x10564658 */
  if (!C.zf) goto L_10564658;
L_1056462d:;
  /* 1056462d push 0x1058a928 */
  push32((uint32_t)(0x1058a928u));
  /* 10564632 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10564637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056463b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056463d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056463f call 0x10562bc0 */
  push32(0x10564644u); f_10562bc0();
  /* 10564644 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056464a jne 0x1056464d */
  if (!C.zf) goto L_1056464d;
  /* 1056464c int3  */
  x86_unimpl("int3 @ 0x1056464c");
L_1056464d:;
  /* 1056464d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056464f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564651 jne 0x1056462d */
  if (!C.zf) goto L_1056462d;
  /* 10564653 jmp 0x105649a5 */
  goto L_105649a5;
L_10564658:;
  /* 10564658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056465b push edx */
  push32((uint32_t)(EDX));
  /* 1056465c call 0x10565100 */
  push32(0x10564661u); f_10565100();
  /* 10564661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564666 jne 0x10564689 */
  if (!C.zf) goto L_10564689;
  /* 10564668 push 0x1058a768 */
  push32((uint32_t)(0x1058a768u));
  /* 1056466d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056466f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10564674 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564679 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056467b call 0x10562bc0 */
  push32(0x10564680u); f_10562bc0();
  /* 10564680 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564683 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564686 jne 0x10564689 */
  if (!C.zf) goto L_10564689;
  /* 10564688 int3  */
  x86_unimpl("int3 @ 0x10564688");
L_10564689:;
  /* 10564689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056468b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056468d jne 0x10564658 */
  if (!C.zf) goto L_10564658;
  /* 1056468f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564692 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564695 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10564698:;
  /* 10564698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056469b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1056469e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105646a3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105646a6 je 0x105646eb */
  if (C.zf) goto L_105646eb;
  /* 105646a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105646ab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105646af je 0x105646eb */
  if (C.zf) goto L_105646eb;
  /* 105646b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105646b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105646b7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105646bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105646bf je 0x105646eb */
  if (C.zf) goto L_105646eb;
  /* 105646c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105646c4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105646c8 je 0x105646eb */
  if (C.zf) goto L_105646eb;
  /* 105646ca push 0x1058a900 */
  push32((uint32_t)(0x1058a900u));
  /* 105646cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105646d1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 105646d6 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105646db push 2 */
  push32((uint32_t)(0x2u));
  /* 105646dd call 0x10562bc0 */
  push32(0x105646e2u); f_10562bc0();
  /* 105646e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105646e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105646e8 jne 0x105646eb */
  if (!C.zf) goto L_105646eb;
  /* 105646ea int3  */
  x86_unimpl("int3 @ 0x105646ea");
L_105646eb:;
  /* 105646eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105646ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105646ef jne 0x10564698 */
  if (!C.zf) goto L_10564698;
  /* 105646f1 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 105646f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105646f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105646fb jne 0x105647c6 */
  if (!C.zf) goto L_105647c6;
  /* 10564701 push 4 */
  push32((uint32_t)(0x4u));
  /* 10564703 mov cl, byte ptr [0x1058da90] */
  CL = (r8((uint32_t)(0x1058da90)));
  /* 10564709 push ecx */
  push32((uint32_t)(ECX));
  /* 1056470a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056470d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564710 push edx */
  push32((uint32_t)(EDX));
  /* 10564711 call 0x10564c10 */
  push32(0x10564716u); f_10564c10();
  /* 10564716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056471b jne 0x10564760 */
  if (!C.zf) goto L_10564760;
L_1056471d:;
  /* 1056471d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564720 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564723 push eax */
  push32((uint32_t)(EAX));
  /* 10564724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564727 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1056472a push edx */
  push32((uint32_t)(EDX));
  /* 1056472b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056472e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10564731 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564737 mov edx, dword ptr [ecx*4 + 0x1058da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da94)));
  /* 1056473e push edx */
  push32((uint32_t)(EDX));
  /* 1056473f push 0x1058a8d4 */
  push32((uint32_t)(0x1058a8d4u));
  /* 10564744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056474a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056474c call 0x10562bc0 */
  push32(0x10564751u); f_10562bc0();
  /* 10564751 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564754 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564757 jne 0x1056475a */
  if (!C.zf) goto L_1056475a;
  /* 10564759 int3  */
  x86_unimpl("int3 @ 0x10564759");
L_1056475a:;
  /* 1056475a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056475c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056475e jne 0x1056471d */
  if (!C.zf) goto L_1056471d;
L_10564760:;
  /* 10564760 push 4 */
  push32((uint32_t)(0x4u));
  /* 10564762 mov cl, byte ptr [0x1058da90] */
  CL = (r8((uint32_t)(0x1058da90)));
  /* 10564768 push ecx */
  push32((uint32_t)(ECX));
  /* 10564769 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056476c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056476f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564772 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10564776 push edx */
  push32((uint32_t)(EDX));
  /* 10564777 call 0x10564c10 */
  push32(0x1056477cu); f_10564c10();
  /* 1056477c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056477f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564781 jne 0x105647c6 */
  if (!C.zf) goto L_105647c6;
L_10564783:;
  /* 10564783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564786 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564789 push eax */
  push32((uint32_t)(EAX));
  /* 1056478a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056478d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10564790 push edx */
  push32((uint32_t)(EDX));
  /* 10564791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564794 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10564797 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1056479d mov edx, dword ptr [ecx*4 + 0x1058da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da94)));
  /* 105647a4 push edx */
  push32((uint32_t)(EDX));
  /* 105647a5 push 0x1058a8a8 */
  push32((uint32_t)(0x1058a8a8u));
  /* 105647aa push 0 */
  push32((uint32_t)(0x0u));
  /* 105647ac push 0 */
  push32((uint32_t)(0x0u));
  /* 105647ae push 0 */
  push32((uint32_t)(0x0u));
  /* 105647b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105647b2 call 0x10562bc0 */
  push32(0x105647b7u); f_10562bc0();
  /* 105647b7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105647ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105647bd jne 0x105647c0 */
  if (!C.zf) goto L_105647c0;
  /* 105647bf int3  */
  x86_unimpl("int3 @ 0x105647bf");
L_105647c0:;
  /* 105647c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105647c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105647c4 jne 0x10564783 */
  if (!C.zf) goto L_10564783;
L_105647c6:;
  /* 105647c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105647c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105647cd jne 0x1056483b */
  if (!C.zf) goto L_1056483b;
L_105647cf:;
  /* 105647cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105647d2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105647d9 jne 0x105647e4 */
  if (!C.zf) goto L_105647e4;
  /* 105647db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105647de cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105647e2 je 0x10564805 */
  if (C.zf) goto L_10564805;
L_105647e4:;
  /* 105647e4 push 0x1058a868 */
  push32((uint32_t)(0x1058a868u));
  /* 105647e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105647eb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 105647f0 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105647f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105647f7 call 0x10562bc0 */
  push32(0x105647fcu); f_10562bc0();
  /* 105647fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105647ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564802 jne 0x10564805 */
  if (!C.zf) goto L_10564805;
  /* 10564804 int3  */
  x86_unimpl("int3 @ 0x10564804");
L_10564805:;
  /* 10564805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564809 jne 0x105647cf */
  if (!C.zf) goto L_105647cf;
  /* 1056480b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056480e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10564811 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564814 push eax */
  push32((uint32_t)(EAX));
  /* 10564815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564817 mov cl, byte ptr [0x1058da91] */
  CL = (r8((uint32_t)(0x1058da91)));
  /* 1056481d push ecx */
  push32((uint32_t)(ECX));
  /* 1056481e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564821 push edx */
  push32((uint32_t)(EDX));
  /* 10564822 call 0x10567870 */
  push32(0x10564827u); f_10567870();
  /* 10564827 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056482a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056482d push eax */
  push32((uint32_t)(EAX));
  /* 1056482e call 0x10567c70 */
  push32(0x10564833u); f_10567c70();
  /* 10564833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564836 jmp 0x105649a5 */
  goto L_105649a5;
L_1056483b:;
  /* 1056483b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056483e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564842 jne 0x10564851 */
  if (!C.zf) goto L_10564851;
  /* 10564844 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564848 jne 0x10564851 */
  if (!C.zf) goto L_10564851;
  /* 1056484a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10564851:;
  /* 10564851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564854 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564857 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056485a je 0x1056487d */
  if (C.zf) goto L_1056487d;
  /* 1056485c push 0x1058a848 */
  push32((uint32_t)(0x1058a848u));
  /* 10564861 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564863 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10564868 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 1056486d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056486f call 0x10562bc0 */
  push32(0x10564874u); f_10562bc0();
  /* 10564874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056487a jne 0x1056487d */
  if (!C.zf) goto L_1056487d;
  /* 1056487c int3  */
  x86_unimpl("int3 @ 0x1056487c");
L_1056487d:;
  /* 1056487d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056487f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564881 jne 0x10564851 */
  if (!C.zf) goto L_10564851;
  /* 10564883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564886 mov eax, dword ptr [0x1058f568] */
  EAX = (r32((uint32_t)(0x1058f568)));
  /* 1056488b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056488e mov dword ptr [0x1058f568], eax */
  w32((uint32_t)(0x1058f568), (EAX));
  /* 10564893 mov ecx, dword ptr [0x1058da84] */
  ECX = (r32((uint32_t)(0x1058da84)));
  /* 10564899 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1056489c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056489e jne 0x1056497c */
  if (!C.zf) goto L_1056497c;
  /* 105648a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105648a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105648aa je 0x105648bc */
  if (C.zf) goto L_105648bc;
  /* 105648ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105648af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105648b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105648b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105648b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105648ba jmp 0x105648fa */
  goto L_105648fa;
L_105648bc:;
  /* 105648bc mov ecx, dword ptr [0x1058f55c] */
  ECX = (r32((uint32_t)(0x1058f55c)));
  /* 105648c2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105648c5 je 0x105648e8 */
  if (C.zf) goto L_105648e8;
  /* 105648c7 push 0x1058a830 */
  push32((uint32_t)(0x1058a830u));
  /* 105648cc push 0 */
  push32((uint32_t)(0x0u));
  /* 105648ce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 105648d3 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105648d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105648da call 0x10562bc0 */
  push32(0x105648dfu); f_10562bc0();
  /* 105648df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105648e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105648e5 jne 0x105648e8 */
  if (!C.zf) goto L_105648e8;
  /* 105648e7 int3  */
  x86_unimpl("int3 @ 0x105648e7");
L_105648e8:;
  /* 105648e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105648ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105648ec jne 0x105648bc */
  if (!C.zf) goto L_105648bc;
  /* 105648ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105648f1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105648f4 mov dword ptr [0x1058f55c], ecx */
  w32((uint32_t)(0x1058f55c), (ECX));
L_105648fa:;
  /* 105648fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105648fd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564901 je 0x10564912 */
  if (C.zf) goto L_10564912;
  /* 10564903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564906 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10564909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056490c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1056490e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10564910 jmp 0x1056494f */
  goto L_1056494f;
L_10564912:;
  /* 10564912 mov ecx, dword ptr [0x1058f564] */
  ECX = (r32((uint32_t)(0x1058f564)));
  /* 10564918 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056491b je 0x1056493e */
  if (C.zf) goto L_1056493e;
  /* 1056491d push 0x1058a818 */
  push32((uint32_t)(0x1058a818u));
  /* 10564922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564924 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10564929 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 1056492e push 2 */
  push32((uint32_t)(0x2u));
  /* 10564930 call 0x10562bc0 */
  push32(0x10564935u); f_10562bc0();
  /* 10564935 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564938 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056493b jne 0x1056493e */
  if (!C.zf) goto L_1056493e;
  /* 1056493d int3  */
  x86_unimpl("int3 @ 0x1056493d");
L_1056493e:;
  /* 1056493e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564942 jne 0x10564912 */
  if (!C.zf) goto L_10564912;
  /* 10564944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564947 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10564949 mov dword ptr [0x1058f564], ecx */
  w32((uint32_t)(0x1058f564), (ECX));
L_1056494f:;
  /* 1056494f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564952 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10564955 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564958 push eax */
  push32((uint32_t)(EAX));
  /* 10564959 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056495b mov cl, byte ptr [0x1058da91] */
  CL = (r8((uint32_t)(0x1058da91)));
  /* 10564961 push ecx */
  push32((uint32_t)(ECX));
  /* 10564962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564965 push edx */
  push32((uint32_t)(EDX));
  /* 10564966 call 0x10567870 */
  push32(0x1056496bu); f_10567870();
  /* 1056496b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056496e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564971 push eax */
  push32((uint32_t)(EAX));
  /* 10564972 call 0x10567c70 */
  push32(0x10564977u); f_10567c70();
  /* 10564977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056497a jmp 0x105649a5 */
  goto L_105649a5;
L_1056497c:;
  /* 1056497c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056497f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10564986 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564989 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056498c push eax */
  push32((uint32_t)(EAX));
  /* 1056498d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056498f mov cl, byte ptr [0x1058da91] */
  CL = (r8((uint32_t)(0x1058da91)));
  /* 10564995 push ecx */
  push32((uint32_t)(ECX));
  /* 10564996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564999 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056499c push edx */
  push32((uint32_t)(EDX));
  /* 1056499d call 0x10567870 */
  push32(0x105649a2u); f_10567870();
  /* 105649a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105649a5:;
  /* 105649a5 pop edi */
  EDI = (pop32());
  /* 105649a6 pop esi */
  ESI = (pop32());
  /* 105649a7 pop ebx */
  EBX = (pop32());
  /* 105649a8 mov esp, ebp */
  ESP = (EBP);
  /* 105649aa pop ebp */
  EBP = (pop32());
  /* 105649ab ret  */
  ESPCHK(0x105645c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049b0 @ 0x105649b0 (19 bytes, 9 insns) */
void f_105649b0(void) {
  FTRACE(0x105649b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105649b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105649b1 mov ebp, esp */
  EBP = (ESP);
  /* 105649b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105649b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105649b8 push eax */
  push32((uint32_t)(EAX));
  /* 105649b9 call 0x105649d0 */
  push32(0x105649beu); f_105649d0();
  /* 105649be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105649c1 pop ebp */
  EBP = (pop32());
  /* 105649c2 ret  */
  ESPCHK(0x105649b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d0 @ 0x105649d0 (342 bytes, 119 insns) */
void f_105649d0(void) {
  FTRACE(0x105649d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105649d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105649d1 mov ebp, esp */
  EBP = (ESP);
  /* 105649d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105649d6 push ebx */
  push32((uint32_t)(EBX));
  /* 105649d7 push esi */
  push32((uint32_t)(ESI));
  /* 105649d8 push edi */
  push32((uint32_t)(EDI));
  /* 105649d9 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 105649de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105649e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105649e3 je 0x10564a15 */
  if (C.zf) goto L_10564a15;
L_105649e5:;
  /* 105649e5 call 0x10564ca0 */
  push32(0x105649eau); f_10564ca0();
  /* 105649ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105649ec jne 0x10564a0f */
  if (!C.zf) goto L_10564a0f;
  /* 105649ee push 0x1058a664 */
  push32((uint32_t)(0x1058a664u));
  /* 105649f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105649f5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 105649fa push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 105649ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10564a01 call 0x10562bc0 */
  push32(0x10564a06u); f_10562bc0();
  /* 10564a06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564a0c jne 0x10564a0f */
  if (!C.zf) goto L_10564a0f;
  /* 10564a0e int3  */
  x86_unimpl("int3 @ 0x10564a0e");
L_10564a0f:;
  /* 10564a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564a11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564a13 jne 0x105649e5 */
  if (!C.zf) goto L_105649e5;
L_10564a15:;
  /* 10564a15 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564a17 call 0x10567500 */
  push32(0x10564a1cu); f_10567500();
  /* 10564a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10564a1f:;
  /* 10564a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564a22 push edx */
  push32((uint32_t)(EDX));
  /* 10564a23 call 0x10565100 */
  push32(0x10564a28u); f_10565100();
  /* 10564a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564a2d jne 0x10564a50 */
  if (!C.zf) goto L_10564a50;
  /* 10564a2f push 0x1058a768 */
  push32((uint32_t)(0x1058a768u));
  /* 10564a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564a36 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10564a3b push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10564a42 call 0x10562bc0 */
  push32(0x10564a47u); f_10562bc0();
  /* 10564a47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564a4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564a4d jne 0x10564a50 */
  if (!C.zf) goto L_10564a50;
  /* 10564a4f int3  */
  x86_unimpl("int3 @ 0x10564a4f");
L_10564a50:;
  /* 10564a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564a54 jne 0x10564a1f */
  if (!C.zf) goto L_10564a1f;
  /* 10564a56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564a59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564a5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10564a5f:;
  /* 10564a5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564a62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564a65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10564a6a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564a6d je 0x10564ab2 */
  if (C.zf) goto L_10564ab2;
  /* 10564a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564a72 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564a76 je 0x10564ab2 */
  if (C.zf) goto L_10564ab2;
  /* 10564a78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564a7b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564a7e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10564a83 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564a86 je 0x10564ab2 */
  if (C.zf) goto L_10564ab2;
  /* 10564a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564a8b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564a8f je 0x10564ab2 */
  if (C.zf) goto L_10564ab2;
  /* 10564a91 push 0x1058a900 */
  push32((uint32_t)(0x1058a900u));
  /* 10564a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564a98 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10564a9d push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10564aa4 call 0x10562bc0 */
  push32(0x10564aa9u); f_10562bc0();
  /* 10564aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564aaf jne 0x10564ab2 */
  if (!C.zf) goto L_10564ab2;
  /* 10564ab1 int3  */
  x86_unimpl("int3 @ 0x10564ab1");
L_10564ab2:;
  /* 10564ab2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564ab6 jne 0x10564a5f */
  if (!C.zf) goto L_10564a5f;
  /* 10564ab8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564abb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564abf jne 0x10564ace */
  if (!C.zf) goto L_10564ace;
  /* 10564ac1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564ac5 jne 0x10564ace */
  if (!C.zf) goto L_10564ace;
  /* 10564ac7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10564ace:;
  /* 10564ace mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564ad1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564ad5 je 0x10564b09 */
  if (C.zf) goto L_10564b09;
L_10564ad7:;
  /* 10564ad7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564ada mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564add cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564ae0 je 0x10564b03 */
  if (C.zf) goto L_10564b03;
  /* 10564ae2 push 0x1058a848 */
  push32((uint32_t)(0x1058a848u));
  /* 10564ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564ae9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10564aee push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10564af5 call 0x10562bc0 */
  push32(0x10564afau); f_10562bc0();
  /* 10564afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564afd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564b00 jne 0x10564b03 */
  if (!C.zf) goto L_10564b03;
  /* 10564b02 int3  */
  x86_unimpl("int3 @ 0x10564b02");
L_10564b03:;
  /* 10564b03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564b05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564b07 jne 0x10564ad7 */
  if (!C.zf) goto L_10564ad7;
L_10564b09:;
  /* 10564b09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564b0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10564b0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10564b12 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564b14 call 0x105675a0 */
  push32(0x10564b19u); f_105675a0();
  /* 10564b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564b1f pop edi */
  EDI = (pop32());
  /* 10564b20 pop esi */
  ESI = (pop32());
  /* 10564b21 pop ebx */
  EBX = (pop32());
  /* 10564b22 mov esp, ebp */
  ESP = (EBP);
  /* 10564b24 pop ebp */
  EBP = (pop32());
  /* 10564b25 ret  */
  ESPCHK(0x105649d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b30 @ 0x10564b30 (28 bytes, 11 insns) */
void f_10564b30(void) {
  FTRACE(0x10564b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10564b31 mov ebp, esp */
  EBP = (ESP);
  /* 10564b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10564b34 mov eax, dword ptr [0x1058da8c] */
  EAX = (r32((uint32_t)(0x1058da8c)));
  /* 10564b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10564b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564b3f mov dword ptr [0x1058da8c], ecx */
  w32((uint32_t)(0x1058da8c), (ECX));
  /* 10564b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564b48 mov esp, ebp */
  ESP = (EBP);
  /* 10564b4a pop ebp */
  EBP = (pop32());
  /* 10564b4b ret  */
  ESPCHK(0x10564b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x10564b50 (157 bytes, 59 insns) */
void f_10564b50(void) {
  FTRACE(0x10564b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10564b51 mov ebp, esp */
  EBP = (ESP);
  /* 10564b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10564b54 push ebx */
  push32((uint32_t)(EBX));
  /* 10564b55 push esi */
  push32((uint32_t)(ESI));
  /* 10564b56 push edi */
  push32((uint32_t)(EDI));
  /* 10564b57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564b59 call 0x10567500 */
  push32(0x10564b5eu); f_10567500();
  /* 10564b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564b64 push eax */
  push32((uint32_t)(EAX));
  /* 10564b65 call 0x10565100 */
  push32(0x10564b6au); f_10565100();
  /* 10564b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564b6f je 0x10564bdc */
  if (C.zf) goto L_10564bdc;
  /* 10564b71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564b74 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564b77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10564b7a:;
  /* 10564b7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564b7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564b80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10564b85 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564b88 je 0x10564bcd */
  if (C.zf) goto L_10564bcd;
  /* 10564b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564b8d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564b91 je 0x10564bcd */
  if (C.zf) goto L_10564bcd;
  /* 10564b93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564b96 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10564b99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10564b9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564ba1 je 0x10564bcd */
  if (C.zf) goto L_10564bcd;
  /* 10564ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564ba6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564baa je 0x10564bcd */
  if (C.zf) goto L_10564bcd;
  /* 10564bac push 0x1058a900 */
  push32((uint32_t)(0x1058a900u));
  /* 10564bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564bb3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10564bb8 push 0x1058a658 */
  push32((uint32_t)(0x1058a658u));
  /* 10564bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10564bbf call 0x10562bc0 */
  push32(0x10564bc4u); f_10562bc0();
  /* 10564bc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564bc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564bca jne 0x10564bcd */
  if (!C.zf) goto L_10564bcd;
  /* 10564bcc int3  */
  x86_unimpl("int3 @ 0x10564bcc");
L_10564bcd:;
  /* 10564bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564bd1 jne 0x10564b7a */
  if (!C.zf) goto L_10564b7a;
  /* 10564bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564bd9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10564bdc:;
  /* 10564bdc push 9 */
  push32((uint32_t)(0x9u));
  /* 10564bde call 0x105675a0 */
  push32(0x10564be3u); f_105675a0();
  /* 10564be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564be6 pop edi */
  EDI = (pop32());
  /* 10564be7 pop esi */
  ESI = (pop32());
  /* 10564be8 pop ebx */
  EBX = (pop32());
  /* 10564be9 mov esp, ebp */
  ESP = (EBP);
  /* 10564beb pop ebp */
  EBP = (pop32());
  /* 10564bec ret  */
  ESPCHK(0x10564b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bf0 @ 0x10564bf0 (28 bytes, 11 insns) */
void f_10564bf0(void) {
  FTRACE(0x10564bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10564bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10564bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10564bf4 mov eax, dword ptr [0x1058dc90] */
  EAX = (r32((uint32_t)(0x1058dc90)));
  /* 10564bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10564bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564bff mov dword ptr [0x1058dc90], ecx */
  w32((uint32_t)(0x1058dc90), (ECX));
  /* 10564c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564c08 mov esp, ebp */
  ESP = (EBP);
  /* 10564c0a pop ebp */
  EBP = (pop32());
  /* 10564c0b ret  */
  ESPCHK(0x10564bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x10564c10 (136 bytes, 55 insns) */
void f_10564c10(void) {
  FTRACE(0x10564c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10564c11 mov ebp, esp */
  EBP = (ESP);
  /* 10564c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10564c14 push ebx */
  push32((uint32_t)(EBX));
  /* 10564c15 push esi */
  push32((uint32_t)(ESI));
  /* 10564c16 push edi */
  push32((uint32_t)(EDI));
  /* 10564c17 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10564c1e:;
  /* 10564c1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10564c21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10564c24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564c27 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10564c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564c2c je 0x10564c8e */
  if (C.zf) goto L_10564c8e;
  /* 10564c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564c31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564c33 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10564c35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564c38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564c3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564c41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564c44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10564c47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564c49 je 0x10564c8c */
  if (C.zf) goto L_10564c8c;
L_10564c4b:;
  /* 10564c4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10564c4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10564c53 push eax */
  push32((uint32_t)(EAX));
  /* 10564c54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564c59 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10564c5c push edx */
  push32((uint32_t)(EDX));
  /* 10564c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10564c60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564c63 push eax */
  push32((uint32_t)(EAX));
  /* 10564c64 push 0x1058a944 */
  push32((uint32_t)(0x1058a944u));
  /* 10564c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10564c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10564c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10564c71 call 0x10562bc0 */
  push32(0x10564c76u); f_10562bc0();
  /* 10564c76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564c7c jne 0x10564c7f */
  if (!C.zf) goto L_10564c7f;
  /* 10564c7e int3  */
  x86_unimpl("int3 @ 0x10564c7e");
L_10564c7f:;
  /* 10564c7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564c81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564c83 jne 0x10564c4b */
  if (!C.zf) goto L_10564c4b;
  /* 10564c85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10564c8c:;
  /* 10564c8c jmp 0x10564c1e */
  goto L_10564c1e;
L_10564c8e:;
  /* 10564c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10564c91 pop edi */
  EDI = (pop32());
  /* 10564c92 pop esi */
  ESI = (pop32());
  /* 10564c93 pop ebx */
  EBX = (pop32());
  /* 10564c94 mov esp, ebp */
  ESP = (EBP);
  /* 10564c96 pop ebp */
  EBP = (pop32());
  /* 10564c97 ret  */
  ESPCHK(0x10564c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca0 @ 0x10564ca0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10564ca0(void) {
  FTRACE(0x10564ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10564ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10564ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10564ca3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10564ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10564ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10564ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10564ca9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10564cb0 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 10564cb5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10564cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564cba jne 0x10564cc6 */
  if (!C.zf) goto L_10564cc6;
  /* 10564cbc mov eax, 1 */
  EAX = (0x1u);
  /* 10564cc1 jmp 0x10564ff8 */
  goto L_10564ff8;
L_10564cc6:;
  /* 10564cc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564cc8 call 0x10567500 */
  push32(0x10564ccdu); f_10567500();
  /* 10564ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564cd0 call 0x10567ce0 */
  push32(0x10564cd5u); f_10567ce0();
  /* 10564cd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10564cd8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564cdc je 0x10564de9 */
  if (C.zf) goto L_10564de9;
  /* 10564ce2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564ce6 je 0x10564de9 */
  if (C.zf) goto L_10564de9;
  /* 10564cec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10564cef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10564cf2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10564cf5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564cf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10564cfb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564cff ja 0x10564db2 */
  if ((!C.cf&&!C.zf)) goto L_10564db2;
  /* 10564d05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10564d08 jmp dword ptr [eax*4 + 0x10564fff] */
  switch (EAX) {
    case 0: goto L_10564d8a;
    case 1: goto L_10564d62;
    case 2: goto L_10564d3a;
    case 3: goto L_10564d0f;
    default: x86_unimpl("switch@0x10564d08 out of table"); return;
  }
L_10564d0f:;
  /* 10564d0f push 0x1058aa98 */
  push32((uint32_t)(0x1058aa98u));
  /* 10564d14 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10564d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d21 call 0x10562bc0 */
  push32(0x10564d26u); f_10562bc0();
  /* 10564d26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564d2c jne 0x10564d2f */
  if (!C.zf) goto L_10564d2f;
  /* 10564d2e int3  */
  x86_unimpl("int3 @ 0x10564d2e");
L_10564d2f:;
  /* 10564d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564d33 jne 0x10564d0f */
  if (!C.zf) goto L_10564d0f;
  /* 10564d35 jmp 0x10564dd8 */
  goto L_10564dd8;
L_10564d3a:;
  /* 10564d3a push 0x1058aa74 */
  push32((uint32_t)(0x1058aa74u));
  /* 10564d3f push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10564d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d4c call 0x10562bc0 */
  push32(0x10564d51u); f_10562bc0();
  /* 10564d51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564d54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564d57 jne 0x10564d5a */
  if (!C.zf) goto L_10564d5a;
  /* 10564d59 int3  */
  x86_unimpl("int3 @ 0x10564d59");
L_10564d5a:;
  /* 10564d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564d5e jne 0x10564d3a */
  if (!C.zf) goto L_10564d3a;
  /* 10564d60 jmp 0x10564dd8 */
  goto L_10564dd8;
L_10564d62:;
  /* 10564d62 push 0x1058aa50 */
  push32((uint32_t)(0x1058aa50u));
  /* 10564d67 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10564d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d74 call 0x10562bc0 */
  push32(0x10564d79u); f_10562bc0();
  /* 10564d79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564d7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564d7f jne 0x10564d82 */
  if (!C.zf) goto L_10564d82;
  /* 10564d81 int3  */
  x86_unimpl("int3 @ 0x10564d81");
L_10564d82:;
  /* 10564d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564d86 jne 0x10564d62 */
  if (!C.zf) goto L_10564d62;
  /* 10564d88 jmp 0x10564dd8 */
  goto L_10564dd8;
L_10564d8a:;
  /* 10564d8a push 0x1058aa2c */
  push32((uint32_t)(0x1058aa2cu));
  /* 10564d8f push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10564d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10564d9c call 0x10562bc0 */
  push32(0x10564da1u); f_10562bc0();
  /* 10564da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564da7 jne 0x10564daa */
  if (!C.zf) goto L_10564daa;
  /* 10564da9 int3  */
  x86_unimpl("int3 @ 0x10564da9");
L_10564daa:;
  /* 10564daa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564dac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564dae jne 0x10564d8a */
  if (!C.zf) goto L_10564d8a;
  /* 10564db0 jmp 0x10564dd8 */
  goto L_10564dd8;
L_10564db2:;
  /* 10564db2 push 0x1058aa00 */
  push32((uint32_t)(0x1058aa00u));
  /* 10564db7 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10564dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10564dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10564dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564dc4 call 0x10562bc0 */
  push32(0x10564dc9u); f_10562bc0();
  /* 10564dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564dcf jne 0x10564dd2 */
  if (!C.zf) goto L_10564dd2;
  /* 10564dd1 int3  */
  x86_unimpl("int3 @ 0x10564dd1");
L_10564dd2:;
  /* 10564dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564dd6 jne 0x10564db2 */
  if (!C.zf) goto L_10564db2;
L_10564dd8:;
  /* 10564dd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10564dda call 0x105675a0 */
  push32(0x10564ddfu); f_105675a0();
  /* 10564ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564de4 jmp 0x10564ff8 */
  goto L_10564ff8;
L_10564de9:;
  /* 10564de9 mov eax, dword ptr [0x1058f564] */
  EAX = (r32((uint32_t)(0x1058f564)));
  /* 10564dee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10564df1 jmp 0x10564dfb */
  goto L_10564dfb;
L_10564df3:;
  /* 10564df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564df6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10564df8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10564dfb:;
  /* 10564dfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564dff je 0x10564feb */
  if (C.zf) goto L_10564feb;
  /* 10564e05 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10564e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e0f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10564e12 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564e18 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564e1b je 0x10564e40 */
  if (C.zf) goto L_10564e40;
  /* 10564e1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e20 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564e24 je 0x10564e40 */
  if (C.zf) goto L_10564e40;
  /* 10564e26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e29 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10564e2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564e32 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564e35 je 0x10564e40 */
  if (C.zf) goto L_10564e40;
  /* 10564e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e3a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564e3e jne 0x10564e58 */
  if (!C.zf) goto L_10564e58;
L_10564e40:;
  /* 10564e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e43 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10564e46 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10564e4c mov edx, dword ptr [ecx*4 + 0x1058da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da94)));
  /* 10564e53 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10564e56 jmp 0x10564e5f */
  goto L_10564e5f;
L_10564e58:;
  /* 10564e58 mov dword ptr [ebp - 0x14], 0x1058a9f8 */
  w32((uint32_t)(EBP + -0x14), (0x1058a9f8u));
L_10564e5f:;
  /* 10564e5f push 4 */
  push32((uint32_t)(0x4u));
  /* 10564e61 mov al, byte ptr [0x1058da90] */
  AL = (r8((uint32_t)(0x1058da90)));
  /* 10564e66 push eax */
  push32((uint32_t)(EAX));
  /* 10564e67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e6a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564e6d push ecx */
  push32((uint32_t)(ECX));
  /* 10564e6e call 0x10564c10 */
  push32(0x10564e73u); f_10564c10();
  /* 10564e73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564e76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564e78 jne 0x10564eb4 */
  if (!C.zf) goto L_10564eb4;
L_10564e7a:;
  /* 10564e7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e7d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564e80 push edx */
  push32((uint32_t)(EDX));
  /* 10564e81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564e84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10564e87 push ecx */
  push32((uint32_t)(ECX));
  /* 10564e88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10564e8b push edx */
  push32((uint32_t)(EDX));
  /* 10564e8c push 0x1058a8d4 */
  push32((uint32_t)(0x1058a8d4u));
  /* 10564e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564e99 call 0x10562bc0 */
  push32(0x10564e9eu); f_10562bc0();
  /* 10564e9e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564ea1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564ea4 jne 0x10564ea7 */
  if (!C.zf) goto L_10564ea7;
  /* 10564ea6 int3  */
  x86_unimpl("int3 @ 0x10564ea6");
L_10564ea7:;
  /* 10564ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564eab jne 0x10564e7a */
  if (!C.zf) goto L_10564e7a;
  /* 10564ead mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10564eb4:;
  /* 10564eb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10564eb6 mov cl, byte ptr [0x1058da90] */
  CL = (r8((uint32_t)(0x1058da90)));
  /* 10564ebc push ecx */
  push32((uint32_t)(ECX));
  /* 10564ebd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564ec0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10564ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564ec6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10564eca push edx */
  push32((uint32_t)(EDX));
  /* 10564ecb call 0x10564c10 */
  push32(0x10564ed0u); f_10564c10();
  /* 10564ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564ed5 jne 0x10564f11 */
  if (!C.zf) goto L_10564f11;
L_10564ed7:;
  /* 10564ed7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564eda add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564edd push eax */
  push32((uint32_t)(EAX));
  /* 10564ede mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564ee1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10564ee4 push edx */
  push32((uint32_t)(EDX));
  /* 10564ee5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10564ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10564ee9 push 0x1058a8a8 */
  push32((uint32_t)(0x1058a8a8u));
  /* 10564eee push 0 */
  push32((uint32_t)(0x0u));
  /* 10564ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564ef6 call 0x10562bc0 */
  push32(0x10564efbu); f_10562bc0();
  /* 10564efb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564efe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564f01 jne 0x10564f04 */
  if (!C.zf) goto L_10564f04;
  /* 10564f03 int3  */
  x86_unimpl("int3 @ 0x10564f03");
L_10564f04:;
  /* 10564f04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10564f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10564f08 jne 0x10564ed7 */
  if (!C.zf) goto L_10564ed7;
  /* 10564f0a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10564f11:;
  /* 10564f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f14 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564f18 jne 0x10564f6a */
  if (!C.zf) goto L_10564f6a;
  /* 10564f1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10564f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10564f21 mov dl, byte ptr [0x1058da91] */
  DL = (r8((uint32_t)(0x1058da91)));
  /* 10564f27 push edx */
  push32((uint32_t)(EDX));
  /* 10564f28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f2b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564f2e push eax */
  push32((uint32_t)(EAX));
  /* 10564f2f call 0x10564c10 */
  push32(0x10564f34u); f_10564c10();
  /* 10564f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564f39 jne 0x10564f6a */
  if (!C.zf) goto L_10564f6a;
L_10564f3b:;
  /* 10564f3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f3e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10564f42 push 0x1058a9cc */
  push32((uint32_t)(0x1058a9ccu));
  /* 10564f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f4f call 0x10562bc0 */
  push32(0x10564f54u); f_10562bc0();
  /* 10564f54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564f57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564f5a jne 0x10564f5d */
  if (!C.zf) goto L_10564f5d;
  /* 10564f5c int3  */
  x86_unimpl("int3 @ 0x10564f5c");
L_10564f5d:;
  /* 10564f5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564f5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564f61 jne 0x10564f3b */
  if (!C.zf) goto L_10564f3b;
  /* 10564f63 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10564f6a:;
  /* 10564f6a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564f6e jne 0x10564fe6 */
  if (!C.zf) goto L_10564fe6;
  /* 10564f70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f73 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564f77 je 0x10564fac */
  if (C.zf) goto L_10564fac;
L_10564f79:;
  /* 10564f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f7c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10564f7f push edx */
  push32((uint32_t)(EDX));
  /* 10564f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564f83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10564f86 push ecx */
  push32((uint32_t)(ECX));
  /* 10564f87 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10564f8a push edx */
  push32((uint32_t)(EDX));
  /* 10564f8b push 0x1058a9ac */
  push32((uint32_t)(0x1058a9acu));
  /* 10564f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564f98 call 0x10562bc0 */
  push32(0x10564f9du); f_10562bc0();
  /* 10564f9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564fa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564fa3 jne 0x10564fa6 */
  if (!C.zf) goto L_10564fa6;
  /* 10564fa5 int3  */
  x86_unimpl("int3 @ 0x10564fa5");
L_10564fa6:;
  /* 10564fa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10564fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10564faa jne 0x10564f79 */
  if (!C.zf) goto L_10564f79;
L_10564fac:;
  /* 10564fac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564faf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10564fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10564fb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10564fb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10564fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10564fba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10564fbd push ecx */
  push32((uint32_t)(ECX));
  /* 10564fbe push 0x1058a980 */
  push32((uint32_t)(0x1058a980u));
  /* 10564fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10564fcb call 0x10562bc0 */
  push32(0x10564fd0u); f_10562bc0();
  /* 10564fd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564fd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10564fd6 jne 0x10564fd9 */
  if (!C.zf) goto L_10564fd9;
  /* 10564fd8 int3  */
  x86_unimpl("int3 @ 0x10564fd8");
L_10564fd9:;
  /* 10564fd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10564fdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10564fdd jne 0x10564fac */
  if (!C.zf) goto L_10564fac;
  /* 10564fdf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10564fe6:;
  /* 10564fe6 jmp 0x10564df3 */
  goto L_10564df3;
L_10564feb:;
  /* 10564feb push 9 */
  push32((uint32_t)(0x9u));
  /* 10564fed call 0x105675a0 */
  push32(0x10564ff2u); f_105675a0();
  /* 10564ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10564ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10564ff8:;
  /* 10564ff8 pop edi */
  EDI = (pop32());
  /* 10564ff9 pop esi */
  ESI = (pop32());
  /* 10564ffa pop ebx */
  EBX = (pop32());
  /* 10564ffb mov esp, ebp */
  ESP = (EBP);
  /* 10564ffd pop ebp */
  EBP = (pop32());
  /* 10564ffe ret  */
  ESPCHK(0x10564ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x10565010 (34 bytes, 13 insns) */
void f_10565010(void) {
  FTRACE(0x10565010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565010 push ebp */
  push32((uint32_t)(EBP));
  /* 10565011 mov ebp, esp */
  EBP = (ESP);
  /* 10565013 push ecx */
  push32((uint32_t)(ECX));
  /* 10565014 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 10565019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056501c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565020 je 0x1056502b */
  if (C.zf) goto L_1056502b;
  /* 10565022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565025 mov dword ptr [0x1058da84], ecx */
  w32((uint32_t)(0x1058da84), (ECX));
L_1056502b:;
  /* 1056502b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056502e mov esp, ebp */
  ESP = (EBP);
  /* 10565030 pop ebp */
  EBP = (pop32());
  /* 10565031 ret  */
  ESPCHK(0x10565010u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x10565040 (103 bytes, 38 insns) */
void f_10565040(void) {
  FTRACE(0x10565040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565040 push ebp */
  push32((uint32_t)(EBP));
  /* 10565041 mov ebp, esp */
  EBP = (ESP);
  /* 10565043 push ecx */
  push32((uint32_t)(ECX));
  /* 10565044 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 10565049 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1056504c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056504e jne 0x10565052 */
  if (!C.zf) goto L_10565052;
  /* 10565050 jmp 0x105650a3 */
  goto L_105650a3;
L_10565052:;
  /* 10565052 push 9 */
  push32((uint32_t)(0x9u));
  /* 10565054 call 0x10567500 */
  push32(0x10565059u); f_10567500();
  /* 10565059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056505c mov ecx, dword ptr [0x1058f564] */
  ECX = (r32((uint32_t)(0x1058f564)));
  /* 10565062 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10565065 jmp 0x1056506f */
  goto L_1056506f;
L_10565067:;
  /* 10565067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056506a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1056506c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056506f:;
  /* 1056506f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565073 je 0x10565099 */
  if (C.zf) goto L_10565099;
  /* 10565075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565078 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1056507b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10565081 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565084 jne 0x10565097 */
  if (!C.zf) goto L_10565097;
  /* 10565086 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565089 push eax */
  push32((uint32_t)(EAX));
  /* 1056508a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056508d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565090 push ecx */
  push32((uint32_t)(ECX));
  /* 10565091 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10565094u);
  /* 10565094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10565097:;
  /* 10565097 jmp 0x10565067 */
  goto L_10565067;
L_10565099:;
  /* 10565099 push 9 */
  push32((uint32_t)(0x9u));
  /* 1056509b call 0x105675a0 */
  push32(0x105650a0u); f_105675a0();
  /* 105650a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105650a3:;
  /* 105650a3 mov esp, ebp */
  ESP = (EBP);
  /* 105650a5 pop ebp */
  EBP = (pop32());
  /* 105650a6 ret  */
  ESPCHK(0x10565040u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x105650b0 (75 bytes, 28 insns) */
void f_105650b0(void) {
  FTRACE(0x105650b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105650b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105650b1 mov ebp, esp */
  EBP = (ESP);
  /* 105650b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105650b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105650b8 je 0x105650ed */
  if (C.zf) goto L_105650ed;
  /* 105650ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105650bd push eax */
  push32((uint32_t)(EAX));
  /* 105650be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105650c1 push ecx */
  push32((uint32_t)(ECX));
  /* 105650c2 call dword ptr [0x1059233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059233c))), 0x105650c8u);
  /* 105650c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105650ca jne 0x105650ed */
  if (!C.zf) goto L_105650ed;
  /* 105650cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105650d0 je 0x105650e4 */
  if (C.zf) goto L_105650e4;
  /* 105650d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105650d5 push edx */
  push32((uint32_t)(EDX));
  /* 105650d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105650d9 push eax */
  push32((uint32_t)(EAX));
  /* 105650da call dword ptr [0x10592338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592338))), 0x105650e0u);
  /* 105650e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105650e2 jne 0x105650ed */
  if (!C.zf) goto L_105650ed;
L_105650e4:;
  /* 105650e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105650eb jmp 0x105650f4 */
  goto L_105650f4;
L_105650ed:;
  /* 105650ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105650f4:;
  /* 105650f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105650f7 mov esp, ebp */
  ESP = (EBP);
  /* 105650f9 pop ebp */
  EBP = (pop32());
  /* 105650fa ret  */
  ESPCHK(0x105650b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005100 @ 0x10565100 (134 bytes, 50 insns) */
void f_10565100(void) {
  FTRACE(0x10565100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565100 push ebp */
  push32((uint32_t)(EBP));
  /* 10565101 mov ebp, esp */
  EBP = (ESP);
  /* 10565103 push ecx */
  push32((uint32_t)(ECX));
  /* 10565104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565108 jne 0x1056510e */
  if (!C.zf) goto L_1056510e;
  /* 1056510a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056510c jmp 0x10565182 */
  goto L_10565182;
L_1056510e:;
  /* 1056510e push 1 */
  push32((uint32_t)(0x1u));
  /* 10565110 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10565112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565115 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565118 push eax */
  push32((uint32_t)(EAX));
  /* 10565119 call 0x105650b0 */
  push32(0x1056511eu); f_105650b0();
  /* 1056511e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565123 jne 0x10565129 */
  if (!C.zf) goto L_10565129;
  /* 10565125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565127 jmp 0x10565182 */
  goto L_10565182;
L_10565129:;
  /* 10565129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056512c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056512f push ecx */
  push32((uint32_t)(ECX));
  /* 10565130 call 0x10567e00 */
  push32(0x10565135u); f_10567e00();
  /* 10565135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056513b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056513f je 0x10565156 */
  if (C.zf) goto L_10565156;
  /* 10565141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565144 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565147 push edx */
  push32((uint32_t)(EDX));
  /* 10565148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056514b push eax */
  push32((uint32_t)(EAX));
  /* 1056514c call 0x10567e60 */
  push32(0x10565151u); f_10567e60();
  /* 10565151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565154 jmp 0x10565182 */
  goto L_10565182;
L_10565156:;
  /* 10565156 mov ecx, dword ptr [0x1058f518] */
  ECX = (r32((uint32_t)(0x1058f518)));
  /* 1056515c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10565162 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10565164 je 0x1056516d */
  if (C.zf) goto L_1056516d;
  /* 10565166 mov eax, 1 */
  EAX = (0x1u);
  /* 1056516b jmp 0x10565182 */
  goto L_10565182;
L_1056516d:;
  /* 1056516d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565170 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565173 push edx */
  push32((uint32_t)(EDX));
  /* 10565174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565176 mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 1056517b push eax */
  push32((uint32_t)(EAX));
  /* 1056517c call dword ptr [0x10592340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592340))), 0x10565182u);
L_10565182:;
  /* 10565182 mov esp, ebp */
  ESP = (EBP);
  /* 10565184 pop ebp */
  EBP = (pop32());
  /* 10565185 ret  */
  ESPCHK(0x10565100u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x10565190 (227 bytes, 80 insns) */
void f_10565190(void) {
  FTRACE(0x10565190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565190 push ebp */
  push32((uint32_t)(EBP));
  /* 10565191 mov ebp, esp */
  EBP = (ESP);
  /* 10565193 push ecx */
  push32((uint32_t)(ECX));
  /* 10565194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565197 push eax */
  push32((uint32_t)(EAX));
  /* 10565198 call 0x10565100 */
  push32(0x1056519du); f_10565100();
  /* 1056519d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105651a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105651a2 jne 0x105651ab */
  if (!C.zf) goto L_105651ab;
  /* 105651a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105651a6 jmp 0x1056526f */
  goto L_1056526f;
L_105651ab:;
  /* 105651ab push 9 */
  push32((uint32_t)(0x9u));
  /* 105651ad call 0x10567500 */
  push32(0x105651b2u); f_10567500();
  /* 105651b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105651b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105651b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105651bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105651be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105651c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105651c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105651c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105651cc je 0x105651f0 */
  if (C.zf) goto L_105651f0;
  /* 105651ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105651d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105651d5 je 0x105651f0 */
  if (C.zf) goto L_105651f0;
  /* 105651d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105651da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105651dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105651e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105651e5 je 0x105651f0 */
  if (C.zf) goto L_105651f0;
  /* 105651e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105651ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105651ee jne 0x10565263 */
  if (!C.zf) goto L_10565263;
L_105651f0:;
  /* 105651f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105651f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105651f5 push edx */
  push32((uint32_t)(EDX));
  /* 105651f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105651f9 push eax */
  push32((uint32_t)(EAX));
  /* 105651fa call 0x105650b0 */
  push32(0x105651ffu); f_105650b0();
  /* 105651ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565204 je 0x10565263 */
  if (C.zf) goto L_10565263;
  /* 10565206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565209 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1056520c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056520f jne 0x10565263 */
  if (!C.zf) goto L_10565263;
  /* 10565211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565214 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10565217 cmp ecx, dword ptr [0x1058da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056521d jg 0x10565263 */
  if ((!C.zf&&C.sf==C.of)) goto L_10565263;
  /* 1056521f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565223 je 0x10565230 */
  if (C.zf) goto L_10565230;
  /* 10565225 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056522b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1056522e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10565230:;
  /* 10565230 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565234 je 0x10565241 */
  if (C.zf) goto L_10565241;
  /* 10565236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10565239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056523c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056523f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10565241:;
  /* 10565241 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565245 je 0x10565252 */
  if (C.zf) goto L_10565252;
  /* 10565247 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056524a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056524d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10565250 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10565252:;
  /* 10565252 push 9 */
  push32((uint32_t)(0x9u));
  /* 10565254 call 0x105675a0 */
  push32(0x10565259u); f_105675a0();
  /* 10565259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056525c mov eax, 1 */
  EAX = (0x1u);
  /* 10565261 jmp 0x1056526f */
  goto L_1056526f;
L_10565263:;
  /* 10565263 push 9 */
  push32((uint32_t)(0x9u));
  /* 10565265 call 0x105675a0 */
  push32(0x1056526au); f_105675a0();
  /* 1056526a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056526d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056526f:;
  /* 1056526f mov esp, ebp */
  ESP = (EBP);
  /* 10565271 pop ebp */
  EBP = (pop32());
  /* 10565272 ret  */
  ESPCHK(0x10565190u, _esp0);
  ESP += 4; return;
}

/* FUN_10005280 @ 0x10565280 (28 bytes, 11 insns) */
void f_10565280(void) {
  FTRACE(0x10565280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565280 push ebp */
  push32((uint32_t)(EBP));
  /* 10565281 mov ebp, esp */
  EBP = (ESP);
  /* 10565283 push ecx */
  push32((uint32_t)(ECX));
  /* 10565284 mov eax, dword ptr [0x10590ed8] */
  EAX = (r32((uint32_t)(0x10590ed8)));
  /* 10565289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056528c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056528f mov dword ptr [0x10590ed8], ecx */
  w32((uint32_t)(0x10590ed8), (ECX));
  /* 10565295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565298 mov esp, ebp */
  ESP = (EBP);
  /* 1056529a pop ebp */
  EBP = (pop32());
  /* 1056529b ret  */
  ESPCHK(0x10565280u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x105652a0 (362 bytes, 116 insns) */
void f_105652a0(void) {
  FTRACE(0x105652a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105652a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105652a1 mov ebp, esp */
  EBP = (ESP);
  /* 105652a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105652a6 push ebx */
  push32((uint32_t)(EBX));
  /* 105652a7 push esi */
  push32((uint32_t)(ESI));
  /* 105652a8 push edi */
  push32((uint32_t)(EDI));
  /* 105652a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105652ad jne 0x105652da */
  if (!C.zf) goto L_105652da;
L_105652af:;
  /* 105652af push 0x1058aae0 */
  push32((uint32_t)(0x1058aae0u));
  /* 105652b4 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 105652b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105652bb push 0 */
  push32((uint32_t)(0x0u));
  /* 105652bd push 0 */
  push32((uint32_t)(0x0u));
  /* 105652bf push 0 */
  push32((uint32_t)(0x0u));
  /* 105652c1 call 0x10562bc0 */
  push32(0x105652c6u); f_10562bc0();
  /* 105652c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105652c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105652cc jne 0x105652cf */
  if (!C.zf) goto L_105652cf;
  /* 105652ce int3  */
  x86_unimpl("int3 @ 0x105652ce");
L_105652cf:;
  /* 105652cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105652d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105652d3 jne 0x105652af */
  if (!C.zf) goto L_105652af;
  /* 105652d5 jmp 0x10565403 */
  goto L_10565403;
L_105652da:;
  /* 105652da push 9 */
  push32((uint32_t)(0x9u));
  /* 105652dc call 0x10567500 */
  push32(0x105652e1u); f_10567500();
  /* 105652e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105652e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105652e7 mov edx, dword ptr [0x1058f564] */
  EDX = (r32((uint32_t)(0x1058f564)));
  /* 105652ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105652ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105652f6 jmp 0x10565301 */
  goto L_10565301;
L_105652f8:;
  /* 105652f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105652fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105652fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10565301:;
  /* 10565301 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565305 jge 0x10565325 */
  if ((C.sf==C.of)) goto L_10565325;
  /* 10565307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056530a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056530d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10565315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056531b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10565323 jmp 0x105652f8 */
  goto L_105652f8;
L_10565325:;
  /* 10565325 mov edx, dword ptr [0x1058f564] */
  EDX = (r32((uint32_t)(0x1058f564)));
  /* 1056532b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1056532e jmp 0x10565338 */
  goto L_10565338;
L_10565330:;
  /* 10565330 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565333 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10565335 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10565338:;
  /* 10565338 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056533c je 0x105653e1 */
  if (C.zf) goto L_105653e1;
  /* 10565342 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565345 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10565348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056534d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056534f jl 0x105653b7 */
  if ((C.sf!=C.of)) goto L_105653b7;
  /* 10565351 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565354 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10565357 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056535d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565360 jge 0x105653b7 */
  if ((C.sf==C.of)) goto L_105653b7;
  /* 10565362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565365 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10565368 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1056536e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565371 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10565375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565378 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056537b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1056537e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10565384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565387 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1056538b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056538e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10565391 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10565396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565399 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1056539d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105653a0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105653a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105653a6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 105653a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105653ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105653b1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105653b5 jmp 0x105653dc */
  goto L_105653dc;
L_105653b7:;
  /* 105653b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105653ba push edx */
  push32((uint32_t)(EDX));
  /* 105653bb push 0x1058aabc */
  push32((uint32_t)(0x1058aabcu));
  /* 105653c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105653c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105653c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105653c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105653c8 call 0x10562bc0 */
  push32(0x105653cdu); f_10562bc0();
  /* 105653cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105653d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105653d3 jne 0x105653d6 */
  if (!C.zf) goto L_105653d6;
  /* 105653d5 int3  */
  x86_unimpl("int3 @ 0x105653d5");
L_105653d6:;
  /* 105653d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105653d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105653da jne 0x105653b7 */
  if (!C.zf) goto L_105653b7;
L_105653dc:;
  /* 105653dc jmp 0x10565330 */
  goto L_10565330;
L_105653e1:;
  /* 105653e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105653e4 mov edx, dword ptr [0x1058f56c] */
  EDX = (r32((uint32_t)(0x1058f56c)));
  /* 105653ea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 105653ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105653f0 mov ecx, dword ptr [0x1058f560] */
  ECX = (r32((uint32_t)(0x1058f560)));
  /* 105653f6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 105653f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 105653fb call 0x105675a0 */
  push32(0x10565400u); f_105675a0();
  /* 10565400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10565403:;
  /* 10565403 pop edi */
  EDI = (pop32());
  /* 10565404 pop esi */
  ESI = (pop32());
  /* 10565405 pop ebx */
  EBX = (pop32());
  /* 10565406 mov esp, ebp */
  ESP = (EBP);
  /* 10565408 pop ebp */
  EBP = (pop32());
  /* 10565409 ret  */
  ESPCHK(0x105652a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x10565410 (291 bytes, 95 insns) */
void f_10565410(void) {
  FTRACE(0x10565410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565410 push ebp */
  push32((uint32_t)(EBP));
  /* 10565411 mov ebp, esp */
  EBP = (ESP);
  /* 10565413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565416 push ebx */
  push32((uint32_t)(EBX));
  /* 10565417 push esi */
  push32((uint32_t)(ESI));
  /* 10565418 push edi */
  push32((uint32_t)(EDI));
  /* 10565419 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10565420 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565424 je 0x10565432 */
  if (C.zf) goto L_10565432;
  /* 10565426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056542a je 0x10565432 */
  if (C.zf) goto L_10565432;
  /* 1056542c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565430 jne 0x10565460 */
  if (!C.zf) goto L_10565460;
L_10565432:;
  /* 10565432 push 0x1058ab08 */
  push32((uint32_t)(0x1058ab08u));
  /* 10565437 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 1056543c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056543e push 0 */
  push32((uint32_t)(0x0u));
  /* 10565440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565442 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565444 call 0x10562bc0 */
  push32(0x10565449u); f_10562bc0();
  /* 10565449 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056544c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056544f jne 0x10565452 */
  if (!C.zf) goto L_10565452;
  /* 10565451 int3  */
  x86_unimpl("int3 @ 0x10565451");
L_10565452:;
  /* 10565452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565456 jne 0x10565432 */
  if (!C.zf) goto L_10565432;
  /* 10565458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056545b jmp 0x1056552c */
  goto L_1056552c;
L_10565460:;
  /* 10565460 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10565467 jmp 0x10565472 */
  goto L_10565472;
L_10565469:;
  /* 10565469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056546c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056546f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10565472:;
  /* 10565472 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565476 jge 0x105654fc */
  if ((C.sf==C.of)) goto L_105654fc;
  /* 1056547c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056547f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565485 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10565488 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1056548c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565493 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565496 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1056549a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056549d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105654a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105654a3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105654a6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 105654aa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105654ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105654b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105654b4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 105654b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105654bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105654be cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105654c3 jne 0x105654d2 */
  if (!C.zf) goto L_105654d2;
  /* 105654c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105654c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105654cb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105654d0 je 0x105654f7 */
  if (C.zf) goto L_105654f7;
L_105654d2:;
  /* 105654d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105654d6 je 0x105654f7 */
  if (C.zf) goto L_105654f7;
  /* 105654d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105654dc jne 0x105654f0 */
  if (!C.zf) goto L_105654f0;
  /* 105654de cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105654e2 jne 0x105654f7 */
  if (!C.zf) goto L_105654f7;
  /* 105654e4 mov eax, dword ptr [0x1058da84] */
  EAX = (r32((uint32_t)(0x1058da84)));
  /* 105654e9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 105654ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105654ee je 0x105654f7 */
  if (C.zf) goto L_105654f7;
L_105654f0:;
  /* 105654f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_105654f7:;
  /* 105654f7 jmp 0x10565469 */
  goto L_10565469;
L_105654fc:;
  /* 105654fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105654ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565502 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10565505 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056550b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1056550e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565511 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565514 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10565517 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056551a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056551d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10565520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565523 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10565529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1056552c:;
  /* 1056552c pop edi */
  EDI = (pop32());
  /* 1056552d pop esi */
  ESI = (pop32());
  /* 1056552e pop ebx */
  EBX = (pop32());
  /* 1056552f mov esp, ebp */
  ESP = (EBP);
  /* 10565531 pop ebp */
  EBP = (pop32());
  /* 10565532 ret  */
  ESPCHK(0x10565410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x10565540 (697 bytes, 253 insns) */
void f_10565540(void) {
  FTRACE(0x10565540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565540 push ebp */
  push32((uint32_t)(EBP));
  /* 10565541 mov ebp, esp */
  EBP = (ESP);
  /* 10565543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565546 push ebx */
  push32((uint32_t)(EBX));
  /* 10565547 push esi */
  push32((uint32_t)(ESI));
  /* 10565548 push edi */
  push32((uint32_t)(EDI));
  /* 10565549 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10565550 push 9 */
  push32((uint32_t)(0x9u));
  /* 10565552 call 0x10567500 */
  push32(0x10565557u); f_10567500();
  /* 10565557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056555a:;
  /* 1056555a push 0x1058ac00 */
  push32((uint32_t)(0x1058ac00u));
  /* 1056555f push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 10565564 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565566 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565568 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056556a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056556c call 0x10562bc0 */
  push32(0x10565571u); f_10562bc0();
  /* 10565571 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565577 jne 0x1056557a */
  if (!C.zf) goto L_1056557a;
  /* 10565579 int3  */
  x86_unimpl("int3 @ 0x10565579");
L_1056557a:;
  /* 1056557a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056557c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056557e jne 0x1056555a */
  if (!C.zf) goto L_1056555a;
  /* 10565580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565584 je 0x1056558e */
  if (C.zf) goto L_1056558e;
  /* 10565586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565589 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056558b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1056558e:;
  /* 1056558e mov eax, dword ptr [0x1058f564] */
  EAX = (r32((uint32_t)(0x1058f564)));
  /* 10565593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10565596 jmp 0x105655a0 */
  goto L_105655a0;
L_10565598:;
  /* 10565598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056559b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056559d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105655a0:;
  /* 105655a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105655a4 je 0x105657c2 */
  if (C.zf) goto L_105657c2;
  /* 105655aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105655ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105655b0 je 0x105657c2 */
  if (C.zf) goto L_105657c2;
  /* 105655b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105655b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105655bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105655c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105655c5 je 0x105655f4 */
  if (C.zf) goto L_105655f4;
  /* 105655c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105655ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105655cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105655d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105655d5 je 0x105655f4 */
  if (C.zf) goto L_105655f4;
  /* 105655d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105655da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105655dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105655e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105655e5 jne 0x105655f9 */
  if (!C.zf) goto L_105655f9;
  /* 105655e7 mov ecx, dword ptr [0x1058da84] */
  ECX = (r32((uint32_t)(0x1058da84)));
  /* 105655ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 105655f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105655f2 jne 0x105655f9 */
  if (!C.zf) goto L_105655f9;
L_105655f4:;
  /* 105655f4 jmp 0x105657bd */
  goto L_105657bd;
L_105655f9:;
  /* 105655f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105655fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565600 je 0x10565672 */
  if (C.zf) goto L_10565672;
  /* 10565602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565604 push 1 */
  push32((uint32_t)(0x1u));
  /* 10565606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565609 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056560c push ecx */
  push32((uint32_t)(ECX));
  /* 1056560d call 0x105650b0 */
  push32(0x10565612u); f_105650b0();
  /* 10565612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565617 jne 0x10565643 */
  if (!C.zf) goto L_10565643;
L_10565619:;
  /* 10565619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056561c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056561f push eax */
  push32((uint32_t)(EAX));
  /* 10565620 push 0x1058abec */
  push32((uint32_t)(0x1058abecu));
  /* 10565625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565629 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056562b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056562d call 0x10562bc0 */
  push32(0x10565632u); f_10562bc0();
  /* 10565632 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565635 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565638 jne 0x1056563b */
  if (!C.zf) goto L_1056563b;
  /* 1056563a int3  */
  x86_unimpl("int3 @ 0x1056563a");
L_1056563b:;
  /* 1056563b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056563d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056563f jne 0x10565619 */
  if (!C.zf) goto L_10565619;
  /* 10565641 jmp 0x10565672 */
  goto L_10565672;
L_10565643:;
  /* 10565643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565646 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10565649 push eax */
  push32((uint32_t)(EAX));
  /* 1056564a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056564d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10565650 push edx */
  push32((uint32_t)(EDX));
  /* 10565651 push 0x1058abe0 */
  push32((uint32_t)(0x1058abe0u));
  /* 10565656 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056565a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056565c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056565e call 0x10562bc0 */
  push32(0x10565663u); f_10562bc0();
  /* 10565663 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565666 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565669 jne 0x1056566c */
  if (!C.zf) goto L_1056566c;
  /* 1056566b int3  */
  x86_unimpl("int3 @ 0x1056566b");
L_1056566c:;
  /* 1056566c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056566e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565670 jne 0x10565643 */
  if (!C.zf) goto L_10565643;
L_10565672:;
  /* 10565672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565675 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10565678 push edx */
  push32((uint32_t)(EDX));
  /* 10565679 push 0x1058abd8 */
  push32((uint32_t)(0x1058abd8u));
  /* 1056567e push 0 */
  push32((uint32_t)(0x0u));
  /* 10565680 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565682 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565684 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565686 call 0x10562bc0 */
  push32(0x1056568bu); f_10562bc0();
  /* 1056568b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056568e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565691 jne 0x10565694 */
  if (!C.zf) goto L_10565694;
  /* 10565693 int3  */
  x86_unimpl("int3 @ 0x10565693");
L_10565694:;
  /* 10565694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565698 jne 0x10565672 */
  if (!C.zf) goto L_10565672;
  /* 1056569a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056569d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105656a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105656a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105656a9 jne 0x1056571c */
  if (!C.zf) goto L_1056571c;
L_105656ab:;
  /* 105656ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105656ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105656b1 push ecx */
  push32((uint32_t)(ECX));
  /* 105656b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105656b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105656b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105656bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105656c0 push eax */
  push32((uint32_t)(EAX));
  /* 105656c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105656c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105656c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105656c8 push 0x1058aba4 */
  push32((uint32_t)(0x1058aba4u));
  /* 105656cd push 0 */
  push32((uint32_t)(0x0u));
  /* 105656cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105656d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105656d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105656d5 call 0x10562bc0 */
  push32(0x105656dau); f_10562bc0();
  /* 105656da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105656dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105656e0 jne 0x105656e3 */
  if (!C.zf) goto L_105656e3;
  /* 105656e2 int3  */
  x86_unimpl("int3 @ 0x105656e2");
L_105656e3:;
  /* 105656e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105656e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105656e7 jne 0x105656ab */
  if (!C.zf) goto L_105656ab;
  /* 105656e9 cmp dword ptr [0x10590ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105656f0 je 0x1056570b */
  if (C.zf) goto L_1056570b;
  /* 105656f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105656f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105656f8 push ecx */
  push32((uint32_t)(ECX));
  /* 105656f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105656fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105656ff push edx */
  push32((uint32_t)(EDX));
  /* 10565700 call dword ptr [0x10590ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10590ed8))), 0x10565706u);
  /* 10565706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565709 jmp 0x10565717 */
  goto L_10565717;
L_1056570b:;
  /* 1056570b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056570e push eax */
  push32((uint32_t)(EAX));
  /* 1056570f call 0x10565800 */
  push32(0x10565714u); f_10565800();
  /* 10565714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10565717:;
  /* 10565717 jmp 0x105657bd */
  goto L_105657bd;
L_1056571c:;
  /* 1056571c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056571f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565723 jne 0x10565762 */
  if (!C.zf) goto L_10565762;
L_10565725:;
  /* 10565725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565728 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056572b push eax */
  push32((uint32_t)(EAX));
  /* 1056572c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056572f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565732 push ecx */
  push32((uint32_t)(ECX));
  /* 10565733 push 0x1058ab7c */
  push32((uint32_t)(0x1058ab7cu));
  /* 10565738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056573a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056573c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056573e push 0 */
  push32((uint32_t)(0x0u));
  /* 10565740 call 0x10562bc0 */
  push32(0x10565745u); f_10562bc0();
  /* 10565745 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565748 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056574b jne 0x1056574e */
  if (!C.zf) goto L_1056574e;
  /* 1056574d int3  */
  x86_unimpl("int3 @ 0x1056574d");
L_1056574e:;
  /* 1056574e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565750 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10565752 jne 0x10565725 */
  if (!C.zf) goto L_10565725;
  /* 10565754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565757 push eax */
  push32((uint32_t)(EAX));
  /* 10565758 call 0x10565800 */
  push32(0x1056575du); f_10565800();
  /* 1056575d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565760 jmp 0x105657bd */
  goto L_105657bd;
L_10565762:;
  /* 10565762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565765 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10565768 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056576e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565771 jne 0x105657bd */
  if (!C.zf) goto L_105657bd;
L_10565773:;
  /* 10565773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565776 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10565779 push ecx */
  push32((uint32_t)(ECX));
  /* 1056577a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056577d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10565780 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10565783 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10565788 push eax */
  push32((uint32_t)(EAX));
  /* 10565789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056578c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056578f push ecx */
  push32((uint32_t)(ECX));
  /* 10565790 push 0x1058ab48 */
  push32((uint32_t)(0x1058ab48u));
  /* 10565795 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565799 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056579b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056579d call 0x10562bc0 */
  push32(0x105657a2u); f_10562bc0();
  /* 105657a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105657a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105657a8 jne 0x105657ab */
  if (!C.zf) goto L_105657ab;
  /* 105657aa int3  */
  x86_unimpl("int3 @ 0x105657aa");
L_105657ab:;
  /* 105657ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105657ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105657af jne 0x10565773 */
  if (!C.zf) goto L_10565773;
  /* 105657b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105657b4 push eax */
  push32((uint32_t)(EAX));
  /* 105657b5 call 0x10565800 */
  push32(0x105657bau); f_10565800();
  /* 105657ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105657bd:;
  /* 105657bd jmp 0x10565598 */
  goto L_10565598;
L_105657c2:;
  /* 105657c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 105657c4 call 0x105675a0 */
  push32(0x105657c9u); f_105675a0();
  /* 105657c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105657cc:;
  /* 105657cc push 0x1058ab30 */
  push32((uint32_t)(0x1058ab30u));
  /* 105657d1 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 105657d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105657d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105657da push 0 */
  push32((uint32_t)(0x0u));
  /* 105657dc push 0 */
  push32((uint32_t)(0x0u));
  /* 105657de call 0x10562bc0 */
  push32(0x105657e3u); f_10562bc0();
  /* 105657e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105657e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105657e9 jne 0x105657ec */
  if (!C.zf) goto L_105657ec;
  /* 105657eb int3  */
  x86_unimpl("int3 @ 0x105657eb");
L_105657ec:;
  /* 105657ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105657ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105657f0 jne 0x105657cc */
  if (!C.zf) goto L_105657cc;
  /* 105657f2 pop edi */
  EDI = (pop32());
  /* 105657f3 pop esi */
  ESI = (pop32());
  /* 105657f4 pop ebx */
  EBX = (pop32());
  /* 105657f5 mov esp, ebp */
  ESP = (EBP);
  /* 105657f7 pop ebp */
  EBP = (pop32());
  /* 105657f8 ret  */
  ESPCHK(0x10565540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x10565800 (276 bytes, 89 insns) */
void f_10565800(void) {
  FTRACE(0x10565800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565800 push ebp */
  push32((uint32_t)(EBP));
  /* 10565801 mov ebp, esp */
  EBP = (ESP);
  /* 10565803 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565806 push ebx */
  push32((uint32_t)(EBX));
  /* 10565807 push esi */
  push32((uint32_t)(ESI));
  /* 10565808 push edi */
  push32((uint32_t)(EDI));
  /* 10565809 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10565810 jmp 0x1056581b */
  goto L_1056581b;
L_10565812:;
  /* 10565812 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10565815 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565818 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1056581b:;
  /* 1056581b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056581e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565822 jge 0x1056582f */
  if ((C.sf==C.of)) goto L_1056582f;
  /* 10565824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565827 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056582a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1056582d jmp 0x10565836 */
  goto L_10565836;
L_1056582f:;
  /* 1056582f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10565836:;
  /* 10565836 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10565839 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056583c jge 0x105658dc */
  if ((C.sf==C.of)) goto L_105658dc;
  /* 10565842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565845 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565848 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1056584b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1056584e cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565855 jle 0x10565873 */
  if ((C.zf||C.sf!=C.of)) goto L_10565873;
  /* 10565857 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1056585c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1056585f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10565865 push ecx */
  push32((uint32_t)(ECX));
  /* 10565866 call 0x10569b10 */
  push32(0x1056586bu); f_10569b10();
  /* 1056586b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056586e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10565871 jmp 0x10565890 */
  goto L_10565890;
L_10565873:;
  /* 10565873 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10565876 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056587c mov eax, dword ptr [0x1058dc98] */
  EAX = (r32((uint32_t)(0x1058dc98)));
  /* 10565881 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10565883 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10565887 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1056588d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10565890:;
  /* 10565890 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565894 je 0x105658a4 */
  if (C.zf) goto L_105658a4;
  /* 10565896 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10565899 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056589f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 105658a2 jmp 0x105658ab */
  goto L_105658ab;
L_105658a4:;
  /* 105658a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_105658ab:;
  /* 105658ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105658ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 105658b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 105658b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105658b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105658be push edx */
  push32((uint32_t)(EDX));
  /* 105658bf push 0x1058ac24 */
  push32((uint32_t)(0x1058ac24u));
  /* 105658c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105658c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105658ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 105658ce push ecx */
  push32((uint32_t)(ECX));
  /* 105658cf call 0x10569a10 */
  push32(0x105658d4u); f_10569a10();
  /* 105658d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105658d7 jmp 0x10565812 */
  goto L_10565812;
L_105658dc:;
  /* 105658dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105658df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_105658e4:;
  /* 105658e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 105658e7 push eax */
  push32((uint32_t)(EAX));
  /* 105658e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 105658eb push ecx */
  push32((uint32_t)(ECX));
  /* 105658ec push 0x1058ac14 */
  push32((uint32_t)(0x1058ac14u));
  /* 105658f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105658f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105658f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105658f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105658f9 call 0x10562bc0 */
  push32(0x105658feu); f_10562bc0();
  /* 105658fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565904 jne 0x10565907 */
  if (!C.zf) goto L_10565907;
  /* 10565906 int3  */
  x86_unimpl("int3 @ 0x10565906");
L_10565907:;
  /* 10565907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056590b jne 0x105658e4 */
  if (!C.zf) goto L_105658e4;
  /* 1056590d pop edi */
  EDI = (pop32());
  /* 1056590e pop esi */
  ESI = (pop32());
  /* 1056590f pop ebx */
  EBX = (pop32());
  /* 10565910 mov esp, ebp */
  ESP = (EBP);
  /* 10565912 pop ebp */
  EBP = (pop32());
  /* 10565913 ret  */
  ESPCHK(0x10565800u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x10565920 (116 bytes, 46 insns) */
void f_10565920(void) {
  FTRACE(0x10565920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565920 push ebp */
  push32((uint32_t)(EBP));
  /* 10565921 mov ebp, esp */
  EBP = (ESP);
  /* 10565923 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565926 push ebx */
  push32((uint32_t)(EBX));
  /* 10565927 push esi */
  push32((uint32_t)(ESI));
  /* 10565928 push edi */
  push32((uint32_t)(EDI));
  /* 10565929 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1056592c push eax */
  push32((uint32_t)(EAX));
  /* 1056592d call 0x105652a0 */
  push32(0x10565932u); f_105652a0();
  /* 10565932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565935 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565939 jne 0x10565954 */
  if (!C.zf) goto L_10565954;
  /* 1056593b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056593f jne 0x10565954 */
  if (!C.zf) goto L_10565954;
  /* 10565941 mov ecx, dword ptr [0x1058da84] */
  ECX = (r32((uint32_t)(0x1058da84)));
  /* 10565947 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1056594a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056594c je 0x1056598b */
  if (C.zf) goto L_1056598b;
  /* 1056594e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565952 je 0x1056598b */
  if (C.zf) goto L_1056598b;
L_10565954:;
  /* 10565954 push 0x1058ac2c */
  push32((uint32_t)(0x1058ac2cu));
  /* 10565959 push 0x1058a5f8 */
  push32((uint32_t)(0x1058a5f8u));
  /* 1056595e push 0 */
  push32((uint32_t)(0x0u));
  /* 10565960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565962 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565966 call 0x10562bc0 */
  push32(0x1056596bu); f_10562bc0();
  /* 1056596b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056596e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565971 jne 0x10565974 */
  if (!C.zf) goto L_10565974;
  /* 10565973 int3  */
  x86_unimpl("int3 @ 0x10565973");
L_10565974:;
  /* 10565974 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565976 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10565978 jne 0x10565954 */
  if (!C.zf) goto L_10565954;
  /* 1056597a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056597c call 0x10565540 */
  push32(0x10565981u); f_10565540();
  /* 10565981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565984 mov eax, 1 */
  EAX = (0x1u);
  /* 10565989 jmp 0x1056598d */
  goto L_1056598d;
L_1056598b:;
  /* 1056598b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056598d:;
  /* 1056598d pop edi */
  EDI = (pop32());
  /* 1056598e pop esi */
  ESI = (pop32());
  /* 1056598f pop ebx */
  EBX = (pop32());
  /* 10565990 mov esp, ebp */
  ESP = (EBP);
  /* 10565992 pop ebp */
  EBP = (pop32());
  /* 10565993 ret  */
  ESPCHK(0x10565920u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a0 @ 0x105659a0 (197 bytes, 79 insns) */
void f_105659a0(void) {
  FTRACE(0x105659a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105659a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105659a1 mov ebp, esp */
  EBP = (ESP);
  /* 105659a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105659a4 push ebx */
  push32((uint32_t)(EBX));
  /* 105659a5 push esi */
  push32((uint32_t)(ESI));
  /* 105659a6 push edi */
  push32((uint32_t)(EDI));
  /* 105659a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105659ab jne 0x105659b2 */
  if (!C.zf) goto L_105659b2;
  /* 105659ad jmp 0x10565a5e */
  goto L_10565a5e;
L_105659b2:;
  /* 105659b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105659b9 jmp 0x105659c4 */
  goto L_105659c4;
L_105659bb:;
  /* 105659bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105659be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105659c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105659c4:;
  /* 105659c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105659c8 jge 0x10565a0e */
  if ((C.sf==C.of)) goto L_10565a0e;
L_105659ca:;
  /* 105659ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105659cd mov edx, dword ptr [ecx*4 + 0x1058da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058da94)));
  /* 105659d4 push edx */
  push32((uint32_t)(EDX));
  /* 105659d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105659d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105659db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 105659df push edx */
  push32((uint32_t)(EDX));
  /* 105659e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105659e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105659e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 105659ea push edx */
  push32((uint32_t)(EDX));
  /* 105659eb push 0x1058ac88 */
  push32((uint32_t)(0x1058ac88u));
  /* 105659f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105659f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105659f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105659f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105659f8 call 0x10562bc0 */
  push32(0x105659fdu); f_10562bc0();
  /* 105659fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565a03 jne 0x10565a06 */
  if (!C.zf) goto L_10565a06;
  /* 10565a05 int3  */
  x86_unimpl("int3 @ 0x10565a05");
L_10565a06:;
  /* 10565a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565a0a jne 0x105659ca */
  if (!C.zf) goto L_105659ca;
  /* 10565a0c jmp 0x105659bb */
  goto L_105659bb;
L_10565a0e:;
  /* 10565a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565a11 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10565a14 push edx */
  push32((uint32_t)(EDX));
  /* 10565a15 push 0x1058ac64 */
  push32((uint32_t)(0x1058ac64u));
  /* 10565a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a22 call 0x10562bc0 */
  push32(0x10565a27u); f_10562bc0();
  /* 10565a27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565a2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565a2d jne 0x10565a30 */
  if (!C.zf) goto L_10565a30;
  /* 10565a2f int3  */
  x86_unimpl("int3 @ 0x10565a2f");
L_10565a30:;
  /* 10565a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565a34 jne 0x10565a0e */
  if (!C.zf) goto L_10565a0e;
L_10565a36:;
  /* 10565a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565a39 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10565a3c push edx */
  push32((uint32_t)(EDX));
  /* 10565a3d push 0x1058ac44 */
  push32((uint32_t)(0x1058ac44u));
  /* 10565a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10565a4a call 0x10562bc0 */
  push32(0x10565a4fu); f_10562bc0();
  /* 10565a4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565a52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565a55 jne 0x10565a58 */
  if (!C.zf) goto L_10565a58;
  /* 10565a57 int3  */
  x86_unimpl("int3 @ 0x10565a57");
L_10565a58:;
  /* 10565a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565a5c jne 0x10565a36 */
  if (!C.zf) goto L_10565a36;
L_10565a5e:;
  /* 10565a5e pop edi */
  EDI = (pop32());
  /* 10565a5f pop esi */
  ESI = (pop32());
  /* 10565a60 pop ebx */
  EBX = (pop32());
  /* 10565a61 mov esp, ebp */
  ESP = (EBP);
  /* 10565a63 pop ebp */
  EBP = (pop32());
  /* 10565a64 ret  */
  ESPCHK(0x105659a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10565a70 (329 bytes, 102 insns) */
void f_10565a70(void) {
  FTRACE(0x10565a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10565a71 mov ebp, esp */
  EBP = (ESP);
  /* 10565a73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565a76 cmp dword ptr [0x10591050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10591050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565a7d jne 0x10565a84 */
  if (!C.zf) goto L_10565a84;
  /* 10565a7f call 0x1056a3b0 */
  push32(0x10565a84u); f_1056a3b0();
L_10565a84:;
  /* 10565a84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10565a8b mov eax, dword ptr [0x1058f500] */
  EAX = (r32((uint32_t)(0x1058f500)));
  /* 10565a90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10565a93:;
  /* 10565a93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565a96 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10565a99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10565a9b je 0x10565ac9 */
  if (C.zf) goto L_10565ac9;
  /* 10565a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565aa0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565aa3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565aa6 je 0x10565ab1 */
  if (C.zf) goto L_10565ab1;
  /* 10565aa8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565aab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565aae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10565ab1:;
  /* 10565ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10565ab5 call 0x10566930 */
  push32(0x10565abau); f_10566930();
  /* 10565aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565ac0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10565ac4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10565ac7 jmp 0x10565a93 */
  goto L_10565a93;
L_10565ac9:;
  /* 10565ac9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10565acb push 0x1058aca8 */
  push32((uint32_t)(0x1058aca8u));
  /* 10565ad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10565ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565ad5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10565adc push ecx */
  push32((uint32_t)(ECX));
  /* 10565add call 0x10563b00 */
  push32(0x10565ae2u); f_10563b00();
  /* 10565ae2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565ae5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10565ae8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565aeb mov dword ptr [0x1058f534], edx */
  w32((uint32_t)(0x1058f534), (EDX));
  /* 10565af1 cmp dword ptr [0x1058f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565af8 jne 0x10565b04 */
  if (!C.zf) goto L_10565b04;
  /* 10565afa push 9 */
  push32((uint32_t)(0x9u));
  /* 10565afc call 0x10562a70 */
  push32(0x10565b01u); f_10562a70();
  /* 10565b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10565b04:;
  /* 10565b04 mov eax, dword ptr [0x1058f500] */
  EAX = (r32((uint32_t)(0x1058f500)));
  /* 10565b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10565b0c jmp 0x10565b17 */
  goto L_10565b17;
L_10565b0e:;
  /* 10565b0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565b11 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10565b17:;
  /* 10565b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565b1a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10565b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565b1f je 0x10565b87 */
  if (C.zf) goto L_10565b87;
  /* 10565b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565b24 push ecx */
  push32((uint32_t)(ECX));
  /* 10565b25 call 0x10566930 */
  push32(0x10565b2au); f_10566930();
  /* 10565b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10565b33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565b36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10565b39 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565b3c je 0x10565b85 */
  if (C.zf) goto L_10565b85;
  /* 10565b3e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10565b40 push 0x1058aca8 */
  push32((uint32_t)(0x1058aca8u));
  /* 10565b45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10565b47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10565b4b call 0x10563b00 */
  push32(0x10565b50u); f_10563b00();
  /* 10565b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565b56 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10565b58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565b5b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565b5e jne 0x10565b6a */
  if (!C.zf) goto L_10565b6a;
  /* 10565b60 push 9 */
  push32((uint32_t)(0x9u));
  /* 10565b62 call 0x10562a70 */
  push32(0x10565b67u); f_10562a70();
  /* 10565b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10565b6a:;
  /* 10565b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565b6d push ecx */
  push32((uint32_t)(ECX));
  /* 10565b6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565b71 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10565b73 push eax */
  push32((uint32_t)(EAX));
  /* 10565b74 call 0x10566ab0 */
  push32(0x10565b79u); f_10566ab0();
  /* 10565b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565b7f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10565b85:;
  /* 10565b85 jmp 0x10565b0e */
  goto L_10565b0e;
L_10565b87:;
  /* 10565b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10565b89 mov edx, dword ptr [0x1058f500] */
  EDX = (r32((uint32_t)(0x1058f500)));
  /* 10565b8f push edx */
  push32((uint32_t)(EDX));
  /* 10565b90 call 0x10564590 */
  push32(0x10565b95u); f_10564590();
  /* 10565b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565b98 mov dword ptr [0x1058f500], 0 */
  w32((uint32_t)(0x1058f500), (0x0u));
  /* 10565ba2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565ba5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10565bab mov dword ptr [0x10591040], 1 */
  w32((uint32_t)(0x10591040), (0x1u));
  /* 10565bb5 mov esp, ebp */
  ESP = (EBP);
  /* 10565bb7 pop ebp */
  EBP = (pop32());
  /* 10565bb8 ret  */
  ESPCHK(0x10565a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bc0 @ 0x10565bc0 (216 bytes, 69 insns) */
void f_10565bc0(void) {
  FTRACE(0x10565bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10565bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10565bc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565bc6 cmp dword ptr [0x10591050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10591050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565bcd jne 0x10565bd4 */
  if (!C.zf) goto L_10565bd4;
  /* 10565bcf call 0x1056a3b0 */
  push32(0x10565bd4u); f_1056a3b0();
L_10565bd4:;
  /* 10565bd4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10565bd9 push 0x1058f570 */
  push32((uint32_t)(0x1058f570u));
  /* 10565bde push 0 */
  push32((uint32_t)(0x0u));
  /* 10565be0 call dword ptr [0x105922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f8))), 0x10565be6u);
  /* 10565be6 mov dword ptr [0x1058f544], 0x1058f570 */
  w32((uint32_t)(0x1058f544), (0x1058f570u));
  /* 10565bf0 mov eax, dword ptr [0x1059106c] */
  EAX = (r32((uint32_t)(0x1059106c)));
  /* 10565bf5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565bf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10565bfa jne 0x10565c07 */
  if (!C.zf) goto L_10565c07;
  /* 10565bfc mov edx, dword ptr [0x1058f544] */
  EDX = (r32((uint32_t)(0x1058f544)));
  /* 10565c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10565c05 jmp 0x10565c0f */
  goto L_10565c0f;
L_10565c07:;
  /* 10565c07 mov eax, dword ptr [0x1059106c] */
  EAX = (r32((uint32_t)(0x1059106c)));
  /* 10565c0c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10565c0f:;
  /* 10565c0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10565c12 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10565c15 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10565c18 push edx */
  push32((uint32_t)(EDX));
  /* 10565c19 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10565c1c push eax */
  push32((uint32_t)(EAX));
  /* 10565c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10565c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10565c21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565c24 push ecx */
  push32((uint32_t)(ECX));
  /* 10565c25 call 0x10565ca0 */
  push32(0x10565c2au); f_10565ca0();
  /* 10565c2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565c2d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10565c32 push 0x1058acb4 */
  push32((uint32_t)(0x1058acb4u));
  /* 10565c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10565c39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565c3f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10565c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10565c43 call 0x10563b00 */
  push32(0x10565c48u); f_10563b00();
  /* 10565c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10565c4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565c52 jne 0x10565c5e */
  if (!C.zf) goto L_10565c5e;
  /* 10565c54 push 8 */
  push32((uint32_t)(0x8u));
  /* 10565c56 call 0x10562a70 */
  push32(0x10565c5bu); f_10562a70();
  /* 10565c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10565c5e:;
  /* 10565c5e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10565c61 push edx */
  push32((uint32_t)(EDX));
  /* 10565c62 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10565c65 push eax */
  push32((uint32_t)(EAX));
  /* 10565c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565c69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565c6c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10565c6f push eax */
  push32((uint32_t)(EAX));
  /* 10565c70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10565c74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565c77 push edx */
  push32((uint32_t)(EDX));
  /* 10565c78 call 0x10565ca0 */
  push32(0x10565c7du); f_10565ca0();
  /* 10565c7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10565c80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565c83 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565c86 mov dword ptr [0x1058f528], eax */
  w32((uint32_t)(0x1058f528), (EAX));
  /* 10565c8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10565c8e mov dword ptr [0x1058f52c], ecx */
  w32((uint32_t)(0x1058f52c), (ECX));
  /* 10565c94 mov esp, ebp */
  ESP = (EBP);
  /* 10565c96 pop ebp */
  EBP = (pop32());
  /* 10565c97 ret  */
  ESPCHK(0x10565bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10565ca0 (1060 bytes, 360 insns) */
void f_10565ca0(void) {
  FTRACE(0x10565ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10565ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10565ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10565ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565ca6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565ca9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10565caf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10565cb2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10565cb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10565cbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10565cbe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565cc2 je 0x10565cd5 */
  if (C.zf) goto L_10565cd5;
  /* 10565cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565cc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565cca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10565ccc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565ccf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565cd2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10565cd5:;
  /* 10565cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565cd8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565cdb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565cde jne 0x10565dad */
  if (!C.zf) goto L_10565dad;
L_10565ce4:;
  /* 10565ce4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565ce7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565cea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10565ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565cf0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565cf3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565cf6 je 0x10565d72 */
  if (C.zf) goto L_10565d72;
  /* 10565cf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565cfb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10565cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565d00 je 0x10565d72 */
  if (C.zf) goto L_10565d72;
  /* 10565d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565d05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565d07 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10565d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565d0b mov al, byte ptr [edx + 0x10590da1] */
  AL = (r8((uint32_t)(EDX + 0x10590da1)));
  /* 10565d11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10565d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565d16 je 0x10565d47 */
  if (C.zf) goto L_10565d47;
  /* 10565d18 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565d1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10565d1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565d23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10565d25 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565d29 je 0x10565d47 */
  if (C.zf) goto L_10565d47;
  /* 10565d2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565d31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10565d33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10565d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565d38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10565d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565d41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10565d47:;
  /* 10565d47 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565d4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10565d4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565d52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10565d54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565d58 je 0x10565d6d */
  if (C.zf) goto L_10565d6d;
  /* 10565d5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565d60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10565d62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10565d64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565d67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d6a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10565d6d:;
  /* 10565d6d jmp 0x10565ce4 */
  goto L_10565ce4;
L_10565d72:;
  /* 10565d72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565d75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10565d77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d7a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565d7d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10565d7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565d83 je 0x10565d94 */
  if (C.zf) goto L_10565d94;
  /* 10565d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565d88 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10565d8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565d8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565d91 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10565d94:;
  /* 10565d94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565d97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565d9a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565d9d jne 0x10565da8 */
  if (!C.zf) goto L_10565da8;
  /* 10565d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565da2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10565da8:;
  /* 10565da8 jmp 0x10565e7c */
  goto L_10565e7c;
L_10565dad:;
  /* 10565dad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565db0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10565db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565db5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565db8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10565dba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565dbe je 0x10565dd3 */
  if (C.zf) goto L_10565dd3;
  /* 10565dc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565dc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10565dc8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10565dca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565dcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565dd0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10565dd3:;
  /* 10565dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10565dd8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10565ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565dde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565de1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10565de4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565de7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10565ded xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565def mov dl, byte ptr [ecx + 0x10590da1] */
  DL = (r8((uint32_t)(ECX + 0x10590da1)));
  /* 10565df5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10565df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10565dfa je 0x10565e2b */
  if (C.zf) goto L_10565e2b;
  /* 10565dfc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565dff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10565e01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565e04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565e07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10565e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565e0d je 0x10565e22 */
  if (C.zf) goto L_10565e22;
  /* 10565e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565e15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10565e17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10565e19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565e1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565e1f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10565e22:;
  /* 10565e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565e28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10565e2b:;
  /* 10565e2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565e2e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10565e34 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565e37 je 0x10565e57 */
  if (C.zf) goto L_10565e57;
  /* 10565e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565e3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10565e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565e43 je 0x10565e57 */
  if (C.zf) goto L_10565e57;
  /* 10565e45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565e48 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10565e4e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565e51 jne 0x10565dad */
  if (!C.zf) goto L_10565dad;
L_10565e57:;
  /* 10565e57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10565e5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10565e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10565e62 jne 0x10565e6f */
  if (!C.zf) goto L_10565e6f;
  /* 10565e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565e67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10565e6d jmp 0x10565e7c */
  goto L_10565e7c;
L_10565e6f:;
  /* 10565e6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565e73 je 0x10565e7c */
  if (C.zf) goto L_10565e7c;
  /* 10565e75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565e78 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10565e7c:;
  /* 10565e7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10565e83:;
  /* 10565e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565e86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10565e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565e8b je 0x10565eae */
  if (C.zf) goto L_10565eae;
L_10565e8d:;
  /* 10565e8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565e90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10565e93 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565e96 je 0x10565ea3 */
  if (C.zf) goto L_10565ea3;
  /* 10565e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565e9b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565e9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565ea1 jne 0x10565eae */
  if (!C.zf) goto L_10565eae;
L_10565ea3:;
  /* 10565ea3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565ea6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565ea9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10565eac jmp 0x10565e8d */
  goto L_10565e8d;
L_10565eae:;
  /* 10565eae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565eb1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565eb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10565eb6 jne 0x10565ebd */
  if (!C.zf) goto L_10565ebd;
  /* 10565eb8 jmp 0x1056609b */
  goto L_1056609b;
L_10565ebd:;
  /* 10565ebd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565ec1 je 0x10565ed4 */
  if (C.zf) goto L_10565ed4;
  /* 10565ec3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565ec9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10565ecb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10565ece add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565ed1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10565ed4:;
  /* 10565ed4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10565ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10565ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565edc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10565edf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10565ee1:;
  /* 10565ee1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10565ee8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10565eef:;
  /* 10565eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565ef2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10565ef5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565ef8 jne 0x10565f0e */
  if (!C.zf) goto L_10565f0e;
  /* 10565efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565efd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565f00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10565f03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565f06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565f09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10565f0c jmp 0x10565eef */
  goto L_10565eef;
L_10565f0e:;
  /* 10565f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565f11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565f14 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565f17 jne 0x10565f6a */
  if (!C.zf) goto L_10565f6a;
  /* 10565f19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565f1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565f1e mov ecx, 2 */
  ECX = (0x2u);
  /* 10565f23 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10565f25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10565f27 jne 0x10565f62 */
  if (!C.zf) goto L_10565f62;
  /* 10565f29 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565f2d je 0x10565f4f */
  if (C.zf) goto L_10565f4f;
  /* 10565f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565f32 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10565f36 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565f39 jne 0x10565f46 */
  if (!C.zf) goto L_10565f46;
  /* 10565f3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565f3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565f41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10565f44 jmp 0x10565f4d */
  goto L_10565f4d;
L_10565f46:;
  /* 10565f46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10565f4d:;
  /* 10565f4d jmp 0x10565f56 */
  goto L_10565f56;
L_10565f4f:;
  /* 10565f4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10565f56:;
  /* 10565f56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10565f58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565f5c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10565f5f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10565f62:;
  /* 10565f62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565f65 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10565f67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10565f6a:;
  /* 10565f6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565f6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10565f70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10565f73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10565f76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10565f78 je 0x10565f9e */
  if (C.zf) goto L_10565f9e;
  /* 10565f7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565f7e je 0x10565f8f */
  if (C.zf) goto L_10565f8f;
  /* 10565f80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565f83 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10565f86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565f89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565f8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10565f8f:;
  /* 10565f8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565f92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10565f94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565f97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10565f9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10565f9c jmp 0x10565f6a */
  goto L_10565f6a;
L_10565f9e:;
  /* 10565f9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565fa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10565fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10565fa6 je 0x10565fc4 */
  if (C.zf) goto L_10565fc4;
  /* 10565fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565fac jne 0x10565fc9 */
  if (!C.zf) goto L_10565fc9;
  /* 10565fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565fb1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10565fb4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565fb7 je 0x10565fc4 */
  if (C.zf) goto L_10565fc4;
  /* 10565fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565fbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10565fbf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565fc2 jne 0x10565fc9 */
  if (!C.zf) goto L_10565fc9;
L_10565fc4:;
  /* 10565fc4 jmp 0x10566074 */
  goto L_10566074;
L_10565fc9:;
  /* 10565fc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565fcd je 0x10566066 */
  if (C.zf) goto L_10566066;
  /* 10565fd3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10565fd7 je 0x1056602d */
  if (C.zf) goto L_1056602d;
  /* 10565fd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10565fde mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10565fe0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10565fe2 mov cl, byte ptr [eax + 0x10590da1] */
  CL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 10565fe8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10565feb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10565fed je 0x10566018 */
  if (C.zf) goto L_10566018;
  /* 10565fef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10565ff5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10565ff7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10565ff9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10565ffc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10565fff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10566002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566008 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056600b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056600e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10566010 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566013 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10566016 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10566018:;
  /* 10566018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056601b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056601e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10566020 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10566022 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566028 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1056602b jmp 0x10566059 */
  goto L_10566059;
L_1056602d:;
  /* 1056602d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10566032 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10566034 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10566036 mov cl, byte ptr [eax + 0x10590da1] */
  CL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 1056603c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1056603f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10566041 je 0x10566059 */
  if (C.zf) goto L_10566059;
  /* 10566043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566046 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566049 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056604c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056604f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10566051 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566054 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10566057 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10566059:;
  /* 10566059 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056605c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056605e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10566064 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10566066:;
  /* 10566066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056606c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056606f jmp 0x10565ee1 */
  goto L_10565ee1;
L_10566074:;
  /* 10566074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566078 je 0x10566089 */
  if (C.zf) goto L_10566089;
  /* 1056607a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056607d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10566080 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566083 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566086 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10566089:;
  /* 10566089 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056608c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056608e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566091 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10566094 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10566096 jmp 0x10565e83 */
  goto L_10565e83;
L_1056609b:;
  /* 1056609b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056609f je 0x105660b3 */
  if (C.zf) goto L_105660b3;
  /* 105660a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105660a4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105660aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105660ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105660b0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105660b3:;
  /* 105660b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105660b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105660b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105660bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105660be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105660c0 mov esp, ebp */
  ESP = (EBP);
  /* 105660c2 pop ebp */
  EBP = (pop32());
  /* 105660c3 ret  */
  ESPCHK(0x10565ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x105660d0 (537 bytes, 173 insns) */
void f_105660d0(void) {
  FTRACE(0x105660d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105660d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105660d1 mov ebp, esp */
  EBP = (ESP);
  /* 105660d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105660d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105660dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 105660e4 cmp dword ptr [0x1058f674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105660eb jne 0x1056612a */
  if (!C.zf) goto L_1056612a;
  /* 105660ed call dword ptr [0x10592354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592354))), 0x105660f3u);
  /* 105660f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105660f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105660fa je 0x10566108 */
  if (C.zf) goto L_10566108;
  /* 105660fc mov dword ptr [0x1058f674], 1 */
  w32((uint32_t)(0x1058f674), (0x1u));
  /* 10566106 jmp 0x1056612a */
  goto L_1056612a;
L_10566108:;
  /* 10566108 call dword ptr [0x10592350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592350))), 0x1056610eu);
  /* 1056610e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10566111 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566115 je 0x10566123 */
  if (C.zf) goto L_10566123;
  /* 10566117 mov dword ptr [0x1058f674], 2 */
  w32((uint32_t)(0x1058f674), (0x2u));
  /* 10566121 jmp 0x1056612a */
  goto L_1056612a;
L_10566123:;
  /* 10566123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10566125 jmp 0x105662e5 */
  goto L_105662e5;
L_1056612a:;
  /* 1056612a cmp dword ptr [0x1058f674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566131 jne 0x1056622e */
  if (!C.zf) goto L_1056622e;
  /* 10566137 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056613b jne 0x10566153 */
  if (!C.zf) goto L_10566153;
  /* 1056613d call dword ptr [0x10592354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592354))), 0x10566143u);
  /* 10566143 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10566146 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056614a jne 0x10566153 */
  if (!C.zf) goto L_10566153;
  /* 1056614c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056614e jmp 0x105662e5 */
  goto L_105662e5;
L_10566153:;
  /* 10566153 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10566156 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10566159:;
  /* 10566159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056615c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056615e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10566161 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10566163 je 0x10566185 */
  if (C.zf) goto L_10566185;
  /* 10566165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566168 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056616b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056616e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566171 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10566173 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10566176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10566178 jne 0x10566183 */
  if (!C.zf) goto L_10566183;
  /* 1056617a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056617d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566180 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10566183:;
  /* 10566183 jmp 0x10566159 */
  goto L_10566159;
L_10566185:;
  /* 10566185 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566188 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056618b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1056618d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566190 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10566193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566195 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566197 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056619b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056619e push edx */
  push32((uint32_t)(EDX));
  /* 1056619f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105661a2 push eax */
  push32((uint32_t)(EAX));
  /* 105661a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105661a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105661a7 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x105661adu);
  /* 105661ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105661b0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105661b4 je 0x105661d4 */
  if (C.zf) goto L_105661d4;
  /* 105661b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 105661b8 push 0x1058acc0 */
  push32((uint32_t)(0x1058acc0u));
  /* 105661bd push 2 */
  push32((uint32_t)(0x2u));
  /* 105661bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105661c2 push ecx */
  push32((uint32_t)(ECX));
  /* 105661c3 call 0x10563b00 */
  push32(0x105661c8u); f_10563b00();
  /* 105661c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105661cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105661ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105661d2 jne 0x105661e5 */
  if (!C.zf) goto L_105661e5;
L_105661d4:;
  /* 105661d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105661d7 push edx */
  push32((uint32_t)(EDX));
  /* 105661d8 call dword ptr [0x10592348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592348))), 0x105661deu);
  /* 105661de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105661e0 jmp 0x105662e5 */
  goto L_105662e5;
L_105661e5:;
  /* 105661e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105661e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105661e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105661ec push eax */
  push32((uint32_t)(EAX));
  /* 105661ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105661f0 push ecx */
  push32((uint32_t)(ECX));
  /* 105661f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105661f4 push edx */
  push32((uint32_t)(EDX));
  /* 105661f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105661f8 push eax */
  push32((uint32_t)(EAX));
  /* 105661f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105661fb push 0 */
  push32((uint32_t)(0x0u));
  /* 105661fd call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x10566203u);
  /* 10566203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10566205 jne 0x1056621c */
  if (!C.zf) goto L_1056621c;
  /* 10566207 push 2 */
  push32((uint32_t)(0x2u));
  /* 10566209 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056620c push ecx */
  push32((uint32_t)(ECX));
  /* 1056620d call 0x10564590 */
  push32(0x10566212u); f_10564590();
  /* 10566212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566215 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1056621c:;
  /* 1056621c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056621f push edx */
  push32((uint32_t)(EDX));
  /* 10566220 call dword ptr [0x10592348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592348))), 0x10566226u);
  /* 10566226 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10566229 jmp 0x105662e5 */
  goto L_105662e5;
L_1056622e:;
  /* 1056622e cmp dword ptr [0x1058f674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566235 jne 0x105662e3 */
  if (!C.zf) goto L_105662e3;
  /* 1056623b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056623f jne 0x10566257 */
  if (!C.zf) goto L_10566257;
  /* 10566241 call dword ptr [0x10592350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592350))), 0x10566247u);
  /* 10566247 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1056624a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056624e jne 0x10566257 */
  if (!C.zf) goto L_10566257;
  /* 10566250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10566252 jmp 0x105662e5 */
  goto L_105662e5;
L_10566257:;
  /* 10566257 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056625a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056625d:;
  /* 1056625d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10566263 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10566265 je 0x10566285 */
  if (C.zf) goto L_10566285;
  /* 10566267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056626a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056626d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10566270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566273 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10566276 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10566278 jne 0x10566283 */
  if (!C.zf) goto L_10566283;
  /* 1056627a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056627d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566280 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10566283:;
  /* 10566283 jmp 0x1056625d */
  goto L_1056625d;
L_10566285:;
  /* 10566285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566288 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056628b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056628e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10566291 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10566296 push 0x1058acc0 */
  push32((uint32_t)(0x1058acc0u));
  /* 1056629b push 2 */
  push32((uint32_t)(0x2u));
  /* 1056629d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105662a0 push edx */
  push32((uint32_t)(EDX));
  /* 105662a1 call 0x10563b00 */
  push32(0x105662a6u); f_10563b00();
  /* 105662a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105662a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105662ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105662b0 jne 0x105662c0 */
  if (!C.zf) goto L_105662c0;
  /* 105662b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105662b5 push eax */
  push32((uint32_t)(EAX));
  /* 105662b6 call dword ptr [0x10592344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592344))), 0x105662bcu);
  /* 105662bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105662be jmp 0x105662e5 */
  goto L_105662e5;
L_105662c0:;
  /* 105662c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105662c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105662c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105662c7 push edx */
  push32((uint32_t)(EDX));
  /* 105662c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105662cb push eax */
  push32((uint32_t)(EAX));
  /* 105662cc call 0x1056a3e0 */
  push32(0x105662d1u); f_1056a3e0();
  /* 105662d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105662d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105662d7 push ecx */
  push32((uint32_t)(ECX));
  /* 105662d8 call dword ptr [0x10592344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592344))), 0x105662deu);
  /* 105662de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105662e1 jmp 0x105662e5 */
  goto L_105662e5;
L_105662e3:;
  /* 105662e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105662e5:;
  /* 105662e5 mov esp, ebp */
  ESP = (EBP);
  /* 105662e7 pop ebp */
  EBP = (pop32());
  /* 105662e8 ret  */
  ESPCHK(0x105660d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x105662f0 (77 bytes, 25 insns) */
void f_105662f0(void) {
  FTRACE(0x105662f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105662f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105662f1 mov ebp, esp */
  EBP = (ESP);
  /* 105662f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105662f5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105662fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105662fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566300 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10566303 push eax */
  push32((uint32_t)(EAX));
  /* 10566304 call dword ptr [0x1059232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059232c))), 0x1056630au);
  /* 1056630a mov dword ptr [0x10590ecc], eax */
  w32((uint32_t)(0x10590ecc), (EAX));
  /* 1056630f cmp dword ptr [0x10590ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566316 jne 0x1056631c */
  if (!C.zf) goto L_1056631c;
  /* 10566318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056631a jmp 0x1056633b */
  goto L_1056633b;
L_1056631c:;
  /* 1056631c call 0x10567da0 */
  push32(0x10566321u); f_10567da0();
  /* 10566321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10566323 jne 0x10566336 */
  if (!C.zf) goto L_10566336;
  /* 10566325 mov ecx, dword ptr [0x10590ecc] */
  ECX = (r32((uint32_t)(0x10590ecc)));
  /* 1056632b push ecx */
  push32((uint32_t)(ECX));
  /* 1056632c call dword ptr [0x10592358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592358))), 0x10566332u);
  /* 10566332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10566334 jmp 0x1056633b */
  goto L_1056633b;
L_10566336:;
  /* 10566336 mov eax, 1 */
  EAX = (0x1u);
L_1056633b:;
  /* 1056633b pop ebp */
  EBP = (pop32());
  /* 1056633c ret  */
  ESPCHK(0x105662f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006340 @ 0x10566340 (156 bytes, 48 insns) */
void f_10566340(void) {
  FTRACE(0x10566340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566340 push ebp */
  push32((uint32_t)(EBP));
  /* 10566341 mov ebp, esp */
  EBP = (ESP);
  /* 10566343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566346 mov eax, dword ptr [0x10590ec8] */
  EAX = (r32((uint32_t)(0x10590ec8)));
  /* 1056634b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056634e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10566355 jmp 0x10566360 */
  goto L_10566360;
L_10566357:;
  /* 10566357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056635a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056635d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10566360:;
  /* 10566360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566363 cmp edx, dword ptr [0x10590ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10590ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566369 jge 0x105663b6 */
  if ((C.sf==C.of)) goto L_105663b6;
  /* 1056636b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10566370 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10566375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566378 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056637b push ecx */
  push32((uint32_t)(ECX));
  /* 1056637c call dword ptr [0x10592364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592364))), 0x10566382u);
  /* 10566382 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10566387 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056638c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056638f push eax */
  push32((uint32_t)(EAX));
  /* 10566390 call dword ptr [0x10592364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592364))), 0x10566396u);
  /* 10566396 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566399 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1056639c push edx */
  push32((uint32_t)(EDX));
  /* 1056639d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056639f mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 105663a4 push eax */
  push32((uint32_t)(EAX));
  /* 105663a5 call dword ptr [0x10592360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592360))), 0x105663abu);
  /* 105663ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105663ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105663b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105663b4 jmp 0x10566357 */
  goto L_10566357;
L_105663b6:;
  /* 105663b6 mov edx, dword ptr [0x10590ec8] */
  EDX = (r32((uint32_t)(0x10590ec8)));
  /* 105663bc push edx */
  push32((uint32_t)(EDX));
  /* 105663bd push 0 */
  push32((uint32_t)(0x0u));
  /* 105663bf mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 105663c4 push eax */
  push32((uint32_t)(EAX));
  /* 105663c5 call dword ptr [0x10592360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592360))), 0x105663cbu);
  /* 105663cb mov ecx, dword ptr [0x10590ecc] */
  ECX = (r32((uint32_t)(0x10590ecc)));
  /* 105663d1 push ecx */
  push32((uint32_t)(ECX));
  /* 105663d2 call dword ptr [0x10592358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592358))), 0x105663d8u);
  /* 105663d8 mov esp, ebp */
  ESP = (EBP);
  /* 105663da pop ebp */
  EBP = (pop32());
  /* 105663db ret  */
  ESPCHK(0x10566340u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x105663e0 (73 bytes, 19 insns) */
void f_105663e0(void) {
  FTRACE(0x105663e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105663e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105663e1 mov ebp, esp */
  EBP = (ESP);
  /* 105663e3 cmp dword ptr [0x1058f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105663ea je 0x105663fe */
  if (C.zf) goto L_105663fe;
  /* 105663ec cmp dword ptr [0x1058f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105663f3 jne 0x10566427 */
  if (!C.zf) goto L_10566427;
  /* 105663f5 cmp dword ptr [0x1058f50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105663fc jne 0x10566427 */
  if (!C.zf) goto L_10566427;
L_105663fe:;
  /* 105663fe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10566403 call 0x10566430 */
  push32(0x10566408u); f_10566430();
  /* 10566408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056640b cmp dword ptr [0x1058f678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566412 je 0x1056641a */
  if (C.zf) goto L_1056641a;
  /* 10566414 call dword ptr [0x1058f678] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f678))), 0x1056641au);
L_1056641a:;
  /* 1056641a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1056641f call 0x10566430 */
  push32(0x10566424u); f_10566430();
  /* 10566424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10566427:;
  /* 10566427 pop ebp */
  EBP = (pop32());
  /* 10566428 ret  */
  ESPCHK(0x105663e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x10566430 (447 bytes, 131 insns) */
void f_10566430(void) {
  FTRACE(0x10566430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566430 push ebp */
  push32((uint32_t)(EBP));
  /* 10566431 mov ebp, esp */
  EBP = (ESP);
  /* 10566433 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566439 push ebx */
  push32((uint32_t)(EBX));
  /* 1056643a push esi */
  push32((uint32_t)(ESI));
  /* 1056643b push edi */
  push32((uint32_t)(EDI));
  /* 1056643c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10566443 jmp 0x1056644e */
  goto L_1056644e;
L_10566445:;
  /* 10566445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056644b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1056644e:;
  /* 1056644e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566452 jae 0x10566467 */
  if (!C.cf) goto L_10566467;
  /* 10566454 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056645a cmp edx, dword ptr [ecx*8 + 0x1058dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1058dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566461 jne 0x10566465 */
  if (!C.zf) goto L_10566465;
  /* 10566463 jmp 0x10566467 */
  goto L_10566467;
L_10566465:;
  /* 10566465 jmp 0x10566445 */
  goto L_10566445;
L_10566467:;
  /* 10566467 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056646a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056646d cmp ecx, dword ptr [eax*8 + 0x1058dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1058dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566474 jne 0x105665e8 */
  if (!C.zf) goto L_105665e8;
  /* 1056647a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566481 je 0x105664a4 */
  if (C.zf) goto L_105664a4;
  /* 10566483 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566486 mov eax, dword ptr [edx*8 + 0x1058dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1058dab4)));
  /* 1056648d push eax */
  push32((uint32_t)(EAX));
  /* 1056648e push 0 */
  push32((uint32_t)(0x0u));
  /* 10566490 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566494 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566496 call 0x10562bc0 */
  push32(0x1056649bu); f_10562bc0();
  /* 1056649b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056649e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105664a1 jne 0x105664a4 */
  if (!C.zf) goto L_105664a4;
  /* 105664a3 int3  */
  x86_unimpl("int3 @ 0x105664a3");
L_105664a4:;
  /* 105664a4 cmp dword ptr [0x1058f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105664ab je 0x105664bf */
  if (C.zf) goto L_105664bf;
  /* 105664ad cmp dword ptr [0x1058f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105664b4 jne 0x105664f8 */
  if (!C.zf) goto L_105664f8;
  /* 105664b6 cmp dword ptr [0x1058f50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105664bd jne 0x105664f8 */
  if (!C.zf) goto L_105664f8;
L_105664bf:;
  /* 105664bf push 0 */
  push32((uint32_t)(0x0u));
  /* 105664c1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 105664c4 push ecx */
  push32((uint32_t)(ECX));
  /* 105664c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105664c8 mov eax, dword ptr [edx*8 + 0x1058dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1058dab4)));
  /* 105664cf push eax */
  push32((uint32_t)(EAX));
  /* 105664d0 call 0x10566930 */
  push32(0x105664d5u); f_10566930();
  /* 105664d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105664d8 push eax */
  push32((uint32_t)(EAX));
  /* 105664d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105664dc mov edx, dword ptr [ecx*8 + 0x1058dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1058dab4)));
  /* 105664e3 push edx */
  push32((uint32_t)(EDX));
  /* 105664e4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105664e6 call dword ptr [0x105922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922dc))), 0x105664ecu);
  /* 105664ec push eax */
  push32((uint32_t)(EAX));
  /* 105664ed call dword ptr [0x105922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e0))), 0x105664f3u);
  /* 105664f3 jmp 0x105665e8 */
  goto L_105665e8;
L_105664f8:;
  /* 105664f8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105664ff je 0x105665e8 */
  if (C.zf) goto L_105665e8;
  /* 10566505 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1056650a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10566510 push eax */
  push32((uint32_t)(EAX));
  /* 10566511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566513 call dword ptr [0x105922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f8))), 0x10566519u);
  /* 10566519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056651b jne 0x10566531 */
  if (!C.zf) goto L_10566531;
  /* 1056651d push 0x1058a528 */
  push32((uint32_t)(0x1058a528u));
  /* 10566522 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10566528 push ecx */
  push32((uint32_t)(ECX));
  /* 10566529 call 0x10566ab0 */
  push32(0x1056652eu); f_10566ab0();
  /* 1056652e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10566531:;
  /* 10566531 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10566537 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1056653a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056653d push eax */
  push32((uint32_t)(EAX));
  /* 1056653e call 0x10566930 */
  push32(0x10566543u); f_10566930();
  /* 10566543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566546 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566549 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056654c jbe 0x1056657a */
  if ((C.cf||C.zf)) goto L_1056657a;
  /* 1056654e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10566554 push ecx */
  push32((uint32_t)(ECX));
  /* 10566555 call 0x10566930 */
  push32(0x1056655au); f_10566930();
  /* 1056655a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056655d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566560 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10566564 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10566567 push 3 */
  push32((uint32_t)(0x3u));
  /* 10566569 push 0x1058a524 */
  push32((uint32_t)(0x1058a524u));
  /* 1056656e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566571 push ecx */
  push32((uint32_t)(ECX));
  /* 10566572 call 0x10567320 */
  push32(0x10566577u); f_10567320();
  /* 10566577 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056657a:;
  /* 1056657a push 0x1058af7c */
  push32((uint32_t)(0x1058af7cu));
  /* 1056657f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10566585 push edx */
  push32((uint32_t)(EDX));
  /* 10566586 call 0x10566ab0 */
  push32(0x1056658bu); f_10566ab0();
  /* 1056658b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056658e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566591 push eax */
  push32((uint32_t)(EAX));
  /* 10566592 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10566598 push ecx */
  push32((uint32_t)(ECX));
  /* 10566599 call 0x10566ac0 */
  push32(0x1056659eu); f_10566ac0();
  /* 1056659e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105665a1 push 0x1058a49c */
  push32((uint32_t)(0x1058a49cu));
  /* 105665a6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105665ac push edx */
  push32((uint32_t)(EDX));
  /* 105665ad call 0x10566ac0 */
  push32(0x105665b2u); f_10566ac0();
  /* 105665b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105665b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105665b8 mov ecx, dword ptr [eax*8 + 0x1058dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1058dab4)));
  /* 105665bf push ecx */
  push32((uint32_t)(ECX));
  /* 105665c0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105665c6 push edx */
  push32((uint32_t)(EDX));
  /* 105665c7 call 0x10566ac0 */
  push32(0x105665ccu); f_10566ac0();
  /* 105665cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105665cf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 105665d4 push 0x1058af54 */
  push32((uint32_t)(0x1058af54u));
  /* 105665d9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 105665df push eax */
  push32((uint32_t)(EAX));
  /* 105665e0 call 0x10567260 */
  push32(0x105665e5u); f_10567260();
  /* 105665e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105665e8:;
  /* 105665e8 pop edi */
  EDI = (pop32());
  /* 105665e9 pop esi */
  ESI = (pop32());
  /* 105665ea pop ebx */
  EBX = (pop32());
  /* 105665eb mov esp, ebp */
  ESP = (EBP);
  /* 105665ed pop ebp */
  EBP = (pop32());
  /* 105665ee ret  */
  ESPCHK(0x10566430u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x105665f0 (80 bytes, 27 insns) */
void f_105665f0(void) {
  FTRACE(0x105665f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105665f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105665f1 mov ebp, esp */
  EBP = (ESP);
  /* 105665f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105665f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105665fb jmp 0x10566606 */
  goto L_10566606;
L_105665fd:;
  /* 105665fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566603 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10566606:;
  /* 10566606 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056660a jae 0x1056661f */
  if (!C.cf) goto L_1056661f;
  /* 1056660c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056660f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566612 cmp edx, dword ptr [ecx*8 + 0x1058dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1058dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566619 jne 0x1056661d */
  if (!C.zf) goto L_1056661d;
  /* 1056661b jmp 0x1056661f */
  goto L_1056661f;
L_1056661d:;
  /* 1056661d jmp 0x105665fd */
  goto L_105665fd;
L_1056661f:;
  /* 1056661f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566625 cmp ecx, dword ptr [eax*8 + 0x1058dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1058dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056662c jne 0x1056663a */
  if (!C.zf) goto L_1056663a;
  /* 1056662e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566631 mov eax, dword ptr [edx*8 + 0x1058dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1058dab4)));
  /* 10566638 jmp 0x1056663c */
  goto L_1056663c;
L_1056663a:;
  /* 1056663a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056663c:;
  /* 1056663c mov esp, ebp */
  ESP = (EBP);
  /* 1056663e pop ebp */
  EBP = (pop32());
  /* 1056663f ret  */
  ESPCHK(0x105665f0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10566640 (66 bytes, 28 insns) */
void f_10566640(void) {
  FTRACE(0x10566640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566640 push ebp */
  push32((uint32_t)(EBP));
  /* 10566641 mov ebp, esp */
  EBP = (ESP);
  /* 10566643 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566647 jne 0x10566667 */
  if (!C.zf) goto L_10566667;
  /* 10566649 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056664d jge 0x10566667 */
  if ((C.sf==C.of)) goto L_10566667;
  /* 1056664f push 1 */
  push32((uint32_t)(0x1u));
  /* 10566651 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566654 push eax */
  push32((uint32_t)(EAX));
  /* 10566655 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566658 push ecx */
  push32((uint32_t)(ECX));
  /* 10566659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056665c push edx */
  push32((uint32_t)(EDX));
  /* 1056665d call 0x10566690 */
  push32(0x10566662u); f_10566690();
  /* 10566662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566665 jmp 0x1056667d */
  goto L_1056667d;
L_10566667:;
  /* 10566667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056666c push eax */
  push32((uint32_t)(EAX));
  /* 1056666d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566670 push ecx */
  push32((uint32_t)(ECX));
  /* 10566671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566674 push edx */
  push32((uint32_t)(EDX));
  /* 10566675 call 0x10566690 */
  push32(0x1056667au); f_10566690();
  /* 1056667a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056667d:;
  /* 1056667d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566680 pop ebp */
  EBP = (pop32());
  /* 10566681 ret  */
  ESPCHK(0x10566640u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10566690 (194 bytes, 71 insns) */
void f_10566690(void) {
  FTRACE(0x10566690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566690 push ebp */
  push32((uint32_t)(EBP));
  /* 10566691 mov ebp, esp */
  EBP = (ESP);
  /* 10566693 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056669c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105666a0 je 0x105666b9 */
  if (C.zf) goto L_105666b9;
  /* 105666a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 105666a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105666ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105666b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105666b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105666b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105666b9:;
  /* 105666b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105666bf:;
  /* 105666bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105666c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105666c4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105666c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105666ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105666cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105666cf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105666d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105666d5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105666d9 jbe 0x105666f1 */
  if ((C.cf||C.zf)) goto L_105666f1;
  /* 105666db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105666de add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105666e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105666e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105666ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105666ef jmp 0x10566705 */
  goto L_10566705;
L_105666f1:;
  /* 105666f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105666f4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105666f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105666fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105666ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566702 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10566705:;
  /* 10566705 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566709 ja 0x105666bf */
  if ((!C.cf&&!C.zf)) goto L_105666bf;
  /* 1056670b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056670e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10566711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566714 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056671a:;
  /* 1056671a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056671d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1056671f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10566722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566725 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566728 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1056672a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1056672c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056672f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10566732 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10566734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566737 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056673a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056673d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566740 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566743 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10566746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566749 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056674c jb 0x1056671a */
  if (C.cf) goto L_1056671a;
  /* 1056674e mov esp, ebp */
  ESP = (EBP);
  /* 10566750 pop ebp */
  EBP = (pop32());
  /* 10566751 ret  */
  ESPCHK(0x10566690u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10566760 (63 bytes, 24 insns) */
void f_10566760(void) {
  FTRACE(0x10566760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566760 push ebp */
  push32((uint32_t)(EBP));
  /* 10566761 mov ebp, esp */
  EBP = (ESP);
  /* 10566763 push ecx */
  push32((uint32_t)(ECX));
  /* 10566764 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566768 jne 0x10566779 */
  if (!C.zf) goto L_10566779;
  /* 1056676a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056676e jge 0x10566779 */
  if ((C.sf==C.of)) goto L_10566779;
  /* 10566770 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10566777 jmp 0x10566780 */
  goto L_10566780;
L_10566779:;
  /* 10566779 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10566780:;
  /* 10566780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566783 push eax */
  push32((uint32_t)(EAX));
  /* 10566784 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566787 push ecx */
  push32((uint32_t)(ECX));
  /* 10566788 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056678b push edx */
  push32((uint32_t)(EDX));
  /* 1056678c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056678f push eax */
  push32((uint32_t)(EAX));
  /* 10566790 call 0x10566690 */
  push32(0x10566795u); f_10566690();
  /* 10566795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056679b mov esp, ebp */
  ESP = (EBP);
  /* 1056679d pop ebp */
  EBP = (pop32());
  /* 1056679e ret  */
  ESPCHK(0x10566760u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x105667a0 (30 bytes, 14 insns) */
void f_105667a0(void) {
  FTRACE(0x105667a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105667a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105667a1 mov ebp, esp */
  EBP = (ESP);
  /* 105667a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105667a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105667a8 push eax */
  push32((uint32_t)(EAX));
  /* 105667a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105667ac push ecx */
  push32((uint32_t)(ECX));
  /* 105667ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105667b0 push edx */
  push32((uint32_t)(EDX));
  /* 105667b1 call 0x10566690 */
  push32(0x105667b6u); f_10566690();
  /* 105667b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105667b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105667bc pop ebp */
  EBP = (pop32());
  /* 105667bd ret  */
  ESPCHK(0x105667a0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x105667c0 (72 bytes, 28 insns) */
void f_105667c0(void) {
  FTRACE(0x105667c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105667c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105667c1 mov ebp, esp */
  EBP = (ESP);
  /* 105667c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105667c4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105667c8 jne 0x105667e1 */
  if (!C.zf) goto L_105667e1;
  /* 105667ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105667ce jg 0x105667e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_105667e1;
  /* 105667d0 jl 0x105667d8 */
  if ((C.sf!=C.of)) goto L_105667d8;
  /* 105667d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105667d6 jae 0x105667e1 */
  if (!C.cf) goto L_105667e1;
L_105667d8:;
  /* 105667d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105667df jmp 0x105667e8 */
  goto L_105667e8;
L_105667e1:;
  /* 105667e1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105667e8:;
  /* 105667e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105667eb push eax */
  push32((uint32_t)(EAX));
  /* 105667ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105667ef push ecx */
  push32((uint32_t)(ECX));
  /* 105667f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105667f3 push edx */
  push32((uint32_t)(EDX));
  /* 105667f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105667f7 push eax */
  push32((uint32_t)(EAX));
  /* 105667f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105667fb push ecx */
  push32((uint32_t)(ECX));
  /* 105667fc call 0x10566810 */
  push32(0x10566801u); f_10566810();
  /* 10566801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566804 mov esp, ebp */
  ESP = (EBP);
  /* 10566806 pop ebp */
  EBP = (pop32());
  /* 10566807 ret  */
  ESPCHK(0x105667c0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10566810 (242 bytes, 91 insns) */
void f_10566810(void) {
  FTRACE(0x10566810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566810 push ebp */
  push32((uint32_t)(EBP));
  /* 10566811 mov ebp, esp */
  EBP = (ESP);
  /* 10566813 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566816 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056681c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566820 je 0x10566844 */
  if (C.zf) goto L_10566844;
  /* 10566822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566825 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10566828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056682b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056682e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10566831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566834 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10566836 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566839 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056683c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056683e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10566841 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10566844:;
  /* 10566844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566847 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1056684a:;
  /* 1056684a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056684d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056684f push ecx */
  push32((uint32_t)(ECX));
  /* 10566850 push eax */
  push32((uint32_t)(EAX));
  /* 10566851 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566854 push edx */
  push32((uint32_t)(EDX));
  /* 10566855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566858 push eax */
  push32((uint32_t)(EAX));
  /* 10566859 call 0x1056a790 */
  push32(0x1056685eu); f_1056a790();
  /* 1056685e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10566861 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10566864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10566866 push edx */
  push32((uint32_t)(EDX));
  /* 10566867 push ecx */
  push32((uint32_t)(ECX));
  /* 10566868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056686b push eax */
  push32((uint32_t)(EAX));
  /* 1056686c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056686f push ecx */
  push32((uint32_t)(ECX));
  /* 10566870 call 0x1056a720 */
  push32(0x10566875u); f_1056a720();
  /* 10566875 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10566878 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1056687b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056687f jbe 0x10566897 */
  if ((C.cf||C.zf)) goto L_10566897;
  /* 10566881 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566884 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566887 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056688a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1056688c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056688f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566892 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10566895 jmp 0x105668ab */
  goto L_105668ab;
L_10566897:;
  /* 10566897 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056689a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056689d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105668a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105668a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105668ab:;
  /* 105668ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105668af ja 0x1056684a */
  if ((!C.cf&&!C.zf)) goto L_1056684a;
  /* 105668b1 jb 0x105668b9 */
  if (C.cf) goto L_105668b9;
  /* 105668b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105668b7 ja 0x1056684a */
  if ((!C.cf&&!C.zf)) goto L_1056684a;
L_105668b9:;
  /* 105668b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105668bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105668c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105668c8:;
  /* 105668c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105668cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 105668d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105668d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105668d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105668da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105668dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 105668e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105668e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105668e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105668e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105668eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105668ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105668f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105668f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105668f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105668fa jb 0x105668c8 */
  if (C.cf) goto L_105668c8;
  /* 105668fc mov esp, ebp */
  ESP = (EBP);
  /* 105668fe pop ebp */
  EBP = (pop32());
  /* 105668ff ret 0x14 */
  ESPCHK(0x10566810u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10566910 (31 bytes, 15 insns) */
void f_10566910(void) {
  FTRACE(0x10566910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566910 push ebp */
  push32((uint32_t)(EBP));
  /* 10566911 mov ebp, esp */
  EBP = (ESP);
  /* 10566913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566915 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10566918 push eax */
  push32((uint32_t)(EAX));
  /* 10566919 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056691c push ecx */
  push32((uint32_t)(ECX));
  /* 1056691d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566920 push edx */
  push32((uint32_t)(EDX));
  /* 10566921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566924 push eax */
  push32((uint32_t)(EAX));
  /* 10566925 call 0x10566810 */
  push32(0x1056692au); f_10566810();
  /* 1056692a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056692d pop ebp */
  EBP = (pop32());
  /* 1056692e ret  */
  ESPCHK(0x10566910u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10566930 (123 bytes, 44 insns) */
void f_10566930(void) {
  FTRACE(0x10566930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566930 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10566934 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1056693a je 0x10566950 */
  if (C.zf) goto L_10566950;
L_1056693c:;
  /* 1056693c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1056693e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1056693f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10566941 je 0x10566983 */
  if (C.zf) goto L_10566983;
  /* 10566943 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10566949 jne 0x1056693c */
  if (!C.zf) goto L_1056693c;
  /* 1056694b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10566950:;
  /* 10566950 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10566952 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10566957 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566959 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056695c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1056695e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566961 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10566966 je 0x10566950 */
  if (C.zf) goto L_10566950;
  /* 10566968 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1056696b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1056696d je 0x105669a1 */
  if (C.zf) goto L_105669a1;
  /* 1056696f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10566971 je 0x10566997 */
  if (C.zf) goto L_10566997;
  /* 10566973 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10566978 je 0x1056698d */
  if (C.zf) goto L_1056698d;
  /* 1056697a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1056697f je 0x10566983 */
  if (C.zf) goto L_10566983;
  /* 10566981 jmp 0x10566950 */
  goto L_10566950;
L_10566983:;
  /* 10566983 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10566986 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1056698a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056698c ret  */
  ESPCHK(0x10566930u, _esp0);
  ESP += 4; return;
L_1056698d:;
  /* 1056698d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10566990 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10566994 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566996 ret  */
  ESPCHK(0x10566930u, _esp0);
  ESP += 4; return;
L_10566997:;
  /* 10566997 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1056699a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1056699e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105669a0 ret  */
  ESPCHK(0x10566930u, _esp0);
  ESP += 4; return;
L_105669a1:;
  /* 105669a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 105669a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105669a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105669aa ret  */
  ESPCHK(0x10566930u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x105669b0 (249 bytes, 93 insns) */
void f_105669b0(void) {
  FTRACE(0x105669b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105669b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105669b1 mov ebp, esp */
  EBP = (ESP);
  /* 105669b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105669b6 push ebx */
  push32((uint32_t)(EBX));
  /* 105669b7 push esi */
  push32((uint32_t)(ESI));
  /* 105669b8 push edi */
  push32((uint32_t)(EDI));
  /* 105669b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 105669bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105669bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 105669c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_105669c5:;
  /* 105669c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105669c9 jne 0x105669e9 */
  if (!C.zf) goto L_105669e9;
  /* 105669cb push 0x1058afb4 */
  push32((uint32_t)(0x1058afb4u));
  /* 105669d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105669d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 105669d4 push 0x1058afa8 */
  push32((uint32_t)(0x1058afa8u));
  /* 105669d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105669db call 0x10562bc0 */
  push32(0x105669e0u); f_10562bc0();
  /* 105669e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105669e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105669e6 jne 0x105669e9 */
  if (!C.zf) goto L_105669e9;
  /* 105669e8 int3  */
  x86_unimpl("int3 @ 0x105669e8");
L_105669e9:;
  /* 105669e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105669eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105669ed jne 0x105669c5 */
  if (!C.zf) goto L_105669c5;
L_105669ef:;
  /* 105669ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105669f3 jne 0x10566a13 */
  if (!C.zf) goto L_10566a13;
  /* 105669f5 push 0x1058af98 */
  push32((uint32_t)(0x1058af98u));
  /* 105669fa push 0 */
  push32((uint32_t)(0x0u));
  /* 105669fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 105669fe push 0x1058afa8 */
  push32((uint32_t)(0x1058afa8u));
  /* 10566a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10566a05 call 0x10562bc0 */
  push32(0x10566a0au); f_10562bc0();
  /* 10566a0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566a0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566a10 jne 0x10566a13 */
  if (!C.zf) goto L_10566a13;
  /* 10566a12 int3  */
  x86_unimpl("int3 @ 0x10566a12");
L_10566a13:;
  /* 10566a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10566a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10566a17 jne 0x105669ef */
  if (!C.zf) goto L_105669ef;
  /* 10566a19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a1c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10566a23 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566a29 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10566a2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566a32 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10566a34 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566a3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10566a3d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10566a40 push edx */
  push32((uint32_t)(EDX));
  /* 10566a41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566a44 push eax */
  push32((uint32_t)(EAX));
  /* 10566a45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10566a49 call 0x1056aa90 */
  push32(0x10566a4eu); f_1056aa90();
  /* 10566a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566a51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10566a54 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a57 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10566a5a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566a5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a60 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10566a63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a66 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566a6a jl 0x10566a8e */
  if ((C.sf!=C.of)) goto L_10566a8e;
  /* 10566a6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10566a71 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10566a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10566a76 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10566a7c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10566a7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a82 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10566a84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566a87 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a8a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10566a8c jmp 0x10566a9f */
  goto L_10566a9f;
L_10566a8e:;
  /* 10566a8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566a91 push eax */
  push32((uint32_t)(EAX));
  /* 10566a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566a94 call 0x1056a810 */
  push32(0x10566a99u); f_1056a810();
  /* 10566a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566a9c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10566a9f:;
  /* 10566a9f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10566aa2 pop edi */
  EDI = (pop32());
  /* 10566aa3 pop esi */
  ESI = (pop32());
  /* 10566aa4 pop ebx */
  EBX = (pop32());
  /* 10566aa5 mov esp, ebp */
  ESP = (EBP);
  /* 10566aa7 pop ebp */
  EBP = (pop32());
  /* 10566aa8 ret  */
  ESPCHK(0x105669b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x10566ab0 (7 bytes, 3 insns) */
void f_10566ab0(void) {
  FTRACE(0x10566ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566ab0 push edi */
  push32((uint32_t)(EDI));
  /* 10566ab1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10566ab5 jmp 0x10566b21 */
  jmp_ind(0x10566b21u); return;
}

/* FUN_10006ac0 @ 0x10566ac0 (224 bytes, 84 insns) */
void f_10566ac0(void) {
  FTRACE(0x10566ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566ac0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10566ac4 push edi */
  push32((uint32_t)(EDI));
  /* 10566ac5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10566acb je 0x10566adc */
  if (C.zf) goto L_10566adc;
L_10566acd:;
  /* 10566acd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10566acf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10566ad0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10566ad2 je 0x10566b0f */
  if (C.zf) goto L_10566b0f;
  /* 10566ad4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10566ada jne 0x10566acd */
  if (!C.zf) goto L_10566acd;
L_10566adc:;
  /* 10566adc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10566ade mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10566ae3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566ae5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10566ae8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10566aea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566aed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10566af2 je 0x10566adc */
  if (C.zf) goto L_10566adc;
  /* 10566af4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10566af7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10566af9 je 0x10566b1e */
  if (C.zf) goto L_10566b1e;
  /* 10566afb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10566afd je 0x10566b19 */
  if (C.zf) goto L_10566b19;
  /* 10566aff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10566b04 je 0x10566b14 */
  if (C.zf) goto L_10566b14;
  /* 10566b06 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10566b0b je 0x10566b0f */
  if (C.zf) goto L_10566b0f;
  /* 10566b0d jmp 0x10566adc */
  goto L_10566adc;
L_10566b0f:;
  /* 10566b0f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10566b12 jmp 0x10566b21 */
  goto L_10566b21;
L_10566b14:;
  /* 10566b14 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10566b17 jmp 0x10566b21 */
  goto L_10566b21;
L_10566b19:;
  /* 10566b19 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10566b1c jmp 0x10566b21 */
  goto L_10566b21;
L_10566b1e:;
  /* 10566b1e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10566b21:;
  /* 10566b21 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10566b25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10566b2b je 0x10566b46 */
  if (C.zf) goto L_10566b46;
L_10566b2d:;
  /* 10566b2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10566b2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10566b30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10566b32 je 0x10566b98 */
  if (C.zf) goto L_10566b98;
  /* 10566b34 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10566b36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10566b37 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10566b3d jne 0x10566b2d */
  if (!C.zf) goto L_10566b2d;
  /* 10566b3f jmp 0x10566b46 */
  goto L_10566b46;
L_10566b41:;
  /* 10566b41 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10566b43 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10566b46:;
  /* 10566b46 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10566b4b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10566b4d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566b4f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10566b52 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10566b54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10566b56 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566b59 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10566b5e je 0x10566b41 */
  if (C.zf) goto L_10566b41;
  /* 10566b60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10566b62 je 0x10566b98 */
  if (C.zf) goto L_10566b98;
  /* 10566b64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10566b66 je 0x10566b8f */
  if (C.zf) goto L_10566b8f;
  /* 10566b68 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10566b6e je 0x10566b82 */
  if (C.zf) goto L_10566b82;
  /* 10566b70 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10566b76 je 0x10566b7a */
  if (C.zf) goto L_10566b7a;
  /* 10566b78 jmp 0x10566b41 */
  goto L_10566b41;
L_10566b7a:;
  /* 10566b7a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10566b7c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10566b80 pop edi */
  EDI = (pop32());
  /* 10566b81 ret  */
  ESPCHK(0x10566ac0u, _esp0);
  ESP += 4; return;
L_10566b82:;
  /* 10566b82 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10566b85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10566b89 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10566b8d pop edi */
  EDI = (pop32());
  /* 10566b8e ret  */
  ESPCHK(0x10566ac0u, _esp0);
  ESP += 4; return;
L_10566b8f:;
  /* 10566b8f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10566b92 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10566b96 pop edi */
  EDI = (pop32());
  /* 10566b97 ret  */
  ESPCHK(0x10566ac0u, _esp0);
  ESP += 4; return;
L_10566b98:;
  /* 10566b98 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10566b9a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10566b9e pop edi */
  EDI = (pop32());
  /* 10566b9f ret  */
  ESPCHK(0x10566ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x10566ba0 (243 bytes, 91 insns) */
void f_10566ba0(void) {
  FTRACE(0x10566ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10566ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10566ba3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 10566ba7 push esi */
  push32((uint32_t)(ESI));
  /* 10566ba8 push edi */
  push32((uint32_t)(EDI));
  /* 10566ba9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10566bac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10566baf:;
  /* 10566baf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566bb3 jne 0x10566bd3 */
  if (!C.zf) goto L_10566bd3;
  /* 10566bb5 push 0x1058afb4 */
  push32((uint32_t)(0x1058afb4u));
  /* 10566bba push 0 */
  push32((uint32_t)(0x0u));
  /* 10566bbc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10566bbe push 0x1058afc4 */
  push32((uint32_t)(0x1058afc4u));
  /* 10566bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10566bc5 call 0x10562bc0 */
  push32(0x10566bcau); f_10562bc0();
  /* 10566bca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566bcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566bd0 jne 0x10566bd3 */
  if (!C.zf) goto L_10566bd3;
  /* 10566bd2 int3  */
  x86_unimpl("int3 @ 0x10566bd2");
L_10566bd3:;
  /* 10566bd3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10566bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10566bd7 jne 0x10566baf */
  if (!C.zf) goto L_10566baf;
L_10566bd9:;
  /* 10566bd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566bdd jne 0x10566bfd */
  if (!C.zf) goto L_10566bfd;
  /* 10566bdf push 0x1058af98 */
  push32((uint32_t)(0x1058af98u));
  /* 10566be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10566be6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10566be8 push 0x1058afc4 */
  push32((uint32_t)(0x1058afc4u));
  /* 10566bed push 2 */
  push32((uint32_t)(0x2u));
  /* 10566bef call 0x10562bc0 */
  push32(0x10566bf4u); f_10562bc0();
  /* 10566bf4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566bf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566bfa jne 0x10566bfd */
  if (!C.zf) goto L_10566bfd;
  /* 10566bfc int3  */
  x86_unimpl("int3 @ 0x10566bfc");
L_10566bfd:;
  /* 10566bfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10566bff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10566c01 jne 0x10566bd9 */
  if (!C.zf) goto L_10566bd9;
  /* 10566c03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c06 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10566c0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566c13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10566c16 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566c1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10566c1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566c24 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10566c27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10566c2a push ecx */
  push32((uint32_t)(ECX));
  /* 10566c2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10566c2e push edx */
  push32((uint32_t)(EDX));
  /* 10566c2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c32 push eax */
  push32((uint32_t)(EAX));
  /* 10566c33 call 0x1056aa90 */
  push32(0x10566c38u); f_1056aa90();
  /* 10566c38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566c3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10566c3e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c41 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10566c44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566c47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10566c4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c50 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566c54 jl 0x10566c78 */
  if ((C.sf!=C.of)) goto L_10566c78;
  /* 10566c56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10566c5b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10566c5e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10566c60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10566c66 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10566c69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10566c6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566c71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10566c76 jmp 0x10566c89 */
  goto L_10566c89;
L_10566c78:;
  /* 10566c78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10566c7b push edx */
  push32((uint32_t)(EDX));
  /* 10566c7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10566c7e call 0x1056a810 */
  push32(0x10566c83u); f_1056a810();
  /* 10566c83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566c86 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10566c89:;
  /* 10566c89 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10566c8c pop edi */
  EDI = (pop32());
  /* 10566c8d pop esi */
  ESI = (pop32());
  /* 10566c8e pop ebx */
  EBX = (pop32());
  /* 10566c8f mov esp, ebp */
  ESP = (EBP);
  /* 10566c91 pop ebp */
  EBP = (pop32());
  /* 10566c92 ret  */
  ESPCHK(0x10566ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x10566ca0 (47 bytes, 17 insns) */
void f_10566ca0(void) {
  FTRACE(0x10566ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 10566ca1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566ca6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10566caa jb 0x10566cc0 */
  if (C.cf) goto L_10566cc0;
L_10566cac:;
  /* 10566cac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566cb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566cb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10566cb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566cbe jae 0x10566cac */
  if (!C.cf) goto L_10566cac;
L_10566cc0:;
  /* 10566cc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566cc2 mov eax, esp */
  EAX = (ESP);
  /* 10566cc4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10566cc6 mov esp, ecx */
  ESP = (ECX);
  /* 10566cc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10566cca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10566ccd push eax */
  push32((uint32_t)(EAX));
  /* 10566cce ret  */
  ESPCHK(0x10566ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x10566cd0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10566cd0(void) {
  FTRACE(0x10566cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10566cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10566cd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566cd6 push esi */
  push32((uint32_t)(ESI));
  /* 10566cd7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566cdb je 0x10566ce3 */
  if (C.zf) goto L_10566ce3;
  /* 10566cdd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566ce1 jne 0x10566ce8 */
  if (!C.zf) goto L_10566ce8;
L_10566ce3:;
  /* 10566ce3 jmp 0x10566eb8 */
  goto L_10566eb8;
L_10566ce8:;
  /* 10566ce8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566cec je 0x10566d04 */
  if (C.zf) goto L_10566d04;
  /* 10566cee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566cf2 je 0x10566d04 */
  if (C.zf) goto L_10566d04;
  /* 10566cf4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566cf8 je 0x10566d04 */
  if (C.zf) goto L_10566d04;
  /* 10566cfa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566cfe jne 0x10566de1 */
  if (!C.zf) goto L_10566de1;
L_10566d04:;
  /* 10566d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566d06 call 0x10567500 */
  push32(0x10566d0bu); f_10567500();
  /* 10566d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566d0e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566d12 je 0x10566d1a */
  if (C.zf) goto L_10566d1a;
  /* 10566d14 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566d18 jne 0x10566d5f */
  if (!C.zf) goto L_10566d5f;
L_10566d1a:;
  /* 10566d1a cmp dword ptr [0x1058f68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566d21 jne 0x10566d5f */
  if (!C.zf) goto L_10566d5f;
  /* 10566d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566d25 push 0x10566f00 */
  push32((uint32_t)(0x10566f00u));
  /* 10566d2a call dword ptr [0x10592368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592368))), 0x10566d30u);
  /* 10566d30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566d33 jne 0x10566d41 */
  if (!C.zf) goto L_10566d41;
  /* 10566d35 mov dword ptr [0x1058f68c], 1 */
  w32((uint32_t)(0x1058f68c), (0x1u));
  /* 10566d3f jmp 0x10566d5f */
  goto L_10566d5f;
L_10566d41:;
  /* 10566d41 call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x10566d47u);
  /* 10566d47 mov esi, eax */
  ESI = (EAX);
  /* 10566d49 call 0x1056b9e0 */
  push32(0x10566d4eu); f_1056b9e0();
  /* 10566d4e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10566d50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566d52 call 0x105675a0 */
  push32(0x10566d57u); f_105675a0();
  /* 10566d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566d5a jmp 0x10566eb8 */
  goto L_10566eb8;
L_10566d5f:;
  /* 10566d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566d62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10566d65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10566d68 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566d6b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10566d6e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566d72 ja 0x10566dd2 */
  if ((!C.cf&&!C.zf)) goto L_10566dd2;
  /* 10566d74 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10566d77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10566d79 mov dl, byte ptr [eax + 0x10566edf] */
  DL = (r8((uint32_t)(EAX + 0x10566edf)));
  /* 10566d7f jmp dword ptr [edx*4 + 0x10566ecb] */
  switch (EDX) {
    case 0: goto L_10566d86;
    case 1: goto L_10566dc0;
    case 2: goto L_10566d9a;
    case 3: goto L_10566dad;
    case 4: goto L_10566dd2;
    default: x86_unimpl("switch@0x10566d7f out of table"); return;
  }
L_10566d86:;
  /* 10566d86 mov ecx, dword ptr [0x1058f67c] */
  ECX = (r32((uint32_t)(0x1058f67c)));
  /* 10566d8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10566d8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566d92 mov dword ptr [0x1058f67c], edx */
  w32((uint32_t)(0x1058f67c), (EDX));
  /* 10566d98 jmp 0x10566dd2 */
  goto L_10566dd2;
L_10566d9a:;
  /* 10566d9a mov eax, dword ptr [0x1058f680] */
  EAX = (r32((uint32_t)(0x1058f680)));
  /* 10566d9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10566da2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566da5 mov dword ptr [0x1058f680], ecx */
  w32((uint32_t)(0x1058f680), (ECX));
  /* 10566dab jmp 0x10566dd2 */
  goto L_10566dd2;
L_10566dad:;
  /* 10566dad mov edx, dword ptr [0x1058f684] */
  EDX = (r32((uint32_t)(0x1058f684)));
  /* 10566db3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10566db6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566db9 mov dword ptr [0x1058f684], eax */
  w32((uint32_t)(0x1058f684), (EAX));
  /* 10566dbe jmp 0x10566dd2 */
  goto L_10566dd2;
L_10566dc0:;
  /* 10566dc0 mov ecx, dword ptr [0x1058f688] */
  ECX = (r32((uint32_t)(0x1058f688)));
  /* 10566dc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10566dc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566dcc mov dword ptr [0x1058f688], edx */
  w32((uint32_t)(0x1058f688), (EDX));
L_10566dd2:;
  /* 10566dd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566dd4 call 0x105675a0 */
  push32(0x10566dd9u); f_105675a0();
  /* 10566dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566ddc jmp 0x10566eb3 */
  goto L_10566eb3;
L_10566de1:;
  /* 10566de1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566de5 je 0x10566df8 */
  if (C.zf) goto L_10566df8;
  /* 10566de7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566deb je 0x10566df8 */
  if (C.zf) goto L_10566df8;
  /* 10566ded cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566df1 je 0x10566df8 */
  if (C.zf) goto L_10566df8;
  /* 10566df3 jmp 0x10566eb8 */
  goto L_10566eb8;
L_10566df8:;
  /* 10566df8 call 0x10563540 */
  push32(0x10566dfdu); f_10563540();
  /* 10566dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10566e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566e03 cmp dword ptr [eax + 0x50], 0x1058dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1058dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566e0a jne 0x10566e55 */
  if (!C.zf) goto L_10566e55;
  /* 10566e0c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10566e11 push 0x1058afd0 */
  push32((uint32_t)(0x1058afd0u));
  /* 10566e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10566e18 mov ecx, dword ptr [0x1058dc80] */
  ECX = (r32((uint32_t)(0x1058dc80)));
  /* 10566e1e push ecx */
  push32((uint32_t)(ECX));
  /* 10566e1f call 0x10563b00 */
  push32(0x10566e24u); f_10563b00();
  /* 10566e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566e2a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10566e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566e30 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566e34 je 0x10566e53 */
  if (C.zf) goto L_10566e53;
  /* 10566e36 mov ecx, dword ptr [0x1058dc80] */
  ECX = (r32((uint32_t)(0x1058dc80)));
  /* 10566e3c push ecx */
  push32((uint32_t)(ECX));
  /* 10566e3d push 0x1058dc00 */
  push32((uint32_t)(0x1058dc00u));
  /* 10566e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566e45 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10566e48 push eax */
  push32((uint32_t)(EAX));
  /* 10566e49 call 0x1056a3e0 */
  push32(0x10566e4eu); f_1056a3e0();
  /* 10566e4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566e51 jmp 0x10566e55 */
  goto L_10566e55;
L_10566e53:;
  /* 10566e53 jmp 0x10566eb8 */
  goto L_10566eb8;
L_10566e55:;
  /* 10566e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566e58 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10566e5b push edx */
  push32((uint32_t)(EDX));
  /* 10566e5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566e5f push eax */
  push32((uint32_t)(EAX));
  /* 10566e60 call 0x105671e0 */
  push32(0x10566e65u); f_105671e0();
  /* 10566e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566e68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10566e6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566e6f jne 0x10566e73 */
  if (!C.zf) goto L_10566e73;
  /* 10566e71 jmp 0x10566eb8 */
  goto L_10566eb8;
L_10566e73:;
  /* 10566e73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566e76 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10566e79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10566e7c:;
  /* 10566e7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566e7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10566e82 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566e85 jne 0x10566eb3 */
  if (!C.zf) goto L_10566eb3;
  /* 10566e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566e8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10566e8d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10566e90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566e93 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566e96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10566e99 mov edx, dword ptr [0x1058dc84] */
  EDX = (r32((uint32_t)(0x1058dc84)));
  /* 10566e9f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10566ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566ea5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10566ea8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566eaa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566ead jb 0x10566eb1 */
  if (C.cf) goto L_10566eb1;
  /* 10566eaf jmp 0x10566eb3 */
  goto L_10566eb3;
L_10566eb1:;
  /* 10566eb1 jmp 0x10566e7c */
  goto L_10566e7c;
L_10566eb3:;
  /* 10566eb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566eb6 jmp 0x10566ec6 */
  goto L_10566ec6;
L_10566eb8:;
  /* 10566eb8 call 0x1056b9d0 */
  push32(0x10566ebdu); f_1056b9d0();
  /* 10566ebd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10566ec3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10566ec6:;
  /* 10566ec6 pop esi */
  ESI = (pop32());
  /* 10566ec7 mov esp, ebp */
  ESP = (EBP);
  /* 10566ec9 pop ebp */
  EBP = (pop32());
  /* 10566eca ret  */
  ESPCHK(0x10566cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x10566f00 (146 bytes, 45 insns) */
void f_10566f00(void) {
  FTRACE(0x10566f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10566f01 mov ebp, esp */
  EBP = (ESP);
  /* 10566f03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566f08 call 0x10567500 */
  push32(0x10566f0du); f_10567500();
  /* 10566f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566f10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566f14 jne 0x10566f2e */
  if (!C.zf) goto L_10566f2e;
  /* 10566f16 mov dword ptr [ebp - 8], 0x1058f67c */
  w32((uint32_t)(EBP + -0x8), (0x1058f67cu));
  /* 10566f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566f20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10566f22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10566f25 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10566f2c jmp 0x10566f44 */
  goto L_10566f44;
L_10566f2e:;
  /* 10566f2e mov dword ptr [ebp - 8], 0x1058f680 */
  w32((uint32_t)(EBP + -0x8), (0x1058f680u));
  /* 10566f35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566f38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10566f3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10566f3d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10566f44:;
  /* 10566f44 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566f48 jne 0x10566f58 */
  if (!C.zf) goto L_10566f58;
  /* 10566f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10566f4c call 0x105675a0 */
  push32(0x10566f51u); f_105675a0();
  /* 10566f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10566f56 jmp 0x10566f8c */
  goto L_10566f8c;
L_10566f58:;
  /* 10566f58 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566f5c je 0x10566f7d */
  if (C.zf) goto L_10566f7d;
  /* 10566f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10566f61 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10566f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10566f69 call 0x105675a0 */
  push32(0x10566f6eu); f_105675a0();
  /* 10566f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10566f74 push edx */
  push32((uint32_t)(EDX));
  /* 10566f75 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10566f78u);
  /* 10566f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10566f7b jmp 0x10566f87 */
  goto L_10566f87;
L_10566f7d:;
  /* 10566f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10566f7f call 0x105675a0 */
  push32(0x10566f84u); f_105675a0();
  /* 10566f84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10566f87:;
  /* 10566f87 mov eax, 1 */
  EAX = (0x1u);
L_10566f8c:;
  /* 10566f8c mov esp, ebp */
  ESP = (EBP);
  /* 10566f8e pop ebp */
  EBP = (pop32());
  /* 10566f8f ret 4 */
  ESPCHK(0x10566f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10006fa0 @ 0x10566fa0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10566fa0(void) {
  FTRACE(0x10566fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10566fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10566fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10566fa3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566fa6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10566fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10566fb0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10566fb3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10566fb6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10566fb9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10566fbc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10566fc0 ja 0x1056706e */
  if ((!C.cf&&!C.zf)) goto L_1056706e;
  /* 10566fc6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10566fc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10566fcb mov dl, byte ptr [eax + 0x105671c2] */
  DL = (r8((uint32_t)(EAX + 0x105671c2)));
  /* 10566fd1 jmp dword ptr [edx*4 + 0x105671aa] */
  switch (EDX) {
    case 0: goto L_10566fd8;
    case 1: goto L_10567043;
    case 2: goto L_10567029;
    case 3: goto L_10566ff5;
    case 4: goto L_1056700f;
    case 5: goto L_1056706e;
    default: x86_unimpl("switch@0x10566fd1 out of table"); return;
  }
L_10566fd8:;
  /* 10566fd8 mov dword ptr [ebp - 0x18], 0x1058f67c */
  w32((uint32_t)(EBP + -0x18), (0x1058f67cu));
  /* 10566fdf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10566fe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10566fe4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10566fe7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10566fea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10566fed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10566ff0 jmp 0x10567076 */
  goto L_10567076;
L_10566ff5:;
  /* 10566ff5 mov dword ptr [ebp - 0x18], 0x1058f680 */
  w32((uint32_t)(EBP + -0x18), (0x1058f680u));
  /* 10566ffc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10566fff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10567001 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10567004 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567007 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056700a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1056700d jmp 0x10567076 */
  goto L_10567076;
L_1056700f:;
  /* 1056700f mov dword ptr [ebp - 0x18], 0x1058f684 */
  w32((uint32_t)(EBP + -0x18), (0x1058f684u));
  /* 10567016 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10567019 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056701b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1056701e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567021 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567024 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10567027 jmp 0x10567076 */
  goto L_10567076;
L_10567029:;
  /* 10567029 mov dword ptr [ebp - 0x18], 0x1058f688 */
  w32((uint32_t)(EBP + -0x18), (0x1058f688u));
  /* 10567030 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10567033 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10567035 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10567038 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056703b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056703e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10567041 jmp 0x10567076 */
  goto L_10567076;
L_10567043:;
  /* 10567043 call 0x10563540 */
  push32(0x10567048u); f_10563540();
  /* 10567048 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056704b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056704e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10567051 push edx */
  push32((uint32_t)(EDX));
  /* 10567052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567055 push eax */
  push32((uint32_t)(EAX));
  /* 10567056 call 0x105671e0 */
  push32(0x1056705bu); f_105671e0();
  /* 1056705b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056705e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567061 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10567064 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10567067 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10567069 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1056706c jmp 0x10567076 */
  goto L_10567076;
L_1056706e:;
  /* 1056706e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10567071 jmp 0x105671a6 */
  goto L_105671a6;
L_10567076:;
  /* 10567076 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056707a je 0x10567086 */
  if (C.zf) goto L_10567086;
  /* 1056707c push 1 */
  push32((uint32_t)(0x1u));
  /* 1056707e call 0x10567500 */
  push32(0x10567083u); f_10567500();
  /* 10567083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10567086:;
  /* 10567086 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056708a jne 0x105670a3 */
  if (!C.zf) goto L_105670a3;
  /* 1056708c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567090 je 0x1056709c */
  if (C.zf) goto L_1056709c;
  /* 10567092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10567094 call 0x105675a0 */
  push32(0x10567099u); f_105675a0();
  /* 10567099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056709c:;
  /* 1056709c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056709e jmp 0x105671a6 */
  goto L_105671a6;
L_105670a3:;
  /* 105670a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105670a7 jne 0x105670c0 */
  if (!C.zf) goto L_105670c0;
  /* 105670a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105670ad je 0x105670b9 */
  if (C.zf) goto L_105670b9;
  /* 105670af push 1 */
  push32((uint32_t)(0x1u));
  /* 105670b1 call 0x105675a0 */
  push32(0x105670b6u); f_105675a0();
  /* 105670b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105670b9:;
  /* 105670b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 105670bb call 0x105632c0 */
  push32(0x105670c0u); f_105632c0();
L_105670c0:;
  /* 105670c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105670c4 je 0x105670d2 */
  if (C.zf) goto L_105670d2;
  /* 105670c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105670ca je 0x105670d2 */
  if (C.zf) goto L_105670d2;
  /* 105670cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105670d0 jne 0x105670fe */
  if (!C.zf) goto L_105670fe;
L_105670d2:;
  /* 105670d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105670d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 105670d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105670db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105670de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 105670e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105670e9 jne 0x105670fe */
  if (!C.zf) goto L_105670fe;
  /* 105670eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105670ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105670f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105670f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105670f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_105670fe:;
  /* 105670fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567102 jne 0x10567140 */
  if (!C.zf) goto L_10567140;
  /* 10567104 mov eax, dword ptr [0x1058dc78] */
  EAX = (r32((uint32_t)(0x1058dc78)));
  /* 10567109 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1056710c jmp 0x10567117 */
  goto L_10567117;
L_1056710e:;
  /* 1056710e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567111 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567114 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10567117:;
  /* 10567117 mov edx, dword ptr [0x1058dc78] */
  EDX = (r32((uint32_t)(0x1058dc78)));
  /* 1056711d add edx, dword ptr [0x1058dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567123 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567126 jge 0x1056713e */
  if ((C.sf==C.of)) goto L_1056713e;
  /* 10567128 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056712b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056712e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567131 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10567134 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1056713c jmp 0x1056710e */
  goto L_1056710e;
L_1056713e:;
  /* 1056713e jmp 0x10567149 */
  goto L_10567149;
L_10567140:;
  /* 10567140 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10567143 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10567149:;
  /* 10567149 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056714d je 0x10567159 */
  if (C.zf) goto L_10567159;
  /* 1056714f push 1 */
  push32((uint32_t)(0x1u));
  /* 10567151 call 0x105675a0 */
  push32(0x10567156u); f_105675a0();
  /* 10567156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10567159:;
  /* 10567159 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056715d jne 0x10567170 */
  if (!C.zf) goto L_10567170;
  /* 1056715f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567162 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10567165 push edx */
  push32((uint32_t)(EDX));
  /* 10567166 push 8 */
  push32((uint32_t)(0x8u));
  /* 10567168 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1056716bu);
  /* 1056716b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056716e jmp 0x1056717a */
  goto L_1056717a;
L_10567170:;
  /* 10567170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567173 push eax */
  push32((uint32_t)(EAX));
  /* 10567174 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10567177u);
  /* 10567177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056717a:;
  /* 1056717a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056717e je 0x1056718c */
  if (C.zf) goto L_1056718c;
  /* 10567180 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567184 je 0x1056718c */
  if (C.zf) goto L_1056718c;
  /* 10567186 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056718a jne 0x105671a4 */
  if (!C.zf) goto L_105671a4;
L_1056718c:;
  /* 1056718c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056718f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10567192 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10567195 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567199 jne 0x105671a4 */
  if (!C.zf) goto L_105671a4;
  /* 1056719b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056719e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105671a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_105671a4:;
  /* 105671a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105671a6:;
  /* 105671a6 mov esp, ebp */
  ESP = (EBP);
  /* 105671a8 pop ebp */
  EBP = (pop32());
  /* 105671a9 ret  */
  ESPCHK(0x10566fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x105671e0 (91 bytes, 35 insns) */
void f_105671e0(void) {
  FTRACE(0x105671e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105671e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105671e1 mov ebp, esp */
  EBP = (ESP);
  /* 105671e3 push ecx */
  push32((uint32_t)(ECX));
  /* 105671e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105671e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105671ea:;
  /* 105671ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105671ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105671f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105671f3 je 0x10567213 */
  if (C.zf) goto L_10567213;
  /* 105671f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105671f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105671fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105671fe mov ecx, dword ptr [0x1058dc84] */
  ECX = (r32((uint32_t)(0x1058dc84)));
  /* 10567204 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10567207 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056720a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056720c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056720f jae 0x10567213 */
  if (!C.cf) goto L_10567213;
  /* 10567211 jmp 0x105671ea */
  goto L_105671ea;
L_10567213:;
  /* 10567213 mov eax, dword ptr [0x1058dc84] */
  EAX = (r32((uint32_t)(0x1058dc84)));
  /* 10567218 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056721b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056721e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567220 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567223 jae 0x10567235 */
  if (!C.cf) goto L_10567235;
  /* 10567225 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567228 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1056722b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056722e jne 0x10567235 */
  if (!C.zf) goto L_10567235;
  /* 10567230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567233 jmp 0x10567237 */
  goto L_10567237;
L_10567235:;
  /* 10567235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10567237:;
  /* 10567237 mov esp, ebp */
  ESP = (EBP);
  /* 10567239 pop ebp */
  EBP = (pop32());
  /* 1056723a ret  */
  ESPCHK(0x105671e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x10567240 (13 bytes, 6 insns) */
void f_10567240(void) {
  FTRACE(0x10567240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567240 push ebp */
  push32((uint32_t)(EBP));
  /* 10567241 mov ebp, esp */
  EBP = (ESP);
  /* 10567243 call 0x10563540 */
  push32(0x10567248u); f_10563540();
  /* 10567248 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056724b pop ebp */
  EBP = (pop32());
  /* 1056724c ret  */
  ESPCHK(0x10567240u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x10567250 (13 bytes, 6 insns) */
void f_10567250(void) {
  FTRACE(0x10567250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567250 push ebp */
  push32((uint32_t)(EBP));
  /* 10567251 mov ebp, esp */
  EBP = (ESP);
  /* 10567253 call 0x10563540 */
  push32(0x10567258u); f_10563540();
  /* 10567258 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056725b pop ebp */
  EBP = (pop32());
  /* 1056725c ret  */
  ESPCHK(0x10567250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x10567260 (187 bytes, 54 insns) */
void f_10567260(void) {
  FTRACE(0x10567260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567260 push ebp */
  push32((uint32_t)(EBP));
  /* 10567261 mov ebp, esp */
  EBP = (ESP);
  /* 10567263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056726d cmp dword ptr [0x1058f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567274 jne 0x105672d3 */
  if (!C.zf) goto L_105672d3;
  /* 10567276 push 0x1058a3fc */
  push32((uint32_t)(0x1058a3fcu));
  /* 1056727b call dword ptr [0x105922f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f0))), 0x10567281u);
  /* 10567281 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10567284 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567288 je 0x105672a7 */
  if (C.zf) goto L_105672a7;
  /* 1056728a push 0x1058b000 */
  push32((uint32_t)(0x1058b000u));
  /* 1056728f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567292 push eax */
  push32((uint32_t)(EAX));
  /* 10567293 call dword ptr [0x105922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922ec))), 0x10567299u);
  /* 10567299 mov dword ptr [0x1058f690], eax */
  w32((uint32_t)(0x1058f690), (EAX));
  /* 1056729e cmp dword ptr [0x1058f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105672a5 jne 0x105672ab */
  if (!C.zf) goto L_105672ab;
L_105672a7:;
  /* 105672a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105672a9 jmp 0x10567317 */
  goto L_10567317;
L_105672ab:;
  /* 105672ab push 0x1058aff0 */
  push32((uint32_t)(0x1058aff0u));
  /* 105672b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105672b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105672b4 call dword ptr [0x105922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922ec))), 0x105672bau);
  /* 105672ba mov dword ptr [0x1058f694], eax */
  w32((uint32_t)(0x1058f694), (EAX));
  /* 105672bf push 0x1058afdc */
  push32((uint32_t)(0x1058afdcu));
  /* 105672c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105672c7 push edx */
  push32((uint32_t)(EDX));
  /* 105672c8 call dword ptr [0x105922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922ec))), 0x105672ceu);
  /* 105672ce mov dword ptr [0x1058f698], eax */
  w32((uint32_t)(0x1058f698), (EAX));
L_105672d3:;
  /* 105672d3 cmp dword ptr [0x1058f694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105672da je 0x105672e5 */
  if (C.zf) goto L_105672e5;
  /* 105672dc call dword ptr [0x1058f694] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f694))), 0x105672e2u);
  /* 105672e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105672e5:;
  /* 105672e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105672e9 je 0x10567301 */
  if (C.zf) goto L_10567301;
  /* 105672eb cmp dword ptr [0x1058f698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105672f2 je 0x10567301 */
  if (C.zf) goto L_10567301;
  /* 105672f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105672f7 push eax */
  push32((uint32_t)(EAX));
  /* 105672f8 call dword ptr [0x1058f698] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f698))), 0x105672feu);
  /* 105672fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10567301:;
  /* 10567301 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10567304 push ecx */
  push32((uint32_t)(ECX));
  /* 10567305 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567308 push edx */
  push32((uint32_t)(EDX));
  /* 10567309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056730c push eax */
  push32((uint32_t)(EAX));
  /* 1056730d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567310 push ecx */
  push32((uint32_t)(ECX));
  /* 10567311 call dword ptr [0x1058f690] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f690))), 0x10567317u);
L_10567317:;
  /* 10567317 mov esp, ebp */
  ESP = (EBP);
  /* 10567319 pop ebp */
  EBP = (pop32());
  /* 1056731a ret  */
  ESPCHK(0x10567260u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10567320 (254 bytes, 109 insns) */
void f_10567320(void) {
  FTRACE(0x10567320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567320 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10567324 push edi */
  push32((uint32_t)(EDI));
  /* 10567325 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10567327 je 0x105673a3 */
  if (C.zf) goto L_105673a3;
  /* 10567329 push esi */
  push32((uint32_t)(ESI));
  /* 1056732a push ebx */
  push32((uint32_t)(EBX));
  /* 1056732b mov ebx, ecx */
  EBX = (ECX);
  /* 1056732d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10567331 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10567337 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1056733b jne 0x10567344 */
  if (!C.zf) goto L_10567344;
  /* 1056733d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10567340 jne 0x105673b1 */
  if (!C.zf) goto L_105673b1;
  /* 10567342 jmp 0x10567365 */
  goto L_10567365;
L_10567344:;
  /* 10567344 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10567346 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10567347 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10567349 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1056734a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1056734b je 0x10567372 */
  if (C.zf) goto L_10567372;
  /* 1056734d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1056734f je 0x1056737a */
  if (C.zf) goto L_1056737a;
  /* 10567351 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10567357 jne 0x10567344 */
  if (!C.zf) goto L_10567344;
  /* 10567359 mov ebx, ecx */
  EBX = (ECX);
  /* 1056735b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056735e jne 0x105673b1 */
  if (!C.zf) goto L_105673b1;
L_10567360:;
  /* 10567360 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10567363 je 0x10567372 */
  if (C.zf) goto L_10567372;
L_10567365:;
  /* 10567365 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10567367 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10567368 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056736a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1056736b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1056736d je 0x1056739e */
  if (C.zf) goto L_1056739e;
  /* 1056736f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10567370 jne 0x10567365 */
  if (!C.zf) goto L_10567365;
L_10567372:;
  /* 10567372 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10567376 pop ebx */
  EBX = (pop32());
  /* 10567377 pop esi */
  ESI = (pop32());
  /* 10567378 pop edi */
  EDI = (pop32());
  /* 10567379 ret  */
  ESPCHK(0x10567320u, _esp0);
  ESP += 4; return;
L_1056737a:;
  /* 1056737a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10567380 je 0x10567394 */
  if (C.zf) goto L_10567394;
L_10567382:;
  /* 10567382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10567384 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10567385 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10567386 je 0x10567416 */
  if (C.zf) goto L_10567416;
  /* 1056738c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10567392 jne 0x10567382 */
  if (!C.zf) goto L_10567382;
L_10567394:;
  /* 10567394 mov ebx, ecx */
  EBX = (ECX);
  /* 10567396 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10567399 jne 0x10567407 */
  if (!C.zf) goto L_10567407;
L_1056739b:;
  /* 1056739b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056739d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1056739e:;
  /* 1056739e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1056739f jne 0x1056739b */
  if (!C.zf) goto L_1056739b;
  /* 105673a1 pop ebx */
  EBX = (pop32());
  /* 105673a2 pop esi */
  ESI = (pop32());
L_105673a3:;
  /* 105673a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105673a7 pop edi */
  EDI = (pop32());
  /* 105673a8 ret  */
  ESPCHK(0x10567320u, _esp0);
  ESP += 4; return;
L_105673a9:;
  /* 105673a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105673ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105673ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105673af je 0x10567360 */
  if (C.zf) goto L_10567360;
L_105673b1:;
  /* 105673b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105673b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 105673b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105673ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105673bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105673bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 105673c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105673c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105673c9 je 0x105673a9 */
  if (C.zf) goto L_105673a9;
  /* 105673cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105673cd je 0x105673fb */
  if (C.zf) goto L_105673fb;
  /* 105673cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 105673d1 je 0x105673f1 */
  if (C.zf) goto L_105673f1;
  /* 105673d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 105673d9 je 0x105673e7 */
  if (C.zf) goto L_105673e7;
  /* 105673db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 105673e1 jne 0x105673a9 */
  if (!C.zf) goto L_105673a9;
  /* 105673e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105673e5 jmp 0x105673ff */
  goto L_105673ff;
L_105673e7:;
  /* 105673e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105673ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105673ef jmp 0x105673ff */
  goto L_105673ff;
L_105673f1:;
  /* 105673f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105673f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105673f9 jmp 0x105673ff */
  goto L_105673ff;
L_105673fb:;
  /* 105673fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105673fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_105673ff:;
  /* 105673ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10567402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10567404 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10567405 je 0x10567411 */
  if (C.zf) goto L_10567411;
L_10567407:;
  /* 10567407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10567409:;
  /* 10567409 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1056740b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056740e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1056740f jne 0x10567409 */
  if (!C.zf) goto L_10567409;
L_10567411:;
  /* 10567411 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10567414 jne 0x1056739b */
  if (!C.zf) goto L_1056739b;
L_10567416:;
  /* 10567416 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1056741a pop ebx */
  EBX = (pop32());
  /* 1056741b pop esi */
  ESI = (pop32());
  /* 1056741c pop edi */
  EDI = (pop32());
  /* 1056741d ret  */
  ESPCHK(0x10567320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x10567420 (55 bytes, 16 insns) */
void f_10567420(void) {
  FTRACE(0x10567420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567420 push ebp */
  push32((uint32_t)(EBP));
  /* 10567421 mov ebp, esp */
  EBP = (ESP);
  /* 10567423 mov eax, dword ptr [0x1058db84] */
  EAX = (r32((uint32_t)(0x1058db84)));
  /* 10567428 push eax */
  push32((uint32_t)(EAX));
  /* 10567429 call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x1056742fu);
  /* 1056742f mov ecx, dword ptr [0x1058db74] */
  ECX = (r32((uint32_t)(0x1058db74)));
  /* 10567435 push ecx */
  push32((uint32_t)(ECX));
  /* 10567436 call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x1056743cu);
  /* 1056743c mov edx, dword ptr [0x1058db64] */
  EDX = (r32((uint32_t)(0x1058db64)));
  /* 10567442 push edx */
  push32((uint32_t)(EDX));
  /* 10567443 call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x10567449u);
  /* 10567449 mov eax, dword ptr [0x1058db44] */
  EAX = (r32((uint32_t)(0x1058db44)));
  /* 1056744e push eax */
  push32((uint32_t)(EAX));
  /* 1056744f call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x10567455u);
  /* 10567455 pop ebp */
  EBP = (pop32());
  /* 10567456 ret  */
  ESPCHK(0x10567420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007460 @ 0x10567460 (159 bytes, 47 insns) */
void f_10567460(void) {
  FTRACE(0x10567460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567460 push ebp */
  push32((uint32_t)(EBP));
  /* 10567461 mov ebp, esp */
  EBP = (ESP);
  /* 10567463 push ecx */
  push32((uint32_t)(ECX));
  /* 10567464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056746b jmp 0x10567476 */
  goto L_10567476;
L_1056746d:;
  /* 1056746d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10567476:;
  /* 10567476 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056747a jge 0x105674c9 */
  if ((C.sf==C.of)) goto L_105674c9;
  /* 1056747c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056747f cmp dword ptr [ecx*4 + 0x1058db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1058db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567487 je 0x105674c7 */
  if (C.zf) goto L_105674c7;
  /* 10567489 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056748d je 0x105674c7 */
  if (C.zf) goto L_105674c7;
  /* 1056748f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567493 je 0x105674c7 */
  if (C.zf) goto L_105674c7;
  /* 10567495 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567499 je 0x105674c7 */
  if (C.zf) goto L_105674c7;
  /* 1056749b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056749f je 0x105674c7 */
  if (C.zf) goto L_105674c7;
  /* 105674a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105674a4 mov eax, dword ptr [edx*4 + 0x1058db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1058db40)));
  /* 105674ab push eax */
  push32((uint32_t)(EAX));
  /* 105674ac call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x105674b2u);
  /* 105674b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105674b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105674b7 mov edx, dword ptr [ecx*4 + 0x1058db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1058db40)));
  /* 105674be push edx */
  push32((uint32_t)(EDX));
  /* 105674bf call 0x10564590 */
  push32(0x105674c4u); f_10564590();
  /* 105674c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105674c7:;
  /* 105674c7 jmp 0x1056746d */
  goto L_1056746d;
L_105674c9:;
  /* 105674c9 mov eax, dword ptr [0x1058db64] */
  EAX = (r32((uint32_t)(0x1058db64)));
  /* 105674ce push eax */
  push32((uint32_t)(EAX));
  /* 105674cf call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x105674d5u);
  /* 105674d5 mov ecx, dword ptr [0x1058db74] */
  ECX = (r32((uint32_t)(0x1058db74)));
  /* 105674db push ecx */
  push32((uint32_t)(ECX));
  /* 105674dc call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x105674e2u);
  /* 105674e2 mov edx, dword ptr [0x1058db84] */
  EDX = (r32((uint32_t)(0x1058db84)));
  /* 105674e8 push edx */
  push32((uint32_t)(EDX));
  /* 105674e9 call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x105674efu);
  /* 105674ef mov eax, dword ptr [0x1058db44] */
  EAX = (r32((uint32_t)(0x1058db44)));
  /* 105674f4 push eax */
  push32((uint32_t)(EAX));
  /* 105674f5 call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x105674fbu);
  /* 105674fb mov esp, ebp */
  ESP = (EBP);
  /* 105674fd pop ebp */
  EBP = (pop32());
  /* 105674fe ret  */
  ESPCHK(0x10567460u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x10567500 (151 bytes, 46 insns) */
void f_10567500(void) {
  FTRACE(0x10567500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567500 push ebp */
  push32((uint32_t)(EBP));
  /* 10567501 mov ebp, esp */
  EBP = (ESP);
  /* 10567503 push ecx */
  push32((uint32_t)(ECX));
  /* 10567504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567507 cmp dword ptr [eax*4 + 0x1058db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1058db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056750f jne 0x10567582 */
  if (!C.zf) goto L_10567582;
  /* 10567511 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10567516 push 0x1058b00c */
  push32((uint32_t)(0x1058b00cu));
  /* 1056751b push 2 */
  push32((uint32_t)(0x2u));
  /* 1056751d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1056751f call 0x10563b00 */
  push32(0x10567524u); f_10563b00();
  /* 10567524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567527 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056752a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056752e jne 0x1056753a */
  if (!C.zf) goto L_1056753a;
  /* 10567530 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10567532 call 0x10562a70 */
  push32(0x10567537u); f_10562a70();
  /* 10567537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056753a:;
  /* 1056753a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1056753c call 0x10567500 */
  push32(0x10567541u); f_10567500();
  /* 10567541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567544 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567547 cmp dword ptr [ecx*4 + 0x1058db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1058db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056754f jne 0x1056756a */
  if (!C.zf) goto L_1056756a;
  /* 10567551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567554 push edx */
  push32((uint32_t)(EDX));
  /* 10567555 call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x1056755bu);
  /* 1056755b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056755e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567561 mov dword ptr [eax*4 + 0x1058db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1058db40), (ECX));
  /* 10567568 jmp 0x10567578 */
  goto L_10567578;
L_1056756a:;
  /* 1056756a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056756c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056756f push edx */
  push32((uint32_t)(EDX));
  /* 10567570 call 0x10564590 */
  push32(0x10567575u); f_10564590();
  /* 10567575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10567578:;
  /* 10567578 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1056757a call 0x105675a0 */
  push32(0x1056757fu); f_105675a0();
  /* 1056757f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10567582:;
  /* 10567582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567585 mov ecx, dword ptr [eax*4 + 0x1058db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058db40)));
  /* 1056758c push ecx */
  push32((uint32_t)(ECX));
  /* 1056758d call dword ptr [0x10592370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592370))), 0x10567593u);
  /* 10567593 mov esp, ebp */
  ESP = (EBP);
  /* 10567595 pop ebp */
  EBP = (pop32());
  /* 10567596 ret  */
  ESPCHK(0x10567500u, _esp0);
  ESP += 4; return;
}

/* FUN_100075a0 @ 0x105675a0 (22 bytes, 8 insns) */
void f_105675a0(void) {
  FTRACE(0x105675a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105675a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105675a1 mov ebp, esp */
  EBP = (ESP);
  /* 105675a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105675a6 mov ecx, dword ptr [eax*4 + 0x1058db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1058db40)));
  /* 105675ad push ecx */
  push32((uint32_t)(ECX));
  /* 105675ae call dword ptr [0x1059235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059235c))), 0x105675b4u);
  /* 105675b4 pop ebp */
  EBP = (pop32());
  /* 105675b5 ret  */
  ESPCHK(0x105675a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075c0 @ 0x105675c0 (26 bytes, 10 insns) */
void f_105675c0(void) {
  FTRACE(0x105675c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105675c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105675c1 mov ebp, esp */
  EBP = (ESP);
  /* 105675c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105675c6 push eax */
  push32((uint32_t)(EAX));
  /* 105675c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105675c9 call dword ptr [0x10592374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592374))), 0x105675cfu);
  /* 105675cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 105675d4 call dword ptr [0x105922fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922fc))), 0x105675dau);
  /* 105675da pop ebp */
  EBP = (pop32());
  /* 105675db ret  */
  ESPCHK(0x105675c0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x105675e0 (446 bytes, 130 insns) */
void f_105675e0(void) {
  FTRACE(0x105675e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105675e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105675e1 mov ebp, esp */
  EBP = (ESP);
  /* 105675e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105675e6 call 0x10563540 */
  push32(0x105675ebu); f_10563540();
  /* 105675eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105675ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105675f1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 105675f4 push ecx */
  push32((uint32_t)(ECX));
  /* 105675f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105675f8 push edx */
  push32((uint32_t)(EDX));
  /* 105675f9 call 0x105677a0 */
  push32(0x105675feu); f_105677a0();
  /* 105675fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567601 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10567604 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567608 je 0x10567613 */
  if (C.zf) goto L_10567613;
  /* 1056760a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056760d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567611 jne 0x10567622 */
  if (!C.zf) goto L_10567622;
L_10567613:;
  /* 10567613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567616 push ecx */
  push32((uint32_t)(ECX));
  /* 10567617 call dword ptr [0x10592378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592378))), 0x1056761du);
  /* 1056761d jmp 0x1056779a */
  goto L_1056779a;
L_10567622:;
  /* 10567622 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567625 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567629 jne 0x1056763f */
  if (!C.zf) goto L_1056763f;
  /* 1056762b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056762e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10567635 mov eax, 1 */
  EAX = (0x1u);
  /* 1056763a jmp 0x1056779a */
  goto L_1056779a;
L_1056763f:;
  /* 1056763f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567642 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567646 jne 0x10567650 */
  if (!C.zf) goto L_10567650;
  /* 10567648 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056764b jmp 0x1056779a */
  goto L_1056779a;
L_10567650:;
  /* 10567650 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567653 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10567656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10567659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056765c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1056765f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10567662 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567668 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1056766b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056766e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567672 jne 0x10567777 */
  if (!C.zf) goto L_10567777;
  /* 10567678 mov eax, dword ptr [0x1058dc78] */
  EAX = (r32((uint32_t)(0x1058dc78)));
  /* 1056767d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10567680 jmp 0x1056768b */
  goto L_1056768b;
L_10567682:;
  /* 10567682 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10567685 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567688 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1056768b:;
  /* 1056768b mov edx, dword ptr [0x1058dc78] */
  EDX = (r32((uint32_t)(0x1058dc78)));
  /* 10567691 add edx, dword ptr [0x1058dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1058dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567697 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056769a jge 0x105676b2 */
  if ((C.sf==C.of)) goto L_105676b2;
  /* 1056769c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056769f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105676a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105676a5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105676a8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 105676b0 jmp 0x10567682 */
  goto L_10567682;
L_105676b2:;
  /* 105676b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105676b5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105676b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105676bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105676be cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105676c4 jne 0x105676d5 */
  if (!C.zf) goto L_105676d5;
  /* 105676c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105676c9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 105676d0 jmp 0x1056775d */
  goto L_1056775d;
L_105676d5:;
  /* 105676d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105676d8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105676de jne 0x105676ec */
  if (!C.zf) goto L_105676ec;
  /* 105676e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105676e3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 105676ea jmp 0x1056775d */
  goto L_1056775d;
L_105676ec:;
  /* 105676ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105676ef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105676f5 jne 0x10567703 */
  if (!C.zf) goto L_10567703;
  /* 105676f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105676fa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10567701 jmp 0x1056775d */
  goto L_1056775d;
L_10567703:;
  /* 10567703 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567706 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056770c jne 0x1056771a */
  if (!C.zf) goto L_1056771a;
  /* 1056770e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567711 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10567718 jmp 0x1056775d */
  goto L_1056775d;
L_1056771a:;
  /* 1056771a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056771d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567723 jne 0x10567731 */
  if (!C.zf) goto L_10567731;
  /* 10567725 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567728 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1056772f jmp 0x1056775d */
  goto L_1056775d;
L_10567731:;
  /* 10567731 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567734 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056773a jne 0x10567748 */
  if (!C.zf) goto L_10567748;
  /* 1056773c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056773f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10567746 jmp 0x1056775d */
  goto L_1056775d;
L_10567748:;
  /* 10567748 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056774b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567751 jne 0x1056775d */
  if (!C.zf) goto L_1056775d;
  /* 10567753 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567756 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1056775d:;
  /* 1056775d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567760 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10567763 push edx */
  push32((uint32_t)(EDX));
  /* 10567764 push 8 */
  push32((uint32_t)(0x8u));
  /* 10567766 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10567769u);
  /* 10567769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056776c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056776f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567772 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10567775 jmp 0x1056778e */
  goto L_1056778e;
L_10567777:;
  /* 10567777 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056777a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10567781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567784 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10567787 push ecx */
  push32((uint32_t)(ECX));
  /* 10567788 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1056778bu);
  /* 1056778b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056778e:;
  /* 1056778e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567791 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10567794 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10567797 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1056779a:;
  /* 1056779a mov esp, ebp */
  ESP = (EBP);
  /* 1056779c pop ebp */
  EBP = (pop32());
  /* 1056779d ret  */
  ESPCHK(0x105675e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x105677a0 (89 bytes, 35 insns) */
void f_105677a0(void) {
  FTRACE(0x105677a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105677a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105677a1 mov ebp, esp */
  EBP = (ESP);
  /* 105677a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105677a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105677a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105677aa:;
  /* 105677aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105677ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105677af cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105677b2 je 0x105677d2 */
  if (C.zf) goto L_105677d2;
  /* 105677b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105677b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105677ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105677bd mov ecx, dword ptr [0x1058dc84] */
  ECX = (r32((uint32_t)(0x1058dc84)));
  /* 105677c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105677c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105677c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105677cb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105677ce jae 0x105677d2 */
  if (!C.cf) goto L_105677d2;
  /* 105677d0 jmp 0x105677aa */
  goto L_105677aa;
L_105677d2:;
  /* 105677d2 mov eax, dword ptr [0x1058dc84] */
  EAX = (r32((uint32_t)(0x1058dc84)));
  /* 105677d7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105677da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105677dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105677df cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105677e2 jae 0x105677ee */
  if (!C.cf) goto L_105677ee;
  /* 105677e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105677e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105677e9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105677ec je 0x105677f2 */
  if (C.zf) goto L_105677f2;
L_105677ee:;
  /* 105677ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105677f0 jmp 0x105677f5 */
  goto L_105677f5;
L_105677f2:;
  /* 105677f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105677f5:;
  /* 105677f5 mov esp, ebp */
  ESP = (EBP);
  /* 105677f7 pop ebp */
  EBP = (pop32());
  /* 105677f8 ret  */
  ESPCHK(0x105677a0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10567800 (48 bytes, 17 insns) */
void f_10567800(void) {
  FTRACE(0x10567800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567800 push ebp */
  push32((uint32_t)(EBP));
  /* 10567801 mov ebp, esp */
  EBP = (ESP);
  /* 10567803 push ecx */
  push32((uint32_t)(ECX));
  /* 10567804 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567806 call 0x10567500 */
  push32(0x1056780bu); f_10567500();
  /* 1056780b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056780e mov eax, dword ptr [0x1058f704] */
  EAX = (r32((uint32_t)(0x1058f704)));
  /* 10567813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10567816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567819 mov dword ptr [0x1058f704], ecx */
  w32((uint32_t)(0x1058f704), (ECX));
  /* 1056781f push 9 */
  push32((uint32_t)(0x9u));
  /* 10567821 call 0x105675a0 */
  push32(0x10567826u); f_105675a0();
  /* 10567826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056782c mov esp, ebp */
  ESP = (EBP);
  /* 1056782e pop ebp */
  EBP = (pop32());
  /* 1056782f ret  */
  ESPCHK(0x10567800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007830 @ 0x10567830 (10 bytes, 5 insns) */
void f_10567830(void) {
  FTRACE(0x10567830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567830 push ebp */
  push32((uint32_t)(EBP));
  /* 10567831 mov ebp, esp */
  EBP = (ESP);
  /* 10567833 mov eax, dword ptr [0x1058f704] */
  EAX = (r32((uint32_t)(0x1058f704)));
  /* 10567838 pop ebp */
  EBP = (pop32());
  /* 10567839 ret  */
  ESPCHK(0x10567830u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10567840 (45 bytes, 19 insns) */
void f_10567840(void) {
  FTRACE(0x10567840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567840 push ebp */
  push32((uint32_t)(EBP));
  /* 10567841 mov ebp, esp */
  EBP = (ESP);
  /* 10567843 push ecx */
  push32((uint32_t)(ECX));
  /* 10567844 mov eax, dword ptr [0x1058f704] */
  EAX = (r32((uint32_t)(0x1058f704)));
  /* 10567849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056784c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567850 je 0x10567860 */
  if (C.zf) goto L_10567860;
  /* 10567852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567855 push ecx */
  push32((uint32_t)(ECX));
  /* 10567856 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10567859u);
  /* 10567859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056785c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056785e jne 0x10567864 */
  if (!C.zf) goto L_10567864;
L_10567860:;
  /* 10567860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10567862 jmp 0x10567869 */
  goto L_10567869;
L_10567864:;
  /* 10567864 mov eax, 1 */
  EAX = (0x1u);
L_10567869:;
  /* 10567869 mov esp, ebp */
  ESP = (EBP);
  /* 1056786b pop ebp */
  EBP = (pop32());
  /* 1056786c ret  */
  ESPCHK(0x10567840u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10567870 (88 bytes, 40 insns) */
void f_10567870(void) {
  FTRACE(0x10567870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567870 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10567874 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10567878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056787a je 0x105678c3 */
  if (C.zf) goto L_105678c3;
  /* 1056787c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056787e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10567882 push edi */
  push32((uint32_t)(EDI));
  /* 10567883 mov edi, ecx */
  EDI = (ECX);
  /* 10567885 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567888 jb 0x105678b7 */
  if (C.cf) goto L_105678b7;
  /* 1056788a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056788c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1056788f je 0x10567899 */
  if (C.zf) goto L_10567899;
  /* 10567891 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10567893:;
  /* 10567893 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10567895 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10567896 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10567897 jne 0x10567893 */
  if (!C.zf) goto L_10567893;
L_10567899:;
  /* 10567899 mov ecx, eax */
  ECX = (EAX);
  /* 1056789b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1056789e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105678a0 mov ecx, eax */
  ECX = (EAX);
  /* 105678a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105678a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105678a7 mov ecx, edx */
  ECX = (EDX);
  /* 105678a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105678ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105678af je 0x105678b7 */
  if (C.zf) goto L_105678b7;
  /* 105678b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105678b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105678b5 je 0x105678bd */
  if (C.zf) goto L_105678bd;
L_105678b7:;
  /* 105678b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105678b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105678ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 105678bb jne 0x105678b7 */
  if (!C.zf) goto L_105678b7;
L_105678bd:;
  /* 105678bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105678c1 pop edi */
  EDI = (pop32());
  /* 105678c2 ret  */
  ESPCHK(0x10567870u, _esp0);
  ESP += 4; return;
L_105678c3:;
  /* 105678c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 105678c7 ret  */
  ESPCHK(0x10567870u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x105678d0 (23 bytes, 10 insns) */
void f_105678d0(void) {
  FTRACE(0x105678d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105678d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105678d1 mov ebp, esp */
  EBP = (ESP);
  /* 105678d3 mov eax, dword ptr [0x1058f700] */
  EAX = (r32((uint32_t)(0x1058f700)));
  /* 105678d8 push eax */
  push32((uint32_t)(EAX));
  /* 105678d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105678dc push ecx */
  push32((uint32_t)(ECX));
  /* 105678dd call 0x105678f0 */
  push32(0x105678e2u); f_105678f0();
  /* 105678e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105678e5 pop ebp */
  EBP = (pop32());
  /* 105678e6 ret  */
  ESPCHK(0x105678d0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x105678f0 (87 bytes, 34 insns) */
void f_105678f0(void) {
  FTRACE(0x105678f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105678f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105678f1 mov ebp, esp */
  EBP = (ESP);
  /* 105678f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105678f4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105678f8 jbe 0x105678fe */
  if ((C.cf||C.zf)) goto L_105678fe;
  /* 105678fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105678fc jmp 0x10567943 */
  goto L_10567943;
L_105678fe:;
  /* 105678fe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567902 ja 0x10567915 */
  if ((!C.cf&&!C.zf)) goto L_10567915;
  /* 10567904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567907 push eax */
  push32((uint32_t)(EAX));
  /* 10567908 call 0x10567950 */
  push32(0x1056790du); f_10567950();
  /* 1056790d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10567913 jmp 0x1056791c */
  goto L_1056791c;
L_10567915:;
  /* 10567915 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1056791c:;
  /* 1056791c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567920 jne 0x10567928 */
  if (!C.zf) goto L_10567928;
  /* 10567922 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567926 jne 0x1056792d */
  if (!C.zf) goto L_1056792d;
L_10567928:;
  /* 10567928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056792b jmp 0x10567943 */
  goto L_10567943;
L_1056792d:;
  /* 1056792d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567930 push ecx */
  push32((uint32_t)(ECX));
  /* 10567931 call 0x10567840 */
  push32(0x10567936u); f_10567840();
  /* 10567936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056793b jne 0x10567941 */
  if (!C.zf) goto L_10567941;
  /* 1056793d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056793f jmp 0x10567943 */
  goto L_10567943;
L_10567941:;
  /* 10567941 jmp 0x105678fe */
  goto L_105678fe;
L_10567943:;
  /* 10567943 mov esp, ebp */
  ESP = (EBP);
  /* 10567945 pop ebp */
  EBP = (pop32());
  /* 10567946 ret  */
  ESPCHK(0x105678f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x10567950 (109 bytes, 37 insns) */
void f_10567950(void) {
  FTRACE(0x10567950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567950 push ebp */
  push32((uint32_t)(EBP));
  /* 10567951 mov ebp, esp */
  EBP = (ESP);
  /* 10567953 push ecx */
  push32((uint32_t)(ECX));
  /* 10567954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567957 cmp eax, dword ptr [0x1058dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056795d ja 0x1056798d */
  if ((!C.cf&&!C.zf)) goto L_1056798d;
  /* 1056795f push 9 */
  push32((uint32_t)(0x9u));
  /* 10567961 call 0x10567500 */
  push32(0x10567966u); f_10567500();
  /* 10567966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056796c push ecx */
  push32((uint32_t)(ECX));
  /* 1056796d call 0x10568490 */
  push32(0x10567972u); f_10568490();
  /* 10567972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10567978 push 9 */
  push32((uint32_t)(0x9u));
  /* 1056797a call 0x105675a0 */
  push32(0x1056797fu); f_105675a0();
  /* 1056797f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567986 je 0x1056798d */
  if (C.zf) goto L_1056798d;
  /* 10567988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056798b jmp 0x105679b9 */
  goto L_105679b9;
L_1056798d:;
  /* 1056798d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567991 jne 0x1056799a */
  if (!C.zf) goto L_1056799a;
  /* 10567993 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1056799a:;
  /* 1056799a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056799d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105679a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105679a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105679a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105679a9 push eax */
  push32((uint32_t)(EAX));
  /* 105679aa push 0 */
  push32((uint32_t)(0x0u));
  /* 105679ac mov ecx, dword ptr [0x10590ecc] */
  ECX = (r32((uint32_t)(0x10590ecc)));
  /* 105679b2 push ecx */
  push32((uint32_t)(ECX));
  /* 105679b3 call dword ptr [0x1059237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059237c))), 0x105679b9u);
L_105679b9:;
  /* 105679b9 mov esp, ebp */
  ESP = (EBP);
  /* 105679bb pop ebp */
  EBP = (pop32());
  /* 105679bc ret  */
  ESPCHK(0x10567950u, _esp0);
  ESP += 4; return;
}

/* FUN_100079c0 @ 0x105679c0 (10 bytes, 5 insns) */
void f_105679c0(void) {
  FTRACE(0x105679c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105679c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105679c1 mov ebp, esp */
  EBP = (ESP);
  /* 105679c3 mov eax, 1 */
  EAX = (0x1u);
  /* 105679c8 pop ebp */
  EBP = (pop32());
  /* 105679c9 ret  */
  ESPCHK(0x105679c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x105679d0 (173 bytes, 59 insns) */
void f_105679d0(void) {
  FTRACE(0x105679d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105679d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105679d1 mov ebp, esp */
  EBP = (ESP);
  /* 105679d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105679d6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105679da jbe 0x105679e3 */
  if ((C.cf||C.zf)) goto L_105679e3;
  /* 105679dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105679de jmp 0x10567a79 */
  goto L_10567a79;
L_105679e3:;
  /* 105679e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 105679e5 call 0x10567500 */
  push32(0x105679eau); f_10567500();
  /* 105679ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105679ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105679f0 push eax */
  push32((uint32_t)(EAX));
  /* 105679f1 call 0x10567e00 */
  push32(0x105679f6u); f_10567e00();
  /* 105679f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105679f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105679fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567a00 je 0x10567a41 */
  if (C.zf) goto L_10567a41;
  /* 10567a02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10567a09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567a0c cmp ecx, dword ptr [0x1058dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1058dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567a12 ja 0x10567a32 */
  if ((!C.cf&&!C.zf)) goto L_10567a32;
  /* 10567a14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567a17 push edx */
  push32((uint32_t)(EDX));
  /* 10567a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567a1b push eax */
  push32((uint32_t)(EAX));
  /* 10567a1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567a1f push ecx */
  push32((uint32_t)(ECX));
  /* 10567a20 call 0x10568cd0 */
  push32(0x10567a25u); f_10568cd0();
  /* 10567a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10567a2a je 0x10567a32 */
  if (C.zf) goto L_10567a32;
  /* 10567a2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567a2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10567a32:;
  /* 10567a32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567a34 call 0x105675a0 */
  push32(0x10567a39u); f_105675a0();
  /* 10567a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567a3f jmp 0x10567a79 */
  goto L_10567a79;
L_10567a41:;
  /* 10567a41 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567a43 call 0x105675a0 */
  push32(0x10567a48u); f_105675a0();
  /* 10567a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567a4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567a4f jne 0x10567a58 */
  if (!C.zf) goto L_10567a58;
  /* 10567a51 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10567a58:;
  /* 10567a58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567a5b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567a5e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10567a60 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10567a63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567a66 push ecx */
  push32((uint32_t)(ECX));
  /* 10567a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567a6a push edx */
  push32((uint32_t)(EDX));
  /* 10567a6b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10567a6d mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 10567a72 push eax */
  push32((uint32_t)(EAX));
  /* 10567a73 call dword ptr [0x10592380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592380))), 0x10567a79u);
L_10567a79:;
  /* 10567a79 mov esp, ebp */
  ESP = (EBP);
  /* 10567a7b pop ebp */
  EBP = (pop32());
  /* 10567a7c ret  */
  ESPCHK(0x105679d0u, _esp0);
  ESP += 4; return;
}

